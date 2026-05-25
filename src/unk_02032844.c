/* Decompiled from asm/unk_02032844.s */
#include "global.h"

void sub_02032844(void) {
    /* Original at 0x02032844 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02032850 ; =_021D4124\n    ldr r2, [r1, #4]\n    ldr r1, _02032854 ; =0x00001310\n    str r0, [r2, r1]\n    bx lr\n    nop\n    _02032850: .word _021D4124\n    _02032854: .word 0x00001310"
    );
    #endif
}

void sub_02032858(void) {
    /* Original at 0x02032858 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203286C ; =_021D4124\n    ldr r3, [r1, #4]\n    ldr r1, _02032870 ; =0x00001310\n    ldr r2, [r3, r1]\n    sub r2, #9\n    cmp r2, #1\n    bls _0203286A\n    add r1, #0x20\n    str r0, [r3, r1]\n    bx lr\n    _0203286C: .word _021D4124\n    _02032870: .word 0x00001310"
    );
    #endif
}

void sub_02032874(void) {
    /* Original at 0x02032874 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #3\n    bl sub_02032844\n    ldr r1, _0203289C ; =_021D4124\n    ldr r0, _020328A0 ; =sub_020328A4\n    ldr r1, [r1, #4]\n    bl WM_SetParentParameter\n    cmp r0, #2\n    beq _02032898\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _0203289C: .word _021D4124\n    _020328A0: .word sub_020328A4"
    );
    #endif
}

void sub_020328A4(void) {
    /* Original at 0x020328A4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _020328B8\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    pop {r3, pc}\n    bl sub_020328C8\n    cmp r0, #0\n    bne _020328C6\n    mov r0, #9\n    bl sub_02032844\n    pop {r3, pc}"
    );
    #endif
}

void sub_020328C8(void) {
    /* Original at 0x020328C8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _02032924 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02032928 ; =0x00001310\n    ldr r0, [r1, r0]\n    sub r0, r0, #4\n    cmp r0, #2\n    bhi _020328DC\n    mov r0, #1\n    pop {r4, pc}\n    bl WMi_GetStatusAddress\n    add r4, r0, #0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #4\n    bl DC_InvalidateRange\n    mov r0, #0x66\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r0, r4, r0\n    mov r1, #4\n    bl DC_FlushRange\n    ldr r0, _0203292C ; =sub_02032934\n    bl WM_StartParent\n    cmp r0, #2\n    beq _02032910\n    bl sub_02032858\n    mov r0, #0\n    pop {r4, pc}\n    ldr r2, _02032924 ; =_021D4124\n    ldr r1, _02032930 ; =0x0000132C\n    ldr r0, [r2, #4]\n    mov r3, #0\n    strh r3, [r0, r1]\n    ldr r2, [r2, #4]\n    mov r0, #1\n    add r1, r1, #2\n    strh r0, [r2, r1]\n    pop {r4, pc}\n    _02032924: .word _021D4124\n    _02032928: .word 0x00001310\n    _0203292C: .word sub_02032934\n    _02032930: .word 0x0000132C"
    );
    #endif
}

void sub_02032934(void) {
    /* Original at 0x02032934 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #0x10]\n    mov r1, #1\n    lsl r1, r0\n    lsl r0, r1, #0x10\n    lsr r4, r0, #0x10\n    ldrh r0, [r5, #2]\n    cmp r0, #0\n    beq _02032954\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, r5, r6, pc}\n    ldrh r0, [r5, #8]\n    cmp r0, #7\n    bgt _0203296C\n    bge _02032986\n    cmp r0, #2\n    bgt _02032A24\n    cmp r0, #0\n    blt _02032A24\n    beq _02032A16\n    cmp r0, #2\n    beq _02032978\n    pop {r4, r5, r6, pc}\n    cmp r0, #9\n    bgt _02032974\n    beq _020329F8\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x1a\n    pop {r4, r5, r6, pc}\n    ldr r0, _02032A28 ; =_021D4124\n    ldr r2, [r0, #4]\n    ldr r0, _02032A2C ; =0x00001345\n    ldrb r1, [r2, r0]\n    add r1, r1, #1\n    strb r1, [r2, r0]\n    pop {r4, r5, r6, pc}\n    ldr r0, _02032A28 ; =_021D4124\n    ldr r2, [r0, #4]\n    ldr r0, _02032A30 ; =0x00001343\n    ldrb r1, [r2, r0]\n    cmp r1, #1\n    beq _020329C4\n    sub r0, r0, #1\n    ldrb r0, [r2, r0]\n    cmp r0, #1\n    beq _020329C4\n    bl sub_02033264\n    ldr r1, _02032A28 ; =_021D4124\n    ldr r2, [r1, #4]\n    ldr r1, _02032A34 ; =0x00001334\n    ldrb r1, [r2, r1]\n    cmp r0, r1\n    bge _020329C4\n    bl sub_0203993C\n    ldrb r1, [r5, #0x14]\n    cmp r1, r0\n    bne _020329C4\n    add r1, r5, #0\n    ldr r0, _02032A38 ; =_0210F8FC\n    add r1, #0x15\n    mov r2, #3\n    bl memcmp\n    cmp r0, #0\n    beq _020329DC\n    ldrh r1, [r5, #0x10]\n    mov r0, #0\n    bl WM_Disconnect\n    cmp r0, #2\n    beq _02032A24\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, r5, r6, pc}\n    ldr r1, _02032A28 ; =_021D4124\n    ldr r0, _02032A3C ; =0x0000132E\n    ldr r3, [r1, #4]\n    ldrh r2, [r3, r0]\n    orr r2, r4\n    strh r2, [r3, r0]\n    ldr r1, [r1, #4]\n    sub r0, r0, #6\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _02032A24\n    ldrh r0, [r5, #0x10]\n    blx r1\n    pop {r4, r5, r6, pc}\n    ldr r2, _02032A28 ; =_021D4124\n    ldr r1, _02032A3C ; =0x0000132E\n    ldr r0, [r2, #4]\n    mvn r3, r4\n    ldrh r6, [r0, r1]\n    and r3, r6\n    strh r3, [r0, r1]\n    ldr r0, [r2, #4]\n    sub r1, #0xa\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    beq _02032A24\n    ldrh r0, [r5, #0x10]\n    blx r1\n    pop {r4, r5, r6, pc}\n    bl sub_02032A40\n    cmp r0, #0\n    bne _02032A24\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, r5, r6, pc}\n    nop\n    _02032A28: .word _021D4124\n    _02032A2C: .word 0x00001345\n    _02032A30: .word 0x00001343\n    _02032A34: .word 0x00001334\n    _02032A38: .word _0210F8FC\n    _02032A3C: .word 0x0000132E"
    );
    #endif
}

void sub_02032A40(void) {
    /* Original at 0x02032A40 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r0, _02032A9C ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02032AA0 ; =0x00001310\n    ldr r0, [r1, r0]\n    sub r0, r0, #4\n    cmp r0, #2\n    bhi _02032A58\n    add sp, #8\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #4\n    bl sub_02032844\n    ldr r0, _02032A9C ; =_021D4124\n    ldr r2, _02032AA4 ; =0x00001304\n    ldr r4, [r0, #4]\n    ldr r3, _02032AA8 ; =0x00001020\n    ldr r0, [r4, r2]\n    add r2, r2, #4\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r2, [r4, r2]\n    add r1, r4, r3\n    lsl r2, r2, #0x10\n    sub r3, #0xe0\n    ldr r0, _02032AAC ; =sub_02032AB0\n    lsr r2, r2, #0x10\n    add r3, r4, r3\n    bl WM_StartMP\n    cmp r0, #2\n    beq _02032A94\n    bl sub_02032858\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02032A9C: .word _021D4124\n    _02032AA0: .word 0x00001310\n    _02032AA4: .word 0x00001304\n    _02032AA8: .word 0x00001020\n    _02032AAC: .word sub_02032AB0"
    );
    #endif
}

void sub_02032AB0(void) {
    /* Original at 0x02032AB0 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r1, [r0, #2]\n    cmp r1, #0\n    beq _02032AC6\n    add r0, r1, #0\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    pop {r3, pc}\n    ldrh r0, [r0, #4]\n    sub r0, #0xa\n    cmp r0, #3\n    bhi _02032B00\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02032ADA: ; jump table\n    ldr r0, _02032B04 ; =_021D4124\n    ldr r2, [r0, #4]\n    ldr r0, _02032B08 ; =0x00001314\n    ldr r1, [r2, r0]\n    cmp r1, #2\n    bne _02032AFA\n    sub r0, r0, #4\n    ldr r0, [r2, r0]\n    cmp r0, #4\n    beq _02032AFA\n    cmp r0, #6\n    beq _02032B00\n    mov r0, #4\n    bl sub_02032844\n    pop {r3, pc}\n    nop\n    _02032B04: .word _021D4124\n    _02032B08: .word 0x00001314"
    );
    #endif
}

void sub_02032B0C(void) {
    /* Original at 0x02032B0C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #3\n    bl sub_02032844\n    ldr r0, _02032B2C ; =sub_02032B30\n    bl WM_EndMP\n    cmp r0, #2\n    beq _02032B26\n    bl sub_02032858\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _02032B2C: .word sub_02032B30"
    );
    #endif
}

void sub_02032B30(void) {
    /* Original at 0x02032B30 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _02032B42\n    bl sub_02032858\n    bl sub_02033830\n    pop {r3, pc}\n    bl sub_02032B50\n    cmp r0, #0\n    bne _02032B4E\n    bl sub_02033830\n    pop {r3, pc}"
    );
    #endif
}

void sub_02032B50(void) {
    /* Original at 0x02032B50 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02032B68 ; =sub_02032B6C\n    bl WM_EndParent\n    cmp r0, #2\n    beq _02032B64\n    bl sub_02032858\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _02032B68: .word sub_02032B6C"
    );
    #endif
}

void sub_02032B6C(void) {
    /* Original at 0x02032B6C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _02032B7A\n    bl sub_02032858\n    pop {r3, pc}\n    mov r0, #1\n    bl sub_02032844\n    pop {r3, pc}"
    );
    #endif
}

void sub_02032B84(void) {
    /* Original at 0x02032B84 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r2, #0\n    ldr r2, _02032C10 ; =_021D4124\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r3, #2\n    ldr r0, [r2, #4]\n    ldr r1, _02032C14 ; =0x00001308\n    lsl r3, r3, #8\n    str r3, [r0, r1]\n    ldr r2, [r2, #4]\n    mov r0, #0x40\n    sub r1, r1, #4\n    str r0, [r2, r1]\n    mov r0, #2\n    bl sub_02032844\n    ldr r2, _02032C10 ; =_021D4124\n    ldr r1, _02032C18 ; =0x00001256\n    ldr r3, [r2, #4]\n    mov r0, #1\n    strh r0, [r3, r1]\n    add r0, r1, #0\n    ldrh r6, [r4, #4]\n    ldr r3, [r2, #4]\n    add r0, #0x96\n    strh r6, [r3, r0]\n    add r0, r1, #0\n    ldrh r6, [r4, #2]\n    ldr r3, [r2, #4]\n    add r0, #0x94\n    strh r6, [r3, r0]\n    add r0, r1, #0\n    ldrh r4, [r4]\n    ldr r3, [r2, #4]\n    add r0, #0x92\n    strh r4, [r3, r0]\n    add r0, r1, #0\n    ldr r3, [r2, #4]\n    add r0, #0xbe\n    str r5, [r3, r0]\n    add r3, r1, #0\n    ldr r4, [r2, #4]\n    mov r0, #0\n    add r3, #0xaa\n    str r0, [r4, r3]\n    add r3, r1, #0\n    ldr r4, [r2, #4]\n    add r3, #0xb6\n    strh r7, [r4, r3]\n    add r3, r1, #0\n    ldr r4, [r2, #4]\n    add r3, #0x8e\n    strh r0, [r4, r3]\n    ldr r2, [r2, #4]\n    add r1, #0xb8\n    mov r0, #1\n    strh r0, [r2, r1]\n    bl sub_02032C84\n    cmp r0, #0\n    bne _02032C0A\n    mov r0, #9\n    bl sub_02032844\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02032C10: .word _021D4124\n    _02032C14: .word 0x00001308\n    _02032C18: .word 0x00001256"
    );
    #endif
}

void sub_02032C1C(void) {
    /* Original at 0x02032C1C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #2\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_02032844\n    ldr r1, _02032C80 ; =_021D4124\n    mov r0, #0x13\n    ldr r2, [r1, #4]\n    lsl r0, r0, #8\n    str r5, [r2, r0]\n    add r2, r0, #0\n    ldr r3, [r1, #4]\n    add r2, #0xc\n    strh r6, [r3, r2]\n    add r3, r0, #0\n    ldr r5, [r1, #4]\n    mov r2, #0\n    sub r3, #0x1c\n    strh r2, [r5, r3]\n    add r3, r0, #0\n    ldr r5, [r1, #4]\n    add r3, #0xe\n    strh r2, [r5, r3]\n    add r2, r0, #0\n    ldrh r5, [r4, #4]\n    ldr r3, [r1, #4]\n    sub r2, #0x14\n    strh r5, [r3, r2]\n    add r2, r0, #0\n    ldrh r5, [r4, #2]\n    ldr r3, [r1, #4]\n    sub r2, #0x16\n    strh r5, [r3, r2]\n    ldrh r2, [r4]\n    ldr r1, [r1, #4]\n    sub r0, #0x18\n    strh r2, [r1, r0]\n    bl sub_02032C84\n    cmp r0, #0\n    bne _02032C7C\n    mov r0, #9\n    bl sub_02032844\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _02032C80: .word _021D4124"
    );
    #endif
}

void sub_02032C84(void) {
    /* Original at 0x02032C84 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl WM_GetAllowedChannel\n    add r5, r0, #0\n    mov r0, #2\n    lsl r0, r0, #0xe\n    cmp r5, r0\n    bne _02032CA4\n    mov r0, #3\n    bl sub_02032858\n    mov r0, #1\n    bl sub_02039AD8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r5, #0\n    bne _02032CB8\n    mov r0, #0x16\n    bl sub_02032858\n    mov r0, #1\n    bl sub_02039AD8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _02032D38 ; =_021D4124\n    ldr r0, _02032D3C ; =0x0000130C\n    ldr r3, [r1, #4]\n    ldrh r2, [r3, r0]\n    cmp r2, #0\n    bne _02032CF8\n    add r7, r0, #0\n    mov r3, #1\n    add r2, r3, #0\n    sub r7, #0x28\n    sub r0, #0x28\n    ldr r4, [r1, #4]\n    ldr r6, _02032D40 ; =0x000012E4\n    ldrh r6, [r4, r6]\n    add r6, r6, #1\n    strh r6, [r4, r7]\n    ldr r4, [r1, #4]\n    ldrh r6, [r4, r0]\n    cmp r6, #0x10\n    bls _02032CE4\n    ldr r6, _02032D40 ; =0x000012E4\n    strh r3, [r4, r6]\n    ldr r6, [r1, #4]\n    ldr r4, _02032D40 ; =0x000012E4\n    ldrh r4, [r6, r4]\n    add r6, r2, #0\n    sub r4, r4, #1\n    lsl r6, r4\n    add r4, r5, #0\n    tst r4, r6\n    bne _02032CFC\n    b _02032CCE\n    sub r0, #0x28\n    strh r2, [r3, r0]\n    bl WM_GetDispersionScanPeriod\n    mov r1, #3\n    bl _s32_div_f\n    ldr r2, _02032D38 ; =_021D4124\n    ldr r1, _02032D44 ; =0x000012E6\n    ldr r3, [r2, #4]\n    strh r0, [r3, r1]\n    add r0, r1, #0\n    ldr r3, [r2, #4]\n    sub r0, #0xc6\n    add r4, r3, r0\n    sub r0, r1, #6\n    str r4, [r3, r0]\n    ldr r2, [r2, #4]\n    sub r1, r1, #6\n    ldr r0, _02032D48 ; =sub_02032D4C\n    add r1, r2, r1\n    bl WM_StartScan\n    cmp r0, #2\n    beq _02032D32\n    bl sub_02032858\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02032D38: .word _021D4124\n    _02032D3C: .word 0x0000130C\n    _02032D40: .word 0x000012E4\n    _02032D44: .word 0x000012E6\n    _02032D48: .word sub_02032D4C"
    );
    #endif
}

void sub_02032D4C(void) {
    /* Original at 0x02032D4C */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    beq _02032D62\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    ldr r0, _02032E14 ; =_021D4124\n    ldr r2, [r0, #4]\n    ldr r0, _02032E18 ; =0x00001310\n    ldr r1, [r2, r0]\n    cmp r1, #2\n    beq _02032D84\n    mov r1, #0\n    sub r0, r0, #2\n    strh r1, [r2, r0]\n    bl sub_02032E48\n    cmp r0, #0\n    bne _02032E10\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    ldrh r1, [r4, #8]\n    cmp r1, #3\n    beq _02032E10\n    cmp r1, #4\n    beq _02032E02\n    cmp r1, #5\n    bne _02032E02\n    sub r0, #0xf0\n    add r0, r2, r0\n    mov r1, #0xc0\n    bl DC_InvalidateRange\n    ldr r0, _02032E14 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02032E1C ; =0x00001320\n    ldr r2, [r1, r0]\n    cmp r2, #0\n    beq _02032DB8\n    ldrh r0, [r4, #0x36]\n    cmp r0, #8\n    blo _02032DB8\n    add r1, r4, #0\n    add r1, #0x48\n    ldrb r1, [r1, #4]\n    ldr r0, [r4, #0x3c]\n    blx r2\n    ldrh r0, [r4, #0x36]\n    cmp r0, #8\n    blo _02032E02\n    ldr r0, _02032E14 ; =_021D4124\n    ldr r2, [r4, #0x3c]\n    ldr r0, [r0, #4]\n    ldr r1, [r0, #8]\n    cmp r2, r1\n    bne _02032E02\n    add r4, #0x43\n    ldrb r2, [r4]\n    mov r1, #3\n    and r1, r2\n    cmp r1, #1\n    bne _02032E02\n    mov r1, #0x13\n    lsl r1, r1, #8\n    ldr r2, [r0, r1]\n    cmp r2, #0\n    beq _02032DE6\n    sub r1, #0xe0\n    add r0, r0, r1\n    blx r2\n    ldr r0, _02032E14 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02032E20 ; =0x0000130E\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _02032E02\n    bl sub_02032E48\n    cmp r0, #0\n    bne _02032E10\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    bl sub_02032C84\n    cmp r0, #0\n    bne _02032E10\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    nop\n    _02032E14: .word _021D4124\n    _02032E18: .word 0x00001310\n    _02032E1C: .word 0x00001320\n    _02032E20: .word 0x0000130E"
    );
    #endif
}

void sub_02032E24(void) {
    sub_02032844(0, 1, 3);
}

void sub_02032E48(void) {
    /* Original at 0x02032E48 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02032E60 ; =sub_02032E64\n    bl WM_EndScan\n    cmp r0, #2\n    beq _02032E5C\n    bl sub_02032858\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _02032E60: .word sub_02032E64"
    );
    #endif
}

void sub_02032E64(void) {
    /* Original at 0x02032E64 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _02032E72\n    bl sub_02032858\n    pop {r3, pc}\n    mov r0, #1\n    bl sub_02032844\n    ldr r0, _02032E94 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02032E98 ; =0x0000130E\n    ldrh r0, [r1, r0]\n    cmp r0, #0\n    beq _02032E92\n    bl sub_02032E9C\n    cmp r0, #0\n    bne _02032E92\n    mov r0, #9\n    bl sub_02032844\n    pop {r3, pc}\n    _02032E94: .word _021D4124\n    _02032E98: .word 0x0000130E"
    );
    #endif
}

void sub_02032E9C(void) {
    /* Original at 0x02032E9C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x24\n    ldr r0, _02032EF8 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02032EFC ; =0x00001310\n    ldr r0, [r1, r0]\n    sub r0, r0, #4\n    cmp r0, #2\n    bhi _02032EB4\n    add sp, #0x24\n    mov r0, #1\n    pop {pc}\n    mov r0, #3\n    bl sub_02032844\n    add r1, sp, #4\n    ldr r0, _02032F00 ; =_0210F8FC\n    add r1, #1\n    mov r2, #3\n    bl MI_CpuCopy8\n    bl sub_0203993C\n    add r1, sp, #4\n    strb r0, [r1]\n    mov r0, #0\n    str r0, [sp]\n    ldr r1, _02032EF8 ; =_021D4124\n    ldr r0, _02032F04 ; =sub_02032F0C\n    ldr r2, [r1, #4]\n    ldr r1, _02032F08 ; =0x00001220\n    mov r3, #1\n    add r1, r2, r1\n    add r2, sp, #4\n    bl WM_StartConnectEx\n    cmp r0, #2\n    beq _02032EF2\n    bl sub_02032858\n    add sp, #0x24\n    mov r0, #0\n    pop {pc}\n    mov r0, #1\n    add sp, #0x24\n    pop {pc}\n    _02032EF8: .word _021D4124\n    _02032EFC: .word 0x00001310\n    _02032F00: .word _0210F8FC\n    _02032F04: .word sub_02032F0C\n    _02032F08: .word 0x00001220"
    );
    #endif
}

void sub_02032F0C(void) {
    /* Original at 0x02032F0C */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    beq _02032F58\n    bl sub_02032858\n    ldrh r0, [r4, #2]\n    cmp r0, #0xc\n    bne _02032F28\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    cmp r0, #0xb\n    bne _02032F34\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    cmp r0, #1\n    bne _02032F50\n    bl sub_02039918\n    cmp r0, #0\n    beq _02032F48\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    mov r0, #8\n    bl sub_02032844\n    pop {r4, pc}\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    ldrh r0, [r4, #8]\n    cmp r0, #8\n    beq _02032FBE\n    cmp r0, #7\n    bne _02032F9E\n    ldr r0, _02032FC0 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02032FC4 ; =0x00001335\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _02032F7C\n    mov r0, #0x14\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    mov r0, #4\n    bl sub_02032844\n    bl sub_02032FCC\n    cmp r0, #0\n    bne _02032F92\n    mov r0, #3\n    bl sub_02032844\n    pop {r4, pc}\n    ldr r0, _02032FC0 ; =_021D4124\n    ldrh r2, [r4, #0xa]\n    ldr r1, [r0, #4]\n    ldr r0, _02032FC8 ; =0x0000132C\n    strh r2, [r1, r0]\n    pop {r4, pc}\n    cmp r0, #6\n    beq _02032FBE\n    cmp r0, #9\n    bne _02032FB4\n    mov r0, #0x14\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    cmp r0, #0x1a\n    beq _02032FBE\n    mov r0, #9\n    bl sub_02032844\n    pop {r4, pc}\n    _02032FC0: .word _021D4124\n    _02032FC4: .word 0x00001335\n    _02032FC8: .word 0x0000132C"
    );
    #endif
}

void sub_02032FCC(void) {
    /* Original at 0x02032FCC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r0, _0203300C ; =_021D4124\n    ldr r2, _02033010 ; =0x00001304\n    ldr r4, [r0, #4]\n    ldr r3, _02033014 ; =0x00001020\n    ldr r0, [r4, r2]\n    add r1, r4, r3\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r2, r2, #4\n    ldr r2, [r4, r2]\n    sub r3, #0xe0\n    lsl r2, r2, #0x10\n    ldr r0, _02033018 ; =sub_0203301C\n    lsr r2, r2, #0x10\n    add r3, r4, r3\n    bl WM_StartMP\n    cmp r0, #2\n    beq _02033006\n    bl sub_02032858\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r4, pc}\n    _0203300C: .word _021D4124\n    _02033010: .word 0x00001304\n    _02033014: .word 0x00001020\n    _02033018: .word sub_0203301C"
    );
    #endif
}

void sub_0203301C(void) {
    /* Original at 0x0203301C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r1, [r0, #2]\n    cmp r1, #0\n    beq _0203303E\n    cmp r1, #0xf\n    beq _02033074\n    cmp r1, #9\n    beq _02033074\n    cmp r1, #0xd\n    beq _02033074\n    add r0, r1, #0\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    pop {r3, pc}\n    ldrh r0, [r0, #4]\n    sub r0, #0xa\n    cmp r0, #3\n    bhi _02033074\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02033052: ; jump table\n    ldr r0, _02033078 ; =_021D4124\n    ldr r2, [r0, #4]\n    ldr r0, _0203307C ; =0x00001314\n    ldr r1, [r2, r0]\n    cmp r1, #3\n    bne _0203306E\n    sub r0, r0, #4\n    ldr r0, [r2, r0]\n    cmp r0, #6\n    beq _02033074\n    mov r0, #4\n    bl sub_02032844\n    pop {r3, pc}\n    nop\n    _02033078: .word _021D4124\n    _0203307C: .word 0x00001314"
    );
    #endif
}

void sub_02033080(void) {
    /* Original at 0x02033080 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #3\n    bl sub_02032844\n    ldr r0, _020330A0 ; =sub_020330A4\n    bl WM_EndMP\n    cmp r0, #2\n    beq _0203309A\n    bl sub_02032858\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _020330A0: .word sub_020330A4"
    );
    #endif
}

void sub_020330A4(void) {
    /* Original at 0x020330A4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _020330B6\n    bl sub_02032858\n    bl sub_02033858\n    pop {r3, pc}\n    bl sub_020330C8\n    cmp r0, #0\n    bne _020330C4\n    mov r0, #9\n    bl sub_02032844\n    pop {r3, pc}"
    );
    #endif
}

void sub_020330C8(void) {
    /* Original at 0x020330C8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #3\n    bl sub_02032844\n    ldr r0, _020330EC ; =sub_020330F0\n    mov r1, #0\n    bl WM_Disconnect\n    cmp r0, #2\n    beq _020330E8\n    bl sub_02032858\n    bl sub_02033830\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _020330EC: .word sub_020330F0"
    );
    #endif
}

void sub_020330F0(void) {
    /* Original at 0x020330F0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _020330FE\n    bl sub_02032858\n    pop {r3, pc}\n    mov r0, #1\n    bl sub_02032844\n    pop {r3, pc}"
    );
    #endif
}

void sub_02033108(void) {
    /* Original at 0x02033108 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #3\n    bl sub_02032844\n    ldr r0, _02033128 ; =sub_0203312C\n    bl WM_Reset\n    cmp r0, #2\n    beq _02033122\n    bl sub_02032858\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    nop\n    _02033128: .word sub_0203312C"
    );
    #endif
}

void sub_0203312C(void) {
    /* Original at 0x0203312C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    beq _02033144\n    mov r0, #9\n    bl sub_02032844\n    ldrh r0, [r4, #2]\n    bl sub_02032858\n    pop {r4, pc}\n    mov r0, #1\n    bl sub_02032844\n    pop {r4, pc}"
    );
    #endif
}

void sub_0203314C(void) {
    /* Original at 0x0203314C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _02033194 ; =_021D4124\n    add r6, r1, #0\n    add r4, r2, #0\n    ldr r1, [r0, #4]\n    mov r0, #0x3d\n    lsl r0, r0, #6\n    ldr r2, _02033198 ; =0x00001304\n    add r0, r1, r0\n    ldr r1, [r1, r2]\n    add r7, r3, #0\n    bl DC_FlushRange\n    ldr r0, _0203319C ; =0x0000FFFF\n    add r1, r7, #0\n    str r0, [sp]\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, _020331A0 ; =sub_020331A4\n    add r2, r5, #0\n    add r3, r6, #0\n    bl WM_SetMPDataToPortEx\n    cmp r0, #2\n    bne _0203318E\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02033194: .word _021D4124\n    _02033198: .word 0x00001304\n    _0203319C: .word 0x0000FFFF\n    _020331A0: .word sub_020331A4"
    );
    #endif
}

void sub_020331A4(void) {
    /* Original at 0x020331A4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r1, [r0, #2]\n    cmp r1, #0\n    beq _020331B8\n    cmp r1, #0xf\n    beq _020331B8\n    add r0, r1, #0\n    bl sub_02032858\n    pop {r3, pc}\n    ldr r2, [r0, #0x20]\n    cmp r2, #0\n    beq _020331CA\n    cmp r1, #0\n    bne _020331C6\n    mov r0, #1\n    b _020331C8\n    mov r0, #0\n    blx r2\n    pop {r3, pc}"
    );
    #endif
}

void sub_020331CC(void) {
    /* Original at 0x020331CC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r0, #0\n    ldrh r0, [r2, #2]\n    cmp r0, #0\n    beq _020331DC\n    bl sub_02032858\n    pop {r3, pc}\n    ldr r0, _0203320C ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02033210 ; =0x00001318\n    ldr r3, [r1, r0]\n    cmp r3, #0\n    beq _02033208\n    ldrh r0, [r2, #4]\n    cmp r0, #0x19\n    beq _02033208\n    cmp r0, #0x15\n    bne _020331FC\n    ldrh r0, [r2, #0x12]\n    ldr r1, [r2, #0xc]\n    ldrh r2, [r2, #0x10]\n    blx r3\n    pop {r3, pc}\n    cmp r0, #9\n    bne _02033208\n    ldrh r0, [r2, #0x12]\n    mov r1, #0\n    add r2, r1, #0\n    blx r3\n    pop {r3, pc}\n    nop\n    _0203320C: .word _021D4124\n    _02033210: .word 0x00001318"
    );
    #endif
}

void sub_02033214(void) {
    /* Original at 0x02033214 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _02033224\n    mov r0, #0xa\n    bl sub_02032844\n    pop {r3, pc}\n    mov r0, #0\n    add r1, r0, #0\n    bl WVR_TerminateAsync\n    mov r0, #0\n    bl sub_02032844\n    pop {r3, pc}"
    );
    #endif
}

void sub_02033234(void) {
    /* Original at 0x02033234 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0203323C ; =_021D4124\n    ldr r1, [r1, #4]\n    str r0, [r1, #8]\n    bx lr\n    _0203323C: .word _021D4124"
    );
    #endif
}

void sub_02033240(void) {
    /* Original at 0x02033240 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0203324C ; =_021D4124\n    ldr r3, [r2, #4]\n    str r0, [r3]\n    ldr r0, [r2, #4]\n    strh r1, [r0, #4]\n    bx lr\n    _0203324C: .word _021D4124"
    );
    #endif
}

void sub_02033250(void) {
    /* Original at 0x02033250 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0203325C ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02033260 ; =0x0000132E\n    ldrh r0, [r1, r0]\n    bx lr\n    nop\n    _0203325C: .word _021D4124\n    _02033260: .word 0x0000132E"
    );
    #endif
}

void sub_02033264(void) {
    /* Original at 0x02033264 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r0, _02033290 ; =_021D4124\n    mov r2, #0\n    ldr r1, [r0, #4]\n    ldr r0, _02033294 ; =0x0000132E\n    add r3, r2, #0\n    ldrh r4, [r1, r0]\n    mov r1, #1\n    add r0, r4, #0\n    tst r0, r1\n    beq _0203327C\n    add r2, r2, #1\n    lsl r0, r4, #0xf\n    add r3, r3, #1\n    lsr r4, r0, #0x10\n    cmp r3, #0x10\n    blt _02033274\n    lsl r0, r2, #0x10\n    lsr r0, r0, #0x10\n    pop {r3, r4}\n    bx lr\n    nop\n    _02033290: .word _021D4124\n    _02033294: .word 0x0000132E"
    );
    #endif
}

void sub_02033298(void) {
    /* Original at 0x02033298 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020332A4 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _020332A8 ; =0x00001310\n    ldr r0, [r1, r0]\n    bx lr\n    nop\n    _020332A4: .word _021D4124\n    _020332A8: .word 0x00001310"
    );
    #endif
}

void sub_020332AC(void) {
    /* Original at 0x020332AC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020332B8 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _020332BC ; =0x00001330\n    ldr r0, [r1, r0]\n    bx lr\n    nop\n    _020332B8: .word _021D4124\n    _020332BC: .word 0x00001330"
    );
    #endif
}

void sub_020332C0(void) {
    /* Original at 0x020332C0 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r0, sp, #0\n    bl OS_GetMacAddress\n    ldr r0, _02033348 ; =0x027FFC3C\n    ldr r3, [r0]\n    add r0, sp, #0\n    ldrh r2, [r0, #4]\n    ldrh r1, [r0, #2]\n    ldrh r0, [r0]\n    add r0, r0, r3\n    add r0, r1, r0\n    add r1, r2, r0\n    ldr r3, _0203334C ; =_021D4124\n    ldr r2, _02033350 ; =0x00001338\n    ldr r0, [r3, #4]\n    str r1, [r0, r2]\n    ldr r0, [r3, #4]\n    ldr r1, _02033354 ; =0x00010DCD\n    ldr r4, [r0, r2]\n    add r5, r4, #0\n    mul r5, r1\n    ldr r1, _02033358 ; =0x00003039\n    mov r4, #0\n    add r1, r5, r1\n    str r1, [r0, r2]\n    ldr r1, [r3, #4]\n    add r0, r2, #4\n    strh r4, [r1, r0]\n    ldr r1, [r3, #4]\n    mov r4, #0x65\n    add r0, r2, #6\n    strh r4, [r1, r0]\n    mov r0, #3\n    bl sub_02032844\n    mov r0, #1\n    bl sub_0203335C\n    cmp r0, #0x18\n    bne _0203332C\n    mov r0, #0x18\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    mov r0, #1\n    bl sub_02039AD8\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    cmp r0, #2\n    beq _02033340\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02033348: .word 0x027FFC3C\n    _0203334C: .word _021D4124\n    _02033350: .word 0x00001338\n    _02033354: .word 0x00010DCD\n    _02033358: .word 0x00003039"
    );
    #endif
}

void sub_0203335C(void) {
    /* Original at 0x0203335C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl WM_GetAllowedChannel\n    mov r1, #2\n    lsl r1, r1, #0xe\n    cmp r0, r1\n    bne _02033382\n    mov r0, #3\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    mov r0, #1\n    bl sub_02039AD8\n    mov r0, #3\n    pop {r4, pc}\n    cmp r0, #0\n    bne _0203339C\n    mov r0, #0x16\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    mov r0, #1\n    bl sub_02039AD8\n    mov r0, #0x18\n    pop {r4, pc}\n    mov r2, #1\n    sub r1, r4, #1\n    lsl r2, r1\n    add r1, r2, #0\n    tst r1, r0\n    bne _020333C4\n    mov r2, #1\n    add r1, r4, #1\n    lsl r1, r1, #0x10\n    lsr r4, r1, #0x10\n    cmp r4, #0x10\n    bls _020333B8\n    mov r0, #0x18\n    pop {r4, pc}\n    sub r1, r4, #1\n    add r3, r2, #0\n    lsl r3, r1\n    add r1, r3, #0\n    tst r1, r0\n    beq _020333AA\n    ldr r0, _020333D4 ; =sub_020333D8\n    add r1, r4, #0\n    bl sub_02033454\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    pop {r4, pc}\n    nop\n    _020333D4: .word sub_020333D8"
    );
    #endif
}

void sub_020333D8(void) {
    /* Original at 0x020333D8 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldrh r1, [r0, #2]\n    cmp r1, #0\n    beq _020333F4\n    add r0, r1, #0\n    bl sub_02032858\n    mov r0, #9\n    bl sub_02032844\n    mov r0, #1\n    bl sub_02039AD8\n    pop {r3, r4, r5, pc}\n    ldr r2, _0203344C ; =_021D4124\n    ldrh r1, [r0, #8]\n    ldrh r5, [r0, #0xa]\n    ldr r0, [r2, #4]\n    ldr r3, _02033450 ; =0x0000133E\n    ldrh r4, [r0, r3]\n    cmp r4, r5\n    bls _02033414\n    strh r5, [r0, r3]\n    mov r4, #1\n    sub r0, r1, #1\n    lsl r4, r0\n    ldr r2, [r2, #4]\n    add r0, r3, #2\n    strh r4, [r2, r0]\n    b _02033428\n    cmp r4, r5\n    bne _02033428\n    add r2, r3, #2\n    ldrh r5, [r0, r2]\n    mov r4, #1\n    sub r2, r1, #1\n    lsl r4, r2\n    orr r4, r5\n    add r2, r3, #2\n    strh r4, [r0, r2]\n    add r0, r1, #1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_0203335C\n    cmp r0, #0x18\n    bne _0203343E\n    mov r0, #7\n    bl sub_02032844\n    pop {r3, r4, r5, pc}\n    cmp r0, #2\n    beq _02033448\n    mov r0, #9\n    bl sub_02032844\n    pop {r3, r4, r5, pc}\n    nop\n    _0203344C: .word _021D4124\n    _02033450: .word 0x0000133E"
    );
    #endif
}

void sub_02033454(void) {
    WM_MeasureChannel(0x1e, 3, 0x11);
}

void sub_02033468(void) {
    /* Original at 0x02033468 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    bl sub_02032844\n    ldr r0, _0203348C ; =_021D4124\n    ldr r1, [r0, #4]\n    mov r0, #0x4d\n    lsl r0, r0, #6\n    ldrh r0, [r1, r0]\n    bl sub_02033494\n    ldr r2, _0203348C ; =_021D4124\n    ldr r1, _02033490 ; =0x0000133C\n    ldr r3, [r2, #4]\n    strh r0, [r3, r1]\n    ldr r0, [r2, #4]\n    ldrh r0, [r0, r1]\n    pop {r3, pc}\n    _0203348C: .word _021D4124\n    _02033490: .word 0x0000133C"
    );
    #endif
}

void sub_02033494(void) {
    /* Original at 0x02033494 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    add r4, r0, #0\n    mov r0, #0\n    add r3, r0, #0\n    add r2, r0, #0\n    mov r1, #1\n    add r5, r1, #0\n    lsl r5, r2\n    tst r5, r4\n    beq _020334B4\n    add r0, r2, #1\n    add r3, r3, #1\n    lsl r0, r0, #0x10\n    lsl r3, r3, #0x10\n    asr r0, r0, #0x10\n    lsr r3, r3, #0x10\n    add r2, r2, #1\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    cmp r2, #0x10\n    blt _020334A0\n    cmp r3, #1\n    bls _02033512\n    ldr r5, _02033518 ; =_021D4124\n    ldr r2, _0203351C ; =0x00001338\n    ldr r0, [r5, #4]\n    ldr r1, _02033520 ; =0x00010DCD\n    ldr r6, [r0, r2]\n    add r7, r6, #0\n    mul r7, r1\n    ldr r1, _02033524 ; =0x00003039\n    add r1, r7, r1\n    str r1, [r0, r2]\n    ldr r0, [r5, #4]\n    mov r1, #1\n    ldr r0, [r0, r2]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mul r0, r3\n    lsl r0, r0, #8\n    lsr r2, r0, #0x10\n    mov r3, #0\n    add r0, r4, #0\n    tst r0, r1\n    beq _02033502\n    cmp r2, #0\n    bne _020334FC\n    add r0, r3, #1\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    pop {r4, r5, r6, r7}\n    bx lr\n    sub r0, r2, #1\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    lsl r0, r4, #0xf\n    lsr r4, r0, #0x10\n    add r0, r3, #1\n    lsl r0, r0, #0x10\n    asr r3, r0, #0x10\n    cmp r3, #0x10\n    blt _020334E8\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _02033518: .word _021D4124\n    _0203351C: .word 0x00001338\n    _02033520: .word 0x00010DCD\n    _02033524: .word 0x00003039"
    );
    #endif
}

void sub_02033528(void) {
    /* Original at 0x02033528 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    lsl r2, r0, #0x1b\n    lsr r3, r2, #0x1b\n    beq _02033536\n    mov r2, #0x20\n    sub r2, r2, r3\n    add r0, r0, r2\n    ldr r3, _020335AC ; =_021D4124\n    ldr r2, _020335B0 ; =0x00001308\n    str r0, [r3, #4]\n    mov r4, #0\n    str r4, [r0, r2]\n    ldr r5, [r3, #4]\n    sub r0, r2, #4\n    str r4, [r5, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    add r0, #0x10\n    str r4, [r5, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    add r0, #0x24\n    strh r4, [r5, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    mov r6, #1\n    add r0, #0x26\n    strh r6, [r5, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    add r0, #0x28\n    str r4, [r5, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    add r0, #8\n    str r4, [r5, r0]\n    ldr r0, [r3, #4]\n    mov r6, #8\n    str r4, [r0]\n    ldr r0, [r3, #4]\n    strh r4, [r0, #4]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    add r0, #0x14\n    str r4, [r5, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    add r0, #0x2c\n    strb r6, [r5, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    add r0, #0x2d\n    strb r4, [r5, r0]\n    ldr r0, [r3, #4]\n    add r2, #0x3a\n    strb r4, [r0, r2]\n    add r0, r1, #0\n    bl sub_020335D4\n    cmp r0, #0\n    bne _020335A6\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _020335AC: .word _021D4124\n    _020335B0: .word 0x00001308"
    );
    #endif
}

void sub_020335B4(void) {
    r0 = r0 << 6;
}

void sub_020335BC(void) {
    /* Original at 0x020335BC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #8\n    bne _020335D0\n    mov r0, #9\n    bl sub_02032844\n    mov r0, #0x19\n    bl sub_02032858\n    pop {r3, pc}"
    );
    #endif
}

void sub_020335D4(void) {
    /* Original at 0x020335D4 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #3\n    bl sub_02032844\n    cmp r4, #1\n    bne _020335F2\n    ldr r0, _02033618 ; =_021D4124\n    ldr r1, _0203361C ; =sub_02033620\n    ldr r0, [r0, #4]\n    mov r2, #2\n    add r0, #0x40\n    bl WM_Initialize\n    b _02033602\n    ldr r0, _02033618 ; =_021D4124\n    ldr r1, _0203361C ; =sub_02033620\n    ldr r0, [r0, #4]\n    mov r2, #2\n    add r0, #0x40\n    mov r3, #0\n    bl WM_InitializeForListening\n    cmp r0, #2\n    beq _02033614\n    bl sub_02032858\n    mov r0, #0xa\n    bl sub_02032844\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    _02033618: .word _021D4124\n    _0203361C: .word sub_02033620"
    );
    #endif
}

void sub_02033620(void) {
    /* Original at 0x02033620 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldrh r0, [r0, #2]\n    cmp r0, #0\n    beq _0203363A\n    bl sub_02032858\n    mov r0, #0xa\n    bl sub_02032844\n    mov r0, #5\n    bl sub_02039AD8\n    pop {r3, pc}\n    ldr r0, _02033660 ; =sub_020335BC\n    bl WM_SetIndCallback\n    cmp r0, #0\n    beq _02033656\n    bl sub_02032858\n    mov r0, #0xa\n    bl sub_02032844\n    mov r0, #5\n    bl sub_02039AD8\n    pop {r3, pc}\n    mov r0, #1\n    bl sub_02032844\n    pop {r3, pc}\n    nop\n    _02033660: .word sub_020335BC"
    );
    #endif
}

void sub_02033664(void) {
    /* Original at 0x02033664 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02033668(void) {
    /* Original at 0x02033668 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl sub_0203993C\n    bl sub_020340C4\n    cmp r0, #0\n    beq _0203368C\n    ldr r0, _0203372C ; =sub_02033664\n    mov r2, #0x64\n    ldr r1, _02033730 ; =0x0000FFFF\n    mov r3, #5\n    str r2, [sp]\n    bl WM_SetLifeTime\n    ldr r1, _02033734 ; =_021D4124\n    mov r0, #7\n    ldr r2, [r1, #4]\n    ldr r1, _02033738 ; =0x00001308\n    lsl r0, r0, #6\n    str r0, [r2, r1]\n    ldr r0, _02033734 ; =_021D4124\n    mov r3, #0xe0\n    ldr r2, [r0, #4]\n    sub r0, r1, #4\n    str r3, [r2, r0]\n    ldr r0, _02033734 ; =_021D4124\n    add r1, #0xc\n    ldr r0, [r0, #4]\n    str r5, [r0, r1]\n    mov r0, #3\n    bl sub_02032844\n    ldr r1, _02033734 ; =_021D4124\n    cmp r5, #0\n    ldr r0, [r1, #4]\n    strh r6, [r0, #0xc]\n    ldr r0, [r1, #4]\n    strh r7, [r0, #0x32]\n    add r0, sp, #8\n    ldrh r2, [r0, #0x10]\n    ldr r0, [r1, #4]\n    strh r2, [r0, #0x18]\n    beq _020336CC\n    cmp r5, #4\n    beq _020336E6\n    b _020336F2\n    ldr r0, [r1, #4]\n    mov r2, #0xc0\n    strh r2, [r0, #0x34]\n    cmp r4, #5\n    blo _020336DE\n    ldr r0, [r1, #4]\n    mov r2, #0xc\n    strh r2, [r0, #0x36]\n    b _020336F2\n    ldr r0, [r1, #4]\n    mov r2, #0x26\n    strh r2, [r0, #0x36]\n    b _020336F2\n    ldr r0, [r1, #4]\n    mov r2, #0x64\n    strh r2, [r0, #0x34]\n    ldr r0, [r1, #4]\n    mov r2, #0xc\n    strh r2, [r0, #0x36]\n    ldr r1, _02033734 ; =_021D4124\n    ldr r0, [r1, #4]\n    strh r4, [r0, #0x10]\n    ldr r2, [r1, #4]\n    mov r0, #0\n    strh r0, [r2, #0x16]\n    ldr r2, [r1, #4]\n    cmp r5, #2\n    strh r0, [r2, #0x12]\n    ldr r2, [sp, #0x1c]\n    ldr r1, [r1, #4]\n    strh r2, [r1, #0xe]\n    bne _0203370E\n    mov r0, #1\n    ldr r1, _02033734 ; =_021D4124\n    cmp r5, #0\n    ldr r1, [r1, #4]\n    strh r0, [r1, #0x14]\n    beq _02033720\n    cmp r5, #2\n    beq _02033720\n    cmp r5, #4\n    bne _02033726\n    bl sub_02032874\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0203372C: .word sub_02033664\n    _02033730: .word 0x0000FFFF\n    _02033734: .word _021D4124\n    _02033738: .word 0x00001308"
    );
    #endif
}

void sub_0203373C(void) {
    /* Original at 0x0203373C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_0203993C\n    bl sub_020340C4\n    cmp r0, #0\n    beq _0203375E\n    ldr r0, _020337BC ; =sub_02033664\n    mov r2, #0x64\n    ldr r1, _020337C0 ; =0x0000FFFF\n    mov r3, #5\n    str r2, [sp]\n    bl WM_SetLifeTime\n    ldr r2, _020337C4 ; =_021D4124\n    mov r3, #2\n    ldr r0, [r2, #4]\n    ldr r1, _020337C8 ; =0x00001308\n    lsl r3, r3, #8\n    str r3, [r0, r1]\n    sub r0, r1, #4\n    ldr r3, [r2, #4]\n    mov r6, #0x40\n    str r6, [r3, r0]\n    ldr r0, [r2, #4]\n    add r1, #0xc\n    str r5, [r0, r1]\n    mov r0, #3\n    bl sub_02032844\n    cmp r5, #1\n    beq _0203378A\n    cmp r5, #3\n    beq _0203378A\n    cmp r5, #5\n    bne _020337B4\n    ldr r1, _020337C4 ; =_021D4124\n    add r0, r4, #0\n    ldr r2, [r1, #4]\n    ldr r1, _020337CC ; =0x00001220\n    add r1, r2, r1\n    mov r2, #0xc0\n    bl MI_CpuCopy8\n    ldr r0, _020337C4 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _020337CC ; =0x00001220\n    add r0, r1, r0\n    mov r1, #0xc0\n    bl DC_FlushRange\n    bl DC_WaitWriteBufferEmpty\n    bl sub_02032E9C\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _020337BC: .word sub_02033664\n    _020337C0: .word 0x0000FFFF\n    _020337C4: .word _021D4124\n    _020337C8: .word 0x00001308\n    _020337CC: .word 0x00001220"
    );
    #endif
}

void sub_020337D0(void) {
    /* Original at 0x020337D0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _020337F4 ; =_021D4124\n    ldr r3, [r2, #4]\n    ldr r2, _020337F8 ; =0x00001318\n    str r0, [r3, r2]\n    lsl r0, r1, #0x10\n    ldr r1, _020337FC ; =sub_020331CC\n    lsr r0, r0, #0x10\n    mov r2, #0\n    bl WM_SetPortCallback\n    cmp r0, #0\n    beq _020337F2\n    mov r0, #9\n    bl sub_02032844\n    b _020337F0\n    pop {r3, pc}\n    _020337F4: .word _021D4124\n    _020337F8: .word 0x00001318\n    _020337FC: .word sub_020331CC"
    );
    #endif
}

void sub_02033800(void) {
    /* Original at 0x02033800 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl sub_020338F4\n    cmp r0, #0\n    bne _02033820\n    bl sub_02033250\n    mov r1, #0xfe\n    tst r0, r1\n    bne _02033820\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, r7, #0\n    bl sub_0203314C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02033830(void) {
    /* Original at 0x02033830 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02033850 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02033854 ; =0x00001310\n    ldr r0, [r1, r0]\n    cmp r0, #2\n    bne _02033840\n    b _0203383E\n    bl sub_02033108\n    cmp r0, #0\n    bne _0203384E\n    mov r0, #0xa\n    bl sub_02032844\n    pop {r3, pc}\n    _02033850: .word _021D4124\n    _02033854: .word 0x00001310"
    );
    #endif
}

void sub_02033858(void) {
    /* Original at 0x02033858 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020338C4 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _020338C8 ; =0x00001310\n    ldr r0, [r1, r0]\n    cmp r0, #1\n    beq _020338C2\n    cmp r0, #6\n    beq _0203387E\n    cmp r0, #5\n    beq _0203387E\n    cmp r0, #4\n    beq _0203387E\n    mov r0, #3\n    bl sub_02032844\n    bl sub_02033830\n    pop {r3, pc}\n    mov r0, #3\n    bl sub_02032844\n    ldr r0, _020338C4 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _020338CC ; =0x00001314\n    ldr r0, [r1, r0]\n    cmp r0, #5\n    bhi _020338C2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0203389C: ; jump table\n    bl sub_02033080\n    cmp r0, #0\n    bne _020338C2\n    bl sub_02033830\n    pop {r3, pc}\n    bl sub_02032B0C\n    cmp r0, #0\n    bne _020338C2\n    bl sub_02033830\n    pop {r3, pc}\n    _020338C4: .word _021D4124\n    _020338C8: .word 0x00001310\n    _020338CC: .word 0x00001314"
    );
    #endif
}

void sub_020338D0(void) {
    /* Original at 0x020338D0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #3\n    bl sub_02032844\n    ldr r0, _020338F0 ; =sub_02033214\n    bl WM_End\n    cmp r0, #2\n    beq _020338EC\n    mov r0, #9\n    bl sub_02032844\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #1\n    pop {r3, pc}\n    _020338F0: .word sub_02033214"
    );
    #endif
}

void sub_020338F4(void) {
    /* Original at 0x020338F4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02033900 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02033904 ; =0x0000132C\n    ldrh r0, [r1, r0]\n    bx lr\n    nop\n    _02033900: .word _021D4124\n    _02033904: .word 0x0000132C"
    );
    #endif
}

void sub_02033908(void) {
    /* Original at 0x02033908 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02033918 ; =_021D4124\n    ldr r2, [r1, #4]\n    cmp r2, #0\n    beq _02033914\n    ldr r1, _0203391C ; =0x00001334\n    strb r0, [r2, r1]\n    bx lr\n    nop\n    _02033918: .word _021D4124\n    _0203391C: .word 0x00001334"
    );
    #endif
}

void sub_02033920(void) {
    /* Original at 0x02033920 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02033934 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02033938 ; =0x00001310\n    ldr r0, [r1, r0]\n    cmp r0, #1\n    bne _02033930\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02033934: .word _021D4124\n    _02033938: .word 0x00001310"
    );
    #endif
}

void sub_0203393C(void) {
    /* Original at 0x0203393C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02033950 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02033954 ; =0x00001310\n    ldr r0, [r1, r0]\n    cmp r0, #3\n    bne _0203394C\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02033950: .word _021D4124\n    _02033954: .word 0x00001310"
    );
    #endif
}

void sub_02033958(void) {
    /* Original at 0x02033958 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0203396C ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02033970 ; =0x00001310\n    ldr r0, [r1, r0]\n    cmp r0, #9\n    bne _02033968\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0203396C: .word _021D4124\n    _02033970: .word 0x00001310"
    );
    #endif
}

void sub_02033974(void) {
    /* Original at 0x02033974 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02033988 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _0203398C ; =0x00001310\n    ldr r0, [r1, r0]\n    cmp r0, #0xa\n    bne _02033984\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02033988: .word _021D4124\n    _0203398C: .word 0x00001310"
    );
    #endif
}

void sub_02033990(void) {
    /* Original at 0x02033990 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020339AC ; =_021D4124\n    ldr r1, [r0, #4]\n    cmp r1, #0\n    beq _020339A8\n    ldr r0, _020339B0 ; =0x00001310\n    ldr r0, [r1, r0]\n    cmp r0, #2\n    bne _020339A4\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    mov r0, #0\n    bx lr\n    _020339AC: .word _021D4124\n    _020339B0: .word 0x00001310"
    );
    #endif
}

void sub_020339B4(void) {
    /* Original at 0x020339B4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r0, #0\n    ldr r0, _020339E8 ; =_021D4124\n    add r5, r1, #0\n    ldr r1, [r0, #4]\n    ldr r0, _020339EC ; =0x00001310\n    add r4, r2, #0\n    ldr r0, [r1, r0]\n    cmp r0, #4\n    bne _020339E2\n    lsl r0, r3, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    lsl r2, r5, #0x10\n    str r0, [sp, #4]\n    mov r0, #0\n    add r1, r6, #0\n    lsr r2, r2, #0x10\n    add r3, r4, #0\n    bl WM_SetGameInfo\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _020339E8: .word _021D4124\n    _020339EC: .word 0x00001310"
    );
    #endif
}

void sub_020339F0(void) {
    /* Original at 0x020339F0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #2]\n    cmp r0, #0\n    bne _02033A00\n    ldr r0, _02033A04 ; =_021D4124\n    mov r2, #1\n    ldr r1, [r0, #4]\n    ldr r0, _02033A08 ; =0x00001344\n    strb r2, [r1, r0]\n    bx lr\n    nop\n    _02033A04: .word _021D4124\n    _02033A08: .word 0x00001344"
    );
    #endif
}

void sub_02033A0C(void) {
    /* Original at 0x02033A0C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02033A38 ; =_021D4124\n    add r1, r0, #0\n    ldr r3, [r2, #4]\n    ldr r0, _02033A3C ; =0x00001344\n    mov r4, #0\n    strb r4, [r3, r0]\n    ldr r2, [r2, #4]\n    sub r0, #0x34\n    ldr r0, [r2, r0]\n    cmp r0, #4\n    bne _02033A32\n    ldr r0, _02033A40 ; =sub_020339F0\n    bl WM_SetEntry\n    cmp r0, #2\n    bne _02033A32\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02033A38: .word _021D4124\n    _02033A3C: .word 0x00001344\n    _02033A40: .word sub_020339F0"
    );
    #endif
}

void sub_02033A44(void) {
    /* Original at 0x02033A44 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02033A60 ; =_021D4124\n    ldr r1, [r0, #4]\n    cmp r1, #0\n    beq _02033A5C\n    ldr r0, _02033A64 ; =0x00001345\n    ldrb r0, [r1, r0]\n    cmp r0, #6\n    blo _02033A58\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    mov r0, #0\n    bx lr\n    _02033A60: .word _021D4124\n    _02033A64: .word 0x00001345"
    );
    #endif
}

void sub_02033A68(void) {
    /* Original at 0x02033A68 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02033A74 ; =_021D4124\n    mov r2, #0\n    ldr r1, [r0, #4]\n    ldr r0, _02033A78 ; =0x00001345\n    strb r2, [r1, r0]\n    bx lr\n    _02033A74: .word _021D4124\n    _02033A78: .word 0x00001345"
    );
    #endif
}

void sub_02033A7C(void) {
    /* Original at 0x02033A7C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02033A88 ; =_021D4124\n    ldr r2, [r1, #4]\n    ldr r1, _02033A8C ; =0x00001320\n    str r0, [r2, r1]\n    bx lr\n    nop\n    _02033A88: .word _021D4124\n    _02033A8C: .word 0x00001320"
    );
    #endif
}

void sub_02033A90(void) {
    /* Original at 0x02033A90 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02033A9C ; =_021D4124\n    ldr r2, [r1, #4]\n    ldr r1, _02033AA0 ; =0x00001328\n    str r0, [r2, r1]\n    bx lr\n    nop\n    _02033A9C: .word _021D4124\n    _02033AA0: .word 0x00001328"
    );
    #endif
}

void sub_02033AA4(void) {
    /* Original at 0x02033AA4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02033AB0 ; =_021D4124\n    ldr r2, [r1, #4]\n    ldr r1, _02033AB4 ; =0x00001342\n    strb r0, [r2, r1]\n    bx lr\n    nop\n    _02033AB0: .word _021D4124\n    _02033AB4: .word 0x00001342"
    );
    #endif
}

void sub_02033AB8(void) {
    /* Original at 0x02033AB8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02033AC4 ; =_021D4124\n    ldr r1, [r0, #4]\n    ldr r0, _02033AC8 ; =0x00001342\n    ldrb r0, [r1, r0]\n    bx lr\n    nop\n    _02033AC4: .word _021D4124\n    _02033AC8: .word 0x00001342"
    );
    #endif
}

void sub_02033ACC(void) {
    /* Original at 0x02033ACC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02033AD8 ; =_021D4124\n    ldr r2, [r1, #4]\n    ldr r1, _02033ADC ; =0x00001343\n    strb r0, [r2, r1]\n    bx lr\n    nop\n    _02033AD8: .word _021D4124\n    _02033ADC: .word 0x00001343"
    );
    #endif
}
