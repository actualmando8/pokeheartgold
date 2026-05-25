/* Decompiled from asm/unk_02023694.s */
#include "global.h"

void sub_02023694(void) {
    /* Original at 0x02023694 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    strb r2, [r0]\n    strb r2, [r0, #1]\n    str r2, [r0, #4]\n    add r1, r0, #0\n    str r2, [r0, #8]\n    add r1, #0xd0\n    str r2, [r1]\n    add r1, r0, #0\n    add r1, #0xd4\n    str r2, [r1]\n    add r1, r0, #0\n    add r1, #0xd8\n    str r2, [r1]\n    add r1, r0, #0\n    add r1, #0xdc\n    str r2, [r1]\n    strb r2, [r0, #3]\n    bx lr"
    );
    #endif
}

void sub_020236BC(void) {
    /* Original at 0x020236BC */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    str r3, [r0, #0x28]\n    add r1, r0, #0\n    str r3, [r0, #0x2c]\n    add r1, #0x84\n    str r3, [r1]\n    add r1, r0, #0\n    add r1, #0x88\n    str r3, [r1]\n    add r1, r0, #0\n    add r1, #0x8c\n    str r3, [r1]\n    add r1, r0, #0\n    add r1, #0x90\n    add r2, r0, #0\n    str r3, [r1]\n    add r2, #0xa0\n    mov r1, #0x10\n    strb r3, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _020236E0\n    add r2, r0, #0\n    mov r1, #0\n    add r2, #0x94\n    str r1, [r2]\n    add r2, r0, #0\n    add r2, #0x98\n    str r1, [r2]\n    add r2, r0, #0\n    add r2, #0x9c\n    str r1, [r2]\n    add r2, r0, #0\n    add r2, #0xb0\n    str r1, [r2]\n    str r1, [r0]\n    str r1, [r0, #4]\n    mov r2, #1\n    str r1, [r0, #8]\n    lsl r2, r2, #0xc\n    str r2, [r0, #0xc]\n    str r2, [r0, #0x10]\n    str r2, [r0, #0x14]\n    add r2, r0, #0\n    str r1, [r0, #0x18]\n    add r2, #0xb6\n    strh r1, [r2]\n    add r2, r0, #0\n    add r2, #0xb4\n    strb r1, [r2]\n    add r2, r0, #0\n    add r2, #0xbc\n    str r1, [r2]\n    add r2, r0, #0\n    add r2, #0xc0\n    str r1, [r2]\n    add r2, r0, #0\n    add r2, #0x24\n    strb r1, [r2]\n    str r1, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void sub_02023738(void) {
    /* Original at 0x02023738 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _02023774 ; =_021D2208\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0202374A\n    bl GF_AssertFail\n    mov r1, #0xe0\n    add r0, r4, #0\n    mul r1, r6\n    bl Heap_Alloc\n    ldr r7, _02023774 ; =_021D2208\n    mov r4, #0\n    str r0, [r7]\n    str r6, [r7, #4]\n    cmp r6, #0\n    ble _02023772\n    add r5, r4, #0\n    ldr r0, [r7]\n    add r0, r0, r5\n    bl sub_02023694\n    add r4, r4, #1\n    add r5, #0xe0\n    cmp r4, r6\n    blt _02023762\n    pop {r3, r4, r5, r6, r7, pc}\n    _02023774: .word _021D2208"
    );
    #endif
}

void sub_02023778(void) {
    /* Original at 0x02023778 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r6, _020237AC ; =_021D2208\n    mov r4, #0\n    ldr r0, [r6, #4]\n    cmp r0, #0\n    ble _02023798\n    add r5, r4, #0\n    ldr r0, [r6]\n    add r0, r0, r5\n    bl sub_02023874\n    ldr r0, [r6, #4]\n    add r4, r4, #1\n    add r5, #0xe0\n    cmp r4, r0\n    blt _02023786\n    ldr r0, _020237AC ; =_021D2208\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _020237AC ; =_021D2208\n    mov r1, #0\n    str r1, [r0]\n    str r1, [r0, #4]\n    pop {r4, r5, r6, pc}\n    nop\n    _020237AC: .word _021D2208"
    );
    #endif
}

void sub_020237B0(void) {
    /* Original at 0x020237B0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r6, _020237E8 ; =_021D2208\n    mov r4, #0\n    ldr r0, [r6, #4]\n    cmp r0, #0\n    ble _020237E4\n    add r5, r4, #0\n    mov r7, #2\n    ldr r0, [r6]\n    add r0, r0, r5\n    ldrb r1, [r0, #1]\n    cmp r1, #1\n    bne _020237CE\n    bl sub_02023950\n    ldr r0, [r6]\n    add r1, r0, r5\n    ldrb r0, [r1, #3]\n    cmp r0, #1\n    bne _020237DA\n    strb r7, [r1, #3]\n    ldr r0, [r6, #4]\n    add r4, r4, #1\n    add r5, #0xe0\n    cmp r4, r0\n    blt _020237C0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020237E8: .word _021D2208"
    );
    #endif
}

void sub_020237EC(void) {
    /* Original at 0x020237EC */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0202391C\n    add r4, r0, #0\n    bne _02023800\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    strb r0, [r4]\n    strb r0, [r4, #1]\n    ldr r2, [r5]\n    mov r1, #0xc4\n    ldr r0, [r5, #4]\n    mul r1, r2\n    bl Heap_Alloc\n    str r0, [r4, #4]\n    ldr r0, [r5]\n    str r0, [r4, #8]\n    add r0, r4, #0\n    add r0, #0xc\n    bl sub_020236BC\n    add r1, r4, #0\n    add r0, r4, #0\n    add r1, #0xc\n    add r0, #0xc8\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xcc\n    str r1, [r0]\n    ldr r1, [r5]\n    ldr r0, [r5, #4]\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    add r1, r4, #0\n    add r1, #0xd0\n    str r0, [r1]\n    add r0, r4, #0\n    bl sub_02024248\n    ldr r0, [r5, #4]\n    mov r1, #0x10\n    bl Heap_Alloc\n    add r1, r4, #0\n    add r1, #0xd8\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    ldr r1, [r5, #4]\n    mov r2, #4\n    bl HeapExp_FndInitAllocator\n    ldr r0, [r5]\n    ldr r1, [r5, #4]\n    bl sub_0202068C\n    add r1, r4, #0\n    add r1, #0xdc\n    str r0, [r1]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02023874(void) {
    /* Original at 0x02023874 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _02023882\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, pc}\n    ldrb r1, [r4]\n    cmp r1, #0\n    beq _020238B6\n    bl sub_020238BC\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    add r0, r4, #0\n    add r0, #0xd0\n    ldr r0, [r0]\n    bl Heap_Free\n    add r0, r4, #0\n    add r0, #0xd8\n    ldr r0, [r0]\n    bl Heap_Free\n    add r0, r4, #0\n    add r0, #0xdc\n    ldr r0, [r0]\n    bl sub_020206C8\n    add r0, r4, #0\n    bl sub_02023694\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_020238BC(void) {
    /* Original at 0x020238BC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    cmp r0, #0\n    bne _020238CC\n    bne _020238C8\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldrb r1, [r0]\n    cmp r1, #0\n    beq _020238F2\n    add r1, r0, #0\n    add r1, #0xc8\n    add r4, r0, #0\n    ldr r1, [r1]\n    add r4, #0xc\n    cmp r1, r4\n    beq _020238F2\n    add r0, r1, #0\n    add r0, #0xbc\n    ldr r5, [r0]\n    add r0, r1, #0\n    bl sub_02023DA4\n    add r1, r5, #0\n    cmp r5, r4\n    bne _020238E0\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020238F8(void) {
    GF_AssertFail(0, 1);
}

void sub_02023910(void) {
    /* Original at 0x02023910 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #3]\n    cmp r1, #2\n    bne _0202391A\n    mov r1, #0\n    strb r1, [r0, #3]\n    bx lr"
    );
    #endif
}

void sub_0202391C(void) {
    /* Original at 0x0202391C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r0, _0202394C ; =_021D2208\n    mov r1, #0\n    ldr r3, [r0, #4]\n    cmp r3, #0\n    ble _02023944\n    ldr r4, [r0]\n    add r2, r4, #0\n    ldrb r0, [r2]\n    cmp r0, #0\n    bne _0202393C\n    mov r0, #0xe0\n    mul r0, r1\n    add r0, r4, r0\n    pop {r3, r4}\n    bx lr\n    add r1, r1, #1\n    add r2, #0xe0\n    cmp r1, r3\n    blt _0202392C\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    nop\n    _0202394C: .word _021D2208"
    );
    #endif
}

void sub_02023950(void) {
    /* Original at 0x02023950 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    bne _0202395C\n    bl GF_AssertFail\n    add r0, sp, #0\n    bl MTX_Identity33_\n    add r0, r5, #0\n    add r0, #0xc8\n    ldr r4, [r0]\n    add r5, #0xc\n    cmp r4, r5\n    beq _020239CC\n    add r6, sp, #0\n    add r0, r4, #0\n    add r0, #0x24\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _020239C4\n    ldr r2, [r4, #0x20]\n    cmp r2, #0\n    beq _02023986\n    ldr r1, [r4, #0x1c]\n    add r0, r4, #0\n    blx r2\n    add r0, r4, #0\n    bl sub_020243FC\n    add r0, r4, #0\n    add r0, #0xb4\n    ldrb r0, [r0]\n    cmp r0, #3\n    bne _0202399E\n    add r0, r4, #0\n    bl sub_02023FEC\n    b _020239A8\n    cmp r0, #2\n    bne _020239A8\n    add r0, r4, #0\n    bl sub_02023FC0\n    ldr r2, [r4, #0x18]\n    cmp r2, #0\n    bne _020239B0\n    add r2, r6, #0\n    add r0, r4, #0\n    add r3, r4, #0\n    add r0, #0x30\n    add r1, r4, #0\n    add r3, #0xc\n    bl GF3dRender_DrawModel\n    add r0, r4, #0\n    bl sub_0202441C\n    add r4, #0xbc\n    ldr r4, [r4]\n    cmp r4, r5\n    bne _02023970\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_020239D0(void) {
    /* Original at 0x020239D0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r6, [r5, #0x28]\n    add r4, r1, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_02023C04\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023C20\n    add r0, r6, #0\n    add r1, r5, #0\n    add r2, r4, #0\n    bl sub_02023C9C\n    add r0, r5, #0\n    add r0, #0xb4\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02023A06\n    add r6, #0xc\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_020242E4\n    add r0, r5, #0\n    mov r1, #2\n    add r0, #0xb4\n    strb r1, [r0]\n    ldr r0, [r4, #8]\n    mov r1, #0\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    add r0, #0xb6\n    strh r1, [r0]\n    add r5, #0xb8\n    str r1, [r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02023A20(void) {
    /* Original at 0x02023A20 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r6, [r5, #0x28]\n    add r4, r1, #0\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_02023C04\n    add r0, r5, #0\n    add r0, #0xb4\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _02023A4A\n    add r0, r5, #0\n    add r1, r5, #0\n    add r2, r5, #0\n    add r0, #0x94\n    add r1, #0x98\n    add r2, #0x9c\n    bl sub_02023B70\n    add r0, r5, #0\n    ldr r1, [r4, #0x1c]\n    add r0, #0x94\n    str r1, [r0]\n    add r0, r5, #0\n    ldr r1, [r4, #0x20]\n    add r0, #0x98\n    str r1, [r0]\n    add r0, r5, #0\n    ldr r1, [r4, #0x24]\n    add r0, #0x9c\n    str r1, [r0]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023CF0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02023D24\n    add r0, r5, #0\n    add r0, #0xb4\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02023A86\n    add r6, #0xc\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_020242E4\n    add r0, r5, #0\n    mov r1, #3\n    add r0, #0xb4\n    strb r1, [r0]\n    ldr r0, [r4, #8]\n    mov r1, #0\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    add r0, #0xb6\n    strh r1, [r0]\n    add r5, #0xb8\n    str r1, [r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02023AA0(void) {
    /* Original at 0x02023AA0 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl NNS_G3dTexGetRequiredSize\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl NNS_G3dTex4x4GetRequiredSize\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl NNS_G3dPlttGetRequiredSize\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    beq _02023ADE\n    ldr r3, _02023B30 ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r1, #0\n    ldr r3, [r3]\n    add r2, r1, #0\n    blx r3\n    str r0, [r4]\n    cmp r0, #0\n    bne _02023AE2\n    bl GF_AssertFail\n    b _02023AE2\n    mov r0, #0\n    str r0, [r4]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _02023AFE\n    ldr r3, _02023B30 ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r1, #1\n    ldr r3, [r3]\n    mov r2, #0\n    blx r3\n    str r0, [r6]\n    cmp r0, #0\n    bne _02023B02\n    bl GF_AssertFail\n    b _02023B02\n    mov r0, #0\n    str r0, [r6]\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _02023B26\n    ldr r3, _02023B34 ; =NNS_GfdDefaultFuncAllocPlttVram\n    mov r1, #2\n    ldrh r2, [r5, #0x20]\n    lsl r1, r1, #0xe\n    ldr r3, [r3]\n    and r1, r2\n    mov r2, #0\n    blx r3\n    str r0, [r7]\n    cmp r0, #0\n    bne _02023B2A\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [r7]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02023B30: .word NNS_GfdDefaultFuncAllocTexVram\n    _02023B34: .word NNS_GfdDefaultFuncAllocPlttVram"
    );
    #endif
}

void sub_02023B38(void) {
    NNS_G3dTexReleaseTexKey();
    NNS_G3dPlttReleasePlttKey(r5);
}

void sub_02023B4C(void) {
    /* Original at 0x02023B4C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r2]\n    ldr r2, [r3]\n    add r5, r0, #0\n    bl NNS_G3dTexSetTexKey\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    ldr r1, [r1]\n    bl NNS_G3dPlttSetPlttKey\n    add r0, r4, #0\n    add r1, r5, #0\n    bl NNS_G3dBindMdlSet\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02023B70(void) {
    /* Original at 0x02023B70 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, [r0]\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r0, #0\n    beq _02023B82\n    ldr r1, _02023B9C ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02023B8E\n    ldr r1, _02023B9C ; =NNS_GfdDefaultFuncFreeTexVram\n    ldr r1, [r1]\n    blx r1\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02023B9A\n    ldr r1, _02023BA0 ; =NNS_GfdDefaultFuncFreePlttVram\n    ldr r1, [r1]\n    blx r1\n    pop {r3, r4, r5, pc}\n    _02023B9C: .word NNS_GfdDefaultFuncFreeTexVram\n    _02023BA0: .word NNS_GfdDefaultFuncFreePlttVram"
    );
    #endif
}

void sub_02023BA4(void) {
    /* Original at 0x02023BA4 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r5, r1, #0\n    cmp r4, #0\n    beq _02023BB4\n    cmp r5, #0\n    bne _02023BBA\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl NNS_G3dTexGetRequiredSize\n    str r0, [sp]\n    add r0, r4, #0\n    bl NNS_G3dTex4x4GetRequiredSize\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl NNS_G3dPlttGetRequiredSize\n    add r4, r0, #0\n    add r0, r5, #0\n    bl NNS_G3dTexGetRequiredSize\n    add r6, r0, #0\n    add r0, r5, #0\n    bl NNS_G3dTex4x4GetRequiredSize\n    add r7, r0, #0\n    add r0, r5, #0\n    bl NNS_G3dPlttGetRequiredSize\n    ldr r1, [sp]\n    cmp r1, r6\n    bne _02023BF6\n    ldr r1, [sp, #4]\n    cmp r1, r7\n    bne _02023BF6\n    cmp r4, r0\n    beq _02023BFC\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02023C04(void) {
    sub_02020738(0);
}

void sub_02023C20(void) {
    /* Original at 0x02023C20 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x8c\n    ldr r4, [r0]\n    add r0, r1, #0\n    add r1, r5, #0\n    add r2, r5, #0\n    add r1, #0x88\n    add r2, #0x8c\n    bl sub_02024328\n    add r1, r5, #0\n    add r1, #0x84\n    str r0, [r1]\n    add r1, r5, #0\n    add r1, #0x88\n    add r0, r5, #0\n    ldr r1, [r1]\n    add r0, #0x30\n    bl NNS_G3dRenderObjInit\n    add r0, r5, #0\n    add r0, #0xb4\n    ldrb r0, [r0]\n    cmp r0, #3\n    beq _02023C62\n    add r1, r5, #0\n    add r1, #0x8c\n    ldr r1, [r1]\n    add r0, r4, #0\n    bl sub_02023BA4\n    b _02023C64\n    mov r0, #0\n    cmp r0, #0\n    bne _02023C98\n    add r0, r5, #0\n    add r0, #0xb4\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _02023C82\n    add r0, r5, #0\n    add r1, r5, #0\n    add r2, r5, #0\n    add r0, #0x94\n    add r1, #0x98\n    add r2, #0x9c\n    bl sub_02023B70\n    add r0, r5, #0\n    add r0, #0x8c\n    add r1, r5, #0\n    add r2, r5, #0\n    add r5, #0x9c\n    ldr r0, [r0]\n    add r1, #0x94\n    add r2, #0x98\n    add r3, r5, #0\n    bl sub_02023AA0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02023C9C(void) {
    /* Original at 0x02023C9C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    add r0, r4, #0\n    bl sub_02024374\n    add r1, r5, #0\n    add r1, #0x90\n    add r3, r5, #0\n    add r3, #0xa0\n    str r0, [r1]\n    add r4, #0xc\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r5, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    add r1, r2, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    add r2, r5, #0\n    add r3, r5, #0\n    str r0, [sp, #4]\n    add r6, #0xdc\n    add r2, #0x90\n    add r3, #0x94\n    ldr r0, [r6]\n    ldr r2, [r2]\n    ldr r3, [r3]\n    bl sub_020206E0\n    add r5, #0xb0\n    str r0, [r5]\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02023CF0(void) {
    /* Original at 0x02023CF0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r1, r5, #0\n    add r2, r5, #0\n    add r0, r4, #0\n    add r1, #0x88\n    add r2, #0x8c\n    bl sub_02024328\n    add r1, r5, #0\n    add r1, #0x84\n    str r0, [r1]\n    add r1, r5, #0\n    add r1, #0x88\n    add r0, r5, #0\n    ldr r1, [r1]\n    add r0, #0x30\n    bl NNS_G3dRenderObjInit\n    add r0, r4, #0\n    bl sub_02024374\n    add r5, #0x90\n    str r0, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02023D24(void) {
    /* Original at 0x02023D24 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    add r4, r0, #0\n    add r2, r4, #0\n    add r3, r1, #0\n    add r3, #0xc\n    add r2, #0xa0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #0\n    add r4, #0xb0\n    str r0, [r4]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02023D44(void) {
    /* Original at 0x02023D44 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r6, [r5]\n    cmp r6, #0\n    bne _02023D52\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    bl sub_02024280\n    add r4, r0, #0\n    bne _02023D60\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r3, r5, #0\n    str r6, [r4, #0x28]\n    add r3, #8\n    ldmia r3!, {r0, r1}\n    add r2, r4, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r3, r5, #0\n    str r0, [r2]\n    add r3, #0x14\n    add r2, r4, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0xc\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #0\n    str r0, [r2]\n    add r0, r4, #0\n    add r0, #0xb6\n    strh r1, [r0]\n    add r0, r4, #0\n    mov r1, #1\n    add r0, #0x24\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xb4\n    strb r1, [r0]\n    ldr r1, [r5, #4]\n    add r0, r4, #0\n    bl sub_02024380\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02023DA4(void) {
    /* Original at 0x02023DA4 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bne _02023DAE\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xb4\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02023DBC\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xb4\n    ldrb r0, [r0]\n    ldr r4, [r5, #0x28]\n    cmp r0, #0\n    bne _02023DCC\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    bl sub_02024308\n    add r0, r5, #0\n    add r0, #0xb4\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _02023DEC\n    add r0, r5, #0\n    add r1, r5, #0\n    add r2, r5, #0\n    add r0, #0x94\n    add r1, #0x98\n    add r2, #0x9c\n    bl sub_02023B70\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_02023C04\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_020242AC\n    mov r0, #1\n    strb r0, [r4, #3]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02023E04(void) {
    /* Original at 0x02023E04 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    add r4, r0, #0\n    str r1, [r4]\n    str r2, [r4, #4]\n    str r3, [r4, #8]\n    ldr r3, [sp, #8]\n    add r2, r4, #0\n    add r2, #0xc\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [sp, #0xc]\n    str r0, [r4, #0x1c]\n    ldr r0, [sp, #0x10]\n    str r0, [r4, #0x20]\n    ldr r0, [sp, #0x14]\n    str r0, [r4, #0x24]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02023E2C(void) {
    /* Original at 0x02023E2C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    add r4, r0, #0\n    str r1, [r4]\n    str r2, [r4, #4]\n    str r3, [r4, #8]\n    ldr r3, [sp, #8]\n    add r2, r4, #0\n    add r2, #0xc\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    str r0, [r4, #0x20]\n    str r0, [r4, #0x24]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02023E50(void) {
    GF_AssertFail();
}

void sub_02023E68(void) {
    GF_AssertFail();
}

void sub_02023E78(void) {
    GF_AssertFail();
}

void sub_02023E94(void) {
    GF_AssertFail();
}

void sub_02023EA4(void) {
    GF_AssertFail();
}

void sub_02023EB8(void) {
    GF_AssertFail();
}

void sub_02023EC8(void) {
    /* Original at 0x02023EC8 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0\n    bne _02023ED6\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02024380\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02023EE0(void) {
    GF_AssertFail();
}

void sub_02023EF4(void) {
    GF_AssertFail();
}

void sub_02023F04(void) {
    /* Original at 0x02023F04 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0\n    bne _02023F12\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_020243A4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02023F1C(void) {
    GF_AssertFail();
}

void sub_02023F30(void) {
    GF_AssertFail();
}

void sub_02023F40(void) {
    /* Original at 0x02023F40 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r5, #0\n    bne _02023F4E\n    bl GF_AssertFail\n    add r1, r5, #0\n    add r1, #0xb6\n    ldrh r1, [r1]\n    add r0, r5, #0\n    bl sub_02024394\n    add r1, r5, #0\n    add r1, #0xb8\n    str r0, [r1]\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    add r5, #0xb8\n    add r0, r0, r4\n    str r0, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02023F70(void) {
    /* Original at 0x02023F70 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _02023F7A\n    bl GF_AssertFail\n    add r1, r4, #0\n    add r1, #0xb6\n    ldrh r1, [r1]\n    add r0, r4, #0\n    bl sub_02024394\n    add r4, #0xb8\n    ldr r1, [r4]\n    sub r0, r1, r0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02023F90(void) {
    GF_AssertFail();
}

void sub_02023FA0(void) {
    GF_AssertFail();
}

void sub_02023FB0(void) {
    GF_AssertFail();
}

void sub_02023FC0(void) {
    sub_02020764();
}

void sub_02023FDC(void) {
    /* Original at 0x02023FDC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x88\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_02023FE4(void) {
    ((u32*)r0)[0x1c] = r2;
    ((u32*)r0)[0x20] = r1;
}

void sub_02023FEC(void) {
    /* Original at 0x02023FEC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0xb8\n    ldr r1, [r1]\n    add r0, #0xa0\n    lsl r1, r1, #4\n    lsr r1, r1, #0x10\n    bl sub_02026DE0\n    add r2, sp, #0\n    strb r0, [r2]\n    lsr r0, r0, #8\n    strb r0, [r2, #1]\n    ldrb r0, [r2]\n    add r1, r4, #0\n    add r1, #0x90\n    strb r0, [r2, #2]\n    ldrb r0, [r2, #1]\n    strb r0, [r2, #3]\n    add r0, r4, #0\n    add r0, #0x88\n    ldrb r2, [r2, #2]\n    ldr r0, [r0]\n    ldr r1, [r1]\n    bl sub_0202403C\n    add r0, r4, #0\n    add r2, sp, #0\n    add r0, #0x88\n    add r4, #0x90\n    ldrb r2, [r2, #3]\n    ldr r0, [r0]\n    ldr r1, [r4]\n    bl sub_02024140\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_0202403C(void) {
    /* Original at 0x0202403C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    cmp r0, #0\n    beq _0202404C\n    ldr r3, [r0, #8]\n    cmp r3, #0\n    beq _0202404C\n    add r6, r0, r3\n    b _0202404E\n    mov r6, #0\n    ldrh r0, [r6]\n    add r4, r6, r0\n    cmp r1, #0\n    beq _0202407C\n    add r0, r1, #0\n    add r0, #0x3c\n    beq _02024078\n    add r3, r1, #0\n    add r3, #0x3d\n    ldrb r3, [r3]\n    cmp r2, r3\n    bhs _02024078\n    add r1, #0x42\n    ldrh r1, [r1]\n    add r3, r0, r1\n    ldrh r0, [r0, r1]\n    add r3, r3, #4\n    add r1, r0, #0\n    mul r1, r2\n    add r0, r3, r1\n    b _0202407E\n    mov r0, #0\n    b _0202407E\n    mov r0, #0\n    ldr r0, [r0]\n    mov r5, #0\n    lsl r0, r0, #0x10\n    lsr r7, r0, #0x10\n    ldrb r0, [r4, #1]\n    cmp r0, #0\n    ble _020240C0\n    cmp r4, #0\n    beq _020240A6\n    ldrb r0, [r4, #1]\n    cmp r5, r0\n    bhs _020240A6\n    ldrh r0, [r4, #6]\n    add r1, r4, r0\n    ldrh r0, [r4, r0]\n    add r2, r1, #4\n    add r1, r0, #0\n    mul r1, r5\n    add r1, r2, r1\n    b _020240A8\n    mov r1, #0\n    ldrb r2, [r1, #3]\n    mov r0, #1\n    tst r0, r2\n    beq _020240B8\n    add r0, r6, #0\n    add r2, r7, #0\n    bl sub_020240C4\n    ldrb r0, [r4, #1]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _0202408C\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020240C4(void) {
    /* Original at 0x020240C4 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    ldrh r0, [r0]\n    str r1, [sp]\n    str r2, [sp, #4]\n    add r0, r5, r0\n    str r0, [sp, #8]\n    add r0, r1, #0\n    ldrb r0, [r0, #2]\n    mov r6, #0\n    cmp r0, #0\n    ble _02024136\n    add r7, r5, #4\n    ldr r0, [sp, #8]\n    cmp r5, #0\n    ldrb r0, [r0, r6]\n    beq _0202410E\n    cmp r7, #0\n    beq _02024102\n    ldrb r1, [r5, #5]\n    cmp r0, r1\n    bhs _02024102\n    ldrh r1, [r5, #0xa]\n    add r2, r7, r1\n    ldrh r1, [r7, r1]\n    add r2, r2, #4\n    mul r0, r1\n    add r0, r2, r0\n    b _02024104\n    mov r0, #0\n    cmp r0, #0\n    beq _0202410E\n    ldr r0, [r0]\n    add r4, r5, r0\n    b _02024110\n    mov r4, #0\n    ldr r0, [r4, #0x14]\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldr r0, [sp, #4]\n    add r1, r1, r0\n    ldr r0, _0202413C ; =0x0000FFFF\n    cmp r1, r0\n    bls _02024124\n    bl GF_AssertFail\n    ldr r1, [r4, #0x14]\n    ldr r0, [sp, #4]\n    add r6, r6, #1\n    add r0, r1, r0\n    str r0, [r4, #0x14]\n    ldr r0, [sp]\n    ldrb r0, [r0, #2]\n    cmp r6, r0\n    blt _020240E2\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0202413C: .word 0x0000FFFF"
    );
    #endif
}

void sub_02024140(void) {
    /* Original at 0x02024140 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    cmp r0, #0\n    beq _02024150\n    ldr r3, [r0, #8]\n    cmp r3, #0\n    beq _02024150\n    add r6, r0, r3\n    b _02024152\n    mov r6, #0\n    ldrh r0, [r6, #2]\n    add r4, r6, r0\n    cmp r1, #0\n    beq _0202417E\n    ldrh r0, [r1, #0x34]\n    cmp r0, #0\n    beq _0202417E\n    add r0, r1, r0\n    beq _0202417A\n    ldrb r1, [r0, #1]\n    cmp r2, r1\n    bhs _0202417A\n    ldrh r1, [r0, #6]\n    add r3, r0, r1\n    ldrh r0, [r0, r1]\n    add r3, r3, #4\n    add r1, r0, #0\n    mul r1, r2\n    add r0, r3, r1\n    b _02024180\n    mov r0, #0\n    b _02024180\n    mov r0, #0\n    ldrh r1, [r0, #2]\n    ldrh r7, [r0]\n    mov r0, #1\n    tst r0, r1\n    bne _0202418C\n    lsr r7, r7, #1\n    ldrb r0, [r4, #1]\n    mov r5, #0\n    cmp r0, #0\n    bls _020241C8\n    cmp r4, #0\n    beq _020241AE\n    ldrb r0, [r4, #1]\n    cmp r5, r0\n    bhs _020241AE\n    ldrh r0, [r4, #6]\n    add r1, r4, r0\n    ldrh r0, [r4, r0]\n    add r2, r1, #4\n    add r1, r0, #0\n    mul r1, r5\n    add r1, r2, r1\n    b _020241B0\n    mov r1, #0\n    ldrb r2, [r1, #3]\n    mov r0, #1\n    tst r0, r2\n    beq _020241C0\n    add r0, r6, #0\n    add r2, r7, #0\n    bl sub_020241CC\n    ldrb r0, [r4, #1]\n    add r5, r5, #1\n    cmp r5, r0\n    blo _02024194\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020241CC(void) {
    /* Original at 0x020241CC */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    ldrh r0, [r0]\n    str r1, [sp]\n    str r2, [sp, #4]\n    add r0, r5, r0\n    str r0, [sp, #8]\n    add r0, r1, #0\n    ldrb r0, [r0, #2]\n    mov r6, #0\n    cmp r0, #0\n    bls _0202423E\n    add r7, r5, #4\n    ldr r0, [sp, #8]\n    cmp r5, #0\n    ldrb r0, [r0, r6]\n    beq _02024216\n    cmp r7, #0\n    beq _0202420A\n    ldrb r1, [r5, #5]\n    cmp r0, r1\n    bhs _0202420A\n    ldrh r1, [r5, #0xa]\n    add r2, r7, r1\n    ldrh r1, [r7, r1]\n    add r2, r2, #4\n    mul r0, r1\n    add r0, r2, r0\n    b _0202420C\n    mov r0, #0\n    cmp r0, #0\n    beq _02024216\n    ldr r0, [r0]\n    add r4, r5, r0\n    b _02024218\n    mov r4, #0\n    ldrh r1, [r4, #0x1c]\n    ldr r0, _02024244 ; =0x00001FFF\n    and r1, r0\n    ldr r0, [sp, #4]\n    add r1, r1, r0\n    ldr r0, _02024244 ; =0x00001FFF\n    cmp r1, r0\n    bls _0202422C\n    bl GF_AssertFail\n    ldrh r1, [r4, #0x1c]\n    ldr r0, [sp, #4]\n    add r6, r6, #1\n    add r0, r1, r0\n    strh r0, [r4, #0x1c]\n    ldr r0, [sp]\n    ldrb r0, [r0, #2]\n    cmp r6, r0\n    blo _020241EA\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02024244: .word 0x00001FFF"
    );
    #endif
}

void sub_02024248(void) {
    /* Original at 0x02024248 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #8]\n    mov r7, #0\n    cmp r0, #0\n    ble _02024278\n    add r4, r7, #0\n    add r6, r7, #0\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    bl sub_020236BC\n    ldr r0, [r5, #4]\n    add r7, r7, #1\n    add r1, r0, r4\n    add r0, r5, #0\n    add r0, #0xd0\n    ldr r0, [r0]\n    add r4, #0xc4\n    str r1, [r0, r6]\n    ldr r0, [r5, #8]\n    add r6, r6, #4\n    cmp r7, r0\n    blt _02024258\n    mov r0, #0\n    add r5, #0xd4\n    str r0, [r5]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02024280(void) {
    /* Original at 0x02024280 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r1, #0xd4\n    ldr r3, [r1]\n    ldr r1, [r0, #8]\n    cmp r3, r1\n    blt _02024290\n    mov r0, #0\n    bx lr\n    add r1, r0, #0\n    add r1, #0xd0\n    ldr r2, [r1]\n    lsl r1, r3, #2\n    ldr r2, [r2, r1]\n    add r1, r0, #0\n    add r1, #0xd4\n    ldr r1, [r1]\n    add r0, #0xd4\n    add r1, r1, #1\n    str r1, [r0]\n    add r0, r2, #0\n    bx lr"
    );
    #endif
}

void sub_020242AC(void) {
    /* Original at 0x020242AC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0xd4\n    ldr r0, [r0]\n    add r4, r1, #0\n    cmp r0, #0\n    bgt _020242BE\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl sub_020236BC\n    add r0, r5, #0\n    add r0, #0xd4\n    ldr r0, [r0]\n    sub r1, r0, #1\n    add r0, r5, #0\n    add r0, #0xd4\n    str r1, [r0]\n    add r0, r5, #0\n    add r0, #0xd0\n    add r5, #0xd4\n    ldr r1, [r0]\n    ldr r0, [r5]\n    lsl r0, r0, #2\n    str r4, [r1, r0]\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020242E4(void) {
    /* Original at 0x020242E4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0xc0\n    ldr r3, [r2]\n    add r2, r1, #0\n    add r2, #0xc0\n    str r3, [r2]\n    add r2, r0, #0\n    add r2, #0xc0\n    ldr r2, [r2]\n    add r2, #0xbc\n    str r1, [r2]\n    add r2, r1, #0\n    add r2, #0xbc\n    str r0, [r2]\n    add r0, #0xc0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02024308(void) {
    /* Original at 0x02024308 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    add r1, #0xbc\n    ldr r2, [r1]\n    add r1, r0, #0\n    add r1, #0xc0\n    ldr r1, [r1]\n    add r1, #0xbc\n    str r2, [r1]\n    add r1, r0, #0\n    add r0, #0xbc\n    add r1, #0xc0\n    ldr r0, [r0]\n    ldr r1, [r1]\n    add r0, #0xc0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02024328(void) {
    /* Original at 0x02024328 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r1, #0\n    add r5, r2, #0\n    bl sub_0202443C\n    add r7, r0, #0\n    bl NNS_G3dGetMdlSet\n    add r4, r0, #0\n    beq _0202435E\n    add r1, r4, #0\n    add r1, #8\n    beq _02024352\n    ldrb r0, [r4, #9]\n    cmp r0, #0\n    bls _02024352\n    ldrh r0, [r4, #0xe]\n    add r0, r1, r0\n    add r0, r0, #4\n    b _02024354\n    mov r0, #0\n    cmp r0, #0\n    beq _0202435E\n    ldr r0, [r0]\n    add r0, r4, r0\n    b _02024360\n    mov r0, #0\n    str r0, [r6]\n    cmp r5, #0\n    beq _0202436E\n    add r0, r7, #0\n    bl NNS_G3dGetTex\n    str r0, [r5]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02024374(void) {
    sub_0202443C();
}

void sub_02024380(void) {
    /* Original at 0x02024380 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, [r1, #0x1c]\n    cmp r2, #0\n    bne _0202438E\n    bl sub_020239D0\n    pop {r3, pc}\n    bl sub_02023A20\n    pop {r3, pc}"
    );
    #endif
}

void sub_02024394(void) {
    sub_02024454();
}

void sub_020243A4(void) {
    sub_02024454(*((u32*)(r0 + 0x2c)), r0);
    sub_020243C4(r5, r4);
}

void sub_020243C4(void) {
    /* Original at 0x020243C4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r4, [r0]\n    ldr r6, [r1]\n    lsl r4, r4, #0xc\n    mov r3, #0\n    cmp r4, r6\n    bgt _020243DA\n    ldr r5, [r0, #4]\n    lsl r5, r5, #0xc\n    cmp r5, r6\n    bge _020243DE\n    str r4, [r1]\n    b _020243F6\n    add r2, r6, r2\n    cmp r5, r2\n    bge _020243F4\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _020243EE\n    str r4, [r1]\n    b _020243F6\n    mov r3, #1\n    str r5, [r1]\n    b _020243F6\n    str r2, [r1]\n    add r0, r3, #0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void sub_020243FC(void) {
    /* Original at 0x020243FC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r3, r0, #0\n    add r0, #0x9c\n    str r0, [sp]\n    add r0, r3, #0\n    add r1, r3, #0\n    add r2, r3, #0\n    add r0, #0x8c\n    add r1, #0x84\n    ldr r0, [r0]\n    ldr r1, [r1]\n    add r2, #0x94\n    add r3, #0x98\n    bl sub_02023B4C\n    pop {r3, pc}"
    );
    #endif
}

void sub_0202441C(void) {
    NNS_G3dReleaseMdlSet();
    sub_02023B38();
}

void sub_0202443C(void) {
    /* Original at 0x0202443C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    beq _02024446\n    cmp r1, #1\n    beq _0202444A\n    b _0202444E\n    ldr r0, [r0]\n    bx lr\n    ldr r0, [r0, #4]\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02024454(void) {
    /* Original at 0x02024454 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0xc\n    mul r2, r1\n    add r0, r0, r2\n    bx lr"
    );
    #endif
}
