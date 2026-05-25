/* Decompiled from asm/overlay_00_thumb.s */
#include "global.h"

void ov00_021E5900(void) {
    // str r0, [sp, #4]
    // str r3, [sp]
    GF_AssertFail(*((u32*)_0221A680));
    Heap_Alloc(r5, 0x00001108);
    MI_CpuFill8(0, 0x00001108);
    // add r2, #0x1f
    // str r2, [r1]
    // str r6, [r2, r0]
    // ldr r2, [sp, #4]
    // str r2, [r6, r3]
    // add r3, #0x28
    // str r2, [r6, r3]
    // add r3, #0x2c
    // str r2, [r6, r3]
    // add r3, #0x44
    // str r2, [r6, r3]
    // add r0, #0xf4
    // str r2, [r3, r0]
    // str r5, [r0, r2]
    // add r2, #8
    // str r5, [r3, r0]
    // str r4, [r0, r2]
    // add r1, r4, r1
    Heap_Alloc(r5, 0x00003020, 0x00001084, *((u32*)_0221A680));
    // str r0, [r2, r1]
    // add r0, #8
    // str r2, [r5, r0]
    // add r0, #0x1f
    NNS_FndCreateExpHeapEx((*((u32*)(*((u32*)_0221A680) + (0xf9 << 4))) & ~(0x1f)), r4, 0, _0221A680);
    // str r0, [r2, r1]
    // add r0, #8
    // str r6, [r2, r0]
    // str r6, [r0, r2]
    // sub r0, #0x10
    // str r7, [r3, r0]
    // sub r0, #0x38
    // str r6, [r3, r0]
    // ldr r0, [sp]
    // sub r3, #0x28
    // str r0, [r5, r3]
    // sub r0, #0x24
    // str r6, [r3, r0]
    // add r0, #0x34
    // str r6, [r3, r0]
    // sub r0, #0xc
    // str r7, [r3, r0]
    // sub r3, #8
    // str r0, [r5, r3]
    // add r3, #0x3a
    // strb r6, [r5, r3]
    // add r3, #0x28
    // str r6, [r5, r3]
    // add r3, #0x38
    // strb r6, [r5, r3]
    // add r3, #0x39
    // strb r6, [r5, r3]
    // add r3, #0x30
    // strh r0, [r5, r3]
    // add r3, #0x2c
    // str r0, [r5, r3]
    // add r2, #0x32
    // strh r0, [r3, r2]
    // ldr r0, [sp, #4]
    // sub r1, #0x1c
    sub_0202C6F4(*((u32*)(*((u32*)_0221A680) + 0x00000F94)), 0x00000F94, 0x000010A4, *((u32*)_0221A680));
    sub_0202C08C();
    // str r0, [r3, r1]
    // add r1, #0x68
    sub_0202C6F4(*((u32*)(*((u32*)r4) + (0xf1 << 4))), (0xf1 << 4), r4, *((u32*)r4));
    sub_0202C23C(r6);
    // str r0, [r2, r1]
    // strb r3, [r0, r1]
    // sub r1, #0x81
    // str r0, [r3, r1]
    // add r3, r3, r0
    // strb r4, [r3, r1]
    ov00_021E700C((0 + 1), 0x00001044, _0221A680, *((u32*)_0221A680));
    DWC_CheckHasProfile(*((u32*)(*((u32*)_0221A680) + (0xf1 << 4))), *((u32*)_0221A680));
    DWC_CheckValidConsole(*((u32*)(*((u32*)_0221A680) + (0xf1 << 4))), *((u32*)_0221A680));
}




void ov00_021E5AE8(void) {
    ov00_021E7300(*((u32*)_0221A680));
    NNS_FndDestroyExpHeap(*((u32*)(*((u32*)_0221A680) + (0x00000F98 + 4))), *((u32*)(*((u32*)_0221A680) + 0x00000F98)), *((u32*)_0221A680));
    Heap_Free(*((u32*)(*((u32*)_0221A680) + 0x00000F98)), *((u32*)_0221A680));
    // str r2, [r1, r0]
    NNS_FndDestroyExpHeap(*((u32*)(*((u32*)_0221A680) + 0x00000F94)), *((u32*)_0221A680), 0);
    // sub r1, #0xf4
    Heap_FreeExplicit(*((u32*)(*((u32*)_0221A680) + 0x00001084)), *((u32*)(*((u32*)_0221A680) + 0x00001084)), *((u32*)_0221A680));
    Heap_FreeExplicit(*((u32*)(*((u32*)_0221A680) + 0x00001084)), *((u32*)(*((u32*)_0221A680) + 0x00000F7C)), *((u32*)_0221A680));
    // str r1, [r0]
    ov00_021EC210(_0221A680, 0);
}




void ov00_021E5B6C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E5B88: ; jump table
    ov00_021EC294(ov00_021E65D4, ov00_021E6638);
    // add r0, r1, r0
    ov00_021EC3F0(0x00000F14, 2, 1, 0x14);
    ov00_021EC454(2);
    ov00_021EC4A4();
    // str r3, [r2, r0]
    // add r0, #0x20
    // str r2, [r1, r0]
    ov00_021EC5B4(0x00001070, *((u32*)_0221A680), 0, 1);
    ov00_021EC724();
    // str r2, [r1, r0]
    // str r2, [r1, r0]
    ov00_021EC60C(0x00001070, *((u32*)_0221A680), 0xc);
    ov00_021E6690();
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r0, #0xe4
    // add r0, r1, r0
    ov00_021ED730(0x20, *((u32*)(*((u32*)_0221A680) + (0xf1 << 4))), 0x000029E7, _02216400);
    // add r0, sp, #0x14
    OS_GetOwnerInfo();
    // add r0, sp, #0x18
    ov00_021EDD6C(0, ov00_021E61A8, 0);
    // str r2, [r1, r0]
    ov00_021EDB1C(0x00001070, *((u32*)_0221A680), 3);
    ov00_021EDB1C();
    ov00_021E6690(0x1b);
}




void ov00_021E5C84(void) {
    // str r0, [r4, r2]
    // str r1, [r3, r0]
}




void ov00_021E5CA0(void) {
    // str r0, [r4, r2]
    // str r1, [r3, r0]
}




void ov00_021E5CBC(void) {
    // str r0, [r2, r1]
}




void ov00_021E5CD0(void) {
    // str r0, [r4, r2]
    // str r1, [r3, r0]
}




void ov00_021E5CEC(void) {
    GF_AssertFail(*((u32*)_0221A680));
    ov00_021E7300(0, *((u32*)_0221A680));
    // add r1, sp, #8
    // ldmia r2!, {r0, r2}
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0xc]
    ov00_021F14D4(0, 8);
    GF_AssertFail();
    ov00_021F13A4(0, _02216414, r5);
    GF_AssertFail();
    // add r0, r1, r0
    MI_CpuFill8(0x00000FC4, 0, 0x80);
    // add r0, r1, r0
    sprintf(0x00000FC4, _02216034, _02216414, r5);
    // add r0, r1, r0
    strlen(0x00000FC4, *((u32*)_0221A680));
    GF_AssertFail();
    // add r1, r3, r2
    // add r2, r3, r2
    ov00_021F13A4(1, 0x00000FC4, *((u32*)_0221A680));
    // str r3, [r0, r1]
    // add r0, #0xc
    // str r4, [r3, r0]
    // str r0, [sp]
    // str r3, [sp, #4]
    // sub r1, #0xac
    // add r1, r2, r1
    ov00_021EDF1C(((r4 << 0x18) >> 0x18), 0x00001070, ov00_021E63CC, 0);
    // str r2, [r1, r0]
    ov00_021F989C(ov00_021E6428, *((u32*)_0221A680), 0);
    ov00_021F98BC(ov00_021E6484);
    ov00_021EE24C(ov00_021E6554, 0);
    ov00_021F98DC(ov00_021E6240);
    // str r3, [r0, r1]
    // add r1, #0x6d
    // strb r0, [r2, r1]
}




void ov00_021E5E34(void) {
    // str r1, [r2, r0]
    // str r1, [r2, r0]
}




void ov00_021E5E54(void) {
    // add r4, r4, r4
    // add r4, pc
    // asr r4, r4, #0x10
    // add pc, r4
    // _021E5E70: ; jump table
    // str r0, [r3, r1]
    // add r1, #0x20
    // add r3, r0, r1
    // sub r1, #0x30
    // str r3, [r0, r1]
    ov00_021F1284(*((u32*)(0xa + ((0x00001074 - 4) + 4))), (0x00001074 - 4), 0x00001074, 0xa);
    ov00_021EE278();
    ov00_021E5E34();
    sub_0203993C();
    sub_02034084();
    ov00_021E69A8(*((u32*)(*((u32*)_0221A680) + 0x00001084)), *((u32*)_0221A680));
    // add r0, #0x38
    // strh r1, [r2, r0]
    // str r2, [r1, r0]
    // str r0, [r3, r1]
    // add r0, #8
    // str r4, [r3, r0]
    // add r1, #0x28
    // str r3, [r0, r1]
    // str r0, [r3, r1]
    // add r0, #8
    // str r4, [r3, r0]
    // add r1, #0x28
    // str r3, [r0, r1]
    ov00_021E6690(0x16, *((u32*)_0221A680), 8, (0 - 1));
    // add r1, #0x20
    ov00_021EE278(*((u32*)(r3 + r1)));
    // str r2, [r1, r0]
    ov00_021E6850(0x00001070, *((u32*)_0221A680), 0x11);
}




void ov00_021E5F84(void) {
    ov00_021EE490(0);
    // blx r3
    ov00_021E6790(*((u32*)(*((u32*)_0221A680) + 0x00001078)), *((u32*)_0221A680), ((r4 << 0x10) >> 0x10), *((u32*)(*((u32*)_0221A680) + 0x00000FA4)));
    // str r3, [r2]
    // add r3, #8
    // add r3, #8
    // strb r6, [r2, r3]
    // add r0, #8
    *((u8*)(*((u32*)_0221A680) + 2)) = *((u8*)(*((u32*)_0221A680) + 0x000010D4));
    MI_CpuCopy8(r5, (*((u32*)_0221A680) + 4), r4, 0x000010D4);
    // str r0, [r3, r1]
    ov00_021F9750(1, *((u32*)_0221A680), (r4 + 4), *((u32*)_0221A680));
}




void ov00_021E602C(void) {
    ov00_021EE490(0);
    ov00_021E6790(*((u32*)(*((u32*)_0221A680) + 0x00001078)), *((u32*)_0221A680));
    // str r3, [r2]
    // add r3, #8
    // add r3, #8
    // strb r6, [r2, r3]
    // add r0, #8
    *((u8*)(*((u32*)_0221A680) + 2)) = *((u8*)(*((u32*)_0221A680) + 0x000010D4));
    MI_CpuCopy8(r5, (*((u32*)_0221A680) + 4), r4, 0x000010D4);
    // str r2, [r1, r0]
    ov00_021EE4FC(0x00001078, *((u32*)_0221A680), 1);
    ov00_021F9750(*((u32*)_0221A680), (r4 + 4));
    // str r0, [r2, r1]
    // blx r3
}




void ov00_021E60E8(void) {
    ov00_021E6790(*((u32*)(*((u32*)_0221A680) + 0x00001078)), *((u32*)_0221A680));
    // str r3, [r2]
    // add r3, #8
    // add r3, #8
    // strb r6, [r2, r3]
    // add r0, #8
    *((u8*)(*((u32*)_0221A680) + 2)) = *((u8*)(*((u32*)_0221A680) + 0x000010D4));
    MI_CpuCopy8(r5, (*((u32*)_0221A680) + 4), r4, 0x000010D4);
    // str r2, [r1, r0]
    ov00_021EE4FC(0x00001078, *((u32*)_0221A680), 1);
    ov00_021F9750(((r0 << 0x10) >> 0x10), *((u32*)_0221A680), (r4 + 4));
    // str r0, [r2, r1]
    ov00_021EE490(*((u32*)(*((u32*)_0221A680) + 0x00000FA8)), *((u32*)_0221A680), *((u32*)_0221A680));
    // blx r3
}




void ov00_021E61A8(void) {
    DWC_CheckDirtyFlag(*((u32*)(*((u32*)_0221A680) + (0xf1 << 4))), *((u32*)_0221A680));
    DWC_ClearDirtyFlag(*((u32*)(*((u32*)_0221A680) + (0xf1 << 4))), *((u32*)_0221A680));
    // strb r2, [r1, r0]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    ov00_021EDE74(0, ov00_021E6274, *((u32*)(*((u32*)_0221A680) + (0xf1 << 4))), ov00_021E6298);
    sub_02039AD8(1);
    ov00_021EFF04(ov00_021E62D4, 0);
    // str r2, [r1, r0]
}




void ov00_021E6240(void) {
    ov00_021EE278(*((u32*)(*((u32*)_0221A680) + 0x000010A8)), *((u32*)_0221A680));
    // mvn r3, r3
    // str r3, [r2, r0]
    // sub r0, #0x28
    // str r2, [r1, r0]
}




void ov00_021E6274(void) {
    // str r2, [r1, r0]
    // str r2, [r1, r0]
}




void ov00_021E6298(void) {
    // bx lr
    // TODO: decompile
}




void ov00_021E629C(void) {
    sub_0202C6F4(*((u32*)(*((u32*)_0221A680) + 0x00000F78)), *((u32*)_0221A680));
    sub_0202C5E4(r5, r4);
    Save_Frontier_GetStatic(*((u32*)(*((u32*)_0221A680) + 0x00000F78)), *((u32*)_0221A680));
    sub_02031214(r5, r4);
}




void ov00_021E62D4(void) {
    // bx lr
    // TODO: decompile
}




void ov00_021E62D8(void) {
    // add r0, r1, r0
}




void ov00_021E62F4(void) {
    ov00_021F9988(((0 << 0x18) >> 0x18), 0);
    ov00_021EE490();
    ov00_021EE490(*((u32*)(*((u32*)_0221A680) + 0x0000107C)), *((u32*)_0221A680));
    ov00_021EE4FC();
    // lsl r1, r5
    // tst r0, r1
    ov00_021F9988(((r5 << 0x18) >> 0x18), 0x00002710);
    GF_AssertFail();
    ov00_021F9988(0, 0x00002710);
    GF_AssertFail();
    // str r2, [r1, r0]
    ov00_021E62D8(0x000010A8, *((u32*)_0221A680), 1);
}




void ov00_021E6388(void) {
    // str r2, [r1, r0]
    // add r0, #0xc
    ov00_021EE490(*((u32*)(*((u32*)_0221A680) + 0x00001070)), *((u32*)_0221A680), 7);
    ov00_021E727C(r5);
    ov00_021E62F4(*((u32*)(*((u32*)r4) + r6)));
}




void ov00_021E63CC(void) {
    ov00_021EE490();
    // sub r0, r1, r0
    ov00_021E6388(1);
    ov00_021E5E34();
    // str r2, [r1, r0]
    ov00_021EE490(*((u32*)(*((u32*)_0221A680) + 0x00000FB4)), *((u32*)_0221A680), 0xc);
    // blx r2
}




u8 ov00_021E6424(void) {
}




void ov00_021E6428(void) {
    // str r4, [r3, r0]
    // add r1, r2, r1
    // add r0, #0x34
    // str r4, [r1, r0]
}




void ov00_021E644C(void) {
    sub_0203993C();
    sub_02034084();
    // tst r0, r4
    // str r2, [r1, r0]
    // str r2, [r1, r0]
}




void ov00_021E6484(void) {
    // str r0, [sp]
    // mov ip, r3
    // mov r5, ip
    // str r3, [sp, #4]
    // str r3, [r6, r5]
    // ldr r3, [sp, #4]
    // ldr r0, [sp, #4]
    ov00_021E644C(((1 << 0x18) >> 0x18));
    // add r0, #0x35
    // strb r2, [r1, r0]
    ov00_021E77A4(r5, *((u32*)_0221A680), *((u8*)(r4 + 2)));
    // ldr r0, [sp, #4]
    ov00_021E644C();
    ov00_021E65D4(0, (r7 - 4), 4);
    MI_CpuCopy8((r4 + 4), r0, r6);
    ov00_021EE490();
    // ldr r0, [sp]
    // blx r3
    // ldr r0, [sp]
    // blx r3
    ov00_021E6638(0, r5, r6, *((u32*)(*((u32*)_0221A680) + 0x00000FA8)));
}




void ov00_021E6554(void) {
    // str r1, [r3, r2]
    // add r3, #0x54
    // str r1, [r6, r3]
    // add r3, #0x28
    // str r1, [r6, r3]
    // add r2, #0x6d
    ov00_021EE448(*((u8*)(*((u32*)_0221A680) + 0x00001078)), 0, 0x00001078, 0x00001078);
    // str r1, [r2, r0]
    ov00_021E6A4C(*((u32*)(*((u32*)_0221A680) + 0x00001090)), *((u32*)_0221A680), *((u32*)r5));
    // blx r2
}




void ov00_021E65D4(void) {
    OS_DisableInterrupts();
    NNS_FndAllocFromExpHeapEx(*((u32*)(*((u32*)_0221A680) + 0x00000F94)), r5, r6);
    NNS_FndAllocFromExpHeapEx(*((u32*)(*((u32*)_0221A680) + (0x00000F98 + 4))), r5, r6);
    sub_02039AD8(1);
    OS_RestoreInterrupts(r7);
    OS_RestoreInterrupts(r7);
}




void ov00_021E6638(void) {
    OS_DisableInterrupts();
    NNS_FndGetGroupIDForMBlockExpHeap(r5);
    sub_02039AD8(1, *((u32*)(*((u32*)_0221A680) + 0x00000F98)), *((u32*)_0221A680));
    NNS_FndFreeToExpHeap(*((u32*)(r2 + (r0 + 4))), r5);
    NNS_FndFreeToExpHeap(*((u32*)(*((u32*)_0221A680) + 0x00000F94)), r5);
    OS_RestoreInterrupts(r4);
}




void ov00_021E6690(void) {
    // add r0, sp, #4
    // add r1, sp, #0
    ov00_021EC11C();
    // ldr r4, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E66C2: ; jump table
    ov00_021EC210((*((u16*)(r0 + 6)) << 0x10));
    ov00_021EC210();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E66FA: ; jump table
    ov00_021ED9B4((*((u16*)(*((u32*)(*((u32*)_0221A680) + 0x00001070)) + 6)) << 0x10), *((u32*)_0221A680));
    sub_0203993C();
    ov00_021EC8D8();
    ov00_021EC210();
    // str r1, [r2, r0]
    // str r2, [r3, r0]
    // sub r0, #0xb0
    // ldr r0, [sp, #4]
    // neg r0, r0
    // blx r1
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    sub_02038F74(*((u8*)(*((u32*)_0221A680) + 0x000010DE)), *((u32*)_0221A680), r5, *((u32*)_0221A680));
}




void ov00_021E6790(void) {
    ov00_021EE490(*((u32*)(*((u32*)_0221A680) + 0x0000107C)), *((u32*)_0221A680));
    ov00_021EE530(((r4 << 0x18) >> 0x18));
    ov00_021F9580(((r4 << 0x18) >> 0x18));
}




void ov00_021E67E0(void) {
    ov00_021E6790(*((u32*)(*((u32*)_0221A680) + 0x00001078)), *((u32*)_0221A680));
    ov00_021EE4FC();
    // tst r0, r1
    // str r3, [r2, r0]
    // add r0, #0x5c
    // str r0, [r2]
    ov00_021EE4FC((2 | (*((u16*)(*((u32*)_0221A680) + 0x00001078)) << 8)), (*((u16*)(*((u32*)_0221A680) + 0x00001078)) << 8), *((u32*)_0221A680), 1);
    ov00_021F9750(*((u32*)_0221A680), 4);
    // add r1, r1, r0
    // str r2, [r1, r0]
}




void ov00_021E6850(void) {
    ov00_021EDB1C();
    ov00_021E6CE8();
    // add r0, #0x44
    // add r0, #0x40
    // add r1, #0x46
    ov00_021E7AE0(*((u16*)(*((u32*)_0221A680) + 0x00001090)), 0x00001090, *((u32*)_0221A680));
    ov00_021E7ACC();
    ov00_021E765C();
    ov00_021EE4FC(_0221A680);
    // add r0, #0x5f
    // add r1, #0x1c
    ov00_021EE4FC(*((u32*)(r4 + (0x42 << 6))), (0x42 << 6), *((u32*)(r4 + (0x42 << 6))));
    ov00_021EE490();
    ov00_021E7AF4(r4, r0);
    ov00_021EE4FC();
    // str r0, [r2, r1]
    ov00_021E6690(*((u32*)_0221A680), 0x00001070, *((u32*)(*((u32*)_0221A680) + 0x00001070)));
    // add r1, #0xc
    // add r1, r0, r5
    // str r2, [r1, r7]
    ov00_021E67E0(0, *((u32*)r6), (*((u32*)(*((u32*)(0x18 + r1)) + 0x000010AC)) + 1));
    ov00_021E62D8();
    ov00_021E6690(*((u32*)r6), *((u32*)(*((u32*)r6) + 0x0000107C)));
}




void ov00_021E6964(void) {
    ov00_021EE490(*((u32*)(*((u32*)_0221A680) + 0x00001070)), *((u32*)_0221A680));
    // mvn r0, r0
}




void ov00_021E6994(void) {
    // str r2, [r1, r0]
}




void ov00_021E69A8(void) {
    sub_0203993C();
    sub_02034084();
    sub_02037454();
    // strh r3, [r0, r6]
    // str r3, [r2, r0]
    // strh r3, [r0, r1]
    // add r0, #0x14
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E69FC: ; jump table
    ov00_021E77F4(r7, 3, 1, 1);
    ov00_021E7A1C(ov00_021E6994);
    // str r2, [r1, r0]
}




void ov00_021E6A4C(void) {
    ov00_021E7A30();
    // str r2, [r3, r0]
    // sub r0, #0x10
    // str r2, [r1, r0]
}




s32 ov00_021E6A70(void) {
    _s32_div_f(0x64);
    _s32_div_f(r4, (0xfa << 2));
    // add r2, #9
    // sub r2, #0xc
    // add r2, #0xa
    // add r2, #0xb
    // add r1, #0xc
    // add r0, r6, r6
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E6B9E: ; jump table
    GF_AssertFail(0xa, 0x00002710, (0x82 << 2));
    // mvn r0, r0
}




void ov00_021E6BE4(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E6C02: ; jump table
    // add r2, #0x20
    ov00_021E79CC(*((u32*)(*((u32*)_0221A680) + 0x00001070)), (*((u16*)(*((u32*)(*((u32*)_0221A680) + 0x00001070)) + 6)) << 0x10), 0x00001070);
    // str r2, [r1, r0]
}




void ov00_021E6C68(void) {
    // str r1, [r2, r0]
    // add r0, #0x28
    // str r2, [r1, r0]
    ov00_021E7130(0x00001070, *((u32*)_0221A680), (4 - 5));
}




void ov00_021E6CA4(void) {
    // str r0, [r2, r1]
}




void ov00_021E6CB8(void) {
}




void ov00_021E6CCC(void) {
    // str r0, [r4, r2]
    // str r1, [r3, r0]
}




void ov00_021E6CE8(void) {
    // add r1, #8
    // and r5, r1
    // add r1, #0xf4
    // add r0, r0, r4
    DWC_IsBuddyFriendData(*((u32*)(*((u32*)_0221A680) + 0xc)), 0xc, *((u32*)(*((u32*)_0221A680) + 0x00001064)));
    // add r0, r0, r4
    // add r1, r1, r3
    // add r2, sp, #0
    ov00_021EFDCC(*((u32*)(*((u32*)_0221A680) + (1 << 8))), *((u32*)(*((u32*)_0221A680) + 0x00001064)), *((u32*)(*((u32*)_0221A680) + (0x00001064 + 4))), (*((u32*)(*((u32*)_0221A680) + (0x00001064 + 4))) * r5));
    // add r2, r1, r5
    // strb r0, [r2, r1]
    // and r0, r2
    // str r0, [r3, r1]
}




void ov00_021E6D60(void) {
}




void ov00_021E6D68(void) {
    // add r1, r1, r0
}




void ov00_021E6D7C(void) {
    ov00_021E7314();
    // mvn r0, r0
    // add r3, #0x5c
    // add r3, #0x5c
    // str r4, [r2, r3]
    // add r0, #0x5c
    // mvn r0, r0
    // mvn r0, r0
    ov00_021E7300(0, *((u32*)_0221A680), *((u32*)_0221A680), 0x00001070);
    // str r3, [r0, r1]
    // add r0, #0xd
    // strb r6, [r3, r0]
    // sub r0, #0x44
    // str r5, [r3, r0]
    // sub r1, #0x5c
    // str r4, [r0, r1]
    // str r2, [r1, r0]
    // str r2, [sp]
    ov00_021EDFBC(((2 << 0x18) >> 0x18), ov00_021E6ED8, 0, ov00_021E6FE0);
    // str r2, [sp]
    ov00_021EE054(r5, ov00_021E6FBC, 0, ov00_021E6FE0);
    // str r3, [r2, r1]
    // str r2, [r3, r0]
    // mvn r0, r0
    // mvn r0, r0
    // str r3, [r2, r0]
    // sub r0, #0x5c
    // str r2, [r1, r0]
    ov00_021F989C(ov00_021E6428, *((u32*)_0221A680), 5, 0);
    ov00_021F98BC(ov00_021E6484);
    ov00_021EE24C(ov00_021E6554, 0);
    ov00_021F98DC(ov00_021E6240);
    // str r0, [r2, r1]
}




int ov00_021E6EBC(void) {
    // mvn r0, r0
}




void ov00_021E6ED8(void) {
    // ldr r5, [sp, #0x18]
    // str r4, [r2, r1]
    sub_0203993C(r1, 0x000010A0, *((u32*)_0221A680), r0);
    sub_02034098();
    // blx r1
    ov00_021EE4FC(*((u8*)(*((u32*)_0221A680) + 0x000010E0)), *((u32*)_0221A680));
    // mvn r1, r1
    // and r0, r1
    // str r0, [sp]
    ov00_021EE4FC(*((u32*)(*((u32*)_0221A680) + 0x000010D8)), *((u32*)_0221A680));
    // ldr r0, [sp]
    // add r0, sp, #0
    ov00_021EE384();
    // ldr r0, [sp]
    // eor r0, r4
    // str r2, [r1, r0]
    // str r5, [r1, r0]
    ov00_021EE4FC(0x00001094, *((u32*)_0221A680), 6);
    // str r0, [r3, r1]
    // sub r1, #0x68
    // str r0, [r2, r1]
    ov00_021E6388(r5, 0x000010D8, *((u32*)_0221A680), *((u32*)_0221A680));
    // sub r1, #8
    // str r2, [r0, r1]
}




void ov00_021E6FBC(void) {
    // str r4, [r3, r2]
    // ldr r0, [sp, #8]
    ov00_021E6388(0x000010A0, *((u32*)_0221A680));
}




void ov00_021E6FE0(void) {
    // str r0, [r3, r1]
    // sub r2, #0xe4
    // sub r1, #0xe0
    // blx r2
}




void ov00_021E700C(void) {
    DWC_CheckHasProfile(*((u32*)(*((u32*)_0221A680) + (0xf1 << 4))), *((u32*)_0221A680));
    // add r1, sp, #0xc
    DWC_CreateExchangeToken(*((u32*)(*((u32*)_0221A680) + (0xf1 << 4))), *((u32*)_0221A680));
    // add r1, sp, #0
    DWC_CreateExchangeToken(*((u32*)(*((u32*)_0221A680) + (0xf1 << 4))), *((u32*)_0221A680));
    // add r0, r0, r5
    DWC_GetFriendDataType(*((u32*)(*((u32*)_0221A680) + (1 << 8))), *((u32*)_0221A680));
    // add r0, r0, r5
    DWC_IsBuddyFriendData(*((u32*)(*((u32*)r6) + r7)));
    // add r5, #0xc
}




void ov00_021E7078(void) {
}




void ov00_021E7080(void) {
    // ldr r0, _021E7094 ; =_0221A680
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _021E708E
    // ldr r0, _021E7098 ; =0x0000109C
    // ldr r0, [r1, r0]
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _021E7094: .word _0221A680
    // _021E7098: .word 0x0000109C
    // TODO: decompile
}




void ov00_021E709C(void) {
    // ldr r0, _021E70B0 ; =_0221A680
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _021E70AA
    // ldr r0, _021E70B4 ; =0x00001098
    // ldr r0, [r1, r0]
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _021E70B0: .word _0221A680
    // _021E70B4: .word 0x00001098
    // TODO: decompile
}




void ov00_021E70B8(void) {
    // str r0, [r2, r1]
}




void ov00_021E70CC(void) {
    // strh r0, [r2, r1]
}




void ov00_021E70E0(void) {
    // strb r2, [r1, r0]
}




s32 ov00_021E70F4(void) {
    // strb r1, [r2, r0]
    ov00_021F12F0(ov00_021E70E0, 0, *((u32*)_0221A680));
}




void ov00_021E7130(void) {
    // strb r2, [r1, r0]
}




void ov00_021E7144(void) {
}




void ov00_021E714C(void) {
    // str r4, [r3, r0]
    // sub r0, #0xf0
    Heap_Alloc(r1, 0x0000F020, *((u32*)_0221A680), *((u32*)_0221A680));
    // str r0, [r3, r1]
    // add r0, #0x1f
    NNS_FndCreateExpHeapEx((*((u32*)(*((u32*)_0221A680) + 0x00000F98)) & ~(0x1f)), (0xf << 0xc), 0, *((u32*)_0221A680));
    // str r0, [r3, r1]
    NNS_FndSetGroupIDForExpHeap(*((u32*)(*((u32*)_0221A680) + 0x00000F9C)), 0x10, _0221A680, *((u32*)_0221A680));
    NNS_FndGetTotalFreeSizeForExpHeap(*((u32*)(*((u32*)_0221A680) + 0x00000F9C)), *((u32*)_0221A680));
    // str r0, [r2, r1]
    // str r3, [r4, r1]
    // sub r1, #0xec
    // sub r0, #0xe8
    NNS_FndGetTotalFreeSizeForExpHeap(*((u32*)(*((u32*)_0221A680) + 0x00001084)), *((u32*)(*((u32*)_0221A680) + 0x00001084)), _0221A680, *((u32*)(*((u32*)_0221A680) + 0x00001084)));
    sub_02039AD8(1, (0xfa << 4), *((u32*)(r4 + (0xfa << 4))));
    NNS_FndDestroyExpHeap(*((u32*)(r4 + (r1 - 4))));
    Heap_Free(*((u32*)(*((u32*)_0221A680) + 0x00000F98)), *((u32*)_0221A680));
    // str r2, [r1, r0]
}




void ov00_021E7220(void) {
    // strb r0, [r2, r1]
}




void ov00_021E7234(void) {
    // add r2, r3, r4
    // add r2, r3, r0
    Heap_Free(*((u32*)(r2 + (0x3e << 6))), *((u32*)(r2 + (0x3e << 6))), *((u32*)_0221A680));
    ov00_021E6638(0, 0);
    // add r1, r0, r4
    // str r2, [r1, r0]
}




void ov00_021E727C(void) {
    ov00_021E7234();
    // add r1, r2, r4
    // sub r1, #0x68
    Heap_Alloc(*((u32*)(*((u32*)_0221A680) + 0x00001088)), 0x00001088, *((u32*)_0221A680));
    // add r3, r1, r4
    // str r0, [r3, r1]
    // sub r1, #0x88
    ov00_021E65D4(0, (0x3e << 6), 0x20, 1);
    // add r3, r1, r4
    // str r0, [r3, r1]
    // add r1, r0, r5
    // strb r3, [r1, r0]
    // add r1, r1, r4
    // add r1, #0x1f
    // add r2, #0x80
    ov00_021F9850(((r5 << 0x18) >> 0x18), (*((u32*)(*((u32*)_0221A680) + (0x3e << 6))) & ~(0x1f)), (0x3e << 6), 0x1f);
}




void ov00_021E7300(void) {
}




void ov00_021E7314(void) {
    // ldr r0, _021E7320 ; =_0221A680
    // ldr r1, [r0]
    // ldr r0, _021E7324 ; =0x000010E6
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _021E7320: .word _0221A680
    // _021E7324: .word 0x000010E6
    // TODO: decompile
}




void ov00_021E7328(void) {
    // strb r2, [r1, r0]
}




void ov00_021E733C(void) {
    MIC_Init();
    PM_Init();
    PM_SetAmp(1);
    PM_SetAmpGain(3);
    // str r2, [r1, r3]
    // add r1, #0xc
    // str r2, [r4, r1]
    // str r2, [r4, r1]
    // add r1, #8
    // str r2, [r4, r1]
    // add r3, #0x10
    // str r2, [r1, r3]
    // add r4, r4, r5
    // strh r1, [r4, r3]
    // str r1, [r2, r0]
    VCT_EnableVAD(1, 0, *((u32*)(_0221A684 + 4)), 0x00001A8C);
    NNS_SndInit();
    // add r0, r1, r0
    NNS_SndStrmInit(0x000019F8, *((u32*)(_0221A684 + 4)));
    // add r1, r2, r1
    MIi_CpuClearFast(0, 0x0000110C, (0x22 << 6));
    // str r1, [r0]
    VCT_EnableEchoCancel(1, 0);
}




void ov00_021E73E4(void) {
    // bx lr
    // TODO: decompile
}




void ov00_021E73E8(void) {
    // ldr r7, [sp, #0x1c]
    MI_CpuFill8(*((u32*)r2), 0, r3);
    // add r0, r0, r1
    MIC_StartAutoSamplingAsync(*((u32*)(_0221A684 + 4)), ov00_021E73E4, 0);
    // strb r0, [r2, r1]
    MIC_GetLastSamplingAddress(0, 0x00001A59, *((u32*)(_0221A684 + 4)));
    // sub r0, r0, r7
    // add r7, r7, r6
    // and r0, r1
    // asr r0, r0, #0xf
    // add r7, r1, r0
    VCT_SendAudio(r7, r6);
    VCT_ReceiveAudio(*((u32*)r4), r6, 0);
    // strb r2, [r1, r0]
}




void ov00_021E74A8(void) {
    VCT_CreateSession(0x00001A54, *((u32*)(_0221A684 + 4)));
    VCT_Request(0, 0);
    VCT_Request(r4, 0);
    VCT_DeleteSession(r4);
    // str r0, [r2, r1]
    // str r4, [r1, r0]
}




void ov00_021E74FC(void) {
    VCT_Response(*((u32*)(*((u32*)(_0221A684 + 4)) + 0x00001A54)), 0);
    VCT_StartStreaming(*((u32*)(*((u32*)(_0221A684 + 4)) + 0x00001A54)), *((u32*)(_0221A684 + 4)));
}




void ov00_021E7544(void) {
}




void ov00_021E756C(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7580: ; jump table
    VCT_Response(r2, 3, *((u32*)(_0221A684 + 4)));
    VCT_DeleteSession(r4);
    // str r4, [r2, r0]
    VCT_Response(r4, 0);
    ov00_021E7638(r4);
    ov00_021E6A4C();
    ov00_021E7638(r4);
    ov00_021E6A4C();
    VCT_Response(r4, 4);
    ov00_021E7638(r4);
    ov00_021E7638(r4, *((u32*)(_0221A684 + 4)), *((u32*)r4));
    VCT_StartStreaming(r4);
    // str r2, [r1, r0]
    ov00_021E7638(r4, *((u32*)(_0221A684 + 4)), 2);
    ov00_021E7638(r4);
}




void ov00_021E7638(void) {
    VCT_StopStreaming();
    VCT_DeleteSession(r4);
    // str r2, [r1, r0]
}




void ov00_021E765C(void) {
    OS_GetTick();
    // sub r1, r4, r0
    _u32_div_f(((0xfa << 8) * r1), 0x000082EA);
    // sub r0, r0, r3
    // add r2, r2, r0
    // str r2, [r1]
    // str r0, [r1]
    *((u32*)(_0221A684 + 8)) = r4;
    *((u32*)(_0221A684 + 0xc)) = r5;
    VCT_Main(_0221A684, _0221A684, *((u32*)_0221A684), 0x0000411A);
    VCT_Main(0x0000411A, *((u32*)_0221A684));
    // sub r0, r0, r6
    // str r0, [r4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E76D6: ; jump table
    PM_SetAmpGain(3, *((u32*)(*((u32*)(_0221A684 + 4)) + (0x6a << 6))), *((u32*)(_0221A684 + 4)));
    PM_SetAmpGain(2);
    PM_SetAmpGain(1);
    PM_SetAmpGain(0);
    // str r2, [r1, r0]
    ov00_021E6964(*((u32*)(_0221A684 + 4)), *((u32*)(*((u32*)(_0221A684 + 4)) + (0x000019E8 + 4))), 0x000019E8, _0221A684);
    ov00_021E74A8(1);
    // str r3, [r2, r0]
    // add r0, #0x6e
    // strh r2, [r1, r0]
    ov00_021E6964(0x000019EC, *((u32*)(_0221A684 + 4)), 0x3c, 1);
    ov00_021E74FC(0);
    // str r2, [r1, r0]
    // add r1, #0x72
    // add r1, #0x72
    // strh r4, [r0, r1]
    // add r0, #0x72
    // str r1, [r3, r0]
}




void ov00_021E77A4(void) {
    VCT_HandleData(((0 << 0x18) >> 0x18), *((u32*)(_0221A684 + 4)));
}




void ov00_021E77CC(void) {
    // add r4, #0x20
    // str r0, [r5]
    // add r1, #0x1f
    // str r1, [r6]
}




void ov00_021E77F4(void) {
    // add r0, sp, #0x14
    // strb r1, [r0]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    // str r1, [sp, #0x10]
    // add r0, sp, #0x10
    ov00_021E77CC(*((u32*)(_0221A684 + 4)), _0221A688, 0x00001AB0, r0);
    // ldr r3, [sp, #0x10]
    // str r3, [r1, r2]
    // add r0, #8
    // add r0, r1, r0
    // add r1, r1, r2
    // add r2, #0x20
    ov00_021E77CC((0x22 << 6), *((u32*)(_0221A684 + 4)), ((0x8f << 6) * r4), r5);
    // str r5, [r2, r0]
    // sub r0, #0x68
    // str r2, [r1, r0]
    ov00_021E733C(0x000019F4, *((u32*)(_0221A684 + 4)), 0);
    // str r1, [r0, r2]
    // str r1, [r1, r0]
    // add r0, #8
    // str r5, [r1, r0]
    // add r0, #0xc
    // str r5, [r1, r0]
    // add r0, #0x10
    // str r1, [r5, r0]
    // add r0, #0x14
    // str r7, [r5, r0]
    // add r0, #0x18
    // str r7, [r5, r0]
    // sub r2, #0x64
    // strb r1, [r5, r0]
    // add r0, r0, r2
    // add r2, sp, #0x14
    NNS_SndStrmAllocChannel(*((u32*)(_0221A684 + 4)), 1, 0x00001A5C, _0221A684);
    // add r0, r1, r0
    NNS_SndStrmSetVolume(0x000019F8, r7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // add r0, r2, r0
    // add r2, r2, r3
    // sub r3, #0xc
    NNS_SndStrmSetup(0x000019F8, 1, *((u32*)(_0221A684 + 4)), 0x0000088C);
    // str r3, [r2, r0]
    // add r0, #0x68
    // str r3, [r1, r0]
    sub_0203993C(0x000019EC, *((u32*)(_0221A684 + 4)), *((u32*)(_0221A684 + 4)), r7);
    sub_02034084();
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r3, [sp, #0x20]
    // str r3, [r2, r0]
    // sub r0, #0x58
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // str r4, [sp, #0x1c]
    ov00_021EE490(0x000019E8, *((u32*)(_0221A684 + 4)), *((u32*)(_0221A684 + 4)));
    // add r1, sp, #0x10
    *((u8*)(r1 + 0x14)) = r0;
    // mvn r0, r0
    GF_AssertFail(0, *((u8*)(r1 + 0x14)));
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r0, [sp, #0x28]
    // add r0, #0x20
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x18
    VCT_Init(((0x8f << 6) * r4), 0x00000884);
    // str r2, [r1, r0]
    VCT_SetCodec(r6, *((u32*)(_0221A684 + 4)), 0);
    ov00_021E79B4();
    VCT_EnableEchoCancel(1);
}




void ov00_021E79B4(void) {
    // add r0, r1, r0
}




void ov00_021E79CC(void) {
    // sub r1, #0x68
    ov00_021E6A4C(*((u32*)(*((u32*)(_0221A684 + 4)) + 0x00001A54)), *((u32*)(*((u32*)(_0221A684 + 4)) + 0x00001A54)), *((u32*)(_0221A684 + 4)));
    VCT_Request(2);
    ov00_021E6A4C();
    VCT_Request(*((u32*)(*((u32*)(_0221A684 + 4)) + 0x00001A54)), 1);
    ov00_021E6A4C();
}




void ov00_021E7A1C(void) {
    // str r0, [r2, r1]
}




void ov00_021E7A30(void) {
    MIC_StopAutoSampling(0x0000198C, *((u32*)(_0221A684 + 4)));
    // add r0, r1, r0
    NNS_SndStrmStop(0x000019F8, *((u32*)(_0221A684 + 4)));
    // add r0, r1, r0
    NNS_SndStrmFreeChannel(0x000019F8, *((u32*)(_0221A684 + 4)));
    VCT_Cleanup();
    Heap_FreeExplicit(*((u32*)(*((u32*)(_0221A684 + 4)) + 0x000019F4)), *((u32*)(*((u32*)(_0221A684 + 4)) + 0x00000888)), *((u32*)(_0221A684 + 4)));
    Heap_FreeExplicit(*((u32*)(*((u32*)(_0221A684 + 4)) + 0x000019F4)), *((u32*)(*((u32*)(_0221A684 + 4)) + (0x22 << 6))), *((u32*)(_0221A684 + 4)));
    *((u32*)(_0221A684 + 4)) = 0;
    // blx r4
}




void ov00_021E7AA4(void) {
}




void ov00_021E7ACC(void) {
    // str r2, [r1, r0]
}




void ov00_021E7AE0(void) {
    // str r2, [r1, r0]
}




void ov00_021E7AF4(void) {
    // lsl r0, r4
    // tst r0, r6
    // add r1, r0, r5
    VCT_AddConferenceClient(((0 << 0x18) >> 0x18), *((u32*)(_0221A684 + 4)));
    // add r2, r0, r5
    // str r1, [r2, r0]
}



