/* Decompiled from asm/unk_0203A3B0.s */
#include "global.h"

void sub_0203A3B0(void) {
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x1c]
    sub_0203A4D4(r1);
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x10]
    sub_0203A59C(r4);
    Heap_AllocAtEnd(r4, 0x24);
    SysTask_CreateOnVWaitQueue(sub_0203A42C, r0, 5);
    *((u32*)(r4 + 0x18)) = r0;
    // ldr r2, [sp, #0x1c]
    *((u16*)(r4 + 0xc)) = r5;
    // asr r1, r2, #4
    // add r1, r2, r1
    // asr r2, r1, #5
    *((u16*)(r4 + 0xe)) = r6;
    // str r0, [r4]
    // add r1, #0x20
    // strb r2, [r1]
    // ldr r2, [sp, #0x18]
    // add r1, #0x21
    // strb r2, [r1]
    // add r1, #0x22
    // strb r0, [r1]
    *((u32*)(r4 + 4)) = 3;
    // ldr r1, [sp, #0x14]
    *((u32*)(r4 + 0x14)) = 3;
    // ldr r1, [sp, #0x10]
    *((u32*)(r4 + 8)) = 0;
    *((u8*)(r4 + 0x10)) = 3;
    *((u8*)(r4 + 0x12)) = 0;
    *((u8*)(r4 + 0x11)) = 0;
    *((u32*)(r4 + 0x1c)) = (7 << 0x18);
}




void sub_0203A42C(void) {
}




void sub_0203A438(void) {
}




void sub_0203A444(void) {
    SysTask_Destroy(*((u32*)(r0 + 0x18)));
    // str r2, [r0]
    *((u16*)((7 << 0x18) + 4)) = 0;
    // str r2, [r0]
    *((u16*)(0x07000400 + 4)) = 0;
    Heap_Free(r4, 0, 0x40000200);
}




void sub_0203A478(void) {
}




void sub_0203A4AC(void) {
    Heap_AllocAtEnd((0x96 << 2));
    // str r0, [sp]
    // add r1, sp, #0
    sub_0201A3F8(_0210F930);
    // ldr r0, [sp]
    DC_FlushRange((0x96 << 2));
    // ldr r0, [sp]
}




void sub_0203A4D4(void) {
    Heap_AllocAtEnd(r3, (0x96 << 2));
    // str r0, [sp, #4]
    // add r1, sp, #4
    sub_0201A3F8(_0210F930);
    // ldr r0, [sp, #4]
    DC_FlushRange((0x96 << 2));
    // ldr r0, [sp, #4]
    // add r1, sp, #0
    NNS_G2dGetUnpackedPaletteData();
    // ldr r0, [sp]
    GX_LoadOBJPltt(*((u32*)(r0 + 0xc)), r4, 0x20);
    // ldr r0, [sp]
    GXS_LoadOBJPltt(*((u32*)(r0 + 0xc)), r4, 0x20);
    // ldr r0, [sp, #4]
    Heap_Free();
}




void sub_0203A534(void) {
    GF_AssertFail(0x00300010);
    // add r1, sp, #0x14
    sub_0201A3F8(_0210F940);
    // add r1, sp, #0x14
    sub_0201A3F8(_0210F954);
    // ldr r0, [sp, #0x14]
    DC_FlushRange((0x96 << 2));
    sub_0201A3F8(_0210F964);
    // ldr r0, [sp, #0x14]
    DC_FlushRange((0x13 << 6));
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0
    NNS_G2dGetUnpackedBGCharacterData();
    // ldr r0, [sp]
}




void sub_0203A59C(void) {
    // str r1, [sp]
    // and r4, r0
    GX_GetBankForOBJ(0x00300010, *((u32*)(1 << 0x1a)));
    // and r4, r0
    GX_GetBankForSubOBJ(0x00300010, *((u32*)0x04001000));
    Heap_AllocAtEnd(r5, (0x13 << 6));
    // str r0, [sp, #4]
    Heap_AllocAtEnd(r5, (0x96 << 2));
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r3, [sp, #4]
    sub_0203A534(r4, r5);
    DC_FlushRange(*((u32*)(r0 + 0x14)), (2 << 8));
    GX_LoadOBJ(*((u32*)(r5 + 0x14)), r6, (2 << 8));
    DC_FlushRange((1 << 0xa));
    GX_LoadOBJ(*((u32*)(r5 + 0x14)), r6, (1 << 0xa));
    DC_FlushRange(*((u32*)(r5 + 0x14)), (2 << 8));
    GXS_LoadOBJ(*((u32*)(r5 + 0x14)), r6, (2 << 8));
    DC_FlushRange((1 << 0xa));
    GXS_LoadOBJ(*((u32*)(r5 + 0x14)), (0xf << 0xa), (1 << 0xa));
    // ldr r0, [sp, #4]
    Heap_Free();
}




void sub_0203A700(void) {
    // and r0, r1
    // asr r0, r0, #0xf
    // and r0, r1
    // asr r0, r0, #0xf
    // add r0, #0x21
    // and r6, r0
    GX_GetBankForOBJ(0x00300010, *((u32*)(1 << 0x1a)));
    // and r6, r0
    GX_GetBankForSubOBJ(0x00300010, *((u32*)0x04001000));
    // add r3, r1, r0
    // add r3, r1, r0
    // add r3, r1, r0
    // add r3, r4, r0
    // add r3, r4, r0
    // add r3, r4, r0
    // add r3, r4, r0
    // add r3, r4, r0
    // add r3, r1, r0
    // add r0, #0x20
    // add r0, #0x22
    // str r0, [r4]
    *((u16*)(0x07000400 + 4)) = ((*((u8*)r5) << 0xc) | r3);
    // add r1, #0x22
    // str r1, [r0]
    *((u16*)(*((u32*)(r5 + 0x1c)) + 4)) = 0;
    *((u32*)(r5 + 0x1c)) = 0x07000400;
}




void sub_0203A86C(void) {
}




void sub_0203A880(void) {
    // str r0, [sp]
}




void sub_0203A8A8(void) {
    // str r0, [sp]
}




void sub_0203A8CC(void) {
    sub_02034DCC();
    sub_0203A914(*((u32*)_021D4154));
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    sub_0203A3B0(0, 0x59, r6, r7);
    // str r0, [r1]
}




void sub_0203A914(void) {
}




void sub_0203A930(void) {
}




void sub_0203A948(void) {
}




void sub_0203A964(void) {
}




void sub_0203A994(void) {
}




void sub_0203A9C8(void) {
    // add r1, #0x22
    // strb r0, [r1]
}



