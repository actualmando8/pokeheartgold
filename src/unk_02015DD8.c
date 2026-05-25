/* Decompiled from asm/unk_02015DD8.s */
#include "global.h"

void sub_02015DDC(void) {
    /* Original at 0x02015DDC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r1, #0x18\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02015DF0\n    bl GF_AssertFail\n    ldr r0, [r5]\n    ldr r1, [r5, #0xc]\n    bl sub_0201605C\n    str r0, [r4]\n    ldr r0, [r5]\n    str r0, [r4, #4]\n    ldr r0, [r5, #4]\n    ldr r1, [r5, #0xc]\n    bl sub_0201608C\n    str r0, [r4, #8]\n    ldr r0, [r5, #4]\n    str r0, [r4, #0xc]\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #0xc]\n    bl sub_020160BC\n    str r0, [r4, #0x10]\n    ldr r0, [r5, #8]\n    str r0, [r4, #0x14]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02015E20(void) {
    /* Original at 0x02015E20 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _02015E2A\n    bl GF_AssertFail\n    ldr r0, [r4]\n    cmp r0, #0\n    bne _02015E34\n    bl GF_AssertFail\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    bne _02015E3E\n    bl GF_AssertFail\n    ldr r0, [r4, #0x10]\n    cmp r0, #0\n    bne _02015E48\n    bl GF_AssertFail\n    ldr r0, [r4]\n    bl Heap_Free\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    ldr r0, [r4, #0x10]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void sub_02015E64(void) {
    /* Original at 0x02015E64 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _02015E98 ; =0x04000444\n    mov r6, #0\n    str r6, [r0]\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    ble _02015E8E\n    add r4, r6, #0\n    ldr r0, [r5]\n    add r0, r0, r4\n    ldr r1, [r0, #0x20]\n    cmp r1, #0\n    beq _02015E84\n    bl sub_020161CC\n    ldr r0, [r5, #4]\n    add r6, r6, #1\n    add r4, #0x40\n    cmp r6, r0\n    blt _02015E76\n    ldr r0, _02015E9C ; =0x04000448\n    mov r1, #1\n    str r1, [r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _02015E98: .word 0x04000444\n    _02015E9C: .word 0x04000448"
    );
    #endif
}

void sub_02015EA0(void) {
    /* Original at 0x02015EA0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl sub_02016118\n    add r4, r0, #0\n    bne _02015EB2\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _02015EBE\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    bl sub_02016170\n    str r0, [r4]\n    cmp r0, #0\n    bne _02015ECE\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    ldr r1, [r4]\n    add r2, r4, #4\n    bl sub_02016198\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02015EDC(void) {
    sub_02016044();
}

void sub_02015EF4(void) {
    /* Original at 0x02015EF4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    cmp r0, #0\n    ble _02015F1A\n    add r4, r6, #0\n    ldr r1, [r5, #8]\n    ldr r0, [r1, r4]\n    cmp r0, #0\n    beq _02015F10\n    add r0, r1, r4\n    bl sub_02015EDC\n    ldr r0, [r5, #0xc]\n    add r6, r6, #1\n    add r4, #0x28\n    cmp r6, r0\n    blt _02015F02\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02015F1C(void) {
    /* Original at 0x02015F1C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl sub_02016144\n    add r4, r0, #0\n    bne _02015F2E\n    bl GF_AssertFail\n    ldr r0, [r5, #8]\n    bl sub_02016184\n    str r0, [r4]\n    cmp r0, #0\n    bne _02015F3E\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    ldr r1, [r4]\n    add r2, r4, #4\n    bl sub_020161A8\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02015F4C(void) {
    sub_02016050();
}

void sub_02015F64(void) {
    /* Original at 0x02015F64 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    mov r6, #0\n    cmp r0, #0\n    ble _02015F8A\n    add r4, r6, #0\n    ldr r1, [r5, #0x10]\n    ldr r0, [r1, r4]\n    cmp r0, #0\n    beq _02015F80\n    add r0, r1, r4\n    bl sub_02015F4C\n    ldr r0, [r5, #0x14]\n    add r6, r6, #1\n    add r4, #0x18\n    cmp r6, r0\n    blt _02015F72\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02015F8C(void) {
    /* Original at 0x02015F8C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl sub_020160EC\n    add r4, r0, #0\n    bne _02015F9E\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_0201630C\n    mov r0, #1\n    str r0, [r4, #0x1c]\n    str r0, [r4, #0x20]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02015FB0(void) {
    GF_AssertFail();
}

void sub_02015FC4(void) {
    *(u16*)r0 = r1;
    ((u16*)r0)[2] = r2;
}

void sub_02015FCC(void) {
    /* Original at 0x02015FCC */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #2]\n    ldrh r0, [r0]\n    lsl r1, r1, #0x10\n    orr r0, r1\n    bx lr"
    );
    #endif
}

void sub_02015FD8(void) {
    ((u16*)r0)[4] = r1;
    ((u16*)r0)[6] = r2;
}

void sub_02015FE0(void) {
    ((u16*)r0)[8] = r1;
    ((u16*)r0)[0xa] = r2;
}

void sub_02015FE8(void) {
    /* Original at 0x02015FE8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #0xa]\n    ldrh r0, [r0, #8]\n    lsl r1, r1, #0x10\n    orr r0, r1\n    bx lr"
    );
    #endif
}

void sub_02015FF4(void) {
    ((u32*)r0)[0x14] = r1;
}

void sub_02015FF8(void) {
    /* Original at 0x02015FF8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void sub_02015FFC(void) {
    /* Original at 0x02015FFC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x3e\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02016004(void) {
    ((u32*)r0)[0x24] = r1;
}

void sub_02016008(void) {
    ((u32*)r0)[0x28] = r1;
}

void sub_0201600C(void) {
    ((u32*)r0)[0x2c] = r1;
}

void sub_02016010(void) {
    ((u32*)r0)[0x30] = r1;
}

void sub_02016014(void) {
    /* Original at 0x02016014 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    bne _0201601C\n    str r2, [r0, #0x34]\n    bx lr\n    str r2, [r0, #0x38]\n    bx lr"
    );
    #endif
}

void sub_02016020(void) {
    ((u32*)r0)[0x18] = r1;
}

void sub_02016024(void) {
    memset(0, 0x1f, 0x40);
}

void sub_02016044(void) {
    NNS_G2dInitImageProxy();
}

void sub_02016050(void) {
    NNS_G2dInitImagePaletteProxy();
}

void sub_0201605C(void) {
    /* Original at 0x0201605C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r0, r1, #0\n    lsl r1, r6, #6\n    bl Heap_Alloc\n    add r7, r0, #0\n    bne _02016070\n    bl GF_AssertFail\n    mov r4, #0\n    cmp r6, #0\n    ble _02016086\n    add r5, r7, #0\n    add r0, r5, #0\n    bl sub_02016024\n    add r4, r4, #1\n    add r5, #0x40\n    cmp r4, r6\n    blt _02016078\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0201608C(void) {
    /* Original at 0x0201608C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r0, r1, #0\n    mov r1, #0x28\n    mul r1, r6\n    bl Heap_Alloc\n    add r7, r0, #0\n    bne _020160A2\n    bl GF_AssertFail\n    mov r4, #0\n    cmp r6, #0\n    ble _020160B8\n    add r5, r7, #0\n    add r0, r5, #0\n    bl sub_02016044\n    add r4, r4, #1\n    add r5, #0x28\n    cmp r4, r6\n    blt _020160AA\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020160BC(void) {
    /* Original at 0x020160BC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r0, r1, #0\n    mov r1, #0x18\n    mul r1, r6\n    bl Heap_Alloc\n    add r7, r0, #0\n    bne _020160D2\n    bl GF_AssertFail\n    mov r4, #0\n    cmp r6, #0\n    ble _020160E8\n    add r5, r7, #0\n    add r0, r5, #0\n    bl sub_02016050\n    add r4, r4, #1\n    add r5, #0x18\n    cmp r4, r6\n    blt _020160DA\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020160EC(void) {
    /* Original at 0x020160EC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #4]\n    mov r1, #0\n    cmp r4, #0\n    ble _02016110\n    ldr r3, [r0]\n    add r2, r3, #0\n    ldr r0, [r2, #0x1c]\n    cmp r0, #0\n    bne _02016108\n    lsl r0, r1, #6\n    add r0, r3, r0\n    pop {r3, r4}\n    bx lr\n    add r1, r1, #1\n    add r2, #0x40\n    cmp r1, r4\n    blt _020160FA\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02016118(void) {
    /* Original at 0x02016118 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #4]\n    mov r1, #0\n    cmp r4, #0\n    ble _0201613E\n    ldr r3, [r0, #8]\n    add r2, r3, #0\n    ldr r0, [r2]\n    cmp r0, #0\n    bne _02016136\n    mov r0, #0x28\n    mul r0, r1\n    add r0, r3, r0\n    pop {r3, r4}\n    bx lr\n    add r1, r1, #1\n    add r2, #0x28\n    cmp r1, r4\n    blt _02016126\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02016144(void) {
    /* Original at 0x02016144 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, [r0, #4]\n    mov r1, #0\n    cmp r4, #0\n    ble _0201616A\n    ldr r3, [r0, #0x10]\n    add r2, r3, #0\n    ldr r0, [r2]\n    cmp r0, #0\n    bne _02016162\n    mov r0, #0x18\n    mul r0, r1\n    add r0, r3, r0\n    pop {r3, r4}\n    bx lr\n    add r1, r1, #1\n    add r2, #0x18\n    cmp r1, r4\n    blt _02016152\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02016170(void) {
    /* Original at 0x02016170 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _02016180 ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r1, #0\n    ldr r0, [r0, #0x10]\n    ldr r3, [r3]\n    add r2, r1, #0\n    blx r3\n    pop {r3, pc}\n    _02016180: .word NNS_GfdDefaultFuncAllocTexVram"
    );
    #endif
}

void sub_02016184(void) {
    /* Original at 0x02016184 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _02016194 ; =NNS_GfdDefaultFuncAllocPlttVram\n    mov r1, #0\n    ldr r3, [r3]\n    lsl r0, r0, #5\n    add r2, r1, #0\n    blx r3\n    pop {r3, pc}\n    _02016194: .word NNS_GfdDefaultFuncAllocPlttVram"
    );
    #endif
}

void sub_02016198(void) {
    NNS_G2dLoadImage2DMapping();
}

void sub_020161A8(void) {
    /* Original at 0x020161A8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r2, #0\n    ldr r2, _020161C8 ; =0xFFFF0000\n    add r5, r0, #0\n    and r2, r1\n    lsr r2, r2, #0x10\n    lsl r1, r1, #0x10\n    ldr r4, [r5, #8]\n    lsl r2, r2, #3\n    str r2, [r5, #8]\n    lsr r1, r1, #0xd\n    mov r2, #0\n    bl NNS_G2dLoadPalette\n    str r4, [r5, #8]\n    pop {r3, r4, r5, pc}\n    _020161C8: .word 0xFFFF0000"
    );
    #endif
}

void sub_020161CC(void) {
    /* Original at 0x020161CC */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r7, _020162EC ; =0x04000444\n    mov r6, #0\n    add r5, r0, #0\n    str r6, [r7]\n    ldrh r1, [r5, #0x3c]\n    ldr r0, _020162F0 ; =0x7FFF8000\n    orr r0, r1\n    str r0, [r7, #0x7c]\n    add r0, r7, #0\n    ldr r1, _020162F4 ; =0x00004210\n    add r0, #0x80\n    str r1, [r0]\n    ldr r3, [r5, #0x24]\n    ldr r4, [r3, #8]\n    ldr r2, [r3, #0x10]\n    ldr r1, [r3, #4]\n    ldr r0, [r3]\n    lsl r3, r2, #0x1d\n    lsl r2, r1, #0x17\n    lsl r1, r0, #0x14\n    ldr r0, [r5, #0x28]\n    lsl r4, r4, #0x1a\n    lsr r0, r0, #3\n    orr r4, r0\n    mov r0, #1\n    lsl r0, r0, #0x1e\n    orr r0, r4\n    orr r0, r1\n    orr r0, r2\n    orr r0, r3\n    str r0, [r7, #0x64]\n    ldr r0, [r5, #0x24]\n    ldr r0, [r0, #8]\n    cmp r0, #2\n    bne _02016218\n    mov r6, #1\n    ldr r0, [r5, #0x30]\n    ldr r1, [r5, #0x2c]\n    lsl r0, r0, #5\n    add r1, r1, r0\n    mov r0, #4\n    sub r0, r0, r6\n    lsr r1, r0\n    ldr r2, _020162F8 ; =0x040004AC\n    add r0, r5, #0\n    str r1, [r2]\n    add r0, #0x3e\n    ldrb r0, [r0]\n    sub r2, #8\n    lsl r1, r0, #0x10\n    mov r0, #0xc0\n    orr r0, r1\n    str r0, [r2]\n    ldr r0, [r5, #0x34]\n    cmp r0, #0\n    beq _0201624A\n    mov r0, #8\n    ldrsh r0, [r5, r0]\n    mov r7, #0\n    str r0, [sp, #0x14]\n    b _02016252\n    mov r0, #8\n    ldrsh r7, [r5, r0]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x38]\n    cmp r0, #0\n    beq _02016260\n    mov r0, #0xa\n    ldrsh r6, [r5, r0]\n    mov r4, #0\n    b _02016266\n    mov r0, #0xa\n    ldrsh r4, [r5, r0]\n    mov r6, #0\n    ldr r0, [r5, #0x14]\n    mov r1, #6\n    lsl r2, r0, #0xc\n    mov r0, #2\n    ldrsh r0, [r5, r0]\n    ldrsh r1, [r5, r1]\n    mov r3, #4\n    ldrsh r3, [r5, r3]\n    add r0, r0, r1\n    lsl r1, r0, #0xc\n    mov r0, #0\n    ldrsh r0, [r5, r0]\n    add r0, r0, r3\n    ldr r3, _020162FC ; =0x04000470\n    lsl r0, r0, #0xc\n    str r0, [r3]\n    str r1, [r3]\n    str r2, [r3]\n    ldr r0, [r5, #0x18]\n    ldr r1, _02016300 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r0, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r0, [r1, r0]\n    ldrsh r1, [r1, r2]\n    bl G3_RotZ\n    ldr r2, [r5, #0x10]\n    ldr r0, [r5, #0xc]\n    ldr r1, _02016304 ; =0x0400046C\n    mov r3, #8\n    str r0, [r1]\n    str r2, [r1]\n    lsr r0, r1, #0xe\n    str r0, [r1]\n    mov r2, #4\n    mov r0, #6\n    ldrsh r2, [r5, r2]\n    ldrsh r0, [r5, r0]\n    neg r2, r2\n    neg r0, r0\n    lsl r2, r2, #0xc\n    lsl r0, r0, #0xc\n    str r2, [r1, #4]\n    str r0, [r1, #4]\n    mov r0, #0\n    str r0, [r1, #4]\n    mov r1, #0xa\n    ldrsh r1, [r5, r1]\n    add r2, r0, #0\n    str r1, [sp]\n    ldr r1, [sp, #0x14]\n    str r1, [sp, #4]\n    str r6, [sp, #8]\n    str r7, [sp, #0xc]\n    str r4, [sp, #0x10]\n    ldrsh r3, [r5, r3]\n    add r1, r0, #0\n    bl NNS_G2dDrawSpriteFast\n    ldr r0, _02016308 ; =0x04000448\n    mov r1, #1\n    str r1, [r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _020162EC: .word 0x04000444\n    _020162F0: .word 0x7FFF8000\n    _020162F4: .word 0x00004210\n    _020162F8: .word 0x040004AC\n    _020162FC: .word 0x04000470\n    _02016300: .word FX_SinCosTable_\n    _02016304: .word 0x0400046C\n    _02016308: .word 0x04000448"
    );
    #endif
}

void sub_0201630C(void) {
    /* Original at 0x0201630C */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    ldr r1, [r5, #4]\n    add r7, r0, #0\n    ldr r2, [r1, #0x10]\n    mov r6, #8\n    mov r0, #0\n    cmp r2, #0\n    ble _0201632A\n    ldr r2, [r5, #4]\n    add r0, r0, #1\n    ldr r2, [r2, #0x10]\n    lsl r6, r6, #1\n    cmp r0, r2\n    blt _0201631E\n    ldr r1, [r1, #0x14]\n    mov r4, #8\n    mov r0, #0\n    cmp r1, #0\n    ble _02016340\n    ldr r1, [r5, #4]\n    add r0, r0, #1\n    ldr r1, [r1, #0x14]\n    lsl r4, r4, #1\n    cmp r0, r1\n    blt _02016334\n    mov r1, #0xc\n    mov r2, #0xe\n    ldrsh r1, [r5, r1]\n    ldrsh r2, [r5, r2]\n    add r0, r7, #0\n    bl sub_02015FC4\n    lsr r1, r6, #0x1f\n    lsr r2, r4, #0x1f\n    add r1, r6, r1\n    add r2, r4, r2\n    lsl r1, r1, #0xf\n    lsl r2, r2, #0xf\n    add r0, r7, #0\n    asr r1, r1, #0x10\n    asr r2, r2, #0x10\n    bl sub_02015FD8\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [r7, #0xc]\n    str r0, [r7, #0x10]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl sub_02015FE0\n    ldr r1, [r5, #0x18]\n    add r0, r7, #0\n    bl sub_02015FF4\n    ldr r1, [r5, #0x14]\n    add r0, r7, #0\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_02015FFC\n    ldr r1, [r5, #4]\n    add r0, r7, #0\n    add r1, #0x10\n    bl sub_02016004\n    ldr r0, [r5, #4]\n    mov r1, #0\n    add r0, r0, #4\n    bl NNS_G2dGetImageLocation\n    add r1, r0, #0\n    add r0, r7, #0\n    bl sub_02016008\n    ldr r0, [r5, #8]\n    mov r1, #0\n    add r0, r0, #4\n    bl NNS_G2dGetImagePaletteLocation\n    add r1, r0, #0\n    add r0, r7, #0\n    bl sub_0201600C\n    ldrh r1, [r5, #0x1c]\n    add r0, r7, #0\n    bl sub_02016010\n    mov r1, #0\n    add r0, r7, #0\n    add r2, r1, #0\n    bl sub_02016014\n    add r0, r7, #0\n    mov r1, #1\n    mov r2, #0\n    bl sub_02016014\n    ldrh r1, [r5, #0x10]\n    add r0, r7, #0\n    bl sub_02016020\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
