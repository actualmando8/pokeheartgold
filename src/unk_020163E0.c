/* Decompiled from asm/unk_020163E0.s */
#include "global.h"

void * sub_020163E0(void) {
    CreateSysTaskAndEnvironment(sub_020164D0, 0x50, 0);
    // str r0, [sp, #4]
    SysTask_GetData();
    PaletteData_GetUnfadedBuf(r5, 0);
    // str r0, [sp]
    *((u32*)(r4 + 4)) = sub_020165D4;
    PaletteData_GetUnfadedBuf(r5, 1);
    // str r0, [sp]
    *((u32*)(r4 + 4)) = sub_020165F0;
    GetMainBgPlttAddr(sub_020165F0);
    // str r0, [sp]
    *((u32*)(r4 + 4)) = sub_020165A4;
    GetSubBgPlttAddr(sub_020165A4);
    // str r0, [sp]
    *((u32*)(r4 + 4)) = sub_020165BC;
    // ldr r1, [sp]
    // str r0, [sp, #8]
    // add r0, r1, r0
    // add r1, #0xc
    MIi_CpuCopy16((r7 << 5), r4, 0x20);
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // add r1, #0x2c
    MIi_CpuCopy16(r4, 0x20);
    // ldr r0, [sp, #4]
    // str r0, [r4]
    *((u32*)(r4 + 8)) = r5;
    // add r0, #0x4c
    // strb r6, [r0]
    // add r0, #0x4d
    // strb r7, [r0]
    // add r0, #0x4e
    // strb r1, [r0]
    // add r0, #0x4f
    // strb r1, [r0]
}




void sub_0201649C(void) {
    // add r0, #0x4e
    // strb r1, [r0]
    // add r0, #0x4e
    // strb r1, [r0]
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_020164C4(void) {
}




void sub_020164D0(void) {
    // add r0, #0x4e
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020164EC: ; jump table
    // add r0, #0x4f
    // strb r1, [r0]
    // add r4, #0x4e
    // strb r0, [r4]
    // add r1, #0x2c
    // blx r2
    // add r0, #0x4f
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, #0x4f
    // add r4, #0x4f
    // strb r0, [r4]
    // add r1, #0xc
    // blx r2
}




u32 sub_02016548(void) {
    // add r1, #0x4f
    // lsl r2, r4
    // tst r2, r1
    // lsl r2, r5
    // tst r2, r1
}




void sub_020165A4(void) {
}




void sub_020165BC(void) {
}




void sub_020165D4(void) {
}




void sub_020165F0(void) {
}



