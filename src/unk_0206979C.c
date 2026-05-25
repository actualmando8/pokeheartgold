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
    /* Original at 0x020697DC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [sp, #0x14]\n    add r4, r1, #0\n    add r1, r3, #0\n    str r0, [sp]\n    add r0, r2, #0\n    ldr r3, [sp, #0x10]\n    mov r2, #0\n    bl GfGfxLoader_LoadFromOpenNarc\n    add r1, r0, #0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl sub_020697A8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02069800(void) {
    sub_0206979C();
    *((u32*)(r5 + 8)) = r4;
    NNS_G3dGetAnmByIdx(r4, 0);
    *((u32*)(r5 + 0xc)) = r0;
}

void sub_02069818(void) {
    /* Original at 0x02069818 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    mov r0, #1\n    tst r0, r1\n    beq _02069832\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    ldr r1, [r4]\n    mov r0, #1\n    bic r1, r0\n    str r1, [r4]\n    mov r0, #0\n    str r0, [r4, #8]\n    str r0, [r4, #0xc]\n    pop {r4, pc}"
    );
    #endif
}

void sub_0206983C(void) {
    /* Original at 0x0206983C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r1, r2, #0\n    add r0, #0x14\n    mov r2, #4\n    bl HeapExp_FndInitAllocator\n    add r0, r5, #0\n    ldr r1, [r5, #0xc]\n    add r0, #0x14\n    add r2, r4, #0\n    bl NNS_G3dAllocAnmObj\n    str r0, [r5, #0x10]\n    cmp r0, #0\n    bne _02069862\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02069864(void) {
    sub_0206983C();
}

void sub_02069870(void) {
    NNS_G3dAnmObjInit();
}

void sub_02069884(void) {
    /* Original at 0x02069884 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02069890 ; =sub_02069870\n    add r2, r1, #0\n    ldr r1, [r2, #0xc]\n    ldr r2, [r2, #0x10]\n    bx r3\n    nop\n    _02069890: .word sub_02069870"
    );
    #endif
}

void sub_02069894(void) {
    /* Original at 0x02069894 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    add r5, r0, #0\n    bl sub_020697D0\n    ldr r2, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02069864\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02069884\n    pop {r3, r4, r5, pc}"
    );
    #endif
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
    /* Original at 0x020698E8 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r3, [r0, #0x10]\n    ldr r6, [r0, #4]\n    ldr r3, [r3, #8]\n    mov r4, #0\n    ldrh r3, [r3, #4]\n    add r6, r6, r1\n    add r5, r4, #0\n    str r6, [r0, #4]\n    lsl r3, r3, #0xc\n    cmp r1, #0\n    ldr r1, [r0, #4]\n    ble _02069916\n    cmp r1, r3\n    blt _02069928\n    mov r5, #1\n    cmp r2, #1\n    bne _02069912\n    sub r1, r1, r3\n    str r1, [r0, #4]\n    b _02069928\n    str r3, [r0, #4]\n    b _02069928\n    cmp r1, #0\n    bgt _02069928\n    mov r5, #1\n    cmp r2, #1\n    bne _02069926\n    add r1, r1, r3\n    str r1, [r0, #4]\n    b _02069928\n    str r4, [r0, #4]\n    ldr r2, [r0, #4]\n    ldr r1, [r0, #0x10]\n    cmp r5, #1\n    str r2, [r1]\n    ldr r2, [r0]\n    bne _0206993C\n    mov r1, #2\n    orr r1, r2\n    str r1, [r0]\n    b _02069942\n    mov r1, #2\n    bic r2, r1\n    str r2, [r0]\n    add r0, r5, #0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void sub_02069948(void) {
    /* Original at 0x02069948 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _02069954\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
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
