/* Decompiled from asm/overlay_01_021E8744.s */
#include "global.h"

void ov01_021E8744(void) {
    ov01_02204554(r2);
    // mvn r1, r1
    GF_AssertFail(0);
    // add r1, #0x10
    // str r0, [r6, r1]
    // add r0, r6, r1
    *((u32*)(1 + 0xc)) = r4;
    *((u32*)(1 + 8)) = r7;
    *((u32*)(1 + 4)) = r5;
    // add r1, #0x10
}



void ov01_021E87A8(void) {
    // mvn r0, r0
    GF_AssertFail(0);
    NARC_AllocAndReadWholeMember(r5, r6, 4);
    GF_AssertFail();
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
    ov01_02204470(r4, r7, r5);
}



void ov01_021E87E4(void) {
    // str r1, [sp, #4]
    // str r0, [sp]
    Heap_Alloc(4, (0x4f << 2));
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x18)) = 0;
    *((u32*)(r0 + 0x1c)) = 0;
    // add r1, #0x10
    // add r2, #8
    // add r3, #0xc
    // str r4, [r5, r0]
    // str r4, [r5, r1]
    // str r4, [r5, r2]
    // str r4, [r5, r3]
    // add r5, #0x10
    NARC_New(0x6a, 4, (0x11 << 4), (0x11 << 4));
    // str r0, [r7, r1]
    // ldr r0, [sp]
    // str r0, [r7, r1]
    // ldr r0, [sp, #4]
    ov01_022041D8(4, 0x10);
    // str r0, [r7, r1]
}



void ov01_021E8858(void) {
    // cmp r0, #0
    // bne _021E8860
    // mov r0, #0
    // bx lr
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}



void ov01_021E8864(void) {
    // and r0, r1
}



void ov01_021E887C(void) {
    // asr r1, r0, #1
    // and r1, r0
}



void ov01_021E8894(void) {
    // ldr r7, [sp, #0x54]
    // str r2, [sp, #8]
    // ldr r0, [r7, r0]
    // add r2, sp, #0x10
    NARC_ReadWholeMember((0x4d << 2), r0);
    GF_AssertFail();
    // add r0, sp, #0x18
    // ldr r0, [r0, r1]
    // mvn r1, r1
    // str r0, [sp, #0xc]
    // add r0, sp, #0x10
    ov01_021E8864(*((u8*)(0 + 1)), 0);
    // ldr r1, [sp, #0x48]
    GF_AssertFail(*((u32*)(r7 + 0x1c)));
    // add r4, #0x10
    // add r0, r7, r4
    *((u32*)(*((u32*)(r7 + 0x14)) + 0x14)) = 1;
    // ldr r0, [r7, r0]
    ov01_022042FC((0x4e << 2), 1, 0);
    GF_AssertFail();
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x44]
    // ldr r3, [sp, #0x40]
    ov01_022044C8(r6);
    // ldr r0, [sp, #0xc]
    // add r1, r7, r4
    *((u32*)(r1 + 0x18)) = r0;
    *((u32*)(r1 + 0x1c)) = r5;
    // ldr r0, [sp, #0x4c]
    // str r0, [sp]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #4]
    // ldr r0, [r7, r1]
    // add r1, #8
    // ldr r1, [r7, r1]
    // ldr r3, [sp, #0xc]
    ov01_021E87A8((0x13 << 4), r6);
    // add r7, #0x10
    // str r6, [r7, r4]
    // ldr r0, [r7, r4]
    ov01_022044E0();
    // add r0, r7, r4
    // add r1, #0x10
    GF_AssertFail((r2 + 1));
}



void ov01_021E8970(void) {
    // ldr r6, [sp, #0x30]
    // str r3, [sp]
    GF_AssertFail();
    ov01_021E8B9C(r6);
    // ldr r0, [r6, r0]
    // add r2, sp, #4
    NARC_ReadWholeMember((0x4d << 2), r5);
    GF_AssertFail();
    // add r0, sp, #0xc
    // ldr r5, [r0, r1]
    // mvn r0, r0
    // add r0, sp, #4
    ov01_021E887C(*((u8*)(0 + 1)), (r4 << 2));
    // add r0, sp, #4
    // add r2, r6, r2
    // ldr r1, [sp]
    // add r0, r6, r0
    ov01_021E8744((0x11 << 4), r6, *((u32*)((0 << 4) + 0x10)), ((r5 << 0x18) >> 0x18));
    // add r1, r6, r1
    // ldr r0, [sp]
    ov01_0220450C(1, *((u32*)((r4 << 4) + 0x10)));
    // add r1, #0x10
}



void ov01_021E8A28(void) {
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0x1c)) = 0;
    // add r0, #0x10
}



void ov01_021E8A50(void) {
    GF_AssertFail();
    // ldr r0, [r4, r0]
    ov01_02204500((0x4e << 2), *((u32*)r5));
    // ldr r0, [r4, r0]
    ov01_0220431C((0x4e << 2), *((u32*)r5));
    *((u32*)(r5 + 4)) = 0;
    *((u32*)(r5 + 0xc)) = 0;
}



void ov01_021E8A8C(void) {
    // ldr r0, [r4, r0]
    // add r2, sp, #0
    NARC_ReadWholeMember((0x4d << 2), r2);
    GF_AssertFail();
    // add r0, sp, #8
    // ldr r5, [r0, r1]
    // mvn r0, r0
    GF_AssertFail(0, (r5 << 2));
    // add r1, r4, r1
    ov01_02204518(r6, *((u32*)((0 << 4) + 0x10)), *((u32*)((0 << 4) + 0x18)));
}



void ov01_021E8AEC(void) {
    // ldr r0, [r4, r0]
    NARC_Delete((0x13 << 4));
    Heap_Free(r4);
}



void ov01_021E8B04(void) {
    // ldr r0, [r5, r0]
    // add r2, sp, #0
    NARC_ReadWholeMember((0x4d << 2), r0, r0);
    GF_AssertFail();
    // add r0, sp, #8
    // ldr r1, [r0, r1]
    // add r5, #0x10
    // add r4, r5, r0
    GF_AssertFail(*((u32*)(0 + 4)), (r4 << 2), 0, r5);
    // add r3, #0x10
    GF_AssertFail((r2 + 1));
}



void ov01_021E8B60(void) {
}



void ov01_021E8B6C(void) {
}



void ov01_021E8B78(void) {
}



void ov01_021E8B84(void) {
}



void ov01_021E8B90(void) {
}



void ov01_021E8B9C(void) {
    // mov r1, #0x4d
    // lsl r1, r1, #2
    // ldr r3, _021E8BA8 ; =NARC_GetFileCount
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021E8BA8: .word NARC_GetFileCount
    // TODO: decompile
}



void ov01_021E8BAC(void) {
    // ldr r0, [r0, r2]
    // add r2, sp, #0
    NARC_ReadWholeMember((0x4d << 2));
    // add r0, sp, #0
    // ldrb r0, [r0]
    // add r3, sp, #0
    // add r2, r3, r2
}



void ov01_021E8BE8(void) {
    GF_AssertFail();
    // mul r3, r2
    // add r3, r5, r3
    // add r3, #0x34
    // ldrb r3, [r3]
    // mul r2, r0
    // add r0, r5, r2
    // add r0, #0x34
    // strb r4, [r0]
    // add r0, r5, r2
    // add r0, #0x35
    // strb r1, [r0]
    GF_AssertFail(0x38, 0, 0, 0);
    // add r0, r5, r2
}



void ov01_021E8C40(void) {
    // add r1, #0x34
    // strb r3, [r1]
    *((u32*)(r0 + 0x30)) = 0;
    *((u32*)(r0 + 0x2c)) = 0;
    // add r1, r0, r1
    *((u32*)((0 << 2) + 0x14)) = 0;
}



void ov01_021E8C60(void) {
    // add r2, #0x34
    // ldrb r2, [r2]
    // mul r1, r3
    // add r4, r0, r1
    // add r5, #0x38
}



void ov01_021E8C88(void) {
}



void ov01_021E8CA4(void) {
}



void ov01_021E8CBC(void) {
    GF_AssertFail(*((u32*)(r0 + 0x10)));
    // ldr r0, [r5, r0]
    // str r0, [sp, #4]
    ov01_021E8858((r4 << 2));
    // str r0, [sp]
    ov01_021E8858(*((u32*)(r5 + 0x2c)));
    // add r6, r5, r0
    ov01_02204518(*((u32*)(r6 + 0x14)), r0);
    // ldr r1, [sp]
    ov01_0220450C(*((u32*)(r6 + 0x14)));
    // ldr r0, [sp, #4]
    *((u32*)(r5 + 0x2c)) = ((r4 + 1) << 0x18);
}



void ov01_021E8D10(void) {
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x40]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x4c]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x4c]
    // str r3, [sp, #0x24]
    // ldr r6, [sp, #0x44]
    // ldr r7, [sp, #0x48]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x40]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // str r7, [sp, #0x14]
    ov01_021E8894(1, 0, 0);
    GF_AssertFail();
    // ldr r0, [sp, #0x4c]
    ov01_021E8CA4(r5, r4);
    // ldr r0, [sp, #0x24]
}



void ov01_021E8D6C(void) {
    // str r0, [sp]
    ov01_021E8858(*((u32*)(r1 + 0x2c)));
    ov01_02204518(*((u32*)(r6 + 0x14)), r0);
    // ldr r1, [sp]
    ov01_021E8A50(*((u32*)r6));
    // stmia r4!, {r7}
}



void ov01_021E8DB4(void) {
    Heap_Alloc(4, (0xe << 6));
    MIi_CpuClearFast(0, r0, (0xe << 6));
}



void ov01_021E8DD4(void) {
}



void ov01_021E8DE8(void) {
    ov01_021E8BE8(r1, ((r2 << 0x18) >> 0x18));
    GF_AssertFail();
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x34]
    ov01_021E8C88(r5);
    // add r0, sp, #0x38
    // ldrb r4, [r0]
    GF_AssertFail();
    // ldr r0, [sp, #0x3c]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x34]
    // str r5, [sp, #0xc]
    ov01_021E8D10(r6);
    *((u32*)(r5 + 0x30)) = r6;
}



void ov01_021E8E40(void) {
    GF_AssertFail();
    ov01_021E8C60(r5, r7);
    // add r5, #0x14
    // ldr r0, [r5, r4]
    GF_AssertFail();
    // str r6, [r5, r4]
}



void ov01_021E8E70(void) {
    GF_AssertFail();
    ov01_021E8C60(r5, r4);
    ov01_021E8CBC(r6);
    ov01_021E8B60(0);
}



void ov01_021E8E98(void) {
    GF_AssertFail();
    ov01_021E8C60(r6, r5);
    ov01_021E8CBC(r7);
    PlaySE(((r4 << 0x10) >> 0x10));
    ov01_021E8B60(r5, 0);
}



void ov01_021E8ED0(void) {
    GF_AssertFail();
    ov01_021E8C60(r4, r6);
    ov01_021E8D6C(r5, r0);
    ov01_021E8C40(r4);
}



void ov01_021E8EF8(void) {
    GF_AssertFail();
    ov01_021E8C60(r5, r4);
}



void ov01_021E8F10(void) {
    ov01_021E8EF8();
    GF_AssertFail();
    ov01_02204560(*((u32*)r4));
}



void ov01_021E8F30(void) {
}



void ov01_021E8F3C(void) {
    // ldr r0, [sp, #0x50]
    // ldr r7, [sp, #0x54]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x1c]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    ov01_021E8B9C(r7);
    // ldr r0, [sp, #0x50]
    // ldrb r0, [r0]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // mvn r1, r1
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x50]
    ov01_021E8864(*((u8*)(*((u32*)(0 + 8)) + 1)), 0);
    // ldr r0, [sp, #0x50]
    ov01_021E887C(*((u8*)(r0 + 1)));
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x14]
    // add r5, r7, r0
    *((u32*)(r5 + 0x14)) = 1;
    // ldr r0, [r7, r0]
    ov01_022042FC((0x4e << 2), r7);
    GF_AssertFail();
    // ldr r0, [sp, #0x50]
    ov01_022044C8(r6, 1, 1, 0);
    // mvn r1, r1
    ov01_022044C8(r6, 0, 0, 0);
    // ldr r0, [sp, #0x24]
    *((u32*)(r5 + 0x18)) = r0;
    *((u32*)(r5 + 0x1c)) = 0;
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r0, [r7, r1]
    // add r1, #8
    // ldr r1, [r7, r1]
    ov01_021E87A8(0, (0x13 << 4), r6);
    *((u32*)(r5 + 0x10)) = r6;
    ov01_022044E0(r6);
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x50]
    // ldr r3, [sp, #0x24]
    // ldr r1, [sp, #0xc]
    // add r0, r7, r0
    ov01_021E8744((0x11 << 4), *((u32*)(r5 + 0x10)), ((r3 << 0x18) >> 0x18));
    // ldr r0, [sp, #0xc]
    ov01_0220450C(1, *((u32*)(r5 + 0x10)));
    // ldr r0, [sp, #0x50]
    // ldr r0, [sp, #0x1c]
    // str r1, [sp, #0x1c]
    // add r0, sp, #0x28
    // str r2, [r0, r1]
    // add r1, #0x10
    GF_AssertFail(*((u8*)(r0 + 1)), (*((u8*)(r0 + 1)) << 2), *((u32*)(r5 + 0x10)));
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x50]
    // ldr r0, [sp, #0x58]
    ov01_02204834(*((u8*)(((r0 + 4) + 1) + 1)));
    // add r1, sp, #0x28
    // ldr r0, [sp, #0xc]
    // ldr r1, [r1, r2]
    ov01_0220450C(r0, (r0 << 2));
    // ldr r0, [sp, #0x58]
    // ldr r1, [sp, #0xc]
    // add r2, sp, #0x28
    ov01_0220476C(4);
}



void ov01_021E90B0(void) {
}


