/* Decompiled from asm/overlay_80_02239D74.s */
#include "global.h"

void * ov80_02239D74(void) {
    Heap_Alloc(0x65, 0xc);
    MI_CpuFill8(0, 0xc);
    ov80_02239DD0(r5);
    // str r0, [r4]
    ov80_02239F48(r6);
    *((u32*)(r4 + 4)) = r0;
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x1f, 8);
}




void ov80_02239DB8(void) {
}




void * ov80_02239DD0(void) {
    Heap_Alloc(0x65, 0x0002200C);
    // str r0, [sp, #8]
    MI_CpuFill8(0, 0x0002200C);
    // ldr r0, [sp, #8]
    *((u32*)(r0 + 4)) = r4;
    NARC_New(0xb7, 0x65);
    // ldr r5, [sp, #8]
    // str r0, [sp, #4]
    // add r5, #8
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r3, sp, #0x10
    GfGfxLoader_GetScrnDataFromOpenNarc(0x65, *((u16*)ov80_0223DB2C), 1);
    // ldr r0, [sp, #0x10]
    // add r0, #0xc
    MIi_CpuCopy32(r5, (1 << 0xc));
    Heap_Free(r7);
    // add r5, r5, r0
    // ldr r0, [sp, #4]
    NARC_Delete((1 << 0xc));
    NARC_New(0xb7, 0x65);
    // str r1, [sp]
    // add r3, sp, #0xc
    GfGfxLoader_GetCharDataFromOpenNarc(0xe, 1);
    // ldr r3, [sp, #0xc]
    // ldr r1, [sp, #8]
    // add r1, r1, r2
    MIi_CpuCopy32(*((u32*)(r3 + 0x14)), *((u32*)(r3 + 0x10)));
    Heap_Free(r5);
    // str r0, [sp]
    // add r3, sp, #0xc
    GfGfxLoader_GetCharDataFromOpenNarc(r4, 0xf, 1);
    // ldr r3, [sp, #0xc]
    // ldr r1, [sp, #8]
    // add r1, r1, r2
    MIi_CpuCopy32(*((u32*)(r3 + 0x14)), *((u32*)(r3 + 0x10)));
    Heap_Free(r5);
    NARC_Delete(r4);
    // ldr r1, [sp, #8]
    SysTask_CreateOnMainQueue(ov80_02239ED8, 0x0001368C);
    // ldr r1, [sp, #8]
    // str r0, [r1]
}




void ov80_02239EC4(void) {
}




void ov80_02239ED8(void) {
    // strb r0, [r4, r3]
    // strb r0, [r4, r3]
    // str r0, [sp]
    // add r2, r4, r2
    // add r2, r2, r3
    BG_LoadCharTilesData(*((u32*)(r1 + 4)), 3, 0x00002008, (1 << 0x10));
    // add r3, #8
    // add r2, r3, r2
    BG_LoadScreenTilemapData(*((u32*)(r4 + 4)), 3, (*((u8*)(r4 + 0x00022009)) << 0xc), (1 << 0xc));
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 4)), 3);
    // eor r0, r2
    // strb r0, [r4, r1]
}




void * ov80_02239F48(void) {
    Heap_Alloc(0x65, 0x6c);
    MI_CpuFill8(0, 0x6c);
    *((u32*)(r4 + 4)) = r5;
    // add r0, #0x68
    // strb r1, [r0]
    PaletteData_GetUnfadedBuf(r5, 0);
    // add r0, #0xa0
    // add r1, #8
    MIi_CpuCopy16(r4, 0x60);
    SysTask_CreateOnMainQueue(ov80_02239FA8, r4, 0x0001368D);
    // str r0, [r4]
}




void ov80_02239F94(void) {
}




void ov80_02239FA8(void) {
    // add r0, #0x69
    // add r0, #0x69
    // add r4, #0x69
    // strb r0, [r4]
    // add r0, #0x69
    // strb r2, [r0]
    // str r0, [sp]
    // add r1, #0x68
    // add r3, #8
    // add r1, r3, r1
    // add r0, #0x68
    // add r0, #0x68
    // strb r1, [r0]
    // add r0, #0x68
    // add r4, #0x68
    // strb r0, [r4]
}



