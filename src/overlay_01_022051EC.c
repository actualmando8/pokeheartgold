/* Decompiled from asm/overlay_01_022051EC.s */
#include "global.h"

void ov01_022051EC(void) {
}



void ov01_02205208(void) {
}



void ov01_02205218(void) {
    HeapExp_FndInitAllocator((r0 + 4), 4, 0x20);
    // add r0, #0x14
    Field3dModel_LoadFromFilesystem(r4, 0x67, 0x84, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x24
    // add r1, #0x14
    Field3dModelAnimation_LoadFromFilesystem(r4, r4, 0x67, 0xa8);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x38
    // add r1, #0x14
    Field3dModelAnimation_LoadFromFilesystem(r4, r4, 0x67, 0xa6);
    // add r0, #0x4c
    // add r1, #0x14
    Field3dObject_InitFromModel(r4, r4);
    // add r0, #0x4c
    // add r1, #0x24
    Field3dObject_AddAnimation(r4, r4);
    // add r0, #0x4c
    // add r1, #0x38
    Field3dObject_AddAnimation(r4, r4);
    // add r0, #0x24
    ov01_022053C4(r4, 2, 0);
    // add r4, #0x4c
    Field3dObject_SetActiveFlag(r4, 0);
}



void ov01_022052A4(void) {
}



void ov01_022052C4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r1, #0x16
    // str r5, [sp, #8]
    // bl ov01_021F1450
    // str r0, [sp, #0xc]
    // add r0, sp, #8
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r1, _022052F0 ; =ov01_022096CC
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _022052F0: .word ov01_022096CC
    // TODO: decompile
}



void ov01_022052F4(void) {
}



u32 ov01_02205300(void) {
    sub_02068D98();
    *((u32*)(r4 + 4)) = *((u32*)(r0 + 4));
    // str r2, [r4]
    // add r0, #0x24
    ov01_022053C4(*((u32*)(r0 + 4)), 2, 0);
    // add r0, #0x4c
    Field3dObject_SetActiveFlag(r4, 1);
    // add r1, sp, #0
    sub_02068DB8(r5);
    // add r4, #0x4c
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    Field3dObject_SetPosEx(r4);
    // mov r0, #SEQ_SE_GS_TUREARUKI>>4
    PlaySE((r0 << 4));
}



void ov01_02205350(void) {
    // bx lr
    // TODO: decompile
}



void ov01_02205354(void) {
    // ldr r0, [r1, #4]
    // ldr r3, _02205360 ; =Field3dObject_SetActiveFlag
    // add r0, #0x4c
    // mov r1, #0
    // bx r3
    // nop
    // _02205360: .word Field3dObject_SetActiveFlag
    // TODO: decompile
}



void ov01_02205364(void) {
    // add r0, #0x24
    ov01_02205388(*((u32*)(r1 + 4)), 2);
    // str r0, [r5]
    // add r4, #0x4c
    Field3dObject_Draw(r4);
}



u32 ov01_02205388(void) {
    // mul r0, r4
    // add r0, r7, r0
    Field3dModelAnimation_FrameAdvanceAndCheck(0x14, (1 << 0xc));
}



void ov01_022053C4(void) {
    // mul r0, r4
    // add r0, r6, r0
    Field3dModelAnimation_FrameSet(0x14, r2);
}


