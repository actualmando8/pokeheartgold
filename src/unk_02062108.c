/* Decompiled from asm/unk_02062108.s */
#include "global.h"

void MapObject_AreBitsSetForMovementScriptInit(void) {
    /* Original at 0x02062108 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    add r4, r0, #0\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    bne _0206211A\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #2\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _0206212A\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x10\n    bl MapObject_TestFlagsBits\n    cmp r0, #1\n    bne _02062146\n    add r0, r4, #0\n    mov r1, #0x20\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    bne _02062146\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObject_SetHeldMovement(void) {
    /* Original at 0x0206214C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #0x71\n    blt _0206215A\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r1, r4, #0\n    bl MapObject_SetMovementCommand\n    add r0, r5, #0\n    mov r1, #0\n    bl MapObject_SetMovementStep\n    add r0, r5, #0\n    mov r1, #0x10\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    mov r1, #0x20\n    bl MapObject_ClearFlagsBits\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void MapObject_ForceSetHeldMovement(void) {
    /* Original at 0x0206217C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_SetMovementCommand\n    add r0, r4, #0\n    mov r1, #0\n    bl MapObject_SetMovementStep\n    add r0, r4, #0\n    mov r1, #0x20\n    bl MapObject_ClearFlagsBits\n    pop {r4, pc}"
    );
    #endif
}

void MapObject_IsMovementPaused(void) {
    /* Original at 0x02062198 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x10\n    add r4, r0, #0\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    bne _020621AA\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x20\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    beq _020621BA\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void MapObject_ClearHeldMovementIfActive(void) {
    /* Original at 0x020621C0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x10\n    add r4, r0, #0\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    bne _020621D2\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x20\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    bne _020621E2\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x30\n    bl MapObject_ClearFlagsBits\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObject_ClearHeldMovement(void) {
    /* Original at 0x020621F0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0x10\n    bl MapObject_ClearFlagsBits\n    add r0, r4, #0\n    mov r1, #0x20\n    bl MapObject_SetFlagsBits\n    add r0, r4, #0\n    mov r1, #0xff\n    bl MapObject_SetMovementCommand\n    add r0, r4, #0\n    mov r1, #0\n    bl MapObject_SetMovementStep\n    pop {r4, pc}"
    );
    #endif
}

void EventObjectMovementMan_Create(void) {
    /* Original at 0x02062214 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #4\n    mov r1, #0x14\n    bl Heap_AllocAtEnd\n    add r4, r0, #0\n    bne _0206222A\n    bl GF_AssertFail\n    add r2, r4, #0\n    mov r1, #0x14\n    mov r0, #0\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _02062230\n    add r0, r5, #0\n    bl MapObject_GetManager\n    bl MapObjectManager_GetPriority\n    sub r2, r0, #1\n    ldr r0, _0206225C ; =MovementScriptMachine\n    add r1, r4, #0\n    bl SysTask_CreateOnMainQueue\n    add r7, r0, #0\n    bne _02062254\n    bl GF_AssertFail\n    str r5, [r4, #0xc]\n    str r6, [r4, #0x10]\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0206225C: .word MovementScriptMachine"
    );
    #endif
}

void EventObjectMovementMan_IsFinish(void) {
    SysTask_GetData();
}

void EventObjectMovementMan_Delete(void) {
    /* Original at 0x0206226C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl SysTask_GetData\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl MapObject_IsMovementPaused\n    cmp r0, #1\n    beq _02062284\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    bl MapObject_ClearHeldMovementIfActive\n    mov r0, #4\n    add r1, r4, #0\n    bl Heap_FreeExplicit\n    add r0, r5, #0\n    bl SysTask_Destroy\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void MovementScriptMachine(void) {
    /* Original at 0x0206229C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r4, _020622B4 ; =sMovementScriptMachineStateFuncs\n    add r5, r1, #0\n    ldr r1, [r5]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    blx r1\n    cmp r0, #1\n    beq _020622A2\n    pop {r3, r4, r5, pc}\n    nop\n    _020622B4: .word sMovementScriptMachineStateFuncs"
    );
    #endif
}

void MovementScriptMachineSub_Init(void) {
    /* Original at 0x020622B8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0\n    str r1, [r0, #8]\n    mov r1, #1\n    str r1, [r0]\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void MovementScriptMachineSub_WaitReady(void) {
    MapObject_AreBitsSetForMovementScriptInit(0, 1, 2);
}

void MovementScriptMachineSub_SetMovementCommand(void) {
    MapObject_SetHeldMovement(0, 3);
}

void MovementScriptMachineSub_WaitMovementCommand(void) {
    MapObject_IsMovementPaused(0, 1, 4);
}

void MovementScriptMachineSub_LoopCheck(void) {
    /* Original at 0x02062314 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #8]\n    ldr r3, [r0, #0x10]\n    add r2, r1, #1\n    str r2, [r0, #8]\n    ldrh r1, [r3, #2]\n    cmp r2, r1\n    bge _0206232A\n    mov r1, #1\n    str r1, [r0]\n    add r0, r1, #0\n    bx lr\n    add r1, r3, #4\n    str r1, [r0, #0x10]\n    ldrh r1, [r3, #4]\n    cmp r1, #0xfe ; EndMovement\n    beq _0206233C\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #1\n    bx lr\n    mov r1, #1\n    str r1, [r0, #4]\n    mov r1, #5\n    str r1, [r0]\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void MovementScriptMachineSub_Done(void) {
    /* Original at 0x02062348 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_0206234C(void) {
    /* Original at 0x0206234C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r4, r1, #0\n    cmp r7, #4\n    blt _0206235A\n    bl GF_AssertFail\n    ldr r3, _0206238C ; =_020FD198\n    ldr r6, [r3]\n    cmp r6, #0\n    beq _02062384\n    mov r1, #0\n    add r2, r1, #0\n    add r5, r6, #0\n    ldr r0, [r5]\n    cmp r4, r0\n    bne _02062374\n    lsl r0, r7, #2\n    ldr r0, [r6, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r2, r2, #1\n    add r5, r5, #4\n    cmp r2, #4\n    blt _02062368\n    add r3, r3, #4\n    ldr r6, [r3]\n    cmp r6, #0\n    bne _02062364\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0206238C: .word _020FD198"
    );
    #endif
}

void sub_02062390(void) {
    /* Original at 0x02062390 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    ldr r4, _020623C4 ; =_020FD198\n    ldr r5, [r4]\n    cmp r5, #0\n    beq _020623BA\n    mov r2, #0\n    add r3, r2, #0\n    ldr r1, [r5]\n    cmp r0, r1\n    bne _020623AA\n    add r0, r3, #0\n    pop {r4, r5}\n    bx lr\n    add r3, r3, #1\n    add r5, r5, #4\n    cmp r3, #4\n    blt _0206239E\n    add r4, r4, #4\n    ldr r5, [r4]\n    cmp r5, #0\n    bne _0206239C\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5}\n    bx lr\n    nop\n    _020623C4: .word _020FD198"
    );
    #endif
}

void sub_020623C8(void) {
    /* Original at 0x020623C8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "sub r0, #0x38\n    cmp r0, #3\n    bhi _020623D2\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void sub_020623D8(void) {
    /* Original at 0x020623D8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r3, _020623FC ; =_020FDA28\n    add r2, sp, #0\n    add r4, r0, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    cmp r4, #4\n    blt _020623F2\n    bl GF_AssertFail\n    lsl r1, r4, #2\n    add r0, sp, #0\n    ldr r0, [r0, r1]\n    add sp, #0x10\n    pop {r4, pc}\n    _020623FC: .word _020FDA28"
    );
    #endif
}

void sub_02062400(void) {
    /* Original at 0x02062400 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, r5, #0\n    bl MapObject_GetMovementCommand\n    add r4, r0, #0\n    cmp r4, #0xff\n    beq _02062424\n    add r0, r5, #0\n    bl MapObject_GetMovementStep\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl MapObject_RunMovementCommand\n    cmp r0, #0\n    bne _02062404\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02062428(void) {
    /* Original at 0x02062428 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02062400\n    add r0, r4, #0\n    mov r1, #0x20\n    bl MapObject_TestFlagsBits\n    cmp r0, #0\n    bne _02062440\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x20\n    bl MapObject_ClearFlagsBits\n    add r0, r4, #0\n    mov r1, #0xff\n    bl MapObject_SetMovementCommand\n    add r0, r4, #0\n    mov r1, #0\n    bl MapObject_SetMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObject_RunMovementCommand(void) {
    /* Original at 0x0206245C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    lsl r3, r1, #2\n    ldr r1, _0206246C ; =gMovementCmdTable\n    ldr r3, [r1, r3]\n    lsl r1, r2, #2\n    ldr r1, [r3, r1]\n    blx r1\n    pop {r3, pc}\n    _0206246C: .word gMovementCmdTable"
    );
    #endif
}

void MapObjectMovementCmd098_Step2(void) {
    MapObject_SetFlagsBits();
}

void sub_0206247C(void) {
    /* Original at 0x0206247C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl MapObject_SetFacingDirection\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    bl sub_02060F78\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd000_Step0(void) {
    sub_0206247C();
}

void MapObjectMovementCmd001_Step0(void) {
    sub_0206247C();
}

void MapObjectMovementCmd002_Step0(void) {
    sub_0206247C();
}

void MapObjectMovementCmd003_Step0(void) {
    sub_0206247C();
}

void sub_020624CC(void) {
    /* Original at 0x020624CC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    mov r1, #0xc\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl sub_0205F3C0\n    add r1, sp, #8\n    ldrh r1, [r1, #0x10]\n    strh r1, [r0]\n    strh r7, [r0, #2]\n    str r4, [r0, #4]\n    str r6, [r0, #8]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060F24\n    add r0, r5, #0\n    add r1, r4, #0\n    bl MapObject_SetOrQueueFacing\n    add r1, sp, #8\n    ldrh r1, [r1, #0x10]\n    add r0, r5, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    mov r1, #4\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void MapObjectMovementCmd090_Step1(void) {
    /* Original at 0x02062514 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F3E4\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    ldr r2, [r4, #8]\n    add r0, r5, #0\n    bl sub_0206101C\n    add r0, r5, #0\n    bl sub_02061070\n    mov r0, #2\n    ldrsh r1, [r4, r0]\n    sub r1, r1, #1\n    strh r1, [r4, #2]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    ble _02062540\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #0x28\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    bl sub_02060F78\n    add r0, r5, #0\n    bl sub_0205F484\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void MapObjectMovementCmd004_Step0(void) {
    sub_020624CC(1, 0, 1, 0x20);
}

void MapObjectMovementCmd005_Step0(void) {
    sub_020624CC(1, 1, 0x20);
}

void MapObjectMovementCmd006_Step0(void) {
    sub_020624CC(1, 1, 2, 0x20);
}

void MapObjectMovementCmd007_Step0(void) {
    sub_020624CC(1, 3, 1, 0x20);
}

void MapObjectMovementCmd008_Step0(void) {
    sub_020624CC(1, 0, 2, 0x10);
}

void MapObjectMovementCmd009_Step0(void) {
    sub_020624CC(1, 1, 2, 0x10);
}

void MapObjectMovementCmd010_Step0(void) {
    sub_020624CC(1, 2, 0x10);
}

void MapObjectMovementCmd011_Step0(void) {
    sub_020624CC(1, 3, 2, 0x10);
}

void MapObjectMovementCmd012_Step0(void) {
    sub_020624CC(1, 0, 3, 2, 8);
}

void MapObjectMovementCmd013_Step0(void) {
    sub_020624CC(1, 1, 3, 8);
}

void MapObjectMovementCmd014_Step0(void) {
    sub_020624CC(1, 2, 3, 8);
}

void MapObjectMovementCmd015_Step0(void) {
    sub_020624CC(1, 3, 2, 8);
}

void MapObjectMovementCmd016_Step0(void) {
    sub_020624CC(1, 0, 4);
}

void MapObjectMovementCmd017_Step0(void) {
    sub_020624CC(1, 1, 4);
}

void MapObjectMovementCmd018_Step0(void) {
    sub_020624CC(1, 2, 4);
}

void MapObjectMovementCmd019_Step0(void) {
    sub_020624CC(1, 3, 4);
}

void MapObjectMovementCmd020_Step0(void) {
    sub_020624CC(1, 0, 5, 2, 2);
}

void MapObjectMovementCmd021_Step0(void) {
    sub_020624CC(1, 1, 5, 2);
}

void MapObjectMovementCmd022_Step0(void) {
    sub_020624CC(1, 2, 5);
}

void MapObjectMovementCmd023_Step0(void) {
    sub_020624CC(1, 3, 5, 2, 2);
}

void MapObjectMovementCmd084_Step0(void) {
    sub_020624CC(1, 0, 1, 1);
}

void MapObjectMovementCmd085_Step0(void) {
    sub_020624CC(1, 0, 1);
}

void MapObjectMovementCmd086_Step0(void) {
    sub_020624CC(1, 0, 2, 1);
}

void MapObjectMovementCmd087_Step0(void) {
    sub_020624CC(1, 0, 3, 1, 1);
}

void MapObjectMovementCmd088_Step0(void) {
    sub_020624CC(1, 0, 9, 1, 4);
}

void MapObjectMovementCmd089_Step0(void) {
    sub_020624CC(1, 1, 9, 4);
}

void MapObjectMovementCmd090_Step0(void) {
    sub_020624CC(1, 2, 9, 4);
}

void MapObjectMovementCmd091_Step0(void) {
    sub_020624CC(1, 3, 9, 1, 4);
}

void sub_020627B0(void) {
    /* Original at 0x020627B0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r1, #0\n    add r6, r2, #0\n    add r4, r3, #0\n    mov r1, #0xc\n    add r5, r0, #0\n    bl sub_0205F3C0\n    strh r4, [r0]\n    add r1, r6, #1\n    strh r1, [r0, #2]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl MapObject_SetFacingDirection\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    bl sub_02060F78\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void MapObjectMovementCmd040_Step1(void) {
    /* Original at 0x020627E4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F3E4\n    mov r1, #2\n    ldrsh r2, [r0, r1]\n    sub r2, r2, #1\n    strh r2, [r0, #2]\n    ldrsh r0, [r0, r1]\n    cmp r0, #0\n    ble _020627FE\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0x20\n    bl MapObject_SetFlagsBits\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd024_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd025_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd026_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd027_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd028_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd029_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd030_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd031_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd032_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd033_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd034_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd035_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd036_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd037_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd038_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd039_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd040_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd041_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd042_Step0(void) {
    sub_020627B0();
}

void MapObjectMovementCmd043_Step0(void) {
    sub_020627B0();
}

void sub_02062958(void) {
    /* Original at 0x02062958 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    mov r1, #0x10\n    add r5, r0, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl sub_0205F3C0\n    strb r4, [r0, #0xc]\n    str r6, [r0]\n    strb r7, [r0, #0xd]\n    add r2, sp, #8\n    ldrh r1, [r2, #0x10]\n    strb r1, [r0, #0xe]\n    mov r1, #0x14\n    ldrsh r1, [r2, r1]\n    cmp r6, #0\n    strb r1, [r0, #0xf]\n    ldrh r1, [r2, #0x18]\n    strh r1, [r0, #8]\n    bne _0206298A\n    add r0, r5, #0\n    bl sub_02060F78\n    b _02062992\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060F24\n    ldr r1, _020629C4 ; =0x00010004\n    add r0, r5, #0\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    add r1, r4, #0\n    bl MapObject_SetOrQueueFacing\n    add r1, sp, #8\n    ldrh r1, [r1, #0x10]\n    add r0, r5, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    add r0, r5, #0\n    bl MapObject_CheckVisible\n    cmp r0, #0\n    bne _020629C2\n    ldr r0, _020629C8 ; =SEQ_SE_DP_DANSA\n    bl PlaySE\n    pop {r3, r4, r5, r6, r7, pc}\n    _020629C4: .word 0x00010004\n    _020629C8: .word SEQ_SE_DP_DANSA"
    );
    #endif
}

void MapObjectMovementCmd092_Step1(void) {
    /* Original at 0x020629CC */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    bl sub_0205F3E4\n    add r4, r0, #0\n    ldr r2, [r4]\n    cmp r2, #0\n    beq _02062A1C\n    mov r1, #0xc\n    ldrsb r1, [r4, r1]\n    add r0, r5, #0\n    bl sub_0206101C\n    add r0, r5, #0\n    bl sub_02061070\n    mov r0, #1\n    ldr r1, [r4, #4]\n    lsl r0, r0, #0x10\n    cmp r1, r0\n    blt _02062A0E\n    mov r0, #0\n    str r0, [r4, #4]\n    mov r1, #0xc\n    ldrsb r1, [r4, r1]\n    add r0, r5, #0\n    bl sub_02060F24\n    add r0, r5, #0\n    mov r1, #4\n    bl MapObject_SetFlagsBits\n    ldr r1, [r4]\n    cmp r1, #0\n    bge _02062A16\n    neg r1, r1\n    ldr r0, [r4, #4]\n    add r0, r0, r1\n    str r0, [r4, #4]\n    ldrh r1, [r4, #0xa]\n    ldrh r0, [r4, #8]\n    add r0, r1, r0\n    strh r0, [r4, #0xa]\n    mov r0, #0xf\n    ldrh r1, [r4, #0xa]\n    lsl r0, r0, #8\n    cmp r1, r0\n    bls _02062A30\n    strh r0, [r4, #0xa]\n    mov r1, #0xf\n    ldrsb r1, [r4, r1]\n    ldrh r0, [r4, #0xa]\n    lsl r2, r1, #2\n    ldr r1, _02062AB0 ; =_0210FACC\n    lsr r0, r0, #8\n    lsl r0, r0, #0x10\n    ldr r2, [r1, r2]\n    mov r1, #0\n    str r1, [sp, #0xc]\n    lsr r0, r0, #0xe\n    ldr r0, [r2, r0]\n    str r0, [sp, #0x10]\n    str r1, [sp, #0x14]\n    add r0, r5, #0\n    add r1, sp, #0xc\n    bl MapObject_SetFacingVector\n    mov r0, #0xd\n    ldrsb r1, [r4, r0]\n    sub r1, r1, #1\n    strb r1, [r4, #0xd]\n    ldrsb r0, [r4, r0]\n    cmp r0, #0\n    ble _02062A68\n    add sp, #0x18\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    add r0, r5, #0\n    bl MapObject_SetFacingVector\n    ldr r1, _02062AB4 ; =0x00020028\n    add r0, r5, #0\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    bl sub_02060F78\n    add r0, r5, #0\n    bl sub_0205F484\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    add r0, r5, #0\n    bl MapObject_CheckVisible\n    cmp r0, #0\n    bne _02062AAA\n    ldr r0, _02062AB8 ; =SEQ_SE_DP_SUTYA2\n    bl PlaySE\n    mov r0, #1\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    _02062AB0: .word _0210FACC\n    _02062AB4: .word 0x00020028\n    _02062AB8: .word SEQ_SE_DP_SUTYA2"
    );
    #endif
}

void MapObjectMovementCmd044_Step0(void) {
    sub_02062958(1, 0, 2, 0x10);
}

void MapObjectMovementCmd045_Step0(void) {
    sub_02062958(1, 1, 2, 0, 0x10);
}

void MapObjectMovementCmd046_Step0(void) {
    sub_02062958(1, 2, 0, 0x10);
}

void MapObjectMovementCmd047_Step0(void) {
    sub_02062958(1, 2, 3, 0, 0x10);
}

void MapObjectMovementCmd048_Step0(void) {
    sub_02062958(1, 0, 3, 2, 8);
}

void MapObjectMovementCmd049_Step0(void) {
    sub_02062958(1, 1, 2, 3, 0, 8);
}

void MapObjectMovementCmd050_Step0(void) {
    sub_02062958(1, 2, 2, 3, 0, 8);
}

void MapObjectMovementCmd051_Step0(void) {
    sub_02062958(1, 3, 0, 2, 8);
}

void MapObjectMovementCmd052_Step0(void) {
    sub_02062958(1, 0, 3, 2, 8);
}

void MapObjectMovementCmd053_Step0(void) {
    sub_02062958(1, 0, 1, 2, 3, 8);
}

void MapObjectMovementCmd054_Step0(void) {
    sub_02062958(1, 0, 2, 2, 3, 8);
}

void MapObjectMovementCmd055_Step0(void) {
    sub_02062958(1, 3, 0, 2, 8);
}

void MapObjectMovementCmd056_Step0(void) {
    sub_02062958(1, 0, 2, 3, 0x10);
}

void MapObjectMovementCmd057_Step0(void) {
    sub_02062958(1, 0, 1, 3, 0x10);
}

void MapObjectMovementCmd058_Step0(void) {
    sub_02062958(1, 0, 2, 3, 0x10);
}

void MapObjectMovementCmd059_Step0(void) {
    sub_02062958(1, 3, 0, 2, 0x10);
}

void MapObjectMovementCmd092_Step0(void) {
    sub_02062958(1, 0, 0xa, 0xf0, 2, 0x10);
}

void MapObjectMovementCmd093_Step0(void) {
    sub_02062958(1, 0, 0xa, 0xf0, 3, 1, 0x10);
}

void MapObjectMovementCmd094_Step0(void) {
    sub_02062958(1, 0, 0xb, 2, 5, 0xc);
}

void MapObjectMovementCmd095_Step0(void) {
    /* Original at 0x02062D30 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    mov r1, #0xb\n    str r1, [sp]\n    mov r1, #0\n    str r1, [sp, #4]\n    mov r1, #5\n    lsl r1, r1, #6\n    mov r2, #1\n    str r1, [sp, #8]\n    mov r1, #3\n    lsl r2, r2, #0xe\n    mov r3, #0xc\n    bl sub_02062958\n    mov r0, #1\n    add sp, #0xc\n    pop {pc}"
    );
    #endif
}

void sub_02062D54(void) {
    /* Original at 0x02062D54 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #4\n    bl sub_0205F3C0\n    str r4, [r0]\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void MapObjectMovementCmd064_Step1(void) {
    /* Original at 0x02062D6C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F3E4\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _02062D82\n    sub r1, r1, #1\n    str r1, [r0]\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd060_Step0(void) {
    sub_02062D54();
}

void MapObjectMovementCmd061_Step0(void) {
    sub_02062D54();
}

void MapObjectMovementCmd062_Step0(void) {
    sub_02062D54();
}

void MapObjectMovementCmd063_Step0(void) {
    sub_02062D54();
}

void MapObjectMovementCmd064_Step0(void) {
    sub_02062D54();
}

void MapObjectMovementCmd065_Step0(void) {
    sub_02062D54();
}

void MapObjectMovementCmd066_Step0(void) {
    sub_02062D54();
}

void MapObjectMovementCmd067_Step0(void) {
    /* Original at 0x02062DE0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #8\n    add r4, r0, #0\n    bl sub_0205F3C0\n    mov r1, #1\n    lsl r1, r1, #0x10\n    str r1, [r0, #4]\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd067_Step1(void) {
    /* Original at 0x02062E04 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl sub_0205F3E4\n    add r4, r0, #0\n    ldr r1, [r4]\n    ldr r0, [r4, #4]\n    add r0, r1, r0\n    str r0, [r4]\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldr r0, [r4]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl MapObject_SetFacingVector\n    ldr r1, [r4]\n    asr r0, r1, #0xe\n    lsr r0, r0, #0x11\n    add r0, r1, r0\n    asr r0, r0, #0xf\n    cmp r0, #0x28\n    bge _02062E40\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void MapObjectMovementCmd068_Step0(void) {
    /* Original at 0x02062E4C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #8\n    add r4, r0, #0\n    bl sub_0205F3C0\n    mov r1, #5\n    lsl r1, r1, #0x12\n    str r1, [r0]\n    ldr r1, _02062E74 ; =0xFFFF0000\n    str r1, [r0, #4]\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _02062E74: .word 0xFFFF0000"
    );
    #endif
}

void MapObjectMovementCmd068_Step1(void) {
    /* Original at 0x02062E78 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl sub_0205F3E4\n    add r4, r0, #0\n    ldr r1, [r4]\n    ldr r0, [r4, #4]\n    add r0, r1, r0\n    str r0, [r4]\n    bpl _02062E92\n    mov r0, #0\n    str r0, [r4]\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldr r0, [r4]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl MapObject_SetFacingVector\n    ldr r0, [r4]\n    cmp r0, #0\n    ble _02062EB2\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void MapObjectMovementCmd069_Step0(void) {
    /* Original at 0x02062EC0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #2\n    add r4, r0, #0\n    lsl r1, r1, #8\n    bl MapObject_SetFlagsBits\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd070_Step0(void) {
    /* Original at 0x02062ED8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #2\n    add r4, r0, #0\n    lsl r1, r1, #8\n    bl MapObject_ClearFlagsBits\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd071_Step0(void) {
    /* Original at 0x02062EF0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0x80\n    bl MapObject_SetFlagsBits\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd072_Step0(void) {
    /* Original at 0x02062F04 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0x80\n    bl MapObject_ClearFlagsBits\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd073_Step0(void) {
    /* Original at 0x02062F18 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    add r4, r0, #0\n    lsl r1, r1, #8\n    bl MapObject_SetFlagsBits\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd074_Step0(void) {
    /* Original at 0x02062F30 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #1\n    add r4, r0, #0\n    lsl r1, r1, #8\n    bl MapObject_ClearFlagsBits\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void sub_02062F48(void) {
    /* Original at 0x02062F48 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    mov r1, #8\n    add r5, r0, #0\n    bl sub_0205F3C0\n    add r4, r0, #0\n    str r6, [r4]\n    add r0, r5, #0\n    add r1, r6, #0\n    mov r2, #1\n    bl ov01_02200540\n    str r0, [r4, #4]\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void MapObjectMovementCmd075_Step1(void) {
    /* Original at 0x02062F6C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl sub_0205F3E4\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    bl ov01_022003F4\n    cmp r0, #1\n    bne _02062F90\n    ldr r0, [r4, #4]\n    bl sub_02068B48\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void MapObjectMovementCmd075_Step0(void) {
    sub_02062F48();
}

void MapObjectMovementCmd103_Step0(void) {
    sub_02062F48();
}

void sub_02062FAC(void) {
    /* Original at 0x02062FAC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    mov r1, #8\n    add r5, r0, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    bl sub_0205F3C0\n    strh r4, [r0]\n    strh r6, [r0, #2]\n    strh r7, [r0, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02060F24\n    add r0, r5, #0\n    add r1, r4, #0\n    bl MapObject_SetOrQueueFacing\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    mov r1, #4\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02062FEC(void) {
    /* Original at 0x02062FEC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    bl sub_0205F3E4\n    add r4, r0, #0\n    mov r2, #6\n    ldrsh r2, [r4, r2]\n    mov r1, #0\n    ldrsh r1, [r4, r1]\n    lsl r2, r2, #2\n    ldr r2, [r6, r2]\n    add r0, r5, #0\n    bl sub_0206101C\n    add r0, r5, #0\n    bl sub_02061070\n    mov r0, #6\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, #6]\n    ldrsh r1, [r4, r0]\n    mov r0, #4\n    ldrsh r0, [r4, r0]\n    cmp r1, r0\n    bge _02063026\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r5, #0\n    mov r1, #0x28\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    bl sub_02060F78\n    add r0, r5, #0\n    bl sub_0205F484\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void MapObjectMovementCmd076_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd077_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd078_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd079_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd076_Step1(void) {
    sub_02062FEC(0, 1);
}

void MapObjectMovementCmd080_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd081_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd082_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd083_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd082_Step1(void) {
    sub_02062FEC(0, 1);
}

void MapObjectMovementCmd096_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd097_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd098_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd099_Step0(void) {
    sub_02062FAC();
}

void MapObjectMovementCmd098_Step1(void) {
    sub_02062FEC(0, 1);
}

void MapObjectMovementCmd100_Step0(void) {
    /* Original at 0x02063154 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #4\n    bl sub_0205F3C0\n    add r0, r4, #0\n    mov r1, #9\n    bl sub_0205F328\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd100_Step1(void) {
    /* Original at 0x02063170 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F3E4\n    ldr r1, [r0]\n    add r1, r1, #1\n    str r1, [r0]\n    cmp r1, #8\n    blt _02063198\n    add r0, r4, #0\n    mov r1, #1\n    bl MapObject_SetFacingDirection\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd101_Step0(void) {
    /* Original at 0x0206319C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r1, #4\n    bl sub_0205F3C0\n    add r0, r4, #0\n    bl sub_0206642C\n    cmp r0, #0\n    beq _020631B6\n    bl sub_02068B48\n    add r1, sp, #0\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    add r0, r4, #0\n    bl MapObject_SetFacingVector\n    add r0, r4, #0\n    bl ov01_022000DC\n    ldr r1, _020631EC ; =0x00010004\n    add r0, r4, #0\n    bl MapObject_SetFlagsBits\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #0x14\n    bl MapObject_ClearFlagsBits\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _020631EC: .word 0x00010004"
    );
    #endif
}

void MapObjectMovementCmd101_Step1(void) {
    /* Original at 0x020631F0 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    bl sub_0205F3E4\n    add r4, r0, #0\n    ldr r0, _02063250 ; =_0210FACC\n    add r1, sp, #0\n    ldr r2, [r0]\n    mov r0, #0\n    str r0, [r1]\n    str r0, [r1, #4]\n    str r0, [r1, #8]\n    ldr r0, [r4]\n    lsl r0, r0, #2\n    ldr r0, [r2, r0]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl MapObject_SetFacingVector\n    ldr r0, [r4]\n    add r0, r0, #2\n    str r0, [r4]\n    cmp r0, #0x10\n    bhs _02063228\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, pc}\n    mov r0, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, sp, #0\n    bl MapObject_SetFacingVector\n    ldr r1, _02063254 ; =0x00020028\n    add r0, r5, #0\n    bl MapObject_SetFlagsBits\n    add r0, r5, #0\n    bl sub_02066438\n    add r0, r5, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02063250: .word _0210FACC\n    _02063254: .word 0x00020028"
    );
    #endif
}

void MapObjectMovementCmd102_Step0(void) {
    /* Original at 0x02063258 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #4\n    bl sub_0205F3C0\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0205F328\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd104_Step0(void) {
    /* Original at 0x02063274 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #4\n    bl sub_0205F3C0\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_0205F328\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void MapObjectMovementCmd102_Step1(void) {
    /* Original at 0x02063290 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0205F3E4\n    ldr r1, [r0]\n    add r1, r1, #1\n    str r1, [r0]\n    cmp r1, #0x15\n    bhs _020632A6\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl MapObject_IncrementMovementStep\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}
