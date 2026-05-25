/* Decompiled from asm/overlay_04.s */
#include "global.h"

void ov04_02253E20(void) {
    /* Original at 0x02253E20 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #4\n    bl Save_Gymmick_AssertMagic_GetData\n    add r3, sp, #0x18\n    ldr r6, _02253ECC ; =_02257328\n    add r4, r0, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #0x6f\n    str r0, [r3]\n    ldr r0, [r5, #0x54]\n    mov r3, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl ov01_021F3C0C\n    mov r3, #3\n    mov r0, #2\n    str r3, [sp]\n    lsl r0, r0, #0x10\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x98\n    ldr r0, [r0]\n    mov r1, #0xe\n    str r0, [sp, #8]\n    mov r0, #0\n    mov r2, #0x13\n    bl ov01_021FB3E4\n    ldr r0, [r4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    beq _02253E80\n    cmp r0, #1\n    beq _02253E86\n    b _02253E8C\n    mov r4, #2\n    lsl r4, r4, #0x10\n    b _02253E94\n    mov r4, #0x1f\n    lsl r4, r4, #0x10\n    b _02253E94\n    bl GF_AssertFail\n    mov r4, #2\n    lsl r4, r4, #0x10\n    add r0, r5, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    mov r1, #0x6f\n    bl ov01_021F3B4C\n    add r6, r0, #0\n    add r0, sp, #0xc\n    add r1, r6, #0\n    bl ov01_021F3B0C\n    add r0, r6, #0\n    add r1, sp, #0xc\n    str r4, [sp, #0x10]\n    bl ov01_021F3B1C\n    add r5, #0x98\n    ldr r2, [r5]\n    mov r0, #0\n    add r1, r4, #0\n    bl ov01_021FB4A0\n    ldr r0, _02253ED0 ; =ov04_02257334\n    bl G3X_SetEdgeColorTable\n    add sp, #0x24\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02253ECC: .word _02257328\n    _02253ED0: .word ov04_02257334"
    );
    #endif
}

void ov04_02253ED4(void) {
    /* Original at 0x02253ED4 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0xb\n    mov r1, #8\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4]\n    add r0, r5, #0\n    str r5, [r4, #4]\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #4\n    bl Save_Gymmick_AssertMagic_GetData\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    add r1, sp, #0\n    bl PlayerAvatar_CopyPositionVector\n    mov r0, #2\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    ldr r0, [r5, #0x10]\n    bne _02253F20\n    ldr r1, _02253F30 ; =ov04_02253F38\n    add r2, r4, #0\n    bl TaskManager_Call\n    mov r0, #1\n    add sp, #0xc\n    str r0, [r6]\n    pop {r3, r4, r5, r6, pc}\n    ldr r1, _02253F34 ; =ov04_02253F94\n    add r2, r4, #0\n    bl TaskManager_Call\n    mov r0, #0\n    str r0, [r6]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _02253F30: .word ov04_02253F38\n    _02253F34: .word ov04_02253F94"
    );
    #endif
}

void ov04_02253F38(void) {
    /* Original at 0x02253F38 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _02253F5A\n    cmp r1, #1\n    beq _02253F6C\n    cmp r1, #5\n    beq _02253F7E\n    b _02253F86\n    ldr r0, [r5, #0x10]\n    ldr r1, _02253F8C ; =ov01_02205A60\n    mov r2, #0\n    bl TaskManager_Call\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02253F86\n    ldr r0, _02253F90 ; =ov04_02253FF0\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02253F86\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02253F8C: .word ov01_02205A60\n    _02253F90: .word ov04_02253FF0"
    );
    #endif
}

void ov04_02253F94(void) {
    /* Original at 0x02253F94 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _02253FB6\n    cmp r1, #1\n    beq _02253FC8\n    cmp r1, #5\n    beq _02253FDA\n    b _02253FE2\n    ldr r0, [r5, #0x10]\n    ldr r1, _02253FE8 ; =ov01_02205A60\n    mov r2, #0\n    bl TaskManager_Call\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02253FE2\n    ldr r0, _02253FEC ; =ov04_022540C0\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02253FE2\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02253FE8: .word ov01_02205A60\n    _02253FEC: .word ov04_022540C0"
    );
    #endif
}

void ov04_02253FF0(void) {
    /* Original at 0x02253FF0 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r4, [r5, #4]\n    cmp r0, #2\n    beq _0225400C\n    cmp r0, #3\n    beq _02254026\n    cmp r0, #4\n    beq _0225408C\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x40]\n    mov r1, #0\n    bl PlayerAvatar_ToggleAutomaticHeightUpdating\n    mov r0, #SEQ_SE_DP_ELEBETA>>4\n    lsl r0, r0, #4\n    bl PlaySE\n    ldr r0, [r5]\n    add sp, #0x18\n    add r0, r0, #1\n    str r0, [r5]\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    mov r1, #0x6f\n    bl ov01_021F3B4C\n    add r6, r0, #0\n    add r0, sp, #0xc\n    add r1, r6, #0\n    bl ov01_021F3B0C\n    mov r0, #1\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0x10\n    add r1, r1, r0\n    mov r0, #0x1f\n    lsl r0, r0, #0x10\n    str r1, [sp, #0x10]\n    cmp r1, r0\n    blt _02254060\n    str r0, [sp, #0x10]\n    mov r0, #0x61\n    lsl r0, r0, #4\n    mov r1, #0\n    bl StopSE\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r4, #0x40]\n    add r1, sp, #0\n    bl PlayerAvatar_CopyPositionVector\n    mov r0, #1\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0x10\n    add r1, r1, r0\n    str r1, [sp, #4]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_SetMapObjectYPosition\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov01_02205A34\n    add r0, r6, #0\n    add r1, sp, #0xc\n    bl ov01_021F3B1C\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    add r2, r4, #0\n    add r2, #0x98\n    mov r1, #0x1f\n    ldr r2, [r2]\n    mov r0, #0\n    lsl r1, r1, #0x10\n    bl ov01_021FB4A0\n    ldr r0, [r4, #0x40]\n    mov r1, #1\n    bl PlayerAvatar_ToggleAutomaticHeightUpdatingImmediate\n    ldr r0, _022540BC ; =SEQ_SE_DP_KI_GASYAN\n    bl PlaySE\n    add r0, r6, #0\n    bl SysTask_Destroy\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    nop\n    _022540BC: .word SEQ_SE_DP_KI_GASYAN"
    );
    #endif
}

void ov04_022540C0(void) {
    /* Original at 0x022540C0 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x18\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5]\n    ldr r4, [r5, #4]\n    cmp r0, #2\n    beq _022540DC\n    cmp r0, #3\n    beq _022540F6\n    cmp r0, #4\n    beq _0225415C\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x40]\n    mov r1, #0\n    bl PlayerAvatar_ToggleAutomaticHeightUpdating\n    mov r0, #SEQ_SE_DP_ELEBETA>>4\n    lsl r0, r0, #4\n    bl PlaySE\n    ldr r0, [r5]\n    add sp, #0x18\n    add r0, r0, #1\n    str r0, [r5]\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    mov r1, #0x6f\n    bl ov01_021F3B4C\n    add r6, r0, #0\n    add r0, sp, #0xc\n    add r1, r6, #0\n    bl ov01_021F3B0C\n    mov r0, #1\n    ldr r1, [sp, #0x10]\n    lsl r0, r0, #0x10\n    sub r2, r1, r0\n    lsl r1, r0, #1\n    str r2, [sp, #0x10]\n    cmp r2, r1\n    bgt _02254130\n    lsl r0, r0, #1\n    str r0, [sp, #0x10]\n    mov r0, #0x61\n    lsl r0, r0, #4\n    mov r1, #0\n    bl StopSE\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    ldr r0, [r4, #0x40]\n    add r1, sp, #0\n    bl PlayerAvatar_CopyPositionVector\n    mov r0, #1\n    ldr r1, [sp, #4]\n    lsl r0, r0, #0x10\n    sub r1, r1, r0\n    str r1, [sp, #4]\n    ldr r0, [r4, #0x40]\n    bl PlayerAvatar_SetMapObjectYPosition\n    ldr r1, [sp, #4]\n    add r0, r4, #0\n    bl ov01_02205A34\n    add r0, r6, #0\n    add r1, sp, #0xc\n    bl ov01_021F3B1C\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    add r2, r4, #0\n    add r2, #0x98\n    mov r1, #2\n    ldr r2, [r2]\n    mov r0, #0\n    lsl r1, r1, #0x10\n    bl ov01_021FB4A0\n    ldr r0, [r4, #0x40]\n    mov r1, #1\n    bl PlayerAvatar_ToggleAutomaticHeightUpdatingImmediate\n    ldr r0, _0225418C ; =SEQ_SE_DP_KI_GASYAN\n    bl PlaySE\n    add r0, r6, #0\n    bl SysTask_Destroy\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    add sp, #0x18\n    pop {r4, r5, r6, pc}\n    nop\n    _0225418C: .word SEQ_SE_DP_KI_GASYAN"
    );
    #endif
}

void ov04_02254190(void) {
    /* Original at 0x02254190 */
    /* Requires manual decompilation - 271 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #5\n    bl Save_Gymmick_AssertMagic_GetData\n    add r7, r0, #0\n    mov r0, #4\n    mov r1, #0x54\n    bl Heap_Alloc\n    ldr r1, [r4, #4]\n    mov r2, #0x54\n    str r0, [r1, #0x24]\n    ldr r0, [r4, #4]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    bl MI_CpuFill8\n    ldr r0, [r4, #4]\n    mov r6, #0\n    ldr r5, [r0, #0x24]\n    mov r1, #0\n    add r0, sp, #4\n    str r1, [r0]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    ldrb r0, [r7, r6]\n    ldr r1, _02254400 ; =ov04_022575D4\n    mov r3, #0\n    lsl r2, r0, #2\n    ldr r0, _02254400 ; =ov04_022575D4\n    ldrh r1, [r1, r2]\n    add r0, r0, r2\n    ldrh r0, [r0, #2]\n    lsl r2, r1, #0x10\n    mov r1, #2\n    lsl r1, r1, #0xe\n    lsl r0, r0, #0x10\n    str r2, [sp, #4]\n    add r1, r2, r1\n    str r1, [sp, #4]\n    str r0, [sp, #0xc]\n    ldr r0, [r4, #0x54]\n    mov r1, #0x76\n    str r0, [sp]\n    add r0, r4, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    add r2, sp, #4\n    bl ov01_021F3C0C\n    str r0, [r5, #4]\n    add r6, r6, #1\n    add r5, r5, #4\n    cmp r6, #4\n    blt _022541C4\n    ldr r0, [r7, #4]\n    cmp r0, #3\n    bls _02254212\n    b _022543F6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225421E: ; jump table\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x73\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x73\n    mov r2, #1\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x74\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x74\n    mov r2, #1\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x7a\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x7a\n    mov r2, #1\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x75\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x75\n    mov r2, #1\n    bl ov01_021E8970\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x73\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x73\n    mov r2, #1\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x74\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0x74\n    add r2, r1, #0\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x7a\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x7a\n    mov r2, #1\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x75\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0x75\n    add r2, r1, #0\n    bl ov01_021E8970\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x73\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0x73\n    add r2, r1, #0\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x74\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x74\n    mov r2, #1\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x7a\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0x7a\n    add r2, r1, #0\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x75\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x75\n    mov r2, #1\n    bl ov01_021E8970\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x73\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0x73\n    add r2, r1, #0\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x74\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0x74\n    add r2, r1, #0\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x7a\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0x7a\n    add r2, r1, #0\n    bl ov01_021E8970\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x75\n    bl Field3dObjectList_GetRenderObjectByID\n    add r3, r0, #0\n    ldr r0, [r4, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    mov r0, #0x75\n    add r2, r1, #0\n    bl ov01_021E8970\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02254400: .word ov04_022575D4"
    );
    #endif
}

void FlipAzaleaGymSwitch(void) {
    /* Original at 0x02254404 */
    /* Requires manual decompilation - 154 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r6, r1, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #5\n    bl Save_Gymmick_AssertMagic_GetData\n    add r4, r0, #0\n    ldr r0, _02254560 ; =SEQ_SE_DP_KI_GASYAN\n    bl PlaySE\n    cmp r6, #0\n    bne _022544B6\n    ldr r2, [r4, #4]\n    mov r1, #1\n    add r0, r2, #0\n    and r0, r1\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    add r0, r2, #0\n    eor r0, r1\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x74\n    bl Field3dObjectList_GetRenderObjectByID\n    add r7, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x75\n    bl Field3dObjectList_GetRenderObjectByID\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x54]\n    add r1, r7, #0\n    mov r2, #0x74\n    add r3, r6, #0\n    bl ov01_021E8A8C\n    ldr r0, [r5, #0x54]\n    ldr r1, [sp, #4]\n    mov r2, #0x75\n    add r3, r6, #0\n    bl ov01_021E8A8C\n    ldr r0, [r4, #4]\n    mov r2, #1\n    and r0, r2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    ldr r0, [r5, #0x54]\n    beq _02254498\n    str r0, [sp]\n    mov r0, #0x74\n    add r1, r2, #0\n    add r3, r7, #0\n    bl ov01_021E8970\n    ldr r0, [r5, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    ldr r3, [sp, #4]\n    mov r0, #0x75\n    add r2, r1, #0\n    bl ov01_021E8970\n    b _02254550\n    str r0, [sp]\n    mov r0, #0x74\n    mov r1, #0\n    add r3, r7, #0\n    bl ov01_021E8970\n    ldr r0, [r5, #0x54]\n    ldr r3, [sp, #4]\n    str r0, [sp]\n    mov r0, #0x75\n    mov r1, #0\n    mov r2, #1\n    bl ov01_021E8970\n    b _02254550\n    cmp r6, #1\n    bne _0225454C\n    ldr r1, [r4, #4]\n    mov r0, #1\n    asr r2, r1, #1\n    and r0, r2\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    mov r0, #2\n    eor r0, r1\n    str r0, [r4, #4]\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x73\n    bl Field3dObjectList_GetRenderObjectByID\n    add r7, r0, #0\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0x7a\n    bl Field3dObjectList_GetRenderObjectByID\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x54]\n    add r1, r7, #0\n    mov r2, #0x73\n    add r3, r6, #0\n    bl ov01_021E8A8C\n    ldr r0, [r5, #0x54]\n    ldr r1, [sp, #8]\n    mov r2, #0x7a\n    add r3, r6, #0\n    bl ov01_021E8A8C\n    ldr r0, [r4, #4]\n    mov r2, #1\n    asr r0, r0, #1\n    and r0, r2\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    ldr r0, [r5, #0x54]\n    beq _0225452E\n    str r0, [sp]\n    mov r0, #0x73\n    add r1, r2, #0\n    add r3, r7, #0\n    bl ov01_021E8970\n    ldr r0, [r5, #0x54]\n    mov r1, #1\n    str r0, [sp]\n    ldr r3, [sp, #8]\n    mov r0, #0x7a\n    add r2, r1, #0\n    bl ov01_021E8970\n    b _02254550\n    str r0, [sp]\n    mov r0, #0x73\n    mov r1, #0\n    add r3, r7, #0\n    bl ov01_021E8970\n    ldr r0, [r5, #0x54]\n    ldr r3, [sp, #8]\n    str r0, [sp]\n    mov r0, #0x7a\n    mov r1, #0\n    mov r2, #1\n    bl ov01_021E8970\n    b _02254550\n    bl GF_AssertFail\n    ldr r0, [r5, #0x10]\n    ldr r1, _02254564 ; =ov04_02254CA4\n    mov r2, #0\n    bl TaskManager_Call\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02254560: .word SEQ_SE_DP_KI_GASYAN\n    _02254564: .word ov04_02254CA4"
    );
    #endif
}

void BeginAzaleaGymSpinarakRide(void) {
    /* Original at 0x02254568 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #4]\n    add r5, r1, #0\n    ldr r4, [r0, #0x24]\n    mov r0, #0xb\n    mov r1, #8\n    bl Heap_AllocAtEnd\n    add r7, r0, #0\n    mov r1, #0\n    str r1, [r7]\n    str r6, [r7, #4]\n    strb r5, [r4, #0x18]\n    str r1, [r4, #0x30]\n    strb r1, [r4, #0x14]\n    mov r0, #1\n    strb r0, [r4, #0x16]\n    add r0, r6, #0\n    str r1, [r4, #0x1c]\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #5\n    bl Save_Gymmick_AssertMagic_GetData\n    add r2, r0, #0\n    ldr r0, [r2, #4]\n    mov r1, #0\n    strb r0, [r4, #0x15]\n    ldrb r0, [r2, r1]\n    cmp r5, r0\n    bne _022545B0\n    strb r1, [r4, #0x17]\n    b _022545B6\n    add r1, r1, #1\n    cmp r1, #4\n    blt _022545A6\n    cmp r1, #4\n    bne _022545C0\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r5, #0xb\n    bhi _02254600\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022545D0: ; jump table\n    mov r1, #1\n    ldr r0, _02254634 ; =ov04_022575A4\n    lsl r2, r5, #2\n    strb r1, [r4, #0x19]\n    ldr r0, [r0, r2]\n    ldrb r2, [r4, #0x15]\n    lsl r2, r2, #3\n    ldrh r0, [r0, r2]\n    sub r0, r0, #1\n    strb r0, [r4, #0x1a]\n    strb r1, [r4, #0x1b]\n    b _02254608\n    mov r0, #0\n    strb r0, [r4, #0x19]\n    strb r0, [r4, #0x1a]\n    strb r0, [r4, #0x1b]\n    ldr r0, _02254634 ; =ov04_022575A4\n    lsl r1, r5, #2\n    ldr r1, [r0, r1]\n    ldrb r0, [r4, #0x15]\n    lsl r0, r0, #3\n    add r0, r1, r0\n    ldr r2, [r0, #4]\n    ldrb r0, [r4, #0x1a]\n    lsl r1, r0, #2\n    add r0, r2, r1\n    ldrh r1, [r2, r1]\n    add r2, r7, #0\n    lsl r1, r1, #0x10\n    str r1, [r4, #0x2c]\n    ldrh r0, [r0, #2]\n    ldr r1, _02254638 ; =ov04_0225463C\n    lsl r0, r0, #0x10\n    str r0, [r4, #0x34]\n    ldr r0, [r6, #0x10]\n    bl TaskManager_Call\n    pop {r3, r4, r5, r6, r7, pc}\n    _02254634: .word ov04_022575A4\n    _02254638: .word ov04_0225463C"
    );
    #endif
}

void ov04_0225463C(void) {
    /* Original at 0x0225463C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4]\n    cmp r1, #0\n    beq _0225465E\n    cmp r1, #1\n    beq _02254670\n    cmp r1, #0xa\n    beq _02254682\n    b _0225468A\n    ldr r0, [r5, #0x10]\n    ldr r1, _02254690 ; =ov01_02205A60\n    mov r2, #0\n    bl TaskManager_Call\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225468A\n    ldr r0, _02254694 ; =ov04_02254724\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225468A\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02254690: .word ov01_02205A60\n    _02254694: .word ov04_02254724"
    );
    #endif
}

void ov04_02254698(void) {
    /* Original at 0x02254698 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4}\n    sub sp, #0xc\n    add r3, r0, #0\n    ldrh r4, [r2]\n    ldrh r0, [r1]\n    ldrh r2, [r2, #2]\n    sub r0, r4, r0\n    lsl r0, r0, #0xc\n    str r0, [sp]\n    ldrh r0, [r1, #2]\n    sub r0, r2, r0\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, sp, #0\n    str r0, [sp, #4]\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    str r0, [r3]\n    add sp, #0xc\n    pop {r4}\n    bx lr"
    );
    #endif
}

void ov04_022546C8(void) {
    /* Original at 0x022546C8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0]\n    cmp r2, #0\n    blt _022546D2\n    mov r2, #1\n    b _022546D4\n    mov r2, #0\n    str r2, [r1]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    blt _022546E2\n    mov r0, #1\n    str r0, [r1, #4]\n    bx lr\n    mov r0, #0\n    str r0, [r1, #4]\n    bx lr"
    );
    #endif
}

void ov04_022546E8(void) {
    /* Original at 0x022546E8 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    lsl r3, r3, #0x10\n    add r1, r1, r2\n    mov r4, #0\n    cmp r3, r1\n    bne _022546F8\n    mov r4, #1\n    b _0225470A\n    cmp r0, #0\n    beq _02254704\n    cmp r1, r3\n    ble _0225470A\n    mov r4, #2\n    b _0225470A\n    cmp r1, r3\n    bge _0225470A\n    mov r4, #2\n    add r0, r4, #0\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov04_02254710(void) {
    Heap_Free(0);
}

void ov04_02254724(void) {
    /* Original at 0x02254724 */
    /* Requires manual decompilation - 607 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x98\n    add r6, r1, #0\n    ldr r5, [r6, #4]\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #4]\n    ldr r4, [r0, #0x24]\n    ldr r0, [r6]\n    cmp r0, #9\n    bhi _02254828\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02254744: ; jump table\n    add r0, r5, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    ldr r0, [r5, #0x40]\n    beq _0225479C\n    bl PlayerAvatar_GetMapObject\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    str r0, [sp, #0x28]\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    beq _0225478A\n    add r0, r7, #0\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    ldr r0, [sp, #0x28]\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    b _022547B4\n    add r0, r7, #0\n    mov r1, #0xc\n    bl MapObject_SetHeldMovement\n    ldr r0, [sp, #0x28]\n    mov r1, #0xc\n    bl MapObject_SetHeldMovement\n    b _022547B4\n    bl PlayerAvatar_GetMapObject\n    ldrb r1, [r4, #0x19]\n    cmp r1, #0\n    beq _022547AE\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    b _022547B4\n    mov r1, #0xc\n    bl MapObject_SetHeldMovement\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _022547FE\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    add r5, r0, #0\n    add r0, r7, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _02254828\n    add r0, r5, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _02254828\n    add r0, r7, #0\n    mov r1, #0x49\n    bl MapObject_SetHeldMovement\n    mov r0, #0\n    str r0, [r4, #0x50]\n    ldr r0, [r6]\n    add sp, #0x98\n    add r0, r0, #1\n    str r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _02254828\n    add r0, r7, #0\n    mov r1, #0x49\n    bl MapObject_SetHeldMovement\n    mov r0, #0\n    str r0, [r4, #0x50]\n    ldr r0, [r6]\n    add sp, #0x98\n    add r0, r0, #1\n    str r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r4, #0x50]\n    add r0, r1, #1\n    str r0, [r4, #0x50]\n    cmp r1, #4\n    bge _0225482A\n    b _02254C9E\n    add r0, r5, #0\n    add r0, #0x9c\n    ldrb r1, [r4, #0x17]\n    ldr r0, [r0]\n    bl ov01_021F3B44\n    add r4, r0, #0\n    ldr r0, [r5, #0x34]\n    bl ov01_021FB9E0\n    add r7, r0, #0\n    add r0, r4, #0\n    bl ov01_021F3B38\n    str r0, [sp, #0x2c]\n    add r0, r4, #0\n    bl ov01_021F3B3C\n    ldr r1, [sp, #0x2c]\n    mov r2, #1\n    str r1, [sp]\n    str r0, [sp, #4]\n    str r7, [sp, #8]\n    str r2, [sp, #0xc]\n    mov r0, #0xff\n    str r0, [sp, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [r5, #0x54]\n    ldr r1, [r5, #0x58]\n    mov r3, #0x76\n    bl ov01_021E8DE8\n    ldr r0, [r5, #0x58]\n    mov r1, #1\n    mov r2, #0\n    bl ov01_021E8E70\n    ldr r0, _02254B9C ; =SEQ_SE_GS_ITOMARU_ROBO\n    bl PlaySE\n    ldr r0, [r6]\n    add sp, #0x98\n    add r0, r0, #1\n    str r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r0, [r4, #0x18]\n    str r0, [sp, #0x24]\n    ldrb r0, [r4, #0x16]\n    ldrb r7, [r4, #0x15]\n    cmp r0, #0\n    beq _02254962\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    beq _022548B0\n    ldr r0, [sp, #0x24]\n    lsl r1, r0, #2\n    ldr r0, _02254BA0 ; =ov04_022575A4\n    ldr r1, [r0, r1]\n    lsl r0, r7, #3\n    add r0, r1, r0\n    ldr r2, [r0, #4]\n    ldrb r0, [r4, #0x1a]\n    lsl r1, r0, #2\n    add r1, r2, r1\n    sub r0, r0, #1\n    b _022548C6\n    ldr r0, [sp, #0x24]\n    lsl r1, r0, #2\n    ldr r0, _02254BA0 ; =ov04_022575A4\n    ldr r1, [r0, r1]\n    lsl r0, r7, #3\n    add r0, r1, r0\n    ldr r2, [r0, #4]\n    ldrb r0, [r4, #0x1a]\n    lsl r1, r0, #2\n    add r1, r2, r1\n    add r0, r0, #1\n    lsl r0, r0, #2\n    add r0, r2, r0\n    str r0, [r4, #0x28]\n    ldr r2, [r4, #0x28]\n    add r0, sp, #0x38\n    bl ov04_02254698\n    add r3, sp, #0x38\n    add r2, r4, #0\n    add r2, #0x38\n    ldmia r3!, {r0, r1}\n    str r2, [sp, #0x30]\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r4, #0\n    str r0, [r2]\n    ldr r0, [sp, #0x30]\n    add r1, #0x20\n    bl ov04_022546C8\n    add r0, r4, #0\n    add r0, #0x38\n    add r1, r0, #0\n    bl VEC_Normalize\n    ldr r2, _02254BA4 ; =ov04_02257350\n    add r3, sp, #0x8c\n    ldmia r2!, {r0, r1}\n    mov ip, r3\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    mov r1, ip\n    str r0, [r3]\n    add r0, r4, #0\n    add r0, #0x38\n    bl VEC_DotProduct\n    str r0, [sp, #0x34]\n    add r1, r4, #0\n    add r1, #0x38\n    add r2, sp, #0x80\n    mov r0, #0\n    str r0, [r2]\n    str r0, [r2, #4]\n    str r0, [r2, #8]\n    mov r0, #2\n    lsl r0, r0, #0xc\n    add r3, r1, #0\n    bl VEC_MultAdd\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    bne _0225494A\n    ldr r1, [sp, #0x34]\n    cmp r1, #0\n    beq _0225494A\n    mov r2, #1\n    lsl r2, r2, #0xc\n    cmp r1, r2\n    beq _0225494A\n    mov r0, #1\n    str r0, [r4, #0x1c]\n    ldr r0, [r5, #0x2c]\n    bl ov01_021F6304\n    b _0225495E\n    cmp r0, #1\n    bne _0225495E\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetPositionVector\n    ldr r1, [r5, #0x2c]\n    bl ov01_021F62E8\n    mov r0, #0\n    strb r0, [r4, #0x16]\n    ldr r3, [r4, #0x28]\n    ldr r0, [r4, #0x20]\n    ldrh r3, [r3]\n    ldr r1, [r4, #0x2c]\n    ldr r2, [r4, #0x38]\n    bl ov04_022546E8\n    ldr r3, [r4, #0x28]\n    str r0, [sp, #0x20]\n    ldrh r3, [r3, #2]\n    ldr r0, [r4, #0x24]\n    ldr r1, [r4, #0x34]\n    ldr r2, [r4, #0x40]\n    bl ov04_022546E8\n    ldr r1, [sp, #0x20]\n    cmp r1, #2\n    bne _0225498A\n    mov r1, #0\n    str r1, [r4, #0x38]\n    cmp r0, #2\n    bne _02254992\n    mov r1, #0\n    str r1, [r4, #0x40]\n    ldr r1, [sp, #0x20]\n    cmp r1, #0\n    beq _02254A14\n    cmp r0, #0\n    beq _02254A14\n    ldr r0, [r4, #0x28]\n    lsl r7, r7, #3\n    ldrh r0, [r0]\n    lsl r0, r0, #0x10\n    str r0, [r4, #0x2c]\n    ldr r0, [r4, #0x28]\n    ldrh r0, [r0, #2]\n    lsl r0, r0, #0x10\n    str r0, [r4, #0x34]\n    ldrb r0, [r4, #0x14]\n    add r0, r0, #1\n    strb r0, [r4, #0x14]\n    ldr r0, [sp, #0x24]\n    lsl r1, r0, #2\n    ldr r0, _02254BA0 ; =ov04_022575A4\n    ldr r0, [r0, r1]\n    str r0, [sp, #0x1c]\n    ldr r1, [sp, #0x1c]\n    ldrb r0, [r4, #0x14]\n    ldrh r1, [r1, r7]\n    sub r1, r1, #1\n    cmp r0, r1\n    blt _022549FE\n    add r0, r5, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #5\n    bl Save_Gymmick_AssertMagic_GetData\n    ldr r1, [sp, #0x1c]\n    add r1, r1, r7\n    ldrh r2, [r1, #2]\n    ldrb r1, [r4, #0x17]\n    strb r2, [r0, r1]\n    ldr r0, [r5, #0x54]\n    ldr r1, [r5, #0x58]\n    mov r2, #1\n    bl ov01_021E8ED0\n    ldr r0, _02254B9C ; =SEQ_SE_GS_ITOMARU_ROBO\n    mov r1, #1\n    bl StopSE\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    b _02254A22\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    ldrb r0, [r4, #0x1a]\n    beq _02254A0A\n    sub r0, r0, #1\n    b _02254A0C\n    add r0, r0, #1\n    strb r0, [r4, #0x1a]\n    mov r0, #1\n    strb r0, [r4, #0x16]\n    b _02254A22\n    add r0, r4, #0\n    add r0, #0x2c\n    add r1, r4, #0\n    add r1, #0x38\n    add r2, r0, #0\n    bl VEC_Add\n    ldrb r1, [r4, #0x17]\n    add r0, r5, #0\n    add r0, #0x9c\n    lsl r1, r1, #2\n    add r1, r4, r1\n    ldr r1, [r1, #4]\n    ldr r0, [r0]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov01_021F3B44\n    add r3, r4, #0\n    add r2, sp, #0x74\n    add r3, #0x2c\n    add r6, r0, #0\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    mov r0, #2\n    ldr r1, [sp, #0x74]\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x74]\n    add r0, r6, #0\n    add r1, r7, #0\n    bl ov01_021F3B1C\n    ldr r3, _02254BA8 ; =ov04_02257344\n    add r2, sp, #0x5c\n    add r6, r4, #0\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r6, #0x2c\n    str r0, [r2]\n    add r3, sp, #0x68\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    add r1, r7, #0\n    str r0, [r3]\n    add r0, r2, #0\n    bl VEC_Add\n    mov r0, #0x1b\n    ldrsb r0, [r4, r0]\n    ldr r1, [sp, #0x70]\n    lsl r0, r0, #0x10\n    add r0, r1, r0\n    str r0, [sp, #0x70]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r1, sp, #0x68\n    bl MapObject_SetPositionVector\n    add r0, r5, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    bne _02254AA6\n    b _02254C9E\n    mov r0, #0x1b\n    ldrsb r1, [r4, r0]\n    mov r0, #1\n    add r3, sp, #0x50\n    sub r0, r0, r1\n    lsl r0, r0, #0x18\n    add r4, #0x2c\n    asr r6, r0, #0x18\n    ldmia r4!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    add r1, r7, #0\n    str r0, [r3]\n    add r0, r2, #0\n    bl VEC_Add\n    ldr r1, [sp, #0x58]\n    lsl r0, r6, #0x10\n    add r0, r1, r0\n    str r0, [sp, #0x58]\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    add r1, sp, #0x50\n    bl MapObject_SetPositionVector\n    add sp, #0x98\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    ldr r1, [r4, #0x28]\n    add r7, r0, #0\n    ldrh r1, [r1]\n    bl MapObject_SetCurrentX\n    add r0, r7, #0\n    mov r1, #0\n    bl MapObject_SetCurrentY\n    ldr r1, [r4, #0x28]\n    mov r2, #0x1b\n    ldrh r1, [r1, #2]\n    ldrsb r2, [r4, r2]\n    add r0, r7, #0\n    add r1, r1, r2\n    bl MapObject_SetCurrentZ\n    add r0, r7, #0\n    bl sub_02060F78\n    add r0, r7, #0\n    mov r1, #0x4a\n    bl MapObject_SetHeldMovement\n    add r0, r5, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _02254B52\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    ldr r1, [r4, #0x28]\n    add r7, r0, #0\n    ldrh r1, [r1]\n    bl MapObject_SetCurrentX\n    add r0, r7, #0\n    mov r1, #0\n    bl MapObject_SetCurrentY\n    ldr r1, [r4, #0x28]\n    add r0, r7, #0\n    ldrh r3, [r1, #2]\n    mov r1, #0x1b\n    ldrsb r2, [r4, r1]\n    mov r1, #1\n    sub r1, r1, r2\n    add r1, r3, r1\n    bl MapObject_SetCurrentZ\n    add r0, r7, #0\n    bl sub_02060F78\n    mov r0, #0\n    str r0, [r4, #0x44]\n    str r0, [r4, #0x48]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetFacingDirection\n    cmp r0, #1\n    bne _02254B68\n    mov r0, #1\n    lsl r0, r0, #0xc\n    b _02254B6A\n    ldr r0, _02254BAC ; =0xFFFFF000\n    str r0, [r4, #0x4c]\n    ldr r0, [r6]\n    add sp, #0x98\n    add r0, r0, #1\n    str r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, sp, #0x44\n    mov r1, #0\n    str r1, [r0]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    ldr r2, [r4, #0x4c]\n    str r2, [sp, #0x4c]\n    ldr r3, [r4, #0x48]\n    add r2, r3, #1\n    str r2, [r4, #0x48]\n    cmp r3, #0\n    bne _02254BB0\n    ldr r1, [r5, #0x24]\n    bl Camera_OffsetLookAtPosAndTarget\n    ldr r0, [r4, #0x44]\n    add r0, r0, #1\n    str r0, [r4, #0x44]\n    b _02254BC0\n    _02254B9C: .word SEQ_SE_GS_ITOMARU_ROBO\n    _02254BA0: .word ov04_022575A4\n    _02254BA4: .word ov04_02257350\n    _02254BA8: .word ov04_02257344\n    _02254BAC: .word 0xFFFFF000\n    ldr r0, [r4, #0x48]\n    cmp r0, #1\n    ble _02254BC0\n    str r1, [r4, #0x48]\n    ldr r2, [r4, #0x4c]\n    sub r0, r1, #1\n    mul r0, r2\n    str r0, [r4, #0x4c]\n    ldr r0, [r4, #0x44]\n    cmp r0, #4\n    blt _02254C9E\n    mov r0, #0\n    str r0, [r4, #0x50]\n    ldr r0, [r6]\n    add sp, #0x98\n    add r0, r0, #1\n    str r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r4, #0x50]\n    add r0, r1, #1\n    str r0, [r4, #0x50]\n    cmp r1, #8\n    blt _02254C9E\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _02254C22\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    add r5, r0, #0\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    beq _02254C10\n    add r0, r7, #0\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    add r0, r5, #0\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    b _02254C3A\n    add r0, r7, #0\n    mov r1, #0xc\n    bl MapObject_SetHeldMovement\n    add r0, r5, #0\n    mov r1, #0xc\n    bl MapObject_SetHeldMovement\n    b _02254C3A\n    ldrb r0, [r4, #0x19]\n    cmp r0, #0\n    beq _02254C32\n    add r0, r7, #0\n    mov r1, #0xd\n    bl MapObject_SetHeldMovement\n    b _02254C3A\n    add r0, r7, #0\n    mov r1, #0xc\n    bl MapObject_SetHeldMovement\n    ldr r0, [r6]\n    add sp, #0x98\n    add r0, r0, #1\n    str r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r7, r0, #0\n    add r0, r5, #0\n    bl FollowMon_IsActive\n    cmp r0, #0\n    beq _02254C88\n    add r0, r5, #0\n    bl FollowMon_GetMapObject\n    add r4, r0, #0\n    add r0, r7, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _02254C9E\n    add r0, r4, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _02254C9E\n    add r0, r4, #0\n    bl MapObject_ClearHeldMovement\n    ldr r0, [sp, #0x18]\n    bl SysTask_Destroy\n    ldr r0, [r6]\n    add sp, #0x98\n    add r0, r0, #1\n    str r0, [r6]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _02254C9E\n    ldr r0, [sp, #0x18]\n    bl SysTask_Destroy\n    ldr r0, [r6]\n    add r0, r0, #1\n    str r0, [r6]\n    add sp, #0x98\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02254CA4(void) {
    IsSEPlaying(0, 1);
}

void ov04_02254CBC(void) {
    /* Original at 0x02254CBC */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #1\n    bl Save_Gymmick_AssertMagic_GetData\n    add r7, r0, #0\n    mov r0, #4\n    mov r1, #0x1c\n    bl Heap_Alloc\n    ldr r1, [r5, #4]\n    mov r2, #0x1c\n    str r0, [r1, #0x24]\n    ldr r0, [r5, #4]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    bl MI_CpuFill8\n    ldr r0, [r5, #4]\n    mov r1, #1\n    lsl r1, r1, #8\n    ldr r4, [r0, #0x24]\n    add r0, r1, #0\n    add r0, #0x1c\n    str r1, [r5, r0]\n    mov r0, #0xa\n    mov r3, #0\n    str r0, [sp]\n    str r3, [sp, #4]\n    ldr r0, [r5, #0x4c]\n    sub r1, r3, #1\n    mov r2, #1\n    bl ov01_021EA864\n    mov r1, #0\n    ldr r0, [r5, #0x4c]\n    mvn r1, r1\n    mov r2, #0\n    mov r3, #0x1f\n    bl ov01_021EA89C\n    mov r1, #0\n    add r2, sp, #0x14\n    sub r0, r1, #1\n    add r1, r1, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    cmp r1, #0x20\n    blt _02254D1E\n    ldr r0, [r5, #0x4c]\n    add r1, sp, #0x14\n    bl ov01_021EA8C4\n    add r0, r5, #0\n    bl ov04_02254F44\n    mov r6, #0\n    ldr r0, [r5, #0x3c]\n    add r1, r6, #2\n    bl MapObjectManager_GetFirstActiveObjectByID\n    add r1, sp, #8\n    bl MapObject_CopyPositionVector\n    ldr r0, [r5, #0x54]\n    mov r1, #0x80\n    str r0, [sp]\n    add r0, r5, #0\n    add r0, #0x9c\n    ldr r0, [r0]\n    add r2, sp, #8\n    mov r3, #0\n    bl ov01_021F3C0C\n    str r0, [r4]\n    ldrb r0, [r7, r6]\n    cmp r0, #0\n    beq _02254D78\n    add r0, r5, #0\n    ldr r1, [r4]\n    add r0, #0x9c\n    lsl r1, r1, #0x18\n    ldr r0, [r0]\n    lsr r1, r1, #0x18\n    bl ov01_021F3B44\n    mov r1, #1\n    bl ov01_021F3B2C\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _02254D38\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02254D84(void) {
    Heap_Free(0);
}

void ov04_02254D98(void) {
    /* Original at 0x02254D98 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r1, [r6, #4]\n    ldr r5, [r1, #0x24]\n    mov r1, #0x1e\n    bl FieldSysGetAttrAddr\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl ov04_MortyGymTrainerObjectToCandleIdx\n    cmp r0, #4\n    bne _02254DB8\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    str r0, [r5, #0x10]\n    ldr r0, [r4]\n    add r1, r6, #0\n    str r0, [r5, #0x18]\n    ldr r0, _02254DCC ; =ov04_02254E20\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #0x14]\n    pop {r4, r5, r6, pc}\n    _02254DCC: .word ov04_02254E20"
    );
    #endif
}

void ov04_02254DD0(void) {
    /* Original at 0x02254DD0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #4]\n    ldr r3, _02254DDC ; =sub_0200E390\n    ldr r0, [r0, #0x24]\n    ldr r0, [r0, #0x14]\n    bx r3\n    nop\n    _02254DDC: .word SysTask_Destroy"
    );
    #endif
}

void ov04_02254DE0(void) {
    /* Original at 0x02254DE0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r2, [r5, #4]\n    ldr r4, [r2, #0x24]\n    bl FieldSysGetAttrAddr\n    add r6, r0, #0\n    ldr r0, [r6]\n    bl ov04_MortyGymTrainerObjectToCandleIdx\n    str r0, [r4, #0x10]\n    ldr r0, [r6]\n    mov r1, #0x10\n    str r0, [r4, #0x18]\n    mov r0, #0xb\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    mov r1, #0\n    str r1, [r2]\n    mov r0, #1\n    str r0, [r2, #4]\n    str r1, [r2, #8]\n    str r5, [r2, #0xc]\n    ldr r0, [r5, #0x10]\n    ldr r1, _02254E1C ; =ov04_02254E50\n    bl TaskManager_Call\n    pop {r4, r5, r6, pc}\n    nop\n    _02254E1C: .word ov04_02254E50"
    );
    #endif
}

void ov04_02254E20(void) {
    /* Original at 0x02254E20 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    ldr r0, [r5, #4]\n    add r1, sp, #0\n    ldr r4, [r0, #0x24]\n    ldr r0, [r4, #0x18]\n    bl MapObject_CopyPositionVector\n    ldr r1, [r4, #0x10]\n    add r5, #0x9c\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    ldr r0, [r5]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov01_021F3B44\n    add r1, sp, #0\n    bl ov01_021F3B1C\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov04_02254E50(void) {
    /* Original at 0x02254E50 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    ldr r0, [r1, #4]\n    ldr r5, [r0, #0x24]\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _02254E6E\n    cmp r0, #1\n    beq _02254E86\n    cmp r0, #2\n    beq _02254EFE\n    b _02254F18\n    ldr r1, [r4, #8]\n    add r0, r1, #1\n    str r0, [r4, #8]\n    cmp r1, #0x1e\n    blt _02254F18\n    ldr r0, _02254F1C ; =SEQ_SE_GS_ROUSOKU_KIERU\n    bl PlaySE\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02254F18\n    add r1, #0x9c\n    ldr r0, [r1]\n    ldr r1, [r5, #0x10]\n    lsl r1, r1, #2\n    ldr r1, [r5, r1]\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl ov01_021F3B44\n    ldr r1, [r4, #4]\n    add r6, r0, #0\n    cmp r1, #4\n    blt _02254ECC\n    mov r1, #1\n    bl ov01_021F3B2C\n    ldr r0, [r4, #0xc]\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #1\n    bl Save_Gymmick_AssertMagic_GetData\n    ldr r1, [r5, #0x10]\n    mov r2, #1\n    strb r2, [r0, r1]\n    ldr r0, [r5, #0x18]\n    mov r1, #0xfa\n    bl ov01_021FA930\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02254ED0\n    add r0, r1, #1\n    str r0, [r4, #4]\n    add r0, r6, #0\n    bl ov01_021F3B04\n    add r5, r0, #0\n    mov r0, #1\n    ldr r1, [r4, #4]\n    lsl r0, r0, #0xc\n    bl _s32_div_f\n    str r0, [r5]\n    mov r0, #1\n    ldr r1, [r4, #4]\n    lsl r0, r0, #0xc\n    bl _s32_div_f\n    str r0, [r5, #4]\n    mov r0, #1\n    ldr r1, [r4, #4]\n    lsl r0, r0, #0xc\n    bl _s32_div_f\n    str r0, [r5, #8]\n    b _02254F18\n    ldr r0, [r5, #0x18]\n    bl ov01_021FA2D4\n    cmp r0, #0\n    bne _02254F18\n    ldr r0, [r4, #0xc]\n    bl ov04_02254F44\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02254F1C: .word SEQ_SE_GS_ROUSOKU_KIERU"
    );
    #endif
}

void ov04_MortyGymTrainerObjectToCandleIdx(void) {
    /* Original at 0x02254F20 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl MapObject_GetID\n    ldr r2, _02254F40 ; =sMortyGymTrainerObjectIds\n    mov r3, #0\n    lsl r1, r3, #2\n    ldr r1, [r2, r1]\n    cmp r0, r1\n    beq _02254F3C\n    add r1, r3, #1\n    lsl r1, r1, #0x18\n    lsr r3, r1, #0x18\n    cmp r3, #4\n    blo _02254F2A\n    add r0, r3, #0\n    pop {r3, pc}\n    _02254F40: .word sMortyGymTrainerObjectIds"
    );
    #endif
}

void ov04_02254F44(void) {
    /* Original at 0x02254F44 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl MapObjectManager_GetObjectCount\n    add r5, r0, #0\n    ldr r0, [r4, #0x3c]\n    bl MapObjectManager_GetObjects\n    mov r4, #0\n    str r0, [sp]\n    cmp r5, #0\n    ble _02254F88\n    add r6, r4, #0\n    add r7, sp, #0\n    ldr r0, [sp]\n    bl MapObject_CheckActive\n    cmp r0, #1\n    bne _02254F7C\n    ldr r0, [sp]\n    bl ov01_021F72DC\n    bl sub_02023F90\n    add r1, r6, #0\n    bl NNS_G3dMdlSetMdlFogEnableFlagAll\n    add r0, r7, #0\n    bl MapObjectArray_NextObject2\n    add r4, r4, #1\n    cmp r4, r5\n    blt _02254F62\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02254F8C(void) {
    /* Original at 0x02254F8C */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x44\n    ldr r3, _02255070 ; =ov04_0225762C\n    str r0, [sp, #4]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x38\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [sp, #4]\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #6\n    bl Save_Gymmick_AssertMagic_GetData\n    str r0, [sp, #0x10]\n    ldr r1, _02255074 ; =0x00000754\n    mov r0, #4\n    bl Heap_Alloc\n    ldr r1, [sp, #4]\n    ldr r2, _02255074 ; =0x00000754\n    ldr r1, [r1, #4]\n    str r0, [r1, #0x24]\n    ldr r0, [sp, #4]\n    mov r1, #0\n    ldr r0, [r0, #4]\n    ldr r0, [r0, #0x24]\n    bl MI_CpuFill8\n    ldr r0, [sp, #4]\n    ldr r2, _02255078 ; =ov04_02257620\n    ldr r0, [r0, #4]\n    add r3, sp, #0x14\n    ldr r6, [r0, #0x24]\n    ldr r0, [sp, #4]\n    ldr r4, [sp, #0x10]\n    str r0, [r6]\n    add r0, sp, #0x38\n    str r0, [sp, #0xc]\n    ldmia r2!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r2]\n    mov r5, #0\n    add r7, r6, #4\n    str r0, [r3]\n    add r3, sp, #0x14\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x2c\n    mov ip, r2\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #0\n    str r0, [r2]\n    add r0, sp, #0x20\n    str r1, [r0]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    ldr r0, [sp, #0x10]\n    mov r2, ip\n    add r0, r0, r5\n    str r0, [sp, #8]\n    ldrb r0, [r0, #0xc]\n    add r3, sp, #0x20\n    lsl r0, r0, #0xe\n    neg r0, r0\n    str r0, [sp, #0x24]\n    ldrh r0, [r4]\n    lsl r1, r0, #0x10\n    mov r0, #2\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x2c]\n    ldrh r0, [r4, #6]\n    lsl r1, r0, #0x10\n    mov r0, #2\n    lsl r0, r0, #0xe\n    add r0, r1, r0\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #4]\n    ldr r1, [sp, #0xc]\n    ldr r0, [r0, #0x54]\n    str r0, [sp]\n    ldr r0, [sp, #4]\n    ldr r1, [r1]\n    add r0, #0x9c\n    ldr r0, [r0]\n    bl ov01_021F3C0C\n    strb r0, [r6, #0xb]\n    str r7, [sp]\n    ldr r1, [sp, #8]\n    lsl r0, r5, #0x18\n    ldrb r1, [r1, #0xc]\n    ldrh r2, [r4]\n    ldrh r3, [r4, #6]\n    lsr r0, r0, #0x18\n    bl ov04_02255140\n    ldr r0, [sp, #0xc]\n    add r5, r5, #1\n    add r0, r0, #4\n    str r0, [sp, #0xc]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    add r4, r4, #2\n    add r6, r6, r0\n    add r7, r7, r0\n    cmp r5, #3\n    blt _02254FEC\n    add sp, #0x44\n    pop {r4, r5, r6, r7, pc}\n    _02255070: .word ov04_0225762C\n    _02255074: .word 0x00000754\n    _02255078: .word ov04_02257620"
    );
    #endif
}

void ov04_0225507C(void) {
    Heap_Free(0);
}

void ov04_02255090(void) {
    /* Original at 0x02255090 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    bl Save_Gymmick_GetType\n    cmp r0, #6\n    beq _022550A8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #4]\n    ldr r4, [r0, #0x24]\n    cmp r4, #0\n    bne _022550B4\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetXCoord\n    add r6, r0, #0\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetZCoord\n    add r2, r0, #0\n    lsl r1, r6, #0x10\n    lsl r2, r2, #0x10\n    add r0, r4, #0\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    bl ov04_02255708\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov04_022550D4(void) {
    /* Original at 0x022550D4 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    mov r6, #0x79\n    str r0, [sp, #0x18]\n    mov r0, #0\n    mov ip, r0\n    ldr r0, [sp]\n    lsl r6, r6, #2\n    ldr r0, [r0, #4]\n    add r3, r1, #0\n    ldr r0, [r0, #0x24]\n    sub r4, r6, #4\n    add r7, r0, #4\n    mov r0, #0\n    add r1, r7, #0\n    ldr r5, [r1, r4]\n    cmp r3, r5\n    bne _0225510A\n    ldr r5, [r1, r6]\n    cmp r2, r5\n    bne _0225510A\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r0, #1\n    add r1, #8\n    cmp r0, #0x12\n    blt _022550F4\n    mov r0, #0x27\n    lsl r0, r0, #4\n    add r7, r7, r0\n    mov r0, ip\n    add r0, r0, #1\n    mov ip, r0\n    cmp r0, #3\n    blt _022550F0\n    ldr r0, [sp]\n    add r1, r3, #0\n    bl GetMetatileBehavior\n    bl sub_0205BAC4\n    cmp r0, #0\n    beq _0225513A\n    ldr r1, [sp, #0x18]\n    mov r0, #1\n    str r0, [r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02255140(void) {
    /* Original at 0x02255140 */
    /* Requires manual decompilation - 414 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    str r1, [sp]\n    str r2, [sp, #4]\n    str r3, [sp, #8]\n    ldr r1, [sp, #0x38]\n    ldr r2, [sp, #4]\n    str r1, [sp, #0x38]\n    str r2, [r1, #8]\n    ldr r2, [sp, #8]\n    str r2, [r1, #0xc]\n    ldr r1, [sp, #4]\n    add r2, r1, #1\n    ldr r1, [sp, #0x38]\n    str r2, [r1, #0x10]\n    ldr r2, [sp, #8]\n    str r2, [r1, #0x14]\n    ldr r1, [sp, #4]\n    sub r7, r1, #1\n    ldr r1, [sp, #0x38]\n    cmp r0, #1\n    str r7, [r1, #0x18]\n    ldr r2, [sp, #8]\n    str r2, [r1, #0x1c]\n    ldr r2, [sp, #4]\n    str r2, [r1, #0x20]\n    ldr r2, [sp, #8]\n    str r2, [r1, #0x24]\n    bne _0225517C\n    b _022552D6\n    mov r0, #0\n    str r0, [r1]\n    mov r2, #5\n    strb r2, [r1, #4]\n    mov r2, #7\n    strb r2, [r1, #5]\n    ldr r1, [sp, #4]\n    ldr r4, [sp, #0x38]\n    str r1, [sp, #0x1c]\n    ldr r1, [sp, #8]\n    str r1, [sp, #0x20]\n    ldr r1, [sp, #4]\n    add r3, r1, #3\n    ldr r1, [sp, #8]\n    str r3, [sp, #0x1c]\n    sub r2, r1, #2\n    str r2, [sp, #0x20]\n    add r1, r2, r0\n    str r3, [r4, #0x28]\n    str r1, [r4, #0x2c]\n    add r0, r0, #1\n    add r4, #8\n    cmp r0, #7\n    blt _0225519E\n    ldr r0, [sp, #4]\n    ldr r3, [sp, #0x38]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #8]\n    mov r4, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #4]\n    sub r2, r0, #3\n    ldr r0, [sp, #8]\n    str r2, [sp, #0x1c]\n    sub r1, r0, #2\n    str r1, [sp, #0x20]\n    add r0, r1, r4\n    str r2, [r3, #0x68]\n    str r0, [r3, #0x6c]\n    add r4, r4, #1\n    add r3, #8\n    cmp r4, #7\n    blt _022551C4\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0x38]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #8]\n    mov r3, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #4]\n    sub r1, r0, #2\n    ldr r0, [sp, #8]\n    str r1, [sp, #0x1c]\n    add r0, r0, #5\n    str r0, [sp, #0x20]\n    add r4, r2, #0\n    add r4, #0xa8\n    str r1, [r4]\n    add r4, r2, #0\n    add r4, #0xac\n    str r0, [r4]\n    add r4, r2, #0\n    add r4, #0xa8\n    ldr r4, [r4]\n    add r5, r4, r3\n    add r4, r2, #0\n    add r4, #0xa8\n    add r3, r3, #1\n    add r2, #8\n    str r5, [r4]\n    cmp r3, #5\n    blt _022551EA\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0x38]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #8]\n    mov r3, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #4]\n    sub r1, r0, #2\n    ldr r0, [sp, #8]\n    str r1, [sp, #0x1c]\n    sub r0, r0, #3\n    str r0, [sp, #0x20]\n    add r4, r2, #0\n    add r4, #0xd0\n    str r1, [r4]\n    add r4, r2, #0\n    add r4, #0xd4\n    str r0, [r4]\n    add r4, r2, #0\n    add r4, #0xd0\n    ldr r4, [r4]\n    add r5, r4, r3\n    add r4, r2, #0\n    add r4, #0xd0\n    add r3, r3, #1\n    add r2, #8\n    str r5, [r4]\n    cmp r3, #5\n    blt _02255224\n    ldr r0, [sp, #4]\n    mov r6, #0\n    sub r0, r0, #4\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    str r6, [sp, #0x10]\n    add r4, r0, #4\n    ldr r0, [sp, #0xc]\n    str r4, [sp, #0x20]\n    str r0, [sp, #0x1c]\n    sub r2, r0, r6\n    ldr r0, [sp, #0x10]\n    str r2, [sp, #0x1c]\n    lsl r1, r0, #3\n    ldr r0, [sp, #0x38]\n    mov r3, #0\n    add r5, r0, r1\n    add r0, r5, #0\n    add r0, #0xf8\n    str r2, [r0]\n    add r0, r5, #0\n    add r0, #0xfc\n    str r4, [r0]\n    add r0, r5, #0\n    add r0, #0xfc\n    ldr r0, [r0]\n    sub r1, r0, r3\n    add r0, r5, #0\n    add r0, #0xfc\n    add r3, r3, #1\n    add r5, #8\n    str r1, [r0]\n    cmp r3, #7\n    blt _02255268\n    ldr r0, [sp, #0x10]\n    add r6, r6, #1\n    add r0, r0, #7\n    str r0, [sp, #0x10]\n    cmp r6, #2\n    blt _02255254\n    ldr r0, [sp, #0x38]\n    mov r4, #0\n    ldrb r3, [r0, #4]\n    cmp r3, #0\n    ble _022552D4\n    ldr r0, [sp, #4]\n    add r2, r0, #3\n    ldr r0, [sp, #8]\n    str r2, [sp, #0x1c]\n    sub r1, r0, #2\n    str r1, [sp, #0x20]\n    cmp r3, #0\n    ble _022552D4\n    mov r6, #0x6f\n    lsl r6, r6, #2\n    ldr r3, [sp, #0x38]\n    add r0, r6, #0\n    mov r5, #0x6e\n    lsl r5, r5, #2\n    str r2, [r3, r5]\n    add r5, r5, #4\n    str r1, [r3, r5]\n    ldr r5, [r3, r6]\n    add r5, r5, r4\n    str r5, [r3, r0]\n    ldr r5, [sp, #0x38]\n    add r4, r4, #1\n    ldrb r5, [r5, #4]\n    add r3, #8\n    cmp r4, r5\n    blt _022552B8\n    b _02255432\n    ldr r0, [sp, #0x38]\n    mov r1, #1\n    str r1, [r0]\n    mov r1, #4\n    strb r1, [r0, #4]\n    mov r1, #8\n    strb r1, [r0, #5]\n    ldr r0, [sp, #4]\n    ldr r4, [sp, #0x38]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #8]\n    mov r3, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #4]\n    add r2, r0, #2\n    ldr r0, [sp, #8]\n    str r2, [sp, #0x1c]\n    sub r1, r0, #2\n    str r1, [sp, #0x20]\n    add r0, r1, r3\n    str r2, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    add r3, r3, #1\n    add r4, #8\n    cmp r3, #8\n    blt _022552FC\n    ldr r0, [sp, #4]\n    ldr r3, [sp, #0x38]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #8]\n    mov r4, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #4]\n    sub r2, r0, #3\n    ldr r0, [sp, #8]\n    str r2, [sp, #0x1c]\n    sub r1, r0, #2\n    str r1, [sp, #0x20]\n    add r0, r1, r4\n    str r2, [r3, #0x68]\n    str r0, [r3, #0x6c]\n    add r4, r4, #1\n    add r3, #8\n    cmp r4, #8\n    blt _02255322\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0x38]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #8]\n    mov r3, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #4]\n    sub r1, r0, #2\n    ldr r0, [sp, #8]\n    str r1, [sp, #0x1c]\n    add r0, r0, #6\n    str r0, [sp, #0x20]\n    add r4, r2, #0\n    add r4, #0xa8\n    str r1, [r4]\n    add r4, r2, #0\n    add r4, #0xac\n    str r0, [r4]\n    add r4, r2, #0\n    add r4, #0xa8\n    ldr r4, [r4]\n    add r5, r4, r3\n    add r4, r2, #0\n    add r4, #0xa8\n    add r3, r3, #1\n    add r2, #8\n    str r5, [r4]\n    cmp r3, #4\n    blt _02255348\n    ldr r0, [sp, #4]\n    ldr r2, [sp, #0x38]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #8]\n    mov r3, #0\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #4]\n    sub r1, r0, #2\n    ldr r0, [sp, #8]\n    str r1, [sp, #0x1c]\n    sub r0, r0, #3\n    str r0, [sp, #0x20]\n    add r4, r2, #0\n    add r4, #0xd0\n    str r1, [r4]\n    add r4, r2, #0\n    add r4, #0xd4\n    str r0, [r4]\n    add r4, r2, #0\n    add r4, #0xd0\n    ldr r4, [r4]\n    add r5, r4, r3\n    add r4, r2, #0\n    add r4, #0xd0\n    add r3, r3, #1\n    add r2, #8\n    str r5, [r4]\n    cmp r3, #4\n    blt _02255382\n    ldr r0, [sp, #4]\n    mov r6, #0\n    sub r0, r0, #4\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    str r6, [sp, #0x18]\n    add r4, r0, #5\n    ldr r0, [sp, #0x14]\n    str r4, [sp, #0x20]\n    str r0, [sp, #0x1c]\n    sub r2, r0, r6\n    ldr r0, [sp, #0x18]\n    str r2, [sp, #0x1c]\n    lsl r1, r0, #3\n    ldr r0, [sp, #0x38]\n    mov r3, #0\n    add r5, r0, r1\n    add r0, r5, #0\n    add r0, #0xf8\n    str r2, [r0]\n    add r0, r5, #0\n    add r0, #0xfc\n    str r4, [r0]\n    add r0, r5, #0\n    add r0, #0xfc\n    ldr r0, [r0]\n    sub r1, r0, r3\n    add r0, r5, #0\n    add r0, #0xfc\n    add r3, r3, #1\n    add r5, #8\n    str r1, [r0]\n    cmp r3, #8\n    blt _022553C6\n    ldr r0, [sp, #0x18]\n    add r6, r6, #1\n    add r0, #8\n    str r0, [sp, #0x18]\n    cmp r6, #3\n    blt _022553B2\n    ldr r0, [sp, #0x38]\n    mov r4, #0\n    ldrb r3, [r0, #4]\n    cmp r3, #0\n    ble _02255432\n    ldr r0, [sp, #4]\n    add r2, r0, #3\n    ldr r0, [sp, #8]\n    str r2, [sp, #0x1c]\n    sub r1, r0, #2\n    str r1, [sp, #0x20]\n    cmp r3, #0\n    ble _02255432\n    mov r6, #0x6f\n    lsl r6, r6, #2\n    ldr r3, [sp, #0x38]\n    add r0, r6, #0\n    mov r5, #0x6e\n    lsl r5, r5, #2\n    str r2, [r3, r5]\n    add r5, r5, #4\n    str r1, [r3, r5]\n    ldr r5, [r3, r6]\n    add r5, r5, r4\n    str r5, [r3, r0]\n    ldr r5, [sp, #0x38]\n    add r4, r4, #1\n    ldrb r5, [r5, #4]\n    add r3, #8\n    cmp r4, r5\n    blt _02255416\n    ldr r0, [sp, #8]\n    mov r6, #0x1e\n    sub r2, r0, #1\n    mov r1, #0\n    lsl r6, r6, #4\n    str r7, [sp, #0x1c]\n    str r2, [sp, #0x20]\n    mov ip, r1\n    add r4, r6, #4\n    ldr r3, [sp, #0x38]\n    lsl r5, r1, #3\n    mov r0, #0\n    add r5, r3, r5\n    add r3, r7, r0\n    str r3, [r5, r6]\n    str r2, [r5, r4]\n    add r0, r0, #1\n    add r5, #8\n    cmp r0, #3\n    blt _0225544C\n    mov r0, ip\n    add r0, r0, #1\n    add r1, r1, #3\n    add r2, r2, #1\n    mov ip, r0\n    cmp r0, #6\n    blt _02255444\n    ldr r1, [sp]\n    ldr r0, [sp, #0x38]\n    ldr r3, [sp, #0x38]\n    strb r1, [r0, #6]\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    ldr r2, [sp, #8]\n    bl ov04_022554FC\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02255480(void) {
    /* Original at 0x02255480 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r4, [r3]\n    ldr r3, [r3, #4]\n    ldr r5, [sp, #8]\n    sub r4, r4, r1\n    sub r3, r3, r2\n    cmp r0, #1\n    beq _0225549C\n    cmp r0, #2\n    beq _022554A4\n    cmp r0, #3\n    beq _022554AE\n    pop {r4, r5}\n    bx lr\n    neg r0, r3\n    str r0, [r5]\n    str r4, [r5, #4]\n    b _022554B4\n    neg r0, r4\n    str r0, [r5]\n    neg r0, r3\n    str r0, [r5, #4]\n    b _022554B4\n    str r3, [r5]\n    neg r0, r4\n    str r0, [r5, #4]\n    ldr r0, [r5]\n    add r0, r0, r1\n    str r0, [r5]\n    ldr r0, [r5, #4]\n    add r0, r0, r2\n    str r0, [r5, #4]\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov04_022554C4(void) {
    /* Original at 0x022554C4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #0\n    cmp r1, #0\n    ble _022554DA\n    ldr r3, [r2]\n    add r4, r4, #1\n    add r3, r3, r0\n    str r3, [r2]\n    add r2, #8\n    cmp r4, r1\n    blt _022554CC\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov04_022554E0(void) {
    /* Original at 0x022554E0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #0\n    cmp r1, #0\n    ble _022554F6\n    ldr r3, [r2, #4]\n    add r4, r4, #1\n    add r3, r3, r0\n    str r3, [r2, #4]\n    add r2, #8\n    cmp r4, r1\n    blt _022554E8\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov04_022554FC(void) {
    /* Original at 0x022554FC */
    /* Requires manual decompilation - 206 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x4c\n    add r5, r0, #0\n    ldr r0, [r3]\n    add r4, r1, #0\n    add r6, r2, #0\n    str r3, [sp, #4]\n    cmp r0, #0\n    bne _0225551C\n    mov r0, #0xe\n    str r0, [sp, #0x44]\n    mov r0, #5\n    str r0, [sp, #0x20]\n    mov r0, #7\n    str r0, [sp, #0x24]\n    b _02255528\n    mov r0, #0x18\n    str r0, [sp, #0x44]\n    mov r0, #4\n    str r0, [sp, #0x20]\n    mov r0, #8\n    str r0, [sp, #0x24]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r3, #0x10\n    add r1, r4, #0\n    add r2, r6, #0\n    str r3, [sp]\n    bl ov04_02255480\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r3, #0x18\n    add r1, r4, #0\n    add r2, r6, #0\n    str r3, [sp]\n    bl ov04_02255480\n    mov r0, #0\n    str r0, [sp, #0x48]\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    ble _0225557A\n    ldr r7, [sp, #4]\n    add r7, #0x28\n    str r7, [sp, #0x28]\n    ldr r3, [sp, #0x28]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    str r7, [sp]\n    bl ov04_02255480\n    ldr r0, [sp, #0x28]\n    add r7, #8\n    add r0, #8\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #0x48]\n    add r1, r0, #1\n    ldr r0, [sp, #0x24]\n    str r1, [sp, #0x48]\n    cmp r1, r0\n    blt _02255558\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    ble _022555AC\n    ldr r7, [sp, #4]\n    add r7, #0x68\n    str r7, [sp, #0x2c]\n    ldr r3, [sp, #0x2c]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    str r7, [sp]\n    bl ov04_02255480\n    ldr r0, [sp, #0x2c]\n    add r7, #8\n    add r0, #8\n    str r0, [sp, #0x2c]\n    ldr r0, [sp, #8]\n    add r1, r0, #1\n    ldr r0, [sp, #0x24]\n    str r1, [sp, #8]\n    cmp r1, r0\n    blt _0225558A\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    ble _022555DE\n    ldr r7, [sp, #4]\n    add r7, #0xa8\n    str r7, [sp, #0x30]\n    ldr r3, [sp, #0x30]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    str r7, [sp]\n    bl ov04_02255480\n    ldr r0, [sp, #0x30]\n    add r7, #8\n    add r0, #8\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0xc]\n    add r1, r0, #1\n    ldr r0, [sp, #0x20]\n    str r1, [sp, #0xc]\n    cmp r1, r0\n    blt _022555BC\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    ble _02255610\n    ldr r7, [sp, #4]\n    add r7, #0xd0\n    str r7, [sp, #0x34]\n    ldr r3, [sp, #0x34]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    str r7, [sp]\n    bl ov04_02255480\n    ldr r0, [sp, #0x34]\n    add r7, #8\n    add r0, #8\n    str r0, [sp, #0x34]\n    ldr r0, [sp, #0x10]\n    add r1, r0, #1\n    ldr r0, [sp, #0x20]\n    str r1, [sp, #0x10]\n    cmp r1, r0\n    blt _022555EE\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x44]\n    cmp r0, #0\n    ble _02255642\n    ldr r7, [sp, #4]\n    add r7, #0xf8\n    str r7, [sp, #0x38]\n    ldr r3, [sp, #0x38]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    str r7, [sp]\n    bl ov04_02255480\n    ldr r0, [sp, #0x38]\n    add r7, #8\n    add r0, #8\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x14]\n    add r1, r0, #1\n    ldr r0, [sp, #0x44]\n    str r1, [sp, #0x14]\n    cmp r1, r0\n    blt _02255620\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x20]\n    cmp r0, #0\n    ble _02255678\n    mov r1, #0x6e\n    ldr r0, [sp, #4]\n    lsl r1, r1, #2\n    add r7, r0, r1\n    str r7, [sp, #0x3c]\n    ldr r3, [sp, #0x3c]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    str r7, [sp]\n    bl ov04_02255480\n    ldr r0, [sp, #0x3c]\n    add r7, #8\n    add r0, #8\n    str r0, [sp, #0x3c]\n    ldr r0, [sp, #0x18]\n    add r1, r0, #1\n    ldr r0, [sp, #0x20]\n    str r1, [sp, #0x18]\n    cmp r1, r0\n    blt _02255656\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    mov r1, #0x1e\n    ldr r0, [sp, #4]\n    lsl r1, r1, #4\n    add r7, r0, r1\n    str r7, [sp, #0x40]\n    ldr r3, [sp, #0x40]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    str r7, [sp]\n    bl ov04_02255480\n    ldr r0, [sp, #0x40]\n    add r7, #8\n    add r0, #8\n    str r0, [sp, #0x40]\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    str r0, [sp, #0x1c]\n    cmp r0, #0x12\n    blt _02255686\n    add sp, #0x4c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_022556AC(void) {
    /* Original at 0x022556AC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    mov r6, #0x27\n    mov r4, #0\n    lsl r6, r6, #4\n    add r5, r4, #0\n    mul r5, r6\n    add r5, r0, r5\n    ldr r7, [r5, #0xc]\n    cmp r1, r7\n    bne _022556CE\n    ldr r7, [r5, #0x10]\n    cmp r2, r7\n    bne _022556CE\n    strb r4, [r3]\n    mov r0, #1\n    pop {r4, r5, r6, r7}\n    bx lr\n    ldr r7, [r5, #0x14]\n    cmp r1, r7\n    bne _022556E2\n    ldr r7, [r5, #0x18]\n    cmp r2, r7\n    bne _022556E2\n    strb r4, [r3]\n    mov r0, #2\n    pop {r4, r5, r6, r7}\n    bx lr\n    ldr r7, [r5, #0x1c]\n    cmp r1, r7\n    bne _022556F6\n    ldr r5, [r5, #0x20]\n    cmp r2, r5\n    bne _022556F6\n    strb r4, [r3]\n    mov r0, #3\n    pop {r4, r5, r6, r7}\n    bx lr\n    add r4, r4, #1\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    cmp r4, #3\n    blo _022556B4\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov04_02255708(void) {
    /* Original at 0x02255708 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r3, sp, #0\n    add r5, r0, #0\n    bl ov04_022556AC\n    add r6, r0, #0\n    bne _0225571E\n    add sp, #4\n    mov r0, #0\n    pop {r3, r4, r5, r6, pc}\n    mov r0, #0xb\n    mov r1, #0x74\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    ldr r0, [r5]\n    add r2, r4, #0\n    str r0, [r4, #0x70]\n    mov r1, #0\n    add r2, #0x4c\n    str r1, [r4]\n    add r0, sp, #0\n    ldrb r3, [r0]\n    cmp r6, #1\n    strb r3, [r2]\n    str r6, [r4, #0x50]\n    beq _0225574A\n    cmp r6, #2\n    beq _02255762\n    cmp r6, #3\n    beq _022557AA\n    b _022557F2\n    mov r0, #8\n    str r0, [r4]\n    ldr r0, _022557F8 ; =SEQ_SE_GS_GONDORA_IDOU\n    bl PlaySE\n    ldr r0, [r5]\n    ldr r1, _022557FC ; =ov04_02255AC4\n    add r2, r4, #0\n    bl FieldSystem_CreateTask\n    mov r1, #1\n    b _022557F2\n    add r2, r4, #0\n    str r1, [r4]\n    add r2, #0x4d\n    strb r1, [r2]\n    ldrb r2, [r0]\n    mov r3, #0x27\n    lsl r3, r3, #4\n    add r6, r2, #0\n    mul r6, r3\n    add r2, r5, r6\n    ldrb r6, [r2, #8]\n    add r2, r4, #0\n    add r2, #0x4e\n    strb r6, [r2]\n    ldrb r0, [r0]\n    add r2, r0, #0\n    mul r2, r3\n    add r0, r5, r2\n    ldrb r0, [r0, #0xa]\n    bl ov04_022558B4\n    add r1, r4, #0\n    add r1, #0x58\n    str r0, [r4, #0x54]\n    bl ov04_022558D0\n    ldr r0, _022557F8 ; =SEQ_SE_GS_GONDORA_IDOU\n    bl PlaySE\n    ldr r0, [r5]\n    ldr r1, _02255800 ; =ov04_022559C8\n    add r2, r4, #0\n    bl FieldSystem_CreateTask\n    mov r1, #1\n    b _022557F2\n    add r2, r4, #0\n    str r1, [r4]\n    add r2, #0x4d\n    strb r1, [r2]\n    ldrb r1, [r0]\n    mov r2, #0x27\n    lsl r2, r2, #4\n    add r3, r1, #0\n    mul r3, r2\n    add r1, r5, r3\n    ldrb r3, [r1, #8]\n    add r1, r4, #0\n    add r1, #0x4e\n    strb r3, [r1]\n    ldrb r0, [r0]\n    add r1, r0, #0\n    mul r1, r2\n    add r0, r5, r1\n    ldrb r0, [r0, #0xa]\n    mov r1, #1\n    bl ov04_022558B4\n    add r1, r4, #0\n    add r1, #0x58\n    str r0, [r4, #0x54]\n    bl ov04_022558D0\n    ldr r0, _022557F8 ; =SEQ_SE_GS_GONDORA_IDOU\n    bl PlaySE\n    ldr r0, [r5]\n    ldr r1, _02255800 ; =ov04_022559C8\n    add r2, r4, #0\n    bl FieldSystem_CreateTask\n    mov r1, #1\n    add r0, r1, #0\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _022557F8: .word SEQ_SE_GS_GONDORA_IDOU\n    _022557FC: .word ov04_02255AC4\n    _02255800: .word ov04_022559C8"
    );
    #endif
}

void ov04_02255804(void) {
    /* Original at 0x02255804 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r2, [r1, #0x50]\n    cmp r2, #2\n    beq _02255814\n    cmp r2, #3\n    beq _02255836\n    pop {r4, r5}\n    bx lr\n    ldrb r2, [r0, #5]\n    mov r4, #0\n    cmp r2, #0\n    ble _02255854\n    add r5, r0, #0\n    ldr r3, [r5, #0x28]\n    ldr r2, [r5, #0x2c]\n    add r4, r4, #1\n    str r3, [r1, #4]\n    str r2, [r1, #8]\n    ldrb r2, [r0, #5]\n    add r5, #8\n    add r1, #8\n    cmp r4, r2\n    blt _0225581E\n    pop {r4, r5}\n    bx lr\n    ldrb r2, [r0, #5]\n    mov r5, #0\n    cmp r2, #0\n    ble _02255854\n    add r4, r0, #0\n    ldr r3, [r4, #0x68]\n    ldr r2, [r4, #0x6c]\n    add r5, r5, #1\n    str r3, [r1, #4]\n    str r2, [r1, #8]\n    ldrb r2, [r0, #5]\n    add r4, #8\n    add r1, #8\n    cmp r5, r2\n    blt _02255840\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov04_02255858(void) {
    /* Original at 0x02255858 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r2, r1, #0\n    add r3, r0, #0\n    ldr r0, [r2, #0x54]\n    cmp r0, #3\n    bhi _022558B2\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02255870: ; jump table\n    lsl r1, r3, #0x18\n    mov r0, #1\n    lsr r1, r1, #0x18\n    add r2, r2, #4\n    bl ov04_022554C4\n    pop {r3, pc}\n    lsl r1, r3, #0x18\n    mov r0, #1\n    lsr r1, r1, #0x18\n    add r2, r2, #4\n    bl ov04_022554E0\n    pop {r3, pc}\n    mov r0, #0\n    lsl r1, r3, #0x18\n    mvn r0, r0\n    lsr r1, r1, #0x18\n    add r2, r2, #4\n    bl ov04_022554C4\n    pop {r3, pc}\n    mov r0, #0\n    lsl r1, r3, #0x18\n    mvn r0, r0\n    lsr r1, r1, #0x18\n    add r2, r2, #4\n    bl ov04_022554E0\n    pop {r3, pc}"
    );
    #endif
}

void ov04_022558B4(void) {
    /* Original at 0x022558B4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    bne _022558BC\n    mov r1, #0\n    b _022558BE\n    mov r1, #2\n    add r0, r1, r0\n    lsr r2, r0, #0x1f\n    lsl r1, r0, #0x1e\n    sub r1, r1, r2\n    mov r0, #0x1e\n    ror r1, r0\n    add r0, r2, r1\n    bx lr"
    );
    #endif
}

void ov04_022558D0(void) {
    /* Original at 0x022558D0 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    str r2, [r1]\n    str r2, [r1, #4]\n    str r2, [r1, #8]\n    cmp r0, #3\n    bhi _0225590A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022558E8: ; jump table\n    mov r0, #2\n    lsl r0, r0, #0xe\n    str r0, [r1]\n    bx lr\n    mov r0, #2\n    lsl r0, r0, #0xe\n    str r0, [r1, #8]\n    bx lr\n    ldr r0, _0225590C ; =0xFFFF8000\n    str r0, [r1]\n    bx lr\n    ldr r0, _0225590C ; =0xFFFF8000\n    str r0, [r1, #8]\n    bx lr\n    _0225590C: .word 0xFFFF8000"
    );
    #endif
}

void ov04_02255910(void) {
    /* Original at 0x02255910 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xff\n    add r7, r1, #0\n    add r4, r2, #0\n    mov r6, #0\n    str r0, [sp]\n    cmp r7, #0\n    ble _0225595A\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    add r0, r5, #0\n    bl sub_020548C0\n    cmp r0, #0\n    beq _02255938\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    b _0225595A\n    ldr r1, [r4]\n    ldr r2, [r4, #4]\n    add r0, r5, #0\n    bl GetMetatileBehavior\n    bl sub_0205BAC4\n    cmp r0, #0\n    bne _02255952\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    b _0225595A\n    add r6, r6, #1\n    add r4, #8\n    cmp r6, r7\n    blt _02255922\n    ldr r0, [sp]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02255960(void) {
    /* Original at 0x02255960 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    mov r0, #1\n    lsl r0, r0, #0xe\n    add r7, r1, #0\n    add r5, r2, #0\n    mov r4, #0\n    str r3, [sp]\n    str r0, [sp, #4]\n    cmp r7, #0\n    ble _022559C0\n    ldr r1, [r5]\n    ldr r2, [r5, #4]\n    add r0, r6, #0\n    bl sub_020548C0\n    cmp r0, #0\n    bne _0225599E\n    ldr r1, [r5]\n    ldr r2, [r5, #4]\n    add r0, r6, #0\n    bl GetMetatileBehavior\n    bl sub_0205BAC4\n    cmp r0, #0\n    bne _0225599C\n    mov r0, #1\n    b _0225599E\n    mov r0, #0\n    cmp r0, #0\n    beq _022559B8\n    ldr r0, [sp]\n    ldrb r0, [r0, r4]\n    lsl r1, r0, #8\n    mov r0, #1\n    lsl r0, r0, #0xe\n    cmp r1, r0\n    bge _022559B8\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    b _022559C0\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, r7\n    blt _02255978\n    ldr r0, [sp, #4]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_022559C8(void) {
    /* Original at 0x022559C8 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r6, #4]\n    ldr r5, [r0, #0x24]\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _022559F0\n    cmp r0, #3\n    beq _02255A16\n    cmp r0, #7\n    beq _02255AA2\n    b _02255AB6\n    add r0, r4, #0\n    add r0, #0x4c\n    ldrb r1, [r0]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    mul r0, r1\n    add r2, r5, #4\n    add r0, r2, r0\n    add r1, r4, #0\n    bl ov04_02255804\n    ldr r0, _02255ABC ; =ov04_02255D88\n    add r1, r4, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    mov r0, #1\n    str r0, [r4]\n    b _02255AB6\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r2, [r1]\n    mov r1, #0x27\n    lsl r1, r1, #4\n    mul r1, r2\n    add r0, r6, #0\n    add r1, r5, r1\n    add r0, #0x9c\n    ldrb r1, [r1, #0xb]\n    ldr r0, [r0]\n    bl ov01_021F3B44\n    add r1, r0, #0\n    add r0, sp, #8\n    bl ov01_021F3B0C\n    ldr r1, [sp, #8]\n    asr r0, r1, #0xf\n    lsr r0, r0, #0x10\n    add r0, r1, r0\n    asr r0, r0, #0x10\n    ldr r1, [sp, #0x10]\n    str r0, [sp, #4]\n    asr r0, r1, #0xf\n    lsr r0, r0, #0x10\n    add r0, r1, r0\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r2, [r1]\n    mov r1, #0x27\n    lsl r1, r1, #4\n    asr r7, r0, #0x10\n    add r0, r5, #4\n    mul r1, r2\n    add r5, r0, r1\n    add r0, r6, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #6\n    bl Save_Gymmick_AssertMagic_GetData\n    ldr r1, [sp, #4]\n    lsl r1, r1, #0x10\n    lsr r2, r1, #0x10\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r1, [r1]\n    lsl r1, r1, #1\n    strh r2, [r0, r1]\n    lsl r1, r7, #0x10\n    lsr r3, r1, #0x10\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r1, [r1]\n    lsl r1, r1, #1\n    add r0, r0, r1\n    strh r3, [r0, #6]\n    add r0, r4, #0\n    str r5, [sp]\n    add r0, #0x4c\n    ldrb r0, [r0]\n    ldrb r1, [r5, #6]\n    bl ov04_02255140\n    mov r0, #7\n    str r0, [r4]\n    b _02255AB6\n    ldr r0, _02255AC0 ; =SEQ_SE_GS_GONDORA_IDOU\n    mov r1, #0\n    bl StopSE\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x14\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02255ABC: .word ov04_02255D88\n    _02255AC0: .word SEQ_SE_GS_GONDORA_IDOU"
    );
    #endif
}

void ov04_02255AC4(void) {
    /* Original at 0x02255AC4 */
    /* Requires manual decompilation - 225 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r5, #4]\n    ldr r6, [r0, #0x24]\n    ldr r0, [r4]\n    sub r0, #8\n    cmp r0, #4\n    bhi _02255BA4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02255AEE: ; jump table\n    add r0, r4, #0\n    add r0, #0x4c\n    ldrb r3, [r0]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    add r1, r3, #0\n    mul r1, r0\n    add r0, r4, #0\n    add r2, r6, #4\n    add r1, r2, r1\n    mov r3, #0\n    add r0, #0x4f\n    strb r3, [r0]\n    add r0, r5, #0\n    add r2, sp, #0\n    bl ov04_02255CBC\n    cmp r0, #2\n    bne _02255B24\n    mov r0, #9\n    str r0, [r4]\n    b _02255CB0\n    cmp r0, #1\n    bne _02255B5E\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r2, [r1]\n    mov r1, #0x27\n    lsl r1, r1, #4\n    mul r1, r2\n    add r1, r6, r1\n    add r5, #0x9c\n    ldrb r1, [r1, #0xb]\n    ldr r0, [r5]\n    bl ov01_021F3B44\n    bl ov01_021F3B08\n    add r1, sp, #0\n    ldrh r1, [r1]\n    str r1, [r4, #0x68]\n    ldr r0, [r0, #4]\n    str r0, [r4, #0x6c]\n    mov r0, #0\n    str r0, [r4, #0x64]\n    mov r0, #0xa\n    str r0, [r4]\n    ldr r0, _02255CB4 ; =SEQ_SE_GS_GONDORA_KABEHIT\n    bl PlaySE\n    b _02255CB0\n    mov r0, #0xc\n    str r0, [r4]\n    b _02255CB0\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r2, [r1]\n    mov r1, #0x27\n    lsl r1, r1, #4\n    mul r1, r2\n    add r0, r5, #0\n    add r1, r6, r1\n    add r0, #0x9c\n    ldrb r1, [r1, #0xb]\n    ldr r0, [r0]\n    bl ov01_021F3B44\n    bl ov01_021F3B08\n    mov r1, #1\n    ldr r2, [r0, #4]\n    lsl r1, r1, #0xa\n    sub r1, r2, r1\n    str r1, [r0, #4]\n    add r0, r4, #0\n    add r0, #0x4f\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4f\n    ldrb r0, [r0]\n    cmp r0, #0x10\n    bhs _02255BA6\n    b _02255CB0\n    add r0, r4, #0\n    add r0, #0x4c\n    ldrb r1, [r0]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    mul r0, r1\n    add r2, r6, #4\n    add r7, r2, r0\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    add r0, r5, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #6\n    bl Save_Gymmick_AssertMagic_GetData\n    add r3, r0, #0\n    mov ip, r0\n    add r0, r4, #0\n    add r0, #0x4c\n    ldrb r2, [r0]\n    add r3, #0xc\n    ldrb r0, [r3, r2]\n    add r0, r0, #1\n    lsr r1, r0, #0x1f\n    lsl r6, r0, #0x1e\n    sub r6, r6, r1\n    mov r0, #0x1e\n    ror r6, r0\n    add r0, r1, r6\n    strb r0, [r3, r2]\n    add r0, r4, #0\n    add r0, #0x4c\n    ldrb r1, [r0]\n    mov r0, ip\n    add r0, r0, r1\n    ldrb r0, [r0, #0xc]\n    strb r0, [r7, #6]\n    ldr r0, [r5, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r6, r0, #0\n    bl MapObject_GetXCoord\n    add r5, r0, #0\n    add r0, r6, #0\n    bl MapObject_GetZCoord\n    add r2, r0, #0\n    lsl r1, r5, #0x10\n    lsl r2, r2, #0x10\n    mov r0, #1\n    lsr r1, r1, #0x10\n    lsr r2, r2, #0x10\n    add r3, r7, #0\n    bl ov04_022554FC\n    mov r0, #0xc\n    str r0, [r4]\n    b _02255CB0\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r2, [r1]\n    mov r1, #0x27\n    lsl r1, r1, #4\n    mul r1, r2\n    add r1, r6, r1\n    add r5, #0x9c\n    ldrb r1, [r1, #0xb]\n    ldr r0, [r5]\n    bl ov01_021F3B44\n    bl ov01_021F3B08\n    mov r1, #1\n    ldr r2, [r0, #4]\n    lsl r1, r1, #0xa\n    sub r2, r2, r1\n    str r2, [r0, #4]\n    ldr r2, [r4, #0x64]\n    add r1, r2, r1\n    str r1, [r4, #0x64]\n    ldr r2, [r4, #0x68]\n    cmp r1, r2\n    blt _02255CB0\n    ldr r1, [r4, #0x6c]\n    sub r1, r1, r2\n    str r1, [r0, #4]\n    mov r0, #0xb\n    str r0, [r4]\n    b _02255CB0\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r2, [r1]\n    mov r1, #0x27\n    lsl r1, r1, #4\n    mul r1, r2\n    add r1, r6, r1\n    add r5, #0x9c\n    ldrb r1, [r1, #0xb]\n    ldr r0, [r5]\n    bl ov01_021F3B44\n    bl ov01_021F3B08\n    mov r1, #1\n    ldr r2, [r0, #4]\n    lsl r1, r1, #0xa\n    add r2, r2, r1\n    str r2, [r0, #4]\n    ldr r2, [r4, #0x64]\n    sub r1, r2, r1\n    str r1, [r4, #0x64]\n    cmp r1, #0\n    bgt _02255CB0\n    ldr r1, [r4, #0x6c]\n    str r1, [r0, #4]\n    mov r0, #0xc\n    str r0, [r4]\n    b _02255CB0\n    ldr r0, _02255CB8 ; =SEQ_SE_GS_GONDORA_IDOU\n    mov r1, #0\n    bl StopSE\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _02255CB4: .word SEQ_SE_GS_GONDORA_KABEHIT\n    _02255CB8: .word SEQ_SE_GS_GONDORA_IDOU"
    );
    #endif
}

void ov04_02255CBC(void) {
    /* Original at 0x02255CBC */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    ldrb r1, [r4, #4]\n    add r6, r2, #0\n    add r5, r0, #0\n    sub r2, r1, #1\n    lsl r2, r2, #0x18\n    lsr r7, r2, #0x18\n    add r2, r4, #0\n    add r2, #0xa8\n    bl ov04_02255910\n    cmp r0, #0xff\n    beq _02255CDC\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r4, #4]\n    add r2, r4, #0\n    add r0, r5, #0\n    add r2, #0xd0\n    bl ov04_02255910\n    cmp r0, #0xff\n    beq _02255CF0\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrb r1, [r4, #5]\n    add r2, r4, #0\n    add r0, r5, #0\n    add r2, #0x68\n    bl ov04_02255910\n    cmp r0, #0xff\n    beq _02255D04\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r2, r4, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, #0x28\n    bl ov04_02255910\n    cmp r0, #0xff\n    beq _02255D18\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov04_02255D34\n    mov r1, #1\n    lsl r1, r1, #0xe\n    cmp r0, r1\n    bhs _02255D2E\n    strh r0, [r6]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02255D34(void) {
    /* Original at 0x02255D34 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r7, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    bne _02255D48\n    mov r1, #0xe\n    ldr r3, _02255D78 ; =ov04_02257638\n    ldr r4, _02255D7C ; =ov04_02257618\n    b _02255D4E\n    ldr r3, _02255D80 ; =ov04_02257648\n    ldr r4, _02255D84 ; =ov04_02257614\n    mov r1, #0x18\n    ldrb r0, [r5, #4]\n    add r2, r5, #0\n    add r2, #0xf8\n    str r0, [sp]\n    add r0, r7, #0\n    bl ov04_02255960\n    mov r2, #0x6e\n    lsl r2, r2, #2\n    add r6, r0, #0\n    ldr r1, [sp]\n    add r0, r7, #0\n    add r2, r5, r2\n    add r3, r4, #0\n    bl ov04_02255960\n    cmp r6, r0\n    bhi _02255D74\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02255D78: .word ov04_02257638\n    _02255D7C: .word ov04_02257618\n    _02255D80: .word ov04_02257648\n    _02255D84: .word ov04_02257614"
    );
    #endif
}

void ov04_02255D88(void) {
    /* Original at 0x02255D88 */
    /* Requires manual decompilation - 251 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r4, r1, #0\n    ldr r6, [r4, #0x70]\n    add r7, r0, #0\n    ldr r1, [r6, #4]\n    ldr r5, [r1, #0x24]\n    ldr r1, [r4]\n    cmp r1, #6\n    bhi _02255E5C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02255DA8: ; jump table\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r2, [r1]\n    mov r1, #0x27\n    lsl r1, r1, #4\n    mul r1, r2\n    add r1, r5, r1\n    ldrb r1, [r1, #9]\n    add r0, r6, #0\n    add r2, r4, #4\n    bl ov04_02255910\n    cmp r0, #0xff\n    bne _02255DE2\n    mov r0, #2\n    add sp, #0x40\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #4\n    add sp, #0x40\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r2, [r1]\n    mov r1, #0x27\n    lsl r1, r1, #4\n    mul r1, r2\n    add r0, r6, #0\n    add r1, r5, r1\n    add r0, #0x9c\n    ldrb r1, [r1, #0xb]\n    ldr r0, [r0]\n    bl ov01_021F3B44\n    str r0, [sp]\n    ldr r1, [sp]\n    add r0, sp, #0x34\n    bl ov01_021F3B0C\n    add r0, sp, #0x34\n    add r1, r4, #0\n    add r1, #0x58\n    add r2, r0, #0\n    bl VEC_Add\n    ldr r0, [sp]\n    add r1, sp, #0x34\n    bl ov01_021F3B1C\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r1, sp, #0x28\n    add r6, r0, #0\n    bl MapObject_CopyPositionVector\n    add r0, sp, #0x28\n    add r1, r4, #0\n    add r1, #0x58\n    add r2, r0, #0\n    bl VEC_Add\n    add r0, r6, #0\n    add r1, sp, #0x28\n    bl MapObject_SetPositionVector\n    add r0, r4, #0\n    add r0, #0x4f\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4f\n    ldrb r0, [r0]\n    cmp r0, #2\n    bhs _02255E5E\n    b _02255FB8\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4c\n    ldrb r1, [r0]\n    mov r0, #0x27\n    lsl r0, r0, #4\n    mul r0, r1\n    add r0, r5, r0\n    ldrb r0, [r0, #9]\n    add r1, r4, #0\n    bl ov04_02255858\n    add r0, r4, #0\n    add r0, #0x4d\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x4d\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4d\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4e\n    ldrb r0, [r0]\n    cmp r1, r0\n    blo _02255ED6\n    add r0, r6, #0\n    add r1, sp, #0x1c\n    bl MapObject_CopyPositionVector\n    ldr r2, [sp, #0x1c]\n    add r0, r6, #0\n    asr r1, r2, #0xf\n    lsr r1, r1, #0x10\n    add r1, r2, r1\n    asr r1, r1, #0x10\n    bl MapObject_SetCurrentX\n    ldr r2, [sp, #0x24]\n    add r0, r6, #0\n    asr r1, r2, #0xf\n    lsr r1, r1, #0x10\n    add r1, r2, r1\n    asr r1, r1, #0x10\n    bl MapObject_SetCurrentZ\n    add r0, r6, #0\n    bl sub_02060F78\n    add r0, r7, #0\n    bl SysTask_Destroy\n    mov r0, #3\n    add sp, #0x40\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x40\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _02255FBC ; =SEQ_SE_GS_GONDORA_KABEHIT\n    bl PlaySE\n    mov r0, #5\n    add sp, #0x40\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r4, #0\n    add r1, #0x4d\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _02255F02\n    bl SysTask_Destroy\n    mov r0, #7\n    add sp, #0x40\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [r4, #0x58]\n    mov r0, #0\n    mvn r0, r0\n    add r2, r1, #0\n    mul r2, r0\n    str r2, [r4, #0x58]\n    ldr r1, [r4, #0x60]\n    add sp, #0x40\n    mul r0, r1\n    str r0, [r4, #0x60]\n    mov r0, #6\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r4, #0\n    add r1, #0x4c\n    ldrb r2, [r1]\n    mov r1, #0x27\n    lsl r1, r1, #4\n    mul r1, r2\n    add r0, r6, #0\n    add r1, r5, r1\n    add r0, #0x9c\n    ldrb r1, [r1, #0xb]\n    ldr r0, [r0]\n    bl ov01_021F3B44\n    add r5, r0, #0\n    add r0, sp, #0x10\n    add r1, r5, #0\n    bl ov01_021F3B0C\n    add r0, sp, #0x10\n    add r1, r4, #0\n    add r1, #0x58\n    add r2, r0, #0\n    bl VEC_Add\n    add r0, r5, #0\n    add r1, sp, #0x10\n    bl ov01_021F3B1C\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r1, sp, #4\n    add r5, r0, #0\n    bl MapObject_CopyPositionVector\n    add r0, sp, #4\n    add r1, r4, #0\n    add r1, #0x58\n    add r2, r0, #0\n    bl VEC_Add\n    add r0, r5, #0\n    add r1, sp, #4\n    bl MapObject_SetPositionVector\n    add r0, r4, #0\n    add r0, #0x4f\n    ldrb r0, [r0]\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4f\n    ldrb r0, [r0]\n    cmp r0, #2\n    blo _02255FB8\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4d\n    ldrb r0, [r0]\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x4d\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x4d\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02255FB8\n    add r0, r7, #0\n    bl SysTask_Destroy\n    mov r0, #7\n    str r0, [r4]\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _02255FBC: .word SEQ_SE_GS_GONDORA_KABEHIT"
    );
    #endif
}

void ov04_02255FC0(void) {
    /* Original at 0x02255FC0 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #2\n    bl Save_Gymmick_AssertMagic_GetData\n    add r4, r0, #0\n    mov r0, #4\n    add r1, r0, #0\n    bl Heap_Alloc\n    ldr r1, [r5, #4]\n    mov r2, #4\n    str r0, [r1, #0x24]\n    ldr r0, [r5, #4]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    bl MI_CpuFill8\n    ldr r0, [r5, #4]\n    ldr r0, [r0, #0x24]\n    str r5, [r0]\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0225603E\n    add r0, r5, #0\n    bl ov04_02256278\n    add r7, r0, #0\n    ldr r4, _02256040 ; =0x00000000\n    beq _02256026\n    ldr r2, [r5, #0x54]\n    mov r0, #0xae\n    add r1, r4, #0\n    bl ov01_021E8B04\n    add r6, r0, #0\n    mov r1, #1\n    bl ov01_021E8B60\n    add r0, r6, #0\n    bl ov01_021E8B78\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r7\n    blo _02256004\n    ldr r2, [r5, #0x54]\n    mov r0, #0xaf\n    mov r1, #0\n    bl ov01_021E8B04\n    add r4, r0, #0\n    mov r1, #1\n    bl ov01_021E8B60\n    add r0, r4, #0\n    bl ov01_021E8B78\n    pop {r3, r4, r5, r6, r7, pc}\n    _02256040: .word 0x00000000"
    );
    #endif
}

void ov04_02256044(void) {
    Heap_Free(0);
}

void ov04_02256058(void) {
    /* Original at 0x02256058 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    add r4, r0, #0\n    bl Save_Gymmick_GetType\n    cmp r0, #2\n    beq _02256072\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #2\n    bl Save_Gymmick_AssertMagic_GetData\n    ldr r1, [r5, #4]\n    ldr r1, [r1, #0x24]\n    cmp r1, #0\n    bne _02256086\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02256096\n    add r0, r1, #0\n    bl ov04_0225609C\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov04_0225609C(void) {
    /* Original at 0x0225609C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #2\n    bl Save_Gymmick_AssertMagic_GetData\n    add r4, r0, #0\n    mov r0, #0xb\n    mov r1, #0xc\n    bl Heap_AllocAtEnd\n    add r2, r0, #0\n    mov r0, #0\n    str r0, [r2]\n    mov r0, #1\n    str r0, [r4]\n    ldr r0, [r5]\n    ldr r1, _022560D0 ; =ov04_022560D4\n    ldr r0, [r0, #0x10]\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    _022560D0: .word ov04_022560D4"
    );
    #endif
}

void ov04_022560D4(void) {
    /* Original at 0x022560D4 */
    /* Requires manual decompilation - 176 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x58\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r0, [r6, #0x40]\n    bl PlayerAvatar_GetMapObject\n    ldr r0, [r4]\n    cmp r0, #6\n    bls _022560F6\n    b _0225626C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02256102: ; jump table\n    ldr r1, [r6, #0x24]\n    add r0, sp, #0xc\n    bl Camera_GetAngle\n    add r0, sp, #4\n    ldrh r1, [r0, #8]\n    strh r1, [r0, #0x18]\n    ldrh r1, [r0, #0xa]\n    strh r1, [r0, #0x1a]\n    ldrh r1, [r0, #0xc]\n    strh r1, [r0, #0x1c]\n    ldrh r1, [r0, #0xe]\n    strh r1, [r0, #0x1e]\n    ldrh r1, [r0, #0x18]\n    add r0, sp, #0x44\n    strh r1, [r0]\n    ldr r0, [r6, #0x24]\n    bl Camera_GetPerspectiveAngle\n    add r1, sp, #0x44\n    ldr r3, _02256274 ; =ov04_02257660\n    strh r0, [r1, #2]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x48\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r6, #0x24]\n    bl Camera_GetDistance\n    str r0, [sp, #0x54]\n    ldr r1, [r6, #0x24]\n    mov r0, #4\n    bl CreateCameraTranslationWrapper\n    str r0, [r4, #8]\n    add r1, sp, #0x44\n    mov r2, #0x18\n    bl SetCameraTranslationPath\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225626C\n    ldr r0, [r4, #8]\n    bl IsCameraTranslationFinished\n    cmp r0, #0\n    beq _0225626C\n    ldr r0, [r4, #8]\n    bl DeleteCameraTranslationWrapper\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225626C\n    add r0, r6, #0\n    bl ov04_02256278\n    mov r5, #0\n    str r0, [sp]\n    cmp r0, #0\n    ble _022561AE\n    ldr r2, [r6, #0x54]\n    mov r0, #0xae\n    add r1, r5, #0\n    bl ov01_021E8B04\n    add r7, r0, #0\n    mov r1, #1\n    bl ov01_021E8B84\n    add r0, r7, #0\n    bl ov01_021E8B6C\n    ldr r0, [sp]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _0225618E\n    ldr r2, [r6, #0x54]\n    mov r0, #0xaf\n    mov r1, #0\n    bl ov01_021E8B04\n    add r5, r0, #0\n    mov r1, #1\n    bl ov01_021E8B84\n    add r0, r5, #0\n    bl ov01_021E8B6C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225626C\n    ldr r2, [r6, #0x54]\n    mov r0, #0xaf\n    mov r1, #0\n    bl ov01_021E8B04\n    bl ov01_021E8B90\n    cmp r0, #0\n    beq _0225626C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225626C\n    add r1, sp, #0x24\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldr r1, [r6, #0x24]\n    add r0, sp, #4\n    bl Camera_GetAngle\n    add r0, sp, #4\n    ldrh r1, [r0]\n    strh r1, [r0, #0x10]\n    ldrh r1, [r0, #2]\n    strh r1, [r0, #0x12]\n    ldrh r1, [r0, #4]\n    strh r1, [r0, #0x14]\n    ldrh r1, [r0, #6]\n    strh r1, [r0, #0x16]\n    ldrh r1, [r0, #0x10]\n    strh r1, [r0, #0x2c]\n    ldr r0, [r6, #0x24]\n    bl Camera_GetPerspectiveAngle\n    add r1, sp, #4\n    add r3, sp, #0x24\n    strh r0, [r1, #0x2e]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x34\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    str r0, [r2]\n    ldr r0, [r6, #0x24]\n    bl Camera_GetDistance\n    str r0, [sp, #0x40]\n    ldr r1, [r6, #0x24]\n    mov r0, #4\n    bl CreateCameraTranslationWrapper\n    str r0, [r4, #8]\n    add r1, sp, #0x30\n    mov r2, #0x18\n    bl SetCameraTranslationPath\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225626C\n    ldr r0, [r4, #8]\n    bl IsCameraTranslationFinished\n    cmp r0, #0\n    beq _0225626C\n    ldr r0, [r4, #8]\n    bl DeleteCameraTranslationWrapper\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _0225626C\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x58\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x58\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02256274: .word ov04_02257660"
    );
    #endif
}

void ov04_02256278(void) {
    /* Original at 0x02256278 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0xad\n    bl Field3dObjectList_GetRenderObjectByID\n    add r6, r0, #0\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0xae\n    bl Field3dObjectList_GetRenderObjectByID\n    add r0, r4, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0xaf\n    bl Field3dObjectList_GetRenderObjectByID\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x54]\n    mov r1, #0xad\n    bl ov01_021E8BAC\n    add r7, r0, #0\n    mov r5, #0\n    cmp r7, #0\n    ble _022562C6\n    ldr r0, [r4, #0x54]\n    add r1, r6, #0\n    mov r2, #0xad\n    add r3, r5, #0\n    bl ov01_021E8A8C\n    add r5, r5, #1\n    cmp r5, r7\n    blt _022562B4\n    ldr r0, [r4, #0x54]\n    mov r1, #0xae\n    bl ov01_021E8BAC\n    add r7, r0, #0\n    mov r5, #0\n    cmp r7, #0\n    ble _022562EC\n    ldr r0, [r4, #0x54]\n    add r1, r5, #0\n    str r0, [sp]\n    mov r0, #0xae\n    mov r2, #1\n    add r3, r6, #0\n    bl ov01_021E8970\n    add r5, r5, #1\n    cmp r5, r7\n    blt _022562D6\n    ldr r0, [r4, #0x54]\n    ldr r3, [sp, #4]\n    str r0, [sp]\n    mov r0, #0xaf\n    mov r1, #0\n    mov r2, #1\n    bl ov01_021E8970\n    add r0, r7, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02256304(void) {
    /* Original at 0x02256304 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #3\n    bl Save_Gymmick_AssertMagic_GetData\n    str r0, [sp]\n    mov r0, #4\n    add r1, r0, #0\n    bl Heap_Alloc\n    ldr r1, [r5, #4]\n    mov r2, #4\n    str r0, [r1, #0x24]\n    ldr r0, [r5, #4]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    bl MI_CpuFill8\n    ldr r0, [r5, #4]\n    ldr r0, [r0, #0x24]\n    str r5, [r0]\n    ldr r0, [sp]\n    ldrb r0, [r0, #2]\n    cmp r0, #0\n    beq _02256370\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0xc7\n    bl Field3dObjectList_GetRenderObjectByID\n    add r7, r0, #0\n    ldr r0, [r5, #0x54]\n    mov r1, #0xc7\n    bl ov01_021E8BAC\n    add r6, r0, #0\n    ldr r4, _022563AC ; =0x00000000\n    beq _02256370\n    ldr r0, [r5, #0x54]\n    add r1, r7, #0\n    mov r2, #0xc7\n    add r3, r4, #0\n    bl ov01_021E8A8C\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r6\n    blo _0225635A\n    ldr r0, [sp]\n    ldrb r0, [r0, #3]\n    cmp r0, #0\n    beq _022563AA\n    add r0, r5, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    mov r1, #0xc8\n    bl Field3dObjectList_GetRenderObjectByID\n    add r7, r0, #0\n    ldr r0, [r5, #0x54]\n    mov r1, #0xc8\n    bl ov01_021E8BAC\n    add r6, r0, #0\n    ldr r4, _022563AC ; =0x00000000\n    beq _022563AA\n    ldr r0, [r5, #0x54]\n    add r1, r7, #0\n    mov r2, #0xc8\n    add r3, r4, #0\n    bl ov01_021E8A8C\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r6\n    blo _02256394\n    pop {r3, r4, r5, r6, r7, pc}\n    _022563AC: .word 0x00000000"
    );
    #endif
}

void ov04_022563B0(void) {
    Heap_Free(0);
}

void ov04_022563C4(void) {
    /* Original at 0x022563C4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #3\n    bl Save_Gymmick_AssertMagic_GetData\n    ldrb r2, [r0, #2]\n    cmp r2, #0\n    beq _022563E6\n    ldrb r1, [r0, #3]\n    cmp r1, #0\n    beq _022563E6\n    mov r0, #4\n    pop {r4, pc}\n    cmp r2, #0\n    beq _022563F8\n    ldrb r0, [r0, #1]\n    cmp r4, r0\n    bne _022563F4\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #3\n    pop {r4, pc}\n    ldrb r0, [r0]\n    cmp r4, r0\n    bne _02256402\n    mov r0, #1\n    b _02256404\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    pop {r4, pc}"
    );
    #endif
}

void ov04_0225640C(void) {
    /* Original at 0x0225640C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    str r2, [sp]\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #3\n    bl Save_Gymmick_AssertMagic_GetData\n    add r6, r0, #0\n    mov r0, #0xb\n    mov r1, #0x18\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    cmp r7, #0\n    beq _02256438\n    cmp r7, #1\n    beq _0225646A\n    b _02256494\n    mov r0, #0xc7\n    str r0, [r4, #0x10]\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _02256456\n    mov r0, #2\n    strb r0, [r4, #0x16]\n    ldr r0, [r5, #0x10]\n    ldr r1, _0225649C ; =ov04_022564A0\n    add r2, r4, #0\n    bl TaskManager_Call\n    mov r0, #0\n    strb r0, [r6, #2]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    strb r0, [r4, #0x16]\n    ldr r0, [r5, #0x10]\n    ldr r1, _0225649C ; =ov04_022564A0\n    add r2, r4, #0\n    bl TaskManager_Call\n    mov r0, #1\n    strb r0, [r6, #2]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0xc8\n    str r0, [r4, #0x10]\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _02256480\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    strb r0, [r4, #0x16]\n    ldr r0, [r5, #0x10]\n    ldr r1, _0225649C ; =ov04_022564A0\n    add r2, r4, #0\n    bl TaskManager_Call\n    mov r0, #1\n    strb r0, [r6, #3]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0225649C: .word ov04_022564A0"
    );
    #endif
}

void ov04_022564A0(void) {
    /* Original at 0x022564A0 */
    /* Requires manual decompilation - 183 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r6, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    add r0, r5, #0\n    bl TaskManager_GetStatePtr\n    str r0, [sp, #0xc]\n    ldr r0, [r0]\n    cmp r0, #6\n    bls _022564C4\n    b _02256642\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022564D0: ; jump table\n    ldr r0, [r4, #0x10]\n    cmp r0, #0xc7\n    ldr r0, [r6, #0x3c]\n    bne _02256502\n    mov r1, #3\n    bl MapObjectManager_GetFirstActiveObjectByID\n    str r0, [r4, #4]\n    ldr r0, [r6, #0x3c]\n    mov r1, #4\n    bl MapObjectManager_GetFirstActiveObjectByID\n    str r0, [r4, #8]\n    ldr r0, [r6, #0x3c]\n    mov r1, #5\n    bl MapObjectManager_GetFirstActiveObjectByID\n    b _0225651C\n    mov r1, #0\n    bl MapObjectManager_GetFirstActiveObjectByID\n    str r0, [r4, #4]\n    ldr r0, [r6, #0x3c]\n    mov r1, #1\n    bl MapObjectManager_GetFirstActiveObjectByID\n    str r0, [r4, #8]\n    ldr r0, [r6, #0x3c]\n    mov r1, #2\n    bl MapObjectManager_GetFirstActiveObjectByID\n    str r0, [r4, #0xc]\n    mov r0, #0\n    strh r0, [r4, #0x14]\n    ldrb r1, [r4, #0x16]\n    ldr r0, [sp, #0xc]\n    str r1, [r0]\n    b _02256642\n    ldr r0, [r4, #4]\n    mov r1, #0x16\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4, #8]\n    mov r1, #0x16\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4, #0xc]\n    mov r1, #0x17\n    bl MapObject_SetHeldMovement\n    ldr r0, [sp, #0xc]\n    mov r1, #3\n    str r1, [r0]\n    b _02256642\n    ldr r0, [r4, #4]\n    mov r1, #0x17\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4, #8]\n    mov r1, #0x17\n    bl MapObject_SetHeldMovement\n    ldr r0, [r4, #0xc]\n    mov r1, #0x16\n    bl MapObject_SetHeldMovement\n    ldr r0, [sp, #0xc]\n    mov r1, #3\n    str r1, [r0]\n    b _02256642\n    mov r5, #0\n    lsl r0, r5, #2\n    add r0, r4, r0\n    ldr r0, [r0, #4]\n    bl MapObject_AreBitsSetForMovementScriptInit\n    cmp r0, #0\n    beq _02256584\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #3\n    blo _0225656C\n    cmp r5, #3\n    bne _02256642\n    ldrh r0, [r4, #0x14]\n    add r0, r0, #1\n    strh r0, [r4, #0x14]\n    ldrh r0, [r4, #0x14]\n    cmp r0, #2\n    blo _022565AA\n    ldrb r0, [r4, #0x16]\n    cmp r0, #1\n    bne _022565A2\n    ldr r0, [sp, #0xc]\n    mov r1, #4\n    str r1, [r0]\n    b _02256642\n    ldr r0, [sp, #0xc]\n    mov r1, #5\n    str r1, [r0]\n    b _02256642\n    ldrb r1, [r4, #0x16]\n    ldr r0, [sp, #0xc]\n    str r1, [r0]\n    b _02256642\n    add r0, r6, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    ldr r1, [r4, #0x10]\n    bl Field3dObjectList_GetRenderObjectByID\n    str r0, [sp, #8]\n    ldr r0, [r6, #0x54]\n    ldr r1, [r4, #0x10]\n    bl ov01_021E8BAC\n    add r7, r0, #0\n    ldr r5, _02256648 ; =0x00000000\n    beq _022565E4\n    ldr r0, [r6, #0x54]\n    ldr r1, [sp, #8]\n    ldr r2, [r4, #0x10]\n    add r3, r5, #0\n    bl ov01_021E8A8C\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, r7\n    blo _022565CE\n    ldr r0, _0225664C ; =SEQ_SE_DP_UG_020\n    bl PlaySE\n    ldr r0, [sp, #0xc]\n    mov r1, #6\n    str r1, [r0]\n    b _02256642\n    add r0, r6, #0\n    add r0, #0xc0\n    ldr r0, [r0]\n    ldr r1, [r4, #0x10]\n    bl Field3dObjectList_GetRenderObjectByID\n    str r0, [sp, #4]\n    ldr r0, [r6, #0x54]\n    ldr r1, [r4, #0x10]\n    bl ov01_021E8BAC\n    add r7, r0, #0\n    ldr r5, _02256648 ; =0x00000000\n    beq _02256628\n    ldr r0, [r6, #0x54]\n    ldr r3, [sp, #4]\n    str r0, [sp]\n    ldr r0, [r4, #0x10]\n    add r1, r5, #0\n    mov r2, #0\n    bl ov01_021E8970\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, r7\n    blo _0225660E\n    ldr r0, _0225664C ; =SEQ_SE_DP_UG_020\n    bl PlaySE\n    ldr r0, [sp, #0xc]\n    mov r1, #6\n    str r1, [r0]\n    b _02256642\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02256648: .word 0x00000000\n    _0225664C: .word SEQ_SE_DP_UG_020"
    );
    #endif
}

void ov04_02256650(void) {
    /* Original at 0x02256650 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #7\n    bl Save_Gymmick_AssertMagic_GetData\n    ldr r1, _02256698 ; =0x00001DD8\n    mov r0, #4\n    bl Heap_Alloc\n    ldr r1, [r4, #4]\n    ldr r2, _02256698 ; =0x00001DD8\n    str r0, [r1, #0x24]\n    ldr r0, [r4, #4]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    bl MI_CpuFill8\n    ldr r0, [r4, #4]\n    mov r1, #4\n    ldr r4, [r0, #0x24]\n    add r0, r4, #0\n    bl ov04_02256758\n    mov r2, #0\n    ldr r0, _0225669C ; =0x00001DB6\n    sub r1, r2, #1\n    add r2, r2, #1\n    strh r1, [r4, r0]\n    add r4, #0xc\n    cmp r2, #3\n    blt _0225668C\n    pop {r4, pc}\n    _02256698: .word 0x00001DD8\n    _0225669C: .word 0x00001DB6"
    );
    #endif
}

void ov04_022566A0(void) {
    /* Original at 0x022566A0 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    ldr r0, [r0, #4]\n    ldr r5, [r0, #0x24]\n    add r0, r5, #0\n    bl ov04_0225686C\n    ldr r6, _022566E4 ; =0x00001DB4\n    mov r4, #0\n    mov r7, #0xc\n    add r0, r4, #0\n    mul r0, r7\n    add r1, r5, r0\n    ldrh r0, [r1, r6]\n    cmp r0, #0\n    beq _022566C8\n    ldr r0, _022566E8 ; =0x00001DBC\n    ldr r0, [r1, r0]\n    bl SysTask_Destroy\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #3\n    blo _022566B4\n    add r0, r5, #0\n    bl Heap_Free\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #4]\n    str r1, [r0, #0x24]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022566E4: .word 0x00001DB4\n    _022566E8: .word 0x00001DBC"
    );
    #endif
}

void ov04_022566EC(void) {
    /* Original at 0x022566EC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, [r6, #4]\n    ldr r5, [r0, #0x24]\n    add r0, r1, #0\n    add r1, r2, #0\n    bl ov04_022568F0\n    add r4, r0, #0\n    bpl _0225670A\n    mov r0, #SEQ_SE_DP_WALL_HIT>>8\n    lsl r0, r0, #8\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    ldr r0, _0225672C ; =0x00001DB4\n    add r1, r4, #0\n    add r0, r5, r0\n    bl ov04_02256920\n    cmp r0, #0\n    bne _0225672A\n    lsl r2, r4, #0x18\n    add r0, r5, #0\n    add r1, r6, #0\n    lsr r2, r2, #0x18\n    bl ov04_02256950\n    ldr r0, _02256730 ; =SEQ_SE_GS_TOUMEINAKABEHIT\n    bl PlaySE\n    pop {r4, r5, r6, pc}\n    _0225672C: .word 0x00001DB4\n    _02256730: .word SEQ_SE_GS_TOUMEINAKABEHIT"
    );
    #endif
}

void ov04_02256734(void) {
    /* Original at 0x02256734 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r4, [r5, #4]\n    mov r1, #4\n    add r0, r4, #4\n    bl ov04_02256A54\n    cmp r0, #0\n    beq _0225674E\n    add r0, r5, #0\n    bl ov04_02256B3C\n    pop {r3, r4, r5, pc}\n    add r4, #0x54\n    add r0, r4, #0\n    bl Field3dObject_Draw\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov04_02256758(void) {
    /* Original at 0x02256758 */
    /* Requires manual decompilation - 130 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    mov r2, #0x20\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    bl HeapExp_FndInitAllocator\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x14]\n    mov r1, #0x9a\n    add r4, r0, #0\n    lsl r1, r1, #2\n    mul r4, r1\n    ldr r0, [sp, #8]\n    mov r1, #0\n    add r0, r0, r4\n    add r0, #0xd4\n    str r1, [r0]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #8]\n    lsl r0, r0, #4\n    add r1, #0x10\n    str r0, [sp, #0x10]\n    add r0, r1, r0\n    ldr r2, [sp, #0x14]\n    ldr r3, [sp, #0xc]\n    mov r1, #0xf8\n    bl Field3dModel_LoadFromFilesystem\n    mov r0, #0\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #8]\n    add r0, #0xd8\n    add r0, r0, r4\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #8]\n    str r0, [sp, #0x24]\n    add r0, #0x10\n    str r0, [sp, #0x24]\n    ldr r1, [sp, #0x1c]\n    mov r0, #0xcc\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    add r0, r0, r2\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x18]\n    add r5, r1, #0\n    str r1, [r0, r2]\n    ldr r0, [sp, #0x20]\n    add r4, r0, #4\n    ldr r0, [sp, #0xc]\n    add r3, r5, #1\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    mov r6, #0xc\n    str r0, [sp, #4]\n    mov r0, #0x14\n    mul r6, r3\n    ldr r3, [sp, #0x14]\n    mul r0, r5\n    ldr r2, [sp, #0x24]\n    ldr r1, [sp, #0x10]\n    add r0, r4, r0\n    add r1, r2, r1\n    mov r2, #0xf8\n    add r3, r6, r3\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #4\n    blo _022567C2\n    ldr r0, [sp, #0x20]\n    ldr r2, [sp, #0x24]\n    ldr r1, [sp, #0x10]\n    add r0, #0x54\n    add r1, r2, r1\n    bl Field3dObject_InitFromModel\n    ldr r0, [sp, #0x20]\n    mov r5, #0\n    add r7, r0, #0\n    add r4, r0, #4\n    add r7, #0x54\n    mov r0, #0x14\n    add r6, r5, #0\n    mul r6, r0\n    add r0, r7, #0\n    add r1, r4, r6\n    bl Field3dObject_AddAnimation\n    add r0, r4, r6\n    mov r1, #0\n    bl Field3dModelAnimation_FrameSet\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #4\n    blo _02256808\n    mov r1, #0\n    add r0, sp, #0x28\n    str r1, [r0]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x28]\n    ldr r2, [sp, #0x2c]\n    ldr r3, [sp, #0x30]\n    add r0, #0x54\n    bl Field3dObject_SetPosEx\n    ldr r0, [sp, #0x20]\n    mov r1, #0\n    add r0, #0x54\n    str r0, [sp, #0x20]\n    bl Field3dObject_SetActiveFlag\n    ldr r0, [sp, #0x1c]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x1c]\n    cmp r0, #3\n    blo _022567A8\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    cmp r0, #0xc\n    blo _0225676A\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_0225686C(void) {
    /* Original at 0x0225686C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    str r0, [sp, #0xc]\n    add r0, #0x10\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    str r0, [sp, #0x10]\n    add r0, #0xd8\n    str r0, [sp, #0x10]\n    mov r7, #0x14\n    ldr r0, [sp, #8]\n    lsl r1, r0, #4\n    ldr r0, [sp, #0xc]\n    add r0, r0, r1\n    bl Field3dModel_Unload\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r1, [sp, #8]\n    mov r0, #0x9a\n    lsl r0, r0, #2\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #0x10]\n    add r0, r0, r2\n    str r0, [sp]\n    ldr r1, [sp, #4]\n    mov r0, #0xcc\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp]\n    mov r5, #0\n    add r0, r0, r2\n    add r4, r0, #4\n    add r0, r5, #0\n    mul r0, r7\n    add r0, r4, r0\n    add r1, r6, #0\n    bl Field3dModelAnimation_Unload\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #4\n    blo _022568B8\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    cmp r0, #3\n    blo _022568A8\n    ldr r0, [sp, #8]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    cmp r0, #0xc\n    blo _02256888\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_022568F0(void) {
    /* Original at 0x022568F0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, _0225691C ; =ov04_0225766C\n    mov r3, #0\n    ldr r2, [r4]\n    cmp r0, r2\n    bne _02256908\n    ldr r2, [r4, #4]\n    cmp r1, r2\n    bne _02256908\n    add r0, r3, #0\n    pop {r3, r4}\n    bx lr\n    add r2, r3, #1\n    lsl r2, r2, #0x10\n    asr r3, r2, #0x10\n    add r4, #0x14\n    cmp r3, #0x3c\n    blt _022568F6\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4}\n    bx lr\n    _0225691C: .word ov04_0225766C"
    );
    #endif
}

void ov04_02256920(void) {
    /* Original at 0x02256920 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    mov r2, #0\n    mov r3, #2\n    mov r4, #0xc\n    add r5, r2, #0\n    mul r5, r4\n    add r6, r0, r5\n    ldrh r5, [r0, r5]\n    cmp r5, #0\n    beq _02256940\n    ldrsh r5, [r6, r3]\n    cmp r1, r5\n    bne _02256940\n    mov r0, #1\n    pop {r3, r4, r5, r6}\n    bx lr\n    add r2, r2, #1\n    lsl r2, r2, #0x18\n    lsr r2, r2, #0x18\n    cmp r2, #3\n    blo _02256928\n    mov r0, #0\n    pop {r3, r4, r5, r6}\n    bx lr"
    );
    #endif
}

void ov04_02256950(void) {
    /* Original at 0x02256950 */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r7, r2, #0\n    add r2, r6, #0\n    add r2, #0xd0\n    str r1, [sp]\n    ldr r1, _02256A38 ; =0x00001DB4\n    ldr r3, [r2]\n    mov r2, #0xc\n    add r1, r6, r1\n    mul r2, r3\n    add r5, r1, r2\n    ldrh r1, [r1, r2]\n    cmp r1, #0\n    beq _02256978\n    bl GF_AssertFail\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r7, #0\n    bl ov04_02256AC4\n    mov r0, #1\n    strh r0, [r5]\n    mov r0, #0x14\n    add r4, r7, #0\n    mul r4, r0\n    ldr r1, _02256A3C ; =ov04_02257674\n    add r0, r6, #0\n    ldrh r1, [r1, r4]\n    add r0, #0xd4\n    strh r7, [r5, #2]\n    lsl r1, r1, #0x18\n    lsr r2, r1, #0x18\n    mov r1, #0x9a\n    lsl r1, r1, #2\n    mul r1, r2\n    add r0, r0, r1\n    bl ov04_02256A90\n    str r0, [r5, #4]\n    ldr r0, _02256A40 ; =ov04_02256734\n    add r1, r5, #0\n    mov r2, #0\n    bl SysTask_CreateOnMainQueue\n    str r0, [r5, #8]\n    ldr r0, [r5, #4]\n    mov r1, #1\n    add r0, #0x54\n    bl Field3dObject_SetActiveFlag\n    add r1, sp, #4\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldr r0, [sp]\n    ldr r0, [r0, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r1, sp, #4\n    bl MapObject_CopyPositionVector\n    ldr r0, _02256A44 ; =ov04_0225766C\n    ldr r2, _02256A48 ; =ov04_02257677\n    ldr r0, [r0, r4]\n    ldrsb r2, [r2, r4]\n    lsl r1, r0, #4\n    ldr r0, _02256A4C ; =ov04_02257676\n    add r1, #8\n    ldrsb r0, [r0, r4]\n    lsl r2, r2, #4\n    lsl r0, r0, #4\n    add r0, r1, r0\n    lsl r1, r0, #0xc\n    ldr r0, _02256A50 ; =ov04_02257670\n    str r1, [sp, #4]\n    ldr r0, [r0, r4]\n    lsl r0, r0, #4\n    add r0, #8\n    add r0, r0, r2\n    lsl r3, r0, #0xc\n    str r3, [sp, #0xc]\n    ldr r0, [r5, #4]\n    ldr r2, [sp, #8]\n    add r0, #0x54\n    bl Field3dObject_SetPosEx\n    mov r4, #0\n    mov r7, #0x14\n    ldr r0, [r5, #4]\n    add r1, r0, #4\n    add r0, r4, #0\n    mul r0, r7\n    add r0, r1, r0\n    mov r1, #0\n    bl Field3dModelAnimation_FrameSet\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _02256A08\n    add r0, r6, #0\n    add r0, #0xd0\n    ldr r0, [r0]\n    mov r1, #3\n    add r0, r0, #1\n    bl _s32_div_f\n    add r6, #0xd0\n    str r1, [r6]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02256A38: .word 0x00001DB4\n    _02256A3C: .word ov04_02257674\n    _02256A40: .word ov04_02256734\n    _02256A44: .word ov04_0225766C\n    _02256A48: .word ov04_02257677\n    _02256A4C: .word ov04_02257676\n    _02256A50: .word ov04_02257670"
    );
    #endif
}

void ov04_02256A54(void) {
    /* Original at 0x02256A54 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #0\n    add r6, r1, #0\n    add r7, r0, #0\n    add r4, r5, #0\n    cmp r6, #0\n    bls _02256A84\n    mov r0, #0x14\n    mul r0, r4\n    mov r1, #1\n    add r0, r7, r0\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndCheck\n    cmp r0, #0\n    beq _02256A7A\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r6\n    blo _02256A62\n    cmp r5, r6\n    bne _02256A8C\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02256A90(void) {
    /* Original at 0x02256A90 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0xcc\n    mul r0, r1\n    add r0, r5, r0\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    beq _02256AA6\n    bl GF_AssertFail\n    ldr r1, [r5]\n    mov r0, #0xcc\n    add r6, r1, #0\n    mul r6, r0\n    add r4, r5, #4\n    mov r0, #1\n    str r0, [r4, r6]\n    ldr r0, [r5]\n    mov r1, #3\n    add r0, r0, #1\n    bl _s32_div_f\n    str r1, [r5]\n    add r0, r4, r6\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov04_02256AC4(void) {
    /* Original at 0x02256AC4 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #0x14\n    ldr r2, _02256B30 ; =ov04_0225766C\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp]\n    ldr r0, _02256B34 ; =0x00001DB4\n    ldr r5, _02256B34 ; =0x00001DB4\n    add r0, r4, r0\n    str r0, [sp, #8]\n    mov r7, #0xc\n    ldr r1, [sp]\n    ldr r0, [sp, #4]\n    add r0, r1, r0\n    mov r1, #0xc\n    ldrsb r1, [r0, r1]\n    cmp r1, #0\n    blt _02256B2C\n    mov r1, #0xc\n    ldrsb r6, [r0, r1]\n    mov r2, #0\n    add r1, r2, #0\n    mul r1, r7\n    add r0, r4, r1\n    ldrh r3, [r0, r5]\n    cmp r3, #0\n    beq _02256B14\n    ldr r3, _02256B38 ; =0x00001DB6\n    ldrsh r0, [r0, r3]\n    cmp r0, r6\n    bne _02256B14\n    ldr r0, [sp, #8]\n    add r0, r0, r1\n    bl ov04_02256B3C\n    b _02256B1E\n    add r0, r2, #1\n    lsl r0, r0, #0x18\n    lsr r2, r0, #0x18\n    cmp r2, #3\n    blo _02256AF6\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    cmp r0, #6\n    blo _02256AE2\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02256B30: .word ov04_0225766C\n    _02256B34: .word 0x00001DB4\n    _02256B38: .word 0x00001DB6"
    );
    #endif
}

void ov04_02256B3C(void) {
    /* Original at 0x02256B3C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    mov r1, #0\n    add r0, #0x54\n    bl Field3dObject_SetActiveFlag\n    ldr r0, [r4, #4]\n    mov r1, #0\n    str r1, [r0]\n    strh r1, [r4]\n    sub r0, r1, #1\n    strh r0, [r4, #2]\n    str r1, [r4, #4]\n    ldr r0, [r4, #8]\n    bl SysTask_Destroy\n    mov r0, #0\n    str r0, [r4, #8]\n    pop {r4, pc}"
    );
    #endif
}

void ov04_02256B64(void) {
    /* Original at 0x02256B64 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #8\n    bl Save_Gymmick_AssertMagic_GetData\n    ldr r1, _02256B9C ; =0x00000708\n    mov r0, #4\n    bl Heap_Alloc\n    ldr r1, [r4, #4]\n    ldr r2, _02256B9C ; =0x00000708\n    str r0, [r1, #0x24]\n    ldr r0, [r4, #4]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    bl MI_CpuFill8\n    ldr r0, [r4, #4]\n    mov r1, #4\n    ldr r0, [r0, #0x24]\n    bl ov04_02256C20\n    pop {r4, pc}\n    nop\n    _02256B9C: .word 0x00000708"
    );
    #endif
}

void ov04_02256BA0(void) {
    /* Original at 0x02256BA0 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    ldr r0, [r0, #4]\n    ldr r5, [r0, #0x24]\n    add r0, r5, #0\n    bl ov04_02256D00\n    mov r7, #0xa3\n    lsl r7, r7, #2\n    add r6, r7, #0\n    mov r4, #0\n    sub r6, #0x50\n    add r0, r4, #0\n    mul r0, r6\n    add r1, r5, r0\n    ldr r0, [r1, #0x54]\n    cmp r0, #0\n    beq _02256BCA\n    ldr r0, [r1, r7]\n    bl SysTask_Destroy\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #3\n    blo _02256BB8\n    add r0, r5, #0\n    bl Heap_Free\n    ldr r0, [sp]\n    mov r1, #0\n    ldr r0, [r0, #4]\n    str r1, [r0, #0x24]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02256BE4(void) {
    /* Original at 0x02256BE4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r3, r0, #0\n    ldr r0, [r3, #4]\n    add r2, r1, #0\n    ldr r4, [r0, #0x24]\n    mov r1, #0x8f\n    ldr r5, [r4, #0x50]\n    add r0, r4, #0\n    lsl r1, r1, #2\n    add r6, r5, #0\n    add r0, #0x54\n    mul r6, r1\n    ldr r1, [r0, r6]\n    cmp r1, #0\n    bne _02256C18\n    add r0, r0, r6\n    add r1, r3, #0\n    bl ov04_02256D68\n    ldr r0, [r4, #0x50]\n    mov r1, #3\n    add r0, r0, #1\n    bl _s32_div_f\n    str r1, [r4, #0x50]\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov04_02256C20(void) {
    /* Original at 0x02256C20 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    mov r2, #0x20\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    bl HeapExp_FndInitAllocator\n    ldr r4, [sp, #8]\n    ldr r6, _02256CFC ; =0x00000101\n    mov r5, #0\n    add r4, #0x10\n    lsl r0, r5, #4\n    ldr r3, [sp, #0xc]\n    add r0, r4, r0\n    add r1, r6, #0\n    add r2, r5, #4\n    bl Field3dModel_LoadFromFilesystem\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #4\n    blo _02256C36\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    mov r4, #0\n    add r2, r0, #0\n    str r4, [r0, #0x50]\n    mov r1, #0x8f\n    ldr r0, [sp, #0x14]\n    lsl r1, r1, #2\n    add r2, #0x54\n    mul r1, r0\n    add r7, r2, r1\n    str r4, [r2, r1]\n    str r4, [r7, #4]\n    add r6, r7, #0\n    ldr r0, [sp, #0x14]\n    mov r1, #0x8c\n    mul r1, r0\n    ldr r0, [sp, #8]\n    add r6, #0x1c\n    str r0, [sp, #0x1c]\n    add r0, #0x10\n    str r1, [sp, #0x18]\n    add r7, #8\n    str r0, [sp, #0x1c]\n    lsl r0, r4, #4\n    str r0, [sp, #0x10]\n    mov r0, #0x8c\n    add r5, r4, #0\n    mul r5, r0\n    ldr r0, [sp, #0xc]\n    ldr r2, [sp, #0x1c]\n    ldr r1, [sp, #0x10]\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    add r1, r2, r1\n    str r0, [sp, #4]\n    ldr r2, _02256CFC ; =0x00000101\n    add r0, r7, r5\n    add r3, r4, #0\n    bl Field3dModelAnimation_LoadFromFilesystem\n    ldr r2, [sp, #0x1c]\n    ldr r1, [sp, #0x10]\n    add r0, r6, r5\n    add r1, r2, r1\n    bl Field3dObject_InitFromModel\n    add r0, r6, r5\n    add r1, r7, r5\n    bl Field3dObject_AddAnimation\n    add r0, r7, r5\n    mov r1, #0\n    bl Field3dModelAnimation_FrameSet\n    mov r1, #0\n    add r0, sp, #0x20\n    str r1, [r0]\n    str r1, [r0, #4]\n    str r1, [r0, #8]\n    ldr r0, [sp, #0x18]\n    ldr r1, [sp, #0x20]\n    ldr r2, [sp, #0x24]\n    ldr r3, [sp, #0x28]\n    add r0, r6, r0\n    bl Field3dObject_SetPosEx\n    add r0, r6, r5\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _02256C80\n    ldr r0, [sp, #0x14]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x14]\n    cmp r0, #3\n    blo _02256C52\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02256CFC: .word 0x00000101"
    );
    #endif
}

void ov04_02256D00(void) {
    /* Original at 0x02256D00 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r5, r6, #0\n    mov r4, #0\n    add r5, #0x10\n    lsl r0, r4, #4\n    add r0, r5, r0\n    bl Field3dModel_Unload\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #4\n    blo _02256D0C\n    mov r0, #0\n    str r0, [sp]\n    add r0, r6, #0\n    str r0, [sp, #4]\n    add r0, #0x54\n    str r0, [sp, #4]\n    mov r7, #0x8c\n    ldr r1, [sp]\n    mov r0, #0x8f\n    lsl r0, r0, #2\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #4]\n    mov r5, #0\n    add r4, r0, r2\n    add r4, #8\n    add r0, r5, #0\n    mul r0, r7\n    add r0, r4, r0\n    add r1, r6, #0\n    bl Field3dModelAnimation_Unload\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #4\n    blo _02256D3E\n    ldr r0, [sp]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    cmp r0, #3\n    blo _02256D2C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02256D68(void) {
    /* Original at 0x02256D68 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r5, #1\n    sub r2, #0x40\n    add r7, r1, #0\n    str r5, [r4]\n    cmp r2, #3\n    bhi _02256D9A\n    add r0, r2, r2\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02256D86: ; jump table\n    mov r5, #2\n    b _02256DA2\n    mov r5, #0\n    b _02256DA2\n    mov r5, #3\n    b _02256DA2\n    bl GF_AssertFail\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r0, _02256DF8 ; =ov04_02256DFC\n    add r1, r4, #0\n    mov r2, #0\n    str r5, [r4, #4]\n    bl SysTask_CreateOnMainQueue\n    mov r1, #0x8e\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r6, r5, #0\n    mov r0, #0x8c\n    add r5, r4, #0\n    mul r6, r0\n    add r5, #0x1c\n    add r0, r5, r6\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldr r0, [r7, #0x40]\n    bl PlayerAvatar_GetMapObject\n    add r1, sp, #0\n    bl MapObject_CopyPositionVector\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r5, r6\n    bl Field3dObject_SetPosEx\n    add r4, #8\n    add r0, r4, r6\n    mov r1, #0\n    bl Field3dModelAnimation_FrameSet\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02256DF8: .word ov04_02256DFC"
    );
    #endif
}

void ov04_02256DFC(void) {
    /* Original at 0x02256DFC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    ldr r0, [r5, #4]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0x8c\n    add r4, r1, #0\n    mul r4, r0\n    add r0, r5, #0\n    add r0, #8\n    add r0, r0, r4\n    bl ov04_02256E48\n    cmp r0, #0\n    beq _02256E3E\n    add r0, r5, #0\n    add r0, #0x1c\n    add r0, r0, r4\n    mov r1, #0\n    bl Field3dObject_SetActiveFlag\n    mov r0, #0\n    str r0, [r5]\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl SysTask_Destroy\n    mov r0, #0x8e\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    add r5, #0x1c\n    add r0, r5, r4\n    bl Field3dObject_Draw\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov04_02256E48(void) {
    Field3dModelAnimation_FrameAdvanceAndCheck(0, 1, 1);
}

void ov04_02256E60(void) {
    /* Original at 0x02256E60 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #9\n    bl Save_Gymmick_AssertMagic_GetData\n    mov r1, #0x8e\n    mov r0, #4\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    ldr r1, [r5, #4]\n    mov r2, #0x8e\n    str r0, [r1, #0x24]\n    ldr r0, [r5, #4]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    lsl r2, r2, #2\n    bl MI_CpuFill8\n    ldr r0, [r5, #4]\n    ldr r4, [r0, #0x24]\n    add r0, r4, #0\n    str r5, [r4]\n    bl ov04_02256F50\n    ldr r0, _02256EAC ; =ov04_02257148\n    add r1, r4, #0\n    mov r2, #1\n    bl SysTask_CreateOnMainQueue\n    mov r1, #0x8d\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    _02256EAC: .word ov04_02257148"
    );
    #endif
}

void ov04_02256EB0(void) {
    /* Original at 0x02256EB0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    ldr r4, [r0, #0x24]\n    mov r0, #0x8d\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SysTask_Destroy\n    add r0, r4, #0\n    bl ov04_022570EC\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r0, [r5, #4]\n    mov r1, #0\n    str r1, [r0, #0x24]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov04_02256ED8(void) {
    /* Original at 0x02256ED8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, [r0, #4]\n    mov r5, #0\n    ldr r4, [r0, #0x24]\n    add r7, r5, #0\n    add r4, #0x4c\n    mov r6, #0xb4\n    add r0, r5, #0\n    mul r0, r6\n    add r0, r4, r0\n    add r1, r7, #0\n    bl Field3dObject_SetActiveFlag\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #3\n    blo _02256EE6\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02256F00(void) {
    /* Original at 0x02256F00 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r6, r1, #0\n    ldr r4, [r0, #0x24]\n    cmp r6, #3\n    bls _02256F14\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r0, #0x4c\n    bl Field3dObject_GetActiveFlag\n    cmp r0, #0\n    bne _02256F24\n    bl GF_AssertFail\n    add r0, r5, #0\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #9\n    bl Save_Gymmick_AssertMagic_GetData\n    str r6, [r0]\n    mov r0, #0x23\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    ldr r0, [r5, #0x10]\n    ldr r1, _02256F4C ; =ov04_02257308\n    add r2, r4, #0\n    bl TaskManager_Call\n    pop {r4, r5, r6, pc}\n    nop\n    _02256F4C: .word ov04_02257308"
    );
    #endif
}

void ov04_02256F50(void) {
    /* Original at 0x02256F50 */
    /* Requires manual decompilation - 195 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x6c\n    ldr r3, _022570E0 ; =ov04_02257B28\n    str r0, [sp, #8]\n    ldmia r3!, {r0, r1}\n    add r2, sp, #0x54\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r3, _022570E4 ; =ov04_02257B1C\n    add r2, sp, #0x48\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #4\n    str r0, [r2]\n    ldr r0, [sp, #8]\n    mov r2, #0x20\n    add r0, r0, #4\n    bl HeapExp_FndInitAllocator\n    ldr r4, [sp, #8]\n    mov r5, #0\n    add r4, #0x14\n    add r6, sp, #0x48\n    mov r7, #0xb4\n    add r0, r5, #0\n    lsl r2, r5, #2\n    mul r0, r7\n    ldr r2, [r6, r2]\n    add r0, r4, r0\n    mov r1, #0xae\n    mov r3, #4\n    bl Field3dModel_LoadFromFilesystem\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #3\n    blo _02256F88\n    mov r0, #0\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #8]\n    add r0, r0, #4\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #8]\n    str r0, [sp, #0x14]\n    add r0, #0x14\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #8]\n    str r0, [sp, #0x18]\n    add r0, #0x24\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    mov r5, #0\n    lsl r1, r0, #3\n    add r0, sp, #0x54\n    add r6, r0, r1\n    ldr r1, [sp, #0x10]\n    mov r0, #0xb4\n    add r7, r1, #0\n    mul r7, r0\n    ldr r0, [sp, #0x18]\n    add r4, r0, r7\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, [sp, #0x1c]\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #4]\n    mov r0, #0x14\n    lsl r3, r5, #2\n    mul r0, r5\n    ldr r3, [r6, r3]\n    add r0, r4, r0\n    add r1, r1, r7\n    mov r2, #0xae\n    bl Field3dModelAnimation_LoadFromFilesystem\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #2\n    blo _02256FD4\n    ldr r0, [sp, #0x10]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x10]\n    cmp r0, #3\n    blo _02256FBE\n    ldr r4, [sp, #8]\n    ldr r6, [sp, #8]\n    mov r5, #0\n    add r4, #0x4c\n    add r6, #0x14\n    mov r7, #0xb4\n    add r1, r5, #0\n    mul r1, r7\n    add r0, r4, r1\n    add r1, r6, r1\n    bl Field3dObject_InitFromModel\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #3\n    blo _02257014\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    ldr r7, [sp, #8]\n    str r0, [sp, #0x20]\n    add r0, #0x24\n    str r0, [sp, #0x20]\n    add r7, #0x4c\n    ldr r1, [sp, #0xc]\n    mov r0, #0xb4\n    add r6, r1, #0\n    mul r6, r0\n    ldr r0, [sp, #0x20]\n    mov r5, #0\n    add r4, r0, r6\n    mov r1, #0x14\n    mul r1, r5\n    add r0, r7, r6\n    add r1, r4, r1\n    bl Field3dObject_AddAnimation\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #2\n    blo _02257048\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0xc]\n    cmp r0, #3\n    blo _0225703A\n    ldr r6, [sp, #8]\n    ldr r7, [sp, #8]\n    mov r5, #0\n    add r6, #0x4c\n    add r7, #0x24\n    mov r0, #0xb4\n    add r4, r5, #0\n    mul r4, r0\n    add r0, r6, r4\n    mov r1, #1\n    bl Field3dObject_SetActiveFlag\n    add r0, r7, r4\n    mov r1, #2\n    mov r2, #0\n    bl ov04_022572E0\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #3\n    blo _02257076\n    ldr r4, _022570E8 ; =ov04_02257B40\n    add r3, sp, #0x24\n    mov r2, #4\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0225709E\n    ldr r0, [r4]\n    mov r5, #0\n    str r0, [r3]\n    ldr r0, [sp, #8]\n    add r4, sp, #0x24\n    add r0, #0x4c\n    str r0, [sp, #8]\n    mov r7, #0xc\n    mov r6, #0xb4\n    add r1, r5, #0\n    mul r1, r7\n    add r2, r5, #0\n    add r3, r4, r1\n    ldr r0, [sp, #8]\n    mul r2, r6\n    add r0, r0, r2\n    ldr r2, [r3, #4]\n    ldr r1, [r4, r1]\n    ldr r3, [r3, #8]\n    bl Field3dObject_SetPosEx\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #3\n    blo _022570B8\n    add sp, #0x6c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _022570E0: .word ov04_02257B28\n    _022570E4: .word ov04_02257B1C\n    _022570E8: .word ov04_02257B40"
    );
    #endif
}

void ov04_022570EC(void) {
    /* Original at 0x022570EC */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    str r0, [sp, #0xc]\n    add r0, #0x14\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    str r0, [sp, #8]\n    add r0, #0x24\n    str r0, [sp, #8]\n    mov r7, #0x14\n    ldr r1, [sp, #4]\n    mov r0, #0xb4\n    mul r0, r1\n    ldr r1, [sp, #8]\n    mov r4, #0\n    str r0, [sp]\n    add r5, r1, r0\n    add r0, r4, #0\n    mul r0, r7\n    add r0, r5, r0\n    add r1, r6, #4\n    bl Field3dModelAnimation_Unload\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, #2\n    blo _02257116\n    ldr r1, [sp, #0xc]\n    ldr r0, [sp]\n    add r0, r1, r0\n    bl Field3dModel_Unload\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    cmp r0, #3\n    blo _02257108\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02257148(void) {
    /* Original at 0x02257148 */
    /* Requires manual decompilation - 110 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r1, #0\n    add r1, sp, #4\n    mov r0, #0\n    strb r0, [r1]\n    strb r0, [r1, #1]\n    strb r0, [r1, #2]\n    ldr r0, [r7]\n    bl FieldSystem_GetSaveData\n    bl Save_GetGymmickPtr\n    mov r1, #9\n    bl Save_Gymmick_AssertMagic_GetData\n    ldr r0, [r0]\n    cmp r0, #3\n    bhi _0225719A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0225717A: ; jump table\n    mov r1, #1\n    add r0, sp, #4\n    strb r1, [r0]\n    b _0225719E\n    mov r1, #1\n    add r0, sp, #4\n    strb r1, [r0, #1]\n    b _0225719E\n    mov r1, #1\n    add r0, sp, #4\n    strb r1, [r0, #2]\n    b _0225719E\n    bl GF_AssertFail\n    add r4, r7, #0\n    mov r5, #0\n    add r4, #0x14\n    add r6, sp, #4\n    mov r0, #0xb4\n    mul r0, r5\n    ldrb r2, [r6, r5]\n    add r0, r4, r0\n    mov r1, #2\n    bl ov04_02257240\n    str r0, [sp]\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #3\n    blo _022571A6\n    add r4, r7, #0\n    mov r5, #0\n    add r4, #0x4c\n    mov r6, #0xb4\n    add r0, r5, #0\n    mul r0, r6\n    add r0, r4, r0\n    bl Field3dObject_Draw\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    cmp r5, #3\n    blo _022571C8\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _022571EA\n    mov r0, #0x23\n    mov r1, #0\n    lsl r0, r0, #4\n    str r1, [r7, r0]\n    mov r5, #0\n    add r6, sp, #8\n    add r7, #0x14\n    mov r0, #0xb4\n    mul r0, r5\n    add r0, r7, r0\n    add r0, #0x10\n    lsl r4, r5, #2\n    bl ov01_021FBF28\n    asr r1, r0, #0xb\n    lsr r1, r1, #0x14\n    add r1, r0, r1\n    asr r0, r1, #0xc\n    str r0, [r6, r4]\n    ldr r0, [r6, r4]\n    mov r1, #0x1e\n    bl _s32_div_f\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    str r1, [r6, r4]\n    cmp r5, #3\n    blo _022571F0\n    ldr r4, [sp, #0xc]\n    ldr r0, [sp, #8]\n    cmp r0, r4\n    beq _02257228\n    bl GF_AssertFail\n    ldr r5, [sp, #0x10]\n    cmp r4, r5\n    beq _02257232\n    bl GF_AssertFail\n    ldr r0, [sp, #8]\n    cmp r5, r0\n    beq _0225723C\n    bl GF_AssertFail\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02257240(void) {
    /* Original at 0x02257240 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r1, [sp, #4]\n    str r0, [sp]\n    str r2, [sp, #8]\n    add r0, #0xb0\n    ldr r0, [r0]\n    mov r6, #0\n    cmp r0, #0\n    beq _0225725C\n    mov r0, #0xf\n    lsl r0, r0, #0xe\n    str r0, [sp, #0xc]\n    b _02257262\n    mov r0, #0x1e\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    mov r5, #0\n    cmp r0, #0\n    bls _022572CE\n    ldr r4, [sp]\n    add r4, #0x10\n    mov r0, #0x14\n    add r7, r5, #0\n    mul r7, r0\n    add r0, r4, r7\n    bl ov01_021FBF28\n    mov r1, #1\n    lsl r1, r1, #0xc\n    add r1, r0, r1\n    ldr r0, [sp, #0xc]\n    cmp r1, r0\n    blt _02257294\n    cmp r5, #0\n    beq _02257292\n    cmp r6, #0\n    bne _02257292\n    bl GF_AssertFail\n    mov r6, #1\n    mov r1, #1\n    add r0, r4, r7\n    lsl r1, r1, #0xc\n    bl Field3dModelAnimation_FrameAdvanceAndLoop\n    cmp r6, #0\n    beq _022572C2\n    ldr r1, [sp]\n    ldr r0, [sp, #8]\n    add r1, #0xb0\n    str r0, [r1]\n    ldr r0, [sp]\n    add r0, #0xb0\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _022572BA\n    mov r1, #0x1e\n    lsl r1, r1, #0xc\n    b _022572BC\n    mov r1, #0\n    add r0, r4, r7\n    bl Field3dModelAnimation_FrameSet\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    ldr r0, [sp, #4]\n    cmp r5, r0\n    blo _0225726E\n    cmp r6, #0\n    beq _022572D8\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_022572E0(void) {
    /* Original at 0x022572E0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r0, #0\n    add r7, r2, #0\n    mov r4, #0\n    cmp r5, #0\n    bls _02257304\n    mov r0, #0x14\n    mul r0, r4\n    add r0, r6, r0\n    add r1, r7, #0\n    bl Field3dModelAnimation_FrameSet\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    cmp r4, r5\n    blo _022572EE\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov04_02257308(void) {
    /* Original at 0x02257308 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r0, r4, #0\n    bl TaskManager_GetEnvironment\n    mov r1, #0x23\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    cmp r0, #0\n    bne _02257324\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}
