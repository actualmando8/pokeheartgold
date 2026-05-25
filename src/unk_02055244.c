/* Decompiled from asm/unk_02055244.s */
#include "global.h"

u32 sub_02055244(void) {
    TaskManager_GetFieldSystem();
    sub_0203DF7C();
}



void CallTask_LeaveOverworld(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r4, r0, #0
    // bl sub_0203DF7C
    // cmp r0, #0
    // bne _02055274
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl sub_0203DF34
    // ldr r1, _02055288 ; =sub_02055244
    // add r0, r5, #0
    // mov r2, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // nop
    // _02055288: .word sub_02055244
    // TODO: decompile
}



u32 sub_0205528C(void) {
    TaskManager_GetFieldSystem();
    sub_020505C8();
}



void CallTask_RestoreOverworld(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r4, r0, #0
    // bl sub_0203DF7C
    // cmp r0, #0
    // beq _020552BC
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl FieldSystem_LoadFieldOverlay
    // ldr r1, _020552D0 ; =sub_0205528C
    // add r0, r5, #0
    // mov r2, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // nop
    // _020552D0: .word sub_0205528C
    // TODO: decompile
}



void sub_020552D4(void) {
}



void PaletteFadeUntilFinished(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // bl sub_0203DF7C
    // cmp r0, #0
    // bne _02055302
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {r3, r4, pc}
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r1, _02055328 ; =sub_020552D4
    // add r0, r4, #0
    // mov r2, #0
    // bl TaskManager_Call
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _02055328: .word sub_020552D4
    // TODO: decompile
}



void CallTask_FadeFromBlack(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // bl sub_0203DF7C
    // cmp r0, #0
    // bne _02055346
    // bl GF_AssertFail
    // add sp, #0xc
    // pop {r3, r4, pc}
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r1, _0205536C ; =sub_020552D4
    // add r0, r4, #0
    // mov r2, #0
    // bl TaskManager_Call
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0205536C: .word sub_020552D4
    // TODO: decompile
}



u32 sub_02055370(void) {
    TaskManager_GetStatePtr();
    PaletteFadeUntilFinished(r5);
    // str r0, [r4]
    CallTask_LeaveOverworld(r5);
    // str r0, [r4]
}



void sub_020553B0(void) {
    // ldr r3, _020553B8 ; =TaskManager_Call
    // ldr r1, _020553BC ; =sub_02055370
    // mov r2, #0
    // bx r3
    // _020553B8: .word TaskManager_Call
    // _020553BC: .word sub_02055370
    // TODO: decompile
}



u32 sub_020553C0(void) {
    TaskManager_GetStatePtr();
    TaskManager_GetFieldSystem(r5);
    CallTask_RestoreOverworld(r5, *((u32*)r4));
    // str r0, [r4]
    FieldSystem_DrawMapNameAnimation((*((u32*)r4) + 1));
    CallTask_FadeFromBlack(r5);
    // str r0, [r4]
}



void sub_02055408(void) {
    // ldr r3, _02055410 ; =TaskManager_Call
    // ldr r1, _02055414 ; =sub_020553C0
    // mov r2, #0
    // bx r3
    // _02055410: .word TaskManager_Call
    // _02055414: .word sub_020553C0
    // TODO: decompile
}


