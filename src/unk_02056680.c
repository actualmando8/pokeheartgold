/* Decompiled from asm/unk_02056680.s */
#include "global.h"

void sub_02056680(void) {
    /* Original at 0x02056680 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r4, r0, #0
    bl TaskManager_GetFieldSystem
    add r5, r0, #0
    add r0, r4, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldrh r0, [r4, #2]
    cmp r0, #0
    beq _020566A2
    cmp r0, #1
    beq _020566C8
    cmp r0, #2
    beq _020566F0
    b _020566F4
    bl ov01_021E90C0
    str r0, [r4, #0x18]
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetXCoord
    add r6, r0, #0
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetZCoord
    add r1, r0, #0
    ldr r2, [r4, #0x18]
    add r0, r6, #0
    bl ov01_021E90DC
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _020566F4
    ldr r0, [r5, #0x40]
    ldr r6, [r4, #0x18]
    bl PlayerAvatar_GetFacingDirection
    add r2, r0, #0
    lsl r2, r2, #0x18
    add r0, r5, #0
    add r1, r6, #0
    lsr r2, r2, #0x18
    bl ov01_021E971C
    cmp r0, #0
    beq _020566F4
    ldr r0, [r4, #0x18]
    bl ov01_021E90D4
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _020566F4
    mov r0, #1
    pop {r4, r5, r6, pc}
    mov r0, #0
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020566F8(void) {
    /* Original at 0x020566F8 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r4, r0, #0
    bl TaskManager_GetFieldSystem
    add r5, r0, #0
    add r0, r4, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldrh r0, [r4, #2]
    cmp r0, #3
    bhi _020567AE
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _0205671C: ; jump table
    mov r0, #1
    bl ov01_021E636C
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetMapObject
    add r6, r0, #0
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetFacingDirection
    cmp r0, #2
    bne _02056746
    add r0, r6, #0
    mov r1, #0xa
    bl MapObject_SetHeldMovement
    b _02056758
    cmp r0, #3
    bne _02056754
    add r0, r6, #0
    mov r1, #0xb
    bl MapObject_SetHeldMovement
    b _02056758
    bl GF_AssertFail
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _020567AE
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetMapObject
    add r6, r0, #0
    bl MapObject_IsMovementPaused
    cmp r0, #1
    bne _020567AE
    add r0, r6, #0
    bl MapObject_ClearHeldMovementIfActive
    add r0, r5, #0
    bl FollowMon_IsActive
    cmp r0, #0
    beq _02056792
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetFacingDirection
    add r1, r0, #0
    lsl r1, r1, #0x18
    add r0, r5, #0
    lsr r1, r1, #0x18
    bl ov01_02205790
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _020567AE
    bl IsPaletteFadeFinished
    cmp r0, #0
    beq _020567AE
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _020567AE
    mov r0, #1
    pop {r4, r5, r6, pc}
    mov r0, #0
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020567B4(void) {
    /* Original at 0x020567B4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r6, r0, #0
    bl TaskManager_GetFieldSystem
    add r5, r0, #0
    add r0, r6, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetMapObject
    ldrh r0, [r4, #2]
    cmp r0, #0
    beq _020567D8
    cmp r0, #1
    beq _0205680A
    b _02056814
    bl ov01_021E90C0
    str r0, [r4, #0x18]
    add r7, r0, #0
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetXCoord
    str r0, [sp]
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetZCoord
    add r1, r0, #0
    ldr r0, [sp]
    add r2, r7, #0
    bl ov01_021E90DC
    ldr r1, _02056818 ; =ov01_021E9C40
    add r0, r6, #0
    add r2, r7, #0
    bl TaskManager_Call
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056814
    ldr r0, [r4, #0x18]
    bl ov01_021E90D4
    mov r0, #1
    pop {r3, r4, r5, r6, r7, pc}
    mov r0, #0
    pop {r3, r4, r5, r6, r7, pc}
    _02056818: .word ov01_021E9C40"
    );
    #endif
}

void sub_0205681C(void) {
    /* Original at 0x0205681C */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r4, r0, #0
    bl TaskManager_GetFieldSystem
    add r5, r0, #0
    add r0, r4, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldrh r0, [r4, #2]
    cmp r0, #5
    bhi _02056932
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _02056842: ; jump table
    mov r0, #0xb
    mov r1, #8
    bl Heap_AllocAtEnd
    str r0, [r4, #0x18]
    mov r1, #0
    str r1, [r0]
    mov r0, #1
    bl ov01_021E636C
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056932
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetMapObject
    ldr r6, [r4, #0x18]
    add r7, r0, #0
    ldr r1, [r6]
    add r1, r1, #1
    str r1, [r6]
    add r1, sp, #0
    bl MapObject_CopyPositionVector
    mov r0, #2
    ldr r1, [sp, #4]
    lsl r0, r0, #0xc
    add r0, r1, r0
    str r0, [sp, #4]
    add r0, r7, #0
    add r1, sp, #0
    bl MapObject_SetPositionVector
    ldr r0, [r6]
    cmp r0, #0x10
    blt _02056932
    ldr r0, [r5, #0x40]
    mov r1, #1
    bl PlayerAvatar_ToggleAutomaticHeightUpdatingImmediate
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056932
    ldr r0, [r5, #0x40]
    mov r1, #1
    bl Field_PlayerAvatar_OrrTransitionFlags
    ldr r0, [r5, #0x40]
    bl Field_PlayerAvatar_ApplyTransitionFlags
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056932
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetMapObject
    add r5, r0, #0
    bl MapObject_AreBitsSetForMovementScriptInit
    cmp r0, #0
    beq _02056932
    add r0, r5, #0
    mov r1, #0xc
    bl MapObject_SetHeldMovement
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056932
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetMapObject
    bl MapObject_AreBitsSetForMovementScriptInit
    cmp r0, #0
    beq _02056932
    bl IsPaletteFadeFinished
    cmp r0, #0
    beq _02056932
    add r0, r5, #0
    bl FollowMon_IsActive
    cmp r0, #0
    beq _0205691E
    add r0, r5, #0
    mov r1, #0
    bl ov01_02205790
    add r0, r5, #0
    bl FollowMon_GetMapObject
    mov r1, #0x30
    bl sub_0205FC94
    add r0, r5, #0
    bl FollowMon_GetMapObject
    mov r1, #1
    bl sub_02069DC8
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056932
    ldr r0, [r4, #0x18]
    bl Heap_Free
    add sp, #0xc
    mov r0, #1
    pop {r4, r5, r6, r7, pc}
    mov r0, #0
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02056938(void) {
    /* Original at 0x02056938 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r4, r0, #0
    bl TaskManager_GetFieldSystem
    add r5, r0, #0
    add r0, r4, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldrh r0, [r4, #2]
    cmp r0, #5
    bhi _02056A4E
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _0205695E: ; jump table
    mov r0, #0xb
    mov r1, #8
    bl Heap_AllocAtEnd
    str r0, [r4, #0x18]
    mov r1, #0
    str r1, [r0]
    mov r0, #1
    bl ov01_021E636C
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056A4E
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetMapObject
    ldr r6, [r4, #0x18]
    add r7, r0, #0
    ldr r1, [r6]
    add r1, r1, #1
    str r1, [r6]
    add r1, sp, #0
    bl MapObject_CopyPositionVector
    mov r0, #2
    ldr r1, [sp, #4]
    lsl r0, r0, #0xc
    sub r0, r1, r0
    str r0, [sp, #4]
    add r0, r7, #0
    add r1, sp, #0
    bl MapObject_SetPositionVector
    ldr r0, [r6]
    cmp r0, #0x10
    blt _02056A4E
    ldr r0, [r5, #0x40]
    mov r1, #1
    bl PlayerAvatar_ToggleAutomaticHeightUpdatingImmediate
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056A4E
    ldr r0, [r5, #0x40]
    mov r1, #1
    bl Field_PlayerAvatar_OrrTransitionFlags
    ldr r0, [r5, #0x40]
    bl Field_PlayerAvatar_ApplyTransitionFlags
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056A4E
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetMapObject
    add r5, r0, #0
    bl MapObject_AreBitsSetForMovementScriptInit
    cmp r0, #0
    beq _02056A4E
    add r0, r5, #0
    mov r1, #0xd
    bl MapObject_SetHeldMovement
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056A4E
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetMapObject
    bl MapObject_AreBitsSetForMovementScriptInit
    cmp r0, #0
    beq _02056A4E
    bl IsPaletteFadeFinished
    cmp r0, #0
    beq _02056A4E
    add r0, r5, #0
    bl FollowMon_IsActive
    cmp r0, #0
    beq _02056A3A
    add r0, r5, #0
    mov r1, #1
    bl ov01_02205790
    add r0, r5, #0
    bl FollowMon_GetMapObject
    mov r1, #0x30
    bl sub_0205FC94
    add r0, r5, #0
    bl FollowMon_GetMapObject
    mov r1, #1
    bl sub_02069DC8
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    b _02056A4E
    ldr r0, [r4, #0x18]
    bl Heap_Free
    add sp, #0xc
    mov r0, #1
    pop {r4, r5, r6, r7, pc}
    mov r0, #0
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02056A54(void) {
    /* Original at 0x02056A54 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}
    sub sp, #0x34
    add r4, r0, #0
    ldr r0, [r4, #0x24]
    bl Camera_GetCurrentTarget
    add r5, r0, #0
    ldr r1, [r4, #0x24]
    add r0, sp, #4
    bl Camera_GetLookAtCamTarget
    add r6, sp, #4
    add r3, sp, #0x10
    ldmia r6!, {r0, r1}
    add r2, r3, #0
    stmia r3!, {r0, r1}
    ldr r0, [r6]
    add r1, r5, #0
    str r0, [r3]
    add r0, r2, #0
    add r2, sp, #0x1c
    bl VEC_Subtract
    ldr r0, [r4, #0x40]
    bl PlayerAvatar_GetFacingDirection
    add r5, r0, #0
    ldr r0, [r4, #0x40]
    add r1, sp, #0x28
    bl PlayerAvatar_CopyPositionVector
    cmp r5, #3
    bne _02056AA2
    mov r0, #1
    ldr r1, [sp, #0x28]
    lsl r0, r0, #0x10
    sub r0, r1, r0
    str r0, [sp, #0x28]
    b _02056AAC
    mov r0, #1
    ldr r1, [sp, #0x28]
    lsl r0, r0, #0x10
    add r0, r1, r0
    str r0, [sp, #0x28]
    mov r0, #0
    str r0, [sp]
    ldr r1, [sp, #0x2c]
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0x30]
    add r0, r4, #0
    bl sub_02054940
    str r0, [sp, #0x2c]
    ldr r0, [r4, #0x40]
    add r1, sp, #0x28
    add r2, r5, #0
    bl sub_0205C810
    ldr r0, [r4, #0x40]
    bl PlayerAvatar_GetPositionVector
    ldr r1, [r4, #0x24]
    bl Camera_SetLookAtTargetAndRecalcPos
    ldr r0, [r4, #0x40]
    bl PlayerAvatar_GetPositionVector
    ldr r1, [r4, #0x24]
    bl Camera_SetFixedTarget
    ldr r1, [r4, #0x24]
    add r0, sp, #0x1c
    bl Camera_OffsetLookAtPosAndTarget
    add sp, #0x34
    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02056AEC(void) {
    /* Original at 0x02056AEC */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}
    sub sp, #0x34
    add r5, r0, #0
    ldr r0, [r5, #0x24]
    bl Camera_GetCurrentTarget
    add r4, r0, #0
    ldr r1, [r5, #0x24]
    add r0, sp, #4
    bl Camera_GetLookAtCamTarget
    add r6, sp, #4
    add r3, sp, #0x10
    ldmia r6!, {r0, r1}
    add r2, r3, #0
    stmia r3!, {r0, r1}
    ldr r0, [r6]
    add r1, r4, #0
    str r0, [r3]
    add r0, r2, #0
    add r2, sp, #0x1c
    bl VEC_Subtract
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetFacingDirection
    add r4, r0, #0
    ldr r0, [r5, #0x40]
    add r1, sp, #0x28
    bl PlayerAvatar_CopyPositionVector
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetXCoord
    add r6, r0, #0
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetZCoord
    add r2, r0, #0
    add r0, r5, #0
    add r1, r6, #0
    bl GetMetatileBehavior
    add r6, r0, #0
    bl sub_0205B810
    cmp r0, #0
    beq _02056B5A
    mov r0, #1
    ldr r1, [sp, #0x28]
    lsl r0, r0, #0x10
    add r0, r1, r0
    str r0, [sp, #0x28]
    mov r4, #2
    b _02056B70
    add r0, r6, #0
    bl sub_0205B81C
    cmp r0, #0
    beq _02056B70
    mov r0, #1
    ldr r1, [sp, #0x28]
    lsl r0, r0, #0x10
    sub r0, r1, r0
    str r0, [sp, #0x28]
    mov r4, #3
    mov r0, #0
    str r0, [sp]
    ldr r1, [sp, #0x2c]
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0x30]
    add r0, r5, #0
    bl sub_02054940
    str r0, [sp, #0x2c]
    ldr r0, [r5, #0x40]
    add r1, sp, #0x28
    add r2, r4, #0
    bl sub_0205C810
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetPositionVector
    ldr r1, [r5, #0x24]
    bl Camera_SetLookAtTargetAndRecalcPos
    ldr r0, [r5, #0x40]
    bl PlayerAvatar_GetPositionVector
    ldr r1, [r5, #0x24]
    bl Camera_SetFixedTarget
    ldr r1, [r5, #0x24]
    add r0, sp, #0x1c
    bl Camera_OffsetLookAtPosAndTarget
    add r0, r5, #0
    bl FollowMon_IsActive
    cmp r0, #0
    beq _02056BC2
    add r0, r5, #0
    bl FollowMon_GetMapObject
    add r1, r4, #0
    bl MapObject_SetFacingDirectionDirect
    add sp, #0x34
    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02056BC8(void) {
    /* Original at 0x02056BC8 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    sub sp, #0x30
    add r4, r0, #0
    ldr r0, [r4, #0x24]
    bl Camera_GetCurrentTarget
    add r5, r0, #0
    ldr r1, [r4, #0x24]
    add r0, sp, #0
    bl Camera_GetLookAtCamTarget
    add r6, sp, #0
    add r3, sp, #0xc
    ldmia r6!, {r0, r1}
    add r2, r3, #0
    stmia r3!, {r0, r1}
    ldr r0, [r6]
    add r1, r5, #0
    str r0, [r3]
    add r0, r2, #0
    add r2, sp, #0x18
    bl VEC_Subtract
    ldr r0, [r4, #0x40]
    bl PlayerAvatar_GetMapObject
    add r5, r0, #0
    ldr r0, [r4, #0x40]
    add r1, sp, #0x24
    bl PlayerAvatar_CopyPositionVector
    ldr r0, [r4, #0x40]
    mov r1, #0
    bl PlayerAvatar_ToggleAutomaticHeightUpdating
    mov r0, #2
    ldr r1, [sp, #0x28]
    lsl r0, r0, #0x10
    sub r0, r1, r0
    str r0, [sp, #0x28]
    ldr r0, [r4, #0x40]
    add r1, sp, #0x24
    mov r2, #0
    bl sub_0205C810
    ldr r0, [r4, #0x40]
    bl PlayerAvatar_GetPositionVector
    ldr r1, [r4, #0x24]
    bl Camera_SetLookAtTargetAndRecalcPos
    ldr r0, [r4, #0x40]
    bl PlayerAvatar_GetPositionVector
    ldr r1, [r4, #0x24]
    bl Camera_SetFixedTarget
    ldr r1, [r4, #0x24]
    add r0, sp, #0x18
    bl Camera_OffsetLookAtPosAndTarget
    add r0, r5, #0
    bl MapObject_ClearHeldMovementIfActive
    mov r1, #2
    ldr r0, [r4, #0x40]
    lsl r1, r1, #8
    bl Field_PlayerAvatar_OrrTransitionFlags
    ldr r0, [r4, #0x40]
    bl Field_PlayerAvatar_ApplyTransitionFlags
    add r0, r5, #0
    mov r1, #0
    bl sub_0205F328
    add sp, #0x30
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02056C64(void) {
    /* Original at 0x02056C64 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    sub sp, #0x30
    add r4, r0, #0
    ldr r0, [r4, #0x24]
    bl Camera_GetCurrentTarget
    add r5, r0, #0
    ldr r1, [r4, #0x24]
    add r0, sp, #0
    bl Camera_GetLookAtCamTarget
    add r6, sp, #0
    add r3, sp, #0xc
    ldmia r6!, {r0, r1}
    add r2, r3, #0
    stmia r3!, {r0, r1}
    ldr r0, [r6]
    add r1, r5, #0
    str r0, [r3]
    add r0, r2, #0
    add r2, sp, #0x18
    bl VEC_Subtract
    ldr r0, [r4, #0x40]
    bl PlayerAvatar_GetMapObject
    add r5, r0, #0
    ldr r0, [r4, #0x40]
    add r1, sp, #0x24
    bl PlayerAvatar_CopyPositionVector
    ldr r0, [r4, #0x40]
    mov r1, #0
    bl PlayerAvatar_ToggleAutomaticHeightUpdating
    mov r0, #2
    ldr r1, [sp, #0x28]
    lsl r0, r0, #0x10
    add r0, r1, r0
    str r0, [sp, #0x28]
    ldr r0, [r4, #0x40]
    add r1, sp, #0x24
    mov r2, #0
    bl sub_0205C810
    ldr r0, [r4, #0x40]
    bl PlayerAvatar_GetPositionVector
    ldr r1, [r4, #0x24]
    bl Camera_SetLookAtTargetAndRecalcPos
    ldr r0, [r4, #0x40]
    bl PlayerAvatar_GetPositionVector
    ldr r1, [r4, #0x24]
    bl Camera_SetFixedTarget
    ldr r1, [r4, #0x24]
    add r0, sp, #0x18
    bl Camera_OffsetLookAtPosAndTarget
    add r0, r5, #0
    bl MapObject_ClearHeldMovementIfActive
    mov r1, #2
    ldr r0, [r4, #0x40]
    lsl r1, r1, #8
    bl Field_PlayerAvatar_OrrTransitionFlags
    ldr r0, [r4, #0x40]
    bl Field_PlayerAvatar_ApplyTransitionFlags
    add r0, r5, #0
    mov r1, #0
    bl sub_0205F328
    add sp, #0x30
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02056D00(void) {
    /* Original at 0x02056D00 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r5, r0, #0
    add r4, r1, #0
    mov r0, #0xb
    mov r1, #0x10
    bl Heap_AllocAtEnd
    add r2, r0, #0
    add r3, r2, #0
    mov r1, #0x10
    mov r0, #0
    strb r0, [r3]
    add r3, r3, #1
    sub r1, r1, #1
    bne _02056D16
    ldr r1, _02056D2C ; =sub_02056D30
    add r0, r5, #0
    strh r4, [r2, #2]
    bl TaskManager_Call
    pop {r3, r4, r5, pc}
    nop
    _02056D2C: .word sub_02056D30"
    );
    #endif
}

void sub_02056D30(void) {
    /* Original at 0x02056D30 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r6, r0, #0
    bl TaskManager_GetFieldSystem
    add r5, r0, #0
    add r0, r6, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    ldrh r1, [r4]
    cmp r1, #0
    beq _02056D4E
    cmp r1, #1
    beq _02056D6C
    b _02056D74
    ldr r0, [r5, #0xc]
    add r5, #0xb4
    str r0, [r4, #8]
    ldrh r0, [r4, #2]
    ldr r1, _02056D78 ; =_020FC790
    add r2, r4, #4
    str r0, [r4, #0xc]
    str r5, [r4, #4]
    add r0, r6, #0
    bl CallApplicationAsTask
    ldrh r0, [r4]
    add r0, r0, #1
    strh r0, [r4]
    b _02056D74
    bl Heap_Free
    mov r0, #1
    pop {r4, r5, r6, pc}
    mov r0, #0
    pop {r4, r5, r6, pc}
    _02056D78: .word _020FC790"
    );
    #endif
}
