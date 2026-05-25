/* Decompiled from asm/overlay_12_0226B8FC.s */
#include "global.h"

void ov12_0226B8FC(void) {
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #4]
}




void ov12_0226B97C(void) {
    // ldr r1, [sp, #0x10]
}




void * ov12_0226B9A4(void) {
    // mov ip, r2
    // add r2, sp, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x50]
    // str r5, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x54]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x5c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x60]
    // str r0, [sp, #0x30]
    // mov r0, ip
    Heap_Alloc(*((u32*)ov12_0226EBA0), 0x18, ov12_0226EBA0);
    // str r0, [sp]
    MI_CpuFill8(0, 0x18);
    // ldr r5, [sp]
    // add r2, sp, #4
    SpriteSystem_NewSprite(r6, r7);
    // stmia r5!, {r0}
    ManagedSprite_SetDrawFlag(0);
    // ldr r1, [sp]
    SysTask_CreateOnMainQueue(ov12_0226BB90, 0x00009C40);
    // ldr r1, [sp]
    *((u32*)(r1 + 0x14)) = r0;
}




void ov12_0226BA28(void) {
}




void ov12_0226BA4C(void) {
    // ldr r4, [sp, #0x24]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // ldr r2, [sp, #0x10]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x18]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x20]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}




void ov12_0226BAD4(void) {
    // ldr r4, [sp, #0x20]
    // str r4, [sp]
    // ldr r4, [sp, #0x24]
    // str r4, [sp, #4]
    // ldr r4, [sp, #0x28]
    // str r4, [sp, #8]
    // ldr r4, [sp, #0x2c]
    // str r4, [sp, #0xc]
    // ldr r4, [sp, #0x30]
    // str r4, [sp, #0x10]
    // str r4, [sp, #0x14]
}




void ov12_0226BAFC(void) {
}




void ov12_0226BB1C(void) {
}




void ov12_0226BB40(void) {
    // ldr r3, [sp, #0x10]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}




void ov12_0226BB68(void) {
}




void ov12_0226BB84(void) {
}




void ov12_0226BB90(void) {
}



