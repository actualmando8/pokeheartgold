/* Decompiled from asm/overlay_91.s */
#include "global.h"

void ov91_0225C540(void) {
    // str r5, [sp]
    // add r1, #0x39
    // add r5, #0x38
    // add r0, #8
}




void ov91_0225C58C(void) {
    OverlayManager_GetData();
    OverlayManager_GetArgs(r6);
    // add r0, #8
    ov90_02258B54(r4);
    IsPaletteFadeFinished(*((u32*)(r4 + 0x78)));
    sub_0200FB70();
    sub_0200FC20(0);
    *((u32*)(r4 + 0x78)) = (*((u32*)(r4 + 0x78)) + 1);
    // add r0, #8
    ov90_02258B98(r4);
    *((u32*)(r4 + 0x78)) = (*((u32*)(r4 + 0x78)) + 1);
    ov91_0225CC4C(r4, r6);
    GF_AssertFail(1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225C61C: ; jump table
    // add r0, #8
    ov90_02258914(r4, 0x6a);
    // str r0, [r4]
    // str r0, [r5]
    ov90_022589BC(*((u32*)r4));
    ov90_022589CC(*((u32*)r4));
    *((u32*)(r4 + 0x70)) = r0;
    ov90_02258938(*((u32*)r4));
    // str r0, [r4]
    // str r0, [r5]
    // tst r0, r1
    Main_SetVBlankIntrCB(ov91_0225CB58, r4);
    HBlankInterruptDisable();
    *((u32*)(r4 + 0x38)) = 0;
    *((u32*)(r4 + 0x3c)) = 0;
    *((u32*)(r4 + 0x40)) = 0;
    // add r0, #0x84
    // strb r2, [r0]
    // add r1, #0x84
    *((u8*)(r4 + 1)) = 0;
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 3)) = 0;
    GF_CreateVramTransferManager(0x20, 0x6a, 0);
    ov91_02261B2C(r4);
    // add r0, #0x80
    // str r1, [r0]
    sub_020347A0(r4, 1);
    *((u32*)(r4 + 0x74)) = r0;
    GF_AssertFail();
    sub_0203769C();
    // add r1, #0x44
    // strh r0, [r1]
    // add r1, #0x44
    // add r0, #8
    ov90_0225886C(r4, *((u16*)r4));
    // add r1, #0x46
    // strh r0, [r1]
    // add r0, #0x44
    // add r3, #0x48
    ov91_0225CCC4(0x6a, (0x4b << 4), *((u32*)(r4 + 0x74)), r4);
    *((u32*)(r4 + 0x30)) = r0;
    *((u32*)(r4 + 0x7c)) = 1;
    // add r0, #0x48
    // str r0, [sp]
    // add r3, #0x46
    ov91_0225CDF4(0x6a, (0x4b << 4), *((u32*)(r4 + 0x74)), *((u16*)r4));
    *((u32*)(r4 + 0x34)) = r0;
    sub_0203A880();
    // add r6, #0x38
    ov00_021E69A8(0x6a);
    // add r0, sp, #0xc
    *((u8*)(*((u32*)(r4 + 0x70)) + 8)) = 0;
    *((u8*)(*((u32*)(r4 + 0x70)) + 9)) = 0;
    // add r0, sp, #0xc
    *((u8*)(*((u32*)(r4 + 0x70)) + 8)) = 0;
    *((u8*)(*((u32*)(r4 + 0x70)) + 9)) = 1;
    // add r0, sp, #0xc
    *((u8*)(*((u32*)(r4 + 0x70)) + 8)) = 1;
    *((u8*)(*((u32*)(r4 + 0x70)) + 9)) = 0;
    GF_AssertFail(*((u32*)(r4 + 0x70)), 0);
    // add r1, sp, #0x14
    ov91_0225D3C4(*((u32*)(r4 + 0x34)));
    sub_02037AC0(1);
    // str r0, [r5]
    sub_02037B38(1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x1b, 0x1b, 0x0000FFFF);
    // str r0, [r5]
    ov91_0225CEB4(*((u32*)(r4 + 0x34)), 0);
    IsPaletteFadeFinished();
    // add r4, #0x44
    sub_02037030(0x16, 0, 0);
    // str r0, [r5]
    // str r0, [r5]
    ov91_0225CEB4(*((u32*)(r4 + 0x34)), 0);
    // str r0, [r5]
    ov91_0225CEB4(*((u32*)(r4 + 0x34)), 1);
    // str r0, [r5]
    ov91_0225D37C(*((u32*)(r4 + 0x34)));
    // str r0, [sp, #0x10]
    // add r1, sp, #0x10
    sub_02037030(0x19, 4);
    // str r0, [r5]
    // add r0, #0x44
    ov91_0225CCF4(*((u32*)(r4 + 0x30)));
    ov91_0225CD5C(*((u32*)(r4 + 0x30)));
    ov91_0225CD6C(*((u32*)(r4 + 0x30)));
    // str r0, [sp, #0xc]
    // add r2, sp, #0xc
    ov91_0225CCA8(r4, 0x1b, 4);
    ov91_0225CD64(*((u32*)(r4 + 0x30)));
    ov91_0225CCA8(r4, 0x17, 0, 0);
    ov91_0225D1DC(*((u32*)(r4 + 0x34)));
    ov91_0225CB64(r4);
    ov91_0225CB98(r4);
    ov91_0225D078(*((u32*)(r4 + 0x34)), 0);
    // add r0, #0x44
    ov91_0225CDAC(*((u32*)(r4 + 0x30)));
    // add r1, sp, #0x18
    ov91_0225CDC4(*((u32*)(r4 + 0x30)));
    // add r1, sp, #0x18
    sub_02037030(0x1a, 0x10);
    // str r0, [r5]
    // str r0, [r5]
    ov91_0225D078(*((u32*)(r4 + 0x34)), 0);
    // str r0, [r5]
    ov91_0225D078(*((u32*)(r4 + 0x34)), 1);
    // str r0, [r5]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0x1a, 0x1a, 0x0000FFFF);
    ov91_0225D078(*((u32*)(r4 + 0x34)), 1);
    // str r0, [r5]
    ov91_0225D078(*((u32*)(r4 + 0x34)), 1);
    IsPaletteFadeFinished();
    sub_02037AC0(3);
    // str r0, [r5]
    sub_02037B38(3);
    // add r6, #0x38
    ov00_021E6A4C(*((u8*)r6));
    // add r0, #0x44
    ov91_0225CCEC(*((u32*)(r4 + 0x30)));
    *((u32*)(r4 + 0x30)) = 0;
    ov91_0225CE80(*((u32*)(r4 + 0x34)));
    *((u32*)(r4 + 0x34)) = 0;
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GF_DestroyVramTransferManager();
    // str r0, [r5]
    // add r0, #0x18
    ov90_02258AA8(r4, *((u8*)(r4 + 0x10)));
    // add r0, #8
    // add r1, #0x18
    ov90_022589E0(r4, r4, 0x6a);
    *((u32*)(r4 + 4)) = r0;
    // str r0, [r5]
    ov90_02258AA0(*((u32*)(r4 + 4)));
    ov90_02258AA4(*((u32*)(r4 + 4)));
    ov90_02258A04(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 4)) = 0;
    // str r0, [r5]
}




void ov91_0225C9EC(void) {
    // add r0, #8
    // str r0, [r4]
}




void ov91_0225CA64(void) {
}




void ov91_0225CA6C(void) {
}




void ov91_0225CA74(void) {
}




void ov91_0225CA90(void) {
}




void ov91_0225CA9C(void) {
    // add r0, #8
}




void ov91_0225CABC(void) {
}




void ov91_0225CAE0(void) {
}




void ov91_0225CAEC(void) {
    // add r0, #8
    // add r1, #0x84
    // strb r0, [r1, r4]
    // add r0, #0x44
    // add r4, r5, r0
    // add r4, #0x84
}




void ov91_0225CB50(void) {
    // add r0, #0x80
    // str r1, [r0]
}




void ov91_0225CB58(void) {
}




void ov91_0225CB64(void) {
    // add r1, sp, #0
    // add r4, sp, #0
}




void ov91_0225CB98(void) {
    // add r0, #0x80
    // str r0, [sp]
    // add r2, sp, #0
    // add r4, #0x80
    // str r0, [r4]
}




void ov91_0225CBE4(void) {
    // str r1, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r6, #8
}




void ov91_0225CC38(void) {
}




void ov91_0225CC4C(void) {
    // str r0, [r5]
    // add r0, #0x44
    // add r4, #0x38
}




void ov91_0225CCA8(void) {
}




void ov91_0225CCC4(void) {
}




void ov91_0225CCEC(void) {
}




void ov91_0225CCF4(void) {
    // str r1, [r0]
    // add r1, #0x36
    // add r6, r6, r5
    // add r6, #0x18
    // add r2, #0x36
    // strb r1, [r2]
    // add r0, #0x37
    // strb r1, [r0]
}




void ov91_0225CD5C(void) {
    // add r0, #0x37
}




void ov91_0225CD64(void) {
    // add r0, #0x37
    // strb r1, [r0]
}




void ov91_0225CD6C(void) {
    // add r0, #0x36
}




void ov91_0225CD74(void) {
}




void ov91_0225CD84(void) {
    // lsl r3, r2
    // tst r4, r3
    // add r2, r0, r2
    *((u32*)((r2 << 2) + 0xc)) = 0x0001869F;
    *((u32*)(r0 + 0x1c)) = (*((u32*)(r0 + 0x1c)) | 1);
}




void ov91_0225CDAC(void) {
}




void ov91_0225CDC4(void) {
    // add r2, #0xc
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
}




void ov91_0225CDD4(void) {
    // lsl r1, r2
    // tst r1, r4
}




void ov91_0225CDF4(void) {
    // str r3, [sp]
    Heap_Alloc(0x000087E8);
    memset(0, 0x000087E8);
    *((u32*)(r4 + 4)) = 1;
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0xc)) = r6;
    // ldr r0, [sp]
    *((u32*)(r4 + 0x10)) = r7;
    *((u32*)(r4 + 0x14)) = 0;
    // ldr r1, [sp, #0x18]
    // str r1, [r4, r0]
    // add r1, r4, r1
    ov91_0225DC3C(r4, 0x000019CC);
    ov91_0225F508(r4, r5);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_0225F0C0(0x0000878C, 0x00001AB4, r5);
    // add r0, r4, r0
    ov91_0225F388(0x000087CC);
    sub_020210D8(ov91_022627C0, 8, 4);
    GF_AssertFail();
}




void ov91_0225CE80(void) {
    sub_02021238();
    GF_AssertFail();
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_0225F1E8(0x0000878C, 0x00001AB4);
    ov91_0225F66C(r4);
    Heap_Free(r4);
}




void ov91_0225CEB4(void) {
    // sub r1, #0x79
    // add r0, r4, r2
    // add r1, r2, r1
    ov91_0225DD50(*((u8*)(r0 + 0x00008785)), ((0x78 << 0x10) >> 0x10), *((u16*)(r0 + (0x000019CC + 2))));
    // add r0, r4, r1
    // sub r1, #0xe8
    // add r1, r4, r1
    ov91_0225DBC0(0x00001AB4);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_022601F4(0x00001F74, 0x000019CC);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_02260218(0x00001F74, 0x000019CC);
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0225CF20: ; jump table
    // add r0, r4, r0
    ov91_0225F23C(0x0000878C, (*((u16*)(*((u32*)(r4 + 0x00001F38)) + 6)) << 0x10));
    // str r1, [r4, r0]
    // add r0, r4, r0
    ov91_0225F25C(0x0000878C, r4);
    // str r1, [r4, r0]
    sub_02037AC0(2, (*((u32*)(r4 + 0x00001F38)) + 1));
    sub_02037B38(2);
    // str r1, [r4, r0]
    // add r0, #8
    // str r1, [r4, r0]
    // add r1, #8
    // add r1, #8
    // str r2, [r4, r1]
    // add r0, #8
    PlaySE(0x00000619, 0x00001F38, (*((u32*)(r4 + 0x00001F38)) - 1));
    PlaySE(0x0000063D);
    // add r0, r4, r0
    ov91_0226031C(0x00001F74, (1 << 0xc));
    // sub r0, #8
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_0225DB7C((0x7d << 6), 0x00001AB4);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_0225DB18(0x00001F38, 0x00001AB4);
    PlaySE(0x000005DD);
    // str r1, [r4, r0]
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_0225DB44(0x00001F38, 0x00001AB4);
    // str r1, [r4, r0]
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_0225DBAC(0x00001F38, 0x00001AB4);
    // str r1, [r4, r0]
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_0225DB5C(0x00001F38, 0x00001AB4);
    // add r0, r4, r0
    ov91_0225DD20(0x000019CC, 1);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_022601AC(0x00001F74, 0x000019CC, *((u32*)r4));
    // add r1, r4, r1
    ov91_0225F7A8(r4, 0x00001AB4);
}




void ov91_0225D078(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _0225D094: ; jump table
    ov91_0225E6B0(0x00001F54, (*((u16*)(*((u32*)(r0 + 0x00001F54)) + 6)) << 0x10));
    ov91_0225EE9C(r4);
    // str r0, [sp]
    // sub r1, #0x26
    StartBrightnessTransition(0x18, 0x18, 0, 0x3f);
    // add r0, r4, r0
    ov91_0225DBE4(0x00001AB4);
    ov90_02258CB0(*((u32*)(r4 + 0x000021A4)));
    // add r0, r4, r0
    ov91_02261B10(0x000087E4);
    // add r0, r4, r0
    ov91_02261890(0x0000862C);
    // str r1, [r4, r0]
    // add r0, r4, r0
    ov91_0225DBF4(0x00001AB4, (*((u32*)(r4 + 0x00001F54)) + 1));
    ov91_0225E40C(r4);
    ov91_0225E648(r4);
    ov91_0225E6D0(r4);
    // add r0, r4, r0
    ov91_0225DC24(0x00001AB4);
    IsBrightnessTransitionActive(2);
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    // str r2, [r4, r0]
    // str r0, [r4, r1]
    // mvn r2, r2
    // add r0, r4, r1
    // add r1, r1, r2
    ov91_0225DD50(*((u8*)(r4 + 0x00008785)), ((*((u16*)(r4 + (0x000019CC + 2))) << 0x10) >> 0x10), 0x78);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_022601C8(0x00001F74, 0x000019CC);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_022601F4(0x00001F74, 0x000019CC);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_022601AC(0x00001F74, 0x000019CC, *((u32*)r4));
    // add r1, r4, r1
    ov91_0225F7A8(r4, 0x00001AB4);
    // add r0, r4, r0
    ov91_02261928(0x0000862C);
}




void ov91_0225D1DC(void) {
    // str r0, [r4]
    // add r0, r4, r0
    ov91_022619E8(0x000087E4, *((u32*)(ov91_02261C44 + (*((u32*)r0) << 2))), *((u32*)r0));
    // add r0, r4, r0
    sub_02021280(0x000086EC, 1, 0);
    ov91_0225EA7C(r4);
    // add r0, r4, r0
    ov91_0225EF70(0x00008730);
    // add r1, r4, r1
    ov91_0225F008(r4, 0x00008730);
    // add r0, r4, r0
    ov91_0225F3E8(0x000087CC, *((u32*)(r4 + 0x10)));
    // add r0, r4, r0
    ov91_0225F3E4(0x000087CC);
    // add r0, r4, r0
    ov91_02260370(0x00001F74, r0);
    // add r0, r4, r0
    ov91_0225F3D4(0x000087CC);
    ov91_0225E40C(r4);
    // add r1, r4, r1
    ov91_0225DCC4(r4, 0x000019CC);
    // add r1, r4, r1
    ov91_0225F74C(r4, 0x00001AB4);
    ov91_0225E62C(r4);
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, r2
    ov91_02261A00(0x000087E4, 0x00001C54, 0x00001F74);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    *((u32*)(r4 + 8)) = *((u32*)(r4 + 0xc));
}




void ov91_0225D2D0(void) {
    DoScheduledBgGpuUpdates(*((u32*)(r0 + 0x00001AB4)), 0x00001AB4);
    GF_RunVramTransferTasks();
    OamManager_ApplyAndResetBuffers();
}




void ov91_0225D2E8(void) {
}




void ov91_0225D2EC(void) {
    // add r1, sp, #0
    ov91_0225E294(r1, *((u32*)(r0 + 0x14)));
    // add r1, sp, #0
    ov91_0225E2E4(r5, 2);
    // ldrsb r2, [r4, r2]
    // add r0, r5, r0
    ov91_0225D694(0x00001E38, *((u16*)r4), 0x12, *((u32*)r5));
}




void ov91_0225D32C(void) {
    // add r0, #0x4c
    // add r0, #0x50
    // add r0, r0, r4
    // add r5, #0x4c
    // add r0, r5, r4
    // add r3, #0x44
}




void ov91_0225D368(void) {
    // add r2, r0, r1
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
}




void ov91_0225D37C(void) {
}




void ov91_0225D380(void) {
    // strh r2, [r3, r0]
    // strh r1, [r3, r4]
    // str r0, [sp]
    // sub r0, #0x50
    // add r0, r3, r0
    // add r2, r3, r2
    ov91_0225EED0(0x00008780, *((u32*)(r0 + (0x00008780 - 4))), (0x00008780 + 4), *((u16*)(r0 + (0x00008780 + 2))));
}




void ov91_0225D3B4(void) {
    // add r0, r0, r3
}




void ov91_0225D3C4(void) {
    // strb r0, [r4, r2]
    // strb r3, [r4, r0]
    // strb r3, [r4, r0]
    // strb r1, [r4, r0]
    // str r1, [r4, r0]
    // sub r1, #8
    // sub r0, #0x54
    // add r0, r4, r0
    // add r2, r4, r2
    ov91_0225EEBC(0x00008784, *((u32*)(r0 + 0x00008784)), 0x00008784, *((u8*)(r1 + 2)));
    // add r1, r4, r1
    ov91_0225F008(r4, 0x00008730);
}




void ov91_0225D40C(void) {
    // ldr r4, [sp, #0x18]
    // str r3, [sp]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // sub r0, r7, r6
    // add r2, r2, r7
    // adc r1, r3
    // sub r2, r0, r2
    // asr r1, r2, #0x1f
    // add r0, r0, r7
    // adc r1, r3
    // str r6, [r5]
    // ldr r1, [sp]
}




void ov91_0225D46C(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // add r0, r4, r0
    // add r0, r1, r0
    // str r0, [r5]
}




void ov91_0225D4D4(void) {
    // add r2, r2, r1
    // add r2, r4, r2
    // str r2, [r3]
    // add r1, r2, r1
    // add r1, r4, r1
    // ldr r0, [sp, #8]
    // str r1, [r0]
}




void ov91_0225D500(void) {
    // add r3, sp, #0
    // strh r0, [r3]
    *((u16*)(r3 + 2)) = 0;
    // sub r3, r1, r4
    // add r1, r3, r1
    // asr r1, r1, #1
    // asr r1, r1, #4
    // str r1, [sp, #4]
    // add r1, sp, #0x28
    // sub r2, r2, r1
    // add r1, r2, r1
    // asr r1, r1, #1
    // asr r1, r1, #4
    // str r0, [sp, #8]
    // add r0, sp, #4
    // str r1, [sp, #0xc]
    VEC_Mag(0, ((r2 >> 0x1f) << 0x10));
    // add r0, sp, #4
    VEC_Normalize(r0);
    // ldr r0, [sp, #4]
    // asr r1, r0, #0x1f
    _ll_mul(0x0001E200, 0);
    // add r2, r0, r2
    // adc r1, r3
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    // asr r1, r0, #0x1f
    _ll_mul((r1 << 0x14), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), 0x0001E200, 0);
    // add r2, r0, r2
    // adc r1, r3
    // str r1, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, sp, #4
    VEC_Mag((0x26 << 0xc), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa), 0);
    // asr r1, r0, #0x1f
    // str r0, [sp, #0x10]
    _ll_mul(0x0000099A, 0);
    // add r2, r0, r2
    // adc r1, r3
    // add r0, sp, #4
    // str r1, [sp, #0x10]
    VEC_Normalize((r1 << 0x14), (r1 << 0x14), (2 << 0xa), 0);
    // add r2, sp, #0x28
    // ldrsh r1, [r2, r1]
    // asr r0, r0, #0x10
    // add r2, sp, #0x14
    ov91_02260400((r4 << 0x10), 0x10);
    // str r0, [sp, #0x18]
    // add r2, sp, #0
    // add r0, sp, #0x14
    ov91_0226045C(0, 0, *((u16*)r2), *((u32*)(r5 + 0x10)));
    // add r2, sp, #0
    // add r0, sp, #4
    ov91_0226045C(r0, *((u16*)r2), *((u32*)(r5 + 0x10)));
    // str r0, [sp, #0x24]
    // ldr r2, [sp, #0x3c]
    // add r1, sp, #0
    ov91_0225E2E4(r5);
}




void ov91_0225D600(void) {
    // add r1, r1, r0
}




void ov91_0225D628(void) {
    // ldr r7, [sp, #0x58]
    // str r0, [sp, #0x14]
    // add r0, r6, r0
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, sp, #0x14
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r4, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r7, [sp, #0x40]
    // ldr r0, [sp, #0x10]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0xc]
    // add r1, sp, #0x14
    // str r7, [sp, #8]
    // add r5, #0x40
}




void ov91_0225D67C(void) {
}




void ov91_0225D694(void) {
}




void ov91_0225D6A0(void) {
}




void ov91_0225D6B8(void) {
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // ldr r6, [sp, #4]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // str r3, [sp, #8]
    // str r0, [sp, #0x2c]
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x28]
    // add r3, sp, #0x10
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // add r3, #8
    // ldmia r3!, {r0, r1}
    // add r2, #0x18
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // str r0, [r4]
    // add r6, #0xc
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x28]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
}




void ov91_0225D750(void) {
}




void ov91_0225D768(void) {
    // str r0, [sp]
    // ldr r5, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r4, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r6, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // str r6, [sp, #0x14]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r0, #8
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add r0, #0xb
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r0, r0, r5
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov91_0225D84C(void) {
}




void ov91_0225D884(void) {
    // add r0, r5, r4
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x10
    _ll_mul((*((u32*)(r0 + 0xc)) << 0xc), 0xFFFF0000);
    // add r0, r0, r2
    // adc r1, r3
    FX_Div(((r0 >> 0xc) | (r1 << 0x14)), ((2 << 0xa) << 5), (2 << 0xa), 0);
    // add r6, r5, r0
    // add r6, #0x18
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp, #4]
    // add r0, r0, r2
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r5 + r4)), r3, r0);
}




void ov91_0225D8E0(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _0225D8EC: .word Sprite_SetDrawFlag
}




void ov91_0225D8F0(void) {
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x58]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x58]
    // ldr r4, [sp, #0x60]
    // ldr r2, [sp, #0x14]
    // str r3, [sp, #0x1c]
    // strb r0, [r2]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x14]
    // add r1, #0xc
    AddWindowParameterized(*((u32*)0xa), (0x1c - 1), 1, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r0, #0xc
    FillWindowPixelRect(0x20, 0xf, 0, 0);
    String_New(0x80, r4);
    // ldr r0, [sp, #0x18]
    ReadMsgDataIntoString(*((u32*)(r0 + 8)), 0, r0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x14]
    // add r0, #0xc
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(0x0001020F, 0, r6, 0);
    String_Delete(r6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x18]
    // str r4, [sp, #0xc]
    // ldr r0, [sp, #0x5c]
    GfGfxLoader_LoadCharDataFromOpenNarc(0, 0x12, *((u32*)r2), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    // str r4, [sp, #0xc]
    // ldr r0, [sp, #0x5c]
    // add r1, #0x12
    GfGfxLoader_LoadScrnDataFromOpenNarc(0, *((u32*)r2), 2);
    // str r0, [sp]
    // ldr r0, [sp, #0x5c]
    // str r4, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(0x80, 0x13, 0, 0);
    // add r0, sp, #0x30
    InitWindow();
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xfb
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x30
    AddWindowParameterized(*((u32*)5), 2, 0);
    // str r0, [sp, #0x28]
    String_New(0x80, r4);
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0x58]
    // add r1, r1, r0
    // ldr r0, [sp, #0x1c]
    // add r6, r1, r0
    // ldr r0, [sp, #0x58]
    // sub r0, #0x20
    // str r0, [sp, #0x2c]
    // sub r0, #0x1c
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    BgTilemapRectChangePalette(*((u32*)((0 << 0x18) >> 0x18)), 2, (((r2 - 1) << 0x18) >> 0x18), (((*((u32*)r6) - 1) << 0x18) >> 0x18));
    // add r0, sp, #0x30
    FillWindowPixelBuffer(0xf);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    PlayerName_FlatToString(*((u32*)(r5 + 8)));
    // ldr r1, [sp, #0x2c]
    // add r0, sp, #0x30
    SetWindowX(((r1 << 0x18) >> 0x18));
    // add r0, sp, #0x30
    SetWindowY(((r7 << 0x18) >> 0x18));
    // add r0, sp, #0x30
    // and r0, r1
    // ldr r1, [sp, #0x28]
    // and r1, r2
    // add r0, sp, #0x30
    *((u16*)(0xFFFF8000 + 0xa)) = (0x00007FFF | 0xFFFF8000);
    // ldr r1, [sp, #0x24]
    FontID_String_GetWidth(0, (0x00007FFF | 0xFFFF8000), 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // sub r3, r3, r7
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x24]
    // add r0, sp, #0x30
    AddTextPrinterParameterizedWithColor(0, 0, (0x40 >> 1));
    // ldr r0, [sp, #0x28]
    // add r0, #0x10
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x1c]
    // add r6, #8
    // ldr r0, [sp, #0x24]
    String_Delete();
    // add r0, sp, #0x30
    RemoveWindow();
    // ldr r0, [sp, #0x14]
    *((u32*)(r0 + 4)) = 0;
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 0);
}




void ov91_0225DB0C(void) {
}




void ov91_0225DB18(void) {
    // add r0, #0xc
}




void ov91_0225DB44(void) {
}




void ov91_0225DB5C(void) {
}




void ov91_0225DB7C(void) {
    // add r0, r4, r0
    ov91_02260298((0x13 << 6), 1);
    // add r0, r4, r0
    sub_02018198(0x0000066C, (0x2d << 0xe));
    // add r0, r4, r0
    ov91_02260334((0x13 << 6), 1);
}




void ov91_0225DBAC(void) {
}




void ov91_0225DBC0(void) {
    // add r0, r0, r2
}




void ov91_0225DBD0(void) {
    // str r2, [r0, r1]
    // str r2, [r0, r1]
}




void ov91_0225DBE0(void) {
}




void ov91_0225DBE4(void) {
    // add r0, r0, r1
}




void ov91_0225DBF4(void) {
    // str r2, [r0, r1]
    // add r0, r0, r1
    sub_0201815C((2 << 0xc), (*((u32*)(r0 + 0x000004A4)) + 1));
}




void ov91_0225DC24(void) {
}




void ov91_0225DC3C(void) {
    *((u16*)(r1 + 6)) = 0;
    ov91_0225DD50(r1, 0x00007FFF);
    ov91_0225DD24(r4, 0x00000E38);
    // strb r0, [r4]
    *((u8*)(r4 + 1)) = 1;
    // add r2, sp, #0
    // add r0, #0x94
    // str r1, [r0]
    // add r0, #0x98
    // str r1, [r0]
    *((u32*)(r4 + 8)) = (5 << 0x10);
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldmia r3!, {r0, r1}
    // add r2, #0x9c
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    ov91_0225E09C(r4, 0x000009C4, r4, r2);
    // add r3, sp, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xd8
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, #0xc0
    // add r4, #0xe4
    // str r0, [r4]
}




void ov91_0225DCC4(void) {
    *((u8*)(r1 + 1)) = 1;
    // blx r3
    ov91_0225DD24(r1, r1, *((u32*)(r0 + 0xc)), *((u32*)(ov91_02261C58 + (*((u32*)r0) << 2))));
    ov91_0225E044(r4, *((u16*)(r4 + 4)));
    *((u32*)(r4 + 8)) = r0;
    ov91_0225E070(r4, *((u16*)(r4 + 4)));
    // add r1, #0xe4
    // str r0, [r1]
    // add r1, r2, r1
    ov91_0225DD50(r4, ((*((u16*)(r4 + 6)) << 0x10) >> 0x10), *((u16*)(r4 + 2)));
}




void ov91_0225DD20(void) {
}




void ov91_0225DD24(void) {
    // add r0, #0xc
    *((u16*)(r0 + 4)) = r1;
    MTX_Identity33_();
    // asr r0, r5, #4
    // add r4, #0xc
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    MTX_RotX33_(r4, ((r0 << 1) << 1), (((r0 << 1) + 1) << 1), FX_SinCosTable_);
}




void ov91_0225DD50(void) {
    // add r0, #0x54
    *((u16*)(r0 + 2)) = r1;
    MTX_Identity33_();
    // add r0, #0x30
    MTX_Identity33_(r5);
    // asr r0, r4, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, #0x30
    MTX_RotY33_(r5, ((r0 << 1) << 1), (((r0 << 1) + 1) << 1), FX_SinCosTable_);
    // add r0, #0xc
    // add r1, #0x30
    // add r2, #0x54
    MTX_Concat33(r5, r5, r5);
    // add r1, #0x54
    // add r2, #0x78
    MTX_MultVec33(ov91_02261C4C, r5, r5);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, #0x54
    // neg r0, r0
    // str r0, [sp, #0x10]
    // add r0, sp, #8
    // add r2, #0x84
    MTX_MultVec33(*((u32*)(r5 + 8)), r5, r5);
    // add r0, #0xb8
    // add r0, #0x9c
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0xbc
    // str r0, [sp, #0xc]
    // add r0, #0xa4
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // add r0, sp, #8
    // add r1, #0x30
    MTX_MultVec33((5 << 0x10), r5, (5 << 0x10));
    // add r1, #0x84
    // add r0, sp, #8
    VEC_Add(r5, r5);
    // add r0, #0x80
    // add r2, #0x8c
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)r5), *((u32*)r5));
    // add r2, #0x84
    // str r0, [sp, #4]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r5 + 0x78)), *((u32*)r5));
    // str r0, [sp]
    // add r2, #0x88
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r5 + 0x7c)), *((u32*)r5));
    // ldr r1, [sp, #4]
    // add r1, r1, r3
    // adc r6, r0
    // ldr r6, [sp]
    // add r3, r6, r3
    // adc r4, r0
    // add r4, r7, r4
    // adc r2, r0
    // add r0, r3, r2
    // add r1, r1, r0
    // add r0, #0x90
    // str r1, [r0]
    // add r5, #0xd8
    // add r0, #0x9c
    // add r1, #0x30
    MTX_MultVec33(r5, r5, r5, (((2 << 0xa) >> 0xc) | (r4 << 0x14)));
}




void ov91_0225DE8C(void) {
    // add r0, sp, #0x28
    // str r0, [sp]
    // add r0, sp, #0xc
    // str r0, [sp, #4]
    // add r3, #0x90
    // add r2, #0x78
    // add r0, #0x84
    // add r2, sp, #0x1c
    // add r0, sp, #0x1c
    // ldr r0, [sp, #0xc]
    // add r0, #0x94
    // add r2, #0x98
    // sub r0, r0, r6
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // add r0, sp, #0x1c
    // add r1, sp, #0x10
    // asr r0, r5, #0x1f
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #8]
    // asr r1, r0, #0x1f
    // add r0, r2, r0
    // adc r1, r3
    // str r0, [r7]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #8]
    // asr r1, r0, #0x1f
    // add r0, r2, r0
    // adc r1, r3
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #8]
    // asr r1, r0, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // sub r1, r6, r5
}




void ov91_0225DFB0(void) {
    // add r1, #0xdc
    // add r1, #0xe4
    // add r1, r2, r1
    // add r0, #0xd8
    // str r0, [sp, #0xc]
    // add r0, #0xe0
    // add r2, sp, #0x18
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r1, [sp, #4]
    // add r0, sp, #0xc
    // add r1, sp, #0
    // add r0, sp, #0x18
    // add r0, #0xdc
    // sub r0, r1, r0
    // asr r1, r0, #0xc
    // add r0, #0xd0
    // add r1, #0xe4
    // asr r1, r1, #0xc
    // add r5, #0xcc
    // sub r0, r1, r0
}




void ov91_0225E044(void) {
    _s32_div_f(((0x5a << 2) * r1), 0x0000FFFF);
    // sub r2, r1, r0
    // add r0, #0xac
    _s32_div_f((*((u32*)r4) * r2), 0x5a);
    // add r4, #0xb0
    // add r0, r0, r1
}




void ov91_0225E070(void) {
    _s32_div_f(((0x5a << 2) * r1), 0x0000FFFF);
    // add r1, #0xc4
    _s32_div_f((*((u32*)r4) * r0), 0x5a);
    // add r4, #0xc0
    // add r0, r0, r1
}




void ov91_0225E09C(void) {
    // add r0, #0xa8
    // str r1, [r0]
    // asr r6, r1, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // add r0, #0xac
    // str r1, [r0]
    // add r2, r0, r2
    // adc r1, r3
    // add r0, #0xb0
    // str r1, [r0]
    // add r2, r0, r2
    // adc r1, r3
    // add r0, #0xb4
    // str r7, [r0]
    // add r0, #0xb8
    // str r3, [r0]
    // add r0, r2, r0
    // adc r1, r3
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, r2, r0
    // adc r1, r3
    // add r1, #0xc0
    // str r0, [r1]
    // add r0, r2, r0
    // adc r1, r3
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, #0xc8
    // str r7, [r0]
    // add r2, r0, r2
    // adc r1, r3
    // add r0, #0xcc
    // str r1, [r0]
    // add r0, #0xcc
    // add r0, #0xc8
    // sub r1, r1, r0
    // add r0, #0xd0
    // str r1, [r0]
    // add r2, r0, r2
    // adc r1, r3
    // add r5, #0xd4
    // str r1, [r5]
}




void ov91_0225E1E0(void) {
}




void ov91_0225E1E4(void) {
    // add r0, #0xa4
    // str r1, [r0]
}




void ov91_0225E1EC(void) {
    // _0225E1F0: .word 0x00000E38
}




void ov91_0225E1F4(void) {
    // _0225E1F8: .word 0x00003FFF
}




void ov91_0225E1FC(void) {
    // sub r0, r1, r0
    _u32_div_f(0x000002EE, 0x32);
    _s32_div_f((0x0000638E * r1), 0x32);
    _s32_div_f(0x000031C7);
    // sub r0, r0, r1
    // add r0, r0, r1
}




void ov91_0225E23C(void) {
    // strh r0, [r4]
    *((u16*)(r1 + 2)) = *((u16*)(r0 + 2));
    *((u16*)(r1 + 4)) = *((u32*)(r0 + 4));
    *((u16*)(r1 + 6)) = *((u32*)(r0 + 8));
    *((u16*)(r1 + 8)) = *((u32*)(r0 + 0xc));
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(r0 + 0x10)), 0x0000028F, 0);
    // add r2, r0, r2
    // adc r1, r3
    *((u16*)(r4 + 0x10)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
    // asr r0, r0, #0xc
    *((u16*)(r4 + 0xa)) = *((u32*)(r5 + 0x14));
    // asr r0, r0, #0xc
    *((u16*)(r4 + 0xc)) = *((u32*)(r5 + 0x18));
    // asr r0, r0, #0xc
    *((u16*)(r4 + 0xe)) = *((u32*)(r5 + 0x1c));
    *((u8*)(r4 + 0x12)) = *((u32*)(r5 + 0x20));
    *((u8*)(r4 + 0x13)) = *((u32*)(r5 + 0x24));
}




void ov91_0225E294(void) {
    // strh r0, [r4]
    *((u16*)(r1 + 2)) = *((u16*)(r0 + 2));
    // ldrsh r0, [r5, r0]
    *((u32*)(r1 + 4)) = 4;
    // ldrsh r0, [r5, r0]
    *((u32*)(r1 + 8)) = 6;
    // ldrsh r0, [r5, r0]
    *((u32*)(r1 + 0xc)) = 8;
    // ldrsh r0, [r5, r0]
    FX_Div(0x10, 0x0000028F);
    *((u32*)(r4 + 0x10)) = r0;
    // ldrsh r0, [r5, r0]
    *((u32*)(r4 + 0x14)) = (0xa << 0xc);
    // ldrsh r0, [r5, r0]
    *((u32*)(r4 + 0x18)) = (0xc << 0xc);
    // ldrsh r0, [r5, r0]
    *((u32*)(r4 + 0x1c)) = (0xe << 0xc);
    *((u32*)(r4 + 0x24)) = *((u8*)(r5 + 0x13));
}




void ov91_0225E2E4(void) {
    // str r2, [sp]
    // add r0, #0x4c
    // add r3, r4, r5
    // add r3, #0x50
    // ldmia r7!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, r4, r5
    // ldr r0, [sp]
    // add r1, #0x4c
    // add r2, r4, r5
    // add r6, #0x14
    // strb r0, [r1]
    // ldmia r6!, {r0, r1}
    // add r2, #0x78
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, r4, r5
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, r4, r5
    // add r0, #0x88
    // str r1, [r0]
    // add r1, #0x4c
    // add r0, r4, r0
    // add r1, r1, r5
    ov91_02260728(0x00001AB4, r0, *((u32*)(r0 + 0x10)), *((u32*)(r0 + 0x14)));
    // add r2, #0x44
    // ldr r0, [sp]
    // add r1, #0x4c
    // str r0, [sp, #8]
    // add r0, #0x4c
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // add r0, r4, r0
    // add r1, r1, r5
    ov91_02260754(0x00001AB4, 0x44, r4);
    // str r0, [sp, #4]
    // add r0, #0x4c
    // str r0, [sp, #4]
    // add r0, r0, r5
    ov91_0225E400(r4);
    // add r2, r4, r5
    // mov ip, r6
    // add r2, #0x50
    // mov r3, ip
    // ldmia r3!, {r0, r1}
    // mov ip, r3
    // stmia r2!, {r0, r1}
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r2, r4, r5
    // add r6, #0x14
    // strb r1, [r0, r5]
    // ldmia r6!, {r0, r1}
    // add r2, #0x78
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, r4, r5
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, r4, r5
    // add r0, #0x88
    // str r1, [r0]
    // ldr r1, [sp, #8]
    // add r0, r4, r0
    // add r1, r1, r5
    ov91_02260728(0x00001AB4, 0, *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x14)));
    // add r2, #0x44
    GF_AssertFail((r0 + 1));
}




void ov91_0225E3F4(void) {
}




void ov91_0225E400(void) {
}




void ov91_0225E40C(void) {
    // add r4, #0x4c
    // add r0, #0x4c
    // add r1, #0xff
    // add r6, #0x44
    // add r4, #0x44
}




void ov91_0225E45C(void) {
    // add r1, sp, #0x14
    // str r0, [sp, #4]
    ov91_0225E728(r1);
    // add r0, r5, r0
    // add r1, #0x2c
    // add r2, sp, #0x14
    // add r3, sp, #8
    ov91_0225DE8C(0x000019CC, r4);
    // add r1, sp, #0x14
    ov91_0225EA54(r4);
    // add r1, sp, #8
    ov91_0225EA54(r4);
    *((u16*)(r4 + 2)) = (*((u16*)(r4 + 2)) + 1);
    ov91_0225D600(r5);
    // add r1, r1, r0
    *((u32*)(r5 + 0x18)) = *((u32*)(r5 + 0x18));
    *((u32*)(r5 + 0x18)) = 0x0001869F;
    PlaySE(0x00000582, *((u32*)(r5 + 0x18)));
    PlaySE(0x00000583);
    PlaySE(0x00000582);
    PlaySE(0x00000584);
    PlaySE(0x00000582);
    PlaySE(0x00000585);
    ov91_0225E9E4(r4, r5);
    // add r0, r5, r0
    ov91_0225D694(0x00001E38, *((u32*)(r5 + 0x14)), *((u32*)(r5 + 0x1c)), *((u32*)r5));
    *((u32*)(r5 + 0x1c)) = (*((u32*)(r5 + 0x1c)) + 1);
    // add r0, r5, r0
    // add r1, r5, r1
    ov91_02261808(0x0000862C, 0x00001AB4, *((u32*)(r5 + 0x1c)));
    // add r0, r5, r0
    // add r1, r5, r1
    ov91_022618B0();
    // add r0, r5, r0
    // add r1, #0x2c
    ov91_0225DFB0(0x000019CC, r4);
    PlaySE(0x00000722);
    ov91_0225E7C4(r4, r5, 1);
    ov91_0225E990(r4, *((u32*)(r4 + 0x30)));
    // ldr r0, [sp, #4]
    ov91_0225E3F4(r5, r4, 0, *((u32*)(r5 + 0x1c)));
    ov91_0225E7C4(r4, r5, 0);
    ov91_0225E3F4(r5, r4, 0, *((u32*)(r5 + 0x1c)));
    ov91_0225E9C0(r4);
    // add r0, #0x2c
    // add r1, sp, #0x14
    VEC_Subtract(r4, r4);
    // str r0, [sp]
    ov91_0225E7E8(r4, r5, r6, (r6 << 0xa));
    *((u32*)(r5 + 0x1c)) = 0;
    // add r0, r5, r0
    ov91_02261890(0x0000862C);
}




void ov91_0225E62C(void) {
}




void ov91_0225E648(void) {
    // add r5, #0x4c
    // add r0, #0x4d
    // add r1, #0x4c
    // strb r0, [r1]
    // add r4, #0x44
    // add r5, #0x44
}




void ov91_0225E67C(void) {
    // strb r0, [r5]
    ov91_0225E400(r0);
    // add r0, r4, r0
    ov91_02260754(0x00001AB4, r5);
}




void ov91_0225E6B0(void) {
    // add r1, #0x4c
    // add r1, #0x4c
    // strb r2, [r1]
    // add r0, #0x44
}




void ov91_0225E6D0(void) {
    // add r1, #0x4c
    // add r0, #0x44
}




void ov91_0225E6F8(void) {
    // asr r1, r0, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // sub r0, r4, r1
    // bpl _0225E724
}




void ov91_0225E728(void) {
    ov91_0225E6F8();
    // asr r6, r7, #0x1f
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(r5 + 8)), r0, r6);
    // add r0, r2, r0
    // adc r1, r3
    // str r0, [r4]
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(r5 + 0xc)), (r1 << 0x14), r7, r6);
    // add r0, r2, r0
    // adc r1, r3
    *((u32*)(r4 + 4)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
    // asr r3, r2, #0xd
    // asr r1, r0, #0x1f
    _ll_mul((*((u16*)(r5 + 2)) << 0xc), (r1 << 0x14), 0xFFFFECCC, 0);
    // add r3, r2, r3
    // adc r1, r2
    // add r0, r0, r2
    *((u32*)(r4 + 4)) = *((u32*)(r4 + 4));
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(r5 + 0x10)), (r1 << 0x14), r7, r6);
    // add r2, r0, r2
    // adc r1, r3
    *((u32*)(r4 + 8)) = (((2 << 0xa) >> 0xc) | (r1 << 0x14));
}




void ov91_0225E7C4(void) {
}




void ov91_0225E7E8(void) {
    // neg r0, r0
    // neg r0, r0
    // ldr r0, [sp, #0x20]
    // neg r0, r2
    // neg r6, r3
    // asr r0, r2, #0x1f
    // add r2, r6, r2
    // adc r0, r3
    // and r0, r1
    // neg r0, r2
    // asr r0, r3, #0x1f
    // add r2, r6, r2
    // adc r0, r3
    // and r0, r1
    // neg r0, r2
    // asr r3, r4, #0x1f
    // asr r1, r0, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // strb r0, [r5]
    // add r1, sp, #0
    // add r1, sp, #0
}




void ov91_0225E8BC(void) {
    // add r1, sp, #4
    ov91_0225E728(*((u8*)r0));
    // add r1, sp, #4
    ov91_0225EA54(r5);
    // add r1, #0x2c
    *((u16*)(r5 + 2)) = (*((u16*)(r5 + 2)) + 1);
    // add r0, r4, r0
    ov91_0225DFB0(0x000019CC, r5);
    ov91_0225E7C4(r5, r4, 1);
    ov91_0225E990(r5, *((u32*)(r5 + 0x30)));
    ov91_0225E7C4(r5, r4, 1);
    ov91_0225E9C0(r5, *((u32*)(r5 + 0x14)));
    // add r0, #0x2c
    // add r1, sp, #4
    VEC_Subtract(r5, r5);
    // str r0, [sp]
    ov91_0225E7E8(r5, r4, 1, (1 << 0xa));
    ov91_0225E3F4(r4, r5, 0, *((u32*)(r4 + 0x1c)));
}




void ov91_0225E990(void) {
    // blt _0225E9A6
    // bgt _0225E9A6
}




void ov91_0225E9AC(void) {
    // bgt _0225E9BA
}




void ov91_0225E9C0(void) {
}




void ov91_0225E9E4(void) {
    // strb r2, [r0]
}




void ov91_0225E9F4(void) {
    // add r1, sp, #0xc
    ov91_0225E728();
    // add r0, r6, r0
    // add r1, #0x2c
    // add r2, sp, #0xc
    // add r3, sp, #0
    ov91_0225DE8C(0x000019CC, r5);
    // add r1, sp, #0xc
    ov91_0225EA54(r5);
    // add r1, sp, #0
    ov91_0225EA54(r5);
    *((u16*)(r5 + 2)) = (*((u16*)(r5 + 2)) + 1);
    // ldrsh r1, [r5, r0]
    *((u16*)(r5 + 0x38)) = (r1 - 1);
    // ldrsh r0, [r5, r0]
    ov91_0225E3F4(r6, r5, 1, *((u16*)(r5 + 0x3a)));
}




void ov91_0225EA54(void) {
    // add r0, #0x2c
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #8]
    // add r0, sp, #0
}




void ov91_0225EA7C(void) {
    ov91_0225EA98(*((u16*)(gSystem + 0x26)));
    ov91_0225EC7C();
}




void ov91_0225EA98(void) {
    *((u32*)(r0 + 0x48)) = (*((u32*)(r0 + 0x48)) + 1);
    // add r0, #0x20
    // add r1, sp, #4
    ov91_0225EE48(r0);
    GF_AssertFail();
    // add r0, #0x20
    // add r1, sp, #0
    ov91_0225EE64(r5);
    GF_AssertFail();
    // add r0, #0x20
    ov91_0225EE88(r5);
    // add r1, sp, #0
    *((u16*)(r1 + 8)) = *((u32*)(r5 + 0x14));
    *((u16*)(r1 + 0xa)) = 0;
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r3]
    // sub r0, r2, r0
    _s32_div_f(4, r0, 0);
    // asr r0, r0, #4
    // str r0, [sp, #0xc]
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // ldrsh r0, [r1, r0]
    // sub r0, r2, r0
    _s32_div_f(2, r6);
    // asr r0, r0, #4
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, sp, #0xc
    VEC_Mag(0);
    // add r0, sp, #0xc
    VEC_Normalize(r0);
    // ldr r3, [sp, #0xc]
    // asr r1, r3, #0x1f
    // add r3, r3, r0
    // adc r2, r1
    // ldr r2, [sp, #0x14]
    // str r3, [sp, #0xc]
    // asr r3, r2, #0x1f
    // add r2, r2, r0
    // adc r3, r1
    // str r1, [sp, #0x14]
    // add r0, sp, #0xc
    VEC_Normalize(((((((r3 << 0xf) >> 0xc) | (((r1 << 0xf) | (r3 >> 0x11)) << 0x14)) << 0xf) | ((((r1 << 0xf) | (r3 >> 0x11)) << 0x14) >> 0x11)) << 0x14), ((((((r3 << 0xf) >> 0xc) | (((r1 << 0xf) | (r3 >> 0x11)) << 0x14)) << 0xf) | ((((r1 << 0xf) | (r3 >> 0x11)) << 0x14) >> 0x11)) << 0x14), ((((r1 << 0xf) | (r3 >> 0x11)) << 0x14) << 0xf), (((((r3 << 0xf) >> 0xc) | (((r1 << 0xf) | (r3 >> 0x11)) << 0x14)) << 0xf) | ((((r1 << 0xf) | (r3 >> 0x11)) << 0x14) >> 0x11)));
    // ldr r0, [sp, #0xc]
    // asr r1, r0, #0x1f
    _ll_mul(0x0001E200, 0);
    // add r2, r0, r2
    // adc r1, r3
    // ldr r0, [sp, #0x14]
    // str r1, [sp, #0xc]
    // asr r1, r0, #0x1f
    _ll_mul((r1 << 0x14), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), 0x0001E200, 0);
    // add r2, r0, r2
    // adc r1, r3
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x10]
    // add r0, sp, #0xc
    VEC_Mag((0x26 << 0xc), (((2 << 0xa) >> 0xc) | (r1 << 0x14)), (2 << 0xa), 0);
    // asr r1, r0, #0x1f
    // str r0, [sp, #0x18]
    _ll_mul(0x0000099A, 0);
    // add r2, r0, r2
    // adc r1, r3
    // add r0, sp, #0xc
    // str r1, [sp, #0x18]
    VEC_Normalize((r1 << 0x14), (r1 << 0x14), (2 << 0xa), 0);
    // add r2, sp, #0
    // ldrsh r0, [r2, r0]
    // ldrsh r1, [r2, r1]
    // add r2, sp, #0x1c
    ov91_02260400(0, 2);
    // str r0, [sp, #0x20]
    // add r2, sp, #0
    // add r0, sp, #0x1c
    ov91_0226045C(0, 0, *((u16*)(r2 + 8)), *((u32*)(r5 + 0x10)));
    // add r2, sp, #0
    // add r0, sp, #0xc
    ov91_0226045C(r0, *((u16*)(r2 + 8)), *((u32*)(r5 + 0x10)));
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    // add r1, sp, #8
    ov91_0225E2E4(r5, 1);
    PlaySE(0x0000064F);
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, r5, r0
    ov91_02260E88(0x0000854C, 0, 2);
    ov91_0225EE9C(r5);
    *((u32*)(r5 + 0x48)) = 0;
}




void ov91_0225EC7C(void) {
    ov91_0225ED6C(*((u32*)(r0 + 0x20)));
    *((u32*)(r4 + 0x20)) = 1;
    // add r0, r4, r0
    ov91_02260CB4(0x00008544);
    // add r0, r4, r0
    ov91_022614D4(0x000021A8);
    // add r2, sp, #0
    // mov r3, sp
    // strh r0, [r2]
    // add r4, #0x20
    *((u16*)(r2 + 2)) = *((u16*)(r4 + (0x000086EC + 4)));
    // strh r1, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r2 + 2));
    ov91_0225EDC8(r4, *((u32*)(r3 - 4)), (r3 - 4));
    // add r2, sp, #0
    // mov r3, sp
    // strh r0, [r2]
    *((u16*)(r2 + 2)) = *((u16*)(r4 + (r1 + 4)));
    // add r0, #0x20
    // strh r1, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r2 + 2));
    ov91_0225EDC8(r4, *((u32*)(r3 - 4)), (r3 - 4));
    // add r3, r4, r1
    // add r1, sp, #0
    // strh r2, [r1]
    // mov r3, sp
    *((u16*)((0x000086EC + 2) + 2)) = *((u16*)(r3 + (0x000086EC + 4)));
    // add r4, #0x20
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)((0x000086EC + 2) + 2));
    ov91_0225EDC8(r4, *((u32*)(r3 - 4)), *((u16*)(0x000086EC + 2)), (r3 - 4));
    // mov r3, sp
    // add r1, sp, #0
    // strh r2, [r1]
    // add r4, #0x20
    *((u16*)(r1 + 2)) = *((u16*)(gSystem + 0x22));
    // strh r2, [r3]
    *((u16*)((r3 - 4) + 2)) = *((u16*)(r1 + 2));
    ov91_0225EDC8(r4, *((u32*)(r3 - 4)), *((u16*)r1), (r3 - 4));
}




void ov91_0225ED6C(void) {
    // sub r3, r0, r2
    // sub r0, #0xe0
    // sub r2, r0, r1
    // add r0, r1, r0
    FX_Sqrt(((*((u16*)(gSystem + 0x20)) * *((u16*)(gSystem + 0x20))) << 0xc), (r3 * r3), *((u16*)(gSystem + 0x20)));
    // asr r1, r0, #0xc
}




void ov91_0225EDB0(void) {
}




void ov91_0225EDC8(void) {
    // sub r2, r2, r3
    // ror r2, r1
    // add r2, r3, r2
    // add r1, sp, #0
    // add r2, r4, r0
    // add r0, sp, #0x10
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
}




void ov91_0225EE18(void) {
    // add r3, r0, r2
    // strh r2, [r1]
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
}




void ov91_0225EE48(void) {
    // add r2, r0, r2
    // strh r0, [r1]
}




void ov91_0225EE64(void) {
    // bpl _0225EE76
    // add r2, #8
    // add r2, r0, r2
    // strh r0, [r1]
}




void ov91_0225EE88(void) {
    // sub r0, r0, r1
    // add r0, r0, r2
    // sub r0, r2, r1
}




void ov91_0225EE9C(void) {
    *((u32*)(r0 + 0x20)) = 0;
    // add r0, #0x20
    ov91_0225EDB0(r0);
    // add r0, r4, r0
    ov91_02260D00(0x00008544);
}




void ov91_0225EEBC(void) {
}




void ov91_0225EED0(void) {
    // add r3, sp, #0x18
    ov91_0225F05C(r1, r2, r3);
    // add r2, sp, #0x30
    // add r3, sp, #0
    ov91_0225F05C(r4, r6, *((u16*)(r2 + 0x10)));
    // add r3, sp, #0x18
    // add r2, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x18
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r1, [sp]
    // ldr r0, [sp, #0x18]
    // sub r0, r1, r0
    *((u32*)(r5 + 0x30)) = r0;
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x20]
    // sub r0, r1, r0
    *((u32*)(r5 + 0x38)) = r0;
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // sub r0, r1, r0
    *((u32*)(r5 + 0x40)) = r0;
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0x2c]
    // sub r0, r1, r0
    *((u32*)(r5 + 0x44)) = r0;
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #0x1c]
    // add r0, r2, r0
    // sub r1, r0, r3
    // sub r0, r2, r3
    *((u32*)(r5 + 0x34)) = 0x0000FFFF;
    *((u32*)(r5 + 0x34)) = r1;
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x24]
    // add r0, r2, r0
    // sub r1, r0, r3
    // sub r0, r2, r3
    *((u32*)(r5 + 0x3c)) = 0x0000FFFF;
    *((u32*)(r5 + 0x3c)) = r1;
    *((u32*)(r5 + 0x48)) = 0;
}




void ov91_0225EF70(void) {
    // asr r1, r2, #3
    // add r1, r2, r1
    // asr r1, r1, #4
    // add r1, r3, r1
    // str r1, [r0]
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
    // asr r1, r3, #3
    // add r1, r3, r1
    // asr r1, r1, #4
    // add r1, r4, r1
}




void ov91_0225F008(void) {
}




void ov91_0225F010(void) {
    // add r0, r5, r0
    ov91_0225E1E0(0x000019CC, ((*((u32*)(r1 + 4)) << 0x10) >> 0x10));
    // add r0, r5, r0
    ov91_0226137C(0x00001AB4, *((u32*)(r4 + 8)));
    // add r0, r5, r0
    ov91_02261384(0x00001AB4, ((*((u32*)(r4 + 0xc)) << 0x10) >> 0x10));
    // add r0, r5, r0
    ov91_0225E1E4(0x000019CC, *((u32*)(r4 + 0x10)));
    // add r0, r5, r0
    ov91_0225E09C(0x000019CC, *((u32*)(r4 + 0x14)));
}




void ov91_0225F05C(void) {
    // add r3, r1, r0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r2, r0, r1
    // bpl _0225F0A6
    // add r0, r1, r0
    // neg r0, r0
}




void ov91_0225F0C0(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xd0
    // str r0, [r5]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // add r1, #0xd4
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xd8
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xdc
    // str r1, [sp]
    // sub r0, #0x79
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xd0
    // str r2, [sp, #0x14]
    // add r2, #0xd4
    // str r2, [sp, #0x18]
    // add r2, #0xd8
    // str r2, [sp, #0x1c]
    // add r2, #0xdc
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x10
    // str r0, [sp, #0x2c]
    // add r0, #0x10
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // add r0, sp, #0x2c
    // str r6, [sp, #0x48]
}




void ov91_0225F1E8(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov91_0225F23C(void) {
    // add r2, #0x38
    // strb r1, [r2]
    // add r2, #0x3a
    // strb r3, [r2]
    // add r2, #0x39
    // strb r3, [r2]
}




void ov91_0225F25C(void) {
    // add r0, #0x3a
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225F278: ; jump table
    Sprite_SetAnimationFrame(*((u32*)(r0 + 0x34)), 0);
    // add r0, r5, r0
    ov91_02260CB4(0x00008544);
    // add r0, r5, r0
    ov91_02260CE0(0x00008544, 0x80, 0xb1);
    // add r0, #0x3b
    // strb r1, [r0]
    // add r0, #0x3a
    // add r4, #0x3a
    // strb r0, [r4]
    Sprite_UpdateAnim(*((u32*)(r4 + 0x34)), (2 << 0xc));
    Sprite_GetAnimationFrame(*((u32*)(r4 + 0x34)));
    // add r0, #0x3b
    // str r0, [sp]
    // str r0, [sp, #4]
    ov91_0225D500(r5, 0x80, 0x60, 0x80);
    PlaySE(0x0000064F);
    // add r4, #0x3b
    // strb r0, [r4]
    // add r0, #0x39
    // add r0, #0x39
    // strb r1, [r0]
    // add r0, #0x39
    // add r4, #0x3a
    // strb r0, [r4]
    // add r0, #0x3a
    // strb r1, [r0]
    *((u32*)(r4 + 0x3c)) = 0x10;
    // add r0, r5, r0
    ov91_02260D00(0x00008544, 2);
    // ldrsh r2, [r2, r3]
    // add r0, r5, r0
    ov91_02260CE0(0x00008544, 0x80, ov91_02261C84, (r6 << 1));
    *((u32*)(r4 + 0x3c)) = (*((u32*)(r4 + 0x3c)) - 1);
    // add r4, #0x3a
    // strb r0, [r4]
    ov91_0225E6D0(r5);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x34)), 0);
    ov91_0225E40C(r5);
    ov91_0225E62C(r5);
}




void ov91_0225F388(void) {
    // strb r1, [r3]
    *((u32*)(r0 + 0x14)) = 0x0000FFFF;
}




void ov91_0225F3A0(void) {
    // str r1, [r0, r3]
    // lsl r3, r2
    *((u32*)(r0 + 0x10)) = (1 | *((u32*)(r0 + 0x10)));
    *((u32*)(r0 + 0x14)) = r2;
    *((u32*)(r0 + 0x14)) = r2;
}




void ov91_0225F3D4(void) {
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = 0x0000FFFF;
}




void ov91_0225F3E4(void) {
}




void ov91_0225F3E8(void) {
    // lsl r2, r3
    // tst r2, r5
}




void ov91_0225F414(void) {
}




void ov91_0225F434(void) {
    GfGfx_EngineATogglePlanes(1, 1);
    // strh r1, [r0]
    // add r0, #0x58
    // and r2, r1
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r3
    // strh r2, [r0]
    // and r3, r2
    // strh r2, [r0]
    // and r2, r1
    // strh r1, [r0]
    G3X_SetFog(0, 0, 0, 0);
    // str r1, [sp]
    G3X_SetClearColor(0x00006B5A, 0, 0x00007FFF, 0x3f);
    // str r1, [r0]
}




void ov91_0225F4C0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    GF_3DVramMan_Create(r3, 0, 1, 0);
    *((u32*)(r5 + 0x18)) = r0;
    ov91_0225FD2C(r5, r6, r7, r4);
}




void ov91_0225F4F8(void) {
}




void ov91_0225F508(void) {
    // add r0, r5, r0
    HeapExp_FndInitAllocator(0x000086CC, 0x20);
    ov91_0225F414();
    // add r0, r5, r0
    ov91_0225F4C0(0x00001AB4, *((u32*)(r5 + 0x10)), *((u32*)(r5 + 0x14)), r4);
    // add r0, r5, r0
    ov91_0225F878(0x00001AB4, r4);
    // add r0, r5, r0
    ov91_0225FA9C(0x00001AB4, r4);
    // add r0, r5, r0
    ov91_0225FCD8(0x00001AB4, r4);
    NARC_New(0xbd, r4);
    // add r0, r5, r0
    ov91_0225FB80(0x00001AB4, r0, r4);
    // str r0, [sp]
    // str r4, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // add r0, r5, r0
    // add r1, r5, r1
    ov91_02260F50(0x00001C54, 0x00001AB4, r6, *((u32*)(r5 + 0x10)));
    // add r0, r5, r0
    // add r3, r5, r3
    ov91_0225FF00(0x00001F74, r6, r4, 0x000086CC);
    // add r0, r5, r0
    ov91_022604F4(0x00001AB4, r6, r4);
    // add r0, r5, r0
    // add r1, r5, r1
    ov91_02260C48(0x00001AB4, 0x00008544, *((u32*)(r5 + 0x14)), r4);
    // add r0, r5, r0
    // add r1, r5, r1
    ov91_02260D14(0x00001AB4, 0x0000854C, *((u32*)(r5 + 0x14)), r4);
    // add r0, r5, r0
    ov91_0225FDE0(0x00001AB4, r6, *((u32*)(r5 + 0x14)), r4);
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r4, [sp, #8]
    // add r0, r5, r0
    // add r1, r5, r1
    ov91_0225D8F0(0x00001F38, 0x00001AB4, *((u32*)(r5 + 0x0000877C)), *((u32*)(r5 + 0x10)));
    // add r0, r5, r0
    ov91_0225DBD0(0x00001AB4, *((u32*)(r5 + 0x10)), *((u32*)(r5 + 0x14)), r4);
    // str r4, [sp]
    // add r0, r5, r0
    // add r1, r5, r1
    ov91_0225D628(0x00001E38, 0x00001AB4, *((u32*)(r5 + 0x10)), *((u32*)(r5 + 0x14)));
    // add r0, r5, r0
    ov91_022613AC(0x000021A8, ((*((u32*)(r5 + 0x14)) << 0x18) >> 0x18));
    // add r0, r5, r0
    // add r1, r5, r1
    ov91_02261580(0x0000862C, 0x00001AB4, r6, r4);
    NARC_Delete(r6);
    ov90_02258BD4(*((u32*)(r5 + 0x00001AD0)), r4);
    // str r0, [r5, r1]
}




void ov91_0225F66C(void) {
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_02261790(0x0000862C, 0x00001AB4);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_0225D67C(0x00001E38, 0x00001AB4);
    // add r0, r4, r0
    ov91_0225DBE0(0x00001AB4, *((u32*)(r4 + 0x10)));
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_0225DB0C(0x00001F38, 0x00001AB4);
    // add r0, r4, r0
    ov91_0225FEFC(0x00001AB4);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_02260D80(0x00001AB4, 0x0000854C);
    // add r0, r4, r0
    ov91_02260CA8(0x00008544);
    // add r0, r4, r0
    ov91_0226066C(0x00001AB4);
    // add r0, r4, r0
    // add r1, r4, r1
    ov91_022600FC(0x00001F74, 0x000086CC);
    // add r0, r4, r0
    // add r1, r4, r1
    // add r2, r4, r2
    ov91_02261070(0x00001C54, 0x00001AB4, 0x000086CC);
    // add r0, r4, r0
    ov91_0225FC84(0x00001AB4);
    ov90_02258C38(*((u32*)(r4 + 0x000021A4)));
    // add r0, r4, r0
    ov91_0225FA60(0x00001AB4);
    // add r0, r4, r0
    ov91_0225FB48(0x00001AB4);
    // add r0, r4, r0
    ov91_0225FD0C(0x00001AB4);
    // add r0, r4, r0
    ov91_0225F4F8(0x00001AB4);
    // strh r1, [r0]
    // strh r1, [r0]
}




void ov91_0225F74C(void) {
    // add r0, r4, r0
    // add r1, r5, r1
    ov91_0226014C((0x13 << 6), 0x000019CC, *((u32*)r0));
    // add r0, r4, r0
    // add r1, r5, r1
    ov91_022601AC((0x13 << 6), 0x000019CC, *((u32*)r5));
    // add r0, r4, r0
    ov91_02260CC8(0x00006A90);
    ov91_0225F7A8(r5, r4);
    // add r0, r4, r0
    ov91_022613C8(0x000006F4, r4);
    // add r0, r4, r0
    ov91_02261928(0x00006B78);
}




void ov91_0225F7A8(void) {
    // add r0, r4, r0
    ov91_02260D98(0x00006A98);
    // add r0, r4, r0
    ov91_0225D6A0((0xe1 << 2));
    Thunk_G3X_Reset();
    ov91_0225FDD8(r4);
    NNS_G3dGlbLightVector(0, 0, 0xFFFFF000, 0);
    NNS_G3dGlbLightColor(0, 0x00007FFF);
    NNS_G3dGlbMaterialColorDiffAmb(0x00007FFF, 0x00007FFF, 0);
    NNS_G3dGlbMaterialColorSpecEmi(0x00007FFF, 0x00007FFF, 0);
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r0, r4, r0
    ov91_022610A8((0x1a << 4));
    // add r1, sp, #8
    // str r2, [sp, #8]
    NNS_G3dGeBufferOP_N(0x12, 1);
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    // add r0, r4, r0
    // add r1, r5, r1
    ov91_0226023C((0x13 << 6), 0x000019CC);
    // add r1, sp, #4
    // str r2, [sp, #4]
    NNS_G3dGeBufferOP_N(0x12, 1);
    NNS_G3dGeBufferOP_N(0x11, 0, 0);
    ov91_0226078C(r4, *((u32*)(r5 + 0x10)));
    // add r1, sp, #0
    // str r2, [sp]
    NNS_G3dGeBufferOP_N(0x12, 1);
    RequestSwap3DBuffers(0, 0);
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x1c)));
}




void ov91_0225F878(void) {
    BgConfig_Alloc(r1);
    // add r3, sp, #0xb0
    // str r0, [r5]
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x94
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)r5), 1, r3, 0);
    BG_ClearCharDataRange(1, 0x20, 0, r4);
    BgClearTilemapBufferAndCommit(*((u32*)r5), 1);
    // add r3, sp, #0x78
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)r5), 2, r3, 0);
    BG_ClearCharDataRange(2, 0x20, 0, r4);
    BgClearTilemapBufferAndCommit(*((u32*)r5), 2);
    // add r3, sp, #0x5c
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)r5), 4, r3, 0);
    BG_ClearCharDataRange(4, 0x20, 0, r4);
    BgClearTilemapBufferAndCommit(*((u32*)r5), 4);
    // add r3, sp, #0x40
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)r5), 5, r3, 0);
    BG_ClearCharDataRange(5, 0x20, 0, r4);
    BgClearTilemapBufferAndCommit(*((u32*)r5), 5);
    // add r3, sp, #0x24
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)r5), 6, r3, 0);
    BG_ClearCharDataRange(6, 0x20, 0, r4);
    BgClearTilemapBufferAndCommit(*((u32*)r5), 6);
    // add r3, sp, #8
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)r5), 7, r3, 0);
    BG_ClearCharDataRange(7, 0x20, 0, r4);
    BgClearTilemapBufferAndCommit(*((u32*)r5), 7);
    GfGfx_EngineATogglePlanes(1, 1);
    GfGfx_EngineATogglePlanes(2, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    GfGfx_EngineATogglePlanes(8, 0);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(2, 1);
    GfGfx_EngineBTogglePlanes(4, 1);
    GfGfx_EngineBTogglePlanes(8, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    LoadFontPal1(0, 0xa0, r4);
    // str r0, [sp]
    // str r4, [sp, #4]
    LoadUserFrameGfx1(*((u32*)r5), 1, 1, 4);
}




void ov91_0225FA60(void) {
}




void ov91_0225FA9C(void) {
    NNS_G2dInitOamManagerModule();
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // str r6, [sp, #0x10]
    OamManager_Create(0, 0x7e, 0, 0x1f);
    // add r3, sp, #0x14
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r6, [sp, #0x20]
    ObjCharTransfer_InitEx(r3, 0x00200010, 0x00200010);
    ObjPlttTransfer_Init(0x10, r6);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
    G2dRenderer_SetObjCharTransferReservedRegion(1, 0x00200010);
    G2dRenderer_SetPlttTransferReservedRegion(1);
    // add r1, #0x20
    G2dRenderer_Init(0x80, r7, r6);
    *((u32*)(r7 + 0x1c)) = r0;
    // add r0, #0x20
    G2dRenderer_SetSubSurfaceCoords(r7, 0, (2 << 0x14));
    Create2DGfxResObjMan(0x10, 0, r6);
    // str r0, [r5, r1]
    FontSystem_NewInit(8, r6);
    // str r0, [r7, r1]
}




void ov91_0225FB48(void) {
    // ldr r0, [r5, r0]
    // ldr r0, [r5, r6]
}




void ov91_0225FB80(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r2, #0x80
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // add r1, #0x84
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r1, #0x88
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r4, [sp, #8]
    // add r1, #0x8c
    // str r0, [r5, r1]
    // sub r1, #0xc
    // str r1, [sp]
    // sub r0, #0xc9
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0x80
    // str r2, [sp, #0x14]
    // add r2, #0x84
    // str r2, [sp, #0x18]
    // add r2, #0x88
    // str r2, [sp, #0x1c]
    // add r2, #0x8c
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x90
    // add r0, r5, r0
}




void ov91_0225FC84(void) {
    // add r1, #0x34
    // add r1, #0x34
    // add r1, #0x34
    // add r1, #0x34
}




void ov91_0225FCD8(void) {
}




void ov91_0225FD0C(void) {
}




void ov91_0225FD2C(void) {
    Camera_New(r3);
    // str r0, [r5, r1]
    // str r0, [r5, r2]
    // add r2, #8
    // str r0, [r5, r2]
    // add r2, #0xc
    // str r0, [r5, r2]
    // add r2, sp, #0xc
    // strh r3, [r2]
    // add r3, r3, r4
    *((u16*)((0x19 << 4) + 2)) = *((u16*)((r6 << 1) + ov91_02261D5C));
    *((u16*)((0x19 << 4) + 4)) = 0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, r0
    // add r2, sp, #0xc
    Camera_Init_FromTargetDistanceAndAngle(((0x19 << 4) + 4), 0x001D9000, (0x19 << 4), 0x00000FA4);
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x1c]
    // add r0, sp, #0x14
    Camera_SetLookAtCamUp((1 << 0xc), *((u32*)(r5 + (0x19 << 4))));
    Camera_SetStaticPtr(*((u32*)(r5 + (0x19 << 4))));
    Camera_SetPerspectiveClippingPlane((0x32 << 0xe), (0xfa << 0xe), *((u32*)(r5 + ((0x32 << 0xe) >> 0xb))));
}




void ov91_0225FDC8(void) {
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _0225FDD4: .word Camera_Delete
}




void ov91_0225FDD8(void) {
}




void ov91_0225FDE0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r1, 0xc, *((u32*)r0), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0xe, *((u32*)r5), 7);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0xf, *((u32*)r5), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0x10, *((u32*)r5), 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0x11, *((u32*)r5), 4);
    // str r0, [sp]
    // str r4, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r6, 0xd, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r5), 7, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r5), 6, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r5), 5, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)r5), 4, 0, 0);
    BgCommitTilemapBufferToVram(*((u32*)r5), 4);
    BgCommitTilemapBufferToVram(*((u32*)r5), 5);
    BgCommitTilemapBufferToVram(*((u32*)r5), 6);
    BgCommitTilemapBufferToVram(*((u32*)r5), 7);
}




void ov91_0225FEFC(void) {
}




void ov91_0225FF00(void) {
    // str r2, [sp, #0x10]
    // str r1, [sp, #0xc]
    // str r0, [sp, #8]
    // str r3, [sp, #0x14]
    memset(0, (0x23 << 4));
    // ldr r0, [sp, #8]
    // add r4, r0, r1
    // ldr r1, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    sub_02018030(r4, (0x5a << 2), *((u16*)ov91_02261C04));
    sub_020181B0(r5, r4);
    sub_020182A0(r5, 0);
    sub_020182A8(r5, 0, 0xFFEDE000, 0);
    sub_020182C4(r5, (6 << 0xa), (6 << 0xa), (6 << 0xa));
    // add r4, #0x10
    // add r5, #0x78
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // ldr r6, [sp, #8]
    // add r0, r0, r1
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #8]
    // add r2, r1, r2
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    // ldr r0, [sp, #0x20]
    // add r1, r2, r1
    // ldr r2, [sp, #0xc]
    sub_020180BC(ov91_022621AC, (*((u8*)(0x66 << 2)) << 4), (0x5a << 2), *((u16*)r3));
    // ldr r0, [sp, #0x20]
    sub_02018198(0);
    // ldr r0, [sp, #0x24]
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // add r4, #0x40
    NNS_G3dAnmObjDisableID(*((u32*)(r6 + (0x1a << 4))), 0);
    // add r1, r4, r0
    // add r1, r1, r0
    // add r0, r1, r0
    // ldr r5, [sp, #0x1c]
    NNS_G3dGetResDictIdxByName(r4, (r5 + 1));
    // mvn r1, r1
    // mvn r0, r0
    NNS_G3dAnmObjEnableID(*((u32*)(r6 + (0x1a << 4))), 0);
    // add r5, #0x10
    // ldr r0, [sp, #0x28]
    // add r6, #0x14
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r0, #0x14
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r0, #0xf0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // sub r2, #0xac
    // add r2, r1, r2
    // add r1, r2, r1
    // ldr r2, [sp, #0xc]
    // add r0, r0, r4
    sub_020180BC(_02261BE8, (*((u8*)_02261BE8) << 4), (0x85 << 2), 0x20);
    // ldr r0, [sp, #8]
    // add r0, r0, r1
    // ldr r1, [sp, #8]
    // add r1, r1, r4
    sub_020181D4(0x78, (r5 * 0x78));
    // ldr r0, [sp, #8]
    // add r2, #0x18
    // strh r1, [r0, r2]
    // strh r1, [r0, r2]
    ov91_02260334(0, (r4 + 2));
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // sub r2, #0x2c
    // add r0, #0x78
    // add r1, r1, r2
    sub_020181D4(r4);
    // ldr r0, [sp, #8]
    // sub r1, #0x2c
    // add r0, r0, r1
    sub_02018198(0);
    // ldr r0, [sp, #8]
    // add r0, #0x78
    sub_020182A0(1);
    // ldr r0, [sp, #8]
    // strh r2, [r0, r1]
}




void ov91_022600FC(void) {
    // add r5, r7, r0
    // add r5, #0x10
    // add r4, r7, r0
    // add r4, #0x14
    // add r0, r7, r0
}




void ov91_0226014C(void) {
}




void ov91_022601AC(void) {
    // add r0, r4, r0
}




void ov91_022601C8(void) {
    // add r1, #0xd8
    // add r2, #0xdc
    // add r3, #0xe0
    // add r5, #0x78
}




void ov91_022601F4(void) {
    // add r5, #0x78
}




void ov91_02260218(void) {
    // add r0, #0xd4
    // add r5, #0x78
}




void ov91_0226023C(void) {
}




void ov91_02260254(void) {
    GF_DegreeToSinCosIdx(0x0000F222);
    // sub r2, r4, r0
    _u32_div_f((0x5a * r2), r0);
    _s32_div_f(((0x2d << 0xe) * r0), 0x5a);
    // sub r1, r1, r0
    // add r0, r5, r0
    sub_02018198((0x6b << 2), (0x2d << 0xe));
}




void ov91_02260298(void) {
    GF_AssertFail();
    // sub r2, #0x78
    // add r3, r5, r2
    // add r0, r5, r0
    // add r1, r3, r2
    sub_020181E0((0x78 * *((u8*)(ov91_0226274C + *((u16*)(r5 + (0x21 << 4)))))), *((u16*)(r5 + (0x21 << 4))), (0x14 * *((u16*)(r5 + (0x21 << 4)))), *((u8*)(ov91_0226274C + *((u16*)(r5 + (0x21 << 4))))));
    // add r6, r5, r0
    // str r0, [sp]
    // add r0, r5, r0
    // add r1, r6, r7
    sub_020181D4((0x78 * *((u8*)(ov91_0226274C + r4))), *((u8*)(ov91_0226274C + r4)));
    // add r0, r6, r7
    sub_02018198(0);
    // add r0, r5, r0
    sub_020182A0((0x78 * *((u8*)(ov91_0226274C + *((u16*)(r5 + (0x21 << 4)))))), 0);
    // ldr r0, [sp]
    // add r0, r5, r0
    sub_020182A0(1);
    // strh r4, [r5, r0]
}




void ov91_0226031C(void) {
    // add r3, r0, r2
    // add r2, #0x78
    // add r0, r3, r0
}




void ov91_02260334(void) {
    // sub r1, #0x7a
    // add r1, r5, r1
    sub_020181D4(0x00000212, *((u16*)(r0 + 0x00000212)));
    // sub r1, #0x7a
    // add r1, r5, r1
    sub_020181E0();
    // strh r4, [r5, r0]
}




void ov91_02260364(void) {
    // strh r1, [r0, r2]
}




void ov91_02260370(void) {
    // strh r1, [r0, r2]
}




void ov91_02260378(void) {
    // add r4, r0, r1
    // add r1, r0, r1
    // str r1, [r3, r0]
    // str r1, [r3, r0]
    // str r1, [r3, r4]
    // add r0, r5, r0
    // str r0, [r3, r4]
    // str r1, [r3, r4]
    // add r0, r3, r1
    // add r1, #0x14
    sub_02018198((2 << 0xc), *((u32*)(r0 + (0x85 << 2))), (*((u8*)(ov91_02261C13 + ((0 + 1) << 1))) << 0xc), r0);
}




void ov91_02260400(void) {
    // sub r0, r3, r0
    // sub r0, r4, r0
    // str r0, [r2]
    // sub r1, r4, r0
    // sub r0, r0, r1
    *((u32*)(r2 + 8)) = 0xFFED4000;
}




void ov91_0226042C(void) {
    // add r0, r0, r1
    _s32_div_f(*((u32*)r0), ((0x4b << 0xc) >> 7));
    // sub r0, r1, r0
    // strh r0, [r4]
    // sub r0, r0, r1
    _s32_div_f(0xFFF1F000, (0x96 << 4));
    *((u16*)(r4 + 2)) = r0;
}




void ov91_0226045C(void) {
    // add r0, sp, #0
    MTX_Identity33_();
    // add r0, r0, r2
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotY33_(*((u16*)((r5 << 1) + ov91_02261D3C)), ((*((u16*)((r5 << 1) + ov91_02261D3C)) << 1) << 1), (((*((u16*)((r5 << 1) + ov91_02261D3C)) << 1) + 1) << 1), FX_SinCosTable_);
    // add r1, sp, #0
    MTX_MultVec33(r6, r7);
}




void ov91_022604A4(void) {
    // add r0, sp, #0
    MTX_Identity33_();
    // add r0, r0, r2
    // asr r0, r0, #4
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, sp, #0
    MTX_RotY33_(*((u16*)((r5 << 1) + ov91_02261D3C)), ((*((u16*)((r5 << 1) + ov91_02261D3C)) << 1) << 1), (((*((u16*)((r5 << 1) + ov91_02261D3C)) << 1) + 1) << 1), FX_SinCosTable_);
    // add r0, sp, #0
    MTX_Inverse33(r0);
    // add r1, sp, #0
    MTX_MultVec33(r6, r7);
}




void ov91_022604F4(void) {
    // str r0, [sp, #0x30]
    // str r1, [sp, #0x2c]
    // add r6, r5, r0
    // ldr r1, [sp, #0x2c]
    sub_02018030(r6, *((u8*)ov91_02261BF0), r2);
    // ldr r0, [sp, #0x30]
    // add r6, #0x10
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x2c]
    // add r0, r5, r0
    sub_02018030(0x0000074C, 0x2e, r7);
    NNSi_G3dModifyPolygonAttrMask(*((u32*)(r5 + 0x00000754)), 0, (0x1f << 0x10));
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r1, #0xe4
    // ldr r1, [sp, #0x2c]
    AddCharResObjFromOpenNarc(*((u32*)(r5 + 0x64)), 0x64, 7, 0);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r7, [sp, #0xc]
    // add r1, #0xe8
    // ldr r1, [sp, #0x2c]
    AddPlttResObjFromOpenNarc(*((u32*)(r5 + 0x64)), 0x64, 4, 0);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r1, #0xec
    // ldr r1, [sp, #0x2c]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x64)), 0x64, 6, 0);
    // str r0, [r5, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r1, #0xf0
    // ldr r1, [sp, #0x2c]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r5 + 0x64)), 0x64, 5, 0);
    // str r0, [r5, r1]
    // sub r1, #0xc
    sub_0200AE18(*((u32*)(r5 + 0x00000768)), 0x00000768);
    GF_AssertFail();
    sub_0200B00C(*((u32*)(r5 + (0x76 << 4))));
    GF_AssertFail();
    sub_0200A740(*((u32*)(r5 + 0x0000075C)));
    sub_0200A740(*((u32*)(r5 + (0x76 << 4))));
    // str r1, [sp]
    // sub r0, #0x65
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xe4
    // str r2, [sp, #0x14]
    // add r2, #0xe8
    // str r2, [sp, #0x18]
    // add r2, #0xec
    // str r2, [sp, #0x1c]
    // add r2, #0xf0
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r5, r0
    CreateSpriteResourcesHeader(0x0000076C, 0x64, 0x64, 0x64);
    // add r4, r5, r0
    ov91_022607C4(r5, r4, r7);
    // add r4, r4, r0
}




void ov91_0226066C(void) {
    // add r4, r5, r0
    ov91_02260830(r0, r4);
    // add r4, r4, r7
    sub_0200AEB0(*((u32*)(r5 + 0x0000075C)));
    sub_0200B0A8(*((u32*)(r5 + (0x76 << 4))));
    DestroySingle2DGfxResObj(*((u32*)(r5 + (0x52 << 2))), *((u32*)(r5 + 0x0000075C)));
    DestroySingle2DGfxResObj(*((u32*)(r5 + (0x53 << 2))), *((u32*)(r5 + (0x76 << 4))));
    DestroySingle2DGfxResObj(*((u32*)(r5 + (0x15 << 4))), *((u32*)(r5 + 0x00000764)));
    DestroySingle2DGfxResObj(*((u32*)(r5 + (0x55 << 2))), *((u32*)(r5 + 0x00000768)));
    // add r4, r5, r0
    sub_02018068(r4);
    // add r4, #0x10
    // add r0, r5, r0
    sub_02018068(0x0000074C);
    // add r0, r5, r0
    memset(0x000006FC, 0, 0x94);
    // add r0, r5, r0
    memset((0x79 << 4), 0, (0x63 << 8));
}




void ov91_02260728(void) {
}




void ov91_02260754(void) {
    // add r1, r0, r1
    // add r0, r1, r0
    ov91_02260A2C(((0x42 << 2) * 0), (0x79 << 4), 0, (0x42 << 2));
    // add r6, r6, r3
    GF_AssertFail((r2 + 1));
}




void ov91_0226078C(void) {
    // str r1, [sp]
    // add r5, r7, r0
    // ldr r2, [sp]
    ov91_022608A8(r5, r0);
    // add r4, r4, r0
    // add r5, r5, r0
}




void ov91_022607C4(void) {
    // add r3, sp, #0
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // stmia r6!, {r0, r1}
    // str r0, [sp]
    // str r2, [sp, #0x2c]
    // add r0, r5, r0
    // str r0, [sp, #4]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    Sprite_CreateAffine(r3, 0);
    // str r0, [r4]
    Sprite_SetDrawFlag(0);
    // add r0, #0x7c
    // add r1, r5, r1
    sub_020181B0(r4, 0x0000074C);
    // add r4, #0x7c
    sub_020182A0(r4, 0);
}




void ov91_02260830(void) {
}




void ov91_02260848(void) {
    // add r0, #0xf8
    // str r4, [r0]
    // add r0, #0xf4
    // str r1, [r0]
    // strh r1, [r5, r0]
}




void ov91_02260884(void) {
    // add r0, #0xf8
    // str r2, [r0]
    // strh r1, [r4, r0]
}




void ov91_022608A8(void) {
    // add r1, #0xf4
    // add r1, #0xf8
    ov91_02260A88(*((u32*)r0));
    ov91_02260AF8(r5, r4);
    // add r0, #0xf4
    // add r0, #0xf8
    // add r1, r4, r1
    ov91_02260B48(*((u32*)r5), 0x000006FC);
    // add r1, #0xf8
    NNS_G3dMdlSetMdlAmbAll(*((u32*)(r0 + 8)), 0x00007FFF);
    NNS_G3dMdlSetMdlAmbAll(0x00004A52);
    ov91_02260B5C(r5);
    // add r0, #0xf8
    sub_020182A8((r5 + 4), *((u32*)(*((u32*)r5) + 0x2c)), *((u32*)(*((u32*)r5) + 0x30)), *((u32*)(*((u32*)r5) + 0x34)));
    sub_020181EC((r5 + 4));
    // add r0, #0x7c
    sub_020182A4(r5);
    ov91_02260950(r5);
    // add r0, #0x7c
    sub_020181EC(r5);
    ov91_02260A10(r5);
}




void ov91_02260950(void) {
    // add r0, #0xf8
    ov91_0225E9AC(*((u32*)r0));
    // add r0, #0xf8
    ov91_0225E990(*((u32*)r5));
    // add r0, #0xf8
    // add r0, #0x7c
    sub_020182A8(r5, *((u32*)(*((u32*)r5) + 0x2c)), 0xFFED4000, *((u32*)(*((u32*)r5) + 0x34)));
    // add r0, #0xf8
    // sub r4, r0, r4
    // asr r6, r4, #0x1f
    // add r3, r3, r1
    // adc r0, r2
    FX_Div((((r4 << 0xc) >> 0xc) | (((r6 << 0xc) | (r4 >> 0x14)) << 0x14)), (0x4b << 0xe), 0, (r4 << 0xc));
    // add r1, r3, r7
    // add r5, #0x7c
    // add r3, r3, r7
    sub_020182C4(r5, r1, r0);
    // add r0, r2, r0
    // adc r3, r1
    FX_Div((((r7 >> 1) >> 0xc) | (((r6 << 0x10) | (r4 >> 0x10)) << 0x14)), (0x4b << 0xe), (r4 << 0x10), ((r6 << 0x10) | (r4 >> 0x10)));
    // asr r1, r0, #0xc
    // sub r0, r0, r1
    // str r0, [sp]
    // str r0, [sp, #4]
    NNS_G3dGlbPolygonAttr(0, 0, 0, 0);
}




void ov91_02260A10(void) {
}




void ov91_02260A2C(void) {
}




void ov91_02260A50(void) {
    // add r2, r0, r2
    // add r0, r2, r0
    // add r5, r5, r2
    GF_AssertFail(((0x42 << 2) * 0), (0 + 1), (0x79 << 4), 0x00000888);
}




void ov91_02260A88(void) {
    // add r0, #0xf8
    // add r5, sp, #4
    // add r6, #0x2c
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
    // add r2, #0xf8
    // add r0, sp, #4
    // add r1, sp, #0
    // add r1, sp, #0
    // ldrsh r0, [r1, r2]
    // str r0, [sp, #4]
    // ldrsh r1, [r1, r0]
    // add r0, r1, r0
    // str r2, [sp, #0xc]
    // str r0, [sp, #8]
    // add r1, sp, #4
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // ldrsh r0, [r1, r0]
}




void ov91_02260AF8(void) {
    Sprite_SetDrawFlag(*((u32*)r0), 0);
    // add r0, #0xf4
    // str r1, [r0]
    // add r0, #0xf8
    // add r1, r4, r1
    ov91_02260B48(*((u32*)r5), 0x000006FC);
    sub_020181B0((r5 + 4), r0);
    sub_020182A0((r5 + 4), 1);
    // add r0, #0xf8
    // add r5, #0x7c
    sub_020182A0(r5, 1);
}




void ov91_02260B48(void) {
    // add r0, r1, r0
}




void ov91_02260B5C(void) {
    // ldrsh r1, [r5, r0]
    // strh r1, [r5, r0]
    // ldrsh r0, [r5, r0]
    // add r0, #0xf8
    ov91_0225E6F8(*((u32*)r0), (r1 - 1));
    // add r0, #0xf8
    FX_Atan2Idx(*((u32*)(*((u32*)r5) + 0x10)), *((u32*)(*((u32*)r5) + 8)));
    // asr r0, r0, #4
    _s32_div_f((r6 << 9), 0x0001E200);
    // asr r7, r6, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, (r4 << 1), ((r0 << 0x10) >> 4), r7);
    // add r0, r0, r2
    // adc r1, r3
    // asr r1, r0, #0xc
    // add r1, r1, r0
    // strh r1, [r5, r0]
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    _ll_mul(FX_SinCosTable_, ((r4 + 1) << 1), r6, r7);
    // add r4, r0, r2
    // adc r1, r3
    // asr r1, r1, #0xc
    // add r1, r1, r0
    // strh r1, [r5, r0]
    // add r0, #0xfc
    // strh r1, [r5, r0]
    // add r0, #0xfc
    // add r2, r2, r1
    // add r1, #0xfc
    // strh r2, [r1]
    // add r1, #0xfe
    // add r1, r1, r0
    // add r0, #0xfe
    // strh r1, [r0]
    // add r1, #0xfc
    sub_020182E0((r5 + 4), *((u16*)r5), 0, 0);
    // add r5, #0xfe
    sub_020182E0((r5 + 4), *((u16*)r5), 2);
}




void ov91_02260C48(void) {
    // add r7, sp, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [sp]
    // str r3, [sp, #0x2c]
    // add r0, r6, r0
    // str r0, [sp, #4]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    Sprite_CreateAffine(r7, 0, r7);
    *((u32*)(r5 + 4)) = r0;
    Sprite_SetDrawFlag(0);
    Sprite_SetPaletteOverride(*((u32*)(r5 + 4)), r4);
    // str r0, [r5]
}




void ov91_02260CA8(void) {
}




void ov91_02260CB4(void) {
}




void ov91_02260CC8(void) {
}




void ov91_02260CE0(void) {
}




void ov91_02260D00(void) {
}




void ov91_02260D14(void) {
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [sp]
    // str r3, [sp, #0x2c]
    // add r0, r7, r0
    // str r0, [sp, #4]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0
    Sprite_CreateAffine(2, 0);
    *((u32*)(r5 + 4)) = r0;
    Sprite_SetDrawFlag(0);
    Sprite_SetAffineOverwriteMode(*((u32*)(r5 + 4)), 1);
    Sprite_SetPaletteOverride(*((u32*)(r5 + 4)), r6);
    // str r7, [r5]
    // add r5, #0x1c
}




void ov91_02260D80(void) {
}




void ov91_02260D98(void) {
    // add r6, sp, #0x10
    // add r7, sp, #0xc
    // str r1, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    ov91_02260EE0(*((u32*)(r0 + 0x14)), 0x10, 8, 0xbe);
    // str r1, [sp]
    // str r6, [sp, #4]
    // sub r0, #0x10
    // str r7, [sp, #8]
    ov91_02260EE0(0xa, 4, 0xb6);
    // str r1, [sp]
    // str r6, [sp, #4]
    // sub r0, #0x1a
    // str r7, [sp, #8]
    ov91_02260EE0(6, 3, 0xb4);
    *((u32*)(r5 + 0x14)) = (*((u32*)(r5 + 0x14)) + 1);
    // add r1, r1, r0
    // asr r0, r1, #4
    // add r0, r1, r0
    // asr r1, r0, #5
    // sub r0, r0, r1
    FX_Div((9 << 0xc), (0xa << 0xc));
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // add r1, sp, #0x14
    Sprite_SetAffineScale(*((u32*)(r5 + 4)));
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // ldr r0, [sp, #0x10]
    // sub r0, r1, r0
    *((u32*)(r5 + 8)) = ((*((u32*)(r5 + 0x18)) << 0xc) << 0xc);
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    *((u32*)(r5 + 0xc)) = (((*((u32*)(r5 + 0x18)) << 0xc) << 0xc) << 0xc);
    // add r1, #8
    Sprite_SetMatrix(*((u32*)(r5 + 4)), r5);
    // str r0, [r5]
    Sprite_SetDrawFlag(*((u32*)(r5 + 4)), 0);
    // add r5, #0x1c
}




void ov91_02260E88(void) {
    // add r4, r0, r4
    // add r6, #0x1c
    // add r0, r1, r0
    // add r1, #8
    // str r1, [r4]
}




void ov91_02260EE0(void) {
    // ldr r2, [sp, #0x10]
    // sub r2, r2, r5
    // add r0, r5, r0
    // asr r0, r0, #0x10
    // asr r4, r5, #0x1f
    // asr r1, r0, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // ldr r0, [sp, #0x14]
    // asr r1, r1, #0xc
    // str r1, [r0]
    // asr r1, r0, #0x1f
    // add r2, r0, r2
    // adc r1, r3
    // ldr r0, [sp, #0x18]
    // asr r1, r1, #0xc
    // str r1, [r0]
}




void ov91_02260F50(void) {
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0xc]
    // add r6, r0, r1
    // str r0, [sp, #0x14]
    // add r0, r1, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x38]
    // ldr r7, [sp, #0x3c]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0xc]
    sub_02018030(r6, ov91_02261C0A, *((u16*)(ov91_02261C0A + (((r3 - 1) << 3) << 1))), r7);
    sub_020181B0(r5, r6);
    sub_020182A8(r5, 0, 0xFFF9E000, 0);
    sub_020182C4(r5, (6 << 0xa), (6 << 0xa), (6 << 0xa));
    sub_020182A0(r5, 0);
    // ldr r2, [sp, #0x18]
    // ldr r1, [sp, #0x1c]
    sub_020182E0(r5, *((u16*)(r2 + r1)), 1);
    GF_DegreeToSinCosIdxNoWrap(0xb4);
    sub_020182E0(r5, r0, 1);
    // add r6, #0x10
    // add r5, #0x78
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // add r5, r0, r1
    // sub r1, #0x30
    // add r0, r0, r1
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x40]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    // add r1, r1, r2
    // ldr r2, [sp, #0xc]
    sub_020180BC(r5, *((u16*)ov91_02261BFE), (*((u16*)ov91_02261BFE) << 4), *((u16*)ov91_02261BF8));
    // ldr r0, [sp, #8]
    // add r0, r0, r2
    sub_020181D4(0x78, r5, (*((u16*)r4) * 0x78));
    // ldr r0, [sp, #0x10]
    // add r5, #0x14
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // str r2, [r0, r1]
}




void ov91_02261070(void) {
    // add r5, r7, r0
    // add r5, #0x14
    // add r5, r7, r0
    // add r5, #0x10
}




void ov91_022610A8(void) {
    // add r0, r4, r1
    // add r1, #0x3c
    sub_02018124(*((u32*)(r0 + (0x66 << 2))));
    // add r1, #8
    // add r3, r2, r1
    // add r1, r2, r1
    // str r1, [r4, r0]
    // sub r0, #0x46
    // add r3, r2, r0
    // sub r0, #0x46
    // add r0, r2, r0
    // str r0, [r4, r1]
    // str r0, [r4, r1]
    // strh r2, [r4, r0]
    // strb r2, [r4, r0]
    // add r1, #8
    // add r3, r2, r1
    // add r1, r2, r1
    // str r1, [r4, r0]
    // ldrsh r0, [r4, r1]
    // strh r0, [r4, r1]
    // ldrsh r0, [r4, r1]
    // strb r2, [r4, r0]
    // str r2, [r4, r0]
    // add r3, r1, r2
    // add r1, r1, r2
    // str r1, [r4, r0]
    // str r1, [r4, r0]
    GF_AssertFail((((0x000001DA + 2) + 4) + 4), (0x33 << 0xc), (1 << 0xc));
    // add r0, r4, r1
    // add r1, #0x30
    sub_02018198(*((u32*)(r4 + (0x6b << 2))));
    // add r0, r4, r1
    // add r1, #0x1c
    sub_02018198(*((u32*)(r4 + (7 << 6))));
    sub_020181EC(r4);
    // add r4, #0x78
}




void ov91_022611D0(void) {
    // add r0, #0x78
    // str r3, [r4, r0]
    // str r2, [r4, r1]
    // strb r2, [r4, r1]
    // strb r3, [r4, r0]
}




void ov91_02261200(void) {
    // str r1, [r0, r2]
}




void ov91_02261208(void) {
    // ldr r0, [sp, #0x68]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x2c]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x30]
    // asr r0, r6, #0x1f
    // str r0, [sp, #0x34]
    // asr r0, r7, #0x1f
    // str r0, [sp, #0x38]
    // str r3, [sp]
    // ldr r1, [sp, #0x34]
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)r2), *((u32*)r0));
    // str r0, [sp, #0x3c]
    // str r1, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x30]
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r4 + 4)));
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x40]
    // ldr r1, [sp, #0x38]
    // asr r3, r2, #0x1f
    _ll_mul(r7, *((u32*)(r4 + 8)));
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x44]
    // ldr r1, [sp, #0x38]
    // asr r3, r2, #0x1f
    _ll_mul(r7, *((u32*)(r5 + 8)));
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x48]
    // ldr r1, [sp, #0x34]
    // asr r3, r2, #0x1f
    _ll_mul(r6, *((u32*)r5));
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x30]
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r5 + 4)));
    // mov ip, r0
    // str r1, [sp, #8]
    // ldr r0, [sp, #0x3c]
    // add r2, r0, r7
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x20]
    // adc r0, r1
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x40]
    // add r0, r0, r7
    // adc r3, r1
    // str r3, [sp, #0x20]
    // add r2, r2, r0
    // ldr r0, [sp, #0x44]
    // ldr r3, [sp, #0x18]
    // add r0, r0, r7
    // adc r3, r1
    // str r3, [sp, #0x18]
    // add r2, r2, r0
    // ldr r0, [sp]
    // sub r0, r0, r2
    // ldr r2, [sp, #0x48]
    // add r3, r2, r7
    // ldr r2, [sp, #0x10]
    // adc r2, r1
    // str r2, [sp, #0x10]
    // ldr r2, [sp, #0x4c]
    // add r2, r2, r7
    // adc r6, r1
    // mov r6, ip
    // add r7, r6, r7
    // ldr r6, [sp, #8]
    // adc r6, r1
    // str r6, [sp, #8]
    // add r1, r2, r6
    // add r1, r3, r1
    FX_Div((((((r0 << 0x14) >> 0xc) | (r3 << 0x14)) >> 0xc) | ((r3 << 0x14) << 0x14)), ((r6 << 0x14) << 0x14), (((((r2 >> 0xc) | (r0 << 0x14)) << 0x14) >> 0xc) | (r6 << 0x14)), ((((r3 << 0x14) << 0x14) >> 0xc) | (((r2 >> 0xc) | (r0 << 0x14)) << 0x14)));
    // asr r7, r6, #0x1f
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)r5), r0, r7);
    // add r3, r2, r3
    // adc r1, r2
    // add r1, r0, r2
    // ldr r0, [sp, #0x68]
    // str r1, [r0]
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(r5 + 4)), (r1 << 0x14), r6, r7);
    // add r3, r2, r3
    // adc r1, r2
    // add r1, r0, r2
    // ldr r0, [sp, #0x68]
    *((u32*)(*((u32*)(r4 + 4)) + 4)) = (r1 << 0x14);
    // asr r1, r0, #0x1f
    _ll_mul(*((u32*)(r5 + 8)), (r1 << 0x14), r6, r7);
    // add r3, r0, r3
    // adc r1, r4
    // ldr r0, [sp, #0x68]
    // add r1, r2, r1
    // str r1, [r0]
    // ldr r0, [sp, #0x6c]
    // str r6, [r0]
}




void ov91_0226137C(void) {
    // str r1, [r0, r2]
}




void ov91_02261384(void) {
    // add r0, sp, #0
    // add r0, sp, #0
    // strh r4, [r0]
    // add r0, sp, #0
}




void ov91_022613AC(void) {
}




void ov91_022613C8(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022613E2: ; jump table
    // ldrsh r1, [r4, r1]
    // asr r1, r1, #0x10
    ov91_022614FC(r1, ((4 - 1) << 0x10), *((u8*)(r0 + 6)));
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = 0;
    // ldrsh r0, [r4, r0]
    // strh r0, [r4]
    *((u16*)(r4 + 2)) = 0;
    // ldrsh r1, [r4, r1]
    ov91_022614FC(r5, 4, *((u8*)(r4 + 6)));
    // str r0, [sp]
    // ldrsh r2, [r4, r1]
    // lsl r1, r2
    G2x_SetBlendAlpha_(0x04001050, 1, 8, 0);
    *((u16*)(r4 + 2)) = (r0 + 1);
    // ldrsh r2, [r4, r0]
    // ldrsh r0, [r4, r0]
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r1, r0, #4
    // sub r3, r0, r1
    // lsl r1, r2
    // sub r0, r0, r3
    // str r0, [sp]
    // lsl r2, r5
    // lsl r4, r6
    G2x_SetBlendAlpha_(0x04001050, 1, (8 | (1 | 1)));
    // ldrsh r1, [r4, r0]
    // strh r1, [r4]
    // strh r1, [r0]
    *((u16*)(r4 + 2)) = (0 + 1);
    // ldrsh r0, [r4, r0]
    // asr r0, r1, #2
    // add r0, r1, r0
    // asr r3, r0, #3
    // sub r0, r0, r3
    // str r0, [sp]
    // ldrsh r2, [r4, r1]
    // lsl r1, r2
    G2x_SetBlendAlpha_(0x04001050, 1, 8);
}




void ov91_022614D4(void) {
    // strh r0, [r4]
    // ldrsh r0, [r4, r0]
}




void ov91_022614FC(void) {
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // sub r5, r0, r4
    // bpl _0226151E
    // sub r1, r1, r4
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #8]
}




void ov91_02261580(void) {
    // add r0, #0x9c
    // str r6, [r0]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xbc
    AddCharResObjFromOpenNarc(*((u32*)(r1 + 0x8c)), r2, 0xa, 0);
    // str r0, [r5]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // add r1, #0xc0
    AddPlttResObjFromOpenNarc(*((u32*)(r4 + 0x8c)), r7, 0xb, 0);
    *((u32*)(r5 + 4)) = r0;
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xc4
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r4 + 0x8c)), r7, 9, 0);
    *((u32*)(r5 + 8)) = r0;
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // add r1, #0xc8
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r4 + 0x8c)), r7, 8, 0);
    *((u32*)(r5 + 0xc)) = r0;
    sub_0200AE18(*((u32*)r5));
    GF_AssertFail();
    sub_0200B00C(*((u32*)(r5 + 4)));
    GF_AssertFail();
    sub_0200A740(*((u32*)r5));
    sub_0200A740(*((u32*)(r5 + 4)));
    // str r1, [sp]
    // sub r0, #0x8d
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r2, #0xbc
    // str r2, [sp, #0x14]
    // add r2, #0xc0
    // str r2, [sp, #0x18]
    // add r2, #0xc4
    // str r2, [sp, #0x1c]
    // add r2, #0xc8
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, #0x10
    CreateSpriteResourcesHeader(r5, 0x8c, 0x8c, 0x8c);
    // str r0, [sp, #0x5c]
    // add r0, #0x10
    // str r0, [sp, #0x60]
    // str r6, [sp, #0x78]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x70]
    // str r0, [sp, #0x74]
    // add r0, sp, #0x5c
    Sprite_Create(1);
    *((u32*)(r5 + 0x34)) = r0;
    Sprite_SetDrawFlag(0);
    String_New(0x10, r6);
    *((u32*)(r5 + 0x5c)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, #0x38
    AddTextWindowTopLeftCorner(*((u32*)r4), r5, 3, 2);
    // add r0, #0x38
    sub_02013910(r5, r6);
    *((u32*)(r5 + 0x4c)) = r0;
    sub_02013948(1);
    // add r3, #0x50
    sub_02021AC8(1, 1, r5);
    GF_AssertFail();
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // add r1, #0xb6
    AddPlttResObjFromNarc(*((u32*)(r4 + 0x96)), 0x10, 7, 0);
    *((u32*)(r5 + 0x60)) = r0;
    sub_0200B00C();
    GF_AssertFail();
    sub_0200A740(*((u32*)(r5 + 0x60)));
    // str r0, [sp, #0x2c]
    // add r0, #0x38
    // str r0, [sp, #0x30]
    // str r0, [sp, #0x34]
    SpriteTransfer_GetPaletteProxy(*((u32*)(r5 + 0x60)), 0);
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // mvn r0, r0
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x54]
    // str r6, [sp, #0x58]
    // add r0, sp, #0x2c
    TextOBJ_Create(1, *((u32*)(r5 + 0x4c)));
    *((u32*)(r5 + 0x48)) = r0;
    TextOBJ_SetSpritesDrawFlag(0);
    // add r0, #0x38
    RemoveWindow(r5);
    // str r2, [sp]
    // add r0, #0x64
    ov91_0225D40C(r5, 0xFFFC0000, (8 << 0xe), (9 << 0xe));
    // str r0, [sp]
    // add r0, #0x7c
    ov91_0225D40C(r5, (3 << 0x10), (3 << 0x10), ((3 << 0x10) >> 2));
    // add r0, #0x94
    // strh r1, [r0]
    // add r5, #0x96
    // strh r0, [r5]
}




void ov91_02261790(void) {
    // add r0, #0x50
}




void ov91_02261808(void) {
    // str r0, [sp]
    String16_FormatInteger(*((u32*)(r0 + 0x5c)), r2, 2, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, #0x38
    AddTextWindowTopLeftCorner(*((u32*)r4), r5, 3, 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x38
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r5 + 0x5c)), 0);
    // add r3, #0x9c
    // add r2, #0x38
    TextOBJ_CopyFromBGWindow(*((u32*)(r5 + 0x48)), *((u32*)(r5 + 0x4c)), r5, *((u32*)r5));
    // add r0, #0x38
    RemoveWindow(r5);
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r5 + 0x48)), 1);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x34)), 1);
    // add r0, #0x98
    // strh r1, [r0]
    // add r5, #0x9a
    // strh r0, [r5]
}




void ov91_02261890(void) {
    // add r1, #0x98
    // add r1, #0x9a
    // strh r2, [r1]
    // add r0, #0x98
    // strh r1, [r0]
}




void ov91_022618B0(void) {
    // add r0, #0x98
    // str r0, [sp]
    String16_FormatInteger(*((u32*)(r0 + 0x5c)), r2, 2, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, #0x38
    AddTextWindowTopLeftCorner(*((u32*)r4), r5, 3, 2);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x38
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r5 + 0x5c)), 0);
    // add r3, #0x9c
    // add r2, #0x38
    TextOBJ_CopyFromBGWindow(*((u32*)(r5 + 0x48)), *((u32*)(r5 + 0x4c)), r5, *((u32*)r5));
    // add r0, #0x38
    RemoveWindow(r5);
    // add r5, #0x96
    // strh r0, [r5]
}




void ov91_02261928(void) {
    // add r0, #0x98
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261942: ; jump table
    // ldrsh r0, [r4, r0]
    // add r0, #0x94
    // strh r1, [r0]
    // add r0, #0x98
    // strh r1, [r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0x9a
    // strh r1, [r0]
    // ldrsh r0, [r4, r0]
    // add r0, #0x94
    // strh r1, [r0]
    // add r0, #0x98
    // strh r1, [r0]
    // ldrsh r0, [r4, r1]
    // add r0, #0x96
    // strh r2, [r0]
    // ldrsh r1, [r4, r1]
    // add r0, #0x8c
    // str r1, [r0]
    // add r0, #0x7c
    // ldrsh r0, [r4, r0]
    // add r0, #0x64
    // add r1, sp, #0
    // str r0, [sp]
    // str r0, [sp, #4]
}




void ov91_022619E8(void) {
    // strh r2, [r0]
    *((u8*)(r0 + 2)) = 1;
    *((u8*)(r0 + 3)) = 0;
}




void ov91_02261A00(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02261A22: ; jump table
    // ldrsb r1, [r4, r0]
    *((u8*)(r0 + 3)) = (r1 + 1);
    // ldrsb r1, [r4, r0]
    _s32_div_f(((0x19 << 0xc) * (r1 + 1)), 0x3a);
    // add r1, r2, r1
    ov91_02261200(r5, (1 << 0xc), r0);
    // ldrsb r1, [r4, r0]
    _s32_div_f((0x96 * r1), 0x3a);
    // add r1, #0xf9
    // add r1, r2, r1
    GF_SndHandleSetTempoRatio(7, 7, r0);
    // ldrsb r0, [r4, r0]
    PlaySE(0x00000587);
    // ldrsb r0, [r4, r0]
    // strh r0, [r4]
    // str r0, [sp]
    StartBrightnessTransition(4, 0x10, 0, 0x3f);
    // strh r0, [r4]
    IsBrightnessTransitionActive(1);
    ov91_022611D0(r5);
    ov91_02261200(r5, (2 << 0xc));
    ov91_02260364(r6, 1);
    // strh r0, [r4]
    // str r0, [sp]
    StartBrightnessTransition(0xe, 0, 0x10, 0x3f);
    // strh r0, [r4]
    IsBrightnessTransitionActive(1);
    // strh r0, [r4]
    *((u8*)(r4 + 2)) = 0;
    // strh r0, [r4]
}




void ov91_02261B10(void) {
    // add r1, #0xf9
}




void ov91_02261B20(void) {
    // _02261B24: .word ov91_02262754
}




u8 ov91_02261B28(void) {
}




void ov91_02261B2C(void) {
}




u8 ov91_02261B48(void) {
}




void ov91_02261B4C(void) {
}




void ov91_02261B58(void) {
}




void ov91_02261B64(void) {
}




void ov91_02261B8C(void) {
}




void ov91_02261B9C(void) {
}




void ov91_02261BAC(void) {
}




void ov91_02261BBC(void) {
}




void ov91_02261BC8(void) {
}




u8 ov91_02261BD8(void) {
}




u8 ov91_02261BDC(void) {
}




u8 ov91_02261BE0(void) {
}




u8 ov91_02261BE4(void) {
}



