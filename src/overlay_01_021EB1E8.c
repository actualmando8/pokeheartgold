/* Decompiled from asm/overlay_01_021EB1E8.s */
#include "global.h"

void ov01_021EB1E8(void) {
    // mov r1, #0x62
    // mov r2, #1
    // lsl r1, r1, #2
    // str r2, [r0, r1]
    // bx lr
    // TODO: decompile
}


void ov01_021EB1F4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #4
    // mov r1, #0x18
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r2, r4, #0
    // mov r1, #0x18
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _021EB208
    // add r0, r5, #0
    // bl ov01_021EB64C
    // str r0, [r4]
    // mov r1, #0
    // str r1, [r4, #4]
    // str r1, [r4, #8]
    // mov r0, #6
    // str r0, [r4, #0xc]
    // str r1, [r4, #0x14]
    // mov r0, #0xe
    // str r0, [r4, #0x10]
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EB234(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _021EB242
    // bl SysTask_Destroy
    // add r0, r4, #0
    // bl ov01_021EB68C
    // add r2, r4, #0
    // mov r1, #0x18
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _021EB24E
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021EB260(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // add r4, r1, #0
    // cmp r0, #6
    // beq _021EB270
    // bl GF_AssertFail
    // cmp r4, #0xe
    // blt _021EB278
    // bl GF_AssertFail
    // ldr r2, [r5, #4]
    // cmp r2, r4
    // beq _021EB2B4
    // ldr r0, [r5]
    // mov r1, #8
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB28E
    // bl GF_AssertFail
    // ldr r0, [r5]
    // mov r1, #0
    // add r2, r4, #0
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB2A0
    // bl GF_AssertFail
    // ldr r0, [r5]
    // mov r1, #3
    // add r2, r4, #0
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB2B2
    // bl GF_AssertFail
    // str r4, [r5, #4]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void FieldWeatherUpdate_UsedFlash(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #0xe
    // blt _021EB2C6
    // bl GF_AssertFail
    // ldr r0, [r5, #0xc]
    // cmp r0, #6
    // beq _021EB2D2
    // str r4, [r5, #0x10]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #4]
    // cmp r0, r4
    // bne _021EB2DC
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // beq _021EB2E6
    // bl GF_AssertFail
    // str r4, [r5, #8]
    // ldr r0, [r5, #4]
    // add r1, r4, #0
    // bl ov01_021EB4B4
    // cmp r0, #0
    // bne _021EB302
    // ldr r0, _021EB314 ; =ov01_021EB320
    // mov r2, #0
    // add r1, r5, #0
    // str r2, [r5, #0xc]
    // bl SysTask_CreateOnMainQueue
    // b _021EB30E
    // ldr r0, _021EB318 ; =ov01_021EB3F0
    // mov r2, #0
    // add r1, r5, #0
    // str r2, [r5, #0xc]
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #0x14]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021EB314: .word ov01_021EB320
    // _021EB318: .word ov01_021EB3F0
    // TODO: decompile
}


void ov01_021EB31C(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}


void ov01_021EB320(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #5
    // bhi _021EB3EE
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EB336: ; jump table
    // ldr r0, [r4]
    // ldr r2, [r4, #4]
    // mov r1, #5
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB354
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // bl ov01_021EB804
    // cmp r0, #3
    // beq _021EB3EE
    // ldr r0, [r4]
    // ldr r2, [r4, #4]
    // mov r1, #8
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB37A
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // ldr r0, [r4]
    // ldr r2, [r4, #8]
    // mov r1, #1
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB394
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // ldr r0, [r4]
    // ldr r1, [r4, #8]
    // bl ov01_021EB804
    // cmp r0, #1
    // beq _021EB3EE
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // ldr r0, [r4]
    // ldr r2, [r4, #8]
    // mov r1, #2
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB3C2
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #8]
    // str r0, [r4, #4]
    // mov r0, #0
    // str r0, [r4, #8]
    // pop {r4, pc}
    // mov r1, #6
    // str r1, [r4, #0xc]
    // mov r1, #0
    // str r1, [r4, #0x14]
    // bl SysTask_Destroy
    // ldr r1, [r4, #0x10]
    // cmp r1, #0xe
    // beq _021EB3EE
    // add r0, r4, #0
    // bl FieldWeatherUpdate_UsedFlash
    // mov r0, #0xe
    // str r0, [r4, #0x10]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021EB3F0(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #4
    // bhi _021EB4B2
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EB406: ; jump table
    // ldr r0, [r4]
    // ldr r2, [r4, #8]
    // mov r1, #1
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB422
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // ldr r0, [r4]
    // ldr r1, [r4, #8]
    // bl ov01_021EB804
    // cmp r0, #1
    // beq _021EB4B2
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // ldr r0, [r4]
    // ldr r2, [r4, #4]
    // mov r1, #7
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB450
    // bl GF_AssertFail
    // ldr r0, [r4]
    // ldr r2, [r4, #8]
    // mov r1, #4
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB462
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // bl ov01_021EB804
    // cmp r0, #3
    // beq _021EB4B2
    // ldr r0, [r4]
    // ldr r2, [r4, #4]
    // mov r1, #8
    // bl ov01_021EB700
    // cmp r0, #0
    // bne _021EB488
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // ldr r1, [r4, #8]
    // mov r2, #0
    // str r1, [r4, #4]
    // str r2, [r4, #8]
    // mov r1, #6
    // str r1, [r4, #0xc]
    // str r2, [r4, #0x14]
    // bl SysTask_Destroy
    // ldr r1, [r4, #0x10]
    // cmp r1, #0xe
    // beq _021EB4B2
    // add r0, r4, #0
    // bl FieldWeatherUpdate_UsedFlash
    // mov r0, #0xe
    // str r0, [r4, #0x10]
    // pop {r4, pc}
    // TODO: decompile
}


u8 ov01_021EB4B4(void) {
    return 0;
}


void ov01_021EB4B8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // ldr r1, _021EB564 ; =0xFFFFF000
    // add r6, r0, #0
    // add r0, #0x14
    // bl GF_InitG2dRenderer
    // mov r0, #0
    // add r3, r6, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0xff
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x14]
    // mov r0, #3
    // lsl r0, r0, #0x12
    // str r0, [sp, #0x18]
    // add r0, r6, #0
    // add r0, #0xac
    // add r1, sp, #0xc
    // mov r2, #1
    // add r3, #0x14
    // bl sub_0200B27C
    // mov r4, #0
    // add r5, r6, #0
    // mov r7, #0xe
    // add r0, r7, #0
    // add r1, r4, #0
    // mov r2, #4
    // bl Create2DGfxResObjMan
    // add r4, r4, #1
    // stmia r5!, {r0}
    // cmp r4, #4
    // blt _021EB4EE
    // bl GF2DGfxResHeader_sizeof
    // add r1, r0, #0
    // mov r0, #4
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // str r0, [r6, #0x10]
    // mov r1, #0
    // mov r2, #0x39
    // bl ov01_021EB578
    // ldr r0, [r6, #0x10]
    // mov r1, #1
    // mov r2, #0x3a
    // bl ov01_021EB578
    // ldr r0, [r6, #0x10]
    // mov r1, #2
    // mov r2, #0x37
    // bl ov01_021EB578
    // ldr r0, [r6, #0x10]
    // mov r1, #3
    // mov r2, #0x38
    // bl ov01_021EB578
    // mov r0, #0x40
    // str r0, [sp]
    // add r0, r6, #0
    // add r0, #0x14
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // add r0, sp, #0
    // bl SpriteList_Create
    // add r1, r6, #0
    // add r1, #0xf4
    // str r0, [r1]
    // ldr r0, _021EB568 ; =ov01_021EB56C
    // add r1, r6, #0
    // mov r2, #0xa
    // bl SysTask_CreateOnMainQueue
    // add r6, #0xf8
    // str r0, [r6]
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021EB564: .word 0xFFFFF000
    // _021EB568: .word ov01_021EB56C
    // TODO: decompile
}


void ov01_021EB56C(void) {
    SpriteList_RenderAndAnimateSprites();
}


void ov01_021EB578(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // bl GF2DGfxResHeader_GetByIndex
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x3f
    // add r1, r5, #0
    // mov r2, #0
    // mov r3, #4
    // bl GfGfxLoader_LoadFromNarc
    // add r5, r0, #0
    // add r1, r4, #0
    // mov r2, #4
    // bl GF2DGfxResHeader_Init
    // add r0, r5, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EB5A4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r6, #0x10]
    // add r1, r4, #0
    // bl GF2DGfxResHeader_GetByIndex
    // bl GF2DGfxResHeader_Reset
    // ldr r0, [r5]
    // bl Destroy2DGfxResObjMan
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _021EB5AC
    // ldr r0, [r6, #0x10]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r6, #0x10]
    // add r0, r6, #0
    // add r0, #0xf4
    // ldr r0, [r0]
    // bl SpriteList_Delete
    // add r0, r6, #0
    // mov r1, #0
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, r6, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl SysTask_Destroy
    // mov r0, #0
    // add r6, #0xf8
    // str r0, [r6]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021EB5F4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // ldr r1, _021EB644 ; =0x0013F000
    // cmp r0, r1
    // ble _021EB60A
    // bl _s32_div_f
    // str r1, [r4]
    // b _021EB614
    // ldr r2, _021EB648 ; =0xFFFC0000
    // cmp r0, r2
    // bge _021EB614
    // add r0, r0, r1
    // str r0, [r4]
    // mov r1, #1
    // ldr r3, [r4, #4]
    // lsl r1, r1, #0x14
    // cmp r3, r1
    // ble _021EB62E
    // lsr r2, r3, #0x1f
    // lsl r1, r3, #0xc
    // sub r1, r1, r2
    // mov r0, #0xc
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r4, #4]
    // b _021EB638
    // ldr r0, _021EB648 ; =0xFFFC0000
    // cmp r3, r0
    // bge _021EB638
    // add r0, r3, r1
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl Sprite_SetMatrix
    // pop {r3, r4, r5, pc}
    // nop
    // _021EB644: .word 0x0013F000
    // _021EB648: .word 0xFFFC0000
    // TODO: decompile
}


void ov01_021EB64C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x43
    // add r5, r0, #0
    // mov r0, #4
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0x41
    // lsl r0, r0, #2
    // str r5, [r4, r0]
    // add r0, r4, #0
    // add r0, #8
    // bl ov01_021EB4B8
    // ldr r0, _021EB684 ; =ov01_022098B0
    // mov r1, #4
    // str r0, [r4]
    // ldr r0, _021EB688 ; =ov01_0220675C
    // str r0, [r4, #4]
    // mov r0, #0x3f ; NARC_a_0_6_3
    // bl NARC_New
    // mov r1, #0x42
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021EB684: .word ov01_022098B0
    // _021EB688: .word ov01_0220675C
    // TODO: decompile
}


void ov01_021EB68C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021EB6F6
    // mov r5, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov01_021EBB90
    // add r5, r5, #1
    // cmp r5, #0xe
    // blt _021EB69A
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // mov r0, #0x41
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // ldr r0, [r0, #0x4c]
    // add r3, r2, #0
    // bl ov01_021EA864
    // ldr r1, _021EB6FC ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #1
    // orr r0, r2
    // strh r0, [r1]
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4]
    // add r0, #8
    // bl ov01_021EB5A4
    // mov r0, #0x42
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl NARC_Delete
    // ldr r1, [r4]
    // mov r0, #4
    // bl Heap_FreeExplicit
    // mov r0, #0
    // str r0, [r4]
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021EB6FC: .word 0x04000008
    // TODO: decompile
}


void ov01_021EB700(void) {
    // push {r4, r5, r6, lr}
    // add r4, r2, #0
    // add r5, r0, #0
    // mov r6, #1
    // cmp r4, #0xe
    // ble _021EB710
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // cmp r1, #0xa
    // bhi _021EB7FA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EB720: ; jump table
    // add r1, r4, #0
    // bl ov01_021EB9A8
    // add r6, r0, #0
    // b _021EB7FA
    // add r1, r4, #0
    // bl ov01_021EBA08
    // add r6, r0, #0
    // b _021EB7FA
    // add r1, r4, #0
    // mov r2, #0
    // add r3, r6, #0
    // bl ov01_021EBA44
    // add r6, r0, #0
    // b _021EB7FA
    // add r1, r4, #0
    // mov r2, #2
    // add r3, r6, #0
    // bl ov01_021EBA44
    // add r6, r0, #0
    // b _021EB7FA
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r0, [r0, #0x4c]
    // bl ov01_021EA854
    // cmp r0, #1
    // bne _021EB786
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // mov r3, #2
    // bl ov01_021EBA44
    // add r6, r0, #0
    // b _021EB7FA
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // add r3, r6, #0
    // bl ov01_021EBA44
    // add r6, r0, #0
    // b _021EB7FA
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov01_021EBB40
    // b _021EB7FA
    // add r1, r4, #0
    // bl ov01_021EBB68
    // b _021EB7FA
    // add r1, r4, #0
    // mov r2, #0
    // bl ov01_021EBB40
    // b _021EB7FA
    // add r1, r4, #0
    // bl ov01_021EBB90
    // b _021EB7FA
    // mov r0, #0x1c
    // ldr r1, [r5]
    // mul r0, r4
    // add r0, r1, r0
    // ldr r2, [r0, #8]
    // cmp r2, #0
    // beq _021EB7FA
    // ldr r0, _021EB800 ; =0x00000F5C
    // ldr r1, [r2, r0]
    // cmp r1, #1
    // bne _021EB7FA
    // add r0, r0, #4
    // ldrh r0, [r2, r0]
    // bl PlaySE
    // b _021EB7FA
    // mov r0, #0x1c
    // ldr r1, [r5]
    // mul r0, r4
    // add r0, r1, r0
    // ldr r2, [r0, #8]
    // cmp r2, #0
    // beq _021EB7FA
    // ldr r0, _021EB800 ; =0x00000F5C
    // ldr r1, [r2, r0]
    // cmp r1, #1
    // bne _021EB7FA
    // add r0, r0, #4
    // ldrh r0, [r2, r0]
    // mov r1, #0
    // bl StopSE
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _021EB800: .word 0x00000F5C
    // TODO: decompile
}


void ov01_021EB804(void) {
    // cmp r1, #0xe
    // blt _021EB80C
    // mov r0, #0
    // bx lr
    // ldr r2, [r0]
    // mov r0, #0x1c
    // mul r0, r1
    // add r0, r2, r0
    // ldrh r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}


void ov01_021EB818(void) {
    G2x_SetBlendAlpha_(4, 0x21);
}


void ov01_021EB830(void) {
    // str r1, [r0]
    // str r1, [r0, #4]
    // sub r1, r2, r1
    // str r1, [r0, #8]
    // str r3, [r0, #0x10]
    // mov r1, #0
    // str r1, [r0, #0xc]
    // bx lr
    // TODO: decompile
}


void ov01_021EB840(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #8]
    // ldr r0, [r4, #0xc]
    // mul r0, r1
    // ldr r1, [r4, #0x10]
    // bl _s32_div_f
    // ldr r1, [r4, #4]
    // add r0, r0, r1
    // str r0, [r4]
    // ldr r0, [r4, #0xc]
    // ldr r1, [r4, #0x10]
    // add r0, r0, #1
    // cmp r0, r1
    // bgt _021EB866
    // str r0, [r4, #0xc]
    // mov r0, #0
    // pop {r4, pc}
    // str r1, [r4, #0xc]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021EB86C(void) {
    ov01_021EBEF0();
    ov01_021EBF24(r5, r4, r6);
    ov01_021EBF58(r5, r4, r6);
    ov01_021EBF94(r5, r4, r6);
}


void ov01_021EB898(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r4, r2, #0
    // add r6, r1, #0
    // add r7, r3, #0
    // ldr r5, [sp, #0x40]
    // bl GF2DGfxResHeader_GetByIndex
    // str r0, [sp, #0x18]
    // add r1, r4, #0
    // bl GF2DGfxResHeader_GetNarcMemberIdByIndex
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r1, r4, #0
    // bl GF2DGfxResHeader_GetCompressFlagByIndex
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // add r1, r4, #0
    // bl GF2DGfxResHeader_GetExDat0ByIndex
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // add r1, r4, #0
    // bl GF2DGfxResHeader_GetExDat1ByIndex
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x18]
    // add r1, r4, #0
    // bl GF2dGfxResHeader_GetObjIdByIndex
    // cmp r6, #3
    // bhi _021EB962
    // add r1, r6, r6
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EB8E8: ; jump table
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x44]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl AddCharResObjFromOpenNarcWithAtEndFlag
    // str r0, [sp, #0x14]
    // b _021EB962
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x20]
    // str r0, [sp, #8]
    // mov r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x44]
    // add r1, r5, #0
    // str r0, [sp, #0x10]
    // add r0, r7, #0
    // bl AddPlttResObjFromOpenNarcWithAtEndFlag
    // str r0, [sp, #0x14]
    // b _021EB962
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // str r0, [sp, #0x14]
    // b _021EB962
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x20]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EB968(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _021EB9A4 ; =0x0000FFFF
    // add r4, r2, #0
    // cmp r1, r0
    // beq _021EB9A0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021EB97E
    // bl sub_0200AEB0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021EB988
    // bl sub_0200B0A8
    // mov r6, #0
    // ldr r1, [r4]
    // cmp r1, #0
    // beq _021EB996
    // ldr r0, [r5, #8]
    // bl DestroySingle2DGfxResObj
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #4
    // blt _021EB98A
    // pop {r4, r5, r6, pc}
    // nop
    // _021EB9A4: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EB9A8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r2, #0x1c
    // ldr r3, [r5]
    // mul r2, r1
    // add r4, r3, r2
    // ldr r1, [r4, #8]
    // cmp r1, #0
    // bne _021EBA00
    // add r1, r4, #0
    // bl ov01_021EBE4C
    // cmp r0, #0
    // bne _021EB9C8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021EBD34
    // cmp r0, #0
    // bne _021EB9E0
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4, #8]
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #8]
    // str r1, [r0, #8]
    // ldrh r1, [r4]
    // ldr r0, _021EBA04 ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EB9F4
    // ldr r0, [r4, #8]
    // bl ov01_021EC028
    // ldrh r1, [r4, #2]
    // add r0, r5, #0
    // bl ov01_021EBD18
    // mov r0, #2
    // strh r0, [r4, #0x10]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021EBA04: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EBA08(void) {
    // push {r4, lr}
    // mov r2, #0x1c
    // ldr r3, [r0]
    // mul r2, r1
    // add r4, r3, r2
    // ldr r1, [r4, #8]
    // cmp r1, #0
    // beq _021EBA1C
    // mov r0, #1
    // pop {r4, pc}
    // add r1, r4, #0
    // bl ov01_021EBE4C
    // cmp r0, #0
    // bne _021EBA2A
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, _021EBA40 ; =ov01_021EBD70
    // add r1, r4, #0
    // mov r2, #1
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x14]
    // mov r0, #1
    // strh r0, [r4, #0x10]
    // mov r1, #0
    // strh r1, [r4, #0x12]
    // pop {r4, pc}
    // _021EBA40: .word ov01_021EBD70
    // TODO: decompile
}


void ov01_021EBA44(void) {
    // push {r4, r5, r6, lr}
    // add r5, r2, #0
    // ldr r2, [r0]
    // mov r0, #0x1c
    // mul r0, r1
    // ldrh r1, [r2, r0]
    // add r4, r2, r0
    // ldr r0, _021EBB2C ; =0x0000FFFF
    // add r6, r3, #0
    // cmp r1, r0
    // beq _021EBA64
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // bne _021EBA64
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r1, [r4, #8]
    // cmp r1, #0
    // bne _021EBA6E
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldrh r0, [r4, #0x10]
    // cmp r0, #2
    // beq _021EBA78
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x18]
    // mov r2, #4
    // bl SysTask_CreateOnMainQueue
    // ldr r1, [r4, #8]
    // ldr r3, _021EBB30 ; =0x00000F48
    // str r0, [r1, r3]
    // ldr r0, [r4, #8]
    // ldr r0, [r0, r3]
    // cmp r0, #0
    // bne _021EBA92
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #3
    // strh r0, [r4, #0x10]
    // add r0, r3, #0
    // ldr r1, [r4, #8]
    // add r0, #0x1a
    // strh r5, [r1, r0]
    // add r0, r3, #0
    // ldr r1, [r4, #8]
    // mov r2, #0
    // add r0, #0x1e
    // strh r2, [r1, r0]
    // ldr r1, [r4, #8]
    // add r0, r1, #0
    // add r0, #0xc
    // str r0, [r1, #0x40]
    // ldr r1, [r4, #8]
    // add r0, r1, #0
    // add r0, #0xc
    // str r0, [r1, #0x44]
    // add r0, r3, #0
    // ldr r1, [r4, #8]
    // add r0, #0x1c
    // strh r6, [r1, r0]
    // add r0, r3, #0
    // ldr r1, [r4, #8]
    // add r0, #0x14
    // str r2, [r1, r0]
    // ldr r1, [r4, #8]
    // add r0, r3, #4
    // ldr r6, _021EBB34 ; =NNS_G3dGlb + 0x258
    // add r5, r1, r0
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r0, [r6]
    // str r0, [r5]
    // ldr r1, [r4, #4]
    // cmp r1, #0
    // ble _021EBAF8
    // mov r0, #4
    // bl Heap_Alloc
    // ldr r2, [r4, #8]
    // ldr r1, _021EBB38 ; =0x00000F58
    // str r0, [r2, r1]
    // ldr r0, [r4, #8]
    // ldr r2, [r4, #4]
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bl memset
    // b _021EBAFE
    // ldr r0, [r4, #8]
    // add r3, #0x10
    // str r2, [r0, r3]
    // ldrh r1, [r4, #2]
    // ldr r0, _021EBB2C ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EBB28
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r2, _021EBB3C ; =0x0400000C
    // mov r1, #3
    // ldrh r3, [r2]
    // mov r0, #1
    // bic r3, r1
    // orr r0, r3
    // strh r0, [r2]
    // sub r2, r2, #4
    // ldrh r3, [r2]
    // mov r0, #2
    // bic r3, r1
    // orr r0, r3
    // strh r0, [r2]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _021EBB2C: .word 0x0000FFFF
    // _021EBB30: .word 0x00000F48
    // _021EBB34: .word NNS_G3dGlb + 0x258
    // _021EBB38: .word 0x00000F58
    // _021EBB3C: .word 0x0400000C
    // TODO: decompile
}


void ov01_021EBB40(void) {
    // push {r3, r4}
    // ldr r3, [r0]
    // mov r0, #0x1c
    // mul r0, r1
    // add r4, r3, r0
    // ldrh r0, [r4, #0x10]
    // cmp r0, #3
    // bne _021EBB5E
    // ldr r1, [r4, #8]
    // ldr r0, _021EBB64 ; =0x00000F66
    // mov r3, #5
    // strh r3, [r1, r0]
    // ldr r1, [r4, #8]
    // sub r0, r0, #2
    // strh r2, [r1, r0]
    // pop {r3, r4}
    // bx lr
    // nop
    // _021EBB64: .word 0x00000F66
    // TODO: decompile
}


void ov01_021EBB68(void) {
    // push {r4, lr}
    // mov r2, #0x1c
    // ldr r3, [r0]
    // mul r2, r1
    // add r4, r3, r2
    // bl ov01_021EB804
    // cmp r0, #3
    // bne _021EBB8A
    // ldr r1, [r4, #8]
    // ldr r0, _021EBB8C ; =0x00000F62
    // mov r2, #5
    // strh r2, [r1, r0]
    // ldr r1, [r4, #8]
    // ldr r2, [r4, #0x18]
    // mov r0, #0
    // blx r2
    // pop {r4, pc}
    // _021EBB8C: .word 0x00000F62
    // TODO: decompile
}


void ov01_021EBB90(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x1c
    // ldr r2, [r5]
    // mul r0, r1
    // add r4, r2, r0
    // ldrh r1, [r4, #2]
    // ldr r0, _021EBC8C ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EBBCE
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _021EBC90 ; =0x0400000C
    // mov r2, #3
    // ldrh r3, [r0]
    // mov r1, #3
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0]
    // sub r3, r0, #4
    // ldrh r6, [r3]
    // mov r1, #1
    // add r0, #0x44
    // bic r6, r2
    // orr r1, r6
    // strh r1, [r3]
    // mov r1, #0
    // strh r1, [r0]
    // ldr r2, [r4, #0xc]
    // cmp r2, #0
    // beq _021EBBF6
    // ldrh r1, [r4]
    // add r0, r5, #0
    // bl ov01_021EB968
    // ldr r1, [r4, #0xc]
    // mov r0, #4
    // bl Heap_FreeExplicit
    // mov r0, #0
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _021EBBF6
    // bl SysTask_Destroy
    // mov r0, #0
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _021EBC70
    // add r0, #0xc
    // bl ov01_021EC2CC
    // ldrh r1, [r4]
    // ldr r0, _021EBC8C ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EBC10
    // ldr r0, [r4, #8]
    // bl ov01_021EC058
    // ldr r0, [r4, #8]
    // ldr r1, _021EBC94 ; =0x00000F5C
    // ldr r1, [r0, r1]
    // cmp r1, #1
    // bne _021EBC1E
    // bl ov01_021EDAE0
    // ldr r1, [r4, #8]
    // ldr r0, _021EBC98 ; =0x00000F58
    // ldr r1, [r1, r0]
    // cmp r1, #0
    // beq _021EBC36
    // mov r0, #4
    // bl Heap_FreeExplicit
    // ldr r1, [r4, #8]
    // ldr r0, _021EBC98 ; =0x00000F58
    // mov r2, #0
    // str r2, [r1, r0]
    // ldrh r0, [r4, #0x10]
    // cmp r0, #1
    // bne _021EBC48
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _021EBC56
    // bl SysTask_Destroy
    // b _021EBC56
    // cmp r0, #3
    // bne _021EBC56
    // ldr r1, [r4, #8]
    // ldr r0, _021EBC9C ; =0x00000F48
    // ldr r0, [r1, r0]
    // bl SysTask_Destroy
    // ldr r1, [r4, #8]
    // ldr r0, _021EBCA0 ; =0x00000F6C
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _021EBC64
    // bl SysTask_Destroy
    // ldr r1, [r4, #8]
    // mov r0, #4
    // bl Heap_FreeExplicit
    // mov r0, #0
    // str r0, [r4, #8]
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x41
    // str r2, [sp, #4]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // ldr r0, [r0, #0x4c]
    // add r3, r2, #0
    // bl ov01_021EA864
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _021EBC8C: .word 0x0000FFFF
    // _021EBC90: .word 0x0400000C
    // _021EBC94: .word 0x00000F5C
    // _021EBC98: .word 0x00000F58
    // _021EBC9C: .word 0x00000F48
    // _021EBCA0: .word 0x00000F6C
    // TODO: decompile
}


void ov01_021EBCA4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrh r1, [r4, #2]
    // ldr r0, _021EBD08 ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EBCD8
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _021EBD0C ; =0x0400000C
    // mov r2, #3
    // ldrh r3, [r0]
    // mov r1, #3
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0]
    // sub r3, r0, #4
    // ldrh r5, [r3]
    // mov r1, #1
    // add r0, #0x44
    // bic r5, r2
    // orr r1, r5
    // strh r1, [r3]
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _021EBD06
    // add r0, #0xc
    // bl ov01_021EC2CC
    // ldr r0, [r4, #8]
    // ldr r1, _021EBD10 ; =0x00000F5C
    // ldr r1, [r0, r1]
    // cmp r1, #1
    // bne _021EBCF2
    // bl ov01_021EDAE0
    // ldrh r0, [r4, #0x10]
    // cmp r0, #3
    // bne _021EBD06
    // ldr r1, [r4, #8]
    // ldr r0, _021EBD14 ; =0x00000F48
    // ldr r0, [r1, r0]
    // bl SysTask_Destroy
    // mov r0, #2
    // strh r0, [r4, #0x10]
    // pop {r3, r4, r5, pc}
    // _021EBD08: .word 0x0000FFFF
    // _021EBD0C: .word 0x0400000C
    // _021EBD10: .word 0x00000F5C
    // _021EBD14: .word 0x00000F48
    // TODO: decompile
}


void ov01_021EBD18(void) {
    ov01_021EC078();
    ov01_021EC0C0(r5, r4);
    ov01_021EC114(r5, r4);
}


void ov01_021EBD34(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrh r1, [r4]
    // add r5, r0, #0
    // ldr r0, _021EBD6C ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EBD68
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // bne _021EBD68
    // add r0, r4, #0
    // bl ov01_021EBEB8
    // cmp r0, #0
    // bne _021EBD56
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4]
    // ldr r2, [r4, #0xc]
    // add r0, r5, #0
    // bl ov01_021EB86C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021EBFD0
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021EBD6C: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EBD70(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrh r2, [r4, #0x12]
    // add r5, r0, #0
    // ldr r0, [r4, #8]
    // cmp r2, #8
    // ldr r0, [r0]
    // bhi _021EBE46
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021EBD8C: ; jump table
    // add r0, r4, #0
    // bl ov01_021EBEB8
    // cmp r0, #0
    // bne _021EBDAC
    // bl GF_AssertFail
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4]
    // ldr r2, [r4, #0xc]
    // bl ov01_021EBEF0
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4, #2]
    // bl ov01_021EC078
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4]
    // ldr r2, [r4, #0xc]
    // bl ov01_021EBF24
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4, #2]
    // bl ov01_021EC0C0
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4]
    // ldr r2, [r4, #0xc]
    // bl ov01_021EBF58
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4, #2]
    // bl ov01_021EC114
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4]
    // ldr r2, [r4, #0xc]
    // bl ov01_021EBF94
    // ldrh r0, [r4, #0x12]
    // add r0, r0, #1
    // strh r0, [r4, #0x12]
    // pop {r3, r4, r5, pc}
    // bl ov01_021EBFD0
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #8]
    // str r1, [r0, #8]
    // ldrh r1, [r4]
    // ldr r0, _021EBE48 ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EBE36
    // ldr r0, [r4, #8]
    // bl ov01_021EC028
    // mov r0, #2
    // strh r0, [r4, #0x10]
    // mov r0, #0
    // strh r0, [r4, #0x12]
    // str r0, [r4, #0x14]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // _021EBE48: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EBE4C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _021EBE5C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r1, #0xf7
    // mov r0, #4
    // lsl r1, r1, #4
    // bl Heap_Alloc
    // str r0, [r4, #8]
    // cmp r0, #0
    // bne _021EBE70
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r2, #0xf7
    // mov r1, #0
    // lsl r2, r2, #4
    // bl memset
    // ldr r0, [r4, #8]
    // ldr r2, _021EBEB4 ; =0x00000F62
    // str r5, [r0]
    // ldr r1, [r4, #8]
    // mov r0, #0
    // strh r0, [r1, r2]
    // ldr r3, [r4, #8]
    // add r1, r2, #4
    // strh r0, [r3, r1]
    // ldr r3, [r4, #8]
    // add r1, r3, #0
    // add r1, #0xc
    // str r1, [r3, #0x40]
    // ldr r3, [r4, #8]
    // add r1, r3, #0
    // add r1, #0xc
    // str r1, [r3, #0x44]
    // add r1, r2, #0
    // ldr r3, [r4, #8]
    // sub r1, #0xa
    // str r0, [r3, r1]
    // ldr r1, [r4, #8]
    // add r2, #0xa
    // str r4, [r1, #4]
    // ldr r1, [r4, #8]
    // str r0, [r1, r2]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021EBEB4: .word 0x00000F62
    // TODO: decompile
}


void ov01_021EBEB8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r1, [r4]
    // ldr r0, _021EBEEC ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EBEE8
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021EBECE
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #4
    // mov r1, #0x64
    // bl Heap_Alloc
    // str r0, [r4, #0xc]
    // cmp r0, #0
    // bne _021EBEE0
    // mov r0, #0
    // pop {r4, pc}
    // mov r1, #0
    // mov r2, #0x64
    // bl memset
    // mov r0, #1
    // pop {r4, pc}
    // _021EBEEC: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EBEF0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _021EBF20 ; =0x0000FFFF
    // add r3, r1, #0
    // add r4, r2, #0
    // cmp r3, r0
    // beq _021EBF1A
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r3, #0
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x18]
    // ldr r3, [r5, #0x10]
    // mov r1, #2
    // bl ov01_021EB898
    // str r0, [r4, #8]
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021EBF20: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EBF24(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _021EBF54 ; =0x0000FFFF
    // add r3, r1, #0
    // add r4, r2, #0
    // cmp r3, r0
    // beq _021EBF4E
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r3, #0
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x18]
    // ldr r3, [r5, #0x14]
    // mov r1, #3
    // bl ov01_021EB898
    // str r0, [r4, #0xc]
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021EBF54: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EBF58(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _021EBF90 ; =0x0000FFFF
    // add r3, r1, #0
    // add r4, r2, #0
    // cmp r3, r0
    // beq _021EBF8C
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r3, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x18]
    // ldr r3, [r5, #8]
    // mov r1, #0
    // bl ov01_021EB898
    // str r0, [r4]
    // bl sub_0200ADA4
    // ldr r0, [r4]
    // bl sub_0200A740
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _021EBF90: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EBF94(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _021EBFCC ; =0x0000FFFF
    // add r3, r1, #0
    // add r4, r2, #0
    // cmp r3, r0
    // beq _021EBFC6
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r2, r3, #0
    // ldr r0, [r5, #0x18]
    // ldr r3, [r5, #0xc]
    // bl ov01_021EB898
    // str r0, [r4, #4]
    // bl sub_0200B00C
    // ldr r0, [r4, #4]
    // bl sub_0200A740
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021EBFCC: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EBFD0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldrh r1, [r4]
    // add r5, r0, #0
    // ldr r0, _021EC024 ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EC022
    // ldr r2, [r4, #0xc]
    // mov r0, #1
    // str r0, [sp]
    // add r0, r2, #0
    // add r0, #0x40
    // add r1, r5, #0
    // mov r3, #0
    // bl ov01_021EC240
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // add r0, #0x10
    // mov r2, #0x30
    // bl memset
    // add r5, #0xfc
    // ldr r1, [r5]
    // ldr r0, [r4, #0xc]
    // str r1, [r0, #0x10]
    // ldr r1, [r4, #0xc]
    // add r0, r1, #0
    // add r0, #0x40
    // str r0, [r1, #0x14]
    // mov r1, #1
    // ldr r0, [r4, #0xc]
    // lsl r1, r1, #0xc
    // str r1, [r0, #0x24]
    // ldr r0, [r4, #0xc]
    // str r1, [r0, #0x28]
    // ldr r0, [r4, #0xc]
    // str r1, [r0, #0x2c]
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // str r1, [r0, #0x38]
    // pop {r3, r4, r5, pc}
    // _021EC024: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EC028(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r4, #0
    // add r5, r6, #0
    // add r7, r4, #0
    // ldr r0, [r6, #8]
    // add r0, #0x10
    // bl Sprite_CreateAffine
    // str r0, [r5, #0x4c]
    // add r1, r7, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #0x4c]
    // cmp r0, #0
    // bne _021EC04C
    // bl GF_AssertFail
    // add r4, r4, #1
    // add r5, #0x3c
    // cmp r4, #0x40
    // blt _021EC032
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EC058(void) {
    Sprite_Delete(0);
}


void ov01_021EC078(void) {
    // push {r3, lr}
    // sub sp, #0x18
    // add r2, r0, #0
    // ldr r0, _021EC0BC ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EC0B8
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // ldr r3, [r2, #4]
    // mov r2, #0xc
    // mul r2, r1
    // ldr r1, [r3, r2]
    // mov r2, #4
    // bl NARC_AllocAndReadWholeMember
    // add r1, sp, #0x14
    // str r0, [sp]
    // bl NNS_G2dGetUnpackedPaletteData
    // ldr r1, [sp, #0x14]
    // mov r0, #2
    // ldr r1, [r1, #0xc]
    // mov r2, #0x20
    // mov r3, #0xc0
    // bl BG_LoadPlttData
    // ldr r0, [sp]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [sp]
    // add sp, #0x18
    // pop {r3, pc}
    // _021EC0BC: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EC0C0(void) {
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // ldr r0, _021EC110 ; =0x0000FFFF
    // cmp r1, r0
    // beq _021EC10C
    // mov r2, #0xc
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r3, [r4, #4]
    // mul r2, r1
    // add r1, r3, r2
    // ldr r0, [r4, r0]
    // ldr r1, [r1, #4]
    // mov r2, #4
    // bl NARC_AllocAndReadWholeMember
    // add r1, sp, #0x14
    // str r0, [sp, #8]
    // bl NNS_G2dGetUnpackedCharacterData
    // ldr r3, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r2, [r3, #0x14]
    // ldr r0, [r0, #8]
    // ldr r3, [r3, #0x10]
    // mov r1, #2
    // bl BG_LoadCharTilesData
    // ldr r0, [sp, #8]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [sp, #8]
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // _021EC110: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EC114(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r4, r0, #0
    // ldr r0, _021EC1B8 ; =0x0000FFFF
    // add r5, r1, #0
    // cmp r5, r0
    // beq _021EC1B4
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r1, #0xc
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r2, [r4, #4]
    // mul r1, r5
    // add r1, r2, r1
    // ldr r0, [r4, r0]
    // ldr r1, [r1, #8]
    // mov r2, #4
    // bl NARC_AllocAndReadWholeMember
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // bne _021EC14A
    // bl GF_AssertFail
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x18
    // bl NNS_G2dGetUnpackedScreenData
    // ldr r3, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp]
    // add r2, r3, #0
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r3, [r3, #8]
    // ldr r0, [r0, #8]
    // mov r1, #2
    // add r2, #0xc
    // bl BgCopyOrUncompressTilemapBufferRangeToVram
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r3, [sp, #0x18]
    // ldr r0, [r4, r0]
    // add r2, r3, #0
    // ldr r0, [r0, #8]
    // ldr r3, [r3, #8]
    // mov r1, #2
    // add r2, #0xc
    // bl BG_LoadScreenTilemapData
    // mov r0, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #6
    // str r0, [sp, #8]
    // add r0, #0xfe
    // ldr r0, [r4, r0]
    // mov r2, #0
    // ldr r0, [r0, #8]
    // mov r1, #2
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #2
    // ldr r0, [r0, #8]
    // bl BgCommitTilemapBufferToVram
    // ldr r0, [sp, #0x14]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [sp, #0x14]
    // add sp, #0x24
    // pop {r4, r5, pc}
    // _021EC1B8: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021EC1BC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // add r4, r1, #0
    // cmp r0, #0
    // beq _021EC1CC
    // bl GF_AssertFail
    // cmp r4, #0
    // bgt _021EC1D4
    // bl GF_AssertFail
    // cmp r4, #0x28
    // bls _021EC1DC
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0xc
    // str r0, [r5, #8]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EC1E4(void) {
    // ldr r3, _021EC1F0 ; =memset
    // mov r1, #0
    // str r1, [r0, #8]
    // add r0, #0xc
    // mov r2, #0x28
    // bx r3
    // _021EC1F0: .word memset
    // TODO: decompile
}


void ov01_021EC1F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // ldr r6, [r5]
    // bl ov01_021EC8D8
    // add r4, r0, #0
    // bne _021EC208
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r5, #0
    // str r6, [r4]
    // add r1, #0xc
    // str r1, [r4, #0x34]
    // ldr r1, [r5, #0x44]
    // str r1, [r4, #0x38]
    // ldr r1, [r5, #0x44]
    // str r4, [r1, #0x34]
    // str r4, [r5, #0x44]
    // add r1, r7, #0
    // bl ov01_021EC1BC
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // bne _021EC22A
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _021EC234
    // bl GF_AssertFail
    // ldr r0, [r4, #4]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EC240(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // str r0, [sp, #0x2c]
    // add r7, r1, #0
    // add r5, r2, #0
    // str r3, [sp, #0x30]
    // mov r6, #0
    // add r4, sp, #0x34
    // ldr r0, [r5]
    // bl GF2DGfxResObj_GetResID
    // add r6, r6, #1
    // add r5, r5, #4
    // stmia r4!, {r0}
    // cmp r6, #4
    // blt _021EC250
    // ldr r0, [sp, #0x40]
    // str r0, [sp]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x10]
    // ldr r0, [r7, #8]
    // str r0, [sp, #0x14]
    // ldr r0, [r7, #0xc]
    // str r0, [sp, #0x18]
    // ldr r0, [r7, #0x10]
    // str r0, [sp, #0x1c]
    // ldr r0, [r7, #0x14]
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x34]
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x3c]
    // bl CreateSpriteResourcesHeader
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EC29C(void) {
    *((u32*)(*((u32*)(r0 + 0x38)) + 0x34)) = *((u32*)(r0 + 0x34));
    *((u32*)(*((u32*)(r0 + 0x34)) + 0x38)) = *((u32*)(r0 + 0x38));
    Sprite_SetDrawFlag(*((u32*)(r0 + 4)), 0);
    ov01_021EC1E4(r4);
    memset(r4, 0, 0x3c);
    *((u32*)(r4 + 4)) = r5;
}


void ov01_021EC2CC(void) {
    ov01_021EC29C();
}


void ov01_021EC2E4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x34]
    // add r6, r1, #0
    // ldr r4, [r0, #0x34]
    // cmp r0, r5
    // beq _021EC2FC
    // blx r6
    // add r0, r4, #0
    // ldr r4, [r4, #0x34]
    // cmp r0, r5
    // bne _021EC2F2
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021EC300(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021EC304(void) {
    Sprite_GetMatrixPtr();
}


void ov01_021EC31C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // ldr r3, _021EC45C ; =NNS_G3dGlb + 0x258
    // add r5, r2, #0
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x18
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, _021EC460 ; =0x00000F4C
    // ldr r2, [sp, #0x18]
    // ldr r1, [r5, r0]
    // add r0, #8
    // sub r6, r2, r1
    // ldr r1, [sp, #0x20]
    // ldr r0, [r5, r0]
    // sub r4, r1, r0
    // mov r0, #1
    // mov r1, #3
    // lsl r0, r0, #0xe
    // lsl r1, r1, #0xc
    // bl FX_Div
    // add r7, r0, #0
    // mov r0, #0x41
    // ldr r1, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r0, [r0, #0x24]
    // bl Camera_GetPerspectiveAngle
    // str r0, [sp, #0xc]
    // mov r0, #0x41
    // ldr r1, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r0, [r0, #0x24]
    // bl Camera_GetDistance
    // add r1, r0, #0
    // add r0, sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r2, r7, #0
    // add r3, sp, #0x14
    // bl sub_02020E10
    // mov r1, #1
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #0x14
    // bl FX_Div
    // str r0, [sp, #0x14]
    // cmp r4, #0
    // bgt _021EC398
    // ldr r0, [sp, #0x10]
    // ldr r1, _021EC464 ; =0x000BE8D0
    // bl FX_Div
    // b _021EC3A0
    // ldr r0, [sp, #0x10]
    // ldr r1, _021EC468 ; =0x000BE811
    // bl FX_Div
    // mov r7, #1
    // lsl r7, r7, #0xc
    // str r0, [sp, #0x10]
    // cmp r6, #0
    // bge _021EC3C8
    // ldr r7, _021EC46C ; =0xFFFFF000
    // asr r1, r6, #0x1f
    // add r0, r6, #0
    // asr r3, r7, #0xc
    // add r2, r7, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r6, r2, #0xc
    // orr r6, r0
    // ldr r1, [sp, #0x14]
    // add r0, r6, #0
    // bl FX_Div
    // add r6, r0, #0
    // cmp r7, #0
    // bge _021EC3F0
    // asr r1, r6, #0x1f
    // asr r3, r7, #0x1f
    // add r2, r7, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r6, r2, #0xc
    // orr r6, r0
    // mov r7, #1
    // lsl r7, r7, #0xc
    // cmp r4, #0
    // bge _021EC416
    // ldr r7, _021EC46C ; =0xFFFFF000
    // asr r1, r4, #0x1f
    // add r0, r4, #0
    // asr r3, r7, #0xc
    // add r2, r7, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r4, r2, #0xc
    // orr r4, r0
    // ldr r1, [sp, #0x10]
    // add r0, r4, #0
    // bl FX_Div
    // add r3, r0, #0
    // cmp r7, #0
    // bge _021EC43E
    // asr r1, r3, #0x1f
    // asr r3, r7, #0x1f
    // add r2, r7, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r3, r2, #0xc
    // orr r3, r0
    // add r0, r6, r3
    // beq _021EC450
    // ldr r0, _021EC460 ; =0x00000F4C
    // add r2, sp, #0x18
    // add r4, r5, r0
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // str r6, [r0]
    // ldr r0, [sp, #8]
    // str r3, [r0]
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _021EC45C: .word NNS_G3dGlb + 0x258
    // _021EC460: .word 0x00000F4C
    // _021EC464: .word 0x000BE8D0
    // _021EC468: .word 0x000BE811
    // _021EC46C: .word 0xFFFFF000
    // TODO: decompile
}


void ov01_021EC470(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r4, r2, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov01_021EC4A8
    // cmp r5, #0
    // beq _021EC494
    // ldr r0, [sp, #4]
    // asr r1, r0, #0xc
    // str r1, [r5]
    // bpl _021EC494
    // mov r0, #1
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r5]
    // cmp r4, #0
    // beq _021EC4A4
    // ldr r0, [sp]
    // asr r0, r0, #0xc
    // str r0, [r4]
    // bpl _021EC4A4
    // add r0, r0, #1
    // str r0, [r4]
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EC4A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r7, r1, #0
    // str r2, [sp]
    // add r0, sp, #8
    // add r1, sp, #4
    // add r2, r5, #0
    // bl ov01_021EC31C
    // ldr r4, [r5, #0x40]
    // add r5, #0xc
    // cmp r4, r5
    // beq _021EC4EC
    // add r6, sp, #0xc
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov01_021EC304
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov01_021EB5F4
    // ldr r4, [r4, #0x34]
    // cmp r4, r5
    // bne _021EC4C6
    // cmp r7, #0
    // beq _021EC4F4
    // ldr r0, [sp, #8]
    // str r0, [r7]
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _021EC4FE
    // ldr r1, [sp, #4]
    // str r1, [r0]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EC504(void) {
    // str r1, [r0]
    // strh r2, [r0, #4]
    // mov r1, #0
    // strh r1, [r0, #6]
    // strh r3, [r0, #8]
    // strh r1, [r0, #0xa]
    // ldr r1, [sp]
    // strh r1, [r0, #0xc]
    // ldr r1, [sp, #4]
    // strh r1, [r0, #0xe]
    // ldr r1, [sp, #8]
    // strh r1, [r0, #0x10]
    // ldr r1, [sp, #0xc]
    // strh r1, [r0, #0x12]
    // ldr r1, [sp, #0x10]
    // str r1, [r0, #0x14]
    // ldr r1, [sp, #0x14]
    // str r1, [r0, #0x18]
    // bx lr
    // TODO: decompile
}


void ov01_021EC52C(void) {
    // strh r1, [r0, #0xc]
    // strh r2, [r0, #0xe]
    // ldr r1, [sp]
    // strh r3, [r0, #0x10]
    // str r1, [r0, #0x14]
    // bx lr
    // TODO: decompile
}


void ov01_021EC538(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x10
    // ldrsh r0, [r5, r0]
    // mov r4, #0
    // cmp r0, #0
    // bne _021EC54C
    // mov r0, #1
    // orr r4, r0
    // b _021EC572
    // bgt _021EC552
    // mov r2, #1
    // b _021EC554
    // add r2, r4, #0
    // mov r0, #0xe
    // ldrsh r1, [r5, r0]
    // mov r0, #8
    // ldrsh r0, [r5, r0]
    // cmp r0, r1
    // blt _021EC564
    // cmp r2, #0
    // beq _021EC56C
    // cmp r0, r1
    // bgt _021EC572
    // cmp r2, #1
    // bne _021EC572
    // mov r0, #1
    // orr r4, r0
    // strh r1, [r5, #8]
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // bne _021EC57E
    // mov r0, #2
    // orr r4, r0
    // b _021EC5A4
    // bgt _021EC584
    // mov r2, #1
    // b _021EC586
    // mov r2, #0
    // mov r0, #0xc
    // ldrsh r1, [r5, r0]
    // mov r0, #4
    // ldrsh r0, [r5, r0]
    // cmp r0, r1
    // blt _021EC596
    // cmp r2, #0
    // beq _021EC59E
    // cmp r0, r1
    // bgt _021EC5A4
    // cmp r2, #1
    // bne _021EC5A4
    // mov r0, #2
    // orr r4, r0
    // strh r1, [r5, #4]
    // mov r0, #6
    // ldrsh r1, [r5, r0]
    // sub r1, r1, #1
    // strh r1, [r5, #6]
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // bgt _021EC5F8
    // mov r1, #4
    // ldrsh r1, [r5, r1]
    // ldr r0, [r5]
    // ldr r2, [r5, #0x18]
    // blx r2
    // mov r0, #8
    // ldrsh r1, [r5, r0]
    // strh r1, [r5, #6]
    // mov r1, #1
    // tst r1, r4
    // bne _021EC5D2
    // ldrsh r1, [r5, r0]
    // mov r0, #0x10
    // ldrsh r0, [r5, r0]
    // add r0, r1, r0
    // strh r0, [r5, #8]
    // mov r0, #2
    // tst r0, r4
    // bne _021EC5F8
    // mov r0, #0xa
    // ldrsh r1, [r5, r0]
    // add r1, r1, #1
    // strh r1, [r5, #0xa]
    // ldrsh r1, [r5, r0]
    // mov r0, #0x12
    // ldrsh r0, [r5, r0]
    // cmp r1, r0
    // blt _021EC5F8
    // mov r0, #0
    // strh r0, [r5, #0xa]
    // mov r0, #4
    // ldrsh r1, [r5, r0]
    // ldr r0, [r5, #0x14]
    // add r0, r1, r0
    // strh r0, [r5, #4]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EC5FC(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r1, #0
    // ldr r1, [sp, #0x1c]
    // str r2, [r4]
    // cmp r1, #0
    // beq _021EC64C
    // cmp r1, #1
    // bne _021EC630
    // add r1, r3, #0
    // add r3, sp, #0
    // add r0, r2, #0
    // ldrh r3, [r3, #0x14]
    // ldr r2, [sp, #0x10]
    // bl ov01_021EC678
    // add r0, r4, #0
    // bl ov01_021EC774
    // ldr r1, [sp, #0x18]
    // add r0, r4, #0
    // mov r2, #1
    // bl ov01_021EC790
    // add sp, #8
    // pop {r4, pc}
    // cmp r1, #2
    // bne _021EC64C
    // add r1, sp, #0
    // ldrh r1, [r1, #0x14]
    // ldr r4, [sp, #0x18]
    // str r1, [sp]
    // mov r1, #0x7f
    // mul r1, r4
    // str r1, [sp, #4]
    // add r1, r2, #0
    // add r2, r3, #0
    // ldr r3, [sp, #0x10]
    // bl ov01_021EC6A4
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021EC650(void) {
    // push {r4, lr}
    // mov r4, #1
    // cmp r2, #0
    // beq _021EC674
    // cmp r2, #1
    // bne _021EC666
    // add r0, r1, #0
    // bl ov01_021EC7AC
    // add r4, r0, #0
    // b _021EC674
    // cmp r2, #2
    // bne _021EC674
    // bl ov01_021EC728
    // cmp r0, #0
    // bne _021EC674
    // mov r4, #0
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021EC678(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // str r1, [sp]
    // mov r1, #0
    // add r4, r3, #0
    // str r2, [sp, #4]
    // mvn r1, r1
    // mov r2, #1
    // mov r3, #0
    // add r5, r0, #0
    // bl ov01_021EA864
    // mov r1, #0
    // add r0, r5, #0
    // mvn r1, r1
    // add r2, r4, #0
    // mov r3, #0x1f
    // bl ov01_021EA89C
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EC6A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r1, #0
    // add r5, r0, #0
    // add r0, r7, #0
    // str r2, [sp]
    // str r3, [sp, #4]
    // ldr r4, [sp, #0x2c]
    // bl ov01_021EA858
    // str r0, [sp, #8]
    // add r0, r7, #0
    // bl ov01_021EA85C
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // bl ov01_021EA860
    // add r6, r0, #0
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // add r0, r5, #4
    // add r3, r4, #0
    // str r7, [r5]
    // bl ov01_021EB830
    // add r0, sp, #0x18
    // ldrh r7, [r0, #0x10]
    // add r0, r5, #0
    // mov r2, #0x1f
    // add r1, r6, #0
    // and r1, r2
    // add r0, #0x18
    // and r2, r7
    // add r3, r4, #0
    // bl ov01_021EB830
    // add r0, r5, #0
    // asr r1, r6, #5
    // mov r3, #0x1f
    // asr r2, r7, #5
    // add r0, #0x2c
    // and r1, r3
    // and r2, r3
    // add r3, r4, #0
    // bl ov01_021EB830
    // add r0, r5, #0
    // asr r1, r6, #0xa
    // mov r2, #0x1f
    // asr r3, r7, #0xa
    // and r1, r2
    // and r2, r3
    // add r0, #0x40
    // add r3, r4, #0
    // bl ov01_021EB830
    // add r5, #0x54
    // ldr r1, [sp, #8]
    // ldr r2, [sp]
    // add r0, r5, #0
    // add r3, r4, #0
    // bl ov01_021EB830
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EC728(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r5, #4
    // bl ov01_021EB840
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0x18
    // bl ov01_021EB840
    // add r0, r5, #0
    // add r0, #0x2c
    // bl ov01_021EB840
    // add r0, r5, #0
    // add r0, #0x40
    // bl ov01_021EB840
    // add r0, r5, #0
    // add r0, #0x54
    // bl ov01_021EB840
    // ldr r3, [r5, #0x40]
    // ldr r0, [r5]
    // lsl r6, r3, #0xa
    // ldr r1, [r5, #0x54]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #0x18]
    // ldr r5, [r5, #0x2c]
    // lsl r5, r5, #5
    // orr r3, r5
    // orr r3, r6
    // lsl r3, r3, #0x10
    // lsr r3, r3, #0x10
    // bl ov01_021EC678
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021EC774(void) {
    // mov r2, #0
    // add r3, r0, #0
    // add r1, r2, #0
    // add r0, r3, r2
    // add r2, r2, #1
    // strb r1, [r0, #4]
    // cmp r2, #0x20
    // blt _021EC77A
    // ldr r0, [r3]
    // add r1, r3, #4
    // ldr r3, _021EC78C ; =ov01_021EA8C4
    // bx r3
    // _021EC78C: .word ov01_021EA8C4
    // TODO: decompile
}


void ov01_021EC790(void) {
    // mov r3, #0x7f
    // str r3, [r0, #0x24]
    // mov r3, #0
    // str r3, [r0, #0x28]
    // strh r1, [r0, #0x2c]
    // cmp r2, #1
    // bne _021EC7A4
    // mov r1, #1
    // strh r1, [r0, #0x2e]
    // bx lr
    // sub r1, r3, #1
    // strh r1, [r0, #0x2e]
    // bx lr
    // TODO: decompile
}


void ov01_021EC7AC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov01_021EC7E8
    // add r4, r0, #0
    // ldr r0, [r5, #0x28]
    // cmp r0, #0
    // bne _021EC7C4
    // ldr r0, [r5]
    // add r1, r5, #4
    // bl ov01_021EA8C4
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EC7C8(void) {
    *((u32*)(r0 + 0x24)) = 1;
    *((u32*)(r0 + 0x28)) = 0;
    *((u16*)(r0 + 0x2c)) = 0;
    *((u16*)(r0 + 0x2e)) = 1;
    ov01_021EC828(0, 1);
    ov01_021EA8C4((r4 + 4));
}


void ov01_021EC7E8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #0x2e
    // ldrsh r1, [r5, r1]
    // mov r4, #0
    // cmp r1, #0
    // bne _021EC7FA
    // mov r4, #1
    // b _021EC824
    // ldr r1, [r5, #0x24]
    // cmp r1, #0
    // bgt _021EC804
    // mov r4, #1
    // b _021EC824
    // ldr r1, [r5, #0x28]
    // add r2, r1, #1
    // str r2, [r5, #0x28]
    // mov r1, #0x2c
    // ldrsh r1, [r5, r1]
    // cmp r2, r1
    // blt _021EC824
    // str r4, [r5, #0x28]
    // bl ov01_021EC828
    // ldr r0, [r5, #0x24]
    // sub r0, r0, #1
    // str r0, [r5, #0x24]
    // cmp r0, #0
    // bgt _021EC824
    // mov r4, #1
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EC828(void) {
    // push {r3, r4}
    // mov r1, #0x2e
    // ldrsh r1, [r0, r1]
    // ldr r2, [r0, #0x24]
    // cmp r1, #0
    // bge _021EC83A
    // mov r1, #0x7f
    // sub r2, r1, r2
    // b _021EC83A
    // asr r1, r2, #1
    // lsr r1, r1, #0x1e
    // add r1, r2, r1
    // asr r4, r1, #2
    // mov r3, #0x1f
    // cmp r4, #0x1f
    // bge _021EC856
    // sub r1, r3, r4
    // lsl r2, r1, #2
    // add r1, r0, r3
    // sub r3, r3, #1
    // strb r2, [r1, #4]
    // cmp r3, r4
    // bgt _021EC848
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov01_021EC85C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r1, #0
    // ldr r1, [sp, #0x28]
    // str r0, [sp]
    // str r1, [sp, #0x28]
    // add r1, r2, #0
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r7, [sp, #0x2c]
    // blx r4
    // ldr r0, [sp]
    // mov r6, #0
    // ldr r5, [r0, #0x40]
    // str r6, [sp, #0x10]
    // ldr r0, [r5, #0x34]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // ble _021EC8D2
    // ldr r0, [sp]
    // add r0, #0xc
    // str r0, [sp]
    // ldr r0, [sp]
    // cmp r5, r0
    // beq _021EC8D2
    // mov r4, #0
    // cmp r6, #0
    // ble _021EC8A6
    // add r0, r5, #0
    // blx r7
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _021EC8A6
    // add r4, r4, #1
    // cmp r4, r6
    // blt _021EC896
    // ldr r5, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // ldr r0, [r0, #0x34]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // cmp r1, r0
    // blt _021EC8C6
    // add r0, r1, #0
    // ldr r1, [sp, #8]
    // bl _s32_div_f
    // cmp r1, #0
    // bne _021EC8C6
    // ldr r0, [sp, #0x28]
    // add r6, r6, r0
    // ldr r0, [sp, #0x10]
    // add r1, r0, #1
    // ldr r0, [sp, #4]
    // str r1, [sp, #0x10]
    // cmp r1, r0
    // blt _021EC88A
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EC8D8(void) {
    // mov r2, #0
    // add r3, r0, #0
    // ldr r1, [r3, #0x48]
    // cmp r1, #0
    // bne _021EC8EC
    // mov r1, #0x3c
    // add r0, #0x48
    // mul r1, r2
    // add r0, r0, r1
    // bx lr
    // add r2, r2, #1
    // add r3, #0x3c
    // cmp r2, #0x40
    // blt _021EC8DC
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021EC8F8(void) {
    // push {r3, lr}
    // ldr r0, _021EC948 ; =0x00000F62
    // ldrh r2, [r1, r0]
    // cmp r2, #5
    // bhi _021EC946
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021EC90E: ; jump table
    // mov r2, #1
    // strh r2, [r1, r0]
    // pop {r3, pc}
    // mov r2, #3
    // strh r2, [r1, r0]
    // pop {r3, pc}
    // mov r2, #3
    // strh r2, [r1, r0]
    // pop {r3, pc}
    // add r2, r0, #4
    // ldrh r2, [r1, r2]
    // cmp r2, #5
    // bne _021EC946
    // mov r2, #4
    // strh r2, [r1, r0]
    // pop {r3, pc}
    // mov r2, #5
    // strh r2, [r1, r0]
    // pop {r3, pc}
    // ldr r0, [r1, #4]
    // bl ov01_021EBCA4
    // pop {r3, pc}
    // _021EC948: .word 0x00000F62
    // TODO: decompile
}


void ov01_021EC94C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // ldr r0, _021ECB8C ; =0x00000F58
    // add r4, r1, #0
    // add r2, r0, #0
    // add r2, #0xa
    // ldrh r2, [r4, r2]
    // ldr r5, [r4, r0]
    // cmp r2, #5
    // bhi _021ECA1A
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021EC96C: ; jump table
    // mov r0, #0x14
    // str r0, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // sub r0, r2, #2
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021ECB90 ; =ov01_021ECBB4
    // mov r3, #8
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // bl ov01_021EC504
    // ldr r0, _021ECB94 ; =0x0000726F
    // mov r2, #0x41
    // str r0, [sp]
    // ldr r0, _021ECB98 ; =0x00006B5A
    // lsl r2, r2, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _021ECB9C ; =0x00000F64
    // add r1, r5, #0
    // ldrh r0, [r4, r0]
    // add r1, #0x1c
    // str r0, [sp, #0xc]
    // ldr r3, [r4]
    // add r0, r5, #0
    // ldr r2, [r3, r2]
    // add r0, #0x4c
    // ldr r2, [r2, #0x4c]
    // mov r3, #3
    // bl ov01_021EC5FC
    // mov r0, #0
    // add r5, #0xb4
    // str r0, [r5]
    // ldr r0, _021ECBA0 ; =ov01_021EDA7C
    // add r1, r4, #0
    // mov r2, #0x64
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _021ECBA4 ; =0x00000F6C
    // mov r2, #0x1e
    // str r0, [r4, r1]
    // sub r0, r1, #4
    // str r2, [r4, r0]
    // mov r0, #1
    // sub r1, #0xa
    // strh r0, [r4, r1]
    // b _021ECB60
    // add r0, r5, #0
    // bl ov01_021EC538
    // add r6, r0, #0
    // add r0, r5, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // cmp r0, #0
    // ble _021ECA02
    // add r0, r5, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // add r5, #0xb4
    // sub r0, r0, #1
    // str r0, [r5]
    // b _021ECB60
    // ldr r2, _021ECB9C ; =0x00000F64
    // add r0, r5, #0
    // ldrh r2, [r4, r2]
    // add r5, #0x1c
    // add r0, #0x4c
    // add r1, r5, #0
    // bl ov01_021EC650
    // cmp r0, #1
    // bne _021ECA1A
    // cmp r6, #3
    // beq _021ECA1C
    // b _021ECB60
    // ldr r0, _021ECBA8 ; =0x00000F62
    // mov r1, #3
    // strh r1, [r4, r0]
    // b _021ECB60
    // mov r2, #0x14
    // mov r3, #1
    // str r2, [sp]
    // str r3, [sp, #4]
    // sub r0, r3, #2
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021ECB90 ; =ov01_021ECBB4
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // bl ov01_021EC504
    // ldr r0, _021ECB9C ; =0x00000F64
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ECA66
    // mov r0, #0x41
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r2, _021ECB94 ; =0x0000726F
    // ldr r0, [r0, #0x4c]
    // ldr r3, _021ECB98 ; =0x00006B5A
    // mov r1, #3
    // str r0, [r5, #0x1c]
    // bl ov01_021EC678
    // add r5, #0x1c
    // add r0, r5, #0
    // bl ov01_021EC7C8
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021ECBAC ; =ov01_021ECC70
    // ldr r1, _021ECB90 ; =ov01_021ECBB4
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x14
    // mov r3, #0xa
    // bl ov01_021EC85C
    // ldr r0, _021ECBA0 ; =ov01_021EDA7C
    // add r1, r4, #0
    // mov r2, #0x64
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _021ECBA4 ; =0x00000F6C
    // mov r2, #0x1e
    // str r0, [r4, r1]
    // sub r0, r1, #4
    // str r2, [r4, r0]
    // mov r0, #3
    // sub r1, #0xa
    // strh r0, [r4, r1]
    // b _021ECB60
    // mov r0, #6
    // ldrsh r1, [r5, r0]
    // sub r0, r1, #1
    // strh r0, [r5, #6]
    // cmp r1, #0
    // bgt _021ECAB2
    // mov r1, #4
    // ldrsh r1, [r5, r1]
    // add r0, r4, #0
    // bl ov01_021ECBB4
    // mov r0, #8
    // ldrsh r0, [r5, r0]
    // strh r0, [r5, #6]
    // ldr r0, _021ECBB0 ; =0x00000F66
    // ldrh r0, [r4, r0]
    // cmp r0, #5
    // bne _021ECB60
    // mov r0, #1
    // mvn r0, r0
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #8
    // mov r3, #1
    // bl ov01_021EC52C
    // ldr r0, _021ECB9C ; =0x00000F64
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ECAE0
    // add r0, r5, #0
    // add r0, #0x1c
    // mov r1, #1
    // mov r2, #0
    // bl ov01_021EC790
    // mov r0, #0
    // add r5, #0xb4
    // str r0, [r5]
    // ldr r0, _021ECBA8 ; =0x00000F62
    // mov r1, #4
    // strh r1, [r4, r0]
    // add r0, r4, #0
    // bl ov01_021EDAE0
    // b _021ECB60
    // add r0, r5, #0
    // bl ov01_021EC538
    // add r6, r0, #0
    // add r0, r5, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // cmp r0, #0
    // ble _021ECB14
    // add r0, r5, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // add r5, #0xb4
    // sub r0, r0, #1
    // str r0, [r5]
    // b _021ECB60
    // ldr r0, _021ECB9C ; =0x00000F64
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ECB26
    // add r5, #0x1c
    // add r0, r5, #0
    // bl ov01_021EC7AC
    // b _021ECB28
    // mov r0, #1
    // cmp r0, #1
    // bne _021ECB60
    // cmp r6, #3
    // bne _021ECB60
    // add r0, r4, #0
    // ldr r1, [r4, #0x40]
    // add r0, #0xc
    // cmp r1, r0
    // bne _021ECB60
    // ldr r0, _021ECBA8 ; =0x00000F62
    // mov r1, #5
    // strh r1, [r4, r0]
    // b _021ECB60
    // add r0, #0xc
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ECB5A
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // mov r1, #1
    // add r3, r2, #0
    // bl ov01_021EA864
    // ldr r0, [r4, #4]
    // bl ov01_021EBCA4
    // ldr r0, _021ECBA8 ; =0x00000F62
    // ldrh r0, [r4, r0]
    // cmp r0, #5
    // beq _021ECB86
    // cmp r0, #0
    // beq _021ECB86
    // add r0, r4, #0
    // ldr r1, _021ECBAC ; =ov01_021ECC70
    // add r0, #0xc
    // bl ov01_021EC2E4
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov01_021EC470
    // add r0, r4, #0
    // bl ov01_021EC300
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // nop
    // _021ECB8C: .word 0x00000F58
    // _021ECB90: .word ov01_021ECBB4
    // _021ECB94: .word 0x0000726F
    // _021ECB98: .word 0x00006B5A
    // _021ECB9C: .word 0x00000F64
    // _021ECBA0: .word ov01_021EDA7C
    // _021ECBA4: .word 0x00000F6C
    // _021ECBA8: .word 0x00000F62
    // _021ECBAC: .word ov01_021ECC70
    // _021ECBB0: .word 0x00000F66
    // TODO: decompile
}


void ov01_021ECBB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r1, #0
    // str r1, [sp, #4]
    // cmp r0, #0
    // ble _021ECC62
    // ldr r0, [sp]
    // mov r1, #0x20
    // bl ov01_021EC1F4
    // add r6, r0, #0
    // beq _021ECC62
    // ldr r4, [r6, #8]
    // bl MTRandom
    // mov r1, #0
    // str r1, [r4]
    // mov r1, #3
    // add r7, r0, #0
    // bl _u32_div_f
    // add r5, r1, #0
    // lsl r1, r5, #0x10
    // ldr r0, [r6, #4]
    // lsr r1, r1, #0x10
    // bl Sprite_SetAnimationFrame
    // add r0, r7, #0
    // mov r1, #0x14
    // bl _u32_div_f
    // add r2, r5, #1
    // mov r0, #0xa
    // mul r0, r2
    // add r0, r1, r0
    // str r0, [r4, #8]
    // cmp r5, #2
    // bne _021ECC0C
    // ldr r0, [r4, #8]
    // add r0, #0xa
    // str r0, [r4, #8]
    // add r0, r1, #0
    // mov r1, #4
    // mvn r1, r1
    // bl _s32_div_f
    // mov r1, #4
    // add r2, r5, #1
    // mvn r1, r1
    // mul r1, r2
    // add r0, r0, r1
    // str r0, [r4, #0x10]
    // cmp r5, #2
    // bne _021ECC2C
    // ldr r0, [r4, #0x10]
    // sub r0, r0, #5
    // str r0, [r4, #0x10]
    // mov r0, #0
    // str r0, [r4, #0xc]
    // add r0, r5, #1
    // str r0, [r4, #4]
    // ldr r1, _021ECC68 ; =0x0000010E
    // add r0, r7, #0
    // bl _u32_div_f
    // mov r0, #0xf
    // mul r0, r5
    // add r0, r1, r0
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, _021ECC6C ; =0xFFFA0000
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r6, #4]
    // bl ov01_021EB5F4
    // ldr r0, [sp, #8]
    // add r1, r0, #1
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
    // cmp r1, r0
    // blt _021ECBC6
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021ECC68: .word 0x0000010E
    // _021ECC6C: .word 0xFFFA0000
    // TODO: decompile
}


void ov01_021ECC70(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // ldr r5, [r6, #8]
    // add r0, sp, #0
    // add r1, r6, #0
    // bl ov01_021EC304
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // beq _021ECC92
    // cmp r0, #1
    // beq _021ECCEA
    // cmp r0, #2
    // beq _021ECCFC
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r4, #0
    // mov r7, #2
    // ldr r0, [r5, #0x10]
    // ldr r1, [sp]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [r5]
    // add r0, r1, #1
    // str r0, [r5]
    // ldr r0, [r5, #4]
    // cmp r1, r0
    // ble _021ECCD8
    // bl MTRandom
    // mov r1, #0xa
    // bl _u32_div_f
    // cmp r1, #7
    // bhs _021ECCC8
    // str r7, [r5, #0xc]
    // b _021ECCD8
    // mov r0, #1
    // str r0, [r5, #0xc]
    // mov r0, #4
    // str r0, [r5]
    // ldr r0, [r6, #4]
    // mov r1, #3
    // bl Sprite_SetAnimationFrame
    // add r4, r4, #1
    // cmp r4, #2
    // blt _021ECC96
    // ldr r0, [r6, #4]
    // add r1, sp, #0
    // bl ov01_021EB5F4
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r1, [r5]
    // sub r0, r1, #1
    // str r0, [r5]
    // cmp r1, #0
    // bgt _021ECD02
    // mov r0, #2
    // add sp, #0xc
    // str r0, [r5, #0xc]
    // pop {r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov01_021EC29C
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021ECD08(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // ldr r0, _021ECF2C ; =0x00000F58
    // add r5, r1, #0
    // add r2, r0, #0
    // add r2, #0xa
    // ldrh r2, [r5, r2]
    // ldr r4, [r5, r0]
    // cmp r2, #5
    // bhi _021ECDCC
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021ECD28: ; jump table
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // sub r0, #8
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r2, #1
    // ldr r0, _021ECF30 ; =ov01_021ECF4C
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // mov r3, #0x1e
    // bl ov01_021EC504
    // ldr r0, _021ECF34 ; =0x0000726F
    // mov r2, #0x41
    // str r0, [sp]
    // ldr r0, _021ECF38 ; =0x00006318
    // add r1, r4, #0
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r0, _021ECF3C ; =0x00000F64
    // lsl r2, r2, #2
    // ldrh r0, [r5, r0]
    // add r1, #0x1c
    // str r0, [sp, #0xc]
    // ldr r3, [r5]
    // add r0, r4, #0
    // ldr r2, [r3, r2]
    // add r0, #0x4c
    // ldr r2, [r2, #0x4c]
    // mov r3, #3
    // bl ov01_021EC5FC
    // add r0, r4, #0
    // mov r1, #8
    // add r0, #0xb4
    // str r1, [r0]
    // mov r0, #0
    // add r4, #0xb8
    // str r0, [r4]
    // ldr r0, _021ECF40 ; =0x00000F62
    // mov r1, #1
    // strh r1, [r5, r0]
    // b _021ECF02
    // add r0, r4, #0
    // bl ov01_021EC538
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // cmp r0, #0
    // ble _021ECDB4
    // add r0, r4, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // add r4, #0xb4
    // sub r0, r0, #1
    // str r0, [r4]
    // b _021ECF02
    // ldr r2, _021ECF3C ; =0x00000F64
    // add r0, r4, #0
    // ldrh r2, [r5, r2]
    // add r4, #0x1c
    // add r0, #0x4c
    // add r1, r4, #0
    // bl ov01_021EC650
    // cmp r0, #1
    // bne _021ECDCC
    // cmp r6, #3
    // beq _021ECDCE
    // b _021ECF02
    // ldr r0, _021ECF40 ; =0x00000F62
    // mov r1, #3
    // strh r1, [r5, r0]
    // b _021ECF02
    // mov r2, #6
    // mov r3, #3
    // str r2, [sp]
    // add r0, r3, #0
    // str r3, [sp, #4]
    // sub r0, #8
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _021ECF30 ; =ov01_021ECF4C
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // bl ov01_021EC504
    // ldr r0, _021ECF3C ; =0x00000F64
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _021ECE1C
    // mov r0, #0x41
    // ldr r1, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r2, _021ECF34 ; =0x0000726F
    // ldr r0, [r0, #0x4c]
    // ldr r3, _021ECF38 ; =0x00006318
    // mov r1, #3
    // str r0, [r4, #0x1c]
    // bl ov01_021EC678
    // add r0, r4, #0
    // add r0, #0x1c
    // bl ov01_021EC7C8
    // mov r0, #0
    // add r4, #0xb8
    // str r0, [r4]
    // mov r0, #3
    // str r0, [sp]
    // ldr r0, _021ECF44 ; =ov01_021ED070
    // ldr r1, _021ECF30 ; =ov01_021ECF4C
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #0x14
    // mov r3, #2
    // bl ov01_021EC85C
    // ldr r0, _021ECF40 ; =0x00000F62
    // mov r1, #3
    // strh r1, [r5, r0]
    // b _021ECF02
    // mov r0, #6
    // ldrsh r1, [r4, r0]
    // sub r0, r1, #1
    // strh r0, [r4, #6]
    // cmp r1, #0
    // bgt _021ECE5A
    // mov r1, #4
    // ldrsh r1, [r4, r1]
    // add r0, r5, #0
    // bl ov01_021ECF4C
    // mov r0, #8
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, #6]
    // ldr r0, _021ECF48 ; =0x00000F66
    // ldrh r0, [r5, r0]
    // cmp r0, #5
    // bne _021ECF02
    // mov r0, #2
    // mvn r0, r0
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x1e
    // mov r3, #5
    // bl ov01_021EC52C
    // ldr r0, _021ECF3C ; =0x00000F64
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _021ECE88
    // add r0, r4, #0
    // add r0, #0x1c
    // mov r1, #1
    // mov r2, #0
    // bl ov01_021EC790
    // mov r0, #0
    // add r4, #0xb4
    // str r0, [r4]
    // ldr r0, _021ECF40 ; =0x00000F62
    // mov r1, #4
    // strh r1, [r5, r0]
    // b _021ECF02
    // add r0, r4, #0
    // bl ov01_021EC538
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // cmp r0, #0
    // ble _021ECEB6
    // add r0, r4, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // add r4, #0xb4
    // sub r0, r0, #1
    // str r0, [r4]
    // b _021ECF02
    // ldr r0, _021ECF3C ; =0x00000F64
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _021ECEC8
    // add r4, #0x1c
    // add r0, r4, #0
    // bl ov01_021EC7AC
    // b _021ECECA
    // mov r0, #1
    // cmp r0, #1
    // bne _021ECF02
    // cmp r6, #3
    // bne _021ECF02
    // add r0, r5, #0
    // ldr r1, [r5, #0x40]
    // add r0, #0xc
    // cmp r1, r0
    // bne _021ECF02
    // ldr r0, _021ECF40 ; =0x00000F62
    // mov r1, #5
    // strh r1, [r5, r0]
    // b _021ECF02
    // add r0, #0xc
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _021ECEFC
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // add r3, r2, #0
    // bl ov01_021EA864
    // ldr r0, [r5, #4]
    // bl ov01_021EBCA4
    // ldr r0, _021ECF40 ; =0x00000F62
    // ldrh r0, [r5, r0]
    // cmp r0, #5
    // beq _021ECF28
    // cmp r0, #0
    // beq _021ECF28
    // add r0, r5, #0
    // ldr r1, _021ECF44 ; =ov01_021ED070
    // add r0, #0xc
    // bl ov01_021EC2E4
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov01_021EC470
    // add r0, r5, #0
    // bl ov01_021EC300
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // _021ECF2C: .word 0x00000F58
    // _021ECF30: .word ov01_021ECF4C
    // _021ECF34: .word 0x0000726F
    // _021ECF38: .word 0x00006318
    // _021ECF3C: .word 0x00000F64
    // _021ECF40: .word 0x00000F62
    // _021ECF44: .word ov01_021ED070
    // _021ECF48: .word 0x00000F66
    // TODO: decompile
}


void ov01_021ECF4C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x58
    // ldr r3, _021ED064 ; =ov01_0220673C
    // add r2, sp, #0x48
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #0x10]
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r3, _021ED068 ; =ov01_0220674C
    // add r2, sp, #0x38
    // str r2, [sp, #0x14]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r1, _021ED06C ; =0x00000F58
    // ldr r0, [sp]
    // ldr r6, [r0, r1]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // ble _021ED060
    // add r0, r6, #0
    // str r0, [sp, #0x18]
    // add r0, #0xb8
    // str r0, [sp, #0x18]
    // mov r0, #7
    // mvn r0, r0
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    // mov r1, #0x20
    // bl ov01_021EC1F4
    // add r4, r0, #0
    // beq _021ED060
    // ldr r0, [sp, #0x18]
    // ldr r5, [r4, #8]
    // ldr r0, [r0]
    // add r1, r0, #1
    // ldr r0, [sp, #0x18]
    // str r1, [r0]
    // add r0, r6, #0
    // add r0, #0xb8
    // ldr r1, [r0]
    // mov r0, #0x32
    // lsl r0, r0, #4
    // cmp r1, r0
    // blt _021ECFBE
    // add r1, r6, #0
    // add r1, #0xb8
    // mov r0, #0
    // str r0, [r1]
    // add r0, r6, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // mov r1, #0xc8
    // bl _s32_div_f
    // lsl r0, r0, #2
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [r1, r0]
    // str r0, [r5, #0x14]
    // mov r0, #0
    // str r0, [r5]
    // bl MTRandom
    // mov r1, #0x2a
    // bl _u32_div_f
    // add r0, r1, #4
    // str r0, [r5, #4]
    // sub r0, r0, #4
    // mov r1, #0xf
    // bl _s32_div_f
    // add r7, r0, #0
    // lsl r1, r7, #0x10
    // ldr r0, [r4, #4]
    // lsr r1, r1, #0x10
    // bl Sprite_SetAnimationFrame
    // add r0, r7, #1
    // neg r1, r0
    // str r1, [r5, #0x10]
    // ldr r2, [sp, #0x14]
    // ldr r1, [sp, #8]
    // ldr r1, [r2, r1]
    // mul r1, r0
    // str r1, [r5, #8]
    // mov r0, #0
    // str r0, [r5, #0xc]
    // add r0, sp, #0x20
    // add r1, r4, #0
    // bl ov01_021EC304
    // add r3, sp, #0x20
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x2c
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // bl MTRandom
    // mov r1, #0x69
    // lsl r1, r1, #2
    // bl _u32_div_f
    // mov r0, #1
    // sub r2, r0, r7
    // sub r0, #0x15
    // mul r0, r2
    // add r1, r0, r1
    // mov r0, #7
    // mvn r0, r0
    // str r0, [sp, #0x30]
    // mov r0, #0
    // str r0, [sp, #0x34]
    // str r1, [sp, #0x2c]
    // lsl r0, r1, #0xc
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0x2c
    // str r0, [sp, #0x30]
    // ldr r0, [r4, #4]
    // bl ov01_021EB5F4
    // ldr r0, [sp, #0xc]
    // add r1, r0, #1
    // ldr r0, [sp, #4]
    // str r1, [sp, #0xc]
    // cmp r1, r0
    // blt _021ECF90
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // _021ED064: .word ov01_0220673C
    // _021ED068: .word ov01_0220674C
    // _021ED06C: .word 0x00000F58
    // TODO: decompile
}


void ov01_021ED070(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r0, sp, #0
    // add r1, r5, #0
    // ldr r4, [r5, #8]
    // bl ov01_021EC304
    // add r3, sp, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0xc
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021ED09A
    // cmp r0, #1
    // beq _021ED0E6
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x10]
    // ldr r1, [sp, #0xc]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #8]
    // ldr r1, [sp, #0x10]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [r4]
    // add r0, r1, #1
    // str r0, [r4]
    // ldr r0, [r4, #4]
    // cmp r1, r0
    // ble _021ED0BE
    // mov r0, #1
    // str r0, [r4, #0xc]
    // ldr r0, [r4]
    // ldr r1, [r4, #0x14]
    // bl _s32_div_f
    // cmp r1, #0
    // bne _021ED0DA
    // ldr r0, [r4, #0x10]
    // sub r0, r0, #1
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #8]
    // cmp r0, #1
    // ble _021ED0DA
    // sub r0, r0, #1
    // str r0, [r4, #8]
    // ldr r0, [r5, #4]
    // add r1, sp, #0xc
    // bl ov01_021EB5F4
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov01_021EC29C
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021ED0F0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // ldr r0, _021ED2FC ; =0x00000F58
    // add r5, r1, #0
    // add r2, r0, #0
    // add r2, #0xa
    // ldrh r2, [r5, r2]
    // ldr r4, [r5, r0]
    // cmp r2, #5
    // bhi _021ED1AA
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021ED110: ; jump table
    // mov r0, #0x14
    // str r0, [sp]
    // mov r2, #2
    // str r2, [sp, #4]
    // sub r0, r2, #4
    // str r0, [sp, #8]
    // mov r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, _021ED300 ; =ov01_021ED31C
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // mov r3, #0x10
    // bl ov01_021EC504
    // ldr r0, _021ED304 ; =0x0000716F
    // mov r2, #0x41
    // str r0, [sp]
    // ldr r0, _021ED308 ; =0x00006B5A
    // lsl r2, r2, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _021ED30C ; =0x00000F64
    // add r1, r4, #0
    // ldrh r0, [r5, r0]
    // add r1, #0x1c
    // str r0, [sp, #0xc]
    // ldr r3, [r5]
    // add r0, r4, #0
    // ldr r2, [r3, r2]
    // add r0, #0x4c
    // ldr r2, [r2, #0x4c]
    // mov r3, #3
    // bl ov01_021EC5FC
    // mov r0, #0
    // add r4, #0xb4
    // str r0, [r4]
    // ldr r0, _021ED310 ; =0x00000F62
    // mov r1, #1
    // strh r1, [r5, r0]
    // b _021ED2D2
    // add r0, r4, #0
    // bl ov01_021EC538
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // cmp r0, #0
    // ble _021ED192
    // add r0, r4, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // add r4, #0xb4
    // sub r0, r0, #1
    // str r0, [r4]
    // b _021ED2D2
    // ldr r2, _021ED30C ; =0x00000F64
    // add r0, r4, #0
    // ldrh r2, [r5, r2]
    // add r4, #0x1c
    // add r0, #0x4c
    // add r1, r4, #0
    // bl ov01_021EC650
    // cmp r0, #1
    // bne _021ED1AA
    // cmp r6, #3
    // beq _021ED1AC
    // b _021ED2D2
    // ldr r0, _021ED310 ; =0x00000F62
    // mov r1, #3
    // strh r1, [r5, r0]
    // b _021ED2D2
    // mov r2, #0x14
    // mov r3, #2
    // str r2, [sp]
    // str r3, [sp, #4]
    // sub r0, r3, #4
    // str r0, [sp, #8]
    // mov r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, _021ED300 ; =ov01_021ED31C
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r4, #0
    // bl ov01_021EC504
    // ldr r0, _021ED30C ; =0x00000F64
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _021ED1F6
    // mov r0, #0x41
    // ldr r1, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r2, _021ED304 ; =0x0000716F
    // ldr r0, [r0, #0x4c]
    // ldr r3, _021ED308 ; =0x00006B5A
    // mov r1, #3
    // str r0, [r4, #0x1c]
    // bl ov01_021EC678
    // add r4, #0x1c
    // add r0, r4, #0
    // bl ov01_021EC7C8
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021ED314 ; =ov01_021ED44C
    // ldr r1, _021ED300 ; =ov01_021ED31C
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #0x14
    // mov r3, #0xa
    // bl ov01_021EC85C
    // ldr r0, _021ED310 ; =0x00000F62
    // mov r1, #3
    // strh r1, [r5, r0]
    // b _021ED2D2
    // mov r0, #6
    // ldrsh r1, [r4, r0]
    // sub r0, r1, #1
    // strh r0, [r4, #6]
    // cmp r1, #0
    // bgt _021ED22E
    // mov r1, #4
    // ldrsh r1, [r4, r1]
    // add r0, r5, #0
    // bl ov01_021ED31C
    // mov r0, #8
    // ldrsh r0, [r4, r0]
    // strh r0, [r4, #6]
    // ldr r0, _021ED318 ; =0x00000F66
    // ldrh r0, [r5, r0]
    // cmp r0, #5
    // bne _021ED2D2
    // mov r0, #9
    // mvn r0, r0
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x10
    // mov r3, #6
    // bl ov01_021EC52C
    // ldr r0, _021ED30C ; =0x00000F64
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _021ED25C
    // add r0, r4, #0
    // add r0, #0x1c
    // mov r1, #1
    // mov r2, #0
    // bl ov01_021EC790
    // mov r0, #0x14
    // add r4, #0xb4
    // str r0, [r4]
    // ldr r0, _021ED310 ; =0x00000F62
    // mov r1, #4
    // strh r1, [r5, r0]
    // b _021ED2D2
    // add r0, r4, #0
    // bl ov01_021EC538
    // add r6, r0, #0
    // add r0, r4, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // cmp r0, #0
    // ble _021ED28A
    // add r0, r4, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // add r4, #0xb4
    // sub r0, r0, #1
    // str r0, [r4]
    // b _021ED2D2
    // ldr r2, _021ED30C ; =0x00000F64
    // add r0, r4, #0
    // ldrh r2, [r5, r2]
    // add r4, #0x1c
    // add r0, #0x4c
    // add r1, r4, #0
    // bl ov01_021EC650
    // cmp r0, #1
    // bne _021ED2D2
    // cmp r6, #3
    // bne _021ED2D2
    // add r0, r5, #0
    // ldr r1, [r5, #0x40]
    // add r0, #0xc
    // cmp r1, r0
    // bne _021ED2D2
    // ldr r0, _021ED310 ; =0x00000F62
    // mov r1, #5
    // strh r1, [r5, r0]
    // b _021ED2D2
    // add r0, #0xc
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _021ED2CC
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // add r3, r2, #0
    // bl ov01_021EA864
    // ldr r0, [r5, #4]
    // bl ov01_021EBCA4
    // ldr r0, _021ED310 ; =0x00000F62
    // ldrh r0, [r5, r0]
    // cmp r0, #5
    // beq _021ED2F8
    // cmp r0, #0
    // beq _021ED2F8
    // add r0, r5, #0
    // ldr r1, _021ED314 ; =ov01_021ED44C
    // add r0, #0xc
    // bl ov01_021EC2E4
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov01_021EC470
    // add r0, r5, #0
    // bl ov01_021EC300
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // _021ED2FC: .word 0x00000F58
    // _021ED300: .word ov01_021ED31C
    // _021ED304: .word 0x0000716F
    // _021ED308: .word 0x00006B5A
    // _021ED30C: .word 0x00000F64
    // _021ED310: .word 0x00000F62
    // _021ED314: .word ov01_021ED44C
    // _021ED318: .word 0x00000F66
    // TODO: decompile
}


void ov01_021ED31C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r1, #0
    // str r1, [sp, #4]
    // cmp r0, #0
    // bgt _021ED330
    // b _021ED448
    // ldr r0, [sp]
    // mov r1, #0x20
    // bl ov01_021EC1F4
    // add r4, r0, #0
    // bne _021ED33E
    // b _021ED448
    // ldr r5, [r4, #8]
    // mov r0, #0
    // str r0, [r5]
    // bl MTRandom
    // mov r1, #5
    // bl _u32_div_f
    // add r0, r1, #7
    // str r0, [r5, #4]
    // bl MTRandom
    // mov r1, #0xfa
    // lsl r1, r1, #2
    // bl _u32_div_f
    // lsr r2, r1, #0x1f
    // lsl r1, r1, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // bne _021ED370
    // mov r0, #1
    // b _021ED374
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r5, #8]
    // mov r0, #1
    // str r0, [r5, #0xc]
    // bl MTRandom
    // mov r1, #6
    // bl _u32_div_f
    // add r0, r1, #3
    // str r0, [r5, #0x10]
    // bl MTRandom
    // mov r1, #5
    // bl _u32_div_f
    // add r0, r1, #4
    // str r0, [r5, #0x14]
    // bl MTRandom
    // mov r1, #0x14
    // bl _u32_div_f
    // str r1, [sp, #8]
    // add r0, sp, #0x10
    // add r1, r4, #0
    // bl ov01_021EC304
    // bl MTRandom
    // mov r1, #6
    // lsl r1, r1, #6
    // bl _u32_div_f
    // sub r1, #0x40
    // str r1, [sp, #0x10]
    // bl MTRandom
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // ldr r0, [sp, #0x10]
    // sub r1, #8
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // lsl r0, r1, #0xc
    // str r0, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #4]
    // add r1, sp, #0x10
    // bl ov01_021EB5F4
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // asr r1, r1, #0xc
    // asr r0, r0, #0xc
    // str r1, [sp, #0x14]
    // mov r1, #3
    // str r0, [sp, #0x10]
    // bl _s32_div_f
    // mov r1, #0x32
    // sub r6, r1, r0
    // mov r1, #0xce
    // sub r7, r1, r0
    // bpl _021ED406
    // bl MTRandom
    // neg r1, r7
    // bl _u32_div_f
    // sub r1, r6, r1
    // b _021ED412
    // bl MTRandom
    // add r1, r7, #0
    // bl _u32_div_f
    // add r1, r6, r1
    // ldr r0, [sp, #0x14]
    // cmp r6, r0
    // bgt _021ED424
    // cmp r1, r0
    // blt _021ED424
    // ldr r0, [r5, #4]
    // lsl r0, r0, #1
    // str r0, [r5, #4]
    // b _021ED42E
    // bl MTRandom
    // mov r1, #3
    // and r0, r1
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #4]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl Sprite_SetAnimationFrame
    // ldr r0, [sp, #0xc]
    // add r1, r0, #1
    // ldr r0, [sp, #4]
    // str r1, [sp, #0xc]
    // cmp r1, r0
    // bge _021ED448
    // b _021ED330
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021ED44C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r4, [r5, #8]
    // add r0, sp, #0
    // add r1, r5, #0
    // bl ov01_021EC304
    // ldr r0, [r4]
    // add r1, r0, #1
    // str r1, [r4]
    // ldr r0, [r4, #4]
    // cmp r1, r0
    // blt _021ED46E
    // add r0, r5, #0
    // bl ov01_021EC29C
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov01_021ED474(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r2, #0
    // ldr r2, _021ED580 ; =0x00000F62
    // add r4, r0, #0
    // ldrh r0, [r4, r2]
    // add r5, r1, #0
    // cmp r0, #5
    // bhi _021ED57A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021ED492: ; jump table
    // str r3, [sp]
    // add r0, sp, #0x10
    // ldrh r0, [r0, #0x10]
    // add r5, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #8]
    // add r0, r2, #2
    // ldrh r0, [r4, r0]
    // mov r2, #0x41
    // lsl r2, r2, #2
    // str r0, [sp, #0xc]
    // ldr r3, [r4]
    // add r0, r5, #0
    // ldr r2, [r3, r2]
    // add r3, r6, #0
    // ldr r2, [r2, #0x4c]
    // bl ov01_021EC5FC
    // ldr r0, _021ED580 ; =0x00000F62
    // mov r1, #1
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // add r2, r2, #2
    // ldrh r2, [r4, r2]
    // add r5, #0x30
    // add r0, r5, #0
    // bl ov01_021EC650
    // cmp r0, #1
    // bne _021ED57A
    // ldr r0, _021ED580 ; =0x00000F62
    // mov r1, #3
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // add r0, r2, #2
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ED50E
    // mov r0, #0x41
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r2, r3, #0
    // ldr r0, [r0, #0x4c]
    // add r3, sp, #0x10
    // str r0, [r5]
    // ldrh r3, [r3, #0x10]
    // add r1, r6, #0
    // bl ov01_021EC678
    // add r0, r5, #0
    // bl ov01_021EC7C8
    // ldr r0, _021ED580 ; =0x00000F62
    // mov r1, #3
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // add r0, r2, #4
    // ldrh r0, [r4, r0]
    // cmp r0, #5
    // bne _021ED57A
    // add r0, r2, #2
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ED532
    // ldr r1, [sp, #0x28]
    // add r0, r5, #0
    // mov r2, #0
    // bl ov01_021EC790
    // ldr r0, _021ED580 ; =0x00000F62
    // mov r1, #4
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // add r0, r2, #2
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ED54C
    // add r0, r5, #0
    // bl ov01_021EC7AC
    // b _021ED54E
    // mov r0, #1
    // cmp r0, #1
    // bne _021ED57A
    // ldr r0, _021ED580 ; =0x00000F62
    // mov r1, #5
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // add r0, r2, #2
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ED574
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r0, [r5]
    // mov r1, #1
    // add r3, r2, #0
    // bl ov01_021EA864
    // ldr r0, [r4, #4]
    // bl ov01_021EBCA4
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021ED580: .word 0x00000F62
    // TODO: decompile
}


void ov01_021ED584(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r0, _021ED700 ; =0x00000F58
    // add r4, r1, #0
    // add r1, r0, #0
    // add r1, #0xa
    // ldrh r1, [r4, r1]
    // ldr r5, [r4, r0]
    // cmp r1, #5
    // bls _021ED59A
    // b _021ED6FC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED5A6: ; jump table
    // ldr r1, _021ED704 ; =0x00007555
    // mov r2, #0x41
    // str r1, [sp]
    // ldr r1, _021ED708 ; =0x00007FFF
    // add r0, #0xc
    // str r1, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // ldrh r0, [r4, r0]
    // add r1, r5, #0
    // lsl r2, r2, #2
    // str r0, [sp, #0xc]
    // ldr r3, [r4]
    // add r0, r5, #0
    // ldr r2, [r3, r2]
    // add r0, #0x44
    // ldr r2, [r2, #0x4c]
    // add r1, #0x14
    // mov r3, #6
    // bl ov01_021EC5FC
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #9
    // mov r3, #0x1e
    // bl ov01_021EB830
    // mov r0, #0
    // mov r1, #0x10
    // bl ov01_021EB818
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _021ED70C ; =0x00000F62
    // mov r1, #1
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r0, #0x14
    // bl ov01_021EC7AC
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021EB840
    // add r7, r0, #0
    // ldr r0, [r5]
    // mov r1, #0x10
    // sub r1, r1, r0
    // bl ov01_021EB818
    // cmp r6, #1
    // bne _021ED6FC
    // cmp r7, #1
    // bne _021ED6FC
    // ldr r0, _021ED70C ; =0x00000F62
    // mov r1, #3
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, #0xc
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ED656
    // mov r0, #0x41
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r2, _021ED704 ; =0x00007555
    // ldr r0, [r0, #0x4c]
    // ldr r3, _021ED708 ; =0x00007FFF
    // mov r1, #6
    // str r0, [r5, #0x14]
    // bl ov01_021EC678
    // add r5, #0x14
    // add r0, r5, #0
    // bl ov01_021EC7C8
    // mov r0, #9
    // mov r1, #7
    // bl ov01_021EB818
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _021ED70C ; =0x00000F62
    // mov r1, #3
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r0, #0
    // add r1, #0xe
    // ldrh r1, [r4, r1]
    // cmp r1, #5
    // bne _021ED6FC
    // add r0, #0xc
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ED68E
    // add r0, r5, #0
    // add r0, #0x14
    // mov r1, #1
    // mov r2, #0
    // bl ov01_021EC790
    // add r0, r5, #0
    // mov r1, #9
    // mov r2, #0
    // mov r3, #0x1e
    // bl ov01_021EB830
    // ldr r0, _021ED70C ; =0x00000F62
    // mov r1, #4
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, #0xc
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ED6B8
    // add r0, r5, #0
    // add r0, #0x14
    // bl ov01_021EC7AC
    // add r6, r0, #0
    // b _021ED6BA
    // mov r6, #1
    // add r0, r5, #0
    // bl ov01_021EB840
    // add r7, r0, #0
    // ldr r0, [r5]
    // mov r1, #0x10
    // sub r1, r1, r0
    // bl ov01_021EB818
    // cmp r6, #1
    // bne _021ED6FC
    // cmp r7, #1
    // bne _021ED6FC
    // ldr r0, _021ED70C ; =0x00000F62
    // mov r1, #5
    // add sp, #0x10
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, #0xc
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _021ED6F6
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r0, [r5, #0x14]
    // mov r1, #1
    // add r3, r2, #0
    // bl ov01_021EA864
    // ldr r0, [r4, #4]
    // bl ov01_021EBCA4
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021ED700: .word 0x00000F58
    // _021ED704: .word 0x00007555
    // _021ED708: .word 0x00007FFF
    // _021ED70C: .word 0x00000F62
    // TODO: decompile
}


void ov01_021ED710(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x4c
    // add r6, r1, #0
    // mov r0, #0x41
    // ldr r1, [r6]
    // lsl r0, r0, #2
    // ldr r5, [r1, r0]
    // ldr r0, _021ED900 ; =0x00000F58
    // add r1, r0, #0
    // add r1, #0xa
    // ldrh r1, [r6, r1]
    // ldr r4, [r6, r0]
    // cmp r1, #5
    // bls _021ED72E
    // b _021ED8FA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED73A: ; jump table
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // bl ov01_02203EA0
    // ldr r1, _021ED904 ; =0x0000062C
    // mov r3, #0
    // str r0, [r4, r1]
    // mov r0, #0xa
    // str r0, [sp]
    // str r3, [sp, #4]
    // ldr r0, [r5, #0x4c]
    // sub r1, r3, #1
    // mov r2, #1
    // bl ov01_021EA864
    // mov r1, #0
    // mov r2, #0
    // ldr r0, [r5, #0x4c]
    // mvn r1, r1
    // add r3, r2, #0
    // bl ov01_021EA89C
    // mov r1, #0
    // add r2, sp, #0x2c
    // sub r0, r1, #1
    // add r1, r1, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // cmp r1, #0x20
    // blt _021ED77A
    // ldr r0, [r5, #0x4c]
    // add r1, sp, #0x2c
    // bl ov01_021EA8C4
    // mov r0, #0x63
    // mov r1, #0
    // lsl r0, r0, #4
    // strh r1, [r4, r0]
    // ldr r0, _021ED908 ; =0x00000F62
    // mov r1, #1
    // add sp, #0x4c
    // strh r1, [r6, r0]
    // pop {r3, r4, r5, r6, pc}
    // mov r1, #3
    // add r0, #0xa
    // add sp, #0x4c
    // strh r1, [r6, r0]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // bl ov01_02203EA0
    // ldr r1, _021ED904 ; =0x0000062C
    // mov r3, #0
    // str r0, [r4, r1]
    // mov r0, #0xa
    // str r0, [sp]
    // str r3, [sp, #4]
    // ldr r0, [r5, #0x4c]
    // sub r1, r3, #1
    // mov r2, #1
    // bl ov01_021EA864
    // mov r1, #0
    // mov r2, #0
    // ldr r0, [r5, #0x4c]
    // mvn r1, r1
    // add r3, r2, #0
    // bl ov01_021EA89C
    // mov r1, #0
    // add r2, sp, #0xc
    // sub r0, r1, #1
    // add r1, r1, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // cmp r1, #0x20
    // blt _021ED7DC
    // ldr r0, [r5, #0x4c]
    // add r1, sp, #0xc
    // bl ov01_021EA8C4
    // mov r0, #0x63
    // mov r1, #0
    // lsl r0, r0, #4
    // strh r1, [r4, r0]
    // ldr r0, _021ED908 ; =0x00000F62
    // mov r1, #3
    // add sp, #0x4c
    // strh r1, [r6, r0]
    // pop {r3, r4, r5, r6, pc}
    // add r1, r0, #0
    // add r1, #0xe
    // ldrh r1, [r6, r1]
    // cmp r1, #5
    // bne _021ED8FA
    // ldr r1, _021ED90C ; =0x00000632
    // mov r2, #0
    // strh r2, [r4, r1]
    // mov r1, #4
    // add r0, #0xa
    // add sp, #0x4c
    // strh r1, [r6, r0]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _021ED90C ; =0x00000632
    // ldrh r1, [r4, r0]
    // cmp r1, #3
    // bhi _021ED8FA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED82E: ; jump table
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // mov r1, #0
    // str r0, [sp, #8]
    // ldr r3, _021ED910 ; =0x00007FFF
    // mov r0, #3
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // ldr r0, _021ED90C ; =0x00000632
    // add sp, #0x4c
    // ldrh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, r6, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021ED8FA
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r3, _021ED910 ; =0x00007FFF
    // mov r0, #3
    // add r2, r1, #0
    // bl BeginNormalPaletteFade
    // ldr r0, _021ED90C ; =0x00000632
    // add sp, #0x4c
    // ldrh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, r6, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021ED8FA
    // ldr r0, _021ED90C ; =0x00000632
    // add sp, #0x4c
    // ldrh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, r6, pc}
    // sub r1, r0, #2
    // ldrh r1, [r4, r1]
    // add r2, r1, #1
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // sub r0, r0, #2
    // ldrh r0, [r4, r0]
    // bl _dfltu
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _021ED914 ; =0x40080000
    // mov r0, #0
    // bl _dmul
    // ldr r3, _021ED918 ; =0x40380000
    // mov r2, #0
    // bl _ddiv
    // add r3, r1, #0
    // add r2, r0, #0
    // ldr r1, _021ED91C ; =0x3FF00000
    // mov r0, #0
    // bl _dadd
    // bl _d2f
    // add r5, r0, #0
    // ldr r0, _021ED904 ; =0x0000062C
    // add r1, r5, #0
    // ldr r0, [r4, r0]
    // bl ov01_02203F2C
    // add r0, r5, #0
    // bl _f2d
    // ldr r3, _021ED920 ; =0x40100000
    // mov r2, #0
    // bl _dgeq
    // blo _021ED8FA
    // ldr r0, _021ED908 ; =0x00000F62
    // mov r1, #5
    // add sp, #0x4c
    // strh r1, [r6, r0]
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [r6, #4]
    // bl ov01_021EBCA4
    // add sp, #0x4c
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021ED900: .word 0x00000F58
    // _021ED904: .word 0x0000062C
    // _021ED908: .word 0x00000F62
    // _021ED90C: .word 0x00000632
    // _021ED910: .word 0x00007FFF
    // _021ED914: .word 0x40080000
    // _021ED918: .word 0x40380000
    // _021ED91C: .word 0x3FF00000
    // _021ED920: .word 0x40100000
    // TODO: decompile
}


void ov01_021ED924(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x48
    // add r5, r1, #0
    // mov r0, #0x41
    // ldr r1, [r5]
    // lsl r0, r0, #2
    // ldr r4, [r1, r0]
    // ldr r0, _021EDA40 ; =0x00000F58
    // add r1, r0, #0
    // add r1, #0xa
    // ldrh r1, [r5, r1]
    // ldr r6, [r5, r0]
    // cmp r1, #5
    // bhi _021EDA3A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021ED94C: ; jump table
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetMapObject
    // bl ov01_02203EA0
    // ldr r1, _021EDA44 ; =0x0000062C
    // mov r3, #0
    // str r0, [r6, r1]
    // mov r0, #0xa
    // str r0, [sp]
    // str r3, [sp, #4]
    // ldr r0, [r4, #0x4c]
    // sub r1, r3, #1
    // mov r2, #1
    // bl ov01_021EA864
    // mov r1, #0
    // mov r2, #0
    // ldr r0, [r4, #0x4c]
    // mvn r1, r1
    // add r3, r2, #0
    // bl ov01_021EA89C
    // mov r1, #0
    // add r2, sp, #0x28
    // sub r0, r1, #1
    // add r1, r1, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // cmp r1, #0x20
    // blt _021ED98C
    // ldr r0, [r4, #0x4c]
    // add r1, sp, #0x28
    // bl ov01_021EA8C4
    // ldr r0, _021EDA44 ; =0x0000062C
    // ldr r1, _021EDA48 ; =0x40800000
    // ldr r0, [r6, r0]
    // bl ov01_02203F2C
    // ldr r0, _021EDA4C ; =0x00000F62
    // mov r1, #1
    // add sp, #0x48
    // strh r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // mov r1, #3
    // add r0, #0xa
    // add sp, #0x48
    // strh r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetMapObject
    // bl ov01_02203EA0
    // ldr r1, _021EDA44 ; =0x0000062C
    // mov r3, #0
    // str r0, [r6, r1]
    // mov r0, #0xa
    // str r0, [sp]
    // str r3, [sp, #4]
    // ldr r0, [r4, #0x4c]
    // sub r1, r3, #1
    // mov r2, #1
    // bl ov01_021EA864
    // mov r1, #0
    // mov r2, #0
    // ldr r0, [r4, #0x4c]
    // mvn r1, r1
    // add r3, r2, #0
    // bl ov01_021EA89C
    // mov r1, #0
    // add r2, sp, #8
    // sub r0, r1, #1
    // add r1, r1, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // cmp r1, #0x20
    // blt _021ED9F0
    // ldr r0, [r4, #0x4c]
    // add r1, sp, #8
    // bl ov01_021EA8C4
    // ldr r0, _021EDA44 ; =0x0000062C
    // ldr r1, _021EDA48 ; =0x40800000
    // ldr r0, [r6, r0]
    // bl ov01_02203F2C
    // ldr r0, _021EDA4C ; =0x00000F62
    // mov r1, #3
    // add sp, #0x48
    // strh r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // add r1, r0, #0
    // add r1, #0xe
    // ldrh r1, [r5, r1]
    // cmp r1, #5
    // bne _021EDA3A
    // mov r1, #4
    // add r0, #0xa
    // add sp, #0x48
    // strh r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // mov r1, #5
    // add r0, #0xa
    // add sp, #0x48
    // strh r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r5, #4]
    // bl ov01_021EBCA4
    // add sp, #0x48
    // pop {r4, r5, r6, pc}
    // nop
    // _021EDA40: .word 0x00000F58
    // _021EDA44: .word 0x0000062C
    // _021EDA48: .word 0x40800000
    // _021EDA4C: .word 0x00000F62
    // TODO: decompile
}


void ov01_021EDA50(void) {
    // push {lr}
    // sub sp, #0xc
    // ldr r0, _021EDA70 ; =0x00000421
    // ldr r2, _021EDA74 ; =0x00000F58
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r1, #0
    // ldr r1, [r1, r2]
    // ldr r3, _021EDA78 ; =0x00004B6F
    // mov r2, #1
    // bl ov01_021ED474
    // add sp, #0xc
    // pop {pc}
    // _021EDA70: .word 0x00000421
    // _021EDA74: .word 0x00000F58
    // _021EDA78: .word 0x00004B6F
    // TODO: decompile
}


void ov01_021EDA7C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021EDAA8 ; =0x00000F68
    // add r4, r1, #0
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bgt _021EDAA4
    // ldr r1, _021EDAAC ; =0x00000638
    // add r0, r4, #0
    // bl ov01_021EDAB4
    // add r0, r5, #0
    // bl SysTask_Destroy
    // ldr r0, _021EDAB0 ; =0x00000F6C
    // mov r1, #0
    // str r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _021EDAA8: .word 0x00000F68
    // _021EDAAC: .word 0x00000638
    // _021EDAB0: .word 0x00000F6C
    // TODO: decompile
}


void ov01_021EDAB4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021EDADC ; =0x00000F5C
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021EDAC6
    // bl GF_AssertFail
    // ldr r1, _021EDADC ; =0x00000F5C
    // mov r0, #1
    // str r0, [r5, r1]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // add r1, r1, #4
    // strh r0, [r5, r1]
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // nop
    // _021EDADC: .word 0x00000F5C
    // TODO: decompile
}


void ov01_021EDAE0(void) {
    StopSE(0xf6, 0, 0);
}

