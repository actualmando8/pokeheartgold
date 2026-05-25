/* Decompiled from asm/overlay_01_021FED9C.s */
#include "global.h"

void ov01_021FED9C(void) {
    /* Original at 0x021FED9C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #0\n    mov r1, #0x3c\n    add r3, r2, #0\n    add r5, r0, #0\n    bl ov01_021F1430\n    add r4, r0, #0\n    str r5, [r4]\n    bl ov01_021FEDC8\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FEDB8(void) {
    ov01_021FEDF0();
    ov01_021F1448(r4);
}

void ov01_021FEDC8(void) {
    /* Original at 0x021FEDC8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r2, #0\n    add r4, r0, #0\n    str r2, [sp]\n    ldr r0, [r4]\n    add r1, r4, #4\n    mov r3, #0x1e\n    bl ov01_021F19F4\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [r4]\n    add r4, #0x18\n    add r1, r4, #0\n    mov r3, #0x87\n    bl ov01_021F1A18\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021FEDF0(void) {
    sub_02069784();
    sub_020698D0(r4);
}

void ov01_021FEE04(void) {
    /* Original at 0x021FEE04 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r6, r1, #0\n    add r4, r2, #0\n    add r7, r3, #0\n    bl ov01_021F146C\n    mov r1, #7\n    str r0, [sp, #8]\n    bl ov01_021F1450\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    add r1, r7, #0\n    add r2, sp, #0x10\n    bl sub_020611C8\n    ldr r1, [sp, #0x18]\n    lsl r0, r4, #3\n    add r0, r1, r0\n    str r0, [sp, #0x18]\n    add r0, r5, #0\n    bl MapObject_GetPreviousYCoord\n    lsl r1, r0, #0xf\n    mov r0, #2\n    lsl r0, r0, #0xe\n    sub r0, r1, r0\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    mov r1, #2\n    bl MapObject_GetPriorityPlusValue\n    add r1, sp, #8\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, _021FEE60 ; =ov01_02209124\n    add r2, sp, #0x10\n    mov r3, #0\n    bl ov01_021F1620\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _021FEE60: .word ov01_02209124"
    );
    #endif
}

void ov01_021FEE64(void) {
    /* Original at 0x021FEE64 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r1, #0\n    bl sub_02068D98\n    ldr r3, [r0, #4]\n    ldr r1, [r0]\n    mov r0, #0\n    str r1, [r4, #0x78]\n    str r3, [r4, #0x7c]\n    str r0, [sp]\n    add r2, r3, #4\n    ldr r0, [r4, #0x78]\n    add r1, r4, #0\n    add r3, #0x18\n    bl ov01_021F1A34\n    ldr r1, [r4, #0x7c]\n    add r0, r4, #0\n    add r0, #0x24\n    add r1, r1, #4\n    add r2, r4, #0\n    bl sub_02069998\n    mov r0, #1\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov01_021FEE9C(void) {
    sub_020698D0();
}

void ov01_021FEEA8(void) {
    /* Original at 0x021FEEA8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl sub_02069948\n    cmp r0, #1\n    bne _021FEEC0\n    add r0, r5, #0\n    bl ov01_021F1640\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0xc\n    mov r2, #0\n    bl sub_020698E8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021FEED0(void) {
    sub_02068DB8();
    sub_020699BC(r4);
}
