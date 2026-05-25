/* Decompiled from asm/unk_02016EDC.s */
#include "global.h"

void sub_02016EDC(void) {
    /* Original at 0x02016EDC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    mov r1, #0xc\n    add r6, r0, #0\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    strb r7, [r4, #8]\n    mov r0, #0x1d\n    strb r5, [r4, #9]\n    lsl r0, r0, #4\n    add r7, r5, #0\n    mul r7, r0\n    add r0, r6, #0\n    add r1, r7, #0\n    str r6, [r4, #4]\n    bl Heap_Alloc\n    mov r1, #0\n    add r2, r7, #0\n    str r0, [r4]\n    bl MI_CpuFill8\n    mov r3, #0\n    cmp r5, #0\n    ble _02016F28\n    mov r0, #0x1d\n    add r6, r3, #0\n    mov r2, #1\n    lsl r0, r0, #4\n    ldr r1, [r4]\n    add r3, r3, #1\n    add r1, r1, r6\n    str r2, [r1, #0x20]\n    add r6, r6, r0\n    cmp r3, r5\n    blt _02016F1A\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02016F2C(void) {
    Heap_Free();
    Heap_Free(r4);
}

void sub_02016F40(void) {
    /* Original at 0x02016F40 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    str r3, [sp, #4]\n    add r0, r2, #0\n    ldrh r6, [r0]\n    ldrh r0, [r0, #2]\n    add r7, r1, #0\n    ldrb r1, [r5, #9]\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    str r2, [sp]\n    cmp r0, r1\n    blo _02016F60\n    bl GF_AssertFail\n    ldr r0, [sp, #4]\n    mov r1, #0x1d\n    add r4, r0, #0\n    lsl r1, r1, #4\n    ldr r0, [r5]\n    mul r4, r1\n    add r0, r0, r4\n    ldr r0, [r0, #0x10]\n    cmp r0, #0\n    beq _02016F78\n    bl GF_AssertFail\n    ldr r0, [r5]\n    mov r2, #0x1d\n    add r0, r0, r4\n    mov r1, #0\n    lsl r2, r2, #4\n    bl MI_CpuFill8\n    ldr r0, [r5]\n    mov r1, #1\n    add r0, r0, r4\n    str r1, [r0, #0x10]\n    ldr r0, [r5]\n    cmp r6, #0x8f\n    str r7, [r0, r4]\n    blt _02016F9A\n    mov r6, #0\n    str r6, [sp, #8]\n    ldr r0, [r5]\n    add r0, r0, r4\n    str r6, [r0, #0x14]\n    ldrb r0, [r5, #8]\n    cmp r0, #0\n    beq _02016FAC\n    ldr r0, [sp]\n    ldrb r2, [r0, #4]\n    b _02016FAE\n    mov r2, #0\n    ldr r0, [r5]\n    add r1, r0, r4\n    mov r0, #0x73\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    ldr r1, [r5]\n    ldr r2, [r5, #4]\n    add r1, r1, r4\n    ldr r1, [r1, #0x14]\n    mov r0, #0x5a\n    bl AllocAtEndAndReadWholeNarcMemberByIdPair\n    ldr r1, [r5]\n    mov r2, #0\n    add r1, r1, r4\n    str r0, [r1, #8]\n    ldr r0, [r5]\n    mov r6, #0x1c\n    add r1, r0, r4\n    ldr r0, [r1, #8]\n    str r0, [r1, #0xc]\n    ldr r0, [r5]\n    add r0, r0, r4\n    str r2, [r0, #0x1c]\n    ldr r0, [r5]\n    add r0, r0, r4\n    str r2, [r0, #0x20]\n    ldr r0, [r5]\n    add r1, r0, r4\n    ldr r0, _02017060 ; =0x000001CD\n    strb r2, [r1, r0]\n    ldr r1, [r5]\n    add r3, r1, r4\n    add r1, r0, #1\n    strb r6, [r3, r1]\n    ldr r1, [r5]\n    add r0, r0, #2\n    add r1, r1, r4\n    strb r2, [r1, r0]\n    ldr r1, [r5]\n    ldr r0, _02017064 ; =sub_020170C4\n    add r1, r1, r4\n    bl SysTask_CreateOnMainQueue\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #4]\n    ldr r0, [r5]\n    add r1, r0, r4\n    ldr r0, [sp, #8]\n    str r0, [r1, #0x54]\n    add r0, r7, #0\n    mov r1, #0\n    bl Pokepic_GetAttr\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #0x58]\n    add r0, r7, #0\n    mov r1, #1\n    bl Pokepic_GetAttr\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #0x5c]\n    ldr r1, [r5]\n    mov r0, #0\n    add r1, r1, r4\n    str r0, [r1, #0x60]\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #0x64]\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #0x68]\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #0x6c]\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #0x70]\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #0x74]\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #0x78]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02017060: .word 0x000001CD\n    _02017064: .word sub_020170C4"
    );
    #endif
}

void sub_02017068(void) {
    GF_AssertFail(0x1d);
}

void sub_02017088(void) {
    /* Original at 0x02017088 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x1d\n    lsl r0, r0, #4\n    add r4, r1, #0\n    mul r4, r0\n    ldr r0, [r5]\n    add r0, r0, r4\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _020170C2\n    bl SysTask_Destroy\n    ldr r1, [r5]\n    mov r0, #0\n    add r1, r1, r4\n    str r0, [r1, #4]\n    ldr r1, [r5]\n    mov r2, #1\n    add r1, r1, r4\n    str r2, [r1, #0x20]\n    ldr r1, [r5]\n    add r1, r1, r4\n    str r0, [r1, #0x10]\n    ldr r0, [r5]\n    add r0, r0, r4\n    ldr r0, [r0, #8]\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020170C4(void) {
    /* Original at 0x020170C4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    ldr r0, [r4, #0x54]\n    cmp r0, #0\n    bne _020170D8\n    add r0, r4, #0\n    bl sub_020170FC\n    b _020170DC\n    sub r0, r0, #1\n    str r0, [r4, #0x54]\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    beq _020170FA\n    mov r0, #1\n    str r0, [r4, #0x20]\n    mov r0, #0\n    str r0, [r4, #0x10]\n    add r0, r5, #0\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #4]\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020170FC(void) {
    /* Original at 0x020170FC */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r6, #0\n    str r6, [r5, #0x18]\n    add r7, r5, #0\n    str r6, [r5, #0x44]\n    add r4, r6, #0\n    add r7, #0x7c\n    mov r0, #0x54\n    add r1, r4, #0\n    mul r1, r0\n    add r0, r7, r1\n    ldr r1, [r7, r1]\n    cmp r1, #0\n    beq _0201713A\n    add r1, r0, #0\n    add r1, #0x2d\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _0201712C\n    ldr r2, [r0, #0x50]\n    add r1, r5, #0\n    blx r2\n    b _02017140\n    add r1, r0, #0\n    add r1, #0x2d\n    ldrb r1, [r1]\n    add r0, #0x2d\n    sub r1, r1, #1\n    strb r1, [r0]\n    b _02017140\n    add r0, r6, #1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _0201710C\n    cmp r6, #4\n    bne _02017154\n    ldr r0, _020171E8 ; =0x000001CD\n    mov r1, #0\n    strb r1, [r5, r0]\n    ldr r0, _020171E8 ; =0x000001CD\n    ldrb r1, [r5, r0]\n    cmp r1, #0\n    beq _0201716A\n    add r0, r5, #0\n    bl sub_020179D4\n    add r0, r5, #0\n    bl sub_02017A1C\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r0, #2\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _02017182\n    ldr r0, [r5]\n    bl Pokepic_ResumePaletteFade\n    cmp r0, #0\n    bne _020171E4\n    ldr r0, _020171EC ; =0x000001CF\n    mov r1, #0\n    strb r1, [r5, r0]\n    add r6, r5, #0\n    add r4, r5, #0\n    ldr r7, _020171F0 ; =_020F61F8\n    add r6, #0xc\n    add r4, #0x44\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    ldr r0, [r5, #0xc]\n    ldr r0, [r0]\n    cmp r0, #0x22\n    blo _0201719E\n    bl GF_AssertFail\n    ldr r1, [r5, #0xc]\n    add r0, r5, #0\n    ldr r1, [r1]\n    lsl r1, r1, #2\n    ldr r1, [r7, r1]\n    blx r1\n    ldr r0, [r5, #0x1c]\n    cmp r0, #0\n    bne _020171E4\n    ldr r0, [r6]\n    add r0, r0, #4\n    str r0, [r6]\n    ldr r0, [r5, #0x18]\n    cmp r0, #0\n    bne _020171E4\n    ldr r0, _020171E8 ; =0x000001CD\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _020171D2\n    add r0, r5, #0\n    bl sub_020179D4\n    add r0, r5, #0\n    bl sub_02017A1C\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    ldr r1, [r5, #0x44]\n    lsl r0, r0, #8\n    cmp r1, r0\n    blt _0201718C\n    bl GF_AssertFail\n    mov r0, #1\n    str r0, [r5, #0x1c]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020171E8: .word 0x000001CD\n    _020171EC: .word 0x000001CF\n    _020171F0: .word _020F61F8"
    );
    #endif
}

void sub_020171F4(void) {
    GF_AssertFail();
}

void sub_02017208(void) {
    sub_020171F4();
}

void sub_02017214(void) {
    sub_02017208();
}

void sub_02017220(void) {
    /* Original at 0x02017220 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    mov r3, #0\n    add r0, #0x7c\n    mov r2, #0x54\n    add r1, r3, #0\n    mul r1, r2\n    add r4, r0, r1\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    bne _02017254\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #0x54\n    bl MI_CpuFill8\n    mov r0, #1\n    str r0, [r4]\n    mov r0, #0xc\n    add r1, r5, #0\n    mul r1, r0\n    ldr r0, _02017268 ; =_020F61BC\n    ldr r0, [r0, r1]\n    str r0, [r4, #0x50]\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    add r1, r3, #1\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    cmp r3, #4\n    blo _0201722A\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02017268: .word _020F61BC"
    );
    #endif
}

void sub_0201726C(void) {
    sub_02017214();
}

void sub_02017280(void) {
    sub_02017214();
}

void sub_02017294(void) {
    /* Original at 0x02017294 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r1, [r0, #0xc]\n    add r1, r1, #4\n    str r1, [r0, #0xc]\n    add r0, r1, #0\n    bl sub_02017214\n    strb r0, [r4]\n    ldrb r0, [r4]\n    cmp r0, #8\n    blo _020172B0\n    bl GF_AssertFail\n    pop {r4, pc}"
    );
    #endif
}

void sub_020172B4(void) {
    sub_02017294();
    sub_02017294(r5, r4);
}

void sub_020172C8(void) {
    /* Original at 0x020172C8 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl sub_02017294\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0]\n    cmp r0, #0x12\n    bne _02017308\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #2\n    bl sub_02017294\n    add r0, sp, #0\n    ldrb r0, [r0, #2]\n    add r1, r6, #0\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [r4]\n    add r0, r5, #0\n    bl sub_0201726C\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    cmp r0, #0x13\n    bne _02017334\n    add r1, sp, #0\n    add r2, sp, #0\n    add r0, r5, #0\n    add r1, #2\n    add r2, #1\n    bl sub_020172B4\n    add r0, sp, #0\n    ldrb r1, [r0, #2]\n    add sp, #4\n    lsl r1, r1, #2\n    add r1, r5, r1\n    ldr r1, [r1, #0x24]\n    str r1, [r4]\n    ldrb r0, [r0, #1]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [r6]\n    pop {r3, r4, r5, r6, pc}\n    bl GF_AssertFail\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_0201733C(void) {
    /* Original at 0x0201733C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    bl sub_02017294\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #1\n    bl sub_02017280\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0, #1]\n    cmp r0, #0x12\n    bne _0201736E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0201726C\n    b _0201738E\n    cmp r0, #0x13\n    bne _0201738A\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #3\n    bl sub_02017294\n    add r0, sp, #0\n    ldrb r0, [r0, #3]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [r4]\n    b _0201738E\n    bl GF_AssertFail\n    add r0, sp, #0\n    ldrb r0, [r0]\n    cmp r0, #0x12\n    bne _020173A2\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0201726C\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    cmp r0, #0x13\n    bne _020173C0\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #2\n    bl sub_02017294\n    add r0, sp, #0\n    ldrb r0, [r0, #2]\n    add sp, #4\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [r6]\n    pop {r3, r4, r5, r6, pc}\n    bl GF_AssertFail\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_020173C8(void) {
    /* Original at 0x020173C8 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r2, sp, #0\n    add r2, #3\n    add r5, r0, #0\n    add r6, r3, #0\n    bl sub_020172B4\n    add r0, sp, #0\n    ldrb r0, [r0, #3]\n    add r1, sp, #0\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r7, [r0, #0x24]\n    add r0, r5, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0]\n    cmp r0, #0x14\n    bne _020173FE\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0201726C\n    b _0201741E\n    cmp r0, #0x15\n    bne _0201741A\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #2\n    bl sub_02017294\n    add r0, sp, #0\n    ldrb r0, [r0, #2]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [r6]\n    b _0201741E\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0]\n    cmp r0, #0x14\n    bne _02017438\n    add r0, r5, #0\n    add r1, sp, #4\n    bl sub_0201726C\n    b _02017458\n    cmp r0, #0x15\n    bne _02017454\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #1\n    bl sub_02017294\n    add r0, sp, #0\n    ldrb r0, [r0, #1]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [sp, #4]\n    b _02017458\n    bl GF_AssertFail\n    ldr r0, [sp, #4]\n    add r0, r7, r0\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x10\n    sub r1, r1, r2\n    mov r0, #0x10\n    ror r1, r0\n    add r0, r2, r1\n    str r0, [r4]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02017470(void) {
    /* Original at 0x02017470 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0]\n    ldr r0, [r1]\n    sub r0, r2, r0\n    bpl _0201747C\n    mov r0, #0xf\n    bx lr\n    cmp r0, #0\n    ble _02017484\n    mov r0, #0x10\n    bx lr\n    mov r0, #0x11\n    bx lr"
    );
    #endif
}

void sub_02017488(void) {
    /* Original at 0x02017488 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    ldr r0, [r2]\n    ldr r2, [r2, #0x74]\n    mov r1, #1\n    neg r3, r2\n    asr r2, r3, #2\n    lsr r2, r2, #0x1d\n    add r2, r3, r2\n    ldr r3, _020174A0 ; =Pokepic_AddAttr\n    asr r2, r2, #3\n    bx r3\n    nop\n    _020174A0: .word Pokepic_AddAttr"
    );
    #endif
}

void sub_020174A4(void) {
    sub_020174BC();
}

void sub_020174B4(void) {
    ((u32*)r0)[0x18] = 1;
}

void sub_020174BC(void) {
    /* Original at 0x020174BC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r2, [r4, #0x58]\n    mov r1, #0\n    bl Pokepic_SetAttr\n    ldr r0, [r4]\n    ldr r2, [r4, #0x5c]\n    mov r1, #1\n    bl Pokepic_SetAttr\n    ldr r0, [r4]\n    mov r1, #9\n    mov r2, #0\n    bl Pokepic_SetAttr\n    ldr r0, [r4]\n    mov r1, #0xa\n    mov r2, #0\n    bl Pokepic_SetAttr\n    mov r1, #0xc\n    add r2, r1, #0\n    ldr r0, [r4]\n    add r2, #0xf4\n    bl Pokepic_SetAttr\n    mov r1, #0xd\n    add r2, r1, #0\n    ldr r0, [r4]\n    add r2, #0xf3\n    bl Pokepic_SetAttr\n    pop {r4, pc}"
    );
    #endif
}

void sub_02017504(void) {
    /* Original at 0x02017504 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r1, sp, #0\n    add r1, #1\n    add r2, sp, #0\n    add r4, r0, #0\n    bl sub_020172B4\n    add r0, sp, #0\n    ldrb r1, [r0]\n    ldrb r0, [r0, #1]\n    lsl r1, r1, #2\n    add r1, r4, r1\n    lsl r0, r0, #2\n    ldr r1, [r1, #0x24]\n    add r0, r4, r0\n    str r1, [r0, #0x24]\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_0201752C(void) {
    /* Original at 0x0201752C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_020172C8\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #4]\n    add r1, r1, r0\n    add r0, sp, #0\n    ldrb r0, [r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r1, [r0, #0x24]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02017550(void) {
    /* Original at 0x02017550 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_020172C8\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #4]\n    add r2, r1, #0\n    mul r2, r0\n    add r0, sp, #0\n    ldrb r0, [r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r2, [r0, #0x24]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02017578(void) {
    /* Original at 0x02017578 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_0201733C\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #4]\n    sub r1, r1, r0\n    add r0, sp, #0\n    ldrb r0, [r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r1, [r0, #0x24]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_0201759C(void) {
    /* Original at 0x0201759C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_0201733C\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    bl _s32_div_f\n    add r1, sp, #0\n    ldrb r1, [r1]\n    lsl r1, r1, #2\n    add r1, r4, r1\n    str r0, [r1, #0x24]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_020175C4(void) {
    /* Original at 0x020175C4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_0201733C\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #4]\n    bl _s32_div_f\n    add r0, sp, #0\n    ldrb r0, [r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r1, [r0, #0x24]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_020175EC(void) {
    /* Original at 0x020175EC */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r1, sp, #0\n    add r5, r0, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0]\n    cmp r0, #0x14\n    bne _02017620\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #3\n    bl sub_02017294\n    add r0, sp, #0\n    ldrb r0, [r0, #3]\n    add r1, sp, #8\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [sp, #0xc]\n    add r0, r5, #0\n    bl sub_0201726C\n    b _0201764E\n    cmp r0, #0x15\n    bne _0201764A\n    add r1, sp, #0\n    add r2, sp, #0\n    add r0, r5, #0\n    add r1, #3\n    add r2, #2\n    bl sub_020172B4\n    add r0, sp, #0\n    ldrb r1, [r0, #3]\n    lsl r1, r1, #2\n    add r1, r5, r1\n    ldr r1, [r1, #0x24]\n    str r1, [sp, #0xc]\n    ldrb r0, [r0, #2]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [sp, #8]\n    b _0201764E\n    bl GF_AssertFail\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #1\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0, #1]\n    cmp r0, #0x11\n    bls _02017664\n    bl GF_AssertFail\n    add r0, sp, #0xc\n    add r1, sp, #8\n    bl sub_02017470\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0]\n    cmp r0, #0x14\n    bne _02017692\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #3\n    bl sub_02017294\n    add r0, r5, #0\n    add r1, sp, #4\n    bl sub_0201726C\n    b _020176B6\n    cmp r0, #0x15\n    bne _020176B2\n    add r1, sp, #0\n    add r2, sp, #0\n    add r0, r5, #0\n    add r1, #3\n    add r2, #2\n    bl sub_020172B4\n    add r0, sp, #0\n    ldrb r0, [r0, #2]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [sp, #4]\n    b _020176B6\n    bl GF_AssertFail\n    add r0, sp, #0\n    ldrb r1, [r0, #1]\n    cmp r1, r4\n    bne _020176C8\n    ldrb r0, [r0, #3]\n    ldr r1, [sp, #4]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    str r1, [r0, #0x24]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020176CC(void) {
    /* Original at 0x020176CC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    add r1, sp, #0\n    bl sub_02017294\n    ldr r0, [r4, #0xc]\n    add r0, r0, #4\n    str r0, [r4, #0xc]\n    bl sub_02017214\n    add r1, sp, #0\n    ldrb r1, [r1]\n    lsl r1, r1, #2\n    add r1, r4, r1\n    str r0, [r1, #0x24]\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_020176F0(void) {
    /* Original at 0x020176F0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x50]\n    cmp r0, #0\n    beq _020176FE\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    add r0, r0, #4\n    str r0, [r4, #0xc]\n    str r0, [r4, #0x50]\n    ldr r0, [r4, #0xc]\n    bl sub_02017214\n    str r0, [r4, #0x48]\n    mov r0, #0\n    str r0, [r4, #0x4c]\n    pop {r4, pc}"
    );
    #endif
}

void sub_02017714(void) {
    /* Original at 0x02017714 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x4c]\n    add r2, r1, #1\n    str r2, [r0, #0x4c]\n    ldr r1, [r0, #0x48]\n    cmp r2, r1\n    blt _0201772A\n    mov r1, #0\n    str r1, [r0, #0x50]\n    str r1, [r0, #0x4c]\n    str r1, [r0, #0x48]\n    bx lr\n    ldr r1, [r0, #0x50]\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void sub_02017730(void) {
    /* Original at 0x02017730 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r1, sp, #4\n    bl sub_0201726C\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02017294\n    add r2, sp, #0\n    ldrb r2, [r2]\n    ldr r0, [r4]\n    ldr r1, [sp, #4]\n    lsl r2, r2, #2\n    add r2, r4, r2\n    ldr r2, [r2, #0x24]\n    bl Pokepic_SetAttr\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void sub_0201775C(void) {
    /* Original at 0x0201775C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r1, sp, #4\n    bl sub_0201726C\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02017294\n    add r2, sp, #0\n    ldrb r2, [r2]\n    ldr r0, [r4]\n    ldr r1, [sp, #4]\n    lsl r2, r2, #2\n    add r2, r4, r2\n    ldr r2, [r2, #0x24]\n    bl Pokepic_AddAttr\n    add sp, #8\n    pop {r4, pc}"
    );
    #endif
}

void sub_02017788(void) {
    /* Original at 0x02017788 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #8\n    add r4, r0, #0\n    bl sub_0201726C\n    add r1, sp, #0\n    add r0, r4, #0\n    add r1, #1\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0, #1]\n    cmp r0, #0x14\n    bne _020177B0\n    add r0, r4, #0\n    add r1, sp, #4\n    bl sub_0201726C\n    b _020177D0\n    cmp r0, #0x15\n    bne _020177CC\n    add r1, sp, #0\n    add r0, r4, #0\n    add r1, #2\n    bl sub_02017294\n    add r0, sp, #0\n    ldrb r0, [r0, #2]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #0x24]\n    str r0, [sp, #4]\n    b _020177D0\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0]\n    cmp r0, #0x16\n    bne _020177EE\n    ldr r0, [r4]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #4]\n    bl Pokepic_SetAttr\n    add sp, #0xc\n    pop {r3, r4, pc}\n    cmp r0, #0x17\n    bne _02017800\n    ldr r0, [r4]\n    ldr r1, [sp, #8]\n    ldr r2, [sp, #4]\n    bl Pokepic_AddAttr\n    add sp, #0xc\n    pop {r3, r4, pc}\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02017808(void) {
    /* Original at 0x02017808 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_020173C8\n    ldr r0, [sp, #8]\n    ldr r2, [sp, #4]\n    asr r0, r0, #4\n    lsl r1, r0, #2\n    ldr r0, _02017838 ; =FX_SinCosTable_\n    ldrsh r0, [r0, r1]\n    mul r0, r2\n    asr r1, r0, #0xc\n    add r0, sp, #0\n    ldrb r0, [r0]\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r1, [r0, #0x24]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _02017838: .word FX_SinCosTable_"
    );
    #endif
}

void sub_0201783C(void) {
    /* Original at 0x0201783C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #0\n    add r2, sp, #8\n    add r3, sp, #4\n    add r4, r0, #0\n    bl sub_020173C8\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #4]\n    asr r1, r1, #4\n    lsl r1, r1, #1\n    add r1, r1, #1\n    lsl r2, r1, #1\n    ldr r1, _02017870 ; =FX_SinCosTable_\n    ldrsh r1, [r1, r2]\n    mul r1, r0\n    add r0, sp, #0\n    ldrb r0, [r0]\n    asr r1, r1, #0xc\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r1, [r0, #0x24]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _02017870: .word FX_SinCosTable_"
    );
    #endif
}

void sub_02017874(void) {
    /* Original at 0x02017874 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r1, sp, #0\n    add r4, r0, #0\n    add r1, #1\n    bl sub_02017294\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r1, [r0]\n    cmp r1, #8\n    bne _020178A0\n    ldrb r0, [r0, #1]\n    add sp, #4\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #0x24]\n    str r0, [r4, #0x60]\n    pop {r3, r4, pc}\n    cmp r1, #9\n    bne _020178B2\n    ldrb r0, [r0, #1]\n    add sp, #4\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #0x24]\n    str r0, [r4, #0x64]\n    pop {r3, r4, pc}\n    bl GF_AssertFail\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_020178BC(void) {
    /* Original at 0x020178BC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r1, sp, #0\n    add r4, r0, #0\n    add r1, #1\n    bl sub_02017294\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r1, [r0]\n    cmp r1, #8\n    bne _020178EC\n    ldrb r0, [r0, #1]\n    ldr r1, [r4, #0x60]\n    add sp, #4\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #0x24]\n    add r0, r1, r0\n    str r0, [r4, #0x60]\n    pop {r3, r4, pc}\n    cmp r1, #9\n    bne _02017902\n    ldrb r0, [r0, #1]\n    ldr r1, [r4, #0x64]\n    add sp, #4\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #0x24]\n    add r0, r1, r0\n    str r0, [r4, #0x64]\n    pop {r3, r4, pc}\n    bl GF_AssertFail\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_0201790C(void) {
    /* Original at 0x0201790C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r1, sp, #0\n    add r1, #3\n    add r5, r0, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0, #3]\n    cmp r0, #8\n    bne _02017928\n    add r4, r5, #0\n    add r4, #0x60\n    b _02017968\n    cmp r0, #9\n    bne _02017932\n    add r4, r5, #0\n    add r4, #0x64\n    b _02017968\n    cmp r0, #0xa\n    bne _0201793C\n    add r4, r5, #0\n    add r4, #0x68\n    b _02017968\n    cmp r0, #0xb\n    bne _02017946\n    add r4, r5, #0\n    add r4, #0x6c\n    b _02017968\n    cmp r0, #0xc\n    bne _02017950\n    add r4, r5, #0\n    add r4, #0x70\n    b _02017968\n    cmp r0, #0xd\n    bne _0201795A\n    add r4, r5, #0\n    add r4, #0x74\n    b _02017968\n    cmp r0, #0xe\n    bne _02017964\n    add r4, r5, #0\n    add r4, #0x78\n    b _02017968\n    bl GF_AssertFail\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #1\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0, #1]\n    cmp r0, #0x14\n    bne _02017984\n    add r0, r5, #0\n    add r1, sp, #4\n    bl sub_0201726C\n    b _020179A4\n    cmp r0, #0x15\n    bne _020179A0\n    add r1, sp, #0\n    add r0, r5, #0\n    add r1, #2\n    bl sub_02017294\n    add r0, sp, #0\n    ldrb r0, [r0, #2]\n    lsl r0, r0, #2\n    add r0, r5, r0\n    ldr r0, [r0, #0x24]\n    str r0, [sp, #4]\n    b _020179A4\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, sp, #0\n    bl sub_02017280\n    add r0, sp, #0\n    ldrb r0, [r0]\n    cmp r0, #0x16\n    bne _020179BC\n    ldr r0, [sp, #4]\n    add sp, #8\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    cmp r0, #0x17\n    bne _020179CC\n    ldr r0, [sp, #4]\n    ldr r1, [r4]\n    add sp, #8\n    add r0, r1, r0\n    str r0, [r4]\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020179D4(void) {
    /* Original at 0x020179D4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    ldr r0, [r4]\n    beq _020179F6\n    ldr r3, [r4, #0x60]\n    ldr r2, [r4, #0x68]\n    ldr r5, [r4, #0x58]\n    add r2, r3, r2\n    mov r1, #0\n    sub r2, r5, r2\n    bl Pokepic_SetAttr\n    b _02017A06\n    ldr r3, [r4, #0x58]\n    ldr r2, [r4, #0x60]\n    ldr r5, [r4, #0x68]\n    add r2, r3, r2\n    mov r1, #0\n    add r2, r5, r2\n    bl Pokepic_SetAttr\n    ldr r3, [r4, #0x5c]\n    ldr r2, [r4, #0x64]\n    ldr r5, [r4, #0x6c]\n    add r2, r3, r2\n    ldr r0, [r4]\n    mov r1, #1\n    add r2, r5, r2\n    bl Pokepic_SetAttr\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02017A1C(void) {
    /* Original at 0x02017A1C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0xc\n    add r2, r1, #0\n    ldr r3, [r4, #0x70]\n    add r2, #0xf4\n    ldr r0, [r4]\n    add r2, r3, r2\n    bl Pokepic_SetAttr\n    mov r1, #0xd\n    add r2, r1, #0\n    ldr r3, [r4, #0x74]\n    add r2, #0xf3\n    ldr r0, [r4]\n    add r2, r3, r2\n    bl Pokepic_SetAttr\n    ldr r2, [r4, #0x78]\n    ldr r0, [r4]\n    lsl r2, r2, #0x10\n    mov r1, #9\n    lsr r2, r2, #0x10\n    bl Pokepic_SetAttr\n    ldr r0, _02017A80 ; =0x000001CE\n    ldrb r0, [r4, r0]\n    cmp r0, #0x1b\n    bne _02017A64\n    ldr r0, [r4, #0x74]\n    cmp r0, #0\n    bge _02017A7E\n    add r0, r4, #0\n    bl sub_02017488\n    pop {r4, pc}\n    cmp r0, #0x1d\n    bne _02017A76\n    ldr r0, [r4, #0x74]\n    cmp r0, #0\n    beq _02017A7E\n    add r0, r4, #0\n    bl sub_02017488\n    pop {r4, pc}\n    cmp r0, #0x1c\n    beq _02017A7E\n    bl GF_AssertFail\n    pop {r4, pc}\n    _02017A80: .word 0x000001CE"
    );
    #endif
}

void sub_02017A84(void) {
    /* Original at 0x02017A84 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    add r1, sp, #0\n    bl sub_02017294\n    ldr r0, [r4, #0xc]\n    add r0, r0, #4\n    str r0, [r4, #0xc]\n    bl sub_02017214\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #8\n    beq _02017AA6\n    cmp r0, #0xa\n    bne _02017AB6\n    add r0, sp, #0\n    ldrb r0, [r0]\n    add sp, #4\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #0x24]\n    str r0, [r4, #0x68]\n    pop {r3, r4, pc}\n    cmp r0, #9\n    beq _02017ABE\n    cmp r0, #0xb\n    bne _02017ACE\n    add r0, sp, #0\n    ldrb r0, [r0]\n    add sp, #4\n    lsl r0, r0, #2\n    add r0, r4, r0\n    ldr r0, [r0, #0x24]\n    str r0, [r4, #0x6c]\n    pop {r3, r4, pc}\n    bl GF_AssertFail\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02017AD8(void) {
    sub_0201726C(1);
}

void sub_02017AEC(void) {
    /* Original at 0x02017AEC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r1, sp, #4\n    add r1, #2\n    add r4, r0, #0\n    bl sub_02017280\n    add r1, sp, #4\n    add r0, r4, #0\n    add r1, #1\n    bl sub_02017280\n    add r0, r4, #0\n    add r1, sp, #4\n    bl sub_02017280\n    add r0, r4, #0\n    add r1, sp, #8\n    bl sub_0201726C\n    ldr r0, [sp, #8]\n    add r3, sp, #4\n    str r0, [sp]\n    ldrb r1, [r3, #2]\n    ldrb r2, [r3, #1]\n    ldrb r3, [r3]\n    ldr r0, [r4]\n    bl Pokepic_StartPaletteFade\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02017B2C(void) {
    Pokepic_ResumePaletteFade(1);
}

void sub_02017B48(void) {
    /* Original at 0x02017B48 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02017B50 ; =0x000001CD\n    mov r2, #1\n    strb r2, [r0, r1]\n    bx lr\n    _02017B50: .word 0x000001CD"
    );
    #endif
}

void sub_02017B54(void) {
    /* Original at 0x02017B54 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02017B88 ; =0x000001CE\n    add r4, r0, #0\n    add r1, r4, r1\n    bl sub_02017280\n    ldr r0, _02017B88 ; =0x000001CE\n    mov r1, #1\n    ldrb r0, [r4, r0]\n    add r2, r1, #0\n    cmp r0, #0x1b\n    beq _02017B72\n    cmp r0, #0x1d\n    beq _02017B72\n    mov r2, #0\n    cmp r2, #0\n    bne _02017B7C\n    cmp r0, #0x1c\n    beq _02017B7C\n    mov r1, #0\n    cmp r1, #0\n    bne _02017B84\n    bl GF_AssertFail\n    pop {r4, pc}\n    nop\n    _02017B88: .word 0x000001CE"
    );
    #endif
}

void sub_02017B8C(void) {
    sub_02017C78();
}

void sub_02017B98(void) {
    sub_02017C78();
}

void sub_02017BA4(void) {
    sub_02017C78();
}

void sub_02017BB0(void) {
    sub_02017C78();
}

void sub_02017BBC(void) {
    sub_02017C78();
}

void sub_02017BC8(void) {
    /* Original at 0x02017BC8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0x18\n    bne _02017BD4\n    ldr r0, [r2]\n    str r0, [r3]\n    pop {r3, pc}\n    cmp r0, #0x19\n    bne _02017BE2\n    ldr r1, [r1]\n    ldr r0, [r2]\n    add r0, r1, r0\n    str r0, [r3]\n    pop {r3, pc}\n    cmp r0, #0x1a\n    bne _02017BF0\n    ldr r1, [r3]\n    ldr r0, [r2]\n    add r0, r1, r0\n    str r0, [r3]\n    pop {r3, pc}\n    bl GF_AssertFail\n    pop {r3, pc}"
    );
    #endif
}

void sub_02017BF8(void) {
    /* Original at 0x02017BF8 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub r0, #0x23\n    cmp r0, #4\n    bhi _02017C70\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02017C0C: ; jump table\n    add r0, r1, #0\n    add r0, #0x3c\n    str r0, [r1, #0x24]\n    add r0, r2, #0\n    add r0, #0x68\n    str r0, [r1, #0x28]\n    ldr r0, [r2, #0x68]\n    str r0, [r1, #0x30]\n    pop {r3, pc}\n    add r0, r1, #0\n    add r0, #0x40\n    str r0, [r1, #0x24]\n    add r0, r2, #0\n    add r0, #0x6c\n    str r0, [r1, #0x28]\n    ldr r0, [r2, #0x6c]\n    str r0, [r1, #0x30]\n    pop {r3, pc}\n    add r0, r1, #0\n    add r0, #0x44\n    str r0, [r1, #0x24]\n    add r0, r2, #0\n    add r0, #0x70\n    str r0, [r1, #0x28]\n    ldr r0, [r2, #0x70]\n    str r0, [r1, #0x30]\n    pop {r3, pc}\n    add r0, r1, #0\n    add r0, #0x48\n    str r0, [r1, #0x24]\n    add r0, r2, #0\n    add r0, #0x74\n    str r0, [r1, #0x28]\n    ldr r0, [r2, #0x74]\n    str r0, [r1, #0x30]\n    pop {r3, pc}\n    add r0, r1, #0\n    add r0, #0x4c\n    str r0, [r1, #0x24]\n    add r0, r2, #0\n    add r0, #0x78\n    str r0, [r1, #0x28]\n    ldr r0, [r2, #0x78]\n    str r0, [r1, #0x30]\n    pop {r3, pc}\n    bl GF_AssertFail\n    pop {r3, pc}"
    );
    #endif
}

void sub_02017C78(void) {
    /* Original at 0x02017C78 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r1, #0\n    lsl r1, r6, #0x18\n    lsr r1, r1, #0x18\n    add r5, r0, #0\n    bl sub_02017220\n    str r0, [sp, #4]\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    add r1, #0x2c\n    bl sub_02017280\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    add r1, #0x2d\n    bl sub_02017280\n    mov r0, #0xc\n    mul r0, r6\n    ldr r1, _02017D14 ; =_020F61C0\n    str r0, [sp]\n    ldr r0, [r1, r0]\n    mov r4, #0\n    cmp r0, #0\n    ble _02017CCE\n    ldr r1, _02017D18 ; =_020F61BC\n    ldr r0, [sp]\n    add r6, r1, r0\n    ldr r0, [sp, #4]\n    add r7, r0, #4\n    lsl r1, r4, #2\n    add r0, r5, #0\n    add r1, r7, r1\n    bl sub_0201726C\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, [r6, #4]\n    cmp r4, r0\n    blt _02017CB8\n    ldr r1, _02017D1C ; =_020F61C4\n    ldr r0, [sp]\n    add r2, r5, #0\n    ldr r0, [r1, r0]\n    lsl r1, r0, #2\n    ldr r0, [sp, #4]\n    add r0, r0, r1\n    ldr r0, [r0, #4]\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl sub_02017BF8\n    ldr r0, [sp, #4]\n    add r0, #0x2d\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02017D00\n    ldr r0, [sp, #4]\n    add r1, r5, #0\n    add r2, r0, #0\n    ldr r2, [r2, #0x50]\n    blx r2\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #4]\n    add r0, #0x2d\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    ldr r0, [sp, #4]\n    add r0, #0x2d\n    str r0, [sp, #4]\n    strb r1, [r0]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02017D14: .word _020F61C0\n    _02017D18: .word _020F61BC\n    _02017D1C: .word _020F61C4"
    );
    #endif
}

void sub_02017D20(void) {
    /* Original at 0x02017D20 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x10]\n    add r0, r0, #1\n    ldr r2, [r4, #0x14]\n    mul r0, r1\n    add r0, r2, r0\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldr r0, [r4, #4]\n    sub r0, #0x1e\n    cmp r0, #3\n    bhi _02017DAC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02017D48: ; jump table\n    asr r0, r1, #4\n    lsl r1, r0, #2\n    ldr r0, _02017DD4 ; =FX_SinCosTable_\n    ldr r2, [r4, #0xc]\n    ldrsh r0, [r0, r1]\n    mul r0, r2\n    asr r1, r0, #0xc\n    ldr r0, [r4, #0x24]\n    str r1, [r0]\n    b _02017DB0\n    asr r1, r1, #4\n    lsl r1, r1, #1\n    add r1, r1, #1\n    lsl r2, r1, #1\n    ldr r1, _02017DD4 ; =FX_SinCosTable_\n    ldr r0, [r4, #0xc]\n    ldrsh r1, [r1, r2]\n    mul r1, r0\n    ldr r0, [r4, #0x24]\n    asr r1, r1, #0xc\n    str r1, [r0]\n    b _02017DB0\n    asr r0, r1, #4\n    lsl r1, r0, #2\n    ldr r0, _02017DD4 ; =FX_SinCosTable_\n    ldr r2, [r4, #0xc]\n    ldrsh r0, [r0, r1]\n    mul r0, r2\n    asr r0, r0, #0xc\n    neg r1, r0\n    ldr r0, [r4, #0x24]\n    str r1, [r0]\n    b _02017DB0\n    asr r1, r1, #4\n    lsl r1, r1, #1\n    add r1, r1, #1\n    lsl r2, r1, #1\n    ldr r1, _02017DD4 ; =FX_SinCosTable_\n    ldr r0, [r4, #0xc]\n    ldrsh r1, [r1, r2]\n    mul r1, r0\n    asr r0, r1, #0xc\n    neg r1, r0\n    ldr r0, [r4, #0x24]\n    str r1, [r0]\n    b _02017DB0\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r4, #0\n    ldr r2, [r4, #0x24]\n    ldr r3, [r4, #0x28]\n    add r1, #0x30\n    bl sub_02017BC8\n    ldr r0, [r4, #0x1c]\n    add r1, r0, #1\n    str r1, [r4, #0x1c]\n    ldr r0, [r4, #0x18]\n    cmp r1, r0\n    blt _02017DD2\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}\n    _02017DD4: .word FX_SinCosTable_"
    );
    #endif
}

void sub_02017DD8(void) {
    /* Original at 0x02017DD8 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x10]\n    add r0, r0, #1\n    mul r0, r1\n    ldr r1, [r4, #0x18]\n    bl _s32_div_f\n    ldr r1, [r4, #0x14]\n    add r0, r1, r0\n    lsl r0, r0, #0x10\n    lsr r1, r0, #0x10\n    ldr r0, [r4, #4]\n    sub r0, #0x1e\n    cmp r0, #3\n    bhi _02017E6A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02017E06: ; jump table\n    asr r0, r1, #4\n    lsl r1, r0, #2\n    ldr r0, _02017E94 ; =FX_SinCosTable_\n    ldr r2, [r4, #0xc]\n    ldrsh r0, [r0, r1]\n    mul r0, r2\n    asr r1, r0, #0xc\n    ldr r0, [r4, #0x24]\n    str r1, [r0]\n    b _02017E6E\n    asr r1, r1, #4\n    lsl r1, r1, #1\n    add r1, r1, #1\n    lsl r2, r1, #1\n    ldr r1, _02017E94 ; =FX_SinCosTable_\n    ldr r0, [r4, #0xc]\n    ldrsh r1, [r1, r2]\n    mul r1, r0\n    ldr r0, [r4, #0x24]\n    asr r1, r1, #0xc\n    str r1, [r0]\n    b _02017E6E\n    asr r0, r1, #4\n    lsl r1, r0, #2\n    ldr r0, _02017E94 ; =FX_SinCosTable_\n    ldr r2, [r4, #0xc]\n    ldrsh r0, [r0, r1]\n    mul r0, r2\n    asr r0, r0, #0xc\n    neg r1, r0\n    ldr r0, [r4, #0x24]\n    str r1, [r0]\n    b _02017E6E\n    asr r1, r1, #4\n    lsl r1, r1, #1\n    add r1, r1, #1\n    lsl r2, r1, #1\n    ldr r1, _02017E94 ; =FX_SinCosTable_\n    ldr r0, [r4, #0xc]\n    ldrsh r1, [r1, r2]\n    mul r1, r0\n    asr r0, r1, #0xc\n    neg r1, r0\n    ldr r0, [r4, #0x24]\n    str r1, [r0]\n    b _02017E6E\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r4, #0\n    ldr r2, [r4, #0x24]\n    ldr r3, [r4, #0x28]\n    add r1, #0x30\n    bl sub_02017BC8\n    ldr r0, [r4, #0x1c]\n    add r1, r0, #1\n    str r1, [r4, #0x1c]\n    ldr r0, [r4, #0x18]\n    cmp r1, r0\n    blt _02017E90\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}\n    nop\n    _02017E94: .word FX_SinCosTable_"
    );
    #endif
}

void sub_02017E98(void) {
    /* Original at 0x02017E98 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x24]\n    ldr r3, [r4, #0xc]\n    ldr r2, [r4, #0x14]\n    ldr r5, [r4, #8]\n    mul r2, r3\n    ldr r0, [r1]\n    add r2, r5, r2\n    add r0, r0, r2\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x2c\n    add r1, r4, #0\n    ldrb r0, [r0]\n    ldr r2, [r4, #0x24]\n    ldr r3, [r4, #0x28]\n    add r1, #0x30\n    bl sub_02017BC8\n    ldr r0, [r4, #0x14]\n    add r1, r0, #1\n    str r1, [r4, #0x14]\n    ldr r0, [r4, #0x10]\n    cmp r1, r0\n    blt _02017ED0\n    mov r0, #0\n    str r0, [r4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02017ED4(void) {
    /* Original at 0x02017ED4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    add r1, r0, #1\n    ldr r0, [r4, #8]\n    mul r0, r1\n    ldr r1, [r4, #0xc]\n    bl _s32_div_f\n    ldr r1, [r4, #0x24]\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x2c\n    add r1, r4, #0\n    ldrb r0, [r0]\n    ldr r2, [r4, #0x24]\n    ldr r3, [r4, #0x28]\n    add r1, #0x30\n    bl sub_02017BC8\n    ldr r0, [r4, #0x10]\n    add r1, r0, #1\n    str r1, [r4, #0x10]\n    ldr r0, [r4, #0xc]\n    cmp r1, r0\n    blt _02017F0C\n    mov r0, #0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void sub_02017F10(void) {
    /* Original at 0x02017F10 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    ldr r0, [r4, #0x14]\n    ldr r2, [r4, #8]\n    mul r0, r1\n    ldr r1, [r4, #0x24]\n    add r2, r2, r0\n    ldr r0, [r1]\n    add r0, r0, r2\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    cmp r0, #0x18\n    beq _02017F34\n    cmp r0, #0x1a\n    bne _02017F5A\n    cmp r2, #0\n    ldr r2, [r4, #0x10]\n    bge _02017F4A\n    ldr r1, [r4, #0x24]\n    ldr r0, [r1]\n    cmp r0, r2\n    bgt _02017F90\n    str r2, [r1]\n    mov r0, #0\n    str r0, [r4]\n    b _02017F90\n    ldr r1, [r4, #0x24]\n    ldr r0, [r1]\n    cmp r0, r2\n    blt _02017F90\n    str r2, [r1]\n    mov r0, #0\n    str r0, [r4]\n    b _02017F90\n    cmp r0, #0x19\n    bne _02017F8C\n    ldr r1, [r4, #0x24]\n    ldr r3, [r4, #0x30]\n    ldr r0, [r1]\n    add r3, r3, r0\n    cmp r2, #0\n    ldr r2, [r4, #0x10]\n    bge _02017F7C\n    cmp r3, r2\n    bgt _02017F90\n    sub r2, r2, r3\n    add r0, r0, r2\n    str r0, [r1]\n    mov r0, #0\n    str r0, [r4]\n    b _02017F90\n    cmp r3, r2\n    blt _02017F90\n    sub r2, r3, r2\n    sub r0, r0, r2\n    str r0, [r1]\n    mov r0, #0\n    str r0, [r4]\n    b _02017F90\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0x2c\n    ldrb r0, [r0]\n    add r1, r4, #0\n    ldr r2, [r4, #0x24]\n    ldr r3, [r4, #0x28]\n    add r1, #0x30\n    bl sub_02017BC8\n    ldr r0, [r4, #0x14]\n    add r0, r0, #1\n    str r0, [r4, #0x14]\n    pop {r4, pc}"
    );
    #endif
}
