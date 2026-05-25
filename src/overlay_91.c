/* Decompiled from asm/overlay_91.s */
#include "global.h"

void ov91_0225C540(void) {
    /* Original at 0x0225C540 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl OverlayManager_GetArgs\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x6a\n    lsl r2, r0, #0x11\n    bl Heap_Create\n    add r0, r4, #0\n    mov r1, #0x88\n    mov r2, #0x6a\n    bl OverlayManager_CreateAndGetData\n    mov r1, #0\n    mov r2, #0x88\n    add r4, r0, #0\n    bl memset\n    str r5, [sp]\n    add r1, r5, #0\n    add r1, #0x39\n    ldr r2, [r5, #0x34]\n    add r5, #0x38\n    add r0, r4, #0\n    ldrb r1, [r1]\n    ldrb r3, [r5]\n    add r0, #8\n    bl ov90_02258800\n    add r0, r4, #0\n    mov r1, #0x6a\n    bl ov91_0225CBE4\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_0225C58C(void) {
    /* Original at 0x0225C58C */
    /* Requires manual decompilation - 473 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x28\n    add r6, r0, #0\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    add r0, r6, #0\n    bl OverlayManager_GetArgs\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #8\n    bl ov90_02258B54\n    cmp r0, #1\n    bne _0225C60A\n    ldr r0, [r4, #0x78]\n    cmp r0, #0\n    beq _0225C5BE\n    cmp r0, #1\n    beq _0225C5D8\n    cmp r0, #2\n    beq _0225C5EC\n    b _0225C5FA\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0225C5CA\n    bl sub_0200FB70\n    mov r0, #0\n    bl sub_0200FC20\n    ldr r0, [r4, #0x78]\n    add r0, r0, #1\n    str r0, [r4, #0x78]\n    b _0225C604\n    add r0, r4, #0\n    add r0, #8\n    bl ov90_02258B98\n    cmp r0, #1\n    bne _0225C604\n    ldr r0, [r4, #0x78]\n    add r0, r0, #1\n    str r0, [r4, #0x78]\n    b _0225C604\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov91_0225CC4C\n    add sp, #0x28\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    add sp, #0x28\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5]\n    cmp r0, #0xf\n    bhi _0225C67E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225C61C: ; jump table\n    add r0, r4, #0\n    add r0, #8\n    mov r1, #0x6a\n    bl ov90_02258914\n    str r0, [r4]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r4]\n    bl ov90_022589BC\n    cmp r0, #1\n    bne _0225C67E\n    ldr r0, [r4]\n    bl ov90_022589CC\n    str r0, [r4, #0x70]\n    ldr r0, [r4]\n    bl ov90_02258938\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, _0225C940 ; =gSystem\n    ldr r1, [r0, #0x44]\n    mov r0, #1\n    tst r0, r1\n    beq _0225C680\n    b _0225C9E6\n    ldr r0, _0225C944 ; =ov91_0225CB58\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    mov r2, #0\n    str r2, [r4, #0x38]\n    str r2, [r4, #0x3c]\n    add r0, r4, #0\n    add r1, r4, #0\n    str r2, [r4, #0x40]\n    add r0, #0x84\n    strb r2, [r0]\n    add r1, #0x84\n    strb r2, [r1, #1]\n    strb r2, [r1, #2]\n    strb r2, [r1, #3]\n    mov r0, #0x20\n    mov r1, #0x6a\n    bl GF_CreateVramTransferManager\n    add r0, r4, #0\n    bl ov91_02261B2C\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x80\n    str r1, [r0]\n    bl sub_020347A0\n    str r0, [r4, #0x74]\n    cmp r0, #1\n    bhi _0225C6C8\n    bl GF_AssertFail\n    bl sub_0203769C\n    add r1, r4, #0\n    add r1, #0x44\n    strh r0, [r1]\n    add r1, r4, #0\n    add r1, #0x44\n    add r0, r4, #0\n    ldrh r1, [r1]\n    add r0, #8\n    bl ov90_0225886C\n    add r1, r4, #0\n    add r1, #0x46\n    strh r0, [r1]\n    add r0, r4, #0\n    add r0, #0x44\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _0225C706\n    mov r1, #0x4b\n    add r3, r4, #0\n    ldr r2, [r4, #0x74]\n    mov r0, #0x6a\n    lsl r1, r1, #4\n    add r3, #0x48\n    bl ov91_0225CCC4\n    str r0, [r4, #0x30]\n    mov r0, #1\n    str r0, [r4, #0x7c]\n    add r0, r4, #0\n    add r0, #0x48\n    str r0, [sp]\n    add r3, r4, #0\n    add r3, #0x46\n    mov r1, #0x4b\n    ldrh r3, [r3]\n    ldr r2, [r4, #0x74]\n    mov r0, #0x6a\n    lsl r1, r1, #4\n    bl ov91_0225CDF4\n    str r0, [r4, #0x34]\n    bl sub_0203A880\n    add r6, #0x38\n    ldrb r0, [r6]\n    cmp r0, #0\n    beq _0225C732\n    mov r0, #0x6a\n    bl ov00_021E69A8\n    ldr r0, [r4, #0x70]\n    cmp r0, #0\n    beq _0225C742\n    cmp r0, #1\n    beq _0225C74C\n    cmp r0, #2\n    beq _0225C758\n    b _0225C764\n    mov r1, #0\n    add r0, sp, #0xc\n    strb r1, [r0, #8]\n    strb r1, [r0, #9]\n    b _0225C768\n    mov r1, #0\n    add r0, sp, #0xc\n    strb r1, [r0, #8]\n    mov r1, #1\n    strb r1, [r0, #9]\n    b _0225C768\n    mov r1, #1\n    add r0, sp, #0xc\n    strb r1, [r0, #8]\n    mov r1, #0\n    strb r1, [r0, #9]\n    b _0225C768\n    bl GF_AssertFail\n    ldr r0, [r4, #0x34]\n    add r1, sp, #0x14\n    bl ov91_0225D3C4\n    mov r0, #1\n    bl sub_02037AC0\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    mov r0, #1\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0225C7CE\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x6a\n    mov r1, #0x1b\n    str r0, [sp, #8]\n    ldr r3, _0225C948 ; =0x0000FFFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov91_0225CEB4\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225C7CE\n    add r4, #0x44\n    ldrh r0, [r4]\n    cmp r0, #0\n    bne _0225C7D8\n    mov r1, #0\n    mov r0, #0x16\n    add r2, r1, #0\n    bl sub_02037030\n    cmp r0, #0\n    bne _0225C7D0\n    b _0225C9E6\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov91_0225CEB4\n    ldr r0, [r4, #0x38]\n    cmp r0, #0\n    beq _0225C8DC\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov91_0225CEB4\n    cmp r0, #0\n    bne _0225C8DC\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r4, #0x3c]\n    cmp r0, #0\n    beq _0225C82E\n    ldr r0, [r4, #0x34]\n    bl ov91_0225D37C\n    str r0, [sp, #0x10]\n    mov r0, #0x19\n    add r1, sp, #0x10\n    mov r2, #4\n    bl sub_02037030\n    cmp r0, #0\n    beq _0225C8DC\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    add r0, r4, #0\n    add r0, #0x44\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _0225C878\n    ldr r0, [r4, #0x30]\n    bl ov91_0225CCF4\n    add r5, r0, #0\n    ldr r0, [r4, #0x30]\n    bl ov91_0225CD5C\n    cmp r0, #0\n    beq _0225C868\n    ldr r0, [r4, #0x30]\n    bl ov91_0225CD6C\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0x1b\n    add r2, sp, #0xc\n    mov r3, #4\n    bl ov91_0225CCA8\n    cmp r0, #1\n    bne _0225C868\n    ldr r0, [r4, #0x30]\n    bl ov91_0225CD64\n    cmp r5, #0\n    bne _0225C878\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #0x17\n    add r3, r2, #0\n    bl ov91_0225CCA8\n    ldr r0, [r4, #0x34]\n    bl ov91_0225D1DC\n    add r0, r4, #0\n    bl ov91_0225CB64\n    add r0, r4, #0\n    bl ov91_0225CB98\n    b _0225C9E6\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov91_0225D078\n    add r0, r4, #0\n    add r0, #0x44\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _0225C8C6\n    ldr r0, [r4, #0x30]\n    bl ov91_0225CDAC\n    cmp r0, #1\n    bne _0225C8DC\n    ldr r0, [r4, #0x30]\n    add r1, sp, #0x18\n    bl ov91_0225CDC4\n    mov r0, #0x1a\n    add r1, sp, #0x18\n    mov r2, #0x10\n    bl sub_02037030\n    cmp r0, #0\n    beq _0225C8DC\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl ov91_0225D078\n    ldr r0, [r4, #0x40]\n    cmp r0, #1\n    beq _0225C8DE\n    b _0225C9E6\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov91_0225D078\n    cmp r0, #0\n    bne _0225C9E6\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x6a\n    mov r1, #0x1a\n    str r0, [sp, #8]\n    ldr r3, _0225C948 ; =0x0000FFFF\n    mov r0, #0\n    add r2, r1, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov91_0225D078\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r4, #0x34]\n    mov r1, #1\n    bl ov91_0225D078\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0225C9E6\n    mov r0, #3\n    bl sub_02037AC0\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    _0225C940: .word gSystem\n    _0225C944: .word ov91_0225CB58\n    _0225C948: .word 0x0000FFFF\n    mov r0, #3\n    bl sub_02037B38\n    cmp r0, #0\n    bne _0225C95C\n    add sp, #0x28\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r6, #0x38\n    ldrb r0, [r6]\n    cmp r0, #0\n    beq _0225C968\n    bl ov00_021E6A4C\n    add r0, r4, #0\n    add r0, #0x44\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _0225C97C\n    ldr r0, [r4, #0x30]\n    bl ov91_0225CCEC\n    mov r0, #0\n    str r0, [r4, #0x30]\n    ldr r0, [r4, #0x34]\n    bl ov91_0225CE80\n    mov r0, #0\n    str r0, [r4, #0x34]\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GF_DestroyVramTransferManager\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldrb r1, [r4, #0x10]\n    add r0, r4, #0\n    add r0, #0x18\n    bl ov90_02258AA8\n    add r0, r4, #0\n    add r1, r4, #0\n    add r0, #8\n    add r1, #0x18\n    mov r2, #0x6a\n    bl ov90_022589E0\n    str r0, [r4, #4]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0225C9E6\n    ldr r0, [r4, #4]\n    bl ov90_02258AA0\n    cmp r0, #1\n    bne _0225C9E6\n    ldr r0, [r4, #4]\n    bl ov90_02258AA4\n    add r6, r0, #0\n    ldr r0, [r4, #4]\n    bl ov90_02258A04\n    mov r0, #0\n    str r0, [r4, #4]\n    cmp r6, #0\n    bne _0225C9E4\n    add sp, #0x28\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    str r0, [r5]\n    mov r0, #0\n    add sp, #0x28\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_0225C9EC(void) {
    /* Original at 0x0225C9EC */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl OverlayManager_GetData\n    add r6, r0, #0\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0225CA0A\n    cmp r0, #1\n    beq _0225CA44\n    b _0225CA60\n    add r0, r6, #0\n    add r0, #8\n    bl ov90_02258B54\n    add r7, r0, #0\n    add r0, r6, #0\n    bl ov91_0225CC38\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #0x6a\n    bl Heap_Destroy\n    mov r0, #0\n    mov r1, #1\n    bl sub_020398D4\n    cmp r7, #1\n    bne _0225CA36\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #4\n    bl sub_02037AC0\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225CA60\n    mov r0, #4\n    bl sub_02037B38\n    cmp r0, #0\n    bne _0225CA5C\n    bl sub_02037454\n    add r4, r0, #0\n    bl sub_020347A0\n    cmp r4, r0\n    bge _0225CA60\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225CA64(void) {
    ((u32*)r0)[0x38] = 1;
}

void ov91_0225CA6C(void) {
    ((u32*)r0)[0x3c] = 1;
}

void ov91_0225CA74(void) {
    ov90_0225886C(r2);
    ov91_0225CD74(*((u32*)(r5 + 0x30)), r4, r0);
}

void ov91_0225CA90(void) {
    ov91_0225D2EC();
}

void ov91_0225CA9C(void) {
    /* Original at 0x0225CA9C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, #8\n    add r1, r2, #0\n    bl ov90_0225886C\n    add r2, r0, #0\n    ldr r0, [r5, #0x30]\n    cmp r0, #0\n    beq _0225CAB8\n    add r1, r4, #0\n    bl ov91_0225CD84\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_0225CABC(void) {
    /* Original at 0x0225CABC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    bl ov91_0225D368\n    mov r0, #1\n    str r0, [r5, #0x40]\n    mov r1, #0\n    ldr r0, [r4]\n    add r1, r1, #1\n    str r0, [r5, #0x18]\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r1, #4\n    blt _0225CACE\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_0225CAE0(void) {
    ov91_0225D380();
}

void ov91_0225CAEC(void) {
    /* Original at 0x0225CAEC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, #8\n    add r1, r2, #0\n    bl ov90_0225886C\n    add r4, r0, #0\n    ldr r0, [r5, #0x34]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov91_0225D3B4\n    add r1, r5, #0\n    add r1, #0x84\n    ldrb r0, [r1, r4]\n    add r0, r0, #1\n    strb r0, [r1, r4]\n    add r0, r5, #0\n    add r0, #0x44\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _0225CB4E\n    ldr r3, [r5, #0x74]\n    mov r1, #1\n    mov r0, #0\n    cmp r3, #0\n    bls _0225CB3A\n    ldr r2, [r5, #0x7c]\n    add r6, r0, #0\n    add r4, r5, r0\n    add r4, #0x84\n    ldrb r4, [r4]\n    cmp r2, r4\n    bls _0225CB34\n    add r1, r6, #0\n    add r0, r0, #1\n    cmp r0, r3\n    blo _0225CB28\n    cmp r1, #1\n    bne _0225CB4E\n    ldr r0, [r5, #0x7c]\n    mov r1, #0\n    add r0, r0, #1\n    str r0, [r5, #0x7c]\n    mov r0, #0x1d\n    add r2, r1, #0\n    bl sub_02037030\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_0225CB50(void) {
    /* Original at 0x0225CB50 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    add r0, #0x80\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov91_0225CB58(void) {
    ov91_0225D2D0();
}

void ov91_0225CB64(void) {
    /* Original at 0x0225CB64 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r1, sp, #0\n    bl ov91_0225D32C\n    cmp r0, #1\n    bne _0225CB94\n    mov r6, #0x18\n    add r4, sp, #0\n    mov r7, #0x14\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov91_0225CCA8\n    ldr r0, [r5, #0x34]\n    add r1, r4, #0\n    bl ov91_0225D32C\n    cmp r0, #1\n    beq _0225CB7C\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225CB98(void) {
    /* Original at 0x0225CB98 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4, #0x34]\n    bl ov91_0225D2E8\n    cmp r0, #0\n    beq _0225CBDE\n    mov r1, #0x1e\n    bl _s32_div_f\n    cmp r1, #0\n    bne _0225CBDE\n    add r0, r4, #0\n    add r0, #0x80\n    ldr r0, [r0]\n    cmp r0, #1\n    bne _0225CBDE\n    ldr r0, [r4, #0x34]\n    bl ov91_0225D37C\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x1c\n    add r2, sp, #0\n    mov r3, #4\n    bl ov91_0225CCA8\n    cmp r0, #0\n    bne _0225CBD8\n    bl GF_AssertFail\n    mov r0, #0\n    add r4, #0x80\n    str r0, [r4]\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov91_0225CBE4(void) {
    /* Original at 0x0225CBE4 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r3, r1, #0\n    mov r1, #0\n    add r7, r0, #0\n    str r1, [sp]\n    add r0, sp, #8\n    str r0, [sp, #4]\n    mov r0, #0xd4\n    add r2, r1, #0\n    bl GfGfxLoader_LoadFromNarc_GetSizeOut\n    str r0, [r7, #0x4c]\n    ldr r0, [sp, #8]\n    mov r1, #0x18\n    bl _u32_div_f\n    str r0, [r7, #0x48]\n    ldrb r0, [r7, #0x10]\n    mov r4, #0\n    cmp r0, #0\n    ble _0225CC34\n    add r6, r7, #0\n    add r5, r7, #0\n    add r6, #8\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov90_022588CC\n    str r0, [r5, #0x50]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov90_022588A4\n    str r0, [r5, #0x60]\n    ldrb r0, [r7, #0x10]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blt _0225CC16\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225CC38(void) {
    Heap_Free(0);
}

void ov91_0225CC4C(void) {
    /* Original at 0x0225CC4C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0\n    add r4, r1, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _0225CC6C\n    bl ov90_02258938\n    mov r0, #0\n    str r0, [r5]\n    ldr r0, [r5, #0x34]\n    cmp r0, #0\n    beq _0225CC8C\n    add r0, r5, #0\n    add r0, #0x44\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _0225CC82\n    ldr r0, [r5, #0x30]\n    bl ov91_0225CCEC\n    ldr r0, [r5, #0x34]\n    bl ov91_0225CE80\n    bl GF_DestroyVramTransferManager\n    add r4, #0x38\n    ldrb r0, [r4]\n    cmp r0, #0\n    beq _0225CC98\n    bl ov00_021E6A4C\n    ldr r0, [r5, #4]\n    cmp r0, #0\n    beq _0225CCA6\n    bl ov90_02258A04\n    mov r0, #0\n    str r0, [r5, #4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_0225CCA8(void) {
    sub_02037030(0);
}

void ov91_0225CCC4(void) {
    Heap_Alloc(0x38);
    memset(0, 0x38);
    *((u32*)(r4 + 8)) = r6;
    *((u32*)(r4 + 0x30)) = r7;
    *((u32*)(r4 + 4)) = 1;
}

void ov91_0225CCEC(void) {
    Heap_Free();
}

void ov91_0225CCF4(void) {
    /* Original at 0x0225CCF4 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldr r2, [r0]\n    cmp r2, #0\n    ble _0225CD06\n    ldr r1, [r0, #4]\n    cmp r1, #1\n    bne _0225CD06\n    sub r1, r2, #1\n    str r1, [r0]\n    ldr r1, [r0]\n    cmp r1, #0\n    bgt _0225CD12\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    add r1, r0, #0\n    add r1, #0x36\n    ldrb r4, [r1]\n    ldr r5, [r0, #0x30]\n    ldr r2, [r5]\n    add r1, r4, #0\n    add r3, r4, #0\n    cmp r4, r2\n    bhs _0225CD3E\n    ldr r6, [r5, #4]\n    mov r5, #0x18\n    mul r5, r4\n    ldrh r7, [r0, #0x34]\n    add r6, r6, r5\n    ldr r5, [r6]\n    cmp r5, r7\n    bge _0225CD3E\n    add r1, r1, #1\n    add r6, #0x18\n    add r3, r1, #0\n    cmp r1, r2\n    blo _0225CD2E\n    cmp r3, r2\n    bne _0225CD44\n    sub r1, r1, #1\n    cmp r1, r4\n    beq _0225CD54\n    add r2, r0, #0\n    add r2, #0x36\n    strb r1, [r2]\n    mov r1, #1\n    add r0, #0x37\n    strb r1, [r0]\n    mov r0, #1\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov91_0225CD5C(void) {
    /* Original at 0x0225CD5C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x37\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void ov91_0225CD64(void) {
    /* Original at 0x0225CD64 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    add r0, #0x37\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void ov91_0225CD6C(void) {
    /* Original at 0x0225CD6C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x36\n    ldrb r0, [r0]\n    bx lr"
    );
    #endif
}

void ov91_0225CD74(void) {
    /* Original at 0x0225CD74 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r1, #2]\n    cmp r1, #0\n    beq _0225CD80\n    ldrh r1, [r0, #0x34]\n    add r1, r1, #1\n    strh r1, [r0, #0x34]\n    bx lr"
    );
    #endif
}

void ov91_0225CD84(void) {
    /* Original at 0x0225CD84 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _0225CDA8 ; =0x0001869F\n    cmp r1, r3\n    bls _0225CD8E\n    add r1, r3, #0\n    mov r3, #1\n    lsl r3, r2\n    ldr r4, [r0, #0x1c]\n    tst r4, r3\n    bne _0225CDA4\n    lsl r2, r2, #2\n    add r2, r0, r2\n    str r1, [r2, #0xc]\n    ldr r1, [r0, #0x1c]\n    orr r1, r3\n    str r1, [r0, #0x1c]\n    pop {r3, r4}\n    bx lr\n    _0225CDA8: .word 0x0001869F"
    );
    #endif
}

void ov91_0225CDAC(void) {
    ov91_0225CDD4(0, 1);
}

void ov91_0225CDC4(void) {
    /* Original at 0x0225CDC4 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r3, r1, #0\n    add r2, #0xc\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    bx lr"
    );
    #endif
}

void ov91_0225CDD4(void) {
    /* Original at 0x0225CDD4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r3, #0\n    ldr r4, [r0, #0x1c]\n    add r2, r3, #0\n    mov r0, #1\n    add r1, r0, #0\n    lsl r1, r2\n    tst r1, r4\n    beq _0225CDE8\n    add r3, r3, #1\n    add r2, r2, #1\n    cmp r2, #4\n    blt _0225CDDE\n    add r0, r3, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov91_0225CDF4(void) {
    /* Original at 0x0225CDF4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    ldr r1, _0225CE64 ; =0x000087E8\n    add r5, r0, #0\n    add r7, r2, #0\n    str r3, [sp]\n    bl Heap_Alloc\n    ldr r2, _0225CE64 ; =0x000087E8\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #1\n    str r0, [r4, #4]\n    mov r0, #0\n    str r0, [r4, #8]\n    str r6, [r4, #0xc]\n    ldr r0, [sp]\n    str r7, [r4, #0x10]\n    str r0, [r4, #0x14]\n    ldr r1, [sp, #0x18]\n    ldr r0, _0225CE68 ; =0x0000877C\n    str r1, [r4, r0]\n    ldr r1, _0225CE6C ; =0x000019CC\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov91_0225DC3C\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov91_0225F508\n    ldr r0, _0225CE70 ; =0x0000878C\n    ldr r1, _0225CE74 ; =0x00001AB4\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r5, #0\n    bl ov91_0225F0C0\n    ldr r0, _0225CE78 ; =0x000087CC\n    add r0, r4, r0\n    bl ov91_0225F388\n    ldr r0, _0225CE7C ; =ov91_022627C0\n    mov r1, #8\n    mov r2, #4\n    bl sub_020210D8\n    cmp r0, #1\n    beq _0225CE5E\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225CE64: .word 0x000087E8\n    _0225CE68: .word 0x0000877C\n    _0225CE6C: .word 0x000019CC\n    _0225CE70: .word 0x0000878C\n    _0225CE74: .word 0x00001AB4\n    _0225CE78: .word 0x000087CC\n    _0225CE7C: .word ov91_022627C0"
    );
    #endif
}

void ov91_0225CE80(void) {
    /* Original at 0x0225CE80 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02021238\n    cmp r0, #1\n    beq _0225CE90\n    bl GF_AssertFail\n    ldr r0, _0225CEAC ; =0x0000878C\n    ldr r1, _0225CEB0 ; =0x00001AB4\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_0225F1E8\n    add r0, r4, #0\n    bl ov91_0225F66C\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    nop\n    _0225CEAC: .word 0x0000878C\n    _0225CEB0: .word 0x00001AB4"
    );
    #endif
}

void ov91_0225CEB4(void) {
    /* Original at 0x0225CEB4 */
    /* Requires manual decompilation - 189 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldr r0, _0225D054 ; =0x00001F38\n    add r6, r1, #0\n    ldr r0, [r4, r0]\n    mov r5, #1\n    cmp r0, #4\n    blo _0225CEE6\n    ldr r0, _0225D058 ; =0x00008785\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _0225CED2\n    add r1, r5, #0\n    sub r1, #0x79\n    b _0225CED4\n    mov r1, #0x78\n    ldr r2, _0225D05C ; =0x000019CC\n    add r0, r4, r2\n    add r2, r2, #2\n    ldrh r2, [r4, r2]\n    add r1, r2, r1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    bl ov91_0225DD50\n    ldr r1, _0225D060 ; =0x00001AB4\n    add r0, r4, r1\n    sub r1, #0xe8\n    add r1, r4, r1\n    bl ov91_0225DBC0\n    ldr r0, _0225D064 ; =0x00001F74\n    ldr r1, _0225D05C ; =0x000019CC\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_022601F4\n    ldr r0, _0225D064 ; =0x00001F74\n    ldr r1, _0225D05C ; =0x000019CC\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_02260218\n    ldr r0, _0225D054 ; =0x00001F38\n    ldr r1, [r4, r0]\n    cmp r1, #8\n    bls _0225CF14\n    b _0225D036\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0225CF20: ; jump table\n    ldr r0, _0225D068 ; =0x0000878C\n    add r0, r4, r0\n    bl ov91_0225F23C\n    ldr r0, _0225D054 ; =0x00001F38\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    b _0225D036\n    ldr r0, _0225D068 ; =0x0000878C\n    add r1, r4, #0\n    add r0, r4, r0\n    bl ov91_0225F25C\n    cmp r0, #1\n    bne _0225D036\n    ldr r0, _0225D054 ; =0x00001F38\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    mov r0, #2\n    bl sub_02037AC0\n    b _0225D036\n    mov r0, #2\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0225D036\n    ldr r0, _0225D054 ; =0x00001F38\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    mov r1, #0x41\n    add r0, #8\n    str r1, [r4, r0]\n    b _0225D036\n    add r1, r0, #0\n    add r1, #8\n    ldr r1, [r4, r1]\n    sub r2, r1, #1\n    add r1, r0, #0\n    add r1, #8\n    str r2, [r4, r1]\n    add r0, #8\n    ldr r0, [r4, r0]\n    cmp r0, #0x32\n    bne _0225CF98\n    ldr r0, _0225D06C ; =0x00000619\n    bl PlaySE\n    mov r0, #0x7d\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #0x14\n    bne _0225CFA8\n    ldr r0, _0225D070 ; =0x0000063D\n    bl PlaySE\n    ldr r0, _0225D064 ; =0x00001F74\n    mov r1, #1\n    add r0, r4, r0\n    lsl r1, r1, #0xc\n    bl ov91_0226031C\n    mov r0, #0x7d\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    bne _0225D036\n    ldr r1, _0225D060 ; =0x00001AB4\n    sub r0, #8\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_0225DB7C\n    ldr r0, _0225D054 ; =0x00001F38\n    mov r1, #4\n    str r1, [r4, r0]\n    b _0225D036\n    cmp r6, #1\n    bne _0225D036\n    mov r1, #5\n    str r1, [r4, r0]\n    b _0225D036\n    ldr r1, _0225D060 ; =0x00001AB4\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_0225DB18\n    ldr r0, _0225D074 ; =0x000005DD\n    bl PlaySE\n    ldr r0, _0225D054 ; =0x00001F38\n    mov r1, #6\n    str r1, [r4, r0]\n    b _0225D036\n    ldr r1, _0225D060 ; =0x00001AB4\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_0225DB44\n    cmp r0, #0\n    bne _0225D036\n    ldr r0, _0225D054 ; =0x00001F38\n    mov r1, #7\n    str r1, [r4, r0]\n    b _0225D036\n    ldr r1, _0225D060 ; =0x00001AB4\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_0225DBAC\n    cmp r0, #0\n    bne _0225D036\n    ldr r0, _0225D054 ; =0x00001F38\n    mov r1, #8\n    str r1, [r4, r0]\n    b _0225D036\n    ldr r1, _0225D060 ; =0x00001AB4\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_0225DB5C\n    ldr r0, _0225D05C ; =0x000019CC\n    mov r1, #1\n    add r0, r4, r0\n    bl ov91_0225DD20\n    mov r5, #0\n    ldr r0, _0225D064 ; =0x00001F74\n    ldr r1, _0225D05C ; =0x000019CC\n    ldr r2, [r4]\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_022601AC\n    ldr r1, _0225D060 ; =0x00001AB4\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov91_0225F7A8\n    add r0, r5, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _0225D054: .word 0x00001F38\n    _0225D058: .word 0x00008785\n    _0225D05C: .word 0x000019CC\n    _0225D060: .word 0x00001AB4\n    _0225D064: .word 0x00001F74\n    _0225D068: .word 0x0000878C\n    _0225D06C: .word 0x00000619\n    _0225D070: .word 0x0000063D\n    _0225D074: .word 0x000005DD"
    );
    #endif
}

void ov91_0225D078(void) {
    /* Original at 0x0225D078 */
    /* Requires manual decompilation - 147 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    ldr r1, _0225D1B8 ; =0x00001F54\n    add r4, r0, #0\n    ldr r2, [r4, r1]\n    mov r6, #1\n    cmp r2, #3\n    bhi _0225D158\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0225D094: ; jump table\n    bl ov91_0225E6B0\n    add r0, r4, #0\n    bl ov91_0225EE9C\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0x18\n    add r1, r0, #0\n    sub r1, #0x26\n    mov r2, #0\n    mov r3, #0x3f\n    bl StartBrightnessTransition\n    ldr r0, _0225D1BC ; =0x00001AB4\n    add r0, r4, r0\n    bl ov91_0225DBE4\n    ldr r0, _0225D1C0 ; =0x000021A4\n    ldr r0, [r4, r0]\n    bl ov90_02258CB0\n    ldr r0, _0225D1C4 ; =0x000087E4\n    add r0, r4, r0\n    bl ov91_02261B10\n    ldr r0, _0225D1C8 ; =0x0000862C\n    add r0, r4, r0\n    bl ov91_02261890\n    ldr r0, _0225D1B8 ; =0x00001F54\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    b _0225D158\n    ldr r0, _0225D1BC ; =0x00001AB4\n    add r5, r6, #0\n    add r0, r4, r0\n    bl ov91_0225DBF4\n    cmp r0, #0\n    bne _0225D0F2\n    mov r5, #0\n    add r0, r4, #0\n    bl ov91_0225E40C\n    add r0, r4, #0\n    bl ov91_0225E648\n    add r0, r4, #0\n    bl ov91_0225E6D0\n    cmp r0, #1\n    bne _0225D10A\n    mov r5, #0\n    ldr r0, _0225D1BC ; =0x00001AB4\n    add r0, r4, r0\n    bl ov91_0225DC24\n    cmp r0, #0\n    bne _0225D118\n    mov r5, #0\n    mov r0, #2\n    bl IsBrightnessTransitionActive\n    cmp r0, #0\n    bne _0225D124\n    mov r5, #0\n    cmp r5, #1\n    bne _0225D158\n    cmp r7, #1\n    bne _0225D158\n    ldr r0, _0225D1CC ; =0x00001F58\n    mov r1, #0\n    str r1, [r4, r0]\n    sub r1, r0, #4\n    ldr r1, [r4, r1]\n    sub r0, r0, #4\n    add r1, r1, #1\n    str r1, [r4, r0]\n    b _0225D158\n    add r0, r1, #4\n    ldr r0, [r4, r0]\n    add r2, r0, #1\n    add r0, r1, #4\n    str r2, [r4, r0]\n    ldr r0, [r4, r0]\n    cmp r0, #0x40\n    blo _0225D158\n    ldr r0, [r4, r1]\n    add r0, r0, #1\n    str r0, [r4, r1]\n    b _0225D158\n    mov r6, #0\n    ldr r0, _0225D1D0 ; =0x00008785\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _0225D166\n    mov r2, #0x77\n    mvn r2, r2\n    b _0225D168\n    mov r2, #0x78\n    ldr r1, _0225D1D4 ; =0x000019CC\n    add r0, r4, r1\n    add r1, r1, #2\n    ldrh r1, [r4, r1]\n    add r1, r1, r2\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    bl ov91_0225DD50\n    ldr r0, _0225D1D8 ; =0x00001F74\n    ldr r1, _0225D1D4 ; =0x000019CC\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_022601C8\n    ldr r0, _0225D1D8 ; =0x00001F74\n    ldr r1, _0225D1D4 ; =0x000019CC\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_022601F4\n    ldr r0, _0225D1D8 ; =0x00001F74\n    ldr r1, _0225D1D4 ; =0x000019CC\n    ldr r2, [r4]\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_022601AC\n    ldr r1, _0225D1BC ; =0x00001AB4\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov91_0225F7A8\n    ldr r0, _0225D1C8 ; =0x0000862C\n    add r0, r4, r0\n    bl ov91_02261928\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225D1B8: .word 0x00001F54\n    _0225D1BC: .word 0x00001AB4\n    _0225D1C0: .word 0x000021A4\n    _0225D1C4: .word 0x000087E4\n    _0225D1C8: .word 0x0000862C\n    _0225D1CC: .word 0x00001F58\n    _0225D1D0: .word 0x00008785\n    _0225D1D4: .word 0x000019CC\n    _0225D1D8: .word 0x00001F74"
    );
    #endif
}

void ov91_0225D1DC(void) {
    /* Original at 0x0225D1DC */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4]\n    cmp r2, #2\n    bhs _0225D202\n    ldr r0, _0225D2A8 ; =ov91_02261C44\n    lsl r1, r2, #2\n    ldr r1, [r0, r1]\n    ldr r0, [r4, #8]\n    cmp r1, r0\n    bhi _0225D202\n    add r0, r2, #1\n    str r0, [r4]\n    cmp r0, #1\n    bne _0225D202\n    ldr r0, _0225D2AC ; =0x000087E4\n    add r0, r4, r0\n    bl ov91_022619E8\n    ldr r0, _0225D2B0 ; =0x000086EC\n    mov r1, #1\n    add r0, r4, r0\n    mov r2, #0\n    bl sub_02021280\n    add r0, r4, #0\n    bl ov91_0225EA7C\n    ldr r0, _0225D2B4 ; =0x00008730\n    add r0, r4, r0\n    bl ov91_0225EF70\n    cmp r0, #0\n    bne _0225D22A\n    ldr r1, _0225D2B4 ; =0x00008730\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov91_0225F008\n    ldr r0, _0225D2B8 ; =0x000087CC\n    ldr r1, [r4, #0x10]\n    add r0, r4, r0\n    bl ov91_0225F3E8\n    cmp r0, #1\n    bne _0225D258\n    ldr r0, _0225D2B8 ; =0x000087CC\n    add r0, r4, r0\n    bl ov91_0225F3E4\n    add r1, r0, #0\n    ldr r0, _0225D2BC ; =0x0000FFFF\n    cmp r1, r0\n    beq _0225D250\n    ldr r0, _0225D2C0 ; =0x00001F74\n    add r0, r4, r0\n    bl ov91_02260370\n    ldr r0, _0225D2B8 ; =0x000087CC\n    add r0, r4, r0\n    bl ov91_0225F3D4\n    add r0, r4, #0\n    bl ov91_0225E40C\n    ldr r1, _0225D2C4 ; =0x000019CC\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov91_0225DCC4\n    ldr r1, _0225D2C8 ; =0x00001AB4\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov91_0225F74C\n    add r0, r4, #0\n    bl ov91_0225E62C\n    ldr r0, _0225D2AC ; =0x000087E4\n    ldr r1, _0225D2CC ; =0x00001C54\n    ldr r2, _0225D2C0 ; =0x00001F74\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, r2\n    bl ov91_02261A00\n    ldr r0, [r4, #4]\n    cmp r0, #1\n    bne _0225D294\n    ldr r0, [r4, #8]\n    add r0, r0, #1\n    str r0, [r4, #8]\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #8]\n    cmp r0, r1\n    blt _0225D2A2\n    str r1, [r4, #8]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0225D2A8: .word ov91_02261C44\n    _0225D2AC: .word 0x000087E4\n    _0225D2B0: .word 0x000086EC\n    _0225D2B4: .word 0x00008730\n    _0225D2B8: .word 0x000087CC\n    _0225D2BC: .word 0x0000FFFF\n    _0225D2C0: .word 0x00001F74\n    _0225D2C4: .word 0x000019CC\n    _0225D2C8: .word 0x00001AB4\n    _0225D2CC: .word 0x00001C54"
    );
    #endif
}

void ov91_0225D2D0(void) {
    /* Original at 0x0225D2D0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0225D2E4 ; =0x00001AB4\n    ldr r0, [r0, r1]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    pop {r3, pc}\n    _0225D2E4: .word 0x00001AB4"
    );
    #endif
}

void ov91_0225D2E8(void) {
    /* Original at 0x0225D2E8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov91_0225D2EC(void) {
    /* Original at 0x0225D2EC */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x28\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrh r0, [r4]\n    ldr r1, [r5, #0x14]\n    cmp r1, r0\n    beq _0225D324\n    add r0, r4, #0\n    add r1, sp, #0\n    bl ov91_0225E294\n    add r0, r5, #0\n    add r1, sp, #0\n    mov r2, #2\n    bl ov91_0225E2E4\n    ldrh r0, [r4, #2]\n    cmp r0, #0\n    beq _0225D324\n    mov r2, #0x12\n    ldr r0, _0225D328 ; =0x00001E38\n    ldrh r1, [r4]\n    ldrsb r2, [r4, r2]\n    ldr r3, [r5]\n    add r0, r5, r0\n    bl ov91_0225D694\n    add sp, #0x28\n    pop {r3, r4, r5, pc}\n    _0225D328: .word 0x00001E38"
    );
    #endif
}

void ov91_0225D32C(void) {
    /* Original at 0x0225D32C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r2, #0\n    add r3, r5, #0\n    add r0, r3, #0\n    add r0, #0x4c\n    ldrb r0, [r0]\n    cmp r0, #4\n    bne _0225D35A\n    mov r0, #0x44\n    add r4, r2, #0\n    mul r4, r0\n    add r0, r5, #0\n    add r0, #0x50\n    add r0, r0, r4\n    bl ov91_0225E23C\n    add r5, #0x4c\n    add r0, r5, r4\n    bl ov91_0225E400\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r2, r2, #1\n    add r3, #0x44\n    cmp r2, #0x60\n    blt _0225D334\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_0225D368(void) {
    /* Original at 0x0225D368 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    ldr r1, _0225D378 ; =0x000086DC\n    add r2, r0, r1\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    bx lr\n    _0225D378: .word 0x000086DC"
    );
    #endif
}

void ov91_0225D37C(void) {
    /* Original at 0x0225D37C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov91_0225D380(void) {
    /* Original at 0x0225D380 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r4, _0225D3B0 ; =0x00008780\n    add r3, r0, #0\n    ldrh r2, [r3, r4]\n    add r0, r4, #2\n    strh r2, [r3, r0]\n    strh r1, [r3, r4]\n    ldrh r0, [r3, r4]\n    add r2, r4, #4\n    sub r1, r4, #4\n    str r0, [sp]\n    add r0, r4, #0\n    sub r0, #0x50\n    add r4, r4, #2\n    add r0, r3, r0\n    ldr r1, [r3, r1]\n    add r2, r3, r2\n    ldrh r3, [r3, r4]\n    bl ov91_0225EED0\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0225D3B0: .word 0x00008780"
    );
    #endif
}

void ov91_0225D3B4(void) {
    /* Original at 0x0225D3B4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225D3BC ; =0x000087CC\n    add r0, r0, r3\n    ldr r3, _0225D3C0 ; =ov91_0225F3A0\n    bx r3\n    _0225D3BC: .word 0x000087CC\n    _0225D3C0: .word ov91_0225F3A0"
    );
    #endif
}

void ov91_0225D3C4(void) {
    /* Original at 0x0225D3C4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r1]\n    ldr r2, _0225D404 ; =0x00008784\n    strb r0, [r4, r2]\n    ldrb r3, [r1, #1]\n    add r0, r2, #1\n    strb r3, [r4, r0]\n    ldrb r3, [r1, #2]\n    add r0, r2, #2\n    strb r3, [r4, r0]\n    ldrb r1, [r1, #3]\n    add r0, r2, #3\n    strb r1, [r4, r0]\n    mov r1, #1\n    add r0, r2, #4\n    str r1, [r4, r0]\n    add r1, r2, #0\n    add r0, r2, #0\n    sub r1, #8\n    sub r0, #0x54\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    add r2, r4, r2\n    bl ov91_0225EEBC\n    ldr r1, _0225D408 ; =0x00008730\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov91_0225F008\n    pop {r4, pc}\n    _0225D404: .word 0x00008784\n    _0225D408: .word 0x00008730"
    );
    #endif
}

void ov91_0225D40C(void) {
    /* Original at 0x0225D40C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r4, [sp, #0x18]\n    add r5, r0, #0\n    add r7, r2, #0\n    add r0, r3, #0\n    add r6, r1, #0\n    lsl r2, r4, #0xc\n    str r3, [sp]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r0, #0\n    sub r0, r7, r6\n    mov r7, #2\n    mov r3, #0\n    lsl r7, r7, #0xa\n    add r2, r2, r7\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r1\n    sub r2, r0, r2\n    asr r1, r2, #0x1f\n    lsr r0, r2, #0x13\n    lsl r1, r1, #0xd\n    orr r1, r0\n    lsl r0, r2, #0xd\n    add r0, r0, r7\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    add r1, r4, #0\n    mul r1, r4\n    lsl r1, r1, #0xc\n    bl FX_Div\n    str r6, [r5]\n    ldr r1, [sp]\n    str r6, [r5, #4]\n    str r1, [r5, #8]\n    str r0, [r5, #0xc]\n    mov r0, #0\n    str r0, [r5, #0x10]\n    str r4, [r5, #0x14]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225D46C(void) {
    /* Original at 0x0225D46C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r6, [r5, #0x10]\n    ldr r0, [r5, #8]\n    lsl r2, r6, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsr r4, r2, #0xc\n    lsl r0, r1, #0x14\n    add r2, r6, #0\n    orr r4, r0\n    ldr r0, [r5, #0xc]\n    mul r2, r6\n    lsl r2, r2, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    lsl r1, r2, #2\n    bl FX_Div\n    ldr r1, [r5, #4]\n    add r0, r4, r0\n    add r0, r1, r0\n    str r0, [r5]\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0x14]\n    add r0, r0, #1\n    cmp r0, r1\n    bgt _0225D4CC\n    str r0, [r5, #0x10]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    str r1, [r5, #0x10]\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_0225D4D4(void) {
    /* Original at 0x0225D4D4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    lsl r4, r0, #5\n    lsl r0, r2, #3\n    ldr r2, _0225D4F8 ; =ov91_02261F8C\n    lsl r1, r1, #7\n    add r2, r2, r1\n    add r2, r4, r2\n    ldr r2, [r0, r2]\n    str r2, [r3]\n    ldr r2, _0225D4FC ; =ov91_02261F90\n    add r1, r2, r1\n    add r1, r4, r1\n    ldr r1, [r0, r1]\n    ldr r0, [sp, #8]\n    str r1, [r0]\n    pop {r3, r4}\n    bx lr\n    nop\n    _0225D4F8: .word ov91_02261F8C\n    _0225D4FC: .word ov91_02261F90"
    );
    #endif
}

void ov91_0225D500(void) {
    /* Original at 0x0225D500 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x28\n    add r5, r0, #0\n    ldr r0, [r5, #0x14]\n    add r4, r3, #0\n    add r3, sp, #0\n    strh r0, [r3]\n    mov r0, #0\n    strh r0, [r3, #2]\n    sub r3, r1, r4\n    lsr r1, r3, #0x1f\n    add r1, r3, r1\n    asr r1, r1, #1\n    lsl r1, r1, #0x10\n    asr r1, r1, #4\n    str r1, [sp, #4]\n    add r1, sp, #0x28\n    ldrh r1, [r1, #0x10]\n    sub r2, r2, r1\n    lsr r1, r2, #0x1f\n    add r1, r2, r1\n    asr r1, r1, #1\n    lsl r1, r1, #0x10\n    asr r1, r1, #4\n    str r0, [sp, #8]\n    add r0, sp, #4\n    str r1, [sp, #0xc]\n    bl VEC_Mag\n    ldr r1, _0225D5F8 ; =0x0001E200\n    cmp r0, r1\n    ble _0225D582\n    add r0, sp, #4\n    add r1, r0, #0\n    bl VEC_Normalize\n    ldr r0, [sp, #4]\n    ldr r2, _0225D5F8 ; =0x0001E200\n    asr r1, r0, #0x1f\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    ldr r0, [sp, #0xc]\n    str r1, [sp, #4]\n    ldr r2, _0225D5F8 ; =0x0001E200\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [sp, #0xc]\n    mov r0, #0x26\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    add r0, sp, #4\n    bl VEC_Mag\n    ldr r2, _0225D5FC ; =0x0000099A\n    asr r1, r0, #0x1f\n    mov r3, #0\n    str r0, [sp, #0x10]\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    add r0, sp, #4\n    str r1, [sp, #0x10]\n    add r1, r0, #0\n    bl VEC_Normalize\n    lsl r0, r4, #0x10\n    add r2, sp, #0x28\n    mov r1, #0x10\n    ldrsh r1, [r2, r1]\n    asr r0, r0, #0x10\n    add r2, sp, #0x14\n    bl ov91_02260400\n    mov r0, #0\n    str r0, [sp, #0x18]\n    add r2, sp, #0\n    add r0, sp, #0x14\n    ldrh r2, [r2]\n    ldr r3, [r5, #0x10]\n    add r1, r0, #0\n    bl ov91_0226045C\n    add r2, sp, #0\n    add r0, sp, #4\n    ldrh r2, [r2]\n    ldr r3, [r5, #0x10]\n    add r1, r0, #0\n    bl ov91_0226045C\n    mov r0, #0\n    str r0, [sp, #0x24]\n    ldr r2, [sp, #0x3c]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov91_0225E2E4\n    add sp, #0x28\n    pop {r3, r4, r5, pc}\n    nop\n    _0225D5F8: .word 0x0001E200\n    _0225D5FC: .word 0x0000099A"
    );
    #endif
}

void ov91_0225D600(void) {
    /* Original at 0x0225D600 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x1c]\n    cmp r1, #3\n    blt _0225D60A\n    mov r1, #2\n    b _0225D60E\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r2, r1, #2\n    ldr r1, _0225D624 ; =ov91_02261C34\n    ldr r0, [r0]\n    ldr r1, [r1, r2]\n    cmp r0, #2\n    bne _0225D61E\n    lsl r0, r1, #1\n    add r1, r1, r0\n    add r0, r1, #0\n    bx lr\n    nop\n    _0225D624: .word ov91_02261C34"
    );
    #endif
}

void ov91_0225D628(void) {
    /* Original at 0x0225D628 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    add r6, r1, #0\n    add r5, r0, #0\n    ldr r0, [r6, #0x1c]\n    ldr r7, [sp, #0x58]\n    str r0, [sp, #0x14]\n    mov r0, #0x56\n    lsl r0, r0, #2\n    add r0, r6, r0\n    str r0, [sp, #0x18]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x28]\n    str r0, [sp, #0x2c]\n    str r0, [sp, #0x30]\n    mov r4, #0\n    add r0, sp, #0x14\n    strh r4, [r0, #0x20]\n    mov r0, #1\n    str r2, [sp, #0xc]\n    str r3, [sp, #0x10]\n    str r4, [sp, #0x38]\n    str r0, [sp, #0x3c]\n    str r7, [sp, #0x40]\n    ldr r0, [sp, #0x10]\n    str r4, [sp]\n    str r0, [sp, #4]\n    ldr r3, [sp, #0xc]\n    add r0, r5, #0\n    add r1, sp, #0x14\n    add r2, r6, #0\n    str r7, [sp, #8]\n    bl ov91_0225D6B8\n    add r4, r4, #1\n    add r5, #0x40\n    cmp r4, #4\n    blt _0225D65A\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225D67C(void) {
    ov91_0225D750(0);
}

void ov91_0225D694(void) {
    ov91_0225D768();
}

void ov91_0225D6A0(void) {
    ov91_0225D84C(0);
}

void ov91_0225D6B8(void) {
    /* Original at 0x0225D6B8 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    ldr r6, [sp, #4]\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    add r5, r1, #0\n    str r3, [sp, #8]\n    str r0, [sp, #0x2c]\n    mov r7, #0\n    add r4, r6, #0\n    add r0, sp, #0xc\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x2c]\n    ldr r2, [sp, #0x28]\n    add r3, sp, #0x10\n    bl ov91_0225D4D4\n    ldr r0, [sp, #0x10]\n    add r3, r5, #0\n    lsl r0, r0, #0xc\n    str r0, [r5, #8]\n    ldr r0, [sp, #0xc]\n    add r2, r6, #0\n    lsl r0, r0, #0xc\n    add r3, #8\n    str r0, [r5, #0xc]\n    ldmia r3!, {r0, r1}\n    add r2, #0x18\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r5, #0\n    bl Sprite_CreateAffine\n    str r0, [r4]\n    mov r1, #2\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r1, #6\n    ldr r0, [r4]\n    lsl r1, r1, #0xa\n    bl Sprite_SetAnimSpeed\n    mov r0, #0\n    str r0, [r4, #0xc]\n    add r7, r7, #1\n    add r6, #0xc\n    add r4, r4, #4\n    cmp r7, #3\n    blt _0225D6D0\n    ldr r1, [sp, #0x2c]\n    ldr r0, [sp, #0x28]\n    cmp r1, r0\n    bne _0225D744\n    ldr r0, [sp, #4]\n    mov r1, #1\n    str r1, [r0, #0x3c]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    mov r1, #0\n    str r1, [r0, #0x3c]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225D750(void) {
    Sprite_Delete(0);
}

void ov91_0225D768(void) {
    /* Original at 0x0225D768 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    mov r4, #0\n    str r0, [sp]\n    add r0, r4, #0\n    sub r0, r0, #1\n    ldr r5, [sp]\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    str r3, [sp, #0xc]\n    str r4, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r6, r4, #0\n    ldr r0, [r5]\n    bl Sprite_GetDrawFlag\n    cmp r0, #0\n    bne _0225D794\n    mov r0, #1\n    str r6, [sp, #0x14]\n    str r0, [sp, #0x10]\n    b _0225D7B4\n    ldr r0, [r5]\n    bl Sprite_GetDrawPriority\n    add r7, r0, #0\n    ldr r0, [r5]\n    add r1, r7, #1\n    bl Sprite_SetDrawPriority\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    bne _0225D7B4\n    add r0, r7, #1\n    cmp r4, r0\n    bhi _0225D7B4\n    add r4, r0, #0\n    str r6, [sp, #0x14]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #3\n    blt _0225D782\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    bge _0225D7C6\n    bl GF_AssertFail\n    ldr r0, [sp, #8]\n    cmp r0, #3\n    blo _0225D7D0\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r0, [sp, #0xc]\n    cmp r0, #2\n    beq _0225D7F2\n    ldr r0, [sp]\n    ldr r0, [r0, #0x3c]\n    cmp r0, #1\n    bne _0225D7E6\n    ldr r0, [sp, #8]\n    add r0, r0, #2\n    str r0, [sp, #8]\n    b _0225D7EC\n    ldr r0, [sp, #8]\n    add r0, #8\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r4, r0, #3\n    b _0225D80A\n    ldr r0, [sp]\n    ldr r0, [r0, #0x3c]\n    cmp r0, #1\n    bne _0225D802\n    ldr r0, [sp, #8]\n    add r0, r0, #5\n    str r0, [sp, #8]\n    b _0225D808\n    ldr r0, [sp, #8]\n    add r0, #0xb\n    str r0, [sp, #8]\n    mov r4, #7\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #8]\n    lsl r5, r0, #2\n    ldr r0, [sp]\n    ldr r0, [r0, r5]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [sp]\n    mov r1, #0\n    add r0, r0, r5\n    str r1, [r0, #0xc]\n    ldr r0, [sp]\n    mov r1, #1\n    ldr r0, [r0, r5]\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp]\n    ldr r1, [sp, #0x14]\n    bl ov91_0225D884\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, r5]\n    bl Sprite_SetDrawPriority\n    ldr r0, [sp]\n    add r1, r4, #0\n    ldr r0, [r0, r5]\n    bl Sprite_SetPaletteOverride\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225D84C(void) {
    /* Original at 0x0225D84C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    ldr r0, [r5]\n    bl Sprite_GetDrawFlag\n    cmp r0, #1\n    bne _0225D87A\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    cmp r0, #0x10\n    bls _0225D872\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov91_0225D8E0\n    b _0225D87A\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov91_0225D884\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #3\n    blt _0225D854\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_0225D884(void) {
    /* Original at 0x0225D884 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r1, #0\n    add r5, r0, #0\n    lsl r4, r6, #2\n    add r0, r5, r4\n    ldr r0, [r0, #0xc]\n    ldr r2, _0225D8DC ; =0xFFFF0000\n    lsl r0, r0, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x10\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    lsl r1, r2, #5\n    bl FX_Div\n    add r2, r0, #0\n    mov r0, #0xc\n    mul r0, r6\n    add r6, r5, r0\n    add r6, #0x18\n    add r3, sp, #0\n    ldmia r6!, {r0, r1}\n    add r7, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r7, #0\n    str r0, [r3]\n    ldr r0, [sp, #4]\n    add r0, r0, r2\n    str r0, [sp, #4]\n    ldr r0, [r5, r4]\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0225D8DC: .word 0xFFFF0000"
    );
    #endif
}

void ov91_0225D8E0(void) {
    /* Original at 0x0225D8E0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0225D8EC ; =Sprite_SetDrawFlag\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bx r3\n    nop\n    _0225D8EC: .word Sprite_SetDrawFlag"
    );
    #endif
}

void ov91_0225D8F0(void) {
    /* Original at 0x0225D8F0 */
    /* Requires manual decompilation - 242 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x58]\n    add r5, r2, #0\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x58]\n    ldr r4, [sp, #0x60]\n    ldr r2, [sp, #0x14]\n    str r3, [sp, #0x1c]\n    mov r1, #0x1c\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0225D908\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1c\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    mov r0, #0xa\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x14]\n    ldr r0, [r0]\n    add r1, #0xc\n    mov r2, #1\n    mov r3, #2\n    bl AddWindowParameterized\n    mov r0, #0xe0\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x14]\n    mov r2, #0\n    add r0, #0xc\n    mov r1, #0xf\n    add r3, r2, #0\n    bl FillWindowPixelRect\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    add r6, r0, #0\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    ldr r0, [r0, #8]\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0225DAF8 ; =0x0001020F\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x14]\n    add r3, r1, #0\n    add r0, #0xc\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r6, #0\n    bl String_Delete\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r2, [sp, #0x18]\n    str r4, [sp, #0xc]\n    ldr r0, [sp, #0x5c]\n    ldr r2, [r2]\n    mov r1, #0x12\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r1, [sp, #0x1c]\n    ldr r2, [sp, #0x18]\n    str r4, [sp, #0xc]\n    ldr r0, [sp, #0x5c]\n    ldr r2, [r2]\n    add r1, #0x12\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0x80\n    str r0, [sp]\n    mov r2, #0\n    ldr r0, [sp, #0x5c]\n    mov r1, #0x13\n    add r3, r2, #0\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    add r0, sp, #0x30\n    bl InitWindow\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r2, #2\n    str r2, [sp, #8]\n    mov r0, #5\n    str r0, [sp, #0xc]\n    add r0, #0xfb\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x18]\n    add r1, sp, #0x30\n    ldr r0, [r0]\n    bl AddWindowParameterized\n    mov r0, #1\n    lsl r0, r0, #8\n    str r0, [sp, #0x28]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    mov r4, #0\n    cmp r0, #0\n    bls _0225DAD2\n    ldr r0, [sp, #0x58]\n    ldr r1, _0225DAFC ; =ov91_02261DAC\n    lsl r0, r0, #7\n    add r1, r1, r0\n    ldr r0, [sp, #0x1c]\n    lsl r0, r0, #5\n    add r6, r1, r0\n    ldr r0, [sp, #0x58]\n    cmp r4, r0\n    beq _0225DAC6\n    add r0, r6, #0\n    sub r0, #0x20\n    ldr r0, [r0]\n    mov r1, #2\n    str r0, [sp, #0x2c]\n    add r0, r6, #0\n    sub r0, #0x1c\n    ldr r7, [r0]\n    mov r0, #0xa\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    ldr r2, [sp, #0x2c]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x18]\n    sub r2, r2, #1\n    sub r3, r7, #1\n    lsl r2, r2, #0x18\n    lsl r3, r3, #0x18\n    ldr r0, [r0]\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl BgTilemapRectChangePalette\n    add r0, sp, #0x30\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    ldr r0, [r5, #0x18]\n    cmp r0, #1\n    bne _0225DA5C\n    ldr r0, _0225DB00 ; =0x0005060F\n    str r0, [sp, #0x20]\n    b _0225DA60\n    ldr r0, _0225DAF8 ; =0x0001020F\n    str r0, [sp, #0x20]\n    ldr r0, [r5, #8]\n    ldr r1, [sp, #0x24]\n    bl PlayerName_FlatToString\n    ldr r1, [sp, #0x2c]\n    add r0, sp, #0x30\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl SetWindowX\n    lsl r1, r7, #0x18\n    add r0, sp, #0x30\n    lsr r1, r1, #0x18\n    bl SetWindowY\n    add r0, sp, #0x30\n    ldrh r1, [r0, #0xa]\n    ldr r0, _0225DB04 ; =0xFFFF8000\n    and r0, r1\n    ldr r1, [sp, #0x28]\n    lsl r1, r1, #0x10\n    lsr r2, r1, #0x10\n    ldr r1, _0225DB08 ; =0x00007FFF\n    and r1, r2\n    orr r1, r0\n    add r0, sp, #0x30\n    strh r1, [r0, #0xa]\n    mov r0, #0\n    ldr r1, [sp, #0x24]\n    add r2, r0, #0\n    bl FontID_String_GetWidth\n    add r7, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x20]\n    mov r3, #0x40\n    str r0, [sp, #8]\n    mov r0, #0\n    sub r3, r3, r7\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0x24]\n    add r0, sp, #0x30\n    mov r1, #0\n    lsr r3, r3, #1\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, [sp, #0x28]\n    add r0, #0x10\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x1c]\n    add r4, r4, #1\n    add r6, #8\n    add r5, r5, #4\n    cmp r4, r0\n    blo _0225DA0E\n    ldr r0, [sp, #0x24]\n    bl String_Delete\n    add r0, sp, #0x30\n    bl RemoveWindow\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    str r1, [r0, #4]\n    mov r0, #2\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225DAF8: .word 0x0001020F\n    _0225DAFC: .word ov91_02261DAC\n    _0225DB00: .word 0x0005060F\n    _0225DB04: .word 0xFFFF8000\n    _0225DB08: .word 0x00007FFF"
    );
    #endif
}

void ov91_0225DB0C(void) {
    RemoveWindow();
}

void ov91_0225DB18(void) {
    /* Original at 0x0225DB18 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, #0xc\n    mov r1, #0\n    mov r2, #1\n    mov r3, #4\n    bl DrawFrameAndWindow1\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x6f\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl ov90_02258C8C\n    pop {r4, pc}"
    );
    #endif
}

void ov91_0225DB44(void) {
    ov90_02258CE0(0, 0x6f, 1);
}

void ov91_0225DB5C(void) {
    sub_0200E5D4(1);
    ClearWindowTilemapAndScheduleTransfer(r4);
    GfGfx_EngineATogglePlanes(4, 0);
}

void ov91_0225DB7C(void) {
    /* Original at 0x0225DB7C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0x13\n    add r4, r1, #0\n    lsl r0, r0, #6\n    add r0, r4, r0\n    mov r1, #1\n    bl ov91_02260298\n    ldr r0, _0225DBA8 ; =0x0000066C\n    mov r1, #0x2d\n    add r0, r4, r0\n    lsl r1, r1, #0xe\n    bl sub_02018198\n    mov r0, #0x13\n    lsl r0, r0, #6\n    add r0, r4, r0\n    mov r1, #1\n    bl ov91_02260334\n    pop {r4, pc}\n    nop\n    _0225DBA8: .word 0x0000066C"
    );
    #endif
}

void ov91_0225DBAC(void) {
    /* Original at 0x0225DBAC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #4]\n    add r1, r1, #1\n    str r1, [r0, #4]\n    cmp r1, #8\n    bge _0225DBBA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov91_0225DBC0(void) {
    /* Original at 0x0225DBC0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x13\n    lsl r2, r2, #6\n    ldr r3, _0225DBCC ; =ov91_022601C8\n    add r0, r0, r2\n    bx r3\n    nop\n    _0225DBCC: .word ov91_022601C8"
    );
    #endif
}

void ov91_0225DBD0(void) {
    /* Original at 0x0225DBD0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x4a\n    mov r2, #0\n    lsl r1, r1, #4\n    str r2, [r0, r1]\n    add r1, r1, #4\n    str r2, [r0, r1]\n    bx lr"
    );
    #endif
}

void ov91_0225DBE0(void) {
    /* Original at 0x0225DBE0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov91_0225DBE4(void) {
    /* Original at 0x0225DBE4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x13\n    lsl r1, r1, #6\n    add r0, r0, r1\n    ldr r3, _0225DBF0 ; =ov91_02260298\n    mov r1, #5\n    bx r3\n    _0225DBF0: .word ov91_02260298"
    );
    #endif
}

void ov91_0225DBF4(void) {
    /* Original at 0x0225DBF4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0225DC1C ; =0x000004A4\n    ldr r2, [r0, r1]\n    add r2, r2, #1\n    str r2, [r0, r1]\n    ldr r1, [r0, r1]\n    cmp r1, #0x3c\n    blo _0225DC18\n    ldr r1, _0225DC20 ; =0x000006BC\n    add r0, r0, r1\n    mov r1, #2\n    lsl r1, r1, #0xc\n    bl sub_0201815C\n    cmp r0, #1\n    bne _0225DC18\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _0225DC1C: .word 0x000004A4\n    _0225DC20: .word 0x000006BC"
    );
    #endif
}

void ov91_0225DC24(void) {
    ov90_02258CE0(0, 1, 0x6f);
}

void ov91_0225DC3C(void) {
    /* Original at 0x0225DC3C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r1, #0\n    mov r0, #0\n    strh r0, [r4, #6]\n    ldr r1, _0225DCB4 ; =0x00007FFF\n    add r0, r4, #0\n    bl ov91_0225DD50\n    ldr r1, _0225DCB8 ; =0x00000E38\n    add r0, r4, #0\n    bl ov91_0225DD24\n    mov r0, #0\n    strb r0, [r4]\n    mov r0, #1\n    strb r0, [r4, #1]\n    mov r1, #0x32\n    add r0, r4, #0\n    add r2, sp, #0\n    lsl r1, r1, #0xe\n    add r0, #0x94\n    str r1, [r0]\n    add r0, r4, #0\n    mov r1, #0x7b\n    add r0, #0x98\n    str r1, [r0]\n    mov r0, #5\n    lsl r0, r0, #0x10\n    ldr r5, _0225DCBC ; =ov91_02261C28\n    str r0, [r4, #8]\n    ldmia r5!, {r0, r1}\n    add r3, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r5]\n    str r0, [r2]\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x9c\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    ldr r1, _0225DCC0 ; =0x000009C4\n    str r0, [r2]\n    add r0, r4, #0\n    bl ov91_0225E09C\n    add r3, sp, #0\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xd8\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    add r4, #0xe4\n    str r0, [r4]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0225DCB4: .word 0x00007FFF\n    _0225DCB8: .word 0x00000E38\n    _0225DCBC: .word ov91_02261C28\n    _0225DCC0: .word 0x000009C4"
    );
    #endif
}

void ov91_0225DCC4(void) {
    /* Original at 0x0225DCC4 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r3, r0, #0\n    ldr r0, [r3]\n    add r4, r1, #0\n    cmp r0, #1\n    bne _0225DCD4\n    mov r0, #0\n    b _0225DCD6\n    mov r0, #1\n    strb r0, [r4, #1]\n    ldr r1, [r3, #8]\n    ldr r2, [r3, #0xc]\n    ldr r3, [r3]\n    add r0, r4, #0\n    lsl r5, r3, #2\n    ldr r3, _0225DD1C ; =ov91_02261C58\n    ldr r3, [r3, r5]\n    blx r3\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov91_0225DD24\n    ldrh r1, [r4, #4]\n    add r0, r4, #0\n    bl ov91_0225E044\n    str r0, [r4, #8]\n    ldrh r1, [r4, #4]\n    add r0, r4, #0\n    bl ov91_0225E070\n    add r1, r4, #0\n    add r1, #0xe4\n    str r0, [r1]\n    ldrh r2, [r4, #2]\n    ldrh r1, [r4, #6]\n    add r0, r4, #0\n    add r1, r2, r1\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    bl ov91_0225DD50\n    pop {r3, r4, r5, pc}\n    nop\n    _0225DD1C: .word ov91_02261C58"
    );
    #endif
}

void ov91_0225DD20(void) {
    *(u8*)r0 = r1;
}

void ov91_0225DD24(void) {
    /* Original at 0x0225DD24 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r1, #0\n    add r0, #0xc\n    strh r5, [r4, #4]\n    bl MTX_Identity33_\n    asr r0, r5, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    ldr r3, _0225DD4C ; =FX_SinCosTable_\n    add r2, r2, #1\n    lsl r2, r2, #1\n    add r4, #0xc\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, r4, #0\n    bl MTX_RotX33_\n    pop {r3, r4, r5, pc}\n    _0225DD4C: .word FX_SinCosTable_"
    );
    #endif
}

void ov91_0225DD50(void) {
    /* Original at 0x0225DD50 */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, #0x54\n    strh r4, [r5, #2]\n    bl MTX_Identity33_\n    add r0, r5, #0\n    add r0, #0x30\n    bl MTX_Identity33_\n    asr r0, r4, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    ldr r3, _0225DE84 ; =FX_SinCosTable_\n    add r2, r2, #1\n    lsl r2, r2, #1\n    add r0, r5, #0\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, #0x30\n    bl MTX_RotY33_\n    add r0, r5, #0\n    add r1, r5, #0\n    add r2, r5, #0\n    add r0, #0xc\n    add r1, #0x30\n    add r2, #0x54\n    bl MTX_Concat33\n    add r1, r5, #0\n    add r2, r5, #0\n    ldr r0, _0225DE88 ; =ov91_02261C4C\n    add r1, #0x54\n    add r2, #0x78\n    bl MTX_MultVec33\n    mov r0, #0\n    add r1, r5, #0\n    add r2, r5, #0\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #8]\n    add r1, #0x54\n    neg r0, r0\n    str r0, [sp, #0x10]\n    add r0, sp, #8\n    add r2, #0x84\n    bl MTX_MultVec33\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r1, [r0]\n    add r0, r5, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    add r0, r1, r0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r0, #0xbc\n    ldr r0, [r0]\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0xa4\n    ldr r1, [r0]\n    mov r0, #5\n    lsl r0, r0, #0x10\n    add r0, r1, r0\n    str r0, [sp, #0x10]\n    add r0, sp, #8\n    add r1, r5, #0\n    add r1, #0x30\n    add r2, r0, #0\n    bl MTX_MultVec33\n    add r1, r5, #0\n    add r1, #0x84\n    add r0, sp, #8\n    add r2, r1, #0\n    bl VEC_Add\n    add r0, r5, #0\n    add r2, r5, #0\n    add r0, #0x80\n    add r2, #0x8c\n    ldr r0, [r0]\n    ldr r2, [r2]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r5, #0\n    add r2, #0x84\n    str r0, [sp, #4]\n    ldr r2, [r2]\n    ldr r0, [r5, #0x78]\n    add r6, r1, #0\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    str r0, [sp]\n    add r4, r1, #0\n    add r2, r5, #0\n    add r2, #0x88\n    ldr r0, [r5, #0x7c]\n    ldr r2, [r2]\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r1, #0\n    mov r3, #2\n    add r7, r0, #0\n    ldr r1, [sp, #4]\n    mov r0, #0\n    lsl r3, r3, #0xa\n    add r1, r1, r3\n    adc r6, r0\n    lsl r3, r6, #0x14\n    lsr r1, r1, #0xc\n    orr r1, r3\n    mov r3, #2\n    ldr r6, [sp]\n    lsl r3, r3, #0xa\n    add r3, r6, r3\n    adc r4, r0\n    lsl r4, r4, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r4\n    mov r4, #2\n    lsl r4, r4, #0xa\n    add r4, r7, r4\n    adc r2, r0\n    lsl r0, r2, #0x14\n    lsr r2, r4, #0xc\n    orr r2, r0\n    add r0, r3, r2\n    add r1, r1, r0\n    add r0, r5, #0\n    add r0, #0x90\n    str r1, [r0]\n    add r0, r5, #0\n    add r1, r5, #0\n    add r5, #0xd8\n    add r0, #0x9c\n    add r1, #0x30\n    add r2, r5, #0\n    bl MTX_MultVec33\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _0225DE84: .word FX_SinCosTable_\n    _0225DE88: .word ov91_02261C4C"
    );
    #endif
}

void ov91_0225DE8C(void) {
    /* Original at 0x0225DE8C */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r4, r0, #0\n    ldrb r0, [r4]\n    add r6, r1, #0\n    add r7, r3, #0\n    mov r5, #0\n    cmp r0, #0\n    bne _0225DEA4\n    add sp, #0x34\n    add r0, r5, #0\n    pop {r4, r5, r6, r7, pc}\n    add r0, sp, #0x28\n    str r0, [sp]\n    add r0, sp, #0xc\n    add r3, r4, #0\n    str r0, [sp, #4]\n    add r3, #0x90\n    add r1, r2, #0\n    add r2, r4, #0\n    ldr r3, [r3]\n    add r0, r6, #0\n    add r2, #0x78\n    bl ov91_02261208\n    add r0, r4, #0\n    add r0, #0x84\n    add r1, r6, #0\n    add r2, sp, #0x1c\n    bl VEC_Subtract\n    add r0, sp, #0x1c\n    bl VEC_Mag\n    add r6, r0, #0\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    blt _0225DEFA\n    mov r1, #1\n    lsl r1, r1, #0xc\n    cmp r0, r1\n    bgt _0225DEFA\n    ldr r1, [r4, #8]\n    cmp r6, r1\n    bgt _0225DEF4\n    ldrb r1, [r4, #1]\n    cmp r1, #1\n    bne _0225DEF0\n    mov r5, #1\n    b _0225DEFA\n    mov r5, #2\n    b _0225DEFA\n    add sp, #0x34\n    mov r0, #2\n    pop {r4, r5, r6, r7, pc}\n    cmp r0, #0\n    ble _0225DFAA\n    add r0, r4, #0\n    add r0, #0x94\n    ldr r0, [r0]\n    cmp r6, r0\n    bge _0225DFAA\n    add r2, r4, #0\n    add r2, #0x98\n    ldr r2, [r2]\n    sub r0, r0, r6\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r5, r2, #0xc\n    orr r5, r0\n    add r0, sp, #0x1c\n    add r1, sp, #0x10\n    bl VEC_Normalize\n    asr r0, r5, #0x1f\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x10]\n    ldr r3, [sp, #8]\n    asr r1, r0, #0x1f\n    add r2, r5, #0\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    str r0, [r7]\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #8]\n    asr r1, r0, #0x1f\n    add r2, r5, #0\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    str r0, [r7, #4]\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #8]\n    asr r1, r0, #0x1f\n    add r2, r5, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r7, #8]\n    ldr r0, [r4, #8]\n    sub r1, r6, r5\n    cmp r1, r0\n    bgt _0225DFA8\n    ldrb r0, [r4, #1]\n    cmp r0, #1\n    bne _0225DFA4\n    mov r5, #1\n    b _0225DFAA\n    mov r5, #2\n    b _0225DFAA\n    mov r5, #3\n    add r0, r5, #0\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225DFB0(void) {
    /* Original at 0x0225DFB0 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    ldrb r0, [r5]\n    add r4, r1, #0\n    cmp r0, #0\n    bne _0225DFC4\n    add sp, #0x24\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    add r1, r5, #0\n    add r1, #0xdc\n    ldr r0, [r4, #4]\n    ldr r2, [r1]\n    cmp r2, r0\n    bge _0225E03C\n    add r1, r5, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    add r1, r2, r1\n    cmp r1, r0\n    ble _0225E03C\n    add r0, r5, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    mov r1, #0\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    add r0, #0xe0\n    ldr r0, [r0]\n    add r2, sp, #0x18\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x14]\n    ldr r0, [r4]\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    str r0, [sp, #8]\n    str r1, [sp, #4]\n    add r0, sp, #0xc\n    add r1, sp, #0\n    bl VEC_Subtract\n    add r0, sp, #0x18\n    bl VEC_Mag\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0xdc\n    ldr r1, [r4, #4]\n    ldr r0, [r0]\n    sub r0, r1, r0\n    asr r1, r0, #0xc\n    add r0, r5, #0\n    add r0, #0xd0\n    ldr r0, [r0]\n    mul r0, r1\n    add r1, r5, #0\n    add r1, #0xe4\n    ldr r1, [r1]\n    asr r1, r1, #0xc\n    bl _s32_div_f\n    add r5, #0xcc\n    ldr r1, [r5]\n    sub r0, r1, r0\n    cmp r6, r0\n    bge _0225E03C\n    add sp, #0x24\n    mov r0, #1\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov91_0225E044(void) {
    /* Original at 0x0225E044 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    mul r0, r1\n    ldr r1, _0225E06C ; =0x0000FFFF\n    bl _s32_div_f\n    mov r1, #0x5a\n    sub r2, r1, r0\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    mul r0, r2\n    bl _s32_div_f\n    add r4, #0xb0\n    ldr r1, [r4]\n    add r0, r0, r1\n    pop {r4, pc}\n    _0225E06C: .word 0x0000FFFF"
    );
    #endif
}

void ov91_0225E070(void) {
    /* Original at 0x0225E070 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    mul r0, r1\n    ldr r1, _0225E098 ; =0x0000FFFF\n    bl _s32_div_f\n    add r1, r4, #0\n    add r1, #0xc4\n    ldr r1, [r1]\n    mul r1, r0\n    add r0, r1, #0\n    mov r1, #0x5a\n    bl _s32_div_f\n    add r4, #0xc0\n    ldr r1, [r4]\n    add r0, r0, r1\n    pop {r4, pc}\n    _0225E098: .word 0x0000FFFF"
    );
    #endif
}

void ov91_0225E09C(void) {
    /* Original at 0x0225E09C */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r0, #0xa8\n    mov r2, #0x1e\n    add r4, r1, #0\n    str r1, [r0]\n    asr r6, r1, #0x1f\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r2, r2, #0xc\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    add r0, r5, #0\n    add r0, #0xac\n    str r1, [r0]\n    mov r2, #0x32\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r2, r2, #0xc\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    add r0, r5, #0\n    add r0, #0xb0\n    str r1, [r0]\n    mov r2, #5\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r2, r2, #0x10\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r7, r2, #0xc\n    orr r7, r0\n    add r0, r5, #0\n    add r0, #0xb4\n    str r7, [r0]\n    add r0, r5, #0\n    add r0, #0xb8\n    mov r2, #0x37\n    str r3, [r0]\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r2, r2, #0xc\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    mov r2, #0x96\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    add r1, r5, #0\n    add r1, #0xbc\n    str r0, [r1]\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r2, r2, #0xc\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    mov r2, #0xf\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    add r1, r5, #0\n    add r1, #0xc0\n    str r0, [r1]\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r2, r2, #0xe\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    mov r2, #0x1e\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    add r1, r5, #0\n    add r1, #0xc4\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0xc8\n    str r7, [r0]\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r2, r2, #0xe\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    add r0, r5, #0\n    add r0, #0xcc\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xcc\n    ldr r1, [r0]\n    add r0, r5, #0\n    add r0, #0xc8\n    ldr r0, [r0]\n    mov r2, #6\n    sub r1, r1, r0\n    add r0, r5, #0\n    add r0, #0xd0\n    str r1, [r0]\n    add r0, r4, #0\n    add r1, r6, #0\n    lsl r2, r2, #0xa\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    add r5, #0xd4\n    str r1, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225E1E0(void) {
    ((u16*)r0)[6] = r1;
}

void ov91_0225E1E4(void) {
    /* Original at 0x0225E1E4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xa4\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov91_0225E1EC(void) {
    /* Original at 0x0225E1EC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0225E1F0 ; =0x00000E38\n    bx lr\n    _0225E1F0: .word 0x00000E38"
    );
    #endif
}

void ov91_0225E1F4(void) {
    /* Original at 0x0225E1F4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0225E1F8 ; =0x00003FFF\n    bx lr\n    _0225E1F8: .word 0x00003FFF"
    );
    #endif
}

void ov91_0225E1FC(void) {
    /* Original at 0x0225E1FC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0225E22C ; =0x000002EE\n    sub r0, r1, r0\n    mov r1, #0x32\n    bl _u32_div_f\n    ldr r0, _0225E230 ; =0x0000638E\n    mul r0, r1\n    mov r1, #0x32\n    bl _s32_div_f\n    ldr r1, _0225E234 ; =0x000031C7\n    cmp r0, r1\n    ble _0225E220\n    bl _s32_div_f\n    ldr r0, _0225E234 ; =0x000031C7\n    sub r0, r0, r1\n    ldr r1, _0225E238 ; =0x00000E38\n    add r0, r0, r1\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    pop {r3, pc}\n    nop\n    _0225E22C: .word 0x000002EE\n    _0225E230: .word 0x0000638E\n    _0225E234: .word 0x000031C7\n    _0225E238: .word 0x00000E38"
    );
    #endif
}

void ov91_0225E23C(void) {
    /* Original at 0x0225E23C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrh r0, [r5]\n    add r4, r1, #0\n    ldr r2, _0225E290 ; =0x0000028F\n    strh r0, [r4]\n    ldrh r0, [r5, #2]\n    mov r3, #0\n    strh r0, [r4, #2]\n    ldr r0, [r5, #4]\n    strh r0, [r4, #4]\n    ldr r0, [r5, #8]\n    strh r0, [r4, #6]\n    ldr r0, [r5, #0xc]\n    strh r0, [r4, #8]\n    ldr r0, [r5, #0x10]\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    strh r1, [r4, #0x10]\n    ldr r0, [r5, #0x14]\n    asr r0, r0, #0xc\n    strh r0, [r4, #0xa]\n    ldr r0, [r5, #0x18]\n    asr r0, r0, #0xc\n    strh r0, [r4, #0xc]\n    ldr r0, [r5, #0x1c]\n    asr r0, r0, #0xc\n    strh r0, [r4, #0xe]\n    ldr r0, [r5, #0x20]\n    strb r0, [r4, #0x12]\n    ldr r0, [r5, #0x24]\n    strb r0, [r4, #0x13]\n    pop {r3, r4, r5, pc}\n    _0225E290: .word 0x0000028F"
    );
    #endif
}

void ov91_0225E294(void) {
    /* Original at 0x0225E294 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrh r0, [r5]\n    add r4, r1, #0\n    ldr r1, _0225E2E0 ; =0x0000028F\n    strh r0, [r4]\n    ldrh r0, [r5, #2]\n    strh r0, [r4, #2]\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    str r0, [r4, #4]\n    mov r0, #6\n    ldrsh r0, [r5, r0]\n    str r0, [r4, #8]\n    mov r0, #8\n    ldrsh r0, [r5, r0]\n    str r0, [r4, #0xc]\n    mov r0, #0x10\n    ldrsh r0, [r5, r0]\n    bl FX_Div\n    str r0, [r4, #0x10]\n    mov r0, #0xa\n    ldrsh r0, [r5, r0]\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x14]\n    mov r0, #0xc\n    ldrsh r0, [r5, r0]\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x18]\n    mov r0, #0xe\n    ldrsh r0, [r5, r0]\n    lsl r0, r0, #0xc\n    str r0, [r4, #0x1c]\n    ldrb r0, [r5, #0x13]\n    str r0, [r4, #0x24]\n    pop {r3, r4, r5, pc}\n    nop\n    _0225E2E0: .word 0x0000028F"
    );
    #endif
}

void ov91_0225E2E4(void) {
    /* Original at 0x0225E2E4 */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r6, r1, #0\n    str r2, [sp]\n    mov r1, #0\n    add r2, r4, #0\n    add r0, r2, #0\n    add r0, #0x4c\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0225E34C\n    mov r0, #0x44\n    add r5, r1, #0\n    mul r5, r0\n    add r3, r4, r5\n    add r7, r6, #0\n    add r3, #0x50\n    mov r2, #5\n    ldmia r7!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0225E30A\n    add r1, r4, r5\n    ldr r0, [sp]\n    add r1, #0x4c\n    add r2, r4, r5\n    add r6, #0x14\n    strb r0, [r1]\n    ldmia r6!, {r0, r1}\n    add r2, #0x78\n    stmia r2!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #0\n    str r0, [r2]\n    add r0, r4, r5\n    add r0, #0x4e\n    strh r1, [r0]\n    add r0, r4, r5\n    add r0, #0x88\n    str r1, [r0]\n    ldr r0, _0225E3F0 ; =0x00001AB4\n    add r1, r4, #0\n    add r1, #0x4c\n    ldr r2, [r4, #0x10]\n    ldr r3, [r4, #0x14]\n    add r0, r4, r0\n    add r1, r1, r5\n    bl ov91_02260728\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r1, r1, #1\n    add r2, #0x44\n    cmp r1, #0x60\n    blt _0225E2F2\n    ldr r0, [sp]\n    cmp r0, #1\n    bne _0225E3EA\n    mov r0, #0\n    add r2, r4, #0\n    add r1, r2, #0\n    add r1, #0x4c\n    ldrb r1, [r1]\n    cmp r1, #2\n    beq _0225E36C\n    cmp r1, #5\n    bne _0225E3DE\n    add r5, r0, #0\n    add r0, r4, #0\n    str r0, [sp, #8]\n    add r0, #0x4c\n    mov r1, #0x44\n    str r0, [sp, #8]\n    mul r5, r1\n    ldr r0, _0225E3F0 ; =0x00001AB4\n    ldr r1, [sp, #8]\n    add r0, r4, r0\n    add r1, r1, r5\n    bl ov91_02260754\n    add r0, r4, #0\n    str r0, [sp, #4]\n    add r0, #0x4c\n    str r0, [sp, #4]\n    add r0, r0, r5\n    bl ov91_0225E400\n    add r2, r4, r5\n    mov ip, r6\n    add r2, #0x50\n    mov r7, #5\n    mov r3, ip\n    ldmia r3!, {r0, r1}\n    mov ip, r3\n    stmia r2!, {r0, r1}\n    sub r7, r7, #1\n    bne _0225E39C\n    ldr r1, [sp]\n    ldr r0, [sp, #4]\n    add r2, r4, r5\n    add r6, #0x14\n    strb r1, [r0, r5]\n    ldmia r6!, {r0, r1}\n    add r2, #0x78\n    stmia r2!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #0\n    str r0, [r2]\n    add r0, r4, r5\n    add r0, #0x4e\n    strh r1, [r0]\n    add r0, r4, r5\n    add r0, #0x88\n    str r1, [r0]\n    ldr r0, _0225E3F0 ; =0x00001AB4\n    ldr r1, [sp, #8]\n    ldr r2, [r4, #0x10]\n    ldr r3, [r4, #0x14]\n    add r0, r4, r0\n    add r1, r1, r5\n    bl ov91_02260728\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r2, #0x44\n    cmp r0, #0x60\n    blt _0225E35E\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0225E3F0: .word 0x00001AB4"
    );
    #endif
}

void ov91_0225E3F4(void) {
    ((u8*)r1)[1] = 1;
    ((u16*)r1)[6] = r2;
    ((u32*)r1)[0x24] = r3;
}

void ov91_0225E400(void) {
    memset();
}

void ov91_0225E40C(void) {
    /* Original at 0x0225E40C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r5, #0\n    mov r7, #0\n    add r6, r5, #0\n    add r4, #0x4c\n    add r0, r6, #0\n    add r0, #0x4c\n    ldrb r0, [r0]\n    add r1, r0, #0\n    add r1, #0xff\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    cmp r1, #1\n    bhi _0225E434\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov91_0225E45C\n    b _0225E44E\n    cmp r0, #5\n    bne _0225E442\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov91_0225E8BC\n    b _0225E44E\n    cmp r0, #3\n    bne _0225E44E\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov91_0225E9F4\n    add r7, r7, #1\n    add r6, #0x44\n    add r4, #0x44\n    cmp r7, #0x60\n    blt _0225E418\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225E45C(void) {
    /* Original at 0x0225E45C */
    /* Requires manual decompilation - 195 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r4, r1, #0\n    ldrb r7, [r4]\n    add r5, r0, #0\n    cmp r7, #1\n    beq _0225E470\n    cmp r7, #2\n    beq _0225E470\n    b _0225E5FA\n    ldr r0, [r4, #0x30]\n    add r1, sp, #0x14\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl ov91_0225E728\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _0225E496\n    ldr r0, _0225E600 ; =0x000019CC\n    add r1, r4, #0\n    add r0, r5, r0\n    add r1, #0x2c\n    add r2, sp, #0x14\n    add r3, sp, #8\n    bl ov91_0225DE8C\n    add r6, r0, #0\n    b _0225E498\n    mov r6, #0\n    add r0, r4, #0\n    add r1, sp, #0x14\n    bl ov91_0225EA54\n    cmp r6, #3\n    beq _0225E4A8\n    cmp r6, #1\n    bne _0225E4B0\n    add r0, r4, #0\n    add r1, sp, #8\n    bl ov91_0225EA54\n    ldrh r0, [r4, #2]\n    add r0, r0, #1\n    strh r0, [r4, #2]\n    cmp r6, #1\n    bne _0225E544\n    add r0, r5, #0\n    bl ov91_0225D600\n    ldr r1, [r5, #0x18]\n    add r1, r1, r0\n    ldr r0, _0225E604 ; =0x0001869F\n    str r1, [r5, #0x18]\n    cmp r1, r0\n    ble _0225E4CE\n    str r0, [r5, #0x18]\n    ldr r0, [r5, #0x1c]\n    cmp r0, #0\n    beq _0225E4DA\n    cmp r0, #1\n    beq _0225E4E8\n    b _0225E4F6\n    ldr r0, _0225E608 ; =0x00000582\n    bl PlaySE\n    ldr r0, _0225E60C ; =0x00000583\n    bl PlaySE\n    b _0225E502\n    ldr r0, _0225E608 ; =0x00000582\n    bl PlaySE\n    ldr r0, _0225E610 ; =0x00000584\n    bl PlaySE\n    b _0225E502\n    ldr r0, _0225E608 ; =0x00000582\n    bl PlaySE\n    ldr r0, _0225E614 ; =0x00000585\n    bl PlaySE\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov91_0225E9E4\n    ldr r0, _0225E618 ; =0x00001E38\n    ldr r1, [r5, #0x14]\n    ldr r2, [r5, #0x1c]\n    ldr r3, [r5]\n    add r0, r5, r0\n    bl ov91_0225D694\n    ldr r0, [r5, #0x1c]\n    cmp r0, #0x63\n    bge _0225E522\n    add r0, r0, #1\n    str r0, [r5, #0x1c]\n    ldr r2, [r5, #0x1c]\n    ldr r0, _0225E61C ; =0x0000862C\n    cmp r2, #3\n    ldr r1, _0225E620 ; =0x00001AB4\n    bne _0225E538\n    add r0, r5, r0\n    add r1, r5, r1\n    bl ov91_02261808\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, r0\n    add r1, r5, r1\n    bl ov91_022618B0\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _0225E600 ; =0x000019CC\n    add r1, r4, #0\n    add r0, r5, r0\n    add r1, #0x2c\n    mov r6, #0\n    bl ov91_0225DFB0\n    cmp r0, #1\n    bne _0225E56E\n    mov r6, #1\n    cmp r7, #1\n    bne _0225E562\n    ldr r0, _0225E624 ; =0x00000722\n    bl PlaySE\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov91_0225E7C4\n    b _0225E5E6\n    ldr r1, [r4, #0x30]\n    ldr r0, _0225E628 ; =0xFFFCE000\n    cmp r1, r0\n    bgt _0225E5BE\n    add r0, r4, #0\n    bl ov91_0225E990\n    cmp r0, #0\n    bne _0225E5A4\n    ldr r1, _0225E628 ; =0xFFFCE000\n    ldr r0, [sp, #4]\n    mov r6, #1\n    cmp r0, r1\n    bgt _0225E598\n    ldr r3, [r5, #0x1c]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov91_0225E3F4\n    b _0225E5E6\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov91_0225E7C4\n    b _0225E5E6\n    mov r0, #1\n    ldr r1, [r4, #0x30]\n    lsl r0, r0, #0xa\n    cmp r1, r0\n    bgt _0225E5E6\n    ldr r3, [r5, #0x1c]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    mov r6, #1\n    bl ov91_0225E3F4\n    b _0225E5E6\n    add r0, r4, #0\n    bl ov91_0225E9C0\n    cmp r0, #1\n    bne _0225E5E6\n    add r0, r4, #0\n    add r0, #0x2c\n    mov r6, #1\n    add r1, sp, #0x14\n    add r2, r0, #0\n    bl VEC_Subtract\n    mov r0, #0\n    add r2, r6, #0\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r5, #0\n    lsl r3, r2, #0xa\n    bl ov91_0225E7E8\n    cmp r6, #1\n    bne _0225E5FA\n    cmp r7, #1\n    bne _0225E5FA\n    mov r0, #0\n    str r0, [r5, #0x1c]\n    ldr r0, _0225E61C ; =0x0000862C\n    add r0, r5, r0\n    bl ov91_02261890\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225E600: .word 0x000019CC\n    _0225E604: .word 0x0001869F\n    _0225E608: .word 0x00000582\n    _0225E60C: .word 0x00000583\n    _0225E610: .word 0x00000584\n    _0225E614: .word 0x00000585\n    _0225E618: .word 0x00001E38\n    _0225E61C: .word 0x0000862C\n    _0225E620: .word 0x00001AB4\n    _0225E624: .word 0x00000722\n    _0225E628: .word 0xFFFCE000"
    );
    #endif
}

void ov91_0225E62C(void) {
    ov91_0225E67C(0);
}

void ov91_0225E648(void) {
    /* Original at 0x0225E648 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r7, #0\n    mov r6, #0\n    add r4, r7, #0\n    add r5, #0x4c\n    add r0, r4, #0\n    add r0, #0x4d\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0225E666\n    add r1, r4, #0\n    add r1, #0x4c\n    mov r0, #2\n    strb r0, [r1]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov91_0225E67C\n    add r6, r6, #1\n    add r4, #0x44\n    add r5, #0x44\n    cmp r6, #0x60\n    blt _0225E654\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225E67C(void) {
    /* Original at 0x0225E67C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrb r0, [r5, #1]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _0225E6AA\n    ldrb r0, [r5]\n    cmp r0, #3\n    bne _0225E69A\n    ldrh r0, [r5, #6]\n    cmp r0, #1\n    bne _0225E69A\n    mov r0, #4\n    strb r0, [r5]\n    b _0225E6A0\n    add r0, r5, #0\n    bl ov91_0225E400\n    ldr r0, _0225E6AC ; =0x00001AB4\n    add r1, r5, #0\n    add r0, r4, r0\n    bl ov91_02260754\n    pop {r3, r4, r5, pc}\n    _0225E6AC: .word 0x00001AB4"
    );
    #endif
}

void ov91_0225E6B0(void) {
    /* Original at 0x0225E6B0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    mov r2, #2\n    add r1, r0, #0\n    add r1, #0x4c\n    ldrb r1, [r1]\n    cmp r1, #1\n    bne _0225E6C4\n    add r1, r0, #0\n    add r1, #0x4c\n    strb r2, [r1]\n    add r3, r3, #1\n    add r0, #0x44\n    cmp r3, #0x60\n    blt _0225E6B4\n    bx lr"
    );
    #endif
}

void ov91_0225E6D0(void) {
    /* Original at 0x0225E6D0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    add r1, r0, #0\n    add r1, #0x4c\n    ldrb r1, [r1]\n    cmp r1, #1\n    beq _0225E6E8\n    cmp r1, #2\n    beq _0225E6E8\n    cmp r1, #5\n    beq _0225E6E8\n    cmp r1, #3\n    bne _0225E6EC\n    mov r0, #1\n    bx lr\n    add r2, r2, #1\n    add r0, #0x44\n    cmp r2, #0x60\n    blt _0225E6D2\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov91_0225E6F8(void) {
    /* Original at 0x0225E6F8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrh r0, [r4, #2]\n    mov r2, #0x67\n    lsl r2, r2, #4\n    lsl r0, r0, #0xc\n    asr r1, r0, #0x1f\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    ldr r4, [r4, #0x14]\n    orr r1, r0\n    sub r0, r4, r1\n    bpl _0225E724\n    add r0, r3, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov91_0225E728(void) {
    /* Original at 0x0225E728 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov91_0225E6F8\n    add r7, r0, #0\n    ldr r0, [r5, #8]\n    asr r6, r7, #0x1f\n    asr r1, r0, #0x1f\n    add r2, r7, #0\n    add r3, r6, #0\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    str r0, [r4]\n    ldr r0, [r5, #0xc]\n    add r2, r7, #0\n    asr r1, r0, #0x1f\n    add r3, r6, #0\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    ldr r2, _0225E7BC ; =0xFFFFECCC\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    str r0, [r4, #4]\n    ldrh r0, [r5, #2]\n    asr r3, r2, #0xd\n    lsl r0, r0, #0xc\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    add r2, r0, #0\n    lsl r3, r3, #0xa\n    add r3, r2, r3\n    ldr r2, _0225E7C0 ; =0x00000000\n    ldr r0, [r4, #4]\n    adc r1, r2\n    lsr r2, r3, #0xc\n    lsl r1, r1, #0x14\n    orr r2, r1\n    add r0, r0, r2\n    str r0, [r4, #4]\n    ldr r0, [r5, #0x10]\n    add r2, r7, #0\n    asr r1, r0, #0x1f\n    add r3, r6, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r4, #8]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E7BC: .word 0xFFFFECCC\n    _0225E7C0: .word 0x00000000"
    );
    #endif
}

void ov91_0225E7C4(void) {
    ov91_0225E7E8(1);
}

void ov91_0225E7E8(void) {
    /* Original at 0x0225E7E8 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r3, #0\n    cmp r2, #0\n    beq _0225E87E\n    ldr r0, [r5, #8]\n    neg r0, r0\n    str r0, [r5, #8]\n    ldr r0, [r5, #0x10]\n    neg r0, r0\n    str r0, [r5, #0x10]\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    beq _0225E87E\n    bl MTRandom\n    ldr r2, [r5, #0x10]\n    add r1, r0, #0\n    cmp r2, #0\n    bge _0225E816\n    neg r0, r2\n    b _0225E818\n    add r0, r2, #0\n    ldr r3, [r5, #8]\n    cmp r3, #0\n    bge _0225E822\n    neg r6, r3\n    b _0225E824\n    add r6, r3, #0\n    cmp r6, r0\n    bgt _0225E854\n    asr r0, r2, #0x1f\n    lsr r3, r2, #0x14\n    lsl r0, r0, #0xc\n    lsl r6, r2, #0xc\n    mov r2, #2\n    orr r0, r3\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r6, r2\n    adc r0, r3\n    lsl r0, r0, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r0\n    mov r0, #1\n    and r0, r1\n    cmp r0, #1\n    bne _0225E850\n    neg r0, r2\n    str r0, [r5, #8]\n    b _0225E87E\n    str r2, [r5, #8]\n    b _0225E87E\n    asr r0, r3, #0x1f\n    lsr r2, r3, #0x14\n    lsl r0, r0, #0xc\n    orr r0, r2\n    mov r2, #2\n    lsl r6, r3, #0xc\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r6, r2\n    adc r0, r3\n    lsl r0, r0, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r0\n    mov r0, #1\n    and r0, r1\n    cmp r0, #1\n    bne _0225E87C\n    neg r0, r2\n    str r0, [r5, #0x10]\n    b _0225E87E\n    str r2, [r5, #0x10]\n    ldr r0, [r5, #0x14]\n    asr r3, r4, #0x1f\n    asr r1, r0, #0x1f\n    add r2, r4, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [r5, #0x14]\n    strh r3, [r5, #2]\n    mov r0, #5\n    strb r0, [r5]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov91_0225E728\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov91_0225EA54\n    ldrh r0, [r5, #2]\n    add r0, r0, #1\n    strh r0, [r5, #2]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov91_0225E8BC(void) {
    /* Original at 0x0225E8BC */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    ldrb r1, [r5]\n    mov r6, #0\n    cmp r1, #5\n    bne _0225E980\n    add r1, sp, #4\n    ldr r7, [r5, #0x30]\n    bl ov91_0225E728\n    add r0, r5, #0\n    add r1, sp, #4\n    bl ov91_0225EA54\n    ldrh r0, [r5, #2]\n    add r1, r5, #0\n    add r1, #0x2c\n    add r0, r0, #1\n    strh r0, [r5, #2]\n    ldr r0, _0225E984 ; =0x000019CC\n    add r0, r4, r0\n    bl ov91_0225DFB0\n    cmp r0, #1\n    bne _0225E8FE\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov91_0225E7C4\n    b _0225E964\n    ldr r1, [r5, #0x30]\n    ldr r0, _0225E988 ; =0xFFFCE000\n    cmp r1, r0\n    bgt _0225E93E\n    add r0, r5, #0\n    bl ov91_0225E990\n    cmp r0, #0\n    bne _0225E926\n    ldr r0, _0225E988 ; =0xFFFCE000\n    cmp r7, r0\n    bgt _0225E91A\n    mov r6, #1\n    b _0225E930\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov91_0225E7C4\n    b _0225E930\n    ldr r1, [r5, #0x30]\n    ldr r0, _0225E98C ; =0xFFF9C000\n    cmp r1, r0\n    bgt _0225E930\n    mov r6, #1\n    mov r0, #2\n    ldr r1, [r5, #0x14]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bgt _0225E964\n    mov r6, #1\n    b _0225E964\n    add r0, r5, #0\n    bl ov91_0225E9C0\n    cmp r0, #1\n    bne _0225E964\n    add r0, r5, #0\n    add r0, #0x2c\n    add r1, sp, #4\n    add r2, r0, #0\n    bl VEC_Subtract\n    add r0, r6, #0\n    mov r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    lsl r3, r2, #0xa\n    bl ov91_0225E7E8\n    mov r0, #1\n    ldr r1, [r5, #0x14]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bgt _0225E970\n    mov r6, #1\n    cmp r6, #1\n    bne _0225E980\n    ldr r3, [r4, #0x1c]\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl ov91_0225E3F4\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225E984: .word 0x000019CC\n    _0225E988: .word 0xFFFCE000\n    _0225E98C: .word 0xFFF9C000"
    );
    #endif
}

void ov91_0225E990(void) {
    /* Original at 0x0225E990 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x40]\n    mov r0, #0x2f\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    blt _0225E9A6\n    mov r0, #0xf\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bgt _0225E9A6\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov91_0225E9AC(void) {
    /* Original at 0x0225E9AC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x40]\n    mov r0, #0x1e\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    bgt _0225E9BA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov91_0225E9C0(void) {
    /* Original at 0x0225E9C0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xf\n    ldr r2, [r0, #0x40]\n    lsl r1, r1, #0x10\n    cmp r2, r1\n    blt _0225E9D4\n    ldr r0, [r0, #0x3c]\n    cmp r0, #1\n    bne _0225E9DE\n    mov r0, #1\n    bx lr\n    ldr r1, [r0, #0x3c]\n    cmp r1, #0\n    bne _0225E9DE\n    mov r1, #1\n    str r1, [r0, #0x3c]\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov91_0225E9E4(void) {
    /* Original at 0x0225E9E4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #3\n    strb r2, [r0]\n    mov r2, #8\n    strh r2, [r0, #0x38]\n    ldr r1, [r1, #0x1c]\n    strh r1, [r0, #0x3a]\n    bx lr"
    );
    #endif
}

void ov91_0225E9F4(void) {
    /* Original at 0x0225E9F4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r6, r1, #0\n    add r1, sp, #0xc\n    add r5, r0, #0\n    bl ov91_0225E728\n    ldr r0, _0225EA50 ; =0x000019CC\n    add r1, r5, #0\n    add r0, r6, r0\n    add r1, #0x2c\n    add r2, sp, #0xc\n    add r3, sp, #0\n    bl ov91_0225DE8C\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl ov91_0225EA54\n    cmp r4, #3\n    beq _0225EA24\n    cmp r4, #1\n    bne _0225EA2C\n    add r0, r5, #0\n    add r1, sp, #0\n    bl ov91_0225EA54\n    ldrh r0, [r5, #2]\n    add r0, r0, #1\n    strh r0, [r5, #2]\n    mov r0, #0x38\n    ldrsh r1, [r5, r0]\n    sub r1, r1, #1\n    strh r1, [r5, #0x38]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bgt _0225EA4C\n    ldrh r3, [r5, #0x3a]\n    add r0, r6, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov91_0225E3F4\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    _0225EA50: .word 0x000019CC"
    );
    #endif
}

void ov91_0225EA54(void) {
    /* Original at 0x0225EA54 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, #0x2c\n    add r2, r0, #0\n    bl VEC_Add\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x2c]\n    str r0, [sp]\n    ldr r0, [r4, #0x34]\n    str r0, [sp, #8]\n    add r0, sp, #0\n    bl VEC_Mag\n    str r0, [r4, #0x40]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov91_0225EA7C(void) {
    /* Original at 0x0225EA7C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0225EA94 ; =gSystem + 0x40\n    ldrh r1, [r1, #0x26]\n    cmp r1, #0\n    bne _0225EA8C\n    bl ov91_0225EA98\n    pop {r3, pc}\n    bl ov91_0225EC7C\n    pop {r3, pc}\n    nop\n    _0225EA94: .word gSystem + 0x40"
    );
    #endif
}

void ov91_0225EA98(void) {
    /* Original at 0x0225EA98 */
    /* Requires manual decompilation - 216 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    mov r4, #0\n    cmp r0, #0\n    bne _0225EAB0\n    ldr r0, [r5, #0x48]\n    add sp, #0x30\n    add r0, r0, #1\n    str r0, [r5, #0x48]\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    add r0, #0x20\n    add r1, sp, #4\n    bl ov91_0225EE48\n    cmp r0, #0\n    bne _0225EAC2\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0x20\n    add r1, sp, #0\n    bl ov91_0225EE64\n    cmp r0, #0\n    bne _0225EAD4\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0x20\n    bl ov91_0225EE88\n    add r6, r0, #0\n    cmp r6, #2\n    bge _0225EAE4\n    b _0225EC44\n    ldr r0, [r5, #0x14]\n    add r1, sp, #0\n    strh r0, [r1, #8]\n    mov r3, #0\n    strh r3, [r1, #0xa]\n    mov r0, #4\n    ldrsh r2, [r1, r0]\n    ldrsh r0, [r1, r3]\n    add r1, r6, #0\n    sub r0, r2, r0\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    asr r0, r0, #4\n    str r0, [sp, #0xc]\n    add r1, sp, #0\n    mov r0, #6\n    ldrsh r2, [r1, r0]\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    add r1, r6, #0\n    sub r0, r2, r0\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    asr r0, r0, #4\n    str r0, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp, #0x10]\n    add r0, sp, #0xc\n    bl VEC_Mag\n    mov r1, #2\n    lsl r1, r1, #0xe\n    cmp r0, r1\n    bge _0225EB74\n    cmp r0, #0\n    beq _0225EB70\n    add r0, sp, #0xc\n    add r1, r0, #0\n    bl VEC_Normalize\n    ldr r3, [sp, #0xc]\n    asr r1, r3, #0x1f\n    lsr r0, r3, #0x11\n    lsl r2, r1, #0xf\n    orr r2, r0\n    mov r0, #2\n    lsl r3, r3, #0xf\n    mov r1, #0\n    lsl r0, r0, #0xa\n    add r3, r3, r0\n    adc r2, r1\n    lsl r2, r2, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r2\n    ldr r2, [sp, #0x14]\n    str r3, [sp, #0xc]\n    asr r3, r2, #0x1f\n    lsr r6, r2, #0x11\n    lsl r3, r3, #0xf\n    orr r3, r6\n    lsl r2, r2, #0xf\n    add r2, r2, r0\n    adc r3, r1\n    lsl r0, r3, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [sp, #0x14]\n    b _0225EBBC\n    mov r4, #1\n    b _0225EBBC\n    ldr r1, _0225EC6C ; =0x0001E200\n    cmp r0, r1\n    ble _0225EBBC\n    add r0, sp, #0xc\n    add r1, r0, #0\n    bl VEC_Normalize\n    ldr r0, [sp, #0xc]\n    ldr r2, _0225EC6C ; =0x0001E200\n    asr r1, r0, #0x1f\n    mov r3, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    ldr r0, [sp, #0x14]\n    str r1, [sp, #0xc]\n    ldr r2, _0225EC6C ; =0x0001E200\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    str r1, [sp, #0x14]\n    cmp r4, #0\n    bne _0225EC46\n    mov r0, #0x26\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x10]\n    add r0, sp, #0xc\n    bl VEC_Mag\n    ldr r2, _0225EC70 ; =0x0000099A\n    asr r1, r0, #0x1f\n    mov r3, #0\n    str r0, [sp, #0x18]\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    add r0, sp, #0xc\n    str r1, [sp, #0x18]\n    add r1, r0, #0\n    bl VEC_Normalize\n    add r2, sp, #0\n    mov r0, #0\n    mov r1, #2\n    ldrsh r0, [r2, r0]\n    ldrsh r1, [r2, r1]\n    add r2, sp, #0x1c\n    bl ov91_02260400\n    mov r0, #0\n    str r0, [sp, #0x20]\n    add r2, sp, #0\n    add r0, sp, #0x1c\n    ldrh r2, [r2, #8]\n    ldr r3, [r5, #0x10]\n    add r1, r0, #0\n    bl ov91_0226045C\n    add r2, sp, #0\n    add r0, sp, #0xc\n    ldrh r2, [r2, #8]\n    ldr r3, [r5, #0x10]\n    add r1, r0, #0\n    bl ov91_0226045C\n    ldr r0, [r5, #0x1c]\n    cmp r0, #5\n    blt _0225EC2E\n    mov r0, #1\n    str r0, [sp, #0x2c]\n    b _0225EC32\n    mov r0, #0\n    str r0, [sp, #0x2c]\n    add r0, r5, #0\n    add r1, sp, #8\n    mov r2, #1\n    bl ov91_0225E2E4\n    ldr r0, _0225EC74 ; =0x0000064F\n    bl PlaySE\n    b _0225EC46\n    mov r4, #1\n    cmp r4, #1\n    bne _0225EC5C\n    add r3, sp, #0\n    mov r1, #0\n    mov r2, #2\n    ldr r0, _0225EC78 ; =0x0000854C\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, r5, r0\n    bl ov91_02260E88\n    add r0, r5, #0\n    bl ov91_0225EE9C\n    mov r0, #0\n    str r0, [r5, #0x48]\n    add sp, #0x30\n    pop {r4, r5, r6, pc}\n    nop\n    _0225EC6C: .word 0x0001E200\n    _0225EC70: .word 0x0000099A\n    _0225EC74: .word 0x0000064F\n    _0225EC78: .word 0x0000854C"
    );
    #endif
}

void ov91_0225EC7C(void) {
    /* Original at 0x0225EC7C */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r1, [r4, #0x20]\n    cmp r1, #0\n    bne _0225ECA4\n    bl ov91_0225ED6C\n    cmp r0, #1\n    bne _0225ECA4\n    mov r0, #1\n    str r0, [r4, #0x20]\n    ldr r0, _0225ED5C ; =0x00008544\n    add r0, r4, r0\n    bl ov91_02260CB4\n    ldr r0, _0225ED60 ; =0x000021A8\n    add r0, r4, r0\n    bl ov91_022614D4\n    ldr r0, [r4, #0x20]\n    cmp r0, #1\n    bne _0225ED56\n    ldr r1, _0225ED64 ; =0x000086EC\n    ldrh r0, [r4, r1]\n    cmp r0, #1\n    bne _0225ECDA\n    add r0, r1, #2\n    ldrh r0, [r4, r0]\n    add r2, sp, #0\n    mov r3, sp\n    strh r0, [r2]\n    add r0, r1, #4\n    ldrh r0, [r4, r0]\n    sub r3, r3, #4\n    add r4, #0x20\n    strh r0, [r2, #2]\n    ldrh r1, [r2]\n    add r0, r4, #0\n    strh r1, [r3]\n    ldrh r1, [r2, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov91_0225EDC8\n    add sp, #4\n    pop {r3, r4, pc}\n    cmp r0, #2\n    blo _0225ED34\n    add r0, r1, #2\n    ldrh r0, [r4, r0]\n    add r2, sp, #0\n    mov r3, sp\n    strh r0, [r2]\n    add r0, r1, #4\n    ldrh r0, [r4, r0]\n    sub r3, r3, #4\n    strh r0, [r2, #2]\n    ldrh r1, [r2]\n    add r0, r4, #0\n    add r0, #0x20\n    strh r1, [r3]\n    ldrh r1, [r2, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov91_0225EDC8\n    ldr r0, _0225ED64 ; =0x000086EC\n    ldrh r1, [r4, r0]\n    sub r1, r1, #1\n    lsl r1, r1, #3\n    add r3, r4, r1\n    add r1, r0, #2\n    ldrh r2, [r3, r1]\n    add r1, sp, #0\n    add r0, r0, #4\n    strh r2, [r1]\n    ldrh r0, [r3, r0]\n    mov r3, sp\n    sub r3, r3, #4\n    strh r0, [r1, #2]\n    ldrh r2, [r1]\n    add r4, #0x20\n    add r0, r4, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov91_0225EDC8\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _0225ED68 ; =gSystem + 0x40\n    mov r3, sp\n    ldrh r2, [r0, #0x20]\n    add r1, sp, #0\n    sub r3, r3, #4\n    strh r2, [r1]\n    ldrh r0, [r0, #0x22]\n    add r4, #0x20\n    strh r0, [r1, #2]\n    ldrh r2, [r1]\n    add r0, r4, #0\n    strh r2, [r3]\n    ldrh r1, [r1, #2]\n    strh r1, [r3, #2]\n    ldr r1, [r3]\n    bl ov91_0225EDC8\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0225ED5C: .word 0x00008544\n    _0225ED60: .word 0x000021A8\n    _0225ED64: .word 0x000086EC\n    _0225ED68: .word gSystem + 0x40"
    );
    #endif
}

void ov91_0225ED6C(void) {
    /* Original at 0x0225ED6C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, [r0, #0x48]\n    cmp r0, #2\n    bhs _0225ED78\n    mov r0, #0\n    pop {r3, pc}\n    ldr r1, _0225EDA8 ; =gSystem + 0x40\n    mov r0, #0x80\n    ldrh r2, [r1, #0x20]\n    ldrh r1, [r1, #0x22]\n    sub r3, r0, r2\n    sub r0, #0xe0\n    sub r2, r0, r1\n    add r1, r3, #0\n    add r0, r2, #0\n    mul r1, r3\n    mul r0, r2\n    add r0, r1, r0\n    lsl r0, r0, #0xc\n    bl FX_Sqrt\n    asr r1, r0, #0xc\n    ldr r0, _0225EDAC ; =0x0000011E\n    cmp r1, r0\n    bgt _0225EDA2\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _0225EDA8: .word gSystem + 0x40\n    _0225EDAC: .word 0x0000011E"
    );
    #endif
}

void ov91_0225EDB0(void) {
    memset(0, 0, 0x20);
}

void ov91_0225EDC8(void) {
    /* Original at 0x0225EDC8 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldrh r1, [r4, #0x26]\n    add r1, r1, #1\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1d\n    sub r2, r2, r3\n    mov r1, #0x1d\n    ror r2, r1\n    ldrh r1, [r4, #0x24]\n    add r2, r3, r2\n    cmp r2, r1\n    bne _0225EDEC\n    add r1, sp, #0\n    bl ov91_0225EE18\n    ldrh r0, [r4, #0x26]\n    lsl r0, r0, #2\n    add r2, r4, r0\n    add r0, sp, #0x10\n    ldrh r1, [r0, #4]\n    strh r1, [r2, #4]\n    ldrh r0, [r0, #6]\n    strh r0, [r2, #6]\n    ldrh r0, [r4, #0x26]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1d\n    sub r1, r1, r2\n    mov r0, #0x1d\n    ror r1, r0\n    add r0, r2, r1\n    strh r0, [r4, #0x26]\n    add sp, #4\n    pop {r3, r4}\n    pop {r3}\n    add sp, #0x10\n    bx r3"
    );
    #endif
}

void ov91_0225EE18(void) {
    /* Original at 0x0225EE18 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r3, [r0, #0x24]\n    ldrh r2, [r0, #0x26]\n    cmp r2, r3\n    bne _0225EE24\n    mov r0, #0\n    bx lr\n    lsl r2, r3, #2\n    add r3, r0, r2\n    ldrh r2, [r3, #4]\n    strh r2, [r1]\n    ldrh r2, [r3, #6]\n    strh r2, [r1, #2]\n    ldrh r1, [r0, #0x24]\n    add r1, r1, #1\n    lsr r3, r1, #0x1f\n    lsl r2, r1, #0x1d\n    sub r2, r2, r3\n    mov r1, #0x1d\n    ror r2, r1\n    add r1, r3, r2\n    strh r1, [r0, #0x24]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov91_0225EE48(void) {
    /* Original at 0x0225EE48 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r3, [r0, #0x24]\n    ldrh r2, [r0, #0x26]\n    cmp r2, r3\n    bne _0225EE54\n    mov r0, #0\n    bx lr\n    lsl r2, r3, #2\n    add r2, r0, r2\n    ldrh r0, [r2, #4]\n    strh r0, [r1]\n    ldrh r0, [r2, #6]\n    strh r0, [r1, #2]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov91_0225EE64(void) {
    /* Original at 0x0225EE64 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r3, [r0, #0x26]\n    ldrh r2, [r0, #0x24]\n    cmp r3, r2\n    bne _0225EE70\n    mov r0, #0\n    bx lr\n    sub r2, r3, #1\n    bpl _0225EE76\n    add r2, #8\n    lsl r2, r2, #2\n    add r2, r0, r2\n    ldrh r0, [r2, #4]\n    strh r0, [r1]\n    ldrh r0, [r2, #6]\n    strh r0, [r1, #2]\n    mov r0, #1\n    bx lr"
    );
    #endif
}

void ov91_0225EE88(void) {
    /* Original at 0x0225EE88 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r2, [r0, #0x26]\n    ldrh r1, [r0, #0x24]\n    cmp r1, r2\n    bls _0225EE98\n    mov r0, #8\n    sub r0, r0, r1\n    add r0, r0, r2\n    bx lr\n    sub r0, r2, r1\n    bx lr"
    );
    #endif
}

void ov91_0225EE9C(void) {
    /* Original at 0x0225EE9C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4, #0x20]\n    add r0, r4, #0\n    add r0, #0x20\n    bl ov91_0225EDB0\n    ldr r0, _0225EEB8 ; =0x00008544\n    add r0, r4, r0\n    bl ov91_02260D00\n    pop {r4, pc}\n    nop\n    _0225EEB8: .word 0x00008544"
    );
    #endif
}

void ov91_0225EEBC(void) {
    ov91_0225F05C(0x10, 0);
}

void ov91_0225EED0(void) {
    /* Original at 0x0225EED0 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    add r6, r2, #0\n    add r4, r1, #0\n    add r5, r0, #0\n    add r2, r3, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    add r3, sp, #0x18\n    bl ov91_0225F05C\n    add r2, sp, #0x30\n    ldrh r2, [r2, #0x10]\n    add r0, r4, #0\n    add r1, r6, #0\n    add r3, sp, #0\n    bl ov91_0225F05C\n    add r2, r5, #0\n    add r3, sp, #0x18\n    add r2, #0x18\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r3, sp, #0x18\n    add r2, r5, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r1, [sp]\n    ldr r0, [sp, #0x18]\n    sub r0, r1, r0\n    str r0, [r5, #0x30]\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0x20]\n    sub r0, r1, r0\n    str r0, [r5, #0x38]\n    ldr r1, [sp, #0x10]\n    ldr r0, [sp, #0x28]\n    sub r0, r1, r0\n    str r0, [r5, #0x40]\n    ldr r1, [sp, #0x14]\n    ldr r0, [sp, #0x2c]\n    sub r0, r1, r0\n    str r0, [r5, #0x44]\n    ldr r2, [sp, #4]\n    ldr r0, _0225EF6C ; =0x0000FFFF\n    ldr r3, [sp, #0x1c]\n    add r0, r2, r0\n    sub r1, r0, r3\n    sub r0, r2, r3\n    cmp r0, r1\n    bge _0225EF4A\n    str r0, [r5, #0x34]\n    b _0225EF4C\n    str r1, [r5, #0x34]\n    ldr r2, [sp, #0xc]\n    ldr r0, _0225EF6C ; =0x0000FFFF\n    ldr r3, [sp, #0x24]\n    add r0, r2, r0\n    sub r1, r0, r3\n    sub r0, r2, r3\n    cmp r0, r1\n    bge _0225EF60\n    str r0, [r5, #0x3c]\n    b _0225EF62\n    str r1, [r5, #0x3c]\n    mov r0, #0\n    str r0, [r5, #0x48]\n    add sp, #0x30\n    pop {r4, r5, r6, pc}\n    nop\n    _0225EF6C: .word 0x0000FFFF"
    );
    #endif
}

void ov91_0225EF70(void) {
    /* Original at 0x0225EF70 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r1, [r0, #0x48]\n    cmp r1, #0x10\n    blt _0225EF7E\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    add r2, r1, #1\n    str r2, [r0, #0x48]\n    ldr r1, [r0, #0x30]\n    ldr r3, [r0, #0x18]\n    mul r2, r1\n    asr r1, r2, #3\n    lsr r1, r1, #0x1c\n    add r1, r2, r1\n    asr r1, r1, #4\n    add r1, r3, r1\n    str r1, [r0]\n    ldr r2, [r0, #0x34]\n    ldr r1, [r0, #0x48]\n    add r3, r2, #0\n    mul r3, r1\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    ldr r4, [r0, #0x1c]\n    asr r1, r1, #4\n    add r1, r4, r1\n    str r1, [r0, #4]\n    ldr r2, [r0, #0x38]\n    ldr r1, [r0, #0x48]\n    add r3, r2, #0\n    mul r3, r1\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    ldr r4, [r0, #0x20]\n    asr r1, r1, #4\n    add r1, r4, r1\n    str r1, [r0, #8]\n    ldr r2, [r0, #0x3c]\n    ldr r1, [r0, #0x48]\n    add r3, r2, #0\n    mul r3, r1\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    ldr r4, [r0, #0x24]\n    asr r1, r1, #4\n    add r1, r4, r1\n    str r1, [r0, #0xc]\n    ldr r2, [r0, #0x40]\n    ldr r1, [r0, #0x48]\n    add r3, r2, #0\n    mul r3, r1\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    ldr r4, [r0, #0x28]\n    asr r1, r1, #4\n    add r1, r4, r1\n    str r1, [r0, #0x10]\n    ldr r2, [r0, #0x44]\n    ldr r1, [r0, #0x48]\n    add r3, r2, #0\n    mul r3, r1\n    asr r1, r3, #3\n    lsr r1, r1, #0x1c\n    add r1, r3, r1\n    ldr r4, [r0, #0x2c]\n    asr r1, r1, #4\n    add r1, r4, r1\n    str r1, [r0, #0x14]\n    mov r0, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov91_0225F008(void) {
    ov91_0225F010();
}

void ov91_0225F010(void) {
    /* Original at 0x0225F010 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4, #4]\n    add r5, r0, #0\n    ldr r0, _0225F054 ; =0x000019CC\n    lsl r1, r1, #0x10\n    add r0, r5, r0\n    lsr r1, r1, #0x10\n    bl ov91_0225E1E0\n    ldr r0, _0225F058 ; =0x00001AB4\n    ldr r1, [r4, #8]\n    add r0, r5, r0\n    bl ov91_0226137C\n    ldr r1, [r4, #0xc]\n    ldr r0, _0225F058 ; =0x00001AB4\n    lsl r1, r1, #0x10\n    add r0, r5, r0\n    lsr r1, r1, #0x10\n    bl ov91_02261384\n    ldr r0, _0225F054 ; =0x000019CC\n    ldr r1, [r4, #0x10]\n    add r0, r5, r0\n    bl ov91_0225E1E4\n    ldr r0, _0225F054 ; =0x000019CC\n    ldr r1, [r4, #0x14]\n    add r0, r5, r0\n    bl ov91_0225E09C\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F054: .word 0x000019CC\n    _0225F058: .word 0x00001AB4"
    );
    #endif
}

void ov91_0225F05C(void) {
    /* Original at 0x0225F05C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r2, #0\n    add r7, r1, #0\n    add r4, r3, #0\n    cmp r6, r0\n    blo _0225F070\n    bl GF_AssertFail\n    mov r0, #0x18\n    ldr r1, [r5, #4]\n    mul r0, r6\n    add r3, r1, r0\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r4, #4]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [r4, #4]\n    ldr r0, [r4, #0xc]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [r4, #0xc]\n    ldrb r0, [r7]\n    cmp r0, #0\n    beq _0225F0B2\n    add r1, r6, #1\n    mov r0, #6\n    sub r2, r0, r1\n    bpl _0225F0A6\n    mov r2, #0\n    mov r0, #0x18\n    ldr r1, [r5, #4]\n    mul r0, r2\n    add r0, r1, r0\n    ldr r0, [r0, #0x14]\n    str r0, [r4, #0x14]\n    ldrb r0, [r7, #1]\n    cmp r0, #0\n    beq _0225F0BE\n    ldr r0, [r4, #4]\n    neg r0, r0\n    str r0, [r4, #4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225F0C0(void) {
    /* Original at 0x0225F0C0 */
    /* Requires manual decompilation - 132 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    add r4, r1, #0\n    add r6, r2, #0\n    mov r1, #0\n    mov r2, #0x40\n    add r5, r0, #0\n    bl memset\n    mov r0, #0xc8\n    add r1, r6, #0\n    bl NARC_New\n    mov r1, #0x78\n    add r7, r0, #0\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    add r1, #0xd0\n    ldr r0, [r4, r1]\n    add r1, r7, #0\n    mov r2, #0x15\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r5]\n    mov r1, #0x78\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    add r1, #0xd4\n    ldr r0, [r4, r1]\n    add r1, r7, #0\n    mov r2, #0x14\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    str r0, [r5, #4]\n    mov r1, #0x78\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    add r1, #0xd8\n    ldr r0, [r4, r1]\n    add r1, r7, #0\n    mov r2, #0x16\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #8]\n    mov r1, #0x78\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    add r1, #0xdc\n    ldr r0, [r4, r1]\n    add r1, r7, #0\n    mov r2, #0x17\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #0xc]\n    ldr r0, [r5]\n    bl sub_0200AE18\n    cmp r0, #0\n    bne _0225F154\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _0225F162\n    bl GF_AssertFail\n    ldr r0, [r5]\n    bl sub_0200A740\n    ldr r0, [r5, #4]\n    bl sub_0200A740\n    mov r1, #0x78\n    add r0, r1, #0\n    add r2, r1, #0\n    str r1, [sp]\n    sub r0, #0x79\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r2, #0xd0\n    ldr r2, [r4, r2]\n    add r3, r1, #0\n    str r2, [sp, #0x14]\n    add r2, r1, #0\n    add r2, #0xd4\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x18]\n    add r2, r1, #0\n    add r2, #0xd8\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x1c]\n    add r2, r1, #0\n    add r2, #0xdc\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r5, #0\n    add r0, #0x10\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r4, #0x1c]\n    str r0, [sp, #0x2c]\n    add r0, r5, #0\n    add r0, #0x10\n    str r0, [sp, #0x30]\n    mov r0, #2\n    lsl r0, r0, #0x12\n    str r0, [sp, #0x34]\n    mov r0, #0x9e\n    lsl r0, r0, #0xe\n    str r0, [sp, #0x38]\n    mov r0, #0\n    str r0, [sp, #0x40]\n    mov r0, #2\n    str r0, [sp, #0x44]\n    add r0, sp, #0x2c\n    str r6, [sp, #0x48]\n    bl Sprite_Create\n    mov r1, #0\n    str r0, [r5, #0x34]\n    bl Sprite_SetDrawFlag\n    add r0, r7, #0\n    bl NARC_Delete\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0225F1E8(void) {
    /* Original at 0x0225F1E8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x34]\n    add r4, r1, #0\n    bl Sprite_Delete\n    ldr r0, [r5]\n    bl sub_0200AEB0\n    ldr r0, [r5, #4]\n    bl sub_0200B0A8\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5, #4]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r5, #8]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5, #0xc]\n    bl DestroySingle2DGfxResObj\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0x40\n    bl memset\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_0225F23C(void) {
    /* Original at 0x0225F23C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    mov r1, #1\n    add r2, #0x38\n    strb r1, [r2]\n    add r2, r0, #0\n    mov r3, #0\n    add r2, #0x3a\n    strb r3, [r2]\n    add r2, r0, #0\n    add r2, #0x39\n    strb r3, [r2]\n    ldr r3, _0225F258 ; =Sprite_SetDrawFlag\n    ldr r0, [r0, #0x34]\n    bx r3\n    _0225F258: .word Sprite_SetDrawFlag"
    );
    #endif
}

void ov91_0225F25C(void) {
    /* Original at 0x0225F25C */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, #0x3a\n    ldrb r0, [r0]\n    add r5, r1, #0\n    cmp r0, #3\n    bhi _0225F36A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225F278: ; jump table\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl Sprite_SetAnimationFrame\n    ldr r0, _0225F37C ; =0x00008544\n    add r0, r5, r0\n    bl ov91_02260CB4\n    ldr r0, _0225F37C ; =0x00008544\n    mov r1, #0x80\n    add r0, r5, r0\n    mov r2, #0xb1\n    bl ov91_02260CE0\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x3b\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x3a\n    ldrb r0, [r0]\n    add r4, #0x3a\n    add r0, r0, #1\n    strb r0, [r4]\n    b _0225F36A\n    mov r1, #2\n    ldr r0, [r4, #0x34]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    ldr r0, [r4, #0x34]\n    bl Sprite_GetAnimationFrame\n    add r6, r0, #0\n    cmp r6, #0xa\n    beq _0225F2CE\n    cmp r6, #0xb\n    beq _0225F2FA\n    b _0225F32E\n    add r0, r4, #0\n    add r0, #0x3b\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0225F32E\n    mov r0, #0x40\n    str r0, [sp]\n    mov r0, #2\n    mov r1, #0x80\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0x60\n    add r3, r1, #0\n    bl ov91_0225D500\n    ldr r0, _0225F380 ; =0x0000064F\n    bl PlaySE\n    mov r0, #1\n    add r4, #0x3b\n    strb r0, [r4]\n    b _0225F32E\n    add r0, r4, #0\n    add r0, #0x39\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x39\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x39\n    ldrb r0, [r0]\n    cmp r0, #2\n    blo _0225F31A\n    mov r0, #3\n    add r4, #0x3a\n    strb r0, [r4]\n    b _0225F326\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x3a\n    strb r1, [r0]\n    mov r0, #0x10\n    str r0, [r4, #0x3c]\n    ldr r0, _0225F37C ; =0x00008544\n    add r0, r5, r0\n    bl ov91_02260D00\n    ldr r2, _0225F384 ; =ov91_02261C84\n    lsl r3, r6, #1\n    ldr r0, _0225F37C ; =0x00008544\n    ldrsh r2, [r2, r3]\n    add r0, r5, r0\n    mov r1, #0x80\n    bl ov91_02260CE0\n    b _0225F36A\n    ldr r0, [r4, #0x3c]\n    sub r0, r0, #1\n    str r0, [r4, #0x3c]\n    cmp r0, #0\n    bgt _0225F36A\n    mov r0, #0\n    add r4, #0x3a\n    strb r0, [r4]\n    b _0225F36A\n    add r0, r5, #0\n    bl ov91_0225E6D0\n    cmp r0, #0\n    bne _0225F36A\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    bl ov91_0225E40C\n    add r0, r5, #0\n    bl ov91_0225E62C\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0225F37C: .word 0x00008544\n    _0225F380: .word 0x0000064F\n    _0225F384: .word ov91_02261C84"
    );
    #endif
}

void ov91_0225F388(void) {
    /* Original at 0x0225F388 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    mov r2, #0x18\n    mov r1, #0\n    strb r1, [r3]\n    add r3, r3, #1\n    sub r2, r2, #1\n    bne _0225F38E\n    ldr r1, _0225F39C ; =0x0000FFFF\n    str r1, [r0, #0x14]\n    bx lr\n    _0225F39C: .word 0x0000FFFF"
    );
    #endif
}

void ov91_0225F3A0(void) {
    /* Original at 0x0225F3A0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    lsl r3, r2, #2\n    str r1, [r0, r3]\n    mov r3, #1\n    ldr r4, [r0, #0x10]\n    lsl r3, r2\n    orr r3, r4\n    str r3, [r0, #0x10]\n    cmp r1, #0\n    beq _0225F3CC\n    ldr r4, [r0, #0x14]\n    ldr r3, _0225F3D0 ; =0x0000FFFF\n    cmp r4, r3\n    beq _0225F3CA\n    lsl r3, r4, #2\n    ldr r3, [r0, r3]\n    cmp r3, r1\n    bhs _0225F3CC\n    str r2, [r0, #0x14]\n    pop {r3, r4}\n    bx lr\n    str r2, [r0, #0x14]\n    pop {r3, r4}\n    bx lr\n    _0225F3D0: .word 0x0000FFFF"
    );
    #endif
}

void ov91_0225F3D4(void) {
    /* Original at 0x0225F3D4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0, #0x10]\n    ldr r1, _0225F3E0 ; =0x0000FFFF\n    str r1, [r0, #0x14]\n    bx lr\n    nop\n    _0225F3E0: .word 0x0000FFFF"
    );
    #endif
}

void ov91_0225F3E4(void) {
    /* Original at 0x0225F3E4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov91_0225F3E8(void) {
    /* Original at 0x0225F3E8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r4, #0\n    ldr r5, [r0, #0x10]\n    add r3, r4, #0\n    mov r0, #1\n    add r2, r0, #0\n    lsl r2, r3\n    tst r2, r5\n    beq _0225F3FC\n    add r4, r4, #1\n    add r3, r3, #1\n    cmp r3, #4\n    blt _0225F3F2\n    cmp r1, r4\n    bhi _0225F40C\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    mov r0, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov91_0225F414(void) {
    GfGfx_SetBanks(5);
}

void ov91_0225F434(void) {
    /* Original at 0x0225F434 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _0225F4A4 ; =0x04000008\n    mov r1, #3\n    ldrh r2, [r0]\n    bic r2, r1\n    mov r1, #2\n    orr r1, r2\n    strh r1, [r0]\n    add r0, #0x58\n    ldrh r2, [r0]\n    ldr r1, _0225F4A8 ; =0xFFFFCFFD\n    and r2, r1\n    strh r2, [r0]\n    ldrh r3, [r0]\n    add r2, r1, #2\n    and r3, r2\n    mov r2, #0x10\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r3, [r0]\n    ldr r2, _0225F4AC ; =0x0000CFFB\n    and r2, r3\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrh r3, [r0]\n    add r1, r1, #2\n    and r3, r2\n    mov r2, #8\n    orr r2, r3\n    strh r2, [r0]\n    ldrh r2, [r0]\n    and r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl G3X_SetFog\n    mov r1, #0\n    ldr r0, _0225F4B0 ; =0x00006B5A\n    ldr r2, _0225F4B4 ; =0x00007FFF\n    mov r3, #0x3f\n    str r1, [sp]\n    bl G3X_SetClearColor\n    ldr r1, _0225F4B8 ; =0xBFFF0000\n    ldr r0, _0225F4BC ; =0x04000580\n    str r1, [r0]\n    pop {r3, pc}\n    _0225F4A4: .word 0x04000008\n    _0225F4A8: .word 0xFFFFCFFD\n    _0225F4AC: .word 0x0000CFFB\n    _0225F4B0: .word 0x00006B5A\n    _0225F4B4: .word 0x00007FFF\n    _0225F4B8: .word 0xBFFF0000\n    _0225F4BC: .word 0x04000580"
    );
    #endif
}

void ov91_0225F4C0(void) {
    /* Original at 0x0225F4C0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, _0225F4F4 ; =ov91_0225F434\n    add r6, r1, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    mov r1, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #1\n    add r3, r1, #0\n    bl GF_3DVramMan_Create\n    str r0, [r5, #0x18]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    add r3, r4, #0\n    bl ov91_0225FD2C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225F4F4: .word ov91_0225F434"
    );
    #endif
}

void ov91_0225F4F8(void) {
    ov91_0225FDC8();
    GF_3DVramMan_Delete(*((u32*)(r4 + 0x18)));
}

void ov91_0225F508(void) {
    /* Original at 0x0225F508 */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0225F638 ; =0x000086CC\n    mov r2, #0x20\n    add r0, r5, r0\n    add r4, r1, #0\n    bl HeapExp_FndInitAllocator\n    bl ov91_0225F414\n    ldr r0, _0225F63C ; =0x00001AB4\n    ldr r1, [r5, #0x10]\n    ldr r2, [r5, #0x14]\n    add r0, r5, r0\n    add r3, r4, #0\n    bl ov91_0225F4C0\n    ldr r0, _0225F63C ; =0x00001AB4\n    add r1, r4, #0\n    add r0, r5, r0\n    bl ov91_0225F878\n    ldr r0, _0225F63C ; =0x00001AB4\n    add r1, r4, #0\n    add r0, r5, r0\n    bl ov91_0225FA9C\n    ldr r0, _0225F63C ; =0x00001AB4\n    add r1, r4, #0\n    add r0, r5, r0\n    bl ov91_0225FCD8\n    mov r0, #0xbd\n    add r1, r4, #0\n    bl NARC_New\n    add r6, r0, #0\n    ldr r0, _0225F63C ; =0x00001AB4\n    add r1, r6, #0\n    add r0, r5, r0\n    add r2, r4, #0\n    bl ov91_0225FB80\n    ldr r0, [r5, #0x14]\n    ldr r1, _0225F63C ; =0x00001AB4\n    str r0, [sp]\n    ldr r0, _0225F638 ; =0x000086CC\n    str r4, [sp, #4]\n    add r0, r5, r0\n    str r0, [sp, #8]\n    ldr r0, _0225F640 ; =0x00001C54\n    ldr r3, [r5, #0x10]\n    add r0, r5, r0\n    add r1, r5, r1\n    add r2, r6, #0\n    bl ov91_02260F50\n    ldr r0, _0225F644 ; =0x00001F74\n    ldr r3, _0225F638 ; =0x000086CC\n    add r0, r5, r0\n    add r1, r6, #0\n    add r2, r4, #0\n    add r3, r5, r3\n    bl ov91_0225FF00\n    ldr r0, _0225F63C ; =0x00001AB4\n    add r1, r6, #0\n    add r0, r5, r0\n    add r2, r4, #0\n    bl ov91_022604F4\n    ldr r0, _0225F63C ; =0x00001AB4\n    ldr r1, _0225F648 ; =0x00008544\n    ldr r2, [r5, #0x14]\n    add r0, r5, r0\n    add r1, r5, r1\n    add r3, r4, #0\n    bl ov91_02260C48\n    ldr r0, _0225F63C ; =0x00001AB4\n    ldr r1, _0225F64C ; =0x0000854C\n    ldr r2, [r5, #0x14]\n    add r0, r5, r0\n    add r1, r5, r1\n    add r3, r4, #0\n    bl ov91_02260D14\n    ldr r0, _0225F63C ; =0x00001AB4\n    ldr r2, [r5, #0x14]\n    add r0, r5, r0\n    add r1, r6, #0\n    add r3, r4, #0\n    bl ov91_0225FDE0\n    ldr r0, [r5, #0x14]\n    ldr r1, _0225F63C ; =0x00001AB4\n    str r0, [sp]\n    str r6, [sp, #4]\n    str r4, [sp, #8]\n    ldr r2, _0225F650 ; =0x0000877C\n    ldr r0, _0225F654 ; =0x00001F38\n    ldr r2, [r5, r2]\n    ldr r3, [r5, #0x10]\n    add r0, r5, r0\n    add r1, r5, r1\n    bl ov91_0225D8F0\n    ldr r0, _0225F63C ; =0x00001AB4\n    ldr r1, [r5, #0x10]\n    ldr r2, [r5, #0x14]\n    add r0, r5, r0\n    add r3, r4, #0\n    bl ov91_0225DBD0\n    str r4, [sp]\n    ldr r0, _0225F658 ; =0x00001E38\n    ldr r1, _0225F63C ; =0x00001AB4\n    ldr r2, [r5, #0x10]\n    ldr r3, [r5, #0x14]\n    add r0, r5, r0\n    add r1, r5, r1\n    bl ov91_0225D628\n    ldr r1, [r5, #0x14]\n    ldr r0, _0225F65C ; =0x000021A8\n    lsl r1, r1, #0x18\n    add r0, r5, r0\n    lsr r1, r1, #0x18\n    bl ov91_022613AC\n    ldr r0, _0225F660 ; =0x0000862C\n    ldr r1, _0225F63C ; =0x00001AB4\n    add r0, r5, r0\n    add r1, r5, r1\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov91_02261580\n    add r0, r6, #0\n    bl NARC_Delete\n    ldr r0, _0225F664 ; =0x00001AD0\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    bl ov90_02258BD4\n    ldr r1, _0225F668 ; =0x000021A4\n    str r0, [r5, r1]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0225F638: .word 0x000086CC\n    _0225F63C: .word 0x00001AB4\n    _0225F640: .word 0x00001C54\n    _0225F644: .word 0x00001F74\n    _0225F648: .word 0x00008544\n    _0225F64C: .word 0x0000854C\n    _0225F650: .word 0x0000877C\n    _0225F654: .word 0x00001F38\n    _0225F658: .word 0x00001E38\n    _0225F65C: .word 0x000021A8\n    _0225F660: .word 0x0000862C\n    _0225F664: .word 0x00001AD0\n    _0225F668: .word 0x000021A4"
    );
    #endif
}

void ov91_0225F66C(void) {
    /* Original at 0x0225F66C */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0225F71C ; =0x0000862C\n    ldr r1, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_02261790\n    ldr r0, _0225F724 ; =0x00001E38\n    ldr r1, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_0225D67C\n    ldr r0, _0225F720 ; =0x00001AB4\n    ldr r1, [r4, #0x10]\n    add r0, r4, r0\n    bl ov91_0225DBE0\n    ldr r0, _0225F728 ; =0x00001F38\n    ldr r1, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_0225DB0C\n    ldr r0, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    bl ov91_0225FEFC\n    ldr r0, _0225F720 ; =0x00001AB4\n    ldr r1, _0225F72C ; =0x0000854C\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_02260D80\n    ldr r0, _0225F730 ; =0x00008544\n    add r0, r4, r0\n    bl ov91_02260CA8\n    ldr r0, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    bl ov91_0226066C\n    ldr r0, _0225F734 ; =0x00001F74\n    ldr r1, _0225F738 ; =0x000086CC\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov91_022600FC\n    ldr r0, _0225F73C ; =0x00001C54\n    ldr r1, _0225F720 ; =0x00001AB4\n    ldr r2, _0225F738 ; =0x000086CC\n    add r0, r4, r0\n    add r1, r4, r1\n    add r2, r4, r2\n    bl ov91_02261070\n    ldr r0, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    bl ov91_0225FC84\n    ldr r0, _0225F740 ; =0x000021A4\n    ldr r0, [r4, r0]\n    bl ov90_02258C38\n    ldr r0, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    bl ov91_0225FA60\n    ldr r0, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    bl ov91_0225FB48\n    ldr r0, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    bl ov91_0225FD0C\n    ldr r0, _0225F720 ; =0x00001AB4\n    add r0, r4, r0\n    bl ov91_0225F4F8\n    ldr r0, _0225F744 ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, _0225F748 ; =0x04001050\n    strh r1, [r0]\n    pop {r4, pc}\n    nop\n    _0225F71C: .word 0x0000862C\n    _0225F720: .word 0x00001AB4\n    _0225F724: .word 0x00001E38\n    _0225F728: .word 0x00001F38\n    _0225F72C: .word 0x0000854C\n    _0225F730: .word 0x00008544\n    _0225F734: .word 0x00001F74\n    _0225F738: .word 0x000086CC\n    _0225F73C: .word 0x00001C54\n    _0225F740: .word 0x000021A4\n    _0225F744: .word 0x04000050\n    _0225F748: .word 0x04001050"
    );
    #endif
}

void ov91_0225F74C(void) {
    /* Original at 0x0225F74C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x13\n    ldr r1, _0225F798 ; =0x000019CC\n    lsl r0, r0, #6\n    ldr r2, [r5]\n    add r0, r4, r0\n    add r1, r5, r1\n    bl ov91_0226014C\n    mov r0, #0x13\n    ldr r1, _0225F798 ; =0x000019CC\n    lsl r0, r0, #6\n    ldr r2, [r5]\n    add r0, r4, r0\n    add r1, r5, r1\n    bl ov91_022601AC\n    ldr r0, _0225F79C ; =0x00006A90\n    add r0, r4, r0\n    bl ov91_02260CC8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov91_0225F7A8\n    ldr r0, _0225F7A0 ; =0x000006F4\n    add r1, r4, #0\n    add r0, r4, r0\n    bl ov91_022613C8\n    ldr r0, _0225F7A4 ; =0x00006B78\n    add r0, r4, r0\n    bl ov91_02261928\n    pop {r3, r4, r5, pc}\n    nop\n    _0225F798: .word 0x000019CC\n    _0225F79C: .word 0x00006A90\n    _0225F7A0: .word 0x000006F4\n    _0225F7A4: .word 0x00006B78"
    );
    #endif
}

void ov91_0225F7A8(void) {
    /* Original at 0x0225F7A8 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0225F868 ; =0x00006A98\n    add r4, r1, #0\n    add r0, r4, r0\n    bl ov91_02260D98\n    mov r0, #0xe1\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov91_0225D6A0\n    bl Thunk_G3X_Reset\n    add r0, r4, #0\n    bl ov91_0225FDD8\n    mov r0, #0\n    ldr r2, _0225F86C ; =0xFFFFF000\n    add r1, r0, #0\n    add r3, r0, #0\n    bl NNS_G3dGlbLightVector\n    ldr r1, _0225F870 ; =0x00007FFF\n    mov r0, #0\n    bl NNS_G3dGlbLightColor\n    ldr r0, _0225F870 ; =0x00007FFF\n    mov r2, #0\n    add r1, r0, #0\n    bl NNS_G3dGlbMaterialColorDiffAmb\n    ldr r0, _0225F870 ; =0x00007FFF\n    mov r2, #0\n    add r1, r0, #0\n    bl NNS_G3dGlbMaterialColorSpecEmi\n    mov r1, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    add r0, r4, r0\n    bl ov91_022610A8\n    mov r2, #1\n    mov r0, #0x12\n    add r1, sp, #8\n    str r2, [sp, #8]\n    bl NNS_G3dGeBufferOP_N\n    mov r1, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0x13\n    ldr r1, _0225F874 ; =0x000019CC\n    lsl r0, r0, #6\n    add r0, r4, r0\n    add r1, r5, r1\n    bl ov91_0226023C\n    mov r2, #1\n    mov r0, #0x12\n    add r1, sp, #4\n    str r2, [sp, #4]\n    bl NNS_G3dGeBufferOP_N\n    mov r1, #0\n    mov r0, #0x11\n    add r2, r1, #0\n    bl NNS_G3dGeBufferOP_N\n    ldr r1, [r5, #0x10]\n    add r0, r4, #0\n    bl ov91_0226078C\n    mov r2, #1\n    mov r0, #0x12\n    add r1, sp, #0\n    str r2, [sp]\n    bl NNS_G3dGeBufferOP_N\n    mov r0, #0\n    add r1, r0, #0\n    bl RequestSwap3DBuffers\n    ldr r0, [r4, #0x1c]\n    bl SpriteList_RenderAndAnimateSprites\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0225F868: .word 0x00006A98\n    _0225F86C: .word 0xFFFFF000\n    _0225F870: .word 0x00007FFF\n    _0225F874: .word 0x000019CC"
    );
    #endif
}

void ov91_0225F878(void) {
    /* Original at 0x0225F878 */
    /* Requires manual decompilation - 205 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0xc0\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl BgConfig_Alloc\n    add r3, sp, #0xb0\n    ldr r6, _0225FA44 ; =ov91_02261C74\n    str r0, [r5]\n    add r2, r3, #0\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r6, _0225FA48 ; =ov91_02261C9C\n    add r3, sp, #0x94\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #1\n    str r0, [r3]\n    ldr r0, [r5]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r4, #0\n    bl BG_ClearCharDataRange\n    ldr r0, [r5]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r6, _0225FA4C ; =ov91_02261CB8\n    add r3, sp, #0x78\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #2\n    str r0, [r3]\n    ldr r0, [r5]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r4, #0\n    bl BG_ClearCharDataRange\n    ldr r0, [r5]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r6, _0225FA50 ; =ov91_02261CD4\n    add r3, sp, #0x5c\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #4\n    str r0, [r3]\n    ldr r0, [r5]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r4, #0\n    bl BG_ClearCharDataRange\n    ldr r0, [r5]\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r6, _0225FA54 ; =ov91_02261CF0\n    add r3, sp, #0x40\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #5\n    str r0, [r3]\n    ldr r0, [r5]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #5\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r4, #0\n    bl BG_ClearCharDataRange\n    ldr r0, [r5]\n    mov r1, #5\n    bl BgClearTilemapBufferAndCommit\n    ldr r6, _0225FA58 ; =ov91_02261D0C\n    add r3, sp, #0x24\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #6\n    str r0, [r3]\n    ldr r0, [r5]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #6\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r4, #0\n    bl BG_ClearCharDataRange\n    ldr r0, [r5]\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    ldr r6, _0225FA5C ; =ov91_02261D28\n    add r3, sp, #8\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #7\n    str r0, [r3]\n    ldr r0, [r5]\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #7\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r4, #0\n    bl BG_ClearCharDataRange\n    ldr r0, [r5]\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0\n    mov r1, #0xa0\n    add r2, r4, #0\n    bl LoadFontPal1\n    mov r0, #0\n    str r0, [sp]\n    str r4, [sp, #4]\n    mov r1, #1\n    ldr r0, [r5]\n    add r2, r1, #0\n    mov r3, #4\n    bl LoadUserFrameGfx1\n    add sp, #0xc0\n    pop {r4, r5, r6, pc}\n    _0225FA44: .word ov91_02261C74\n    _0225FA48: .word ov91_02261C9C\n    _0225FA4C: .word ov91_02261CB8\n    _0225FA50: .word ov91_02261CD4\n    _0225FA54: .word ov91_02261CF0\n    _0225FA58: .word ov91_02261D0C\n    _0225FA5C: .word ov91_02261D28"
    );
    #endif
}

void ov91_0225FA60(void) {
    /* Original at 0x0225FA60 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    mov r1, #4\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    mov r1, #5\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    mov r1, #6\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    mov r1, #7\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4]\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov91_0225FA9C(void) {
    /* Original at 0x0225FA9C */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r7, r0, #0\n    add r6, r1, #0\n    bl NNS_G2dInitOamManagerModule\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x1f\n    str r3, [sp, #0xc]\n    add r2, r0, #0\n    str r6, [sp, #0x10]\n    bl OamManager_Create\n    ldr r4, _0225FB40 ; =ov91_02261C64\n    add r3, sp, #0x14\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r1, _0225FB44 ; =0x00200010\n    add r0, r2, #0\n    add r2, r1, #0\n    str r6, [sp, #0x20]\n    bl ObjCharTransfer_InitEx\n    mov r0, #0x10\n    add r1, r6, #0\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    ldr r1, _0225FB44 ; =0x00200010\n    mov r0, #1\n    bl G2dRenderer_SetObjCharTransferReservedRegion\n    mov r0, #1\n    bl G2dRenderer_SetPlttTransferReservedRegion\n    add r1, r7, #0\n    mov r0, #0x80\n    add r1, #0x20\n    add r2, r6, #0\n    bl G2dRenderer_Init\n    str r0, [r7, #0x1c]\n    add r0, r7, #0\n    mov r2, #2\n    add r0, #0x20\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r4, #0\n    add r5, r7, #0\n    mov r0, #0x10\n    add r1, r4, #0\n    add r2, r6, #0\n    bl Create2DGfxResObjMan\n    mov r1, #0x52\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0225FB16\n    mov r0, #8\n    add r1, r6, #0\n    bl FontSystem_NewInit\n    mov r1, #0x63\n    lsl r1, r1, #2\n    str r0, [r7, r1]\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _0225FB40: .word ov91_02261C64\n    _0225FB44: .word 0x00200010"
    );
    #endif
}

void ov91_0225FB48(void) {
    /* Original at 0x0225FB48 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_020135AC\n    ldr r0, [r5, #0x1c]\n    bl SpriteList_Delete\n    mov r6, #0x52\n    mov r4, #0\n    lsl r6, r6, #2\n    ldr r0, [r5, r6]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _0225FB62\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    bl OamManager_Free\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_0225FB80(void) {
    /* Original at 0x0225FB80 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x2c\n    add r4, r2, #0\n    mov r2, #0xc8\n    add r5, r0, #0\n    str r2, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    add r2, #0x80\n    ldr r0, [r5, r2]\n    mov r2, #2\n    mov r3, #0\n    add r6, r1, #0\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x5f\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0xc8\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    add r1, #0x84\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #3\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #6\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r1, #0xc8\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r4, [sp, #8]\n    add r1, #0x88\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    mov r2, #1\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x61\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r1, #0xc8\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r2, #0\n    str r4, [sp, #8]\n    add r1, #0x8c\n    ldr r0, [r5, r1]\n    add r1, r6, #0\n    add r3, r2, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    mov r1, #0x62\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    bl sub_0200AE18\n    cmp r0, #0\n    bne _0225FC14\n    bl GF_AssertFail\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _0225FC26\n    bl GF_AssertFail\n    mov r0, #0x5f\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl sub_0200A740\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl sub_0200A740\n    mov r1, #0xc8\n    add r0, r1, #0\n    add r2, r1, #0\n    str r1, [sp]\n    sub r0, #0xc9\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r2, #0x80\n    ldr r2, [r5, r2]\n    add r3, r1, #0\n    str r2, [sp, #0x14]\n    add r2, r1, #0\n    add r2, #0x84\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r1, #0\n    add r2, #0x88\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x1c]\n    add r2, r1, #0\n    add r2, #0x8c\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r1, #0\n    add r0, #0x90\n    add r0, r5, r0\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    add sp, #0x2c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov91_0225FC84(void) {
    /* Original at 0x0225FC84 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x5f\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_0200AEB0\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl sub_0200B0A8\n    mov r1, #0x52\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x34\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    mov r1, #0x53\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x34\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    mov r1, #0x15\n    lsl r1, r1, #4\n    ldr r0, [r4, r1]\n    add r1, #0x34\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    mov r1, #0x55\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #0x34\n    ldr r1, [r4, r1]\n    bl DestroySingle2DGfxResObj\n    pop {r4, pc}"
    );
    #endif
}

void ov91_0225FCD8(void) {
    /* Original at 0x0225FCD8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl MessageFormat_New\n    str r0, [r5, #4]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0xe6\n    add r3, r4, #0\n    bl NewMsgDataFromNarc\n    str r0, [r5, #8]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    str r0, [r5, #0xc]\n    mov r0, #0x80\n    add r1, r4, #0\n    bl String_New\n    str r0, [r5, #0x10]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_0225FD0C(void) {
    String_Delete(*((u32*)(r0 + 0x10)));
    String_Delete(*((u32*)(r4 + 0xc)));
    DestroyMsgData(*((u32*)(r4 + 8)));
    MessageFormat_Delete(*((u32*)(r4 + 4)));
}

void ov91_0225FD2C(void) {
    /* Original at 0x0225FD2C */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    add r0, r3, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl Camera_New\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #0\n    add r2, r1, #4\n    str r0, [r5, r2]\n    add r2, r1, #0\n    add r2, #8\n    str r0, [r5, r2]\n    add r2, r1, #0\n    add r2, #0xc\n    str r0, [r5, r2]\n    ldr r3, _0225FDB8 ; =0x0000F112\n    add r2, sp, #0xc\n    strh r3, [r2]\n    ldr r3, _0225FDBC ; =ov91_02261D5C\n    lsl r4, r4, #3\n    lsl r6, r6, #1\n    add r3, r3, r4\n    ldrh r3, [r6, r3]\n    strh r3, [r2, #2]\n    strh r0, [r2, #4]\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    ldr r3, _0225FDC0 ; =0x00000FA4\n    str r0, [sp, #8]\n    add r0, r1, #4\n    ldr r1, _0225FDC4 ; =0x001D9000\n    add r0, r5, r0\n    add r2, sp, #0xc\n    bl Camera_Init_FromTargetDistanceAndAngle\n    mov r1, #0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x18]\n    str r1, [sp, #0x14]\n    str r1, [sp, #0x1c]\n    mov r1, #0x19\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, sp, #0x14\n    bl Camera_SetLookAtCamUp\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl Camera_SetStaticPtr\n    mov r0, #0x32\n    lsl r0, r0, #0xe\n    lsr r2, r0, #0xb\n    mov r1, #0xfa\n    ldr r2, [r5, r2]\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    add sp, #0x20\n    pop {r4, r5, r6, pc}\n    nop\n    _0225FDB8: .word 0x0000F112\n    _0225FDBC: .word ov91_02261D5C\n    _0225FDC0: .word 0x00000FA4\n    _0225FDC4: .word 0x001D9000"
    );
    #endif
}

void ov91_0225FDC8(void) {
    /* Original at 0x0225FDC8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x19\n    lsl r1, r1, #4\n    ldr r3, _0225FDD4 ; =Camera_Delete\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _0225FDD4: .word Camera_Delete"
    );
    #endif
}

void ov91_0225FDD8(void) {
    Camera_PushLookAtToNNSGlb();
}

void ov91_0225FDE0(void) {
    /* Original at 0x0225FDE0 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r4, r3, #0\n    str r0, [sp, #8]\n    add r6, r1, #0\n    str r4, [sp, #0xc]\n    add r7, r2, #0\n    ldr r2, [r5]\n    add r0, r6, #0\n    mov r1, #0xc\n    mov r3, #4\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r6, #0\n    mov r1, #0xe\n    mov r3, #7\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r6, #0\n    mov r1, #0xf\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r6, #0\n    mov r1, #0x10\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r4, [sp, #0xc]\n    ldr r2, [r5]\n    add r0, r6, #0\n    mov r1, #0x11\n    mov r3, #4\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #6\n    lsl r0, r0, #6\n    str r0, [sp]\n    add r0, r6, #0\n    mov r1, #0xd\n    mov r2, #4\n    mov r3, #0\n    str r4, [sp, #4]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #0x20\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0225FEF8 ; =ov91_02261BEC\n    mov r2, #0\n    ldrb r0, [r0, r7]\n    mov r1, #7\n    add r3, r2, #0\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    bl BgTilemapRectChangePalette\n    mov r0, #0x20\n    str r0, [sp]\n    lsl r4, r7, #1\n    str r0, [sp, #4]\n    add r0, r4, #2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r2, #0\n    ldr r0, [r5]\n    mov r1, #6\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    mov r0, #0x20\n    str r0, [sp]\n    mov r2, #0\n    add r4, r4, #1\n    str r0, [sp, #4]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #5\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    mov r0, #0x20\n    str r0, [sp]\n    str r0, [sp, #4]\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r2, #0\n    ldr r0, [r5]\n    mov r1, #4\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    ldr r0, [r5]\n    mov r1, #4\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r5]\n    mov r1, #5\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r5]\n    mov r1, #6\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r5]\n    mov r1, #7\n    bl BgCommitTilemapBufferToVram\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0225FEF8: .word ov91_02261BEC"
    );
    #endif
}

void ov91_0225FEFC(void) {
    /* Original at 0x0225FEFC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov91_0225FF00(void) {
    /* Original at 0x0225FF00 */
    /* Requires manual decompilation - 231 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    str r2, [sp, #0x10]\n    mov r2, #0x23\n    str r1, [sp, #0xc]\n    mov r1, #0\n    lsl r2, r2, #4\n    str r0, [sp, #8]\n    str r3, [sp, #0x14]\n    bl memset\n    mov r1, #0x5a\n    ldr r0, [sp, #8]\n    lsl r1, r1, #2\n    ldr r6, _022600E4 ; =ov91_02261C04\n    mov r7, #0\n    add r4, r0, r1\n    add r5, r0, #0\n    ldrh r2, [r6]\n    ldr r1, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r4, #0\n    bl sub_02018030\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_020181B0\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_020182A0\n    mov r1, #0\n    ldr r2, _022600E8 ; =0xFFEDE000\n    add r0, r5, #0\n    add r3, r1, #0\n    bl sub_020182A8\n    mov r1, #6\n    lsl r1, r1, #0xa\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020182C4\n    add r7, r7, #1\n    add r6, r6, #2\n    add r4, #0x10\n    add r5, #0x78\n    cmp r7, #3\n    blt _0225FF24\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, _022600EC ; =ov91_02261C1C\n    mov r1, #0x66\n    str r0, [sp, #0x28]\n    ldr r0, _022600F0 ; =ov91_0226274C\n    lsl r1, r1, #2\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #8]\n    ldr r6, [sp, #8]\n    add r0, r0, r1\n    str r0, [sp, #0x20]\n    ldr r0, _022600F4 ; =ov91_022621AC\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x10]\n    mov r2, #0x5a\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #8]\n    lsl r2, r2, #2\n    add r2, r1, r2\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x24]\n    ldr r3, [sp, #0x28]\n    ldrb r1, [r1]\n    ldrh r3, [r3]\n    ldr r0, [sp, #0x20]\n    lsl r1, r1, #4\n    add r1, r2, r1\n    ldr r2, [sp, #0xc]\n    bl sub_020180BC\n    ldr r0, [sp, #0x20]\n    mov r1, #0\n    bl sub_02018198\n    ldr r0, [sp, #0x24]\n    mov r5, #0\n    ldrb r0, [r0]\n    lsl r1, r0, #4\n    ldr r0, [sp, #8]\n    add r1, r0, r1\n    mov r0, #0x17\n    lsl r0, r0, #4\n    ldr r4, [r1, r0]\n    cmp r4, #0\n    beq _0225FFC8\n    add r4, #0x40\n    b _0225FFCA\n    add r4, r5, #0\n    cmp r4, #0\n    bne _0225FFD2\n    mov r7, #1\n    b _0225FFE4\n    mov r7, #0\n    b _0225FFE4\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    add r1, r5, #0\n    bl NNS_G3dAnmObjDisableID\n    add r5, r5, #1\n    cmp r7, #0\n    bne _02260004\n    cmp r4, #0\n    beq _02260000\n    ldrb r0, [r4, #1]\n    cmp r5, r0\n    bhs _02260000\n    ldrh r0, [r4, #6]\n    add r1, r4, r0\n    ldrh r0, [r1, #2]\n    add r1, r1, r0\n    lsl r0, r5, #4\n    add r0, r1, r0\n    b _02260006\n    mov r0, #0\n    b _02260006\n    mov r0, #0\n    cmp r0, #0\n    bne _0225FFD6\n    ldr r5, [sp, #0x1c]\n    mov r7, #0\n    cmp r4, #0\n    beq _0226001E\n    add r0, r4, #0\n    add r1, r5, #0\n    bl NNS_G3dGetResDictIdxByName\n    add r1, r0, #0\n    b _02260022\n    mov r1, #0\n    mvn r1, r1\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _02260034\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl NNS_G3dAnmObjEnableID\n    add r7, r7, #1\n    add r5, #0x10\n    cmp r7, #0xf\n    blt _0226000E\n    ldr r0, [sp, #0x28]\n    add r6, #0x14\n    add r0, r0, #2\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x20]\n    add r0, #0x14\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x1c]\n    add r0, #0xf0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #0x18]\n    cmp r0, #6\n    blt _0225FF82\n    ldr r0, _022600F8 ; =_02261BE8\n    mov r4, #0x85\n    ldrb r5, [r0]\n    ldr r0, [sp, #0x10]\n    lsl r4, r4, #2\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    add r2, r4, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #8]\n    sub r2, #0xac\n    add r2, r1, r2\n    lsl r1, r5, #4\n    add r1, r2, r1\n    ldr r2, [sp, #0xc]\n    add r0, r0, r4\n    mov r3, #0x20\n    bl sub_020180BC\n    mov r0, #0x78\n    add r1, r5, #0\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r0, r0, r1\n    ldr r1, [sp, #8]\n    add r1, r1, r4\n    bl sub_020181D4\n    add r2, r4, #0\n    ldr r0, [sp, #8]\n    mov r1, #4\n    add r2, #0x18\n    strh r1, [r0, r2]\n    mov r1, #0\n    add r2, r2, #2\n    strh r1, [r0, r2]\n    bl ov91_02260334\n    ldr r0, [sp, #8]\n    add r2, r4, #0\n    ldr r1, [sp, #8]\n    sub r2, #0x2c\n    add r0, #0x78\n    add r1, r1, r2\n    bl sub_020181D4\n    add r1, r4, #0\n    ldr r0, [sp, #8]\n    sub r1, #0x2c\n    add r0, r0, r1\n    mov r1, #0\n    bl sub_02018198\n    ldr r0, [sp, #8]\n    mov r1, #1\n    add r0, #0x78\n    bl sub_020182A0\n    ldr r0, [sp, #8]\n    mov r2, #4\n    sub r1, r4, #4\n    strh r2, [r0, r1]\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022600E4: .word ov91_02261C04\n    _022600E8: .word 0xFFEDE000\n    _022600EC: .word ov91_02261C1C\n    _022600F0: .word ov91_0226274C\n    _022600F4: .word ov91_022621AC\n    _022600F8: .word _02261BE8"
    );
    #endif
}

void ov91_022600FC(void) {
    /* Original at 0x022600FC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    add r6, r1, #0\n    mov r4, #0\n    add r5, r7, r0\n    add r0, r5, #0\n    bl sub_02018068\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _0226010A\n    mov r0, #0x66\n    lsl r0, r0, #2\n    mov r5, #0\n    add r4, r7, r0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_020180F8\n    add r5, r5, #1\n    add r4, #0x14\n    cmp r5, #6\n    blt _02260120\n    mov r0, #0x85\n    lsl r0, r0, #2\n    add r0, r7, r0\n    add r1, r6, #0\n    bl sub_020180F8\n    mov r2, #0x23\n    add r0, r7, #0\n    mov r1, #0\n    lsl r2, r2, #4\n    bl memset\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_0226014C(void) {
    /* Original at 0x0226014C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    bl ov91_022601C8\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov91_022601F4\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov91_02260218\n    cmp r4, #0\n    beq _02260174\n    cmp r4, #1\n    beq _0226018E\n    cmp r4, #2\n    bne _022601A8\n    add r0, r5, #0\n    mov r1, #1\n    bl ov91_02260298\n    ldrh r1, [r6, #4]\n    add r0, r5, #0\n    bl ov91_02260254\n    add r0, r5, #0\n    mov r1, #1\n    bl ov91_02260334\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #3\n    bl ov91_02260298\n    add r0, r5, #0\n    mov r1, #0\n    bl ov91_02260334\n    mov r1, #1\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl ov91_0226031C\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_022601AC(void) {
    /* Original at 0x022601AC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    mov r1, #1\n    add r0, r4, r0\n    lsl r1, r1, #0xc\n    bl sub_02018124\n    add r0, r4, #0\n    bl ov91_02260378\n    pop {r4, pc}"
    );
    #endif
}

void ov91_022601C8(void) {
    /* Original at 0x022601C8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r6, #0\n    add r1, r4, #0\n    add r2, r4, #0\n    add r3, r4, #0\n    add r1, #0xd8\n    add r2, #0xdc\n    add r3, #0xe0\n    ldr r1, [r1]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    add r0, r5, #0\n    bl sub_020182A8\n    add r6, r6, #1\n    add r5, #0x78\n    cmp r6, #3\n    blt _022601D0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_022601F4(void) {
    /* Original at 0x022601F4 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldrh r0, [r1, #2]\n    mov r4, #0\n    mov r7, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_020182E0\n    add r4, r4, #1\n    add r5, #0x78\n    cmp r4, #3\n    blt _02260202\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_02260218(void) {
    /* Original at 0x02260218 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r0, r6, #0\n    add r0, #0xd4\n    ldr r1, [r0]\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020182C4\n    add r4, r4, #1\n    add r5, #0x78\n    cmp r4, #3\n    blt _02260220\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_0226023C(void) {
    sub_020181EC(0);
}

void ov91_02260254(void) {
    /* Original at 0x02260254 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02260290 ; =0x0000F222\n    add r4, r1, #0\n    bl GF_DegreeToSinCosIdx\n    add r1, r0, #0\n    ldr r0, _02260294 ; =0x00000E38\n    sub r2, r4, r0\n    mov r0, #0x5a\n    mul r0, r2\n    bl _u32_div_f\n    mov r1, #0x2d\n    lsl r1, r1, #0xe\n    mul r1, r0\n    add r0, r1, #0\n    mov r1, #0x5a\n    bl _s32_div_f\n    mov r1, #0x2d\n    lsl r1, r1, #0xe\n    sub r1, r1, r0\n    mov r0, #0x6b\n    lsl r0, r0, #2\n    add r0, r5, r0\n    bl sub_02018198\n    pop {r3, r4, r5, pc}\n    nop\n    _02260290: .word 0x0000F222\n    _02260294: .word 0x00000E38"
    );
    #endif
}

void ov91_02260298(void) {
    /* Original at 0x02260298 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #6\n    blo _022602A6\n    bl GF_AssertFail\n    mov r2, #0x21\n    lsl r2, r2, #4\n    ldrh r1, [r5, r2]\n    cmp r1, r4\n    beq _02260314\n    ldr r0, _02260318 ; =ov91_0226274C\n    sub r2, #0x78\n    ldrb r3, [r0, r1]\n    mov r0, #0x78\n    mul r0, r3\n    add r3, r5, r2\n    mov r2, #0x14\n    mul r2, r1\n    add r0, r5, r0\n    add r1, r3, r2\n    bl sub_020181E0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r6, r5, r0\n    mov r0, #0x14\n    add r7, r4, #0\n    mul r7, r0\n    ldr r0, _02260318 ; =ov91_0226274C\n    ldrb r1, [r0, r4]\n    mov r0, #0x78\n    mul r0, r1\n    str r0, [sp]\n    add r0, r5, r0\n    add r1, r6, r7\n    bl sub_020181D4\n    add r0, r6, r7\n    mov r1, #0\n    bl sub_02018198\n    mov r0, #0x21\n    lsl r0, r0, #4\n    ldrh r1, [r5, r0]\n    ldr r0, _02260318 ; =ov91_0226274C\n    ldrb r1, [r0, r1]\n    mov r0, #0x78\n    mul r0, r1\n    add r0, r5, r0\n    mov r1, #0\n    bl sub_020182A0\n    ldr r0, [sp]\n    mov r1, #1\n    add r0, r5, r0\n    bl sub_020182A0\n    mov r0, #0x21\n    lsl r0, r0, #4\n    strh r4, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02260318: .word ov91_0226274C"
    );
    #endif
}

void ov91_0226031C(void) {
    /* Original at 0x0226031C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x66\n    lsl r2, r2, #2\n    add r3, r0, r2\n    add r2, #0x78\n    ldrh r2, [r0, r2]\n    mov r0, #0x14\n    mul r0, r2\n    add r0, r3, r0\n    ldr r3, _02260330 ; =sub_0201815C\n    bx r3\n    _02260330: .word sub_0201815C"
    );
    #endif
}

void ov91_02260334(void) {
    /* Original at 0x02260334 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, _02260360 ; =0x00000212\n    add r5, r0, #0\n    ldrh r2, [r5, r1]\n    cmp r2, r4\n    beq _0226035C\n    cmp r4, #1\n    bne _02260350\n    sub r1, #0x7a\n    add r1, r5, r1\n    bl sub_020181D4\n    b _02260358\n    sub r1, #0x7a\n    add r1, r5, r1\n    bl sub_020181E0\n    ldr r0, _02260360 ; =0x00000212\n    strh r4, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _02260360: .word 0x00000212"
    );
    #endif
}

void ov91_02260364(void) {
    /* Original at 0x02260364 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _0226036C ; =0x0000022E\n    strh r1, [r0, r2]\n    bx lr\n    nop\n    _0226036C: .word 0x0000022E"
    );
    #endif
}

void ov91_02260370(void) {
    /* Original at 0x02260370 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x8b\n    lsl r2, r2, #2\n    strh r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov91_02260378(void) {
    /* Original at 0x02260378 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r2, _022603F4 ; =0x0000022E\n    add r3, r0, #0\n    ldrh r0, [r3, r2]\n    cmp r0, #1\n    bne _022603AA\n    sub r0, r2, #6\n    mov r1, #2\n    ldr r0, [r3, r0]\n    lsl r1, r1, #0xc\n    add r4, r0, r1\n    mov r0, #0xa\n    lsl r0, r0, #0xe\n    cmp r4, r0\n    bge _022603A2\n    sub r0, r2, #6\n    ldr r0, [r3, r0]\n    add r1, r0, r1\n    sub r0, r2, #6\n    str r1, [r3, r0]\n    b _022603E4\n    lsr r1, r1, #1\n    sub r0, r2, #6\n    str r1, [r3, r0]\n    b _022603E4\n    sub r0, r2, #2\n    ldrh r0, [r3, r0]\n    cmp r0, #4\n    bne _022603B6\n    mov r0, #0\n    b _022603B8\n    add r0, r0, #1\n    lsl r2, r0, #1\n    ldr r0, _022603F8 ; =ov91_02261C12\n    mov r4, #0x8a\n    ldrb r0, [r0, r2]\n    lsl r4, r4, #2\n    ldr r5, [r3, r4]\n    lsl r1, r0, #0xc\n    cmp r5, r1\n    bge _022603CE\n    str r1, [r3, r4]\n    b _022603E4\n    mov r0, #2\n    lsl r0, r0, #0xc\n    add r0, r5, r0\n    ldr r5, _022603FC ; =ov91_02261C13\n    ldrb r2, [r5, r2]\n    lsl r2, r2, #0xc\n    cmp r0, r2\n    bge _022603E2\n    str r0, [r3, r4]\n    b _022603E4\n    str r1, [r3, r4]\n    mov r1, #0x85\n    lsl r1, r1, #2\n    add r0, r3, r1\n    add r1, #0x14\n    ldr r1, [r3, r1]\n    bl sub_02018198\n    pop {r3, r4, r5, pc}\n    _022603F4: .word 0x0000022E\n    _022603F8: .word ov91_02261C12\n    _022603FC: .word ov91_02261C13"
    );
    #endif
}

void ov91_02260400(void) {
    /* Original at 0x02260400 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r3, #0xff\n    sub r0, r3, r0\n    mov r3, #0x96\n    lsl r3, r3, #4\n    add r4, r0, #0\n    mul r4, r3\n    lsl r0, r3, #7\n    sub r0, r4, r0\n    add r4, r1, #0\n    str r0, [r2]\n    mul r4, r3\n    lsl r0, r3, #7\n    sub r1, r4, r0\n    ldr r0, _02260428 ; =0xFFED4000\n    sub r0, r0, r1\n    str r0, [r2, #8]\n    pop {r3, r4}\n    bx lr\n    nop\n    _02260428: .word 0xFFED4000"
    );
    #endif
}

void ov91_0226042C(void) {
    /* Original at 0x0226042C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r1, #0x4b\n    ldr r0, [r5]\n    lsl r1, r1, #0xc\n    add r0, r0, r1\n    lsr r1, r1, #7\n    bl _s32_div_f\n    mov r1, #0xff\n    sub r0, r1, r0\n    strh r0, [r4]\n    ldr r1, [r5, #8]\n    ldr r0, _02260458 ; =0xFFF1F000\n    sub r0, r0, r1\n    mov r1, #0x96\n    lsl r1, r1, #4\n    bl _s32_div_f\n    strh r0, [r4, #2]\n    pop {r3, r4, r5, pc}\n    _02260458: .word 0xFFF1F000"
    );
    #endif
}

void ov91_0226045C(void) {
    /* Original at 0x0226045C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r6, r0, #0\n    add r0, sp, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    bl MTX_Identity33_\n    ldr r0, _0226049C ; =ov91_02261D3C\n    lsl r2, r4, #3\n    lsl r1, r5, #1\n    add r0, r0, r2\n    ldrh r0, [r1, r0]\n    ldr r3, _022604A0 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotY33_\n    add r0, r6, #0\n    add r1, sp, #0\n    add r2, r7, #0\n    bl MTX_MultVec33\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _0226049C: .word ov91_02261D3C\n    _022604A0: .word FX_SinCosTable_"
    );
    #endif
}

void ov91_022604A4(void) {
    /* Original at 0x022604A4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r6, r0, #0\n    add r0, sp, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    bl MTX_Identity33_\n    ldr r0, _022604EC ; =ov91_02261D3C\n    lsl r2, r4, #3\n    lsl r1, r5, #1\n    add r0, r0, r2\n    ldrh r0, [r1, r0]\n    ldr r3, _022604F0 ; =FX_SinCosTable_\n    asr r0, r0, #4\n    lsl r2, r0, #1\n    lsl r1, r2, #1\n    add r2, r2, #1\n    lsl r2, r2, #1\n    ldrsh r1, [r3, r1]\n    ldrsh r2, [r3, r2]\n    add r0, sp, #0\n    bl MTX_RotY33_\n    add r0, sp, #0\n    add r1, r0, #0\n    bl MTX_Inverse33\n    add r0, r6, #0\n    add r1, sp, #0\n    add r2, r7, #0\n    bl MTX_MultVec33\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _022604EC: .word ov91_02261D3C\n    _022604F0: .word FX_SinCosTable_"
    );
    #endif
}

void ov91_022604F4(void) {
    /* Original at 0x022604F4 */
    /* Requires manual decompilation - 165 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x30]\n    ldr r0, _0226064C ; =0x000006FC\n    ldr r4, _02260650 ; =ov91_02261BF0\n    str r1, [sp, #0x2c]\n    add r7, r2, #0\n    add r6, r5, r0\n    ldrb r2, [r4]\n    ldr r1, [sp, #0x2c]\n    add r0, r6, #0\n    add r3, r7, #0\n    bl sub_02018030\n    ldr r0, [sp, #0x30]\n    add r4, r4, #1\n    add r0, r0, #1\n    add r6, #0x10\n    str r0, [sp, #0x30]\n    cmp r0, #5\n    blt _02260508\n    ldr r0, _02260654 ; =0x0000074C\n    ldr r1, [sp, #0x2c]\n    add r0, r5, r0\n    mov r2, #0x2e\n    add r3, r7, #0\n    bl sub_02018030\n    ldr r0, _02260658 ; =0x00000754\n    mov r2, #0x1f\n    ldr r0, [r5, r0]\n    mov r1, #0\n    lsl r2, r2, #0x10\n    bl NNSi_G3dModifyPolygonAttrMask\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    add r1, #0xe4\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x2c]\n    mov r2, #7\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    ldr r1, _0226065C ; =0x0000075C\n    mov r2, #4\n    str r0, [r5, r1]\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r2, [sp, #8]\n    str r7, [sp, #0xc]\n    add r1, #0xe8\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x2c]\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    mov r1, #0x76\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    add r1, #0xec\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x2c]\n    mov r2, #6\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _02260660 ; =0x00000764\n    mov r2, #5\n    str r0, [r5, r1]\n    mov r1, #0x64\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    add r1, #0xf0\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x2c]\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _02260664 ; =0x00000768\n    str r0, [r5, r1]\n    sub r1, #0xc\n    ldr r0, [r5, r1]\n    bl sub_0200AE18\n    cmp r0, #0\n    bne _022605C2\n    bl GF_AssertFail\n    mov r0, #0x76\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _022605D4\n    bl GF_AssertFail\n    ldr r0, _0226065C ; =0x0000075C\n    ldr r0, [r5, r0]\n    bl sub_0200A740\n    mov r0, #0x76\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_0200A740\n    mov r1, #0x64\n    add r0, r1, #0\n    add r2, r1, #0\n    str r1, [sp]\n    sub r0, #0x65\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r2, #0xe4\n    ldr r2, [r5, r2]\n    add r3, r1, #0\n    str r2, [sp, #0x14]\n    add r2, r1, #0\n    add r2, #0xe8\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x18]\n    add r2, r1, #0\n    add r2, #0xec\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x1c]\n    add r2, r1, #0\n    add r2, #0xf0\n    ldr r2, [r5, r2]\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r0, _02260668 ; =0x0000076C\n    add r2, r1, #0\n    add r0, r5, r0\n    bl CreateSpriteResourcesHeader\n    mov r0, #0x79\n    lsl r0, r0, #4\n    mov r6, #0\n    add r4, r5, r0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl ov91_022607C4\n    mov r0, #0x42\n    lsl r0, r0, #2\n    add r6, r6, #1\n    add r4, r4, r0\n    cmp r6, #0x60\n    blt _02260630\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0226064C: .word 0x000006FC\n    _02260650: .word ov91_02261BF0\n    _02260654: .word 0x0000074C\n    _02260658: .word 0x00000754\n    _0226065C: .word 0x0000075C\n    _02260660: .word 0x00000764\n    _02260664: .word 0x00000768\n    _02260668: .word 0x0000076C"
    );
    #endif
}

void ov91_0226066C(void) {
    /* Original at 0x0226066C */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x79\n    lsl r0, r0, #4\n    mov r7, #0x42\n    mov r6, #0\n    add r4, r5, r0\n    lsl r7, r7, #2\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov91_02260830\n    add r6, r6, #1\n    add r4, r4, r7\n    cmp r6, #0x60\n    blt _0226067C\n    ldr r0, _02260714 ; =0x0000075C\n    ldr r0, [r5, r0]\n    bl sub_0200AEB0\n    mov r0, #0x76\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_0200B0A8\n    mov r0, #0x52\n    ldr r1, _02260714 ; =0x0000075C\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x53\n    mov r1, #0x76\n    lsl r0, r0, #2\n    lsl r1, r1, #4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x15\n    ldr r1, _02260718 ; =0x00000764\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x55\n    ldr r1, _0226071C ; =0x00000768\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    bl DestroySingle2DGfxResObj\n    ldr r0, _02260720 ; =0x000006FC\n    mov r6, #0\n    add r4, r5, r0\n    add r0, r4, #0\n    bl sub_02018068\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #5\n    blt _022606DE\n    ldr r0, _02260724 ; =0x0000074C\n    add r0, r5, r0\n    bl sub_02018068\n    ldr r0, _02260720 ; =0x000006FC\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #0x94\n    bl memset\n    mov r0, #0x79\n    lsl r0, r0, #4\n    mov r2, #0x63\n    add r0, r5, r0\n    mov r1, #0\n    lsl r2, r2, #8\n    bl memset\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02260714: .word 0x0000075C\n    _02260718: .word 0x00000764\n    _0226071C: .word 0x00000768\n    _02260720: .word 0x000006FC\n    _02260724: .word 0x0000074C"
    );
    #endif
}

void ov91_02260728(void) {
    /* Original at 0x02260728 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    bl ov91_02260A50\n    add r1, r0, #0\n    ldrh r0, [r4, #4]\n    cmp r0, r6\n    bne _0226074A\n    add r0, r5, #0\n    add r2, r4, #0\n    add r3, r7, #0\n    bl ov91_02260848\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r2, r4, #0\n    bl ov91_02260884\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_02260754(void) {
    /* Original at 0x02260754 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r3, #0x42\n    ldr r4, _02260788 ; =0x00000888\n    mov r2, #0\n    add r6, r0, #0\n    lsl r3, r3, #2\n    ldr r5, [r6, r4]\n    cmp r5, r1\n    bne _0226077A\n    mov r1, #0x79\n    lsl r1, r1, #4\n    add r1, r0, r1\n    mov r0, #0x42\n    lsl r0, r0, #2\n    mul r0, r2\n    add r0, r1, r0\n    bl ov91_02260A2C\n    pop {r4, r5, r6, pc}\n    add r2, r2, #1\n    add r6, r6, r3\n    cmp r2, #0x60\n    blt _02260760\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    _02260788: .word 0x00000888"
    );
    #endif
}

void ov91_0226078C(void) {
    /* Original at 0x0226078C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0x79\n    lsl r0, r0, #4\n    str r1, [sp]\n    mov r6, #0\n    add r4, r7, #0\n    add r5, r7, r0\n    ldr r0, _022607C0 ; =0x00000888\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _022607AE\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov91_022608A8\n    mov r0, #0x42\n    lsl r0, r0, #2\n    add r6, r6, #1\n    add r4, r4, r0\n    add r5, r5, r0\n    cmp r6, #0x60\n    blt _0226079C\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022607C0: .word 0x00000888"
    );
    #endif
}

void ov91_022607C4(void) {
    /* Original at 0x022607C4 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    add r3, sp, #0\n    mov r0, #0\n    add r4, r1, #0\n    add r6, r3, #0\n    add r1, r0, #0\n    stmia r6!, {r0, r1}\n    stmia r6!, {r0, r1}\n    stmia r6!, {r0, r1}\n    stmia r6!, {r0, r1}\n    stmia r6!, {r0, r1}\n    stmia r6!, {r0, r1}\n    ldr r0, [r5, #0x1c]\n    str r0, [sp]\n    ldr r0, _02260828 ; =0x0000076C\n    str r2, [sp, #0x2c]\n    add r0, r5, r0\n    str r0, [sp, #4]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    mov r0, #0x20\n    str r0, [sp, #0x24]\n    mov r0, #2\n    str r0, [sp, #0x28]\n    add r0, r3, #0\n    bl Sprite_CreateAffine\n    mov r1, #0\n    str r0, [r4]\n    bl Sprite_SetDrawFlag\n    ldr r1, _0226082C ; =0x0000074C\n    add r0, r4, #0\n    add r0, #0x7c\n    add r1, r5, r1\n    bl sub_020181B0\n    add r4, #0x7c\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_020182A0\n    add sp, #0x30\n    pop {r4, r5, r6, pc}\n    nop\n    _02260828: .word 0x0000076C\n    _0226082C: .word 0x0000074C"
    );
    #endif
}

void ov91_02260830(void) {
    /* Original at 0x02260830 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4]\n    bl Sprite_Delete\n    mov r2, #0x42\n    add r0, r4, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    pop {r4, pc}"
    );
    #endif
}

void ov91_02260848(void) {
    /* Original at 0x02260848 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r0, r5, #0\n    add r4, r2, #0\n    add r0, #0xf8\n    str r4, [r0]\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0xf4\n    str r1, [r0]\n    mov r0, #0x41\n    mov r1, #0\n    lsl r0, r0, #2\n    strh r1, [r5, r0]\n    ldrh r1, [r4, #4]\n    ldr r0, [r5]\n    add r6, r3, #0\n    bl Sprite_SetPaletteOverride\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov91_02260A88\n    ldr r0, [r5]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_02260884(void) {
    /* Original at 0x02260884 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r0, #0xf8\n    str r2, [r0]\n    mov r0, #0x41\n    mov r1, #0\n    lsl r0, r0, #2\n    strh r1, [r4, r0]\n    ldr r0, [r4]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov91_02260AF8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_022608A8(void) {
    /* Original at 0x022608A8 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r1, r5, #0\n    add r1, #0xf4\n    ldr r1, [r1]\n    cmp r1, #1\n    bne _022608CE\n    add r1, r5, #0\n    add r1, #0xf8\n    ldr r1, [r1]\n    bl ov91_02260A88\n    cmp r0, #0\n    bne _022608CE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov91_02260AF8\n    add r0, r5, #0\n    add r0, #0xf4\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02260940\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r1, _02260944 ; =0x000006FC\n    ldr r0, [r0]\n    add r1, r4, r1\n    bl ov91_02260B48\n    add r1, r5, #0\n    add r1, #0xf8\n    ldr r1, [r1]\n    ldr r0, [r0, #8]\n    ldrb r1, [r1]\n    cmp r1, #5\n    bne _022608FC\n    ldr r1, _02260948 ; =0x00007FFF\n    bl NNS_G3dMdlSetMdlAmbAll\n    b _02260902\n    ldr r1, _0226094C ; =0x00004A52\n    bl NNS_G3dMdlSetMdlAmbAll\n    add r0, r5, #0\n    bl ov91_02260B5C\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r3, [r0]\n    add r0, r5, #4\n    ldr r1, [r3, #0x2c]\n    ldr r2, [r3, #0x30]\n    ldr r3, [r3, #0x34]\n    bl sub_020182A8\n    add r0, r5, #4\n    bl sub_020181EC\n    add r0, r5, #0\n    add r0, #0x7c\n    bl sub_020182A4\n    cmp r0, #1\n    bne _02260940\n    add r0, r5, #0\n    bl ov91_02260950\n    add r0, r5, #0\n    add r0, #0x7c\n    bl sub_020181EC\n    add r0, r5, #0\n    bl ov91_02260A10\n    pop {r3, r4, r5, pc}\n    nop\n    _02260944: .word 0x000006FC\n    _02260948: .word 0x00007FFF\n    _0226094C: .word 0x00004A52"
    );
    #endif
}

void ov91_02260950(void) {
    /* Original at 0x02260950 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl ov91_0225E9AC\n    cmp r0, #1\n    bne _02260966\n    ldr r4, _02260A08 ; =0xFFED4000\n    b _0226097A\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl ov91_0225E990\n    cmp r0, #0\n    bne _02260978\n    ldr r4, _02260A0C ; =0xFFFCD000\n    b _0226097A\n    ldr r4, _02260A08 ; =0xFFED4000\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r3, [r0]\n    add r0, r5, #0\n    ldr r1, [r3, #0x2c]\n    ldr r3, [r3, #0x34]\n    add r0, #0x7c\n    add r2, r4, #0\n    bl sub_020182A8\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    mov r2, #0\n    ldr r0, [r0, #0x30]\n    sub r4, r0, r4\n    asr r6, r4, #0x1f\n    lsr r1, r4, #0x14\n    lsl r0, r6, #0xc\n    orr r0, r1\n    mov r1, #2\n    lsl r3, r4, #0xc\n    lsl r1, r1, #0xa\n    add r3, r3, r1\n    adc r0, r2\n    lsl r1, r0, #0x14\n    lsr r0, r3, #0xc\n    orr r0, r1\n    mov r1, #0x4b\n    lsl r1, r1, #0xe\n    bl FX_Div\n    mov r7, #1\n    add r3, r0, #0\n    lsl r7, r7, #0xc\n    add r1, r3, r7\n    add r5, #0x7c\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r3, r7\n    bl sub_020182C4\n    lsr r0, r4, #0x10\n    lsl r3, r6, #0x10\n    orr r3, r0\n    lsl r2, r4, #0x10\n    mov r1, #0\n    lsr r0, r7, #1\n    add r0, r2, r0\n    adc r3, r1\n    lsl r1, r3, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    mov r1, #0x4b\n    lsl r1, r1, #0xe\n    bl FX_Div\n    asr r1, r0, #0xc\n    mov r0, #0x18\n    sub r0, r0, r1\n    str r0, [sp]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    str r0, [sp, #4]\n    bl NNS_G3dGlbPolygonAttr\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02260A08: .word 0xFFED4000\n    _02260A0C: .word 0xFFFCD000"
    );
    #endif
}

void ov91_02260A10(void) {
    NNS_G3dGlbPolygonAttr(0, 0x1f);
}

void ov91_02260A2C(void) {
    Sprite_SetDrawFlag(r0, 0);
    sub_020182A0(r4, 0);
}

void ov91_02260A50(void) {
    /* Original at 0x02260A50 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0x42\n    ldr r3, _02260A84 ; =0x00000888\n    mov r1, #0\n    add r5, r0, #0\n    lsl r2, r2, #2\n    ldr r4, [r5, r3]\n    cmp r4, #0\n    bne _02260A72\n    mov r2, #0x79\n    lsl r2, r2, #4\n    add r2, r0, r2\n    mov r0, #0x42\n    lsl r0, r0, #2\n    mul r0, r1\n    add r0, r2, r0\n    pop {r3, r4, r5, pc}\n    add r1, r1, #1\n    add r5, r5, r2\n    cmp r1, #0x60\n    blt _02260A5C\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02260A84: .word 0x00000888"
    );
    #endif
}

void ov91_02260A88(void) {
    /* Original at 0x02260A88 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    add r0, #0xf8\n    ldr r6, [r0]\n    add r5, sp, #4\n    add r6, #0x2c\n    ldmia r6!, {r0, r1}\n    add r3, r2, #0\n    add r2, r5, #0\n    stmia r5!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r2, #0\n    str r0, [r5]\n    add r0, r2, #0\n    add r2, r4, #0\n    add r2, #0xf8\n    ldr r2, [r2]\n    ldrh r2, [r2, #4]\n    bl ov91_022604A4\n    add r0, sp, #4\n    add r1, sp, #0\n    bl ov91_0226042C\n    add r1, sp, #0\n    mov r2, #0\n    ldrsh r0, [r1, r2]\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    mov r0, #2\n    ldrsh r1, [r1, r0]\n    lsl r0, r0, #0x14\n    lsl r1, r1, #0xc\n    add r0, r1, r0\n    str r2, [sp, #0xc]\n    str r0, [sp, #8]\n    ldr r0, [r4]\n    add r1, sp, #4\n    bl Sprite_SetMatrix\n    add r1, sp, #0\n    mov r0, #0\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    blt _02260AEC\n    mov r0, #2\n    ldrsh r0, [r1, r0]\n    cmp r0, #0\n    bge _02260AF2\n    add sp, #0x10\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_02260AF8(void) {
    /* Original at 0x02260AF8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xf4\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r1, _02260B44 ; =0x000006FC\n    ldr r0, [r0]\n    add r1, r4, r1\n    bl ov91_02260B48\n    add r1, r0, #0\n    add r0, r5, #4\n    bl sub_020181B0\n    add r0, r5, #4\n    mov r1, #1\n    bl sub_020182A0\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02260B42\n    add r5, #0x7c\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_020182A0\n    pop {r3, r4, r5, pc}\n    _02260B44: .word 0x000006FC"
    );
    #endif
}

void ov91_02260B48(void) {
    /* Original at 0x02260B48 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #0x28]\n    cmp r2, #1\n    bne _02260B52\n    mov r0, #4\n    b _02260B54\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bx lr"
    );
    #endif
}

void ov91_02260B5C(void) {
    /* Original at 0x02260B5C */
    /* Requires manual decompilation - 108 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x41\n    lsl r0, r0, #2\n    ldrsh r1, [r5, r0]\n    sub r1, r1, #1\n    strh r1, [r5, r0]\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bge _02260BFA\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    bl ov91_0225E6F8\n    add r6, r0, #0\n    add r0, r5, #0\n    add r0, #0xf8\n    ldr r1, [r0]\n    ldr r0, [r1, #0x10]\n    ldr r1, [r1, #8]\n    bl FX_Atan2Idx\n    asr r0, r0, #4\n    lsl r4, r0, #1\n    ldr r1, _02260C3C ; =0x0001E200\n    lsl r0, r6, #9\n    bl _s32_div_f\n    lsl r0, r0, #0x10\n    lsr r6, r0, #4\n    asr r7, r6, #0x1f\n    ldr r0, _02260C40 ; =FX_SinCosTable_\n    lsl r1, r4, #1\n    ldrsh r0, [r0, r1]\n    add r2, r6, #0\n    add r3, r7, #0\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    asr r1, r0, #0xc\n    lsr r0, r2, #2\n    add r1, r1, r0\n    lsr r0, r2, #3\n    strh r1, [r5, r0]\n    add r0, r4, #1\n    lsl r1, r0, #1\n    ldr r0, _02260C40 ; =FX_SinCosTable_\n    add r2, r6, #0\n    ldrsh r0, [r0, r1]\n    add r3, r7, #0\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r4, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r4, #0xc\n    orr r1, r0\n    asr r1, r1, #0xc\n    lsr r0, r2, #2\n    add r1, r1, r0\n    ldr r0, _02260C44 ; =0x00000102\n    strh r1, [r5, r0]\n    mov r1, #8\n    add r0, r1, #0\n    add r0, #0xfc\n    strh r1, [r5, r0]\n    add r0, r5, #0\n    add r0, #0xfc\n    ldrh r2, [r0]\n    mov r0, #1\n    lsl r0, r0, #8\n    ldrh r1, [r5, r0]\n    add r0, r0, #2\n    add r2, r2, r1\n    add r1, r5, #0\n    add r1, #0xfc\n    strh r2, [r1]\n    add r1, r5, #0\n    add r1, #0xfe\n    ldrh r1, [r1]\n    ldrh r0, [r5, r0]\n    mov r2, #0\n    add r1, r1, r0\n    add r0, r5, #0\n    add r0, #0xfe\n    strh r1, [r0]\n    add r1, r5, #0\n    add r1, #0xfc\n    ldrh r1, [r1]\n    add r0, r5, #4\n    bl sub_020182E0\n    add r0, r5, #4\n    add r5, #0xfe\n    ldrh r1, [r5]\n    mov r2, #2\n    bl sub_020182E0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02260C3C: .word 0x0001E200\n    _02260C40: .word FX_SinCosTable_\n    _02260C44: .word 0x00000102"
    );
    #endif
}

void ov91_02260C48(void) {
    /* Original at 0x02260C48 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    add r6, r0, #0\n    add r7, sp, #0\n    add r4, r2, #0\n    mov r0, #0\n    add r5, r1, #0\n    add r2, r7, #0\n    add r1, r0, #0\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r6, #0x1c]\n    str r0, [sp]\n    ldr r0, _02260CA4 ; =0x0000076C\n    str r3, [sp, #0x2c]\n    add r0, r6, r0\n    str r0, [sp, #4]\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    mov r0, #0x20\n    str r0, [sp, #0x24]\n    mov r0, #2\n    str r0, [sp, #0x28]\n    add r0, r7, #0\n    bl Sprite_CreateAffine\n    str r0, [r5, #4]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #4]\n    add r1, r4, #0\n    bl Sprite_SetPaletteOverride\n    mov r0, #0\n    str r0, [r5]\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02260CA4: .word 0x0000076C"
    );
    #endif
}

void ov91_02260CA8(void) {
    Sprite_Delete();
}

void ov91_02260CB4(void) {
    Sprite_SetDrawFlag(1, 1);
}

void ov91_02260CC8(void) {
    ov91_02260CE0();
}

void ov91_02260CE0(void) {
    Sprite_SetMatrix(2);
}

void ov91_02260D00(void) {
    Sprite_SetDrawFlag(0, 0);
}

void ov91_02260D14(void) {
    /* Original at 0x02260D14 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    mov r4, #0\n    add r7, r0, #0\n    add r5, r1, #0\n    add r6, r2, #0\n    add r2, sp, #0\n    add r0, r4, #0\n    add r1, r4, #0\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r7, #0x1c]\n    str r0, [sp]\n    ldr r0, _02260D7C ; =0x0000076C\n    str r3, [sp, #0x2c]\n    add r0, r7, r0\n    str r0, [sp, #4]\n    mov r0, #9\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    mov r0, #0x20\n    str r0, [sp, #0x24]\n    mov r0, #2\n    str r0, [sp, #0x28]\n    add r7, r4, #0\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    str r0, [r5, #4]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #4]\n    mov r1, #1\n    bl Sprite_SetAffineOverwriteMode\n    ldr r0, [r5, #4]\n    add r1, r6, #0\n    bl Sprite_SetPaletteOverride\n    str r7, [r5]\n    add r4, r4, #1\n    add r5, #0x1c\n    cmp r4, #8\n    blt _02260D50\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    _02260D7C: .word 0x0000076C"
    );
    #endif
}

void ov91_02260D80(void) {
    Sprite_Delete(0);
}

void ov91_02260D98(void) {
    /* Original at 0x02260D98 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    mov r4, #0\n    add r6, sp, #0x10\n    add r7, sp, #0xc\n    ldr r0, [r5]\n    cmp r0, #1\n    bne _02260E78\n    ldr r0, [r5, #0x14]\n    cmp r0, #0x10\n    bge _02260DC4\n    mov r1, #0x7d\n    str r1, [sp]\n    str r6, [sp, #4]\n    mov r1, #0x10\n    mov r2, #8\n    mov r3, #0xbe\n    str r7, [sp, #8]\n    bl ov91_02260EE0\n    b _02260DF2\n    cmp r0, #0x1a\n    bge _02260DDE\n    mov r1, #0x8c\n    str r1, [sp]\n    str r6, [sp, #4]\n    sub r0, #0x10\n    mov r1, #0xa\n    mov r2, #4\n    mov r3, #0xb6\n    str r7, [sp, #8]\n    bl ov91_02260EE0\n    b _02260DF2\n    mov r1, #0xa0\n    str r1, [sp]\n    str r6, [sp, #4]\n    sub r0, #0x1a\n    mov r1, #6\n    mov r2, #3\n    mov r3, #0xb4\n    str r7, [sp, #8]\n    bl ov91_02260EE0\n    ldr r0, [r5, #0x14]\n    add r1, r0, #1\n    lsl r0, r1, #1\n    str r1, [r5, #0x14]\n    add r1, r1, r0\n    asr r0, r1, #4\n    lsr r0, r0, #0x1b\n    add r0, r1, r0\n    asr r1, r0, #5\n    mov r0, #9\n    sub r0, r0, r1\n    mov r1, #0xa\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xc\n    bl FX_Div\n    str r0, [sp, #0x14]\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #4]\n    add r1, sp, #0x14\n    bl Sprite_SetAffineScale\n    ldr r0, [r5, #0x18]\n    ldr r1, [r5, #8]\n    cmp r0, #0\n    beq _02260E2E\n    ldr r0, [sp, #0x10]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    b _02260E34\n    ldr r0, [sp, #0x10]\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [r5, #8]\n    ldr r0, [sp, #0xc]\n    ldr r1, [r5, #0xc]\n    lsl r0, r0, #0xc\n    add r0, r1, r0\n    str r0, [r5, #0xc]\n    add r1, r5, #0\n    ldr r0, [r5, #4]\n    add r1, #8\n    bl Sprite_SetMatrix\n    ldr r1, [r5, #8]\n    ldr r0, _02260E84 ; =0xFFFE0000\n    cmp r1, r0\n    blt _02260E6C\n    mov r0, #0x12\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    bgt _02260E6C\n    mov r0, #0x1e\n    ldr r1, [r5, #0xc]\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    blt _02260E6C\n    mov r0, #0x2e\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    ble _02260E78\n    mov r0, #0\n    str r0, [r5]\n    ldr r0, [r5, #4]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r4, r4, #1\n    add r5, #0x1c\n    cmp r4, #8\n    blt _02260DA4\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02260E84: .word 0xFFFE0000"
    );
    #endif
}

void ov91_02260E88(void) {
    /* Original at 0x02260E88 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r4, #0\n    add r3, r4, #0\n    add r6, r0, #0\n    ldr r5, [r6]\n    cmp r5, #0\n    bne _02260E9E\n    mov r4, #0x1c\n    mul r4, r3\n    add r4, r0, r4\n    b _02260EA6\n    add r3, r3, #1\n    add r6, #0x1c\n    cmp r3, #8\n    blt _02260E90\n    cmp r4, #0\n    beq _02260EDC\n    cmp r1, #0x80\n    bge _02260EB2\n    mov r0, #1\n    b _02260EB4\n    mov r0, #0\n    str r0, [r4, #0x18]\n    lsl r0, r1, #0xc\n    str r0, [r4, #8]\n    mov r0, #2\n    lsl r1, r2, #0xc\n    lsl r0, r0, #0x14\n    add r0, r1, r0\n    str r0, [r4, #0xc]\n    add r1, r4, #0\n    ldr r0, [r4, #4]\n    add r1, #8\n    bl Sprite_SetMatrix\n    mov r1, #1\n    str r1, [r4]\n    ldr r0, [r4, #4]\n    bl Sprite_SetDrawFlag\n    mov r0, #0\n    str r0, [r4, #0x14]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_02260EE0(void) {
    /* Original at 0x02260EE0 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    ldr r2, [sp, #0x10]\n    add r5, r3, #0\n    sub r2, r2, r5\n    mul r2, r0\n    add r0, r2, #0\n    bl _s32_div_f\n    add r0, r5, r0\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    add r0, r6, #0\n    bl GF_CosDegNoWrap\n    lsl r5, r4, #0xc\n    asr r4, r5, #0x1f\n    asr r1, r0, #0x1f\n    add r2, r5, #0\n    add r3, r4, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    ldr r0, [sp, #0x14]\n    asr r1, r1, #0xc\n    str r1, [r0]\n    add r0, r6, #0\n    bl GF_SinDegNoWrap\n    asr r1, r0, #0x1f\n    add r2, r5, #0\n    add r3, r4, #0\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    ldr r0, [sp, #0x18]\n    asr r1, r1, #0xc\n    str r1, [r0]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_02260F50(void) {
    /* Original at 0x02260F50 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x40]\n    mov r1, #0x5a\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #8]\n    str r2, [sp, #0xc]\n    lsl r1, r1, #2\n    add r6, r0, r1\n    sub r2, r3, #1\n    add r5, r0, #0\n    lsl r0, r2, #1\n    str r0, [sp, #0x14]\n    ldr r1, _0226105C ; =ov91_02261D64\n    lsl r0, r2, #3\n    add r0, r1, r0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x38]\n    ldr r7, [sp, #0x3c]\n    lsl r0, r0, #1\n    mov r4, #0\n    str r0, [sp, #0x1c]\n    cmp r4, #0\n    bne _02260F86\n    mov r2, #0x24\n    b _02260F94\n    cmp r4, #1\n    bne _02260F8E\n    mov r2, #0x25\n    b _02260F94\n    ldr r1, _02261060 ; =ov91_02261C0A\n    ldr r0, [sp, #0x14]\n    ldrh r2, [r1, r0]\n    ldr r1, [sp, #0xc]\n    add r0, r6, #0\n    add r3, r7, #0\n    bl sub_02018030\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_020181B0\n    mov r1, #0\n    ldr r2, _02261064 ; =0xFFF9E000\n    add r0, r5, #0\n    add r3, r1, #0\n    bl sub_020182A8\n    mov r1, #6\n    lsl r1, r1, #0xa\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_020182C4\n    cmp r4, #1\n    bne _02260FCC\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_020182A0\n    cmp r4, #1\n    bhi _02260FE0\n    ldr r2, [sp, #0x18]\n    ldr r1, [sp, #0x1c]\n    add r0, r5, #0\n    ldrh r1, [r2, r1]\n    mov r2, #1\n    bl sub_020182E0\n    b _02260FF0\n    mov r0, #0xb4\n    bl GF_DegreeToSinCosIdxNoWrap\n    add r1, r0, #0\n    add r0, r5, #0\n    mov r2, #1\n    bl sub_020182E0\n    add r4, r4, #1\n    add r6, #0x10\n    add r5, #0x78\n    cmp r4, #3\n    blt _02260F7E\n    mov r0, #0\n    str r0, [sp, #0x10]\n    mov r1, #0x66\n    ldr r0, [sp, #8]\n    lsl r1, r1, #2\n    add r5, r0, r1\n    sub r1, #0x30\n    add r0, r0, r1\n    ldr r6, _02261068 ; =ov91_02261BF8\n    ldr r4, _0226106C ; =ov91_02261BFE\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x40]\n    str r7, [sp]\n    str r0, [sp, #4]\n    ldrh r1, [r4]\n    ldrh r3, [r6]\n    add r0, r5, #0\n    lsl r2, r1, #4\n    ldr r1, [sp, #0x20]\n    add r1, r1, r2\n    ldr r2, [sp, #0xc]\n    bl sub_020180BC\n    ldrh r1, [r4]\n    mov r0, #0x78\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #8]\n    add r1, r5, #0\n    add r0, r0, r2\n    bl sub_020181D4\n    ldr r0, [sp, #0x10]\n    add r6, r6, #2\n    add r0, r0, #1\n    add r4, r4, #2\n    add r5, #0x14\n    str r0, [sp, #0x10]\n    cmp r0, #3\n    blt _02261010\n    mov r2, #1\n    mov r1, #0x75\n    ldr r0, [sp, #8]\n    lsl r2, r2, #0xc\n    lsl r1, r1, #2\n    str r2, [r0, r1]\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0226105C: .word ov91_02261D64\n    _02261060: .word ov91_02261C0A\n    _02261064: .word 0xFFF9E000\n    _02261068: .word ov91_02261BF8\n    _0226106C: .word ov91_02261BFE"
    );
    #endif
}

void ov91_02261070(void) {
    /* Original at 0x02261070 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r6, r2, #0\n    mov r4, #0\n    add r5, r7, r0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_020180F8\n    add r4, r4, #1\n    add r5, #0x14\n    cmp r4, #3\n    blt _0226107E\n    mov r0, #0x5a\n    lsl r0, r0, #2\n    mov r4, #0\n    add r5, r7, r0\n    add r0, r5, #0\n    bl sub_02018068\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _02261096\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_022610A8(void) {
    /* Original at 0x022610A8 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x66\n    add r4, r0, #0\n    lsl r1, r1, #2\n    add r0, r4, r1\n    add r1, #0x3c\n    ldr r1, [r4, r1]\n    bl sub_02018124\n    mov r0, #0x76\n    lsl r0, r0, #2\n    ldrb r1, [r4, r0]\n    cmp r1, #0\n    beq _022611B4\n    add r1, r0, #1\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _022610D6\n    cmp r1, #1\n    beq _02261128\n    cmp r1, #2\n    beq _0226116C\n    b _02261194\n    add r1, r0, #0\n    add r1, #8\n    add r2, r0, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r3, r2, r1\n    mov r2, #0x33\n    lsl r2, r2, #0xc\n    cmp r3, r2\n    bge _022610F2\n    add r2, r0, #4\n    ldr r2, [r4, r2]\n    add r1, r2, r1\n    b _022610F4\n    mov r1, #0\n    add r0, r0, #4\n    str r1, [r4, r0]\n    mov r1, #0x1e\n    lsl r1, r1, #4\n    add r0, r1, #0\n    ldr r2, [r4, r1]\n    sub r0, #0x46\n    add r3, r2, r0\n    ldr r0, _022611C8 ; =0x000024CD\n    cmp r3, r0\n    bgt _02261114\n    add r0, r1, #0\n    sub r0, #0x46\n    add r0, r2, r0\n    str r0, [r4, r1]\n    b _02261198\n    str r0, [r4, r1]\n    mov r2, #0x18\n    sub r0, r1, #6\n    strh r2, [r4, r0]\n    sub r0, r1, #7\n    ldrb r0, [r4, r0]\n    add r2, r0, #1\n    sub r0, r1, #7\n    strb r2, [r4, r0]\n    b _02261198\n    add r1, r0, #0\n    add r1, #8\n    add r2, r0, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r3, r2, r1\n    mov r2, #0x33\n    lsl r2, r2, #0xc\n    cmp r3, r2\n    bge _02261144\n    add r2, r0, #4\n    ldr r2, [r4, r2]\n    add r1, r2, r1\n    b _02261146\n    mov r1, #0\n    add r0, r0, #4\n    str r1, [r4, r0]\n    ldr r1, _022611CC ; =0x000001DA\n    ldrsh r0, [r4, r1]\n    sub r0, r0, #1\n    strh r0, [r4, r1]\n    ldrsh r0, [r4, r1]\n    cmp r0, #0\n    bgt _02261198\n    sub r0, r1, #1\n    ldrb r0, [r4, r0]\n    add r2, r0, #1\n    sub r0, r1, #1\n    strb r2, [r4, r0]\n    mov r2, #0x33\n    lsl r2, r2, #0xc\n    add r0, r1, #2\n    str r2, [r4, r0]\n    b _02261198\n    add r1, r0, #4\n    mov r2, #1\n    ldr r1, [r4, r1]\n    lsl r2, r2, #0xc\n    add r3, r1, r2\n    mov r1, #0x19\n    lsl r1, r1, #0xe\n    cmp r3, r1\n    bge _0226118A\n    add r1, r0, #4\n    ldr r1, [r4, r1]\n    add r0, r0, #4\n    add r1, r1, r2\n    str r1, [r4, r0]\n    b _02261198\n    mov r1, #0x33\n    lsl r1, r1, #0xc\n    add r0, r0, #4\n    str r1, [r4, r0]\n    b _02261198\n    bl GF_AssertFail\n    mov r1, #0x6b\n    lsl r1, r1, #2\n    add r0, r4, r1\n    add r1, #0x30\n    ldr r1, [r4, r1]\n    bl sub_02018198\n    mov r1, #7\n    lsl r1, r1, #6\n    add r0, r4, r1\n    add r1, #0x1c\n    ldr r1, [r4, r1]\n    bl sub_02018198\n    mov r5, #0\n    add r0, r4, #0\n    bl sub_020181EC\n    add r5, r5, #1\n    add r4, #0x78\n    cmp r5, #3\n    blt _022611B6\n    pop {r3, r4, r5, pc}\n    nop\n    _022611C8: .word 0x000024CD\n    _022611CC: .word 0x000001DA"
    );
    #endif
}

void ov91_022611D0(void) {
    /* Original at 0x022611D0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl sub_020182A0\n    add r0, r4, #0\n    add r0, #0x78\n    mov r1, #1\n    bl sub_020182A0\n    mov r0, #0x77\n    lsl r0, r0, #2\n    mov r3, #0\n    mov r2, #1\n    str r3, [r4, r0]\n    lsl r2, r2, #0xc\n    add r1, r0, #4\n    str r2, [r4, r1]\n    sub r1, r0, #4\n    mov r2, #1\n    strb r2, [r4, r1]\n    sub r0, r0, #3\n    strb r3, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov91_02261200(void) {
    /* Original at 0x02261200 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x75\n    lsl r2, r2, #2\n    str r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov91_02261208(void) {
    /* Original at 0x02261208 */
    /* Requires manual decompilation - 175 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x50\n    add r4, r0, #0\n    ldr r0, [sp, #0x68]\n    ldr r6, [r2]\n    str r0, [sp, #0x68]\n    ldr r0, [r2, #4]\n    ldr r7, [r2, #8]\n    str r0, [sp, #0x2c]\n    asr r0, r0, #0x1f\n    str r0, [sp, #0x30]\n    asr r0, r6, #0x1f\n    str r0, [sp, #0x34]\n    add r5, r1, #0\n    asr r0, r7, #0x1f\n    str r0, [sp, #0x38]\n    ldr r2, [r4]\n    str r3, [sp]\n    ldr r1, [sp, #0x34]\n    add r0, r6, #0\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    ldr r2, [r4, #4]\n    str r0, [sp, #0x3c]\n    str r1, [sp, #0x28]\n    ldr r0, [sp, #0x2c]\n    ldr r1, [sp, #0x30]\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    ldr r2, [r4, #8]\n    str r1, [sp, #0x20]\n    str r0, [sp, #0x40]\n    ldr r1, [sp, #0x38]\n    add r0, r7, #0\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    ldr r2, [r5, #8]\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x44]\n    ldr r1, [sp, #0x38]\n    add r0, r7, #0\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    ldr r2, [r5]\n    str r1, [sp, #0x10]\n    str r0, [sp, #0x48]\n    ldr r1, [sp, #0x34]\n    add r0, r6, #0\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    ldr r2, [r5, #4]\n    str r0, [sp, #0x4c]\n    add r6, r1, #0\n    ldr r0, [sp, #0x2c]\n    ldr r1, [sp, #0x30]\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov ip, r0\n    mov r7, #2\n    str r1, [sp, #8]\n    ldr r0, [sp, #0x3c]\n    lsl r7, r7, #0xa\n    mov r1, #0\n    add r2, r0, r7\n    ldr r0, [sp, #0x28]\n    ldr r3, [sp, #0x20]\n    adc r0, r1\n    str r0, [sp, #0x28]\n    lsl r0, r0, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r0\n    ldr r0, [sp, #0x40]\n    add r0, r0, r7\n    adc r3, r1\n    str r3, [sp, #0x20]\n    lsl r3, r3, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r3\n    add r2, r2, r0\n    ldr r0, [sp, #0x44]\n    ldr r3, [sp, #0x18]\n    add r0, r0, r7\n    adc r3, r1\n    str r3, [sp, #0x18]\n    lsl r3, r3, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r3\n    add r2, r2, r0\n    ldr r0, [sp]\n    sub r0, r0, r2\n    ldr r2, [sp, #0x48]\n    add r3, r2, r7\n    ldr r2, [sp, #0x10]\n    adc r2, r1\n    str r2, [sp, #0x10]\n    lsl r2, r2, #0x14\n    lsr r3, r3, #0xc\n    orr r3, r2\n    ldr r2, [sp, #0x4c]\n    add r2, r2, r7\n    adc r6, r1\n    lsl r6, r6, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r6\n    mov r6, ip\n    add r7, r6, r7\n    ldr r6, [sp, #8]\n    adc r6, r1\n    str r6, [sp, #8]\n    lsl r1, r6, #0x14\n    lsr r6, r7, #0xc\n    orr r6, r1\n    add r1, r2, r6\n    add r1, r3, r1\n    bl FX_Div\n    add r6, r0, #0\n    ldr r0, [r5]\n    asr r7, r6, #0x1f\n    asr r1, r0, #0x1f\n    add r2, r6, #0\n    add r3, r7, #0\n    bl _ll_mul\n    mov r3, #2\n    add r2, r0, #0\n    lsl r3, r3, #0xa\n    add r3, r2, r3\n    ldr r2, _02261378 ; =0x00000000\n    ldr r0, [r4]\n    adc r1, r2\n    lsr r2, r3, #0xc\n    lsl r1, r1, #0x14\n    orr r2, r1\n    add r1, r0, r2\n    ldr r0, [sp, #0x68]\n    add r2, r6, #0\n    str r1, [r0]\n    ldr r0, [r5, #4]\n    add r3, r7, #0\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    add r2, r0, #0\n    lsl r3, r3, #0xa\n    add r3, r2, r3\n    ldr r2, _02261378 ; =0x00000000\n    ldr r0, [r4, #4]\n    adc r1, r2\n    lsr r2, r3, #0xc\n    lsl r1, r1, #0x14\n    orr r2, r1\n    add r1, r0, r2\n    ldr r0, [sp, #0x68]\n    add r2, r6, #0\n    str r1, [r0, #4]\n    ldr r0, [r5, #8]\n    add r3, r7, #0\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r3, #2\n    ldr r2, [r4, #8]\n    mov r4, #0\n    lsl r3, r3, #0xa\n    add r3, r0, r3\n    adc r1, r4\n    lsl r0, r1, #0x14\n    lsr r1, r3, #0xc\n    orr r1, r0\n    ldr r0, [sp, #0x68]\n    add r1, r2, r1\n    str r1, [r0]\n    ldr r0, [sp, #0x6c]\n    str r6, [r0]\n    add sp, #0x50\n    pop {r3, r4, r5, r6, r7, pc}\n    _02261378: .word 0x00000000"
    );
    #endif
}

void ov91_0226137C(void) {
    /* Original at 0x0226137C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x66\n    lsl r2, r2, #2\n    str r1, [r0, r2]\n    bx lr"
    );
    #endif
}

void ov91_02261384(void) {
    /* Original at 0x02261384 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r1, #0\n    mov r1, #0x19\n    add r5, r0, #0\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, sp, #0\n    bl Camera_GetAngle\n    add r0, sp, #0\n    mov r1, #0x19\n    strh r4, [r0]\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, sp, #0\n    bl Camera_SetAnglePos\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_022613AC(void) {
    *(u8*)r0 = 0;
    ((u8*)r0)[1] = 0;
    ((u8*)r0)[2] = 0;
    ((u8*)r0)[3] = 0;
    ((u8*)r0)[4] = 0;
    ((u8*)r0)[5] = 0;
    ((u8*)r0)[6] = 0;
    ((u8*)r0)[7] = 0;
    ((u16*)r0)[4] = 2;
    ((u8*)r0)[6] = r1;
}

void ov91_022613C8(void) {
    /* Original at 0x022613C8 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldrh r0, [r4]\n    add r5, r1, #0\n    cmp r0, #3\n    bhi _022614CA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022613E2: ; jump table\n    mov r1, #4\n    ldrsh r1, [r4, r1]\n    ldrb r2, [r4, #6]\n    add r0, r5, #0\n    sub r1, r1, #1\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    bl ov91_022614FC\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    mov r0, #0\n    strh r0, [r4, #2]\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x10\n    blt _0226143E\n    mov r0, #3\n    strh r0, [r4]\n    mov r0, #0\n    strh r0, [r4, #2]\n    mov r1, #4\n    ldrsh r1, [r4, r1]\n    ldrb r2, [r4, #6]\n    add r0, r5, #0\n    bl ov91_022614FC\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #4\n    ldrsh r2, [r4, r1]\n    mov r3, #1\n    add r1, r3, #0\n    lsl r1, r2\n    ldr r0, _022614D0 ; =0x04001050\n    mov r2, #8\n    mov r3, #0\n    bl G2x_SetBlendAlpha_\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    add r0, r0, #1\n    strh r0, [r4, #2]\n    mov r0, #4\n    ldrsh r2, [r4, r0]\n    sub r5, r2, #2\n    sub r6, r2, #1\n    cmp r2, #0\n    bge _02261450\n    add r2, r2, #3\n    cmp r5, #0\n    bge _02261456\n    add r5, r5, #3\n    cmp r6, #0\n    bge _0226145C\n    add r6, r6, #3\n    mov r0, #2\n    ldrsh r0, [r4, r0]\n    mov r4, #1\n    lsl r1, r0, #4\n    asr r0, r1, #3\n    lsr r0, r0, #0x1c\n    add r0, r1, r0\n    asr r1, r0, #4\n    mov r0, #0x10\n    sub r3, r0, r1\n    add r1, r4, #0\n    lsl r1, r2\n    add r2, r4, #0\n    sub r0, r0, r3\n    str r0, [sp]\n    lsl r2, r5\n    lsl r4, r6\n    orr r4, r2\n    mov r2, #8\n    ldr r0, _022614D0 ; =0x04001050\n    orr r2, r4\n    bl G2x_SetBlendAlpha_\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #2\n    ldrsh r1, [r4, r0]\n    cmp r1, #8\n    blt _022614A2\n    mov r1, #0\n    ldr r0, _022614D0 ; =0x04001050\n    strh r1, [r4]\n    strh r1, [r0]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    add r1, r1, #1\n    strh r1, [r4, #2]\n    ldrsh r0, [r4, r0]\n    mov r5, #1\n    lsl r1, r0, #4\n    asr r0, r1, #2\n    lsr r0, r0, #0x1d\n    add r0, r1, r0\n    asr r3, r0, #3\n    mov r0, #0x10\n    sub r0, r0, r3\n    str r0, [sp]\n    mov r1, #4\n    ldrsh r2, [r4, r1]\n    add r1, r5, #0\n    ldr r0, _022614D0 ; =0x04001050\n    lsl r1, r2\n    mov r2, #8\n    bl G2x_SetBlendAlpha_\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _022614D0: .word 0x04001050"
    );
    #endif
}

void ov91_022614D4(void) {
    /* Original at 0x022614D4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldrb r0, [r4, #7]\n    add r0, r0, #1\n    strb r0, [r4, #7]\n    ldrb r0, [r4, #7]\n    cmp r0, #0xa\n    blo _022614FA\n    mov r0, #1\n    strh r0, [r4]\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    mov r1, #3\n    add r0, r0, #1\n    bl _s32_div_f\n    strh r1, [r4, #4]\n    mov r0, #0\n    strb r0, [r4, #7]\n    pop {r4, pc}"
    );
    #endif
}

void ov91_022614FC(void) {
    /* Original at 0x022614FC */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    lsl r0, r2, #1\n    str r1, [sp, #0xc]\n    add r1, r0, #2\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    lsl r0, r1, #0x18\n    mov r4, #0\n    lsr r7, r0, #0x18\n    ldr r0, [sp, #0xc]\n    sub r5, r0, r4\n    bpl _0226151E\n    add r5, r5, #3\n    mov r1, #2\n    add r0, r5, #4\n    sub r1, r1, r4\n    lsl r0, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r0, r0, #0x18\n    lsr r1, r1, #0x18\n    bl SetBgPriority\n    cmp r4, #0\n    bne _0226154E\n    mov r0, #0x20\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    add r1, r5, #4\n    lsl r1, r1, #0x18\n    mov r2, #0\n    ldr r0, [r6]\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    b _02261568\n    mov r0, #0x20\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x10]\n    add r1, r5, #4\n    str r0, [sp, #8]\n    lsl r1, r1, #0x18\n    mov r2, #0\n    ldr r0, [r6]\n    lsr r1, r1, #0x18\n    add r3, r2, #0\n    bl BgTilemapRectChangePalette\n    add r1, r5, #4\n    lsl r1, r1, #0x18\n    ldr r0, [r6]\n    lsr r1, r1, #0x18\n    bl BgCommitTilemapBufferToVram\n    add r4, r4, #1\n    cmp r4, #3\n    blt _02261516\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov91_02261580(void) {
    /* Original at 0x02261580 */
    /* Requires manual decompilation - 234 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x7c\n    add r5, r0, #0\n    add r6, r3, #0\n    add r0, #0x9c\n    add r4, r1, #0\n    str r6, [r0]\n    mov r1, #0x8c\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r7, r2, #0\n    str r6, [sp, #8]\n    add r1, #0xbc\n    ldr r0, [r4, r1]\n    add r1, r7, #0\n    mov r2, #0xa\n    mov r3, #0\n    bl AddCharResObjFromOpenNarc\n    str r0, [r5]\n    mov r1, #0x8c\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    add r1, #0xc0\n    ldr r0, [r4, r1]\n    add r1, r7, #0\n    mov r2, #0xb\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    str r0, [r5, #4]\n    mov r1, #0x8c\n    str r1, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    add r1, #0xc4\n    ldr r0, [r4, r1]\n    add r1, r7, #0\n    mov r2, #9\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #8]\n    mov r1, #0x8c\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r6, [sp, #8]\n    add r1, #0xc8\n    ldr r0, [r4, r1]\n    add r1, r7, #0\n    mov r2, #8\n    mov r3, #0\n    bl AddCellOrAnimResObjFromOpenNarc\n    str r0, [r5, #0xc]\n    ldr r0, [r5]\n    bl sub_0200AE18\n    cmp r0, #0\n    bne _02261608\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _02261616\n    bl GF_AssertFail\n    ldr r0, [r5]\n    bl sub_0200A740\n    ldr r0, [r5, #4]\n    bl sub_0200A740\n    mov r1, #0x8c\n    add r0, r1, #0\n    add r2, r1, #0\n    str r1, [sp]\n    sub r0, #0x8d\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    add r2, #0xbc\n    ldr r2, [r4, r2]\n    add r3, r1, #0\n    str r2, [sp, #0x14]\n    add r2, r1, #0\n    add r2, #0xc0\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x18]\n    add r2, r1, #0\n    add r2, #0xc4\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x1c]\n    add r2, r1, #0\n    add r2, #0xc8\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r5, #0\n    add r0, #0x10\n    add r2, r1, #0\n    bl CreateSpriteResourcesHeader\n    ldr r0, [r4, #0x1c]\n    str r0, [sp, #0x5c]\n    add r0, r5, #0\n    add r0, #0x10\n    str r0, [sp, #0x60]\n    ldr r0, _0226178C ; =0xFFFC0000\n    str r6, [sp, #0x78]\n    str r0, [sp, #0x64]\n    mov r0, #3\n    lsl r0, r0, #0x10\n    str r0, [sp, #0x68]\n    mov r0, #1\n    str r0, [sp, #0x70]\n    str r0, [sp, #0x74]\n    add r0, sp, #0x5c\n    bl Sprite_Create\n    mov r1, #0\n    str r0, [r5, #0x34]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x10\n    add r1, r6, #0\n    bl String_New\n    str r0, [r5, #0x5c]\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r1, r5, #0\n    ldr r0, [r4]\n    add r1, #0x38\n    mov r2, #3\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    add r0, r5, #0\n    add r0, #0x38\n    add r1, r6, #0\n    bl sub_02013910\n    mov r1, #1\n    str r0, [r5, #0x4c]\n    bl sub_02013948\n    mov r1, #1\n    add r3, r5, #0\n    add r2, r1, #0\n    add r3, #0x50\n    bl sub_02021AC8\n    cmp r0, #1\n    beq _022616D2\n    bl GF_AssertFail\n    mov r1, #0x96\n    str r1, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    add r1, #0xb6\n    ldr r0, [r4, r1]\n    mov r1, #0x10\n    mov r2, #7\n    mov r3, #0\n    bl AddPlttResObjFromNarc\n    str r0, [r5, #0x60]\n    bl sub_0200B00C\n    cmp r0, #0\n    bne _022616FA\n    bl GF_AssertFail\n    ldr r0, [r5, #0x60]\n    bl sub_0200A740\n    mov r0, #0x63\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    str r0, [sp, #0x2c]\n    add r0, r5, #0\n    add r0, #0x38\n    str r0, [sp, #0x30]\n    ldr r0, [r4, #0x1c]\n    str r0, [sp, #0x34]\n    ldr r0, [r5, #0x60]\n    bl SpriteTransfer_GetPaletteProxy\n    str r0, [sp, #0x38]\n    ldr r0, [r5, #0x34]\n    str r0, [sp, #0x3c]\n    ldr r0, [r5, #0x54]\n    str r0, [sp, #0x40]\n    mov r0, #6\n    mvn r0, r0\n    str r0, [sp, #0x44]\n    add r0, r0, #2\n    str r0, [sp, #0x48]\n    mov r0, #0\n    str r0, [sp, #0x4c]\n    str r0, [sp, #0x50]\n    mov r0, #1\n    str r0, [sp, #0x54]\n    str r6, [sp, #0x58]\n    ldr r1, [r5, #0x4c]\n    add r0, sp, #0x2c\n    bl TextOBJ_Create\n    mov r1, #0\n    str r0, [r5, #0x48]\n    bl TextOBJ_SetSpritesDrawFlag\n    add r0, r5, #0\n    add r0, #0x38\n    bl RemoveWindow\n    mov r2, #8\n    add r0, r5, #0\n    mov r3, #9\n    str r2, [sp]\n    ldr r1, _0226178C ; =0xFFFC0000\n    add r0, #0x64\n    lsl r2, r2, #0xe\n    lsl r3, r3, #0xe\n    bl ov91_0225D40C\n    mov r0, #4\n    mov r1, #3\n    lsl r1, r1, #0x10\n    str r0, [sp]\n    add r0, r5, #0\n    add r0, #0x7c\n    add r2, r1, #0\n    lsr r3, r1, #2\n    bl ov91_0225D40C\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x94\n    strh r1, [r0]\n    mov r0, #4\n    add r5, #0x96\n    strh r0, [r5]\n    add sp, #0x7c\n    pop {r4, r5, r6, r7, pc}\n    _0226178C: .word 0xFFFC0000"
    );
    #endif
}

void ov91_02261790(void) {
    /* Original at 0x02261790 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x48]\n    add r4, r1, #0\n    bl TextOBJ_Destroy\n    ldr r0, [r5, #0x60]\n    bl sub_0200B0A8\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5, #0x60]\n    bl DestroySingle2DGfxResObj\n    add r0, r5, #0\n    add r0, #0x50\n    bl sub_02021B5C\n    ldr r0, [r5, #0x4c]\n    bl sub_02013938\n    ldr r0, [r5, #0x5c]\n    bl String_Delete\n    ldr r0, [r5, #0x34]\n    bl Sprite_Delete\n    ldr r0, [r5]\n    bl sub_0200AEB0\n    ldr r0, [r5, #4]\n    bl sub_0200B0A8\n    mov r0, #0x52\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5, #4]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x15\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r5, #8]\n    bl DestroySingle2DGfxResObj\n    mov r0, #0x55\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r5, #0xc]\n    bl DestroySingle2DGfxResObj\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov91_02261808(void) {
    /* Original at 0x02261808 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    mov r0, #1\n    add r4, r1, #0\n    str r0, [sp]\n    add r1, r2, #0\n    mov r2, #2\n    ldr r0, [r5, #0x5c]\n    add r3, r2, #0\n    bl String16_FormatInteger\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r1, r5, #0\n    ldr r0, [r4]\n    add r1, #0x38\n    mov r2, #3\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0226188C ; =0x000F0E00\n    add r3, r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x5c]\n    add r0, #0x38\n    bl AddTextPrinterParameterizedWithColor\n    add r3, r5, #0\n    add r3, #0x9c\n    add r2, r5, #0\n    ldr r0, [r5, #0x48]\n    ldr r1, [r5, #0x4c]\n    ldr r3, [r3]\n    add r2, #0x38\n    bl TextOBJ_CopyFromBGWindow\n    add r0, r5, #0\n    add r0, #0x38\n    bl RemoveWindow\n    ldr r0, [r5, #0x48]\n    mov r1, #1\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r0, [r5, #0x34]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add r0, r5, #0\n    mov r1, #1\n    add r0, #0x98\n    strh r1, [r0]\n    mov r0, #0\n    add r5, #0x9a\n    strh r0, [r5]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0226188C: .word 0x000F0E00"
    );
    #endif
}

void ov91_02261890(void) {
    /* Original at 0x02261890 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r1, #0x98\n    ldrh r1, [r1]\n    cmp r1, #3\n    beq _022618AC\n    cmp r1, #2\n    bne _022618A6\n    add r1, r0, #0\n    mov r2, #0xc\n    add r1, #0x9a\n    strh r2, [r1]\n    mov r1, #3\n    add r0, #0x98\n    strh r1, [r0]\n    bx lr"
    );
    #endif
}

void ov91_022618B0(void) {
    /* Original at 0x022618B0 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r0, #0x98\n    ldrh r0, [r0]\n    add r4, r1, #0\n    cmp r0, #3\n    beq _0226191E\n    mov r0, #1\n    str r0, [sp]\n    add r1, r2, #0\n    mov r2, #2\n    ldr r0, [r5, #0x5c]\n    add r3, r2, #0\n    bl String16_FormatInteger\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r1, r5, #0\n    ldr r0, [r4]\n    add r1, #0x38\n    mov r2, #3\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02261924 ; =0x000F0E00\n    add r3, r1, #0\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r2, [r5, #0x5c]\n    add r0, #0x38\n    bl AddTextPrinterParameterizedWithColor\n    add r3, r5, #0\n    add r3, #0x9c\n    add r2, r5, #0\n    ldr r0, [r5, #0x48]\n    ldr r1, [r5, #0x4c]\n    ldr r3, [r3]\n    add r2, #0x38\n    bl TextOBJ_CopyFromBGWindow\n    add r0, r5, #0\n    add r0, #0x38\n    bl RemoveWindow\n    mov r0, #0\n    add r5, #0x96\n    strh r0, [r5]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _02261924: .word 0x000F0E00"
    );
    #endif
}

void ov91_02261928(void) {
    /* Original at 0x02261928 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, #0x98\n    ldrh r0, [r0]\n    cmp r0, #3\n    bhi _022619A0\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02261942: ; jump table\n    mov r0, #0x94\n    ldrsh r0, [r4, r0]\n    cmp r0, #8\n    bge _0226195C\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x94\n    strh r1, [r0]\n    b _022619A0\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x98\n    strh r1, [r0]\n    b _022619A0\n    mov r0, #0x9a\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _02261978\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x9a\n    strh r1, [r0]\n    b _022619A0\n    mov r0, #0x94\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _0226198A\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x94\n    strh r1, [r0]\n    b _022619A0\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x98\n    strh r1, [r0]\n    ldr r0, [r4, #0x48]\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r0, [r4, #0x34]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r1, #0x96\n    ldrsh r0, [r4, r1]\n    cmp r0, #4\n    bge _022619C0\n    add r2, r0, #1\n    add r0, r4, #0\n    add r0, #0x96\n    strh r2, [r0]\n    add r0, r4, #0\n    ldrsh r1, [r4, r1]\n    add r0, #0x8c\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0x7c\n    bl ov91_0225D46C\n    mov r0, #0x94\n    ldrsh r0, [r4, r0]\n    str r0, [r4, #0x74]\n    add r0, r4, #0\n    add r0, #0x64\n    bl ov91_0225D46C\n    ldr r0, [r4, #0x64]\n    add r1, sp, #0\n    str r0, [sp]\n    ldr r0, [r4, #0x7c]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x34]\n    bl Sprite_SetMatrix\n    ldr r0, [r4, #0x48]\n    bl sub_02013728\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov91_022619E8(void) {
    /* Original at 0x022619E8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    strh r2, [r0]\n    mov r1, #1\n    strb r1, [r0, #2]\n    strb r2, [r0, #3]\n    ldr r3, _022619F8 ; =PlaySE\n    ldr r0, _022619FC ; =0x00000586\n    bx r3\n    _022619F8: .word PlaySE\n    _022619FC: .word 0x00000586"
    );
    #endif
}

void ov91_02261A00(void) {
    /* Original at 0x02261A00 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldrb r0, [r4, #2]\n    add r5, r1, #0\n    add r6, r2, #0\n    cmp r0, #0\n    beq _02261B08\n    ldrh r0, [r4]\n    cmp r0, #5\n    bhi _02261B08\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02261A22: ; jump table\n    mov r0, #3\n    ldrsb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, #3]\n    ldrsb r1, [r4, r0]\n    mov r0, #0x19\n    lsl r0, r0, #0xc\n    mul r0, r1\n    mov r1, #0x3a\n    bl _s32_div_f\n    mov r1, #1\n    add r2, r0, #0\n    lsl r1, r1, #0xc\n    add r0, r5, #0\n    add r1, r2, r1\n    bl ov91_02261200\n    mov r0, #3\n    ldrsb r1, [r4, r0]\n    mov r0, #0x96\n    mul r0, r1\n    mov r1, #0x3a\n    bl _s32_div_f\n    add r2, r0, #0\n    mov r0, #7\n    add r1, r0, #0\n    add r1, #0xf9\n    add r1, r2, r1\n    bl GF_SndHandleSetTempoRatio\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    cmp r0, #0xc\n    bne _02261A7C\n    ldr r0, _02261B0C ; =0x00000587\n    bl PlaySE\n    mov r0, #3\n    ldrsb r0, [r4, r0]\n    cmp r0, #0x3a\n    blt _02261B08\n    ldrh r0, [r4]\n    add sp, #4\n    add r0, r0, #1\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #4\n    mov r1, #0x10\n    mov r2, #0\n    mov r3, #0x3f\n    bl StartBrightnessTransition\n    ldrh r0, [r4]\n    add sp, #4\n    add r0, r0, #1\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #1\n    bl IsBrightnessTransitionActive\n    cmp r0, #1\n    bne _02261B08\n    add r0, r5, #0\n    bl ov91_022611D0\n    mov r1, #2\n    add r0, r5, #0\n    lsl r1, r1, #0xc\n    bl ov91_02261200\n    add r0, r6, #0\n    mov r1, #1\n    bl ov91_02260364\n    ldrh r0, [r4]\n    add sp, #4\n    add r0, r0, #1\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0xe\n    mov r1, #0\n    mov r2, #0x10\n    mov r3, #0x3f\n    bl StartBrightnessTransition\n    ldrh r0, [r4]\n    add sp, #4\n    add r0, r0, #1\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #1\n    bl IsBrightnessTransitionActive\n    cmp r0, #1\n    bne _02261B08\n    ldrh r0, [r4]\n    add sp, #4\n    add r0, r0, #1\n    strh r0, [r4]\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0\n    strb r0, [r4, #2]\n    strh r0, [r4]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _02261B0C: .word 0x00000587"
    );
    #endif
}

void ov91_02261B10(void) {
    /* Original at 0x02261B10 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #7\n    add r1, r0, #0\n    ldr r3, _02261B1C ; =GF_SndHandleSetTempoRatio\n    add r1, #0xf9\n    bx r3\n    nop\n    _02261B1C: .word GF_SndHandleSetTempoRatio"
    );
    #endif
}

void ov91_02261B20(void) {
    /* Original at 0x02261B20 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02261B24 ; =ov91_02262754\n    bx lr\n    _02261B24: .word ov91_02262754"
    );
    #endif
}

u8 ov91_02261B28(void) {
    return 8;
}

void ov91_02261B2C(void) {
    ov91_02261B20();
    ov91_02261B28();
    sub_0203410C(r4, r0, r5);
}

u8 ov91_02261B48(void) {
    return 0;
}

void ov91_02261B4C(void) {
    ov91_0225CA64();
}

void ov91_02261B58(void) {
    ov91_0225CA6C();
}

void ov91_02261B64(void) {
    /* Original at 0x02261B64 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r5, r0, #0\n    add r6, r3, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov91_0225CA90\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02261B88\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r5, #0\n    bl ov91_0225CA74\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov91_02261B8C(void) {
    ov91_0225CA9C();
}

void ov91_02261B9C(void) {
    ov91_0225CABC();
}

void ov91_02261BAC(void) {
    ov91_0225CAEC();
}

void ov91_02261BBC(void) {
    ov91_0225CB50();
}

void ov91_02261BC8(void) {
    ov91_0225CAE0();
}

u8 ov91_02261BD8(void) {
    return 0x14;
}

u8 ov91_02261BDC(void) {
    return 0x10;
}

u8 ov91_02261BE0(void) {
    return 4;
}

u8 ov91_02261BE4(void) {
    return 4;
}
