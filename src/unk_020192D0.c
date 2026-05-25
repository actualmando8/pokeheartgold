/* Decompiled from asm/unk_020192D0.s */
#include "global.h"

void sub_020192D0(void) {
    /* Original at 0x020192D0 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r1, #1\n    lsl r1, r1, #0x1a\n    ldr r0, [r1]\n    ldr r2, _0201934C ; =0xFFFFE0FF\n    and r0, r2\n    str r0, [r1]\n    ldr r0, _02019350 ; =0x04001000\n    ldr r3, [r0]\n    and r2, r3\n    str r2, [r0]\n    ldr r3, [r1]\n    ldr r2, _02019354 ; =0xFFFF1FFF\n    and r3, r2\n    str r3, [r1]\n    ldr r3, [r0]\n    add r1, #0x50\n    and r2, r3\n    str r2, [r0]\n    mov r2, #0\n    strh r2, [r1]\n    add r0, #0x50\n    strh r2, [r0]\n    mov r2, #0xa\n    mov r0, #3\n    mov r1, #0x7b\n    lsl r2, r2, #0xe\n    bl Heap_Create\n    add r0, r4, #0\n    mov r1, #0x80\n    mov r2, #0x7b\n    bl OverlayManager_CreateAndGetData\n    mov r1, #0\n    mov r2, #0x80\n    add r5, r0, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl OverlayManager_GetArgs\n    str r0, [r5]\n    ldr r1, _02019358 ; =0x0000047D\n    mov r0, #0xb\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _0201934C: .word 0xFFFFE0FF\n    _02019350: .word 0x04001000\n    _02019354: .word 0xFFFF1FFF\n    _02019358: .word 0x0000047D"
    );
    #endif
}

void sub_0201935C(void) {
    /* Original at 0x0201935C */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #8\n    bhi _0201945A\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02019378: ; jump table\n    bl sub_020194B4\n    mov r0, #1\n    str r0, [r5]\n    b _0201945A\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _0201945A\n    ldr r1, [r4, #0x10]\n    ldr r0, _02019480 ; =_021D1108\n    str r1, [r0]\n    ldr r0, _02019484 ; =sub_02019520\n    ldr r1, _02019488 ; =sub_02019548\n    bl ov00_021EC294\n    mov r0, #1\n    str r0, [r4, #0x78]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0201945A\n    ldr r0, _0201948C ; =_020F6288\n    add r1, r4, #0\n    mov r2, #0x7b\n    bl OverlayManager_New\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0201945A\n    ldr r0, [r4, #8]\n    bl OverlayManager_Run\n    cmp r0, #1\n    bne _0201945A\n    ldr r0, [r4, #8]\n    bl OverlayManager_Delete\n    ldr r0, [r4, #0x7c]\n    cmp r0, #1\n    bne _020193EC\n    mov r0, #1\n    str r0, [r4, #4]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0201945A\n    mov r0, #8\n    str r0, [r5]\n    b _0201945A\n    ldr r0, [r4]\n    ldrb r0, [r0, #0xc]\n    bl sub_02087E10\n    ldr r1, [r4]\n    mov r2, #0x7b\n    ldr r1, [r1]\n    bl OverlayManager_New\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0201945A\n    ldr r0, [r4, #8]\n    bl OverlayManager_Run\n    cmp r0, #1\n    bne _0201945A\n    ldr r0, [r4, #8]\n    bl OverlayManager_Delete\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0201945A\n    ldr r0, _0201948C ; =_020F6288\n    add r1, r4, #0\n    mov r2, #0x7b\n    bl OverlayManager_New\n    str r0, [r4, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0201945A\n    ldr r0, [r4, #8]\n    bl OverlayManager_Run\n    cmp r0, #1\n    bne _0201945A\n    ldr r0, [r4, #8]\n    bl OverlayManager_Delete\n    mov r0, #0\n    str r0, [r4, #4]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _0201945A\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x78]\n    cmp r0, #1\n    bne _0201947C\n    ldr r0, [r4, #4]\n    cmp r0, #1\n    bne _0201947C\n    ldr r0, [r4, #0x7c]\n    cmp r0, #1\n    bne _0201947C\n    bl ov00_021ECB40\n    bl ov00_021EC9D4\n    mov r1, #3\n    sub r0, r1, r0\n    bl sub_0203A930\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02019480: .word _021D1108\n    _02019484: .word sub_02019520\n    _02019488: .word sub_02019548\n    _0201948C: .word _020F6288"
    );
    #endif
}

u32 sub_02019490(void) {
    OverlayManager_GetData();
    sub_020194F8();
    Heap_Free();
    OverlayManager_FreeData(r5);
    Heap_Destroy(0x7b);
    return 1;
}

void sub_020194B4(void) {
    /* Original at 0x020194B4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x78]\n    cmp r0, #0\n    bne _020194F2\n    bl LoadDwcOverlay\n    bl LoadOVY38\n    mov r0, #0x7b\n    bl sub_02039FD8\n    ldr r1, _020194F4 ; =0x00020020\n    mov r0, #0x7b\n    bl Heap_Alloc\n    str r0, [r4, #0xc]\n    add r0, #0x1f\n    mov r1, #0x1f\n    bic r0, r1\n    mov r1, #2\n    lsl r1, r1, #0x10\n    mov r2, #0\n    bl NNS_FndCreateExpHeapEx\n    str r0, [r4, #0x10]\n    bl sub_02034D8C\n    mov r0, #4\n    bl Sys_ClearSleepDisableFlag\n    pop {r4, pc}\n    _020194F4: .word 0x00020020"
    );
    #endif
}

void sub_020194F8(void) {
    /* Original at 0x020194F8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x78]\n    cmp r0, #1\n    bne _0201951E\n    ldr r0, [r4, #0x10]\n    bl NNS_FndDestroyExpHeap\n    ldr r0, [r4, #0xc]\n    bl Heap_Free\n    bl UnloadOVY38\n    bl UnloadDwcOverlay\n    bl sub_02034DE0\n    mov r0, #0\n    str r0, [r4, #0x78]\n    pop {r4, pc}"
    );
    #endif
}

void sub_02019520(void) {
    /* Original at 0x02019520 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl OS_DisableInterrupts\n    add r6, r0, #0\n    ldr r0, _02019544 ; =_021D1108\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r2, r4, #0\n    bl NNS_FndAllocFromExpHeapEx\n    add r4, r0, #0\n    add r0, r6, #0\n    bl OS_RestoreInterrupts\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _02019544: .word _021D1108"
    );
    #endif
}

void sub_02019548(void) {
    /* Original at 0x02019548 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    beq _02019564\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    ldr r0, _02019568 ; =_021D1108\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl NNS_FndFreeToExpHeap\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    pop {r3, r4, r5, pc}\n    nop\n    _02019568: .word _021D1108"
    );
    #endif
}
