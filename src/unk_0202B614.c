/* Decompiled from asm/unk_0202B614.s */
#include "global.h"

void sub_0202B614(void) {
    /* Original at 0x0202B614 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0202B628 ; =0x00001234\n    cmp r0, r1\n    beq _0202B620\n    ldr r1, _0202B62C ; =0x00002345\n    cmp r0, r1\n    bne _0202B624\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0202B628: .word 0x00001234\n    _0202B62C: .word 0x00002345"
    );
    #endif
}

void sub_0202B630(void) {
    /* Original at 0x0202B630 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r6, r2, #0\n    add r4, r0, #0\n    add r1, sp, #4\n    add r2, sp, #0\n    add r7, r3, #0\n    bl ov41_02249780\n    add r0, r4, #0\n    bl ov41_02249710\n    add r4, r0, #0\n    mov r0, #1\n    ldr r1, [sp, #4]\n    lsl r0, r0, #8\n    cmp r1, r0\n    blt _0202B65A\n    bl GF_AssertFail\n    mov r0, #1\n    ldr r1, [sp]\n    lsl r0, r0, #8\n    cmp r1, r0\n    blt _0202B668\n    bl GF_AssertFail\n    mov r0, #0x7f\n    mvn r0, r0\n    cmp r4, r0\n    bgt _0202B674\n    bl GF_AssertFail\n    ldr r0, [sp, #4]\n    strb r0, [r5]\n    ldr r0, [sp]\n    strb r0, [r6]\n    strb r4, [r7]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0202B684(void) {
    /* Original at 0x0202B684 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    add r0, r4, #0\n    mov r1, #MON_DATA_SPECIES\n    mov r2, #0\n    add r7, r3, #0\n    bl GetMonData\n    add r2, r5, #0\n    strh r0, [r5, #8]\n    add r0, r4, #0\n    mov r1, #MON_DATA_NICKNAME\n    add r2, #0xa\n    bl GetMonData\n    mov r1, #MON_DATA_PERSONALITY\n    add r0, r4, #0\n    add r2, r1, #0\n    bl GetMonData\n    str r0, [r5]\n    add r0, r4, #0\n    mov r1, #MON_DATA_OT_ID\n    mov r2, #0\n    bl GetMonData\n    str r0, [r5, #4]\n    add r0, r4, #0\n    mov r1, #MON_DATA_FORM\n    mov r2, #0\n    bl GetMonData\n    add r1, r5, #0\n    add r1, #0x33\n    strb r0, [r1]\n    add r0, r5, #0\n    add r0, #0x31\n    strb r6, [r0]\n    add r0, r5, #0\n    add r0, #0x32\n    strb r7, [r0]\n    add r1, sp, #8\n    mov r0, #0x10\n    ldrsb r0, [r1, r0]\n    add r5, #0x30\n    strb r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0202B6E8(void) {
    /* Original at 0x0202B6E8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r2, #0\n    add r1, sp, #4\n    add r2, sp, #4\n    add r1, #2\n    add r2, #1\n    add r3, sp, #4\n    bl sub_0202B630\n    add r3, sp, #4\n    mov r0, #0\n    ldrsb r0, [r3, r0]\n    add r1, r4, #0\n    str r0, [sp]\n    ldrb r2, [r3, #2]\n    ldrb r3, [r3, #1]\n    add r0, r5, #0\n    bl sub_0202B684\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202B718(void) {
    CopyStringToU16Array(8);
}

void sub_0202B730(void) {
    /* Original at 0x0202B730 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    mov r1, #1\n    add r5, r0, #0\n    str r1, [sp]\n    ldr r0, [r5]\n    mov r2, #0\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    ldr r0, [r5, #4]\n    add r3, r2, #0\n    str r0, [sp, #0xc]\n    ldrh r1, [r5, #8]\n    add r0, r4, #0\n    bl CreateMon\n    add r2, r5, #0\n    add r0, r4, #0\n    mov r1, #0x75\n    add r2, #0xa\n    bl SetMonData\n    add r5, #0x33\n    add r0, r4, #0\n    mov r1, #0x70\n    add r2, r5, #0\n    bl SetMonData\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202B770(void) {
    /* Original at 0x0202B770 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "strb r1, [r0]\n    ldr r1, _0202B780 ; =0xFFFFFFF0\n    strb r2, [r0, #1]\n    strb r3, [r0, #2]\n    add r1, sp\n    ldrb r1, [r1, #0x10]\n    strb r1, [r0, #3]\n    bx lr\n    _0202B780: .word 0xFFFFFFF0"
    );
    #endif
}

void sub_0202B784(void) {
    /* Original at 0x0202B784 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r1, #0\n    cmp r4, #0x3d\n    blo _0202B794\n    bl GF_AssertFail\n    lsr r2, r4, #0x1f\n    lsl r1, r4, #0x1d\n    sub r1, r1, r2\n    mov r0, #0x1d\n    ror r1, r0\n    add r0, r2, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1a\n    lsr r1, r0, #0x18\n    lsr r0, r4, #3\n    lsl r0, r0, #0x18\n    mov r2, #0xf\n    lsr r0, r0, #0x16\n    lsl r2, r1\n    ldr r3, [r5, r0]\n    mvn r2, r2\n    and r2, r3\n    str r2, [r5, r0]\n    add r2, r6, #0\n    ldr r3, [r5, r0]\n    lsl r2, r1\n    add r1, r3, #0\n    orr r1, r2\n    str r1, [r5, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202B7C8(void) {
    /* Original at 0x0202B7C8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x3d\n    blo _0202B7D6\n    bl GF_AssertFail\n    lsr r3, r4, #0x1f\n    lsl r2, r4, #0x1d\n    lsr r0, r4, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x16\n    sub r2, r2, r3\n    mov r1, #0x1d\n    ror r2, r1\n    add r1, r3, r2\n    lsl r1, r1, #0x18\n    ldr r0, [r5, r0]\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1a\n    add r2, r0, #0\n    lsr r1, r1, #0x18\n    lsr r2, r1\n    mov r0, #0xf\n    and r0, r2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #9\n    bls _0202B804\n    mov r0, #9\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202B808(void) {
    /* Original at 0x0202B808 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #2\n    blo _0202B818\n    bl GF_AssertFail\n    lsr r2, r6, #0x1f\n    lsl r1, r6, #0x1b\n    sub r1, r1, r2\n    mov r0, #0x1b\n    ror r1, r0\n    add r0, r2, r1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    lsr r0, r6, #5\n    lsl r0, r0, #0x18\n    mov r2, #1\n    lsr r0, r0, #0x16\n    lsl r2, r1\n    ldr r3, [r5, r0]\n    mvn r2, r2\n    and r2, r3\n    str r2, [r5, r0]\n    add r2, r4, #0\n    ldr r3, [r5, r0]\n    lsl r2, r1\n    add r1, r3, #0\n    orr r1, r2\n    str r1, [r5, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202B848(void) {
    /* Original at 0x0202B848 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "lsr r2, r1, #5\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x16\n    ldr r3, [r0, r2]\n    lsr r2, r1, #0x1f\n    lsl r1, r1, #0x1b\n    sub r1, r1, r2\n    mov r0, #0x1b\n    ror r1, r0\n    add r0, r2, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    add r1, r3, #0\n    lsr r1, r0\n    mov r0, #1\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr"
    );
    #endif
}

void sub_0202B870(void) {
    /* Original at 0x0202B870 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x12\n    bls _0202B880\n    bl GF_AssertFail\n    lsr r2, r6, #0x1f\n    lsl r1, r6, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    lsl r0, r0, #0x1b\n    lsr r1, r0, #0x18\n    lsr r0, r6, #2\n    lsl r0, r0, #0x18\n    mov r2, #0xff\n    lsr r0, r0, #0x16\n    lsl r2, r1\n    ldr r3, [r5, r0]\n    mvn r2, r2\n    and r2, r3\n    str r2, [r5, r0]\n    add r2, r4, #0\n    ldr r3, [r5, r0]\n    lsl r2, r1\n    add r1, r3, #0\n    orr r1, r2\n    str r1, [r5, r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202B8B4(void) {
    /* Original at 0x0202B8B4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "lsr r2, r1, #2\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x16\n    ldr r0, [r0, r2]\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1e\n    sub r2, r2, r3\n    mov r1, #0x1e\n    ror r2, r1\n    add r1, r3, r2\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x18\n    lsr r0, r1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bx lr"
    );
    #endif
}

void sub_0202B8D8(void) {
    /* Original at 0x0202B8D8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r5, #0\n    add r6, r0, #0\n    add r4, r5, #0\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl sub_0202B8B4\n    cmp r0, #0x12\n    beq _0202B8F0\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r4, #0x12\n    blt _0202B8E0\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202B8FC(void) {
    /* Original at 0x0202B8FC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x3d\n    bhs _0202B904\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_0202B908(void) {
    /* Original at 0x0202B908 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r1, #0\n    mov r2, #0x40\n    add r5, r0, #0\n    bl memset\n    mov r4, #0\n    add r5, #0x28\n    mov r6, #0x12\n    lsl r2, r4, #0x18\n    add r0, r5, #0\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    bl sub_0202B870\n    add r4, r4, #1\n    cmp r4, #0x12\n    blt _0202B91A\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void Save_FashionData_Init(void) {
    /* Original at 0x0202B930 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r4, #0\n    ldr r6, _0202B980 ; =0x00001234\n    str r0, [sp]\n    add r5, r0, #0\n    add r7, r4, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r2, #0x74\n    bl memset\n    str r6, [r5]\n    add r4, r4, #1\n    add r5, #0x74\n    cmp r4, #0xb\n    blt _0202B93C\n    ldr r0, [sp]\n    ldr r1, _0202B984 ; =0x000004FC\n    ldr r7, _0202B980 ; =0x00001234\n    mov r6, #0\n    add r4, r0, r1\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x98\n    bl memset\n    ldr r0, _0202B984 ; =0x000004FC\n    add r6, r6, #1\n    str r7, [r5, r0]\n    add r4, #0x98\n    add r5, #0x98\n    cmp r6, #5\n    blt _0202B95C\n    ldr r1, _0202B988 ; =0x000007F4\n    ldr r0, [sp]\n    add r0, r0, r1\n    bl sub_0202B908\n    pop {r3, r4, r5, r6, r7, pc}\n    _0202B980: .word 0x00001234\n    _0202B984: .word 0x000004FC\n    _0202B988: .word 0x000007F4"
    );
    #endif
}

void Save_FashionData_sizeof(void) {
    /* Original at 0x0202B98C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0202B990 ; =0x00000834\n    bx lr\n    _0202B990: .word 0x00000834"
    );
    #endif
}

u8 sub_0202B994(void) {
    return 0x74;
}

void sub_0202B998(void) {
    /* Original at 0x0202B998 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x74\n    bl Heap_Alloc\n    mov r1, #0\n    mov r2, #0x74\n    add r4, r0, #0\n    bl memset\n    ldr r0, _0202B9B4 ; =0x00001234\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _0202B9B4: .word 0x00001234"
    );
    #endif
}

void sub_0202B9B8(void) {
    /* Original at 0x0202B9B8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    add r5, r0, #0\n    cmp r6, #0xb\n    blt _0202B9C6\n    bl GF_AssertFail\n    mov r0, #0x74\n    add r4, r6, #0\n    mul r4, r0\n    ldr r0, [r5, r4]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202B9DA\n    bl GF_AssertFail\n    add r0, r5, r4\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void Save_FashionData_GetFashionCase(void) {
    /* Original at 0x0202B9E0 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0202B9E8 ; =0x000007F4\n    add r0, r0, r1\n    bx lr\n    nop\n    _0202B9E8: .word 0x000007F4"
    );
    #endif
}

void sub_0202B9EC(void) {
    /* Original at 0x0202B9EC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xb\n    blt _0202B9FA\n    bl GF_AssertFail\n    mov r0, #0x74\n    mul r0, r4\n    add r0, r5, r0\n    bl sub_0202BC10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202BA08(void) {
    /* Original at 0x0202BA08 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #5\n    blt _0202BA16\n    bl GF_AssertFail\n    ldr r0, _0202BA28 ; =0x000004FC\n    add r1, r5, r0\n    mov r0, #0x98\n    mul r0, r4\n    add r0, r1, r0\n    bl sub_0202BEA4\n    pop {r3, r4, r5, pc}\n    nop\n    _0202BA28: .word 0x000004FC"
    );
    #endif
}

void sub_0202BA2C(void) {
    /* Original at 0x0202BA2C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r5, r2, #0\n    mov r4, #1\n    bl sub_0202BA70\n    add r6, r0, #0\n    add r0, r7, #0\n    bl sub_0202B8FC\n    cmp r0, #0\n    beq _0202BA4E\n    add r0, r6, r5\n    cmp r0, #9\n    bls _0202BA56\n    mov r4, #0\n    b _0202BA56\n    add r0, r6, r5\n    cmp r0, #1\n    bls _0202BA56\n    mov r4, #0\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0202BA5C(void) {
    sub_0202BAB0();
}

void sub_0202BA70(void) {
    /* Original at 0x0202BA70 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    cmp r5, #0x64\n    blo _0202BA7E\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl sub_0202B8FC\n    cmp r0, #0\n    beq _0202BA94\n    lsl r1, r5, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl sub_0202B7C8\n    pop {r3, r4, r5, pc}\n    cmp r5, #0x3d\n    bhs _0202BA9C\n    bl GF_AssertFail\n    sub r5, #0x3d\n    lsl r0, r5, #0x18\n    lsr r1, r0, #0x18\n    add r4, #0x20\n    lsl r1, r1, #0x18\n    add r0, r4, #0\n    lsr r1, r1, #0x18\n    bl sub_0202B848\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202BAB0(void) {
    /* Original at 0x0202BAB0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x12\n    blo _0202BABE\n    bl GF_AssertFail\n    add r5, #0x28\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_0202B8B4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void FashionCase_CountAccessories(void) {
    sub_0202BA70(0);
}

void FashionCase_CountWallpapers(void) {
    /* Original at 0x0202BAE8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r5, #0\n    add r6, r0, #0\n    add r4, r5, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_0202BAB0\n    cmp r0, #0x12\n    beq _0202BAFE\n    add r5, r5, #1\n    add r4, r4, #1\n    cmp r4, #0x12\n    blt _0202BAF0\n    add r0, r5, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FashionCase_GiveFashionItem(void) {
    /* Original at 0x0202BB08 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x64\n    blo _0202BB18\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_0202B8FC\n    cmp r0, #0\n    beq _0202BB44\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_0202B7C8\n    add r0, r0, r6\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r1, #9\n    bls _0202BB38\n    mov r1, #9\n    lsl r2, r4, #0x18\n    add r0, r5, #0\n    lsr r2, r2, #0x18\n    bl sub_0202B784\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    lsl r1, r4, #0x18\n    add r0, #0x20\n    lsr r1, r1, #0x18\n    bl sub_0202B848\n    add r0, r0, r6\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    cmp r6, #1\n    bls _0202BB5C\n    mov r6, #1\n    cmp r4, #0x3d\n    bhs _0202BB64\n    bl GF_AssertFail\n    sub r4, #0x3d\n    lsl r0, r4, #0x18\n    lsr r2, r0, #0x18\n    add r5, #0x20\n    lsl r2, r2, #0x18\n    add r0, r5, #0\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    bl sub_0202B808\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202BB7C(void) {
    /* Original at 0x0202BB7C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0x64\n    blo _0202BB8C\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_0202B8FC\n    cmp r0, #0\n    beq _0202BBBA\n    lsl r1, r4, #0x18\n    add r0, r5, #0\n    lsr r1, r1, #0x18\n    bl sub_0202B7C8\n    cmp r0, r6\n    bls _0202BBAC\n    sub r0, r0, r6\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    b _0202BBAE\n    mov r1, #0\n    lsl r2, r4, #0x18\n    add r0, r5, #0\n    lsr r2, r2, #0x18\n    bl sub_0202B784\n    pop {r4, r5, r6, pc}\n    cmp r4, #0x3d\n    bhs _0202BBC2\n    bl GF_AssertFail\n    sub r4, #0x3d\n    lsl r0, r4, #0x18\n    lsr r2, r0, #0x18\n    add r5, #0x20\n    lsl r2, r2, #0x18\n    add r0, r5, #0\n    mov r1, #0\n    lsr r2, r2, #0x18\n    bl sub_0202B808\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void FashionCase_GiveContestBackground(void) {
    /* Original at 0x0202BBD8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x12\n    blo _0202BBE6\n    bl GF_AssertFail\n    add r0, r5, #0\n    lsl r1, r4, #0x18\n    add r0, #0x28\n    lsr r1, r1, #0x18\n    bl sub_0202B8B4\n    cmp r0, #0x12\n    bne _0202BC0C\n    add r0, r5, #0\n    add r0, #0x28\n    bl sub_0202B8D8\n    lsl r2, r4, #0x18\n    add r5, #0x28\n    add r1, r0, #0\n    add r0, r5, #0\n    lsr r2, r2, #0x18\n    bl sub_0202B870\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202BC10(void) {
    /* Original at 0x0202BC10 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BC22\n    bl GF_AssertFail\n    ldr r1, [r4]\n    ldr r0, _0202BC34 ; =0x00002345\n    cmp r1, r0\n    bne _0202BC2E\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0202BC34: .word 0x00002345"
    );
    #endif
}

void sub_0202BC38(void) {
    /* Original at 0x0202BC38 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BC4A\n    bl GF_AssertFail\n    ldr r0, _0202BC58 ; =0x00002345\n    str r0, [r4]\n    ldr r0, _0202BC5C ; =gGameLanguage\n    add r4, #0x71\n    ldrb r0, [r0]\n    strb r0, [r4]\n    pop {r4, pc}\n    _0202BC58: .word 0x00002345\n    _0202BC5C: .word gGameLanguage"
    );
    #endif
}

void sub_0202BC60(void) {
    /* Original at 0x0202BC60 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BC72\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x74\n    bl memset\n    ldr r0, _0202BC84 ; =0x00001234\n    str r0, [r4]\n    pop {r4, pc}\n    nop\n    _0202BC84: .word 0x00001234"
    );
    #endif
}

void sub_0202BC88(void) {
    /* Original at 0x0202BC88 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BC9E\n    bl GF_AssertFail\n    add r0, r5, #4\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0202B6E8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202BCAC(void) {
    /* Original at 0x0202BCAC */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #4]\n    add r6, r2, #0\n    bl sub_02015FCC\n    add r1, sp, #0xc\n    strh r0, [r1]\n    lsr r0, r0, #0x10\n    strh r0, [r1, #2]\n    ldrh r0, [r1]\n    strh r0, [r1, #4]\n    ldrh r0, [r1, #2]\n    strh r0, [r1, #6]\n    ldr r0, [r4, #4]\n    bl sub_02015FF8\n    add r7, r0, #0\n    cmp r6, #0xa\n    blt _0202BCDC\n    bl GF_AssertFail\n    add r1, sp, #0xc\n    mov r0, #4\n    ldrsh r1, [r1, r0]\n    add r0, #0xfc\n    cmp r1, r0\n    blt _0202BCEC\n    bl GF_AssertFail\n    add r0, sp, #0xc\n    mov r1, #6\n    ldrsh r0, [r0, r1]\n    add r1, #0xfa\n    str r0, [sp, #8]\n    ldr r0, [sp, #8]\n    cmp r0, r1\n    blt _0202BD00\n    bl GF_AssertFail\n    mov r0, #0x7f\n    mvn r0, r0\n    cmp r7, r0\n    bgt _0202BD0C\n    bl GF_AssertFail\n    mov r0, #1\n    lsl r0, r6\n    ldr r1, [r5, #0x3c]\n    str r0, [sp, #4]\n    tst r0, r1\n    beq _0202BD1C\n    bl GF_AssertFail\n    ldr r0, [r5]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BD2A\n    bl GF_AssertFail\n    lsl r0, r7, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    add r1, r5, #0\n    add r3, sp, #0xc\n    mov r2, #4\n    ldrsh r2, [r3, r2]\n    ldr r3, [sp, #8]\n    add r1, #0x48\n    lsl r0, r6, #2\n    add r0, r1, r0\n    ldr r1, [r4]\n    lsl r2, r2, #0x18\n    lsl r1, r1, #0x18\n    lsl r3, r3, #0x18\n    lsr r1, r1, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl sub_0202B770\n    ldr r1, [r5, #0x3c]\n    ldr r0, [sp, #4]\n    orr r0, r1\n    str r0, [r5, #0x3c]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0202BD60(void) {
    /* Original at 0x0202BD60 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BD74\n    bl GF_AssertFail\n    add r5, #0x70\n    strb r4, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202BD7C(void) {
    /* Original at 0x0202BD7C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BD90\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0x40\n    bl MailMsg_Init\n    add r5, #0x40\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r4, #0\n    bl MailMsg_SetFieldI\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202BDA8(void) {
    /* Original at 0x0202BDA8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BDBC\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x74\n    bl memcpy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202BDC8(void) {
    /* Original at 0x0202BDC8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BDDE\n    bl GF_AssertFail\n    add r0, r5, #4\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_0202B718\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0202BDEC(void) {
    /* Original at 0x0202BDEC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xa\n    blt _0202BDFA\n    bl GF_AssertFail\n    ldr r0, [r5]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BE08\n    bl GF_AssertFail\n    mov r0, #1\n    ldr r1, [r5, #0x3c]\n    lsl r0, r4\n    and r0, r1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202BE14(void) {
    /* Original at 0x0202BE14 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BE26\n    bl GF_AssertFail\n    add r0, r4, #4\n    pop {r4, pc}"
    );
    #endif
}

void sub_0202BE2C(void) {
    /* Original at 0x0202BE2C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0xa\n    blt _0202BE3A\n    bl GF_AssertFail\n    mov r0, #1\n    ldr r1, [r5, #0x3c]\n    lsl r0, r4\n    tst r0, r1\n    bne _0202BE48\n    bl GF_AssertFail\n    ldr r0, [r5]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BE56\n    bl GF_AssertFail\n    add r5, #0x48\n    lsl r0, r4, #2\n    add r0, r5, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202BE60(void) {
    /* Original at 0x0202BE60 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BE74\n    bl GF_AssertFail\n    add r0, r5, #4\n    add r1, r4, #0\n    bl sub_0202BECC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0202BE80(void) {
    /* Original at 0x0202BE80 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BE92\n    bl GF_AssertFail\n    add r4, #0x70\n    ldrb r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void sub_0202BE98(void) {
    MailMsg_GetFieldI();
}

void sub_0202BEA4(void) {
    /* Original at 0x0202BEA4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl sub_0202B614\n    cmp r0, #0\n    bne _0202BEB6\n    bl GF_AssertFail\n    ldr r1, [r4]\n    ldr r0, _0202BEC8 ; =0x00002345\n    cmp r1, r0\n    bne _0202BEC2\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0202BEC8: .word 0x00002345"
    );
    #endif
}

void sub_0202BECC(void) {
    /* Original at 0x0202BECC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    ldr r3, _0202BED8 ; =CopyU16ArrayToString\n    add r2, #0x20\n    add r0, r1, #0\n    add r1, r2, #0\n    bx r3\n    _0202BED8: .word CopyU16ArrayToString"
    );
    #endif
}

void sub_0202BEDC(void) {
    /* Original at 0x0202BEDC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x30\n    ldrsb r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void sub_0202BEE4(void) {
    /* Original at 0x0202BEE4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x31\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202BEEC(void) {
    /* Original at 0x0202BEEC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x32\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202BEF4(void) {
    sub_0202B730();
}

void sub_0202BEFC(void) {
    /* Original at 0x0202BEFC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202BF00(void) {
    /* Original at 0x0202BF00 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #1]\n    bx lr"
    );
    #endif
}

void sub_0202BF04(void) {
    /* Original at 0x0202BF04 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #2]\n    bx lr"
    );
    #endif
}

void sub_0202BF08(void) {
    /* Original at 0x0202BF08 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #3\n    ldrsb r0, [r0, r1]\n    bx lr"
    );
    #endif
}

void sub_0202BF10(void) {
    /* Original at 0x0202BF10 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0x1fc\n    sub sp, #0xc\n    add r7, r0, #0\n    mov r0, #1\n    add r4, r1, #0\n    str r0, [sp]\n    add r0, r4, #0\n    bl sub_0202BC10\n    cmp r0, #1\n    bne _0202BF6E\n    ldr r1, _0202BF7C ; =0xEDB88320\n    add r0, sp, #4\n    bl MATHi_CRC32InitTableRev\n    add r0, sp, #4\n    add r1, r4, #0\n    mov r2, #0x74\n    bl MATH_CalcCRC32\n    add r6, r0, #0\n    mov r5, #0\n    add r0, r7, #0\n    add r1, r5, #0\n    bl sub_0202B9B8\n    add r4, r0, #0\n    ldr r1, _0202BF7C ; =0xEDB88320\n    add r0, sp, #4\n    bl MATHi_CRC32InitTableRev\n    add r0, sp, #4\n    add r1, r4, #0\n    mov r2, #0x74\n    bl MATH_CalcCRC32\n    cmp r0, r6\n    bne _0202BF66\n    mov r0, #0\n    str r0, [sp]\n    b _0202BF72\n    add r5, r5, #1\n    cmp r5, #0xb\n    blt _0202BF40\n    b _0202BF72\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [sp]\n    add sp, #0x1fc\n    add sp, #0x1fc\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0202BF7C: .word 0xEDB88320"
    );
    #endif
}

void sub_0202BF80(void) {
    /* Original at 0x0202BF80 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp]\n    mov r7, #0\n    ldr r0, [sp]\n    str r1, [sp, #4]\n    add r5, r2, #0\n    add r6, r7, #0\n    str r3, [sp, #8]\n    cmp r0, #0\n    ble _0202BFBA\n    add r4, r3, #0\n    ldr r0, [sp, #4]\n    cmp r6, r0\n    beq _0202BFB0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _0202BFB0\n    add r0, r5, #0\n    bl sub_0202BF10\n    cmp r0, #1\n    bne _0202BFB0\n    add r7, r7, #1\n    ldr r0, [sp]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _0202BF98\n    mov r4, #0xa\n    add r1, r4, r7\n    cmp r1, #0xb\n    bge _0202BFDA\n    add r0, r5, #0\n    bl sub_0202B9B8\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0202B9B8\n    add r1, r0, #0\n    add r0, r6, #0\n    bl sub_0202BDA8\n    sub r4, r4, #1\n    cmp r4, #1\n    bge _0202BFBC\n    ldr r0, [sp]\n    mov r6, #1\n    mov r4, #0\n    cmp r0, #0\n    ble _0202C022\n    ldr r0, [sp, #4]\n    cmp r4, r0\n    beq _0202C014\n    ldr r0, [sp, #8]\n    ldr r7, [r0]\n    cmp r7, #0\n    beq _0202C014\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_0202BF10\n    cmp r0, #1\n    bne _0202C014\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0202B9B8\n    add r1, r7, #0\n    add r6, r6, #1\n    bl sub_0202BDA8\n    ldr r0, [sp, #8]\n    add r4, r4, #1\n    add r0, r0, #4\n    str r0, [sp, #8]\n    ldr r0, [sp]\n    cmp r4, r0\n    blt _0202BFEA\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void Save_FashionData_Get(void) {
    SaveArray_Get();
}
