/* Decompiled from asm/overlay_01_021EA6C4.s */
#include "global.h"

void ov01_021EA724(void) {
    Heap_Alloc(4, 8);
    GF_AssertFail();
}



void ov01_021EA73C(void) {
    // add r0, sp, #4
    FS_InitFile();
    // add r0, sp, #4
    FS_OpenFile(r4);
    // add r1, sp, #0
    // add r0, sp, #4
    // add r1, #2
    FS_ReadFile(2);
    GF_AssertFail();
    // add r0, sp, #4
    // add r1, sp, #0
    FS_ReadFile(2);
    GF_AssertFail();
    // add r0, sp, #0
    // ldrh r0, [r0]
    Heap_Alloc(4, (*((u16*)(r0 + 2)) << 2));
    // str r0, [r5]
    GF_AssertFail();
    Heap_Alloc(4, r4);
    *((u32*)(r5 + 4)) = r0;
    GF_AssertFail();
    // add r0, sp, #4
    FS_ReadFile(*((u32*)r5), r6);
    GF_AssertFail();
    // add r0, sp, #4
    FS_ReadFile(*((u32*)(r5 + 4)), r4);
    GF_AssertFail();
    // add r0, sp, #4
    FS_CloseFile();
    GF_AssertFail();
}



void ov01_021EA7E0(void) {
}



void ov01_021EA7F8(void) {
    // ldrh r0, [r1, r0]
    // strh r0, [r2]
}



void ov01_021EA804(void) {
    // ldrh r0, [r0, r4]
    // strh r0, [r2]
    // add r0, r0, r4
    // strh r0, [r3]
}



void ov01_021EA81C(void) {
    // add r0, r1, r0
}


