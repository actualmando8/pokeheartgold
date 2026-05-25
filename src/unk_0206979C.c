/* Decompiled from asm/unk_0206979C.s */
#include "global.h"

void sub_0206979C(void) {
    memset();
}


void sub_020697A8(void) {
    sub_02069800(1);
}


void sub_020697BC(void) {
    sub_02069800(1);
}


void sub_020697D0(void) {
    sub_020697BC();
}


void sub_020697DC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [sp, #0x14]
    // add r4, r1, #0
    // add r1, r3, #0
    // str r0, [sp]
    // add r0, r2, #0
    // ldr r3, [sp, #0x10]
    // mov r2, #0
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r1, r0, #0
    // add r0, r5, #0
    // add r2, r4, #0
    // bl sub_020697A8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02069800(void) {
    sub_0206979C();
    *((u32*)(r5 + 8)) = r4;
    NNS_G3dGetAnmByIdx(r4, 0);
    *((u32*)(r5 + 0xc)) = r0;
}


void sub_02069818(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4]
    // mov r0, #1
    // tst r0, r1
    // beq _02069832
    // ldr r0, [r4, #8]
    // bl Heap_Free
    // ldr r1, [r4]
    // mov r0, #1
    // bic r1, r0
    // str r1, [r4]
    // mov r0, #0
    // str r0, [r4, #8]
    // str r0, [r4, #0xc]
    // pop {r4, pc}
    // TODO: decompile
}


void sub_0206983C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r1, r2, #0
    // add r0, #0x14
    // mov r2, #4
    // bl HeapExp_FndInitAllocator
    // add r0, r5, #0
    // ldr r1, [r5, #0xc]
    // add r0, #0x14
    // add r2, r4, #0
    // bl NNS_G3dAllocAnmObj
    // str r0, [r5, #0x10]
    // cmp r0, #0
    // bne _02069862
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02069864(void) {
    sub_0206983C();
}


void sub_02069870(void) {
    NNS_G3dAnmObjInit();
}


void sub_02069884(void) {
    // ldr r3, _02069890 ; =sub_02069870
    // add r2, r1, #0
    // ldr r1, [r2, #0xc]
    // ldr r2, [r2, #0x10]
    // bx r3
    // nop
    // _02069890: .word sub_02069870
    // TODO: decompile
}


void sub_02069894(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r1, r2, #0
    // add r2, r3, #0
    // add r5, r0, #0
    // bl sub_020697D0
    // ldr r2, [sp, #0x10]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02069864
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02069884
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020698B8(void) {
    NNS_G3dFreeAnmObj(0);
}


void sub_020698D0(void) {
    sub_020698B8();
    sub_02069818(r4);
    sub_0206979C(r4);
}


void sub_020698E8(void) {
    // push {r3, r4, r5, r6}
    // ldr r3, [r0, #0x10]
    // ldr r6, [r0, #4]
    // ldr r3, [r3, #8]
    // mov r4, #0
    // ldrh r3, [r3, #4]
    // add r6, r6, r1
    // add r5, r4, #0
    // str r6, [r0, #4]
    // lsl r3, r3, #0xc
    // cmp r1, #0
    // ldr r1, [r0, #4]
    // ble _02069916
    // cmp r1, r3
    // blt _02069928
    // mov r5, #1
    // cmp r2, #1
    // bne _02069912
    // sub r1, r1, r3
    // str r1, [r0, #4]
    // b _02069928
    // str r3, [r0, #4]
    // b _02069928
    // cmp r1, #0
    // bgt _02069928
    // mov r5, #1
    // cmp r2, #1
    // bne _02069926
    // add r1, r1, r3
    // str r1, [r0, #4]
    // b _02069928
    // str r4, [r0, #4]
    // ldr r2, [r0, #4]
    // ldr r1, [r0, #0x10]
    // cmp r5, #1
    // str r2, [r1]
    // ldr r2, [r0]
    // bne _0206993C
    // mov r1, #2
    // orr r1, r2
    // str r1, [r0]
    // b _02069942
    // mov r1, #2
    // bic r2, r1
    // str r2, [r0]
    // add r0, r5, #0
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}


void sub_02069948(void) {
    // ldr r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _02069954
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02069958(void) {
    memset();
}


void sub_02069964(void) {
    sub_02069958();
    NNS_G3dRenderObjInit(r5, r4);
}


void sub_02069978(void) {
    sub_02069964();
}


void sub_02069984(void) {
    NNS_G3dRenderObjAddAnmObj();
}


void sub_0206998C(void) {
    sub_02069984();
}


void sub_02069998(void) {
    sub_02069978();
    sub_0206998C(r5, r4);
}


void sub_020699AC(void) {
    GF3dRender_DrawModel();
}


void sub_020699BC(void) {
    sub_020699AC();
}


void sub_020699D0(void) {
    sub_02020DA4();
    sub_020699AC(r5, r4, r6);
}

