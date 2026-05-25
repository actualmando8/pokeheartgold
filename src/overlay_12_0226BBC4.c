/* Decompiled from asm/overlay_12_0226BBC4.s */
#include "global.h"

void ov12_0226BBC4(void) {
    // str r6, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x14]
    // str r3, [sp]
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




void ov12_0226BC40(void) {
    // ldr r1, [sp, #0x10]
}




void * ov12_0226BC68(void) {
    // str r1, [sp]
    // add r4, sp, #4
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
    // ldr r0, [sp, #0x50]
    // str r6, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x54]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x58]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x5c]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x60]
    // str r0, [sp, #0x30]
    Heap_Alloc(r2, 0x20, (6 - 1));
    MI_CpuFill8(0, 0x20);
    // ldr r1, [sp]
    // add r2, sp, #4
    SpriteSystem_NewSprite(r7);
    // str r0, [r4]
    ManagedSprite_SetDrawFlag(0);
    *((u32*)(r4 + 0x14)) = (3 << 0x12);
    SysTask_CreateOnMainQueue(ov12_0226BD54, r4, 0x000003E7);
    *((u32*)(r4 + 4)) = r0;
}




void ov12_0226BCE4(void) {
}




void ov12_0226BCFC(void) {
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
}




void ov12_0226BD2C(void) {
}




void ov12_0226BD38(void) {
}




void ov12_0226BD4C(void) {
}




void ov12_0226BD50(void) {
}




void ov12_0226BD54(void) {
    *((u8*)(r1 + 0x1b)) = 0;
    // ldrsh r1, [r4, r0]
    *((u16*)(r1 + 0x18)) = (r1 - 1);
    // ldrsh r0, [r4, r0]
    *((u8*)(r1 + 0x1a)) = 1;
    ManagedSprite_GetDrawFlag(*((u32*)r1), (r1 - 1));
    // add r2, r2, r1
    // add r0, #0x10
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 0x10));
    // sub r1, r2, r1
    // str r1, [r0]
    *((u8*)(r4 + 0x1c)) = 1;
    *((u8*)(r4 + 0x1a)) = 0;
    _s32_div_f(*((u32*)(r4 + 0x10)), 0x64, *((u32*)r4));
    GF_SinDegNoWrap(((r0 << 0x10) >> 0x10));
    // asr r1, r0, #0x1f
    _ll_mul((0xe << 0xc), 0);
    // asr r1, r1, #0x10
    // add r2, r6, r2
    // adc r5, r7
    // asr r5, r2, #0xb
    // add r5, r2, r5
    // asr r2, r5, #0xc
    // sub r2, r3, r2
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r4), (*((u32*)(r4 + 8)) << 0x10), ((((2 << 0xa) >> 0xc) | (r1 << 0x14)) << 0x10), *((u32*)(r4 + 0x14)));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0226BE1E: ; jump table
    *((u8*)(r4 + 0x1e)) = (*((u8*)(r4 + 0x1e)) + 1);
    *((u8*)(r4 + 0x1e)) = 0;
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    // add r2, #8
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r4), (*((u32*)(r4 + 8)) << 0x10), (*((u32*)(r4 + 0xc)) << 0x10), *((u32*)(r4 + 0x14)));
    *((u8*)(r4 + 0x1b)) = 1;
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    *((u8*)(r4 + 0x1e)) = (*((u8*)(r4 + 0x1e)) + 1);
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset(*((u32*)r4), (*((u32*)(r4 + 8)) << 0x10), ((*((u32*)(r4 + 0xc)) + 2) << 0x10), *((u32*)(r4 + 0x14)));
    *((u8*)(r4 + 0x1e)) = 0;
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    *((u8*)(r4 + 0x1e)) = (*((u8*)(r4 + 0x1e)) + 1);
    ov12_0226BD38(r4);
    *((u8*)(r4 + 0x1e)) = 0;
    *((u8*)(r4 + 0x1d)) = (*((u8*)(r4 + 0x1d)) + 1);
    ManagedSprite_TickFrame(*((u32*)r4));
}




void ov12_0226BEB8(void) {
}



