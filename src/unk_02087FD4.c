/* Decompiled from asm/unk_02087FD4.s */
#include "global.h"

void sub_02087FD4(void) {
    GF_AssertFail(0x24);
}

void sub_02087FF8(void) {
    /* Original at 0x02087FF8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bne _0208800C\n    bl sub_02087E1C\n    cmp r0, #0\n    bne _0208800C\n    ldr r0, _02088028 ; =_0210357C\n    pop {r3, r4, r5, pc}\n    cmp r4, #3\n    bne _0208801E\n    add r0, r5, #0\n    bl sub_02087E1C\n    cmp r0, #0\n    bne _0208801E\n    ldr r0, _0208802C ; =_02102DC0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl sub_02087FD4\n    pop {r3, r4, r5, pc}\n    nop\n    _02088028: .word _0210357C\n    _0208802C: .word _02102DC0"
    );
    #endif
}

void sub_02088030(void) {
    /* Original at 0x02088030 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r1, _02088058 ; =0x00000818\n    mov r3, #0\n    ldr r4, [r0, r1]\n    mov r1, #0x6e\n    lsl r1, r1, #4\n    str r3, [r0, r1]\n    ldr r2, [r4]\n    cmp r2, #0\n    beq _0208804A\n    ldr r2, [r0, r1]\n    add r2, r2, #1\n    str r2, [r0, r1]\n    add r3, r3, #1\n    add r4, #0x24\n    cmp r3, #5\n    blt _0208803E\n    pop {r3, r4}\n    bx lr\n    nop\n    _02088058: .word 0x00000818"
    );
    #endif
}
