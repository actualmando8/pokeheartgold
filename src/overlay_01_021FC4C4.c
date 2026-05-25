/* Decompiled from asm/overlay_01_021FC4C4.s */
#include "global.h"

void * ov01_021FC4C4(void) {
    // add r6, r5, r2
    // add r6, #0x18
    // str r2, [sp, #8]
    // str r0, [sp]
    // str r3, [sp, #4]
    Heap_Create(r6);
    GF_AssertFail();
    // sub r5, r6, r5
    Heap_Alloc(r7, r5);
    GF_AssertFail();
    memset(r4, 0, r5);
    // ldr r0, [sp]
    // str r0, [r4]
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 4)) = r7;
    *((u32*)(r4 + 8)) = r0;
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0xc)) = r6;
    *((u32*)(r4 + 0x10)) = r0;
    // add r0, #0x18
    *((u32*)(r4 + 0x14)) = r4;
}



void ov01_021FC520(void) {
    ov01_021FC588(r0, *((u32*)(*((u32*)(r0 + 0x14)) + 4)));
    // add r5, #8
    Heap_Free(r6);
    Heap_Destroy(r4);
}



CacheEntry * ov01_021FC554(void) {
    ov01_021FC644();
    // str r0, [sp]
    GF_AssertFail();
    ov01_021FC5FC(r5, r6, r7);
    // ldr r0, [sp]
    ov01_021FC65C(r4, r0);
}



void ov01_021FC588(void) {
    ov01_021FC624();
    GF_AssertFail();
    ov01_021FC61C(*((u32*)r4));
    ov01_021FC664(r4);
}



CacheEntry * ov01_021FC5A4(void) {
    ov01_021FC624();
    GF_AssertFail();
}



void ov01_021FC5B8(void) {
}



void ov01_021FC5CC(void) {
    NARC_GetMemberSize(r2, r3);
    // ldr r3, [sp, #0x18]
    ov01_021FC554(r5, r6, r0);
    NARC_ReadWholeMember(r4, r7, r0);
}



CacheEntry * ov01_021FC5FC(void) {
    Heap_Alloc(*((u32*)(r0 + 4)));
    Heap_AllocAtEnd();
    GF_AssertFail();
}



void ov01_021FC61C(void) {
}



CacheEntry * ov01_021FC624(void) {
    // add r0, #8
}



CacheEntry * ov01_021FC644(void) {
    // add r0, #8
}



void ov01_021FC65C(void) {
}



void ov01_021FC664(void) {
}


