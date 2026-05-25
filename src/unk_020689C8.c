/* Decompiled from asm/unk_020689C8.s */
#include "global.h"

void sub_020689C8(void) {
    /* Original at 0x020689C8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    bl sub_02068C08\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02068C38\n    str r0, [r4, #0xc]\n    str r6, [r4]\n    str r5, [r4, #8]\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020689E8(void) {
    sub_02068C5C();
    sub_02068C2C(r4);
}

void sub_020689F8(void) {
    sub_02068B80();
    sub_020689E8(r4);
}

void sub_02068A08(void) {
    /* Original at 0x02068A08 */
    /* Requires manual decompilation - 106 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp]\n    add r7, r1, #0\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    mov r4, #0\n    bl sub_02068CC4\n    add r6, r0, #0\n    ldr r0, [sp]\n    bl sub_02068CC8\n    add r5, r0, #0\n    add r0, r5, #0\n    bl sub_02068CCC\n    cmp r0, #0\n    beq _02068A36\n    add r4, r4, #1\n    add r5, #0xc8\n    cmp r4, r6\n    blt _02068A24\n    cmp r4, r6\n    blt _02068A40\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl sub_02068CD8\n    ldr r1, [sp, #8]\n    add r0, r5, #0\n    bl sub_02068D8C\n    ldr r1, [sp, #0x30]\n    add r0, r5, #0\n    bl sub_02068D94\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl sub_02068DA4\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _02068A6E\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    bl sub_02068DA8\n    b _02068A7E\n    add r1, sp, #0xc\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    add r0, r5, #0\n    bl sub_02068DA8\n    ldr r1, [r7]\n    add r0, r5, #0\n    bl sub_02068D78\n    ldr r1, [r7, #4]\n    add r0, r5, #0\n    bl sub_02068CF4\n    ldr r1, [r7, #8]\n    add r0, r5, #0\n    bl sub_02068D48\n    ldr r1, [r7, #0xc]\n    add r0, r5, #0\n    bl sub_02068D10\n    ldr r1, [r7, #0x10]\n    add r0, r5, #0\n    bl sub_02068D2C\n    ldr r1, [r7, #0x14]\n    add r0, r5, #0\n    bl sub_02068D64\n    ldr r1, [r7, #0x18]\n    add r0, r5, #0\n    bl sub_02068D6C\n    ldr r1, [sp, #0x34]\n    add r0, r5, #0\n    bl sub_02068BDC\n    add r4, r0, #0\n    bne _02068ACE\n    add r0, r5, #0\n    bl sub_02068C6C\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02068D9C\n    add r0, r5, #0\n    bl sub_02068CFC\n    cmp r0, #0\n    bne _02068AF2\n    add r0, r4, #0\n    bl SysTask_Destroy\n    add r0, r5, #0\n    bl sub_02068C6C\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    mov r1, #2\n    bl sub_02068CE4\n    ldr r0, [sp]\n    ldr r0, [r0, #4]\n    add r1, r0, #1\n    ldr r0, [sp]\n    str r1, [r0, #4]\n    add r0, r5, #0\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02068B0C(void) {
    /* Original at 0x02068B0C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    add r6, r0, #0\n    add r4, sp, #8\n    ldmia r5!, {r0, r1}\n    add r7, r4, #0\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r5]\n    add r1, r7, #0\n    str r0, [r4]\n    ldr r0, _02068B40 ; =sub_02068DD8\n    str r0, [sp, #0x1c]\n    ldr r0, _02068B44 ; =sub_02068DDC\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x38]\n    str r0, [sp]\n    ldr r0, [sp, #0x3c]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl sub_02068A08\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _02068B40: .word sub_02068DD8\n    _02068B44: .word sub_02068DDC"
    );
    #endif
}

void sub_02068B48(void) {
    /* Original at 0x02068B48 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bne _02068B52\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl sub_02068CCC\n    cmp r0, #0\n    beq _02068B7E\n    add r0, r4, #0\n    bl sub_02068D50\n    ldr r1, [r4, #0x14]\n    ldr r0, [r1, #4]\n    sub r0, r0, #1\n    str r0, [r1, #4]\n    add r0, r4, #0\n    bl sub_02068DA0\n    cmp r0, #0\n    beq _02068B78\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl sub_02068C6C\n    pop {r4, pc}"
    );
    #endif
}

void sub_02068B80(void) {
    /* Original at 0x02068B80 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_02068CC4\n    add r4, r0, #0\n    add r0, r5, #0\n    bl sub_02068CC8\n    add r5, r0, #0\n    add r0, r5, #0\n    bl sub_02068CCC\n    cmp r0, #1\n    bne _02068BA2\n    add r0, r5, #0\n    bl sub_02068B48\n    add r5, #0xc8\n    sub r4, r4, #1\n    bne _02068B92\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02068BAC(void) {
    /* Original at 0x02068BAC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl sub_02068CC4\n    add r4, r0, #0\n    add r0, r5, #0\n    bl sub_02068CC8\n    add r5, r0, #0\n    mov r6, #3\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02068CEC\n    cmp r0, #3\n    bne _02068BD2\n    add r0, r5, #0\n    bl sub_02068D34\n    add r5, #0xc8\n    sub r4, r4, #1\n    bne _02068BC0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02068BDC(void) {
    /* Original at 0x02068BDC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r3, r0, #0\n    add r2, r1, #0\n    ldr r0, _02068BF8 ; =sub_02068BFC\n    add r1, r3, #0\n    bl SysTask_CreateOnMainQueue\n    add r4, r0, #0\n    bne _02068BF2\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _02068BF8: .word sub_02068BFC"
    );
    #endif
}

void sub_02068BFC(void) {
    sub_02068D18();
}

void sub_02068C08(void) {
    /* Original at 0x02068C08 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x10\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02068C18\n    bl GF_AssertFail\n    add r2, r4, #0\n    mov r1, #0x10\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02068C1E\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02068C2C(void) {
    Heap_FreeExplicit();
}

void sub_02068C38(void) {
    /* Original at 0x02068C38 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0xc8\n    add r5, r1, #0\n    mul r5, r2\n    add r1, r5, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _02068C4E\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl memset\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02068C5C(void) {
    /* Original at 0x02068C5C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02068C68 ; =Heap_FreeExplicit\n    add r1, r0, #0\n    ldr r0, [r1, #8]\n    ldr r1, [r1, #0xc]\n    bx r3\n    nop\n    _02068C68: .word Heap_FreeExplicit"
    );
    #endif
}

void sub_02068C6C(void) {
    /* Original at 0x02068C6C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0\n    mov r2, #0xc8\n    add r4, r0, #0\n    bl memset\n    ldr r1, _02068CAC ; =sub_02068DC8\n    add r0, r4, #0\n    bl sub_02068CF4\n    ldr r1, _02068CB0 ; =sub_02068DD4\n    add r0, r4, #0\n    bl sub_02068D48\n    ldr r1, _02068CB4 ; =sub_02068DCC\n    add r0, r4, #0\n    bl sub_02068D10\n    ldr r1, _02068CB8 ; =sub_02068DD0\n    add r0, r4, #0\n    bl sub_02068D2C\n    ldr r1, _02068CBC ; =sub_02068DD8\n    add r0, r4, #0\n    bl sub_02068D64\n    ldr r1, _02068CC0 ; =sub_02068DDC\n    add r0, r4, #0\n    bl sub_02068D6C\n    pop {r4, pc}\n    nop\n    _02068CAC: .word sub_02068DC8\n    _02068CB0: .word sub_02068DD4\n    _02068CB4: .word sub_02068DCC\n    _02068CB8: .word sub_02068DD0\n    _02068CBC: .word sub_02068DD8\n    _02068CC0: .word sub_02068DDC"
    );
    #endif
}

void sub_02068CC4(void) {
    /* Original at 0x02068CC4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_02068CC8(void) {
    /* Original at 0x02068CC8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void sub_02068CCC(void) {
    /* Original at 0x02068CCC */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    mov r0, #1\n    tst r1, r0\n    bne _02068CD6\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_02068CD8(void) {
    /* Original at 0x02068CD8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0]\n    mov r1, #1\n    orr r1, r2\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02068CE4(void) {
    /* Original at 0x02068CE4 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0]\n    orr r1, r2\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02068CEC(void) {
    /* Original at 0x02068CEC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    and r0, r1\n    bx lr"
    );
    #endif
}

void sub_02068CF4(void) {
    /* Original at 0x02068CF4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xb0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02068CFC(void) {
    sub_02068D74();
}

void sub_02068D10(void) {
    /* Original at 0x02068D10 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xb4\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02068D18(void) {
    sub_02068D74();
}

void sub_02068D2C(void) {
    /* Original at 0x02068D2C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xb8\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02068D34(void) {
    sub_02068D74();
}

void sub_02068D48(void) {
    /* Original at 0x02068D48 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xbc\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02068D50(void) {
    sub_02068D74();
}

void sub_02068D64(void) {
    /* Original at 0x02068D64 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xc0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02068D6C(void) {
    /* Original at 0x02068D6C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xc4\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02068D74(void) {
    /* Original at 0x02068D74 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x30\n    bx lr"
    );
    #endif
}

void sub_02068D78(void) {
    sub_02068D74();
    memset(0, r4);
}

void sub_02068D8C(void) {
    /* Original at 0x02068D8C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #4]\n    bx lr"
    );
    #endif
}

void sub_02068D90(void) {
    /* Original at 0x02068D90 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void sub_02068D94(void) {
    /* Original at 0x02068D94 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void sub_02068D98(void) {
    /* Original at 0x02068D98 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void sub_02068D9C(void) {
    /* Original at 0x02068D9C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void sub_02068DA0(void) {
    /* Original at 0x02068DA0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x10]\n    bx lr"
    );
    #endif
}

void sub_02068DA4(void) {
    /* Original at 0x02068DA4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void sub_02068DA8(void) {
    /* Original at 0x02068DA8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r1, #0\n    add r2, r0, #0\n    ldmia r3!, {r0, r1}\n    add r2, #0x24\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    bx lr"
    );
    #endif
}

void sub_02068DB8(void) {
    /* Original at 0x02068DB8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x24\n    add r3, r1, #0\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    bx lr"
    );
    #endif
}

u8 sub_02068DC8(void) {
    return 1;
}

void sub_02068DCC(void) {
    /* Original at 0x02068DCC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02068DD0(void) {
    /* Original at 0x02068DD0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02068DD4(void) {
    /* Original at 0x02068DD4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02068DD8(void) {
    /* Original at 0x02068DD8 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02068DDC(void) {
    /* Original at 0x02068DDC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}
