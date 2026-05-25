/* Decompiled from asm/unk_020318C8.s */
#include "global.h"

void sub_020318C8(void) {
    r0 = 8;
}

void sub_020318CC(void) {
    void *r4;
    r4 = r0 + 0;
    sub_020318C8();
    r2 = r0 + 0;
    r0 = 0;
    r1 = r4 + 0;
    MIi_CpuClear32(0, (r4 + 0), (r0 + 0));
    r0 = 0;
    /* mvn r0, r0 */
    *(u32*)r4 = 0;
}

void sub_020318E8(void) {
    SaveArray_Get();
}

void sub_020318F4(void) {
    /* ldr r0, [r0] */
}

void sub_020318F8(void) {
    /* ldr r0, [r0, #4] */
}

void sub_020318FC(void) {
    *(u32*)r0 = r1;
}

void sub_02031900(void) {
    ((u32*)r0)[4] = r1;
}
