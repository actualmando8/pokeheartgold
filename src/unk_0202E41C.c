/* Decompiled from asm/unk_0202E41C.s */
#include "global.h"

void sub_0202E41C(void) {
    /* Original at 0x0202E41C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0202E420 ; =0x00000BC8\n    bx lr\n    _0202E420: .word 0x00000BC8"
    );
    #endif
}

void sub_0202E424(void) {
    /* Original at 0x0202E424 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _0202E438 ; =0x00000BC8\n    add r1, r0, #0\n    mov r0, #0\n    bl MIi_CpuClearFast\n    mov r0, #0x17\n    bl SaveSubstruct_UpdateCRC\n    pop {r3, pc}\n    _0202E438: .word 0x00000BC8"
    );
    #endif
}

void sub_0202E43C(void) {
    /* Original at 0x0202E43C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    mov r0, #0\n    add r1, #0xc\n    mov r2, #0xc0\n    bl MIi_CpuClearFast\n    add r1, r4, #0\n    mov r0, #0\n    add r1, #0xcc\n    mov r2, #0xc0\n    bl MIi_CpuClearFast\n    mov r1, #0x63\n    lsl r1, r1, #2\n    mov r0, #0\n    add r1, r4, r1\n    mov r2, #0xc0\n    bl MIi_CpuClearFast\n    add r0, r4, #0\n    bl sub_0202E474\n    mov r0, #0x17\n    bl SaveSubstruct_UpdateCRC\n    pop {r4, pc}"
    );
    #endif
}

void sub_0202E474(void) {
    sub_0202E48C(0);
    sub_0202E498(r4);
    SaveSubstruct_UpdateCRC(0x17);
}

void sub_0202E48C(void) {
    SaveSubstruct_UpdateCRC();
}

void sub_0202E498(void) {
    /* Original at 0x0202E498 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    add r1, r2, #0\n    strb r1, [r0, r2]\n    add r2, r2, #1\n    cmp r2, #4\n    blt _0202E49C\n    ldr r3, _0202E4AC ; =SaveSubstruct_UpdateCRC\n    mov r0, #0x17\n    bx r3\n    nop\n    _0202E4AC: .word SaveSubstruct_UpdateCRC"
    );
    #endif
}
