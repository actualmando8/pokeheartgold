/* Decompiled from asm/overlay_01_021F8D80.s */
#include "global.h"

void ov01_021F8D80(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    // add r1, sp, #8
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // add r2, sp, #8
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldrsb r0, [r4, r0]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r2, [sp]
    // ldr r1, [sp, #0xc]
    // sub r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r1, sp, #8
}




void ov01_021F8E70(void) {
    // add r1, sp, #0
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F8E9E: ; jump table
    // add r0, r1, r0
    // sub r0, r1, r0
    // add r0, r1, r0
    // str r0, [r4]
    // sub r0, r1, r0
    // str r0, [r4]
    // add r0, r1, r0
    // str r0, [r4]
    // sub r0, r1, r0
    // str r0, [r4]
}




void ov01_021F8F08(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // add r1, sp, #0
    // ldr r1, [sp]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // ldr r1, [sp, #8]
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r0, r0, #0xc
}




void ov01_021F8F68(void) {
}




void ov01_021F8F74(void) {
}




void ov01_021F8F88(void) {
}




void ov01_021F8FA0(void) {
}




void ov01_021F8FC0(void) {
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r4, r1, #0xc
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F8FE4: ; jump table
    // sub r4, #0x14
    // sub r4, #0x28
    // sub r4, #0x3c
}




void ov01_021F902C(void) {
}




void ov01_021F9048(void) {
}




void ov01_021F9058(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
}




void ov01_021F9078(void) {
    sub_0205F40C();
    ov01_021FA2D4(r5);
    sub_0205F330(r5);
    // blx r3
    sub_0205F330(r5, r4, r7, *((u32*)(ov01_02208B5C + (r0 << 2))));
    *((u32*)(r7 + 0x10)) = r0;
    ov01_021FA3E8(r5, r4);
    ov01_021F91A4(r5, r4);
}




void ov01_021F90C8(void) {
}




void ov01_021F90D0(void) {
}




void ov01_021F90FC(void) {
}




void ov01_021F9140(void) {
}




void ov01_021F9154(void) {
}




void ov01_021F917C(void) {
}




void ov01_021F91A4(void) {
}




void ov01_021F91E4(void) {
}




void ov01_021F91F8(void) {
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // str r4, [sp]
    // str r6, [sp, #4]
    // ldr r1, [sp, #0x30]
    // str r7, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    // ldr r3, [sp, #0x10]
}




void ov01_021F9250(void) {
}




void FldObjSys_OpenMModelNarc(void) {
}




void FldObjSys_CloseMModelNarc(void) {
}




void ov01_021F92A0(void) {
}




void ObjectEvent_GetGraphicsInfo(void) {
    GF_AssertFail(ov01_022074A8, 0x0000FFFF, *((u16*)(ov01_022074A8 + 6)), (ov01_022074A8 + 6));
}




void GetMoveModelNoBySpriteId(void) {
}




void ov01_021F9318(void) {
}




void ov01_021F9324(void) {
}




void ov01_021F9344(void) {
}




void ReadMModelFromNarcInternal(void) {
}




void ov01_021F93AC(void) {
    // add r1, sp, #0x24
    // add r1, sp, #0x18
    // add r1, sp, #0xc
    // add r1, sp, #0
    // ldr r1, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0xc]
    // add r0, r1, r0
    // ldr r3, [sp]
    // add r0, r2, r0
    // add r0, r3, r0
    // str r0, [r4]
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x10]
    // add r0, r1, r0
    // ldr r3, [sp, #4]
    // add r0, r2, r0
    // add r0, r3, r0
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r1, r0
    // ldr r3, [sp, #8]
    // add r0, r2, r0
    // add r0, r3, r0
}




void ov01_021F9408(void) {
}




void ov01_021F9424(void) {
}




void ov01_021F943C(void) {
    // bx lr
    // TODO: decompile
}




void ov01_021F9440(void) {
    // bx lr
    // TODO: decompile
}




void ov01_021F9444(void) {
    // bx lr
    // TODO: decompile
}




void ov01_021F9448(void) {
    // bx lr
    // TODO: decompile
}



