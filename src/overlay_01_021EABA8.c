/* Decompiled from asm/overlay_01_021EABA8.s */
#include "global.h"

void ov01_021EABA8(void) {
    /* Original at 0x021EABA8 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp, #0xc]\n    add r5, r1, #0\n    add r6, r2, #0\n    mov r0, #0x24\n    ldr r1, _021EAC2C ; =ov01_02206478\n    mul r0, r6\n    add r7, r3, #0\n    add r4, r1, r0\n    cmp r6, #0x11\n    blo _021EABC4\n    bl GF_AssertFail\n    mov r0, #4\n    bl Camera_New\n    str r0, [r5, #0x24]\n    ldrh r0, [r4, #0xc]\n    add r2, r4, #4\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x24]\n    str r0, [sp, #8]\n    ldrh r3, [r4, #0xe]\n    ldr r0, [sp, #0xc]\n    ldr r1, [r4]\n    bl Camera_Init_FromTargetDistanceAndAngle\n    ldr r0, [r5, #0x24]\n    bl Camera_SetStaticPtr\n    ldr r0, [r4, #0x10]\n    ldr r1, [r4, #0x14]\n    ldr r2, [r5, #0x24]\n    bl Camera_SetPerspectiveClippingPlane\n    add r4, #0x18\n    ldr r1, [r5, #0x24]\n    add r0, r4, #0\n    bl Camera_OffsetLookAtPosAndTarget\n    cmp r7, #0\n    beq _021EAC16\n    ldr r0, [r5, #0x24]\n    mov r1, #6\n    str r0, [sp]\n    mov r0, #7\n    mov r2, #2\n    mov r3, #4\n    bl Camera_History_New\n    mov r0, #4\n    bl ov01_021EAC4C\n    str r0, [r5, #0x28]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov01_021EAC6C\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EAC2C: .word ov01_02206478"
    );
    #endif
}

void ov01_021EAC30(void) {
    ov01_021EAC64(*((u32*)(r0 + 0x28)));
    Camera_UnsetStaticPtr();
    Camera_History_Delete(*((u32*)(r4 + 0x24)));
    Camera_Delete(*((u32*)(r4 + 0x24)));
}

void ov01_021EAC4C(void) {
    Heap_Alloc(0x34);
    MI_CpuFill8(0, 0x34);
}

void ov01_021EAC64(void) {
    Heap_Free();
}

void ov01_021EAC6C(void) {
    /* Original at 0x021EAC6C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r4, [r0, #0x28]\n    ldr r0, [r0, #0x24]\n    str r0, [r4]\n    ldr r0, _021EACB4 ; =ov01_02209B60\n    str r1, [r4, #0x30]\n    ldr r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    beq _021EACAE\n    add r0, sp, #0\n    mov r1, #0\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    strh r1, [r0, #4]\n    strh r1, [r0, #6]\n    ldr r1, _021EACB8 ; =ov01_02206464\n    sub r5, r2, #1\n    mov r3, #0x14\n    mul r3, r5\n    add r5, r1, r3\n    ldrh r3, [r1, r3]\n    add r1, sp, #0\n    strh r3, [r1]\n    strb r2, [r4, #7]\n    ldr r1, [r4]\n    bl Camera_SetAnglePos\n    ldr r1, [r4]\n    add r0, r5, #4\n    bl Camera_OffsetLookAtPosAndTarget\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _021EACB4: .word ov01_02209B60\n    _021EACB8: .word ov01_02206464"
    );
    #endif
}

void ov01_021EACBC(void) {
    /* Original at 0x021EACBC */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    cmp r1, #0\n    beq _021EAD74\n    ldr r0, [r5, #0x28]\n    cmp r0, #0\n    beq _021EACEA\n    ldrb r0, [r5, #7]\n    cmp r0, r1\n    bne _021EACE4\n    ldrh r0, [r5, #0x2e]\n    add r0, r0, #1\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1f\n    sub r1, r1, r2\n    mov r0, #0x1f\n    ror r1, r0\n    add r0, r2, r1\n    strh r0, [r5, #0x2e]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, [r5, #0x30]\n    mov r0, #0x24\n    mul r0, r2\n    strb r1, [r5, #7]\n    mov r2, #1\n    str r2, [r5, #0x28]\n    ldr r2, _021EAD78 ; =ov01_02209B60\n    ldr r3, _021EAD7C ; =ov01_02206478\n    ldr r2, [r2]\n    add r0, r3, r0\n    cmp r2, #0\n    bne _021EAD26\n    ldrh r0, [r0, #4]\n    sub r1, r1, #1\n    add r2, r5, #0\n    strh r0, [r5, #0x2c]\n    mov r0, #0x14\n    add r4, r1, #0\n    mul r4, r0\n    ldr r0, _021EAD80 ; =ov01_02206464\n    add r2, #8\n    add r3, r0, r4\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldrb r1, [r5, #7]\n    ldr r0, _021EAD78 ; =ov01_02209B60\n    str r1, [r0]\n    b _021EAD6A\n    sub r2, r1, #1\n    mov r1, #0x14\n    add r4, r2, #0\n    mul r4, r1\n    ldr r1, _021EAD80 ; =ov01_02206464\n    add r6, r5, #0\n    ldrh r1, [r1, r4]\n    add r6, #0xc\n    mov r3, #0\n    strh r1, [r5, #0x2c]\n    ldrh r0, [r0, #4]\n    add r2, r6, #0\n    strh r0, [r5, #8]\n    ldr r0, _021EAD84 ; =ov01_02206464 + 4\n    strh r3, [r5, #0xa]\n    add r7, r0, r4\n    ldmia r7!, {r0, r1}\n    stmia r6!, {r0, r1}\n    ldr r0, [r7]\n    str r0, [r6]\n    ldr r1, [r2]\n    sub r0, r3, #1\n    mul r0, r1\n    str r0, [r2]\n    ldr r1, [r5, #0x10]\n    sub r0, r3, #1\n    mul r0, r1\n    str r0, [r5, #0x10]\n    ldr r1, [r5, #0x14]\n    sub r0, r3, #1\n    mul r0, r1\n    str r0, [r5, #0x14]\n    ldr r0, _021EAD78 ; =ov01_02209B60\n    str r3, [r0]\n    ldr r0, _021EAD88 ; =ov01_02206464 + 16\n    ldr r0, [r0, r4]\n    strb r0, [r5, #4]\n    mov r0, #0\n    strb r0, [r5, #5]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021EAD78: .word ov01_02209B60\n    _021EAD7C: .word ov01_02206478\n    _021EAD80: .word ov01_02206464\n    _021EAD84: .word ov01_02206464 + 4\n    _021EAD88: .word ov01_02206464 + 16"
    );
    #endif
}

void ov01_021EAD8C(void) {
    /* Original at 0x021EAD8C */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r0, [r4, #0x28]\n    cmp r0, #0\n    beq _021EAE46\n    ldrh r0, [r4, #0x2e]\n    cmp r0, #0\n    bne _021EADD6\n    ldrb r0, [r4, #5]\n    add r1, r4, #0\n    add r2, r4, #0\n    add r0, r0, #1\n    strb r0, [r4, #5]\n    ldrb r0, [r4, #4]\n    add r1, #0x2c\n    add r2, #8\n    str r0, [sp]\n    ldrb r3, [r4, #5]\n    ldr r0, [r4]\n    bl ov01_021EAE50\n    add r1, r4, #0\n    ldrb r2, [r4, #5]\n    ldrb r3, [r4, #4]\n    ldr r0, [r4]\n    add r1, #0xc\n    bl ov01_021EAEA4\n    ldrb r1, [r4, #5]\n    ldrb r0, [r4, #4]\n    cmp r1, r0\n    blo _021EAE46\n    mov r0, #0\n    add sp, #0x10\n    str r0, [r4, #0x28]\n    pop {r3, r4, r5, pc}\n    add r3, r4, #0\n    add r3, #0xc\n    ldmia r3!, {r0, r1}\n    add r2, sp, #4\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r1, [sp, #4]\n    mov r0, #0\n    add r2, r1, #0\n    mvn r0, r0\n    mul r2, r0\n    ldr r1, [sp, #8]\n    str r2, [sp, #4]\n    add r2, r1, #0\n    mul r2, r0\n    ldr r1, [sp, #0xc]\n    str r2, [sp, #8]\n    mul r0, r1\n    str r0, [sp, #0xc]\n    ldrb r5, [r4, #4]\n    add r1, r4, #0\n    add r2, r4, #0\n    str r5, [sp]\n    ldrb r3, [r4, #5]\n    ldr r0, [r4]\n    add r1, #8\n    sub r3, r5, r3\n    lsl r3, r3, #0x18\n    add r2, #0x2c\n    lsr r3, r3, #0x18\n    bl ov01_021EAE50\n    ldrb r2, [r4, #5]\n    ldrb r3, [r4, #4]\n    ldr r0, [r4]\n    add r1, sp, #4\n    bl ov01_021EAEA4\n    ldrb r0, [r4, #5]\n    sub r0, r0, #1\n    strb r0, [r4, #5]\n    ldrb r0, [r4, #5]\n    cmp r0, #0\n    bne _021EAE46\n    ldr r0, _021EAE4C ; =ov01_02209B60\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _021EAE3C\n    mov r1, #0\n    b _021EAE3E\n    ldrb r1, [r4, #7]\n    str r1, [r0]\n    mov r0, #0\n    strh r0, [r4, #0x2e]\n    str r0, [r4, #0x28]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _021EAE4C: .word ov01_02209B60"
    );
    #endif
}

void ov01_021EAE50(void) {
    /* Original at 0x021EAE50 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, sp, #0\n    mov r0, #0\n    strh r0, [r4]\n    strh r0, [r4, #2]\n    strh r0, [r4, #4]\n    strh r0, [r4, #6]\n    ldrh r4, [r1]\n    ldrh r0, [r2]\n    cmp r0, r4\n    blo _021EAE7E\n    sub r0, r0, r4\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    add r0, r1, #0\n    add r1, sp, #8\n    ldrb r1, [r1, #0x10]\n    mul r0, r3\n    bl _s32_div_f\n    b _021EAE92\n    sub r0, r4, r0\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    add r0, r1, #0\n    add r1, sp, #8\n    ldrb r1, [r1, #0x10]\n    mul r0, r3\n    bl _s32_div_f\n    neg r0, r0\n    add r1, r4, r0\n    add r0, sp, #0\n    strh r1, [r0]\n    add r0, sp, #0\n    add r1, r5, #0\n    bl Camera_SetAnglePos\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021EAEA4(void) {
    /* Original at 0x021EAEA4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r0, #0\n    add r5, r1, #0\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    add r4, r2, #0\n    add r6, r3, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021EAEE0\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl ov01_021EAEE0\n    str r0, [sp, #8]\n    add r0, sp, #0\n    add r1, r7, #0\n    bl Camera_OffsetLookAtPosAndTarget\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_021EAEE0(void) {
    /* Original at 0x021EAEE0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r7, r2, #0\n    add r5, r0, #0\n    mul r0, r4\n    add r1, r7, #0\n    bl _s32_div_f\n    add r6, r0, #0\n    sub r0, r4, #1\n    mul r0, r5\n    add r1, r7, #0\n    bl _s32_div_f\n    sub r0, r6, r0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}
