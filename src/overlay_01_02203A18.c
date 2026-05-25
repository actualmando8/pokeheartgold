/* Decompiled from asm/overlay_01_02203A18.s */
#include "global.h"

void ov01_02203A18(void) {
    ov01_021F1430(8, 0, 0);
    *((u32*)(r0 + 4)) = 0;
    ov01_02203B28(0);
}


void ov01_02203A38(void) {
    ov01_02203B70();
    ov01_021F1448(r4);
}


void ov01_02203A48(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F146C
    // add r6, r0, #0
    // mov r1, #0x12
    // str r6, [sp, #0x20]
    // bl ov01_021F1450
    // str r0, [sp, #0x24]
    // str r5, [sp, #0x28]
    // ldr r1, [r0, #4]
    // cmp r1, #0
    // beq _02203A6E
    // add sp, #0x2c
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // mov r1, #1
    // str r1, [r0, #4]
    // add r0, r5, #0
    // add r1, sp, #0x14
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // add r1, sp, #8
    // bl MapObject_CopyFacingVector
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, sp, #0x14
    // add r1, sp, #8
    // add r2, r0, #0
    // bl VEC_Add
    // add r0, r5, #0
    // bl MapObject_GetPriority
    // add r1, r0, #1
    // add r0, sp, #0x20
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r1, _02203AB0 ; =ov01_02209518
    // add r0, r6, #0
    // add r2, sp, #0x14
    // add r3, r4, #0
    // bl ov01_021F1620
    // add sp, #0x2c
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02203AB0: .word ov01_02209518
    // TODO: decompile
}


void ov01_02203AB4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #4
    // mov r1, #8
    // add r6, r2, #0
    // bl Heap_AllocAtEnd
    // add r2, r0, #0
    // str r6, [r2]
    // str r4, [r2, #4]
    // ldr r0, [r5, #0x10]
    // ldr r1, _02203AD4 ; =ov01_02203AD8
    // bl TaskManager_Call
    // pop {r4, r5, r6, pc}
    // _02203AD4: .word ov01_02203AD8
    // TODO: decompile
}


void ov01_02203AD8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl TaskManager_GetStatePtr
    // add r5, r0, #0
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02203AF6
    // cmp r0, #1
    // beq _02203B06
    // b _02203B22
    // ldr r0, [r4, #4]
    // ldr r1, [r4]
    // bl ov01_02203A48
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // b _02203B22
    // ldr r0, [r4, #4]
    // bl ov01_021F146C
    // mov r1, #0x12
    // bl ov01_021F1450
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _02203B22
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_02203B28(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #0xc
    // mov r2, #0x82
    // bl ov01_021F18D4
    // ldr r0, [r4]
    // mov r1, #0xc
    // mov r2, #0x8c
    // bl ov01_021F1908
    // ldr r0, [r4]
    // mov r1, #0xd
    // mov r2, #0x1c
    // mov r3, #1
    // bl ov01_021F1930
    // mov r0, #0xd
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _02203B6C ; =ov01_0220952C
    // mov r2, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // mov r1, #0xe
    // add r3, r2, #0
    // bl ov01_021F1758
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _02203B6C: .word ov01_0220952C
    // TODO: decompile
}


void ov01_02203B70(void) {
    ov01_021F18FC(0xc);
    ov01_021F1924(0xc);
    ov01_021F1970(0xd);
    ov01_021F18C8(0xe);
}


void ov01_02203B98(void) {
    ov01_021F1740(0xe, r1);
    sub_02023F90();
    NNS_G3dMdlSetMdlFogEnableFlagAll(0);
}


void ov01_02203BB4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // add r4, r1, #0
    // bl sub_02068D98
    // add r3, r0, #0
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x30
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r4, #0x38]
    // bl MapObject_GetID
    // str r0, [r4, #8]
    // ldr r0, [r4, #0x38]
    // bl MapObject_GetMapID
    // str r0, [r4, #0xc]
    // mov r0, #6
    // lsl r0, r0, #0xc
    // str r0, [r4, #0x28]
    // add r0, r6, #0
    // bl sub_02068D90
    // lsl r5, r0, #3
    // ldr r1, _02203C94 ; =ov01_02209544
    // ldr r0, [r4, #0x30]
    // ldr r1, [r1, r5]
    // mov r2, #1
    // bl ov01_021F14B4
    // ldr r1, _02203C98 ; =ov01_02209544 + 4
    // str r0, [r4, #0x58]
    // ldr r0, [r4, #0x30]
    // ldr r1, [r1, r5]
    // mov r2, #1
    // bl ov01_021F14B4
    // add r1, r4, #0
    // str r0, [r4, #0x54]
    // add r1, #0x40
    // bl sub_02026E18
    // ldr r0, [r4, #0x58]
    // bl NNS_G3dGetTex
    // str r0, [r4, #0x50]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x64
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x66
    // strh r1, [r0]
    // ldr r0, [r4, #0x30]
    // mov r1, #0xd
    // bl ov01_021F1AD4
    // add r5, r0, #0
    // mov r1, #0
    // bl sub_020209AC
    // str r0, [r4, #0x60]
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02020910
    // str r0, [r4, #0x5c]
    // ldr r0, [r4, #0x50]
    // mov r1, #0
    // bl sub_02020838
    // add r2, r0, #0
    // ldr r1, [r4, #0x5c]
    // ldr r3, [r4, #0x60]
    // mov r0, #0
    // bl GF_CreateNewVramTransferTask
    // ldr r0, [r5, #0x2c]
    // mov r1, #0
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0xd
    // ldr r0, [r4, #0x50]
    // bl sub_02020888
    // add r2, r0, #0
    // mov r0, #1
    // add r1, r5, #0
    // mov r3, #0x20
    // bl GF_CreateNewVramTransferTask
    // add r0, r6, #0
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r0, [r4, #0x30]
    // add r1, sp, #0
    // bl ov01_02203B98
    // mov r1, #0
    // str r0, [r4, #0x3c]
    // bl sub_02023EA4
    // ldr r0, _02203C9C ; =SEQ_SE_DP_DECIDE
    // bl PlaySE
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _02203C94: .word ov01_02209544
    // _02203C98: .word ov01_02209544 + 4
    // _02203C9C: .word SEQ_SE_DP_DECIDE
    // TODO: decompile
}


void ov01_02203CA0(void) {
    sub_02023DA4(*((u32*)(r1 + 0x3c)));
    Heap_Free(*((u32*)(r4 + 0x54)));
    Heap_Free(*((u32*)(r4 + 0x58)));
}


void ov01_02203CB8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x3c
    // add r4, r1, #0
    // ldr r5, [r4, #0x38]
    // ldr r1, [r4, #8]
    // add r6, r0, #0
    // ldr r2, [r4, #0xc]
    // add r0, r5, #0
    // bl sub_0205F0A8
    // cmp r0, #0
    // bne _02203CD4
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, sp, #0x24
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // add r1, sp, #0x18
    // bl MapObject_CopyFacingVector
    // add r0, r5, #0
    // add r1, sp, #0xc
    // bl sub_0205F990
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_0205F9B0
    // ldr r3, [sp, #0x24]
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // add r2, r3, r2
    // add r0, r0, r2
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #0x30]
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #8]
    // add r0, r1, r0
    // add r5, r2, r0
    // ldr r1, [sp, #0x2c]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x14]
    // add r0, r1, r0
    // mov r1, #2
    // add r0, r2, r0
    // lsl r1, r1, #0x10
    // add r0, r3, r0
    // add r2, r5, r1
    // str r5, [sp, #0x34]
    // lsr r1, r1, #5
    // str r0, [sp, #0x38]
    // add r0, r0, r1
    // str r2, [sp, #0x34]
    // str r0, [sp, #0x38]
    // ldr r0, [r4]
    // cmp r0, #3
    // bhi _02203DB4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02203D40: ; jump table
    // ldr r0, [r4, #0x3c]
    // mov r1, #1
    // bl sub_02023EA4
    // ldr r1, [r4, #0x1c]
    // ldr r0, [r4, #0x28]
    // add r0, r1, r0
    // str r0, [r4, #0x1c]
    // cmp r0, #0
    // ble _02203D68
    // mov r0, #2
    // ldr r1, [r4, #0x28]
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [r4, #0x28]
    // b _02203DB4
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // str r0, [r4, #0x28]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02203DB4
    // add r0, r4, #0
    // add r0, #0x40
    // bl ov01_02203DF8
    // cmp r0, #0
    // beq _02203DB4
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _02203DB4
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // cmp r0, #2
    // blt _02203DB4
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // mov r0, #1
    // str r0, [r4, #0x14]
    // b _02203DB4
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // str r1, [r0, #4]
    // add r0, r6, #0
    // bl ov01_021F1640
    // add sp, #0x3c
    // pop {r3, r4, r5, r6, pc}
    // add r0, r6, #0
    // add r1, sp, #0x30
    // bl sub_02068DA8
    // add sp, #0x3c
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_02203DC0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r1, [r4, #0x10]
    // cmp r1, #1
    // beq _02203DF2
    // add r1, sp, #0
    // bl sub_02068DB8
    // ldr r1, [sp]
    // ldr r0, [r4, #0x18]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r0, [r4, #0x1c]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [r4, #0x20]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x3c]
    // add r1, sp, #0
    // bl sub_02023E50
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_02203DF8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r0, [r4, #0x24]
    // add r0, r0, #1
    // strh r0, [r4, #0x24]
    // ldrh r1, [r4, #0x26]
    // ldr r2, [r4]
    // ldrh r3, [r4, #0x24]
    // lsl r0, r1, #1
    // ldrh r0, [r2, r0]
    // cmp r3, r0
    // blo _02203E3A
    // add r0, r1, #1
    // strh r0, [r4, #0x26]
    // mov r0, #0
    // strh r0, [r4, #0x24]
    // ldrh r2, [r4, #0x26]
    // ldr r0, [r4, #0xc]
    // cmp r2, r0
    // blo _02203E24
    // mov r0, #1
    // pop {r4, pc}
    // ldr r1, [r4, #4]
    // ldr r0, [r4, #0x10]
    // ldrb r1, [r1, r2]
    // bl sub_02020838
    // add r2, r0, #0
    // ldr r1, [r4, #0x1c]
    // ldr r3, [r4, #0x20]
    // mov r0, #0
    // bl GF_CreateNewVramTransferTask
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}

