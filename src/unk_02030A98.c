/* Decompiled from asm/unk_02030A98.s */
#include "global.h"

void sub_02030A98(void) {
    MI_CpuFill8();
}

void sub_02030AA4(void) {
    /* Original at 0x02030AA4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r1, #0xa\n    bne _02030ACE\n    ldrb r1, [r3]\n    cmp r1, #1\n    blo _02030ABE\n    mov r1, #1\n    ldrb r3, [r0]\n    lsl r1, r2\n    orr r1, r3\n    strb r1, [r0]\n    pop {r3, r4}\n    bx lr\n    mov r1, #1\n    add r3, r1, #0\n    ldrb r4, [r0]\n    lsl r3, r2\n    mov r1, #0xff\n    eor r1, r3\n    and r1, r4\n    strb r1, [r0]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02030AD4(void) {
    /* Original at 0x02030AD4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0xa\n    bne _02030AE4\n    ldrb r0, [r0]\n    add r1, r0, #0\n    asr r1, r2\n    mov r0, #1\n    and r0, r1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02030AE8(void) {
    Save_Frontier_GetStatic();
}

void sub_02030AF8(void) {
    MI_CpuFill8();
}

void sub_02030B04(void) {
    Save_Frontier_GetStatic();
}

void sub_02030B14(void) {
    /* Original at 0x02030B14 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void sub_02030B1C(void) {
    /* Original at 0x02030B1C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    ldrb r3, [r0]\n    mov r2, #8\n    lsr r1, r1, #0x1c\n    bic r3, r2\n    orr r1, r3\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02030B30(void) {
    /* Original at 0x02030B30 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, [sp, #8]\n    cmp r1, #4\n    bhi _02030B82\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02030B44: ; jump table\n    ldrb r4, [r0]\n    ldrb r2, [r3]\n    mov r1, #7\n    bic r4, r1\n    mov r1, #7\n    and r1, r2\n    orr r1, r4\n    strb r1, [r0]\n    pop {r4, pc}\n    ldrb r1, [r3]\n    strb r1, [r0, #1]\n    pop {r4, pc}\n    ldrh r3, [r3]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #4]\n    pop {r4, pc}\n    ldrb r1, [r3]\n    add r0, r0, r2\n    strb r1, [r0, #2]\n    pop {r4, pc}\n    ldrh r3, [r3]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #0x2c]\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void sub_02030B88(void) {
    /* Original at 0x02030B88 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #4\n    bhi _02030BC6\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02030B9A: ; jump table\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1d\n    pop {r3, pc}\n    ldrb r0, [r0, #1]\n    pop {r3, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #4]\n    pop {r3, pc}\n    add r0, r0, r2\n    ldrb r0, [r0, #2]\n    pop {r3, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x2c]\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_02030BD0(void) {
    /* Original at 0x02030BD0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "lsl r2, r0, #0x17\n    lsr r2, r2, #0x18\n    ldrb r3, [r1, r2]\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    add r1, r3, #0\n    asr r1, r0\n    mov r0, #0xf\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr"
    );
    #endif
}

void sub_02030BF4(void) {
    /* Original at 0x02030BF4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    lsr r5, r0, #0x1f\n    lsl r4, r0, #0x1f\n    lsl r3, r0, #0x17\n    sub r4, r4, r5\n    mov r0, #0x1f\n    ror r4, r0\n    add r0, r5, r4\n    lsl r0, r0, #0x18\n    lsr r3, r3, #0x18\n    lsr r0, r0, #0x18\n    bne _02030C14\n    add r4, r1, r3\n    ldrb r6, [r1, r3]\n    mov r5, #0xf0\n    b _02030C1A\n    ldrb r6, [r1, r3]\n    add r4, r1, r3\n    mov r5, #0xf\n    and r5, r6\n    strb r5, [r1, r3]\n    lsl r0, r0, #2\n    add r1, r2, #0\n    lsl r1, r0\n    lsl r0, r1, #0x18\n    ldrb r3, [r4]\n    lsr r0, r0, #0x18\n    orr r0, r3\n    strb r0, [r4]\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void sub_02030C34(void) {
    sub_02030BF4(0);
}

void sub_02030C50(void) {
    MI_CpuFill8();
}

void sub_02030C5C(void) {
    Save_Frontier_GetStatic();
}

void sub_02030C6C(void) {
    /* Original at 0x02030C6C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, [sp, #8]\n    cmp r1, #5\n    bne _02030C98\n    ldrb r1, [r3]\n    cmp r1, #1\n    blo _02030C86\n    mov r1, #1\n    ldrb r3, [r0]\n    lsl r1, r2\n    orr r1, r3\n    strb r1, [r0]\n    pop {r4, pc}\n    mov r1, #1\n    add r3, r1, #0\n    ldrb r4, [r0]\n    lsl r3, r2\n    mov r1, #0xff\n    eor r1, r3\n    and r1, r4\n    strb r1, [r0]\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void sub_02030CA0(void) {
    GF_AssertFail(0, 1);
}

void sub_02030CBC(void) {
    MI_CpuFill8();
}

void sub_02030CC8(void) {
    Save_Frontier_GetStatic();
}

void sub_02030CD8(void) {
    /* Original at 0x02030CD8 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void sub_02030CE0(void) {
    /* Original at 0x02030CE0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    ldrb r3, [r0]\n    mov r2, #8\n    lsr r1, r1, #0x1c\n    bic r3, r2\n    orr r1, r3\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02030CF4(void) {
    /* Original at 0x02030CF4 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [sp, #8]\n    cmp r1, #8\n    bhi _02030D7E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02030D08: ; jump table\n    ldrb r3, [r0]\n    ldrb r2, [r4]\n    mov r1, #7\n    bic r3, r1\n    mov r1, #7\n    and r1, r2\n    orr r1, r3\n    strb r1, [r0]\n    pop {r4, pc}\n    ldrb r1, [r4]\n    strb r1, [r0, #1]\n    pop {r4, pc}\n    ldrh r3, [r4]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #0x22]\n    pop {r4, pc}\n    lsl r1, r2, #2\n    add r0, r0, r1\n    add r0, r0, r3\n    ldrb r4, [r4]\n    add r0, #0x2a\n    strb r4, [r0]\n    pop {r4, pc}\n    lsl r1, r2, #2\n    ldr r3, [r4]\n    add r0, r0, r1\n    str r3, [r0, #0x3c]\n    pop {r4, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r3, [r4]\n    add r0, #0x4c\n    strh r3, [r0]\n    pop {r4, pc}\n    ldrh r3, [r4]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #6]\n    pop {r4, pc}\n    ldrb r1, [r4]\n    add r0, r0, r2\n    strb r1, [r0, #3]\n    pop {r4, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r3, [r4]\n    add r0, #0x54\n    strh r3, [r0]\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void sub_02030D84(void) {
    /* Original at 0x02030D84 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #8\n    bhi _02030DF2\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02030D96: ; jump table\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1d\n    pop {r3, pc}\n    ldrb r0, [r0, #1]\n    pop {r3, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x22]\n    pop {r3, pc}\n    lsl r1, r2, #2\n    add r0, r0, r1\n    add r0, r0, r3\n    add r0, #0x2a\n    ldrb r0, [r0]\n    pop {r3, pc}\n    lsl r1, r2, #2\n    add r0, r0, r1\n    ldr r0, [r0, #0x3c]\n    pop {r3, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    add r0, #0x4c\n    ldrh r0, [r0]\n    pop {r3, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #6]\n    pop {r3, pc}\n    add r0, r0, r2\n    ldrb r0, [r0, #3]\n    pop {r3, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    add r0, #0x54\n    ldrh r0, [r0]\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_02030DFC(void) {
    MI_CpuFill8();
}

void sub_02030E08(void) {
    Save_Frontier_GetStatic();
}

void sub_02030E18(void) {
    /* Original at 0x02030E18 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, [sp, #8]\n    cmp r1, #9\n    beq _02030E26\n    cmp r1, #0xa\n    beq _02030E4A\n    b _02030E50\n    ldrb r1, [r3]\n    cmp r1, #1\n    blo _02030E38\n    mov r1, #1\n    ldrb r3, [r0]\n    lsl r1, r2\n    orr r1, r3\n    strb r1, [r0]\n    pop {r4, pc}\n    mov r1, #1\n    add r3, r1, #0\n    ldrb r4, [r0]\n    lsl r3, r2\n    mov r1, #0xff\n    eor r1, r3\n    and r1, r4\n    strb r1, [r0]\n    pop {r4, pc}\n    mov r1, #1\n    strb r1, [r0, #1]\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void sub_02030E58(void) {
    /* Original at 0x02030E58 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #9\n    beq _02030E64\n    cmp r1, #0xa\n    beq _02030E70\n    b _02030E74\n    ldrb r0, [r0]\n    add r1, r0, #0\n    asr r1, r2\n    mov r0, #1\n    and r0, r1\n    pop {r3, pc}\n    ldrb r0, [r0, #1]\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_02030E7C(void) {
    MI_CpuFill8();
}

void sub_02030E88(void) {
    Save_Frontier_GetStatic();
}

void sub_02030E98(void) {
    /* Original at 0x02030E98 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void sub_02030EA0(void) {
    /* Original at 0x02030EA0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    ldrb r3, [r0]\n    mov r2, #8\n    lsr r1, r1, #0x1c\n    bic r3, r2\n    orr r1, r3\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02030EB4(void) {
    /* Original at 0x02030EB4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, [sp, #8]\n    cmp r1, #7\n    bhi _02030F2E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02030EC8: ; jump table\n    ldrb r4, [r0]\n    ldrb r2, [r3]\n    mov r1, #7\n    bic r4, r1\n    mov r1, #7\n    and r1, r2\n    orr r1, r4\n    strb r1, [r0]\n    pop {r4, pc}\n    ldrb r2, [r0]\n    mov r1, #0x10\n    bic r2, r1\n    ldrb r1, [r3]\n    lsl r1, r1, #0x1f\n    lsr r1, r1, #0x1b\n    orr r1, r2\n    strb r1, [r0]\n    pop {r4, pc}\n    ldrb r1, [r3]\n    strb r1, [r0, #1]\n    pop {r4, pc}\n    ldrb r1, [r3]\n    strb r1, [r0, #2]\n    pop {r4, pc}\n    ldrh r3, [r3]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #6]\n    pop {r4, pc}\n    ldrh r3, [r3]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #0xe]\n    pop {r4, pc}\n    ldrb r1, [r3]\n    add r0, r0, r2\n    strb r1, [r0, #3]\n    pop {r4, pc}\n    ldrh r3, [r3]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #0x2a]\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void sub_02030F34(void) {
    /* Original at 0x02030F34 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #7\n    bhi _02030F8C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02030F46: ; jump table\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1d\n    pop {r3, pc}\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1f\n    pop {r3, pc}\n    ldrb r0, [r0, #1]\n    pop {r3, pc}\n    ldrb r0, [r0, #2]\n    pop {r3, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #6]\n    pop {r3, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0xe]\n    pop {r3, pc}\n    add r0, r0, r2\n    ldrb r0, [r0, #3]\n    pop {r3, pc}\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x2a]\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_02030F94(void) {
    MI_CpuFill8();
}

void sub_02030FA0(void) {
    Save_Frontier_GetStatic();
}

void sub_02030FB0(void) {
    /* Original at 0x02030FB0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, [sp, #8]\n    cmp r1, #8\n    bne _02030FDC\n    ldrb r1, [r3]\n    cmp r1, #1\n    blo _02030FCA\n    mov r1, #1\n    ldrb r3, [r0]\n    lsl r1, r2\n    orr r1, r3\n    strb r1, [r0]\n    pop {r4, pc}\n    mov r1, #1\n    add r3, r1, #0\n    ldrb r4, [r0]\n    lsl r3, r2\n    mov r1, #0xff\n    eor r1, r3\n    and r1, r4\n    strb r1, [r0]\n    pop {r4, pc}\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void sub_02030FE4(void) {
    GF_AssertFail(0, 1);
}

void Save_Frontier_sizeof(void) {
    /* Original at 0x02031000 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02031004 ; =0x00001628\n    bx lr\n    _02031004: .word 0x00001628"
    );
    #endif
}

void Save_Frontier_Init(void) {
    /* Original at 0x02031008 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02031058 ; =0x00001628\n    mov r1, #0\n    add r4, r0, #0\n    bl MI_CpuFill8\n    ldr r0, _0203105C ; =0x00000954\n    add r0, r4, r0\n    bl sub_0202D240\n    ldr r0, _02031060 ; =0x00000ABC\n    add r0, r4, r0\n    bl sub_0202D254\n    ldr r0, _02031064 ; =0x00000ADC\n    add r0, r4, r0\n    bl sub_0202D274\n    ldr r0, _02031068 ; =0x00001618\n    add r0, r4, r0\n    bl sub_02030A98\n    ldr r0, _0203106C ; =0x0000161C\n    add r0, r4, r0\n    bl sub_02030C50\n    ldr r0, _02031070 ; =0x00001620\n    add r0, r4, r0\n    bl sub_02030DFC\n    ldr r0, _02031074 ; =0x00001624\n    add r0, r4, r0\n    bl sub_02030F94\n    ldr r1, _02031078 ; =_021D2AFC\n    ldr r2, _02031058 ; =0x00001628\n    add r0, r4, #0\n    bl MI_CpuCopy8\n    pop {r4, pc}\n    _02031058: .word 0x00001628\n    _0203105C: .word 0x00000954\n    _02031060: .word 0x00000ABC\n    _02031064: .word 0x00000ADC\n    _02031068: .word 0x00001618\n    _0203106C: .word 0x0000161C\n    _02031070: .word 0x00001620\n    _02031074: .word 0x00001624\n    _02031078: .word _021D2AFC"
    );
    #endif
}

void Save_Frontier_GetStatic(void) {
    /* Original at 0x0203107C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02031080 ; =_021D2AFC\n    bx lr\n    _02031080: .word _021D2AFC"
    );
    #endif
}

void Save_Frontier_Commit(void) {
    /* Original at 0x02031084 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0x13\n    bl SaveArray_Get\n    add r1, r0, #0\n    ldr r0, _02031098 ; =_021D2AFC\n    ldr r2, _0203109C ; =0x00001628\n    bl MI_CpuCopy8\n    pop {r3, pc}\n    _02031098: .word _021D2AFC\n    _0203109C: .word 0x00001628"
    );
    #endif
}

void Save_Frontier_Load(void) {
    /* Original at 0x020310A0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0x13\n    bl SaveArray_Get\n    ldr r1, _020310B4 ; =_021D2AFC\n    ldr r2, _020310B8 ; =0x00001628\n    bl MI_CpuCopy8\n    pop {r3, pc}\n    nop\n    _020310B4: .word _021D2AFC\n    _020310B8: .word 0x00001628"
    );
    #endif
}

void FrontierSave_GetStat(void) {
    /* Original at 0x020310BC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0x70\n    bge _020310E6\n    cmp r1, #0x64\n    blt _020310E0\n    cmp r2, #0x10\n    blt _020310CE\n    add r1, r1, #1\n    sub r2, #0x10\n    lsl r1, r1, #1\n    ldrh r0, [r0, r1]\n    add r1, r0, #0\n    asr r1, r2\n    mov r0, #1\n    and r0, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    pop {r3, pc}\n    lsl r1, r1, #1\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    mov r3, #0\n    mvn r3, r3\n    cmp r2, r3\n    bne _020310F6\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}\n    lsl r2, r2, #6\n    sub r1, #0x70\n    add r2, r0, r2\n    lsl r0, r1, #1\n    add r0, r2, r0\n    add r0, #0xe0\n    ldrh r0, [r0]\n    pop {r3, pc}"
    );
    #endif
}

void sub_02031108(void) {
    /* Original at 0x02031108 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _02031180 ; =0x0000270F\n    add r7, r3, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r7, r0\n    bls _0203111A\n    add r7, r0, #0\n    cmp r5, #0x70\n    bge _02031166\n    cmp r5, #0x64\n    blt _02031158\n    cmp r4, #0xff\n    bne _0203112A\n    bl GF_AssertFail\n    cmp r4, #0x10\n    blt _02031132\n    add r5, r5, #1\n    sub r4, #0x10\n    cmp r7, #0\n    bne _0203114A\n    mov r2, #1\n    add r3, r2, #0\n    lsl r1, r5, #1\n    ldrh r0, [r6, r1]\n    lsl r3, r4\n    ldr r2, _02031184 ; =0x0000FFFF\n    eor r2, r3\n    and r0, r2\n    strh r0, [r6, r1]\n    b _0203117C\n    lsl r2, r5, #1\n    mov r0, #1\n    ldrh r1, [r6, r2]\n    lsl r0, r4\n    orr r0, r1\n    strh r0, [r6, r2]\n    b _0203117C\n    cmp r4, #0xff\n    beq _02031160\n    bl GF_AssertFail\n    lsl r0, r5, #1\n    strh r7, [r6, r0]\n    b _0203117C\n    cmp r4, #0xff\n    bne _0203116E\n    bl GF_AssertFail\n    lsl r0, r4, #6\n    sub r5, #0x70\n    add r1, r6, r0\n    lsl r0, r5, #1\n    add r0, r1, r0\n    add r0, #0xe0\n    strh r7, [r0]\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02031180: .word 0x0000270F\n    _02031184: .word 0x0000FFFF"
    );
    #endif
}

void sub_02031188(void) {
    /* Original at 0x02031188 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #2\n    add r4, r0, #0\n    add r0, #0xe0\n    mov r1, #0\n    lsl r2, r2, #0xa\n    bl MI_CpuFill8\n    mov r1, #0x64\n    add r4, #0xc8\n    mov r0, #0\n    add r1, r1, #1\n    strh r0, [r4]\n    add r4, r4, #2\n    cmp r1, #0x6f\n    ble _0203119E\n    pop {r4, pc}"
    );
    #endif
}

void sub_020311AC(void) {
    /* Original at 0x020311AC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    cmp r5, #0xff\n    bne _020311BA\n    bl GF_AssertFail\n    cmp r5, #0x1f\n    bge _02031200\n    add r0, r6, #0\n    str r0, [sp]\n    add r0, #0xe0\n    lsl r1, r5, #6\n    str r0, [sp]\n    add r7, r0, r1\n    add r0, r5, #1\n    lsl r1, r0, #6\n    ldr r0, [sp]\n    mov r2, #0x40\n    add r0, r0, r1\n    add r1, r7, #0\n    bl MI_CpuCopy8\n    mov r4, #0x64\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #1\n    bl FrontierSave_GetStat\n    add r3, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl sub_02031108\n    add r4, r4, #2\n    cmp r4, #0x6f\n    blt _020311DC\n    add r5, r5, #1\n    add r7, #0x40\n    cmp r5, #0x1f\n    blt _020311CA\n    mov r0, #0x1f\n    add r6, #0xe0\n    lsl r0, r0, #6\n    add r0, r6, r0\n    mov r1, #0\n    mov r2, #0x40\n    bl MI_CpuFill8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02031214(void) {
    /* Original at 0x02031214 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02031224 ; =MI_CpuFill8\n    add r0, #0xe0\n    lsl r1, r1, #6\n    add r0, r0, r1\n    mov r1, #0\n    mov r2, #0x40\n    bx r3\n    nop\n    _02031224: .word MI_CpuFill8"
    );
    #endif
}

void sub_02031228(void) {
    /* Original at 0x02031228 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r3, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    bl FrontierSave_GetStat\n    add r0, r0, r4\n    lsl r0, r0, #0x10\n    lsr r3, r0, #0x10\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_02031108\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02031248(void) {
    /* Original at 0x02031248 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl FrontierSave_GetStat\n    sub r3, r0, r4\n    bpl _0203125C\n    mov r3, #0\n    lsl r3, r3, #0x10\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    lsr r3, r3, #0x10\n    bl sub_02031108\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0203126C(void) {
    /* Original at 0x0203126C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl FrontierSave_GetStat\n    cmp r0, r4\n    bhs _0203128C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    add r3, r4, #0\n    bl sub_02031108\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r3, _020312A0 ; =0x0000270F\n    cmp r0, r3\n    bls _0203129C\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_02031108\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020312A0: .word 0x0000270F"
    );
    #endif
}

void sub_020312A4(void) {
    /* Original at 0x020312A4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0xba\n    lsl r0, r0, #4\n    bx lr"
    );
    #endif
}

void sub_020312AC(void) {
    MI_CpuFill8(0, 0, 0xba);
}

void sub_020312C4(void) {
    sub_02027144();
}

void sub_020312CC(void) {
    /* Original at 0x020312CC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_02027158\n    add r4, r0, #0\n    add r0, r5, #0\n    bl SaveGameNormal\n    orr r0, r4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020312E0(void) {
    /* Original at 0x020312E0 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl Save_CheckExtraChunksExist\n    cmp r0, #0\n    bne _020312F4\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    cmp r4, #0\n    beq _02031302\n    cmp r4, #1\n    beq _0203130A\n    cmp r4, #2\n    beq _02031314\n    b _02031320\n    lsl r0, r6, #1\n    add r0, r5, r0\n    ldrh r0, [r0, #4]\n    pop {r4, r5, r6, pc}\n    lsl r0, r6, #1\n    add r1, r5, r0\n    ldr r0, _02031328 ; =0x000003E2\n    ldrh r0, [r1, r0]\n    pop {r4, r5, r6, pc}\n    lsl r0, r6, #1\n    add r1, r5, r0\n    mov r0, #0x1f\n    lsl r0, r0, #6\n    ldrh r0, [r1, r0]\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02031328: .word 0x000003E2"
    );
    #endif
}

void sub_0203132C(void) {
    /* Original at 0x0203132C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, _02031370 ; =0x0000270F\n    cmp r3, r4\n    bls _02031336\n    add r3, r4, #0\n    cmp r1, #0\n    beq _02031344\n    cmp r1, #1\n    beq _0203134C\n    cmp r1, #2\n    beq _02031356\n    b _02031362\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #4]\n    b _0203136A\n    lsl r1, r2, #1\n    add r1, r0, r1\n    ldr r0, _02031374 ; =0x000003E2\n    strh r3, [r1, r0]\n    b _0203136A\n    lsl r1, r2, #1\n    add r1, r0, r1\n    mov r0, #0x1f\n    lsl r0, r0, #6\n    strh r3, [r1, r0]\n    b _0203136A\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r3, #0\n    pop {r4, pc}\n    nop\n    _02031370: .word 0x0000270F\n    _02031374: .word 0x000003E2"
    );
    #endif
}

void sub_02031378(void) {
    /* Original at 0x02031378 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl Save_CheckExtraChunksExist\n    cmp r0, #0\n    bne _0203138E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    add r3, r6, #0\n    bl sub_020312E0\n    add r1, sp, #8\n    ldrh r3, [r1, #0x10]\n    cmp r0, r3\n    bhs _020313AE\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0203132C\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r3, _020313C0 ; =0x0000270F\n    cmp r0, r3\n    bls _020313BE\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0203132C\n    pop {r3, r4, r5, r6, r7, pc}\n    _020313C0: .word 0x0000270F"
    );
    #endif
}

void sub_020313C4(void) {
    /* Original at 0x020313C4 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    mov r0, #0\n    add r6, r1, #0\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    ldr r4, [sp, #0x38]\n    ldr r7, [sp, #0x3c]\n    str r0, [sp, #0xc]\n    cmp r6, #0x22\n    blt _020313E0\n    cmp r6, #0x3c\n    ble _020313E4\n    bl GF_AssertFail\n    ldr r1, [sp, #4]\n    mov r0, #0\n    sub r1, #0x24\n    cmp r1, #0x18\n    bhi _020313FC\n    mov r3, #1\n    add r2, r3, #0\n    lsl r2, r1\n    ldr r1, _020314A0 ; =0x01001001\n    tst r1, r2\n    beq _020313FC\n    add r0, r3, #0\n    cmp r0, #0\n    bne _02031404\n    bl GF_AssertFail\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #2\n    str r0, [r7]\n    ldr r0, [sp, #8]\n    cmp r0, #0xff\n    beq _02031418\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl Save_CheckExtraChunksExist\n    cmp r0, #0\n    bne _02031428\n    add sp, #0x1c\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl Save_Frontier_GetStatic\n    ldr r2, [sp, #8]\n    str r0, [sp, #0x18]\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    bl FrontierSave_GetStat\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #0x34]\n    add r0, r5, #0\n    add r2, r4, #0\n    bl sub_020312C4\n    add r6, r0, #0\n    ldr r0, [r4]\n    cmp r0, #1\n    beq _0203145C\n    mov r4, #0\n    b _0203146A\n    ldr r2, [sp, #0x30]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_020312E0\n    add r4, r0, #0\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x30]\n    str r0, [sp]\n    ldr r3, [sp, #0x10]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02031378\n    ldr r0, [sp, #0x14]\n    cmp r0, r4\n    beq _0203148E\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_020312CC\n    str r0, [r7]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    cmp r6, #0\n    beq _02031498\n    add r0, r6, #0\n    bl Heap_Free\n    ldr r0, [sp, #0xc]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _020314A0: .word 0x01001001"
    );
    #endif
}

void sub_020314A4(void) {
    Heap_Alloc(0x80);
    MI_CpuFill8(0, 0x80);
}

void sub_020314BC(void) {
    Heap_Free();
}

void sub_020314C4(void) {
    /* Original at 0x020314C4 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x64\n    add r6, r1, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    bl Save_PlayerData_GetProfile\n    add r4, r0, #0\n    add r0, r6, #0\n    bl Save_WiFiHistory_Get\n    str r0, [sp]\n    add r0, r6, #0\n    bl Save_SysInfo_Get\n    add r0, r6, #0\n    bl Save_Misc_Const_Get\n    add r7, r0, #0\n    add r0, sp, #0x10\n    bl OS_GetOwnerInfo\n    add r0, r7, #0\n    add r1, sp, #0xc\n    add r2, sp, #8\n    add r3, sp, #4\n    bl SaveMisc_GetFavoriteMon\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x80\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    add r0, r5, #0\n    bl CopyU16StringArray\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerID\n    str r0, [r5, #0x10]\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerGender\n    strb r0, [r5, #0x14]\n    ldr r0, [sp, #0xc]\n    mov r1, #0xfe\n    strh r0, [r5, #0x1c]\n    ldrb r0, [r5, #0x1b]\n    bic r0, r1\n    ldr r1, [sp, #8]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x19\n    lsr r1, r1, #0x18\n    orr r0, r1\n    strb r0, [r5, #0x1b]\n    ldrb r0, [r5, #0x1b]\n    mov r1, #1\n    bic r0, r1\n    ldr r1, [sp, #4]\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    mov r1, #1\n    and r1, r2\n    orr r0, r1\n    strb r0, [r5, #0x1b]\n    ldr r0, [sp]\n    bl WifiHistory_GetPlayerCountry\n    strb r0, [r5, #0x17]\n    ldr r0, [sp]\n    bl WiFiHistory_GetPlayerRegion\n    strb r0, [r5, #0x18]\n    ldr r0, _020315B4 ; =0x0000FFFF\n    mov r1, #0\n    add r2, r5, #0\n    add r1, r1, #1\n    strh r0, [r2, #0x20]\n    add r2, r2, #2\n    cmp r1, #0x28\n    blt _02031566\n    add r1, r5, #0\n    add r0, r7, #0\n    add r1, #0x20\n    bl SaveMisc_GetBattleGreeting\n    add r0, sp, #4\n    ldrb r0, [r0, #0xe]\n    strb r0, [r5, #0x15]\n    add r0, r4, #0\n    bl PlayerProfile_GetTrainerGender\n    add r7, r0, #0\n    add r0, r4, #0\n    bl PlayerProfile_GetAvatar\n    add r1, r0, #0\n    add r0, r7, #0\n    mov r2, #0\n    bl GetUnionRoomAvatarAttrBySprite\n    strb r0, [r5, #0x16]\n    mov r0, #GAME_VERSION\n    strb r0, [r5, #0x19]\n    mov r0, #2\n    strb r0, [r5, #0x1a]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #0x7c\n    bl SaveArray_CalcCRC16\n    add r5, #0x7c\n    strh r0, [r5]\n    add sp, #0x64\n    pop {r4, r5, r6, r7, pc}\n    _020315B4: .word 0x0000FFFF"
    );
    #endif
}

void sub_020315B8(void) {
    String_New(0xf);
    CopyU16ArrayToStringN(r5, 0xf);
}

void sub_020315D0(void) {
    /* Original at 0x020315D0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x14]\n    cmp r0, #0\n    beq _020315DC\n    cmp r0, #1\n    beq _020315DC\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_020315E0(void) {
    /* Original at 0x020315E0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #0x1c]\n    ldr r1, _020315EC ; =0x000001EF\n    cmp r0, r1\n    blo _020315EA\n    mov r0, #0\n    bx lr\n    _020315EC: .word 0x000001EF"
    );
    #endif
}

void sub_020315F0(void) {
    sub_02070438(0);
}

void sub_02031610(void) {
    /* Original at 0x02031610 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x1b]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    cmp r0, #1\n    bls _0203161C\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void sub_02031620(void) {
    /* Original at 0x02031620 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x17]\n    cmp r0, #0xea\n    blo _02031628\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_0203162C(void) {
    LocationGmmDatRegionCountGetByCountryMsgNo(0, 0);
}

void sub_0203164C(void) {
    /* Original at 0x0203164C */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldrb r0, [r5, #0x1e]\n    add r4, r1, #0\n    mov r6, #0\n    cmp r0, #0\n    bne _020316CE\n    ldrh r0, [r5, #0x20]\n    strh r0, [r4]\n    ldrh r0, [r5, #0x22]\n    strh r0, [r4, #2]\n    ldrh r0, [r5, #0x24]\n    strh r0, [r4, #4]\n    ldrh r0, [r5, #0x26]\n    strh r0, [r4, #6]\n    ldrh r0, [r4]\n    cmp r0, #5\n    blo _02031676\n    add r6, r6, #1\n    b _020316AA\n    ldrh r0, [r4, #2]\n    cmp r0, #0x13\n    bls _02031680\n    add r6, r6, #1\n    b _020316AA\n    ldrh r0, [r4, #4]\n    ldr r1, _020316E8 ; =0x0000FFFF\n    cmp r0, r1\n    beq _02031694\n    add r1, sp, #4\n    add r2, sp, #0\n    bl GetCategoryAndMsgNoByECWordIdx\n    cmp r0, #0\n    beq _020316A8\n    ldrh r0, [r4, #6]\n    ldr r1, _020316E8 ; =0x0000FFFF\n    cmp r0, r1\n    beq _020316AA\n    add r1, sp, #4\n    add r2, sp, #0\n    bl GetCategoryAndMsgNoByECWordIdx\n    cmp r0, #0\n    bne _020316AA\n    add r6, r6, #1\n    cmp r6, #0\n    ble _020316C8\n    add r0, r4, #0\n    mov r1, #4\n    bl MailMsg_Init_WithBank\n    mov r0, #0\n    strh r0, [r4, #2]\n    ldr r0, _020316EC ; =0x0000011F\n    mov r1, #0x63\n    bl GetECWordIndexByPair\n    strh r0, [r4, #4]\n    ldr r0, _020316E8 ; =0x0000FFFF\n    strh r0, [r4, #6]\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0x28\n    add r1, r2, #0\n    bl String_New\n    add r5, #0x20\n    add r1, r5, #0\n    mov r2, #0x28\n    add r4, r0, #0\n    bl CopyU16ArrayToStringN\n    add r0, r4, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _020316E8: .word 0x0000FFFF\n    _020316EC: .word 0x0000011F"
    );
    #endif
}

void sub_020316F0(void) {
    /* Original at 0x020316F0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x15]\n    cmp r0, #1\n    blo _020316FA\n    cmp r0, #0xc\n    bls _020316FC\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void sub_02031700(void) {
    /* Original at 0x02031700 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x16]\n    cmp r0, #0xf\n    bls _02031708\n    mov r0, #0\n    bx lr"
    );
    #endif
}
