/* Decompiled from asm/overlay_41.s */
#include "global.h"

void ov41_02245EA0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // add r5, r0, #0
    // add r0, r7, #0
    // mov r1, #8
    // bl Heap_Alloc
    // lsl r6, r5, #3
    // add r4, r0, #0
    // add r0, r7, #0
    // add r1, r6, #0
    // bl Heap_Alloc
    // mov r1, #0
    // add r2, r6, #0
    // str r0, [r4]
    // bl memset
    // str r5, [r4, #4]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02245ECC(void) {
    Heap_Free();
    Heap_Free(r4);
}


void ov41_02245EE0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl ov41_0224607C
    // add r4, r0, #0
    // bne _02245EF2
    // bl GF_AssertFail
    // ldr r0, [r5, #0x18]
    // str r0, [r4]
    // add r0, r5, #0
    // bl ov41_022460A8
    // str r0, [r4, #4]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02245F04(void) {
    ov41_022460DC();
    TouchscreenHitbox_TouchHeldIsIn();
}


void ov41_02245F14(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // add r6, r1, #0
    // str r2, [sp]
    // add r7, r3, #0
    // bl ov41_02245F04
    // cmp r0, #0
    // bne _02245F2E
    // add sp, #0xc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // bl ov41_02245FA8
    // ldr r0, _02245F98 ; =gSystem + 0x40
    // ldr r1, [sp, #8]
    // ldrh r2, [r0, #0x20]
    // sub r1, r2, r1
    // str r1, [r6]
    // ldrh r1, [r0, #0x22]
    // ldr r0, [sp, #4]
    // sub r1, r1, r0
    // ldr r0, [sp]
    // sub r4, r1, #4
    // str r1, [r0]
    // add r0, r1, #4
    // cmp r4, r0
    // bge _02245F92
    // cmp r4, #0
    // blt _02245F86
    // ldr r0, [r6]
    // sub r5, r0, #4
    // add r0, r0, #4
    // cmp r5, r0
    // bge _02245F86
    // cmp r5, #0
    // blt _02245F7C
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #0
    // bl ov41_022464BC
    // cmp r0, #0
    // bne _02245F7C
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r6]
    // add r5, r5, #1
    // add r0, r0, #4
    // cmp r5, r0
    // blt _02245F62
    // ldr r0, [sp]
    // add r4, r4, #1
    // ldr r0, [r0]
    // add r0, r0, #4
    // cmp r4, r0
    // blt _02245F54
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02245F98: .word gSystem + 0x40
    // TODO: decompile
}


void ov41_02245F9C(void) {
    sub_02015FC4();
}


void ov41_02245FA8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // ldr r0, [r0, #4]
    // add r5, r1, #0
    // add r4, r2, #0
    // bl sub_02015FCC
    // add r1, sp, #0
    // strh r0, [r1]
    // lsr r0, r0, #0x10
    // strh r0, [r1, #2]
    // ldrh r0, [r1]
    // strh r0, [r1, #4]
    // ldrh r0, [r1, #2]
    // strh r0, [r1, #6]
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // str r0, [r5]
    // mov r0, #6
    // ldrsh r0, [r1, r0]
    // str r0, [r4]
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02245FD8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // ldr r0, [r0, #4]
    // add r5, r1, #0
    // add r4, r2, #0
    // bl sub_02015FE8
    // add r1, sp, #0
    // strh r0, [r1]
    // lsr r0, r0, #0x10
    // strh r0, [r1, #2]
    // ldrh r0, [r1]
    // strh r0, [r1, #4]
    // ldrh r0, [r1, #2]
    // strh r0, [r1, #6]
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // str r0, [r5]
    // mov r0, #6
    // ldrsh r0, [r1, r0]
    // str r0, [r4]
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02246008(void) {
    sub_02015FB0();
}


void ov41_02246014(void) {
    sub_02015FF4();
}


void ov41_02246020(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r4, r2, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov41_02245FD8
    // ldr r0, [sp, #4]
    // cmp r0, #0x10
    // beq _02246040
    // cmp r0, #0x20
    // beq _02246046
    // cmp r0, #0x40
    // beq _0224604C
    // b _02246050
    // mov r0, #0
    // str r0, [r5]
    // b _02246050
    // mov r0, #0xa
    // str r0, [r5]
    // b _02246050
    // mov r0, #0x14
    // str r0, [r5]
    // ldr r0, [sp]
    // cmp r0, #0x10
    // beq _02246062
    // cmp r0, #0x20
    // beq _0224606A
    // cmp r0, #0x40
    // beq _02246072
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #8
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // mov r0, #0xa
    // add sp, #8
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x14
    // str r0, [r4]
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_0224607C(void) {
    // push {r3, r4}
    // ldr r4, [r0, #4]
    // mov r1, #0
    // cmp r4, #0
    // ble _022460A0
    // ldr r3, [r0]
    // add r2, r3, #0
    // ldr r0, [r2, #4]
    // cmp r0, #0
    // bne _02246098
    // lsl r0, r1, #3
    // add r0, r3, r0
    // pop {r3, r4}
    // bx lr
    // add r1, r1, #1
    // add r2, #8
    // cmp r1, r4
    // blt _0224608A
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov41_022460A8(void) {
    // push {r3, lr}
    // sub sp, #0x20
    // ldr r1, [r0, #4]
    // mov r3, #0
    // str r1, [sp]
    // ldr r1, [r0, #8]
    // str r1, [sp, #4]
    // ldr r1, [r0, #0xc]
    // str r1, [sp, #8]
    // ldr r2, [r0, #0x10]
    // add r1, sp, #0
    // strh r2, [r1, #0xc]
    // ldr r2, [r0, #0x14]
    // strh r2, [r1, #0xe]
    // strh r3, [r1, #0x10]
    // mov r2, #0x1f
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // ldr r0, [r0, #0x1c]
    // strh r0, [r1, #0x1c]
    // add r0, sp, #0
    // bl sub_02015F8C
    // add sp, #0x20
    // pop {r3, pc}
    // TODO: decompile
}


void ov41_022460DC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // add r4, r1, #0
    // bl sub_02015FCC
    // add r1, sp, #0
    // strh r0, [r1, #4]
    // lsr r0, r0, #0x10
    // strh r0, [r1, #6]
    // ldrh r0, [r1, #4]
    // strh r0, [r1, #0xc]
    // ldrh r0, [r1, #6]
    // strh r0, [r1, #0xe]
    // ldr r0, [r5, #4]
    // bl sub_02015FE8
    // add r1, sp, #0
    // strh r0, [r1]
    // lsr r0, r0, #0x10
    // strh r0, [r1, #2]
    // ldrh r0, [r1]
    // strh r0, [r1, #8]
    // ldrh r0, [r1, #2]
    // strh r0, [r1, #0xa]
    // mov r0, #0xe
    // ldrsh r2, [r1, r0]
    // mov r0, #0xa
    // strb r2, [r4]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    // strb r0, [r4, #1]
    // mov r0, #0xc
    // ldrsh r2, [r1, r0]
    // mov r0, #8
    // strb r2, [r4, #2]
    // ldrsh r0, [r1, r0]
    // add r0, r2, r0
    // strb r0, [r4, #3]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02246130(void) {
    // push {r3, lr}
    // bl ov41_022466D0
    // bl ov41_022466F0
    // bl ov41_02246778
    // ldr r0, _0224614C ; =gSystem + 0x60
    // mov r1, #1
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // pop {r3, pc}
    // nop
    // _0224614C: .word gSystem + 0x60
    // TODO: decompile
}


void ov41_02246150(void) {
    // push {r3, lr}
    // ldr r0, _0224616C ; =gSystem + 0x60
    // mov r1, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // bl ov41_022467D4
    // bl ov41_022467C8
    // bl GX_ResetBankForTex
    // pop {r3, pc}
    // nop
    // _0224616C: .word gSystem + 0x60
    // TODO: decompile
}


void ov41_02246170(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r3, _022461CC ; =ov41_0224BFB4
    // add r2, sp, #0
    // add r4, r0, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, #0x1a
    // mov r1, #0xe
    // bl NARC_New
    // mov r1, #6
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl ov41_022467E4
    // mov r2, #0xa
    // add r0, r4, #0
    // mov r1, #0xe
    // lsl r2, r2, #0xa
    // mov r3, #0x20
    // bl ov41_02246CC0
    // add r0, r4, #0
    // bl ov41_02246A50
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov41_02246C90
    // add r0, r4, #0
    // bl ov41_02246A94
    // mov r0, #0xe
    // bl BgConfig_Alloc
    // str r0, [r4, #0x40]
    // add r0, r4, #0
    // bl ov41_022468FC
    // add sp, #0x10
    // pop {r4, pc}
    // _022461CC: .word ov41_0224BFB4
    // TODO: decompile
}


void ov41_022461D0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov41_02246CB0
    // add r0, r4, #0
    // bl ov41_02246820
    // add r0, r4, #0
    // bl ov41_02246A20
    // ldr r0, [r4, #0x40]
    // bl Heap_Free
    // add r0, r4, #0
    // bl ov41_02246D2C
    // add r0, r4, #0
    // bl ov41_02246B34
    // add r0, r4, #0
    // bl ov41_02246A7C
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl NARC_Delete
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x10]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4, #0x10]
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224621C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl Thunk_G3X_Reset
    // bl NNS_G2dSetupSoftwareSpriteCamera
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // beq _02246234
    // add r0, r4, #0
    // bl ov41_02246830
    // ldr r0, [r4, #0x2c]
    // cmp r0, #0
    // beq _02246240
    // ldr r0, [r4, #0x20]
    // bl PokepicManager_DrawAll
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // add r0, r4, #0
    // bl ov41_02246B5C
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02246250(void) {
    ov41_0224683C(*((u32*)(r1 + 4)));
    ov41_0224689C(r5, *((u32*)(r4 + 8)), *((u32*)(r4 + 0xc)));
}


void ov41_0224626C(void) {
    sub_02015EF4();
    sub_02015F64();
}


void ov41_02246280(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x70
    // add r5, r0, #0
    // mov r0, #0
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r4, r2, #0
    // ldr r2, [r5, #0x48]
    // add r6, r3, #0
    // str r2, [sp, #0x14]
    // ldr r2, [r5, #0x4c]
    // add r3, r1, #0
    // str r2, [sp, #0x18]
    // ldr r2, [r5, #0x50]
    // str r2, [sp, #0x1c]
    // ldr r2, [r5, #0x54]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0x4c
    // add r2, r1, #0
    // bl CreateSpriteResourcesHeader
    // ldr r0, [r5, #0x44]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x30]
    // lsl r0, r4, #0xc
    // str r0, [sp, #0x34]
    // lsl r0, r6, #0xc
    // str r0, [sp, #0x38]
    // mov r0, #0
    // str r0, [sp, #0x3c]
    // ldr r0, [sp, #0x80]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x84]
    // str r0, [sp, #0x44]
    // mov r0, #0xe
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    // bl Sprite_Create
    // add sp, #0x70
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_022462E4(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // ldr r4, [sp, #0x1c]
    // str r4, [sp]
    // ldr r4, [sp, #0x18]
    // str r4, [sp, #4]
    // mov r4, #0xe
    // str r4, [sp, #8]
    // ldr r0, [r0, #0x48]
    // bl AddCharResObjFromOpenNarc
    // bl sub_0200ADA4
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov41_02246304(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, [sp, #0x20]
    // str r4, [sp]
    // ldr r4, [sp, #0x18]
    // str r4, [sp, #4]
    // ldr r4, [sp, #0x1c]
    // str r4, [sp, #8]
    // mov r4, #0xe
    // str r4, [sp, #0xc]
    // ldr r0, [r0, #0x4c]
    // bl AddPlttResObjFromOpenNarc
    // bl sub_0200B00C
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02246328(void) {
    AddCellOrAnimResObjFromOpenNarc(0xe, 2);
}


void ov41_02246344(void) {
    AddCellOrAnimResObjFromOpenNarc(0xe, 3);
}


void ov41_02246360(void) {
    SpriteResourceCollection_Find(*((u32*)(r0 + 0x48)));
    DestroySingle2DGfxResObj(*((u32*)(r4 + 0x48)), r0);
}


void ov41_02246374(void) {
    SpriteResourceCollection_Find(*((u32*)(r0 + 0x4c)));
    DestroySingle2DGfxResObj(*((u32*)(r4 + 0x4c)), r0);
}


void ov41_02246388(void) {
    SpriteResourceCollection_Find(*((u32*)(r0 + 0x50)));
    DestroySingle2DGfxResObj(*((u32*)(r4 + 0x50)), r0);
}


void ov41_0224639C(void) {
    SpriteResourceCollection_Find(*((u32*)(r0 + 0x54)));
    DestroySingle2DGfxResObj(*((u32*)(r4 + 0x54)), r0);
}


void ov41_022463B0(void) {
    ov41_02246D54(r1, 0x76, 0x13, 0xe);
    ov41_02246B68(r5, r4);
    ov41_02246BEC(r5, r4);
}


void ov41_022463D4(void) {
    ov41_02246DA8();
}


void ov41_022463DC(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // add r6, r1, #0
    // add r5, r2, #0
    // bl GF2dGfxRawResMan_AllocObj
    // ldr r1, [r4, #0x38]
    // lsl r5, r5, #2
    // add r0, r6, #0
    // add r1, r1, r5
    // bl NNS_G2dGetUnpackedCharacterData
    // ldr r0, [r4, #0x38]
    // ldr r0, [r0, r5]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_022463FC(void) {
    // push {r3, r4}
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _02246428 ; =0xFFFF1FFF
    // add r3, r0, #0
    // and r1, r2
    // str r1, [r0]
    // add r3, #8
    // ldrh r4, [r3]
    // mov r2, #3
    // mov r1, #1
    // bic r4, r2
    // orr r1, r4
    // add r0, #0xa
    // strh r1, [r3]
    // ldrh r1, [r0]
    // bic r1, r2
    // strh r1, [r0]
    // pop {r3, r4}
    // bx lr
    // nop
    // _02246428: .word 0xFFFF1FFF
    // TODO: decompile
}


void ov41_0224642C(void) {
    // push {r3, r4}
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r2, [r0]
    // ldr r1, _02246488 ; =0xFFFF1FFF
    // add r3, r0, #0
    // and r2, r1
    // lsr r1, r0, #0xd
    // orr r1, r2
    // str r1, [r0]
    // add r3, #0x48
    // ldrh r4, [r3]
    // mov r2, #0x3f
    // mov r1, #0x1f
    // bic r4, r2
    // orr r1, r4
    // strh r1, [r3]
    // add r3, r0, #0
    // add r3, #0x4a
    // ldrh r4, [r3]
    // mov r1, #0x12
    // bic r4, r2
    // orr r1, r4
    // strh r1, [r3]
    // add r1, r0, #0
    // ldr r2, _0224648C ; =0x00000AF6
    // add r1, #0x40
    // strh r2, [r1]
    // add r1, r0, #0
    // ldr r2, _02246490 ; =0x0000128F
    // add r1, #0x44
    // strh r2, [r1]
    // add r2, r0, #0
    // add r2, #8
    // ldrh r3, [r2]
    // mov r1, #3
    // add r0, #0xa
    // bic r3, r1
    // strh r3, [r2]
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // strh r1, [r0]
    // pop {r3, r4}
    // bx lr
    // _02246488: .word 0xFFFF1FFF
    // _0224648C: .word 0x00000AF6
    // _02246490: .word 0x0000128F
    // TODO: decompile
}


void ov41_02246494(void) {
    DoScheduledBgGpuUpdates(*((u32*)(r0 + 0x40)));
    PokepicManager_HandleLoadImgAndOrPltt(*((u32*)(r4 + 0x20)));
    OamManager_ApplyAndResetBuffers();
}


void ov41_022464AC(void) {
    ov41_02246D54();
}


void ov41_022464BC(void) {
    // push {r4, r5}
    // ldrh r5, [r0, #2]
    // ldrh r4, [r0]
    // lsl r5, r5, #3
    // cmp r1, #0
    // blt _022464D6
    // cmp r2, #0
    // blt _022464D6
    // cmp r1, r5
    // bge _022464D6
    // lsl r4, r4, #3
    // cmp r2, r4
    // blt _022464DC
    // mov r0, #2
    // pop {r4, r5}
    // bx lr
    // add r4, r2, #0
    // mul r4, r5
    // add r4, r1, r4
    // lsr r5, r4, #0x1f
    // lsl r2, r4, #0x1d
    // sub r2, r2, r5
    // mov r1, #0x1d
    // ror r2, r1
    // add r1, r5, r2
    // lsl r2, r1, #2
    // add r1, r3, #0
    // ldr r3, [r0, #0x14]
    // asr r0, r4, #2
    // lsr r0, r0, #0x1d
    // add r0, r4, r0
    // asr r0, r0, #3
    // lsl r0, r0, #2
    // ldr r3, [r3, r0]
    // mov r0, #0xf
    // lsl r0, r2
    // lsl r1, r2
    // and r0, r3
    // cmp r1, r0
    // bne _02246512
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov41_02246518(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // bl ov41_022467E4
    // mov r2, #0xa
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #0xa
    // mov r3, #0x20
    // bl ov41_02246CC0
    // ldr r0, [r5, #0x20]
    // mov r1, #1
    // bl PokepicManager_SetNeedG3IdentityFlag
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov41_02246C90
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02246544(void) {
    // push {r4, r5, lr}
    // sub sp, #0x1c
    // ldr r3, _02246590 ; =ov41_0224C018
    // add r5, r0, #0
    // str r1, [r5, #0x40]
    // add r4, r2, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #2
    // str r0, [r2]
    // ldr r0, [r5, #0x40]
    // bl FreeBgTilemapBuffer
    // ldr r0, [r5, #0x40]
    // mov r1, #2
    // add r2, sp, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r4, #0
    // bl BG_ClearCharDataRange
    // ldr r0, [r5, #0x40]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // add sp, #0x1c
    // pop {r4, r5, pc}
    // nop
    // _02246590: .word ov41_0224C018
    // TODO: decompile
}


void ov41_02246594(void) {
    ov41_02246CB0();
    ov41_02246820(r4);
    ov41_02246D2C(r4);
    Heap_Free(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 4)) = 0;
    Heap_Free(*((u32*)(r4 + 0x10)));
    *((u32*)(r4 + 0x10)) = 0;
}


void ov41_022465C0(void) {
    FreeBgTilemapBuffer();
}


void ov41_022465CC(void) {
    PokepicManager_HandleLoadImgAndOrPltt();
}


void ov41_022465D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _0224665C ; =0x04000454
    // str r3, [sp]
    // mov r1, #0
    // str r1, [r0]
    // sub r0, #0x10
    // add r6, r2, #0
    // ldr r7, [sp, #0x18]
    // str r1, [r0]
    // bl NNS_G2dSetupSoftwareSpriteCamera
    // ldr r1, _02246660 ; =0x04000470
    // lsl r0, r4, #0xc
    // str r0, [r1]
    // lsl r0, r6, #0xc
    // str r0, [r1]
    // mov r0, #0
    // str r0, [r1]
    // ldr r0, [sp]
    // ldr r1, _02246664 ; =FX_SinCosTable_
    // asr r0, r0, #4
    // lsl r2, r0, #1
    // lsl r0, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #1
    // ldrsh r0, [r1, r0]
    // ldrsh r1, [r1, r2]
    // bl G3_RotZ
    // ldr r2, [r7, #8]
    // ldr r1, [r7, #4]
    // ldr r3, [r7]
    // ldr r0, _02246668 ; =0x0400046C
    // str r3, [r0]
    // str r1, [r0]
    // neg r1, r4
    // str r2, [r0]
    // lsl r1, r1, #0xc
    // str r1, [r0, #4]
    // neg r1, r6
    // lsl r1, r1, #0xc
    // str r1, [r0, #4]
    // mov r1, #0
    // str r1, [r0, #4]
    // sub r0, #0x28
    // str r1, [r0]
    // ldr r0, [r5, #0x1c]
    // cmp r0, #0
    // beq _02246644
    // add r0, r5, #0
    // bl ov41_02246830
    // ldr r0, [r5, #0x2c]
    // cmp r0, #0
    // beq _02246650
    // ldr r0, [r5, #0x20]
    // bl PokepicManager_DrawAll
    // ldr r0, _0224666C ; =0x04000448
    // mov r1, #1
    // str r1, [r0]
    // str r1, [r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224665C: .word 0x04000454
    // _02246660: .word 0x04000470
    // _02246664: .word FX_SinCosTable_
    // _02246668: .word 0x0400046C
    // _0224666C: .word 0x04000448
    // TODO: decompile
}


void ov41_02246670(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x1a
    // mov r1, #0xe
    // bl NARC_New
    // mov r1, #6
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov41_02246A94
    // mov r0, #0xe
    // bl BgConfig_Alloc
    // str r0, [r4, #0x40]
    // add r0, r4, #0
    // bl ov41_022468FC
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02246698(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov41_02246A20
    // ldr r0, [r4, #0x40]
    // bl Heap_Free
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl NARC_Delete
    // add r0, r4, #0
    // bl ov41_02246B34
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_022466B8(void) {
    DoScheduledBgGpuUpdates(*((u32*)(r0 + 0x40)));
    OamManager_ApplyAndResetBuffers();
}


void ov41_022466C8(void) {
    ov41_02246B5C();
}


void ov41_022466D0(void) {
    GfGfx_SetBanks(5);
}


void ov41_022466F0(void) {
    // push {r3, lr}
    // bl NNS_G3dInit
    // bl G3X_InitMtxStack
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02246764 ; =0x04000008
    // mov r1, #3
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // strh r1, [r0]
    // add r0, #0x58
    // ldrh r1, [r0]
    // ldr r2, _02246768 ; =0xFFFFCFFD
    // and r1, r2
    // strh r1, [r0]
    // ldrh r3, [r0]
    // add r1, r2, #2
    // and r3, r1
    // mov r1, #0x10
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r3, [r0]
    // ldr r1, _0224676C ; =0x0000CFFB
    // and r1, r3
    // strh r1, [r0]
    // add r1, r2, #2
    // ldrh r3, [r0]
    // lsr r2, r2, #0x11
    // and r3, r1
    // mov r1, #8
    // orr r1, r3
    // strh r1, [r0]
    // mov r0, #0
    // add r1, r0, #0
    // mov r3, #0x3f
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r2, _02246770 ; =0x04000540
    // mov r0, #2
    // ldr r1, _02246774 ; =0xBFFF0000
    // str r0, [r2]
    // str r1, [r2, #0x40]
    // mov r1, #1
    // bl GF_3DVramMan_InitFrameTexVramManager
    // mov r0, #1
    // lsl r0, r0, #0xe
    // mov r1, #1
    // bl GF_3DVramMan_InitFramePlttVramManager
    // pop {r3, pc}
    // _02246764: .word 0x04000008
    // _02246768: .word 0xFFFFCFFD
    // _0224676C: .word 0x0000CFFB
    // _02246770: .word 0x04000540
    // _02246774: .word 0xBFFF0000
    // TODO: decompile
}


void ov41_02246778(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _022467C0 ; =_0224BF94
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _022467C4 ; =0xFFCFFFEF
    // and r1, r0
    // mov r0, #0x10
    // orr r0, r1
    // str r0, [r2]
    // bl NNS_G2dInitOamManagerModule
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r0, #0x1f
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x13
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x10
    // pop {r4, pc}
    // _022467C0: .word _0224BF94
    // _022467C4: .word 0xFFCFFFEF
    // TODO: decompile
}


void ov41_022467C8(void) {
    NNS_GfdResetFrmTexVramState();
    NNS_GfdResetFrmPlttVramState();
}


void ov41_022467D4(void) {
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    NNS_G2dInitOamManagerModule();
}


void ov41_022467E4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl sub_02015DDC
    // str r0, [r5]
    // mov r1, #0x76
    // ldr r0, [r4, #0xc]
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // str r0, [r5, #4]
    // mov r0, #0x76
    // str r0, [r5, #8]
    // mov r0, #0
    // str r0, [r5, #0xc]
    // ldr r0, [r4, #0xc]
    // mov r1, #0x4c
    // bl Heap_Alloc
    // str r0, [r5, #0x10]
    // mov r0, #0x13
    // str r0, [r5, #0x14]
    // mov r0, #0
    // str r0, [r5, #0x18]
    // mov r0, #1
    // str r0, [r5, #0x1c]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02246820(void) {
    sub_02015E20();
}


void ov41_02246830(void) {
    sub_02015E64();
}


void ov41_0224683C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r2, #0
    // add r4, r1, #0
    // str r2, [sp]
    // cmp r0, #0
    // ble _02246898
    // add r7, r5, #0
    // add r6, r4, #0
    // add r7, #0xc
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #8]
    // cmp r1, r0
    // blt _02246862
    // bl GF_AssertFail
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _02246878
    // add r0, r6, #0
    // bl sub_02015EA0
    // ldr r2, [r5, #0xc]
    // ldr r1, [r5, #4]
    // lsl r2, r2, #2
    // str r0, [r1, r2]
    // b _02246882
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #4]
    // lsl r2, r1, #2
    // mov r1, #0
    // str r1, [r0, r2]
    // ldr r0, [r7]
    // add r4, #8
    // add r0, r0, #1
    // str r0, [r7]
    // ldr r0, [sp, #4]
    // add r6, #8
    // add r1, r0, #1
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // cmp r1, r0
    // blt _02246856
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224689C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r2, #0
    // add r4, r1, #0
    // str r2, [sp]
    // cmp r0, #0
    // ble _022468F8
    // add r7, r5, #0
    // add r6, r4, #0
    // add r7, #0x18
    // ldr r1, [r5, #0x18]
    // ldr r0, [r5, #0x14]
    // cmp r1, r0
    // blt _022468C2
    // bl GF_AssertFail
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _022468D8
    // add r0, r6, #0
    // bl sub_02015F1C
    // ldr r2, [r5, #0x18]
    // ldr r1, [r5, #0x10]
    // lsl r2, r2, #2
    // str r0, [r1, r2]
    // b _022468E2
    // ldr r1, [r5, #0x18]
    // ldr r0, [r5, #0x10]
    // lsl r2, r1, #2
    // mov r1, #0
    // str r1, [r0, r2]
    // ldr r0, [r7]
    // add r4, #0xc
    // add r0, r0, #1
    // str r0, [r7]
    // ldr r0, [sp, #4]
    // add r6, #0xc
    // add r1, r0, #1
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // cmp r1, r0
    // blt _022468B6
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_022468FC(void) {
    // push {r4, r5, lr}
    // sub sp, #0x8c
    // ldr r5, _02246A0C ; =ov41_0224BFE0
    // add r4, r0, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x70
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02246A10 ; =ov41_0224BFFC
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02246A14 ; =ov41_0224C034
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #3
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02246A18 ; =ov41_0224BFC4
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02246A1C ; =ov41_0224C050
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // ldr r0, [r4, #0x40]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #5
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0xe
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x40]
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // add sp, #0x8c
    // pop {r4, r5, pc}
    // nop
    // _02246A0C: .word ov41_0224BFE0
    // _02246A10: .word ov41_0224BFFC
    // _02246A14: .word ov41_0224C034
    // _02246A18: .word ov41_0224BFC4
    // _02246A1C: .word ov41_0224C050
    // TODO: decompile
}


void ov41_02246A20(void) {
    FreeBgTilemapBuffer(*((u32*)(r0 + 0x40)), 1);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x40)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x40)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x40)), 4);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0x40)), 5);
}


void ov41_02246A50(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x77
    // mov r1, #0xe
    // bl GF2dGfxRawResMan_Create
    // mov r1, #0x77
    // str r0, [r4, #0x34]
    // mov r0, #0xe
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0x77
    // mov r1, #0
    // lsl r2, r2, #2
    // str r0, [r4, #0x38]
    // bl memset
    // mov r0, #0x77
    // str r0, [r4, #0x3c]
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02246A7C(void) {
    Heap_Free(*((u32*)(r0 + 0x38)));
    GF2dGfxRawResObj_Destroy(*((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 0x3c)) = 0;
}


void ov41_02246A94(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // ldr r5, _02246B30 ; =ov41_0224BFA4
    // add r3, sp, #0x14
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #0x10
    // add r0, r2, #0
    // add r2, r1, #0
    // bl ObjCharTransfer_InitEx
    // mov r0, #5
    // mov r1, #0xe
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7c
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x1f
    // str r3, [sp, #0xc]
    // mov r2, #0xe
    // str r2, [sp, #0x10]
    // add r2, r0, #0
    // bl OamManager_Create
    // add r1, r4, #0
    // mov r0, #0x30
    // add r1, #0x58
    // mov r2, #0xe
    // bl G2dRenderer_Init
    // str r0, [r4, #0x44]
    // add r0, r4, #0
    // mov r2, #2
    // add r0, #0x58
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r0, #8
    // mov r1, #0
    // mov r2, #0xe
    // bl Create2DGfxResObjMan
    // str r0, [r4, #0x48]
    // mov r0, #5
    // mov r1, #1
    // mov r2, #0xe
    // bl Create2DGfxResObjMan
    // str r0, [r4, #0x4c]
    // mov r0, #0x30
    // mov r1, #2
    // mov r2, #0xe
    // bl Create2DGfxResObjMan
    // str r0, [r4, #0x50]
    // mov r0, #0x30
    // mov r1, #3
    // mov r2, #0xe
    // bl Create2DGfxResObjMan
    // str r0, [r4, #0x54]
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _02246B30: .word ov41_0224BFA4
    // TODO: decompile
}


void ov41_02246B34(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x44]
    // bl SpriteList_Delete
    // mov r4, #0
    // ldr r0, [r5, #0x48]
    // bl Destroy2DGfxResObjMan
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _02246B40
    // bl ObjCharTransfer_Destroy
    // bl ObjPlttTransfer_Destroy
    // bl OamManager_Free
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02246B5C(void) {
    SpriteList_RenderAndAnimateSprites();
}


void ov41_02246B68(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // mov r4, #0
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r4, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r6, r0]
    // add r1, r4, #1
    // mov r2, #0
    // mov r3, #0xe
    // bl GfGfxLoader_LoadFromOpenNarc
    // str r0, [sp, #4]
    // cmp r0, #0
    // bne _02246B92
    // bl GF_AssertFail
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // add r2, r4, #0
    // bl ov41_022463DC
    // ldr r1, [r7]
    // add r4, r4, #1
    // add r1, r1, r5
    // str r0, [r1, #4]
    // ldr r1, [r6]
    // ldr r0, [r7]
    // str r1, [r0, r5]
    // add r5, #8
    // cmp r4, #0x64
    // blt _02246B74
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #6
    // mov r1, #0
    // ldr r0, [r6, r0]
    // add r2, r1, #0
    // mov r3, #0xe
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r4, r0, #0
    // ldr r0, [r7, #0x14]
    // add r1, r4, #0
    // mov r2, #0
    // bl GF2dGfxRawResMan_AllocObj
    // ldr r1, [r7, #8]
    // add r0, r4, #0
    // add r1, r1, #4
    // bl NNS_G2dGetUnpackedPaletteData
    // ldr r1, [r6]
    // ldr r0, [r7, #8]
    // str r1, [r0]
    // ldr r0, [r7, #8]
    // mov r1, #3
    // str r1, [r0, #8]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02246BEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x87
    // add r4, r1, #0
    // mov r6, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #6
    // add r1, r6, #0
    // ldr r0, [r5, r0]
    // add r1, #0xce
    // mov r2, #0
    // mov r3, #0xe
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r2, r6, #0
    // add r1, r0, #0
    // add r2, #0x64
    // add r0, r5, #0
    // lsl r7, r2, #3
    // bl ov41_022463DC
    // ldr r1, [r4]
    // mov r2, #0
    // add r1, r1, r7
    // str r0, [r1, #4]
    // ldr r1, [r5]
    // ldr r0, [r4]
    // mov r3, #0xe
    // str r1, [r0, r7]
    // add r0, r6, #1
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #8]
    // bl GfGfxLoader_LoadFromOpenNarc
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x14]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // bl GF2dGfxRawResMan_AllocObj
    // ldr r1, [sp, #4]
    // mov r0, #0xc
    // add r7, r1, #0
    // mul r7, r0
    // ldr r1, [r4, #8]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r7
    // add r1, r1, #4
    // bl NNS_G2dGetUnpackedPaletteData
    // ldr r0, [r4, #8]
    // add r0, r0, r7
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _02246C70
    // bl GF_AssertFail
    // ldr r1, [r5]
    // ldr r0, [r4, #8]
    // add r6, r6, #1
    // str r1, [r0, r7]
    // ldr r0, [r4, #8]
    // add r1, r0, r7
    // mov r0, #1
    // str r0, [r1, #8]
    // ldr r0, [sp, #8]
    // add r0, r0, #4
    // str r0, [sp, #8]
    // cmp r6, #0x12
    // blt _02246BFA
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02246C90(void) {
    GfGfxLoader_LoadFromOpenNarc(6, 0xeb, 0);
}


void ov41_02246CB0(void) {
    Heap_Free();
}


void ov41_02246CC0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // bl PokepicManager_Create
    // str r0, [r5, #0x20]
    // ldr r3, _02246D1C ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r1, #0
    // ldr r3, [r3]
    // add r0, r4, #0
    // add r2, r1, #0
    // blx r3
    // str r0, [r5, #0x24]
    // ldr r3, _02246D20 ; =NNS_GfdDefaultFuncAllocPlttVram
    // add r0, r6, #0
    // ldr r3, [r3]
    // mov r1, #0
    // mov r2, #1
    // blx r3
    // str r0, [r5, #0x28]
    // ldr r3, [r5, #0x24]
    // ldr r2, _02246D24 ; =0x7FFF0000
    // lsl r1, r3, #0x10
    // and r2, r3
    // lsr r2, r2, #0x10
    // ldr r0, [r5, #0x20]
    // lsr r1, r1, #0xd
    // lsl r2, r2, #4
    // bl PokepicManager_SetCharBaseAddrAndSize
    // ldr r3, [r5, #0x28]
    // ldr r2, _02246D28 ; =0xFFFF0000
    // lsl r1, r3, #0x10
    // and r2, r3
    // lsr r2, r2, #0x10
    // ldr r0, [r5, #0x20]
    // lsr r1, r1, #0xd
    // lsl r2, r2, #3
    // bl PokepicManager_SetPlttBaseAddrAndSize
    // mov r0, #1
    // str r0, [r5, #0x2c]
    // pop {r4, r5, r6, pc}
    // nop
    // _02246D1C: .word NNS_GfdDefaultFuncAllocTexVram
    // _02246D20: .word NNS_GfdDefaultFuncAllocPlttVram
    // _02246D24: .word 0x7FFF0000
    // _02246D28: .word 0xFFFF0000
    // TODO: decompile
}


void ov41_02246D2C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x20]
    // bl PokepicManager_Delete
    // ldr r1, _02246D4C ; =NNS_GfdDefaultFuncFreeTexVram
    // ldr r0, [r4, #0x24]
    // ldr r1, [r1]
    // blx r1
    // ldr r1, _02246D50 ; =NNS_GfdDefaultFuncFreePlttVram
    // ldr r0, [r4, #0x28]
    // ldr r1, [r1]
    // blx r1
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // _02246D4C: .word NNS_GfdDefaultFuncFreeTexVram
    // _02246D50: .word NNS_GfdDefaultFuncFreePlttVram
    // TODO: decompile
}


void ov41_02246D54(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // lsl r0, r4, #3
    // str r0, [sp]
    // add r7, r3, #0
    // ldr r1, [sp]
    // add r0, r7, #0
    // add r6, r2, #0
    // bl Heap_Alloc
    // ldr r2, [sp]
    // mov r1, #0
    // str r0, [r5]
    // bl memset
    // add r0, r4, #0
    // add r1, r7, #0
    // bl GF2dGfxRawResMan_Create
    // str r0, [r5, #0x10]
    // str r4, [r5, #4]
    // mov r0, #0xc
    // add r4, r6, #0
    // mul r4, r0
    // add r0, r7, #0
    // add r1, r4, #0
    // bl Heap_Alloc
    // mov r1, #0
    // add r2, r4, #0
    // str r0, [r5, #8]
    // bl memset
    // add r0, r6, #0
    // add r1, r7, #0
    // bl GF2dGfxRawResMan_Create
    // str r0, [r5, #0x14]
    // str r6, [r5, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02246DA8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _02246DBA
    // bl GF2dGfxRawResObj_Destroy
    // mov r0, #0
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _02246DC8
    // bl GF2dGfxRawResObj_Destroy
    // mov r0, #0
    // str r0, [r4, #0x14]
    // ldr r0, [r4]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4]
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4, #8]
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02246DE0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r2, #2
    // add r5, r0, #0
    // mov r0, #3
    // mov r1, #0xd
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // mov r2, #1
    // mov r0, #3
    // mov r1, #0xe
    // lsl r2, r2, #0x12
    // bl Heap_Create
    // mov r1, #0x6f
    // add r0, r5, #0
    // lsl r1, r1, #4
    // mov r2, #0xd
    // bl OverlayManager_CreateAndGetData
    // mov r2, #0x6f
    // mov r1, #0
    // lsl r2, r2, #4
    // add r4, r0, #0
    // bl memset
    // ldr r0, _02246EF0 ; =ov41_02247478
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // ldr r1, _02246EF4 ; =0x000006DC
    // str r0, [r4, r1]
    // ldr r0, [r5, #0x20]
    // cmp r0, #0
    // beq _02246E3E
    // bl MenuInputStateMgr_GetState
    // ldr r1, _02246EF8 ; =0x000006EC
    // b _02246E42
    // mov r0, #0
    // add r1, #0x10
    // str r0, [r4, r1]
    // bl sub_020210BC
    // mov r0, #4
    // bl sub_02021148
    // mov r1, #0x61
    // lsl r1, r1, #2
    // ldr r0, [r5, #8]
    // add r1, r4, r1
    // bl ov41_02248E84
    // add r0, r4, #0
    // bl ov41_02247240
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // add r0, r4, r1
    // sub r1, #0x8d
    // mov r2, #0xd
    // bl ov41_022499B4
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // mov r1, #0xd
    // bl ov41_02245EA0
    // mov r1, #0xd9
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r1, [r5]
    // add r0, r4, #0
    // mov r2, #0xa
    // mov r3, #0
    // bl ov41_02247288
    // add r0, r4, #0
    // bl ov41_02247334
    // add r0, r4, #0
    // mov r1, #0
    // bl ov41_02247480
    // add r0, r4, #0
    // bl ov41_022474D4
    // ldr r1, [r5, #0xc]
    // add r0, r4, #0
    // bl ov41_0224765C
    // ldr r0, _02246EFC ; =0x00000568
    // mov r2, #0xfd
    // add r1, r4, r0
    // str r1, [sp]
    // mov r1, #1
    // sub r0, #0xd0
    // lsl r2, r2, #2
    // str r1, [sp, #4]
    // add r1, r4, r2
    // sub r2, #0x8c
    // add r0, r4, r0
    // add r2, r4, r2
    // add r3, r4, #0
    // bl ov41_02248F18
    // mov r0, #0xd
    // bl YesNoPrompt_Create
    // ldr r1, _02246F00 ; =0x000006B8
    // str r0, [r4, r1]
    // mov r0, #0xd
    // mov r1, #1
    // bl AllocWindows
    // ldr r2, _02246F04 ; =0x000006BC
    // mov r1, #0
    // str r0, [r4, r2]
    // sub r2, #0xc
    // str r1, [r4, r2]
    // mov r0, #0x35
    // add r2, r1, #0
    // bl Sound_SetSceneAndPlayBGM
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _02246EF0: .word ov41_02247478
    // _02246EF4: .word 0x000006DC
    // _02246EF8: .word 0x000006EC
    // _02246EFC: .word 0x00000568
    // _02246F00: .word 0x000006B8
    // _02246F04: .word 0x000006BC
    // TODO: decompile
}


void ov41_02246F08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r0, #0
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r7, #0
    // mov r6, #0
    // bl OverlayManager_GetArgs
    // ldr r1, [r5]
    // cmp r1, #0xc
    // bhi _02246FD6
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02246F30: ; jump table
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r1, #0xd
    // str r1, [sp, #8]
    // mov r1, #5
    // add r2, r1, #0
    // add r3, r6, #0
    // bl BeginNormalPaletteFade
    // mov r0, #2
    // str r0, [r5]
    // b _0224712A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _02246FD6
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // ldr r0, [r0, #0x1c]
    // cmp r0, #1
    // bne _02246F9E
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, _02247138 ; =0x00000568
    // mov r1, #0x1b
    // add r0, r4, r0
    // mov r2, #0xd7
    // mov r3, #0x2f
    // bl ov41_0224AC40
    // mov r1, #0x6e
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // mov r0, #6
    // str r0, [r5]
    // b _0224712A
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02246FD6
    // ldr r0, _02247138 ; =0x00000568
    // add r0, r4, r0
    // bl ov41_0224AC80
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // ldr r0, _0224713C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // and r1, r0
    // ldr r0, _02247140 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // orr r0, r1
    // bne _02246FD8
    // b _0224712A
    // ldr r0, _02247138 ; =0x00000568
    // mov r1, #0x1b
    // add r0, r4, r0
    // mov r2, #0xd7
    // mov r3, #0x30
    // bl ov41_0224AC08
    // add r0, r6, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // mov r1, #0x6b
    // lsl r1, r1, #4
    // ldr r0, [r4, r1]
    // cmp r0, #3
    // bne _0224700C
    // add r1, r1, #4
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov41_022476B8
    // mov r0, #7
    // str r0, [r5]
    // ldr r0, _02247144 ; =0x00000498
    // add r0, r4, r0
    // bl ov41_02248E44
    // add r0, r4, #0
    // bl ov41_02247D44
    // ldr r0, _02247138 ; =0x00000568
    // add r0, r4, r0
    // bl ov41_0224ABF0
    // add r0, r4, #0
    // bl ov41_02247578
    // b _0224712A
    // ldr r0, _02247148 ; =0x000006B4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0224712A
    // add r1, r6, #0
    // str r1, [r4, r0]
    // mov r1, #8
    // str r1, [r5]
    // mov r1, #4
    // sub r0, r0, #4
    // str r1, [r4, r0]
    // ldr r1, _0224714C ; =0x0000047C
    // mov r2, #0xe
    // add r0, r4, r1
    // sub r1, #0x88
    // add r1, r4, r1
    // bl ov41_0224B4E8
    // b _0224712A
    // mov r1, #0x6b
    // lsl r1, r1, #4
    // ldr r0, [r4, r1]
    // cmp r0, #9
    // bne _0224706A
    // add r1, r1, #4
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov41_02247828
    // mov r0, #0xa
    // str r0, [r5]
    // b _0224712A
    // cmp r0, #8
    // bne _0224707E
    // mov r0, #9
    // str r0, [r5]
    // mov r0, #5
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov41_02247D64
    // b _0224712A
    // add r0, r4, #0
    // bl ov41_02247B7C
    // mov r1, #0x6b
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, _0224714C ; =0x0000047C
    // add r0, r4, r0
    // bl ov41_0224B50C
    // b _0224712A
    // mov r0, #0x6b
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #6
    // bne _022470AA
    // mov r1, #1
    // add r0, #0x10
    // str r1, [r4, r0]
    // mov r0, #0xb
    // str r0, [r5]
    // b _0224712A
    // cmp r1, #7
    // bne _022470BA
    // add r1, r6, #0
    // add r0, #0x10
    // str r1, [r4, r0]
    // mov r0, #0xb
    // str r0, [r5]
    // b _0224712A
    // add r0, r4, #0
    // bl ov41_02247DF8
    // mov r1, #0x6b
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, _0224714C ; =0x0000047C
    // add r0, r4, r0
    // bl ov41_0224B50C
    // b _0224712A
    // ldr r0, _02247148 ; =0x000006B4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0224712A
    // add r2, r6, #0
    // str r2, [r4, r0]
    // mov r1, #6
    // str r1, [r5]
    // sub r0, r0, #4
    // str r2, [r4, r0]
    // ldr r0, _0224714C ; =0x0000047C
    // add r0, r4, r0
    // bl ov41_0224B518
    // b _0224712A
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r1, #0xd
    // str r1, [sp, #8]
    // add r1, r6, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _0224712A
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224712A
    // add r0, r6, #0
    // str r0, [r5]
    // mov r0, #0x6b
    // mov r1, #0xa
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // ldr r0, _0224714C ; =0x0000047C
    // mov r6, #1
    // add r0, r4, r0
    // bl ov41_0224B518
    // add r0, r4, #0
    // bl ov41_0224726C
    // add r0, r6, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02247138: .word 0x00000568
    // _0224713C: .word gSystem
    // _02247140: .word gSystem + 0x40
    // _02247144: .word 0x00000498
    // _02247148: .word 0x000006B4
    // _0224714C: .word 0x0000047C
    // TODO: decompile
}


void ov41_02247150(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // add r0, r6, #0
    // bl OverlayManager_GetArgs
    // add r5, r0, #0
    // mov r0, #0x1b
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02247182
    // ldr r0, [r5, #0x10]
    // mov r1, #8
    // bl GameStats_AddScore
    // mov r1, #0xfd
    // lsl r1, r1, #2
    // ldr r0, [r5, #4]
    // ldr r2, [r5, #0x14]
    // add r1, r4, r1
    // bl ov41_022479A8
    // ldr r0, [r5, #0x18]
    // cmp r0, #0
    // beq _0224719C
    // mov r1, #0x1b
    // lsl r1, r1, #6
    // ldr r1, [r4, r1]
    // cmp r1, #1
    // bne _02247198
    // mov r1, #1
    // str r1, [r0]
    // b _0224719C
    // mov r1, #0
    // str r1, [r0]
    // ldr r0, [r5, #0x20]
    // cmp r0, #0
    // beq _022471AA
    // ldr r1, _02247230 ; =0x000006EC
    // ldr r1, [r4, r1]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _02247234 ; =0x000006B8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _02247238 ; =0x000006BC
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl WindowArray_Delete
    // add r0, r4, #0
    // bl ov41_022476A8
    // ldr r0, _0224723C ; =0x00000498
    // add r0, r4, r0
    // bl ov41_02248F6C
    // add r0, r4, #0
    // bl ov41_02247568
    // add r0, r4, #0
    // bl ov41_022474C4
    // add r0, r4, #0
    // bl ov41_02247310
    // add r0, r4, #0
    // bl ov41_022473F0
    // mov r0, #0xd9
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov41_02245ECC
    // mov r0, #0xd9
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // sub r0, #8
    // add r0, r4, r0
    // bl ov41_022499DC
    // add r0, r4, #0
    // bl ov41_02247274
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl sub_02021238
    // cmp r0, #1
    // beq _0224721A
    // bl GF_AssertFail
    // add r0, r6, #0
    // bl OverlayManager_FreeData
    // mov r0, #0xd
    // bl Heap_Destroy
    // mov r0, #0xe
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _02247230: .word 0x000006EC
    // _02247234: .word 0x000006B8
    // _02247238: .word 0x000006BC
    // _0224723C: .word 0x00000498
    // TODO: decompile
}


void ov41_02247240(void) {
    ov41_02246130();
    ov41_02246170(r4);
    ov41_022463B0(r4);
    ov41_02246250(r4);
    ov41_022463D4();
}


void ov41_0224726C(void) {
    ov41_0224621C();
}


void ov41_02247274(void) {
    ov41_0224626C();
    ov41_022461D0(r4);
    ov41_02246150();
}


void ov41_02247288(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #4]
    // mov r1, #0xd9
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x10]
    // lsl r1, r1, #2
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x30]
    // add r6, r3, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [r5, #0x40]
    // str r2, [sp, #0x30]
    // str r0, [sp, #0x24]
    // ldr r0, [r5, r1]
    // str r0, [sp, #0x28]
    // add r0, r1, #0
    // sub r0, #8
    // add r0, r5, r0
    // add r1, #0x90
    // str r0, [sp, #0x2c]
    // add r0, r5, r1
    // add r1, sp, #0x10
    // bl ov41_02247F3C
    // cmp r6, #0
    // add r2, sp, #0
    // bne _022472DC
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0xe
    // bl ov41_02247FE0
    // b _022472EA
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0xe
    // bl ov41_02247FFC
    // add r0, r5, #0
    // add r1, sp, #0
    // bl ov41_022495C8
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov41_02248158
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // mov r2, #0xe
    // bl ov41_0224825C
    // add sp, #0x34
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02247310(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_022482A8
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_022480E0
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_02247F90
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02247334(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // ldr r0, [r5]
    // str r0, [sp]
    // ldr r0, [r5, #4]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x30]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x40]
    // str r0, [sp, #0x10]
    // mov r0, #0x61
    // lsl r0, r0, #2
    // add r0, r5, r0
    // str r0, [sp, #0x28]
    // mov r0, #0xd9
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // str r1, [sp, #0x14]
    // add r1, r0, #0
    // sub r1, #8
    // add r1, r5, r1
    // str r1, [sp, #0x18]
    // mov r1, #0xe
    // str r1, [sp, #0x1c]
    // mov r1, #2
    // str r1, [sp, #0x20]
    // mov r1, #1
    // add r0, r0, #4
    // str r1, [sp, #0x24]
    // add r0, r5, r0
    // add r1, sp, #0
    // bl ov41_02248488
    // mov r0, #0xda
    // lsl r0, r0, #2
    // mov r1, #0
    // add r0, r5, r0
    // add r2, r1, #0
    // bl ov41_022487F8
    // mov r6, #0
    // mov r0, #0x61
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r6, #0
    // bl ov41_02248ED4
    // add r7, r0, #0
    // mov r4, #0
    // cmp r7, #0
    // ble _022473B4
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // add r2, r6, #0
    // bl ov41_022485DC
    // add r4, r4, #1
    // cmp r4, r7
    // blt _022473A0
    // add r6, r6, #1
    // cmp r6, #0x64
    // blt _0224738C
    // mov r7, #0xda
    // mov r6, #0x61
    // mov r4, #0
    // lsl r7, r7, #2
    // lsl r6, r6, #2
    // add r0, r5, r6
    // add r1, r4, #0
    // bl ov41_02248EE8
    // add r2, r0, #0
    // cmp r2, #0x12
    // bge _022473DA
    // add r0, r5, r7
    // mov r1, #1
    // bl ov41_022485DC
    // add r4, r4, #1
    // cmp r4, #0x12
    // blt _022473C4
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov41_02248724
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_022473F0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_02248940
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_022486F8
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_022484C0
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02247414(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _02247474 ; =0x04000008
    // mov r2, #3
    // ldrh r3, [r0]
    // mov r1, #1
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r1, [r0, #2]
    // bic r1, r2
    // strh r1, [r0, #2]
    // ldrh r3, [r0, #4]
    // mov r1, #2
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #4]
    // ldrh r3, [r0, #6]
    // mov r1, #3
    // bic r3, r2
    // add r2, r3, #0
    // orr r2, r1
    // strh r2, [r0, #6]
    // add r3, r1, #0
    // ldr r0, [r4, #0x40]
    // add r2, r1, #0
    // sub r3, #0x13
    // bl BgSetPosTextAndCommit
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl ov41_0224888C
    // mov r1, #0
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r2, #2
    // add r3, r1, #0
    // str r1, [sp]
    // bl ov41_022488D8
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02247474: .word 0x04000008
    // TODO: decompile
}


void ov41_02247478(void) {
    ov41_02246494();
}


void ov41_02247480(void) {
    // push {r3, lr}
    // sub sp, #0x30
    // ldr r2, [r0, #0x40]
    // str r2, [sp]
    // mov r2, #0x1a
    // str r2, [sp, #4]
    // lsl r2, r1, #1
    // add r1, r2, #0
    // add r1, #0x79
    // str r1, [sp, #8]
    // mov r1, #0x85
    // str r1, [sp, #0xc]
    // mov r1, #1
    // add r2, #0x7a
    // str r2, [sp, #0x10]
    // mov r2, #0
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // mov r1, #2
    // str r1, [sp, #0x24]
    // mov r1, #0xe
    // str r1, [sp, #0x2c]
    // ldr r1, _022474C0 ; =0x000004B4
    // str r2, [sp, #0x14]
    // add r0, r0, r1
    // add r1, sp, #0
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x28]
    // bl ov41_02249C7C
    // add sp, #0x30
    // pop {r3, pc}
    // _022474C0: .word 0x000004B4
    // TODO: decompile
}


void ov41_022474C4(void) {
    // ldr r1, _022474CC ; =0x000004B4
    // ldr r3, _022474D0 ; =ov41_02249CC4
    // add r0, r0, r1
    // bx r3
    // _022474CC: .word 0x000004B4
    // _022474D0: .word ov41_02249CC4
    // TODO: decompile
}


void ov41_022474D4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0x4e
    // ldr r2, _02247550 ; =0x000006EC
    // lsl r0, r0, #4
    // add r0, r4, r0
    // add r1, r4, #0
    // add r2, r4, r2
    // bl ov41_0224A27C
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // mov r1, #0
    // ldr r2, _02247554 ; =ov41_022475B4
    // add r0, r4, r0
    // add r3, r4, #0
    // str r1, [sp]
    // bl ov41_0224A5D4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r2, _02247558 ; =ov41_022475D4
    // add r0, r4, r0
    // mov r1, #1
    // add r3, r4, #0
    // bl ov41_0224A5D4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r2, _0224755C ; =ov41_022475F4
    // add r0, r4, r0
    // mov r1, #2
    // add r3, r4, #0
    // bl ov41_0224A5D4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r2, _02247560 ; =ov41_02247628
    // add r0, r4, r0
    // mov r1, #3
    // add r3, r4, #0
    // bl ov41_0224A5D4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r2, _02247564 ; =ov41_02247598
    // add r0, r4, r0
    // mov r1, #4
    // add r3, r4, #0
    // bl ov41_0224A5D4
    // add sp, #4
    // pop {r3, r4, pc}
    // _02247550: .word 0x000006EC
    // _02247554: .word ov41_022475B4
    // _02247558: .word ov41_022475D4
    // _0224755C: .word ov41_022475F4
    // _02247560: .word ov41_02247628
    // _02247564: .word ov41_02247598
    // TODO: decompile
}


void ov41_02247568(void) {
    // add r1, r0, #0
    // mov r0, #0x4e
    // lsl r0, r0, #4
    // ldr r3, _02247574 ; =ov41_0224A3E4
    // add r0, r1, r0
    // bx r3
    // _02247574: .word ov41_0224A3E4
    // TODO: decompile
}


void ov41_02247578(void) {
    // mov r1, #0x4e
    // lsl r1, r1, #4
    // ldr r3, _02247584 ; =ov41_0224A54C
    // add r0, r0, r1
    // bx r3
    // nop
    // _02247584: .word ov41_0224A54C
    // TODO: decompile
}


void ov41_02247588(void) {
    // mov r1, #0x4e
    // lsl r1, r1, #4
    // ldr r3, _02247594 ; =ov41_0224A580
    // add r0, r0, r1
    // bx r3
    // nop
    // _02247594: .word ov41_0224A580
    // TODO: decompile
}


void ov41_02247598(void) {
    ov41_02248998(0x6b, 0xda, 3);
}


void ov41_022475B4(void) {
    // push {r4, lr}
    // mov r0, #0xda
    // add r4, r1, #0
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_0224894C
    // add r1, r0, #0
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r2, #0
    // bl ov41_02248790
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_022475D4(void) {
    // push {r4, lr}
    // mov r0, #0xda
    // add r4, r1, #0
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_0224894C
    // add r1, r0, #0
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r2, #1
    // bl ov41_02248790
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_022475F4(void) {
    // push {r4, lr}
    // mov r0, #0x6b
    // add r4, r1, #0
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02247624
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl ov41_0224895C
    // add r2, r0, #0
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #0
    // bl ov41_022487F8
    // mov r0, #0x6b
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02247628(void) {
    // push {r4, lr}
    // mov r0, #0x6b
    // add r4, r1, #0
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // beq _02247658
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #1
    // bl ov41_0224895C
    // add r2, r0, #0
    // mov r0, #0xda
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #1
    // bl ov41_022487F8
    // mov r0, #0x6b
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224765C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x28
    // add r4, r0, #0
    // add r2, sp, #0
    // mov r0, #0
    // add r3, r1, #0
    // add r5, r2, #0
    // add r1, r0, #0
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // stmia r5!, {r0, r1}
    // ldr r0, [r4, #0x40]
    // add r1, r2, #0
    // str r0, [sp]
    // ldr r0, [r4, #0x44]
    // mov r2, #0xf
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x48
    // str r0, [sp, #8]
    // mov r0, #0xa
    // str r0, [sp, #0x10]
    // mov r0, #6
    // str r3, [sp, #0xc]
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x24]
    // ldr r0, _022476A4 ; =0x00000568
    // add r0, r4, r0
    // bl ov41_0224AA08
    // add sp, #0x28
    // pop {r3, r4, r5, pc}
    // nop
    // _022476A4: .word 0x00000568
    // TODO: decompile
}


void ov41_022476A8(void) {
    // ldr r1, _022476B0 ; =0x00000568
    // ldr r3, _022476B4 ; =ov41_0224AB40
    // add r0, r0, r1
    // bx r3
    // _022476B0: .word 0x00000568
    // _022476B4: .word ov41_0224AB40
    // TODO: decompile
}


void ov41_022476B8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _022476DC ; =ov41_022476E0
    // mov r1, #0x10
    // mov r2, #0xa
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // str r5, [r0]
    // str r4, [r0, #4]
    // mov r1, #0
    // str r1, [r0, #8]
    // str r1, [r0, #0xc]
    // pop {r3, r4, r5, pc}
    // nop
    // _022476DC: .word ov41_022476E0
    // TODO: decompile
}


void ov41_022476E0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r1, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #9
    // bls _022476EE
    // b _02247822
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022476FA: ; jump table
    // mov r0, #0xda
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // mov r1, #3
    // mov r2, #0
    // bl ov41_02248750
    // cmp r0, #0
    // bne _02247726
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #0xda
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // bl ov41_02248998
    // cmp r0, #0
    // beq _02247822
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #8
    // add r1, r0, #0
    // sub r1, #0x18
    // mov r2, #0
    // mov r3, #0xa
    // bl StartBrightnessTransition
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #1
    // bl IsBrightnessTransitionActive
    // cmp r0, #0
    // beq _02247822
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #0x4e
    // ldr r1, [r4]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // mov r2, #8
    // bl ov41_0224A5A4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #8
    // blt _02247822
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r1, #7
    // add r0, r4, #0
    // mvn r1, r1
    // mov r2, #5
    // mov r3, #8
    // bl ov41_02247A48
    // cmp r0, #0
    // beq _02247822
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // ldr r0, [r4]
    // mov r1, #1
    // bl ov41_02247480
    // ldr r0, [r4]
    // mov r1, #1
    // ldr r0, [r0, #0x40]
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r4]
    // bl ov41_02247AB4
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r1, #0
    // mov r0, #1
    // add r2, r1, #0
    // str r0, [sp]
    // mov r0, #8
    // sub r2, #0x10
    // mov r3, #0xa
    // bl StartBrightnessTransition
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #1
    // bl IsBrightnessTransitionActive
    // cmp r0, #0
    // beq _02247822
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // ldr r1, [r4, #4]
    // mov r2, #1
    // str r2, [r1]
    // bl DestroySysTaskAndEnvironment
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov41_02247828(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _0224784C ; =ov41_02247850
    // mov r1, #0x10
    // mov r2, #0xa
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // str r5, [r0]
    // str r4, [r0, #4]
    // mov r1, #0
    // str r1, [r0, #8]
    // str r1, [r0, #0xc]
    // pop {r3, r4, r5, pc}
    // nop
    // _0224784C: .word ov41_02247850
    // TODO: decompile
}


void ov41_02247850(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r1, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #9
    // bls _0224785E
    // b _022479A2
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224786A: ; jump table
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #8
    // add r1, r0, #0
    // sub r1, #0x18
    // mov r2, #0
    // mov r3, #0xa
    // bl StartBrightnessTransition
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #1
    // bl IsBrightnessTransitionActive
    // cmp r0, #0
    // beq _022479A2
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // ldr r0, [r4]
    // bl ov41_02247B5C
    // ldr r0, [r4]
    // bl ov41_02247414
    // ldr r0, [r4]
    // bl ov41_02247588
    // ldr r0, [r4]
    // mov r1, #0
    // bl ov41_02247480
    // ldr r0, [r4]
    // mov r2, #3
    // add r3, r2, #0
    // ldr r0, [r0, #0x40]
    // mov r1, #1
    // sub r3, #0x2b
    // bl ScheduleSetBgPosText
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r1, #8
    // add r2, r1, #0
    // add r0, r4, #0
    // sub r2, #0xd
    // add r3, r1, #0
    // bl ov41_02247A48
    // cmp r0, #0
    // beq _022479A2
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #0x4e
    // ldr r1, [r4]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // add r2, r1, #0
    // sub r2, #8
    // bl ov41_0224A5A4
    // ldr r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #8]
    // cmp r0, #8
    // blt _022479A2
    // mov r0, #0
    // str r0, [r4, #8]
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r1, #0
    // mov r0, #1
    // add r2, r1, #0
    // str r0, [sp]
    // mov r0, #8
    // sub r2, #0x10
    // mov r3, #0xa
    // bl StartBrightnessTransition
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #1
    // bl IsBrightnessTransitionActive
    // cmp r0, #0
    // beq _022479A2
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #0xda
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // mov r1, #0
    // add r2, r1, #0
    // bl ov41_02248750
    // cmp r0, #0
    // bne _02247974
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // mov r0, #0xda
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // bl ov41_02248998
    // cmp r0, #0
    // beq _022479A2
    // ldr r0, [r4, #0xc]
    // add sp, #4
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, pc}
    // ldr r1, [r4, #4]
    // mov r2, #1
    // str r2, [r1]
    // bl DestroySysTaskAndEnvironment
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov41_022479A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r1, [sp]
    // add r6, r0, #0
    // add r4, r2, #0
    // bl sub_0202BC60
    // ldr r1, [sp]
    // ldr r2, [sp]
    // add r1, #0x84
    // ldr r1, [r1]
    // add r0, r6, #0
    // add r2, #0x78
    // bl sub_0202BC88
    // cmp r4, #0
    // beq _022479E8
    // add r0, r4, #0
    // mov r1, #0xd
    // bl PlayerProfile_GetPlayerName_NewString
    // add r5, r0, #0
    // add r0, r4, #0
    // bl PlayerProfile_GetTrainerGender
    // add r2, r0, #0
    // add r0, r6, #0
    // add r1, r5, #0
    // bl sub_0202BDC8
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, [sp]
    // mov r5, #0
    // add r7, r0, #0
    // ldr r4, [r0, #0x1c]
    // add r7, #0x14
    // cmp r4, r7
    // beq _02247A0E
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _02247A08
    // ldr r1, [r4]
    // add r0, r6, #0
    // add r2, r5, #0
    // bl sub_0202BCAC
    // add r5, r5, #1
    // ldr r4, [r4, #8]
    // cmp r4, r7
    // bne _022479F6
    // ldr r0, [sp]
    // ldr r4, [r0, #0xc]
    // add r7, r0, #4
    // cmp r4, r7
    // beq _02247A30
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _02247A2A
    // ldr r1, [r4]
    // add r0, r6, #0
    // add r2, r5, #0
    // bl sub_0202BCAC
    // add r5, r5, #1
    // ldr r4, [r4, #8]
    // cmp r4, r7
    // bne _02247A18
    // ldr r1, [sp]
    // add r0, r6, #0
    // ldr r1, [r1, #0x74]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl sub_0202BD60
    // add r0, r6, #0
    // bl sub_0202BC38
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02247A48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #8]
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r0, #8
    // bge _02247A64
    // mov r0, #0xfd
    // ldr r3, [r5]
    // lsl r0, r0, #2
    // add r0, r3, r0
    // bl ov41_022480F8
    // ldr r0, [r5, #8]
    // cmp r0, #1
    // blt _02247AA2
    // ldr r0, [r5]
    // mov r1, #2
    // ldr r0, [r0, #0x40]
    // add r2, r1, #0
    // add r3, r4, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0, #0x40]
    // mov r2, #2
    // add r3, r4, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r5]
    // mov r1, #2
    // ldr r0, [r0, #0x40]
    // mov r2, #5
    // add r3, r6, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0, #0x40]
    // mov r2, #5
    // add r3, r6, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r5, #8]
    // add r0, r0, #1
    // str r0, [r5, #8]
    // cmp r0, r7
    // ble _02247AB0
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02247AB4(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, [r4, #0x40]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r2, #0
    // ldr r0, [r4, #0x40]
    // mov r1, #3
    // add r3, r2, #0
    // bl BgSetPosTextAndCommit
    // mov r1, #3
    // ldr r0, [r4, #0x40]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #0x14
    // bl MI_CpuFill8
    // ldr r0, [r4, #0x40]
    // add r3, sp, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // mov r0, #0x19
    // strb r0, [r3, #0x10]
    // mov r0, #4
    // strb r0, [r3, #0x11]
    // ldrb r0, [r3, #0x12]
    // mov r1, #0xf
    // ldr r2, _02247B54 ; =0x000006EC
    // bic r0, r1
    // ldr r1, [r4, r2]
    // sub r2, #0x34
    // lsl r1, r1, #0x18
    // lsr r5, r1, #0x18
    // mov r1, #0xf
    // and r1, r5
    // orr r0, r1
    // strb r0, [r3, #0x12]
    // ldr r0, [r4, r2]
    // add r1, sp, #0
    // bl YesNoPrompt_InitFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl ov41_02247D1C
    // ldr r0, _02247B58 ; =0x04000008
    // mov r2, #3
    // ldrh r3, [r0]
    // mov r1, #2
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r3, [r0, #2]
    // mov r1, #1
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #2]
    // ldrh r3, [r0, #4]
    // mov r1, #3
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #4]
    // ldrh r1, [r0, #6]
    // bic r1, r2
    // strh r1, [r0, #6]
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _02247B54: .word 0x000006EC
    // _02247B58: .word 0x04000008
    // TODO: decompile
}


void ov41_02247B5C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02247B78 ; =0x000006B8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // bl ov41_02247D3C
    // ldr r0, [r4, #0x40]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // pop {r4, pc}
    // _02247B78: .word 0x000006B8
    // TODO: decompile
}


void ov41_02247B7C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02247BB0 ; =0x000006B8
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // add r4, r0, #0
    // beq _02247B96
    // cmp r4, #1
    // beq _02247B9A
    // cmp r4, #2
    // beq _02247B9E
    // b _02247BA0
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // mov r4, #8
    // b _02247BA0
    // mov r4, #9
    // ldr r0, _02247BB0 ; =0x000006B8
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_IsInTouchMode
    // ldr r1, _02247BB4 ; =0x000006EC
    // str r0, [r5, r1]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02247BB0: .word 0x000006B8
    // _02247BB4: .word 0x000006EC
    // TODO: decompile
}


void ov41_02247BB8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, _02247C70 ; =0x000006DC
    // str r1, [sp, #0x14]
    // ldr r0, [r5, r0]
    // add r7, r2, #0
    // add r4, r3, #0
    // bl Options_GetFrame
    // add r6, r0, #0
    // mov r0, #0
    // mov r1, #0xe0
    // mov r2, #0xe
    // bl LoadFontPal1
    // str r4, [sp]
    // add r0, sp, #0x20
    // ldrb r1, [r0, #0x10]
    // mov r2, #3
    // add r3, r7, #0
    // str r1, [sp, #4]
    // ldrb r0, [r0, #0x14]
    // ldr r1, _02247C74 ; =0x000006BC
    // str r0, [sp, #8]
    // mov r0, #7
    // str r0, [sp, #0xc]
    // mov r0, #0x5a
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x40]
    // ldr r1, [r5, r1]
    // bl AddWindowParameterized
    // ldr r0, _02247C74 ; =0x000006BC
    // mov r1, #0xf
    // ldr r0, [r5, r0]
    // bl FillWindowPixelBuffer
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xe
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x40]
    // mov r1, #3
    // mov r2, #0x3c
    // mov r3, #8
    // bl LoadUserFrameGfx2
    // ldr r0, _02247C74 ; =0x000006BC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // mov r2, #0x3c
    // mov r3, #8
    // bl DrawFrameAndWindow2
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // ldr r1, [sp, #0x14]
    // add r6, r0, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02247C78 ; =0x0001020F
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02247C74 ; =0x000006BC
    // str r3, [sp, #0xc]
    // ldr r0, [r5, r0]
    // mov r1, #1
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl DestroyMsgData
    // ldr r0, _02247C74 ; =0x000006BC
    // ldr r0, [r5, r0]
    // bl CopyWindowToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02247C70: .word 0x000006DC
    // _02247C74: .word 0x000006BC
    // _02247C78: .word 0x0001020F
    // TODO: decompile
}


void ov41_02247C7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _02247CF4 ; =0x000006BC
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // add r1, r4, #0
    // add r7, r0, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // mov r1, #0xd
    // bl String_New
    // add r4, r0, #0
    // ldr r0, _02247CF8 ; =0x000006E8
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02247CFC ; =0x0001020F
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _02247CF4 ; =0x000006BC
    // str r3, [sp, #0xc]
    // ldr r0, [r5, r0]
    // mov r1, #1
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // ldr r0, _02247CF4 ; =0x000006BC
    // ldr r0, [r5, r0]
    // bl CopyWindowToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02247CF4: .word 0x000006BC
    // _02247CF8: .word 0x000006E8
    // _02247CFC: .word 0x0001020F
    // TODO: decompile
}


void ov41_02247D00(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02247D18 ; =0x000006BC
    // ldr r0, [r4, r0]
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _02247D18 ; =0x000006BC
    // ldr r0, [r4, r0]
    // bl RemoveWindow
    // pop {r4, pc}
    // nop
    // _02247D18: .word 0x000006BC
    // TODO: decompile
}


void ov41_02247D1C(void) {
    ov41_02247BB8(0x1b, 2, 1);
}


void ov41_02247D34(void) {
    ov41_02247C7C();
}


void ov41_02247D3C(void) {
    ov41_02247D00();
}


void ov41_02247D44(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xfd
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov41_022482B4
    // add r1, r0, #0
    // ldr r0, _02247D60 ; =0x00000568
    // add r0, r4, r0
    // bl ov41_0224AC98
    // pop {r4, pc}
    // nop
    // _02247D60: .word 0x00000568
    // TODO: decompile
}


void ov41_02247D64(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #0x14
    // bl MI_CpuFill8
    // ldr r0, [r4, #0x40]
    // add r3, sp, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // mov r0, #0x19
    // strb r0, [r3, #0x10]
    // mov r0, #4
    // strb r0, [r3, #0x11]
    // ldrb r0, [r3, #0x12]
    // mov r1, #0xf
    // ldr r2, _02247DEC ; =0x000006EC
    // bic r0, r1
    // ldr r1, [r4, r2]
    // sub r2, #0x34
    // lsl r1, r1, #0x18
    // lsr r5, r1, #0x18
    // mov r1, #0xf
    // and r1, r5
    // orr r0, r1
    // strb r0, [r3, #0x12]
    // ldr r0, [r4, r2]
    // bl YesNoPrompt_Reset
    // ldr r0, _02247DF0 ; =0x000006B8
    // add r1, sp, #0
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_InitFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl ov41_02247D34
    // ldr r0, _02247DF4 ; =0x04000008
    // mov r2, #3
    // ldrh r3, [r0]
    // mov r1, #2
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r3, [r0, #2]
    // mov r1, #1
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #2]
    // ldrh r3, [r0, #4]
    // mov r1, #3
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0, #4]
    // ldrh r1, [r0, #6]
    // bic r1, r2
    // strh r1, [r0, #6]
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _02247DEC: .word 0x000006EC
    // _02247DF0: .word 0x000006B8
    // _02247DF4: .word 0x04000008
    // TODO: decompile
}


void ov41_02247DF8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02247E2C ; =0x000006B8
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // add r4, r0, #0
    // beq _02247E12
    // cmp r4, #1
    // beq _02247E16
    // cmp r4, #2
    // beq _02247E1A
    // b _02247E1C
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r4, #6
    // b _02247E1C
    // mov r4, #7
    // ldr r0, _02247E2C ; =0x000006B8
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_IsInTouchMode
    // ldr r1, _02247E30 ; =0x000006EC
    // str r0, [r5, r1]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02247E2C: .word 0x000006B8
    // _02247E30: .word 0x000006EC
    // TODO: decompile
}


void ov41_02247E34(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // str r1, [sp]
    // add r7, r2, #0
    // add r0, r3, #0
    // sub r0, r0, r7
    // mov r1, #3
    // str r3, [sp, #4]
    // ldr r4, [sp, #0x2c]
    // ldr r5, [sp, #0x30]
    // bl _u32_div_f
    // add r1, r7, r0
    // lsl r0, r0, #1
    // add r0, r7, r0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // str r1, [sp, #0xc]
    // sub r0, r0, r6
    // mov r1, #3
    // bl _u32_div_f
    // add r2, r6, r0
    // lsl r0, r0, #1
    // ldr r1, [sp, #0x28]
    // add r0, r6, r0
    // cmp r1, #0xf
    // bhi _02247F36
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02247E7A: ; jump table
    // str r7, [r4]
    // add sp, #0x10
    // str r6, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // str r7, [r4]
    // add sp, #0x10
    // str r2, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // str r7, [r4]
    // add sp, #0x10
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // str r7, [r4]
    // add sp, #0x10
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0xc]
    // add sp, #0x10
    // str r0, [r4]
    // str r6, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0xc]
    // add sp, #0x10
    // str r0, [r4]
    // str r2, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #0xc]
    // add sp, #0x10
    // str r1, [r4]
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0xc]
    // str r0, [r4]
    // ldr r0, [sp]
    // add sp, #0x10
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // add sp, #0x10
    // str r0, [r4]
    // str r6, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // add sp, #0x10
    // str r0, [r4]
    // str r2, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #8]
    // add sp, #0x10
    // str r1, [r4]
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // str r0, [r4]
    // ldr r0, [sp]
    // add sp, #0x10
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // add sp, #0x10
    // str r0, [r4]
    // str r6, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // add sp, #0x10
    // str r0, [r4]
    // str r2, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #4]
    // add sp, #0x10
    // str r1, [r4]
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // str r0, [r4]
    // ldr r0, [sp]
    // str r0, [r5]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02247F3C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r1]
    // mov r2, #0
    // str r0, [r4, #0x2c]
    // ldr r0, [r1, #4]
    // str r0, [r4, #0x30]
    // ldr r0, [r1, #8]
    // str r0, [r4, #0x34]
    // ldr r0, [r1, #0xc]
    // str r0, [r4, #0x38]
    // ldr r0, [r1, #0x10]
    // str r0, [r4, #0x3c]
    // ldr r0, [r1, #0x14]
    // str r0, [r4, #0x40]
    // ldr r0, [r1, #0x18]
    // str r0, [r4, #0x44]
    // str r2, [r4, #0x74]
    // ldr r0, [r1, #0x1c]
    // str r0, [r4]
    // add r0, r4, #4
    // str r0, [r4, #0xc]
    // str r0, [r4, #0x10]
    // add r0, r4, #0
    // add r0, #0x14
    // str r0, [r4, #0x1c]
    // str r0, [r4, #0x20]
    // str r2, [r4, #0x24]
    // ldr r0, [r1, #0x20]
    // add r1, r4, #0
    // str r0, [r4, #0x28]
    // ldr r0, [r4]
    // add r1, #0x78
    // mov r2, #3
    // bl ov41_022499F0
    // add r4, #0x14
    // add r1, r4, #0
    // bl ov41_02249A50
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02247F90(void) {
    ov41_02248038();
    ov41_022480E0(r4);
    memset(r4, 0, 0x88);
}


void ov41_02247FAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldr r0, [sp, #0x20]
    // add r6, r1, #0
    // str r0, [sp]
    // add r5, r2, #0
    // add r0, r4, #0
    // add r7, r3, #0
    // ldr r1, [r4, #0x3c]
    // add r0, #0x78
    // add r2, r6, #0
    // add r3, r5, #0
    // bl ov41_022495F0
    // add r0, r4, #0
    // ldr r1, [sp, #0x1c]
    // add r0, #0x78
    // bl ov41_02249700
    // add r4, #0x78
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov41_0224971C
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02247FE0(void) {
    ov41_022495F0();
}


void ov41_02247FFC(void) {
    ov41_02249604(1);
}


void ov41_02248020(void) {
    // ldr r3, _0224802C ; =ov41_02249A50
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2, #0x20]
    // bx r3
    // nop
    // _0224802C: .word ov41_02249A50
    // TODO: decompile
}


void ov41_02248030(void) {
    ov41_02249A60();
}


void ov41_02248038(void) {
    ov41_022496E8();
}


void ov41_02248044(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x20
    // add r4, r0, #0
    // ldr r5, [r4, #0x24]
    // ldr r0, [r4, #0x28]
    // cmp r5, r0
    // bge _0224809E
    // ldr r0, [r4, #0x44]
    // str r0, [sp]
    // ldr r0, [r4, #0x2c]
    // str r0, [sp, #4]
    // ldr r5, [r4, #0x30]
    // lsl r0, r1, #2
    // ldr r0, [r5, r0]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x34]
    // ldr r0, [r0]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x38]
    // ldrb r0, [r0, r1]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0
    // bl ov41_02245EE0
    // ldr r1, [sp, #0x30]
    // add r5, r0, #0
    // bl ov41_02246014
    // ldr r0, [r4]
    // add r1, r5, #0
    // mov r2, #0
    // bl ov41_022499F0
    // add r1, r4, #4
    // bl ov41_02249A50
    // ldr r0, [r4, #0x24]
    // add sp, #0x20
    // add r0, r0, #1
    // str r0, [r4, #0x24]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #0x20
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_022480A4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r3, r2, #0
    // ldr r5, [r4, #0x24]
    // ldr r2, [r4, #0x28]
    // cmp r5, r2
    // bge _022480C2
    // mov r2, #1
    // bl ov41_02248324
    // ldr r0, [r4, #0x24]
    // add r0, r0, #1
    // str r0, [r4, #0x24]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_022480C8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // bl ov41_02249A60
    // ldr r0, [r4, #0x24]
    // sub r0, r0, #1
    // str r0, [r4, #0x24]
    // bpl _022480DE
    // bl GF_AssertFail
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_022480E0(void) {
    ov41_02249A70((r0 + 4));
    ov41_02249A70(r4);
    *((u32*)(r4 + 0x24)) = 0;
}


void ov41_022480F8(void) {
    ov41_02249BE8((r0 + 4));
    ov41_02249BE8(r5, r4, r6);
}


void ov41_02248114(void) {
    ov41_02249BE8();
}


void ov41_02248120(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // neg r4, r2
    // neg r7, r1
    // add r0, r5, #4
    // add r1, r7, #0
    // add r2, r4, #0
    // add r6, r3, #0
    // bl ov41_02249BE8
    // ldr r2, [sp, #0x18]
    // add r0, r5, #4
    // add r1, r6, #0
    // bl ov41_02249BE8
    // add r0, r5, #0
    // add r0, #0x14
    // add r1, r7, #0
    // add r2, r4, #0
    // bl ov41_02249BE8
    // add r5, #0x14
    // ldr r2, [sp, #0x18]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov41_02249BE8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02248158(void) {
    ov41_02248164();
}


void ov41_02248164(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r7, #0
    // ldr r4, [r7, #0x1c]
    // add r6, #0x14
    // add r5, r1, #0
    // cmp r4, r6
    // beq _02248192
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // ldr r0, [r4]
    // bne _02248184
    // add r1, r5, #0
    // bl ov41_02246014
    // b _0224818A
    // add r1, r5, #0
    // bl ov41_02249700
    // ldr r4, [r4, #8]
    // sub r5, r5, #1
    // cmp r4, r6
    // bne _02248174
    // ldr r4, [r7, #0xc]
    // add r6, r7, #4
    // sub r5, #8
    // cmp r4, r6
    // beq _022481BA
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // ldr r0, [r4]
    // bne _022481AC
    // add r1, r5, #0
    // bl ov41_02246014
    // b _022481B2
    // add r1, r5, #0
    // bl ov41_02249700
    // ldr r4, [r4, #8]
    // sub r5, r5, #1
    // cmp r4, r6
    // bne _0224819C
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_022481BC(void) {
    TouchscreenHitbox_TouchHeldIsIn(0x12, 0x8a, 0x8f, 0xf6);
}


void ov41_022481D8(void) {
    TouchscreenHitbox_PointIsIn(0x12, 0x8a, 0x8f, 0xf6);
}


void ov41_022481F4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldr r5, [r0, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x14
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // str r0, [sp, #4]
    // cmp r5, r0
    // beq _0224822A
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // add r3, r7, #0
    // bl ov41_02249AA8
    // cmp r0, #1
    // bne _02248222
    // add sp, #0xc
    // add r0, r5, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r5, [r5, #8]
    // ldr r0, [sp, #4]
    // cmp r5, r0
    // bne _0224820C
    // ldr r0, [sp]
    // ldr r5, [r0, #0xc]
    // add r0, r0, #4
    // str r0, [sp, #8]
    // cmp r5, r0
    // beq _02248254
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // add r3, r7, #0
    // bl ov41_02249AA8
    // cmp r0, #1
    // bne _0224824C
    // add sp, #0xc
    // add r0, r5, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r5, [r5, #8]
    // ldr r0, [sp, #8]
    // cmp r5, r0
    // bne _02248236
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224825C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // ldr r0, [r5, #0x40]
    // add r4, r1, #0
    // str r0, [sp]
    // mov r0, #0x1a
    // lsl r1, r4, #2
    // str r0, [sp, #4]
    // add r0, r1, #0
    // add r0, #0x86
    // str r0, [sp, #8]
    // add r0, r1, #0
    // add r0, #0x87
    // str r0, [sp, #0xc]
    // mov r0, #0x88
    // str r0, [sp, #0x14]
    // mov r0, #0x10
    // str r0, [sp, #0x18]
    // mov r0, #2
    // str r0, [sp, #0x1c]
    // mov r0, #1
    // str r0, [sp, #0x20]
    // mov r0, #0xd
    // str r0, [sp, #0x24]
    // mov r0, #0
    // add r1, #0x88
    // str r0, [sp, #0x28]
    // add r0, r5, #0
    // str r1, [sp, #0x10]
    // add r0, #0x48
    // add r1, sp, #0
    // str r2, [sp, #0x2c]
    // bl ov41_02249C7C
    // str r4, [r5, #0x74]
    // add sp, #0x30
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_022482A8(void) {
    ov41_02249CC4();
}


void ov41_022482B4(void) {
    // ldr r0, [r0, #0x24]
    // bx lr
    // TODO: decompile
}


void ov41_022482B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r0, #0
    // ldr r6, [r7, #0x1c]
    // mov r4, #0
    // add r7, #0x14
    // str r1, [sp]
    // str r2, [sp, #4]
    // add r5, r4, #0
    // cmp r6, r7
    // beq _02248316
    // add r0, r6, #0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_02248400
    // cmp r4, #0
    // bge _022482E0
    // neg r1, r4
    // b _022482E2
    // add r1, r4, #0
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // bge _022482EC
    // neg r2, r0
    // b _022482EE
    // add r2, r0, #0
    // cmp r2, r1
    // ble _022482F4
    // add r4, r0, #0
    // cmp r5, #0
    // bge _022482FC
    // neg r1, r5
    // b _022482FE
    // add r1, r5, #0
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // bge _02248308
    // neg r2, r0
    // b _0224830A
    // add r2, r0, #0
    // cmp r2, r1
    // ble _02248310
    // add r5, r0, #0
    // ldr r6, [r6, #8]
    // cmp r6, r7
    // bne _022482CE
    // ldr r0, [sp]
    // str r4, [r0]
    // ldr r0, [sp, #4]
    // str r5, [r0]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02248324(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x58
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x10]
    // add r0, r1, #0
    // add r1, sp, #0x54
    // add r2, sp, #0x50
    // add r4, r3, #0
    // bl ov41_02249B44
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x4c
    // add r2, sp, #0x48
    // bl ov41_02249B94
    // add r0, sp, #0x30
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x44
    // add r2, sp, #0x34
    // add r3, sp, #0x40
    // bl ov41_02249BAC
    // mov r0, #0x76
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r5, #0
    // str r0, [sp, #0x20]
    // ldr r6, [sp, #0x54]
    // ldr r0, [sp, #0x4c]
    // ldr r7, [sp, #0x44]
    // add r1, r6, r0
    // ldr r0, [sp, #0x34]
    // add r4, r5, #0
    // sub r0, r1, r0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x50]
    // ldr r1, [sp, #0x48]
    // str r0, [sp, #0x24]
    // add r1, r0, r1
    // ldr r0, [sp, #0x30]
    // sub r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0x2c]
    // add r0, #0x78
    // str r0, [sp, #0x2c]
    // str r4, [sp]
    // add r0, sp, #0x3c
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x1c]
    // add r0, r1, r0
    // ldr r1, [sp, #0x18]
    // add r2, r6, r7
    // bl ov41_02247E34
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x3c]
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x20]
    // bl ov41_02249820
    // add r4, r4, #1
    // orr r5, r0
    // cmp r4, #0x10
    // blt _02248388
    // cmp r5, #0
    // beq _022483DE
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // beq _022483D0
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, #0x14
    // str r1, [sp, #0xc]
    // bl ov41_02249A50
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [r1, #0x20]
    // bl ov41_02249A50
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // beq _022483F2
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, r1, #4
    // bl ov41_02249A50
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [r1, #0x10]
    // bl ov41_02249A50
    // add sp, #0x58
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02248400(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x24
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r0, #0
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
    // bl ov41_02249B94
    // add r0, r6, #0
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    // bl ov41_02249B44
    // add r0, sp, #4
    // str r0, [sp]
    // add r0, r6, #0
    // add r1, sp, #0x10
    // add r2, sp, #8
    // add r3, sp, #0xc
    // bl ov41_02249BAC
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // add r2, r0, r1
    // mov r1, #0x8a
    // sub r2, r1, r2
    // ldr r1, [sp, #0x20]
    // add r1, r0, r1
    // ldr r0, [sp, #8]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x14]
    // sub r1, #0xf6
    // add r6, r0, r3
    // mov r3, #0x12
    // sub r3, r3, r6
    // ldr r6, [sp, #0x1c]
    // add r6, r0, r6
    // ldr r0, [sp, #4]
    // sub r6, r6, r0
    // sub r6, #0x8f
    // cmp r2, #0
    // ble _0224845C
    // str r2, [r5]
    // b _0224846A
    // cmp r1, #0
    // ble _02248466
    // neg r0, r1
    // str r0, [r5]
    // b _0224846A
    // mov r0, #0
    // str r0, [r5]
    // cmp r3, #0
    // ble _02248474
    // add sp, #0x24
    // str r3, [r4]
    // pop {r3, r4, r5, r6, pc}
    // cmp r6, #0
    // ble _02248480
    // neg r0, r6
    // add sp, #0x24
    // str r0, [r4]
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // str r0, [r4]
    // add sp, #0x24
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02248488(void) {
    *((u32*)(r0 + 0x44)) = r1;
    *((u32*)(r0 + 0x48)) = *((u32*)(r1 + 4));
    *((u32*)(r0 + 0x4c)) = *((u32*)(r1 + 8));
    *((u32*)(r0 + 0x50)) = *((u32*)(r1 + 0xc));
    *((u32*)(r0 + 0x54)) = *((u32*)(r1 + 0x10));
    *((u32*)(r0 + 0x58)) = *((u32*)(r1 + 0x14));
    *((u32*)(r0 + 8)) = *((u32*)(r1 + 0x18));
    *((u32*)(r0 + 4)) = *((u32*)(r1 + 0x28));
    ov41_0224888C(0);
    ov41_022489A8(r5, r4);
}


void ov41_022484C0(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // bl ov41_022486F8
    // add r5, r6, #0
    // mov r4, #0
    // add r5, #0xc
    // add r0, r5, #0
    // bl ov41_02248A6C
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, #4
    // blt _022484CE
    // add r0, r6, #0
    // mov r1, #0
    // mov r2, #0x8c
    // bl memset
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_022484E8(void) {
    // push {r3, lr}
    // cmp r0, #0
    // beq _022484F8
    // cmp r0, #1
    // beq _02248568
    // cmp r0, #2
    // beq _02248576
    // pop {r3, pc}
    // cmp r1, #5
    // bgt _02248500
    // mov r0, #0
    // pop {r3, pc}
    // cmp r1, #0xb
    // bgt _02248508
    // mov r0, #1
    // pop {r3, pc}
    // cmp r1, #0x11
    // bgt _02248510
    // mov r0, #2
    // pop {r3, pc}
    // cmp r1, #0x15
    // bgt _02248518
    // mov r0, #3
    // pop {r3, pc}
    // cmp r1, #0x1c
    // bgt _02248520
    // mov r0, #4
    // pop {r3, pc}
    // cmp r1, #0x21
    // bgt _02248528
    // mov r0, #5
    // pop {r3, pc}
    // cmp r1, #0x26
    // bgt _02248530
    // mov r0, #6
    // pop {r3, pc}
    // cmp r1, #0x2a
    // bgt _02248538
    // mov r0, #7
    // pop {r3, pc}
    // cmp r1, #0x31
    // bgt _02248540
    // mov r0, #8
    // pop {r3, pc}
    // cmp r1, #0x37
    // bgt _02248548
    // mov r0, #9
    // pop {r3, pc}
    // cmp r1, #0x3c
    // bgt _02248550
    // mov r0, #0xa
    // pop {r3, pc}
    // cmp r1, #0x47
    // bgt _02248558
    // mov r0, #0xb
    // pop {r3, pc}
    // cmp r1, #0x5b
    // bgt _02248560
    // mov r0, #0xc
    // pop {r3, pc}
    // cmp r1, #0x63
    // bgt _02248582
    // mov r0, #0xd
    // pop {r3, pc}
    // add r0, r2, #0
    // bl ov41_02248EF4
    // mov r1, #9
    // bl _s32_div_f
    // pop {r3, pc}
    // add r0, r2, #0
    // bl ov41_02248EF4
    // mov r1, #9
    // bl _s32_div_f
    // pop {r3, pc}
    // TODO: decompile
}


void ov41_02248584(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // add r4, r3, #0
    // cmp r0, #0
    // beq _02248598
    // cmp r0, #1
    // beq _022485CA
    // cmp r0, #2
    // beq _022485CA
    // pop {r3, r4, r5, pc}
    // mov r0, #0xa
    // str r0, [r5]
    // mov r0, #0x12
    // str r0, [r4]
    // bl MTRandom
    // ldr r2, [sp, #0x10]
    // mov r1, #0x6c
    // sub r1, r1, r2
    // bl _u32_div_f
    // ldr r0, [r5]
    // add r0, r0, r1
    // str r0, [r5]
    // bl MTRandom
    // ldr r2, [sp, #0x14]
    // mov r1, #0x7d
    // sub r1, r1, r2
    // bl _u32_div_f
    // ldr r0, [r4]
    // add r0, r0, r1
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [sp, #0x18]
    // bl ov41_02248EF4
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov41_02248B48
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_022485DC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // add r5, r0, #0
    // ldr r0, [r5, #0x58]
    // add r4, r2, #0
    // str r4, [sp, #0x40]
    // str r0, [sp, #0x28]
    // ldr r0, [r5, #0x44]
    // add r6, r1, #0
    // mov r1, #0
    // str r0, [sp, #0x2c]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // cmp r6, #0
    // beq _02248604
    // cmp r6, #1
    // beq _02248610
    // cmp r6, #2
    // beq _0224861E
    // b _0224862C
    // ldr r0, [r5, #0x50]
    // str r4, [sp, #0xc]
    // ldrb r0, [r0, r4]
    // add r7, r1, #0
    // str r0, [sp, #0x44]
    // b _02248630
    // add r0, r4, #0
    // str r0, [sp, #0xc]
    // add r0, #0x64
    // str r0, [sp, #0xc]
    // add r7, r4, #1
    // str r1, [sp, #0x44]
    // b _02248630
    // add r0, r4, #0
    // str r0, [sp, #0xc]
    // add r0, #0x64
    // str r0, [sp, #0xc]
    // add r7, r4, #1
    // str r1, [sp, #0x44]
    // b _02248630
    // bl GF_AssertFail
    // ldr r0, [sp, #0xc]
    // ldr r1, [r5, #0x48]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // lsl r1, r7, #2
    // str r0, [sp, #0x30]
    // ldr r2, [r5, #0x4c]
    // cmp r0, #0
    // ldr r1, [r2, r1]
    // str r1, [sp, #0x34]
    // bne _0224864A
    // bl GF_AssertFail
    // ldr r0, [sp, #0x34]
    // cmp r0, #0
    // bne _02248654
    // bl GF_AssertFail
    // ldr r2, [r5, #4]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov41_022484E8
    // add r7, r0, #0
    // add r0, sp, #0x28
    // bl ov41_02245EE0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #8]
    // ldr r1, [sp, #0x10]
    // add r2, r6, #0
    // bl ov41_022499F0
    // mov r1, #0xc
    // mul r1, r6
    // add r1, r5, r1
    // ldr r2, [r1, #0xc]
    // lsl r1, r7, #4
    // add r1, r2, r1
    // ldr r1, [r1, #0xc]
    // str r0, [sp, #0x14]
    // bl ov41_02249A50
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // bl ov41_02249B94
    // ldr r0, [sp, #0x1c]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // add r2, sp, #0x24
    // str r0, [sp, #4]
    // ldr r0, [r5, #4]
    // add r3, sp, #0x20
    // str r0, [sp, #8]
    // add r0, r6, #0
    // bl ov41_02248584
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // bl ov41_02249AF4
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // add r2, r6, #0
    // add r3, r7, #0
    // bl ov41_02248B20
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_022486C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // mov r1, #0xc
    // add r5, r0, #0
    // mul r1, r4
    // add r7, r3, #0
    // add r1, r5, r1
    // add r6, r2, #0
    // ldr r2, [r1, #0xc]
    // lsl r1, r6, #4
    // add r0, r7, #0
    // add r1, r2, r1
    // bl ov41_02249A50
    // ldr r1, [r7]
    // add r0, r5, #0
    // add r2, r4, #0
    // add r3, r6, #0
    // bl ov41_02248B20
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_022486F0(void) {
    ov41_02249A60();
}


void ov41_022486F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r7, #0
    // ldr r0, [r5, #0x10]
    // mov r6, #0
    // cmp r0, #0
    // ble _0224871A
    // add r4, r6, #0
    // ldr r0, [r5, #0xc]
    // add r0, r0, r4
    // bl ov41_02249A70
    // ldr r0, [r5, #0x10]
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, r0
    // blt _02248708
    // add r7, r7, #1
    // add r5, #0xc
    // cmp r7, #3
    // blt _022486FE
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02248724(void) {
    // push {r4, r5, r6, lr}
    // mov r5, #0
    // mvn r5, r5
    // bl ov41_02248A94
    // add r6, r0, #0
    // ldr r4, [r6, #8]
    // cmp r4, r6
    // beq _0224874C
    // ldr r0, [r4, #4]
    // cmp r0, #2
    // bhi _02248744
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov41_02246014
    // ldr r4, [r4, #8]
    // sub r5, r5, #1
    // cmp r4, r6
    // bne _02248736
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02248750(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r6, r1, #0
    // ldr r1, [r5, #0x3c]
    // add r4, r2, #0
    // cmp r1, #0
    // bne _02248788
    // ldr r1, [r5]
    // mov r2, #0xc
    // mul r2, r1
    // str r4, [sp]
    // add r2, r5, r2
    // ldr r2, [r2, #0x14]
    // add r3, r6, #0
    // bl ov41_02248B84
    // mov r0, #0xc
    // mul r0, r6
    // str r6, [r5]
    // add r0, r5, r0
    // str r4, [r0, #0x14]
    // add r0, r5, #0
    // bl ov41_02248724
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02248790(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r1, [sp, #4]
    // str r0, [sp]
    // str r2, [sp, #8]
    // bl ov41_0224895C
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // mov r1, #0xc
    // mul r1, r0
    // ldr r0, [sp]
    // mov r4, #1
    // add r6, r0, r1
    // ldr r0, [r6, #0x10]
    // cmp r0, #1
    // ble _022487F2
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // bne _022487C4
    // ldr r1, [r6, #0x10]
    // add r0, r4, r7
    // bl _s32_div_f
    // add r5, r1, #0
    // b _022487CC
    // sub r5, r7, r4
    // bpl _022487CC
    // ldr r0, [r6, #0x10]
    // add r5, r5, r0
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r2, r5, #0
    // bl ov41_02248ABC
    // ldr r1, [r0, #8]
    // cmp r1, r0
    // beq _022487EA
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // add r2, r5, #0
    // bl ov41_02248750
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r6, #0x10]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _022487B2
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_022487F8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // mov r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // bl ov41_02248A18
    // mov r0, #0xc
    // mul r0, r4
    // str r4, [r5]
    // add r0, r5, r0
    // str r6, [r0, #0x14]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov41_02248A18
    // add r0, r5, #0
    // bl ov41_02248724
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02248820(void) {
    TouchscreenHitbox_TouchHeldIsIn(0x12, 0x76, 0x8f, 0xa);
}


void ov41_0224883C(void) {
    TouchscreenHitbox_PointIsIn(0x12, 0x76, 0x8f, 0xa);
}


void ov41_02248858(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp]
    // bl ov41_02248A94
    // add r5, r0, #0
    // ldr r4, [r5, #8]
    // cmp r4, r5
    // beq _02248886
    // ldr r3, [sp]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov41_02249AA8
    // cmp r0, #1
    // bne _02248880
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r4, [r4, #8]
    // cmp r4, r5
    // bne _0224886C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224888C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // ldr r0, [r5, #0x54]
    // add r4, r1, #0
    // str r0, [sp]
    // mov r0, #0x1a
    // lsl r1, r4, #1
    // str r0, [sp, #4]
    // add r0, r1, #0
    // add r0, #0x81
    // str r0, [sp, #8]
    // mov r0, #0x85
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x14]
    // mov r0, #0x81
    // str r0, [sp, #0x18]
    // mov r0, #3
    // str r0, [sp, #0x1c]
    // mov r0, #1
    // str r0, [sp, #0x20]
    // mov r0, #2
    // str r0, [sp, #0x24]
    // mov r0, #0
    // str r0, [sp, #0x28]
    // mov r0, #0xe
    // add r1, #0x82
    // str r0, [sp, #0x2c]
    // add r0, r5, #0
    // str r1, [sp, #0x10]
    // add r0, #0x5c
    // add r1, sp, #0
    // bl ov41_02249C7C
    // str r4, [r5, #0x40]
    // add sp, #0x30
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_022488D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r0, #0
    // ldr r0, [r5, #0x54]
    // add r4, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0x1a
    // lsl r1, r4, #1
    // str r0, [sp, #0xc]
    // add r0, r1, #0
    // add r0, #0x81
    // str r0, [sp, #0x10]
    // mov r0, #0x85
    // str r0, [sp, #0x14]
    // mov r0, #8
    // add r1, #0x82
    // str r0, [sp, #0x1c]
    // mov r0, #0x81
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x20]
    // mov r0, #3
    // mov r1, #2
    // str r0, [sp, #0x24]
    // mov r0, #1
    // str r1, [sp, #0x2c]
    // mov r7, #0
    // mov r1, #0xe
    // str r0, [sp, #0x28]
    // str r7, [sp, #0x30]
    // str r1, [sp, #0x34]
    // tst r0, r2
    // beq _0224891A
    // mov r7, #0x70
    // mov r0, #2
    // tst r0, r2
    // beq _02248924
    // mov r6, #0x81
    // b _02248926
    // mov r6, #0
    // ldr r0, [sp, #0x50]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x5c
    // add r1, sp, #8
    // add r2, r7, #0
    // add r3, r6, #0
    // bl ov41_02249DB4
    // str r4, [r5, #0x40]
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02248940(void) {
    ov41_02249CC4();
}


void ov41_0224894C(void) {
    GF_AssertFail();
}


void ov41_0224895C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r5, #0
    // bne _0224896C
    // bl GF_AssertFail
    // mov r0, #0xc
    // mul r0, r4
    // add r3, r5, r0
    // add r3, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov41_02248984(void) {
    // push {r4, lr}
    // add r4, r3, #0
    // bl ov41_02248ABC
    // ldr r2, [sp, #8]
    // add r1, r4, #0
    // bl ov41_02249BE8
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02248998(void) {
    // ldr r0, [r0, #0x3c]
    // cmp r0, #0
    // bne _022489A2
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov41_022489A8(void) {
    ov41_02248A28(*((u32*)(r1 + 0x1c)));
    ov41_022489E4(*((u32*)(r5 + 0xc)), 1);
    ov41_02248A28(r5, *((u32*)(r4 + 0x20)));
    ov41_02248A28(r5, *((u32*)(r4 + 0x24)));
    ov41_02248A28(r5, 1);
}


void ov41_022489E4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r4, [r5, #8]
    // add r6, r1, #0
    // cmp r4, r5
    // beq _02248A04
    // ldr r0, [r4, #4]
    // cmp r0, #2
    // bhi _022489FE
    // ldr r0, [r4]
    // add r1, r6, #0
    // bl ov41_02246008
    // ldr r4, [r4, #8]
    // cmp r4, r5
    // bne _022489F0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02248A08(void) {
    ov41_02248ABC();
    ov41_022489E4(r4);
}


void ov41_02248A18(void) {
    ov41_02248A94();
    ov41_022489E4(r4);
}


void ov41_02248A28(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r0, #0xe
    // lsl r1, r4, #4
    // bl Heap_Alloc
    // str r0, [r5]
    // str r4, [r5, #4]
    // mov r6, #0
    // str r6, [r5, #8]
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // ble _02248A68
    // add r4, r6, #0
    // add r7, r6, #0
    // ldr r0, [r5]
    // add r1, r7, #0
    // add r0, r0, r4
    // str r0, [r0, #8]
    // ldr r0, [r5]
    // add r0, r0, r4
    // str r0, [r0, #0xc]
    // ldr r0, [r5]
    // add r0, r0, r4
    // bl ov41_022489E4
    // ldr r0, [r5, #4]
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, r0
    // blt _02248A48
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02248A6C(void) {
    Heap_Free();
    *((u8*)(r4 + 1)) = 0;
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 3)) = 0;
    *((u8*)(r4 + 4)) = 0;
    *((u8*)(r4 + 5)) = 0;
    *((u8*)(r4 + 6)) = 0;
    *((u8*)(r4 + 7)) = 0;
    *((u8*)(r4 + 8)) = 0;
    *((u8*)(r4 + 9)) = 0;
    *((u8*)(r4 + 0xa)) = 0;
    *((u8*)(r4 + 0xb)) = 0;
}


void ov41_02248A94(void) {
    // push {r3}
    // sub sp, #0xc
    // ldr r2, [r0]
    // mov r1, #0xc
    // mul r1, r2
    // add r3, r0, r1
    // add r3, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // add sp, #0xc
    // pop {r3}
    // bx lr
    // TODO: decompile
}


void ov41_02248ABC(void) {
    // push {r4}
    // sub sp, #0xc
    // mov r3, #0xc
    // mul r3, r1
    // add r4, r0, r3
    // add r4, #0xc
    // ldmia r4!, {r0, r1}
    // add r3, sp, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r3]
    // ldr r1, [sp]
    // lsl r0, r2, #4
    // add r0, r1, r0
    // add sp, #0xc
    // pop {r4}
    // bx lr
    // TODO: decompile
}


void ov41_02248AE0(void) {
    ov41_02248ABC(0);
}


void ov41_02248AFC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r3, #0
    // mov r4, #0
    // bl ov41_02248ABC
    // ldr r1, [r0, #8]
    // cmp r1, r0
    // beq _02248B1C
    // cmp r4, r5
    // bne _02248B14
    // add r0, r1, #0
    // pop {r3, r4, r5, pc}
    // ldr r1, [r1, #8]
    // add r4, r4, #1
    // cmp r1, r0
    // bne _02248B0C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02248B20(void) {
    // push {r4, lr}
    // ldr r4, [r0]
    // cmp r4, r2
    // bne _02248B34
    // mov r4, #0xc
    // mul r4, r2
    // add r0, r0, r4
    // ldr r0, [r0, #0x14]
    // cmp r3, r0
    // beq _02248B3E
    // add r0, r1, #0
    // mov r1, #0
    // bl ov41_02246008
    // pop {r4, pc}
    // add r0, r1, #0
    // mov r1, #1
    // bl ov41_02246008
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02248B48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // mov r1, #9
    // add r4, r2, #0
    // bl _s32_div_f
    // add r7, r1, #0
    // add r0, r7, #0
    // mov r1, #3
    // bl _s32_div_f
    // add r6, r0, #0
    // add r0, r7, #0
    // mov r1, #3
    // bl _s32_div_f
    // add r0, r6, #1
    // lsl r2, r0, #3
    // lsl r0, r6, #5
    // add r0, r2, r0
    // add r0, #0x10
    // str r0, [r4]
    // add r0, r1, #1
    // lsl r2, r0, #3
    // mov r0, #0x18
    // mul r0, r1
    // add r0, r2, r0
    // add r0, #8
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02248B84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp]
    // ldr r0, _02248BF8 ; =ov41_02248BFC
    // mov r1, #0x30
    // mov r2, #0
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // add r4, r0, #0
    // str r5, [r4]
    // str r6, [r4, #4]
    // ldr r0, [sp]
    // str r7, [r4, #8]
    // str r0, [r4, #0xc]
    // ldr r0, [sp, #0x18]
    // add r1, r6, #0
    // str r0, [r4, #0x10]
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // add r0, r5, #0
    // add r2, r7, #0
    // bl ov41_02248AE0
    // str r0, [r4, #0x20]
    // ldr r1, [sp]
    // ldr r2, [sp, #0x18]
    // add r0, r5, #0
    // bl ov41_02248AE0
    // str r0, [r4, #0x24]
    // ldr r1, [r4, #0x20]
    // add r2, r1, r0
    // mov r1, #0xc
    // mov r0, #0xd
    // mul r1, r2
    // str r2, [r4, #0x2c]
    // bl Heap_Alloc
    // str r0, [r4, #0x28]
    // cmp r0, #0
    // bne _02248BE4
    // bl GF_AssertFail
    // ldr r3, [r4, #0x2c]
    // mov r2, #0xc
    // ldr r0, [r4, #0x28]
    // mov r1, #0
    // mul r2, r3
    // bl memset
    // mov r0, #1
    // str r0, [r5, #0x3c]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02248BF8: .word ov41_02248BFC
    // TODO: decompile
}


void ov41_02248BFC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x1c]
    // cmp r0, #4
    // bls _02248C0C
    // b _02248D54
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02248C18: ; jump table
    // mov r0, #0x83
    // mvn r0, r0
    // str r0, [sp]
    // ldr r0, [r4]
    // ldr r1, [r4, #0xc]
    // ldr r2, [r4, #0x10]
    // mov r3, #0
    // bl ov41_02248984
    // ldr r0, [r4]
    // ldr r1, [r4, #0xc]
    // ldr r2, [r4, #0x10]
    // mov r3, #1
    // bl ov41_02248A08
    // mov r0, #0
    // str r0, [r4, #0x14]
    // add r1, r4, #0
    // ldr r0, [r4]
    // add r1, #0x14
    // str r1, [sp]
    // ldr r1, [r0, #0x40]
    // add r1, r1, #1
    // lsr r3, r1, #0x1f
    // lsl r2, r1, #0x1f
    // sub r2, r2, r3
    // mov r1, #0x1f
    // ror r2, r1
    // add r1, r3, r2
    // mov r2, #2
    // mov r3, #5
    // bl ov41_022488D8
    // ldr r0, [r4, #0x20]
    // mov r1, #1
    // bl ov41_02248E10
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x1c]
    // add r0, r0, #1
    // str r0, [r4, #0x1c]
    // b _02248D58
    // ldr r0, [r4, #0x18]
    // mov r6, #0
    // cmp r0, #0
    // ble _02248CAA
    // add r5, r4, #0
    // add r5, #0x20
    // ldr r0, [r4, #0x20]
    // sub r0, r0, #1
    // bmi _02248CA2
    // ldr r0, [r5]
    // sub r0, r0, #1
    // str r0, [r5]
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // ldr r3, [r4, #0x20]
    // bl ov41_02248AFC
    // ldr r1, [r4, #0x28]
    // ldr r2, [r4, #0x2c]
    // bl ov41_02248D64
    // ldr r0, [r4, #0x18]
    // add r6, r6, #1
    // cmp r6, r0
    // blt _02248C82
    // ldr r0, [r4, #0x20]
    // cmp r0, #0
    // bne _02248D58
    // ldr r0, [r4, #0x24]
    // mov r1, #2
    // bl ov41_02248E10
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x1c]
    // add r0, r0, #1
    // str r0, [r4, #0x1c]
    // b _02248D58
    // ldr r0, [r4, #0x18]
    // mov r6, #0
    // cmp r0, #0
    // ble _02248CF6
    // add r5, r4, #0
    // add r5, #0x24
    // ldr r0, [r4, #0x24]
    // sub r0, r0, #1
    // bmi _02248CEE
    // ldr r0, [r5]
    // sub r0, r0, #1
    // str r0, [r5]
    // ldr r0, [r4]
    // ldr r1, [r4, #0xc]
    // ldr r2, [r4, #0x10]
    // ldr r3, [r4, #0x24]
    // bl ov41_02248AFC
    // ldr r1, [r4, #0x28]
    // ldr r2, [r4, #0x2c]
    // bl ov41_02248D64
    // ldr r0, [r4, #0x18]
    // add r6, r6, #1
    // cmp r6, r0
    // blt _02248CCE
    // ldr r0, [r4, #0x24]
    // cmp r0, #0
    // bne _02248D58
    // ldr r0, [r4, #0x1c]
    // add r0, r0, #1
    // str r0, [r4, #0x1c]
    // mov r0, #0
    // str r0, [r4, #0x18]
    // b _02248D58
    // ldr r0, [r4, #0x18]
    // add r0, r0, #1
    // str r0, [r4, #0x18]
    // cmp r0, #3
    // ble _02248D58
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _02248D58
    // ldr r0, [r4, #0x1c]
    // add r0, r0, #1
    // str r0, [r4, #0x1c]
    // b _02248D58
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // mov r3, #0
    // bl ov41_02248A08
    // mov r0, #0x83
    // mvn r0, r0
    // str r0, [sp]
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // mov r3, #0
    // bl ov41_02248984
    // ldr r0, [r4]
    // mov r1, #0
    // str r1, [r0, #0x3c]
    // ldr r0, [r4, #0x28]
    // bl Heap_Free
    // add r0, r5, #0
    // bl DestroySysTaskAndEnvironment
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // bl GF_AssertFail
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #0x2c]
    // bl ov41_02248DA4
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02248D64(void) {
    ov41_02248D7C(0x2c, 3);
}


void ov41_02248D7C(void) {
    // push {r3, r4}
    // mov r3, #0
    // cmp r1, #0
    // ble _02248D9E
    // add r4, r0, #0
    // ldr r2, [r4]
    // cmp r2, #0
    // bne _02248D96
    // mov r1, #0xc
    // mul r1, r3
    // add r0, r0, r1
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r4, #0xc
    // cmp r3, r1
    // blt _02248D86
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov41_02248DA4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // mov r4, #0
    // cmp r6, #0
    // ble _02248DC4
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02248DBC
    // add r0, r5, #0
    // bl ov41_02248DC8
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, r6
    // blt _02248DB0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02248DC8(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4]
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov41_02249B44
    // ldr r1, [sp]
    // ldr r0, [r4, #8]
    // add r2, r1, r0
    // str r2, [sp]
    // ldr r0, [r4]
    // ldr r1, [sp, #4]
    // bl ov41_02249AF4
    // ldr r0, [r4, #4]
    // sub r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #0
    // bgt _02248E0C
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // strb r0, [r4, #2]
    // strb r0, [r4, #3]
    // strb r0, [r4, #4]
    // strb r0, [r4, #5]
    // strb r0, [r4, #6]
    // strb r0, [r4, #7]
    // strb r0, [r4, #8]
    // strb r0, [r4, #9]
    // strb r0, [r4, #0xa]
    // strb r0, [r4, #0xb]
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02248E10(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // bl _s32_div_f
    // sub r0, r4, r1
    // add r0, r5, r0
    // add r1, r4, #0
    // bl _s32_div_f
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02248E28(void) {
    // add r3, r0, #0
    // mov r2, #0x1c
    // mov r1, #0
    // strb r1, [r3]
    // add r3, r3, #1
    // sub r2, r2, #1
    // bne _02248E2E
    // ldr r1, _02248E40 ; =ov41_02248E80
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // str r1, [r0, #0xc]
    // bx lr
    // _02248E40: .word ov41_02248E80
    // TODO: decompile
}


void ov41_02248E44(void) {
    // push {r4, lr}
    // ldr r1, _02248E7C ; =gSystem + 0x40
    // add r4, r0, #0
    // ldrh r2, [r1, #0x24]
    // cmp r2, #0
    // beq _02248E56
    // ldr r1, [r4, #4]
    // blx r1
    // b _02248E6C
    // ldrh r1, [r1, #0x26]
    // cmp r1, #0
    // beq _02248E62
    // ldr r1, [r4, #0xc]
    // blx r1
    // b _02248E6C
    // ldrb r1, [r4, #0x18]
    // cmp r1, #0
    // beq _02248E6C
    // ldr r1, [r4, #8]
    // blx r1
    // ldr r0, _02248E7C ; =gSystem + 0x40
    // ldrh r1, [r0, #0x20]
    // strh r1, [r4, #0x14]
    // ldrh r1, [r0, #0x22]
    // strh r1, [r4, #0x16]
    // ldrh r0, [r0, #0x26]
    // strb r0, [r4, #0x18]
    // pop {r4, pc}
    // _02248E7C: .word gSystem + 0x40
    // TODO: decompile
}


void ov41_02248E80(void) {
    // bx lr
    // TODO: decompile
}


void ov41_02248E84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // add r6, r0, #0
    // mov r4, #0
    // add r5, r7, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl sub_0202BA70
    // add r4, r4, #1
    // stmia r5!, {r0}
    // cmp r4, #0x64
    // blt _02248E8E
    // mov r0, #0x19
    // mov r3, #0
    // add r2, r7, #0
    // mov r1, #0x12
    // lsl r0, r0, #4
    // add r3, r3, #1
    // str r1, [r2, r0]
    // add r2, r2, #4
    // cmp r3, #0x12
    // blt _02248EA8
    // mov r5, #0x19
    // mov r4, #0
    // lsl r5, r5, #4
    // add r0, r6, #0
    // add r1, r4, #0
    // bl sub_0202BAB0
    // cmp r0, #0x12
    // beq _02248ECA
    // lsl r0, r0, #2
    // add r0, r7, r0
    // str r4, [r0, r5]
    // add r4, r4, #1
    // cmp r4, #0x12
    // blt _02248EB8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02248ED4(void) {
    GF_AssertFail();
}


void ov41_02248EE8(void) {
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bx lr
    // TODO: decompile
}


void ov41_02248EF4(void) {
    // push {r3, r4}
    // mov r2, #0x19
    // mov r4, #0
    // lsl r2, r2, #4
    // ldr r3, [r0, r2]
    // cmp r1, r3
    // bne _02248F08
    // add r0, r4, #0
    // pop {r3, r4}
    // bx lr
    // add r4, r4, #1
    // add r0, r0, #4
    // cmp r4, #0x12
    // blt _02248EFC
    // add r0, r4, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov41_02248F18(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov41_02248E28
    // mov r0, #0xd
    // mov r1, #0x34
    // bl Heap_Alloc
    // str r0, [r5]
    // mov r1, #0
    // mov r2, #0x34
    // bl memset
    // ldr r1, [r5]
    // ldr r0, [sp, #0x18]
    // str r4, [r1, #4]
    // str r6, [r1, #8]
    // str r7, [r1]
    // str r0, [r1, #0xc]
    // ldr r0, [sp, #0x1c]
    // str r0, [r1, #0x2c]
    // ldr r0, _02248F5C ; =ov41_02248F80
    // str r0, [r5, #4]
    // ldr r0, _02248F60 ; =ov41_022490F0
    // str r0, [r5, #8]
    // ldr r0, _02248F64 ; =ov41_02249280
    // str r0, [r5, #0xc]
    // ldr r0, _02248F68 ; =ov41_02248F6C
    // str r0, [r5, #0x10]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02248F5C: .word ov41_02248F80
    // _02248F60: .word ov41_022490F0
    // _02248F64: .word ov41_02249280
    // _02248F68: .word ov41_02248F6C
    // TODO: decompile
}


void ov41_02248F6C(void) {
    Heap_Free();
    ov41_02248E28(r4);
}


void ov41_02248F80(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r4, [r5]
    // ldr r0, [r4, #4]
    // bl ov41_022481BC
    // cmp r0, #0
    // beq _02249002
    // ldr r3, [r4]
    // ldr r0, [r4, #4]
    // ldr r3, [r3, #0x38]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_022481F4
    // add r6, r0, #0
    // beq _02248FB2
    // ldr r0, [r6, #4]
    // cmp r0, #3
    // bne _02248FB2
    // ldr r0, [r4, #0x2c]
    // cmp r0, #0
    // bne _02248FB2
    // mov r6, #0
    // cmp r6, #0
    // beq _0224903E
    // ldr r0, [r6, #4]
    // cmp r0, #0
    // bne _02248FC8
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl ov41_022480C8
    // mov r7, #0
    // b _02248FE4
    // add r0, r6, #0
    // bl ov41_02248030
    // ldr r0, [r6]
    // bl ov41_02249710
    // add r1, r4, #0
    // add r2, r4, #0
    // add r7, r0, #0
    // add r0, r6, #0
    // add r1, #0x24
    // add r2, #0x28
    // bl ov41_02249B44
    // ldr r0, [r4, #4]
    // bl ov41_02248158
    // ldr r0, [sp, #8]
    // add r1, r6, #0
    // str r0, [sp]
    // str r7, [sp, #4]
    // ldr r3, [sp, #0xc]
    // add r0, r4, #0
    // mov r2, #1
    // bl ov41_022493BC
    // bl ov41_0224642C
    // b _0224903E
    // ldr r0, [r4, #8]
    // bl ov41_02248820
    // cmp r0, #0
    // beq _0224903E
    // ldr r3, [r4]
    // ldr r0, [r4, #8]
    // ldr r3, [r3, #0x38]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_02248858
    // add r6, r0, #0
    // beq _0224903E
    // bl ov41_022486F0
    // ldr r0, [r4, #8]
    // bl ov41_02248724
    // ldr r0, [sp, #8]
    // mov r2, #0
    // str r0, [sp]
    // str r2, [sp, #4]
    // ldr r3, [sp, #0xc]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov41_022493BC
    // bl ov41_0224642C
    // ldr r1, [r4, #0x10]
    // cmp r1, #0
    // beq _02249088
    // ldr r1, [r1, #4]
    // ldr r0, _0224908C ; =0x000005EB
    // cmp r1, #0
    // beq _02249056
    // cmp r1, #1
    // beq _02249060
    // cmp r1, #3
    // beq _02249072
    // b _0224907A
    // ldr r1, _02249090 ; =ov41_022490F0
    // str r1, [r5, #8]
    // ldr r1, _02249094 ; =ov41_02249280
    // str r1, [r5, #0xc]
    // b _0224907A
    // ldr r0, _02249098 ; =ov41_022490B0
    // str r0, [r5, #8]
    // ldr r0, _0224909C ; =ov41_022490AC
    // str r0, [r5, #0xc]
    // add r0, r5, #0
    // bl ov41_02249390
    // ldr r0, _022490A0 ; =0x0000067D
    // b _0224907A
    // ldr r1, _022490A4 ; =ov41_022492B0
    // str r1, [r5, #8]
    // ldr r1, _022490A8 ; =ov41_022492E0
    // str r1, [r5, #0xc]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl PlaySE
    // add r0, r4, #0
    // bl ov41_02249574
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224908C: .word 0x000005EB
    // _02249090: .word ov41_022490F0
    // _02249094: .word ov41_02249280
    // _02249098: .word ov41_022490B0
    // _0224909C: .word ov41_022490AC
    // _022490A0: .word 0x0000067D
    // _022490A4: .word ov41_022492B0
    // _022490A8: .word ov41_022492E0
    // TODO: decompile
}


void ov41_022490AC(void) {
    // bx lr
    // TODO: decompile
}


void ov41_022490B0(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r4, [r0]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _022490EA
    // ldr r0, [r0, #4]
    // cmp r0, #1
    // beq _022490C6
    // bl GF_AssertFail
    // ldr r0, [r4, #0x10]
    // mov r2, #0x1c
    // ldr r0, [r0, #4]
    // mov r3, #0x1e
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // mov r1, #4
    // str r0, [sp, #4]
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, r4, #0
    // bl ov41_02249480
    // add r0, r4, #0
    // bl ov41_02249418
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_022490F0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x28
    // add r6, r0, #0
    // ldr r4, [r6]
    // ldr r1, [r4, #0x10]
    // cmp r1, #0
    // bne _02249100
    // b _0224926E
    // add r1, sp, #0x18
    // str r1, [sp]
    // add r1, sp, #0x24
    // add r2, sp, #0x20
    // add r3, sp, #0x1c
    // bl ov41_0224946C
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x24]
    // bl ov41_022481D8
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x24]
    // bl ov41_022481D8
    // add r5, r5, r0
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // bl ov41_022481D8
    // add r5, r5, r0
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    // bl ov41_022481D8
    // add r0, r5, r0
    // cmp r0, #4
    // blt _022491A2
    // ldr r2, [r4]
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #0x10]
    // ldr r2, [r2, #0x38]
    // bl ov41_022480A4
    // cmp r0, #0
    // bne _0224918C
    // mov r0, #0x1c
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #0xc]
    // mov r0, #0x1e
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #8]
    // ldr r0, _02249274 ; =0x00000682
    // bl PlaySE
    // ldr r0, [r4, #0xc]
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #3
    // bl ov41_0224AC08
    // ldr r0, [r4, #0x10]
    // mov r1, #4
    // ldr r0, [r0, #4]
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    // add r0, r4, #0
    // bl ov41_02249480
    // b _02249268
    // ldr r0, [r4, #4]
    // bl ov41_02248158
    // bl ov41_022463FC
    // mov r0, #0
    // str r0, [r4, #0x30]
    // ldr r0, _02249278 ; =0x000005EA
    // bl PlaySE
    // b _02249268
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0x24
    // ldr r5, [r0]
    // add r0, sp, #0x18
    // str r0, [sp]
    // add r0, r6, #0
    // add r2, sp, #0x20
    // add r3, sp, #0x1c
    // bl ov41_0224942C
    // ldr r0, [r4, #8]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x24]
    // bl ov41_0224883C
    // add r6, r0, #0
    // ldr r0, [r4, #8]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    // bl ov41_0224883C
    // add r0, r6, r0
    // cmp r0, #2
    // bge _02249220
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0224920C
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    // bl ov41_02249B94
    // bl MTRandom
    // ldr r2, [sp, #0x14]
    // mov r1, #0x6c
    // sub r1, r1, r2
    // bl _u32_div_f
    // add r1, #0xa
    // str r1, [sp, #0xc]
    // bl MTRandom
    // ldr r2, [sp, #0x10]
    // mov r1, #0x7d
    // sub r1, r1, r2
    // bl _u32_div_f
    // add r1, #0x12
    // str r1, [sp, #8]
    // b _02249218
    // mov r0, #0x1c
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #0xc]
    // mov r0, #0x1e
    // ldrsh r0, [r4, r0]
    // str r0, [sp, #8]
    // ldr r0, _02249274 ; =0x00000682
    // bl PlaySE
    // b _02249230
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_02249B44
    // ldr r0, _0224927C ; =0x000005EB
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0x20
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0224924E
    // ldr r0, [r4, #0x10]
    // ldr r2, [r4, #8]
    // ldr r0, [r0, #4]
    // ldr r1, [r5]
    // ldr r2, [r2, #4]
    // bl ov41_022484E8
    // add r1, r4, #0
    // add r1, #0x21
    // strb r0, [r1]
    // ldr r0, [r4, #0x10]
    // mov r1, #4
    // ldr r0, [r0, #4]
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x21
    // ldrb r0, [r0]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    // add r0, r4, #0
    // bl ov41_02249480
    // add r0, r4, #0
    // bl ov41_02249418
    // add sp, #0x28
    // pop {r4, r5, r6, pc}
    // nop
    // _02249274: .word 0x00000682
    // _02249278: .word 0x000005EA
    // _0224927C: .word 0x000005EB
    // TODO: decompile
}


void ov41_02249280(void) {
    // push {r4, lr}
    // ldr r2, [r0]
    // ldr r0, [r2, #0x10]
    // cmp r0, #0
    // beq _022492A4
    // ldr r3, _022492A8 ; =gSystem + 0x40
    // ldr r1, _022492AC ; =0x0000FFFF
    // ldrh r4, [r3, #0x20]
    // cmp r4, r1
    // beq _022492A4
    // beq _022492A4
    // ldrh r3, [r3, #0x22]
    // ldr r1, [r2, #0x14]
    // ldr r2, [r2, #0x18]
    // sub r1, r4, r1
    // sub r2, r3, r2
    // bl ov41_02249AF4
    // pop {r4, pc}
    // nop
    // _022492A8: .word gSystem + 0x40
    // _022492AC: .word 0x0000FFFF
    // TODO: decompile
}


void ov41_022492B0(void) {
    // push {r4, lr}
    // ldr r4, [r0]
    // ldr r1, [r4, #0x10]
    // cmp r1, #0
    // beq _022492DA
    // ldr r0, [r4, #4]
    // bl ov41_02248020
    // ldr r0, [r4, #4]
    // bl ov41_02248158
    // bl ov41_022463FC
    // mov r0, #0
    // str r0, [r4, #0x30]
    // ldr r0, _022492DC ; =0x000005EB
    // bl PlaySE
    // add r0, r4, #0
    // bl ov41_02249418
    // pop {r4, pc}
    // _022492DC: .word 0x000005EB
    // TODO: decompile
}


void ov41_022492E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // ldr r4, [r0]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _02249384
    // ldr r1, _02249388 ; =gSystem + 0x40
    // ldrh r2, [r1, #0x20]
    // ldr r1, _0224938C ; =0x0000FFFF
    // cmp r2, r1
    // beq _02249384
    // beq _02249384
    // add r1, sp, #8
    // str r1, [sp]
    // add r1, sp, #0x14
    // add r2, sp, #0xc
    // add r3, sp, #0x10
    // bl ov41_02249BAC
    // ldr r0, [r4, #0x10]
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // bl ov41_02249B94
    // ldr r0, _02249388 ; =gSystem + 0x40
    // ldr r1, [r4, #0x14]
    // ldrh r2, [r0, #0x20]
    // ldr r3, [sp, #0x18]
    // sub r5, r2, r1
    // ldrh r1, [r0, #0x22]
    // ldr r0, [r4, #0x18]
    // ldr r2, [sp, #0x1c]
    // sub r6, r1, r0
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // sub r0, r2, r0
    // ldr r2, [sp, #8]
    // add r7, r6, r1
    // sub r2, r3, r2
    // ldr r3, [sp, #0x14]
    // str r2, [sp, #0x18]
    // add r2, r5, r3
    // str r0, [sp, #0x1c]
    // cmp r2, #0x8a
    // bgt _02249342
    // mov r0, #0x8a
    // sub r5, r0, r3
    // b _0224934C
    // add r2, r5, r0
    // cmp r2, #0xf6
    // blt _0224934C
    // mov r2, #0xf6
    // sub r5, r2, r0
    // cmp r7, #0x12
    // bgt _02249356
    // mov r0, #0x12
    // sub r6, r0, r1
    // b _02249362
    // ldr r1, [sp, #0x18]
    // add r0, r6, r1
    // cmp r0, #0x8f
    // blt _02249362
    // mov r0, #0x8f
    // sub r6, r0, r1
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov41_022495A4
    // ldr r0, [r4, #4]
    // add r1, sp, #0x14
    // add r2, sp, #0x10
    // bl ov41_022482B8
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r1, r5, r1
    // add r2, r6, r2
    // bl ov41_022495A4
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02249388: .word gSystem + 0x40
    // _0224938C: .word 0x0000FFFF
    // TODO: decompile
}


void ov41_02249390(void) {
    // push {r3, r4, r5, lr}
    // ldr r4, [r0]
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _022493B8
    // ldr r0, [r0, #4]
    // cmp r0, #1
    // beq _022493A4
    // bl GF_AssertFail
    // ldr r0, [r4, #0x10]
    // ldr r5, [r0]
    // ldr r0, [r4, #4]
    // bl ov41_022482A8
    // ldr r0, [r4, #4]
    // ldr r1, [r5]
    // mov r2, #0xe
    // bl ov41_0224825C
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_022493BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // add r0, r4, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // add r7, r3, #0
    // bl ov41_02249B44
    // str r4, [r5, #0x10]
    // ldr r0, [sp, #4]
    // strh r0, [r5, #0x1c]
    // ldr r0, [sp]
    // strh r0, [r5, #0x1e]
    // add r0, r5, #0
    // add r0, #0x20
    // strb r6, [r0]
    // ldr r0, [sp, #0x20]
    // str r7, [r5, #0x14]
    // str r0, [r5, #0x18]
    // cmp r6, #0
    // bne _022493FE
    // ldr r1, [r5, #0x10]
    // ldr r0, [r5, #8]
    // ldr r1, [r1, #4]
    // bl ov41_0224895C
    // add r1, r5, #0
    // add r1, #0x21
    // strb r0, [r1]
    // b _02249406
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x21
    // strb r1, [r0]
    // mov r0, #1
    // str r0, [r5, #0x30]
    // ldr r1, [sp, #0x24]
    // add r0, r4, #0
    // bl ov41_02249A90
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02249418(void) {
    // mov r2, #0
    // str r2, [r0, #0x10]
    // strh r2, [r0, #0x1c]
    // add r1, r0, #0
    // strh r2, [r0, #0x1e]
    // add r1, #0x20
    // strb r2, [r1]
    // add r0, #0x21
    // strb r2, [r0]
    // bx lr
    // TODO: decompile
}


void ov41_0224942C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r4, [r0]
    // add r5, r1, #0
    // ldr r0, [r4, #0x10]
    // add r6, r2, #0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r7, r3, #0
    // bl ov41_02249B94
    // ldr r0, [r4, #0x10]
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov41_02249B44
    // ldr r0, [sp]
    // str r0, [r5]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // str r0, [r6]
    // ldr r0, [sp, #4]
    // str r0, [r7]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r1, r1, r0
    // ldr r0, [sp, #0x28]
    // str r1, [r0]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224946C(void) {
    ov41_02249C20();
}


void ov41_02249480(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp]
    // ldr r0, _022494F0 ; =ov41_022494F4
    // mov r1, #0x2c
    // mov r2, #0
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // add r4, r0, #0
    // ldr r0, [r5, #8]
    // add r1, sp, #8
    // str r0, [r4]
    // ldr r0, [r5, #0x10]
    // add r2, sp, #4
    // str r0, [r4, #4]
    // str r6, [r4, #0x20]
    // ldr r0, [sp]
    // str r7, [r4, #0x10]
    // str r0, [r4, #0x14]
    // ldr r0, [sp, #0x20]
    // str r0, [r4, #0x18]
    // ldr r0, [sp, #0x24]
    // str r0, [r4, #0x1c]
    // ldr r0, [r5, #8]
    // add r0, #0x3c
    // str r0, [r4, #0x24]
    // add r0, r5, #0
    // add r0, #0x30
    // str r0, [r4, #0x28]
    // ldr r0, [r5, #0x10]
    // bl ov41_02249B44
    // ldr r1, [r4, #0x10]
    // ldr r0, [sp, #8]
    // sub r0, r1, r0
    // add r1, r6, #0
    // bl _s32_div_f
    // str r0, [r4, #8]
    // ldr r1, [r4, #0x14]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // add r1, r6, #0
    // bl _s32_div_f
    // str r0, [r4, #0xc]
    // mov r0, #0
    // str r0, [r5, #0x30]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _022494F0: .word ov41_022494F4
    // TODO: decompile
}


void ov41_022494F4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x24]
    // ldr r0, [r0]
    // cmp r0, #1
    // beq _0224956E
    // ldr r0, [r4, #4]
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov41_02249B44
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #8]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp]
    // ldr r0, [r4, #0xc]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r0, [r4, #0x20]
    // sub r0, r0, #1
    // str r0, [r4, #0x20]
    // bmi _02249532
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // bne _02249564
    // ldr r0, [r4, #0xc]
    // cmp r0, #0
    // bne _02249564
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #0x10]
    // ldr r2, [r4, #0x14]
    // bl ov41_02249AF4
    // ldr r0, [r4]
    // ldr r1, [r4, #0x18]
    // ldr r2, [r4, #0x1c]
    // ldr r3, [r4, #4]
    // bl ov41_022486C4
    // ldr r0, [r4]
    // bl ov41_02248724
    // ldr r0, [r4, #0x28]
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0224955A
    // bl ov41_022463FC
    // add r0, r5, #0
    // bl DestroySysTaskAndEnvironment
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #4]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // bl ov41_02249AF4
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02249574(void) {
    // push {r3, lr}
    // ldr r3, [r0, #0x10]
    // ldr r1, [r3, #4]
    // cmp r1, #0
    // bne _0224958E
    // ldr r3, [r3]
    // ldr r0, [r0, #0xc]
    // ldr r3, [r3]
    // mov r1, #0x1b
    // mov r2, #0xd8
    // bl ov41_0224AC08
    // pop {r3, pc}
    // cmp r1, #1
    // bne _022495A0
    // ldr r3, [r3]
    // ldr r0, [r0, #0xc]
    // ldr r3, [r3]
    // mov r1, #0x1b
    // mov r2, #0xda
    // bl ov41_0224AC08
    // pop {r3, pc}
    // TODO: decompile
}


void ov41_022495A4(void) {
    // push {r4, r5, r6, lr}
    // ldr r4, [r0]
    // add r5, r1, #0
    // ldr r0, [r4, #0x10]
    // add r6, r2, #0
    // bl ov41_02249AF4
    // ldr r1, [r4, #0x24]
    // ldr r2, [r4, #0x28]
    // ldr r0, [r4, #4]
    // sub r1, r5, r1
    // sub r2, r6, r2
    // bl ov41_02248114
    // str r5, [r4, #0x24]
    // str r6, [r4, #0x28]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_022495C8(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #0
    // add r4, r1, #0
    // str r2, [sp]
    // add r5, r0, #0
    // ldrh r0, [r4]
    // ldrh r1, [r4, #2]
    // mov r3, #0xe
    // bl GfGfxLoader_LoadFromNarc
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #0x76
    // bl ov41_022463DC
    // ldrh r1, [r4]
    // ldr r0, [r0, #0x14]
    // bl UnscanPokepic
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_022495F0(void) {
    ov41_02249604();
}


void ov41_02249604(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r6, r2, #0
    // add r5, r0, #0
    // add r7, r1, #0
    // add r4, r3, #0
    // add r0, r6, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #2
    // bl sub_02070130
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // add r1, r4, #0
    // mov r2, #0xc0
    // mov r3, #0x38
    // bl PokepicManager_CreatePokepic
    // str r0, [r5]
    // add r0, r5, #0
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // bl ov41_022497A0
    // ldr r1, [sp, #0x1c]
    // mov r2, #0x38
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // ldr r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #0x18]
    // sub r0, r2, r0
    // strb r0, [r5, #4]
    // ldr r0, [sp, #0x18]
    // mov r1, #0xc0
    // add r0, #0x38
    // strb r0, [r5, #5]
    // ldr r0, [sp, #0x1c]
    // sub r0, r1, r0
    // strb r0, [r5, #6]
    // ldr r0, [sp, #0x1c]
    // add r0, #0xc0
    // strb r0, [r5, #7]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r3, [sp, #0x1c]
    // add r0, r5, #4
    // bl ov41_02249978
    // add r0, r6, #0
    // mov r1, #2
    // bl sub_02070848
    // mov r2, #0
    // str r2, [sp]
    // add r7, r0, #0
    // ldrh r0, [r4]
    // ldrh r1, [r4, #2]
    // ldr r3, [sp, #0x38]
    // bl GfGfxLoader_LoadFromNarc
    // add r1, sp, #0x14
    // str r0, [sp, #0x10]
    // bl NNS_G2dGetUnpackedCharacterData
    // ldr r0, [sp, #0x14]
    // ldrh r1, [r4]
    // ldr r0, [r0, #0x14]
    // bl UnscanPokepic
    // ldr r0, [sp, #0x3c]
    // cmp r0, #0
    // bne _022496C6
    // ldr r2, [sp, #0x14]
    // add r3, r5, #0
    // ldrh r1, [r2, #2]
    // ldr r0, [r2, #0x14]
    // ldrh r2, [r2]
    // lsl r1, r1, #3
    // add r3, #8
    // lsl r2, r2, #3
    // bl ov41_022498E8
    // b _022496DC
    // ldr r1, [sp, #0x14]
    // ldr r0, [r1, #0x14]
    // ldrh r1, [r1, #2]
    // lsl r1, r1, #3
    // bl ov41_0224989C
    // strb r0, [r5, #8]
    // ldrb r0, [r5, #8]
    // strb r0, [r5, #9]
    // strb r7, [r5, #0xb]
    // strb r7, [r5, #0xa]
    // ldr r0, [sp, #0x10]
    // bl Heap_Free
    // str r6, [r5, #0xc]
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_022496E8(void) {
    Pokepic_Delete(0, 0x10);
}


void ov41_02249700(void) {
    // ldr r3, _0224970C ; =Pokepic_SetAttr
    // add r2, r1, #0
    // ldr r0, [r0]
    // mov r1, #2
    // bx r3
    // nop
    // _0224970C: .word Pokepic_SetAttr
    // TODO: decompile
}


void ov41_02249710(void) {
    Pokepic_GetAttr();
}


void ov41_0224971C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r6, r2, #0
    // add r5, r0, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // bl ov41_022497A0
    // ldr r0, [r5]
    // mov r1, #0
    // add r2, r4, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r5]
    // mov r1, #1
    // add r2, r6, #0
    // bl Pokepic_SetAttr
    // ldr r1, [sp, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r1, [sp, #8]
    // str r2, [sp, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp, #8]
    // str r2, [sp]
    // ldr r3, [sp, #8]
    // add r0, r5, #4
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov41_02249978
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02249768(void) {
    TouchscreenHitbox_TouchHeldIsIn();
}


void ov41_02249774(void) {
    TouchscreenHitbox_PointIsIn();
}


void ov41_02249780(void) {
    Pokepic_GetAttr(0);
    Pokepic_GetAttr(1);
}


void ov41_022497A0(void) {
    *(u32*)r1 = 0x50;
    *(u32*)r2 = 0x50;
}


void ov41_022497A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov41_02249768
    // cmp r0, #0
    // bne _022497C2
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov41_02249780
    // add r0, r5, #0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_022497A0
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r1, r2, r0
    // ldr r3, [sp, #8]
    // ldr r0, [sp]
    // lsr r2, r3, #0x1f
    // add r2, r3, r2
    // asr r2, r2, #1
    // sub r0, r0, r2
    // str r0, [sp]
    // ldr r0, _0224981C ; =gSystem + 0x40
    // str r1, [sp, #4]
    // ldrh r2, [r0, #0x20]
    // mov r3, #0
    // sub r1, r2, r1
    // str r1, [r4]
    // ldrh r1, [r0, #0x22]
    // ldr r0, [sp]
    // sub r2, r1, r0
    // str r2, [r6]
    // ldr r1, [r4]
    // add r0, r7, #0
    // bl ov41_022464BC
    // cmp r0, #0
    // bne _02249816
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224981C: .word gSystem + 0x40
    // TODO: decompile
}


void ov41_02249820(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov41_02249774
    // cmp r0, #0
    // bne _0224983A
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov41_02249780
    // add r0, r5, #0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // bl ov41_022497A0
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // sub r1, r2, r0
    // ldr r3, [sp, #8]
    // str r1, [sp, #4]
    // lsr r2, r3, #0x1f
    // add r2, r3, r2
    // ldr r0, [sp]
    // asr r2, r2, #1
    // sub r0, r0, r2
    // str r0, [sp]
    // sub r2, r6, r0
    // sub r1, r4, r1
    // add r0, r7, #0
    // mov r3, #0
    // bl ov41_022464BC
    // cmp r0, #0
    // bne _02249880
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02249888(void) {
    // ldrb r2, [r0, #8]
    // strb r2, [r1]
    // ldrb r2, [r0, #9]
    // strb r2, [r1, #1]
    // ldrb r2, [r0, #0xa]
    // strb r2, [r1, #2]
    // ldrb r0, [r0, #0xb]
    // strb r0, [r1, #3]
    // bx lr
    // TODO: decompile
}


void ov41_0224989C(void) {
    // push {r4, r5, r6, r7}
    // mov ip, r0
    // add r7, r1, #0
    // mov r2, #0
    // mov r3, #0
    // add r4, r3, #0
    // add r1, r2, r4
    // lsr r0, r1, #0x1f
    // lsl r6, r1, #0x1f
    // sub r6, r6, r0
    // mov r5, #0x1f
    // ror r6, r5
    // add r5, r0, r6
    // lsl r6, r5, #2
    // mov r5, #0xf
    // add r0, r1, r0
    // lsl r5, r6
    // asr r1, r0, #1
    // mov r0, ip
    // lsl r5, r5, #0x18
    // ldrsb r0, [r0, r1]
    // lsr r5, r5, #0x18
    // tst r0, r5
    // beq _022498D2
    // add r0, r2, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // add r3, r3, #1
    // add r4, r4, r7
    // cmp r3, #0x50
    // blt _022498A8
    // add r2, r2, #1
    // cmp r2, #0x50
    // blt _022498A4
    // mov r0, #0x50
    // pop {r4, r5, r6, r7}
    // bx lr
    // TODO: decompile
}


void ov41_022498E8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r1, r3, #0
    // mov r0, #0x28
    // strb r0, [r1]
    // strb r0, [r1, #1]
    // strb r0, [r1, #2]
    // strb r0, [r1, #3]
    // mov r6, #0
    // mov r2, #0x50
    // sub r2, r2, r6
    // str r2, [sp, #8]
    // lsl r2, r6, #0x18
    // lsr r2, r2, #0x18
    // mov lr, r2
    // ldr r2, [sp, #8]
    // mov r0, #0
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // add r5, r0, #0
    // mov ip, r2
    // add r7, r6, r5
    // lsr r3, r7, #0x1f
    // lsl r4, r7, #0x1f
    // sub r4, r4, r3
    // mov r2, #0x1f
    // ror r4, r2
    // add r2, r3, r4
    // lsl r4, r2, #2
    // mov r2, #0xf
    // lsl r2, r4
    // lsl r2, r2, #0x18
    // lsr r4, r2, #0x18
    // add r3, r7, r3
    // ldr r2, [sp]
    // asr r3, r3, #1
    // ldrsb r2, [r2, r3]
    // tst r2, r4
    // beq _02249964
    // ldrb r2, [r1]
    // cmp r2, r6
    // ble _02249944
    // mov r2, lr
    // strb r2, [r1]
    // ldrb r3, [r1, #1]
    // ldr r2, [sp, #8]
    // cmp r3, r2
    // ble _02249950
    // mov r2, ip
    // strb r2, [r1, #1]
    // ldrb r2, [r1, #2]
    // cmp r2, r0
    // ble _02249958
    // strb r0, [r1, #2]
    // mov r2, #0x50
    // sub r3, r2, r0
    // ldrb r2, [r1, #3]
    // cmp r2, r3
    // ble _02249964
    // strb r3, [r1, #3]
    // ldr r2, [sp, #4]
    // add r0, r0, #1
    // add r5, r5, r2
    // cmp r0, #0x50
    // blt _02249916
    // add r6, r6, #1
    // cmp r6, #0x50
    // blt _022498FE
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02249978(void) {
    // push {r3, r4}
    // ldr r4, [sp, #8]
    // sub r4, r2, r4
    // bmi _02249982
    // b _02249984
    // mov r4, #0
    // strb r4, [r0]
    // ldr r4, [sp, #8]
    // add r2, r2, r4
    // cmp r2, #0xbf
    // bgt _02249990
    // b _02249992
    // mov r2, #0xbf
    // strb r2, [r0, #1]
    // sub r2, r1, r3
    // bmi _0224999A
    // b _0224999C
    // mov r2, #0
    // add r1, r1, r3
    // strb r2, [r0, #2]
    // cmp r1, #0xff
    // bgt _022499AA
    // strb r1, [r0, #3]
    // pop {r3, r4}
    // bx lr
    // mov r1, #0xff
    // strb r1, [r0, #3]
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov41_022499B4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // lsl r4, r6, #4
    // add r5, r0, #0
    // add r0, r2, #0
    // add r1, r4, #0
    // bl Heap_Alloc
    // str r0, [r5]
    // cmp r0, #0
    // bne _022499CE
    // bl GF_AssertFail
    // ldr r0, [r5]
    // mov r1, #0
    // add r2, r4, #0
    // bl memset
    // str r6, [r5, #4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_022499DC(void) {
    Heap_Free(0);
}


void ov41_022499F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r6, r1, #0
    // add r7, r2, #0
    // cmp r0, #0
    // bne _02249A02
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // bne _02249A0C
    // bl GF_AssertFail
    // ldr r2, [r5, #4]
    // mov r4, #0
    // cmp r2, #0
    // ble _02249A24
    // ldr r1, [r5]
    // ldr r0, [r1]
    // cmp r0, #0
    // beq _02249A24
    // add r4, r4, #1
    // add r1, #0x10
    // cmp r4, r2
    // blt _02249A16
    // cmp r2, r4
    // bgt _02249A2C
    // bl GF_AssertFail
    // ldr r0, [r5]
    // lsl r1, r4, #4
    // str r6, [r0, r1]
    // ldr r0, [r5]
    // add r0, r0, r1
    // str r7, [r0, #4]
    // ldr r0, [r5]
    // add r0, r0, r1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02249A40(void) {
    // mov r2, #0x10
    // mov r1, #0
    // strb r1, [r0]
    // add r0, r0, #1
    // sub r2, r2, #1
    // bne _02249A44
    // bx lr
    // TODO: decompile
}


void ov41_02249A50(void) {
    // ldr r2, [r1, #8]
    // str r2, [r0, #8]
    // ldr r2, [r1, #8]
    // str r0, [r2, #0xc]
    // str r1, [r0, #0xc]
    // str r0, [r1, #8]
    // bx lr
    // TODO: decompile
}


void ov41_02249A60(void) {
    // ldr r2, [r0, #8]
    // ldr r1, [r0, #0xc]
    // str r2, [r1, #8]
    // ldr r1, [r0, #0xc]
    // ldr r0, [r0, #8]
    // str r1, [r0, #0xc]
    // bx lr
    // TODO: decompile
}


void ov41_02249A70(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r4, [r6, #8]
    // cmp r4, r6
    // beq _02249A8E
    // add r0, r4, #0
    // ldr r5, [r4, #8]
    // bl ov41_02249A60
    // add r0, r4, #0
    // bl ov41_02249A40
    // add r4, r5, #0
    // cmp r5, r6
    // bne _02249A7A
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02249A90(void) {
    // push {r3, lr}
    // ldr r2, [r0, #4]
    // ldr r0, [r0]
    // cmp r2, #3
    // bge _02249AA0
    // bl ov41_02246014
    // pop {r3, pc}
    // bl ov41_02249700
    // pop {r3, pc}
    // TODO: decompile
}


void ov41_02249AA8(void) {
    // push {r4, lr}
    // ldr r4, [r0, #4]
    // cmp r4, #0
    // bne _02249ABE
    // ldr r0, [r0]
    // ldr r4, [r0]
    // lsl r4, r4, #2
    // ldr r3, [r3, r4]
    // bl ov41_02245F14
    // pop {r4, pc}
    // cmp r4, #1
    // bne _02249AD2
    // ldr r0, [r0]
    // ldr r4, [r0]
    // add r4, #0x64
    // lsl r4, r4, #2
    // ldr r3, [r3, r4]
    // bl ov41_02245F14
    // pop {r4, pc}
    // cmp r4, #2
    // ldr r0, [r0]
    // bne _02249AE6
    // ldr r4, [r0]
    // add r4, #0x64
    // lsl r4, r4, #2
    // ldr r3, [r3, r4]
    // bl ov41_02245F14
    // pop {r4, pc}
    // mov r4, #0x76
    // lsl r4, r4, #2
    // ldr r3, [r3, r4]
    // bl ov41_022497A8
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02249AF4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r1, #0
    // ldr r1, [r0, #4]
    // add r4, r2, #0
    // cmp r1, #3
    // bge _02249B14
    // lsl r1, r5, #0x10
    // lsl r2, r4, #0x10
    // ldr r0, [r0]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ov41_02245F9C
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // ldr r6, [r0]
    // add r1, sp, #4
    // add r0, r6, #0
    // add r2, sp, #0
    // bl ov41_022497A0
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r1, r0, #1
    // lsr r0, r2, #0x1f
    // add r0, r2, r0
    // asr r2, r0, #1
    // str r1, [sp, #4]
    // str r2, [sp]
    // add r0, r6, #0
    // add r1, r5, r1
    // add r2, r4, r2
    // bl ov41_0224971C
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02249B44(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // ldr r3, [r0, #4]
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r3, #3
    // bge _02249B5C
    // ldr r0, [r0]
    // bl ov41_02245FA8
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // ldr r6, [r0]
    // add r0, r6, #0
    // bl ov41_02249780
    // add r0, r6, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov41_022497A0
    // ldr r1, [sp, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r1, [sp]
    // str r2, [sp, #4]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // ldr r0, [r5]
    // sub r0, r0, r2
    // str r0, [r5]
    // ldr r1, [r4]
    // ldr r0, [sp]
    // sub r0, r1, r0
    // str r0, [r4]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_02249B94(void) {
    // push {r3, lr}
    // ldr r3, [r0, #4]
    // ldr r0, [r0]
    // cmp r3, #3
    // bge _02249BA4
    // bl ov41_02245FD8
    // pop {r3, pc}
    // bl ov41_022497A0
    // pop {r3, pc}
    // TODO: decompile
}


void ov41_02249BAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r2, #0
    // ldr r2, [r0, #4]
    // add r6, r1, #0
    // add r5, r3, #0
    // ldr r4, [sp, #0x18]
    // cmp r2, #3
    // ldr r0, [r0]
    // bge _02249BCE
    // add r2, r5, #0
    // bl ov41_02246020
    // ldr r0, [r6]
    // str r0, [r7]
    // ldr r0, [r5]
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, sp, #0
    // bl ov41_02249888
    // add r0, sp, #0
    // ldrb r1, [r0]
    // str r1, [r6]
    // ldrb r1, [r0, #1]
    // str r1, [r7]
    // ldrb r1, [r0, #2]
    // str r1, [r5]
    // ldrb r0, [r0, #3]
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02249BE8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r4, [r5, #8]
    // add r6, r1, #0
    // add r7, r2, #0
    // cmp r4, r5
    // beq _02249C1A
    // add r0, r4, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov41_02249B44
    // ldr r0, [sp, #4]
    // add r1, r0, r6
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // add r2, r0, r7
    // str r2, [sp]
    // add r0, r4, #0
    // bl ov41_02249AF4
    // ldr r4, [r4, #8]
    // cmp r4, r5
    // bne _02249BF8
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02249C20(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // add r6, r2, #0
    // add r5, r0, #0
    // add r1, sp, #0x20
    // add r2, sp, #0x1c
    // add r7, r3, #0
    // bl ov41_02249B94
    // add r0, r5, #0
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    // bl ov41_02249B44
    // add r0, sp, #4
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, sp, #0x10
    // add r2, sp, #8
    // add r3, sp, #0xc
    // bl ov41_02249BAC
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [r4]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // add r1, r1, r0
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // str r0, [r6]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [r7]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r1, r1, r0
    // ldr r0, [sp, #8]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x38]
    // str r1, [r0]
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02249C7C(void) {
    // add r2, r0, #0
    // ldr r0, [r1]
    // str r0, [r2]
    // ldr r3, [r1, #0x14]
    // asr r0, r3, #2
    // lsr r0, r0, #0x1d
    // add r0, r3, r0
    // asr r0, r0, #3
    // str r0, [r2, #0xc]
    // ldr r3, [r1, #0x18]
    // asr r0, r3, #2
    // lsr r0, r0, #0x1d
    // add r0, r3, r0
    // asr r0, r0, #3
    // str r0, [r2, #0x10]
    // ldr r0, [r1, #0x1c]
    // ldr r3, _02249CC0 ; =ov41_02249E60
    // str r0, [r2, #0x1c]
    // ldr r0, [r1, #0x24]
    // str r0, [r2, #0x20]
    // ldr r0, [r1, #0x20]
    // str r0, [r2, #0x24]
    // ldr r0, [r1, #0x28]
    // str r0, [r2, #0x28]
    // ldr r0, [r1, #4]
    // str r0, [r2, #4]
    // ldr r0, [r1, #0x10]
    // str r0, [r2, #8]
    // add r0, r1, #0
    // add r1, r2, #0
    // add r1, #0x14
    // add r2, #0x18
    // bx r3
    // nop
    // _02249CC0: .word ov41_02249E60
    // TODO: decompile
}


void ov41_02249CC4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x1c]
    // ldr r0, [r4]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x2c
    // bl memset
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_02249CE0(void) {
    // ldr r2, [r1]
    // str r2, [r0]
    // ldr r2, [r1, #4]
    // str r2, [r0, #4]
    // ldr r2, [r1, #8]
    // str r2, [r0, #8]
    // mov r2, #0
    // str r2, [r0, #0xc]
    // str r2, [r0, #0x10]
    // ldr r1, [r1, #0xc]
    // str r1, [r0, #0x14]
    // bx lr
    // TODO: decompile
}


void ov41_02249CF8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // add r1, r0, r1
    // str r1, [r5, #0xc]
    // ldr r0, [r5, #8]
    // cmp r1, r0
    // ble _02249D5C
    // mov r2, #0
    // str r2, [r5, #0xc]
    // ldr r0, [r5, #0x10]
    // cmp r0, #0
    // bne _02249D1C
    // ldr r1, [r5, #4]
    // mov r0, #1
    // str r0, [r5, #0x10]
    // b _02249D22
    // ldr r0, [r5]
    // ldr r1, [r0, #8]
    // str r2, [r5, #0x10]
    // ldr r0, [r5, #0x14]
    // mov r2, #0
    // str r0, [sp]
    // ldr r0, [r5]
    // add r3, sp, #0x14
    // ldr r0, [r0, #4]
    // bl GfGfxLoader_GetScrnData
    // ldr r3, [r5]
    // add r4, r0, #0
    // ldr r0, [r3, #0x18]
    // str r0, [sp]
    // ldr r0, [r3, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [r3, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [r3, #0x28]
    // str r0, [sp, #0xc]
    // ldr r0, [r3, #0x20]
    // str r0, [sp, #0x10]
    // ldr r0, [r3]
    // ldr r1, [r3, #0x1c]
    // ldr r2, [sp, #0x14]
    // ldr r3, [r3, #0x14]
    // bl ov41_02249F7C
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02249D60(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r1, [r5]
    // ldr r0, [r5, #0x14]
    // mov r2, #0
    // str r0, [sp]
    // ldr r0, [r1, #4]
    // ldr r1, [r1, #8]
    // add r3, sp, #0x14
    // bl GfGfxLoader_GetScrnData
    // ldr r3, [r5]
    // add r4, r0, #0
    // ldr r0, [r3, #0x18]
    // str r0, [sp]
    // ldr r0, [r3, #0xc]
    // str r0, [sp, #4]
    // ldr r0, [r3, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [r3, #0x28]
    // str r0, [sp, #0xc]
    // ldr r0, [r3, #0x20]
    // str r0, [sp, #0x10]
    // ldr r0, [r3]
    // ldr r1, [r3, #0x1c]
    // ldr r2, [sp, #0x14]
    // ldr r3, [r3, #0x14]
    // bl ov41_02249F7C
    // add r0, r4, #0
    // bl Heap_Free
    // mov r1, #0x18
    // mov r0, #0
    // strb r0, [r5]
    // add r5, r5, #1
    // sub r1, r1, #1
    // bne _02249DA6
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02249DB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // add r5, r1, #0
    // str r2, [sp]
    // str r3, [sp, #4]
    // ldr r0, _02249E3C ; =ov41_02249F0C
    // mov r1, #0x4c
    // mov r2, #0
    // mov r3, #0xd
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // add r4, r0, #0
    // str r6, [r4]
    // add r7, r5, #0
    // add r3, r4, #4
    // mov r2, #6
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _02249DDA
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // str r0, [r4, #0x34]
    // ldr r0, [sp]
    // str r1, [r4, #0x38]
    // bl _s32_div_f
    // str r0, [r4, #0x3c]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    // bl _s32_div_f
    // str r0, [r4, #0x40]
    // ldr r0, [r6]
    // ldr r1, [r6, #0x1c]
    // bl Bg_GetXpos
    // str r0, [r4, #0x44]
    // ldr r0, [r6]
    // ldr r1, [r6, #0x1c]
    // bl Bg_GetYpos
    // str r0, [r4, #0x48]
    // mov r0, #0x80
    // str r0, [r5, #0x28]
    // mov r0, #5
    // str r0, [r5, #0x24]
    // ldr r1, [r5, #0x14]
    // ldr r0, [sp]
    // sub r0, r1, r0
    // str r0, [r5, #0x14]
    // ldr r1, [r5, #0x18]
    // ldr r0, [sp, #4]
    // sub r0, r1, r0
    // str r0, [r5, #0x18]
    // mov r0, #0xe
    // mov r1, #0
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov41_02249E60
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02249E3C: .word ov41_02249F0C
    // TODO: decompile
}


void ov41_02249E40(void) {
    // push {r3, r4}
    // ldr r2, [r0, #8]
    // add r0, #0xc
    // lsr r4, r2, #1
    // mov r3, #0
    // cmp r4, #0
    // ble _02249E5C
    // ldrh r2, [r0]
    // add r3, r3, #1
    // add r2, r2, r1
    // strh r2, [r0]
    // add r0, r0, #2
    // cmp r3, r4
    // blt _02249E4E
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov41_02249E60(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #0x14]
    // add r6, r2, #0
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // ldr r1, [r5, #0x18]
    // str r0, [sp, #0x18]
    // asr r0, r1, #2
    // lsr r0, r0, #0x1d
    // add r0, r1, r0
    // asr r0, r0, #3
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x28]
    // str r0, [sp]
    // ldr r0, [r5, #0x2c]
    // str r0, [sp, #4]
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #8]
    // ldr r2, [r5]
    // ldr r3, [r5, #0x1c]
    // bl ov41_02249FFC
    // ldr r0, [r5, #0x1c]
    // cmp r0, #4
    // bge _02249EA0
    // mov r2, #0
    // b _02249EA2
    // mov r2, #4
    // ldr r0, [r5, #0x20]
    // lsl r0, r0, #5
    // str r0, [sp]
    // ldr r0, [r5, #0x2c]
    // str r0, [sp, #4]
    // ldr r3, [r5, #0x24]
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #0xc]
    // lsl r3, r3, #5
    // bl ov41_0224A04C
    // ldr r0, [r5, #0x2c]
    // mov r2, #0
    // str r0, [sp]
    // ldr r0, [r5, #4]
    // ldr r1, [r5, #0x10]
    // add r3, sp, #0x24
    // bl GfGfxLoader_GetScrnData
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #0x20]
    // ldrh r0, [r2]
    // lsr r7, r0, #3
    // ldrh r0, [r2, #2]
    // add r3, r7, #0
    // lsr r0, r0, #3
    // str r0, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x28]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x24]
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // ldr r1, [r5, #0x1c]
    // bl ov41_02249F7C
    // ldr r0, [sp, #0x20]
    // bl Heap_Free
    // cmp r4, #0
    // beq _02249EFE
    // str r7, [r4]
    // cmp r6, #0
    // beq _02249F06
    // ldr r0, [sp, #0x1c]
    // str r0, [r6]
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02249F0C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x38]
    // sub r0, r0, #1
    // str r0, [r4, #0x38]
    // ldr r1, [r4]
    // bmi _02249F40
    // ldr r0, [r1]
    // ldr r1, [r1, #0x1c]
    // ldr r3, [r4, #0x3c]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // mov r2, #2
    // bl ScheduleSetBgPosText
    // ldr r1, [r4]
    // ldr r3, [r4, #0x40]
    // ldr r0, [r1]
    // ldr r1, [r1, #0x1c]
    // mov r2, #5
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ScheduleSetBgPosText
    // pop {r3, r4, r5, pc}
    // ldr r0, [r1]
    // ldr r1, [r1, #0x1c]
    // ldr r3, [r4, #0x44]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // mov r2, #0
    // bl ScheduleSetBgPosText
    // ldr r1, [r4]
    // ldr r3, [r4, #0x48]
    // ldr r0, [r1]
    // ldr r1, [r1, #0x1c]
    // mov r2, #3
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ScheduleSetBgPosText
    // ldr r0, [r4]
    // add r1, r4, #4
    // bl ov41_02249C7C
    // ldr r1, [r4, #0x34]
    // cmp r1, #0
    // beq _02249F74
    // mov r0, #1
    // str r0, [r1]
    // add r0, r5, #0
    // bl DestroySysTaskAndEnvironment
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_02249F7C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r1, #0
    // add r4, r2, #0
    // add r7, r0, #0
    // ldr r1, [sp, #0x3c]
    // add r0, r4, #0
    // add r6, r3, #0
    // bl ov41_02249E40
    // ldr r1, [sp, #0x30]
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // str r0, [sp]
    // ldr r3, [sp, #0x38]
    // str r2, [sp, #4]
    // add r4, #0xc
    // lsl r3, r3, #0x18
    // str r4, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r2, [sp, #0x34]
    // lsl r1, r5, #0x18
    // lsl r2, r2, #0x18
    // add r0, r7, #0
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl CopyToBgTilemapRect
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x34]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x40]
    // ldr r3, [sp, #0x38]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r1, r5, #0x18
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // str r0, [sp, #8]
    // add r0, r7, #0
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl BgTilemapRectChangePalette
    // lsl r1, r5, #0x18
    // add r0, r7, #0
    // lsr r1, r1, #0x18
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_02249FFC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r0, #0
    // str r1, [sp, #4]
    // ldr r0, [sp, #0x24]
    // mov r1, #0x14
    // add r5, r2, #0
    // add r6, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r2, r4, #0
    // mov r1, #0x14
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0224A018
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // add r0, r7, #0
    // mov r2, #0
    // add r3, r4, #4
    // bl GfGfxLoader_GetCharData
    // str r0, [r4, #8]
    // str r5, [r4]
    // ldr r0, [sp, #0x20]
    // str r6, [r4, #0xc]
    // str r0, [r4, #0x10]
    // ldr r0, _0224A048 ; =ov41_0224A094
    // add r1, r4, #0
    // mov r2, #0x80
    // bl SysTask_CreateOnVWaitQueue
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224A048: .word ov41_0224A094
    // TODO: decompile
}


void ov41_0224A04C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // str r1, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r1, #0x14
    // add r5, r2, #0
    // add r6, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r2, r4, #0
    // mov r1, #0x14
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0224A066
    // ldr r1, [sp]
    // ldr r3, [sp, #0x1c]
    // add r0, r7, #0
    // add r2, r4, #0
    // bl GfGfxLoader_GetPlttData
    // str r0, [r4, #4]
    // str r5, [r4, #8]
    // ldr r0, [sp, #0x18]
    // str r6, [r4, #0xc]
    // str r0, [r4, #0x10]
    // ldr r0, _0224A090 ; =ov41_0224A0D0
    // add r1, r4, #0
    // mov r2, #0x80
    // bl SysTask_CreateOnVWaitQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224A090: .word ov41_0224A0D0
    // TODO: decompile
}


void ov41_0224A094(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [r4, #4]
    // add r5, r0, #0
    // ldr r0, [r1, #0x14]
    // ldr r1, [r1, #0x10]
    // bl DC_FlushRange
    // ldr r3, [r4, #4]
    // ldr r0, [r4, #0x10]
    // str r0, [sp]
    // ldr r1, [r4, #0xc]
    // ldr r2, [r3, #0x14]
    // lsl r1, r1, #0x18
    // ldr r0, [r4]
    // ldr r3, [r3, #0x10]
    // lsr r1, r1, #0x18
    // bl BG_LoadCharTilesData
    // add r0, r5, #0
    // bl SysTask_Destroy
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_0224A0D0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // ldr r1, [r4, #0x10]
    // ldr r0, [r0, #0xc]
    // bl DC_FlushRange
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // bne _0224A0F4
    // ldr r0, [r4]
    // ldr r1, [r4, #0xc]
    // ldr r0, [r0, #0xc]
    // ldr r2, [r4, #0x10]
    // bl GX_LoadBGPltt
    // b _0224A104
    // cmp r0, #4
    // bne _0224A104
    // ldr r0, [r4]
    // ldr r1, [r4, #0xc]
    // ldr r0, [r0, #0xc]
    // ldr r2, [r4, #0x10]
    // bl GXS_LoadBGPltt
    // add r0, r5, #0
    // bl SysTask_Destroy
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_0224A118(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r5, #0
    // bne _0224A126
    // bl GF_AssertFail
    // cmp r4, #0
    // bne _0224A12E
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl Sprite_CreateAffine
    // str r0, [r5]
    // cmp r0, #0
    // bne _0224A13E
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // str r0, [r5, #4]
    // ldr r0, [r4, #8]
    // str r0, [r5, #8]
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _0224A150
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, pc}
    // ldr r0, _0224A158 ; =ov41_0224A254
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, pc}
    // nop
    // _0224A158: .word ov41_0224A254
    // TODO: decompile
}


void ov41_0224A15C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x30
    // add r4, r1, #0
    // add r5, r0, #0
    // bl ov41_0224A118
    // ldr r0, [r4, #0x14]
    // str r0, [sp]
    // ldr r0, [r4, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r0, [r0]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x18]
    // str r0, [sp, #0xc]
    // ldr r0, [r5]
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x24]
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x1c]
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0x20]
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x28]
    // str r0, [sp, #0x28]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x2c]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0
    // bl sub_020135D8
    // str r0, [r5, #0x10]
    // add sp, #0x30
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_0224A1A8(void) {
    Sprite_Delete(0, 0x10);
}


void ov41_0224A1C0(void) {
    ov41_0224A1A8();
    FontOAM_Delete(*((u32*)(r4 + 0x10)));
    memset(r4, 0, 0x20);
}


void ov41_0224A1DC(void) {
    // push {r3, lr}
    // ldr r2, [r0, #4]
    // cmp r1, r2
    // bne _0224A1EA
    // ldr r1, [r0, #8]
    // ldr r2, [r0, #0xc]
    // blx r2
    // pop {r3, pc}
    // TODO: decompile
}


void ov41_0224A1EC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r2, #0
    // mov r4, #2
    // add r5, #0x20
    // cmp r4, r7
    // beq _0224A204
    // add r0, r5, #0
    // bl ov41_0224A264
    // b _0224A228
    // cmp r6, #0
    // bne _0224A216
    // add r0, r5, #0
    // bl ov41_0224A270
    // ldr r0, _0224A234 ; =0x0000067C
    // bl PlaySE
    // b _0224A228
    // cmp r6, #2
    // bne _0224A222
    // add r0, r5, #0
    // bl ov41_0224A258
    // b _0224A228
    // add r0, r5, #0
    // bl ov41_0224A270
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #3
    // ble _0224A1F8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224A234: .word 0x0000067C
    // TODO: decompile
}


void ov41_0224A238(void) {
    GF_AssertFail();
}


void ov41_0224A254(void) {
    // bx lr
    // TODO: decompile
}


void ov41_0224A258(void) {
    Sprite_SetAnimationFrame();
}


void ov41_0224A264(void) {
    Sprite_SetAnimationFrame();
}


void ov41_0224A270(void) {
    Sprite_SetAnimationFrame();
}


void ov41_0224A27C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r0, #0x80
    // add r4, r1, #0
    // str r2, [r0]
    // mov r0, #1
    // mov r1, #0xd
    // bl FontSystem_NewInit
    // str r0, [r5, #0x64]
    // add r0, r4, #0
    // bl ov41_0224A7F8
    // mov r0, #0x90
    // str r0, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0x20
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #0x30
    // bl ov41_0224A6C4
    // mov r0, #0x28
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #0
    // mov r2, #0x30
    // mov r3, #0x98
    // bl ov41_0224A7E0
    // mov r0, #0x90
    // str r0, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0x20
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x10
    // mov r1, #1
    // add r2, r4, #0
    // mov r3, #8
    // bl ov41_0224A6C4
    // mov r0, #0x28
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #1
    // mov r2, #8
    // mov r3, #0x98
    // bl ov41_0224A7E0
    // mov r0, #0x90
    // str r0, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0x2a
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x20
    // mov r1, #2
    // add r2, r4, #0
    // mov r3, #0x60
    // bl ov41_0224A6C4
    // mov r0, #0x28
    // str r0, [sp]
    // mov r0, #0x22
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #2
    // mov r2, #0x60
    // mov r3, #0x9c
    // bl ov41_0224A7E0
    // mov r0, #0x90
    // str r0, [sp]
    // mov r0, #0x28
    // str r0, [sp, #4]
    // mov r0, #0x2a
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x30
    // mov r1, #3
    // add r2, r4, #0
    // mov r3, #0x88
    // bl ov41_0224A6C4
    // mov r0, #0x28
    // str r0, [sp]
    // mov r0, #0x22
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #3
    // mov r2, #0x88
    // mov r3, #0x9c
    // bl ov41_0224A7E0
    // mov r0, #2
    // mov r1, #0xe
    // bl FontID_Alloc
    // mov r0, #9
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #0
    // bl ov41_0224A928
    // add r6, r0, #0
    // str r6, [sp]
    // mov r0, #0xb8
    // str r0, [sp, #4]
    // mov r0, #0x90
    // str r0, [sp, #8]
    // mov r0, #0x48
    // str r0, [sp, #0xc]
    // mov r0, #0x2a
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // ldr r3, [r5, #0x64]
    // add r0, #0x40
    // mov r1, #4
    // add r2, r4, #0
    // bl ov41_0224A734
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #0x22
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #4
    // mov r2, #0xb8
    // mov r3, #0x9c
    // bl ov41_0224A7E0
    // add r0, r6, #0
    // bl ov41_0224A9B0
    // mov r0, #2
    // bl FontID_Release
    // mov r0, #1
    // str r0, [r5, #0x60]
    // add r0, r4, #0
    // bl ov41_0224A888
    // add r0, r5, #0
    // add r0, #0x20
    // bl ov41_0224A258
    // mov r0, #0xd
    // str r0, [sp]
    // add r0, r5, #0
    // ldr r2, _0224A3E0 ; =ov41_0224A60C
    // add r0, #0x6c
    // mov r1, #5
    // add r3, r5, #0
    // bl TouchHitboxController_Create
    // str r0, [r5, #0x68]
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0224A3E0: .word ov41_0224A60C
    // TODO: decompile
}


void ov41_0224A3E4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // mov r4, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov41_02246388
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov41_0224639C
    // add r0, r4, #0
    // bl ObjCharTransfer_ResetTransferTasksByResID
    // add r4, r4, #1
    // cmp r4, #5
    // blt _0224A3EC
    // mov r0, #0
    // bl ObjPlttTransfer_FreeTaskByID
    // mov r0, #1
    // bl ObjPlttTransfer_FreeTaskByID
    // mov r5, #0
    // add r4, r6, #0
    // add r0, r4, #0
    // bl ov41_0224A1A8
    // add r5, r5, #1
    // add r4, #0x10
    // cmp r5, #4
    // blt _0224A418
    // add r0, r6, #0
    // add r0, #0x54
    // bl sub_02021B5C
    // add r0, r6, #0
    // add r0, #0x40
    // bl ov41_0224A1C0
    // ldr r0, [r6, #0x64]
    // bl sub_020135AC
    // ldr r0, [r6, #0x68]
    // bl TouchHitboxController_Destroy
    // mov r0, #0
    // str r0, [r6, #0x68]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_0224A448(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x68]
    // mov r4, #0xff
    // cmp r0, #0
    // bne _0224A458
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0x84
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0224A48C
    // add r0, r5, #0
    // add r0, #0x84
    // ldrh r0, [r0]
    // sub r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x84
    // strh r1, [r0]
    // add r1, r5, #0
    // add r1, #0x84
    // ldrh r2, [r1]
    // mov r1, #1
    // add r0, r5, #0
    // eor r2, r1
    // ldr r1, _0224A4E4 ; =ov41_0224C094
    // add r0, #0x86
    // ldrb r1, [r1, r2]
    // ldrh r0, [r0]
    // add r2, r5, #0
    // bl ov41_0224A60C
    // pop {r3, r4, r5, pc}
    // ldr r0, _0224A4E8 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // add r2, r1, #0
    // tst r2, r0
    // beq _0224A49C
    // mov r4, #4
    // b _0224A4C2
    // mov r2, #0x40
    // tst r2, r1
    // beq _0224A4A6
    // mov r4, #1
    // b _0224A4C2
    // mov r2, #0x80
    // tst r2, r1
    // beq _0224A4B0
    // mov r4, #0
    // b _0224A4C2
    // mov r2, #0x20
    // tst r2, r1
    // beq _0224A4BA
    // mov r4, #2
    // b _0224A4C2
    // mov r2, #0x10
    // tst r1, r2
    // beq _0224A4C2
    // add r4, r0, #0
    // cmp r4, #0xff
    // beq _0224A4E2
    // add r0, r5, #0
    // add r0, #0x86
    // strh r4, [r0]
    // add r0, r5, #0
    // mov r1, #2
    // add r0, #0x84
    // strh r1, [r0]
    // add r0, r5, #0
    // add r0, #0x86
    // ldrh r0, [r0]
    // mov r1, #0
    // add r2, r5, #0
    // bl ov41_0224A60C
    // pop {r3, r4, r5, pc}
    // _0224A4E4: .word ov41_0224C094
    // _0224A4E8: .word gSystem
    // TODO: decompile
}


void ov41_0224A4EC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x84
    // ldrh r0, [r0]
    // cmp r0, #0
    // beq _0224A4FC
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // ldr r0, [r0]
    // cmp r0, #1
    // bne _0224A526
    // bl System_GetTouchHeld
    // cmp r0, #0
    // beq _0224A514
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, _0224A548 ; =gSystem
    // ldr r0, [r0, #0x44]
    // cmp r0, #0
    // beq _0224A542
    // add r4, #0x80
    // ldr r0, [r4]
    // mov r1, #0
    // str r1, [r0]
    // b _0224A542
    // ldr r0, _0224A548 ; =gSystem
    // ldr r0, [r0, #0x44]
    // cmp r0, #0
    // beq _0224A532
    // mov r0, #0
    // pop {r4, pc}
    // bl System_GetTouchHeld
    // cmp r0, #0
    // beq _0224A542
    // add r4, #0x80
    // ldr r0, [r4]
    // mov r1, #1
    // str r1, [r0]
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0224A548: .word gSystem
    // TODO: decompile
}


void ov41_0224A54C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x68]
    // cmp r0, #0
    // bne _0224A55A
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl ov41_0224A4EC
    // cmp r0, #0
    // bne _0224A57E
    // add r0, r4, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0224A578
    // add r0, r4, #0
    // bl ov41_0224A448
    // pop {r4, pc}
    // ldr r0, [r4, #0x68]
    // bl TouchHitboxController_IsTriggered
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224A580(void) {
    ov41_0224A8B0(3);
    ov41_0224A8D4(r4, 3);
    ov41_0224A1EC(r4, 2, 3);
}


void ov41_0224A5A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r6, r1, #0
    // add r7, r2, #0
    // mov r4, #0
    // add r5, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov41_0224A9BC
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #4
    // blt _0224A5B0
    // ldr r0, [sp]
    // add r1, r6, #0
    // add r0, #0x40
    // add r2, r7, #0
    // str r0, [sp]
    // bl ov41_0224A9F8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224A5D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r5, #0
    // bne _0224A5E6
    // bl GF_AssertFail
    // cmp r4, #4
    // bge _0224A5FA
    // lsl r0, r4, #4
    // ldr r3, [sp, #0x18]
    // add r0, r5, r0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov41_0224A238
    // pop {r3, r4, r5, r6, r7, pc}
    // add r5, #0x40
    // ldr r3, [sp, #0x18]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov41_0224A238
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224A60C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r6, #4
    // bhi _0224A6B8
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224A624: ; jump table
    // add r0, r4, #0
    // bl ov41_0224A8B0
    // mov r1, #0x1a
    // add r0, r4, #0
    // lsl r1, r1, #6
    // mov r2, #0
    // add r3, r5, #0
    // bl ov41_0224A918
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224A1DC
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r0, #0x10
    // bl ov41_0224A8B0
    // add r0, r4, #0
    // mov r1, #0x1a
    // add r0, #0x10
    // lsl r1, r1, #6
    // mov r2, #0
    // add r3, r5, #0
    // bl ov41_0224A918
    // add r4, #0x10
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224A1DC
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov41_0224A1EC
    // lsl r0, r6, #4
    // add r0, r4, r0
    // add r1, r5, #0
    // bl ov41_0224A1DC
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x60]
    // cmp r0, #1
    // bne _0224A6BC
    // add r0, r4, #0
    // add r0, #0x40
    // bl ov41_0224A8B0
    // add r0, r4, #0
    // add r0, #0x40
    // add r1, r5, #0
    // bl ov41_0224A8D4
    // add r0, r4, #0
    // ldr r1, _0224A6C0 ; =0x000005E2
    // add r0, #0x40
    // mov r2, #0
    // add r3, r5, #0
    // bl ov41_0224A918
    // add r4, #0x40
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224A1DC
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // nop
    // _0224A6C0: .word 0x000005E2
    // TODO: decompile
}


void ov41_0224A6C4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x90
    // add r6, r0, #0
    // mov r0, #0
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // add r5, r2, #0
    // str r0, [sp, #8]
    // mov r2, #0
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r0, [r5, #0x48]
    // add r4, r3, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x4c]
    // add r3, r1, #0
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x50]
    // str r0, [sp, #0x1c]
    // ldr r0, [r5, #0x54]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x5c
    // bl CreateSpriteResourcesHeader
    // ldr r0, [r5, #0x44]
    // mov r2, #0
    // mov r1, #1
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // lsl r0, r4, #0xc
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0xa0]
    // str r1, [sp, #0x54]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x38]
    // mov r0, #2
    // str r0, [sp, #0x50]
    // mov r0, #0xe
    // str r0, [sp, #0x58]
    // add r0, sp, #0x2c
    // str r0, [sp, #0x80]
    // str r1, [sp, #0x8c]
    // add r0, r6, #0
    // add r1, sp, #0x80
    // str r2, [sp, #0x3c]
    // str r2, [sp, #0x84]
    // str r2, [sp, #0x88]
    // bl ov41_0224A118
    // add sp, #0x90
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_0224A734(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0xa8
    // add r5, r0, #0
    // mov r0, #0
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // add r4, r2, #0
    // str r0, [sp, #8]
    // mov r2, #0
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // ldr r0, [r4, #0x48]
    // add r6, r3, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #0x4c]
    // add r3, r1, #0
    // str r0, [sp, #0x18]
    // ldr r0, [r4, #0x50]
    // str r0, [sp, #0x1c]
    // ldr r0, [r4, #0x54]
    // str r0, [sp, #0x20]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // add r0, sp, #0x5c
    // bl CreateSpriteResourcesHeader
    // ldr r0, [r4, #0x44]
    // mov r2, #0xe
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0xbc]
    // str r2, [sp, #0x58]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0xc0]
    // add r2, sp, #0x2c
    // lsl r0, r0, #0xc
    // mov r1, #2
    // str r2, [sp, #0x80]
    // ldr r2, [sp, #0xb8]
    // str r0, [sp, #0x38]
    // mov r0, #0
    // str r1, [sp, #0x50]
    // mov r1, #1
    // str r0, [sp, #0x3c]
    // str r1, [sp, #0x54]
    // str r0, [sp, #0x84]
    // str r0, [sp, #0x88]
    // str r0, [sp, #0x9c]
    // mov r0, #0x13
    // str r1, [sp, #0x8c]
    // str r6, [sp, #0x94]
    // str r2, [sp, #0x90]
    // str r0, [sp, #0xa0]
    // ldr r0, [r4, #0x4c]
    // bl SpriteResourceCollection_Find
    // mov r1, #0
    // bl SpriteTransfer_GetPaletteProxy
    // str r0, [sp, #0x98]
    // ldr r0, [sp, #0xb8]
    // mov r1, #1
    // mov r2, #0xd
    // bl sub_02013688
    // mov r1, #1
    // add r3, r5, #0
    // add r2, r1, #0
    // add r3, #0x14
    // bl sub_02021AC8
    // cmp r0, #0
    // bne _0224A7D0
    // bl GF_AssertFail
    // ldr r0, [r5, #0x18]
    // add r1, sp, #0x80
    // str r0, [sp, #0xa4]
    // add r0, r5, #0
    // bl ov41_0224A15C
    // add sp, #0xa8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_0224A7E0(void) {
    // lsl r1, r1, #2
    // strb r3, [r0, r1]
    // add r1, r0, r1
    // ldr r0, [sp, #4]
    // strb r2, [r1, #2]
    // add r0, r3, r0
    // strb r0, [r1, #1]
    // ldr r0, [sp]
    // add r0, r2, r0
    // strb r0, [r1, #3]
    // bx lr
    // TODO: decompile
}


void ov41_0224A7F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x6b
    // mov r4, #0
    // str r0, [sp, #0xc]
    // mov r7, #0x6a
    // mov r6, #0x69
    // mov r0, #1
    // str r0, [sp]
    // mov r1, #6
    // str r4, [sp, #4]
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // ldr r2, [sp, #0xc]
    // add r0, r5, #0
    // mov r3, #0
    // bl ov41_022462E4
    // mov r1, #6
    // str r4, [sp]
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r7, #0
    // mov r3, #0
    // bl ov41_02246328
    // mov r1, #6
    // str r4, [sp]
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r6, #0
    // mov r3, #0
    // bl ov41_02246344
    // ldr r0, [sp, #0xc]
    // add r4, r4, #1
    // add r0, r0, #3
    // str r0, [sp, #0xc]
    // add r7, r7, #3
    // add r6, r6, #3
    // cmp r4, #5
    // blt _0224A808
    // mov r0, #1
    // str r0, [sp]
    // mov r1, #3
    // str r1, [sp, #4]
    // mov r3, #0
    // str r3, [sp, #8]
    // lsl r1, r1, #7
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // mov r2, #0x68
    // bl ov41_02246304
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #6
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // mov r2, #0x78
    // mov r3, #0
    // bl ov41_02246304
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224A888(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r4, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov41_02246360
    // add r4, r4, #1
    // cmp r4, #5
    // blt _0224A88E
    // add r0, r5, #0
    // mov r1, #0
    // bl ov41_02246374
    // add r0, r5, #0
    // mov r1, #1
    // bl ov41_02246374
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_0224A8B0(void) {
    // push {r3, lr}
    // cmp r1, #0
    // bne _0224A8BC
    // bl ov41_0224A270
    // pop {r3, pc}
    // cmp r1, #2
    // bne _0224A8C6
    // bl ov41_0224A258
    // pop {r3, pc}
    // cmp r1, #1
    // beq _0224A8CE
    // cmp r1, #3
    // bne _0224A8D2
    // bl ov41_0224A264
    // pop {r3, pc}
    // TODO: decompile
}


void ov41_0224A8D4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bne _0224A8F0
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // mov r2, #0xf
    // bl sub_020136B4
    // ldr r0, [r5, #0x10]
    // mov r1, #4
    // bl TextOBJ_SetPaletteNum
    // pop {r3, r4, r5, pc}
    // cmp r4, #1
    // bne _0224A8FE
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // mov r2, #0x13
    // bl sub_020136B4
    // cmp r4, #3
    // bne _0224A914
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // mov r2, #0x13
    // bl sub_020136B4
    // ldr r0, [r5, #0x10]
    // mov r1, #3
    // bl TextOBJ_SetPaletteNum
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_0224A918(void) {
    PlaySE();
}


void ov41_0224A928(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r4, r3, #0
    // mov r0, #0
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // add r7, r0, #0
    // bne _0224A940
    // bl GF_AssertFail
    // add r0, r7, #0
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r0, #0xe
    // mov r1, #1
    // bl AllocWindows
    // add r4, r0, #0
    // bl InitWindow
    // mov r0, #0
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r6, #0x40]
    // add r1, r4, #0
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl AddTextWindowTopLeftCorner
    // ldr r3, [sp, #0x28]
    // mov r0, #2
    // add r1, r5, #0
    // mov r2, #0
    // lsl r3, r3, #3
    // bl FontID_String_GetCenterAlignmentX
    // mov r1, #0
    // add r3, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0224A9AC ; =0x00010203
    // add r2, r5, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #2
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224A9AC: .word 0x00010203
    // TODO: decompile
}


void ov41_0224A9B0(void) {
    WindowArray_Delete();
}


void ov41_0224A9BC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // add r6, r2, #0
    // bl Sprite_GetMatrixPtr
    // add r3, r0, #0
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r1, [sp]
    // lsl r0, r4, #0xc
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // lsl r0, r6, #0xc
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // add r1, r7, #0
    // bl Sprite_SetMatrix
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224A9F8(void) {
    ov41_0224A9BC();
    sub_02013728(*((u32*)(r4 + 0x10)));
}


void ov41_0224AA08(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r6, r2, #0
    // mov r1, #1
    // add r5, r0, #0
    // tst r1, r6
    // beq _0224AA22
    // mov r2, #0x52
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // mov r0, #2
    // tst r0, r6
    // beq _0224AA30
    // ldr r1, [r4]
    // add r0, r5, #0
    // bl ov41_0224ACA4
    // mov r0, #4
    // add r1, r6, #0
    // tst r1, r0
    // beq _0224AA54
    // mov r1, #0x1b
    // str r1, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x1f
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r4]
    // add r0, #0x2c
    // mov r2, #2
    // mov r3, #0x13
    // bl ov41_0224AD0C
    // mov r0, #8
    // tst r0, r6
    // beq _0224AA6C
    // ldr r0, [r4, #0x24]
    // str r0, [sp]
    // add r0, r5, #0
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // ldr r3, [r4, #0x10]
    // add r0, #0x38
    // bl ov41_0224AED8
    // mov r0, #0x10
    // tst r0, r6
    // beq _0224AA8C
    // ldr r0, [r4]
    // str r0, [sp]
    // ldr r0, [r4, #0x20]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x24]
    // str r0, [sp, #8]
    // add r0, r5, #0
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // ldr r3, [r4, #0x1c]
    // add r0, #0xa0
    // bl ov41_0224B118
    // mov r0, #0x20
    // tst r0, r6
    // beq _0224AB02
    // mov r0, #0x1b
    // str r0, [sp]
    // mov r2, #2
    // str r2, [sp, #4]
    // mov r0, #0x8b
    // str r0, [sp, #8]
    // mov r3, #1
    // str r3, [sp, #0xc]
    // add r0, #0xa9
    // ldr r1, [r4]
    // add r0, r5, r0
    // bl ov41_0224AD0C
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0224AB3C ; =0x0001020F
    // mov r1, #0x1b
    // str r0, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // add r0, #0x35
    // ldr r0, [r5, r0]
    // ldr r2, [r4, #0x14]
    // mov r3, #6
    // bl ov41_0224AE24
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _0224AB3C ; =0x0001020F
    // mov r1, #0x1b
    // str r0, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // add r0, #0x35
    // ldr r0, [r5, r0]
    // ldr r2, [r4, #0x14]
    // ldr r3, [r4, #0x18]
    // bl ov41_0224AE24
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // mov r2, #1
    // ldr r0, [r5, r0]
    // mov r1, #0
    // add r3, r2, #0
    // bl DrawFrameAndWindow2
    // ldr r0, [r4, #4]
    // str r0, [r5, #0x30]
    // ldr r0, [r4, #8]
    // str r0, [r5, #0x34]
    // ldr r0, [r4]
    // ldr r1, [r4, #0xc]
    // bl ov41_0224ACDC
    // ldr r0, [r4, #0xc]
    // bl Options_GetFrame
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r4, #0xc]
    // bl Options_GetTextFrameDelay
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #8
    // ldr r0, [r5, r0]
    // sub r1, #8
    // orr r0, r6
    // str r0, [r5, r1]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0224AB3C: .word 0x0001020F
    // TODO: decompile
}


void ov41_0224AB40(void) {
    // push {r4, lr}
    // mov r1, #0x4e
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // mov r1, #2
    // tst r1, r2
    // beq _0224AB60
    // bl ov41_0224AD7C
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // mov r0, #2
    // bic r2, r0
    // str r2, [r4, r1]
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // mov r0, #4
    // tst r0, r1
    // beq _0224AB7E
    // ldr r0, [r4, #0x2c]
    // bl ov41_0224AD84
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // mov r0, #4
    // bic r2, r0
    // str r2, [r4, r1]
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // mov r0, #8
    // tst r0, r1
    // beq _0224ABA0
    // add r0, r4, #0
    // ldr r1, [r4, #0x34]
    // add r0, #0x38
    // bl ov41_0224AFD4
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // mov r0, #8
    // bic r2, r0
    // str r2, [r4, r1]
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // mov r0, #0x10
    // tst r0, r1
    // beq _0224ABC2
    // add r0, r4, #0
    // ldr r1, [r4, #0x34]
    // add r0, #0xa0
    // bl ov41_0224B21C
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // mov r0, #0x10
    // bic r2, r0
    // str r2, [r4, r1]
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r2, [r4, r0]
    // mov r1, #0x20
    // tst r1, r2
    // beq _0224ABE2
    // sub r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov41_0224AD84
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // mov r0, #0x20
    // bic r2, r0
    // str r2, [r4, r1]
    // mov r2, #0x52
    // add r0, r4, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224ABF0(void) {
    ov41_0224B250(0x10, 0x4e);
}


void ov41_0224AC08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // add r4, r1, #0
    // ldr r1, [r5, r0]
    // mov r0, #4
    // add r6, r2, #0
    // add r7, r3, #0
    // tst r0, r1
    // bne _0224AC24
    // bl GF_AssertFail
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0xff
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x2c]
    // add r1, r4, #0
    // add r2, r6, #0
    // add r3, r7, #0
    // bl ov41_0224AD90
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224AC40(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // add r4, r1, #0
    // ldr r1, [r5, r0]
    // mov r0, #4
    // add r6, r2, #0
    // add r7, r3, #0
    // tst r0, r1
    // bne _0224AC5C
    // bl GF_AssertFail
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #5
    // lsl r0, r0, #6
    // ldr r1, [r5, r0]
    // add r0, r0, #4
    // str r1, [sp, #8]
    // add r0, r5, r0
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x2c]
    // add r1, r4, #0
    // add r2, r6, #0
    // add r3, r7, #0
    // bl ov41_0224ADD8
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224AC80(void) {
    String_Delete(0x51, 0x51, 0);
}


void ov41_0224AC98(void) {
    ov41_0224AF8C();
}


void ov41_0224ACA4(void) {
    // push {r3, lr}
    // sub sp, #0x30
    // str r1, [sp]
    // mov r1, #0x1a
    // str r1, [sp, #4]
    // mov r1, #0xe0
    // str r1, [sp, #8]
    // mov r1, #0xe1
    // str r1, [sp, #0xc]
    // mov r2, #0
    // mov r1, #0xe2
    // str r1, [sp, #0x10]
    // mov r1, #4
    // str r1, [sp, #0x1c]
    // mov r1, #1
    // str r1, [sp, #0x20]
    // mov r1, #0xe
    // str r1, [sp, #0x2c]
    // add r1, sp, #0
    // str r2, [sp, #0x14]
    // str r2, [sp, #0x18]
    // str r2, [sp, #0x24]
    // str r2, [sp, #0x28]
    // bl ov41_02249C7C
    // add sp, #0x30
    // pop {r3, pc}
    // TODO: decompile
}


void ov41_0224ACDC(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r0, r1, #0
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xe
    // mov r2, #1
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #5
    // add r3, r2, #0
    // bl LoadUserFrameGfx2
    // mov r0, #4
    // mov r1, #0x40
    // mov r2, #0xe
    // bl LoadFontPal1
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224AD0C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r3, #0
    // mov r0, #0xe
    // mov r1, #1
    // add r4, r2, #0
    // bl AllocWindows
    // str r0, [r5]
    // bl InitWindow
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // lsl r3, r4, #0x18
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // mov r2, #5
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x30]
    // lsr r3, r3, #0x18
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r1, [r5]
    // add r0, r7, #0
    // bl AddWindowParameterized
    // ldr r0, [r5]
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x34]
    // cmp r0, #0
    // beq _0224AD70
    // mov r2, #1
    // ldr r0, [r5]
    // mov r1, #0
    // add r3, r2, #0
    // bl DrawFrameAndWindow2
    // ldr r0, [r5]
    // bl CopyWindowToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224AD7C(void) {
    ov41_02249CC4();
}


void ov41_0224AD84(void) {
    WindowArray_Delete();
}


void ov41_0224AD90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // mov r1, #0xf
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x28]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, _0224ADD4 ; =0x0001020F
    // add r3, r7, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // bl ov41_0224AE24
    // mov r2, #1
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // add r3, r2, #0
    // bl DrawFrameAndWindow2
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224ADD4: .word 0x0001020F
    // TODO: decompile
}


void ov41_0224ADD8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r1, #0
    // mov r1, #0xf
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x28]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r2, r6, #0
    // str r0, [sp, #4]
    // ldr r0, _0224AE20 ; =0x0001020F
    // add r3, r7, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // bl ov41_0224AE78
    // mov r2, #1
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // add r3, r2, #0
    // bl DrawFrameAndWindow2
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0224AE20: .word 0x0001020F
    // TODO: decompile
}


void ov41_0224AE24(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r4, r3, #0
    // mov r0, #0
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // add r5, r0, #0
    // bne _0224AE3C
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // mov r1, #1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // add r2, r4, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r6, r0, #0
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl DestroyMsgData
    // add r0, r6, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_0224AE78(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // ldr r4, [sp, #0x38]
    // add r7, r0, #0
    // ldr r0, [r4]
    // add r5, r1, #0
    // add r6, r2, #0
    // str r3, [sp, #0x10]
    // cmp r0, #0
    // beq _0224AE90
    // bl GF_AssertFail
    // mov r0, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // add r5, r0, #0
    // bne _0224AEA4
    // bl GF_AssertFail
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // bl NewString_ReadMsgData
    // str r0, [r4]
    // ldr r0, [sp, #0x2c]
    // ldr r3, [sp, #0x28]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // mov r1, #1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, [r4]
    // add r0, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r4, r0, #0
    // add r0, r5, #0
    // bl DestroyMsgData
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224AED8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // add r5, r1, #0
    // mov r1, #0x67
    // str r1, [sp]
    // mov r1, #0xe1
    // str r1, [sp, #4]
    // mov r1, #0x66
    // str r1, [sp, #8]
    // mov r1, #0x65
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // mov r1, #0x7d
    // add r4, r2, #0
    // str r3, [sp, #0x1c]
    // lsl r1, r1, #4
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x80]
    // str r0, [sp, #0x18]
    // add r1, r4, #0
    // mov r2, #0xe
    // bl ov41_0224AFF8
    // ldr r0, [sp, #0x18]
    // add r1, r4, #0
    // add r2, sp, #0x48
    // mov r3, #0
    // bl ov41_0224B0B8
    // add r0, sp, #0x48
    // str r0, [sp, #0x2c]
    // mov r0, #2
    // str r0, [sp, #0x40]
    // mov r0, #0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x3c]
    // mov r0, #0xe
    // str r0, [sp, #0x44]
    // mov r0, #0x68
    // ldr r7, [sp, #0x24]
    // str r5, [sp, #0x28]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // mov r6, #0
    // str r0, [sp, #0x34]
    // lsl r1, r0, #0xc
    // mov r0, #2
    // lsl r0, r0, #0x14
    // str r1, [sp, #0x34]
    // add r0, r1, r0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x18]
    // lsl r1, r7, #2
    // mov r4, #0x26
    // add r5, r0, r1
    // str r4, [sp, #0x30]
    // lsl r0, r4, #0xc
    // str r0, [sp, #0x30]
    // add r0, sp, #0x28
    // bl Sprite_Create
    // mov r1, #1
    // str r0, [r5, #0x10]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [sp, #0x1c]
    // add r1, r6, r7
    // cmp r1, r0
    // blt _0224AF6C
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r6, r6, #1
    // add r4, #0x12
    // add r5, r5, #4
    // cmp r6, #0xa
    // blt _0224AF48
    // ldr r0, [sp, #0x20]
    // add r7, #0xa
    // add r0, #0x12
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x24]
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // cmp r0, #2
    // blt _0224AF2E
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224AF8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r6, [r7, #0x60]
    // add r5, r1, #0
    // cmp r6, r5
    // bge _0224AFB2
    // cmp r6, r5
    // bge _0224AFD0
    // lsl r0, r6, #2
    // add r4, r7, r0
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl Sprite_SetAnimCtrlSeq
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r5
    // blt _0224AFA0
    // b _0224AFD0
    // cmp r6, r5
    // ble _0224AFD0
    // sub r6, r6, #1
    // cmp r6, r5
    // blt _0224AFD0
    // lsl r0, r6, #2
    // add r4, r7, r0
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // sub r6, r6, #1
    // sub r4, r4, #4
    // cmp r6, r5
    // bge _0224AFC0
    // str r5, [r7, #0x60]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224AFD4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r7, r1, #0
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #0x10]
    // bl Sprite_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x14
    // blt _0224AFDE
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov41_0224B084
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224AFF8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r2, #0
    // ldr r7, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // add r5, r0, #0
    // add r0, r7, r2
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // add r4, r1, #0
    // str r6, [sp, #8]
    // ldr r0, [r4]
    // str r3, [sp, #0x10]
    // add r1, r3, #0
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // str r0, [r5]
    // bl sub_0200ADA4
    // ldr r0, [r5]
    // bl sub_0200A740
    // ldr r2, [sp, #0x2c]
    // ldr r1, [sp, #0x10]
    // add r0, r7, r2
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // mov r3, #0
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r0, [r4, #4]
    // bl AddPlttResObjFromOpenNarc
    // str r0, [r5, #4]
    // bl sub_0200B00C
    // ldr r0, [r5, #4]
    // bl sub_0200A740
    // ldr r2, [sp, #0x30]
    // ldr r1, [sp, #0x10]
    // add r0, r7, r2
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r0, [r4, #8]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r2, [sp, #0x34]
    // str r0, [r5, #8]
    // add r0, r7, r2
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r0, [r4, #0xc]
    // ldr r1, [sp, #0x10]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // str r0, [r5, #0xc]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224B084(void) {
    sub_0200AEB0();
    sub_0200B0A8(*((u32*)(r5 + 4)));
    DestroySingle2DGfxResObj();
    DestroySingle2DGfxResObj(*((u32*)(r4 + 4)), *((u32*)(r5 + 4)));
    DestroySingle2DGfxResObj(*((u32*)(r4 + 8)), *((u32*)(r5 + 8)));
    DestroySingle2DGfxResObj(*((u32*)(r4 + 0xc)), *((u32*)(r5 + 0xc)));
}


void ov41_0224B0B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // add r7, r2, #0
    // add r6, r3, #0
    // bl GF2DGfxResObj_GetResID
    // str r0, [sp, #0x2c]
    // ldr r0, [r5, #4]
    // bl GF2DGfxResObj_GetResID
    // str r0, [sp, #0x30]
    // ldr r0, [r5, #8]
    // bl GF2DGfxResObj_GetResID
    // str r0, [sp, #0x34]
    // ldr r0, [r5, #0xc]
    // bl GF2DGfxResObj_GetResID
    // str r0, [sp]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // ldr r1, [r4]
    // ldr r2, [sp, #0x30]
    // str r1, [sp, #0x14]
    // ldr r1, [r4, #4]
    // ldr r3, [sp, #0x34]
    // str r1, [sp, #0x18]
    // ldr r1, [r4, #8]
    // str r1, [sp, #0x1c]
    // ldr r1, [r4, #0xc]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    // add r0, r7, #0
    // bl CreateSpriteResourcesHeader
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224B118(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x60
    // add r4, r1, #0
    // mov r1, #0xe5
    // str r1, [sp]
    // mov r1, #0xe6
    // str r1, [sp, #4]
    // mov r1, #0xe4
    // str r1, [sp, #8]
    // mov r1, #0xe3
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _0224B214 ; =0x00000BB8
    // add r5, r2, #0
    // str r3, [sp, #0x18]
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x80]
    // add r7, r0, #0
    // add r1, r5, #0
    // mov r2, #0xe
    // bl ov41_0224AFF8
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, sp, #0x3c
    // mov r3, #0
    // bl ov41_0224B0B8
    // add r0, sp, #0x3c
    // str r0, [sp, #0x20]
    // mov r2, #2
    // mov r0, #0xe
    // mov r1, #0x3a
    // str r0, [sp, #0x38]
    // lsl r1, r1, #0xc
    // lsl r0, r2, #0x14
    // mov r6, #0
    // str r4, [sp, #0x1c]
    // str r1, [sp, #0x28]
    // add r0, r1, r0
    // str r2, [sp, #0x34]
    // str r6, [sp, #0x30]
    // str r0, [sp, #0x28]
    // mov r4, #0x67
    // add r5, r7, #0
    // str r4, [sp, #0x24]
    // lsl r0, r4, #0xc
    // str r0, [sp, #0x24]
    // add r0, sp, #0x1c
    // bl Sprite_Create
    // str r0, [r5, #0x10]
    // add r6, r6, #1
    // add r4, #0x18
    // add r5, r5, #4
    // cmp r6, #2
    // blt _0224B174
    // ldr r0, [sp, #0x18]
    // mov r1, #0x1e
    // str r0, [r7, #0x1c]
    // mul r1, r0
    // str r1, [r7, #0x20]
    // ldr r1, [sp, #0x7c]
    // str r1, [r7, #0x2c]
    // str r0, [r1]
    // ldr r1, [r7, #0x2c]
    // str r0, [r1, #8]
    // add r0, r7, #0
    // mov r1, #0
    // add r0, #0x90
    // str r1, [r0]
    // add r0, r7, #0
    // bl ov41_0224B298
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // mov r0, #0xc1
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // ldr r1, [sp, #0x78]
    // add r0, #0x18
    // mov r2, #0xa
    // mov r3, #8
    // bl ov41_0224AD0C
    // ldr r0, [r7, #0x18]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #4
    // ldr r0, _0224B218 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // ldr r0, [r7, #0x18]
    // mov r1, #0x1b
    // mov r2, #0xd7
    // bl ov41_0224AE24
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224B218 ; =0x00010200
    // mov r1, #0x1b
    // str r0, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // ldr r0, [r7, #0x18]
    // mov r2, #0xd7
    // mov r3, #5
    // bl ov41_0224AE24
    // ldr r0, [r7, #0x18]
    // bl CopyWindowToVram
    // add sp, #0x60
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224B214: .word 0x00000BB8
    // _0224B218: .word 0x00010200
    // TODO: decompile
}


void ov41_0224B21C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x24]
    // add r4, r1, #0
    // cmp r0, #0
    // beq _0224B22C
    // bl SysTask_Destroy
    // ldr r0, [r5, #0x28]
    // cmp r0, #0
    // beq _0224B236
    // bl SysTask_Destroy
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov41_0224B084
    // ldr r0, [r5, #0x18]
    // bl ov41_0224AD84
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x94
    // bl memset
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_0224B250(void) {
    ov41_0224B310();
    ov41_0224B270(r4);
    ov41_0224B298(r4);
    ov41_0224B450(r4);
}


void ov41_0224B270(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0x2c]
    // ldr r2, [r1]
    // ldr r1, [r0, #0x1c]
    // cmp r1, r2
    // beq _0224B290
    // str r2, [r0, #0x1c]
    // cmp r2, #0xa
    // bgt _0224B290
    // add r1, r0, #0
    // add r1, #0x30
    // bl ov41_0224B374
    // ldr r0, _0224B294 ; =0x00000682
    // bl PlaySE
    // pop {r3, pc}
    // nop
    // _0224B294: .word 0x00000682
    // TODO: decompile
}


void ov41_0224B298(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // ldr r0, [r6, #0x1c]
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0xa
    // add r4, r1, #0
    // mul r4, r0
    // mov r7, #0
    // add r5, r6, #0
    // ldr r0, [sp]
    // add r1, r4, #0
    // bl _s32_div_f
    // str r0, [sp, #4]
    // cmp r0, #0xa
    // ble _0224B2C0
    // bl GF_AssertFail
    // ldr r0, [r5, #0x10]
    // ldr r1, [sp, #4]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [sp, #4]
    // add r1, r0, #0
    // ldr r0, [sp]
    // mul r1, r4
    // sub r0, r0, r1
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0xa
    // bl _s32_div_f
    // add r4, r0, #0
    // add r0, r6, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0224B302
    // ldr r0, [r6, #0x1c]
    // cmp r0, #0xa
    // bgt _0224B302
    // ldr r0, [r5, #0x10]
    // mov r1, #1
    // bl Sprite_SetPalIndexRespectVramOffset
    // cmp r7, #1
    // bne _0224B302
    // add r1, r6, #0
    // add r1, #0x90
    // mov r0, #1
    // str r0, [r1]
    // add r7, r7, #1
    // add r5, r5, #4
    // cmp r7, #2
    // blt _0224B2AE
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224B310(void) {
    // ldr r1, [r0, #0x20]
    // sub r1, r1, #1
    // bmi _0224B318
    // str r1, [r0, #0x20]
    // bx lr
    // TODO: decompile
}


void ov41_0224B31C(void) {
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


void ov41_0224B32C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r2, [r4, #0xc]
    // ldr r0, [r4, #8]
    // lsl r2, r2, #0xc
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r0, r0, r2
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // ldr r1, [r4, #0x10]
    // lsl r1, r1, #0xc
    // bl FX_Div
    // ldr r1, [r4, #4]
    // add r0, r0, r1
    // str r0, [r4]
    // ldr r0, [r4, #0xc]
    // ldr r1, [r4, #0x10]
    // add r0, r0, #1
    // cmp r0, r1
    // bgt _0224B36C
    // str r0, [r4, #0xc]
    // mov r0, #0
    // pop {r4, pc}
    // str r1, [r4, #0xc]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224B374(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r0, [sp]
    // str r1, [sp, #4]
    // mov r1, #0x3a
    // mov r0, #2
    // lsl r1, r1, #0xc
    // lsl r0, r0, #0x14
    // ldr r4, [sp, #4]
    // str r1, [sp, #0x10]
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // ldr r6, [sp]
    // mov r7, #0
    // mov r5, #0x67
    // str r0, [sp, #8]
    // ldr r0, [r6, #0x10]
    // mov r1, #2
    // str r0, [r4, #4]
    // bl Sprite_SetAffineOverwriteMode
    // ldr r2, [sp, #8]
    // str r5, [sp, #0xc]
    // lsl r0, r5, #0xc
    // add r2, #0xc
    // add r3, sp, #0xc
    // str r0, [sp, #0xc]
    // ldmia r3!, {r0, r1}
    // str r2, [sp, #8]
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r7, r7, #1
    // str r0, [r2]
    // add r6, r6, #4
    // add r4, r4, #4
    // add r5, #0x18
    // cmp r7, #2
    // blt _0224B396
    // ldr r0, [sp]
    // ldr r1, [r0, #0x1c]
    // mov r0, #0xa
    // sub r0, r0, r1
    // cmp r0, #0
    // ble _0224B3F0
    // lsl r0, r0, #0xc
    // ldr r2, _0224B44C ; =0x00000266
    // asr r1, r0, #0x1f
    // mov r3, #0
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r4, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r4, #0xc
    // orr r1, r0
    // lsl r0, r2, #1
    // add r4, r1, r0
    // b _0224B3F4
    // mov r4, #1
    // lsl r4, r4, #0xc
    // ldr r0, [sp, #4]
    // mov r2, #1
    // add r0, #0x24
    // add r1, r4, #0
    // lsl r2, r2, #0xc
    // mov r3, #0x10
    // bl ov41_0224B31C
    // mov r2, #6
    // asr r1, r4, #0x1f
    // add r0, r4, #0
    // lsl r2, r2, #0xe
    // mov r3, #0
    // bl _ll_mul
    // mov r3, #2
    // mov r2, #0
    // lsl r3, r3, #0xa
    // add r3, r0, r3
    // adc r1, r2
    // lsl r0, r1, #0x14
    // lsr r1, r3, #0xc
    // orr r1, r0
    // mov r0, #6
    // lsl r0, r0, #0xe
    // sub r4, r1, r0
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // add r0, #0x38
    // mov r3, #0x10
    // bl ov41_0224B31C
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // add r0, #0x4c
    // mov r2, #0
    // mov r3, #0x10
    // bl ov41_0224B31C
    // ldr r0, [sp, #4]
    // mov r1, #1
    // str r1, [r0]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0224B44C: .word 0x00000266
    // TODO: decompile
}


void ov41_0224B450(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _0224B4E2
    // add r0, r5, #0
    // add r0, #0x24
    // bl ov41_0224B32C
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0x38
    // bl ov41_0224B32C
    // add r0, r5, #0
    // add r0, #0x4c
    // bl ov41_0224B32C
    // ldr r0, [r5, #0x24]
    // add r1, sp, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x24]
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #4]
    // bl Sprite_SetAffineScale
    // ldr r0, [r5, #8]
    // add r1, sp, #0xc
    // bl Sprite_SetAffineScale
    // add r6, r5, #0
    // add r6, #0xc
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // str r0, [r3]
    // ldr r1, [sp]
    // ldr r0, [r5, #0x38]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [r5, #0x4c]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [r5, #4]
    // add r1, r2, #0
    // bl Sprite_SetMatrix
    // add r6, r5, #0
    // add r6, #0x18
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // str r0, [r3]
    // ldr r1, [sp, #4]
    // ldr r0, [r5, #0x4c]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [r5, #8]
    // add r1, r2, #0
    // bl Sprite_SetMatrix
    // cmp r4, #0
    // beq _0224B4E2
    // mov r0, #0
    // str r0, [r5]
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_0224B4E8(void) {
    // push {r3, lr}
    // sub sp, #0x10
    // add r3, r1, #0
    // stmia r0!, {r1}
    // add r3, #0x48
    // str r3, [sp]
    // ldr r1, [r1, #0x74]
    // lsl r1, r1, #2
    // add r1, #0x89
    // str r1, [sp, #4]
    // mov r1, #0x10
    // str r1, [sp, #8]
    // add r1, sp, #0
    // str r2, [sp, #0xc]
    // bl ov41_02249CE0
    // add sp, #0x10
    // pop {r3, pc}
    // TODO: decompile
}


void ov41_0224B50C(void) {
    ov41_02249CF8();
}


void ov41_0224B518(void) {
    ov41_02249D60(0, 0x1c);
}


void ov41_0224B530(void) {
    ov41_0224B8DC(r0, r0);
    ov41_0224B8F0(r4);
    ov41_0224B630();
}


void ov41_0224B554(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x26
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #1
    // bne _0224B56A
    // sub r0, #0x48
    // add r0, r4, r0
    // bl ov41_0224B50C
    // mov r0, #0x99
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0224B57A
    // add r0, r4, #0
    // bl ov41_0224B720
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224B57C(void) {
    // push {r4, lr}
    // mov r1, #0x26
    // add r4, r0, #0
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // beq _0224B58E
    // bl ov41_0224B878
    // add r0, r4, #0
    // bl ov41_0224B85C
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov41_02245ECC
    // mov r0, #0x63
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // sub r0, #8
    // add r0, r4, r0
    // bl ov41_022499DC
    // add r0, r4, #0
    // bl ov41_0224B754
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224B5C8(void) {
    ov41_022465CC();
}


void ov41_0224B5D0(void) {
    // mov r2, #0x99
    // lsl r2, r2, #2
    // str r1, [r0, r2]
    // bx lr
    // TODO: decompile
}


void ov41_0224B5D8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r6, r2, #0
    // mov r2, #0x19
    // add r4, r1, #0
    // lsl r2, r2, #4
    // add r5, r0, #0
    // add r1, r2, #0
    // add r0, r5, r2
    // str r6, [sp]
    // add r1, #0xac
    // add r2, #0xb0
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // add r3, r4, #0
    // bl ov41_02248120
    // mov r0, #0x26
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _0224B620
    // mov r3, #0x88
    // ldr r0, [r5, #0x40]
    // mov r1, #2
    // mov r2, #0
    // sub r3, r3, r4
    // bl BgSetPosTextAndCommit
    // mov r3, #0x10
    // ldr r0, [r5, #0x40]
    // mov r1, #2
    // mov r2, #3
    // sub r3, r3, r6
    // bl BgSetPosTextAndCommit
    // mov r0, #0x8f
    // lsl r0, r0, #2
    // str r4, [r5, r0]
    // add r0, r0, #4
    // str r6, [r5, r0]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov41_0224B630(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #0x9a
    // ldr r0, [r5, #0x68]
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0x9a
    // mov r1, #0
    // lsl r2, r2, #2
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x8e
    // ldr r1, [r5, #0x68]
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r0, [r5, #0x68]
    // bl AllocMonZeroed
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r5]
    // ldr r1, [r4, r1]
    // bl sub_0202BEF4
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224B6CC
    // ldr r1, [r5, #0x58]
    // ldr r2, [r5, #0x68]
    // add r0, r4, #0
    // bl ov41_02246544
    // mov r0, #0x61
    // lsl r0, r0, #2
    // ldr r2, [r5, #0x68]
    // add r0, r4, r0
    // mov r1, #0x15
    // bl ov41_022499B4
    // ldr r1, [r5, #0x68]
    // mov r0, #0x14
    // bl ov41_02245EA0
    // mov r1, #0x63
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224B780
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224B848
    // mov r1, #0x86
    // lsl r1, r1, #2
    // add r0, r4, r1
    // sub r1, #0x88
    // ldr r2, [r5, #0x68]
    // add r1, r4, r1
    // bl ov41_0224B4E8
    // mov r0, #0x26
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov41_0224B888
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_0224B6CC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x28
    // add r4, r1, #0
    // ldr r1, [r4, #0x68]
    // add r5, r0, #0
    // mov r0, #0x1a
    // bl NARC_New
    // mov r1, #6
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // ldr r0, _0224B71C ; =0x000002CE
    // add r1, sp, #0
    // str r0, [sp]
    // mov r0, #0x76
    // str r0, [sp, #4]
    // mov r0, #0x13
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x68]
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x68]
    // add r0, r5, #0
    // bl ov41_02246518
    // ldr r3, [r4, #0x68]
    // add r0, r5, #0
    // add r1, sp, #0x10
    // add r2, r4, #0
    // bl ov41_0224B938
    // add r0, r5, #0
    // add r1, sp, #0x10
    // bl ov41_02246250
    // add r0, sp, #0x10
    // bl ov41_022463D4
    // add sp, #0x28
    // pop {r3, r4, r5, pc}
    // nop
    // _0224B71C: .word 0x000002CE
    // TODO: decompile
}


void ov41_0224B720(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r3, #0x25
    // lsl r3, r3, #4
    // add r1, r0, r3
    // str r1, [sp]
    // add r1, r3, #0
    // sub r1, #0x14
    // ldr r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xc
    // ldr r1, [r0, r1]
    // add r1, r2, r1
    // add r2, r3, #0
    // sub r2, #0x10
    // ldr r4, [r0, r2]
    // add r2, r3, #0
    // sub r2, #8
    // sub r3, r3, #4
    // ldr r2, [r0, r2]
    // ldrh r3, [r0, r3]
    // add r2, r4, r2
    // bl ov41_022465D8
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov41_0224B754(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov41_0224626C
    // add r0, r4, #0
    // bl ov41_02246594
    // mov r0, #0x26
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0224B772
    // add r0, r4, #0
    // bl ov41_022465C0
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl NARC_Delete
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224B780(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r5, r0, #0
    // add r2, sp, #0x28
    // mov r0, #0
    // add r7, r1, #0
    // add r3, r2, #0
    // add r1, r0, #0
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [r5]
    // str r0, [sp, #0x28]
    // ldr r0, [r5, #4]
    // str r0, [sp, #0x2c]
    // ldr r0, [r5, #0x10]
    // str r0, [sp, #0x30]
    // ldr r0, [r5, #0x30]
    // str r0, [sp, #0x34]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0x38]
    // ldr r0, [r5, #0x40]
    // str r0, [sp, #0x3c]
    // mov r0, #0x63
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // str r1, [sp, #0x40]
    // add r1, r0, #0
    // sub r1, #8
    // add r1, r5, r1
    // str r1, [sp, #0x44]
    // mov r1, #0x15
    // add r0, r0, #4
    // str r1, [sp, #0x48]
    // add r0, r5, r0
    // add r1, r2, #0
    // bl ov41_02247F3C
    // ldr r0, [r7]
    // bl sub_0202BEE4
    // add r6, r0, #0
    // ldr r0, [r7]
    // bl sub_0202BEEC
    // add r4, r0, #0
    // ldr r0, [r7]
    // bl sub_0202BEDC
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r7, #0x68]
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #8]
    // add r0, r5, r1
    // add r1, #0xa4
    // ldr r1, [r5, r1]
    // add r2, sp, #0x18
    // add r3, r6, #0
    // bl ov41_02247FAC
    // ldr r0, [r7, #0x54]
    // mov r6, #0
    // cmp r0, #0
    // ble _0224B844
    // add r4, r7, #0
    // ldr r0, [r4, #4]
    // bl sub_0202BEFC
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #4]
    // bl sub_0202BF00
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // bl sub_0202BF04
    // str r0, [sp, #0x14]
    // ldr r0, [r4, #4]
    // bl sub_0202BF08
    // str r0, [sp]
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, r5, r0
    // bl ov41_02248044
    // ldr r0, [r7, #0x54]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r0
    // blt _0224B80A
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224B848(void) {
    // add r2, r1, #0
    // mov r1, #0x19
    // lsl r1, r1, #4
    // add r0, r0, r1
    // ldr r1, [r2, #0x5c]
    // ldr r3, _0224B858 ; =ov41_0224825C
    // ldr r2, [r2, #0x68]
    // bx r3
    // _0224B858: .word ov41_0224825C
    // TODO: decompile
}


void ov41_0224B85C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x19
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ov41_022480E0
    // mov r0, #0x19
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ov41_02247F90
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224B878(void) {
    // mov r1, #0x19
    // lsl r1, r1, #4
    // ldr r3, _0224B884 ; =ov41_022482A8
    // add r0, r0, r1
    // bx r3
    // nop
    // _0224B884: .word ov41_022482A8
    // TODO: decompile
}


void ov41_0224B888(void) {
    // push {r3, r4, r5, lr}
    // add r3, r1, #0
    // mov r1, #0x8f
    // add r4, r0, #0
    // mov r2, #0x48
    // lsl r1, r1, #2
    // str r2, [r4, r1]
    // mov r5, #0x38
    // add r2, r1, #4
    // str r5, [r4, r2]
    // add r2, r1, #0
    // add r2, #8
    // str r5, [r4, r2]
    // add r2, r1, #0
    // mov r5, #0x40
    // add r2, #0xc
    // str r5, [r4, r2]
    // lsl r2, r5, #6
    // add r5, r1, #0
    // add r5, #0x14
    // str r2, [r4, r5]
    // add r5, r1, #0
    // add r5, #0x18
    // str r2, [r4, r5]
    // add r5, r1, #0
    // add r5, #0x1c
    // str r2, [r4, r5]
    // mov r2, #0
    // add r1, #0x10
    // strh r2, [r4, r1]
    // ldr r1, [r3, #0x60]
    // ldr r2, [r3, #0x64]
    // bl ov41_0224B5D8
    // mov r0, #0x97
    // ldr r1, _0224B8D8 ; =0x00007FFF
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _0224B8D8: .word 0x00007FFF
    // TODO: decompile
}


void ov41_0224B8DC(void) {
    // ldr r2, [r1]
    // str r2, [r0, #0x58]
    // ldr r2, [r1, #4]
    // str r2, [r0, #0x60]
    // ldr r2, [r1, #8]
    // str r2, [r0, #0x64]
    // ldr r1, [r1, #0xc]
    // str r1, [r0, #0x68]
    // bx lr
    // TODO: decompile
}


void ov41_0224B8F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // add r5, r0, #0
    // add r0, r7, #0
    // bl sub_0202BE14
    // add r6, r5, #0
    // str r0, [r5]
    // mov r4, #0
    // str r4, [r5, #0x54]
    // add r6, #0x54
    // add r0, r7, #0
    // add r1, r4, #0
    // bl sub_0202BDEC
    // cmp r0, #0
    // beq _0224B928
    // add r0, r7, #0
    // add r1, r4, #0
    // bl sub_0202BE2C
    // ldr r1, [r5, #0x54]
    // lsl r1, r1, #2
    // add r1, r5, r1
    // str r0, [r1, #4]
    // ldr r0, [r6]
    // add r0, r0, #1
    // str r0, [r6]
    // add r4, r4, #1
    // cmp r4, #0xa
    // blt _0224B906
    // add r0, r7, #0
    // bl sub_0202BE80
    // str r0, [r5, #0x5c]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov41_0224B938(void) {
    ov41_022464AC(r1, r3);
    ov41_0224B958(r5, r4, r6, r7);
}


void ov41_0224B958(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // add r0, r2, #0
    // ldr r0, [r0, #0x54]
    // add r4, r1, #0
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // cmp r0, #0
    // ble _0224B9D0
    // add r6, r2, #0
    // ldr r0, [r6, #4]
    // bl sub_0202BEFC
    // add r5, r0, #0
    // ldr r0, [r4, #0x10]
    // add r1, r5, #0
    // bl GF2dGfxRawResMan_DoesNotHaveObjWithId
    // cmp r0, #1
    // bne _0224B9BE
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #6
    // ldr r1, [sp, #4]
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // ldr r3, [sp, #0xc]
    // add r1, r5, #1
    // mov r2, #0
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r7, r0, #0
    // ldr r0, [r4, #0x10]
    // add r1, r7, #0
    // add r2, r5, #0
    // bl GF2dGfxRawResMan_AllocObj
    // ldr r1, [r4]
    // lsl r5, r5, #3
    // add r1, r1, r5
    // add r0, r7, #0
    // add r1, r1, #4
    // bl NNS_G2dGetUnpackedCharacterData
    // ldr r0, [sp, #4]
    // ldr r1, [r0]
    // ldr r0, [r4]
    // str r1, [r0, r5]
    // ldr r0, [sp, #0x10]
    // add r6, r6, #4
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [r0, #0x54]
    // ldr r0, [sp, #0x10]
    // cmp r0, r1
    // blt _0224B972
    // mov r0, #1
    // str r0, [sp]
    // mov r1, #6
    // ldr r0, [sp, #4]
    // lsl r1, r1, #6
    // ldr r0, [r0, r1]
    // mov r1, #0
    // ldr r3, [sp, #0xc]
    // add r2, r1, #0
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r5, r0, #0
    // ldr r0, [r4, #0x14]
    // add r1, r5, #0
    // mov r2, #0
    // bl GF2dGfxRawResMan_AllocObj
    // ldr r1, [r4, #8]
    // add r0, r5, #0
    // add r1, r1, #4
    // bl NNS_G2dGetUnpackedPaletteData
    // ldr r0, [sp, #4]
    // ldr r1, [r0]
    // ldr r0, [r4, #8]
    // str r1, [r0]
    // ldr r0, [r4, #8]
    // mov r1, #3
    // str r1, [r0, #8]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void AccessoryPortrait_Init(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r2, #2
    // add r4, r0, #0
    // mov r0, #3
    // mov r1, #0xd
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // mov r2, #1
    // mov r0, #3
    // mov r1, #0xe
    // lsl r2, r2, #0x12
    // bl Heap_Create
    // mov r1, #0x1a
    // add r0, r4, #0
    // lsl r1, r1, #4
    // mov r2, #0xd
    // bl OverlayManager_CreateAndGetData
    // mov r2, #0x1a
    // mov r1, #0
    // lsl r2, r2, #4
    // add r5, r0, #0
    // bl memset
    // ldr r0, _0224BAC4 ; =ov41_0224BBF0
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // add r0, r4, #0
    // bl OverlayManager_GetArgs
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // bl sub_0202B9B8
    // str r0, [r5]
    // ldr r0, [r4, #4]
    // str r0, [r5, #8]
    // ldr r0, [r4, #8]
    // str r0, [r5, #0xc]
    // bl ov41_02246130
    // ldr r0, _0224BAC8 ; =gSystem + 0x60
    // mov r1, #0
    // strb r1, [r0, #9]
    // bl GfGfx_SwapDisplay
    // add r0, r5, #0
    // add r0, #0x14
    // mov r1, #0xe
    // bl ov41_02246670
    // ldr r0, [r5, #0x54]
    // str r0, [sp]
    // mov r0, #0x48
    // str r0, [sp, #4]
    // mov r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r1, [r5]
    // add r0, sp, #0
    // bl ov41_0224B530
    // str r0, [r5, #0x10]
    // add r0, r5, #0
    // bl ov41_0224BC04
    // add r0, r5, #0
    // bl ov41_0224BCA4
    // add r0, r5, #0
    // bl ov41_0224BCF0
    // add r0, r5, #0
    // bl ov41_0224BDCC
    // add r0, r5, #0
    // bl ov41_0224BE5C
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0224BAC4: .word ov41_0224BBF0
    // _0224BAC8: .word gSystem + 0x60
    // TODO: decompile
}


void AccessoryPortrait_Main(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // bl OverlayManager_GetData
    // add r5, r0, #0
    // bl Thunk_G3X_Reset
    // bl NNS_G2dSetupSoftwareSpriteCamera
    // ldr r0, [r5, #0x10]
    // bl ov41_0224B554
    // mov r0, #0
    // add r1, r0, #0
    // bl RequestSwap3DBuffers
    // add r5, #0x14
    // add r0, r5, #0
    // bl ov41_022466C8
    // ldr r1, [r4]
    // cmp r1, #5
    // bhi _0224BB96
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224BB08: ; jump table
    // add r0, r1, #1
    // str r0, [r4]
    // b _0224BB96
    // mov r0, #6
    // str r0, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // mov r0, #0xd
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r1, #5
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224BB96
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224BB96
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224BB96
    // ldr r0, _0224BB9C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _0224BB5A
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _0224BB96
    // ldr r0, _0224BBA0 ; =0x000005DD
    // bl PlaySE
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224BB96
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0xd
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r1, #2
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224BB96
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0224BB96
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0224BB9C: .word gSystem
    // _0224BBA0: .word 0x000005DD
    // TODO: decompile
}


void AccessoryPortrait_Exit(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // bl ov41_0224B57C
    // add r0, r4, #0
    // bl ov41_0224BD8C
    // add r0, r4, #0
    // bl ov41_0224BE34
    // add r4, #0x14
    // add r0, r4, #0
    // bl ov41_02246698
    // bl ov41_02246150
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #0xd
    // bl Heap_Destroy
    // mov r0, #0xe
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov41_0224BBF0(void) {
    ov41_0224B5C8(*((u32*)(r0 + 0x10)));
    ov41_022466B8(r4);
}


void ov41_0224BC04(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x40
    // str r0, [sp]
    // mov r0, #0xe
    // str r0, [sp, #4]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0x7e
    // mov r2, #0
    // mov r3, #0x60
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r2, [r5, #0x54]
    // mov r1, #0x7d
    // mov r3, #1
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #0x1a
    // mov r1, #0x80
    // mov r2, #0
    // add r3, sp, #0x10
    // bl GfGfxLoader_GetScrnData
    // ldr r2, [sp, #0x10]
    // mov r3, #0
    // str r3, [sp]
    // add r4, r0, #0
    // ldrh r0, [r2]
    // mov r1, #1
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldrh r0, [r2, #2]
    // add r2, #0xc
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x54]
    // bl LoadRectToBgTilemapRect
    // ldr r1, [sp, #0x10]
    // mov r2, #0
    // ldrh r0, [r1]
    // add r3, r2, #0
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldrh r0, [r1, #2]
    // mov r1, #1
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x54]
    // bl BgTilemapRectChangePalette
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, [r5, #0x54]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x14
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov41_0224BCA4(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp]
    // mov r0, #0xe
    // str r0, [sp, #4]
    // mov r0, #0xef
    // mov r2, #4
    // add r3, r1, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x54]
    // mov r0, #0xef
    // mov r1, #9
    // mov r3, #4
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #0x54]
    // mov r0, #0xef
    // mov r1, #1
    // mov r3, #4
    // bl GfGfxLoader_LoadCharData
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224BCF0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // mov r1, #0x65
    // str r0, [sp, #4]
    // lsl r1, r1, #2
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // add r0, #0x14
    // mov r2, #0xe9
    // mov r3, #0
    // bl ov41_022462E4
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // mov r1, #0x65
    // str r0, [sp, #8]
    // lsl r1, r1, #2
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // add r0, #0x14
    // mov r2, #0xea
    // mov r3, #0
    // bl ov41_02246304
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // mov r1, #0x65
    // str r0, [sp]
    // lsl r1, r1, #2
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // add r0, #0x14
    // mov r2, #0xe8
    // mov r3, #0
    // bl ov41_02246328
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // mov r1, #0x65
    // str r0, [sp]
    // lsl r1, r1, #2
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // add r0, #0x14
    // mov r2, #0xe7
    // mov r3, #0
    // bl ov41_02246344
    // mov r0, #0x64
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0xfa
    // add r0, #0x14
    // lsl r1, r1, #2
    // mov r2, #0
    // mov r3, #0x90
    // bl ov41_02246280
    // mov r1, #0x66
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl Sprite_SetPriority
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov41_0224BD8C(void) {
    // push {r4, lr}
    // mov r1, #0xfa
    // add r4, r0, #0
    // add r0, #0x14
    // lsl r1, r1, #2
    // bl ov41_02246360
    // add r0, r4, #0
    // mov r1, #0xfa
    // add r0, #0x14
    // lsl r1, r1, #2
    // bl ov41_02246374
    // add r0, r4, #0
    // mov r1, #0xfa
    // add r0, #0x14
    // lsl r1, r1, #2
    // bl ov41_02246388
    // add r0, r4, #0
    // mov r1, #0xfa
    // add r0, #0x14
    // lsl r1, r1, #2
    // bl ov41_0224639C
    // mov r0, #0x66
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224BDCC(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r0, #0xe
    // mov r1, #1
    // bl AllocWindows
    // mov r1, #0x67
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x12
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #6
    // str r0, [sp, #8]
    // mov r0, #5
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0x54]
    // ldr r1, [r4, r1]
    // mov r2, #3
    // mov r3, #0
    // bl AddWindowParameterized
    // mov r0, #0
    // mov r1, #0xa0
    // mov r2, #0xe
    // bl LoadFontPal0
    // mov r0, #3
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #0
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #1
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r1, #3
    // ldr r0, [r4, #0x54]
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add sp, #0x14
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov41_0224BE34(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ClearWindowTilemapAndCopyToVram
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl RemoveWindow
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl WindowArray_Delete
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224BE5C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // bl ov41_0224BE80
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl CopyWindowToVram
    // pop {r4, pc}
    // TODO: decompile
}


void ov41_0224BE80(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xd7
    // mov r3, #0xd
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x10]
    // cmp r0, #0
    // bne _0224BE9C
    // bl GF_AssertFail
    // mov r0, #0xd
    // bl MessageFormat_New
    // add r6, r0, #0
    // mov r0, #0x66
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #5
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #3
    // lsl r0, r0, #0x10
    // str r0, [sp, #0x14]
    // mov r0, #9
    // lsl r0, r0, #0x10
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // mov r0, #0x66
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, sp, #0x14
    // bl Sprite_SetMatrix
    // mov r0, #0xc
    // mov r1, #0xd
    // bl String_New
    // add r7, r0, #0
    // ldr r0, [r5]
    // add r1, r7, #0
    // bl sub_0202BE60
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r4, r0, #0
    // mov r0, #7
    // str r0, [sp]
    // mov r1, #0
    // lsr r3, r4, #0x1f
    // add r3, r4, r3
    // asr r4, r3, #1
    // mov r3, #0x80
    // ldr r0, _0224BF90 ; =0x00010200
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x67
    // str r1, [sp, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r7, #0
    // sub r3, r3, r4
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [r5]
    // bl sub_0202BE98
    // add r2, r0, #0
    // add r0, r6, #0
    // mov r1, #0
    // bl BufferECWord
    // mov r0, #0xc8
    // mov r1, #0xd
    // bl String_New
    // add r4, r0, #0
    // ldr r0, [sp, #0x10]
    // mov r1, #0x2d
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r3, r0, #0
    // mov r0, #0x1b
    // str r0, [sp]
    // mov r1, #0
    // ldr r0, _0224BF90 ; =0x00010200
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x67
    // str r1, [sp, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // lsr r5, r3, #0x1f
    // add r5, r3, r5
    // asr r5, r5, #1
    // mov r3, #0x80
    // add r2, r4, #0
    // sub r3, r3, r5
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x10]
    // bl DestroyMsgData
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224BF90: .word 0x00010200
    // TODO: decompile
}

