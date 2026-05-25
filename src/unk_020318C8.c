/* Decompiled from asm/unk_020318C8.s */
#include "global.h"

void sub_020318C8(void) {
    /* Original at 0x020318C8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #8\n    bx lr"
    );
    #endif
}

void sub_020318CC(void) {
    /* Original at 0x020318CC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_020318C8\n    add r2, r0, #0\n    mov r0, #0\n    add r1, r4, #0\n    bl MIi_CpuClear32\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void sub_020318E8(void) {
    SaveArray_Get();
}

void sub_020318F4(void) {
    /* Original at 0x020318F4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_020318F8(void) {
    /* Original at 0x020318F8 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    bx lr"
    );
    #endif
}

void sub_020318FC(void) {
    /* Original at 0x020318FC */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02031900(void) {
    /* Original at 0x02031900 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #4]\n    bx lr"
    );
    #endif
}
