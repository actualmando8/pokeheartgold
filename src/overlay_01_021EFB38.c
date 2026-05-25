/* Decompiled from asm/overlay_01_021EFB38.s */
#include "global.h"

void ov01_021EFB38(void) {
    // push {r3, lr}
    // ldr r2, _021EFB5C ; =ov01_02209B64
    // ldr r2, [r2, #4]
    // lsl r3, r2, #2
    // ldr r2, _021EFB60 ; =ov01_022068C4
    // ldr r2, [r2, r3]
    // blx r2
    // ldr r0, _021EFB5C ; =ov01_02209B64
    // ldr r1, [r0, #8]
    // add r1, r1, #1
    // str r1, [r0, #8]
    // bl OS_GetTick
    // mov r0, #0
    // add r1, r0, #0
    // bl OS_SetTick
    // pop {r3, pc}
    // _021EFB5C: .word ov01_02209B64
    // _021EFB60: .word ov01_022068C4
    // TODO: decompile
}



void ov01_021EFB64(void) {
    // push {r3, lr}
    // cmp r0, #0xc
    // blt _021EFB78
    // cmp r0, #0x21
    // bgt _021EFB78
    // ldr r0, _021EFBE8 ; =FS_OVERLAY_ID(OVY_115)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, pc}
    // add r1, r0, #0
    // sub r1, #0x22
    // cmp r1, #2
    // bhi _021EFB8A
    // ldr r0, _021EFBEC ; =FS_OVERLAY_ID(OVY_116)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, pc}
    // cmp r0, #0x27
    // blt _021EFB9C
    // cmp r0, #0x2c
    // bgt _021EFB9C
    // ldr r0, _021EFBF0 ; =FS_OVERLAY_ID(OVY_117)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, pc}
    // cmp r0, #0x2d
    // bne _021EFBAA
    // ldr r0, _021EFBF4 ; =FS_OVERLAY_ID(OVY_118)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, pc}
    // cmp r0, #0
    // blt _021EFBBC
    // cmp r0, #5
    // bgt _021EFBBC
    // ldr r0, _021EFBF8 ; =FS_OVERLAY_ID(OVY_120)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, pc}
    // cmp r0, #6
    // blt _021EFBCE
    // cmp r0, #0xb
    // bgt _021EFBCE
    // ldr r0, _021EFBFC ; =FS_OVERLAY_ID(OVY_119)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, pc}
    // cmp r0, #0x2e
    // bne _021EFBDC
    // ldr r0, _021EFBF8 ; =FS_OVERLAY_ID(OVY_120)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, pc}
    // ldr r0, _021EFC00 ; =FS_OVERLAY_ID(OVY_114)
    // mov r1, #2
    // bl HandleLoadOverlay
    // pop {r3, pc}
    // nop
    // _021EFBE8: .word FS_OVERLAY_ID(OVY_115)
    // _021EFBEC: .word FS_OVERLAY_ID(OVY_116)
    // _021EFBF0: .word FS_OVERLAY_ID(OVY_117)
    // _021EFBF4: .word FS_OVERLAY_ID(OVY_118)
    // _021EFBF8: .word FS_OVERLAY_ID(OVY_120)
    // _021EFBFC: .word FS_OVERLAY_ID(OVY_119)
    // _021EFC00: .word FS_OVERLAY_ID(OVY_114)
    // TODO: decompile
}



void ov01_021EFC04(void) {
    // push {r3, lr}
    // cmp r0, #0xc
    // blt _021EFC16
    // cmp r0, #0x21
    // bgt _021EFC16
    // ldr r0, _021EFC78 ; =FS_OVERLAY_ID(OVY_115)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // add r1, r0, #0
    // sub r1, #0x22
    // cmp r1, #2
    // bhi _021EFC26
    // ldr r0, _021EFC7C ; =FS_OVERLAY_ID(OVY_116)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // cmp r0, #0x27
    // blt _021EFC36
    // cmp r0, #0x2c
    // bgt _021EFC36
    // ldr r0, _021EFC80 ; =FS_OVERLAY_ID(OVY_117)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // cmp r0, #0x2d
    // bne _021EFC42
    // ldr r0, _021EFC84 ; =FS_OVERLAY_ID(OVY_118)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // cmp r0, #0
    // blt _021EFC52
    // cmp r0, #5
    // bgt _021EFC52
    // ldr r0, _021EFC88 ; =FS_OVERLAY_ID(OVY_120)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // cmp r0, #6
    // blt _021EFC62
    // cmp r0, #0xb
    // bgt _021EFC62
    // ldr r0, _021EFC8C ; =FS_OVERLAY_ID(OVY_119)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // cmp r0, #0x2e
    // bne _021EFC6E
    // ldr r0, _021EFC88 ; =FS_OVERLAY_ID(OVY_120)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // ldr r0, _021EFC90 ; =FS_OVERLAY_ID(OVY_114)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // nop
    // _021EFC78: .word FS_OVERLAY_ID(OVY_115)
    // _021EFC7C: .word FS_OVERLAY_ID(OVY_116)
    // _021EFC80: .word FS_OVERLAY_ID(OVY_117)
    // _021EFC84: .word FS_OVERLAY_ID(OVY_118)
    // _021EFC88: .word FS_OVERLAY_ID(OVY_120)
    // _021EFC8C: .word FS_OVERLAY_ID(OVY_119)
    // _021EFC90: .word FS_OVERLAY_ID(OVY_114)
    // TODO: decompile
}



void ov01_021EFC94(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // ldr r1, _021EFCD4 ; =ov01_02209B64
    // add r6, r2, #0
    // str r0, [r1, #4]
    // mov r0, #0
    // str r0, [r1, #8]
    // ldr r0, _021EFCD8 ; =ov01_021EFB38
    // mov r1, #0x24
    // mov r2, #5
    // mov r3, #4
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // add r4, r0, #0
    // str r5, [r4, #0x10]
    // str r6, [r4, #0x14]
    // mov r0, #0x6d
    // mov r1, #4
    // bl NARC_New
    // str r0, [r4, #0x20]
    // ldr r1, [r4, #0x14]
    // cmp r1, #0
    // beq _021EFCCC
    // mov r0, #0
    // str r0, [r1]
    // mov r0, #0
    // str r0, [r4, #0x18]
    // pop {r4, r5, r6, pc}
    // nop
    // _021EFCD4: .word ov01_02209B64
    // _021EFCD8: .word ov01_021EFB38
    // TODO: decompile
}



void ov01_021EFCDC(void) {
}



void ov01_021EFCF8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r7, r1, #0
    // mov r0, #4
    // mov r1, #0x4c
    // str r2, [sp]
    // add r5, r3, #0
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x4c
    // add r4, r0, #0
    // bl memset
    // ldr r0, _021EFD38 ; =ov01_021EFD3C
    // add r1, r4, #0
    // mov r2, #5
    // bl SysTask_CreateOnMainQueue
    // str r5, [r4, #0x48]
    // cmp r5, #0
    // beq _021EFD28
    // mov r0, #0
    // str r0, [r5]
    // str r6, [r4, #0xc]
    // ldr r0, [sp]
    // str r7, [r4, #0x10]
    // str r0, [r4, #0x14]
    // ldr r0, [sp, #0x18]
    // str r0, [r4, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EFD38: .word ov01_021EFD3C
    // TODO: decompile
}



void ov01_021EFD3C(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EFD54: ; jump table
    // str r0, [sp]
    // add r0, #0x30
    ov01_021EFFB0(r1, 0, *((u32*)(r1 + 0x14)), 2);
    // str r0, [sp]
    // add r0, #0x30
    ov01_021EFFB0(r4, 0, *((u32*)(r4 + 0x14)), 1);
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x18
    ov01_021EFFB0(r4, 0, *((u32*)(r4 + 0x10)), *((u32*)(r4 + 0xc)));
    // str r0, [r4]
    // add r0, #0x18
    ov01_021EFFBC(r4);
    // str r0, [r4]
    // str r0, [sp]
    // add r0, #0x18
    ov01_021EFFB0(r4, *((u32*)(r4 + 0x10)), 0, *((u32*)(r4 + 0xc)));
    // str r0, [r4]
    // add r0, #0x18
    ov01_021EFFBC(r4);
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
    // str r0, [r4]
    // str r0, [r4]
    // str r1, [r4]
    *((u32*)(r4 + 8)) = 0;
    // str r1, [r2]
    SysTask_Destroy(1, 1, *((u32*)(r4 + 0x48)));
    Heap_Free(r4);
    // add r4, #0x30
    ov01_021EFFBC(r4);
}



void ov01_021EFE30(void) {
    // ldr r0, [r0, #0x18]
    // bx lr
    // TODO: decompile
}



void ov01_021EFE34(void) {
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r1;
    // sub r1, r2, r1
    *((u32*)(r0 + 8)) = r1;
    *((u32*)(r0 + 0x10)) = r3;
    *((u32*)(r0 + 0xc)) = 0;
}



void ov01_021EFE44(void) {
    // mul r0, r1
    _s32_div_f(*((u32*)(r0 + 0xc)), *((u32*)(r0 + 0x10)));
    // add r0, r0, r1
    // str r0, [r4]
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
}



void ov01_021EFE70(void) {
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r1;
    // sub r1, r2, r1
    *((u32*)(r0 + 8)) = r1;
    *((u32*)(r0 + 0x10)) = r3;
    *((u32*)(r0 + 0xc)) = 0;
}



void ov01_021EFE80(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r0 + 8)), (*((u32*)(r0 + 0xc)) << 0xc));
    // add r0, r0, r2
    // adc r1, r3
    // orr r0, r1
    FX_Div((r0 >> 0xc), (*((u32*)(r4 + 0x10)) << 0xc), (2 << 0xa), 0);
    // add r0, r0, r1
    // str r0, [r4]
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) + 1);
    *((u32*)(r4 + 0xc)) = *((u32*)(r4 + 0x10));
}



void ov01_021EFEC8(void) {
    // ldr r4, [sp, #0x18]
    // str r3, [sp]
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(r3, (r4 << 0xc));
    // sub r0, r7, r6
    // add r2, r2, r7
    // adc r1, r3
    // orr r2, r1
    // sub r2, r0, r2
    // asr r1, r2, #0x1f
    // orr r1, r0
    // add r0, r0, r7
    // adc r1, r3
    // orr r0, r1
    // mul r1, r4
    FX_Div((((r0 >> 0xc) << 0xd) >> 0xc), (r4 << 0xc), (r0 >> 0xc), 0);
    // str r6, [r5]
    // ldr r1, [sp]
    *((u32*)(r5 + 4)) = r6;
    *((u32*)(r5 + 8)) = r1;
    *((u32*)(r5 + 0xc)) = r0;
    *((u32*)(r5 + 0x10)) = 0;
    *((u32*)(r5 + 0x14)) = r4;
}



void ov01_021EFF28(void) {
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r0 + 8)), (*((u32*)(r0 + 0x10)) << 0xc));
    // add r2, r0, r2
    // adc r1, r3
    // orr r4, r0
    // mul r2, r6
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    _ll_mul(*((u32*)(r5 + 0xc)), (r6 << 0xc), 0);
    // add r0, r0, r2
    // adc r1, r3
    // orr r0, r1
    FX_Div((r0 >> 0xc), ((2 << 0xa) << 2), (2 << 0xa), 0);
    // add r0, r4, r0
    // add r0, r1, r0
    // str r0, [r5]
    *((u32*)(r5 + 0x10)) = (*((u32*)(r5 + 0x10)) + 1);
    *((u32*)(r5 + 0x10)) = *((u32*)(r5 + 0x14));
}



void ov01_021EFF90(void) {
    // push {r3, lr}
    // cmp r0, #1
    // bne _021EFF9E
    // ldr r0, _021EFFA8 ; =0x0400006C
    // bl GXx_SetMasterBrightness_
    // pop {r3, pc}
    // ldr r0, _021EFFAC ; =0x0400106C
    // bl GXx_SetMasterBrightness_
    // pop {r3, pc}
    // nop
    // _021EFFA8: .word 0x0400006C
    // _021EFFAC: .word 0x0400106C
    // TODO: decompile
}



void ov01_021EFFB0(void) {
}



void ov01_021EFFBC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov01_021EFE44
    // add r4, r0, #0
    // ldr r0, _021EFFD4 ; =ov01_021EFFD8
    // add r1, r5, #0
    // mov r2, #0xa
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021EFFD4: .word ov01_021EFFD8
    // TODO: decompile
}



void ov01_021EFFD8(void) {
}



void ov01_021EFFEC(void) {
    // push {r4, lr}
    // mov r0, #4
    // mov r1, #0x30
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x30
    // add r4, r0, #0
    // bl memset
    // ldr r0, _021F0020 ; =0x04000048
    // mov r1, #0x3f
    // ldrh r2, [r0]
    // bic r2, r1
    // mov r1, #0x1f
    // orr r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // ldrh r2, [r0]
    // ldr r1, _021F0024 ; =0xFFFFC0FF
    // and r1, r2
    // strh r1, [r0]
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _021F0020: .word 0x04000048
    // _021F0024: .word 0xFFFFC0FF
    // TODO: decompile
}



void ov01_021F0028(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x24]
    // cmp r1, #0
    // beq _021F0036
    // bl ov01_021F0174
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _021F004C ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // nop
    // _021F004C: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov01_021F0050(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5, #0x24]
    // add r7, r2, #0
    // str r3, [sp, #4]
    // ldr r4, [sp, #0x20]
    // cmp r0, #0
    // beq _021F0068
    // bl GF_AssertFail
    // mov r0, #0
    // str r0, [r6, #0x18]
    // ldr r1, [r6, #0x10]
    // add r6, #0x18
    // ldr r1, [r1, #4]
    // ldr r2, [sp, #0x24]
    // ldr r1, [r1, #0x1c]
    // ldr r3, [sp, #0x28]
    // str r1, [r5, #0x20]
    // str r7, [r5, #0x18]
    // str r0, [r5, #0x1c]
    // ldr r0, [sp, #4]
    // str r6, [r5, #0x2c]
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021EFEC8
    // cmp r4, #0
    // blt _021F00A8
    // mov r0, #0xff
    // ldr r2, _021F00D4 ; =0x04000040
    // sub r0, r0, r4
    // strh r0, [r2]
    // add r0, r4, #1
    // mov r1, #0xc0
    // lsl r0, r0, #0x18
    // strh r1, [r2, #4]
    // lsr r0, r0, #0x18
    // strh r0, [r2, #2]
    // strh r1, [r2, #6]
    // b _021F00C4
    // add r0, r4, #0
    // add r0, #0xff
    // lsl r0, r0, #0x18
    // mov r2, #1
    // sub r2, r2, r4
    // lsl r2, r2, #0x18
    // ldr r1, _021F00D4 ; =0x04000040
    // lsr r0, r0, #0x18
    // strh r0, [r1]
    // mov r0, #0xc0
    // strh r0, [r1, #4]
    // lsr r2, r2, #0x18
    // strh r2, [r1, #2]
    // strh r0, [r1, #6]
    // mov r2, #1
    // ldr r0, _021F00D8 ; =ov01_021F00DC
    // add r1, r5, #0
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnVWaitQueue
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F00D4: .word 0x04000040
    // _021F00D8: .word ov01_021F00DC
    // TODO: decompile
}



void ov01_021F00DC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r2, #1
    // ldr r0, _021F0104 ; =ov01_021F010C
    // add r4, r1, #0
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnVWaitQueue
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #0x20]
    // ldr r1, _021F0108 ; =ov01_021F01D0
    // add r2, r4, #0
    // bl ov01_021FB530
    // str r0, [r4, #0x24]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0104: .word ov01_021F010C
    // _021F0108: .word ov01_021F01D0
    // TODO: decompile
}



void ov01_021F010C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // beq _021F011C
    // cmp r0, #1
    // beq _021F0168
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov01_021EFF28
    // cmp r0, #0
    // beq _021F012C
    // ldr r0, [r4, #0x1c]
    // add r0, r0, #1
    // str r0, [r4, #0x1c]
    // ldr r0, [r4]
    // asr r0, r0, #0xc
    // bmi _021F014A
    // mov r1, #0xff
    // sub r1, r1, r0
    // ldr r2, _021F0170 ; =0x04000040
    // add r0, r0, #1
    // strh r1, [r2]
    // mov r1, #0xc0
    // lsl r0, r0, #0x18
    // strh r1, [r2, #4]
    // lsr r0, r0, #0x18
    // strh r0, [r2, #2]
    // strh r1, [r2, #6]
    // pop {r4, pc}
    // add r1, r0, #0
    // add r1, #0xff
    // lsl r1, r1, #0x18
    // ldr r3, _021F0170 ; =0x04000040
    // lsr r1, r1, #0x18
    // strh r1, [r3]
    // mov r1, #1
    // sub r0, r1, r0
    // mov r2, #0xc0
    // lsl r0, r0, #0x18
    // strh r2, [r3, #4]
    // lsr r0, r0, #0x18
    // strh r0, [r3, #2]
    // strh r2, [r3, #6]
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov01_021F0174
    // pop {r4, pc}
    // _021F0170: .word 0x04000040
    // TODO: decompile
}



void ov01_021F0174(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F01C8 ; =0x04000048
    // mov r2, #0x3f
    // ldrh r3, [r0]
    // mov r1, #0x1f
    // bic r3, r2
    // orr r3, r1
    // mov r1, #0x20
    // orr r3, r1
    // strh r3, [r0]
    // ldrh r3, [r0, #2]
    // bic r3, r2
    // add r2, r0, #0
    // strh r3, [r0, #2]
    // mov r3, #0
    // sub r2, #8
    // strh r3, [r2]
    // sub r0, r0, #4
    // strh r3, [r0]
    // lsl r3, r1, #0x15
    // ldr r2, [r3]
    // ldr r0, _021F01CC ; =0xFFFF1FFF
    // and r2, r0
    // lsl r0, r1, #8
    // orr r0, r2
    // str r0, [r3]
    // ldr r0, [r4, #0x2c]
    // mov r1, #1
    // str r1, [r0]
    // ldr r0, [r4, #0x24]
    // bl ov01_021FB554
    // mov r0, #0
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x28]
    // bl SysTask_Destroy
    // mov r0, #0
    // str r0, [r4, #0x28]
    // pop {r4, pc}
    // nop
    // _021F01C8: .word 0x04000048
    // _021F01CC: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov01_021F01D0(void) {
    // push {r4, lr}
    // ldr r0, _021F0240 ; =0x04000006
    // add r4, r1, #0
    // ldrh r0, [r0]
    // ldr r1, [r4, #0x18]
    // bl _u32_div_f
    // mov r1, #1
    // tst r0, r1
    // ldr r0, [r4]
    // bne _021F01E8
    // b _021F01EA
    // neg r0, r0
    // asr r2, r0, #0xc
    // ldr r0, _021F0244 ; =0x000001FF
    // add r1, r2, #0
    // and r1, r0
    // ldr r0, _021F0248 ; =0x04000010
    // cmp r2, #0
    // str r1, [r0]
    // str r1, [r0, #4]
    // str r1, [r0, #8]
    // str r1, [r0, #0xc]
    // ldr r1, _021F024C ; =0xFFFF1FFF
    // blt _021F021C
    // add r3, r0, #0
    // sub r3, #0x10
    // ldr r2, [r3]
    // and r2, r1
    // lsl r1, r0, #9
    // orr r1, r2
    // str r1, [r3]
    // add r0, #0x3a
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // strh r2, [r0]
    // pop {r4, pc}
    // add r3, r0, #0
    // sub r3, #0x10
    // ldr r2, [r3]
    // and r2, r1
    // lsl r1, r0, #0xa
    // orr r1, r2
    // str r1, [r3]
    // add r0, #0x3a
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // mov r1, #0x1f
    // orr r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // pop {r4, pc}
    // nop
    // _021F0240: .word 0x04000006
    // _021F0244: .word 0x000001FF
    // _021F0248: .word 0x04000010
    // _021F024C: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov01_021F0250(void) {
    // push {r4, r5, r6, lr}
    // mov r0, #4
    // mov r1, #0x48
    // bl Heap_Alloc
    // mov r1, #0
    // mov r2, #0x48
    // add r4, r0, #0
    // bl memset
    // ldr r0, _021F0294 ; =0x04000048
    // mov r5, #0x3f
    // ldrh r2, [r0]
    // mov r1, #0x1f
    // bic r2, r5
    // add r3, r2, #0
    // orr r3, r1
    // mov r2, #0x20
    // orr r3, r2
    // strh r3, [r0]
    // ldrh r6, [r0]
    // ldr r3, _021F0298 ; =0xFFFFC0FF
    // lsl r1, r1, #8
    // and r3, r6
    // orr r3, r1
    // lsl r1, r2, #8
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r1, [r0, #2]
    // bic r1, r5
    // strh r1, [r0, #2]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _021F0294: .word 0x04000048
    // _021F0298: .word 0xFFFFC0FF
    // TODO: decompile
}



void ov01_021F029C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x3c]
    // cmp r1, #0
    // beq _021F02AA
    // bl ov01_021F03F8
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _021F02C0 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // nop
    // _021F02C0: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov01_021F02C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x3c]
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r0, #0
    // beq _021F02D8
    // bl GF_AssertFail
    // mov r1, #0
    // str r1, [r5, #0x18]
    // ldr r0, [r5, #0x10]
    // mov r2, #0xff
    // ldr r0, [r0, #4]
    // add r5, #0x18
    // ldr r0, [r0, #0x1c]
    // lsl r2, r2, #0xc
    // str r0, [r4, #0x38]
    // mov r0, #0x60
    // str r0, [r4, #0x30]
    // str r1, [r4, #0x34]
    // str r5, [r4, #0x44]
    // add r0, r4, #0
    // add r3, r7, #0
    // str r6, [sp]
    // bl ov01_021EFEC8
    // add r0, r4, #0
    // mov r2, #6
    // ldr r3, [sp, #0x18]
    // add r0, #0x18
    // mov r1, #0
    // lsl r2, r2, #0x10
    // str r6, [sp]
    // bl ov01_021EFEC8
    // ldr r2, _021F0328 ; =0x04000040
    // mov r1, #0xff
    // strh r1, [r2]
    // mov r0, #0xc0
    // strh r0, [r2, #4]
    // strh r1, [r2, #2]
    // strh r0, [r2, #6]
    // ldr r0, _021F032C ; =ov01_021F0330
    // add r1, r4, #0
    // lsr r2, r2, #0x10
    // bl SysTask_CreateOnVWaitQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F0328: .word 0x04000040
    // _021F032C: .word ov01_021F0330
    // TODO: decompile
}



void ov01_021F0330(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r2, #1
    // ldr r0, _021F0358 ; =ov01_021F0360
    // add r4, r1, #0
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnVWaitQueue
    // str r0, [r4, #0x40]
    // ldr r0, [r4, #0x38]
    // ldr r1, _021F035C ; =ov01_021F03C8
    // add r2, r4, #0
    // bl ov01_021FB530
    // str r0, [r4, #0x3c]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0358: .word ov01_021F0360
    // _021F035C: .word ov01_021F03C8
    // TODO: decompile
}



void ov01_021F0360(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x34]
    // cmp r0, #0
    // beq _021F0370
    // cmp r0, #1
    // beq _021F03BC
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x18
    // bl ov01_021EFF28
    // add r0, r4, #0
    // bl ov01_021EFF28
    // cmp r0, #0
    // beq _021F0388
    // ldr r0, [r4, #0x34]
    // add r0, r0, #1
    // str r0, [r4, #0x34]
    // ldr r0, [r4]
    // asr r2, r0, #0xc
    // ldr r0, [r4, #0x18]
    // mov r4, #0xff
    // asr r1, r0, #0xc
    // ldr r0, _021F03C4 ; =0x04000040
    // sub r3, r4, r2
    // strh r3, [r0]
    // mov r3, #0x60
    // sub r3, r3, r1
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // strh r3, [r0, #4]
    // lsl r3, r2, #8
    // lsl r2, r4, #8
    // and r2, r3
    // orr r2, r4
    // add r1, #0x60
    // strh r2, [r0, #2]
    // lsl r2, r1, #8
    // lsl r1, r4, #8
    // and r2, r1
    // mov r1, #0xc0
    // orr r1, r2
    // strh r1, [r0, #6]
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov01_021F03F8
    // pop {r4, pc}
    // _021F03C4: .word 0x04000040
    // TODO: decompile
}



void ov01_021F03C8(void) {
    // ldr r0, _021F03F0 ; =0x04000006
    // ldr r1, [r1, #0x30]
    // ldrh r2, [r0]
    // cmp r2, r1
    // ldr r1, _021F03F4 ; =0xFFFF1FFF
    // bhi _021F03E2
    // sub r3, r0, #6
    // ldr r2, [r3]
    // lsr r0, r0, #0xd
    // and r1, r2
    // orr r0, r1
    // str r0, [r3]
    // bx lr
    // sub r3, r0, #6
    // ldr r2, [r3]
    // lsr r0, r0, #0xc
    // and r1, r2
    // orr r0, r1
    // str r0, [r3]
    // bx lr
    // _021F03F0: .word 0x04000006
    // _021F03F4: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov01_021F03F8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F044C ; =0x04000048
    // mov r2, #0x3f
    // ldrh r3, [r0]
    // mov r1, #0x1f
    // bic r3, r2
    // orr r3, r1
    // mov r1, #0x20
    // orr r3, r1
    // strh r3, [r0]
    // ldrh r3, [r0, #2]
    // bic r3, r2
    // add r2, r0, #0
    // strh r3, [r0, #2]
    // mov r3, #0
    // sub r2, #8
    // strh r3, [r2]
    // sub r0, r0, #4
    // strh r3, [r0]
    // lsl r3, r1, #0x15
    // ldr r2, [r3]
    // ldr r0, _021F0450 ; =0xFFFF1FFF
    // and r2, r0
    // lsl r0, r1, #8
    // orr r0, r2
    // str r0, [r3]
    // ldr r0, [r4, #0x44]
    // mov r1, #1
    // str r1, [r0]
    // ldr r0, [r4, #0x3c]
    // bl ov01_021FB554
    // mov r0, #0
    // str r0, [r4, #0x3c]
    // ldr r0, [r4, #0x40]
    // bl SysTask_Destroy
    // mov r0, #0
    // str r0, [r4, #0x40]
    // pop {r4, pc}
    // nop
    // _021F044C: .word 0x04000048
    // _021F0450: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov01_021F0454(void) {
    // ldr r1, [sp, #0x34]
    // str r2, [sp, #0x10]
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r3, [sp, #0x30]
    // ldr r5, [sp, #0x38]
    // ldr r4, [sp, #0x3c]
    GfGfxLoader_GXLoadPalFromOpenNarc(r3, 0, (r3 << 5));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, r5, r4);
    // str r0, [sp]
    // add r3, sp, #0x14
    GfGfxLoader_GetScrnDataFromOpenNarc(r6, r7, 0);
    // ldr r2, [sp, #0x14]
    // str r3, [sp]
    // ldrh r0, [r2]
    // str r0, [sp, #4]
    // add r2, #0xc
    // str r0, [sp, #8]
    LoadRectToBgTilemapRect(r5, ((r4 << 0x18) >> 0x18), 0);
    // ldr r1, [sp, #0x14]
    // ldrh r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    BgTilemapRectChangePalette(r5, ((r4 << 0x18) >> 0x18), 0, 0);
    Heap_Free(r6);
    ScheduleBgTilemapBufferTransfer(r5, ((r4 << 0x18) >> 0x18));
}



void ov01_021F0500(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r6, [sp, #0x38]
    // add r5, r0, #0
    // str r6, [sp, #0x38]
    // ldr r6, [sp, #0x30]
    // add r4, r1, #0
    // str r6, [sp]
    // ldr r6, [sp, #0x34]
    // add r7, r2, #0
    // str r6, [sp, #4]
    // ldr r6, [sp, #0x38]
    // str r3, [sp, #0x10]
    // str r6, [sp, #8]
    // ldr r6, [sp, #0x3c]
    // str r6, [sp, #0xc]
    // bl ov01_021F0454
    // ldr r0, [sp, #0x30]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x34]
    // add r1, r4, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // add r2, r7, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // bl ov01_021F0454
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x38]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl GetBgTilemapBuffer
    // add r3, r0, #0
    // mov r5, #0
    // mov r0, #0xf
    // mov ip, r5
    // str r0, [sp, #0x14]
    // mov r4, #0
    // add r0, r4, r5
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0xf
    // ldr r0, [sp, #0x14]
    // ldrh r1, [r3, r2]
    // sub r0, r0, r4
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0xf
    // ldrh r0, [r3, r6]
    // add r4, r4, #1
    // strh r0, [r3, r2]
    // strh r1, [r3, r6]
    // ldrh r1, [r3, r2]
    // ldr r0, _021F05C0 ; =0x0000FBFF
    // add r7, r1, #0
    // and r7, r0
    // asr r1, r1, #0xa
    // mov r0, #1
    // eor r0, r1
    // lsl r0, r0, #0xa
    // orr r0, r7
    // strh r0, [r3, r2]
    // ldrh r0, [r3, r6]
    // ldr r1, _021F05C0 ; =0x0000FBFF
    // add r2, r0, #0
    // and r2, r1
    // asr r1, r0, #0xa
    // mov r0, #1
    // eor r0, r1
    // lsl r0, r0, #0xa
    // orr r0, r2
    // strh r0, [r3, r6]
    // cmp r4, #8
    // blt _021F0558
    // ldr r0, [sp, #0x14]
    // add r5, #0x10
    // add r0, #0x10
    // str r0, [sp, #0x14]
    // mov r0, ip
    // add r0, r0, #1
    // mov ip, r0
    // cmp r0, #0x18
    // blt _021F0556
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x38]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F05C0: .word 0x0000FBFF
    // TODO: decompile
}



void ov01_021F05C4(void) {
    G2dRenderer_Init(r1, (r0 + 4), 4);
    // str r0, [r5]
    Create2DGfxResObjMan(r6, 0, 4);
    // str r0, [r5, r7]
}



void ov01_021F05F4(void) {
    SpriteList_Delete(*((u32*)r0));
    // ldr r0, [r5, r6]
    Destroy2DGfxResObjMan();
}



void ov01_021F0614(void) {
    // ldr r6, [sp, #0x58]
    // str r6, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x2c]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x4c]
    AddCharResObjFromOpenNarcWithAtEndFlag((0x4b << 2), r0, 0);
    // str r0, [r4]
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x48]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    AddPlttResObjFromOpenNarc((0x13 << 4), r7, 0);
    *((u32*)(r4 + 4)) = r0;
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x50]
    AddCellOrAnimResObjFromOpenNarc((0x4d << 2), r7, 0);
    *((u32*)(r4 + 8)) = r0;
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x54]
    AddCellOrAnimResObjFromOpenNarc((0x4e << 2), r7, 0);
    *((u32*)(r4 + 0xc)) = r0;
    sub_0200ADA4(*((u32*)r4));
    sub_0200A740(*((u32*)r4));
    sub_0200B00C(*((u32*)(r4 + 4)));
    // str r6, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, [r5, r2]
    // add r4, #0x10
    // str r1, [sp, #0x14]
    // ldr r1, [r5, r1]
    // str r1, [sp, #0x18]
    // add r1, #8
    // ldr r1, [r5, r1]
    // add r2, #0xc
    // str r1, [sp, #0x1c]
    // ldr r1, [r5, r2]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    CreateSpriteResourcesHeader(r4, r6, r6, r6);
}



void ov01_021F06EC(void) {
    sub_0200AEB0(*((u32*)r1));
    sub_0200B0A8(*((u32*)(r4 + 4)));
    // ldr r0, [r5, r7]
    DestroySingle2DGfxResObj(*((u32*)r4));
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
    Sprite_Create(4);
    GF_AssertFail();
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
    // ldrb r0, [r0]
    GF_AssertFail();
    // ldr r3, [sp, #0x1c]
    ov01_021EFE34(r5, r4, r6);
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r0, #0x14
    ov01_021EFE34(r5, r7);
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    *((u32*)(r5 + 0x28)) = r0;
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r1, [sp, #0x28]
    // add r0, #0x2d
    // strb r1, [r0]
    // add r0, sp, #0x2c
    // ldrb r1, [r0]
    // add r0, #0x2f
    // strb r1, [r0]
    // add r5, #0x2e
    // strb r0, [r5]
}



void ov01_021F07E0(void) {
    // add r1, #0x2e
    // ldrb r1, [r1]
    ov01_021EFE44(1, r0);
    // add r0, #0x14
    ov01_021EFE44(r5);
    // add r0, #0x2c
    // ldrb r0, [r0]
    // sub r1, r2, r1
    // asr r3, r1, #0x10
    // add r1, #0x2d
    // ldrb r2, [r1]
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // sub r1, r6, r1
    // add r0, #0x2f
    // ldrb r0, [r0]
    // asr r1, r1, #0x10
    // add r2, r1, r2
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    ov01_021F0960(*((u32*)(r5 + 0x28)), ((*((u32*)r5) >> 1) << 0x10), (*((u32*)r5) << 0x10));
}



void ov01_021F0848(void) {
}



void ov01_021F0860(void) {
}



void ov01_021F0868(void) {
    // add r0, #0x2e
    // ldrb r0, [r0]
    GF_AssertFail();
    // ldr r3, [sp, #0x1c]
    ov01_021EFE34(r5, r4, r6);
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r0, #0x14
    ov01_021EFE34(r5, r7);
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    *((u32*)(r5 + 0x28)) = r0;
    // add r0, #0x2c
    // strb r1, [r0]
    // ldr r1, [sp, #0x28]
    // add r0, #0x2d
    // strb r1, [r0]
    // add r0, sp, #0x2c
    // ldrb r1, [r0]
    // add r0, #0x2f
    // strb r1, [r0]
    // add r5, #0x2e
    // strb r0, [r5]
}



void ov01_021F08C0(void) {
    // add r0, #0x2e
    // ldrb r0, [r0]
    // add r0, #0x2c
    // ldrb r0, [r0]
    // sub r1, r2, r1
    // asr r3, r1, #0x10
    // add r1, #0x2d
    // ldrb r2, [r1]
    // add r0, r3, r0
    // sub r1, r4, r1
    // asr r1, r1, #0x10
    // asr r0, r0, #0x10
    // str r0, [sp]
    // add r2, r1, r2
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    ov01_021F0960(*((u32*)(r0 + 0x28)), ((*((u32*)r0) >> 1) << 0x10), (*((u32*)r0) << 0x10));
    ov01_021EFE44(r5);
    // add r0, #0x14
    ov01_021EFE44(r5);
    // add r0, #0x2c
    // ldrb r0, [r0]
    // sub r1, r2, r1
    // asr r3, r1, #0x10
    // add r1, #0x2d
    // ldrb r2, [r1]
    // add r0, r3, r0
    // asr r0, r0, #0x10
    // str r0, [sp]
    // sub r1, r6, r1
    // add r0, #0x2f
    // ldrb r0, [r0]
    // asr r1, r1, #0x10
    // add r2, r1, r2
    // str r0, [sp, #4]
    // asr r2, r2, #0x10
    ov01_021F0960(*((u32*)(r5 + 0x28)), ((*((u32*)r5) >> 1) << 0x10), (*((u32*)r5) << 0x10));
}



void ov01_021F0960(void) {
    // ldr r5, [sp, #0x18]
    // sub r1, r5, r3
    // str r1, [sp]
    // sub r1, r2, r4
    // str r1, [sp, #4]
    // add r1, sp, #8
    FillWindowPixelRect(*((u8*)((((((1 << 8) << 0x10) >> 0x10) << 0x10) >> 0x10) + 0x14)), ((0 << 0x10) >> 0x10), ((0 << 0x10) >> 0x10));
}



void ov01_021F09BC(void) {
    Heap_Alloc(4, 0xcc);
    memset(0, 0xcc);
    ov01_021F0848(r6);
    *((u32*)(r5 + 4)) = r0;
}



void ov01_021F09EC(void) {
    ov01_021F0860(*((u32*)(r0 + 4)));
    Heap_Free(r6);
}



void ov01_021F0A0C(void) {
    // push {r3, r4}
    // str r3, [r0]
    // ldr r3, _021F0A48 ; =0xFFFFFFF8
    // add r3, sp
    // ldrb r4, [r3, #0x10]
    // add r3, r0, #0
    // add r3, #0xc9
    // strb r4, [r3]
    // add r3, r0, #0
    // add r3, #0xc6
    // strb r1, [r3]
    // add r1, r0, #0
    // add r1, #0xc7
    // strb r2, [r1]
    // add r1, r0, #0
    // mov r2, #0
    // add r1, #0xc4
    // strb r2, [r1]
    // add r1, r0, #0
    // add r1, #0xc5
    // strb r2, [r1]
    // add r1, r0, #0
    // add r1, #0xc8
    // strb r2, [r1]
    // mov r1, #1
    // add r0, #0xca
    // strb r1, [r0]
    // pop {r3, r4}
    // bx lr
    // nop
    // _021F0A48: .word 0xFFFFFFF8
    // TODO: decompile
}



void ov01_021F0A4C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // add r0, #0xca
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021F0A60
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // add r0, #0xc4
    // ldrb r0, [r0]
    // cmp r0, #0x30
    // bhs _021F0AE4
    // mov r1, #0xc8
    // ldrsb r0, [r6, r1]
    // sub r2, r0, #1
    // add r0, r6, #0
    // add r0, #0xc8
    // strb r2, [r0]
    // ldrsb r0, [r6, r1]
    // cmp r0, #0
    // bgt _021F0AE4
    // add r0, r6, #0
    // add r0, #0xc7
    // ldrb r1, [r0]
    // add r0, r6, #0
    // add r0, #0xc8
    // strb r1, [r0]
    // add r0, r6, #0
    // add r0, #0xc4
    // ldrb r0, [r0]
    // mov r1, #0x1d
    // lsr r3, r0, #0x1f
    // lsl r2, r0, #0x1d
    // sub r2, r2, r3
    // ror r2, r1
    // add r2, r3, r2
    // ldr r1, _021F0B40 ; =ov01_02206980
    // mov r3, #0x20
    // ldrb r1, [r1, r2]
    // lsr r2, r0, #3
    // lsl r4, r2, #5
    // mov r2, #0xb0
    // sub r2, r2, r4
    // str r2, [sp]
    // add r2, r6, #0
    // add r2, #0xc6
    // ldrb r2, [r2]
    // lsl r0, r0, #2
    // lsl r1, r1, #5
    // str r2, [sp, #4]
    // ldr r2, [r6]
    // add r0, r6, r0
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // add r2, r6, #0
    // str r3, [sp, #0x10]
    // add r2, #0xc9
    // ldrb r2, [r2]
    // sub r3, #0x30
    // add r1, #0x10
    // str r2, [sp, #0x14]
    // ldr r0, [r0, #4]
    // add r2, r1, #0
    // sub r3, r3, r4
    // bl ov01_021F0868
    // add r0, r6, #0
    // add r0, #0xc4
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r6, #0
    // add r0, #0xc4
    // strb r1, [r0]
    // add r0, r6, #0
    // add r0, #0xc5
    // ldrb r4, [r0]
    // add r0, r6, #0
    // add r0, #0xc4
    // ldrb r0, [r0]
    // cmp r4, r0
    // bge _021F0B1C
    // lsl r0, r4, #2
    // add r7, r6, #0
    // add r5, r6, r0
    // add r7, #0xc5
    // ldr r0, [r5, #4]
    // bl ov01_021F08C0
    // str r0, [sp, #0x18]
    // cmp r0, #1
    // bne _021F0B0E
    // ldrb r0, [r7]
    // add r0, r0, #1
    // strb r0, [r7]
    // add r0, r6, #0
    // add r0, #0xc4
    // ldrb r0, [r0]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, r0
    // blt _021F0AFC
    // add r0, r6, #0
    // add r0, #0xc5
    // ldrb r0, [r0]
    // cmp r0, #0x30
    // blo _021F0B38
    // ldr r0, [sp, #0x18]
    // cmp r0, #1
    // bne _021F0B38
    // mov r0, #0
    // add r6, #0xca
    // strb r0, [r6]
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F0B40: .word ov01_02206980
    // TODO: decompile
}



void ov01_021F0B44(void) {
}



void ov01_021F0B5C(void) {
    // add r1, #0xe0
    ov01_021F0CDC(*((u32*)r0));
    Heap_Free(r4);
}



void ov01_021F0B78(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldr r0, [sp, #0x18]
    // add r7, r1, #0
    // str r0, [sp, #0x18]
    // add r0, r7, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // add r6, r2, #0
    // add r5, r3, #0
    // cmp r0, #0
    // beq _021F0B94
    // bl GF_AssertFail
    // mov r2, #0
    // str r2, [r4, #0x18]
    // ldr r0, [r4, #0x10]
    // add r4, #0x18
    // ldr r0, [r0, #4]
    // add r3, r6, #0
    // ldr r1, [r0, #0x1c]
    // add r0, r7, #0
    // add r0, #0xd8
    // str r1, [r0]
    // add r0, r7, #0
    // str r2, [r7, #0x14]
    // add r0, #0xe4
    // str r4, [r0]
    // add r0, r7, #0
    // mov r1, #0xff
    // bl ov01_021EFE34
    // mov r4, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl _u32_div_f
    // ldr r0, [sp, #0x18]
    // mul r0, r1
    // add r1, r5, #0
    // bl _u32_div_f
    // add r6, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl _u32_div_f
    // mov r1, #1
    // tst r0, r1
    // bne _021F0BE2
    // add r0, r7, r4
    // strb r6, [r0, #0x18]
    // b _021F0BEA
    // ldr r0, [sp, #0x18]
    // sub r1, r0, r6
    // add r0, r7, r4
    // strb r1, [r0, #0x18]
    // add r4, r4, #1
    // cmp r4, #0xc0
    // blt _021F0BBA
    // ldr r0, _021F0C34 ; =0x04000048
    // mov r1, #0x3f
    // ldrh r3, [r0]
    // ldr r2, [sp, #0x1c]
    // bic r3, r1
    // orr r3, r2
    // mov r2, #0x20
    // orr r3, r2
    // strh r3, [r0]
    // ldrh r3, [r0, #2]
    // bic r3, r1
    // ldr r1, [sp, #0x20]
    // orr r1, r3
    // strh r1, [r0, #2]
    // add r1, r0, #0
    // mov r3, #0
    // sub r1, #8
    // strh r3, [r1]
    // mov r1, #0xc0
    // sub r0, r0, #4
    // strh r1, [r0]
    // lsl r3, r2, #0x15
    // ldr r1, [r3]
    // ldr r0, _021F0C38 ; =0xFFFF1FFF
    // and r1, r0
    // lsl r0, r2, #8
    // orr r0, r1
    // str r0, [r3]
    // ldr r0, _021F0C3C ; =ov01_021F0C40
    // add r1, r7, #0
    // lsl r2, r2, #5
    // bl SysTask_CreateOnVWaitQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F0C34: .word 0x04000048
    // _021F0C38: .word 0xFFFF1FFF
    // _021F0C3C: .word ov01_021F0C40
    // TODO: decompile
}



void ov01_021F0C40(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0xd8
    // ldr r0, [r0]
    // ldr r1, _021F0C74 ; =ov01_021F0CA8
    // add r2, r4, #0
    // bl ov01_021FB530
    // add r1, r4, #0
    // add r1, #0xdc
    // str r0, [r1]
    // mov r2, #1
    // ldr r0, _021F0C78 ; =ov01_021F0C7C
    // add r1, r4, #0
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnVWaitQueue
    // add r4, #0xe0
    // str r0, [r4]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0C74: .word ov01_021F0CA8
    // _021F0C78: .word ov01_021F0C7C
    // TODO: decompile
}



void ov01_021F0C7C(void) {
    ov01_021EFE44(r1);
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
    ov01_021F0CDC(r4);
}



void ov01_021F0CA8(void) {
    // ldr r0, _021F0CD4 ; =0x04000006
    // ldrh r0, [r0]
    // cmp r0, #0xc0
    // bge _021F0CD0
    // add r0, r1, r0
    // ldrb r0, [r0, #0x18]
    // ldr r2, [r1]
    // sub r0, r2, r0
    // bpl _021F0CBC
    // mov r0, #0
    // lsl r1, r0, #8
    // mov r0, #0xff
    // lsl r0, r0, #8
    // and r1, r0
    // mov r0, #0xff
    // orr r0, r1
    // ldr r1, _021F0CD8 ; =0x04000040
    // strh r0, [r1]
    // mov r0, #0xc0
    // strh r0, [r1, #4]
    // bx lr
    // nop
    // _021F0CD4: .word 0x04000006
    // _021F0CD8: .word 0x04000040
    // TODO: decompile
}



void ov01_021F0CDC(void) {
    // push {r4, lr}
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // add r4, r0, #0
    // ldr r1, [r2]
    // ldr r0, _021F0D1C ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // add r0, r4, #0
    // add r0, #0xe4
    // ldr r0, [r0]
    // mov r1, #1
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xdc
    // ldr r0, [r0]
    // bl ov01_021FB554
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xdc
    // str r1, [r0]
    // add r0, r4, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // bl SysTask_Destroy
    // mov r0, #0
    // add r4, #0xe0
    // str r0, [r4]
    // pop {r4, pc}
    // nop
    // _021F0D1C: .word 0xFFFF1FFF
    // TODO: decompile
}



void ov01_021F0D20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // mov r1, #1
    // add r2, r0, #0
    // tst r2, r1
    // bne _021F0D42
    // ldr r1, _021F0DAC ; =0x00001720
    // tst r1, r0
    // bne _021F0D38
    // cmp r0, #0
    // bne _021F0D3C
    // mov r1, #0
    // b _021F0D42
    // bl GF_AssertFail
    // mov r1, #0
    // mov r0, #0x15
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0x18
    // bhi _021F0D94
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F0D58: ; jump table
    // mov r4, #0
    // b _021F0D94
    // mov r4, #2
    // b _021F0D94
    // mov r4, #4
    // mov r0, #0x57
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // sub r0, r0, #3
    // cmp r0, #1
    // bhi _021F0DA2
    // add r4, r4, #1
    // mov r0, #6
    // mul r0, r1
    // add r0, r4, r0
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0DAC: .word 0x00001720
    // TODO: decompile
}



void ov01_021F0DB0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F0DC4 ; =0x0400006C
    // ldr r1, [r1]
    // bl GXx_SetMasterBrightness_
    // add r0, r4, #0
    // bl SysTask_Destroy
    // pop {r4, pc}
    // _021F0DC4: .word 0x0400006C
    // TODO: decompile
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
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F0E5C ; =ov01_02209B64
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _021F0DEC
    // bl GF_AssertFail
    // mov r0, #4
    // mov r1, #0x18
    // bl Heap_Alloc
    // ldr r1, _021F0E5C ; =ov01_02209B64
    // mov r2, #0x18
    // str r0, [r1]
    // mov r1, #0
    // strb r1, [r0]
    // add r0, r0, #1
    // sub r2, r2, #1
    // bne _021F0DFC
    // ldr r0, _021F0E5C ; =ov01_02209B64
    // mov r1, #0
    // ldr r2, [r0]
    // strh r1, [r2]
    // ldr r2, [r0]
    // strb r1, [r2, #2]
    // ldr r0, [r0]
    // str r4, [r0, #4]
    // mov r0, #2
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // bl GX_ResetBankForBG
    // mov r2, #2
    // ldr r1, _021F0E60 ; =0x06840000
    // mov r0, #0
    // lsl r2, r2, #0x10
    // bl MIi_CpuClearFast
    // ldr r0, _021F0E64 ; =0xC0320C04
    // ldr r2, _021F0E68 ; =0x04000064
    // ldr r1, _021F0E5C ; =ov01_02209B64
    // str r0, [r2]
    // ldr r0, _021F0E6C ; =ov01_021F1094
    // ldr r1, [r1]
    // lsr r2, r2, #0x10
    // bl SysTask_CreateOnVWaitQueue
    // ldr r1, _021F0E5C ; =ov01_02209B64
    // mov r2, #1
    // ldr r0, _021F0E70 ; =ov01_021F10C8
    // ldr r1, [r1]
    // lsl r2, r2, #0xa
    // bl SysTask_CreateOnMainQueue
    // pop {r4, pc}
    // _021F0E5C: .word ov01_02209B64
    // _021F0E60: .word 0x06840000
    // _021F0E64: .word 0xC0320C04
    // _021F0E68: .word 0x04000064
    // _021F0E6C: .word ov01_021F1094
    // _021F0E70: .word ov01_021F10C8
    // TODO: decompile
}



void ov01_021F0E74(void) {
}



void ov01_021F0E90(void) {
}



void ov01_021F0EAC(void) {
}



void ov01_021F0EC0(void) {
    // push {r3, lr}
    // ldr r0, _021F0F04 ; =ov01_02209B64
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _021F0ECE
    // bl GF_AssertFail
    // bl sub_02014F84
    // ldr r0, _021F0F04 ; =ov01_02209B64
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bl ov01_021F1210
    // ldr r0, _021F0F04 ; =ov01_02209B64
    // mov r1, #1
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bl ov01_021E631C
    // ldr r0, _021F0F04 ; =ov01_02209B64
    // mov r1, #1
    // ldr r0, [r0]
    // ldr r0, [r0, #4]
    // bl ov01_021E6340
    // ldr r0, _021F0F04 ; =ov01_02209B64
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, _021F0F04 ; =ov01_02209B64
    // mov r1, #0
    // str r1, [r0]
    // pop {r3, pc}
    // _021F0F04: .word ov01_02209B64
    // TODO: decompile
}



void ov01_021F0F08(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _021F0FAC ; =ov01_02209B64
    // add r4, r1, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _021F0F1C
    // bl GF_AssertFail
    // ldr r0, _021F0FAC ; =ov01_02209B64
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _021F0F2A
    // bl GF_AssertFail
    // mov r1, #0x12
    // mov r0, #4
    // lsl r1, r1, #0xa
    // bl Heap_Alloc
    // ldr r2, _021F0FAC ; =ov01_02209B64
    // mov r3, #0x12
    // ldr r1, [r2]
    // lsl r3, r3, #0xa
    // str r0, [r1, #0xc]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r2, [r2]
    // ldr r0, _021F0FB0 ; =ov01_021F1224
    // ldr r1, _021F0FB4 ; =ov01_021F1250
    // ldr r2, [r2, #0xc]
    // bl sub_02014DB4
    // ldr r1, _021F0FAC ; =ov01_02209B64
    // ldr r2, [r1]
    // str r0, [r2, #8]
    // ldr r0, [r1]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _021F0F64
    // bl GF_AssertFail
    // ldr r0, _021F0FAC ; =ov01_02209B64
    // mov r1, #1
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // bl sub_02015528
    // ldr r0, _021F0FAC ; =ov01_02209B64
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // bl sub_02015524
    // add r2, r0, #0
    // mov r0, #1
    // mov r1, #0xe1
    // lsl r0, r0, #0xc
    // lsl r1, r1, #0xe
    // bl Camera_SetPerspectiveClippingPlane
    // mov r2, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r3, #4
    // str r2, [sp]
    // bl GfGfxLoader_LoadFromOpenNarc
    // add r1, r0, #0
    // ldr r0, _021F0FAC ; =ov01_02209B64
    // mov r2, #0
    // ldr r0, [r0]
    // add r3, r2, #0
    // ldr r0, [r0, #8]
    // bl sub_0201526C
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0FAC: .word ov01_02209B64
    // _021F0FB0: .word ov01_021F1224
    // _021F0FB4: .word ov01_021F1250
    // TODO: decompile
}



void ov01_021F0FB8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r1, sp, #0
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // str r0, [r1, #8]
    // ldr r0, _021F1004 ; =ov01_02209B64
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _021F0FD4
    // bl GF_AssertFail
    // ldr r0, _021F1004 ; =ov01_02209B64
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _021F0FE2
    // bl GF_AssertFail
    // mov r4, #0
    // cmp r5, #0
    // bls _021F0FFE
    // ldr r6, _021F1004 ; =ov01_02209B64
    // add r7, sp, #0
    // ldr r0, [r6]
    // add r1, r4, #0
    // ldr r0, [r0, #8]
    // add r2, r7, #0
    // bl sub_02015484
    // add r4, r4, #1
    // cmp r4, r5
    // blo _021F0FEC
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F1004: .word ov01_02209B64
    // TODO: decompile
}



void ov01_021F1008(void) {
    // push {r3, lr}
    // ldr r0, _021F1040 ; =ov01_02209B64
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _021F1016
    // bl GF_AssertFail
    // ldr r0, _021F1040 ; =ov01_02209B64
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _021F1024
    // mov r0, #1
    // pop {r3, pc}
    // bl sub_02015460
    // ldr r0, _021F1040 ; =ov01_02209B64
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // bl sub_020154B0
    // cmp r0, #0
    // bne _021F103A
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _021F1040: .word ov01_02209B64
    // TODO: decompile
}



void ov01_021F1044(void) {
}



void ov01_021F1060(void) {
    // push {r3, lr}
    // ldr r0, _021F1090 ; =ov01_02209B64
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _021F106E
    // bl GF_AssertFail
    // ldr r0, _021F1090 ; =ov01_02209B64
    // ldr r0, [r0]
    // ldr r0, [r0, #8]
    // bl sub_02014EBC
    // ldr r0, _021F1090 ; =ov01_02209B64
    // ldr r0, [r0]
    // ldr r0, [r0, #0xc]
    // bl Heap_Free
    // ldr r0, _021F1090 ; =ov01_02209B64
    // mov r2, #0
    // ldr r1, [r0]
    // str r2, [r1, #8]
    // ldr r0, [r0]
    // str r2, [r0, #0xc]
    // pop {r3, pc}
    // _021F1090: .word ov01_02209B64
    // TODO: decompile
}



void ov01_021F1094(void) {
    // ldrh r0, [r4]
    // strh r0, [r4]
    ov01_021F1148(*((u32*)(r1 + 4)));
    SysTask_Destroy(r5);
    // ldrh r0, [r4]
    // strh r0, [r4]
}



void ov01_021F10C8(void) {
    // push {r4, r5, lr}
    // sub sp, #0x3c
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrh r0, [r4]
    // cmp r0, #2
    // bne _021F1136
    // bl sub_02014DA0
    // add r1, sp, #0x30
    // mov r0, #0
    // str r0, [r1]
    // str r0, [r1, #4]
    // ldr r3, _021F113C ; =ov01_022067E0
    // str r0, [r1, #8]
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0x24
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, sp, #0
    // bl MTX_Identity33_
    // add r0, sp, #0x30
    // bl NNS_G3dGlbSetBaseTrans
    // add r0, sp, #0x24
    // bl NNS_G3dGlbSetBaseScale
    // ldr r1, _021F1140 ; =NNS_G3dGlb + 0xBC
    // add r0, sp, #0
    // bl MI_Copy36B
    // ldr r1, _021F1144 ; =NNS_G3dGlb + 0x80
    // mov r0, #0xa4
    // ldr r2, [r1, #0x7c]
    // bic r2, r0
    // str r2, [r1, #0x7c]
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ov01_021E631C
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ov01_021E6340
    // mov r0, #0
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #1
    // strb r0, [r4, #2]
    // add r0, r5, #0
    // bl SysTask_Destroy
    // add sp, #0x3c
    // pop {r4, r5, pc}
    // nop
    // _021F113C: .word ov01_022067E0
    // _021F1140: .word NNS_G3dGlb + 0xBC
    // _021F1144: .word NNS_G3dGlb + 0x80
    // TODO: decompile
}



void ov01_021F1148(void) {
    // push {r4, r5, lr}
    // sub sp, #0x6c
    // ldr r5, _021F11F8 ; =ov01_0220689C
    // add r4, r0, #0
    // add r3, sp, #0x44
    // mov r2, #5
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F1154
    // add r0, sp, #0x44
    // bl GfGfx_SetBanks
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r5, _021F11FC ; =ov01_022067FC
    // add r3, sp, #0x34
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r0, [r4, #8]
    // bl ov01_021E6050
    // ldr r2, _021F1200 ; =0x0400000E
    // mov r0, #0x43
    // ldrh r1, [r2]
    // and r1, r0
    // ldr r0, _021F1204 ; =0x00004884
    // orr r0, r1
    // strh r0, [r2]
    // mov r0, #3
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add r0, sp, #0x24
    // bl MTX_Identity22_
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, _021F1208 ; =0x04000030
    // add r1, sp, #0x24
    // add r3, r2, #0
    // str r2, [sp, #4]
    // bl G2x_SetBGyAffine_
    // ldr r5, _021F120C ; =ov01_02206844
    // add r3, sp, #8
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // ldr r0, [r4, #8]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #4
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #8]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x6c
    // pop {r4, r5, pc}
    // _021F11F8: .word ov01_0220689C
    // _021F11FC: .word ov01_022067FC
    // _021F1200: .word 0x0400000E
    // _021F1204: .word 0x00004884
    // _021F1208: .word 0x04000030
    // _021F120C: .word ov01_02206844
    // TODO: decompile
}



void ov01_021F1210(void) {
}



void ov01_021F1224(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F124C ; =ov01_02209B64
    // add r4, r1, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _021F1236
    // bl GF_AssertFail
    // cmp r4, #0
    // beq _021F123E
    // bl GF_AssertFail
    // ldr r0, _021F124C ; =ov01_02209B64
    // ldr r2, [r0]
    // ldr r0, [r2, #0x10]
    // add r1, r0, r5
    // str r1, [r2, #0x10]
    // pop {r3, r4, r5, pc}
    // nop
    // _021F124C: .word ov01_02209B64
    // TODO: decompile
}



void ov01_021F1250(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F1278 ; =ov01_02209B64
    // add r4, r1, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _021F1262
    // bl GF_AssertFail
    // cmp r4, #0
    // beq _021F126A
    // bl GF_AssertFail
    // ldr r0, _021F1278 ; =ov01_02209B64
    // ldr r2, [r0]
    // ldr r0, [r2, #0x14]
    // add r1, r0, r5
    // str r1, [r2, #0x14]
    // pop {r3, r4, r5, pc}
    // nop
    // _021F1278: .word ov01_02209B64
    // TODO: decompile
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
    sub_02014C08(*((u32*)r1));
    *((u32*)(r4 + 8)) = 0;
    sub_02014C40(*((u32*)r4));
    *((u32*)(r4 + 8)) = (*((u32*)(r4 + 8)) + 1);
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
    sub_02014B08(*((u32*)r0));
}



void ov01_021F1310(void) {
    sub_02014BF8(*((u32*)r0));
    // asr r4, r0, #0x10
    _u32_div_f(0, r7);
    // tst r0, r1
    // neg r0, r4
    // str r0, [r5]
}


