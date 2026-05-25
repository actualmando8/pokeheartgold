/* Decompiled from asm/overlay_02_02248728.s */
#include "global.h"

void ov02_02248728(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r2, #0
    // ldr r0, [sp, #0x1c]
    // add r7, r3, #0
    // strb r6, [r5]
    // ldr r4, [sp, #0x18]
    // strb r7, [r5, #1]
    // strb r4, [r5, #2]
    // str r0, [sp, #0x1c]
    // strb r0, [r5, #3]
    // ldr r0, [sp, #0x20]
    // mov r2, #4
    // strb r0, [r5, #4]
    // ldr r0, [sp, #0x24]
    // strb r0, [r5, #5]
    // ldr r0, [sp, #0x28]
    // strb r0, [r5, #6]
    // ldr r0, [sp, #0x2c]
    // strb r0, [r5, #7]
    // add r0, r1, #0
    // add r1, r5, #0
    // add r1, #0xc
    // bl G2dRenderer_Init
    // str r0, [r5, #8]
    // add r0, r5, #0
    // mov r2, #2
    // add r0, #0xc
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // add r0, r6, #0
    // mov r1, #0
    // mov r2, #4
    // bl Create2DGfxResObjMan
    // mov r1, #0x4d
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r7, #0
    // mov r1, #1
    // mov r2, #4
    // bl Create2DGfxResObjMan
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #4
    // bl Create2DGfxResObjMan
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [sp, #0x1c]
    // mov r1, #3
    // mov r2, #4
    // bl Create2DGfxResObjMan
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r0, #4
    // lsl r1, r6, #3
    // bl ov02_0224B690
    // mov r1, #0x51
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #4
    // lsl r1, r7, #3
    // bl ov02_0224B690
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #4
    // lsl r1, r4, #3
    // bl ov02_0224B690
    // mov r1, #0x53
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r1, [sp, #0x1c]
    // mov r0, #4
    // lsl r1, r1, #3
    // bl ov02_0224B690
    // mov r1, #0x15
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r1, #0
    // cmp r6, #0
    // ble _02248804
    // ble _02248804
    // ldr r0, [sp, #0x20]
    // add r2, r1, #0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // mov r3, #0x51
    // lsl r3, r3, #2
    // ldr r3, [r5, r3]
    // add r1, r1, #1
    // strh r0, [r3, r2]
    // add r2, #8
    // cmp r1, r6
    // blt _022487F4
    // mov r3, #0
    // cmp r7, #0
    // ble _02248824
    // ble _02248824
    // ldr r0, [sp, #0x24]
    // mov r6, #0x52
    // lsl r0, r0, #0x10
    // add r2, r3, #0
    // asr r1, r0, #0x10
    // lsl r6, r6, #2
    // ldr r0, [r5, r6]
    // add r3, r3, #1
    // strh r1, [r0, r2]
    // add r2, #8
    // cmp r3, r7
    // blt _02248818
    // mov r1, #0
    // cmp r4, #0
    // ble _02248844
    // ble _02248844
    // ldr r2, [sp, #0x28]
    // add r0, r1, #0
    // lsl r2, r2, #0x10
    // asr r6, r2, #0x10
    // mov r2, #0x53
    // lsl r2, r2, #2
    // ldr r3, [r5, r2]
    // add r1, r1, #1
    // strh r6, [r3, r0]
    // add r0, #8
    // cmp r1, r4
    // blt _02248838
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // cmp r0, #0
    // ble _02248868
    // ble _02248868
    // ldr r2, [sp, #0x2c]
    // mov r3, #0x15
    // lsl r2, r2, #0x10
    // add r0, r1, #0
    // asr r4, r2, #0x10
    // lsl r3, r3, #4
    // ldr r2, [r5, r3]
    // add r1, r1, #1
    // strh r4, [r2, r0]
    // ldr r2, [sp, #0x1c]
    // add r0, #8
    // cmp r1, r2
    // blt _0224885A
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224886C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrb r0, [r5]
    // mov r6, #0
    // cmp r0, #0
    // ble _0224889C
    // add r4, r6, #0
    // mov r7, #4
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // ldrsb r2, [r5, r7]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    // cmp r2, r1
    // beq _02248892
    // ldr r0, [r0, #4]
    // bl sub_0200AEB0
    // ldrb r0, [r5]
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, r0
    // blt _0224887C
    // ldrb r0, [r5, #1]
    // mov r6, #0
    // cmp r0, #0
    // ble _022488C8
    // add r4, r6, #0
    // mov r7, #5
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // ldrsb r2, [r5, r7]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    // cmp r2, r1
    // beq _022488BE
    // ldr r0, [r0, #4]
    // bl sub_0200B0A8
    // ldrb r0, [r5, #1]
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, r0
    // blt _022488A8
    // ldrb r0, [r5, #2]
    // mov r6, #0
    // cmp r0, #0
    // ble _022488F4
    // add r4, r6, #0
    // mov r7, #6
    // mov r0, #0x53
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // ldrsb r2, [r5, r7]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    // cmp r2, r1
    // beq _022488EA
    // ldr r0, [r0, #4]
    // bl sub_0200A740
    // ldrb r0, [r5, #2]
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, r0
    // blt _022488D4
    // ldrb r0, [r5, #3]
    // mov r6, #0
    // cmp r0, #0
    // ble _02248920
    // add r4, r6, #0
    // mov r7, #7
    // mov r0, #0x15
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // ldrsb r2, [r5, r7]
    // add r0, r1, r4
    // ldrsh r1, [r1, r4]
    // cmp r2, r1
    // beq _02248916
    // ldr r0, [r0, #4]
    // bl sub_0200A740
    // ldrb r0, [r5, #3]
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, r0
    // blt _02248900
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Destroy2DGfxResObjMan
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Destroy2DGfxResObjMan
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Destroy2DGfxResObjMan
    // mov r0, #5
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // bl Destroy2DGfxResObjMan
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Heap_Free
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Heap_Free
    // mov r0, #0x53
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Heap_Free
    // mov r0, #0x15
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl Heap_Free
    // ldr r0, [r5, #8]
    // bl SpriteList_DeleteAllSprites
    // ldr r0, [r5, #8]
    // bl SpriteList_Delete
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02248980(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // ldrb r5, [r6]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0xc]
    // add r7, r3, #0
    // mov r2, #0
    // cmp r5, #0
    // ble _022489E6
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r3, [r6, r0]
    // mov r0, #4
    // ldrsb r4, [r6, r0]
    // mov ip, r3
    // add r0, r2, #0
    // ldrsh r1, [r3, r0]
    // cmp r4, r1
    // bne _022489DE
    // lsl r4, r2, #3
    // mov r0, ip
    // strh r7, [r0, r4]
    // mov r0, #0x51
    // lsl r0, r0, #2
    // ldr r1, [r6, r0]
    // mov r3, #0
    // add r1, r1, r4
    // strh r3, [r1, #2]
    // str r7, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // sub r0, #0x10
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // bl AddCharResObjFromOpenNarc
    // mov r1, #0x51
    // lsl r1, r1, #2
    // ldr r1, [r6, r1]
    // add sp, #0x14
    // add r1, r1, r4
    // str r0, [r1, #4]
    // pop {r4, r5, r6, r7, pc}
    // add r2, r2, #1
    // add r3, #8
    // cmp r2, r5
    // blt _022489A2
    // bl GF_AssertFail
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_022489F0(void) {
    // push {r4, r5, r6, lr}
    // ldrb r3, [r0]
    // mov r2, #0
    // cmp r3, #0
    // ble _02248A1E
    // mov r4, #0x51
    // lsl r4, r4, #2
    // ldr r0, [r0, r4]
    // add r4, r2, #0
    // add r6, r0, #0
    // ldrsh r5, [r6, r4]
    // cmp r1, r5
    // bne _02248A16
    // lsl r1, r2, #3
    // add r0, r0, r1
    // ldr r0, [r0, #4]
    // bl sub_0200ADA4
    // pop {r4, r5, r6, pc}
    // add r2, r2, #1
    // add r6, #8
    // cmp r2, r3
    // blt _02248A04
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_02248A24(void) {
    // push {r4, r5, r6, lr}
    // ldrb r3, [r0]
    // mov r2, #0
    // cmp r3, #0
    // ble _02248A52
    // mov r4, #0x51
    // lsl r4, r4, #2
    // ldr r0, [r0, r4]
    // add r4, r2, #0
    // add r6, r0, #0
    // ldrsh r5, [r6, r4]
    // cmp r1, r5
    // bne _02248A4A
    // lsl r1, r2, #3
    // add r0, r0, r1
    // ldr r0, [r0, #4]
    // bl sub_0200A740
    // pop {r4, r5, r6, pc}
    // add r2, r2, #1
    // add r6, #8
    // cmp r2, r3
    // blt _02248A38
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_02248A58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r0, #0
    // ldrb r5, [r6]
    // str r2, [sp, #0x14]
    // str r1, [sp, #0x10]
    // add r7, r3, #0
    // mov r2, #0
    // cmp r5, #0
    // ble _02248AC0
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r3, [r6, r0]
    // mov r0, #5
    // ldrsb r4, [r6, r0]
    // mov ip, r3
    // add r0, r2, #0
    // ldrsh r1, [r3, r0]
    // cmp r4, r1
    // bne _02248AB8
    // lsl r4, r2, #3
    // mov r0, ip
    // strh r7, [r0, r4]
    // mov r0, #0x52
    // lsl r0, r0, #2
    // ldr r1, [r6, r0]
    // mov r3, #0
    // add r1, r1, r4
    // strh r3, [r1, #2]
    // str r7, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r1, #4
    // str r1, [sp, #0xc]
    // sub r0, #0x10
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x14]
    // bl AddPlttResObjFromOpenNarc
    // mov r1, #0x52
    // lsl r1, r1, #2
    // ldr r1, [r6, r1]
    // add sp, #0x18
    // add r1, r1, r4
    // str r0, [r1, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r2, r2, #1
    // add r3, #8
    // cmp r2, r5
    // blt _02248A7A
    // bl GF_AssertFail
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02248AC8(void) {
    // push {r4, r5, r6, lr}
    // ldrb r3, [r0, #1]
    // mov r2, #0
    // cmp r3, #0
    // ble _02248AF6
    // mov r4, #0x52
    // lsl r4, r4, #2
    // ldr r0, [r0, r4]
    // add r4, r2, #0
    // add r6, r0, #0
    // ldrsh r5, [r6, r4]
    // cmp r1, r5
    // bne _02248AEE
    // lsl r1, r2, #3
    // add r0, r0, r1
    // ldr r0, [r0, #4]
    // bl sub_0200B00C
    // pop {r4, r5, r6, pc}
    // add r2, r2, #1
    // add r6, #8
    // cmp r2, r3
    // blt _02248ADC
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_02248AFC(void) {
    // push {r4, r5, r6, lr}
    // ldrb r3, [r0, #1]
    // mov r2, #0
    // cmp r3, #0
    // ble _02248B2A
    // mov r4, #0x52
    // lsl r4, r4, #2
    // ldr r0, [r0, r4]
    // add r4, r2, #0
    // add r6, r0, #0
    // ldrsh r5, [r6, r4]
    // cmp r1, r5
    // bne _02248B22
    // lsl r1, r2, #3
    // add r0, r0, r1
    // ldr r0, [r0, #4]
    // bl sub_0200A740
    // pop {r4, r5, r6, pc}
    // add r2, r2, #1
    // add r6, #8
    // cmp r2, r3
    // blt _02248B10
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_02248B30(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // ldrb r5, [r6]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0xc]
    // add r7, r3, #0
    // mov r2, #0
    // cmp r5, #0
    // ble _02248B96
    // mov r0, #0x53
    // lsl r0, r0, #2
    // ldr r3, [r6, r0]
    // mov r0, #6
    // ldrsb r4, [r6, r0]
    // mov ip, r3
    // add r0, r2, #0
    // ldrsh r1, [r3, r0]
    // cmp r4, r1
    // bne _02248B8E
    // lsl r4, r2, #3
    // mov r0, ip
    // strh r7, [r0, r4]
    // mov r0, #0x53
    // lsl r0, r0, #2
    // ldr r1, [r6, r0]
    // mov r3, #0
    // add r1, r1, r4
    // strh r3, [r1, #2]
    // str r7, [sp]
    // mov r1, #2
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // sub r0, #0x10
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x53
    // lsl r1, r1, #2
    // ldr r1, [r6, r1]
    // add sp, #0x14
    // add r1, r1, r4
    // str r0, [r1, #4]
    // pop {r4, r5, r6, r7, pc}
    // add r2, r2, #1
    // add r3, #8
    // cmp r2, r5
    // blt _02248B52
    // bl GF_AssertFail
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02248BA0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // ldrb r5, [r6]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0xc]
    // add r7, r3, #0
    // mov r2, #0
    // cmp r5, #0
    // ble _02248C06
    // mov r0, #0x15
    // lsl r0, r0, #4
    // ldr r3, [r6, r0]
    // mov r0, #7
    // ldrsb r4, [r6, r0]
    // mov ip, r3
    // add r0, r2, #0
    // ldrsh r1, [r3, r0]
    // cmp r4, r1
    // bne _02248BFE
    // lsl r4, r2, #3
    // mov r0, ip
    // strh r7, [r0, r4]
    // mov r0, #0x15
    // lsl r0, r0, #4
    // ldr r1, [r6, r0]
    // mov r3, #0
    // add r1, r1, r4
    // strh r3, [r1, #2]
    // str r7, [sp]
    // mov r1, #3
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // sub r0, #0x10
    // ldr r0, [r6, r0]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x15
    // lsl r1, r1, #4
    // ldr r1, [r6, r1]
    // add sp, #0x14
    // add r1, r1, r4
    // str r0, [r1, #4]
    // pop {r4, r5, r6, r7, pc}
    // add r2, r2, #1
    // add r3, #8
    // cmp r2, r5
    // blt _02248BC2
    // bl GF_AssertFail
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_02248C10(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x70
    // add r5, r0, #0
    // add r4, r1, #0
    // add r1, r2, #0
    // mov r0, #7
    // add r2, r3, #0
    // ldrsb r3, [r5, r0]
    // ldr r6, [sp, #0x84]
    // cmp r6, r3
    // bne _02248C2A
    // sub r0, #8
    // str r0, [sp, #0x84]
    // ldr r0, [sp, #0x84]
    // mov r3, #0
    // str r0, [sp]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x88]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r6, [r5, r0]
    // str r6, [sp, #0x14]
    // add r6, r0, #4
    // ldr r6, [r5, r6]
    // str r6, [sp, #0x18]
    // add r6, r0, #0
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
    // bl CreateSpriteResourcesHeader
    // ldr r0, [r5, #8]
    // add r2, sp, #0x34
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x30]
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r2]
    // ldr r0, [sp, #0x8c]
    // str r0, [sp, #0x40]
    // mov r0, #1
    // str r0, [sp, #0x44]
    // mov r0, #4
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    // bl Sprite_Create
    // add r4, r0, #0
    // bne _02248C92
    // bl GF_AssertFail
    // add r0, r4, #0
    // add sp, #0x70
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_02248C98(void) {
    Sprite_GetMatrixPtr();
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
    // push {r3, r4, lr}
    // sub sp, #0x1c
    // mov r3, #0
    // add r2, sp, #0x10
    // str r3, [r2]
    // str r3, [r2, #4]
    // str r3, [r2, #8]
    // cmp r1, #1
    // bne _02248D2C
    // mov r3, #1
    // mov r2, #2
    // str r2, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #0x83
    // str r1, [sp, #0xc]
    // add r1, sp, #0x10
    // bl ov02_02248C10
    // add r4, r0, #0
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #6
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r4, #0
    // add sp, #0x1c
    // pop {r3, r4, pc}
    // TODO: decompile
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
    sub_02068D74();
}


void ov02_02248D98(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl sub_02068D98
    // add r2, r4, #0
    // add r3, r0, #0
    // add r2, #0x58
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4, #0x64]
    // bl ov02_02248CAC
    // str r0, [r4, #0x68]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_02248DBC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_02068D74
    // add r4, r0, #0
    // ldr r0, [r4, #0x6c]
    // cmp r0, #0
    // beq _02248DD0
    // bl sub_02068B48
    // ldr r0, [r4, #0x70]
    // cmp r0, #0
    // beq _02248DDA
    // bl ov01_021FCD78
    // add r0, r5, #0
    // bl sub_02068B48
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_02248DE4(void) {
    Sprite_Delete();
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
    Sprite_SetDrawFlag();
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
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r1, [r5, #0x48]
    // ldr r0, [r5, #0x4c]
    // ldr r6, [r5, #0x68]
    // ldr r4, [r5, #0x60]
    // sub r0, r1, r0
    // str r0, [r5, #0x48]
    // bpl _02248FA0
    // mov r0, #0
    // str r0, [r5, #0x48]
    // mov r0, #2
    // ldr r1, [r5, #0x4c]
    // lsl r0, r0, #0xa
    // cmp r1, r0
    // ble _02248FB2
    // mov r0, #7
    // lsl r0, r0, #0xa
    // sub r0, r1, r0
    // str r0, [r5, #0x4c]
    // mov r0, #1
    // ldr r1, [r5, #0x4c]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bge _02248FBE
    // str r0, [r5, #0x4c]
    // mov r0, #0x2d
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
    // cmp r0, #0x5a
    // bge _02249006
    // mov r0, #1
    // lsl r0, r0, #0xe
    // add r0, r1, r0
    // str r0, [r5, #0x40]
    // ldr r1, [r5, #0x2c]
    // ldr r0, [r5, #0x50]
    // sub r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [r5, #0x2c]
    // cmp r1, r0
    // bge _02249018
    // str r0, [r5, #0x2c]
    // ldr r1, [r5, #0x30]
    // ldr r0, [r5, #0x50]
    // sub r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [r5, #0x30]
    // cmp r1, r0
    // bge _0224902A
    // str r0, [r5, #0x30]
    // add r1, r5, #0
    // add r0, r6, #0
    // add r1, #0x2c
    // bl Sprite_SetAffineScale
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x2c
    // bl Sprite_SetAffineScale
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0x14]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #0x18]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // mov r0, #0x12
    // ldr r1, [sp, #4]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r0, [r5, #0x48]
    // cmp r0, #0
    // bne _0224907A
    // mov r0, #0
    // str r0, [r5, #4]
    // ldrb r0, [r5, #1]
    // add r0, r0, #1
    // strb r0, [r5, #1]
    // b _02249080
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_02249088(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x6c]
    // bl ov02_0224B314
    // ldr r0, [r4, #0x70]
    // mov r1, #2
    // mov r2, #0
    // mov r3, #0xc
    // bl ov01_021FCD8C
    // mov r0, #1
    // lsl r0, r0, #0xa
    // str r0, [r4, #0x50]
    // lsl r0, r0, #9
    // str r0, [r4, #0x40]
    // mov r0, #0
    // str r0, [r4, #0x48]
    // mov r0, #6
    // lsl r0, r0, #0xa
    // str r0, [r4, #0x4c]
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_022490BC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r1, [r5, #0x48]
    // ldr r0, [r5, #0x4c]
    // ldr r4, [r5, #0x68]
    // add r0, r1, r0
    // str r0, [r5, #0x48]
    // mov r0, #1
    // ldr r1, [r5, #0x4c]
    // lsl r0, r0, #0xc
    // add r2, r1, r0
    // lsl r1, r0, #4
    // str r2, [r5, #0x4c]
    // cmp r2, r1
    // ble _022490E0
    // lsl r0, r0, #4
    // str r0, [r5, #0x4c]
    // ldr r1, [r5, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r2, [r5, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r5, #0x14]
    // mov r0, #0x80
    // bl GF_SinDeg
    // ldr r2, [r5, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r5, #0x18]
    // mov r0, #0xa
    // ldr r1, [r5, #0x40]
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bge _02249124
    // mov r0, #1
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r5, #0x40]
    // mov r0, #2
    // ldr r1, [r5, #0x38]
    // lsl r0, r0, #0xc
    // add r1, r1, r0
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // str r1, [r5, #0x38]
    // bl GF_DegreeToSinCosIdx
    // add r1, r0, #0
    // add r0, r4, #0
    // bl Sprite_SetAffineZRotation
    // ldr r1, [r5, #0x2c]
    // ldr r0, [r5, #0x50]
    // add r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [r5, #0x2c]
    // cmp r1, r0
    // ble _02249156
    // str r0, [r5, #0x2c]
    // ldr r1, [r5, #0x30]
    // ldr r0, [r5, #0x50]
    // add r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [r5, #0x30]
    // cmp r1, r0
    // ble _02249168
    // str r0, [r5, #0x30]
    // add r1, r5, #0
    // add r0, r4, #0
    // add r1, #0x2c
    // bl Sprite_SetAffineScale
    // ldr r1, [r5, #8]
    // ldr r0, [r5, #0x14]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #0x18]
    // sub r0, r1, r0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r1, [sp, #4]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // mov r0, #0xf
    // mvn r0, r0
    // cmp r1, r0
    // bgt _022491A2
    // ldrb r0, [r5, #1]
    // add r0, r0, #1
    // strb r0, [r5, #1]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


u32 ov02_022491A8(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x68)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x60)), 1);
    *((u32*)(r4 + 4)) = 0;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    return 1;
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
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #8
    // bne _022493BA
    // ldr r0, [r4, #0x60]
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x5c]
    // mov r1, #0
    // bl ov02_02249444
    // ldr r0, [r4, #4]
    // cmp r0, #0xa
    // bne _022493C8
    // ldr r0, [r4, #0x60]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #4]
    // cmp r0, #0xf
    // ble _022493E6
    // ldr r0, [r4, #0x70]
    // bl ov01_021FCD6C
    // cmp r0, #1
    // bne _022493E6
    // mov r0, #0
    // str r0, [r4, #4]
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #2
    // strb r0, [r4, #2]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


u8 ov02_022493EC(void) {
    return 0;
}


void ov02_022493F0(void) {
    NARC_New();
}


void ov02_022493FC(void) {
    BeginNormalPaletteFade(0, 4, 6, 1);
}


void ov02_02249420(void) {
    BeginNormalPaletteFade(0, 1, 4, 6);
}


void ov02_02249444(void) {
    PlayerAvatar_GetMapObject(*((u32*)(r0 + 0x40)));
    MapObject_SetVisible(r4);
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
    SysTask_GetData();
}


void ov02_02249548(void) {
    SysTask_GetData();
    ov02_0224957C();
    SysTask_Destroy(r4);
}


void ov02_0224955C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0xbe
    // add r5, r0, #0
    // mov r0, #4
    // lsl r1, r1, #2
    // bl Heap_AllocAtEnd
    // mov r2, #0xbe
    // mov r1, #0
    // lsl r2, r2, #2
    // add r4, r0, #0
    // bl memset
    // str r5, [r4, #0x60]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224957C(void) {
    Heap_Free();
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
    ov02_02249EC0();
    ov02_02249CF0(r4);
    return 0;
}


u32 ov02_022495D0(void) {
    ov02_02249F6C();
    ov02_02249CF0(r4);
    return 0;
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
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r2, #0
    // str r2, [r4, #0x2c]
    // ldr r1, [r4, #0x44]
    // ldr r0, [r4, #0x54]
    // add r0, r1, r0
    // str r0, [r4, #0x44]
    // cmp r0, #0
    // bgt _022496B4
    // mov r0, #2
    // str r2, [r4, #0x44]
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x54]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, [r4, #0x50]
    // str r0, [sp]
    // ldr r1, [r4, #0x44]
    // ldr r2, [r4, #0x4c]
    // ldr r3, [r4, #0x48]
    // add r0, r4, #0
    // bl ov02_0224A69C
    // mov r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov02_022496D0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // ldr r1, [r4, #0x4c]
    // ldr r0, [r4, #0x54]
    // sub r0, r1, r0
    // str r0, [r4, #0x4c]
    // ldr r1, [r4, #0x50]
    // ldr r0, [r4, #0x54]
    // add r0, r1, r0
    // str r0, [r4, #0x50]
    // mov r0, #2
    // ldr r1, [r4, #0x54]
    // lsl r0, r0, #0xc
    // add r2, r1, r0
    // lsl r1, r0, #4
    // str r2, [r4, #0x54]
    // cmp r2, r1
    // ble _022496FE
    // lsl r0, r0, #4
    // str r0, [r4, #0x54]
    // mov r0, #0xe
    // ldr r1, [r4, #0x4c]
    // lsl r0, r0, #0xe
    // cmp r1, r0
    // bge _0224970A
    // str r0, [r4, #0x4c]
    // mov r0, #0x22
    // ldr r1, [r4, #0x50]
    // lsl r0, r0, #0xe
    // cmp r1, r0
    // ble _02249716
    // str r0, [r4, #0x50]
    // ldr r0, [r4, #0x50]
    // str r0, [sp]
    // ldr r1, [r4, #0x44]
    // ldr r2, [r4, #0x4c]
    // ldr r3, [r4, #0x48]
    // add r0, r4, #0
    // bl ov02_0224A69C
    // mov r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #0xe
    // ldr r1, [r4, #0x4c]
    // lsl r0, r0, #0xe
    // cmp r1, r0
    // bne _0224974E
    // mov r0, #0x22
    // ldr r1, [r4, #0x50]
    // lsl r0, r0, #0xe
    // cmp r1, r0
    // bne _0224974E
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov02_0224A450
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
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
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Sprite_GetMatrixPtr
    // add r3, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r1, [sp]
    // ldr r0, [r4, #0x58]
    // add r1, r1, r0
    // mov r0, #0xa
    // lsl r0, r0, #0x10
    // str r1, [sp]
    // cmp r1, r0
    // bgt _022497AC
    // mov r0, #3
    // lsl r0, r0, #0x12
    // str r0, [sp]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
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
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // ldr r1, [r4, #0x4c]
    // ldr r0, [r4, #0x54]
    // add r0, r1, r0
    // str r0, [r4, #0x4c]
    // ldr r1, [r4, #0x50]
    // ldr r0, [r4, #0x54]
    // sub r0, r1, r0
    // str r0, [r4, #0x50]
    // mov r0, #1
    // ldr r1, [r4, #0x54]
    // lsl r0, r0, #0xe
    // add r2, r1, r0
    // lsl r1, r0, #2
    // str r2, [r4, #0x54]
    // cmp r2, r1
    // ble _022498EA
    // lsl r0, r0, #2
    // str r0, [r4, #0x54]
    // mov r0, #0x5f
    // ldr r1, [r4, #0x4c]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // blt _022498F6
    // str r0, [r4, #0x4c]
    // mov r0, #0x61
    // ldr r1, [r4, #0x50]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bgt _02249902
    // str r0, [r4, #0x50]
    // ldr r0, [r4, #0x50]
    // str r0, [sp]
    // ldr r1, [r4, #0x44]
    // ldr r2, [r4, #0x4c]
    // ldr r3, [r4, #0x48]
    // add r0, r4, #0
    // bl ov02_0224A69C
    // mov r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #0x5f
    // ldr r1, [r4, #0x4c]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bne _0224993A
    // mov r0, #0x61
    // ldr r1, [r4, #0x50]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bne _0224993A
    // add r0, r4, #0
    // bl ov02_0224B768
    // mov r0, #0x11
    // str r0, [r4, #0x34]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov02_02249940(void) {
    ov02_02249FD4(0);
}


void ov02_02249954(void) {
    ov02_0224A028(0);
}


void ov02_02249968(void) {
    ov02_0224A6D0(0);
}


void ov02_0224997C(void) {
    ((u32*)r0)[4] = 1;
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
    ov02_0224A8D4(0);
}


u32 ov02_02249AD8(void) {
    ov02_0224A4D0();
    ov02_02249D18(r4);
    return 0;
}


void ov02_02249AF0(void) {
    ov02_02249D40(0, 1, 0x85);
}


u32 ov02_02249B10(void) {
    ov02_0224AB58();
    ov02_0224AC38(r4);
    ov02_0224A690(r4);
    ov02_0224B6B0(r4, 1);
    return 0;
}


void ov02_02249B38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov02_0224AB8C
    // cmp r0, #2
    // beq _02249B48
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_02249B60(void) {
    ov02_0224ADF0(1, 0);
}


void ov02_02249B80(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #8]
    // add r1, r1, #1
    // str r1, [r4, #8]
    // cmp r1, #0x14
    // blt _02249BA2
    // mov r1, #0
    // str r1, [r4, #8]
    // ldr r1, [r4]
    // add r1, r1, #1
    // str r1, [r4]
    // bl ov02_0224AB58
    // add r0, r4, #0
    // bl ov02_0224ADF0
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // ldr r1, [r4, #0x4c]
    // ldr r0, [r4, #0x54]
    // add r0, r1, r0
    // str r0, [r4, #0x4c]
    // ldr r1, [r4, #0x50]
    // ldr r0, [r4, #0x54]
    // sub r0, r1, r0
    // str r0, [r4, #0x50]
    // mov r0, #2
    // ldr r1, [r4, #0x54]
    // lsl r0, r0, #0xa
    // add r2, r1, r0
    // lsl r1, r0, #5
    // str r2, [r4, #0x54]
    // cmp r2, r1
    // ble _02249C06
    // lsl r0, r0, #5
    // str r0, [r4, #0x54]
    // mov r0, #0x5f
    // ldr r1, [r4, #0x4c]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // blt _02249C12
    // str r0, [r4, #0x4c]
    // mov r0, #0x61
    // ldr r1, [r4, #0x50]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bgt _02249C1E
    // str r0, [r4, #0x50]
    // ldr r0, [r4, #0x50]
    // str r0, [sp]
    // ldr r1, [r4, #0x44]
    // ldr r2, [r4, #0x4c]
    // ldr r3, [r4, #0x48]
    // add r0, r4, #0
    // bl ov02_0224A69C
    // mov r0, #1
    // str r0, [r4, #0x2c]
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // bne _02249C4A
    // add r0, r4, #0
    // bl ov02_0224AB8C
    // cmp r0, #4
    // bne _02249C4A
    // mov r0, #1
    // str r0, [r4, #0x18]
    // bl ov02_02249420
    // mov r0, #0x5f
    // ldr r1, [r4, #0x4c]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bne _02249C6C
    // mov r0, #0x61
    // ldr r1, [r4, #0x50]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bne _02249C6C
    // mov r0, #0x11
    // str r0, [r4, #0x34]
    // mov r0, #1
    // str r0, [r4, #0x14]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov02_02249C74(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x20]
    // cmp r1, #3
    // bne _02249C96
    // bl ov02_0224AB8C
    // cmp r0, #2
    // bne _02249C92
    // add r0, r4, #0
    // bl ov02_0224AB9C
    // ldr r0, [r4]
    // add r0, r0, #2
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // ldr r1, [r4, #0x18]
    // cmp r1, #0
    // bne _02249CAC
    // bl ov02_0224AB8C
    // cmp r0, #4
    // bne _02249CAC
    // mov r0, #1
    // str r0, [r4, #0x18]
    // bl ov02_02249420
    // add r0, r4, #0
    // bl ov02_0224AB8C
    // cmp r0, #2
    // beq _02249CBA
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // bne _02249CC8
    // mov r0, #1
    // str r0, [r4, #0x18]
    // bl ov02_02249420
    // add r0, r4, #0
    // bl ov02_0224AB9C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_02249CD8(void) {
    IsPaletteFadeFinished(0);
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
    SysTask_Destroy(0x22, 0x22, 0);
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
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // mov r0, #0x21
    // add r6, r1, #0
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // cmp r0, #1
    // bne _02249E56
    // mov r7, #0x6b
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _02249DFA
    // bl sub_0200A740
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _02249DF0
    // mov r7, #0x6f
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _02249E14
    // bl sub_0200A740
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #3
    // blt _02249E0A
    // mov r0, #0x86
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _02249E32
    // bl Heap_Free
    // mov r0, #0x86
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r6, r0]
    // mov r0, #0x87
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _02249E48
    // bl Heap_Free
    // mov r0, #0x87
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r6, r0]
    // mov r0, #0x85
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r6, r0]
    // ldr r0, [sp]
    // bl SysTask_Destroy
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x67
    // add r4, r1, #0
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl SpriteResourceCollection_Find
    // mov r1, #0x21
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // cmp r1, #1
    // bne _02249EBE
    // bl sub_0200A740
    // mov r0, #0x85
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    NARC_New();
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
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r7, #0x6b
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _0224A29E
    // bl sub_0200AEB0
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _0224A294
    // mov r7, #0x6f
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _0224A2B8
    // bl sub_0200B0A8
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #3
    // blt _0224A2AE
    // mov r7, #0x72
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _0224A2D2
    // bl sub_0200A740
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #4
    // blt _0224A2C8
    // mov r7, #0x76
    // mov r5, #0
    // add r4, r6, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _0224A2EC
    // bl sub_0200A740
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #2
    // blt _0224A2E2
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl Destroy2DGfxResObjMan
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // bl Destroy2DGfxResObjMan
    // mov r0, #0x69
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl Destroy2DGfxResObjMan
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl Destroy2DGfxResObjMan
    // ldr r0, [r6, #0x70]
    // bl SpriteList_DeleteAllSprites
    // ldr r0, [r6, #0x70]
    // bl SpriteList_Delete
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224A32C(void) {
    SpriteList_RenderAndAnimateSprites();
}


void ov02_0224A33C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x70
    // add r5, r0, #0
    // ldr r0, [sp, #0x84]
    // add r4, r1, #0
    // add r1, r2, #0
    // add r2, r3, #0
    // cmp r0, #4
    // bne _0224A384
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r6, #0x67
    // ldr r3, [sp, #0x88]
    // str r0, [sp, #0xc]
    // lsl r6, r6, #2
    // str r3, [sp, #0x10]
    // ldr r3, [r5, r6]
    // str r3, [sp, #0x14]
    // add r3, r6, #4
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
    // bl CreateSpriteResourcesHeader
    // b _0224A3BE
    // str r0, [sp]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0
    // ldr r0, [sp, #0x88]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r6, [r5, r0]
    // str r6, [sp, #0x14]
    // add r6, r0, #4
    // ldr r6, [r5, r6]
    // str r6, [sp, #0x18]
    // add r6, r0, #0
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
    // bl CreateSpriteResourcesHeader
    // ldr r0, [r5, #0x70]
    // add r2, sp, #0x34
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x4c
    // str r0, [sp, #0x30]
    // ldmia r4!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r4]
    // str r0, [r2]
    // ldr r0, [sp, #0x8c]
    // str r0, [sp, #0x40]
    // mov r0, #1
    // str r0, [sp, #0x44]
    // mov r0, #4
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    // bl Sprite_Create
    // add r4, r0, #0
    // bne _0224A3EA
    // bl GF_AssertFail
    // add r0, r4, #0
    // add sp, #0x70
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224A3F0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r5, #1
    // add r4, r3, #0
    // str r5, [sp]
    // mov r3, #0
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r2, [sp, #0xc]
    // add r2, r5, #0
    // bl ov02_0224A33C
    // add r1, r4, #0
    // add r5, r0, #0
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224A418(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldrh r2, [r0, #0xe]
    // mov r3, #0
    // cmp r2, #0
    // beq _0224A426
    // mov r3, #1
    // mov r2, #2
    // str r2, [sp]
    // mov r4, #1
    // str r4, [sp, #4]
    // mov r4, #0
    // str r4, [sp, #8]
    // mov r4, #0x83
    // str r4, [sp, #0xc]
    // bl ov02_0224A33C
    // add r4, r0, #0
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #6
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224A450(void) {
    // push {r4, lr}
    // mov r1, #1
    // add r4, r0, #0
    // bl Sprite_SetAnimActiveFlag
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl Sprite_SetAnimSpeed
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov02_0224A074
    // add r6, r0, #0
    // mov r0, #0x6b
    // mov r5, #0
    // add r2, r4, #0
    // lsl r0, r0, #2
    // ldr r1, [r2, r0]
    // cmp r1, #0
    // bne _0224A510
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r6, #0
    // mov r2, #0xb
    // bl AddCharResObjFromOpenNarc
    // lsl r1, r5, #2
    // add r2, r4, r1
    // mov r1, #0x6b
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // b _0224A518
    // add r5, r5, #1
    // add r2, r2, #4
    // cmp r5, #4
    // blt _0224A4E4
    // cmp r5, #4
    // blt _0224A520
    // bl GF_AssertFail
    // mov r0, #0x72
    // mov r5, #0
    // add r2, r4, #0
    // lsl r0, r0, #2
    // ldr r1, [r2, r0]
    // cmp r1, #0
    // bne _0224A554
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0x69
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r6, #0
    // mov r2, #0xc
    // bl AddCellOrAnimResObjFromOpenNarc
    // lsl r1, r5, #2
    // add r2, r4, r1
    // mov r1, #0x72
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // b _0224A55C
    // add r5, r5, #1
    // add r2, r2, #4
    // cmp r5, #4
    // blt _0224A528
    // cmp r5, #4
    // blt _0224A564
    // bl GF_AssertFail
    // add r0, r6, #0
    // bl NARC_Delete
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224A570(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // mov r2, #4
    // bl NARC_AllocAndReadWholeMember
    // add r1, r5, #0
    // add r4, r0, #0
    // bl NNS_G2dGetUnpackedPaletteData
    // ldr r1, [r5]
    // mov r0, #3
    // ldr r1, [r1, #0xc]
    // mov r2, #0x20
    // lsl r3, r0, #7
    // bl BG_LoadPlttData
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224A598(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // add r4, r3, #0
    // mov r2, #4
    // bl NARC_AllocAndReadWholeMember
    // add r1, r4, #0
    // add r6, r0, #0
    // bl NNS_G2dGetUnpackedCharacterData
    // ldr r3, [r4]
    // mov r0, #0
    // str r0, [sp]
    // ldr r2, [r3, #0x14]
    // ldr r3, [r3, #0x10]
    // add r0, r5, #0
    // mov r1, #3
    // bl BG_LoadCharTilesData
    // add r0, r6, #0
    // bl Heap_Free
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224A5D0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r2, #0
    // add r6, r1, #0
    // mov r2, #0
    // add r4, r3, #0
    // mov r1, #3
    // add r3, r2, #0
    // add r5, r0, #0
    // bl BgSetPosTextAndCommit
    // mov r1, #3
    // add r0, r5, #0
    // add r2, r1, #0
    // mov r3, #0
    // bl BgSetPosTextAndCommit
    // add r0, r6, #0
    // add r1, r7, #0
    // mov r2, #4
    // bl NARC_AllocAndReadWholeMember
    // add r1, r4, #0
    // add r6, r0, #0
    // bl NNS_G2dGetUnpackedScreenData
    // ldr r3, [r4]
    // add r0, r5, #0
    // add r2, r3, #0
    // ldr r3, [r3, #8]
    // mov r1, #3
    // add r2, #0xc
    // bl BG_LoadScreenTilemapData
    // mov r0, #0x20
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0xc
    // mov r2, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #3
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // add r0, r5, #0
    // mov r1, #3
    // bl BgCommitTilemapBufferToVram
    // add r0, r6, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224A63C(void) {
    BgClearTilemapBufferAndCommit();
}


void ov02_0224A648(void) {
    ov02_0224A6A8();
    *((u32*)(r4 + 0x2c)) = 0;
    ov02_0224A674(r4);
    ov02_0224A67C(r4);
    ov02_0224A66C(r4);
    *((u32*)(r4 + 0x2c)) = 1;
}


void ov02_0224A66C(void) {
    ((u32*)r0)[0x30] = 1;
}


void ov02_0224A674(void) {
    ((u32*)r0)[0x30] = 0;
}


void ov02_0224A67C(void) {
    ((u32*)r0)[0x34] = 0x18;
    ((u32*)r0)[0x38] = 0;
    ((u32*)r0)[0x3c] = 0x17;
    ((u32*)r0)[0x40] = 1;
}


void ov02_0224A690(void) {
    ((u32*)r0)[0x3c] = 0x17;
    ((u32*)r0)[0x40] = 1;
}


void ov02_0224A69C(void) {
    // str r1, [r0, #0x44]
    // str r3, [r0, #0x48]
    // ldr r1, [sp]
    // str r2, [r0, #0x4c]
    // str r1, [r0, #0x50]
    // bx lr
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // mov r1, #0x32
    // add r6, r0, #0
    // mov r0, #4
    // lsl r1, r1, #6
    // add r7, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _0224A7D4
    // bl GF_AssertFail
    // mov r1, #0
    // add r0, r6, #0
    // add r2, r1, #0
    // bl GetMonData
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldrh r0, [r5, #6]
    // add r2, r7, #0
    // add r3, r4, #0
    // str r0, [sp, #0xc]
    // ldrh r0, [r5]
    // ldrh r1, [r5, #2]
    // bl sub_02014540
    // add r0, r4, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    AddCharResObjFromOpenNarc(0x67, 1, 3, 4, 9, 0);
}


void ov02_0224A834(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // mov r1, #0x67
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #3
    // bl SpriteResourceCollection_Find
    // bl sub_0200AF00
    // mov r1, #1
    // bl NNS_G2dGetImageLocation
    // mov r1, #0x32
    // add r5, r0, #0
    // add r0, r4, #0
    // lsl r1, r1, #6
    // bl DC_FlushRange
    // mov r2, #0x32
    // add r0, r4, #0
    // add r1, r5, #0
    // lsl r2, r2, #6
    // bl GX_LoadOBJ
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224A868(void) {
    // push {r3, lr}
    // sub sp, #0x10
    // mov r2, #3
    // str r2, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // mov r2, #4
    // str r2, [sp, #0xc]
    // mov r2, #0x1a
    // lsl r2, r2, #4
    // ldr r0, [r0, r2]
    // mov r2, #6
    // mov r3, #0
    // bl AddPlttResObjFromOpenNarc
    // add sp, #0x10
    // pop {r3, pc}
    // TODO: decompile
}


void ov02_0224A88C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0x67
    // lsl r0, r0, #2
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl SpriteResourceCollection_Find
    // bl sub_0200AF00
    // add r6, r0, #0
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl SpriteResourceCollection_Find
    // add r1, r6, #0
    // bl SpriteTransfer_GetPaletteProxy
    // mov r1, #1
    // bl NNS_G2dGetImagePaletteLocation
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #0x20
    // bl DC_FlushRange
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0x20
    // bl GX_LoadOBJPltt
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224A8D4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl SpriteResourceCollection_Find
    // add r4, r0, #0
    // bl sub_0200AEB0
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl DestroySingle2DGfxResObj
    // mov r1, #0x6b
    // mov r0, #0
    // add r3, r5, #0
    // lsl r1, r1, #2
    // ldr r2, [r3, r1]
    // cmp r2, r4
    // bne _0224A912
    // lsl r1, r0, #2
    // add r2, r5, r1
    // mov r1, #0x6b
    // mov r3, #0
    // lsl r1, r1, #2
    // str r3, [r2, r1]
    // b _0224A91A
    // add r0, r0, #1
    // add r3, r3, #4
    // cmp r0, #4
    // blt _0224A8FE
    // cmp r0, #4
    // blt _0224A922
    // bl GF_AssertFail
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl SpriteResourceCollection_Find
    // add r4, r0, #0
    // bl sub_0200B0A8
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl DestroySingle2DGfxResObj
    // mov r1, #0x6f
    // mov r0, #0
    // add r3, r5, #0
    // lsl r1, r1, #2
    // ldr r2, [r3, r1]
    // cmp r2, r4
    // bne _0224A95C
    // lsl r1, r0, #2
    // add r2, r5, r1
    // mov r1, #0x6f
    // mov r3, #0
    // lsl r1, r1, #2
    // str r3, [r2, r1]
    // b _0224A964
    // add r0, r0, #1
    // add r3, r3, #4
    // cmp r0, #3
    // blt _0224A948
    // cmp r0, #3
    // blt _0224A96C
    // bl GF_AssertFail
    // mov r0, #0x69
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl SpriteResourceCollection_Find
    // add r4, r0, #0
    // bl sub_0200A740
    // mov r0, #0x69
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl DestroySingle2DGfxResObj
    // mov r1, #0x72
    // mov r0, #0
    // add r3, r5, #0
    // lsl r1, r1, #2
    // ldr r2, [r3, r1]
    // cmp r2, r4
    // bne _0224A9A6
    // lsl r1, r0, #2
    // add r2, r5, r1
    // mov r1, #0x72
    // mov r3, #0
    // lsl r1, r1, #2
    // str r3, [r2, r1]
    // b _0224A9AE
    // add r0, r0, #1
    // add r3, r3, #4
    // cmp r0, #4
    // blt _0224A992
    // cmp r0, #4
    // blt _0224A9B6
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224A9B8(void) {
    ov02_0224A33C(3, 0, 0x81);
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
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // bl sub_02068D98
    // add r2, r4, #0
    // add r3, r0, #0
    // add r2, #0xc
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r5, #0
    // bl sub_02068D90
    // str r0, [r4, #4]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r0, [r4, #0x14]
    // ldr r2, [r4, #0xc]
    // ldr r3, [r4, #4]
    // add r1, sp, #0
    // bl ov02_0224A3F0
    // mov r1, #0
    // str r0, [r4, #8]
    // bl Sprite_SetDrawFlag
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov02_0224AAC8(void) {
    Sprite_Delete();
}


void ov02_0224AAD4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r1, sp, #0
    // add r5, r0, #0
    // bl sub_02068DB8
    // ldr r1, [sp]
    // ldr r0, [r4, #0x18]
    // add r0, r1, r0
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0xb
    // str r0, [sp]
    // sub r1, r1, r2
    // mov r0, #0xb
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // ldr r0, [r4, #8]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0x10]
    // cmp r0, #1
    // bne _0224AB4E
    // ldr r3, [r4, #0x14]
    // ldr r0, [r3, #0x14]
    // cmp r0, #2
    // bne _0224AB42
    // ldr r2, [r3, #0x4c]
    // ldr r0, [r3, #0x50]
    // mov r3, #2
    // ldr r6, [sp, #4]
    // lsl r3, r3, #0xc
    // sub r5, r6, r3
    // mov r1, #0
    // cmp r5, r2
    // blt _0224AB38
    // cmp r5, r0
    // bgt _0224AB38
    // add r3, r6, r3
    // cmp r3, r2
    // blt _0224AB38
    // cmp r3, r0
    // bgt _0224AB38
    // mov r1, #1
    // ldr r0, [r4, #8]
    // bl Sprite_SetDrawFlag
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // cmp r0, #1
    // bne _0224AB4E
    // ldr r0, [r4, #8]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
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
    sub_02068D74();
}


void ov02_0224AB9C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_02068D74
    // add r5, r0, #0
    // ldr r0, [r5, #0x60]
    // cmp r0, #0
    // beq _0224ABB6
    // bl sub_02068B48
    // ldr r0, [r5, #0x64]
    // cmp r0, #0
    // beq _0224ABC0
    // bl ov01_021FCD78
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_02068B48
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


u32 ov02_0224ABCC(void) {
    sub_02068D98();
    *((u32*)(r4 + 0x5c)) = r0;
    sub_02068DB8(r5);
    ov02_0224A468(*((u32*)(r4 + 0x5c)), 0, 0);
    *((u32*)(r4 + 0x58)) = r0;
    return 1;
}


void ov02_0224ABF8(void) {
    Sprite_Delete();
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
    Sprite_SetDrawFlag();
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
    return 0;
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
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mov r0, #0x79
    // ldr r1, [r4, #0x5c]
    // lsl r0, r0, #2
    // ldr r5, [r1, r0]
    // mov r1, #3
    // add r0, r5, #0
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x5c]
    // mov r1, #1
    // bl ov02_0224B6B0
    // mov r0, #0x82
    // ldr r1, [r4, #0x5c]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl sub_0205F484
    // add r0, r5, #0
    // bl Sprite_GetMatrixPtr
    // ldr r5, [r0, #4]
    // ldr r0, [r4, #0x58]
    // bl Sprite_GetMatrixPtr
    // ldr r0, [r0, #4]
    // sub r0, r5, r0
    // str r0, [r4, #0x54]
    // ldr r0, [r4, #0x60]
    // bl ov02_0224B2C0
    // ldr r0, [r4, #0x64]
    // mov r1, #2
    // mov r2, #0
    // mov r3, #0xc
    // bl ov01_021FCD8C
    // mov r1, #1
    // lsl r1, r1, #8
    // str r1, [r4, #0x50]
    // lsl r0, r1, #0xb
    // str r0, [r4, #0x40]
    // mov r0, #0
    // str r0, [r4, #0x48]
    // lsl r0, r1, #3
    // str r0, [r4, #0x4c]
    // mov r0, #3
    // strb r0, [r4, #2]
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224B158(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r4, r0, #0
    // ldr r1, [r4, #0x48]
    // ldr r0, [r4, #0x4c]
    // ldr r6, [r4, #0x58]
    // add r0, r1, r0
    // str r0, [r4, #0x48]
    // mov r0, #1
    // ldr r1, [r4, #0x4c]
    // lsl r0, r0, #0xc
    // add r2, r1, r0
    // lsl r1, r0, #4
    // str r2, [r4, #0x4c]
    // cmp r2, r1
    // ble _0224B17C
    // lsl r0, r0, #4
    // str r0, [r4, #0x4c]
    // ldr r1, [r4, #0x40]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // lsl r0, r0, #4
    // lsr r0, r0, #0x10
    // bl GF_CosDeg
    // ldr r2, [r4, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r4, #0x14]
    // mov r0, #0x80
    // bl GF_SinDeg
    // ldr r2, [r4, #0x48]
    // asr r1, r2, #0xb
    // lsr r1, r1, #0x14
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // mul r0, r1
    // str r0, [r4, #0x18]
    // mov r0, #0x87
    // ldr r1, [r4, #0x40]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bge _0224B1C0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [r4, #0x40]
    // ldr r1, [r4, #0x2c]
    // ldr r0, [r4, #0x50]
    // add r1, r1, r0
    // mov r0, #2
    // lsl r0, r0, #0xc
    // str r1, [r4, #0x2c]
    // cmp r1, r0
    // ble _0224B1D2
    // str r0, [r4, #0x2c]
    // ldr r1, [r4, #0x30]
    // ldr r0, [r4, #0x50]
    // add r1, r1, r0
    // mov r0, #2
    // lsl r0, r0, #0xc
    // str r1, [r4, #0x30]
    // cmp r1, r0
    // ble _0224B1E4
    // str r0, [r4, #0x30]
    // ldr r1, [r4, #8]
    // ldr r0, [r4, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x18]
    // add r1, r1, r0
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // str r1, [sp, #0x1c]
    // cmp r0, #0xe6
    // blt _0224B20A
    // mov r0, #2
    // strb r0, [r4, #2]
    // ldrb r0, [r4, #1]
    // add r0, r0, #1
    // strb r0, [r4, #1]
    // mov r0, #0x79
    // ldr r1, [r4, #0x5c]
    // lsl r0, r0, #2
    // ldr r7, [r1, r0]
    // add r0, r7, #0
    // bl Sprite_GetScalePtr
    // add r2, sp, #0xc
    // add r3, sp, #0x18
    // add r5, r0, #0
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldmia r5!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r2]
    // mov r0, #1
    // ldr r1, [r4, #0x54]
    // lsl r0, r0, #0xc
    // sub r1, r1, r0
    // str r1, [r4, #0x54]
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // add r0, r7, #0
    // mov r1, ip
    // bl Sprite_SetMatrix
    // mov r0, #1
    // ldr r1, [sp]
    // lsl r0, r0, #8
    // add r2, r1, r0
    // lsl r1, r0, #5
    // str r2, [sp]
    // cmp r2, r1
    // ble _0224B25E
    // lsl r0, r0, #5
    // str r0, [sp]
    // mov r0, #1
    // ldr r1, [sp, #4]
    // lsl r0, r0, #8
    // add r2, r1, r0
    // lsl r1, r0, #5
    // str r2, [sp, #4]
    // cmp r2, r1
    // ble _0224B272
    // lsl r0, r0, #5
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, sp, #0
    // bl Sprite_SetAffineScale
    // add r4, #0x2c
    // add r0, r6, #0
    // add r1, r4, #0
    // bl Sprite_SetAffineScale
    // add r0, r6, #0
    // add r1, sp, #0x18
    // bl Sprite_SetMatrix
    // mov r0, #0
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


u8 ov02_0224B294(void) {
    return 0;
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
    sub_02068D74();
}


void ov02_0224B2CC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // bl sub_02068D74
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // str r0, [r4, #0xc]
    // str r0, [r4, #8]
    // str r0, [r4, #0x10]
    // str r0, [r4, #0x14]
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #0x20]
    // bl Sprite_GetMatrixPtr
    // add r6, r0, #0
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // add r1, r2, #0
    // str r0, [r3]
    // add r0, r5, #0
    // bl sub_02068DA8
    // ldr r0, [r4, #0x20]
    // mov r1, #5
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224B314(void) {
    sub_02068D74();
    *((u32*)(r0 + 4)) = 0;
    *((u32*)(r0 + 0xc)) = 0;
    *((u32*)(r0 + 8)) = 0;
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x18)) = 0;
    ov02_02248C98(*((u32*)(r0 + 0x20)));
    sub_02068DA8(r5);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x20)), 4);
}


void ov02_0224B350(void) {
    sub_02068D98(1);
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
    // push {r3, lr}
    // ldr r2, [r1]
    // cmp r2, #1
    // beq _0224B40A
    // cmp r2, #2
    // beq _0224B410
    // pop {r3, pc}
    // bl ov02_0224B364
    // pop {r3, pc}
    // bl ov02_0224B3B0
    // pop {r3, pc}
    // TODO: decompile
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
    SysTask_GetData();
}


void ov02_0224B448(void) {
    SysTask_GetData();
    Heap_Free();
    SysTask_Destroy(r4);
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
    ov02_02249444(0, 1);
}


void ov02_0224B4AC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // mov r0, #4
    // mov r1, #0x20
    // bl sub_020689C8
    // mov r1, #0x17
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r2, #2
    // str r2, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #0x20
    // add r3, r2, #0
    // str r2, [sp, #0x14]
    // bl ov02_02248728
    // bl ov02_022493F0
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #0xb
    // mov r3, #0
    // bl ov02_02248980
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #6
    // mov r3, #0
    // bl ov02_02248A58
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #0xc
    // mov r3, #0
    // bl ov02_02248B30
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #0
    // bl ov02_022489F0
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #0
    // bl ov02_02248AC8
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #0
    // bl ov02_02248A24
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #0
    // bl ov02_02248AFC
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // bne _0224B57C
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #0x11
    // mov r3, #2
    // bl ov02_02248980
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #0x12
    // mov r3, #2
    // bl ov02_02248B30
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #0x13
    // mov r3, #1
    // bl ov02_02248BA0
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #2
    // bl ov02_022489F0
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #2
    // bl ov02_02248A24
    // b _0224B5DC
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #0x14
    // mov r3, #2
    // bl ov02_02248980
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #7
    // mov r3, #1
    // bl ov02_02248A58
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #0x15
    // mov r3, #2
    // bl ov02_02248B30
    // add r0, r5, #0
    // add r0, #0x18
    // add r1, r4, #0
    // mov r2, #0x16
    // mov r3, #1
    // bl ov02_02248BA0
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #2
    // bl ov02_022489F0
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #1
    // bl ov02_02248AC8
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #2
    // bl ov02_02248A24
    // add r0, r5, #0
    // add r0, #0x18
    // mov r1, #1
    // bl ov02_02248AFC
    // add r0, r4, #0
    // bl NARC_Delete
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224B5F0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // add r0, #0x18
    // bl ov02_02248D18
    // mov r1, #0x5b
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r3, #0x17
    // lsl r3, r3, #4
    // ldr r1, [r4, r3]
    // sub r3, r3, #4
    // add r2, r4, #0
    // ldr r0, [r4, #0x14]
    // ldr r3, [r4, r3]
    // add r2, #0x18
    // bl ov02_02248D58
    // mov r1, #0x5d
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // bl ov02_02248E20
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #1
    // str r0, [r4, #0x10]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224B638(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x5d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov02_02248D8C
    // cmp r0, #2
    // beq _0224B64E
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0x5d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov02_02248DBC
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224B664(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x17
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_020689F8
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov02_0224886C
    // mov r0, #0
    // str r0, [r4, #0x10]
    // mov r1, #1
    // str r1, [r4, #4]
    // ldr r1, [r4]
    // add r1, r1, #1
    // str r1, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


u8 ov02_0224B68C(void) {
    return 0;
}


void ov02_0224B690(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // bne _0224B6A0
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r5, #0
    // bl memset
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224B6B0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r4, r1, #0
    // bl MapObject_UnpauseMovement
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl MapObject_SetVisible
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224B6D0(void) {
    sub_02068D98(1);
}


void ov02_0224B6E4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r0, [r4]
    // bl Sprite_GetMatrixPtr
    // ldr r1, [r4, #4]
    // ldr r0, [r0, #4]
    // ldr r5, [r1, #0x4c]
    // ldr r3, [r1, #0x50]
    // ldr r1, [r1, #0x1c]
    // cmp r1, #0
    // bne _0224B720
    // mov r1, #2
    // lsl r1, r1, #0xe
    // sub r2, r0, r1
    // cmp r2, r5
    // blt _0224B716
    // add r0, r0, r1
    // cmp r0, r3
    // bgt _0224B716
    // ldr r0, [r4]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    sub_02068B48(0x7d, 0x7d, 0);
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
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02068D98
    // ldr r1, [r0]
    // mov r6, #0x8a
    // str r1, [r4]
    // ldr r4, [r0]
    // lsl r6, r6, #2
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // add r0, r4, r6
    // add r0, #0x24
    // add r1, sp, #0
    // bl Field3dObject_SetPos
    // add r0, r4, r6
    // add r0, #0x24
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224B804(void) {
    // bx lr
    // TODO: decompile
}


void ov02_0224B808(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #4]
    // mov r6, #0x8a
    // lsl r6, r6, #2
    // ldr r4, [r5]
    // cmp r0, #3
    // bhi _0224B878
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224B824: ; jump table
    // mov r0, #1
    // str r0, [r5, #4]
    // pop {r4, r5, r6, pc}
    // add r0, r4, r6
    // add r0, #0x24
    // mov r1, #1
    // bl Field3dObject_SetActiveFlag
    // add r0, r4, r6
    // add r0, #0x9c
    // mov r1, #0
    // bl Field3dModelAnimation_FrameSet
    // add r0, r4, r6
    // add r0, #0xb0
    // mov r1, #0
    // bl Field3dModelAnimation_FrameSet
    // mov r0, #2
    // str r0, [r5, #4]
    // add r0, r4, r6
    // mov r1, #1
    // add r0, #0x9c
    // lsl r1, r1, #0xc
    // bl Field3dModelAnimation_FrameAdvanceAndCheck
    // add r0, r4, r6
    // mov r1, #1
    // add r0, #0xb0
    // lsl r1, r1, #0xc
    // bl Field3dModelAnimation_FrameAdvanceAndCheck
    // cmp r0, #0
    // beq _0224B878
    // mov r0, #1
    // str r0, [r5, #8]
    // mov r0, #3
    // str r0, [r5, #4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
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
    // push {r4, lr}
    // sub sp, #8
    // mov r1, #0x8a
    // lsl r1, r1, #2
    // add r4, r0, r1
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0x20
    // bl HeapExp_FndInitAllocator
    // mov r0, #0x67
    // mov r1, #0x83
    // mov r2, #4
    // bl AllocAtEndAndReadWholeNarcMemberByIdPair
    // str r0, [r4, #0x10]
    // add r0, r4, #0
    // ldr r1, [r4, #0x10]
    // add r0, #0x14
    // bl ov01_021FBD38
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x24
    // add r1, #0x14
    // bl Field3dObject_InitFromModel
    // mov r0, #4
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x9c
    // add r1, #0x14
    // mov r2, #0x67
    // mov r3, #0xa7
    // str r4, [sp, #4]
    // bl Field3dModelAnimation_LoadFromFilesystem
    // mov r0, #4
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0xb0
    // add r1, #0x14
    // mov r2, #0x67
    // mov r3, #0xa5
    // str r4, [sp, #4]
    // bl Field3dModelAnimation_LoadFromFilesystem
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x24
    // add r1, #0x9c
    // bl Field3dObject_AddAnimation
    // add r0, r4, #0
    // add r4, #0xb0
    // add r0, #0x24
    // add r1, r4, #0
    // bl Field3dObject_AddAnimation
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224B90C(void) {
    // push {r4, lr}
    // mov r1, #0x8a
    // lsl r1, r1, #2
    // add r4, r0, r1
    // add r0, r4, #0
    // add r0, #0x14
    // bl ov01_021FBDFC
    // ldr r0, [r4, #0x10]
    // bl ov01_021F1448
    // add r0, r4, #0
    // add r0, #0x9c
    // add r1, r4, #0
    // bl Field3dModelAnimation_Unload
    // add r0, r4, #0
    // add r0, #0xb0
    // add r1, r4, #0
    // bl Field3dModelAnimation_Unload
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224B938(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x83
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl MapObject_SetVisible
    // mov r0, #0x83
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl sub_0205F484
    // add r0, r4, #0
    // bl ov02_0224B784
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224B964(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_02068D74
    // ldr r0, [r0, #8]
    // cmp r0, #1
    // bne _0224B992
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_02068B48
    // add r0, r4, #0
    // bl ov02_0224B90C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_BattleExit_HandleRoamerAction(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, [r1, #8]
    // str r1, [sp]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // add r7, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Save_Roamers_Get
    // add r6, r0, #0
    // add r0, r7, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // add r4, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov02_0224BAA8
    // str r0, [sp, #8]
    // cmp r0, #0
    // beq _0224BA50
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl SpeciesToRoamerIdx
    // str r0, [sp, #4]
    // add r0, r7, #0
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // add r0, r7, #0
    // mov r1, #0xa0
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [sp]
    // ldr r0, [r0, #0x14]
    // cmp r0, #1
    // bne _0224BA14
    // cmp r4, #0
    // bne _0224BA14
    // add r0, sp, #8
    // bl RoamerMon_Init
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // ldr r1, [sp, #4]
    // mov r2, #2
    // bl sub_02066BE8
    // b _0224BA42
    // cmp r0, #4
    // bne _0224BA2E
    // add r0, sp, #8
    // bl RoamerMon_Init
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // ldr r1, [sp, #4]
    // mov r2, #1
    // bl sub_02066BE8
    // b _0224BA42
    // ldr r0, [sp, #8]
    // mov r1, #5
    // add r2, r4, #0
    // bl SetRoamerData
    // ldr r0, [sp, #8]
    // mov r1, #7
    // add r2, r7, #0
    // bl SetRoamerData
    // ldr r1, [r5, #0x20]
    // add r0, r6, #0
    // ldr r1, [r1]
    // bl ov02_RepelActiveRoamersFromMapNo
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // bl LCRandom
    // mov r1, #0x64
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, #0x1e
    // bhs _0224BA6C
    // ldr r1, [r5, #0x20]
    // add r0, r6, #0
    // ldr r1, [r1]
    // bl ov02_RepelActiveRoamersFromMapNo
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_RepelActiveRoamersFromMapNo(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r4, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetRoamerIsActiveByIndex
    // cmp r0, #0
    // beq _0224BA9C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl Roamer_GetLocation
    // bl GetRoamMapByLocationIdx
    // cmp r6, r0
    // bne _0224BA9C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl RoamerLocationUpdateRand
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _0224BA78
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224BAA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r4, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetRoamerIsActiveByIndex
    // cmp r0, #0
    // beq _0224BAD4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl Roamers_GetRoamMonStats
    // mov r1, #4
    // add r7, r0, #0
    // bl GetRoamerData
    // cmp r6, r0
    // bne _0224BAD4
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _0224BAB0
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    ov01_021E8E70();
}


void ov02_0224BFCC(void) {
    ov01_021E8E70();
}


void CreateFieldEscapeRopeTaskEnv(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #0x30
    // bl ov02_0224C660
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4, #0xc]
    // str r5, [r4, #0x24]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // str r0, [r4, #0x20]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetState
    // sub r0, r0, #1
    // cmp r0, #1
    // bhi _0224C006
    // mov r0, #0
    // str r0, [r4, #8]
    // b _0224C01A
    // add r0, r5, #0
    // bl FollowMon_IsActive
    // cmp r0, #0
    // beq _0224C016
    // mov r0, #1
    // str r0, [r4, #8]
    // b _0224C01A
    // mov r0, #0
    // str r0, [r4, #8]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
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
    Save_LocalFieldData_Get(*((u32*)(r1 + 0xc)));
    LocalFieldData_GetSpecialSpawnWarpPtr();
    sub_02053B04(r5, r0, *((u32*)(r4 + 0xc)));
    return 2;
}


void ov02_0224C1D8(void) {
    ov02_0224C660(r1, 0x30);
    *((u32*)(r0 + 0xc)) = r6;
    *((u32*)(r0 + 0x24)) = r5;
    PlayerAvatar_GetMapObject(*((u32*)(r5 + 0x40)));
    *((u32*)(r4 + 0x20)) = r0;
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
    // push {r4, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_IsFinish
    // cmp r0, #0
    // bne _0224C34A
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x1c]
    // bl ov01_021FCD6C
    // cmp r0, #0
    // bne _0224C358
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x1c]
    // bl ov01_021FCD78
    // ldr r0, [r4, #0x10]
    // bl EventObjectMovementMan_Delete
    // mov r0, #2
    // pop {r4, pc}
    // TODO: decompile
}


void FieldMoveTask_CreateDigEnvironment(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r0, r3, #0
    // mov r1, #0x30
    // add r7, r2, #0
    // bl ov02_0224C660
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [r4, #0xc]
    // str r5, [r4, #0x24]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // str r0, [r4, #0x20]
    // add r0, r5, #0
    // str r6, [r4, #0x28]
    // bl ov01_02206268
    // cmp r0, #0
    // beq _0224C3A4
    // add r0, r5, #0
    // bl ov01_022062CC
    // cmp r7, r0
    // bne _0224C3A4
    // mov r0, #1
    // str r0, [r4, #8]
    // b _0224C3A8
    // mov r0, #0
    // str r0, [r4, #8]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    PlayerAvatar_GetGender(*((u32*)(r1 + 0x40)));
    ov02_02249458(r5, 0, *((u32*)(r4 + 0x28)), r0);
    *((u32*)(r4 + 0x18)) = r0;
    return 0;
}


void ov02_0224C4D8(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // ldr r0, [r4, #0x18]
    // bl ov02_0224953C
    // cmp r0, #0
    // bne _0224C4EA
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r4, #0x18]
    // bl ov02_02249548
    // ldr r0, [r4, #0x24]
    // bl ov01_02205D68
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void FieldMoveTask_CreateTeleportEnvironment(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r0, r3, #0
    // mov r1, #0x30
    // add r7, r2, #0
    // bl ov02_0224C660
    // add r4, r0, #0
    // mov r0, #2
    // str r0, [r4, #0xc]
    // str r5, [r4, #0x24]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetMapObject
    // str r0, [r4, #0x20]
    // str r6, [r4, #0x28]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetState
    // sub r0, r0, #1
    // cmp r0, #1
    // bhi _0224C534
    // mov r0, #0
    // str r0, [r4, #8]
    // b _0224C552
    // add r0, r5, #0
    // bl ov01_02206268
    // cmp r0, #0
    // beq _0224C54E
    // add r0, r5, #0
    // bl ov01_022062CC
    // cmp r7, r0
    // bne _0224C54E
    // mov r0, #1
    // str r0, [r4, #8]
    // b _0224C552
    // mov r0, #0
    // str r0, [r4, #8]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // bne _0224C670
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r5, #0
    // bl memset
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224C680(void) {
    ov01_022060B8(0, 2, 1);
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
    Save_LocalFieldData_Get(*((u32*)(r1 + 0xc)));
    LocalFieldData_GetBlackoutSpawn();
    GetFlyWarpData();
    LocalFieldData_GetSpecialSpawnWarpPtr(r6);
    GetSpecialSpawnWarpData(r7, r0);
    sub_02053B04(r5, *((u32*)(r4 + 0xc)));
    return 2;
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
    Save_LocalFieldData_Get(*((u32*)(r1 + 0xc)));
    LocalFieldData_GetSpecialSpawnWarpPtr();
    sub_02053B04(r5, r0, *((u32*)(r4 + 0xc)));
    return 2;
}


void ov02_0224CA58(void) {
    // push {r4, r5, r6, r7}
    // add r3, r0, #0
    // add r0, r2, #0
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r2, #0
    // beq _0224CAB4
    // add r6, r3, r1
    // sub r7, r1, #1
    // sub r1, r6, #1
    // ldrb r2, [r1]
    // mov r1, #1
    // add r5, r7, #0
    // and r1, r2
    // lsl r1, r1, #0x18
    // lsr r4, r1, #0x18
    // cmp r7, #0
    // ble _0224CA9A
    // ldrb r1, [r3, r5]
    // add r2, r3, r5
    // sub r2, r2, #1
    // asr r1, r1, #1
    // strb r1, [r3, r5]
    // ldrb r2, [r2]
    // ldrb r1, [r3, r5]
    // lsl r2, r2, #0x1f
    // lsr r2, r2, #0x18
    // orr r1, r2
    // strb r1, [r3, r5]
    // sub r5, r5, #1
    // cmp r5, #0
    // bgt _0224CA7E
    // ldrb r1, [r3, r5]
    // asr r1, r1, #1
    // strb r1, [r3, r5]
    // ldrb r2, [r3, r5]
    // lsl r1, r4, #7
    // orr r1, r2
    // strb r1, [r3, r5]
    // add r1, r0, #0
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r1, #0
    // bne _0224CA6C
    // pop {r4, r5, r6, r7}
    // bx lr
    // TODO: decompile
}


void ov02_0224CAB8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r2, #0
    // str r1, [sp]
    // add r7, r3, #0
    // bl WallpaperPasswordBank_GetCount
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl WallpaperPasswordBank_GetIndexOfWord
    // add r1, sp, #4
    // strh r0, [r1, #4]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl WallpaperPasswordBank_GetIndexOfWord
    // add r1, sp, #4
    // strh r0, [r1, #6]
    // add r1, sp, #0x18
    // ldrh r1, [r1, #0x10]
    // add r0, r5, #0
    // bl WallpaperPasswordBank_GetIndexOfWord
    // add r1, sp, #4
    // strh r0, [r1, #8]
    // add r1, sp, #0x18
    // ldrh r1, [r1, #0x14]
    // add r0, r5, #0
    // bl WallpaperPasswordBank_GetIndexOfWord
    // add r1, sp, #4
    // mov r2, #0
    // strh r0, [r1, #0xa]
    // add r3, sp, #8
    // add r5, sp, #4
    // add r7, r2, #0
    // ldrsh r0, [r3, r7]
    // cmp r0, #0
    // bge _0224CB14
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r2, #0
    // ble _0224CB48
    // mov r6, #1
    // mvn r6, r6
    // ldrsh r6, [r3, r6]
    // cmp r0, r6
    // blt _0224CB34
    // sub r0, r0, r6
    // cmp r0, #0xff
    // ble _0224CB30
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // strb r0, [r5]
    // b _0224CB5A
    // sub r0, r6, r0
    // sub r0, r4, r0
    // cmp r0, #0xff
    // ble _0224CB44
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // strb r0, [r5]
    // b _0224CB5A
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // cmp r0, #0xff
    // ble _0224CB58
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // strb r0, [r1]
    // add r2, r2, #1
    // add r3, r3, #2
    // add r5, r5, #1
    // cmp r2, #4
    // blt _0224CB06
    // add r0, sp, #4
    // mov r1, #4
    // mov r2, #5
    // bl ov02_0224CA58
    // mov r2, #0
    // add r1, sp, #4
    // add r4, sp, #4
    // mov r3, #0xf0
    // ldrb r5, [r4, #3]
    // ldrb r0, [r1]
    // add r2, r2, #1
    // asr r6, r5, #4
    // and r5, r3
    // orr r5, r6
    // eor r0, r5
    // strb r0, [r1]
    // add r1, r1, #1
    // cmp r2, #3
    // blt _0224CB76
    // add r2, sp, #4
    // ldrb r3, [r2, #3]
    // mov r2, #0xf
    // add r0, sp, #4
    // and r2, r3
    // lsl r2, r2, #0x18
    // mov r1, #3
    // lsr r2, r2, #0x18
    // bl ov02_0224CA58
    // add r1, sp, #4
    // ldrb r5, [r1]
    // mov r0, #0xf
    // add r4, r5, #0
    // and r4, r0
    // cmp r4, #8
    // blt _0224CBB4
    // add sp, #0x10
    // sub r0, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r1, #1]
    // eor r0, r5
    // strb r0, [r1, #1]
    // ldrb r0, [r1, #2]
    // eor r0, r5
    // strb r0, [r1, #2]
    // ldrb r2, [r1, #1]
    // ldrb r3, [r1, #2]
    // lsl r0, r2, #8
    // add r6, r0, #0
    // ldr r0, [sp]
    // orr r6, r3
    // cmp r0, r6
    // bne _0224CBEE
    // mov r0, #0xf0
    // and r0, r5
    // asr r0, r0, #4
    // cmp r0, #6
    // bne _0224CBEE
    // ldrb r0, [r1, #3]
    // add r1, r5, r2
    // mul r1, r3
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r0, r1
    // bne _0224CBEE
    // add sp, #0x10
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224CBF8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r2, #0
    // str r1, [sp]
    // add r7, r3, #0
    // bl WallpaperPasswordBank_GetCount
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl WallpaperPasswordBank_GetIndexOfWord
    // add r1, sp, #4
    // strh r0, [r1, #4]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl WallpaperPasswordBank_GetIndexOfWord
    // add r1, sp, #4
    // strh r0, [r1, #6]
    // add r1, sp, #0x18
    // ldrh r1, [r1, #0x10]
    // add r0, r5, #0
    // bl WallpaperPasswordBank_GetIndexOfWord
    // add r1, sp, #4
    // strh r0, [r1, #8]
    // add r1, sp, #0x18
    // ldrh r1, [r1, #0x14]
    // add r0, r5, #0
    // bl WallpaperPasswordBank_GetIndexOfWord
    // add r1, sp, #4
    // mov r2, #0
    // strh r0, [r1, #0xa]
    // add r3, sp, #8
    // add r5, sp, #4
    // add r7, r2, #0
    // ldrsh r0, [r3, r7]
    // cmp r0, #0
    // bge _0224CC54
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r2, #0
    // ble _0224CC88
    // mov r6, #1
    // mvn r6, r6
    // ldrsh r6, [r3, r6]
    // cmp r0, r6
    // blt _0224CC74
    // sub r0, r0, r6
    // cmp r0, #0xff
    // ble _0224CC70
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // strb r0, [r5]
    // b _0224CC9A
    // sub r0, r6, r0
    // sub r0, r4, r0
    // cmp r0, #0xff
    // ble _0224CC84
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // strb r0, [r5]
    // b _0224CC9A
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // cmp r0, #0xff
    // ble _0224CC98
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // strb r0, [r1]
    // add r2, r2, #1
    // add r3, r3, #2
    // add r5, r5, #1
    // cmp r2, #4
    // blt _0224CC46
    // add r0, sp, #4
    // mov r1, #4
    // mov r2, #5
    // bl ov02_0224CA58
    // mov r2, #0
    // add r1, sp, #4
    // add r4, sp, #4
    // mov r3, #0xf0
    // ldrb r5, [r4, #3]
    // ldrb r0, [r1]
    // add r2, r2, #1
    // asr r6, r5, #4
    // and r5, r3
    // orr r5, r6
    // eor r0, r5
    // strb r0, [r1]
    // add r1, r1, #1
    // cmp r2, #3
    // blt _0224CCB6
    // add r2, sp, #4
    // ldrb r3, [r2, #3]
    // mov r2, #0xf
    // add r0, sp, #4
    // and r2, r3
    // lsl r2, r2, #0x18
    // mov r1, #3
    // lsr r2, r2, #0x18
    // bl ov02_0224CA58
    // add r1, sp, #4
    // ldrb r4, [r1]
    // mov r0, #0xf
    // and r0, r4
    // lsl r2, r0, #0x18
    // lsr r2, r2, #0x18
    // cmp r2, #8
    // blo _0224CCF4
    // cmp r2, #0xb
    // blo _0224CCFC
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r2, [r1, #1]
    // eor r2, r4
    // strb r2, [r1, #1]
    // ldrb r2, [r1, #2]
    // eor r2, r4
    // strb r2, [r1, #2]
    // ldrb r2, [r1, #1]
    // ldrb r3, [r1, #2]
    // lsl r5, r2, #8
    // add r6, r5, #0
    // ldr r5, [sp]
    // orr r6, r3
    // cmp r5, r6
    // bne _0224CD30
    // mov r5, #0xf0
    // and r5, r4
    // asr r5, r5, #4
    // cmp r5, #6
    // bne _0224CD30
    // add r2, r4, r2
    // mul r2, r3
    // lsl r2, r2, #0x18
    // ldrb r1, [r1, #3]
    // lsr r2, r2, #0x18
    // cmp r1, r2
    // beq _0224CD34
    // mov r0, #0
    // mvn r0, r0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224CD38(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // ldr r0, [sp, #0x24]
    // add r7, r1, #0
    // str r2, [sp, #8]
    // add r5, r3, #0
    // bl WallpaperPasswordBank_Create
    // add r4, r0, #0
    // add r0, r6, #0
    // bl PlayerProfile_GetTrainerID_VisibleHalf
    // add r1, r0, #0
    // str r5, [sp]
    // add r0, sp, #0x10
    // ldrh r0, [r0, #0x10]
    // add r2, r7, #0
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, r4, #0
    // bl ov02_0224CAB8
    // add r5, r0, #0
    // add r0, r4, #0
    // bl WallpaperPasswordBank_Delete
    // add r0, r5, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224CD74(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // ldr r0, [sp, #0x24]
    // add r7, r1, #0
    // str r2, [sp, #8]
    // add r5, r3, #0
    // bl WallpaperPasswordBank_Create
    // add r4, r0, #0
    // add r0, r6, #0
    // bl PlayerProfile_GetTrainerID_VisibleHalf
    // add r1, r0, #0
    // str r5, [sp]
    // add r0, sp, #0x10
    // ldrh r0, [r0, #0x10]
    // add r2, r7, #0
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, r4, #0
    // bl ov02_0224CBF8
    // add r5, r0, #0
    // add r0, r4, #0
    // bl WallpaperPasswordBank_Delete
    // add r0, r5, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r2, #0
    // bl MapObjectManager_GetFirstActiveObjectByID
    // add r6, r0, #0
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // add r0, r6, #0
    // bl MapObject_GetXCoord
    // add r5, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetZCoord
    // add r4, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetFacingDirection
    // cmp r0, #3
    // bhi _0224D028
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224D010: ; jump table
    // sub r4, r4, #1
    // b _0224D02C
    // add r4, r4, #1
    // b _0224D02C
    // sub r5, r5, #1
    // b _0224D02C
    // add r5, r5, #1
    // b _0224D02C
    // bl GF_AssertFail
    // mov r3, #2
    // lsl r1, r5, #0x10
    // lsl r3, r3, #0xe
    // ldr r2, [sp, #4]
    // lsl r4, r4, #0x10
    // add r1, r1, r3
    // add r0, r7, #0
    // add r3, r4, r3
    // bl Field3dObject_SetPosEx
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224D044(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r1, #0
    // add r6, r0, #0
    // add r1, sp, #0
    // bl PlayerAvatar_CopyPositionVector
    // add r0, r6, #0
    // bl PlayerAvatar_GetXCoord
    // add r5, r0, #0
    // add r0, r6, #0
    // bl PlayerAvatar_GetZCoord
    // add r4, r0, #0
    // add r0, r6, #0
    // bl PlayerAvatar_GetFacingDirection
    // cmp r0, #3
    // bhi _0224D090
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224D078: ; jump table
    // sub r4, r4, #1
    // b _0224D094
    // add r4, r4, #1
    // b _0224D094
    // sub r5, r5, #1
    // b _0224D094
    // add r5, r5, #1
    // b _0224D094
    // bl GF_AssertFail
    // mov r3, #2
    // lsl r1, r5, #0x10
    // lsl r3, r3, #0xe
    // ldr r2, [sp, #4]
    // lsl r4, r4, #0x10
    // add r1, r1, r3
    // add r0, r7, #0
    // add r3, r4, r3
    // bl Field3dObject_SetPosEx
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224D0AC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r1, sp, #0
    // bl PlayerAvatar_CopyPositionVector
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    // add r0, r4, #0
    // bl Field3dObject_SetPosEx
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov02_0224D0C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // str r2, [sp, #8]
    // add r6, r0, #0
    // mov r1, #0
    // mov r2, #0xdc
    // add r4, r3, #0
    // ldr r7, [sp, #0x28]
    // bl memset
    // add r0, r6, #0
    // add r0, #0x78
    // mov r1, #0x86
    // add r2, r5, #0
    // mov r3, #4
    // bl Field3dModel_LoadFromFilesystem
    // add r1, r6, #0
    // add r0, r6, #0
    // add r1, #0x78
    // bl Field3dObject_InitFromModel
    // add r0, r6, #0
    // add r0, #0xd8
    // str r4, [r0]
    // add r0, r6, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // mov r4, #0
    // cmp r0, #0
    // bls _0224D13E
    // add r0, r6, #0
    // add r5, r6, #0
    // str r0, [sp, #0xc]
    // add r0, #0x78
    // add r5, #0x88
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #8]
    // mov r0, #4
    // str r0, [sp]
    // ldr r1, [sp, #0xc]
    // add r0, r5, #0
    // mov r2, #0x86
    // add r3, r3, r4
    // str r7, [sp, #4]
    // bl Field3dModelAnimation_LoadFromFilesystem
    // add r0, r6, #0
    // add r1, r5, #0
    // bl Field3dObject_AddAnimation
    // add r0, r6, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // add r4, r4, #1
    // add r5, #0x14
    // cmp r4, r0
    // blo _0224D114
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224D144(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r0, #0x78
    // add r7, r1, #0
    // bl Field3dModel_Unload
    // add r0, r6, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // mov r4, #0
    // cmp r0, #0
    // bls _0224D176
    // add r5, r6, #0
    // add r5, #0x88
    // add r0, r5, #0
    // add r1, r7, #0
    // bl Field3dModelAnimation_Unload
    // add r0, r6, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // add r4, r4, #1
    // add r5, #0x14
    // cmp r4, r0
    // blo _0224D160
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224D178(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // mov r6, #1
    // mov r4, #0
    // cmp r0, #0
    // bls _0224D1A6
    // add r5, r7, #0
    // add r5, #0x88
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl Field3dModelAnimation_FrameAdvanceAndCheck
    // and r6, r0
    // add r0, r7, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // add r4, r4, #1
    // add r5, #0x14
    // cmp r4, r0
    // blo _0224D18C
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224D1AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // mov r4, #0
    // cmp r0, #0
    // bls _0224D1D8
    // add r5, r6, #0
    // mov r7, #1
    // add r5, #0x88
    // lsl r7, r7, #0xc
    // add r0, r5, #0
    // add r1, r7, #0
    // bl Field3dModelAnimation_FrameAdvanceAndLoop
    // add r0, r6, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // add r4, r4, #1
    // add r5, #0x14
    // cmp r4, r0
    // blo _0224D1C2
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224D1DC(void) {
    Field3dObject_Draw();
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
    // push {r4, lr}
    // add r4, r2, #0
    // add r0, r4, #0
    // add r0, #0xec
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0224D29A
    // cmp r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov02_0224D178
    // cmp r0, #1
    // bne _0224D2B8
    // add r0, r4, #0
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // add r0, r4, #0
    // add r0, #0xec
    // ldr r0, [r0]
    // add r4, #0xec
    // add r0, r0, #1
    // str r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224D2BC(void) {
    ov02_0224D1DC();
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
    Field3dObjectTask_Delete();
}


void ov02_0224D2F8(void) {
    Field3dObjectTask_GetData(0, 1);
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
    // push {r4, lr}
    // add r4, r2, #0
    // add r0, r4, #0
    // add r0, #0xec
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0224D3C6
    // cmp r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov02_0224D178
    // cmp r0, #1
    // bne _0224D3E4
    // add r0, r4, #0
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // add r0, r4, #0
    // add r0, #0xec
    // ldr r0, [r0]
    // add r4, #0xec
    // add r0, r0, #1
    // str r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224D3E8(void) {
    ov02_0224D1DC();
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
    Field3dObjectTask_Delete();
}


void ov02_0224D424(void) {
    Field3dObjectTask_GetData(0, 1);
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
    ov02_0224D144(0x6e, 0);
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
    ov02_0224D1DC(0);
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
    Field3dObjectTask_Delete();
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
    ov02_0224D1AC(r2);
    ov02_0224D0AC(*((u32*)(r5 + 0x40)), r4);
}


void ov02_0224D670(void) {
    ov02_0224D1DC();
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
    Field3dObjectTask_Delete();
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
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r0, #0xc8
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0224D73A
    // ldr r5, [sp]
    // mov r4, #1
    // mov r6, #0
    // add r5, #0x78
    // lsl r7, r4, #0xc
    // add r0, r5, #0
    // add r1, r7, #0
    // bl Field3dModelAnimation_FrameAdvanceAndCheck
    // add r6, r6, #1
    // and r4, r0
    // add r5, #0x14
    // cmp r6, #4
    // blt _0224D716
    // cmp r4, #1
    // bne _0224D73A
    // ldr r0, [sp]
    // mov r1, #0
    // add r0, #0xc8
    // str r1, [r0]
    // ldr r0, [sp]
    // bl Field3dObject_SetActiveFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224D73C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r1, [sp]
    // str r2, [sp, #4]
    // mov r1, #0
    // mov r2, #0xcc
    // add r7, r0, #0
    // add r5, r3, #0
    // bl memset
    // ldr r1, [sp]
    // add r0, r7, #0
    // bl Field3dObject_InitFromModel
    // add r4, r7, #0
    // mov r6, #0
    // add r4, #0x78
    // ldr r1, [sp]
    // ldr r2, [r5]
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // bl ov01_021FBE70
    // add r0, r7, #0
    // add r1, r4, #0
    // bl Field3dObject_AddAnimation
    // add r6, r6, #1
    // add r5, r5, #4
    // add r4, #0x14
    // cmp r6, #4
    // blt _0224D75E
    // add r0, r7, #0
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224D788(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r7, #0
    // add r6, r1, #0
    // mov r4, #0
    // add r5, #0x78
    // add r0, r5, #0
    // add r1, r6, #0
    // bl Field3dModelAnimation_Unload
    // add r4, r4, #1
    // add r5, #0x14
    // cmp r4, #4
    // blt _0224D794
    // add r0, r7, #0
    // mov r1, #0
    // mov r2, #0xcc
    // bl memset
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov02_0224D7B0
    // mov r2, #0
    // add r1, r4, #0
    // add r0, r1, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0224D858
    // add r1, r4, #0
    // mov r0, #0xcc
    // mov r3, #0xce
    // add r1, #0x10
    // mul r0, r2
    // lsl r3, r3, #4
    // add r0, r1, r0
    // ldr r1, [r4, r3]
    // add r2, r3, #0
    // add r2, #8
    // add r3, #0xc
    // ldr r1, [r1, #0x40]
    // ldr r2, [r4, r2]
    // ldr r3, [r4, r3]
    // bl ov02_0224D698
    // pop {r4, pc}
    // add r2, r2, #1
    // add r1, #0xcc
    // cmp r2, #0x10
    // blt _0224D82C
    // bl GF_AssertFail
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224D868(void) {
    ov02_0224D700(0);
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
    Field3dObject_Draw(0);
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
    Field3dObjectTask_Delete();
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
    ov02_0224D1DC();
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
    Field3dObjectTask_Delete();
}


void ov02_0224DC94(void) {
    Field3dObjectTask_GetData(0, 1);
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
    ov02_0224DCB0(1);
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
    Field3dObject_Draw(0);
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
    Field3dObjectTask_Delete();
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
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r0, #0xc8
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0224DEA6
    // ldr r5, [sp]
    // mov r4, #1
    // mov r6, #0
    // add r5, #0x78
    // lsl r7, r4, #0xc
    // add r0, r5, #0
    // add r1, r7, #0
    // bl Field3dModelAnimation_FrameAdvanceAndCheck
    // add r6, r6, #1
    // and r4, r0
    // add r5, #0x14
    // cmp r6, #4
    // blt _0224DE82
    // cmp r4, #1
    // bne _0224DEA6
    // ldr r0, [sp]
    // mov r1, #0
    // add r0, #0xc8
    // str r1, [r0]
    // ldr r0, [sp]
    // bl Field3dObject_SetActiveFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224DEA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r1, [sp]
    // str r2, [sp, #4]
    // mov r1, #0
    // mov r2, #0xcc
    // add r7, r0, #0
    // add r5, r3, #0
    // bl memset
    // ldr r1, [sp]
    // add r0, r7, #0
    // bl Field3dObject_InitFromModel
    // add r4, r7, #0
    // mov r6, #0
    // add r4, #0x78
    // ldr r1, [sp]
    // ldr r2, [r5]
    // ldr r3, [sp, #4]
    // add r0, r4, #0
    // bl ov01_021FBE70
    // add r0, r7, #0
    // add r1, r4, #0
    // bl Field3dObject_AddAnimation
    // add r6, r6, #1
    // add r5, r5, #4
    // add r4, #0x14
    // cmp r6, #4
    // blt _0224DECA
    // add r0, r7, #0
    // mov r1, #0
    // bl Field3dObject_SetActiveFlag
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224DEF4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r7, #0
    // add r6, r1, #0
    // mov r4, #0
    // add r5, #0x78
    // add r0, r5, #0
    // add r1, r6, #0
    // bl Field3dModelAnimation_Unload
    // add r4, r4, #1
    // add r5, #0x14
    // cmp r4, #4
    // blt _0224DF00
    // add r0, r7, #0
    // mov r1, #0
    // mov r2, #0xcc
    // bl memset
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    ov02_0224DE6C(0);
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
    Heap_AllocAtEnd(4, 0, 0x20);
}


void ov02_0224E0EC(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r6, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r5, #0
    // cmp r0, #5
    // bls _0224E108
    // b _0224E21E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224E114: ; jump table
    // add r0, r6, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_UnpauseMovement
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, [r4, #4]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _0224E21E
    // ldr r0, [r4, #8]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _0224E21E
    // add r0, r6, #0
    // bl FollowMon_GetMapObject
    // bl MapObject_PauseMovement
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224E21E
    // ldr r0, [r4, #4]
    // bl MapObject_GetXCoord
    // str r0, [r4, #0xc]
    // ldr r0, [r4, #4]
    // bl MapObject_GetZCoord
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #4]
    // bl MapObject_GetFacingDirection
    // str r0, [r4, #0x14]
    // ldr r0, [r4, #8]
    // bl MapObject_GetXCoord
    // str r0, [r4, #0x18]
    // ldr r0, [r4, #8]
    // bl MapObject_GetZCoord
    // str r0, [r4, #0x1c]
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0xc
    // add r1, #0x18
    // bl ov02_0224E224
    // add r6, r0, #0
    // ldr r0, [r4, #4]
    // add r1, r6, #0
    // bl MapObject_SetHeldMovement
    // add r0, r6, #0
    // bl ov02_0224E2D4
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224E21E
    // ldr r0, [r4, #4]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _0224E21E
    // ldr r0, [r4, #8]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _0224E21E
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224E21E
    // ldr r0, [r4, #4]
    // bl MapObject_GetFacingDirection
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl ov02_0224E2A0
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4, #0x14]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl ov02_0224E26C
    // add r1, r0, #0
    // ldr r0, [r4, #8]
    // bl MapObject_SetHeldMovement
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _0224E21E
    // ldr r0, [r4, #4]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _0224E21E
    // ldr r0, [r4, #8]
    // bl MapObject_AreBitsSetForMovementScriptInit
    // cmp r0, #0
    // beq _0224E21E
    // ldr r0, [r4, #4]
    // bl MapObject_ClearHeldMovementIfActive
    // ldr r0, [r4, #8]
    // bl MapObject_ClearHeldMovementIfActive
    // add r0, r4, #0
    // mov r5, #1
    // bl Heap_Free
    // add r0, r5, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224E224(void) {
    // push {r3, r4, r5, lr}
    // ldr r5, [r1]
    // ldr r3, [r0]
    // mov r4, #0xd
    // cmp r3, r5
    // bne _0224E246
    // ldr r1, [r1, #4]
    // ldr r0, [r0, #4]
    // cmp r0, r1
    // ble _0224E23C
    // mov r4, #0xc
    // b _0224E268
    // cmp r0, r1
    // blt _0224E268
    // bl GF_AssertFail
    // b _0224E268
    // ldr r2, [r0, #4]
    // ldr r0, [r1, #4]
    // cmp r2, r0
    // bne _0224E264
    // cmp r3, r5
    // ble _0224E256
    // mov r4, #0xe
    // b _0224E268
    // cmp r3, r5
    // bge _0224E25E
    // mov r4, #0xf
    // b _0224E268
    // bl GF_AssertFail
    // b _0224E268
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224E26C(void) {
    // push {r3, lr}
    // cmp r0, #3
    // bhi _0224E296
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224E27E: ; jump table
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #3
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov02_0224E2A0(void) {
    // push {r3, lr}
    // cmp r0, #3
    // bhi _0224E2CA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224E2B2: ; jump table
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #3
    // pop {r3, pc}
    // mov r0, #2
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov02_0224E2D4(void) {
    // push {r3, lr}
    // sub r0, #0xc
    // cmp r0, #3
    // bhi _0224E300
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224E2E8: ; jump table
    // mov r0, #0xd
    // pop {r3, pc}
    // mov r0, #0xc
    // pop {r3, pc}
    // mov r0, #0xf
    // pop {r3, pc}
    // mov r0, #0xe
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
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
    // lsr r2, r2, #0x1b
    // add r2, r0, r2
    // sub r1, #0x20
    // asr r0, r1, #4
    // lsr r0, r0, #0x1b
    // add r0, r1, r0
    // asr r1, r0, #5
    // lsl r0, r1, #1
    // asr r2, r2, #5
    // add r0, r1, r0
    // add r0, r2, r0
    // bmi _0224E33C
    // cmp r0, #6
    // blt _0224E33E
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov02_0224E340(void) {
    PlayerAvatar_GetXCoord(*((u32*)(r0 + 0x40)));
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    ov02_0224E31C(r4, r0);
}


void ov02_0224E35C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // add r6, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetCurrentPosition
    // ldr r0, [r5, #0xc]
    // bl Save_SafariZone_Get
    // add r4, r0, #0
    // ldr r0, [r5, #0x20]
    // ldr r0, [r0]
    // bl ov02_0224E308
    // cmp r0, #0
    // bne _0224E38E
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl Save_VarsFlags_CheckSafariSysFlag
    // cmp r0, #0
    // bne _0224E39E
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl sub_0202F620
    // cmp r0, #0
    // beq _0224E3AE
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl SafariZone_GetObjectUnlockLevel
    // cmp r0, #0
    // bne _0224E3BE
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // add r7, r0, #0
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetXCoord
    // add r4, r0, #0
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetZCoord
    // str r0, [sp, #8]
    // add r0, r7, #0
    // bl GetDeltaXByFacingDirection
    // add r6, r4, r0
    // add r0, r7, #0
    // bl GetDeltaYByFacingDirection
    // ldr r1, [sp, #8]
    // add r4, r1, r0
    // cmp r6, #0x20
    // blt _0224E3F8
    // cmp r6, #0x80
    // bge _0224E3F8
    // cmp r4, #0x20
    // blt _0224E3F8
    // cmp r4, #0x60
    // blt _0224E3FE
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // cmp r6, #0x20
    // blt _0224E40E
    // cmp r6, #0x80
    // bge _0224E40E
    // cmp r4, #0x20
    // blt _0224E40E
    // cmp r4, #0x60
    // blt _0224E414
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x40]
    // add r1, sp, #0x10
    // bl PlayerAvatar_CopyPositionVector
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0x18]
    // add r0, r5, #0
    // bl sub_02054774
    // add r7, r0, #0
    // add r0, sp, #0xc
    // ldrb r0, [r0]
    // cmp r0, #1
    // beq _0224E43C
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // lsl r0, r4, #4
    // add r0, #8
    // cmp r0, #0
    // ble _0224E458
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // str r0, [sp, #4]
    // b _0224E468
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // str r0, [sp, #4]
    // lsl r0, r6, #4
    // add r0, #8
    // cmp r0, #0
    // ble _0224E482
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _0224E490
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r4, r0, #0
    // ldr r0, [sp, #4]
    // bl _ffix
    // add r3, r0, #0
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r1, [sp, #0x14]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl sub_02054774
    // add r1, sp, #0xc
    // ldrb r1, [r1]
    // cmp r1, #1
    // beq _0224E4BA
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // cmp r7, r0
    // bne _0224E4C4
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224E4CC(void) {
    sub_0205BAD0();
}


void ov02_0224E4DC(void) {
    sub_0205BAE4();
}


void SafariDecoration_CreateArgs(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #0x24
    // bl Heap_AllocAtEnd
    // mov r1, #0
    // mov r2, #0x24
    // add r4, r0, #0
    // bl MI_CpuFill8
    // add r0, r5, #0
    // bl FieldSystem_GetSaveData
    // str r0, [r4]
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r1, r5, r0
    // add r0, r0, #5
    // str r1, [r4, #4]
    // add r0, r5, r0
    // str r0, [r4, #0x20]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetState
    // cmp r0, #2
    // bne _0224E528
    // mov r0, #1
    // b _0224E52A
    // mov r0, #0
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // strb r6, [r4, #0x18]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetXCoord
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetZCoord
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // ldr r0, [r5, #0x40]
    // add r1, sp, #0x20
    // bl PlayerAvatar_CopyPositionVector
    // ldr r0, [sp, #0x14]
    // add r1, r7, #0
    // bl ov02_0224E31C
    // strb r0, [r4, #0x19]
    // add r0, sp, #0x18
    // str r0, [sp]
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // ldr r3, [sp, #0x28]
    // add r0, r5, #0
    // bl sub_02054774
    // str r0, [sp, #0x24]
    // add r1, sp, #0x18
    // ldrb r1, [r1]
    // cmp r1, #1
    // beq _0224E584
    // add sp, #0x2c
    // add r0, r4, #0
    // pop {r4, r5, r6, r7, pc}
    // asr r0, r0, #0xc
    // strb r0, [r4, #0x1a]
    // ldr r0, [sp, #0x10]
    // bl GetDeltaXByFacingDirection
    // ldr r1, [sp, #0x14]
    // add r0, r1, r0
    // strb r0, [r4, #9]
    // ldr r0, [sp, #0x10]
    // bl GetDeltaYByFacingDirection
    // add r0, r7, r0
    // strb r0, [r4, #0xb]
    // mov r0, #1
    // strb r0, [r4, #8]
    // ldr r0, [sp, #0x24]
    // add r2, r7, #0
    // str r0, [sp]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // add r0, sp, #0x18
    // add r0, #2
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // bl ov02_0224E828
    // cmp r0, #0
    // beq _0224E5D4
    // add r1, sp, #0x18
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // strb r0, [r4, #0xd]
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // strb r0, [r4, #0xf]
    // mov r0, #1
    // strb r0, [r4, #0xc]
    // ldr r0, [sp, #0x24]
    // add r2, r7, #0
    // str r0, [sp]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // add r0, sp, #0x18
    // add r0, #2
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // bl ov02_0224EB48
    // cmp r0, #0
    // beq _0224E606
    // add r1, sp, #0x18
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // strb r0, [r4, #0x11]
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // strb r0, [r4, #0x13]
    // mov r0, #1
    // strb r0, [r4, #0x10]
    // ldr r0, [sp, #0x24]
    // add r2, r7, #0
    // str r0, [sp]
    // add r0, sp, #0x1c
    // str r0, [sp, #4]
    // add r0, sp, #0x18
    // add r0, #2
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // bl ov02_0224EE4C
    // cmp r0, #0
    // beq _0224E638
    // add r1, sp, #0x18
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // strb r0, [r4, #0x15]
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // strb r0, [r4, #0x17]
    // mov r0, #1
    // strb r0, [r4, #0x14]
    // add r0, r4, #0
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224E640(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl Save_PlayerData_GetProfile
    // bl PlayerProfile_GetTrainerID
    // add r5, r0, #0
    // add r0, r4, #0
    // bl Save_SafariZone_Get
    // bl SafariZone_GetObjectUnlockLevel
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #6
    // bhs _0224E672
    // mov r1, #3
    // bl _s32_div_f
    // b _0224E67C
    // sub r1, r0, #6
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r0, r0, #2
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // mov r0, #3
    // sub r0, r0, r1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // add r0, r0, #1
    // cmp r4, r0
    // blt _0224E692
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov02_0224E698(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetXCoord
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetZCoord
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // ldr r0, [r5, #0x40]
    // add r1, sp, #0x14
    // bl PlayerAvatar_CopyPositionVector
    // ldr r0, [r5, #0xc]
    // bl Save_SafariZone_Get
    // mov r1, #0
    // bl SafariZone_GetAreaSet
    // add r2, r0, #0
    // add r0, r6, #0
    // sub r0, #0x20
    // asr r1, r0, #4
    // lsr r1, r1, #0x1b
    // add r1, r0, r1
    // add r0, r4, #0
    // sub r0, #0x20
    // asr r3, r0, #4
    // lsr r3, r3, #0x1b
    // add r3, r0, r3
    // asr r3, r3, #5
    // lsl r0, r3, #1
    // asr r1, r1, #5
    // add r0, r3, r0
    // add r0, r1, r0
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // mov r0, #0x7a
    // mul r0, r1
    // add r0, r2, r0
    // ldrb r0, [r0, #1]
    // cmp r0, #0x1e
    // blo _0224E706
    // add sp, #0x20
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x40]
    // bl PlayerAvatar_GetState
    // cmp r0, #2
    // beq _0224E716
    // add sp, #0x20
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0xc]
    // bl ov02_0224E640
    // cmp r0, #0
    // bne _0224E726
    // add sp, #0x20
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x18]
    // add r1, r6, #0
    // str r0, [sp]
    // add r0, sp, #0x10
    // add r0, #2
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl ov02_0224EE4C
    // cmp r0, #0
    // beq _0224E74E
    // add sp, #0x20
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #3
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224E754(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, [r4, #0x40]
    // str r1, [sp]
    // bl PlayerAvatar_GetFacingDirection
    // add r6, r0, #0
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetXCoord
    // add r5, r0, #0
    // add r0, r6, #0
    // bl GetDeltaXByFacingDirection
    // add r7, r5, r0
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetZCoord
    // add r5, r0, #0
    // add r0, r6, #0
    // bl GetDeltaYByFacingDirection
    // add r6, r5, r0
    // ldr r0, [r4, #0xc]
    // bl Save_PlayerData_GetProfile
    // bl PlayerProfile_GetTrainerGender
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov02_0224E31C
    // add r5, r0, #0
    // lsr r1, r7, #0x1f
    // lsl r0, r7, #0x1b
    // sub r0, r0, r1
    // mov r2, #0x1b
    // ror r0, r2
    // add r7, r1, r0
    // lsr r1, r6, #0x1f
    // lsl r0, r6, #0x1b
    // sub r0, r0, r1
    // ror r0, r2
    // add r6, r1, r0
    // ldr r0, [r4, #0xc]
    // bl Save_SafariZone_Get
    // mov r1, #0
    // bl SafariZone_GetAreaSet
    // mov r1, #0x7a
    // mul r1, r5
    // add r0, r0, r1
    // str r0, [sp, #8]
    // ldrb r0, [r0, #1]
    // mov r4, #0
    // cmp r0, #0
    // ble _0224E81C
    // ldr r0, [sp, #8]
    // add r5, r0, #2
    // ldrb r1, [r5]
    // ldr r2, [sp, #4]
    // add r0, sp, #0xc
    // bl GetSafariObjectConfig
    // ldrb r1, [r5, #1]
    // cmp r7, r1
    // blt _0224E810
    // ldrb r0, [r5, #3]
    // cmp r6, r0
    // bgt _0224E810
    // add r2, sp, #0xc
    // ldrb r2, [r2, #1]
    // lsl r3, r2, #0x1c
    // lsr r3, r3, #0x1d
    // add r1, r1, r3
    // cmp r7, r1
    // bge _0224E810
    // lsl r1, r2, #0x19
    // lsr r1, r1, #0x1d
    // sub r0, r0, r1
    // cmp r6, r0
    // ble _0224E810
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _0224E80A
    // strh r4, [r0]
    // add sp, #0x10
    // ldrb r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // add r4, r4, #1
    // ldrb r0, [r0, #1]
    // add r5, r5, #4
    // cmp r4, r0
    // blt _0224E7D4
    // ldr r0, [sp]
    // mov r1, #0
    // strh r1, [r0]
    // mov r0, #0xff
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, lr}
    // cmp r2, #0
    // bne _0224EF78
    // bl ov02_0224E4CC
    // pop {r3, pc}
    // bl ov02_0224E4DC
    // pop {r3, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1b0
    // add r7, r0, #0
    // ldr r0, [r7, #0x20]
    // ldr r0, [r0]
    // bl MapHeader_GetMapSec
    // add r2, r0, #0
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r7, r0]
    // mov r1, #0xde
    // add r0, #0x14
    // add r2, r2, #1
    // bl ReadWholeNarcMemberByIdPair
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r1, [r7, r0]
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // add r0, r1, r0
    // mov r1, #0xde
    // mov r2, #0
    // bl ReadWholeNarcMemberByIdPair
    // add r0, r7, #0
    // add r1, sp, #4
    // bl ov02_0224F058
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldr r0, [r7, r0]
    // add r3, sp, #0x20
    // str r0, [sp]
    // add r0, #0x14
    // str r0, [sp]
    // mov r0, #0
    // add r2, r0, #0
    // add r1, r2, #0
    // add r1, #0x1e
    // add r2, r2, #1
    // add r0, r0, #1
    // stmia r3!, {r1}
    // cmp r2, #0xc
    // blt _0224EFE2
    // add r2, sp, #0x20
    // lsl r1, r0, #2
    // mov r3, #0
    // add r1, r2, r1
    // stmia r1!, {r3}
    // add r3, r3, #1
    // add r0, r0, #1
    // cmp r3, #0x1e
    // blt _0224EFF8
    // add r2, sp, #0x20
    // lsl r1, r0, #2
    // mov r3, #0x2a
    // add r1, r2, r1
    // stmia r1!, {r3}
    // add r3, r3, #1
    // add r0, r0, #1
    // cmp r3, #0x64
    // blt _0224F00A
    // mov r5, #0
    // add r4, sp, #0x20
    // ldr r1, [r4]
    // mov r0, #0x14
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp]
    // add r6, r0, r2
    // ldrh r0, [r6, #0xa]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x16
    // beq _0224F044
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, sp, #4
    // bl ov02_0224F108
    // cmp r0, #0
    // beq _0224F044
    // ldrh r0, [r6, #0xa]
    // add sp, #0x1b0
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x16
    // pop {r3, r4, r5, r6, r7, pc}
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #0x64
    // blt _0224F018
    // bl GF_AssertFail
    // mov r0, #0
    // add sp, #0x1b0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // bl LCRandom
    // mov r1, #0x64
    // bl _s32_div_f
    // ldrb r0, [r5, #0x11]
    // cmp r1, r0
    // blt _0224F124
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r7, [r5, #0x12]
    // cmp r7, #0
    // beq _0224F13E
    // ldr r0, [r6, #0xc]
    // bl Save_VarsFlags_Get
    // add r1, r7, #0
    // bl Save_VarsFlags_CheckFlagInArray
    // cmp r0, #0
    // bne _0224F13E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #3]
    // lsl r0, r0, #0x1b
    // lsr r1, r0, #0x1b
    // beq _0224F15E
    // cmp r1, #9
    // bne _0224F154
    // ldrb r0, [r4]
    // cmp r0, #0
    // bne _0224F15E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4, #1]
    // cmp r1, r0
    // beq _0224F15E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r5]
    // cmp r1, #0
    // beq _0224F16E
    // ldrb r0, [r4, #2]
    // cmp r1, r0
    // beq _0224F16E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #2]
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x1d
    // beq _0224F19C
    // cmp r1, #7
    // ldrb r0, [r4, #3]
    // bne _0224F194
    // cmp r0, #2
    // beq _0224F19C
    // cmp r0, #3
    // beq _0224F19C
    // cmp r0, #4
    // beq _0224F19C
    // cmp r0, #5
    // beq _0224F19C
    // cmp r0, #8
    // beq _0224F19C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r1, r0
    // beq _0224F19C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5, #0xa]
    // lsl r0, r0, #0x1d
    // lsr r1, r0, #0x1d
    // beq _0224F1BA
    // cmp r1, #5
    // ldrb r0, [r4, #0xc]
    // bne _0224F1B2
    // cmp r0, #5
    // bhs _0224F1BA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r1, r0
    // beq _0224F1BA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #0x10]
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x1d
    // beq _0224F1D8
    // cmp r1, #4
    // ldrb r0, [r4, #0xd]
    // bne _0224F1D0
    // cmp r0, #4
    // bhs _0224F1D8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r1, r0
    // beq _0224F1D8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #0x10]
    // lsl r0, r0, #0x1d
    // lsr r1, r0, #0x1e
    // beq _0224F1EA
    // ldrb r0, [r4, #4]
    // cmp r1, r0
    // beq _0224F1EA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #0x10]
    // lsl r0, r0, #0x1b
    // lsr r1, r0, #0x1e
    // beq _0224F212
    // cmp r1, #3
    // bne _0224F200
    // ldrb r0, [r4, #0xe]
    // cmp r0, #0
    // bne _0224F200
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r1, #1
    // bne _0224F20E
    // ldrb r0, [r4, #0xf]
    // cmp r0, #0
    // bne _0224F20E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #4]
    // lsl r0, r0, #0x1b
    // lsr r1, r0, #0x1b
    // beq _0224F22A
    // ldrb r0, [r4, #5]
    // cmp r1, r0
    // beq _0224F22A
    // ldrb r0, [r4, #6]
    // cmp r1, r0
    // beq _0224F22A
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5, #8]
    // lsl r0, r0, #0x1d
    // lsr r1, r0, #0x1d
    // beq _0224F23C
    // ldrb r0, [r4, #0x11]
    // cmp r1, r0
    // beq _0224F23C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r1, [r5, #0xe]
    // cmp r1, #0
    // beq _0224F24C
    // ldrb r0, [r4, #0x12]
    // cmp r1, r0
    // beq _0224F24C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r5, #5]
    // cmp r1, #0
    // beq _0224F25C
    // ldrb r0, [r4, #0x13]
    // cmp r1, r0
    // beq _0224F25C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5, #0xc]
    // cmp r0, #0
    // beq _0224F26E
    // sub r1, r0, #1
    // ldrh r0, [r4, #0x1a]
    // cmp r1, r0
    // beq _0224F26E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5, #0xa]
    // lsl r0, r0, #0x1a
    // lsr r1, r0, #0x1d
    // beq _0224F280
    // ldrb r0, [r4, #0x14]
    // cmp r1, r0
    // beq _0224F280
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #1]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // beq _0224F298
    // mov r1, #0x15
    // ldrsb r1, [r4, r1]
    // bl ov02_02250628
    // cmp r0, #0
    // bne _0224F298
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #4]
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x1d
    // beq _0224F2AA
    // ldrb r0, [r4, #0x16]
    // cmp r1, r0
    // beq _0224F2AA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #1]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // beq _0224F2C0
    // ldrb r1, [r4, #7]
    // bl ov02_02250594
    // cmp r0, #0
    // bne _0224F2C0
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #2]
    // lsl r0, r0, #0x1d
    // lsr r1, r0, #0x1d
    // beq _0224F2D2
    // ldrb r0, [r4, #8]
    // cmp r1, r0
    // beq _0224F2D2
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #6]
    // cmp r0, #0
    // beq _0224F2E6
    // ldrb r1, [r4, #0xa]
    // bl ov02_022506D4
    // cmp r0, #0
    // bne _0224F2E6
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #7]
    // cmp r0, #0
    // beq _0224F2FA
    // ldrb r1, [r4, #0xb]
    // bl ov02_02250738
    // cmp r0, #0
    // bne _0224F2FA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r5, #2]
    // lsl r0, r0, #0x1b
    // lsr r1, r0, #0x1e
    // beq _0224F30C
    // ldrb r0, [r4, #9]
    // cmp r1, r0
    // beq _0224F30C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5, #8]
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x1d
    // beq _0224F31E
    // ldrb r0, [r4, #0x17]
    // cmp r1, r0
    // beq _0224F31E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // add r5, r1, #0
    // mov r0, #0
    // strb r0, [r5, #0xc]
    // strb r0, [r5, #0xe]
    // strb r0, [r5, #0xf]
    // strb r0, [r5, #0x10]
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetXCoord
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x40]
    // bl PlayerAvatar_GetZCoord
    // str r0, [sp]
    // ldr r0, [r4, #0x3c]
    // bl MapObjectManager_GetObjectCount
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x3c]
    // bl MapObjectManager_GetObjects
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // ble _0224F57A
    // add r7, r5, #0
    // add r7, #0xc
    // ldr r0, [sp, #0x10]
    // bl MapObject_CheckActive
    // cmp r0, #1
    // bne _0224F568
    // ldr r0, [sp, #0x10]
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // ldr r0, [sp, #0x10]
    // bl MapObject_GetZCoord
    // ldr r1, [sp, #4]
    // sub r6, r1, r4
    // ldr r1, [sp]
    // sub r4, r1, r0
    // ldr r0, [sp, #0x10]
    // bl MapObject_GetSpriteID
    // cmp r0, #0x54
    // bne _0224F52C
    // mov r0, #1
    // strb r0, [r5, #0xf]
    // b _0224F568
    // cmp r0, #0x55
    // bne _0224F536
    // mov r0, #1
    // strb r0, [r5, #0xe]
    // b _0224F568
    // cmp r0, #0x56
    // bne _0224F540
    // mov r0, #1
    // strb r0, [r5, #0x10]
    // b _0224F568
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // blt _0224F568
    // cmp r6, #1
    // bgt _0224F568
    // cmp r4, r0
    // blt _0224F568
    // cmp r4, #1
    // bgt _0224F568
    // ldr r0, [sp, #0x10]
    // bl MapObject_GetID
    // cmp r0, #0xfd
    // beq _0224F568
    // cmp r0, #0xff
    // beq _0224F568
    // ldrb r0, [r7]
    // add r0, r0, #1
    // strb r0, [r7]
    // add r0, sp, #0x10
    // bl MapObjectArray_NextObject2
    // ldr r0, [sp, #0xc]
    // add r1, r0, #1
    // ldr r0, [sp, #8]
    // str r1, [sp, #0xc]
    // cmp r1, r0
    // blt _0224F4FC
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224F580(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // str r1, [sp, #4]
    // mov r4, #0
    // bl Field_GetBgEvents
    // add r5, r0, #0
    // ldr r0, [sp]
    // bl Field_GetNumBgEvents
    // add r7, r0, #0
    // beq _0224F5C6
    // cmp r5, #0
    // beq _0224F5C6
    // add r6, r4, #0
    // cmp r7, #0
    // ble _0224F5C6
    // ldrh r0, [r5, #2]
    // cmp r0, #2
    // bne _0224F5BE
    // ldrh r0, [r5]
    // bl HiddenItemScriptNoToFlagId
    // add r1, r0, #0
    // ldr r0, [sp]
    // bl FieldSystem_FlagCheck
    // cmp r0, #0
    // bne _0224F5BE
    // add r4, r4, #1
    // add r6, r6, #1
    // add r5, #0x14
    // cmp r6, r7
    // blt _0224F5A4
    // ldr r0, [sp, #4]
    // strb r4, [r0, #0xd]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224F5D0(void) {
    // push {r4, lr}
    // ldr r0, [r0, #0xc]
    // add r4, r1, #0
    // bl Save_LocalFieldData_Get
    // bl LocalFieldData_GetWeatherType
    // cmp r0, #0
    // beq _0224F5E8
    // cmp r0, #1
    // beq _0224F5EE
    // b _0224F5F4
    // mov r0, #1
    // strb r0, [r4, #0x11]
    // pop {r4, pc}
    // mov r0, #3
    // strb r0, [r4, #0x11]
    // pop {r4, pc}
    // mov r0, #0
    // strb r0, [r4, #0x11]
    // pop {r4, pc}
    // TODO: decompile
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
    // ldr r0, [r0, #0x20]
    // ldr r0, [r0]
    // strh r0, [r1, #0x1a]
    // bx lr
    // TODO: decompile
}


void ov02_0224F64C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl Field_GetTimeOfDay
    // cmp r0, #4
    // bhi _0224F68C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224F664: ; jump table
    // mov r0, #1
    // strb r0, [r4, #0x14]
    // pop {r4, pc}
    // mov r0, #2
    // strb r0, [r4, #0x14]
    // pop {r4, pc}
    // mov r0, #3
    // strb r0, [r4, #0x14]
    // pop {r4, pc}
    // mov r0, #4
    // strb r0, [r4, #0x14]
    // pop {r4, pc}
    // mov r0, #5
    // strb r0, [r4, #0x14]
    // pop {r4, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // strb r0, [r4, #0x14]
    // pop {r4, pc}
    // TODO: decompile
}


void ov02_0224F698(void) {
    FieldSystem_UnkSub108_GetMonMood(0x42);
}


void ov02_0224F6AC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // ldr r0, [r0, #0xc]
    // add r5, r3, #0
    // bl SaveArray_Party_Get
    // add r4, r0, #0
    // bl GetIdxOfFirstAliveMonInParty_CrashIfNone
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, sp, #8
    // add r2, r6, #0
    // bl Party_GetMonAprijuiceModifiers
    // add r0, r4, #0
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // add r0, sp, #0
    // add r2, sp, #8
    // mov r3, #0xb
    // bl CalcMonPokeathlonStars
    // add r0, sp, #0
    // ldrh r2, [r0]
    // lsl r0, r2, #0x1d
    // lsl r2, r2, #0x11
    // lsr r1, r0, #0x1d
    // lsr r2, r2, #0x1d
    // mov r0, #1
    // cmp r1, r2
    // bhs _0224F6F4
    // add r1, r2, #0
    // mov r0, #2
    // add r2, sp, #0
    // ldrh r2, [r2]
    // lsl r2, r2, #0x14
    // lsr r2, r2, #0x1d
    // cmp r1, r2
    // bhs _0224F704
    // add r1, r2, #0
    // mov r0, #4
    // add r2, sp, #0
    // ldrh r2, [r2]
    // lsl r2, r2, #0x1a
    // lsr r2, r2, #0x1d
    // cmp r1, r2
    // bhs _0224F714
    // add r1, r2, #0
    // mov r0, #3
    // add r2, sp, #0
    // ldrh r2, [r2]
    // lsl r2, r2, #0x17
    // lsr r2, r2, #0x1d
    // cmp r1, r2
    // bhs _0224F722
    // mov r0, #5
    // strb r0, [r5, #0x16]
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov02_0224F728(void) {
    // push {r4, lr}
    // add r0, #0xe4
    // ldr r0, [r0]
    // add r4, r1, #0
    // bl MapObject_GetFacingDirection
    // cmp r0, #3
    // bhi _0224F764
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224F744: ; jump table
    // mov r0, #3
    // strb r0, [r4, #0x17]
    // pop {r4, pc}
    // mov r0, #4
    // strb r0, [r4, #0x17]
    // pop {r4, pc}
    // mov r0, #2
    // strb r0, [r4, #0x17]
    // pop {r4, pc}
    // mov r0, #1
    // strb r0, [r4, #0x17]
    // pop {r4, pc}
    // mov r0, #0
    // strb r0, [r4, #0x17]
    // pop {r4, pc}
    // TODO: decompile
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
    // push {r3, lr}
    // cmp r0, #0x11
    // bhi _0224F816
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224F7AE: ; jump table
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #7
    // pop {r3, pc}
    // mov r0, #0xa
    // pop {r3, pc}
    // mov r0, #8
    // pop {r3, pc}
    // mov r0, #9
    // pop {r3, pc}
    // mov r0, #0xd
    // pop {r3, pc}
    // mov r0, #0xc
    // pop {r3, pc}
    // mov r0, #0xe
    // pop {r3, pc}
    // mov r0, #0x11
    // pop {r3, pc}
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #3
    // pop {r3, pc}
    // mov r0, #5
    // pop {r3, pc}
    // mov r0, #4
    // pop {r3, pc}
    // mov r0, #0xb
    // pop {r3, pc}
    // mov r0, #6
    // pop {r3, pc}
    // mov r0, #0xf
    // pop {r3, pc}
    // mov r0, #0x10
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov02_0224F820(void) {
    // push {r3, lr}
    // cmp r0, #6
    // bhi _0224F85C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224F832: ; jump table
    // mov r0, #4
    // pop {r3, pc}
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #7
    // pop {r3, pc}
    // mov r0, #6
    // pop {r3, pc}
    // mov r0, #5
    // pop {r3, pc}
    // mov r0, #3
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #8
    // pop {r3, pc}
    // TODO: decompile
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
    Heap_Free();
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
    // cmp r0, #0
    // beq _0224FB4E
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // str r1, [sp]
    // mov r1, #0x1b
    // add r4, r2, #0
    // add r2, r1, #0
    // add r6, r0, #0
    // add r7, r3, #0
    // mov r0, #0
    // add r2, #0xee
    // add r3, r4, #0
    // bl NewMsgDataFromNarc
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MessageFormat_New
    // add r4, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl FollowMon_PlaceholdersSet
    // add r0, r5, #0
    // add r1, r7, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r1, [sp]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_Delete
    // add r0, r5, #0
    // bl DestroyMsgData
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224FCE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r2, #0
    // add r5, r0, #0
    // str r1, [sp]
    // add r6, r3, #0
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0x28
    // add r3, r4, #0
    // bl NewMsgDataFromNarc
    // add r7, r0, #0
    // add r0, r4, #0
    // bl MessageFormat_New
    // add r4, r0, #0
    // mov r0, #2
    // tst r0, r6
    // ldr r0, [r5, #0xc]
    // beq _0224FD3E
    // bl Save_PlayerData_GetProfile
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0
    // bl BufferPlayersName
    // mov r1, #1
    // add r0, r6, #0
    // tst r0, r1
    // add r2, sp, #0x10
    // beq _0224FD30
    // ldrb r2, [r2, #0x10]
    // add r0, r4, #0
    // sub r2, r2, #1
    // bl BufferFashionName
    // mov r1, #0x20
    // b _0224FD72
    // ldrb r2, [r2, #0x10]
    // add r0, r4, #0
    // sub r2, r2, #1
    // bl BufferFashionNameWithArticle
    // mov r1, #0x5f
    // b _0224FD72
    // bl SaveArray_Party_Get
    // bl GetFirstAliveMonInParty_CrashIfNone
    // bl Mon_GetBoxMon
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // bl Save_PlayerData_GetProfile
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #0
    // bl BufferPlayersName
    // ldr r2, [sp, #4]
    // add r0, r4, #0
    // mov r1, #1
    // bl BufferBoxMonNickname
    // mov r0, #1
    // tst r0, r6
    // beq _0224FD70
    // mov r1, #0x61
    // b _0224FD72
    // mov r1, #0x62
    // add r0, r7, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // ldr r1, [sp]
    // add r0, r4, #0
    // add r2, r5, #0
    // bl StringExpandPlaceholders
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl MessageFormat_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov02_0224FD9C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // mov r0, #2
    // ldrsb r0, [r5, r0]
    // cmp r0, #0
    // beq _0224FDBC
    // ldr r1, [sp]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [sp]
    // mov r0, #3
    // ldrsb r0, [r5, r0]
    // cmp r0, #0
    // beq _0224FDDC
    // add r0, r4, #0
    // bl FollowMon_GetSpecies
    // cmp r0, #0x32
    // beq _0224FDDC
    // cmp r0, #0x33
    // beq _0224FDDC
    // mov r1, #3
    // ldrsb r1, [r5, r1]
    // add r0, r4, #0
    // bl ov01_021F8F74
    // mov r0, #4
    // ldrsb r0, [r5, r0]
    // cmp r0, #0
    // beq _0224FDEC
    // ldr r1, [sp, #8]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl MapObject_SetPositionVector
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r7, r0, #0
    // ldrb r0, [r5]
    // add r4, r2, #0
    // cmp r0, #0
    // beq _0224FE6C
    // add r0, r4, #0
    // bl MapObject_GetFacingDirection
    // ldrb r1, [r5]
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r4, #0
    // sub r1, r1, #1
    // bl MapObject_SetFacingDirectionDirect
    // add r0, r7, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov02_0224FE70
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r4, r2, #0
    // add r6, r1, #0
    // add r5, r3, #0
    // bl MapObject_GetXCoord
    // str r0, [r4]
    // add r0, r7, #0
    // bl MapObject_GetZCoord
    // str r0, [r5]
    // cmp r6, #3
    // bhi _0224FF54
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224FF2C: ; jump table
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5]
    // sub r0, r0, #1
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // sub r0, r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // add r4, r1, #0
    // bl SaveArray_Party_Get
    // bl GetFirstAliveMonInParty_CrashIfNone
    // add r6, r0, #0
    // bl Mon_GetBoxMon
    // add r7, r0, #0
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r7, #0
    // bl BufferBoxMonNickname
    // add r0, r4, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl BufferBoxMonSpeciesName
    // ldr r0, [r5, #0xc]
    // bl Save_PlayerData_GetProfile
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #2
    // bl BufferPlayersName
    // ldr r0, [r5, #0x20]
    // ldr r0, [r0]
    // bl MapHeader_GetMapSec
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #3
    // bl BufferLocationName
    // add r0, r6, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #4
    // bl BufferItemName
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
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
    // cmp r0, #0xa
    // bhi _02250622
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022505A4: ; jump table
    // cmp r1, #0xff
    // bne _02250622
    // mov r0, #1
    // bx lr
    // cmp r1, #0xc8
    // blt _02250622
    // cmp r1, #0xff
    // bge _02250622
    // mov r0, #1
    // bx lr
    // cmp r1, #0x96
    // blt _02250622
    // cmp r1, #0xc8
    // bge _02250622
    // mov r0, #1
    // bx lr
    // cmp r1, #0x5a
    // blt _02250622
    // cmp r1, #0x96
    // bge _02250622
    // mov r0, #1
    // bx lr
    // cmp r1, #0x3c
    // blt _02250622
    // cmp r1, #0x5a
    // bge _02250622
    // mov r0, #1
    // bx lr
    // cmp r1, #0x1e
    // blt _02250622
    // cmp r1, #0x3c
    // bge _02250622
    // mov r0, #1
    // bx lr
    // cmp r1, #1
    // blt _02250622
    // cmp r1, #0x1e
    // bge _02250622
    // mov r0, #1
    // bx lr
    // cmp r1, #0
    // bne _02250622
    // mov r0, #1
    // bx lr
    // cmp r1, #0x5a
    // blt _02250622
    // mov r0, #1
    // bx lr
    // cmp r1, #0x3c
    // bge _02250622
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov02_02250628(void) {
    // cmp r0, #0xa
    // bhi _022506CE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02250638: ; jump table
    // cmp r1, #0x7f
    // bne _022506CE
    // mov r0, #1
    // bx lr
    // cmp r1, #0x64
    // blt _022506CE
    // cmp r1, #0x7f
    // bge _022506CE
    // mov r0, #1
    // bx lr
    // cmp r1, #0x32
    // blt _022506CE
    // cmp r1, #0x64
    // bge _022506CE
    // mov r0, #1
    // bx lr
    // cmp r1, #0x1e
    // blt _022506CE
    // cmp r1, #0x32
    // bge _022506CE
    // mov r0, #1
    // bx lr
    // mov r0, #0x1d
    // mvn r0, r0
    // cmp r1, r0
    // ble _022506CE
    // cmp r1, #0x1e
    // bge _022506CE
    // mov r0, #1
    // bx lr
    // mov r0, #0x31
    // mvn r0, r0
    // cmp r1, r0
    // ble _022506CE
    // add r0, #0x14
    // cmp r1, r0
    // bgt _022506CE
    // mov r0, #1
    // bx lr
    // mov r0, #0x7e
    // mvn r0, r0
    // cmp r1, r0
    // ble _022506CE
    // add r0, #0x4d
    // cmp r1, r0
    // bgt _022506CE
    // mov r0, #1
    // bx lr
    // mov r0, #0x7e
    // mvn r0, r0
    // cmp r1, r0
    // bne _022506CE
    // mov r0, #1
    // bx lr
    // cmp r1, #0
    // blt _022506CE
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bgt _022506CE
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov02_022506D4(void) {
    // push {r3, lr}
    // cmp r0, #0xf9
    // bhi _022506E2
    // cmp r0, r1
    // bne _02250732
    // mov r0, #1
    // pop {r3, pc}
    // sub r0, #0xfa
    // cmp r0, #4
    // bhi _0225072A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022506F4: ; jump table
    // cmp r1, #0x13
    // bhi _02250732
    // mov r0, #1
    // pop {r3, pc}
    // cmp r1, #0x82
    // bhi _02250732
    // mov r0, #1
    // pop {r3, pc}
    // cmp r1, #0x8c
    // blo _02250732
    // cmp r1, #0x95
    // bhi _02250732
    // mov r0, #1
    // pop {r3, pc}
    // cmp r1, #0xa0
    // blo _02250732
    // mov r0, #1
    // pop {r3, pc}
    // cmp r1, #0xdc
    // blo _02250732
    // mov r0, #1
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
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
    // push {r4, r5, r6, lr}
    // ldr r0, [r0, #0xc]
    // add r5, r1, #0
    // bl SaveArray_Party_Get
    // bl GetFirstAliveMonInParty_CrashIfNone
    // add r6, r0, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // add r4, r0, #0
    // add r0, r6, #0
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // cmp r4, r5
    // beq _022507AC
    // cmp r0, r5
    // bne _022507B0
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
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

