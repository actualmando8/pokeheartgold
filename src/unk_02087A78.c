/* Decompiled from asm/unk_02087A78.s */
#include "global.h"

void sub_02087A78(void) {
    OverlayManager_GetArgs();
}

void sub_02087A84(void) {
    *(u32*)r0 = r1;
    ((u32*)r0)[4] = r2;
}

void sub_02087A8C(void) {
    /* Original at 0x02087A8C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r2, #1\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #3\n    mov r1, #0x7e\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    add r0, r5, #0\n    mov r1, #0x2c\n    mov r2, #0x7e\n    bl OverlayManager_CreateAndGetData\n    mov r1, #0\n    mov r2, #0x2c\n    add r4, r0, #0\n    bl MI_CpuFill8\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    str r0, [r4, #0x28]\n    ldr r0, [r0, #0xc]\n    ldr r1, _02087B00 ; =0x00004170\n    str r0, [r4, #0xc]\n    mov r0, #0x7e\n    bl Heap_Alloc\n    ldr r2, _02087B00 ; =0x00004170\n    str r0, [r4, #0x14]\n    mov r1, #0\n    bl MI_CpuFill8\n    add r2, r4, #0\n    ldr r1, [r4, #0x14]\n    ldr r0, _02087B04 ; =0x00000868\n    add r2, #0x18\n    str r2, [r1, r0]\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #0x14]\n    sub r0, #0x38\n    str r2, [r1, r0]\n    ldr r0, [r4, #0x14]\n    str r6, [r0]\n    ldr r4, [r4, #0x14]\n    ldr r1, [r4]\n    add r0, r4, #0\n    bl sub_02087FF8\n    ldr r1, _02087B08 ; =0x000006D8\n    ldr r1, [r4, r1]\n    lsl r1, r1, #2\n    add r2, r4, r1\n    ldr r1, _02087B0C ; =0x0000081C\n    str r0, [r2, r1]\n    pop {r4, r5, r6, pc}\n    nop\n    _02087B00: .word 0x00004170\n    _02087B04: .word 0x00000868\n    _02087B08: .word 0x000006D8\n    _02087B0C: .word 0x0000081C"
    );
    #endif
}

void sub_02087B10(void) {
    sub_02087A8C();
}

void sub_02087B1C(void) {
    sub_02087A8C();
}

void sub_02087B28(void) {
    sub_02087A8C();
}

void sub_02087B34(void) {
    sub_02087A8C();
}

void sub_02087B40(void) {
    sub_02087A8C();
}

void sub_02087B4C(void) {
    sub_02087A8C();
}

void sub_02087B58(void) {
    sub_02087A8C();
}

void sub_02087B64(void) {
    /* Original at 0x02087B64 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #0\n    beq _02087B7A\n    cmp r1, #1\n    beq _02087B98\n    b _02087BA8\n    mov r1, #0x7e\n    bl sub_02087BE8\n    cmp r0, #0\n    beq _02087BA8\n    ldr r0, [r4, #0x18]\n    cmp r0, #1\n    bne _02087B94\n    mov r0, #1\n    str r0, [r5]\n    mov r0, #0\n    str r0, [r4]\n    b _02087BA8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r1, #0x7e\n    bl sub_02087C38\n    cmp r0, #0\n    beq _02087BA8\n    mov r0, #0\n    str r0, [r5]\n    str r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02087BAC(void) {
    /* Original at 0x02087BAC */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl sub_0202FC48\n    cmp r0, #1\n    bne _02087BC2\n    bl sub_0202FC24\n    ldr r0, [r4, #0x14]\n    bl Heap_Free\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #1\n    mov r1, #0x7f\n    bl GF_SndHandleSetPlayerVolume\n    mov r0, #7\n    mov r1, #0x7f\n    bl GF_SndHandleSetPlayerVolume\n    mov r0, #0x7e\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02087BE8(void) {
    /* Original at 0x02087BE8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    add r2, r1, #0\n    cmp r0, #0\n    bne _02087C18\n    ldr r0, [r4, #0x14]\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02087C06\n    ldr r0, _02087C30 ; =_021028B4\n    add r1, r4, #0\n    bl OverlayManager_New\n    b _02087C0E\n    ldr r0, _02087C34 ; =_021028C4\n    add r1, r4, #0\n    bl OverlayManager_New\n    str r0, [r4, #8]\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02087C2C\n    ldr r0, [r4, #8]\n    bl OverlayManager_Run\n    cmp r0, #0\n    beq _02087C2C\n    ldr r0, [r4, #8]\n    bl OverlayManager_Delete\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _02087C30: .word _021028B4\n    _02087C34: .word _021028C4"
    );
    #endif
}

void sub_02087C38(void) {
    /* Original at 0x02087C38 */
    /* Requires manual decompilation - 196 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    cmp r0, #0\n    beq _02087C50\n    cmp r0, #1\n    beq _02087C6A\n    cmp r0, #2\n    beq _02087D0C\n    b _02087D5A\n    ldr r0, [r5, #0x14]\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02087C62\n    ldr r0, _02087DF4 ; =FS_OVERLAY_ID(OVY_39)\n    bl UnloadOverlayByID\n    bl UnloadOVY38\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02087DEC\n    add r0, r4, #0\n    mov r1, #0\n    bl BattleSetup_New\n    str r0, [r5, #0x10]\n    bl sub_0202FC48\n    cmp r0, #0\n    bne _02087C92\n    ldr r1, [r5, #0x14]\n    ldr r0, _02087DF8 ; =0x0000086C\n    add r2, sp, #4\n    ldr r0, [r1, r0]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0xc]\n    ldr r3, [r5, #0x10]\n    bl sub_0202FC90\n    b _02087C9E\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0xc]\n    bl sub_020304F0\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl BagCursor_New\n    mov r1, #0x43\n    ldr r2, [r5, #0x10]\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    ldr r0, [r5, #0xc]\n    bl Save_GameStats_Get\n    mov r1, #0x51\n    ldr r2, [r5, #0x10]\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    ldr r6, _02087DFC ; =FS_OVERLAY_ID(OVY_40)\n    mov r1, #2\n    add r0, r6, #0\n    bl HandleLoadOverlay\n    cmp r0, #1\n    bne _02087CDA\n    bl sub_0202FC5C\n    ldr r1, [r5, #0x10]\n    add r2, r4, #0\n    bl ov40_02244920\n    add r0, r6, #0\n    bl UnloadOverlayByID\n    ldr r1, [r5, #0x14]\n    ldr r0, _02087E00 ; =0x00000874\n    mov r2, #1\n    str r2, [r1, r0]\n    ldr r0, [sp, #4]\n    cmp r0, #1\n    beq _02087D04\n    mov r0, #0x43\n    ldr r1, [r5, #0x10]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, [r5, #0x10]\n    bl BattleSetup_Delete\n    mov r0, #0\n    str r0, [r5]\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02087DEC\n    mov r0, #1\n    mov r1, #0x7f\n    bl GF_SndHandleSetPlayerVolume\n    mov r0, #7\n    mov r1, #0x7f\n    bl GF_SndHandleSetPlayerVolume\n    mov r0, #1\n    bl sub_02005B68\n    ldr r0, [r5, #0x10]\n    add r0, #0x5d\n    ldrb r0, [r0]\n    bl sub_02087E34\n    cmp r0, #1\n    bne _02087D3C\n    ldr r1, _02087E04 ; =0x0000047B\n    mov r0, #5\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    b _02087D46\n    ldr r1, _02087E08 ; =0x0000045D\n    mov r0, #5\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    ldr r0, _02087E0C ; =gOverlayTemplate_Battle\n    ldr r1, [r5, #0x10]\n    add r2, r4, #0\n    bl OverlayManager_New\n    str r0, [r5, #8]\n    ldr r0, [r5]\n    add r0, r0, #1\n    str r0, [r5]\n    b _02087DEC\n    ldr r0, [r5, #8]\n    bl OverlayManager_Run\n    cmp r0, #0\n    beq _02087DEC\n    mov r0, #0x71\n    ldr r1, [r5, #0x10]\n    lsl r0, r0, #2\n    ldr r2, [r1, r0]\n    ldr r1, [r5, #0x14]\n    ldr r0, _02087E00 ; =0x00000874\n    str r2, [r1, r0]\n    ldr r2, [r5, #0x14]\n    ldr r1, [r2]\n    cmp r1, #0\n    beq _02087D88\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    bne _02087D88\n    add r0, r0, #4\n    ldr r0, [r2, r0]\n    mov r1, #1\n    strb r1, [r0]\n    mov r0, #0x43\n    ldr r1, [r5, #0x10]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, [r5, #0x10]\n    bl BattleSetup_Delete\n    ldr r0, [r5, #8]\n    bl OverlayManager_Delete\n    mov r0, #0\n    bl sub_02005B68\n    mov r0, #0\n    bl Sound_SetScene\n    ldr r0, [r5, #0x28]\n    ldr r1, [r0, #0x20]\n    ldr r1, [r1]\n    bl FieldBGM_GetEffective\n    add r4, r0, #0\n    ldr r0, [r5, #0x28]\n    ldr r1, [r0, #0x20]\n    ldr r1, [r1]\n    bl FieldBGM_GetForMapHeader\n    bl Sound_SetFieldBGM\n    mov r0, #0\n    add r1, r4, #0\n    bl sub_02055198\n    mov r0, #0\n    str r0, [r5]\n    ldr r0, [r5, #0x14]\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02087DE6\n    bl LoadOVY38\n    ldr r0, _02087DF4 ; =FS_OVERLAY_ID(OVY_39)\n    mov r1, #2\n    bl HandleLoadOverlay\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _02087DF4: .word FS_OVERLAY_ID(OVY_39)\n    _02087DF8: .word 0x0000086C\n    _02087DFC: .word FS_OVERLAY_ID(OVY_40)\n    _02087E00: .word 0x00000874\n    _02087E04: .word 0x0000047B\n    _02087E08: .word 0x0000045D\n    _02087E0C: .word gOverlayTemplate_Battle"
    );
    #endif
}

void sub_02087E10(void) {
    /* Original at 0x02087E10 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r0, #2\n    ldr r0, _02087E18 ; =_02110594\n    ldr r0, [r0, r1]\n    bx lr\n    _02087E18: .word _02110594"
    );
    #endif
}

void sub_02087E1C(void) {
    /* Original at 0x02087E1C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #0x83\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    bl Save_VarsFlags_Get\n    mov r1, #2\n    mov r2, #0x1b\n    bl Save_VarsFlags_FlypointFlagAction\n    pop {r3, pc}"
    );
    #endif
}

void sub_02087E34(void) {
    /* Original at 0x02087E34 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5}\n    sub sp, #0x14\n    ldr r5, _02087E6C ; =_021028A0\n    add r3, r0, #0\n    ldmia r5!, {r0, r1}\n    add r4, sp, #0\n    add r2, r4, #0\n    stmia r4!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r4!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r4]\n    ldr r0, [r2]\n    cmp r3, r0\n    bne _02087E5C\n    add sp, #0x14\n    mov r0, #1\n    pop {r3, r4, r5}\n    bx lr\n    add r1, r1, #1\n    add r2, r2, #4\n    cmp r1, #5\n    blo _02087E4E\n    mov r0, #0\n    add sp, #0x14\n    pop {r3, r4, r5}\n    bx lr\n    _02087E6C: .word _021028A0"
    );
    #endif
}
