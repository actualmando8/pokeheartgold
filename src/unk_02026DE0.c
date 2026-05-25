/* Decompiled from asm/unk_02026DE0.s */
#include "global.h"

void sub_02026DE0(void) {
    /* Original at 0x02026DE0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, [r0, #0xc]\n    mov r2, #0\n    sub r3, r3, #1\n    beq _02026DFE\n    ldr r4, [r0]\n    ldrh r3, [r4, #2]\n    cmp r3, r1\n    bhi _02026DFE\n    ldr r3, [r0, #0xc]\n    add r2, r2, #1\n    sub r3, r3, #1\n    add r4, r4, #2\n    cmp r2, r3\n    blo _02026DEC\n    ldr r1, [r0, #4]\n    ldrb r3, [r1, r2]\n    add r1, sp, #0\n    strb r3, [r1]\n    ldr r0, [r0, #8]\n    ldrb r2, [r0, r2]\n    strb r2, [r1, #1]\n    ldrb r0, [r1]\n    lsl r1, r2, #8\n    orr r0, r1\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02026E18(void) {
    /* ldr r2, [r0] */
    ((u32*)r1)[0xc] = r2;
    r2 = r0 + 4;
    *(u32*)r1 = (r0 + 4);
    /* ldr r0, [r1, #0xc] */
    /* lsl r0, r0, #1 */
    /* add r2, r2, r0 */
    ((u32*)r1)[4] = (r0 + 4);
    /* ldr r0, [r1, #0xc] */
    /* add r0, r2, r0 */
    ((u32*)r1)[8] = r0;
}
