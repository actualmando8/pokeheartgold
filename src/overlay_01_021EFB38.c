/* Decompiled from asm/overlay_01_021EFB38.s */
#include "global.h"

void ov01_021EFB38(void) {
    // blx r2
    *((u32*)(ov01_02209B64 + 8)) = (*((u32*)(ov01_02209B64 + 8)) + 1);
    OS_GetTick(ov01_02209B64, (*((u32*)(ov01_02209B64 + 8)) + 1), *((u32*)(ov01_022068C4 + (*((u32*)(ov01_02209B64 + 4)) << 2))), (*((u32*)(ov01_02209B64 + 4)) << 2));
    OS_SetTick(0, 0);
}




void ov01_021EFB64(void) {
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    // sub r1, #0x22
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
}




void ov01_021EFC04(void) {
    UnloadOverlayByID(FS_OVERLAY_ID);
    // sub r1, #0x22
    UnloadOverlayByID(FS_OVERLAY_ID, r0);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
    UnloadOverlayByID(FS_OVERLAY_ID);
}




void ov01_021EFC94(void) {
    *((u32*)(ov01_02209B64 + 4)) = r0;
    *((u32*)(ov01_02209B64 + 8)) = 0;
    CreateSysTaskAndEnvironment(ov01_021EFB38, 0x24, 5, 4);
    SysTask_GetData();
    *((u32*)(r0 + 0x10)) = r5;
    *((u32*)(r0 + 0x14)) = r6;
    NARC_New(0x6d, 4);
    *((u32*)(r4 + 0x20)) = r0;
    // str r0, [r1]
    *((u32*)(r4 + 0x18)) = 0;
}




void ov01_021EFCDC(void) {
}




void ov01_021EFCF8(void) {
    // str r2, [sp]
    Heap_Alloc(4, 0x4c);
    memset(0, 0x4c);
    SysTask_CreateOnMainQueue(ov01_021EFD3C, r4, 5);
    *((u32*)(r4 + 0x48)) = r5;
    // str r0, [r5]
    *((u32*)(r4 + 0xc)) = r6;
    // ldr r0, [sp]
    *((u32*)(r4 + 0x10)) = r7;
    *((u32*)(r4 + 0x14)) = 0;
    // ldr r0, [sp, #0x18]
    *((u32*)(r4 + 4)) = 0;
}




void ov01_021EFD3C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EFD54: ; jump table
    // str r0, [sp]
    // add r0, #0x30
    // str r0, [sp]
    // add r0, #0x30
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x18
    // str r0, [r4]
    // add r0, #0x18
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x18
    // str r0, [r4]
    // add r0, #0x18
    // str r0, [r4]
    // str r0, [r4]
    // str r1, [r4]
    // str r1, [r2]
    // add r4, #0x30
}




void ov01_021EFE30(void) {
    // ldr r0, [r0, #0x18]
    // bx lr
    // TODO: decompile
}




void ov01_021EFE34(void) {
    // str r1, [r0]
    // sub r1, r2, r1
}




void ov01_021EFE44(void) {
    // add r0, r0, r1
    // str r0, [r4]
}




void ov01_021EFE70(void) {
    // str r1, [r0]
    // sub r1, r2, r1
}




void ov01_021EFE80(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // add r0, r0, r2
    // adc r1, r3
    // add r0, r0, r1
    // str r0, [r4]
}




void ov01_021EFEC8(void) {
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




void ov01_021EFF28(void) {
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




void ov01_021EFF90(void) {
    GXx_SetMasterBrightness_(0x0400006C);
    GXx_SetMasterBrightness_(0x0400106C);
}




void ov01_021EFFB0(void) {
}




void ov01_021EFFBC(void) {
    ov01_021EFE44();
    SysTask_CreateOnVWaitQueue(ov01_021EFFD8, r5, 0xa);
}




void ov01_021EFFD8(void) {
}




void ov01_021EFFEC(void) {
    Heap_Alloc(4, 0x30);
    memset(0, 0x30);
    // strh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
}




void ov01_021F0028(void) {
    ov01_021F0174(*((u32*)(r0 + 0x24)));
    // and r0, r1
    // str r0, [r2]
    Heap_Free(r4, *((u32*)(1 << 0x1a)), (1 << 0x1a));
}




void ov01_021F0050(void) {
    // str r3, [sp, #4]
    // ldr r4, [sp, #0x20]
    GF_AssertFail(*((u32*)(r1 + 0x24)));
    *((u32*)(r6 + 0x18)) = 0;
    // add r6, #0x18
    // ldr r2, [sp, #0x24]
    // ldr r3, [sp, #0x28]
    *((u32*)(r5 + 0x20)) = *((u32*)(*((u32*)(*((u32*)(r6 + 0x10)) + 4)) + 0x1c));
    *((u32*)(r5 + 0x18)) = r7;
    *((u32*)(r5 + 0x1c)) = 0;
    // ldr r0, [sp, #4]
    *((u32*)(r5 + 0x2c)) = r6;
    // str r0, [sp]
    ov01_021EFEC8(r5, r4);
    // sub r0, r0, r4
    // strh r0, [r2]
    *((u16*)(0x04000040 + 4)) = 0xc0;
    *((u16*)(0x04000040 + 2)) = (((r4 + 1) << 0x18) >> 0x18);
    *((u16*)(0x04000040 + 6)) = 0xc0;
    // add r0, #0xff
    // sub r2, r2, r4
    // strh r0, [r1]
    *((u16*)(0x04000040 + 4)) = 0xc0;
    *((u16*)(0x04000040 + 2)) = ((1 << 0x18) >> 0x18);
    *((u16*)(0x04000040 + 6)) = 0xc0;
    SysTask_CreateOnVWaitQueue(ov01_021F00DC, r5, (1 << 0xa));
}




void ov01_021F00DC(void) {
    SysTask_CreateOnVWaitQueue(ov01_021F010C, (1 << 0xa));
    *((u32*)(r4 + 0x28)) = r0;
    ov01_021FB530(*((u32*)(r4 + 0x20)), ov01_021F01D0, r4);
    *((u32*)(r4 + 0x24)) = r0;
    SysTask_Destroy(r5);
}




void ov01_021F010C(void) {
    ov01_021EFF28(r1);
    *((u32*)(r4 + 0x1c)) = (*((u32*)(r4 + 0x1c)) + 1);
    // asr r0, r0, #0xc
    // bmi _021F014A
    // sub r1, r1, r0
    // strh r1, [r2]
    *((u16*)(0x04000040 + 4)) = 0xc0;
    *((u16*)(0x04000040 + 2)) = (((*((u32*)r4) + 1) << 0x18) >> 0x18);
    *((u16*)(0x04000040 + 6)) = 0xc0;
    // add r1, #0xff
    // strh r1, [r3]
    // sub r0, r1, r0
    *((u16*)(0x04000040 + 4)) = 0xc0;
    *((u16*)(0x04000040 + 2)) = (((((*((u32*)r4) + 1) << 0x18) >> 0x18) << 0x18) >> 0x18);
    *((u16*)(0x04000040 + 6)) = 0xc0;
    ov01_021F0174(r4, 1, 0xc0, 0x04000040);
}




void ov01_021F0174(void) {
    // strh r3, [r0]
    *((u16*)(0x04000048 + 2)) = (*((u16*)(0x04000048 + 2)) & ~(0x3f));
    // sub r2, #8
    // strh r3, [r2]
    // strh r3, [r0]
    // and r2, r0
    // str r0, [r3]
    // str r1, [r0]
    ov01_021FB554(*((u32*)(r0 + 0x24)), 1, *((u32*)(0x20 << 0x15)), (0x20 << 0x15));
    *((u32*)(r4 + 0x24)) = 0;
    SysTask_Destroy(*((u32*)(r4 + 0x28)));
    *((u32*)(r4 + 0x28)) = 0;
}




void ov01_021F01D0(void) {
    _u32_div_f(*((u16*)0x04000006), *((u32*)(r1 + 0x18)));
    // tst r0, r1
    // neg r0, r0
    // asr r2, r0, #0xc
    // and r1, r0
    // str r1, [r0]
    *((u32*)(0x04000010 + 4)) = r2;
    *((u32*)(0x04000010 + 8)) = r2;
    *((u32*)(0x04000010 + 0xc)) = r2;
    // sub r3, #0x10
    // and r2, r1
    // str r1, [r3]
    // add r0, #0x3a
    // strh r2, [r0]
    // sub r3, #0x10
    // and r2, r1
    // str r1, [r3]
    // add r0, #0x3a
    // strh r1, [r0]
}




void ov01_021F0250(void) {
    Heap_Alloc(4, 0x48);
    memset(0, 0x48);
    // strh r3, [r0]
    // and r3, r6
    // strh r1, [r0]
    *((u16*)(0x04000048 + 2)) = (*((u16*)(0x04000048 + 2)) & ~(0x3f));
}




void ov01_021F029C(void) {
    ov01_021F03F8(*((u32*)(r0 + 0x3c)));
    // and r0, r1
    // str r0, [r2]
    Heap_Free(r4, *((u32*)(1 << 0x1a)), (1 << 0x1a));
}




void ov01_021F02C4(void) {
    GF_AssertFail(*((u32*)(r1 + 0x3c)));
    *((u32*)(r5 + 0x18)) = 0;
    // add r5, #0x18
    *((u32*)(r4 + 0x38)) = *((u32*)(*((u32*)(*((u32*)(r5 + 0x10)) + 4)) + 0x1c));
    *((u32*)(r4 + 0x30)) = 0x60;
    *((u32*)(r4 + 0x34)) = 0;
    *((u32*)(r4 + 0x44)) = r5;
    // str r6, [sp]
    ov01_021EFEC8(r4, 0, (0xff << 0xc), r7);
    // ldr r3, [sp, #0x18]
    // add r0, #0x18
    // str r6, [sp]
    ov01_021EFEC8(r4, 0, (6 << 0x10));
    // strh r1, [r2]
    *((u16*)(0x04000040 + 4)) = 0xc0;
    *((u16*)(0x04000040 + 2)) = 0xff;
    *((u16*)(0x04000040 + 6)) = 0xc0;
    SysTask_CreateOnVWaitQueue(ov01_021F0330, r4, (0x04000040 >> 0x10));
}




void ov01_021F0330(void) {
    SysTask_CreateOnVWaitQueue(ov01_021F0360, (1 << 0xa));
    *((u32*)(r4 + 0x40)) = r0;
    ov01_021FB530(*((u32*)(r4 + 0x38)), ov01_021F03C8, r4);
    *((u32*)(r4 + 0x3c)) = r0;
    SysTask_Destroy(r5);
}




void ov01_021F0360(void) {
    // add r0, #0x18
    ov01_021EFF28(r1);
    ov01_021EFF28(r4);
    *((u32*)(r4 + 0x34)) = (*((u32*)(r4 + 0x34)) + 1);
    // asr r2, r0, #0xc
    // asr r1, r0, #0xc
    // sub r3, r4, r2
    // strh r3, [r0]
    // sub r3, r3, r1
    *((u16*)(0x04000040 + 4)) = ((0x60 << 0x18) >> 0x18);
    // and r2, r3
    // add r1, #0x60
    *((u16*)(0x04000040 + 2)) = ((0xff << 8) | 0xff);
    // and r2, r1
    *((u16*)(0x04000040 + 6)) = (0xc0 | (r1 << 8));
    ov01_021F03F8(0xff, (0xc0 | (r1 << 8)), (r1 << 8), (r2 << 8));
}




void ov01_021F03C8(void) {
    // and r1, r2
    // str r0, [r3]
    // and r1, r2
    // str r0, [r3]
}




void ov01_021F03F8(void) {
    // strh r3, [r0]
    *((u16*)(0x04000048 + 2)) = (*((u16*)(0x04000048 + 2)) & ~(0x3f));
    // sub r2, #8
    // strh r3, [r2]
    // strh r3, [r0]
    // and r2, r0
    // str r0, [r3]
    // str r1, [r0]
    ov01_021FB554(*((u32*)(r0 + 0x3c)), 1, *((u32*)(0x20 << 0x15)), (0x20 << 0x15));
    *((u32*)(r4 + 0x3c)) = 0;
    SysTask_Destroy(*((u32*)(r4 + 0x40)));
    *((u32*)(r4 + 0x40)) = 0;
}




void ov01_021F0454(void) {
    // ldr r1, [sp, #0x34]
    // str r2, [sp, #0x10]
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r3, [sp, #0x30]
    // ldr r5, [sp, #0x38]
    // ldr r4, [sp, #0x3c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // add r3, sp, #0x14
    // ldr r2, [sp, #0x14]
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    // ldr r1, [sp, #0x14]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
}




void ov01_021F0500(void) {
    // ldr r6, [sp, #0x38]
    // str r6, [sp, #0x38]
    // ldr r6, [sp, #0x30]
    // str r6, [sp]
    // ldr r6, [sp, #0x34]
    // str r6, [sp, #4]
    // ldr r6, [sp, #0x38]
    // str r3, [sp, #0x10]
    // str r6, [sp, #8]
    // ldr r6, [sp, #0x3c]
    // str r6, [sp, #0xc]
    ov01_021F0454();
    // ldr r0, [sp, #0x30]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0xc]
    ov01_021F0454(r5, r4, r7);
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x38]
    GetBgTilemapBuffer(((r1 << 0x18) >> 0x18));
    // mov ip, r5
    // str r0, [sp, #0x14]
    // add r0, r4, r5
    // ldr r0, [sp, #0x14]
    // sub r0, r0, r4
    // strh r0, [r3, r2]
    // strh r1, [r3, r6]
    // and r7, r0
    // asr r1, r1, #0xa
    // eor r0, r1
    // strh r0, [r3, r2]
    // and r2, r1
    // asr r1, r0, #0xa
    // eor r0, r1
    // strh r0, [r3, r6]
    // ldr r0, [sp, #0x14]
    // add r5, #0x10
    // add r0, #0x10
    // str r0, [sp, #0x14]
    // mov r0, ip
    // mov ip, r0
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x38]
    ScheduleBgTilemapBufferTransfer((((1 << 0xa) | *((u16*)(r0 + (((0xf << 0x10) << 0x10) >> 0xf)))) + 1), ((0x0000FBFF << 0x18) >> 0x18), *((u16*)(r0 + (((0xf << 0x10) << 0x10) >> 0xf))), r0);
}




void ov01_021F05C4(void) {
    // str r0, [r5]
    // str r0, [r5, r7]
}




void ov01_021F05F4(void) {
    // ldr r0, [r5, r6]
}




void ov01_021F0614(void) {
    // ldr r6, [sp, #0x58]
    // str r6, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x2c]
    // ldr r2, [sp, #0x4c]
    // str r0, [r4]
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x48]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x50]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r2, [sp, #0x54]
    // str r6, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r4, #0x10
    // str r1, [sp, #0x14]
    // str r1, [sp, #0x18]
    // add r1, #8
    // add r2, #0xc
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
}




void ov01_021F06EC(void) {
    // ldr r0, [r5, r7]
}




void ov01_021F0718(void) {
    // add r1, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r1, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // str r2, [sp, #8]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0
    // str r3, [sp, #0xc]
}




void ov01_021F074C(void) {
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // add r2, sp, #0
    // str r1, [sp]
    // ldmia r2!, {r0, r1}
    // stmia r4!, {r0, r1}
    // str r0, [r4]
}




void ov01_021F0768(void) {
}




void ov01_021F0780(void) {
}




void ov01_021F0788(void) {
    // add r0, #0x2e
    // ldr r3, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r0, #0x14
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r1, [sp, #0x28]
    // add r0, #0x2d
    // strb r1, [r0]
    // add r0, sp, #0x2c
    // add r0, #0x2f
    // strb r1, [r0]
    // add r5, #0x2e
    // strb r0, [r5]
}




void ov01_021F07E0(void) {
    // add r1, #0x2e
    // add r0, #0x14
    // add r0, #0x2c
    // sub r1, r2, r1
    // asr r3, r1, #0x10
    // add r1, #0x2d
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // sub r1, r6, r1
    // add r0, #0x2f
    // asr r1, r1, #0x10
    // add r2, r1, r2
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
}




void ov01_021F0848(void) {
}




void ov01_021F0860(void) {
}




void ov01_021F0868(void) {
    // add r0, #0x2e
    // ldr r3, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r0, #0x14
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r1, [sp, #0x28]
    // add r0, #0x2d
    // strb r1, [r0]
    // add r0, sp, #0x2c
    // add r0, #0x2f
    // strb r1, [r0]
    // add r5, #0x2e
    // strb r0, [r5]
}




void ov01_021F08C0(void) {
    // add r0, #0x2e
    // add r0, #0x2c
    // sub r1, r2, r1
    // asr r3, r1, #0x10
    // add r1, #0x2d
    // add r0, r3, r0
    // sub r1, r4, r1
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r2, r1, r2
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    // add r0, #0x14
    // add r0, #0x2c
    // sub r1, r2, r1
    // asr r3, r1, #0x10
    // add r1, #0x2d
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // sub r1, r6, r1
    // add r0, #0x2f
    // asr r1, r1, #0x10
    // add r2, r1, r2
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
}




void ov01_021F0960(void) {
    // ldr r5, [sp, #0x18]
    // sub r1, r5, r3
    // str r1, [sp]
    // sub r1, r2, r4
    // str r1, [sp, #4]
    // add r1, sp, #8
}




void ov01_021F09BC(void) {
}




void ov01_021F09EC(void) {
}




void ov01_021F0A0C(void) {
    // str r3, [r0]
    // add r3, sp
    // add r3, #0xc9
    // strb r4, [r3]
    // add r3, #0xc6
    // strb r1, [r3]
    // add r1, #0xc7
    // strb r2, [r1]
    // add r1, #0xc4
    // strb r2, [r1]
    // add r1, #0xc5
    // strb r2, [r1]
    // add r1, #0xc8
    // strb r2, [r1]
    // add r0, #0xca
    // strb r1, [r0]
}




void ov01_021F0A4C(void) {
    // add r0, #0xca
    // add r0, #0xc4
    // ldrsb r0, [r6, r1]
    // add r0, #0xc8
    // strb r2, [r0]
    // ldrsb r0, [r6, r1]
    // add r0, #0xc7
    // add r0, #0xc8
    // strb r1, [r0]
    // add r0, #0xc4
    // sub r2, r2, r3
    // ror r2, r1
    // add r2, r3, r2
    // sub r2, r2, r4
    // str r2, [sp]
    // add r2, #0xc6
    // str r2, [sp, #4]
    // add r0, r6, r0
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // add r2, #0xc9
    // sub r3, #0x30
    // add r1, #0x10
    // str r2, [sp, #0x14]
    // sub r3, r3, r4
    ov01_021F0868(*((u32*)((*((u8*)r0) << 2) + 4)), (*((u8*)(ov01_02206980 + (*((u8*)r0) << 0x1d))) << 5), (*((u8*)(ov01_02206980 + (*((u8*)r0) << 0x1d))) << 5), 0x20);
    // add r0, #0xc4
    // add r0, #0xc4
    // strb r1, [r0]
    // add r0, #0xc5
    // add r0, #0xc4
    // add r5, r6, r0
    // add r7, #0xc5
    ov01_021F08C0(*((u32*)(r5 + 4)), (*((u8*)r6) + 1));
    // str r0, [sp, #0x18]
    // strb r0, [r7]
    // add r0, #0xc4
    // add r0, #0xc5
    // ldr r0, [sp, #0x18]
    // add r6, #0xca
    // strb r0, [r6]
}




void ov01_021F0B44(void) {
}




void ov01_021F0B5C(void) {
    // add r1, #0xe0
}




void ov01_021F0B78(void) {
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // add r0, #0xe0
    GF_AssertFail(*((u32*)r1));
    *((u32*)(r4 + 0x18)) = 0;
    // add r4, #0x18
    // add r0, #0xd8
    // str r1, [r0]
    *((u32*)(r7 + 0x14)) = 0;
    // add r0, #0xe4
    // str r4, [r0]
    ov01_021EFE34(r7, 0xff, 0, r6);
    _u32_div_f(0, r5);
    // ldr r0, [sp, #0x18]
    _u32_div_f((r0 * r1), r5);
    _u32_div_f(r4, r5);
    // tst r0, r1
    // add r0, r7, r4
    *((u8*)(r0 + 0x18)) = r6;
    // ldr r0, [sp, #0x18]
    // sub r1, r0, r6
    // add r0, r7, r4
    *((u8*)(r0 + 0x18)) = 1;
    // ldr r2, [sp, #0x1c]
    // strh r3, [r0]
    // ldr r1, [sp, #0x20]
    *((u16*)(0x04000048 + 2)) = (0x3f | (*((u16*)(0x04000048 + 2)) & ~(0x3f)));
    // sub r1, #8
    // strh r3, [r1]
    // strh r1, [r0]
    // and r1, r0
    // str r0, [r3]
    SysTask_CreateOnVWaitQueue(ov01_021F0C40, r7, (0x20 << 5), (0x20 << 0x15));
}




void ov01_021F0C40(void) {
    // add r0, #0xd8
    ov01_021FB530(*((u32*)r1), ov01_021F0CA8, r1);
    // add r1, #0xdc
    // str r0, [r1]
    SysTask_CreateOnVWaitQueue(ov01_021F0C7C, r4, (1 << 0xa));
    // add r4, #0xe0
    // str r0, [r4]
    SysTask_Destroy(r5);
}




void ov01_021F0C7C(void) {
}




void ov01_021F0CA8(void) {
    // add r0, r1, r0
    // sub r0, r2, r0
    // bpl _021F0CBC
    // and r1, r0
    // strh r0, [r1]
    *((u16*)(0x04000040 + 4)) = 0xc0;
}




void ov01_021F0CDC(void) {
    // and r0, r1
    // str r0, [r2]
    // add r0, #0xe4
    // str r1, [r0]
    // add r0, #0xdc
    ov01_021FB554(*((u32*)r0), 1, (1 << 0x1a));
    // add r0, #0xdc
    // str r1, [r0]
    // add r0, #0xe0
    SysTask_Destroy(*((u32*)r4), 0);
    // add r4, #0xe0
    // str r0, [r4]
}




void ov01_021F0D20(void) {
    // tst r2, r1
    // tst r1, r0
    GF_AssertFail(*((u32*)r0), 0, *((u32*)r0));
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F0D58: ; jump table
    // add r0, r4, r0
}




void ov01_021F0DB0(void) {
    GXx_SetMasterBrightness_(0x0400006C, *((u32*)r1));
    SysTask_Destroy(r4);
}




void ov01_021F0DC8(void) {
    // ldr r3, _021F0DD4 ; =SysTask_CreateOnVWaitQueue
    // mov r2, #1
    // add r1, r0, #0
    // ldr r0, _021F0DD8 ; =ov01_021F0DB0
    // lsl r2, r2, #0xa
    // bx r3
    // _021F0DD4: .word SysTask_CreateOnVWaitQueue
    // _021F0DD8: .word ov01_021F0DB0
    // TODO: decompile
}




void ov01_021F0DDC(void) {
    GF_AssertFail(*((u32*)ov01_02209B64));
    Heap_Alloc(4, 0x18);
    // str r0, [r1]
    // strb r1, [r0]
    // strh r1, [r2]
    *((u8*)(*((u32*)ov01_02209B64) + 2)) = 0;
    *((u32*)(*((u32*)ov01_02209B64) + 4)) = r4;
    GfGfx_EngineATogglePlanes(2, 0, *((u32*)ov01_02209B64));
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 0);
    GX_ResetBankForBG();
    MIi_CpuClearFast(0, 0x06840000, (2 << 0x10));
    // str r0, [r2]
    SysTask_CreateOnVWaitQueue(ov01_021F1094, *((u32*)ov01_02209B64), (0x04000064 >> 0x10));
    SysTask_CreateOnMainQueue(ov01_021F10C8, *((u32*)ov01_02209B64), (1 << 0xa));
}




void ov01_021F0E74(void) {
}




void ov01_021F0E90(void) {
}




void ov01_021F0EAC(void) {
}




void ov01_021F0EC0(void) {
    GF_AssertFail(*((u32*)ov01_02209B64));
    sub_02014F84();
    ov01_021F1210(*((u32*)(*((u32*)ov01_02209B64) + 4)));
    ov01_021E631C(*((u32*)(*((u32*)ov01_02209B64) + 4)), 1);
    ov01_021E6340(*((u32*)(*((u32*)ov01_02209B64) + 4)), 1);
    Heap_Free(*((u32*)ov01_02209B64));
    // str r1, [r0]
}




void ov01_021F0F08(void) {
    GF_AssertFail(*((u32*)ov01_02209B64));
    GF_AssertFail(*((u32*)(*((u32*)ov01_02209B64) + 8)));
    Heap_Alloc(4, (0x12 << 0xa));
    *((u32*)(*((u32*)ov01_02209B64) + 0xc)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02014DB4(ov01_021F1224, ov01_021F1250, *((u32*)(*((u32*)ov01_02209B64) + 0xc)), (0x12 << 0xa));
    *((u32*)(*((u32*)ov01_02209B64) + 8)) = r0;
    GF_AssertFail(*((u32*)(*((u32*)ov01_02209B64) + 8)), ov01_02209B64, *((u32*)ov01_02209B64));
    sub_02015528(*((u32*)(*((u32*)ov01_02209B64) + 8)), 1);
    sub_02015524(*((u32*)(*((u32*)ov01_02209B64) + 8)));
    Camera_SetPerspectiveClippingPlane((1 << 0xc), (0xe1 << 0xe), r0);
    // str r2, [sp]
    GfGfxLoader_LoadFromOpenNarc(r5, r4, 0, 4);
    sub_0201526C(*((u32*)(*((u32*)ov01_02209B64) + 8)), r0, 0, 0);
}




void ov01_021F0FB8(void) {
    // add r1, sp, #0
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    GF_AssertFail(*((u32*)ov01_02209B64));
    GF_AssertFail(*((u32*)(*((u32*)ov01_02209B64) + 8)));
    // add r7, sp, #0
    sub_02015484(*((u32*)(*((u32*)ov01_02209B64) + 8)), 0, r7);
}




void ov01_021F1008(void) {
    GF_AssertFail(*((u32*)ov01_02209B64));
    sub_02015460(1);
    sub_020154B0(*((u32*)(*((u32*)ov01_02209B64) + 8)));
}




void ov01_021F1044(void) {
}




void ov01_021F1060(void) {
    GF_AssertFail(*((u32*)ov01_02209B64));
    sub_02014EBC(*((u32*)(*((u32*)ov01_02209B64) + 8)));
    Heap_Free(*((u32*)(*((u32*)ov01_02209B64) + 0xc)));
    *((u32*)(*((u32*)ov01_02209B64) + 8)) = 0;
    *((u32*)(*((u32*)ov01_02209B64) + 0xc)) = 0;
}




void ov01_021F1094(void) {
    // strh r0, [r4]
    // strh r0, [r4]
}




void ov01_021F10C8(void) {
    sub_02014DA0(*((u16*)r1));
    // add r1, sp, #0x30
    // str r0, [r1]
    *((u32*)(r1 + 4)) = 0;
    *((u32*)(r1 + 8)) = 0;
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x24
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0
    MTX_Identity33_(*((u32*)ov01_022067E0), ov01_022067E0);
    // add r0, sp, #0x30
    NNS_G3dGlbSetBaseTrans();
    // add r0, sp, #0x24
    NNS_G3dGlbSetBaseScale();
    // add r0, sp, #0
    MI_Copy36B(NNS_G3dGlb);
    *((u32*)(NNS_G3dGlb + 0x7c)) = (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0xa4));
    ov01_021E631C(*((u32*)(r4 + 4)), 0, (*((u32*)(NNS_G3dGlb + 0x7c)) & ~(0xa4)));
    ov01_021E6340(*((u32*)(r4 + 4)), 0);
    SetBgPriority(0, 0);
    *((u8*)(r4 + 2)) = 1;
    SysTask_Destroy(r5);
}




void ov01_021F1148(void) {
    // add r3, sp, #0x44
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, sp, #0x44
    GfGfx_SetBanks((5 - 1));
    GfGfx_EngineATogglePlanes(1, 0);
    // add r3, sp, #0x34
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    ov01_021E6050(*((u32*)(r4 + 8)));
    // and r1, r0
    // strh r0, [r2]
    SetBgPriority(3, 3, 0x0400000E);
    GfGfx_EngineATogglePlanes(8, 1);
    // add r0, sp, #0x24
    MTX_Identity22_();
    // str r2, [sp]
    // add r1, sp, #0x24
    // str r2, [sp, #4]
    G2x_SetBGyAffine_(0x04000030, 0, 0);
    // add r3, sp, #8
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(*((u32*)(r4 + 8)), 2, r3, 0);
    BG_ClearCharDataRange(2, 0x20, 0, 4);
    BgClearTilemapBufferAndCommit(*((u32*)(r4 + 8)), 2);
    GfGfx_EngineATogglePlanes(0x10, 1);
}




void ov01_021F1210(void) {
}




void ov01_021F1224(void) {
    GF_AssertFail(*((u32*)ov01_02209B64));
    GF_AssertFail();
    // add r1, r0, r5
    *((u32*)(*((u32*)ov01_02209B64) + 0x10)) = r1;
}




void ov01_021F1250(void) {
    GF_AssertFail(*((u32*)ov01_02209B64));
    GF_AssertFail();
    // add r1, r0, r5
    *((u32*)(*((u32*)ov01_02209B64) + 0x14)) = r1;
}




void ov01_021F127C(void) {
    // ldr r3, _021F1288 ; =SysTask_CreateOnVBlankQueue
    // mov r2, #1
    // add r1, r0, #0
    // ldr r0, _021F128C ; =ov01_021F1290
    // lsl r2, r2, #0xa
    // bx r3
    // _021F1288: .word SysTask_CreateOnVBlankQueue
    // _021F128C: .word ov01_021F1290
    // TODO: decompile
}




void ov01_021F1290(void) {
}




void ov01_021F12B4(void) {
}




void ov01_021F12D0(void) {
}




void ov01_021F12E8(void) {
    // ldr r4, [sp, #0x20]
    // add r5, sp, #0x10
    // str r4, [sp]
    // ldrsh r4, [r5, r4]
    // str r4, [sp, #4]
    // ldr r4, [sp, #0x28]
    // str r4, [sp, #8]
    // ldr r4, [sp, #0x2c]
    // str r4, [sp, #0xc]
    // ldr r4, [sp, #0x30]
    // str r4, [sp, #0x10]
}




void ov01_021F1310(void) {
    // asr r4, r0, #0x10
    // tst r0, r1
    // neg r0, r4
    // str r0, [r5]
}



