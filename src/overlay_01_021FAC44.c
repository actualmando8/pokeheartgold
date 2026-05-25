/* Decompiled from asm/overlay_01_021FAC44.s */
#include "global.h"

void ov01_021FAC44(void) {
    Heap_Alloc(4, 0x20);
    // add r1, r1, r2
    // add r6, r5, r0
    // str r1, [r5, r0]
    Heap_Alloc(4, (9 << 0xc), (0 * (0xf << 0xc)));
    *((u32*)(r6 + 0x10)) = r0;
    *((u32*)(r6 + 0x10)) = 0;
    ov01_021FACF8(r4, (0xf << 0xc), 0, r5);
}




void ov01_021FACB4(void) {
    // add r5, r6, r0
    // str r7, [r6, r0]
}




void ov01_021FACE4(void) {
}




void ov01_021FACEC(void) {
}




void ov01_021FACF8(void) {
}



