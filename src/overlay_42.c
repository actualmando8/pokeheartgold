/* Decompiled from asm/overlay_42.s */
#include "global.h"

void ov42_02227060(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r3, #0
    // add r4, r0, #0
    // ldr r1, _02227100 ; =0x0000230C
    // add r0, r6, #0
    // str r2, [sp]
    // bl Heap_Alloc
    // ldr r2, _02227100 ; =0x0000230C
    // add r7, r0, #0
    // mov r1, #0
    // bl memset
    // str r4, [r7]
    // mov r0, #0xb3
    // add r1, r6, #0
    // str r5, [r7, #4]
    // bl NARC_New
    // ldr r1, _02227104 ; =0x00002304
    // str r0, [r7, r1]
    // mov r0, #0xba
    // add r1, r6, #0
    // bl NARC_New
    // ldr r1, _02227108 ; =0x00002308
    // mov r4, #0
    // str r0, [r7, r1]
    // add r5, r7, #0
    // mov r0, #0x9a
    // add r1, r4, #0
    // add r2, r6, #0
    // bl Create2DGfxResObjMan
    // ldr r1, _0222710C ; =0x000022F0
    // add r4, r4, #1
    // str r0, [r5, r1]
    // add r5, r5, #4
    // cmp r4, #2
    // blt _0222709C
    // mov r5, #0
    // add r4, r7, #0
    // mov r0, #0x17
    // add r1, r5, #2
    // add r2, r6, #0
    // bl Create2DGfxResObjMan
    // ldr r1, _02227110 ; =0x000022F8
    // add r5, r5, #1
    // str r0, [r4, r1]
    // add r4, r4, #4
    // cmp r5, #2
    // blt _022270B6
    // mov r4, #0
    // add r0, r7, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov42_02227570
    // add r4, r4, #1
    // cmp r4, #3
    // blt _022270CE
    // ldr r0, [sp]
    // ldr r2, [sp]
    // mov r1, #0x18
    // str r0, [r7, #0xc]
    // add r0, r6, #0
    // mul r1, r2
    // bl Heap_Alloc
    // str r0, [r7, #8]
    // ldr r3, [r7, #0xc]
    // mov r2, #0x18
    // mov r1, #0
    // mul r2, r3
    // bl memset
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02227100: .word 0x0000230C
    // _02227104: .word 0x00002304
    // _02227108: .word 0x00002308
    // _0222710C: .word 0x000022F0
    // _02227110: .word 0x000022F8
    // TODO: decompile
}



void ov42_02227114(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // cmp r0, #0
    // bls _02227140
    // add r4, r6, #0
    // ldr r0, [r5, #8]
    // add r0, r0, r4
    // bl ov42_02227E68
    // cmp r0, #0
    // bne _02227136
    // ldr r0, [r5, #8]
    // add r0, r0, r4
    // bl ov42_0222740C
    // ldr r0, [r5, #0xc]
    // add r6, r6, #1
    // add r4, #0x18
    // cmp r6, r0
    // blo _02227122
    // mov r4, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov42_02227604
    // add r4, r4, #1
    // cmp r4, #3
    // blt _02227142
    // add r0, r5, #0
    // bl ov42_022271F8
    // ldr r0, _02227188 ; =0x00002304
    // ldr r0, [r5, r0]
    // bl NARC_Delete
    // ldr r0, _0222718C ; =0x00002308
    // ldr r0, [r5, r0]
    // bl NARC_Delete
    // ldr r7, _02227190 ; =0x000022F0
    // mov r6, #0
    // add r4, r5, #0
    // ldr r0, [r4, r7]
    // bl Destroy2DGfxResObjMan
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #4
    // blt _0222716C
    // ldr r0, [r5, #8]
    // bl Heap_Free
    // add r0, r5, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // _02227188: .word 0x00002304
    // _0222718C: .word 0x00002308
    // _02227190: .word 0x000022F0
    // TODO: decompile
}



void ov42_02227194(void) {
    ov42_02227680(r1, r3);
    GF_AssertFail();
    ov42_02227654(r4);
    // ldr r0, [sp, #0x20]
    // str r0, [sp]
    // str r0, [sp, #4]
    ov42_022276DC(r5, r0, r6, r7);
}



void ov42_022271D0(void) {
}



void ov42_022271E4(void) {
}



void ov42_022271F8(void) {
    // ldr r1, [r4, r1]
    ov42_02227274((0x23 << 8));
    ov42_022279E8(r4, 0);
    ov42_02227948(r4, r5);
}



void ov42_02227228(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r0, #0
    // add r6, r3, #0
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // add r0, r2, #0
    // bne _0222723C
    // bl GF_AssertFail
    // ldr r1, [sp, #8]
    // add r0, r7, #0
    // add r2, r6, #0
    // bl ov42_02227B6C
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov42_02227C18
    // ldr r5, _02227270 ; =ov42_02229B10
    // mov r4, #0
    // str r6, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldrb r1, [r5]
    // ldr r2, [sp, #8]
    // ldr r3, [sp, #0xc]
    // add r0, r7, #0
    // bl ov42_022276DC
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #0x10
    // blt _02227252
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02227270: .word ov42_02229B10
    // TODO: decompile
}



void ov42_02227274(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // bl ov42_02227BE0
    // add r0, r6, #0
    // bl ov42_02227CA8
    // ldr r5, _02227298 ; =ov42_02229B10
    // mov r4, #0
    // ldrb r1, [r5]
    // add r0, r6, #0
    // bl ov42_02227948
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #0x10
    // blt _02227286
    // pop {r4, r5, r6, pc}
    // _02227298: .word ov42_02229B10
    // TODO: decompile
}



void ov42_0222729C(void) {
}



void ov42_022272B4(void) {
}



void ov42_022272BC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r7, r2, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // str r3, [sp]
    // bl ov42_02227CF8
    // add r4, r0, #0
    // add r0, r7, #0
    // bl ov42_02227654
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, r5, #0
    // bl ov42_022279E8
    // cmp r0, #1
    // beq _022272E6
    // bl GF_AssertFail
    // mov r0, #0
    // add r2, sp, #0xc
    // add r1, r0, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r1, [r5]
    // mov r2, #0x38
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #4]
    // add r7, r1, #0
    // add r1, r5, #0
    // mul r7, r2
    // add r1, #0x24
    // add r1, r1, r7
    // str r1, [sp, #0x10]
    // ldrsh r0, [r6, r0]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x14]
    // mov r0, #2
    // ldrsh r1, [r6, r0]
    // lsl r1, r1, #0xc
    // str r1, [sp, #0x18]
    // lsl r1, r0, #0xb
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // mov r1, #4
    // ldrsh r1, [r6, r1]
    // str r1, [sp, #0x30]
    // ldr r1, [sp]
    // str r1, [sp, #0x38]
    // add r1, r5, #0
    // str r1, [sp, #8]
    // add r1, #0x1c
    // str r1, [sp, #8]
    // ldr r1, [r1, r7]
    // cmp r1, #3
    // beq _0222733E
    // cmp r1, #1
    // bne _02227344
    // mov r0, #1
    // str r0, [sp, #0x34]
    // b _02227346
    // str r0, [sp, #0x34]
    // add r0, sp, #0xc
    // bl Sprite_CreateAffine
    // str r0, [r4, #4]
    // mov r1, #6
    // ldrsh r1, [r6, r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl Sprite_SetPriority
    // add r0, r5, r7
    // ldr r0, [r0, #0x20]
    // cmp r0, #1
    // ldr r0, [r4, #4]
    // bne _0222736C
    // mov r1, #6
    // bl Sprite_SetAnimCtrlSeq
    // b _02227372
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #9
    // str r0, [r4, #0xc]
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // mov r0, #1
    // str r0, [r4, #0x10]
    // add r0, r5, #0
    // add r0, #0x10
    // add r0, r0, r7
    // str r0, [r4]
    // ldr r0, _02227404 ; =0x000022B8
    // add r0, r5, r0
    // bl ov42_02227B5C
    // cmp r0, #0
    // beq _022273F8
    // mov r0, #0
    // add r2, sp, #0xc
    // add r1, r0, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r1, [r5]
    // str r1, [sp, #0xc]
    // ldr r1, _02227408 ; =0x000022C8
    // add r2, r5, r1
    // str r2, [sp, #0x10]
    // ldrsh r0, [r6, r0]
    // add r1, #0x24
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x14]
    // mov r0, #2
    // ldrsh r2, [r6, r0]
    // lsl r2, r2, #0xc
    // str r2, [sp, #0x18]
    // lsl r2, r0, #0xb
    // str r2, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // ldr r1, [r5, r1]
    // str r1, [sp, #0x30]
    // ldr r1, [sp]
    // str r1, [sp, #0x38]
    // ldr r1, [sp, #8]
    // ldr r1, [r1, r7]
    // cmp r1, #3
    // beq _022273DA
    // cmp r1, #1
    // bne _022273E0
    // mov r0, #1
    // str r0, [sp, #0x34]
    // b _022273E2
    // str r0, [sp, #0x34]
    // add r0, sp, #0xc
    // bl Sprite_CreateAffine
    // str r0, [r4, #8]
    // mov r1, #6
    // ldrsh r1, [r6, r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl Sprite_SetPriority
    // b _022273FC
    // mov r0, #0
    // str r0, [r4, #8]
    // add r0, r4, #0
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02227404: .word 0x000022B8
    // _02227408: .word 0x000022C8
    // TODO: decompile
}



void ov42_0222740C(void) {
    Sprite_Delete(*((u32*)(r0 + 8)));
    Sprite_Delete(*((u32*)(r4 + 4)));
    // strb r0, [r4]
}



void ov42_02227430(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}



void ov42_02227434(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r0 + 4)));
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r1, sp, #0
    Sprite_SetMatrix(*((u32*)(r4 + 8)));
}



void ov42_02227474(void) {
}



void ov42_02227480(void) {
}



void ov42_02227490(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 4)));
    Sprite_SetDrawFlag(*((u32*)(r5 + 8)), r4);
}



void ov42_022274AC(void) {
}



void ov42_022274B8(void) {
    // ldr r0, [r0]
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}



void ov42_022274C0(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
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
    Sprite_SetMatrix(*((u32*)(r0 + 8)), 0, *((u32*)(r0 + 8)));
}



void ov42_02227504(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r4, #0xa
    // blt _02227514
    // bl GF_AssertFail
    // cmp r6, #4
    // blt _0222751C
    // bl GF_AssertFail
    // str r4, [r5, #0xc]
    // mov r0, #0
    // strh r0, [r5, #0x14]
    // ldr r0, _02227534 ; =ov42_02229B20
    // lsl r1, r4, #2
    // ldr r2, [r0, r1]
    // cmp r2, #0
    // beq _02227532
    // add r0, r5, #0
    // add r1, r6, #0
    // blx r2
    // pop {r4, r5, r6, pc}
    // _02227534: .word ov42_02229B20
    // TODO: decompile
}



void ov42_02227538(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r2, [r4, #0xc]
    // ldr r1, _0222756C ; =ov42_02229B04
    // mov r0, #0
    // ldrb r2, [r1, r2]
    // cmp r2, #0xff
    // bne _0222754C
    // mov r0, #1
    // b _02227558
    // mov r1, #0x14
    // ldrsh r1, [r4, r1]
    // add r1, r1, #1
    // cmp r2, r1
    // blt _02227558
    // mov r0, #1
    // cmp r0, #1
    // bne _0222756A
    // add r0, r4, #0
    // bl ov42_02227D30
    // mov r0, #0x14
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4, #0x14]
    // pop {r4, pc}
    // _0222756C: .word ov42_02229B04
    // TODO: decompile
}



void ov42_02227570(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp, #0xc]
    // add r0, r1, #0
    // lsl r5, r0, #4
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r0, r5
    // ldr r0, _022275F0 ; =0x00002188
    // str r2, [sp, #0x14]
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0222758E
    // bl GF_AssertFail
    // ldr r0, _022275F4 ; =ov42_02229B70
    // ldr r6, _022275F8 ; =_02229AF8
    // add r4, r0, r5
    // ldr r0, [sp, #0xc]
    // mov r7, #0
    // add r5, r0, r5
    // ldr r0, [sp, #0x10]
    // lsl r1, r0, #1
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // lsr r2, r7, #0x1f
    // lsl r1, r7, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // ldrb r2, [r6]
    // ldr r1, [sp, #0x18]
    // add r0, r0, #2
    // add r1, r2, r1
    // str r1, [sp]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // lsl r1, r0, #2
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // add r1, r0, r1
    // ldr r0, _022275FC ; =0x000022F0
    // mov r3, #0
    // ldr r0, [r1, r0]
    // ldr r1, _02227600 ; =0x00002304
    // ldr r1, [r2, r1]
    // ldr r2, [r4]
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _022275F0 ; =0x00002188
    // add r7, r7, #1
    // str r0, [r5, r1]
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r7, #4
    // blt _022275A6
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022275F0: .word 0x00002188
    // _022275F4: .word ov42_02229B70
    // _022275F8: .word _02229AF8
    // _022275FC: .word 0x000022F0
    // _02227600: .word 0x00002304
    // TODO: decompile
}



void ov42_02227604(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // lsl r5, r1, #4
    // ldr r0, _0222764C ; =0x00002188
    // add r1, r6, r5
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // bne _02227618
    // bl GF_AssertFail
    // mov r4, #0
    // add r5, r6, r5
    // add r7, r4, #0
    // lsr r2, r4, #0x1f
    // lsl r1, r4, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r0, #2
    // lsl r0, r0, #2
    // add r1, r6, r0
    // ldr r0, _02227650 ; =0x000022F0
    // ldr r0, [r1, r0]
    // ldr r1, _0222764C ; =0x00002188
    // ldr r1, [r5, r1]
    // bl DestroySingle2DGfxResObj
    // ldr r0, _0222764C ; =0x00002188
    // add r4, r4, #1
    // str r7, [r5, r0]
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0222761E
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222764C: .word 0x00002188
    // _02227650: .word 0x000022F0
    // TODO: decompile
}



void ov42_02227654(void) {
    // push {r3, lr}
    // ldr r3, _02227678 ; =ov42_02229BA0
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _02227668
    // ldr r0, _0222767C ; =ov42_02229BA2
    // lsl r1, r2, #2
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // add r2, r2, #1
    // add r3, r3, #4
    // cmp r2, #0x99
    // blt _0222765A
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // _02227678: .word ov42_02229BA0
    // _0222767C: .word ov42_02229BA2
    // TODO: decompile
}



void ov42_02227680(void) {
    // cmp r1, #0
    // bne _022276A4
    // cmp r0, #0
    // beq _0222769C
    // cmp r0, #0x61
    // beq _0222769C
    // cmp r0, #0xee
    // beq _0222769C
    // cmp r0, #0xef
    // beq _0222769C
    // ldr r1, _022276A8 ; =0x00000127
    // sub r0, r0, r1
    // cmp r0, #1
    // bhi _022276A0
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // mov r0, #1
    // bx lr
    // _022276A8: .word 0x00000127
    // TODO: decompile
}



void ov42_022276AC(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r4, #2
    // beq _022276C0
    // cmp r4, #3
    // beq _022276C0
    // bl GF_AssertFail
    // sub r1, r4, #2
    // cmp r6, #0
    // bne _022276C8
    // add r1, r1, #2
    // ldr r0, _022276D8 ; =_02229AF8
    // ldrb r2, [r0, r1]
    // mov r0, #1
    // lsl r1, r5, #1
    // lsl r0, r0, #8
    // add r0, r1, r0
    // add r0, r2, r0
    // pop {r4, r5, r6, pc}
    // _022276D8: .word _02229AF8
    // TODO: decompile
}



void ov42_022276DC(void) {
    // mul r0, r4
    // add r0, r5, r0
    GF_AssertFail(*((u32*)(0x38 + 0x14)));
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    ov42_02227720(r5, r4, r6, r7);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    ov42_02227874(r5, r4, r6, r7);
}



void ov42_02227720(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // add r5, r0, #0
    // ldr r0, [sp, #0x58]
    // add r6, r5, #0
    // str r0, [sp, #0x40]
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // lsl r0, r1, #1
    // str r0, [sp, #0x3c]
    // add r4, r1, #0
    // mov r0, #0x38
    // mul r4, r0
    // ldr r0, [sp, #0x38]
    // str r3, [sp, #0x30]
    // str r0, [sp]
    // add r0, r2, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // str r2, [sp, #0x2c]
    // ldr r2, [sp, #0x3c]
    // ldr r1, _0222786C ; =0x000022F0
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, #0x14
    // ldr r1, [r5, r1]
    // add r6, #0x14
    // add r2, #0xe
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // str r0, [r6, r4]
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x3c]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r7, r5, #0
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x40]
    // add r2, #0xd
    // ldr r1, _02227870 ; =0x000022F4
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, #0x10
    // ldr r1, [r5, r1]
    // add r7, #0x18
    // mov r3, #0
    // str r2, [sp, #0x3c]
    // bl AddPlttResObjFromOpenNarc
    // str r0, [r7, r4]
    // ldr r0, [r6, r4]
    // bl GF2DGfxResObj_GetCharDataPtr
    // mov r1, #6
    // ldr r2, [r0, #0x10]
    // lsl r1, r1, #0xa
    // cmp r2, r1
    // beq _022277A4
    // mov r1, #1
    // str r1, [sp, #0x34]
    // b _022277A8
    // mov r1, #0
    // str r1, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // cmp r1, #2
    // bne _022277B6
    // mov r1, #2
    // lsl r1, r1, #0xa
    // str r1, [r0, #0x10]
    // b _022277CE
    // cmp r1, #1
    // bne _022277CE
    // ldr r1, [sp, #0x34]
    // cmp r1, #0
    // beq _022277C8
    // mov r1, #5
    // lsl r1, r1, #0xa
    // str r1, [r0, #0x10]
    // b _022277CE
    // mov r1, #6
    // lsl r1, r1, #0xa
    // str r1, [r0, #0x10]
    // ldr r0, [r6, r4]
    // bl sub_0200AE18
    // cmp r0, #0
    // bne _022277DC
    // bl GF_AssertFail
    // ldr r0, [r7, r4]
    // bl sub_0200B00C
    // cmp r0, #0
    // bne _022277EA
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _022277FA
    // ldr r1, [r7, r4]
    // add r0, r5, #0
    // mov r2, #1
    // bl ov42_02227E78
    // ldr r0, [r6, r4]
    // bl sub_0200A740
    // ldr r0, [r7, r4]
    // bl sub_0200A740
    // ldr r0, [sp, #0x2c]
    // add r1, r5, r4
    // str r0, [r1, #0x1c]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    // str r0, [r1, #0x20]
    // mov r0, #0
    // str r0, [r1, #0x10]
    // ldr r0, [sp, #0x30]
    // mov r1, #2
    // bl ov42_022276AC
    // add r6, r0, #0
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    // mov r1, #3
    // bl ov42_022276AC
    // str r0, [sp]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, _0222786C ; =0x000022F0
    // str r0, [sp, #0x10]
    // ldr r1, [r5, r2]
    // add r3, r6, #0
    // str r1, [sp, #0x14]
    // add r1, r2, #4
    // ldr r1, [r5, r1]
    // str r1, [sp, #0x18]
    // add r1, r2, #0
    // add r1, #8
    // ldr r1, [r5, r1]
    // add r2, #0xc
    // str r1, [sp, #0x1c]
    // ldr r1, [r5, r2]
    // add r5, #0x24
    // str r1, [sp, #0x20]
    // ldr r1, [sp, #0x38]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r5, r4
    // add r2, r1, #0
    // bl CreateSpriteResourcesHeader
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222786C: .word 0x000022F0
    // _02227870: .word 0x000022F4
    // TODO: decompile
}



void ov42_02227874(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r7, r1, #0
    // add r5, r0, #0
    // sub r0, r7, #2
    // str r0, [sp, #0x38]
    // mov r0, #2
    // lsl r0, r0, #8
    // add r0, r7, r0
    // str r0, [sp, #0x34]
    // mov r0, #0x38
    // add r4, r7, #0
    // mul r4, r0
    // ldr r0, [sp, #0x34]
    // add r6, r5, #0
    // str r0, [sp]
    // add r0, r2, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x50]
    // str r2, [sp, #0x2c]
    // str r3, [sp, #0x30]
    // ldr r1, _02227940 ; =0x000022F0
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, #0x18
    // ldr r1, [r5, r1]
    // add r6, #0x14
    // sub r2, r7, #1
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // str r0, [r6, r4]
    // ldr r0, [sp, #0x30]
    // cmp r0, #2
    // bne _022278C8
    // ldr r0, [r6, r4]
    // bl GF2DGfxResObj_GetCharDataPtr
    // mov r1, #2
    // lsl r1, r1, #0xa
    // str r1, [r0, #0x10]
    // b _022278D8
    // cmp r0, #1
    // bne _022278D8
    // ldr r0, [r6, r4]
    // bl GF2DGfxResObj_GetCharDataPtr
    // mov r1, #5
    // lsl r1, r1, #0xa
    // str r1, [r0, #0x10]
    // ldr r0, [r6, r4]
    // bl sub_0200AE18
    // cmp r0, #0
    // bne _022278E6
    // bl GF_AssertFail
    // ldr r0, [r6, r4]
    // bl sub_0200A740
    // mov r0, #0
    // add r2, r5, r4
    // ldr r1, [sp, #0x2c]
    // str r0, [r2, #0x18]
    // str r1, [r2, #0x1c]
    // ldr r1, [sp, #0x30]
    // mov r6, #1
    // str r1, [r2, #0x20]
    // str r6, [r2, #0x10]
    // mov r2, #6
    // ldr r1, [sp, #0x38]
    // lsl r2, r2, #6
    // add r3, r1, r2
    // str r3, [sp]
    // sub r1, r6, #2
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r2, _02227940 ; =0x000022F0
    // str r0, [sp, #0x10]
    // ldr r1, [r5, r2]
    // str r1, [sp, #0x14]
    // add r1, r2, #4
    // ldr r1, [r5, r1]
    // str r1, [sp, #0x18]
    // add r1, r2, #0
    // add r1, #8
    // ldr r1, [r5, r1]
    // add r2, #0xc
    // str r1, [sp, #0x1c]
    // ldr r1, [r5, r2]
    // add r5, #0x24
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x34]
    // ldr r2, _02227944 ; =0x00000402
    // add r0, r5, r4
    // bl CreateSpriteResourcesHeader
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _02227940: .word 0x000022F0
    // _02227944: .word 0x00000402
    // TODO: decompile
}



void ov42_02227948(void) {
    // mul r4, r0
    // add r0, r5, r4
    GF_AssertFail(*((u32*)(0x38 + 0x14)));
    // add r0, r5, r4
    ov42_0222797C(r5, r6);
    ov42_022279C0(r5, r6);
}



void ov42_0222797C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r5, #0
    // mov r0, #0x38
    // add r4, r1, #0
    // mul r4, r0
    // add r6, #0x14
    // ldr r0, [r6, r4]
    // bl sub_0200AEB0
    // add r7, r5, #0
    // add r7, #0x18
    // ldr r0, [r7, r4]
    // bl sub_0200B0A8
    // ldr r0, _022279B8 ; =0x000022F0
    // ldr r1, [r6, r4]
    // ldr r0, [r5, r0]
    // bl DestroySingle2DGfxResObj
    // ldr r0, _022279BC ; =0x000022F4
    // ldr r1, [r7, r4]
    // ldr r0, [r5, r0]
    // bl DestroySingle2DGfxResObj
    // mov r0, #0
    // str r0, [r6, r4]
    // str r0, [r7, r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022279B8: .word 0x000022F0
    // _022279BC: .word 0x000022F4
    // TODO: decompile
}



void ov42_022279C0(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r6, #0
    // mov r0, #0x38
    // add r4, r1, #0
    // add r5, #0x14
    // mul r4, r0
    // ldr r0, [r5, r4]
    // bl sub_0200AEB0
    // ldr r0, _022279E4 ; =0x000022F0
    // ldr r1, [r5, r4]
    // ldr r0, [r6, r0]
    // bl DestroySingle2DGfxResObj
    // mov r0, #0
    // str r0, [r5, r4]
    // pop {r4, r5, r6, pc}
    // _022279E4: .word 0x000022F0
    // TODO: decompile
}



void ov42_022279E8(void) {
    // mul r2, r1
    // add r0, r0, r2
}



void ov42_022279FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r6, r0, #0
    // ldr r0, _02227AF0 ; =0x000022B8
    // str r1, [sp, #0x2c]
    // ldr r0, [r6, r0]
    // add r7, r2, #0
    // cmp r0, #0
    // beq _02227A12
    // bl GF_AssertFail
    // mov r4, #0
    // ldr r5, _02227AF4 ; =ov42_02229AFC
    // str r4, [sp, #0x34]
    // ldrb r1, [r5]
    // add r0, r6, #0
    // bl ov42_022279E8
    // cmp r0, #1
    // bne _02227A30
    // ldr r0, _02227AF4 ; =ov42_02229AFC
    // ldrb r0, [r0, r4]
    // str r0, [sp, #0x30]
    // mov r0, #1
    // str r0, [sp, #0x34]
    // b _02227A38
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #6
    // blt _02227A18
    // ldr r0, [sp, #0x34]
    // cmp r0, #1
    // beq _02227A42
    // bl GF_AssertFail
    // mov r5, #0
    // add r4, r6, #0
    // mov r0, #0x12
    // lsl r0, r0, #4
    // str r0, [sp]
    // add r0, r5, #2
    // str r0, [sp, #4]
    // ldr r0, _02227AF8 ; =0x000022F8
    // str r7, [sp, #8]
    // ldr r1, _02227AFC ; =0x00002304
    // ldr r0, [r4, r0]
    // ldr r1, [r6, r1]
    // add r2, r5, #0
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x8b
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #2
    // blt _02227A46
    // mov r0, #0x12
    // lsl r0, r0, #4
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r1, #0x30
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // ldr r0, [r6, r1]
    // add r1, #0x14
    // ldr r1, [r6, r1]
    // mov r2, #2
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // ldr r1, _02227AF0 ; =0x000022B8
    // str r0, [r6, r1]
    // ldr r0, [r6, r1]
    // bl sub_0200AE18
    // cmp r0, #0
    // bne _02227A9E
    // bl GF_AssertFail
    // ldr r0, _02227AF0 ; =0x000022B8
    // ldr r0, [r6, r0]
    // bl sub_0200A740
    // mov r1, #0x12
    // lsl r1, r1, #4
    // mov r0, #0
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r3, _02227B00 ; =0x000022F0
    // str r0, [sp, #0x10]
    // ldr r2, [r6, r3]
    // str r2, [sp, #0x14]
    // add r2, r3, #4
    // ldr r2, [r6, r2]
    // str r2, [sp, #0x18]
    // add r2, r3, #0
    // add r2, #8
    // ldr r2, [r6, r2]
    // str r2, [sp, #0x1c]
    // add r2, r3, #0
    // add r2, #0xc
    // ldr r2, [r6, r2]
    // sub r3, #0x28
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r6, r3
    // add r3, r1, #0
    // ldr r2, [sp, #0x30]
    // add r3, #0xe0
    // add r2, r2, r3
    // add r3, r1, #0
    // bl CreateSpriteResourcesHeader
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _02227AF0: .word 0x000022B8
    // _02227AF4: .word ov42_02229AFC
    // _02227AF8: .word 0x000022F8
    // _02227AFC: .word 0x00002304
    // _02227B00: .word 0x000022F0
    // TODO: decompile
}



void ov42_02227B04(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _02227B50 ; =0x000022B8
    // add r0, r5, r0
    // bl ov42_02227B5C
    // cmp r0, #1
    // bne _02227B4C
    // ldr r0, _02227B50 ; =0x000022B8
    // ldr r0, [r5, r0]
    // bl sub_0200AEB0
    // ldr r1, _02227B54 ; =0x000022F0
    // ldr r0, [r5, r1]
    // sub r1, #0x38
    // ldr r1, [r5, r1]
    // bl DestroySingle2DGfxResObj
    // ldr r0, _02227B50 ; =0x000022B8
    // mov r4, #0
    // add r7, r0, #0
    // str r4, [r5, r0]
    // add r6, r4, #0
    // add r7, #8
    // ldr r0, _02227B58 ; =0x000022F8
    // mov r1, #0x8b
    // lsl r1, r1, #6
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // bl DestroySingle2DGfxResObj
    // str r6, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #2
    // blt _02227B34
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02227B50: .word 0x000022B8
    // _02227B54: .word 0x000022F0
    // _02227B58: .word 0x000022F8
    // TODO: decompile
}



void ov42_02227B5C(void) {
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02227B66
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov42_02227B6C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x23
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // add r4, r1, #0
    // add r6, r2, #0
    // cmp r0, #0
    // beq _02227B84
    // bl GF_AssertFail
    // ldr r0, _02227BD8 ; =0x00000402
    // mov r2, #0
    // str r0, [sp]
    // str r4, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // ldr r1, _02227BDC ; =0x000022F4
    // str r6, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, #0x14
    // ldr r1, [r5, r1]
    // add r3, r2, #0
    // bl AddPlttResObjFromOpenNarc
    // mov r1, #0x23
    // lsl r1, r1, #8
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // bl sub_0200B00C
    // cmp r0, #0
    // bne _02227BB4
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _02227BC8
    // mov r1, #0x23
    // lsl r1, r1, #8
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // mov r2, #8
    // bl ov42_02227E78
    // mov r0, #0x23
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // bl sub_0200A740
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _02227BD8: .word 0x00000402
    // _02227BDC: .word 0x000022F4
    // TODO: decompile
}



void ov42_02227BE0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x23
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _02227BF2
    // bl GF_AssertFail
    // mov r0, #0x23
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // bl sub_0200B0A8
    // ldr r1, _02227C14 ; =0x000022F4
    // ldr r0, [r4, r1]
    // add r1, #0xc
    // ldr r1, [r4, r1]
    // bl DestroySingle2DGfxResObj
    // mov r0, #0x23
    // mov r1, #0
    // lsl r0, r0, #8
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _02227C14: .word 0x000022F4
    // TODO: decompile
}



void ov42_02227C18(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, _02227C94 ; =0x000021B8
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _02227C2C
    // bl GF_AssertFail
    // mov r0, #0x11
    // mov r4, #0
    // str r0, [sp, #0x10]
    // add r6, r5, #0
    // mov r7, #0x12
    // mov r0, #6
    // lsl r0, r0, #6
    // add r0, r4, r0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, _02227C98 ; =0x00002308
    // str r0, [sp, #8]
    // ldr r0, _02227C9C ; =0x000022F8
    // ldr r1, [r5, r1]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x10]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _02227C94 ; =0x000021B8
    // add r2, r7, #0
    // str r0, [r6, r1]
    // mov r0, #6
    // lsl r0, r0, #6
    // add r0, r4, r0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r1, _02227C98 ; =0x00002308
    // str r0, [sp, #8]
    // ldr r0, _02227CA0 ; =0x000022FC
    // ldr r1, [r5, r1]
    // ldr r0, [r5, r0]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _02227CA4 ; =0x000021BC
    // add r4, r4, #1
    // str r0, [r6, r1]
    // ldr r0, [sp, #0x10]
    // add r6, #0x10
    // add r0, r0, #2
    // add r7, r7, #2
    // str r0, [sp, #0x10]
    // cmp r4, #0x10
    // blt _02227C36
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02227C94: .word 0x000021B8
    // _02227C98: .word 0x00002308
    // _02227C9C: .word 0x000022F8
    // _02227CA0: .word 0x000022FC
    // _02227CA4: .word 0x000021BC
    // TODO: decompile
}



void ov42_02227CA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _02227CE8 ; =0x000021B8
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _02227CB8
    // bl GF_AssertFail
    // mov r6, #0
    // add r4, r5, #0
    // add r7, r6, #0
    // ldr r0, _02227CEC ; =0x000022F8
    // ldr r1, _02227CE8 ; =0x000021B8
    // ldr r0, [r5, r0]
    // ldr r1, [r4, r1]
    // bl DestroySingle2DGfxResObj
    // ldr r0, _02227CF0 ; =0x000022FC
    // ldr r1, _02227CF4 ; =0x000021BC
    // ldr r0, [r5, r0]
    // ldr r1, [r4, r1]
    // bl DestroySingle2DGfxResObj
    // ldr r0, _02227CE8 ; =0x000021B8
    // add r6, r6, #1
    // str r7, [r4, r0]
    // add r0, r0, #4
    // str r7, [r4, r0]
    // add r4, #0x10
    // cmp r6, #0x10
    // blt _02227CBE
    // pop {r3, r4, r5, r6, r7, pc}
    // _02227CE8: .word 0x000021B8
    // _02227CEC: .word 0x000022F8
    // _02227CF0: .word 0x000022FC
    // _02227CF4: .word 0x000021BC
    // TODO: decompile
}



void ov42_02227CF8(void) {
    // add r0, r0, r4
    ov42_02227E68(*((u32*)(r0 + 8)));
    // mul r0, r6
    // add r0, r1, r0
    // add r4, #0x18
    GF_AssertFail(*((u32*)(r5 + 0xc)), *((u32*)(r5 + 8)));
}



void ov42_02227D30(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0xc]
    // lsl r2, r1, #2
    // ldr r1, _02227D44 ; =ov42_02229B48
    // ldr r1, [r1, r2]
    // cmp r1, #0
    // beq _02227D40
    // blx r1
    // pop {r3, pc}
    // nop
    // _02227D44: .word ov42_02229B48
    // TODO: decompile
}



void ov42_02227D48(void) {
}



void ov42_02227D54(void) {
    // ldr r3, _02227D60 ; =Sprite_TryChangeAnimSeq
    // str r1, [r0, #0x10]
    // ldr r0, [r0, #4]
    // mov r1, #4
    // bx r3
    // nop
    // _02227D60: .word Sprite_TryChangeAnimSeq
    // TODO: decompile
}



void ov42_02227D64(void) {
    // ldr r3, _02227D70 ; =Sprite_TryChangeAnimSeq
    // str r1, [r0, #0x10]
    // ldr r0, [r0, #4]
    // add r1, r1, #5
    // bx r3
    // nop
    // _02227D70: .word Sprite_TryChangeAnimSeq
    // TODO: decompile
}



void ov42_02227D74(void) {
}



void ov42_02227D88(void) {
    // ldr r3, _02227D94 ; =Sprite_TryChangeAnimSeq
    // str r1, [r0, #0x10]
    // ldr r0, [r0, #4]
    // add r1, #9
    // bx r3
    // nop
    // _02227D94: .word Sprite_TryChangeAnimSeq
    // TODO: decompile
}



void ov42_02227D98(void) {
    // ldr r3, _02227DA4 ; =Sprite_TryChangeAnimSeq
    // str r1, [r0, #0x10]
    // ldr r0, [r0, #4]
    // add r1, r1, #5
    // bx r3
    // nop
    // _02227DA4: .word Sprite_TryChangeAnimSeq
    // TODO: decompile
}



void ov42_02227DA8(void) {
    // ldr r3, _02227DB4 ; =Sprite_TryChangeAnimSeq
    // str r1, [r0, #0x10]
    // ldr r0, [r0, #4]
    // add r1, r1, #5
    // bx r3
    // nop
    // _02227DB4: .word Sprite_TryChangeAnimSeq
    // TODO: decompile
}



void ov42_02227DB8(void) {
    // ldr r3, _02227DC4 ; =Sprite_TryChangeAnimSeq
    // str r1, [r0, #0x10]
    // ldr r0, [r0, #4]
    // add r1, r1, #5
    // bx r3
    // nop
    // _02227DC4: .word Sprite_TryChangeAnimSeq
    // TODO: decompile
}



void ov42_02227DC8(void) {
    // ldr r3, _02227DD4 ; =Sprite_TryChangeAnimSeq
    // str r1, [r0, #0x10]
    // ldr r0, [r0, #4]
    // add r1, r1, #5
    // bx r3
    // nop
    // _02227DD4: .word Sprite_TryChangeAnimSeq
    // TODO: decompile
}



void ov42_02227DD8(void) {
    // ldr r3, _02227DE4 ; =Sprite_UpdateAnim
    // mov r1, #2
    // ldr r0, [r0, #4]
    // lsl r1, r1, #0xc
    // bx r3
    // nop
    // _02227DE4: .word Sprite_UpdateAnim
    // TODO: decompile
}



void ov42_02227DE8(void) {
    // ldr r3, _02227DF4 ; =Sprite_UpdateAnim
    // mov r1, #2
    // ldr r0, [r0, #4]
    // lsl r1, r1, #0xc
    // bx r3
    // nop
    // _02227DF4: .word Sprite_UpdateAnim
    // TODO: decompile
}



void ov42_02227DF8(void) {
    // ldrsh r0, [r1, r0]
    Sprite_SetAnimationFrame(*((u32*)(r0 + 4)), 1);
    Sprite_SetAnimCtrlSeq((*((u32*)(r1 + 0x10)) + 5));
}



void ov42_02227E18(void) {
    // ldr r3, _02227E24 ; =Sprite_UpdateAnim
    // mov r1, #2
    // ldr r0, [r0, #4]
    // lsl r1, r1, #0xc
    // bx r3
    // nop
    // _02227E24: .word Sprite_UpdateAnim
    // TODO: decompile
}



void ov42_02227E28(void) {
    // ldr r3, _02227E34 ; =Sprite_UpdateAnim
    // mov r1, #1
    // ldr r0, [r0, #4]
    // lsl r1, r1, #0xc
    // bx r3
    // nop
    // _02227E34: .word Sprite_UpdateAnim
    // TODO: decompile
}



void ov42_02227E38(void) {
    // ldr r3, _02227E44 ; =Sprite_UpdateAnim
    // mov r1, #1
    // ldr r0, [r0, #4]
    // lsl r1, r1, #0xc
    // bx r3
    // nop
    // _02227E44: .word Sprite_UpdateAnim
    // TODO: decompile
}



void ov42_02227E48(void) {
    // ldr r3, _02227E54 ; =Sprite_UpdateAnim
    // mov r1, #2
    // ldr r0, [r0, #4]
    // lsl r1, r1, #0xe
    // bx r3
    // nop
    // _02227E54: .word Sprite_UpdateAnim
    // TODO: decompile
}



void ov42_02227E58(void) {
    // ldr r3, _02227E64 ; =Sprite_UpdateAnim
    // mov r1, #6
    // ldr r0, [r0, #4]
    // lsl r1, r1, #0xc
    // bx r3
    // nop
    // _02227E64: .word Sprite_UpdateAnim
    // TODO: decompile
}



void ov42_02227E68(void) {
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _02227E72
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov42_02227E78(void) {
    GF2DGfxResObj_GetPlttDataPtr(r1);
    // str r0, [sp, #4]
    SpriteTransfer_GetPlttOffset(r6, 1);
    SpriteTransfer_GetPlttOffset(r6, 2);
    // mvn r0, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    PaletteData_LoadPalette(*((u32*)(r5 + 4)), *((u32*)(r1 + 0xc)), 2, ((r7 << 0x14) >> 0x10));
    // mvn r0, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    PaletteData_LoadPalette(*((u32*)(r5 + 4)), *((u32*)(r1 + 0xc)), 3, ((r6 << 0x14) >> 0x10));
}



void ov42_02227EE0(void) {
    Heap_Alloc(r2, 8);
    GF_AssertFail();
    // strh r5, [r4]
    *((u16*)(r4 + 2)) = r6;
    // ldrh r2, [r4]
    // mul r1, r2
    Heap_Alloc(r7, (*((u16*)(r4 + 2)) << 2));
    *((u32*)(r4 + 4)) = r0;
    GF_AssertFail();
    // ldrh r3, [r4]
    // mul r2, r3
    memset(*((u32*)(r4 + 4)), 0, (*((u16*)(r4 + 2)) << 2));
}



void ov42_02227F28(void) {
    GF_AssertFail();
    Heap_Free(*((u32*)(r4 + 4)));
    Heap_Free(r4);
}



void ov42_02227F40(void) {
    // ldrh r0, [r0]
}



void ov42_02227F44(void) {
    // ldrh r0, [r0, #2]
    // bx lr
    // TODO: decompile
}



void ov42_02227F48(void) {
    GF_AssertFail();
    // ldrh r3, [r4]
    // mul r2, r3
    memcpy(*((u32*)(r4 + 4)), r5, (*((u16*)(r4 + 2)) << 2));
}



void ov42_02227F68(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // ldr r0, _02227FA0 ; =ov42_02229E04
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r6, r2, #0
    // str r0, [sp]
    // cmp r5, #0
    // bne _02227F80
    // bl GF_AssertFail
    // ldrh r2, [r5]
    // cmp r2, r4
    // bls _02227F9A
    // ldrh r0, [r5, #2]
    // cmp r0, r6
    // bls _02227F9A
    // add r0, r2, #0
    // mul r0, r6
    // add r0, r4, r0
    // ldr r1, [r5, #4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // str r0, [sp]
    // ldr r0, [sp]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _02227FA0: .word ov42_02229E04
    // TODO: decompile
}



void ov42_02227FA4(void) {
    GF_AssertFail();
    ov42_02227F68(r5, r4, r6);
    // mvn r1, r1
    // str r0, [sp]
    // str r0, [sp, #4]
}



void ov42_02227FDC(void) {
    GF_AssertFail();
    ov42_02227F68(r5, r4, r6);
    // mvn r1, r1
    // str r0, [sp]
    // str r0, [sp, #4]
}



u32 ov42_02228010(void) {
    Heap_Alloc(r1, 8);
    GF_AssertFail();
    // mul r1, r5
    *((u32*)(r4 + 4)) = r5;
    Heap_Alloc(r6, 0x18);
    // str r0, [r4]
    GF_AssertFail();
    // mul r2, r3
    memset(*((u32*)r4), 0, 0x18, *((u32*)(r4 + 4)));
}



void ov42_02228050(void) {
    GF_AssertFail();
    Heap_Free(*((u32*)r4));
    Heap_Free(r4);
}



void ov42_02228068(void) {
}



void ov42_0222807C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // bl ov42_022280A8
    // add r5, r0, #0
    // ldr r4, _022280A4 ; =0x00000000
    // beq _022280A2
    // lsl r1, r4, #0x10
    // add r0, r6, #0
    // lsr r1, r1, #0x10
    // bl ov42_02228148
    // cmp r0, #0
    // beq _0222809C
    // bl ov42_02228574
    // add r4, r4, #1
    // cmp r4, r5
    // blo _0222808A
    // pop {r4, r5, r6, pc}
    // _022280A4: .word 0x00000000
    // TODO: decompile
}



void ov42_022280A8(void) {
}



s32 ov42_022280B8(void) {
    GF_AssertFail();
    GF_AssertFail();
    ov42_022282B0(r5);
    // ldrsh r2, [r4, r1]
    *((u16*)(r0 + 4)) = r2;
    // ldrsh r3, [r4, r2]
    *((u16*)(r0 + 6)) = r3;
    // ldrsh r1, [r4, r1]
    *((u16*)(r0 + 8)) = 0;
    // ldrsh r1, [r4, r2]
    *((u16*)(r0 + 0xa)) = 0;
    *((u16*)(r0 + 0xc)) = *((u16*)(r4 + 4));
    *((u8*)(r0 + 0x15)) = *((u16*)(r4 + 6));
    *((u8*)(r0 + 0x14)) = *((u16*)(r4 + 8));
    *((u16*)(r0 + 0xe)) = *((u16*)(r4 + 0xa));
    // str r1, [r0]
}



void ov42_02228100(void) {
    // strb r1, [r0]
}



void ov42_02228110(void) {
    // add r6, r4, r3
    // mul r0, r2
    // add r0, r4, r0
    // add r0, #0x18
    // add r3, #0x18
}



void ov42_02228148(void) {
    GF_AssertFail();
    GF_AssertFail(*((u32*)(r5 + 4)));
    // mul r1, r0
    // ldr r0, [r2, r1]
    // add r0, r2, r1
}



void ov42_02228178(void) {
}



void ov42_02228180(void) {
}



s32 ov42_02228188(void) {
    GF_AssertFail();
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022281A6: ; jump table
    // ldrsh r5, [r4, r0]
    // ldrsh r5, [r4, r0]
    // ldrsh r5, [r4, r0]
    // ldrsh r5, [r4, r0]
    GF_AssertFail(0xa);
}



void ov42_022281F8(void) {
    GF_AssertFail();
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02228218: ; jump table
    *((u16*)(r5 + 4)) = r4;
    *((u16*)(r5 + 6)) = r4;
    *((u16*)(r5 + 8)) = r4;
    *((u16*)(r5 + 0xa)) = r4;
    *((u16*)(r5 + 0xc)) = r4;
    GF_AssertFail((*((u16*)(r0 + 6)) << 0x10));
    *((u8*)(r5 + 0x15)) = r4;
    GF_AssertFail();
    *((u8*)(r5 + 0x14)) = r4;
    *((u16*)(r5 + 0xe)) = r4;
    *((u16*)(r5 + 0x10)) = r4;
    *((u16*)(r5 + 0x12)) = r4;
    *((u16*)(r5 + 0x16)) = r4;
    GF_AssertFail();
}



void ov42_02228270(void) {
    // push {r0, r1, r2, r3}
    // lsl r0, r1, #1
    // add r2, sp, #0
    // mov r1, #0
    // ldrsh r3, [r2, r1]
    // ldr r1, _0222829C ; =ov42_02229E0C
    // ldrsb r1, [r1, r0]
    // add r1, r3, r1
    // strh r1, [r2]
    // mov r1, #2
    // ldrsh r3, [r2, r1]
    // ldr r1, _022282A0 ; =ov42_02229E0D
    // ldrsb r0, [r1, r0]
    // add r0, r3, r0
    // strh r0, [r2, #2]
    // ldrh r1, [r2, #2]
    // ldrh r0, [r2]
    // lsl r1, r1, #0x10
    // orr r0, r1
    // add sp, #0x10
    // bx lr
    // nop
    // _0222829C: .word ov42_02229E0C
    // _022282A0: .word ov42_02229E0D
    // TODO: decompile
}



void ov42_022282A4(void) {
    // ldr r1, _022282AC ; =ov42_02229E08
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _022282AC: .word ov42_02229E08
    // TODO: decompile
}



void ov42_022282B0(void) {
    // mul r0, r1
    // add r0, r3, r0
    // add r2, #0x18
    GF_AssertFail(0x18, (0 + 1), *((u32*)r0), *((u32*)r0));
}



void ov42_022282DC(void) {
    // orr r0, r1
}



void ov42_022282E8(void) {
    // orr r0, r1
}



void ov42_022282F4(void) {
    ov42_02228188(8);
    ov42_02228188(r5, 9);
    ov42_022282DC(r5);
    // add r1, sp, #0
    *((u16*)(r1 + 4)) = r0;
    *((u16*)(r1 + 6)) = (r0 >> 0x10);
    *((u16*)(r1 + 0xc)) = *((u16*)(r1 + 4));
    *((u16*)(r1 + 0xe)) = *((u16*)(r1 + 6));
    ov42_022282E8(r5);
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    *((u16*)(r1 + 8)) = (r0 >> 0x10);
    *((u16*)(r1 + 0xa)) = *((u16*)(r1 + 2));
    // ldrsh r3, [r1, r0]
    // ldrsh r2, [r1, r2]
    // sub r2, r3, r2
    *((u16*)(r1 + 0xc)) = 8;
    // ldrsh r5, [r1, r2]
    // ldrsh r2, [r1, r2]
    // sub r2, r2, r5
    *((u16*)(r1 + 0xe)) = 0xe;
    // ldrsh r0, [r1, r0]
    // mul r0, r4
    _s32_div_f(0xc, r6, 0xe);
    // add r1, sp, #0
    *((u16*)(r1 + 0xc)) = r0;
    // ldrsh r0, [r1, r0]
    // mul r0, r4
    _s32_div_f(0xe, r6);
    // add r1, sp, #0
    *((u16*)(r1 + 0xc)) = 0;
    *((u16*)(r1 + 0xe)) = 0;
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    *((u16*)(r1 + 0xc)) = 8;
    // ldrsh r0, [r1, r0]
    // add r0, r0, r5
    *((u16*)(r1 + 0xe)) = 0xe;
    // orr r0, r1
}



void ov42_0222839C(void) {
    // add r1, sp, #0
    *((u16*)(r0 + 4)) = *((u16*)(r1 + 4));
    *((u16*)(r0 + 6)) = *((u16*)(r1 + 6));
}



void ov42_022283AC(void) {
    // add r1, sp, #0
    *((u16*)(r0 + 8)) = *((u16*)(r1 + 4));
    *((u16*)(r0 + 0xa)) = *((u16*)(r1 + 6));
}



void ov42_022283BC(void) {
    // str r1, [sp]
    ov42_022282DC();
    // add r1, sp, #0x10
    *((u16*)(r1 + 0xc)) = r0;
    *((u16*)(r1 + 0xe)) = (r0 >> 0x10);
    // mov r2, sp
    *((u16*)(r1 + 0x1c)) = *((u16*)(r1 + 0xc));
    *((u16*)(r1 + 0x1e)) = *((u16*)(r1 + 0xe));
    // strh r0, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r1 + 0x1e));
    ov42_02228270(*((u32*)(r2 - 4)), r4, (r2 - 4));
    // add r1, sp, #0x10
    *((u16*)(r1 + 8)) = r0;
    *((u16*)(r1 + 0xa)) = (r0 >> 0x10);
    *((u16*)(r1 + 0x14)) = *((u16*)(r1 + 8));
    *((u16*)(r1 + 0x16)) = *((u16*)(r1 + 0xa));
    ov42_02228188(r5, 4);
    // str r0, [sp, #4]
    // ldr r0, [sp]
    ov42_022280A8();
    // str r0, [sp, #8]
    // add r4, sp, #0x10
    // ldrsh r7, [r4, r0]
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    ov42_02228180(0x14, ((0 << 0x10) >> 0x10));
    ov42_02228188(4);
    // ldr r1, [sp, #4]
    ov42_022282DC(r6);
    *((u16*)(r4 + 4)) = r0;
    *((u16*)(r4 + 6)) = (r0 >> 0x10);
    *((u16*)(r4 + 0x18)) = *((u16*)(r4 + 4));
    *((u16*)(r4 + 0x1a)) = *((u16*)(r4 + 6));
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0xc]
    // ldrsh r0, [r4, r0]
    ov42_022282E8(r6);
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r4]
    *((u16*)(r4 + 0x10)) = (r0 >> 0x10);
    *((u16*)(r4 + 0x12)) = *((u16*)(r4 + 2));
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #0xc]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #8]
}



void ov42_022284A4(void) {
    // add r2, sp, #0x30
    // str r0, [sp]
    // ldrsh r6, [r2, r1]
    ov42_022280A8(6);
    // str r0, [sp, #8]
    // add r1, sp, #0x30
    // ldrsh r7, [r1, r0]
    // add r4, sp, #0xc
    // ldr r0, [sp]
    ov42_02228180(4, ((0 << 0x10) >> 0x10));
    // str r0, [sp, #4]
    ov42_022282DC();
    *((u16*)(r4 + 4)) = r0;
    *((u16*)(r4 + 6)) = (r0 >> 0x10);
    *((u16*)(r4 + 0xc)) = *((u16*)(r4 + 4));
    *((u16*)(r4 + 0xe)) = *((u16*)(r4 + 6));
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    ov42_022282E8(0xe);
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r4]
    *((u16*)(r4 + 8)) = (r0 >> 0x10);
    *((u16*)(r4 + 0xa)) = *((u16*)(r4 + 2));
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
}



void ov42_02228548(void) {
    // push {r3, r4, r5, lr}
    // add r3, r1, #0
    // ldrh r1, [r3]
    // mov r2, sp
    // sub r2, r2, #4
    // strh r1, [r2]
    // ldrh r1, [r3, #2]
    // add r4, r0, #0
    // strh r1, [r2, #2]
    // ldr r1, [r2]
    // ldrb r2, [r3, #6]
    // ldrh r3, [r3, #4]
    // lsl r5, r3, #2
    // ldr r3, _02228570 ; =ov42_02229E14
    // ldr r3, [r3, r5]
    // blx r3
    // mov r0, #0
    // strh r0, [r4, #0x16]
    // pop {r3, r4, r5, pc}
    // nop
    // _02228570: .word ov42_02229E14
    // TODO: decompile
}



void ov42_02228574(void) {
    // push {r4, lr}
    // mov r1, #5
    // add r4, r0, #0
    // bl ov42_02228188
    // add r1, r0, #0
    // lsl r2, r1, #2
    // ldr r1, _022285A0 ; =ov42_02229E44
    // add r0, r4, #0
    // ldr r1, [r1, r2]
    // blx r1
    // ldrh r1, [r4, #0x16]
    // add r1, r1, #1
    // strh r1, [r4, #0x16]
    // cmp r0, #1
    // bne _0222859E
    // add r0, r4, #0
    // bl ov42_02228C40
    // mov r0, #0
    // strh r0, [r4, #0x16]
    // pop {r4, pc}
    // _022285A0: .word ov42_02229E44
    // TODO: decompile
}



void ov42_022285A4(void) {
    GF_AssertFail();
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 0);
}



void ov42_022285FC(void) {
    GF_AssertFail();
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 1);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 2);
}



void ov42_02228668(void) {
    GF_AssertFail();
    // add r0, sp, #0x18
    // mov r2, sp
    // strh r1, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r0 + 6));
    ov42_02228BDC(*((u32*)(r2 - 4)), r4, (r2 - 4));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    // mov r3, sp
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // add r1, sp, #0x18
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 2);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 8);
}



void ov42_02228700(void) {
    GF_AssertFail();
    // add r0, sp, #0x18
    // mov r2, sp
    // strh r1, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r0 + 6));
    ov42_02228BDC(*((u32*)(r2 - 4)), r4, (r2 - 4));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    // mov r3, sp
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // add r1, sp, #0x18
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 3);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 4);
}



void ov42_02228798(void) {
    GF_AssertFail();
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 4);
}



void ov42_022287F0(void) {
    GF_AssertFail();
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 5);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 0x10);
}



void ov42_0222885C(void) {
    GF_AssertFail();
    // add r0, sp, #0x18
    // mov r2, sp
    // strh r1, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r0 + 6));
    ov42_02228BDC(*((u32*)(r2 - 4)), r4, (r2 - 4));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    // mov r3, sp
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // add r1, sp, #0x18
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 6);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 0x10);
}



void ov42_022288F4(void) {
    GF_AssertFail();
    // add r0, sp, #0x18
    // mov r2, sp
    // strh r1, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r0 + 6));
    ov42_02228BDC(*((u32*)(r2 - 4)), r4, (r2 - 4));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    // mov r3, sp
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // add r1, sp, #0x18
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 7);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 4);
}



void ov42_0222898C(void) {
    GF_AssertFail();
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 8);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 2);
}



void ov42_022289F8(void) {
    GF_AssertFail();
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 9);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 4);
}



void ov42_02228A64(void) {
    GF_AssertFail();
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 0xa);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 8);
}



void ov42_02228AD0(void) {
    GF_AssertFail();
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    // add r1, sp, #0x10
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_0222839C(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
    ov42_022281F8(r5, 6, r4);
    ov42_022281F8(r5, 5, 0xb);
    ov42_022281F8(r5, 8, 0);
    ov42_022281F8(r5, 9, 0x10);
}



u8 ov42_02228B3C(void) {
}



void ov42_02228B40(void) {
}



void ov42_02228B48(void) {
    ov42_02228C0C();
    ov42_022282DC(r5);
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    // mov r3, sp
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
}



void ov42_02228B88(void) {
    ov42_02228C0C();
    ov42_022282DC(r5);
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    // mov r3, sp
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022283AC(r5, *((u32*)(r3 - 4)), *((u16*)(r1 + 4)), (r3 - 4));
}



u8 ov42_02228BC8(void) {
}



void ov42_02228BCC(void) {
}



void ov42_02228BD4(void) {
}



void ov42_02228BDC(void) {
    // add r0, sp, #8
    // ldrh r2, [r0]
    // mov r3, sp
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r0 + 2));
    ov42_02228270(*((u32*)(r3 - 4)), (r3 - 4));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    // orr r0, r1
}



void ov42_02228C0C(void) {
    ov42_02228188(8);
    ov42_02228188(r5, 9);
    ov42_022281F8(r5, 8, (r4 + 1));
}



void ov42_02228C40(void) {
    ov42_022282DC();
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    ov42_02228188(r4, 6);
    // add r1, sp, #0
    // mov r4, sp
    // strh r3, [r4]
    *((u16*)((r4 - 4) + 2)) = *((u16*)(r1 + 6));
    ov42_022285A4(r4, *((u32*)(r4 - 4)), r0, *((u16*)(r1 + 4)));
}



void ov42_02228C80(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r7, #0
    // bne _02228C94
    // bl GF_AssertFail
    // cmp r5, #0
    // bne _02228C9C
    // bl GF_AssertFail
    // cmp r4, #0
    // bne _02228CA4
    // bl GF_AssertFail
    // cmp r6, #0
    // bne _02228CAC
    // bl GF_AssertFail
    // ldrb r1, [r4, #3]
    // add r0, r5, #0
    // bl ov42_02228178
    // str r0, [sp, #4]
    // cmp r0, #0
    // bne _02228CBE
    // bl GF_AssertFail
    // str r6, [sp]
    // add r3, r4, #0
    // ldrh r4, [r4]
    // add r2, r5, #0
    // ldr r0, [sp, #4]
    // lsl r5, r4, #2
    // ldr r4, _02228CD8 ; =ov42_02229E74
    // add r1, r7, #0
    // ldr r4, [r4, r5]
    // blx r4
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02228CD8: .word ov42_02229E74
    // TODO: decompile
}



void ov42_02228CDC(void) {
    ov42_02228188(5);
    // str r0, [sp]
    // ldrh r2, [r4]
    // ldr r0, [sp, #0x10]
    ov42_02228EB0(*((u8*)(r4 + 2)), r5, *((u8*)(r4 + 3)));
}



void ov42_02228D08(void) {
    ov42_02228188(5);
    ov42_02228188(r5, 6);
    // str r1, [sp]
    // ldrh r2, [r4]
    // ldr r0, [sp, #0x18]
    ov42_02228EB0(r5, *((u8*)(r4 + 3)));
}



void ov42_02228D44(void) {
    // str r2, [sp, #4]
    ov42_02228188(5);
    ov42_02228E34(r5, r7, *((u8*)(r4 + 2)));
    // ldr r1, [sp, #4]
    ov42_02228E9C(r5, *((u8*)(r4 + 2)));
    // str r0, [sp]
    // ldrh r2, [r4]
    // ldr r0, [sp, #0x20]
    ov42_02228EB0(*((u8*)(r4 + 2)), r5, *((u8*)(r4 + 3)));
    ov42_02228188(r5, 0xa);
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    ov42_02228EB0(*((u8*)(r4 + 2)), r5, 5, *((u8*)(r4 + 3)));
}



void ov42_02228DB8(void) {
}



void ov42_02228DC8(void) {
    ov42_02228188(5);
    // str r0, [sp]
    // ldrh r2, [r4]
    // ldr r0, [sp, #0x10]
    ov42_02228EB0(*((u8*)(r4 + 2)), r5, *((u8*)(r4 + 3)));
}



void ov42_02228DF0(void) {
}



void ov42_02228DFC(void) {
}



void ov42_02228E0C(void) {
    ov42_02228188(5);
    // str r0, [sp]
    // ldrh r2, [r4]
    // ldr r0, [sp, #0x10]
    ov42_02228EB0(*((u8*)(r4 + 2)), r5, *((u8*)(r4 + 3)));
}



void ov42_02228E34(void) {
    ov42_022282DC();
    // add r1, sp, #0
    *((u16*)(r1 + 4)) = r0;
    *((u16*)(r1 + 6)) = (r0 >> 0x10);
    // mov r2, sp
    *((u16*)(r1 + 0xc)) = *((u16*)(r1 + 4));
    *((u16*)(r1 + 0xe)) = *((u16*)(r1 + 6));
    // strh r0, [r2]
    *((u16*)((r2 - 4) + 2)) = *((u16*)(r1 + 0xe));
    ov42_02228270(*((u32*)(r2 - 4)), r5, (r2 - 4));
    // add r2, sp, #0
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r2]
    *((u16*)(r2 + 8)) = (r0 >> 0x10);
    *((u16*)(r2 + 0xa)) = *((u16*)(r2 + 2));
    // ldrsh r3, [r2, r1]
    // asr r1, r3, #3
    // add r1, r3, r1
    // ldrsh r3, [r2, r3]
    // asr r2, r3, #3
    // add r2, r3, r2
    ov42_02227FA4(r4, (((8 >> 0x1c) << 0xc) >> 0x10), (((r2 >> 0x1c) << 0xc) >> 0x10), 0xa);
}



void ov42_02228E9C(void) {
}



void ov42_02228EB0(void) {
    ov42_022282DC(r1);
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    // strh r0, [r5]
    *((u16*)(r5 + 2)) = *((u16*)(r1 + 2));
    *((u16*)(r5 + 4)) = r4;
    // ldr r0, [sp, #0x18]
    *((u8*)(r5 + 7)) = r6;
    *((u8*)(r5 + 6)) = *((u16*)(r1 + 2));
}



u32 ov42_02228EDC(void) {
    // str r1, [sp]
    // ldr r0, [sp, #0x18]
    Heap_Alloc(0xc);
    // ldr r1, [sp]
    // ldr r3, [sp, #0x18]
    ov42_02227060(r7, r5);
    // str r0, [r4]
    *((u16*)(r4 + 8)) = r5;
    // ldr r0, [sp, #0x18]
    // mul r1, r2
    Heap_Alloc(0x14, *((u16*)(r4 + 8)));
    *((u32*)(r4 + 4)) = r0;
    // mul r2, r3
    memset(0, 0x14, *((u16*)(r4 + 8)));
    *((u8*)(r4 + 0xa)) = 2;
    *((u8*)(r4 + 0xb)) = r6;
}



void ov42_02228F24(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldr r5, [sp, #0x28]
    // add r7, r0, #0
    // str r1, [sp, #4]
    // add r0, r5, #0
    // mov r1, #0xc
    // add r6, r2, #0
    // str r3, [sp, #8]
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r1, [sp, #4]
    // add r0, r7, #0
    // add r2, r6, #0
    // add r3, r5, #0
    // bl ov42_02227060
    // str r0, [r4]
    // strh r6, [r4, #8]
    // ldrh r2, [r4, #8]
    // mov r1, #0x14
    // add r0, r5, #0
    // mul r1, r2
    // bl Heap_Alloc
    // str r0, [r4, #4]
    // ldrh r3, [r4, #8]
    // mov r2, #0x14
    // mov r1, #0
    // mul r2, r3
    // bl memset
    // mov r0, #2
    // strb r0, [r4, #0xa]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #8]
    // strb r0, [r4, #0xb]
    // str r5, [sp]
    // ldrb r2, [r4, #0xb]
    // ldr r0, [r4]
    // ldr r3, [sp, #0x20]
    // bl ov42_02227194
    // ldrb r1, [r4, #0xb]
    // ldr r0, [r4]
    // ldr r2, _02228F90 ; =0x00009C41
    // add r3, r5, #0
    // bl ov42_0222729C
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02228F90: .word 0x00009C41
    // TODO: decompile
}



void ov42_02228F94(void) {
    // add r0, r0, r4
    ov42_02229274(*((u32*)(r0 + 4)));
    // add r0, r0, r4
    ov42_022290C4(*((u32*)(r5 + 4)));
    // add r4, #0x14
    ov42_022272B4(*((u32*)r5));
    ov42_0222901C(r5);
    ov42_02227114(*((u32*)r5));
    Heap_Free(*((u32*)(r5 + 4)));
    Heap_Free(r5);
}



void ov42_02228FE0(void) {
    ov42_022271E4(*((u32*)r0));
    // str r4, [sp]
    ov42_02227194(*((u32*)r5), r6, *((u8*)(r5 + 0xb)), r7);
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
    ov42_02229284();
    ov42_02228188(r5, 5);
    *((u16*)(r4 + 8)) = r0;
    ov42_02228188(r5, 6);
    *((u16*)(r4 + 0xa)) = r0;
    ov42_02228188(r5, 4);
    *((u16*)(r4 + 0xc)) = r0;
    // str r5, [r4]
    *((u8*)(r4 + 0x12)) = r7;
    *((u8*)(r4 + 0x13)) = 1;
    *((u16*)(r4 + 0xe)) = 0;
    *((u16*)(r4 + 0x10)) = 0;
    ov42_02228188(r5, 0);
    // add r1, sp, #4
    // strh r0, [r1]
    ov42_02228188(r5, 1);
    // add r1, sp, #4
    *((u16*)(r1 + 2)) = r0;
    // ldrsh r0, [r1, r0]
    ov42_0222922C(2, *((u8*)(r4 + 0x12)));
    // add r1, sp, #4
    *((u16*)(r1 + 4)) = r0;
    *((u16*)(r1 + 6)) = *((u8*)(r6 + 0xa));
    ov42_02228188(r5, 7);
    // ldr r3, [sp]
    // add r1, sp, #4
    ov42_022272BC(*((u32*)r6), r0);
    *((u32*)(r4 + 4)) = r0;
    ov42_0222910C(r4);
}



void ov42_022290C4(void) {
}



void ov42_022290DC(void) {
    // add r0, r0, r4
    ov42_02229274(*((u32*)(r0 + 4)));
    // add r0, r0, r4
    ov42_0222910C(*((u32*)(r5 + 4)));
    // add r4, #0x14
}



void ov42_0222910C(void) {
    ov42_02228188(*((u32*)r0), 5);
    ov42_02228188(*((u32*)r5), 6);
    ov42_02228188(*((u32*)r5), 8);
    // asr r1, r0, #0x10
    *((u16*)(r5 + 8)) = r6;
    *((u16*)(r5 + 0xa)) = r4;
    ov42_022292BC(*((u32*)(r5 + 4)), r6);
    ov42_02229308(r5, r0, r4);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ov42_022292D8(r5);
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ov42_02227434(*((u32*)(r5 + 4)), 2, 0);
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    ov42_0222922C(0, *((u8*)(r5 + 0x12)));
    ov42_02227474(*((u32*)(r5 + 4)), ((r0 << 0x10) >> 0x10));
    ov42_02227538(*((u32*)(r5 + 4)));
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
    // cmp r1, #1
    // bne _02229238
    // lsl r1, r0, #1
    // ldr r0, _02229240 ; =0x00009C40
    // sub r0, r0, r1
    // bx lr
    // lsl r1, r0, #1
    // ldr r0, _02229244 ; =0x00009C41
    // sub r0, r0, r1
    // bx lr
    // _02229240: .word 0x00009C40
    // _02229244: .word 0x00009C41
    // TODO: decompile
}



void ov42_02229248(void) {
}



void ov42_02229258(void) {
}



void ov42_02229274(void) {
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _0222927E
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov42_02229284(void) {
    // add r0, r0, r4
    ov42_02229274(*((u32*)(r0 + 4)));
    // mul r0, r6
    // add r0, r1, r0
    // add r4, #0x14
    GF_AssertFail(*((u16*)(r5 + 8)), *((u32*)(r5 + 4)));
}



void ov42_022292BC(void) {
}



void ov42_022292D8(void) {
    ov42_022282F4(*((u32*)r0));
    // add r1, sp, #0
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r1]
    *((u16*)(r1 + 4)) = (r0 >> 0x10);
    *((u16*)(r1 + 6)) = *((u16*)(r1 + 2));
    // ldrsh r0, [r1, r0]
    // strh r0, [r5]
    // ldrsh r0, [r1, r0]
    // strh r0, [r4]
}



void ov42_02229308(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // add r4, r1, #0
    // str r2, [sp]
    // bl ov42_022274D0
    // add r7, r0, #0
    // ldr r0, [r5, #4]
    // bl ov42_022274C0
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // ldr r0, [r5, #4]
    // ldr r2, [sp]
    // add r1, r4, #0
    // bl ov42_02227504
    // cmp r6, r4
    // beq _02229352
    // ldr r0, _02229354 ; =ov42_02229EA4
    // ldrb r0, [r0, r4]
    // cmp r0, #1
    // bne _02229346
    // ldrh r0, [r5, #0x10]
    // cmp r0, r4
    // bne _02229346
    // ldrh r1, [r5, #0xe]
    // ldr r0, [r5, #4]
    // bl ov42_022274C4
    // ldr r0, _02229354 ; =ov42_02229EA4
    // ldrb r0, [r0, r6]
    // cmp r0, #1
    // bne _02229352
    // strh r6, [r5, #0x10]
    // strh r7, [r5, #0xe]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02229354: .word ov42_02229EA4
    // TODO: decompile
}



void ov42_02229358(void) {
    ov42_022282F4(r1);
    // add r3, sp, #0
    // strh r0, [r3]
    *((u16*)(r3 + 2)) = (r0 >> 0x10);
    // ldrh r0, [r3]
    *((u16*)(r3 + 4)) = (r0 >> 0x10);
    *((u16*)(r3 + 6)) = *((u16*)(r3 + 2));
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // sub r1, #0x60
    // sub r2, #0x70
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov42_022293A0(r4, (6 << 0x10), (4 << 0x10));
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
    Heap_Alloc(r3, 0x1c);
    // strb r0, [r2]
    // str r6, [r4]
    *((u32*)(r0 + 4)) = r7;
    // ldrb r0, [r5]
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = *((u8*)(r5 + 1));
    ov42_02229514(*((u32*)(r0 + 4)), *((u8*)(r5 + 1)), r5);
    // ldr r0, [sp, #4]
    // str r0, [sp]
    // add r3, #0xc
    GfGfxLoader_GetScrnData(*((u8*)(r5 + 8)), *((u8*)(r5 + 9)), *((u8*)(r5 + 0xa)), r4);
    *((u32*)(r4 + 8)) = r0;
}



void ov42_0222940C(void) {
}



void ov42_02229420(void) {
    ov42_022293A8(r1);
    ov42_022293B0(r4);
    _fflt((r5 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r5 << 0xc));
    _fsub((0x3f << 0x18));
    _fflt((r4 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r4 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    _ffix(r7);
    // ldr r1, [sp]
    G2dRenderer_SetMainSurfaceCoords(*((u32*)r6), r0);
    _fflt((r5 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r5 << 0xc));
    _fsub((0x3f << 0x18));
    _fflt((r4 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r4 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #4]
    _ffix(r7);
    // ldr r1, [sp, #4]
    // add r2, r3, r2
    G2dRenderer_SetSubSurfaceCoords(*((u32*)r6), (3 << 0x12), r0);
    ov42_02229570(r6, r4, r5);
}



void ov42_02229514(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x1c
    // ldr r6, _0222956C ; =ov42_02229EBC
    // add r5, r0, #0
    // add r4, r1, #0
    // ldmia r6!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // str r0, [r3]
    // ldrb r1, [r2, #2]
    // add r0, sp, #0
    // strb r1, [r0, #0x11]
    // ldrb r1, [r2, #3]
    // strb r1, [r0, #0x12]
    // ldrb r1, [r2, #4]
    // strb r1, [r0, #0x13]
    // ldrb r1, [r2, #5]
    // strb r1, [r0, #0x14]
    // ldrb r1, [r2, #6]
    // strb r1, [r0, #0x15]
    // mov r1, #0
    // strb r1, [r0, #0x16]
    // ldrb r0, [r2, #7]
    // lsl r1, r4, #0x18
    // lsr r1, r1, #0x18
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // bl FreeBgTilemapBuffer
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // add r2, sp, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0222956C: .word ov42_02229EBC
    // TODO: decompile
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
    *((u16*)(r0 + 0x18)) = r3;
    *((u16*)(r0 + 0x1a)) = ((((r0 >> 0x1d) << 0xd) >> 0x1d) << 0xd);
    // neg r0, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // neg r3, r3
    // asr r3, r3, #0x10
    ov42_02229600(*((u32*)(r0 + 4)), *((u32*)(r0 + 0x14)), *((u32*)(r0 + 0xc)), (r3 << 0x10));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 4)), ((*((u32*)(r5 + 0x14)) << 0x18) >> 0x18));
    ScheduleSetBgPosText(*((u32*)(r5 + 4)), ((*((u32*)(r5 + 0x14)) << 0x18) >> 0x18), 0, r6);
    ScheduleSetBgPosText(*((u32*)(r5 + 4)), ((*((u32*)(r5 + 0x14)) << 0x18) >> 0x18), 3, r4);
}



void ov42_02229600(void) {
    // str r0, [sp, #0x1c]
    // ldrh r0, [r0]
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
    FillBgTilemapRect(0x11, ((r1 << 0x18) >> 0x18), 0, 0);
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
    ov42_022296F0(((((((((((r6 << 0x18) >> 0x18) << 0x18) >> 0x18) << 0x18) >> 0x18) << 0x18) >> 0x18) << 0x18) >> 0x18), ((r1 << 0x18) >> 0x18), ((r5 << 0x18) >> 0x18), ((r4 << 0x18) >> 0x18));
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
    ov42_02229880();
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
    CopyToBgTilemapRect(*((u8*)(r1 + 0x1c)), r4);
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
    ov42_022298B4(((0x1b << 0x18) << 0x18), ((((0x20 >> 0x1b) << 0x13) << 0x18) >> 0x18), (r5 >> 0x1f));
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
    CopyToBgTilemapRect(((2 << 0x18) >> 0x18), ((r6 << 0x18) >> 0x18), ((r7 << 0x18) >> 0x18));
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
    GF_AssertFail();
    GF_AssertFail();
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
    *((u16*)(r2 + 2)) = r3;
    // sub r4, r4, r5
    // strh r4, [r2]
    *((u16*)(r2 + 2)) = r3;
    // asr r2, r2, #0x10
    // mul r2, r1
    // add r0, r0, r2
    // strh r4, [r2]
    // sub r1, r3, r1
    *((u16*)((r3 << 0x16) + 2)) = (r2 << 5);
    // asr r1, r1, #0x10
    // mul r1, r6
    // add r0, r0, r1
    // sub r5, r4, r5
    // strh r5, [r2]
    // sub r5, r3, r5
    *((u16*)((r3 << 0x16) + 2)) = (r2 << 5);
    // add r1, r2, r1
    // add r1, r2, r1
    // add r0, r0, r2
    GF_AssertFail(((r3 << 6) << 0x10), (((r3 << 6) << 0x10) >> 0x10));
    GF_AssertFail();
}



void ov42_02229974(void) {
    Heap_Alloc(r1, 0xc);
    GF_AssertFail();
    *((u32*)(r4 + 4)) = (r5 + 1);
    Heap_Alloc(r6, ((r5 + 1) << 3));
    // str r0, [r4]
    memset(0, (*((u32*)(r4 + 4)) << 3));
    *((u16*)(r4 + 8)) = 0;
    *((u16*)(r4 + 0xa)) = 0;
}



void ov42_022299AC(void) {
}



void ov42_022299C0(void) {
    _u32_div_f((*((u16*)(r0 + 0xa)) + 1), *((u32*)(r0 + 4)));
    // add r1, sp, #0
    ov42_02229A08(r5);
    // ldrh r0, [r4]
    // add r1, r3, r2
    // strh r0, [r3, r2]
    *((u16*)(r1 + 2)) = *((u16*)(r4 + 2));
    *((u16*)(r1 + 4)) = *((u16*)(r4 + 4));
    *((u16*)(r1 + 6)) = *((u16*)(r4 + 6));
    _u32_div_f((*((u16*)(r5 + 0xa)) + 1), *((u32*)(r5 + 4)), (*((u16*)(r5 + 0xa)) << 3), *((u32*)r5));
    *((u16*)(r5 + 0xa)) = r1;
}



void ov42_02229A08(void) {
    // add r2, r3, r0
    // ldrh r0, [r3, r0]
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = *((u16*)(*((u16*)(r0 + 8)) + 2));
    *((u16*)(r1 + 4)) = *((u16*)(*((u16*)(r0 + 8)) + 4));
    *((u16*)(r1 + 6)) = *((u16*)(*((u16*)(r0 + 8)) + 6));
    _u32_div_f((*((u16*)(r0 + 8)) + 1), *((u32*)(r0 + 4)), *((u16*)(r0 + 8)), *((u32*)r0));
    *((u16*)(r4 + 8)) = r1;
}



void ov42_02229A40(void) {
    Heap_Alloc(r1, 0xc);
    GF_AssertFail();
    *((u32*)(r4 + 4)) = (r5 + 1);
    Heap_Alloc(r6, ((r5 + 1) << 2));
    // str r0, [r4]
    memset(0, (*((u32*)(r4 + 4)) << 2));
    *((u16*)(r4 + 8)) = 0;
    *((u16*)(r4 + 0xa)) = 0;
}



void ov42_02229A78(void) {
}



void ov42_02229A8C(void) {
    _u32_div_f((*((u16*)(r0 + 0xa)) + 1), *((u32*)(r0 + 4)));
    // add r1, sp, #0
    ov42_02229AC8(r5);
    // ldrh r0, [r4]
    // add r1, r3, r2
    // strh r0, [r3, r2]
    *((u16*)(r1 + 2)) = *((u16*)(r4 + 2));
    _u32_div_f((*((u16*)(r5 + 0xa)) + 1), *((u32*)(r5 + 4)), (*((u16*)(r5 + 0xa)) << 2), *((u32*)r5));
    *((u16*)(r5 + 0xa)) = r1;
}



void ov42_02229AC8(void) {
    // add r2, r3, r0
    // ldrh r0, [r3, r0]
    // strh r0, [r1]
    *((u16*)(r1 + 2)) = *((u16*)(*((u16*)(r0 + 8)) + 2));
    _u32_div_f((*((u16*)(r0 + 8)) + 1), *((u32*)(r0 + 4)), *((u16*)(r0 + 8)), *((u32*)r0));
    *((u16*)(r4 + 8)) = r1;
}


