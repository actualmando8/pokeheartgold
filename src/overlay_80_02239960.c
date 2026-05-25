/* Decompiled from asm/overlay_80_02239960.s */
#include "global.h"

void ov80_02239960(void) {
}



void ov80_02239980(void) {
    ov80_02239A98(*((u32*)r0));
    Heap_Free(r6);
}



void ov80_022399A4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // lsl r6, r1, #2
    // ldr r0, [r5, r6]
    // add r7, r2, #0
    // str r3, [sp, #8]
    // cmp r0, #0
    // beq _022399BA
    // bl GF_AssertFail
    // ldrh r0, [r5, #0x20]
    // mov r1, #0x12
    // lsl r1, r1, #0xa
    // bl Heap_Alloc
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldrh r0, [r5, #0x20]
    // mov r3, #0x12
    // ldr r1, _02239A14 ; =ov80_02239AD4
    // str r0, [sp, #4]
    // ldr r0, _02239A18 ; =ov80_02239AB0
    // lsl r3, r3, #0xa
    // bl sub_02014DB4
    // add r4, r0, #0
    // bl sub_02015524
    // add r2, r0, #0
    // mov r0, #1
    // mov r1, #0xe1
    // lsl r0, r0, #0xc
    // lsl r1, r1, #0xe
    // bl Camera_SetPerspectiveClippingPlane
    // ldr r1, [sp, #8]
    // add r0, r4, #0
    // bl sub_02015528
    // ldrh r2, [r5, #0x20]
    // mov r0, #0xbc
    // add r1, r7, #0
    // bl sub_02015264
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #0xa
    // mov r3, #1
    // bl sub_0201526C
    // str r4, [r5, r6]
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02239A14: .word ov80_02239AD4
    // _02239A18: .word ov80_02239AB0
    // TODO: decompile
}



void ov80_02239A1C(void) {
    // ldr r0, [r5, r4]
    GF_AssertFail();
    // ldr r0, [r5, r4]
    ov80_02239A98();
    // str r0, [r5, r4]
}



void ov80_02239A38(void) {
    Thunk_G3X_Reset();
    sub_02015420();
    sub_0201543C(0);
    Thunk_G3X_Reset();
    sub_02015460();
}



void ov80_02239A60(void) {
}



u32 ov80_02239A74(void) {
    sub_020154B0(*((u32*)r0));
}



void ov80_02239A98(void) {
}



void ov80_02239AB0(void) {
    // push {r4, lr}
    // ldr r3, _02239AD0 ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r2, #0
    // ldr r3, [r3]
    // blx r3
    // add r4, r0, #0
    // bne _02239AC2
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl sub_02015354
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0xd
    // pop {r4, pc}
    // nop
    // _02239AD0: .word NNS_GfdDefaultFuncAllocTexVram
    // TODO: decompile
}



void ov80_02239AD4(void) {
    // push {r4, lr}
    // ldr r3, _02239AF4 ; =NNS_GfdDefaultFuncAllocPlttVram
    // mov r2, #1
    // ldr r3, [r3]
    // blx r3
    // add r4, r0, #0
    // bne _02239AE6
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl sub_02015394
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0xd
    // pop {r4, pc}
    // nop
    // _02239AF4: .word NNS_GfdDefaultFuncAllocPlttVram
    // TODO: decompile
}


