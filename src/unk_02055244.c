/* Decompiled from asm/unk_02055244.s */
#include "global.h"

u32 sub_02055244(void) {
}




void CallTask_LeaveOverworld(void) {
    TaskManager_GetFieldSystem();
    sub_0203DF7C();
    GF_AssertFail();
    sub_0203DF34(r4);
    TaskManager_Call(r5, sub_02055244, 0);
}




u32 sub_0205528C(void) {
}




void CallTask_RestoreOverworld(void) {
    TaskManager_GetFieldSystem();
    sub_0203DF7C();
    GF_AssertFail();
    FieldSystem_LoadFieldOverlay(r4);
    TaskManager_Call(r5, sub_0205528C, 0);
}




void sub_020552D4(void) {
}




void PaletteFadeUntilFinished(void) {
    TaskManager_GetFieldSystem();
    sub_0203DF7C();
    GF_AssertFail();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    TaskManager_Call(r4, sub_020552D4, 0);
}




void CallTask_FadeFromBlack(void) {
    TaskManager_GetFieldSystem();
    sub_0203DF7C();
    GF_AssertFail();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    TaskManager_Call(r4, sub_020552D4, 0);
}




u32 sub_02055370(void) {
    // str r0, [r4]
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
    // str r0, [r4]
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



