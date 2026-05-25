/* Decompiled from asm/overlay_01_021FE200.s */
#include "global.h"

void ov01_021FE200(void) {
    /* Original at 0x021FE200 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    ldr r1, _021FE21C ; =0x00000824\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    bl ov01_021FE230\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021FE21C: .word 0x00000824"
    );
    #endif
}

void ov01_021FE220(void) {
    ov01_021FE2B8();
    ov01_021F1448(r4);
}

void ov01_021FE230(void) {
    /* Original at 0x021FE230 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #4]\n    mov r1, #0x65\n    ldr r5, [sp, #4]\n    lsl r1, r1, #2\n    add r4, r0, #4\n    add r0, r0, r1\n    str r0, [sp, #0xc]\n    ldr r1, _021FE2AC ; =0x000004DC\n    ldr r0, [sp, #4]\n    ldr r7, _021FE2B0 ; =ov01_0220901C\n    add r0, r0, r1\n    ldr r6, _021FE2B4 ; =ov01_02208FF4\n    add r5, #0xcc\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r3, [r7]\n    ldr r0, [r0]\n    add r1, r4, #0\n    mov r2, #0\n    bl ov01_021F19F4\n    ldr r0, [sp, #0xc]\n    add r1, r4, #0\n    bl sub_02069978\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r3, [r6]\n    ldr r0, [r0]\n    add r1, r5, #0\n    mov r2, #0\n    bl ov01_021F19F4\n    ldr r0, [sp, #8]\n    add r1, r5, #0\n    bl sub_02069978\n    ldr r0, [sp, #0xc]\n    add r7, r7, #4\n    add r0, #0x54\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r4, #0x14\n    add r0, #0x54\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    add r6, r6, #4\n    add r0, r0, #1\n    add r5, #0x14\n    str r0, [sp, #0x10]\n    cmp r0, #0xa\n    blo _021FE256\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _021FE2AC: .word 0x000004DC\n    _021FE2B0: .word ov01_0220901C\n    _021FE2B4: .word ov01_02208FF4"
    );
    #endif
}

void ov01_021FE2B8(void) {
    /* Original at 0x021FE2B8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r6, #0\n    add r4, r0, #4\n    add r5, #0xcc\n    add r0, r4, #0\n    bl sub_02069784\n    add r0, r5, #0\n    bl sub_02069784\n    add r6, r6, #1\n    add r4, #0x14\n    add r5, #0x14\n    cmp r6, #0xa\n    blt _021FE2C2\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021FE2DC(void) {
    /* Original at 0x021FE2DC */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r3, #0\n    mov r4, #0\n    cmp r0, #4\n    bhi _021FE346\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FE2F6: ; jump table\n    mov r0, #0x65\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x54\n    mul r0, r2\n    add r4, r1, r0\n    b _021FE346\n    lsl r3, r1, #4\n    ldr r1, _021FE354 ; =ov01_02209044\n    lsl r2, r2, #2\n    add r1, r1, r3\n    mov r0, #0x65\n    ldr r2, [r2, r1]\n    lsl r0, r0, #2\n    mov r1, #0x54\n    add r0, r5, r0\n    mul r1, r2\n    add r4, r0, r1\n    b _021FE346\n    ldr r0, _021FE358 ; =0x000004DC\n    add r1, r5, r0\n    mov r0, #0x54\n    mul r0, r2\n    add r4, r1, r0\n    b _021FE346\n    lsl r3, r1, #4\n    ldr r1, _021FE354 ; =ov01_02209044\n    lsl r2, r2, #2\n    add r1, r1, r3\n    ldr r0, _021FE358 ; =0x000004DC\n    ldr r2, [r2, r1]\n    mov r1, #0x54\n    add r0, r5, r0\n    mul r1, r2\n    add r4, r0, r1\n    cmp r4, #0\n    bne _021FE34E\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _021FE354: .word ov01_02209044\n    _021FE358: .word 0x000004DC"
    );
    #endif
}

void ov01_021FE35C(void) {
    /* Original at 0x021FE35C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r4, #0\n    cmp r1, #4\n    bhi _021FE3B4\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021FE370: ; jump table\n    add r1, r0, #4\n    mov r0, #0x14\n    mul r0, r2\n    add r4, r1, r0\n    b _021FE3B4\n    ldr r1, _021FE3C0 ; =ov01_02209044\n    lsl r3, r3, #4\n    lsl r2, r2, #2\n    add r1, r1, r3\n    ldr r2, [r2, r1]\n    mov r1, #0x14\n    add r0, r0, #4\n    mul r1, r2\n    add r4, r0, r1\n    b _021FE3B4\n    mov r1, #0x14\n    add r0, #0xcc\n    mul r1, r2\n    add r4, r0, r1\n    b _021FE3B4\n    ldr r1, _021FE3C0 ; =ov01_02209044\n    lsl r3, r3, #4\n    lsl r2, r2, #2\n    add r1, r1, r3\n    ldr r2, [r2, r1]\n    mov r1, #0x14\n    add r0, #0xcc\n    mul r1, r2\n    add r4, r0, r1\n    cmp r4, #0\n    bne _021FE3BC\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    _021FE3C0: .word ov01_02209044"
    );
    #endif
}

void ov01_021FE3C4(void) {
    ov01_021FE3F8();
}

void ov01_021FE3D0(void) {
    ov01_021FE3F8();
}

void ov01_021FE3DC(void) {
    ov01_021FE3F8();
}

void ov01_021FE3E8(void) {
    ov01_021FE3F8();
}

u8 ov01_021FE3F4(void) {
    return 0;
}

void ov01_021FE3F8(void) {
    /* Original at 0x021FE3F8 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    add r4, r1, #0\n    bl MapObject_GetPreviousXCoord\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl MapObject_GetPreviousZCoord\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    bl MapObject_GetPositionVectorYCoord\n    add r6, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetFacingDirection\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    bl MapObject_GetPreviousFacingDirection\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r7, r0, #0\n    add r0, r5, #0\n    bl ov01_021F146C\n    mov r1, #2\n    str r0, [sp, #8]\n    bl ov01_021F1450\n    mov r1, #2\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    lsl r1, r1, #8\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _021FE454\n    add sp, #0x38\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    add r1, r4, #0\n    str r4, [sp, #0x20]\n    bl ov01_021FE2DC\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x1c]\n    ldr r2, [sp, #0x14]\n    ldr r3, [sp, #0x18]\n    add r1, r4, #0\n    bl ov01_021FE35C\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    add r2, sp, #0x2c\n    bl sub_020611C8\n    str r6, [sp, #0x30]\n    cmp r4, #5\n    bhi _021FE4E0\n    add r0, r4, r4\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021FE48E: ; jump table\n    mov r0, #2\n    lsl r0, r0, #0xe\n    sub r1, r6, r0\n    str r1, [sp, #0x30]\n    sub r1, r4, #2\n    cmp r1, #1\n    bhi _021FE4B2\n    ldr r1, [sp, #0x34]\n    lsr r0, r0, #2\n    sub r0, r1, r0\n    str r0, [sp, #0x34]\n    b _021FE4E0\n    ldr r1, [sp, #0x34]\n    lsr r0, r0, #3\n    add r0, r1, r0\n    str r0, [sp, #0x34]\n    b _021FE4E0\n    mov r0, #0xa\n    lsl r0, r0, #0xc\n    sub r0, r6, r0\n    str r0, [sp, #0x30]\n    sub r0, r4, #2\n    cmp r0, #1\n    bhi _021FE4D6\n    mov r0, #2\n    ldr r1, [sp, #0x34]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [sp, #0x34]\n    b _021FE4E0\n    mov r0, #2\n    ldr r1, [sp, #0x34]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [sp, #0x34]\n    add r0, sp, #0x20\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    ldr r1, _021FE4F8 ; =ov01_02208FE0\n    add r2, sp, #0x2c\n    mov r3, #0\n    str r7, [sp, #4]\n    bl ov01_021F1620\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021FE4F8: .word ov01_02208FE0"
    );
    #endif
}

u32 ov01_021FE4FC(void) {
    sub_02068D90();
    *((u32*)(r4 + 0x10)) = r0;
    sub_02068D98(r5);
    *((u32*)(r4 + 0x18)) = *((u32*)(r0 + 8));
    *((u32*)(r4 + 0x14)) = *((u32*)(r0 + 4));
    *((u32*)(r4 + 0xc)) = 0x1f;
    *((u32*)(r4 + 0x10)) = r0;
    return 1;
}

void ov01_021FE524(void) {
    /* Original at 0x021FE524 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021FE528(void) {
    /* Original at 0x021FE528 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, [r1]\n    cmp r2, #0\n    beq _021FE536\n    cmp r2, #1\n    beq _021FE548\n    pop {r3, pc}\n    ldr r0, [r1, #4]\n    add r0, r0, #1\n    str r0, [r1, #4]\n    cmp r0, #0x10\n    blt _021FE554\n    ldr r0, [r1]\n    add r0, r0, #1\n    str r0, [r1]\n    pop {r3, pc}\n    ldr r2, [r1, #0xc]\n    sub r2, r2, #2\n    str r2, [r1, #0xc]\n    bpl _021FE554\n    bl ov01_021F1640\n    pop {r3, pc}"
    );
    #endif
}

void ov01_021FE558(void) {
    /* Original at 0x021FE558 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    ldr r1, [r4, #8]\n    cmp r1, #0\n    bne _021FE58A\n    add r1, sp, #0\n    bl sub_02068DB8\n    ldr r0, [r4, #0x14]\n    mov r2, #0x1f\n    ldr r0, [r0, #0xc]\n    mov r1, #1\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    ldr r0, [r4, #0x14]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r0, #0xc]\n    bl NNS_G3dMdlSetMdlAlphaAll\n    ldr r0, [r4, #0x18]\n    add r1, sp, #0\n    bl sub_020699BC\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}
