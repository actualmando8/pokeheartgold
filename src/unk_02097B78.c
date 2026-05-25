/* Decompiled from asm/unk_02097B78.s */
#include "global.h"

BOOL LegendaryCinematic_Init(void) {
    Heap_Create(3, 0x99, (2 << 0x12));
    OverlayManager_CreateAndGetData(r5, 0x0000041C, 0x99);
    MI_CpuFill8(0, 0x0000041C);
    OverlayManager_GetArgs(r5);
    // str r0, [r4]
}



BOOL LegendaryCinematic_Main(void) {
    OverlayManager_GetData();
    // add r1, #0x4c
    // blx r1
}



u32 LegendaryCinematic_Exit(void) {
}


