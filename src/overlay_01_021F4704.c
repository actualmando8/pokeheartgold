/* Decompiled from asm/overlay_01_021F4704.s */
#include "global.h"

void ov01_021F4704(void) {
}




void ov01_021F4728(void) {
}




void ov01_021F474C(void) {
    // add r1, r5, r4
    // add r1, r5, r4
    // add r0, r5, r4
}




void ov01_021F477C(void) {
}




void ov01_021F47A0(void) {
    // asr r2, r0, #4
    // add r2, r0, r2
    // asr r7, r2, #5
    // asr r2, r1, #4
    // add r2, r1, r2
    // asr r6, r2, #5
    // ldr r2, [sp, #0x18]
    // str r3, [sp]
    // ldr r4, [sp, #0x1c]
    // ldr r1, [sp, #0x18]
    // add r1, r7, r1
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F47DA: ; jump table
    // sub r2, r1, r5
    // str r0, [r4]
    // bpl _021F47FC
    // mvn r0, r0
    // str r0, [r4]
    // bpl _021F488A
    // mvn r0, r0
    // sub r0, r1, r5
    // str r0, [r4]
    // mvn r0, r0
    // bpl _021F488A
    // mvn r0, r0
    // str r0, [r4]
    // add r1, r1, r5
    // str r0, [r4]
    // bpl _021F484A
    // mvn r0, r0
    // str r0, [r4]
    // ldr r0, [sp]
    // mvn r0, r0
    // str r1, [r4]
    // add r0, r1, r5
    // mvn r0, r0
    // ldr r0, [sp]
    // mvn r0, r0
    // str r0, [r4]
}




void ov01_021F488C(void) {
    // str r1, [sp]
    Heap_Alloc(4, 0x00000A74);
    MI_CpuFill8(0, 0x00000A74);
    // add r0, r5, r4
    // add r0, #0x90
    // str r7, [r0]
    // add r0, r5, r4
    // add r0, #0x90
    // str r1, [r2, r0]
    // add r2, r5, r4
    // add r2, #0x90
    // add r2, r3, r2
    ov01_021FACE4(r6, *((u32*)r5), 0x00000854, *((u32*)*((u32*)r0)));
    // add r2, r5, r4
    // add r2, #0x90
    // add r2, r3, r2
    ov01_021FACEC(r6, *((u32*)r5), 0x00000858, *((u32*)r2));
    // add r1, #0xbc
    ov01_021F3638(4, *((u32*)r5));
    // add r1, r5, r4
    // add r1, #0x90
    // str r0, [r2, r1]
    // add r0, r5, r4
    // add r0, #0x90
    // mvn r1, r1
    // str r1, [r2, r0]
    // add r1, r5, r4
    // add r1, #0x90
    MIi_CpuClearFast(0, *((u32*)0), (2 << 0xa));
    // ldr r0, [sp]
    Heap_Alloc(4, (4 << 8));
    // add r1, r5, r4
    // add r1, #0x90
    // str r0, [r2, r1]
    // add r0, r5, r4
    // add r0, #0x90
    MI_CpuFill8(*((u32*)(*((u32*)r0) + (0xa7 << 4))), 0xff, (1 << 0xa));
    // add r1, r5, r4
    // add r1, #0x90
    // add r1, r2, r1
    MIi_CpuClear32(0, 0x0000086C, (0x81 << 2));
}




void ov01_021F497C(void) {
    Heap_Alloc(4, 0x00000A74);
    MI_CpuFill8(0, 0x00000A74);
    // add r0, r5, r4
    // add r0, #0x90
    // str r7, [r0]
    // add r0, r5, r4
    // add r0, #0x90
    // str r1, [r2, r0]
    // add r2, r5, r4
    // add r2, #0x90
    // add r2, r3, r2
    ov01_021FACE4(r6, *((u32*)r5), 0x00000854, *((u32*)*((u32*)r0)));
    // add r1, #0xbc
    ov01_021F3638(4, *((u32*)r5));
    // add r1, r5, r4
    // add r1, #0x90
    // str r0, [r2, r1]
    // add r0, r5, r4
    // add r0, #0x90
    // mvn r1, r1
    // str r1, [r2, r0]
}




void ov01_021F49FC(void) {
    // str r4, [sp]
    // str r0, [sp]
    // str r0, [r5]
}




void ov01_021F4A50(void) {
    // ldr r0, [sp, #0x20]
    GF_AssertFail(*((u32*)(r3 + 0x00000808)));
    // str r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    GetMapModelNo(0x0000FFFF, r6);
    ov01_021F49FC(*((u32*)(r5 + (1 << 8))), r0, r7);
}




void ov01_021F4AAC(void) {
    // add r2, r4, r2
    NARC_ReadFile(*((u32*)(r0 + (1 << 8))), 4, 0x0000086C);
    // asr r0, r0, #0x10
    // add r2, r4, r2
    NARC_ReadFile(*((u32*)(r5 + (1 << 8))), ((*((u32*)(r4 + 0x0000086C)) << 0x10) >> 0x10), (0x0000086C + 4));
}




void ov01_021F4AE4(void) {
    // strb r3, [r2, r5]
}




void ov01_021F4B1C(void) {
    // add r0, #0xc4
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // str r2, [sp, #8]
    _s32_div_f(r3);
    // ldr r1, [sp, #0xc]
    _s32_div_f(r4);
    // ldr r1, [sp, #8]
    // add r5, #0xf4
    ov01_021F3744(*((u32*)(r5 + (1 << 8))), *((u32*)(r1 + 0xc)), *((u32*)(r7 + 0x00000868)), *((u32*)r5));
    Save_SafariZone_Get(*((u32*)(r5 + (0x41 << 2))));
    // str r0, [sp, #0x14]
    sub_0202F620();
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    SafariZone_GetAreaSet();
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    Save_PlayerData_GetProfile(*((u32*)(r5 + (0x41 << 2))));
    PlayerProfile_GetTrainerGender();
    // ldr r0, [sp, #0x14]
    SafariZone_GetLinkLeaderGender(((r0 << 0x18) >> 0x18));
    // str r7, [sp]
    // str r0, [sp, #4]
    // add r5, #0xf4
    // add r4, r5, r4
    // add r4, r3, r4
    // ldr r3, [sp, #0x10]
    // add r3, r3, r5
    ov01_021F3834(*((u32*)(r5 + (1 << 8))), *((u32*)(r7 + 0x00000868)), *((u32*)r5), 0x7a);
}




void ov01_021F4BE8(void) {
    // ldr r4, [sp, #0x28]
    *((u32*)(r4 + 0x10)) = (*((u32*)(r4 + 0x10)) + 1);
    ov01_021FB9CC(r3);
    // add r2, r5, r1
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, #0xf8
    // add r1, #0x10
    // str r0, [sp, #8]
    // add r0, r5, r1
    // str r0, [sp, #0xc]
    // add r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x2c]
    // add r3, r5, r3
    ov01_021F676C(*((u32*)(r6 + (1 << 8))), 0x00000854, *((u32*)(r7 + 4)), ((1 << 8) << 3));
    *((u32*)(r4 + 8)) = r0;
    // ldr r0, [sp, #0x30]
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
    // add r0, r5, r2
    // str r0, [sp]
    // add r0, #0x10
    // str r0, [sp, #4]
    // add r3, #0x14
    ov01_021FB308(*((u32*)(r6 + (1 << 8))), *((u32*)(r7 + 8)), *((u32*)(r5 + (0x00000858 + 4))), r4);
    *((u32*)(r4 + 0xc)) = r0;
}




void ov01_021F4C6C(void) {
    ov01_021FB9CC(r3);
    // str r0, [sp]
    // add r2, r4, r2
    // add r3, r4, r3
    ov01_021F67B4(*((u32*)(r5 + (1 << 8))), *((u32*)(r6 + 4)), ((1 << 8) << 3), 0x00000854);
    // ldr r1, [sp, #0x20]
    ov01_021EA3B0();
    // ldr r2, [sp, #0x1c]
    // str r0, [r4, r3]
    // str r2, [r4, r1]
    // ldr r1, [sp, #0x24]
    // add r0, #0xff
    // sub r2, #8
    // sub r3, #0xc
    ov01_021FB270(*((u32*)(r5 + 1)), *((u32*)(r6 + 8)), *((u32*)(r4 + 0x00000864)), *((u32*)(r4 + 0x00000864)));
    // ldr r1, [sp, #0x1c]
    // blx r3
    // add r0, #0xf8
    ov01_02204698(*((u32*)r5), *((u32*)(r4 + 0x00000868)), *((u32*)(r5 + (0x42 << 2))));
    // ldr r0, [sp, #0x18]
    sub_02054E20();
    // add r5, #0xf8
    // add r1, r4, r1
    ov01_02204678(*((u32*)r5), (2 << 0xa));
}




void ov01_021F4D10(void) {
    // ldr r5, [sp, #0x40]
    // add r0, r5, r4
    // ldr r6, [sp, #0x3c]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r1, [sp, #0xc]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x10
    ov01_021F4A50(1, r6, *((u32*)(r5 + (r0 << 2))));
    ov01_021F4AAC(r6, *((u32*)(r5 + r4)));
    // ldr r2, [sp, #0x10]
    ov01_021F4AE4(r6, *((u32*)(r5 + r4)));
    // add r3, #0xf4
    // ldr r1, [sp, #0x1c]
    ov01_021F3744(*((u32*)(r6 + (1 << 8))), *((u32*)(*((u32*)(r5 + r4)) + 0x00000868)), *((u32*)r6));
    // str r5, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0xc]
    // add r2, sp, #0x10
    ov01_021F4BE8(r6, *((u32*)(r5 + r4)));
}




void ov01_021F4D88(void) {
    // str r1, [sp, #0xc]
    // add r1, sp
    // add r0, r4, r6
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x10
    ov01_021F4A50(0, *((u32*)(0x00000828 + 0x14)), *((u32*)(*((u32*)(0x00000828 + 0x18)) + (r0 << 2))));
    ov01_021F4AAC(r5, *((u32*)(r4 + r6)));
    // add r2, sp, #0x20
    NARC_ReadFile(*((u32*)(r5 + (1 << 8))), ((1 << 8) << 3));
    // add r3, #0xf4
    // ldr r1, [sp, #0x1c]
    ov01_021F3744(*((u32*)(r5 + (1 << 8))), *((u32*)(*((u32*)(r4 + r6)) + 0x00000868)), *((u32*)r5));
    // str r4, [sp]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0xc]
    // add r2, sp, #0x10
    ov01_021F4BE8(r5, *((u32*)(r4 + r6)));
}




void ov01_021F4E1C(void) {
    // ldr r5, [sp, #0x40]
    // add r7, #0x18
    // ldr r6, [sp, #0x3c]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r1, [sp, #0xc]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    ov01_021F4A50(1, r6, *((u32*)(r5 + (r0 << 2))));
    // str r0, [sp, #0x10]
    ov01_021F4AAC(r6, *((u32*)(r5 + r4)));
    // ldr r2, [sp, #0x14]
    ov01_021F4AE4(r6, *((u32*)(r5 + r4)));
    // add r2, sp, #0x14
    ov01_021F4B1C(r6, *((u32*)(r5 + r4)), *((u32*)(r7 + r4)));
    // ldr r0, [sp, #0x10]
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0xc]
    // add r2, sp, #0x14
    ov01_021F4BE8(r6, *((u32*)(r5 + r4)));
}




void ov01_021F4E88(void) {
    // ldr r6, [sp, #0x4c]
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x44]
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0x10]
    // add r4, #0x90
    // add r0, sp, #0x18
    ov01_021F4A50(1, r6, r3, *((u32*)(r6 + (r1 << 2))));
    // str r0, [sp, #0x14]
    ov01_021F4AAC(r6, *((u32*)(r4 + r5)));
    // ldr r2, [sp, #0x18]
    ov01_021F4AE4(r6, *((u32*)(r4 + r5)));
    // add r3, #0xf4
    // ldr r1, [sp, #0x24]
    ov01_021F3744(*((u32*)(r6 + (1 << 8))), *((u32*)(*((u32*)(r4 + r5)) + 0x00000868)), *((u32*)r6));
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x48]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, sp, #0x18
    ov01_021F4C6C(r6, *((u32*)(r4 + r5)));
}




void ov01_021F4F0C(void) {
    // str r2, [sp, #0x10]
    // add r0, sp
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r6, #0x90
    // add r0, sp, #0x18
    ov01_021F4A50(0, *((u32*)(0x00000830 + 0x1c)), r3, *((u32*)(*((u32*)(0x00000830 + 0x1c)) + (r1 << 2))));
    // str r0, [sp, #0x14]
    ov01_021F4AAC(r5, *((u32*)(r6 + r4)));
    // add r2, sp, #0x28
    NARC_ReadFile(*((u32*)(r5 + (1 << 8))), ((1 << 8) << 3));
    // add r3, #0xf4
    // ldr r1, [sp, #0x24]
    ov01_021F3744(*((u32*)(r5 + (1 << 8))), *((u32*)(*((u32*)(r6 + r4)) + 0x00000868)), *((u32*)r5));
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    // str r7, [sp, #4]
    // add r0, sp
    // add r2, sp, #0x18
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    ov01_021F4C6C(r5, *((u32*)(r6 + r4)));
}




void ov01_021F4FB0(void) {
    // ldr r6, [sp, #0x4c]
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x44]
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0x10]
    // add r4, #0x90
    // add r0, sp, #0x18
    ov01_021F4A50(1, r6, r3, *((u32*)(r6 + (r1 << 2))));
    // str r0, [sp, #0x14]
    ov01_021F4AAC(r6, *((u32*)(r4 + r5)));
    // ldr r2, [sp, #0x18]
    ov01_021F4AE4(r6, *((u32*)(r4 + r5)));
    // add r2, sp, #0x18
    ov01_021F4B1C(r6, *((u32*)(r4 + r5)), r7);
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x48]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r2, sp, #0x18
    ov01_021F4C6C(r6, *((u32*)(r4 + r5)));
}




void ov01_021F5024(void) {
    // ldr r1, [r0]
    // cmp r1, #0
    // bne _021F5034
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _021F5034
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov01_021F5038(void) {
    // str r3, [sp]
    // add r0, sp, #0x10
    // str r2, [sp, #8]
    // str r0, [sp, #4]
    // add r0, #0x2c
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r1, [r0, r5]
    // add r6, r4, r5
    // add r0, sp, #0x10
    // add r1, #0x30
    // strb r2, [r1]
    // ldr r1, [sp, #8]
    // ldr r1, [sp]
    // add r2, #0x24
    // strb r1, [r2]
    // add r1, #0x25
    // strb r0, [r1]
    // ldr r1, [sp]
    // add r5, #0x90
    // add r1, #0x26
    // strb r0, [r1]
    // add r0, #0xa0
    // add r1, #0xb4
    // str r0, [r1]
    // str r7, [r0, r1]
    // ldr r0, [sp, #8]
    // str r0, [r2, r1]
    // add r0, #0xa0
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, #0xa1
    // add r4, #0xa1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r4]
}




void ov01_021F50F0(void) {
    // add r0, #0xa2
    // add r4, #0xd0
    // add r6, r2, r0
    GF_AssertFail(*((u32*)*((u32*)(r0 + 0x10))), *((u32*)*((u32*)(r0 + 0x14))), *((u32*)(r0 + 0xc)));
    // sub r1, r1, r0
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    ov01_021F61DC(*((u32*)*((u32*)(r4 + 0xc))), *((u32*)(*((u32*)(r4 + 0xc)) + 8)));
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    ov01_021F5F64(r5);
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    sub_02039AD8(1, (*((u32*)(r4 + 8)) << 0x11), (*((u32*)(r4 + 8)) >> 0x1f), r4);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    GF_AssertFail(0x11, (*((u32*)(r4 + 8)) << 0x11), (*((u32*)(r4 + 8)) >> 0x1f));
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    GF_AssertFail(*((u32*)(r2 + 8)), *((u32*)(r4 + 8)), *((u32*)r4));
    *((u32*)(r4 + 0x18)) = 1;
    *((u32*)(r4 + 0x10)) = r4;
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0xc));
    *((u8*)(r4 + 0x1c)) = 3;
    *((u32*)(r4 + 0x10)) = *((u32*)(r4 + 0xc));
    *((u32*)(r4 + 0x14)) = r4;
    *((u8*)(r4 + 0x1c)) = 1;
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    sub_02039AD8(1, (*((u32*)r4) << 0x11), (*((u32*)r4) >> 0x1f), 1);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    GF_AssertFail(0x11, (*((u32*)r4) << 0x11), (*((u32*)r4) >> 0x1f));
    // add r1, #0xdc
    // add r0, #0xd8
    // add r0, #8
    *((u32*)(r4 + 0x10)) = r4;
    // add r0, #8
    *((u32*)(r4 + 0x14)) = *((u32*)(r4 + 0xc));
    // add r2, #8
    *((u32*)(r4 + 0x10)) = r2;
    // add r0, #8
    *((u32*)(r4 + 0x14)) = r4;
    *((u8*)(r4 + 0x1c)) = 2;
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    sub_02039AD8(1, (*((u32*)(r4 + 8)) << 0x11), (*((u32*)(r4 + 8)) >> 0x1f));
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    GF_AssertFail(0x11, (*((u32*)(r4 + 8)) << 0x11), (*((u32*)(r4 + 8)) >> 0x1f));
    ov01_021F613C(*((u8*)(r4 + 0x1c)), r5);
    // add r0, #0xb4
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F528E: ; jump table
    // add r0, #0x22
    // add r1, r6, r0
    // add r1, #0x20
    // add r1, r5, r1
    // add r1, #0x80
    // add r1, #0xc8
    // str r1, [sp]
    // str r5, [sp, #4]
    // str r6, [sp, #8]
    // add r4, #0xfc
    // add r1, #0xb8
    // add r2, #0xc0
    // add r3, #0xc4
    // blx r4
    // add r0, #0x22
    // add r6, #0x22
    // strb r0, [r6]
    // add r0, #0xb4
    // str r1, [r0]
    // add r0, #0x22
    // add r0, r6, r0
    // add r0, #0x20
    // add r0, r5, r0
    // add r0, #0x80
    ov01_021F477C(r6, 1, *((u32*)r5), *((u32*)r5));
    // add r1, #0x22
    // add r1, r6, r1
    // add r1, #0x20
    // add r1, r5, r1
    // add r1, #0x80
    // str r0, [r1]
    // add r0, #0x22
    // add r0, #0x10
    ov01_021F5024(r6, (*((u8*)(*((u8*)r6) - 1)) << 2));
    // add r0, #0x22
    *((u32*)(r6 + 0x24)) = 1;
    // add r0, #0xb4
    // str r1, [r0]
    // add r0, #0x22
    // sub r0, #0x10
    NNS_G3dGetMdlSet(*((u32*)(*((u32*)(r6 + ((*((u8*)r6) - 1) << 2))) + 0x00000864)), *((u32*)(*((u32*)(r6 + ((*((u8*)r6) - 1) << 2))) + 0x00000864)), *((u32*)(r6 + ((*((u8*)r6) - 1) << 2))));
    // add r2, #8
    // add r1, r2, r1
    // add r4, r0, r1
    // add r0, #0xb8
    ov01_021FBA00(*((u32*)r5), *((u32*)0), r0);
    ov01_021EA3B0(r4);
    // add r0, #0x22
    // add r0, #0xc4
    // add r6, #0xc8
    // add r2, #8
    // blx r3
    // add r6, #0x10
    ov01_021F5024((*((u32*)r5) * *((u32*)r5)), *((u32*)(*((u32*)(r6 + ((*((u8*)r6) - 1) << 2))) + (0x86 << 4))), *((u32*)(*((u32*)(r6 + ((*((u8*)r6) - 1) << 2))) + (0x86 << 4))), *((u32*)(r5 + (0x42 << 2))));
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, #0xa0
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, #0xa1
    // strb r1, [r0]
    // add r5, #0xb4
    // str r0, [r5]
    ov01_021F5D10(r5, 0);
    // add r0, #0xa2
    // add r0, r5, r0
    *((u32*)((0x30 * *((u8*)r5)) + 0x2c)) = 0;
    ov01_021F5D20(r5, *((u8*)r5), 0);
    // add r0, #0xa0
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, #0xa2
    // sub r1, r1, r2
    // ror r1, r0
    // add r1, r2, r1
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, #0xa0
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, #0xa1
    // strb r1, [r0]
    // add r0, #0xb4
    // str r1, [r0]
    *((u32*)(r5 + 0x6c)) = 0;
    // add r0, #0x70
    ov01_021F5D38(*((u8*)r5), r5, ((*((u8*)r5) + 1) >> 0x1f));
    ov01_021F5CB4(r5);
}




void ov01_021F54AC(void) {
    // ldr r4, [sp, #0x34]
    // str r2, [sp, #0x10]
    // str r1, [sp, #0xc]
    // ldr r6, [sp, #0x30]
    // add r2, sp, #0x14
    // add r1, sp, #0x14
    // add r0, #0xa0
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r1, #0x7c
    // strb r0, [r1]
    // add r0, #0x7d
    // strb r5, [r0]
    // ldr r0, [sp, #0x10]
    // add r2, #0x90
    // add r4, #0x70
    // strb r6, [r4]
    // str r7, [r3, r1]
    // ldr r0, [sp, #0xc]
    // str r0, [r2, r1]
    // str r5, [sp]
    // add r0, #0xa1
    // ldr r2, [sp, #0xc]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r3, [sp, #0x10]
    // str r5, [sp]
    // add r0, #0xa1
    // ldr r2, [sp, #0xc]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r3, [sp, #0x10]
}




void ov01_021F5568(void) {
    // add r4, #0x90
    // str r2, [r1, r0]
    // sub r0, #8
    ov01_021FB2F4(*((u32*)(*((u32*)(r1 + (r0 << 2))) + 0x00000864)), *((u32*)(r1 + (r0 << 2))), 0);
    ov01_021F36AC(*((u32*)(*((u32*)(r4 + r5)) + 0x00000868)), *((u32*)(r4 + r5)));
    // mvn r0, r0
    // str r0, [r1, r2]
    // sub r2, #0x60
    MIi_CpuClearFast(0, *((u32*)(r4 + r5)), (0x86 << 4));
    // add r1, r2, r1
    MIi_CpuClear32(0, 0x0000086C, (0x81 << 2));
    // add r0, r6, r5
    // add r0, #0x80
    // str r1, [r0]
    // add r0, #0xf8
    ov01_02204698(*((u32*)r6), 1);
    // add r6, #0xf8
    // add r1, r2, r1
    ov01_02204688(*((u32*)r6), (2 << 0xa), *((u32*)(r4 + r5)));
    // str r2, [r1, r0]
}




void ov01_021F55F4(void) {
    // ldr r4, [sp, #0x18]
    // str r3, [sp]
    // add r4, #0x90
    // str r6, [r4, r1]
    // ldr r1, [sp]
    // str r1, [r4, r5]
    // str r0, [r4, r2]
    // str r3, [r4, r6]
}




void ov01_021F562C(void) {
    // str r1, [sp, #8]
    // ldr r0, [sp, #8]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F564A: ; jump table
    // str r6, [sp]
    // add r0, #0xad
    // add r0, #0xc4
    // sub r5, r7, r2
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // mvn r4, r4
    // add r0, #0xc4
    // sub r5, r7, r2
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // mvn r4, r4
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r6, [sp]
    // add r0, #0xad
    // add r0, #0xc4
    // sub r0, r7, r2
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // mvn r5, r5
    // add r2, #0xc4
    // mvn r4, r4
    // add r0, #0xc4
    // add r0, r7, r2
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // mvn r5, r5
    // add r0, #0xc4
    // add r0, #0xc8
    // mvn r4, r4
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r6, [sp]
    // add r0, #0xad
    // add r0, #0xc4
    // sub r0, r7, r2
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0xc8
    // mvn r5, r5
    // add r0, #0xc4
    // add r0, #0xc8
    // mvn r4, r4
    // add r0, #0xc4
    // add r0, r7, r2
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0xc8
    // mvn r5, r5
    // add r2, #0xc4
    // mvn r4, r4
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r6, [sp]
    // add r0, #0xad
    // add r0, #0xc4
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0xc8
    // add r5, r7, r2
    // ldr r0, [sp, #0xc]
    // mvn r4, r4
    // add r0, #0xc4
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, #0xc8
    // add r5, r7, r2
    // ldr r0, [sp, #0xc]
    // mvn r4, r4
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // str r6, [sp, #4]
}




void ov01_021F595C(void) {
    // add r3, sp, #0x38
    // str r1, [r3]
    *((u32*)(r3 + 4)) = 0;
    // str r2, [sp, #4]
    // add r4, #0x90
    *((u32*)(r3 + 8)) = 0;
    // add r2, #0xc0
    // add r1, #0xc4
    ov01_021F5FB8(*((u32*)(*((u32*)(r1 + (r0 << 2))) + (0x86 << 4))), *((u32*)r1), *((u32*)r1));
    // add r2, sp, #0x2c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r2, sp, #8
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x2c
    // str r0, [r2]
    // add r0, r1, r0
    // add r1, sp, #0x38
    // add r2, sp, #8
    GF3dRender_DrawModel((2 << 0xa), *((u32*)(r4 + r6)), ov01_02206BE4);
    // add r0, #0xb8
    ov01_021FBA00(*((u32*)r5));
    // add r5, #0xb8
    // ldr r3, [sp, #4]
    // str r0, [sp]
    // add r0, sp, #0x38
    ov01_021F3A3C(*((u32*)(r4 + 0x00000868)), *((u32*)r5), r0);
}




void ov01_021F5A04(void) {
    // add r0, r2, r1
}




void ov01_021F5A28(void) {
    // add r0, r0, r2
}




void ov01_021F5A30(void) {
    // add r0, r2, r1
}




void ov01_021F5A54(void) {
}




void ov01_021F5A80(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F5A96: ; jump table
    // add r0, r4, r5
    // bpl _021F5AD4
    // sub r0, r4, r5
    // bpl _021F5AE6
}




void ov01_021F5AE8(void) {
    // add r2, r0, r0
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021F5AF8: ; jump table
}




void ov01_021F5B24(void) {
    // sub r0, r0, r5
    // sub r0, r5, r0
    // strb r6, [r4]
}




void ov01_021F5B88(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F5B9A: ; jump table
}




void ov01_021F5BBC(void) {
    // add r1, #0x30
    // strb r4, [r7]
    // add r5, #0x30
}




void ov01_021F5BF0(void) {
    // add r0, #0xa1
    // add r0, r5, r0
    // add r4, #0x64
    // add r1, #0xa1
    // add r2, r5, r3
    // add r3, #0xa1
    // add r3, r5, r6
    // add r3, #0x30
    // strb r2, [r3]
    // add r3, #0xa1
    // add r3, r5, r6
    // add r3, #0xa1
    // add r3, r5, r6
    // add r3, #0xa1
    // add r3, r5, r6
    // add r3, #0x24
    // strb r2, [r3]
    // add r3, #0xa1
    // add r3, r5, r6
    // add r3, #0x25
    // strb r2, [r3]
    // add r3, #0xa1
    // add r3, r5, r6
    // add r2, #0xa1
    // add r2, r5, r3
    // add r3, #0xa1
    // add r3, r5, r4
    // add r3, #0x26
    // strb r2, [r3]
    // add r3, #0xa1
    // add r1, r5, r1
}




void ov01_021F5CB4(void) {
    // add r0, #0xa0
    // add r4, #0x64
    // str r2, [r1, r0]
    // str r2, [r1, r0]
    // add r0, #0xa0
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, #0xa1
    // add r5, #0xa1
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r5]
}




void ov01_021F5D10(void) {
    // add r1, #0xa2
    // add r0, r0, r1
}




void ov01_021F5D20(void) {
    // add r1, r0, r1
    // add r1, #0x80
    // str r2, [r1]
}




void ov01_021F5D38(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F5D48: ; jump table
    // add r0, #0x88
    // str r2, [r0]
    // add r1, #0x8c
    // str r2, [r1]
    // add r0, #0x80
    // str r2, [r0]
    // add r1, #0x88
    // str r2, [r1]
    // add r0, #0x80
    // str r2, [r0]
    // add r1, #0x84
    // str r2, [r1]
    // add r0, #0x84
    // str r2, [r0]
    // add r1, #0x8c
    // str r2, [r1]
}




void ov01_021F5D8C(void) {
    ov01_021F488C(0);
    // str r4, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r2, #0xc4
    // add r3, #0xc8
    ov01_021F47A0(r6, r7, *((u32*)r5), *((u32*)r5));
    // add r7, sp, #0x10
    ov01_021FB254();
    // add r1, r5, r6
    // add r1, #0x90
    // str r0, [r2, r1]
    // add r0, r5, r6
    // add r0, #0x90
    ov01_021FB360(*((u32*)(*((u32*)r0) + 0x0000085C)), *((u32*)r0), *((u32*)r1));
    // add r0, #0xb8
    ov01_021FBA00(*((u32*)r5));
    // add r1, #0xc4
    // str r1, [sp]
    // add r1, #0xc8
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // add r2, #0xb8
    // add r3, #0xc0
    ov01_021F4E88(*((u32*)(r7 + r6)), r4, *((u32*)r5), *((u32*)r5));
}




void ov01_021F5E20(void) {
    ov01_021F497C();
    // str r4, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r2, #0xc4
    // add r3, #0xc8
    ov01_021F47A0(r6, r7, *((u32*)r5), *((u32*)r5));
    // add r0, r5, r6
    // add r0, #0x90
    // str r7, [r1, r0]
    // add r0, #0xb8
    ov01_021FBA00(*((u32*)r5), *((u32*)r0));
    // add r1, #0xc4
    // str r1, [sp]
    // add r1, #0xc8
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // add r0, sp, #0x10
    // add r2, #0xb8
    // add r3, #0xc0
    ov01_021F4F0C(*((u32*)(r0 + r6)), r4, *((u32*)r5), *((u32*)r5));
}




void ov01_021F5EA0(void) {
    ov01_021F488C(1);
    // str r4, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r2, #0xc4
    // add r3, #0xc8
    ov01_021F47A0(r6, r7, *((u32*)r5), *((u32*)r5));
    // add r7, sp, #0x10
    ov01_021FB254();
    // add r1, r5, r6
    // add r1, #0x90
    // str r0, [r2, r1]
    // add r0, r5, r6
    // add r0, #0x90
    ov01_021FB360(*((u32*)(*((u32*)r0) + 0x0000085C)), *((u32*)r0), *((u32*)r1));
    // add r0, #0xb8
    ov01_021FBA00(*((u32*)r5));
    // add r1, #0xc4
    // str r1, [sp]
    // add r1, #0xc8
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // add r2, #0xb8
    // add r3, #0xc0
    ov01_021F4FB0(*((u32*)(r7 + r6)), r4, *((u32*)r5), *((u32*)r5));
}




void ov01_021F5F34(void) {
    // add r1, #0xa2
    // strb r3, [r1]
    // add r1, #0xa1
    // strb r3, [r1]
    // add r1, #0xa0
    // strb r3, [r1]
    // add r4, #0x30
}




void ov01_021F5F64(void) {
    // add r2, #0xcc
    // add r1, #0xa8
    // str r0, [r1]
    // add r0, #0xa8
    // add r1, #0xcc
    // add r1, #0xad
    // strb r0, [r1]
    // add r0, #0xad
    // add r1, #0xac
    // strb r0, [r1]
    // add r0, #0xa8
    // add r1, #0xc4
    // add r2, #0xcc
    // add r4, #0xa4
    // str r0, [r4]
}




void ov01_021F5FB8(void) {
    // str r2, [r5]
    // mvn r2, r2
    // str r1, [sp, #4]
    // ldr r1, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // add r0, r1, r0
    // str r0, [r5]
    // add r0, r1, r0
}




void ov01_021F6020(void) {
    // str r2, [sp]
    // str r3, [sp, #4]
    Heap_Alloc(4, (0x11 << 4));
    MI_CpuFill8(0, (0x11 << 4));
    // ldr r0, [sp, #0x24]
    // add r0, #0xfc
    // str r1, [r0]
    // add r0, #0xfc
    // str r1, [r0]
    // add r0, #0xfc
    // str r1, [r0]
    GF_AssertFail(r4, ov01_02206BC8);
    // ldr r1, [sp, #0x28]
    // str r1, [r4, r0]
    ov01_021FAC44(r6);
    // str r0, [r4]
    // add r0, #0xb8
    // str r7, [r0]
    // add r0, #0xc0
    // str r5, [r0]
    // ldr r0, [sp]
    // add r1, #0xbc
    // str r0, [r1]
    MapMatrix_GetWidth(r5, r4);
    // add r1, #0xc4
    // str r0, [r1]
    MapMatrix_GetHeight(r5, r4);
    // add r1, #0xc8
    // str r0, [r1]
    // add r0, #0xc4
    // add r0, #0xcc
    // str r1, [r0]
    // ldr r0, [sp, #4]
    // add r1, #0xf4
    // str r0, [r1]
    // ldr r1, [sp, #0x20]
    // add r0, #0xf8
    // str r1, [r0]
    // add r0, #0xf0
    // str r1, [r0]
    ov01_021F5F34(r4, 1);
    // add r0, #0xb0
    // str r1, [r0]
    // add r0, #0xb4
    // str r1, [r0]
    NARC_New(0x41, 4);
    // str r0, [r4, r1]
    // add r1, #8
    // str r0, [r4, r1]
}




void ov01_021F6118(void) {
    // add r6, #0xfc
    // add r3, #0xcc
    // blx r6
}




void ov01_021F613C(void) {
    // add r1, #0xc8
    // add r2, #0xcc
    // add r3, #0xa8
    // add r1, #0xc4
    // add r2, #0xcc
    // add r1, #0xcc
    // add r1, #0xa4
    // add r1, #0xad
    // add r1, #0xad
    // add r5, #0xac
}




void ov01_021F61A8(void) {
    // add r0, r5, r0
    // add r0, #0x90
}




void ov01_021F61DC(void) {
    // asr r4, r0, #0xf
    // add r4, r0, r4
    // asr r0, r4, #0x10
    // str r0, [r2]
    // asr r0, r1, #0xf
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [r3]
}




void ov01_021F61F8(void) {
    sub_0201A430();
    NNS_GfdResetLnkTexVramState();
    NNS_GfdResetLnkPlttVramState();
    // add r0, r6, r0
    ov01_021F477C((0 * 0x30));
    // add r0, r5, r4
    // add r0, #0x90
    // str r1, [r2, r0]
    // add r0, r5, r4
    // add r0, #0x90
    ov01_021FB2E8(*((u32*)(*((u32*)0x00000864) + 0x0000085C)), *((u32*)0x00000864), *((u32*)((r4 + 1) << 0x18)));
    // add r0, r5, r4
    // add r0, #0x90
    ov01_021F3660(*((u32*)(*((u32*)r0) + 0x00000868)), *((u32*)r0));
    // add r0, r5, r4
    // add r0, #0x90
    Heap_Free(*((u32*)(*((u32*)r0) + (0xa7 << 4))), *((u32*)r0));
    // add r0, r5, r4
    // add r0, #0x90
    // str r1, [r2, r0]
    // add r0, r5, r4
    // add r0, #0x90
    Heap_Free(*((u32*)(0xa7 << 4)), 0, *((u32*)r0));
    // add r0, r5, r4
    // add r0, #0x90
    // str r7, [r0]
    // add r0, #0xb4
    // str r1, [r0]
    // add r0, #0xb0
    // str r1, [r0]
    // add r5, #0xf0
    // str r7, [r5]
}




void ov01_021F62B0(void) {
    // ldr r0, [r4, r0]
}




void ov01_021F62CC(void) {
    // add r1, #0xb0
    // add r0, #0xa0
}




void ov01_021F62E8(void) {
    // ldmia r3!, {r0, r1}
    // add r2, #0xd0
    // stmia r2!, {r0, r1}
    // add r4, #0xdc
    // str r0, [r2]
    // str r5, [r4]
}




void ov01_021F6304(void) {
    // add r0, #0xdc
    // str r1, [r0]
}




void ov01_021F630C(void) {
    // add r0, r1, r0
    // add r0, #0x90
    // str r0, [r2]
}




void ov01_021F6320(void) {
    // add r0, #0xac
}




void ov01_021F6328(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // and r0, r4
    // add r1, r2, r1
}




void ov01_021F635C(void) {
    // add r0, #0xa4
    // add r4, #0xac
    // mvn r0, r0
    // add r0, #0xac
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F6396: ; jump table
    // add r0, #0xa4
    // add r2, #0xc4
    // sub r3, r5, r0
    // add r4, #0xac
    // add r0, #0xa4
    // add r1, #0xc4
    // sub r1, r5, r0
    // add r4, #0xac
    // add r0, #0xa4
    // add r2, #0xc4
    // sub r3, r5, r0
    // sub r1, r0, r5
    // add r4, #0xac
    // add r0, #0xa4
    // add r1, #0xc4
    // sub r1, r5, r0
    // add r4, #0xac
    // add r0, #0xa4
    // add r2, #0xc4
    // sub r3, r0, r5
    // add r4, #0xac
    // add r0, #0xa4
    // sub r1, r5, r0
    // add r2, #0xc4
    // add r4, #0xac
    // add r0, #0xa4
    // add r2, #0xc4
    // sub r3, r0, r5
    // add r4, #0xac
    // add r0, #0xa4
    // sub r1, r0, r5
    // add r2, #0xc4
    // add r4, #0xac
}




void ov01_021F652C(void) {
}




void ov01_021F654C(void) {
    // asr r2, r6, #4
    // add r2, r6, r2
    // add r0, #0xc4
    // asr r0, r4, #4
    // add r0, r4, r0
    // asr r2, r2, #5
    // str r3, [sp]
    // asr r0, r0, #5
    // add r7, r0, r3
    // add r0, #0xc8
    // add r0, #0xc4
    // add r0, #0xc8
    // add r0, #0xcc
    // add r0, r4, r0
    // ldr r1, [sp]
    // strb r0, [r1]
}




void ov01_021F65D0(void) {
    // add r0, r0, r1
    // add r0, #0x90
}




void ov01_021F65E4(void) {
    // add r0, r0, r1
    // add r0, #0x90
}




void ov01_021F65F0(void) {
    // add r0, r0, r1
    // add r0, #0x90
}




void ov01_021F6600(void) {
    // add r0, r0, r1
    // add r0, #0x90
    // add r0, r1, r0
}




void ov01_021F6614(void) {
}




void ov01_021F6620(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F6644: ; jump table
    // add r2, r3, r2
    // add r0, r0, r5
    // sub r5, r0, r2
    // add r2, r3, r2
    // add r0, r0, r5
    // add r1, #8
    // add r0, r1, r0
    // add r5, r5, r0
    // str r1, [r0]
    // str r1, [r0]
}




void ov01_021F676C(void) {
    Heap_AllocAtEnd(4, 0x30);
    // str r5, [r1]
    *((u32*)(r0 + 4)) = r4;
    *((u32*)(r0 + 8)) = r6;
    // ldr r0, [sp, #0x18]
    *((u32*)(r0 + 0xc)) = r7;
    *((u32*)(r0 + 0x10)) = r0;
    // ldr r0, [sp, #0x1c]
    *((u32*)(r0 + 0x14)) = r0;
    // ldr r0, [sp, #0x20]
    *((u32*)(r0 + 0x28)) = r0;
    // ldr r0, [sp, #0x24]
    *((u8*)(r0 + 0x18)) = 0;
    *((u32*)(r0 + 0x1c)) = r0;
    // str r2, [r0]
    // ldr r0, [sp, #0x28]
    *((u32*)(r0 + 0x24)) = r0;
    *((u32*)(r0 + 0x20)) = 0;
    SysTask_CreateOnMainQueue(ov01_021F6620, r0, 1);
}




void ov01_021F67B4(void) {
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r2, #8
    // add r1, r2, r1
    // add r4, r0, r1
}



