/* Decompiled from asm/unk_0203A3B0.s */
#include "global.h"

void sub_0203A3B0(void) {
    /* Original at 0x0203A3B0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r2, #0\n    add r6, r3, #0\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0x1c]\n    add r3, r4, #0\n    bl sub_0203A4D4\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x10]\n    add r2, r4, #0\n    bl sub_0203A59C\n    add r0, r4, #0\n    mov r1, #0x24\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    ldr r0, _0203A428 ; =sub_0203A42C\n    add r1, r4, #0\n    mov r2, #5\n    bl SysTask_CreateOnVWaitQueue\n    str r0, [r4, #0x18]\n    ldr r2, [sp, #0x1c]\n    strh r5, [r4, #0xc]\n    asr r1, r2, #4\n    lsr r1, r1, #0x1b\n    add r1, r2, r1\n    asr r2, r1, #5\n    add r1, r4, #0\n    strh r6, [r4, #0xe]\n    mov r0, #0\n    str r0, [r4]\n    add r1, #0x20\n    strb r2, [r1]\n    add r1, r4, #0\n    ldr r2, [sp, #0x18]\n    add r1, #0x21\n    strb r2, [r1]\n    add r1, r4, #0\n    add r1, #0x22\n    strb r0, [r1]\n    mov r1, #3\n    str r1, [r4, #4]\n    ldr r1, [sp, #0x14]\n    str r1, [r4, #0x14]\n    ldr r1, [sp, #0x10]\n    str r0, [r4, #8]\n    strb r1, [r4, #0x10]\n    strb r0, [r4, #0x12]\n    strb r0, [r4, #0x11]\n    mov r0, #7\n    lsl r0, r0, #0x18\n    str r0, [r4, #0x1c]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _0203A428: .word sub_0203A42C"
    );
    #endif
}

void sub_0203A42C(void) {
    sub_0203A700();
}

void sub_0203A438(void) {
    /* Original at 0x0203A438 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #4\n    bge _0203A442\n    str r1, [r0, #4]\n    mov r1, #0\n    str r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void sub_0203A444(void) {
    /* Original at 0x0203A444 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    bl SysTask_Destroy\n    mov r0, #7\n    ldr r2, _0203A470 ; =0x40000200\n    lsl r0, r0, #0x18\n    str r2, [r0]\n    mov r1, #0\n    strh r1, [r0, #4]\n    ldrb r0, [r4, #0x12]\n    cmp r0, #0\n    beq _0203A466\n    ldr r0, _0203A474 ; =0x07000400\n    str r2, [r0]\n    strh r1, [r0, #4]\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    nop\n    _0203A470: .word 0x40000200\n    _0203A474: .word 0x07000400"
    );
    #endif
}

void sub_0203A478(void) {
    /* Original at 0x0203A478 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    mov r2, #7\n    ldrb r1, [r5, #0x10]\n    mov r0, #2\n    lsl r2, r2, #6\n    add r3, r6, #0\n    bl sub_0203A4D4\n    ldrb r1, [r5, #0x10]\n    mov r0, #2\n    add r2, r6, #0\n    bl sub_0203A59C\n    cmp r4, #0\n    beq _0203A4A0\n    mov r0, #1\n    b _0203A4A2\n    mov r0, #2\n    strb r0, [r5, #0x11]\n    mov r0, #1\n    strb r0, [r5, #0x12]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0203A4AC(void) {
    /* Original at 0x0203A4AC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0x96\n    lsl r1, r1, #2\n    bl Heap_AllocAtEnd\n    str r0, [sp]\n    ldr r0, _0203A4D0 ; =_0210F930\n    add r1, sp, #0\n    bl sub_0201A3F8\n    mov r1, #0x96\n    ldr r0, [sp]\n    lsl r1, r1, #2\n    bl DC_FlushRange\n    ldr r0, [sp]\n    pop {r3, pc}\n    nop\n    _0203A4D0: .word _0210F930"
    );
    #endif
}

void sub_0203A4D4(void) {
    /* Original at 0x0203A4D4 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    mov r1, #0x96\n    add r5, r0, #0\n    add r0, r3, #0\n    lsl r1, r1, #2\n    add r4, r2, #0\n    bl Heap_AllocAtEnd\n    str r0, [sp, #4]\n    cmp r0, #0\n    beq _0203A52A\n    ldr r0, _0203A530 ; =_0210F930\n    add r1, sp, #4\n    bl sub_0201A3F8\n    mov r1, #0x96\n    ldr r0, [sp, #4]\n    lsl r1, r1, #2\n    bl DC_FlushRange\n    ldr r0, [sp, #4]\n    add r1, sp, #0\n    bl NNS_G2dGetUnpackedPaletteData\n    cmp r5, #1\n    bne _0203A518\n    ldr r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r0, #0xc]\n    mov r2, #0x20\n    bl GX_LoadOBJPltt\n    b _0203A524\n    ldr r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r0, #0xc]\n    mov r2, #0x20\n    bl GXS_LoadOBJPltt\n    ldr r0, [sp, #4]\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0203A530: .word _0210F930"
    );
    #endif
}

void sub_0203A534(void) {
    /* Original at 0x0203A534 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, lr}\n    cmp r0, #0\n    ldr r0, _0203A58C ; =0x00300010\n    beq _0203A550\n    cmp r1, r0\n    bne _0203A546\n    bl GF_AssertFail\n    ldr r0, _0203A590 ; =_0210F940\n    add r1, sp, #0x14\n    bl sub_0201A3F8\n    b _0203A578\n    cmp r1, r0\n    add r1, sp, #0x14\n    beq _0203A568\n    ldr r0, _0203A594 ; =_0210F954\n    bl sub_0201A3F8\n    mov r1, #0x96\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    bl DC_FlushRange\n    b _0203A578\n    ldr r0, _0203A598 ; =_0210F964\n    bl sub_0201A3F8\n    mov r1, #0x13\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    ldr r0, [sp, #0x14]\n    add r1, sp, #0\n    bl NNS_G2dGetUnpackedBGCharacterData\n    ldr r0, [sp]\n    pop {r3}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    nop\n    _0203A58C: .word 0x00300010\n    _0203A590: .word _0210F940\n    _0203A594: .word _0210F954\n    _0203A598: .word _0210F964"
    );
    #endif
}

void sub_0203A59C(void) {
    /* Original at 0x0203A59C */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    add r5, r2, #0\n    str r1, [sp]\n    cmp r7, #1\n    bne _0203A5BC\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r1, [r0]\n    ldr r0, _0203A6E8 ; =0x00300010\n    add r4, r1, #0\n    and r4, r0\n    bl GX_GetBankForOBJ\n    b _0203A5CA\n    ldr r0, _0203A6EC ; =0x04001000\n    ldr r1, [r0]\n    ldr r0, _0203A6E8 ; =0x00300010\n    add r4, r1, #0\n    and r4, r0\n    bl GX_GetBankForSubOBJ\n    add r6, r0, #0\n    ldr r0, _0203A6E8 ; =0x00300010\n    cmp r4, r0\n    bne _0203A5E0\n    mov r1, #0x13\n    add r0, r5, #0\n    lsl r1, r1, #6\n    bl Heap_AllocAtEnd\n    str r0, [sp, #4]\n    b _0203A5EC\n    mov r1, #0x96\n    add r0, r5, #0\n    lsl r1, r1, #2\n    bl Heap_AllocAtEnd\n    str r0, [sp, #4]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _0203A6E2\n    ldr r0, [sp]\n    ldr r3, [sp, #4]\n    add r1, r4, #0\n    add r2, r5, #0\n    bl sub_0203A534\n    add r5, r0, #0\n    ldr r0, _0203A6F0 ; =0x00100010\n    cmp r4, r0\n    bgt _0203A60E\n    bge _0203A634\n    cmp r4, #0x10\n    beq _0203A620\n    b _0203A66E\n    ldr r0, _0203A6F4 ; =0x00200010\n    cmp r4, r0\n    bgt _0203A618\n    beq _0203A64E\n    b _0203A66E\n    ldr r0, _0203A6E8 ; =0x00300010\n    cmp r4, r0\n    beq _0203A668\n    b _0203A66E\n    cmp r6, #0x40\n    beq _0203A628\n    cmp r6, #0x20\n    bne _0203A62E\n    mov r6, #0x3e\n    lsl r6, r6, #8\n    b _0203A672\n    mov r6, #0x7e\n    lsl r6, r6, #8\n    b _0203A672\n    cmp r6, #0x40\n    beq _0203A642\n    cmp r6, #0x20\n    beq _0203A642\n    lsr r0, r0, #0xc\n    cmp r6, r0\n    bne _0203A648\n    mov r6, #0x3e\n    lsl r6, r6, #8\n    b _0203A672\n    mov r6, #0xfe\n    lsl r6, r6, #8\n    b _0203A672\n    cmp r6, #0x30\n    beq _0203A656\n    cmp r6, #0x50\n    bne _0203A65A\n    ldr r6, _0203A6F8 ; =0x00013E00\n    b _0203A672\n    cmp r6, #0x10\n    bne _0203A664\n    mov r6, #0xfe\n    lsl r6, r6, #8\n    b _0203A672\n    ldr r6, _0203A6FC ; =0x0001FE00\n    b _0203A672\n    mov r6, #0xff\n    lsl r6, r6, #0xa\n    b _0203A672\n    mov r6, #0xfe\n    lsl r6, r6, #8\n    cmp r7, #1\n    ldr r0, _0203A6E8 ; =0x00300010\n    bne _0203A6AA\n    cmp r4, r0\n    ldr r0, [r5, #0x14]\n    beq _0203A694\n    mov r1, #2\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    mov r2, #2\n    ldr r0, [r5, #0x14]\n    add r1, r6, #0\n    lsl r2, r2, #8\n    bl GX_LoadOBJ\n    b _0203A6DC\n    mov r1, #1\n    lsl r1, r1, #0xa\n    bl DC_FlushRange\n    mov r2, #1\n    ldr r0, [r5, #0x14]\n    add r1, r6, #0\n    lsl r2, r2, #0xa\n    bl GX_LoadOBJ\n    b _0203A6DC\n    cmp r4, r0\n    ldr r0, [r5, #0x14]\n    beq _0203A6C6\n    mov r1, #2\n    lsl r1, r1, #8\n    bl DC_FlushRange\n    mov r2, #2\n    ldr r0, [r5, #0x14]\n    add r1, r6, #0\n    lsl r2, r2, #8\n    bl GXS_LoadOBJ\n    b _0203A6DC\n    mov r1, #1\n    lsl r1, r1, #0xa\n    bl DC_FlushRange\n    mov r1, #0xf\n    mov r2, #1\n    ldr r0, [r5, #0x14]\n    lsl r1, r1, #0xa\n    lsl r2, r2, #0xa\n    bl GXS_LoadOBJ\n    ldr r0, [sp, #4]\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0203A6E8: .word 0x00300010\n    _0203A6EC: .word 0x04001000\n    _0203A6F0: .word 0x00100010\n    _0203A6F4: .word 0x00200010\n    _0203A6F8: .word 0x00013E00\n    _0203A6FC: .word 0x0001FE00"
    );
    #endif
}

void sub_0203A700(void) {
    /* Original at 0x0203A700 */
    /* Requires manual decompilation - 173 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #0x11]\n    cmp r0, #1\n    beq _0203A710\n    cmp r0, #2\n    beq _0203A726\n    b _0203A73C\n    ldr r0, _0203A850 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0203A722\n    mov r7, #1\n    b _0203A742\n    mov r7, #2\n    b _0203A742\n    ldr r0, _0203A850 ; =0x04000304\n    ldrh r1, [r0]\n    lsr r0, r0, #0xb\n    and r0, r1\n    asr r0, r0, #0xf\n    cmp r0, #1\n    bne _0203A738\n    mov r7, #2\n    b _0203A742\n    mov r7, #1\n    b _0203A742\n    add r0, r5, #0\n    add r0, #0x21\n    ldrb r7, [r0]\n    ldr r4, [r5, #4]\n    cmp r7, #1\n    bne _0203A75A\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    ldr r1, [r0]\n    ldr r0, _0203A854 ; =0x00300010\n    add r6, r1, #0\n    and r6, r0\n    bl GX_GetBankForOBJ\n    b _0203A768\n    ldr r0, _0203A858 ; =0x04001000\n    ldr r1, [r0]\n    ldr r0, _0203A854 ; =0x00300010\n    add r6, r1, #0\n    and r6, r0\n    bl GX_GetBankForSubOBJ\n    ldr r1, _0203A85C ; =0x00100010\n    cmp r6, r1\n    bgt _0203A776\n    bge _0203A7A4\n    cmp r6, #0x10\n    beq _0203A788\n    b _0203A7F4\n    ldr r1, _0203A860 ; =0x00200010\n    cmp r6, r1\n    bgt _0203A780\n    beq _0203A7BC\n    b _0203A7F4\n    ldr r1, _0203A854 ; =0x00300010\n    cmp r6, r1\n    beq _0203A7E0\n    b _0203A7F4\n    cmp r0, #0x40\n    beq _0203A790\n    cmp r0, #0x20\n    bne _0203A79A\n    mov r0, #0x1f\n    lsl r1, r4, #2\n    lsl r0, r0, #4\n    add r3, r1, r0\n    b _0203A7FC\n    mov r0, #0x3f\n    lsl r1, r4, #2\n    lsl r0, r0, #4\n    add r3, r1, r0\n    b _0203A7FC\n    cmp r0, #0x40\n    beq _0203A7B2\n    cmp r0, #0x20\n    beq _0203A7B2\n    lsr r1, r1, #0xc\n    cmp r0, r1\n    bne _0203A7F4\n    mov r0, #0x7e\n    lsl r1, r4, #1\n    lsl r0, r0, #2\n    add r3, r1, r0\n    b _0203A7FC\n    cmp r0, #0x30\n    beq _0203A7C4\n    cmp r0, #0x50\n    bne _0203A7CC\n    mov r0, #0x9f\n    lsl r0, r0, #2\n    add r3, r4, r0\n    b _0203A7FC\n    cmp r0, #0x10\n    bne _0203A7D8\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    add r3, r4, r0\n    b _0203A7FC\n    mov r0, #0xff\n    lsl r0, r0, #2\n    add r3, r4, r0\n    b _0203A7FC\n    cmp r0, #3\n    bne _0203A7EC\n    mov r0, #0xff\n    lsl r0, r0, #2\n    add r3, r4, r0\n    b _0203A7FC\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    add r3, r4, r0\n    b _0203A7FC\n    mov r0, #0xfe\n    lsl r1, r4, #1\n    lsl r0, r0, #2\n    add r3, r1, r0\n    cmp r7, #1\n    bne _0203A806\n    mov r4, #7\n    lsl r4, r4, #0x18\n    b _0203A808\n    ldr r4, _0203A864 ; =0x07000400\n    add r0, r5, #0\n    add r0, #0x20\n    ldrb r2, [r0]\n    add r0, r5, #0\n    add r0, #0x22\n    ldrb r1, [r0]\n    ldrh r6, [r5, #0xe]\n    ldrh r0, [r5, #0xc]\n    lsl r1, r1, #0xa\n    lsl r6, r6, #0x18\n    lsr r6, r6, #0x18\n    orr r6, r1\n    mov r1, #1\n    lsl r0, r0, #0x17\n    lsl r1, r1, #0x1e\n    lsr r0, r0, #7\n    orr r1, r6\n    orr r0, r1\n    str r0, [r4]\n    lsl r0, r2, #0xc\n    orr r0, r3\n    strh r0, [r4, #4]\n    ldr r0, [r5, #0x1c]\n    cmp r4, r0\n    beq _0203A84E\n    add r1, r5, #0\n    add r1, #0x22\n    ldrb r1, [r1]\n    lsl r2, r1, #0xa\n    ldr r1, _0203A868 ; =0x40000200\n    orr r1, r2\n    str r1, [r0]\n    mov r1, #0\n    strh r1, [r0, #4]\n    str r4, [r5, #0x1c]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0203A850: .word 0x04000304\n    _0203A854: .word 0x00300010\n    _0203A858: .word 0x04001000\n    _0203A85C: .word 0x00100010\n    _0203A860: .word 0x00200010\n    _0203A864: .word 0x07000400\n    _0203A868: .word 0x40000200"
    );
    #endif
}

void sub_0203A86C(void) {
    sub_0203A700();
}

void sub_0203A880(void) {
    /* Original at 0x0203A880 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r4, #0\n    bl sub_02039998\n    cmp r0, #0\n    beq _0203A890\n    mov r4, #1\n    mov r0, #7\n    lsl r0, r0, #6\n    str r0, [sp]\n    mov r0, #0xf0\n    mov r1, #0\n    add r2, r4, #0\n    mov r3, #1\n    bl sub_0203A8CC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_0203A8A8(void) {
    /* Original at 0x0203A8A8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r4, #0\n    bl sub_02039998\n    cmp r0, #0\n    beq _0203A8B8\n    mov r4, #1\n    mov r0, #0x1e\n    lsl r0, r0, #4\n    str r0, [sp]\n    mov r0, #0xf0\n    mov r1, #0\n    add r2, r4, #0\n    add r3, r5, #0\n    bl sub_0203A8CC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0203A8CC(void) {
    /* Original at 0x0203A8CC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    bl sub_02034DCC\n    cmp r0, #0\n    beq _0203A908\n    ldr r0, _0203A90C ; =_021D4154\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0203A8EC\n    bl sub_0203A914\n    ldr r0, _0203A910 ; =_0210F91C\n    str r5, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    str r4, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0\n    mov r1, #0x59\n    add r2, r6, #0\n    add r3, r7, #0\n    bl sub_0203A3B0\n    ldr r1, _0203A90C ; =_021D4154\n    str r0, [r1]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0203A90C: .word _021D4154\n    _0203A910: .word _0210F91C"
    );
    #endif
}

void sub_0203A914(void) {
    sub_0203A444(0);
}

void sub_0203A930(void) {
    sub_0203A438();
}

void sub_0203A948(void) {
    sub_0203A478();
}

void sub_0203A964(void) {
    /* Original at 0x0203A964 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037474\n    cmp r0, #0\n    beq _0203A984\n    bl sub_02037454\n    cmp r0, #1\n    bgt _0203A97E\n    bl sub_02039998\n    cmp r0, #0\n    beq _0203A990\n    bl sub_0203A880\n    pop {r3, pc}\n    bl sub_02039998\n    cmp r0, #0\n    beq _0203A990\n    bl sub_0203A880\n    pop {r3, pc}"
    );
    #endif
}

void sub_0203A994(void) {
    /* Original at 0x0203A994 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037474\n    cmp r0, #0\n    beq _0203A9B8\n    bl sub_02037454\n    cmp r0, #1\n    bgt _0203A9B0\n    bl sub_02039998\n    cmp r0, #0\n    beq _0203A9C6\n    add r0, r4, #0\n    bl sub_0203A8A8\n    pop {r4, pc}\n    bl sub_02039998\n    cmp r0, #0\n    beq _0203A9C6\n    add r0, r4, #0\n    bl sub_0203A8A8\n    pop {r4, pc}"
    );
    #endif
}

void sub_0203A9C8(void) {
    /* Original at 0x0203A9C8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0203A9D8 ; =_021D4154\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _0203A9D6\n    mov r0, #1\n    add r1, #0x22\n    strb r0, [r1]\n    bx lr\n    _0203A9D8: .word _021D4154"
    );
    #endif
}
