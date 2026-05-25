/* Decompiled from asm/unk_0202DB34.s */
#include "global.h"

void sub_0202DB34(void) {
    SaveArray_Get();
}

u8 sub_0202DB40(void) {
    return 0xf8;
}

void sub_0202DB44(void) {
    /* Original at 0x0202DB44 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0202DB50 ; =MIi_CpuClearFast\n    add r1, r0, #0\n    mov r0, #0\n    mov r2, #0xf8\n    bx r3\n    nop\n    _0202DB50: .word MIi_CpuClearFast"
    );
    #endif
}

void sub_0202DB54(void) {
    /* Original at 0x0202DB54 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xec\n    ldrh r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202DB5C(void) {
    /* Original at 0x0202DB5C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xec\n    strh r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202DB64(void) {
    MIi_CpuCopyFast();
}

void sub_0202DB70(void) {
    /* Original at 0x0202DB70 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0202DB7C ; =MIi_CpuCopyFast\n    add r2, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    mov r2, #0xec\n    bx r3\n    _0202DB7C: .word MIi_CpuCopyFast"
    );
    #endif
}

void sub_0202DB80(void) {
    /* Original at 0x0202DB80 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xf0\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202DB88(void) {
    /* Original at 0x0202DB88 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xf0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202DB90(void) {
    /* Original at 0x0202DB90 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xf4\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202DB98(void) {
    /* Original at 0x0202DB98 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xf4\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_0202DBA0(void) {
    /* Original at 0x0202DBA0 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0xee\n    ldrh r0, [r0]\n    bx lr"
    );
    #endif
}
