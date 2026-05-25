/* Decompiled from asm/overlay_01_02203A18.s */
#include "global.h"

void ov01_02203A18(void) {
}



void ov01_02203A38(void) {
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
    TaskManager_GetStatePtr();
    TaskManager_GetEnvironment(r4);
    ov01_02203A48(*((u32*)(r0 + 4)), *((u32*)r0));
    // str r0, [r5]
    ov01_021F146C(*((u32*)(r4 + 4)));
    ov01_021F1450(0x12);
    Heap_Free(r4);
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
}



void ov01_02203B98(void) {
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
}



void ov01_02203CB8(void) {
    sub_0205F0A8(*((u32*)(r1 + 0x38)), *((u32*)(r1 + 8)), *((u32*)(r1 + 0xc)));
    GF_AssertFail();
    // add r1, sp, #0x24
    MapObject_CopyPositionVector(r5);
    // add r1, sp, #0x18
    MapObject_CopyFacingVector(r5);
    // add r1, sp, #0xc
    sub_0205F990(r5);
    // add r1, sp, #0
    sub_0205F9B0(r5);
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
    // add r0, r2, r0
    // add r0, r3, r0
    // add r2, r5, r1
    // str r5, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, r0, r1
    // str r2, [sp, #0x34]
    // str r0, [sp, #0x38]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02203D40: ; jump table
    sub_02023EA4(*((u32*)(r4 + 0x3c)), 1);
    // add r0, r1, r0
    *((u32*)(r4 + 0x1c)) = *((u32*)(r4 + 0x28));
    // sub r0, r1, r0
    *((u32*)(r4 + 0x28)) = (2 << 0xc);
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x28)) = 0;
    // str r0, [r4]
    // add r0, #0x40
    ov01_02203DF8(r4, *((u32*)(r4 + 0x28)));
    // str r0, [r4]
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 1);
    // str r0, [r4]
    *((u32*)(r4 + 4)) = 0;
    *((u32*)(r4 + 0x14)) = 1;
    *((u32*)(*((u32*)(r4 + 0x34)) + 4)) = 0;
    ov01_021F1640(r6, 0);
    // add r1, sp, #0x30
    sub_02068DA8(r6);
}



void ov01_02203DC0(void) {
    // add r1, sp, #0
    sub_02068DB8(*((u32*)(r1 + 0x10)));
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    sub_02023E50(*((u32*)(r4 + 0x3c)));
}



void ov01_02203DF8(void) {
    *((u16*)(r0 + 0x24)) = (*((u16*)(r0 + 0x24)) + 1);
    // ldrh r0, [r2, r0]
    *((u16*)(r0 + 0x26)) = (*((u16*)(r0 + 0x26)) + 1);
    *((u16*)(r0 + 0x24)) = 0;
    // ldrb r1, [r1, r2]
    sub_02020838(*((u32*)(r0 + 0x10)), *((u32*)(r0 + 4)), *((u16*)(r0 + 0x26)), *((u16*)(r0 + 0x24)));
    GF_CreateNewVramTransferTask(0, *((u32*)(r4 + 0x1c)), r0, *((u32*)(r4 + 0x20)));
}


