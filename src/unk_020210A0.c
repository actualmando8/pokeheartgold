/* Decompiled from asm/unk_020210A0.s */
#include "global.h"

void GF_TouchpadInit(void) {
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
}




void sub_020210BC(void) {
}




void sub_020210D8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_020211AC(1, 1, r0, r1);
    GF_TouchpadStartAutoSampling(r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_020211AC(1, 1, r5, r6);
}




void sub_02021148(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    sub_020211AC(2, 1, 0, 0);
    GF_TouchpadStartAutoSampling(0, *((u16*)(r1 + 0x18)));
    // str r2, [sp]
    // str r0, [sp, #4]
    sub_020211AC(2, 1, 0, 0);
}




void sub_020211AC(void) {
    *((u16*)(_021D2198 + 0x18)) = r0;
    *((u8*)(gSystem + 8)) = r1;
    // ldr r1, [sp, #0xc]
    // str r2, [r0]
    *((u32*)(_021D2198 + 4)) = r3;
    *((u32*)(_021D2198 + 8)) = r1;
    // ldr r1, [sp, #8]
    *((u32*)(_021D2198 + 0x54)) = r1;
    sub_020211E0(_021D2198, 9);
}




void sub_020211E0(void) {
    // add r0, #8
}




void GF_TouchpadStopAutoSampling(void) {
    TP_RequestAutoSamplingStopAsync(1);
    TP_WaitBusy(r4);
    TP_CheckBusy(r6);
}




BOOL sub_02021238(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_020211AC(0, 0, 0, 0);
    GF_TouchpadStopAutoSampling(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_020211AC(0, 0, 0, 0);
}




void sub_02021280(void) {
    sub_02021528(3, _021D2198, *((u16*)(_021D2198 + 0x1a)));
    TP_GetLatestIndexInAuto(*((u16*)(r2 + 0x18)));
    sub_020212EC(_021D2198, 9);
    sub_02021540(r5, r6);
    sub_020213C8(r4, r6, r7);
}




void sub_020212EC(void) {
    // str r1, [sp]
    // add r6, sp, #4
    // add r0, sp, #4
    // add r5, #8
    // strh r0, [r4]
    // ldr r0, [sp]
    // add r4, #8
}




void GF_TouchpadResumeOnLidOpen(void) {
    GF_TouchpadStartAutoSampling((*((u32*)(_021D2198 + 8)) >> 1), *((u16*)(_021D2198 + 0x1a)));
    GF_AssertFail();
    *((u16*)(_021D2198 + 0x1a)) = 0;
}




void GF_TouchpadPauseOnLidClose(void) {
    GF_TouchpadStopAutoSampling(*((u16*)(_021D2198 + 0x18)), *((u16*)(_021D2198 + 0x1a)));
    GF_AssertFail();
    *((u16*)(_021D2198 + 0x1a)) = 1;
}




void GF_TouchpadStartAutoSampling(void) {
    TP_RequestAutoSamplingStartAsync(0, ((r0 << 0x10) >> 0x10), _021D2198, 9);
    TP_WaitBusy(2);
    TP_CheckBusy(2);
}




void sub_020213C8(void) {
    // add r3, r0, r0
    // add r3, pc
    // asr r3, r3, #0x10
    // add pc, r3
    // _020213DA: ; jump table
}




void sub_020213F8(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // sub r0, r0, r1
    // add r0, r4, r0
    // asr r0, r0, #0x10
    // bpl _02021420
    // add r0, #9
    // asr r0, r0, #0x10
    // add r1, r0, r1
    // add r2, r0, r2
    // sub r0, #8
    // sub r3, r0, r3
    // sub r3, r3, r0
    // sub r0, r6, r0
    // sub r0, r0, r6
    // strh r0, [r2]
    *((u16*)((*((u32*)(_021D2198 + 0x54)) << 3) + 2)) = *((u16*)(((((r0 + 1) << 0x10) << 0x10) << 3) + 0xe));
    *((u16*)((*((u32*)(_021D2198 + 0x54)) << 3) + 4)) = *((u16*)(((((r0 + 1) << 0x10) << 0x10) << 3) + 0x10));
    *((u16*)((*((u32*)(_021D2198 + 0x54)) << 3) + 6)) = *((u16*)(((((r0 + 1) << 0x10) << 0x10) << 3) + 0x12));
    *((u32*)(_021D2198 + 0x54)) = (*((u32*)(_021D2198 + 0x54)) + 1);
    // ldr r2, [sp]
    _u32_div_f((*((u32*)(_021D2198 + 0x54)) + 1), *((u32*)(_021D2198 + 4)), (*((u32*)(_021D2198 + 0x54)) << 3), *((u16*)(((((r0 + 1) << 0x10) << 0x10) << 3) + 0xc)));
    *((u32*)(r5 + 0x54)) = r1;
    // mvn r0, r0
}




void sub_020214B0(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // sub r0, r0, r1
    // add r0, r4, r0
    // asr r1, r0, #0x10
    // bpl _020214D4
    // add r1, #9
    // asr r1, r0, #0x10
    // add r2, r0, r1
    // add r1, r6, r3
    // strh r0, [r6, r3]
    *((u16*)((*((u32*)(_021D2198 + 8)) << 3) + 2)) = *((u16*)(r2 + 0xe));
    *((u16*)((*((u32*)(_021D2198 + 8)) << 3) + 4)) = *((u16*)(r2 + 0x10));
    *((u16*)((*((u32*)(_021D2198 + 8)) << 3) + 6)) = *((u16*)(r2 + 0x12));
    *((u32*)(_021D2198 + 0x54)) = (*((u32*)(_021D2198 + 0x54)) + 1);
    _u32_div_f((*((u32*)(_021D2198 + 0x54)) + 1), *((u32*)(_021D2198 + 4)), (*((u32*)(_021D2198 + 0x54)) << 3));
    *((u32*)(r5 + 0x54)) = r1;
    // mvn r0, r0
}




void sub_02021528(void) {
    // strh r2, [r0]
    // add r0, #8
}




void sub_02021540(void) {
    sub_02021528();
    // sub r1, r4, r1
    // add r1, r6, r1
    // asr r1, r1, #0x10
    // bpl _02021568
    // add r1, #9
    // asr r1, r1, #0x10
    // add r3, r2, r1
    // add r1, r5, r1
    *((u16*)((*((u16*)r5) << 3) + 2)) = *((u16*)(r3 + 0xc));
    *((u16*)((*((u16*)r5) << 3) + 4)) = *((u16*)(r3 + 0xe));
    *((u16*)((*((u16*)r5) << 3) + 6)) = *((u16*)(r3 + 0x10));
    *((u16*)((*((u16*)r5) << 3) + 8)) = *((u16*)(r3 + 0x12));
    // strh r1, [r5]
}



