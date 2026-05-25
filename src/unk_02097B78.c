/* Decompiled from asm/unk_02097B78.s */
#include "global.h"

void LegendaryCinematic_Init(void) {
    /* Original at 0x02097B78 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r2, #2\n    add r5, r0, #0\n    mov r0, #3\n    mov r1, #0x99\n    lsl r2, r2, #0x12\n    bl Heap_Create\n    ldr r1, _02097BA8 ; =0x0000041C\n    add r0, r5, #0\n    mov r2, #0x99\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _02097BA8 ; =0x0000041C\n    mov r1, #0\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02097BA8: .word 0x0000041C"
    );
    #endif
}

void LegendaryCinematic_Main(void) {
    /* Original at 0x02097BAC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl OverlayManager_GetData\n    ldr r1, [r0]\n    add r1, #0x4c\n    ldrh r1, [r1]\n    lsl r2, r1, #2\n    ldr r1, _02097BCC ; =_02108F38\n    ldr r1, [r1, r2]\n    blx r1\n    cmp r0, #0\n    bne _02097BC8\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _02097BCC: .word _02108F38"
    );
    #endif
}

u32 LegendaryCinematic_Exit(void) {
    OverlayManager_FreeData();
    Heap_Destroy(0x99);
    return 1;
}
