/* Decompiled from asm/unk_02026DE0.s */
#include "global.h"

u16 sub_02026DE0(void) {
    // ldrb r3, [r1, r2]
    // add r1, sp, #0
    // strb r3, [r1]
    // ldrb r2, [r0, r2]
    *((u8*)(*((u32*)(r0 + 4)) + 1)) = (0 + 1);
    // ldrb r0, [r1]
    // orr r0, r1
}



void sub_02026E18(void) {
}


