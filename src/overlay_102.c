/* Decompiled from asm/overlay_102.s */
#include "global.h"

void EasyChat_Init(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // add r5, r0, #0
    // cmp r1, #0
    // beq _021E7752
    // cmp r1, #1
    // beq _021E778A
    // b _021E77B2
    // mov r1, #0
    // mov r0, #0x3e
    // add r2, r1, #0
    // bl Sound_SetSceneAndPlayBGM
    // mov r2, #2
    // mov r0, #3
    // mov r1, #0x22
    // lsl r2, r2, #0xe
    // bl Heap_Create
    // mov r2, #0xa
    // mov r0, #3
    // mov r1, #0x23
    // lsl r2, r2, #0xe
    // bl Heap_Create
    // add r0, r5, #0
    // bl ov102_021E7888
    // ldr r0, [r0, #0x14]
    // mov r1, #0
    // bl ov102_021E940C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021E77B2
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, [r4, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E77B2
    // ldr r0, [r4, #4]
    // cmp r0, #2
    // bne _021E77A8
    // ldr r0, [r4, #0x14]
    // bl ov102_021EA238
    // b _021E77AA
    // mov r0, #0
    // add r4, #0x6a
    // strb r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void EasyChat_Main(void) {
    // push {r4, lr}
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, _021E77F4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // strh r1, [r4, #0x30]
    // ldr r1, [r0, #0x44]
    // strh r1, [r4, #0x32]
    // ldr r0, [r0, #0x4c]
    // strh r0, [r4, #0x34]
    // ldr r0, [r4, #0x40]
    // bl TouchHitboxController_IsTriggered
    // ldr r2, [r4, #0x2c]
    // cmp r2, #0
    // beq _021E77E6
    // add r0, r4, #0
    // add r4, #0x28
    // add r1, r4, #0
    // blx r2
    // mov r0, #0
    // pop {r4, pc}
    // add r1, r4, #0
    // ldr r2, [r4, #0x20]
    // add r0, r4, #0
    // add r1, #0x1c
    // blx r2
    // pop {r4, pc}
    // nop
    // _021E77F4: .word gSystem
    // TODO: decompile
}


void ov102_021E77F8(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // cmp r1, #3
    // bhi _021E7860
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E780C: ; jump table
    // str r0, [r4, #0x38]
    // cmp r0, #2
    // beq _021E7820
    // cmp r0, #3
    // beq _021E782A
    // pop {r4, pc}
    // ldr r0, [r4, #0x14]
    // mov r1, #0x1c
    // bl ov102_021E940C
    // pop {r4, pc}
    // ldr r0, [r4, #0x14]
    // mov r1, #0x1d
    // bl ov102_021E940C
    // pop {r4, pc}
    // cmp r0, #2
    // beq _021E783E
    // cmp r0, #3
    // beq _021E7848
    // b _021E7850
    // ldr r0, [r4, #0x14]
    // mov r1, #0x1e
    // bl ov102_021E940C
    // b _021E7850
    // ldr r0, [r4, #0x14]
    // mov r1, #0x1f
    // bl ov102_021E940C
    // mov r0, #4
    // str r0, [r4, #0x38]
    // pop {r4, pc}
    // sub r1, r0, #2
    // cmp r1, #1
    // bhi _021E7864
    // str r0, [r4, #0x38]
    // pop {r4, pc}
    // mov r0, #4
    // str r0, [r4, #0x38]
    // pop {r4, pc}
    // TODO: decompile
}


u32 EasyChat_Exit(void) {
    OverlayManager_GetData();
    ov102_021E7A24(r4);
    Heap_Destroy(0x22);
    Heap_Destroy(0x23);
    return 1;
}


void ov102_021E7888(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x7c
    // mov r2, #0x22
    // add r5, r0, #0
    // bl OverlayManager_CreateAndGetData
    // mov r1, #0
    // mov r2, #0x7c
    // add r4, r0, #0
    // bl MI_CpuFill8
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // str r0, [r4]
    // bl sub_02090D70
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // bl sub_02090E44
    // str r0, [r4, #0x74]
    // add r1, r4, #0
    // add r2, r4, #0
    // ldr r0, [r4]
    // add r1, #0x10
    // add r2, #8
    // bl sub_02090D8C
    // ldr r0, [r4, #4]
    // cmp r0, #2
    // bne _021E78D4
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x64
    // add r1, #8
    // bl ov102_021E7934
    // ldr r1, [r4]
    // mov r0, #0x22
    // bl sub_02091880
    // str r0, [r4, #0x18]
    // ldr r1, [r4, #0x18]
    // add r0, r4, #0
    // bl ov102_021E909C
    // str r0, [r4, #0x14]
    // mov r0, #0x22
    // str r0, [sp]
    // ldr r0, _021E7924 ; =ov102_021EC648
    // ldr r2, _021E7928 ; =ov102_021E77F8
    // mov r1, #5
    // add r3, r4, #0
    // bl TouchHitboxController_Create
    // str r0, [r4, #0x40]
    // mov r1, #0
    // str r1, [r4, #0x44]
    // add r0, r4, #0
    // str r1, [r4, #0x48]
    // add r0, #0x6b
    // strb r1, [r0]
    // str r1, [r4, #0x2c]
    // add r0, r4, #0
    // str r1, [r4, #0x28]
    // add r0, #0x4e
    // strh r1, [r0]
    // ldr r1, _021E792C ; =ov102_021E7AA4
    // add r0, r4, #0
    // bl ov102_021E7A4C
    // ldr r1, _021E7930 ; =ov102_021E8D60
    // add r0, r4, #0
    // bl ov102_021E8D50
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021E7924: .word ov102_021EC648
    // _021E7928: .word ov102_021E77F8
    // _021E792C: .word ov102_021E7AA4
    // _021E7930: .word ov102_021E8D60
    // TODO: decompile
}


void ov102_021E7934(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl MailMsg_GetMsgBank
    // strh r0, [r5]
    // mov r0, #0x14
    // strb r0, [r5, #3]
    // add r0, r4, #0
    // bl MailMsg_GetMsgNo
    // mov r6, #0
    // strb r0, [r5, #2]
    // add r4, r5, #4
    // add r0, r6, #0
    // mov r1, #3
    // ldrsb r3, [r4, r0]
    // ldrsb r2, [r5, r1]
    // add r6, r6, #1
    // add r2, r3, r2
    // strb r2, [r4]
    // cmp r6, #5
    // blt _021E7956
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov102_021E7968(void) {
    // add r2, r0, #0
    // mov r0, #2
    // ldrsb r3, [r2, r0]
    // add r3, r3, #1
    // strb r3, [r2, #2]
    // ldrsb r3, [r2, r0]
    // mov r0, #3
    // ldrsb r0, [r2, r0]
    // cmp r3, r0
    // blt _021E798E
    // mov r3, #0
    // strb r3, [r2, #2]
    // ldrsh r0, [r2, r3]
    // add r0, r0, #1
    // strh r0, [r2]
    // ldrsh r0, [r2, r3]
    // cmp r0, #5
    // blt _021E798E
    // strh r3, [r2]
    // add r0, r1, #0
    // mov r1, #0
    // mov r3, #2
    // ldrsh r1, [r2, r1]
    // ldrsb r2, [r2, r3]
    // ldr r3, _021E799C ; =MailMsg_SetMsgBankAndNum
    // bx r3
    // _021E799C: .word MailMsg_SetMsgBankAndNum
    // TODO: decompile
}


void ov102_021E79A0(void) {
    // add r2, r0, #0
    // mov r0, #2
    // ldrsb r3, [r2, r0]
    // sub r3, r3, #1
    // strb r3, [r2, #2]
    // ldrsb r0, [r2, r0]
    // cmp r0, #0
    // bge _021E79CA
    // mov r0, #0
    // ldrsh r3, [r2, r0]
    // sub r3, r3, #1
    // strh r3, [r2]
    // ldrsh r0, [r2, r0]
    // cmp r0, #0
    // bge _021E79C2
    // mov r0, #4
    // strh r0, [r2]
    // mov r0, #3
    // ldrsb r0, [r2, r0]
    // sub r0, r0, #1
    // strb r0, [r2, #2]
    // add r0, r1, #0
    // mov r1, #0
    // mov r3, #2
    // ldrsh r1, [r2, r1]
    // ldrsb r2, [r2, r3]
    // ldr r3, _021E79D8 ; =MailMsg_SetMsgBankAndNum
    // bx r3
    // _021E79D8: .word MailMsg_SetMsgBankAndNum
    // TODO: decompile
}


void ov102_021E79DC(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #3
    // add r6, r2, #0
    // ldrsb r1, [r5, r1]
    // add r0, r6, #0
    // bl _s32_div_f
    // strb r1, [r5, #2]
    // mov r1, #3
    // ldrsb r1, [r5, r1]
    // add r0, r6, #0
    // bl _s32_div_f
    // strh r0, [r5]
    // mov r1, #0
    // mov r2, #2
    // ldrsh r1, [r5, r1]
    // ldrsb r2, [r5, r2]
    // add r0, r4, #0
    // bl MailMsg_SetMsgBankAndNum
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov102_021E7A0C(void) {
    // mov r1, #2
    // ldrsb r3, [r0, r1]
    // mov r1, #0
    // ldrsh r2, [r0, r1]
    // mov r1, #3
    // ldrsb r0, [r0, r1]
    // mul r0, r2
    // add r0, r3, r0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx lr
    // TODO: decompile
}


void ov102_021E7A24(void) {
    sub_02090E5C(*((u32*)(r0 + 0x74)));
    TouchHitboxController_Destroy(*((u32*)(r5 + 0x40)));
    ov102_021E9144(*((u32*)(r5 + 0x14)));
    sub_020918C0(*((u32*)(r5 + 0x18)));
    OverlayManager_FreeData(r4);
}


void ov102_021E7A4C(void) {
    ((u32*)r0)[0x20] = r1;
    ((u32*)r0)[0x1c] = 0;
    ((u32*)r0)[0x78] = 0;
}


void ov102_021E7A58(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x74]
    // cmp r0, #1
    // bne _021E7A80
    // bl System_GetTouchHeld
    // cmp r0, #0
    // beq _021E7A6E
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, _021E7AA0 ; =gSystem
    // ldr r0, [r0, #0x44]
    // cmp r0, #0
    // beq _021E7A9C
    // mov r0, #4
    // str r0, [r4, #0x38]
    // mov r0, #0
    // str r0, [r4, #0x74]
    // pop {r4, pc}
    // ldr r0, _021E7AA0 ; =gSystem
    // ldr r0, [r0, #0x44]
    // cmp r0, #0
    // beq _021E7A8C
    // mov r0, #0
    // pop {r4, pc}
    // bl System_GetTouchHeld
    // cmp r0, #0
    // beq _021E7A9C
    // mov r0, #1
    // str r0, [r4, #0x74]
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _021E7AA0: .word gSystem
    // TODO: decompile
}


void ov102_021E7AA4(void) {
    // push {r3, lr}
    // ldr r2, [r0, #4]
    // lsl r3, r2, #2
    // ldr r2, _021E7AB4 ; =ov102_021EC5E8
    // ldr r2, [r2, r3]
    // blx r2
    // pop {r3, pc}
    // nop
    // _021E7AB4: .word ov102_021EC5E8
    // TODO: decompile
}


void ov102_021E7AB8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #3
    // bhi _021E7B10
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7ACC: ; jump table
    // ldr r0, _021E7B14 ; =0x000005DC
    // bl PlaySE
    // mov r0, #2
    // pop {r4, pc}
    // ldr r0, _021E7B14 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, _021E7B14 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x50
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #9
    // bl ov102_021E940C
    // mov r0, #4
    // pop {r4, pc}
    // ldr r0, _021E7B14 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // mov r0, #0
    // pop {r4, pc}
    // _021E7B14: .word 0x000005DC
    // TODO: decompile
}


void ov102_021E7B18(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r2, [r4, #0x30]
    // mov r1, #2
    // add r3, r2, #0
    // tst r3, r1
    // beq _021E7B3C
    // add r0, #0x4c
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // add r0, r4, #0
    // mov r1, #2
    // bl ov102_021E7AB8
    // pop {r4, pc}
    // mov r1, #1
    // add r3, r2, #0
    // tst r3, r1
    // beq _021E7B4E
    // add r4, #0x4c
    // ldrh r1, [r4]
    // bl ov102_021E7AB8
    // pop {r4, pc}
    // mov r3, #8
    // tst r3, r2
    // beq _021E7B60
    // add r4, #0x4c
    // strh r1, [r4]
    // mov r1, #3
    // bl ov102_021E7AB8
    // pop {r4, pc}
    // mov r3, #0x80
    // tst r3, r2
    // beq _021E7B88
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrh r1, [r1]
    // cmp r1, #2
    // bne _021E7B74
    // mov r0, #0
    // pop {r4, pc}
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrh r1, [r1]
    // add r4, #0x4c
    // add r1, r1, #1
    // strh r1, [r4]
    // mov r1, #3
    // bl ov102_021E7AB8
    // pop {r4, pc}
    // mov r3, #0x40
    // tst r3, r2
    // beq _021E7BB0
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrh r1, [r1]
    // cmp r1, #0
    // bne _021E7B9C
    // mov r0, #0
    // pop {r4, pc}
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrh r1, [r1]
    // add r4, #0x4c
    // sub r1, r1, #1
    // strh r1, [r4]
    // mov r1, #3
    // bl ov102_021E7AB8
    // pop {r4, pc}
    // ldr r3, [r4, #4]
    // cmp r3, #0
    // bne _021E7BBA
    // mov r0, #0
    // pop {r4, pc}
    // mov r3, #0x30
    // tst r2, r3
    // beq _021E7BD4
    // add r2, r4, #0
    // add r2, #0x4e
    // ldrh r2, [r2]
    // add r4, #0x4e
    // eor r1, r2
    // strh r1, [r4]
    // mov r1, #3
    // bl ov102_021E7AB8
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021E7BD8(void) {
    // ldr r3, _021E7BE0 ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _021E7BE4 ; =ov102_021EC610
    // bx r3
    // nop
    // _021E7BE0: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021E7BE4: .word ov102_021EC610
    // TODO: decompile
}


void ov102_021E7BE8(void) {
    // ldr r3, _021E7BF0 ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _021E7BF4 ; =ov102_021EC620
    // bx r3
    // nop
    // _021E7BF0: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021E7BF4: .word ov102_021EC620
    // TODO: decompile
}


void ov102_021E7BF8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #4]
    // cmp r1, #0
    // bne _021E7C08
    // bl ov102_021E7BD8
    // b _021E7C0C
    // bl ov102_021E7BE8
    // cmp r0, #3
    // bhi _021E7C80
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E7C1C: ; jump table
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x4c
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // add r0, r4, #0
    // mov r1, #1
    // bl ov102_021E7AB8
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #2
    // add r0, #0x4c
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // add r0, r4, #0
    // mov r1, #2
    // bl ov102_021E7AB8
    // pop {r4, pc}
    // add r1, r4, #0
    // mov r2, #0
    // add r1, #0x50
    // strh r2, [r1]
    // sub r1, r0, #2
    // add r0, r4, #0
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4c
    // strh r2, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov102_021E7AB8
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021E7C84(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // add r5, r0, #0
    // cmp r1, #4
    // bhi _021E7CFA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E7C9C: ; jump table
    // ldr r0, [r5, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E7CFA
    // ldr r0, [r5, #0x74]
    // cmp r0, #0
    // bne _021E7CC0
    // add r0, r5, #0
    // bl ov102_021E7B18
    // str r0, [r4]
    // b _021E7CFA
    // add r0, r5, #0
    // bl ov102_021E7BF8
    // str r0, [r4]
    // b _021E7CFA
    // mov r1, #3
    // str r1, [r4]
    // ldr r1, _021E7D00 ; =ov102_021E8D94
    // bl ov102_021E8D50
    // b _021E7CFA
    // mov r1, #3
    // str r1, [r4]
    // ldr r1, _021E7D04 ; =ov102_021E8E84
    // bl ov102_021E8D50
    // b _021E7CFA
    // mov r0, #0
    // str r0, [r4]
    // b _021E7CFA
    // ldr r0, [r5, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E7CFA
    // ldr r1, _021E7D08 ; =ov102_021E8240
    // add r0, r5, #0
    // bl ov102_021E7A4C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E7D00: .word ov102_021E8D94
    // _021E7D04: .word ov102_021E8E84
    // _021E7D08: .word ov102_021E8240
    // TODO: decompile
}


void ov102_021E7D0C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // add r5, r0, #0
    // cmp r2, #0
    // bne _021E7D24
    // bl ov102_021E7A58
    // cmp r0, #0
    // beq _021E7D24
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021E7C84
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E7D30(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #4
    // bhi _021E7DB4
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7D44: ; jump table
    // ldr r0, _021E7DB8 ; =0x000005DC
    // bl PlaySE
    // mov r0, #4
    // pop {r4, pc}
    // ldr r0, _021E7DB8 ; =0x000005DC
    // bl PlaySE
    // mov r0, #3
    // pop {r4, pc}
    // ldr r0, [r4, #0x14]
    // bl ov102_021EA238
    // cmp r0, #0
    // bne _021E7D70
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, _021E7DB8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x50
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #9
    // bl ov102_021E940C
    // mov r0, #6
    // pop {r4, pc}
    // ldr r0, _021E7DB8 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // b _021E7DB4
    // ldr r0, _021E7DB8 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4e
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #3
    // bl ov102_021E940C
    // mov r0, #2
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // _021E7DB8: .word 0x000005DC
    // TODO: decompile
}


void ov102_021E7DBC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r2, [r4, #0x30]
    // mov r1, #2
    // add r3, r2, #0
    // tst r3, r1
    // beq _021E7DE0
    // add r0, #0x4c
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // add r0, r4, #0
    // mov r1, #2
    // bl ov102_021E7D30
    // pop {r4, pc}
    // mov r1, #1
    // add r3, r2, #0
    // tst r3, r1
    // beq _021E7DF2
    // add r4, #0x4c
    // ldrh r1, [r4]
    // bl ov102_021E7D30
    // pop {r4, pc}
    // mov r3, #0x40
    // tst r3, r2
    // beq _021E7E42
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrh r1, [r1]
    // cmp r1, #0
    // beq _021E7E16
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrh r1, [r1]
    // add r4, #0x4c
    // sub r1, r1, #1
    // strh r1, [r4]
    // mov r1, #3
    // bl ov102_021E7D30
    // pop {r4, pc}
    // add r1, r4, #0
    // add r1, #0x6a
    // ldrb r1, [r1]
    // cmp r1, #0
    // beq _021E7E3E
    // add r1, r4, #0
    // add r1, #0x4e
    // ldrh r1, [r1]
    // cmp r1, #0
    // beq _021E7E3E
    // add r1, r4, #0
    // add r1, #0x4e
    // ldrh r1, [r1]
    // add r4, #0x4e
    // sub r1, r1, #1
    // strh r1, [r4]
    // mov r1, #3
    // bl ov102_021E7D30
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // mov r3, #0x80
    // tst r2, r3
    // beq _021E7EAE
    // add r2, r4, #0
    // add r2, #0x4c
    // ldrh r2, [r2]
    // cmp r2, #0
    // bne _021E7E92
    // add r1, r4, #0
    // add r1, #0x6a
    // ldrb r1, [r1]
    // cmp r1, #2
    // bne _021E7E7A
    // add r1, r4, #0
    // add r1, #0x4e
    // ldrh r1, [r1]
    // cmp r1, #0
    // bne _021E7E7A
    // add r1, r4, #0
    // add r1, #0x4e
    // ldrh r1, [r1]
    // add r4, #0x4e
    // add r1, r1, #1
    // strh r1, [r4]
    // mov r1, #3
    // bl ov102_021E7D30
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x4c
    // ldrh r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4c
    // strh r1, [r0]
    // add r0, r4, #0
    // mov r1, #3
    // bl ov102_021E7D30
    // pop {r4, pc}
    // cmp r2, #1
    // bne _021E7EAA
    // add r1, r4, #0
    // add r1, #0x4c
    // ldrh r1, [r1]
    // add r4, #0x4c
    // add r1, r1, #1
    // strh r1, [r4]
    // mov r1, #3
    // bl ov102_021E7D30
    // pop {r4, pc}
    // add r0, r1, #0
    // pop {r4, pc}
    // ldrh r2, [r4, #0x34]
    // mov r0, #0x20
    // tst r0, r2
    // beq _021E7ECC
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x64
    // add r1, #8
    // bl ov102_021E79A0
    // add r0, r4, #0
    // mov r1, #4
    // bl ov102_021E7D30
    // pop {r4, pc}
    // mov r0, #0x10
    // tst r0, r2
    // beq _021E7EE8
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x64
    // add r1, #8
    // bl ov102_021E7968
    // add r0, r4, #0
    // mov r1, #4
    // bl ov102_021E7D30
    // pop {r4, pc}
    // add r0, r1, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021E7EEC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl System_GetTouchHeld
    // cmp r0, #0
    // bne _021E7EFE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E7F2C ; =gSystem + 0x40
    // ldrh r2, [r0, #0x20]
    // add r1, r2, #0
    // sub r1, #0xa
    // cmp r5, r1
    // blt _021E7F10
    // add r2, #0xa
    // cmp r5, r2
    // ble _021E7F14
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r0, #0x22]
    // add r0, r1, #0
    // sub r0, #0xc
    // cmp r4, r0
    // blt _021E7F24
    // add r1, #0xc
    // cmp r4, r1
    // ble _021E7F28
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021E7F2C: .word gSystem + 0x40
    // TODO: decompile
}


void ov102_021E7F30(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl System_GetTouchHeld
    // cmp r0, #0
    // bne _021E7F42
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // cmp r5, #0x12
    // blt _021E7F4A
    // cmp r5, #0xec
    // ble _021E7F4E
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E7F68 ; =gSystem + 0x40
    // ldrh r1, [r0, #0x22]
    // add r0, r1, #0
    // sub r0, #0x18
    // cmp r4, r0
    // blt _021E7F60
    // add r1, #0x18
    // cmp r4, r1
    // ble _021E7F64
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021E7F68: .word gSystem + 0x40
    // TODO: decompile
}


void ov102_021E7F6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x14]
    // bl ov102_021EA228
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    // add r6, r0, #0
    // bl Sprite_GetPositionXY
    // add r0, r5, #0
    // add r0, #0x6c
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021E8020
    // add r3, sp, #0
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, r5, #0
    // bl ov102_021E7F30
    // cmp r0, #0
    // bne _021E7FAE
    // mov r0, #0
    // add r5, #0x6c
    // strb r0, [r5]
    // add sp, #8
    // sub r0, r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _021E80B0 ; =gSystem + 0x40
    // mov r0, #0x20
    // ldrsh r4, [r1, r0]
    // cmp r4, #0x1c
    // bge _021E7FBC
    // mov r4, #0x1c
    // b _021E7FC2
    // cmp r4, #0xe2
    // ble _021E7FC2
    // mov r4, #0xe2
    // mov r0, #0x6e
    // ldrsh r0, [r5, r0]
    // sub r0, r4, r0
    // bpl _021E7FCC
    // neg r0, r0
    // cmp r0, #2
    // bge _021E7FD8
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl Sprite_SetPositionXY
    // add r0, r5, #0
    // add r0, #0x6e
    // strh r4, [r0]
    // sub r4, #0x1c
    // add r0, r5, #0
    // lsr r2, r4, #0x1f
    // add r2, r4, r2
    // lsl r2, r2, #0x17
    // mov r1, #0
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, r5, #0
    // add r1, r5, #0
    // add r0, #0x64
    // add r1, #8
    // lsr r2, r2, #0x18
    // bl ov102_021E79DC
    // ldr r0, _021E80B4 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #3
    // bl ov102_021E940C
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _021E8030
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r3, sp, #0
    // mov r1, #2
    // mov r2, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r0, r5, #0
    // bl ov102_021E7EEC
    // cmp r0, #0
    // beq _021E8060
    // ldr r0, _021E80B0 ; =gSystem + 0x40
    // ldrh r1, [r0, #0x20]
    // add r0, r5, #0
    // add r0, #0x6e
    // strh r1, [r0]
    // mov r0, #1
    // add r5, #0x6c
    // strb r0, [r5]
    // ldr r0, _021E80B4 ; =0x000005DC
    // bl PlaySE
    // add sp, #8
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _021E80B8 ; =ov102_021EC634
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021E80AC
    // ldr r0, [r5, #0x14]
    // bl ov102_021EA238
    // add r6, r0, #0
    // mov r4, #0
    // cmp r6, #0
    // ble _021E80A8
    // add r7, sp, #4
    // lsl r2, r4, #0x18
    // ldr r0, [r5, #0x14]
    // add r1, r7, #0
    // lsr r2, r2, #0x18
    // bl ov102_021EA248
    // ldr r1, _021E80B0 ; =gSystem + 0x40
    // ldr r2, _021E80B0 ; =gSystem + 0x40
    // ldrh r1, [r1, #0x20]
    // ldrh r2, [r2, #0x22]
    // add r0, r7, #0
    // bl TouchscreenHitbox_PointIsIn
    // cmp r0, #0
    // beq _021E80A2
    // add sp, #8
    // add r0, r4, #4
    // pop {r3, r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // cmp r4, r6
    // blt _021E807E
    // mov r0, #0
    // mvn r0, r0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E80B0: .word gSystem + 0x40
    // _021E80B4: .word 0x000005DC
    // _021E80B8: .word ov102_021EC634
    // TODO: decompile
}


void ov102_021E80BC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov102_021E7F6C
    // add r5, r0, #0
    // cmp r5, #6
    // bhi _021E8170
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E80D6: ; jump table
    // ldr r0, _021E8174 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // add r1, r5, #1
    // add r0, #0x4c
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // add r0, r4, #0
    // add r4, #0x4c
    // ldrh r1, [r4]
    // bl ov102_021E7D30
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4c
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // cmp r5, #2
    // bne _021E8128
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x64
    // add r1, #8
    // bl ov102_021E79A0
    // b _021E8134
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0x64
    // add r1, #8
    // bl ov102_021E7968
    // add r0, r4, #0
    // mov r1, #4
    // bl ov102_021E7D30
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4c
    // strh r1, [r0]
    // add r0, r4, #0
    // sub r1, r5, #4
    // add r0, #0x4e
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov102_021E7D30
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4c
    // strh r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xf
    // bl ov102_021E940C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _021E8174: .word 0x000005DC
    // TODO: decompile
}


void ov102_021E8178(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // add r5, r0, #0
    // cmp r1, #6
    // bhi _021E820A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E8190: ; jump table
    // ldr r0, [r5, #0x14]
    // bl ov102_021EA238
    // add r1, r5, #0
    // add r1, #0x6a
    // strb r0, [r1]
    // mov r0, #1
    // str r0, [r4]
    // ldr r0, [r5, #0x74]
    // cmp r0, #0
    // bne _021E81BE
    // add r0, r5, #0
    // bl ov102_021E7DBC
    // str r0, [r4]
    // b _021E820A
    // add r0, r5, #0
    // bl ov102_021E80BC
    // str r0, [r4]
    // b _021E820A
    // ldr r0, [r5, #0x14]
    // mov r1, #3
    // bl ov102_021E947C
    // cmp r0, #0
    // beq _021E820A
    // mov r0, #0
    // str r0, [r4]
    // b _021E820A
    // mov r1, #5
    // str r1, [r4]
    // ldr r1, _021E8210 ; =ov102_021E8D94
    // bl ov102_021E8D50
    // b _021E820A
    // mov r1, #5
    // str r1, [r4]
    // ldr r1, _021E8214 ; =ov102_021E8E84
    // bl ov102_021E8D50
    // b _021E820A
    // mov r0, #1
    // str r0, [r4]
    // b _021E820A
    // ldr r0, [r5, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E820A
    // ldr r1, _021E8218 ; =ov102_021E8240
    // add r0, r5, #0
    // bl ov102_021E7A4C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021E8210: .word ov102_021E8D94
    // _021E8214: .word ov102_021E8E84
    // _021E8218: .word ov102_021E8240
    // TODO: decompile
}


void ov102_021E821C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r2, [r4]
    // add r5, r0, #0
    // cmp r2, #1
    // bhi _021E8234
    // bl ov102_021E7A58
    // cmp r0, #0
    // beq _021E8234
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021E8178
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E8240(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021E8256
    // cmp r0, #1
    // beq _021E826C
    // cmp r0, #2
    // beq _021E8280
    // b _021E8290
    // ldr r0, [r5, #0x14]
    // mov r1, #0x12
    // bl ov102_021E947C
    // cmp r0, #0
    // beq _021E8290
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021E8580
    // b _021E8290
    // ldr r0, [r5, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E8290
    // ldr r1, [r5, #0x24]
    // add r0, r5, #0
    // bl ov102_021E7A4C
    // b _021E8290
    // ldr r0, [r5, #0x14]
    // mov r1, #0x1b
    // bl ov102_021E947C
    // cmp r0, #0
    // beq _021E8290
    // mov r0, #0
    // str r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E8294(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #0x38]
    // cmp r1, #0
    // bne _021E82A8
    // add r0, #0x6b
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021E82BE
    // cmp r1, #1
    // bne _021E82B6
    // add r0, r5, #0
    // add r0, #0x6b
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _021E82BE
    // ldrh r0, [r5, #0x30]
    // mov r1, #4
    // tst r1, r0
    // beq _021E82EE
    // ldr r0, _021E8388 ; =0x000005E4
    // bl PlaySE
    // mov r0, #4
    // str r0, [r5, #0x38]
    // add r0, r5, #0
    // add r0, #0x6b
    // ldrb r1, [r0]
    // mov r0, #1
    // eor r1, r0
    // add r0, r5, #0
    // add r0, #0x6b
    // strb r1, [r0]
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x50
    // strh r1, [r0]
    // ldr r0, [r5, #0x14]
    // mov r1, #0x1b
    // bl ov102_021E940C
    // mov r0, #2
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // mov r1, #2
    // tst r1, r0
    // beq _021E830C
    // ldr r0, _021E838C ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #0xa
    // bl ov102_021E940C
    // ldr r0, _021E8390 ; =ov102_021E7AA4
    // str r0, [r5, #0x24]
    // mov r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // tst r0, r1
    // beq _021E836E
    // add r0, r5, #0
    // add r0, #0x50
    // ldrh r2, [r0]
    // cmp r2, #0xfe
    // bne _021E8334
    // ldr r0, _021E838C ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #0xa
    // bl ov102_021E940C
    // ldr r0, _021E8390 ; =ov102_021E7AA4
    // str r0, [r5, #0x24]
    // mov r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // add r1, r5, #0
    // add r1, #0x6b
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x18]
    // bl ov102_021E85A8
    // cmp r0, #0
    // beq _021E8366
    // ldr r0, _021E838C ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // add r0, #0x54
    // add r1, r5, #0
    // bl ov102_021E874C
    // ldr r0, _021E8394 ; =ov102_021E87B4
    // mov r1, #0xb
    // str r0, [r5, #0x24]
    // ldr r0, [r5, #0x14]
    // bl ov102_021E940C
    // mov r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E8398 ; =0x000005F2
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov102_021E85E8
    // cmp r0, #0
    // beq _021E8386
    // ldr r0, _021E838C ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #0x11
    // bl ov102_021E940C
    // pop {r3, r4, r5, pc}
    // _021E8388: .word 0x000005E4
    // _021E838C: .word 0x000005DC
    // _021E8390: .word ov102_021E7AA4
    // _021E8394: .word ov102_021E87B4
    // _021E8398: .word 0x000005F2
    // TODO: decompile
}


void ov102_021E839C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021E83E0 ; =ov102_021EC600
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021E83B2
    // mov r0, #0
    // pop {r4, pc}
    // cmp r0, #0
    // beq _021E83C0
    // cmp r0, #1
    // beq _021E83C4
    // cmp r0, #2
    // beq _021E83D0
    // b _021E83DC
    // mov r0, #1
    // pop {r4, pc}
    // add r4, #0x6b
    // ldrb r0, [r4]
    // cmp r0, #0
    // bne _021E83DC
    // mov r0, #0
    // pop {r4, pc}
    // add r4, #0x6b
    // ldrb r0, [r4]
    // cmp r0, #1
    // bne _021E83DC
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #2
    // pop {r4, pc}
    // _021E83E0: .word ov102_021EC600
    // TODO: decompile
}


void ov102_021E83E4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _021E83F8
    // mov r0, #0
    // add sp, #0xc
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x38
    // ldr r7, _021E8454 ; =gSystem + 0x40
    // str r0, [sp]
    // add r6, sp, #8
    // ldr r0, [sp]
    // mov r4, #0
    // strb r0, [r6]
    // ldrb r0, [r6]
    // mov r5, #0xc
    // add r0, #0x10
    // strb r0, [r6, #1]
    // strb r5, [r6, #2]
    // ldrb r0, [r6, #2]
    // add r0, #0x48
    // strb r0, [r6, #3]
    // ldrh r1, [r7, #0x20]
    // ldrh r2, [r7, #0x22]
    // add r0, sp, #8
    // bl TouchscreenHitbox_PointIsIn
    // cmp r0, #0
    // beq _021E8434
    // ldr r0, [sp, #4]
    // add sp, #0xc
    // lsl r1, r0, #1
    // add r0, r0, r1
    // add r0, r4, r0
    // pop {r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // add r5, #0x50
    // cmp r4, #3
    // blt _021E8412
    // ldr r0, [sp]
    // add r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #4
    // blt _021E8404
    // mov r0, #0
    // mvn r0, r0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021E8454: .word gSystem + 0x40
    // TODO: decompile
}


void ov102_021E8458(void) {
    // push {r3, lr}
    // ldr r0, _021E8484 ; =ov102_021EC5E0
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _021E8480
    // ldr r1, _021E8488 ; =gSystem + 0x40
    // ldrh r0, [r1, #0x20]
    // ldrh r1, [r1, #0x22]
    // sub r0, #0x14
    // sub r1, #0x40
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    // bl ov102_021EC5A0
    // add r1, r0, #0
    // add r0, r1, #0
    // pop {r3, pc}
    // _021E8484: .word ov102_021EC5E0
    // _021E8488: .word gSystem + 0x40
    // TODO: decompile
}


void ov102_021E848C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov102_021E839C
    // cmp r0, #1
    // beq _021E84A0
    // cmp r0, #2
    // beq _021E84B8
    // b _021E84E4
    // ldr r0, _021E856C ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #0xa
    // bl ov102_021E940C
    // ldr r0, _021E8570 ; =ov102_021E7AA4
    // str r0, [r5, #0x24]
    // mov r0, #1
    // str r0, [r4]
    // pop {r4, r5, r6, pc}
    // ldr r0, _021E8574 ; =0x000005E4
    // bl PlaySE
    // add r0, r5, #0
    // add r0, #0x6b
    // ldrb r1, [r0]
    // mov r0, #1
    // eor r1, r0
    // add r0, r5, #0
    // add r0, #0x6b
    // strb r1, [r0]
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x50
    // strh r1, [r0]
    // ldr r0, [r5, #0x14]
    // mov r1, #0x1b
    // bl ov102_021E940C
    // mov r0, #2
    // str r0, [r4]
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r0, #0x6b
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021E851C
    // add r0, r5, #0
    // bl ov102_021E83E4
    // add r6, r0, #0
    // bmi _021E8568
    // add r1, r5, #0
    // add r1, #0x6b
    // ldrb r1, [r1]
    // lsl r2, r6, #0x10
    // ldr r0, [r5, #0x18]
    // lsr r2, r2, #0x10
    // bl ov102_021E85A8
    // cmp r0, #0
    // bne _021E8514
    // ldr r0, _021E8578 ; =0x000005F2
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r0, #0x50
    // strh r6, [r0]
    // b _021E8548
    // add r0, r5, #0
    // bl ov102_021E8458
    // add r6, r0, #0
    // bmi _021E8568
    // add r1, r5, #0
    // add r1, #0x6b
    // ldrb r1, [r1]
    // lsl r2, r6, #0x10
    // ldr r0, [r5, #0x18]
    // lsr r2, r2, #0x10
    // bl ov102_021E85A8
    // cmp r0, #0
    // bne _021E8542
    // ldr r0, _021E8578 ; =0x000005F2
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r0, #0x50
    // strh r6, [r0]
    // ldr r0, _021E856C ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // add r0, #0x54
    // add r1, r5, #0
    // bl ov102_021E874C
    // ldr r0, _021E857C ; =ov102_021E87B4
    // mov r1, #0xb
    // str r0, [r5, #0x24]
    // ldr r0, [r5, #0x14]
    // bl ov102_021E940C
    // mov r0, #1
    // str r0, [r4]
    // pop {r4, r5, r6, pc}
    // nop
    // _021E856C: .word 0x000005DC
    // _021E8570: .word ov102_021E7AA4
    // _021E8574: .word 0x000005E4
    // _021E8578: .word 0x000005F2
    // _021E857C: .word ov102_021E87B4
    // TODO: decompile
}


void ov102_021E8580(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov102_021E7A58
    // cmp r0, #0
    // bne _021E85A6
    // ldr r0, [r5, #0x74]
    // cmp r0, #0
    // bne _021E859E
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021E8294
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021E848C
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E85A8(void) {
    // push {r3, lr}
    // ldr r3, _021E85E4 ; =0x0000FF02
    // add r3, r2, r3
    // lsl r3, r3, #0x10
    // lsr r3, r3, #0x10
    // cmp r3, #1
    // bhi _021E85BA
    // mov r0, #0
    // pop {r3, pc}
    // cmp r1, #0
    // bne _021E85D0
    // add r1, r2, #0
    // bl sub_02091C38
    // cmp r0, #0
    // beq _021E85CC
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // add r1, r2, #0
    // bl sub_02091C74
    // cmp r0, #0
    // beq _021E85DE
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _021E85E4: .word 0x0000FF02
    // TODO: decompile
}


void ov102_021E85E8(void) {
    // push {r3, lr}
    // add r1, r0, #0
    // add r1, #0x6b
    // ldrb r1, [r1]
    // lsl r2, r1, #2
    // ldr r1, _021E85FC ; =_021EC5D8
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r3, pc}
    // nop
    // _021E85FC: .word _021EC5D8
    // TODO: decompile
}


void ov102_021E8600(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x50
    // ldrh r2, [r0]
    // add r1, r2, #0
    // cmp r2, #0xfe
    // bne _021E8610
    // mov r1, #0xc
    // cmp r2, #0xfe
    // beq _021E866C
    // add r0, r4, #0
    // add r0, #0x52
    // strh r2, [r0]
    // ldrh r0, [r4, #0x34]
    // mov r2, #0x40
    // tst r2, r0
    // beq _021E8630
    // ldr r0, _021E86A8 ; =ov102_021EC65C
    // lsl r1, r1, #2
    // ldrb r0, [r0, r1]
    // add r4, #0x50
    // strh r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r2, #0x80
    // tst r2, r0
    // beq _021E8644
    // ldr r0, _021E86AC ; =ov102_021EC65D
    // lsl r1, r1, #2
    // ldrb r0, [r0, r1]
    // add r4, #0x50
    // strh r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r2, #0x20
    // tst r2, r0
    // beq _021E8658
    // ldr r0, _021E86B0 ; =ov102_021EC65E
    // lsl r1, r1, #2
    // ldrb r0, [r0, r1]
    // add r4, #0x50
    // strh r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r2, #0x10
    // tst r0, r2
    // beq _021E86A4
    // ldr r0, _021E86B4 ; =ov102_021EC65F
    // lsl r1, r1, #2
    // ldrb r0, [r0, r1]
    // add r4, #0x50
    // strh r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // ldrh r1, [r4, #0x34]
    // mov r0, #0x40
    // tst r0, r1
    // beq _021E868A
    // add r0, r4, #0
    // add r0, #0x52
    // ldrh r0, [r0]
    // mov r1, #3
    // bl _s32_div_f
    // add r1, #9
    // add r4, #0x50
    // strh r1, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0x80
    // tst r0, r1
    // beq _021E86A4
    // add r0, r4, #0
    // add r0, #0x52
    // ldrh r0, [r0]
    // mov r1, #3
    // bl _s32_div_f
    // add r4, #0x50
    // strh r1, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _021E86A8: .word ov102_021EC65C
    // _021E86AC: .word ov102_021EC65D
    // _021E86B0: .word ov102_021EC65E
    // _021E86B4: .word ov102_021EC65F
    // TODO: decompile
}


void ov102_021E86B8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x50
    // ldrh r0, [r0]
    // cmp r0, #0xfe
    // beq _021E8716
    // ldrh r1, [r4, #0x34]
    // mov r3, #0x40
    // mov r2, #0xff
    // tst r3, r1
    // beq _021E86D6
    // bl ov102_021EC4F8
    // add r2, r0, #0
    // b _021E86FE
    // mov r3, #0x80
    // tst r3, r1
    // beq _021E86E4
    // bl ov102_021EC514
    // add r2, r0, #0
    // b _021E86FE
    // mov r3, #0x10
    // tst r3, r1
    // beq _021E86F2
    // bl ov102_021EC54C
    // add r2, r0, #0
    // b _021E86FE
    // mov r3, #0x20
    // tst r1, r3
    // beq _021E86FE
    // bl ov102_021EC530
    // add r2, r0, #0
    // cmp r2, #0xff
    // beq _021E8748
    // add r0, r4, #0
    // add r0, #0x50
    // ldrh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x52
    // strh r1, [r0]
    // add r4, #0x50
    // strh r2, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // ldrh r1, [r4, #0x34]
    // mov r0, #0x40
    // tst r0, r1
    // beq _021E8730
    // add r0, r4, #0
    // add r0, #0x52
    // ldrh r0, [r0]
    // bl ov102_021EC584
    // add r4, #0x50
    // strh r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0x80
    // tst r0, r1
    // beq _021E8748
    // add r0, r4, #0
    // add r0, #0x52
    // ldrh r0, [r0]
    // bl ov102_021EC568
    // add r4, #0x50
    // strh r0, [r4]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021E874C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0
    // strh r0, [r4]
    // strb r0, [r4, #6]
    // strb r0, [r4, #7]
    // add r0, r1, #0
    // bl ov102_021E8FD8
    // strh r0, [r4, #4]
    // mov r1, #0
    // str r1, [r4, #8]
    // ldr r0, _021E8788 ; =0x0000FFFF
    // strh r1, [r4, #0xc]
    // strh r0, [r4, #0xe]
    // ldrh r2, [r4, #4]
    // cmp r2, #0xa
    // bls _021E8784
    // add r1, r2, #0
    // sub r1, #0xa
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r1, r0, #1
    // mov r0, #1
    // and r0, r2
    // add r0, r1, r0
    // strh r0, [r4, #2]
    // pop {r4, pc}
    // strh r1, [r4, #2]
    // pop {r4, pc}
    // _021E8788: .word 0x0000FFFF
    // TODO: decompile
}


void ov102_021E878C(void) {
    // ldrb r1, [r0, #6]
    // ldrb r0, [r0, #7]
    // lsl r0, r0, #1
    // add r0, r1, r0
    // bx lr
    // TODO: decompile
}


void ov102_021E8798(void) {
    ov102_021E878C();
}


void ov102_021E87A8(void) {
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}


void ov102_021E87AC(void) {
    // ldrh r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov102_021E87B0(void) {
    // ldrh r0, [r0, #2]
    // bx lr
    // TODO: decompile
}


void ov102_021E87B4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r2, [r5]
    // add r4, r0, #0
    // cmp r2, #3
    // bhi _021E881C
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E87CC: ; jump table
    // bl ov102_021E8B18
    // b _021E881C
    // ldr r0, [r4, #0x14]
    // mov r1, #0x13
    // bl ov102_021E947C
    // cmp r0, #0
    // beq _021E881C
    // mov r0, #0
    // str r0, [r5]
    // b _021E881C
    // ldr r0, [r4, #0x14]
    // mov r1, #0x13
    // bl ov102_021E947C
    // cmp r0, #0
    // beq _021E881C
    // ldr r0, [r4, #0x14]
    // mov r1, #0x12
    // bl ov102_021E940C
    // mov r0, #0
    // str r0, [r5]
    // b _021E881C
    // ldr r0, [r4, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E881C
    // ldr r1, [r4, #0x24]
    // add r0, r4, #0
    // bl ov102_021E7A4C
    // mov r0, #0
    // str r0, [r5]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E8820(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x38]
    // add r4, r1, #0
    // cmp r0, #0
    // bne _021E8836
    // add r1, r5, #0
    // add r1, #0x6b
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _021E884C
    // cmp r0, #1
    // bne _021E8844
    // add r1, r5, #0
    // add r1, #0x6b
    // ldrb r1, [r1]
    // cmp r1, #1
    // bne _021E884C
    // ldrh r2, [r5, #0x30]
    // mov r1, #4
    // tst r1, r2
    // beq _021E8880
    // ldr r0, _021E8958 ; =0x000005E4
    // bl PlaySE
    // mov r0, #4
    // str r0, [r5, #0x38]
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0x50
    // strh r1, [r0]
    // add r0, r5, #0
    // add r0, #0x6b
    // ldrb r1, [r0]
    // mov r0, #1
    // eor r1, r0
    // add r0, r5, #0
    // add r0, #0x6b
    // strb r1, [r0]
    // ldr r0, [r5, #0x14]
    // mov r1, #0xc
    // bl ov102_021E940C
    // ldr r0, _021E895C ; =ov102_021E8240
    // str r0, [r5, #0x24]
    // mov r0, #3
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // cmp r0, #2
    // bne _021E888E
    // add r0, r5, #0
    // add r0, #0x54
    // bl ov102_021E8C3C
    // b _021E88A6
    // cmp r0, #3
    // bne _021E889C
    // add r0, r5, #0
    // add r0, #0x54
    // bl ov102_021E8C64
    // b _021E88A6
    // ldrh r1, [r5, #0x34]
    // add r0, r5, #0
    // add r0, #0x54
    // bl ov102_021E8B40
    // cmp r0, #1
    // beq _021E88B4
    // cmp r0, #2
    // beq _021E88C4
    // cmp r0, #3
    // beq _021E88D8
    // b _021E88EC
    // ldr r0, _021E8960 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #0x12
    // bl ov102_021E940C
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E8960 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #0x13
    // bl ov102_021E940C
    // mov r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E8960 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #0x13
    // bl ov102_021E940C
    // mov r0, #2
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r5, #0x30]
    // mov r0, #2
    // tst r0, r1
    // beq _021E890C
    // ldr r0, _021E8960 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #0xc
    // bl ov102_021E940C
    // ldr r0, _021E895C ; =ov102_021E8240
    // str r0, [r5, #0x24]
    // mov r0, #3
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // tst r0, r1
    // beq _021E8956
    // add r0, r5, #0
    // add r0, #0x60
    // ldrh r0, [r0]
    // cmp r0, #0
    // ldr r0, _021E8960 ; =0x000005DC
    // beq _021E8934
    // bl PlaySE
    // ldr r0, [r5, #0x14]
    // mov r1, #0xc
    // bl ov102_021E940C
    // ldr r0, _021E895C ; =ov102_021E8240
    // str r0, [r5, #0x24]
    // mov r0, #3
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // bl PlaySE
    // add r0, r5, #0
    // ldr r1, _021E8964 ; =0x0000FFFF
    // add r0, #0x62
    // strh r1, [r0]
    // add r0, r5, #0
    // bl ov102_021E8CA4
    // ldr r0, _021E8968 ; =ov102_021E7AA4
    // mov r1, #0xd
    // str r0, [r5, #0x24]
    // ldr r0, [r5, #0x14]
    // bl ov102_021E940C
    // mov r0, #3
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // _021E8958: .word 0x000005E4
    // _021E895C: .word ov102_021E8240
    // _021E8960: .word 0x000005DC
    // _021E8964: .word 0x0000FFFF
    // _021E8968: .word ov102_021E7AA4
    // TODO: decompile
}


void ov102_021E896C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r0, #0
    // bl System_GetTouchNew
    // cmp r0, #0
    // bne _021E8980
    // add sp, #0x10
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _021E8A2C ; =ov102_021EC5F4
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // cmp r0, #0
    // beq _021E8990
    // cmp r0, #1
    // beq _021E899C
    // b _021E89A8
    // add r7, #0x54
    // add r0, r7, #0
    // bl ov102_021E8C3C
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // add r7, #0x54
    // add r0, r7, #0
    // bl ov102_021E8C64
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // add r0, #0x54
    // ldrh r0, [r0]
    // lsl r0, r0, #0x11
    // lsr r4, r0, #0x10
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x30
    // str r0, [sp]
    // ldr r1, [sp]
    // add r0, sp, #0xc
    // strb r1, [r0]
    // ldrb r1, [r0]
    // mov r6, #0
    // mov r5, #0x20
    // add r1, #0x10
    // strb r1, [r0, #1]
    // add r0, sp, #0xc
    // strb r5, [r0, #2]
    // ldrb r1, [r0, #2]
    // ldr r2, _021E8A30 ; =gSystem + 0x40
    // add r1, #0x48
    // strb r1, [r0, #3]
    // ldr r1, _021E8A30 ; =gSystem + 0x40
    // ldrh r2, [r2, #0x22]
    // ldrh r1, [r1, #0x20]
    // add r0, sp, #0xc
    // bl TouchscreenHitbox_PointIsIn
    // cmp r0, #0
    // beq _021E89F2
    // add r7, #0x62
    // add sp, #0x10
    // strh r4, [r7]
    // mov r0, #5
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // add r0, r7, #0
    // add r0, #0x58
    // ldrh r0, [r0]
    // cmp r4, r0
    // blo _021E8A08
    // mov r0, #1
    // str r0, [sp, #4]
    // b _021E8A10
    // add r6, r6, #1
    // add r5, #0x68
    // cmp r6, #2
    // blt _021E89CC
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // bne _021E8A26
    // ldr r0, [sp]
    // add r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #5
    // blt _021E89BC
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021E8A2C: .word ov102_021EC5F4
    // _021E8A30: .word gSystem + 0x40
    // TODO: decompile
}


void ov102_021E8A34(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // bl ov102_021E839C
    // cmp r0, #1
    // beq _021E8A48
    // cmp r0, #2
    // beq _021E8A60
    // b _021E8A90
    // ldr r0, _021E8B08 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x14]
    // mov r1, #0xc
    // bl ov102_021E940C
    // ldr r0, _021E8B0C ; =ov102_021E8240
    // str r0, [r4, #0x24]
    // mov r0, #3
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E8B10 ; =0x000005E4
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x50
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x6b
    // ldrb r1, [r0]
    // mov r0, #1
    // eor r1, r0
    // add r0, r4, #0
    // add r0, #0x6b
    // strb r1, [r0]
    // ldr r0, [r4, #0x14]
    // mov r1, #0xc
    // bl ov102_021E940C
    // ldr r0, _021E8B0C ; =ov102_021E8240
    // str r0, [r4, #0x24]
    // mov r0, #3
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov102_021E896C
    // cmp r0, #5
    // bhi _021E8B06
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8AA6: ; jump table
    // ldr r0, _021E8B08 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov102_021E8CA4
    // ldr r0, _021E8B14 ; =ov102_021E7AA4
    // mov r1, #0xd
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x14]
    // bl ov102_021E940C
    // mov r0, #3
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E8B08 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x14]
    // mov r1, #0x12
    // bl ov102_021E940C
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E8B08 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x14]
    // mov r1, #0x13
    // bl ov102_021E940C
    // mov r0, #1
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // ldr r0, _021E8B08 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r4, #0x14]
    // mov r1, #0x13
    // bl ov102_021E940C
    // mov r0, #2
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // _021E8B08: .word 0x000005DC
    // _021E8B0C: .word ov102_021E8240
    // _021E8B10: .word 0x000005E4
    // _021E8B14: .word ov102_021E7AA4
    // TODO: decompile
}


void ov102_021E8B18(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov102_021E7A58
    // cmp r0, #0
    // bne _021E8B3E
    // ldr r0, [r5, #0x74]
    // cmp r0, #0
    // bne _021E8B36
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021E8820
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021E8A34
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E8B40(void) {
    // push {r3, r4, r5, lr}
    // mov r2, #0x80
    // add r4, r0, #0
    // tst r2, r1
    // beq _021E8BB8
    // ldrh r1, [r4, #0xc]
    // cmp r1, #0
    // beq _021E8B54
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r4, #7]
    // cmp r1, #4
    // bhs _021E8B8A
    // add r1, r1, #1
    // strb r1, [r4, #7]
    // bl ov102_021E8798
    // ldrh r1, [r4, #4]
    // cmp r0, r1
    // bhs _021E8B6C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // cmp r0, r1
    // bne _021E8B7E
    // mov r1, #1
    // tst r0, r1
    // beq _021E8B7E
    // mov r0, #0
    // strb r0, [r4, #6]
    // add r0, r1, #0
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #7]
    // sub r0, r0, #1
    // strb r0, [r4, #7]
    // mov r0, #1
    // strh r0, [r4, #0xc]
    // pop {r3, r4, r5, pc}
    // ldrh r2, [r4]
    // ldrh r1, [r4, #2]
    // cmp r2, r1
    // bhs _021E8BB2
    // mov r1, #1
    // str r1, [r4, #8]
    // ldrh r1, [r4]
    // add r1, r1, #1
    // strh r1, [r4]
    // bl ov102_021E8798
    // ldrh r1, [r4, #4]
    // cmp r0, r1
    // bhs _021E8BAA
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // strb r0, [r4, #6]
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // strh r0, [r4, #0xc]
    // pop {r3, r4, r5, pc}
    // mov r5, #0x40
    // add r2, r1, #0
    // tst r2, r5
    // beq _021E8BF4
    // ldrh r0, [r4, #0xc]
    // cmp r0, #0
    // beq _021E8BCE
    // mov r0, #0
    // strh r0, [r4, #0xc]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #7]
    // cmp r0, #0
    // beq _021E8BDC
    // sub r0, r0, #1
    // strb r0, [r4, #7]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4]
    // cmp r0, #0
    // beq _021E8BF0
    // sub r5, #0x41
    // str r5, [r4, #8]
    // ldrh r0, [r4]
    // sub r0, r0, #1
    // strh r0, [r4]
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // mov r3, #0x30
    // add r2, r1, #0
    // tst r2, r3
    // beq _021E8C1E
    // ldrb r2, [r4, #6]
    // mov r1, #1
    // eor r1, r2
    // strb r1, [r4, #6]
    // bl ov102_021E8798
    // ldrh r1, [r4, #4]
    // cmp r0, r1
    // bhs _021E8C12
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldrb r1, [r4, #6]
    // mov r0, #1
    // eor r0, r1
    // strb r0, [r4, #6]
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // lsl r2, r5, #3
    // tst r2, r1
    // beq _021E8C2A
    // bl ov102_021E8C3C
    // pop {r3, r4, r5, pc}
    // add r3, #0xd0
    // tst r1, r3
    // beq _021E8C36
    // bl ov102_021E8C64
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E8C3C(void) {
    // ldrh r1, [r0]
    // cmp r1, #0
    // beq _021E8C5E
    // cmp r1, #5
    // blo _021E8C52
    // sub r1, r1, #5
    // strh r1, [r0]
    // mov r1, #4
    // mvn r1, r1
    // str r1, [r0, #8]
    // b _021E8C5A
    // neg r1, r1
    // str r1, [r0, #8]
    // mov r1, #0
    // strh r1, [r0]
    // mov r0, #2
    // bx lr
    // mov r0, #4
    // bx lr
    // TODO: decompile
}


void ov102_021E8C64(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r2, [r4, #2]
    // ldrh r1, [r4]
    // cmp r1, r2
    // bhs _021E8CA0
    // add r0, r1, #5
    // cmp r0, r2
    // bgt _021E8C80
    // mov r0, #5
    // str r0, [r4, #8]
    // ldrh r0, [r4]
    // add r0, r0, #5
    // b _021E8C86
    // sub r0, r2, r1
    // str r0, [r4, #8]
    // ldrh r0, [r4, #2]
    // strh r0, [r4]
    // add r0, r4, #0
    // bl ov102_021E8798
    // ldrh r1, [r4, #4]
    // cmp r0, r1
    // bhs _021E8C98
    // mov r0, #2
    // pop {r4, pc}
    // mov r0, #0
    // strb r0, [r4, #6]
    // mov r0, #3
    // pop {r4, pc}
    // mov r0, #4
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021E8CA4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x62
    // ldrh r2, [r0]
    // ldr r0, _021E8D18 ; =0x0000FFFF
    // cmp r2, r0
    // bne _021E8CBC
    // add r0, r4, #0
    // add r0, #0x54
    // bl ov102_021E8798
    // add r2, r0, #0
    // add r0, r4, #0
    // add r0, #0x6b
    // ldrb r0, [r0]
    // cmp r0, #0
    // ldr r0, [r4, #0x18]
    // bne _021E8CD4
    // add r1, r4, #0
    // add r1, #0x50
    // ldrh r1, [r1]
    // bl sub_02091C60
    // b _021E8CDE
    // add r1, r4, #0
    // add r1, #0x50
    // ldrh r1, [r1]
    // bl sub_02091CAC
    // add r2, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021E8CF0
    // cmp r0, #1
    // beq _021E8CF4
    // cmp r0, #2
    // beq _021E8D02
    // b _021E8D10
    // strh r2, [r4, #0x10]
    // b _021E8D10
    // add r0, r4, #0
    // add r0, #0x4e
    // ldrh r0, [r0]
    // lsl r0, r0, #1
    // add r0, r4, r0
    // strh r2, [r0, #0x10]
    // b _021E8D10
    // add r1, r4, #0
    // add r1, #0x4e
    // ldrh r1, [r1]
    // add r0, r4, #0
    // add r0, #8
    // bl MailMsg_SetFieldI
    // add r0, r4, #0
    // bl ov102_021E8F14
    // pop {r4, pc}
    // _021E8D18: .word 0x0000FFFF
    // TODO: decompile
}


void ov102_021E8D1C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // cmp r1, #0
    // beq _021E8D2C
    // cmp r1, #1
    // beq _021E8D3C
    // b _021E8D4A
    // ldr r0, [r0, #0x14]
    // mov r1, #1
    // bl ov102_021E940C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // b _021E8D4A
    // ldr r0, [r0, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E8D4A
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021E8D50(void) {
    ((u32*)r0)[0x2c] = r1;
    ((u32*)r0)[0x28] = 0;
}


void ov102_021E8D58(void) {
    ((u32*)r0)[0x2c] = 0;
}


void ov102_021E8D60(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021E8D72
    // cmp r0, #1
    // beq _021E8D82
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x14]
    // mov r1, #2
    // bl ov102_021E940C
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E8D92
    // add r0, r5, #0
    // bl ov102_021E8D58
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E8D94(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #3
    // bhi _021E8E78
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E8DAC: ; jump table
    // bl ov102_021E8EF8
    // cmp r0, #0
    // bne _021E8DC6
    // ldr r0, [r4]
    // bl sub_02090D88
    // cmp r0, #0
    // beq _021E8DF8
    // add r0, r4, #0
    // bl ov102_021E8F14
    // cmp r0, #0
    // beq _021E8DEA
    // add r0, r4, #0
    // add r0, #0x70
    // mov r1, #1
    // mov r2, #0
    // bl ov102_021E8F5C
    // ldr r0, [r4, #0x14]
    // mov r1, #0x15
    // bl ov102_021E940C
    // mov r0, #1
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x14]
    // mov r1, #0x17
    // bl ov102_021E940C
    // mov r0, #2
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // ldr r1, _021E8E7C ; =ov102_021E8E84
    // add r0, r4, #0
    // bl ov102_021E8D50
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x14]
    // bl ov102_021EA258
    // cmp r0, #0
    // beq _021E8E12
    // cmp r0, #1
    // beq _021E8E20
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x14]
    // mov r1, #0x19
    // bl ov102_021E940C
    // mov r0, #3
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #4]
    // cmp r0, #2
    // bne _021E8E2E
    // add r0, r4, #0
    // add r0, #8
    // bl MailMsg_SetTrailingFieldsEmpty
    // add r1, r4, #0
    // add r2, r4, #0
    // ldr r0, [r4]
    // add r1, #0x10
    // add r2, #8
    // bl sub_02090E04
    // ldr r1, _021E8E80 ; =ov102_021E8D1C
    // add r0, r4, #0
    // bl ov102_021E7A4C
    // mov r0, #3
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4, #0x30]
    // mov r0, #0xf3
    // tst r0, r1
    // bne _021E8E5A
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _021E8E78
    // ldr r0, [r4, #0x14]
    // mov r1, #0x14
    // bl ov102_021E940C
    // mov r0, #3
    // str r0, [r5]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E8E78
    // add r0, r4, #0
    // bl ov102_021E8D58
    // pop {r3, r4, r5, pc}
    // nop
    // _021E8E7C: .word ov102_021E8E84
    // _021E8E80: .word ov102_021E8D1C
    // TODO: decompile
}


void ov102_021E8E84(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021E8E9A
    // cmp r0, #1
    // beq _021E8EB4
    // cmp r0, #2
    // beq _021E8EE0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #1
    // add r0, #0x70
    // add r2, r1, #0
    // bl ov102_021E8F5C
    // ldr r0, [r5, #0x14]
    // mov r1, #0x16
    // bl ov102_021E940C
    // mov r0, #1
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x14]
    // bl ov102_021EA258
    // cmp r0, #0
    // beq _021E8EC4
    // cmp r0, #1
    // beq _021E8ED2
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x14]
    // mov r1, #0x19
    // bl ov102_021E940C
    // mov r0, #2
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r1, _021E8EF4 ; =ov102_021E8D1C
    // add r0, r5, #0
    // bl ov102_021E7A4C
    // mov r0, #2
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, #0x14]
    // bl ov102_021E9464
    // cmp r0, #0
    // beq _021E8EF0
    // add r0, r5, #0
    // bl ov102_021E8D58
    // pop {r3, r4, r5, pc}
    // nop
    // _021E8EF4: .word ov102_021E8D1C
    // TODO: decompile
}


void ov102_021E8EF8(void) {
    sub_02090DC0(0, 1);
}


void ov102_021E8F14(void) {
    // push {r3, lr}
    // ldr r1, [r0, #4]
    // cmp r1, #0
    // beq _021E8F26
    // cmp r1, #1
    // beq _021E8F36
    // cmp r1, #2
    // beq _021E8F4C
    // b _021E8F54
    // ldrh r1, [r0, #0x10]
    // ldr r0, _021E8F58 ; =0x0000FFFF
    // cmp r1, r0
    // beq _021E8F32
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // ldrh r2, [r0, #0x10]
    // ldr r1, _021E8F58 ; =0x0000FFFF
    // cmp r2, r1
    // beq _021E8F48
    // ldrh r0, [r0, #0x12]
    // cmp r0, r1
    // beq _021E8F48
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // add r0, #8
    // bl MailMsg_AllFieldsAreInit
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _021E8F58: .word 0x0000FFFF
    // TODO: decompile
}


void ov102_021E8F5C(void) {
    *(u8*)r0 = r2;
    ((u8*)r0)[1] = r1;
}


void ov102_021E8F64(void) {
    // ldrb r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov102_021E8F68(void) {
    // add r0, #0x74
    // bx lr
    // TODO: decompile
}


void ov102_021E8F6C(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}


void ov102_021E8F70(void) {
    sub_02090D74();
}


void ov102_021E8F7C(void) {
    // add r0, #0x6b
    // ldrb r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov102_021E8F84(void) {
    MailMsg_GetMsgBank();
}


void ov102_021E8F90(void) {
    MailMsg_GetFieldI();
}


void ov102_021E8FA8(void) {
    MailMsg_GetRawString();
}


void ov102_021E8FB4(void) {
    ov102_021E7A0C();
}


void ov102_021E8FC0(void) {
    // add r0, #0x4e
    // ldrh r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov102_021E8FC8(void) {
    // add r0, #0x4c
    // ldrh r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov102_021E8FD0(void) {
    // add r0, #0x50
    // ldrh r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov102_021E8FD8(void) {
    // push {r3, lr}
    // add r1, r0, #0
    // add r0, #0x6b
    // ldrb r0, [r0]
    // cmp r0, #0
    // ldr r0, [r1, #0x18]
    // bne _021E8FF0
    // add r1, #0x50
    // ldrh r1, [r1]
    // bl sub_02091C38
    // pop {r3, pc}
    // add r1, #0x50
    // ldrh r1, [r1]
    // bl sub_02091C74
    // pop {r3, pc}
    // TODO: decompile
}


void ov102_021E8FFC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0x6b
    // ldrb r0, [r0]
    // add r4, r1, #0
    // add r3, r2, #0
    // cmp r0, #0
    // ldr r0, [r5, #0x18]
    // bne _021E901A
    // add r5, #0x50
    // ldrh r1, [r5]
    // add r2, r4, #0
    // bl sub_02091C40
    // pop {r3, r4, r5, pc}
    // add r5, #0x50
    // ldrh r1, [r5]
    // add r2, r4, #0
    // bl sub_02091C84
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9028(void) {
    ov102_021E878C(0);
}


void ov102_021E9044(void) {
    ov102_021E87A8();
}


void ov102_021E9050(void) {
    ov102_021E87AC(0, 1);
}


void ov102_021E9064(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0x54
    // bl ov102_021E87AC
    // add r5, #0x54
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov102_021E87B0
    // cmp r4, r0
    // bge _021E9080
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9084(void) {
    sub_02090D78();
}


void ov102_021E9090(void) {
    ov102_021E8F64();
}


void ov102_021E909C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r6, r1, #0
    // mov r1, #0x8d
    // add r5, r0, #0
    // mov r0, #0x23
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // str r5, [r4, #0x18]
    // add r0, r5, #0
    // str r6, [r4, #0x1c]
    // bl ov102_021E8F68
    // mov r1, #0x7e
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov102_021E9198
    // bl NNS_G2dInitOamManagerModule
    // mov r2, #0
    // str r2, [sp]
    // mov r1, #0x7f
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // mov r3, #0x20
    // str r3, [sp, #0xc]
    // mov r0, #0x23
    // str r0, [sp, #0x10]
    // mov r0, #1
    // bl OamManager_Create
    // add r1, r4, #0
    // mov r0, #0x80
    // add r1, #0x28
    // mov r2, #0x23
    // bl G2dRenderer_Init
    // str r0, [r4, #0x24]
    // mov r0, #0x23
    // bl BgConfig_Alloc
    // str r0, [r4, #0x20]
    // ldr r0, _021E913C ; =ov102_021E93DC
    // add r1, r4, #0
    // mov r2, #2
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4]
    // ldr r0, _021E9140 ; =ov102_021E93E0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov102_021E93D4
    // mov r1, #0
    // str r0, [r4, #4]
    // add r2, r4, #0
    // add r0, r1, #0
    // add r1, r1, #1
    // str r0, [r2, #8]
    // add r2, r2, #4
    // cmp r1, #4
    // blt _021E9122
    // mov r0, #4
    // mov r1, #0x23
    // bl FontID_Alloc
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021E913C: .word ov102_021E93DC
    // _021E9140: .word ov102_021E93E0
    // TODO: decompile
}


void ov102_021E9144(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // beq _021E9196
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #4
    // bl FontID_Release
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _021E9166
    // bl SysTask_Destroy
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _021E915C
    // ldr r0, [r6]
    // bl SysTask_Destroy
    // ldr r0, [r6, #4]
    // bl SysTask_Destroy
    // bl OamManager_Free
    // ldr r0, [r6, #0x24]
    // bl SpriteList_Delete
    // add r0, r6, #0
    // bl ov102_021E91BC
    // ldr r0, [r6, #0x20]
    // bl Heap_Free
    // add r0, r6, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov102_021E9198(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _021E91B8 ; =ov102_021EC698
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl ObjCharTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // add sp, #0x10
    // pop {r4, pc}
    // _021E91B8: .word ov102_021EC698
    // TODO: decompile
}


void ov102_021E91BC(void) {
    ObjCharTransfer_Destroy();
}


void ov102_021E91C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x60
    // add r7, r0, #0
    // mov r0, #2
    // mov r1, #0x23
    // bl FontSystem_NewInit
    // mov r1, #0x7f
    // lsl r1, r1, #2
    // str r0, [r7, r1]
    // add r1, #8
    // add r0, r7, r1
    // bl InitWindow
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x81
    // str r0, [sp, #4]
    // lsl r1, r1, #2
    // ldr r0, [r7, #0x20]
    // add r1, r7, r1
    // mov r2, #9
    // mov r3, #4
    // bl AddTextWindowTopLeftCorner
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r0, r7, r0
    // mov r1, #0
    // bl FillWindowPixelBufferText_AssumeTileSize32
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r0, r7, r0
    // mov r1, #0x23
    // bl sub_02013910
    // mov r1, #2
    // lsl r1, r1, #8
    // str r0, [r7, r1]
    // ldr r0, [r7, r1]
    // mov r1, #1
    // bl sub_02013948
    // mov r1, #0x7f
    // mov r3, #0x23
    // add r2, r3, #0
    // lsl r1, r1, #2
    // str r0, [sp, #0x28]
    // ldr r0, [r7, r1]
    // add r2, #0xf8
    // str r0, [sp, #0x30]
    // add r0, r1, #0
    // add r0, #8
    // add r0, r7, r0
    // str r0, [sp, #0x34]
    // ldr r0, [r7, #0x24]
    // sub r1, #0x64
    // str r0, [sp, #0x38]
    // add r0, r7, r1
    // str r0, [sp, #0x3c]
    // mov r0, #3
    // mov r1, #1
    // str r0, [sp, #0x50]
    // mov r0, #0
    // str r1, [sp, #0x58]
    // mov r1, #0x1b
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r3, [sp, #0x5c]
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x20]
    // mov r0, #0x15
    // mov r1, #0x23
    // bl String_New
    // str r0, [sp, #0x24]
    // mov r0, #0x15
    // mov r1, #0x23
    // bl String_New
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x2c]
    // mov r0, #0x86
    // lsl r0, r0, #2
    // add r0, r7, r0
    // str r0, [sp, #0x18]
    // mov r0, #0x18
    // str r7, [sp, #0x14]
    // str r0, [sp, #0x10]
    // mov r1, #1
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x18]
    // add r2, r1, #0
    // bl sub_02021AC8
    // mov r1, #0x87
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // ldr r1, [sp, #0x2c]
    // str r0, [sp, #0x44]
    // mov r0, #0
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // add r1, #0xb
    // bl ReadMsgDataIntoString
    // ldr r0, [sp, #0x24]
    // bl String_CountLines
    // str r0, [sp, #0x1c]
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r0, r7, r0
    // mov r1, #0
    // bl FillWindowPixelBufferText_AssumeTileSize32
    // ldr r0, [sp, #0x1c]
    // mov r6, #0
    // lsl r1, r0, #4
    // mov r0, #0x20
    // sub r0, r0, r1
    // lsr r5, r0, #1
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0
    // bls _021E9308
    // ldr r1, [sp, #0x24]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl String_GetLineN
    // mov r0, #4
    // add r1, r4, #0
    // mov r2, #0
    // mov r3, #0x48
    // bl FontID_String_GetCenterAlignmentX
    // add r3, r0, #0
    // str r5, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021E9378 ; =0x000E0F00
    // mov r1, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #0x81
    // lsl r0, r0, #2
    // add r0, r7, r0
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x1c]
    // add r6, r6, #1
    // add r5, #0x10
    // cmp r6, r0
    // blo _021E92CA
    // mov r1, #2
    // lsl r1, r1, #8
    // ldr r1, [r7, r1]
    // add r0, sp, #0x30
    // bl TextOBJ_Create
    // mov r2, #0x85
    // ldr r1, [sp, #0x14]
    // lsl r2, r2, #2
    // str r0, [r1, r2]
    // add r0, r1, #0
    // ldr r0, [r0, r2]
    // mov r1, #1
    // bl TextOBJ_SetSpritesDrawFlag
    // mov r1, #0x85
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bl TextOBJ_SetPaletteNum
    // mov r1, #0x85
    // ldr r0, [sp, #0x14]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // ldr r1, [sp, #0x10]
    // mov r2, #6
    // bl sub_020136B4
    // ldr r0, [sp, #0x18]
    // add r0, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x88
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // add r0, r0, #1
    // str r0, [sp, #0x2c]
    // cmp r0, #2
    // blt _021E927E
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [sp, #0x24]
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // bl DestroyMsgData
    // add sp, #0x60
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021E9378: .word 0x000E0F00
    // TODO: decompile
}


void ov102_021E937C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #0x86
    // mov r6, #0
    // lsl r1, r1, #2
    // str r0, [sp]
    // add r4, r0, #0
    // add r5, r0, r1
    // add r7, r6, #0
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl TextOBJ_Destroy
    // add r0, r5, #0
    // bl sub_02021B5C
    // mov r0, #0x85
    // lsl r0, r0, #2
    // str r7, [r4, r0]
    // add r6, r6, #1
    // add r4, #0x10
    // add r5, #0x10
    // cmp r6, #2
    // blt _021E938C
    // add r1, r0, #0
    // ldr r0, [sp]
    // sub r1, #0x14
    // ldr r0, [r0, r1]
    // bl sub_02013938
    // mov r1, #0x81
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // add r0, r0, r1
    // bl RemoveWindow
    // mov r1, #0x7f
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // bl sub_020135AC
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov102_021E93D4(void) {
    SysTask_CreateOnVBlankQueue();
}


void ov102_021E93DC(void) {
    // bx lr
    // TODO: decompile
}


void ov102_021E93E0(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #0x20]
    // bl DoScheduledBgGpuUpdates
    // ldr r0, [r4, #0x24]
    // bl SpriteList_RenderAndAnimateSprites
    // bl OamManager_ApplyAndResetBuffers
    // ldr r3, _021E9404 ; =0x027E0000
    // ldr r1, _021E9408 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _021E9404: .word 0x027E0000
    // _021E9408: .word 0x00003FF8
    // TODO: decompile
}


void ov102_021E940C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // cmp r6, #0x20
    // bhs _021E945A
    // mov r0, #0x23
    // mov r1, #0x18
    // bl Heap_Alloc
    // add r1, r0, #0
    // beq _021E945E
    // mov r4, #0
    // str r4, [r1, #0x14]
    // str r6, [r1, #0xc]
    // str r5, [r1]
    // ldr r0, [r5, #0x18]
    // add r2, r5, #0
    // str r0, [r1, #4]
    // ldr r0, [r5, #0x1c]
    // str r0, [r1, #8]
    // ldr r0, [r2, #8]
    // cmp r0, #0
    // bne _021E9450
    // ldr r0, _021E9460 ; =ov102_021EC788
    // lsl r2, r6, #2
    // ldr r0, [r0, r2]
    // mov r2, #1
    // str r4, [r1, #0x10]
    // bl SysTask_CreateOnMainQueue
    // lsl r1, r4, #2
    // add r1, r5, r1
    // str r0, [r1, #8]
    // pop {r4, r5, r6, pc}
    // add r4, r4, #1
    // add r2, r2, #4
    // cmp r4, #4
    // blt _021E9434
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // _021E9460: .word ov102_021EC788
    // TODO: decompile
}


void ov102_021E9464(void) {
    // mov r2, #0
    // ldr r1, [r0, #8]
    // cmp r1, #0
    // beq _021E9470
    // mov r0, #0
    // bx lr
    // add r2, r2, #1
    // add r0, r0, #4
    // cmp r2, #4
    // blt _021E9466
    // mov r0, #1
    // bx lr
    // TODO: decompile
}


void ov102_021E947C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r4, #0
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _021E9498
    // bl SysTask_GetData
    // ldr r0, [r0, #0xc]
    // cmp r0, r6
    // bne _021E9498
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _021E9484
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov102_021E94A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // ldr r0, [r0, #8]
    // bl SysTask_Destroy
    // ldr r0, [r4, #0x10]
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // mov r2, #0
    // add r0, r1, r0
    // str r2, [r0, #8]
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021E94CC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r1, #1
    // lsl r1, r1, #0x1a
    // ldr r0, [r1]
    // ldr r2, _021E95D0 ; =0xFFFFE0FF
    // and r0, r2
    // str r0, [r1]
    // ldr r0, _021E95D4 ; =0x04001000
    // ldr r3, [r0]
    // and r2, r3
    // str r2, [r0]
    // ldr r2, [r1]
    // ldr r3, _021E95D8 ; =0xFFCFFFEF
    // add r5, r2, #0
    // ldr r2, _021E95DC ; =0x00100010
    // and r5, r3
    // orr r2, r5
    // str r2, [r1]
    // ldr r1, [r0]
    // add r2, r1, #0
    // and r2, r3
    // mov r1, #0x10
    // orr r1, r2
    // str r1, [r0]
    // mov r0, #0x4c
    // mov r1, #0x23
    // bl NARC_New
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov102_021E978C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov102_021E95E0
    // ldr r0, [r4]
    // bl ov102_021E91C4
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // bl ov102_021EA314
    // mov r1, #0x1e
    // ldr r2, [r4]
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, r1]
    // add r1, r5, #0
    // bl ov102_021EA41C
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // bl ov102_021EB1A4
    // mov r1, #0x79
    // ldr r2, [r4]
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, r1]
    // add r1, r5, #0
    // bl ov102_021EB1F8
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // bl ov102_021EB694
    // mov r1, #0x7a
    // ldr r2, [r4]
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, r1]
    // add r1, r5, #0
    // bl ov102_021EB6E0
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // bl ov102_021EBC34
    // mov r1, #0x7b
    // ldr r2, [r4]
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, r1]
    // bl ov102_021EBD00
    // ldr r0, [r4]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // bl ov102_021EC20C
    // mov r1, #0x1f
    // ldr r2, [r4]
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, r1]
    // add r1, r5, #0
    // bl ov102_021EC248
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // bl GX_DispOn
    // add r0, r5, #0
    // bl NARC_Delete
    // add r0, r4, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // _021E95D0: .word 0xFFFFE0FF
    // _021E95D4: .word 0x04001000
    // _021E95D8: .word 0xFFCFFFEF
    // _021E95DC: .word 0x00100010
    // TODO: decompile
}


void ov102_021E95E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // ldr r4, [r0]
    // mov r0, #0x66
    // lsl r0, r0, #2
    // add r5, r1, #0
    // add r1, r4, r0
    // str r1, [sp, #0x1c]
    // add r1, r0, #0
    // sub r1, #0x48
    // add r7, r4, r1
    // add r1, r0, #0
    // add r1, #0x28
    // add r0, #0x30
    // add r1, r4, r1
    // add r0, r4, r0
    // mov r6, #0
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // bl NNS_G2dInitImagePaletteProxy
    // add r0, r7, #0
    // bl NNS_G2dInitImageProxy
    // mov r0, #0
    // str r0, [sp]
    // add r0, r6, #1
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // mov r1, #9
    // mov r2, #1
    // mov r3, #0
    // str r7, [sp, #0x10]
    // bl GfGfxLoader_LoadImageMappingFromOpenNarc
    // mov r0, #0x23
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xa
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, r6, #1
    // mov r3, #0
    // bl GfGfxLoader_PartiallyLoadPaletteFromOpenNarc
    // mov r0, #0x23
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    // add r0, r5, #0
    // mov r1, #7
    // mov r2, #1
    // bl GfGfxLoader_GetCellBankFromOpenNarc
    // mov r1, #0x1d
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #0x23
    // str r0, [sp]
    // ldr r3, [sp, #0x14]
    // add r0, r5, #0
    // mov r1, #8
    // mov r2, #1
    // bl GfGfxLoader_GetAnimBankFromOpenNarc
    // mov r1, #0x76
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x1c]
    // add r6, r6, #1
    // add r0, #0x14
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r7, #0x24
    // add r0, r0, #4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r4, r4, #4
    // add r0, r0, #4
    // str r0, [sp, #0x14]
    // cmp r6, #2
    // blt _021E9606
    // bl sub_0203A964
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov102_021E9694(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r1, #0
    // ldr r0, [r6, #0x14]
    // ldr r7, [r6]
    // cmp r0, #0
    // beq _021E96AA
    // cmp r0, #1
    // beq _021E96CC
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x23
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r6, #0x14]
    // add sp, #0xc
    // add r0, r0, #1
    // str r0, [r6, #0x14]
    // pop {r4, r5, r6, r7, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021E9784
    // mov r0, #0x1e
    // ldr r1, [r6]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov102_021EA380
    // mov r0, #0x79
    // ldr r1, [r6]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl ov102_021EB1E0
    // mov r0, #0x7a
    // ldr r1, [r6]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl ov102_021EB6C8
    // mov r0, #0x7b
    // ldr r1, [r6]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl ov102_021EBCBC
    // mov r0, #0x1f
    // ldr r1, [r6]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov102_021EC240
    // ldr r0, [r6]
    // bl ov102_021E937C
    // mov r4, #0
    // add r5, r7, #0
    // mov r0, #0x1d
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021E9728
    // bl Heap_Free
    // mov r0, #0x76
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // beq _021E9736
    // bl Heap_Free
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #2
    // blt _021E971A
    // mov r0, #2
    // bl FontID_Release
    // ldr r0, [r7, #0x20]
    // mov r1, #0
    // bl FreeBgTilemapBuffer
    // ldr r0, [r7, #0x20]
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // ldr r0, [r7, #0x20]
    // mov r1, #2
    // bl FreeBgTilemapBuffer
    // ldr r0, [r7, #0x20]
    // mov r1, #3
    // bl FreeBgTilemapBuffer
    // ldr r0, [r7, #0x20]
    // mov r1, #4
    // bl FreeBgTilemapBuffer
    // ldr r0, [r7, #0x20]
    // mov r1, #5
    // bl FreeBgTilemapBuffer
    // ldr r2, _021E9788 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // add r0, r6, #0
    // bl ov102_021E94A4
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021E9788: .word 0x04000304
    // TODO: decompile
}


void ov102_021E978C(void) {
    // push {r3, r4, r5, lr}
    // ldr r2, _021E9814 ; =0x04000304
    // ldr r5, [r0]
    // ldrh r1, [r2]
    // ldr r0, _021E9818 ; =0xFFFF7FFF
    // and r0, r1
    // strh r0, [r2]
    // mov r0, #1
    // mov r1, #0
    // add r2, r0, #0
    // bl GX_SetGraphicsMode
    // ldr r0, _021E981C ; =ov102_021EC760
    // bl GfGfx_SetBanks
    // ldr r0, _021E9820 ; =ov102_021EC6A8
    // bl SetBothScreensModesAndDisable
    // mov r1, #0
    // ldr r0, [r5, #0x20]
    // ldr r2, _021E9824 ; =ov102_021EC728
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #0x20]
    // ldr r2, _021E9828 ; =ov102_021EC6D4
    // mov r1, #1
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #0x20]
    // ldr r2, _021E982C ; =ov102_021EC6B8
    // mov r1, #2
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #0x20]
    // ldr r2, _021E9830 ; =ov102_021EC70C
    // mov r1, #3
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #0x20]
    // ldr r2, _021E9834 ; =ov102_021EC744
    // mov r1, #4
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #0x20]
    // ldr r2, _021E9838 ; =ov102_021EC6F0
    // mov r1, #5
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r4, #0
    // lsl r1, r4, #0x18
    // ldr r0, [r5, #0x20]
    // lsr r1, r1, #0x18
    // bl BgClearTilemapBufferAndCommit
    // add r4, r4, #1
    // cmp r4, #6
    // blt _021E97FA
    // mov r0, #2
    // mov r1, #0x23
    // bl FontID_Alloc
    // pop {r3, r4, r5, pc}
    // _021E9814: .word 0x04000304
    // _021E9818: .word 0xFFFF7FFF
    // _021E981C: .word ov102_021EC760
    // _021E9820: .word ov102_021EC6A8
    // _021E9824: .word ov102_021EC728
    // _021E9828: .word ov102_021EC6D4
    // _021E982C: .word ov102_021EC6B8
    // _021E9830: .word ov102_021EC70C
    // _021E9834: .word ov102_021EC744
    // _021E9838: .word ov102_021EC6F0
    // TODO: decompile
}


void ov102_021E983C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _021E984E
    // cmp r0, #1
    // beq _021E986E
    // b _021E9880
    // mov r0, #5
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x23
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #0x14]
    // add sp, #0xc
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // pop {r3, r4, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021E9886
    // ldr r0, [r4, #0x14]
    // add sp, #0xc
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // pop {r3, r4, pc}
    // add r0, r4, #0
    // bl ov102_021E94A4
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov102_021E988C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r0, #0x1e
    // ldr r4, [r5]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAA3C
    // ldr r0, [r5, #4]
    // bl ov102_021E8FC0
    // add r1, r0, #0
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAFF0
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E98B8(void) {
    ov102_021E94A4();
}


void ov102_021E98C4(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // mov r0, #0x7a
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov102_021EB98C
    // add r0, r4, #0
    // bl ov102_021E94A4
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021E98E0(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // mov r0, #0x7b
    // ldr r1, [r4]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov102_021EBEF4
    // add r0, r4, #0
    // bl ov102_021E94A4
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021E98FC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r0, #0x7d
    // ldr r4, [r5]
    // mov r1, #1
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // sub r0, #0x14
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EAF5C
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAF7C
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EB524
    // ldr r0, [r4, #0x18]
    // bl ov102_021E8FC8
    // add r1, r0, #0
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB530
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9944(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r0, #0x7d
    // ldr r4, [r5]
    // mov r1, #0
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // sub r0, #0x10
    // ldr r0, [r4, r0]
    // bl ov102_021EB524
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAFAC
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EAF5C
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9978(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x14]
    // ldr r4, [r5]
    // cmp r0, #0
    // beq _021E998A
    // cmp r0, #1
    // beq _021E99DE
    // pop {r4, r5, r6, pc}
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAF44
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAF7C
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EADF8
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EAE40
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB664
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBA44
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EA71C
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r4, r5, r6, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBA5C
    // add r6, r0, #0
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EA754
    // cmp r6, #0
    // beq _021E9A20
    // cmp r0, #0
    // beq _021E9A20
    // ldr r0, [r4, #0x18]
    // bl ov102_021E8FD0
    // add r1, r0, #0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB9C0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EB98C
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov102_021E9A24(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x14]
    // ldr r4, [r5]
    // cmp r0, #0
    // beq _021E9A3A
    // cmp r0, #1
    // beq _021E9A4C
    // cmp r0, #2
    // beq _021E9A5E
    // pop {r3, r4, r5, pc}
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB624
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBBF4
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBC28
    // cmp r0, #0
    // beq _021E9A8A
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB654
    // cmp r0, #0
    // beq _021E9A8A
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBBD0
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9A8C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x14]
    // ldr r4, [r5]
    // cmp r0, #3
    // bhi _021E9B2E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9AA4: ; jump table
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB624
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EB98C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBBF4
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBC28
    // cmp r0, #0
    // beq _021E9B2E
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBBD0
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB654
    // cmp r0, #0
    // beq _021E9B2E
    // ldr r0, [r4, #0x18]
    // bl ov102_021E8FD0
    // add r1, r0, #0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB9C0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EB98C
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9B30(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x14]
    // ldr r4, [r5]
    // cmp r0, #0
    // beq _021E9B42
    // cmp r0, #1
    // beq _021E9B8E
    // pop {r4, r5, r6, pc}
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB67C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EB98C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBAAC
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EADF8
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EAE40
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EA71C
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r4, r5, r6, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBAD0
    // add r6, r0, #0
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EA754
    // cmp r6, #0
    // beq _021E9BCE
    // cmp r0, #0
    // beq _021E9BCE
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAFAC
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAF50
    // mov r0, #0x7d
    // mov r1, #0
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov102_021E9BD0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x14]
    // ldr r4, [r5]
    // cmp r0, #0
    // beq _021E9BE6
    // cmp r0, #1
    // beq _021E9C0E
    // cmp r0, #2
    // beq _021E9C2E
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBDEC
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EB98C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB50
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB6C
    // cmp r0, #0
    // beq _021E9C6C
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBE3C
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBE80
    // cmp r0, #0
    // beq _021E9C6C
    // ldr r0, [r4, #0x18]
    // bl ov102_021E9028
    // add r1, r0, #0
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBF38
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EBEF4
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EC290
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9C70(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x14]
    // ldr r4, [r5]
    // cmp r0, #4
    // bhi _021E9D40
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9C88: ; jump table
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB624
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EBEF4
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EC290
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBEA4
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBEC8
    // cmp r0, #0
    // beq _021E9D40
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBBD0
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB88
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBBC4
    // cmp r0, #0
    // beq _021E9D40
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB654
    // cmp r0, #0
    // beq _021E9D40
    // ldr r0, [r4, #0x18]
    // bl ov102_021E8FD0
    // add r1, r0, #0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB9C0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EB98C
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9D44(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x14]
    // ldr r4, [r5]
    // cmp r0, #3
    // bls _021E9D52
    // b _021E9E5E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9D5E: ; jump table
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB67C
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EBEF4
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EC290
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBEA4
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EADF8
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EAE40
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EA71C
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r4, r5, r6, pc}
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBEC8
    // add r6, r0, #0
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EA754
    // cmp r6, #0
    // beq _021E9E5E
    // cmp r0, #0
    // beq _021E9E5E
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB1C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB88
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r4, r5, r6, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBBC4
    // cmp r0, #0
    // beq _021E9E5E
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB2C
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r4, r5, r6, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB44
    // cmp r0, #0
    // beq _021E9E5E
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAA3C
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EAF5C
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAFAC
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAF50
    // mov r0, #0x7d
    // mov r1, #0
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov102_021E9E60(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x14]
    // ldr r4, [r5]
    // cmp r0, #3
    // bhi _021E9F34
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9E78: ; jump table
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB67C
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EBEF4
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EC290
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBEA4
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBEC8
    // cmp r0, #0
    // beq _021E9F34
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB1C
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB88
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBBC4
    // cmp r0, #0
    // beq _021E9F34
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB2C
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBB44
    // cmp r0, #0
    // beq _021E9F34
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAA3C
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EAF5C
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EB524
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9F38(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // ldr r4, [r6]
    // ldr r0, [r4, #0x18]
    // bl ov102_021E8FC8
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // bne _021E9F7A
    // mov r0, #0x7d
    // mov r1, #0
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // sub r0, #0x10
    // ldr r0, [r4, r0]
    // bl ov102_021EB524
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EAF5C
    // ldr r0, [r4, #0x18]
    // bl ov102_021E8FC0
    // add r1, r0, #0
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAFF0
    // b _021E9FA4
    // mov r0, #0x7d
    // mov r1, #1
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // sub r0, #0x14
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EAF5C
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EB524
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // bl ov102_021EB530
    // add r0, r6, #0
    // bl ov102_021E94A4
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov102_021E9FAC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r4, [r5]
    // ldr r0, [r4, #0x18]
    // bl ov102_021E8FC8
    // add r1, r0, #0
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB530
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9FCC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r4, [r5]
    // ldr r0, [r4, #0x18]
    // bl ov102_021E8FD0
    // add r1, r0, #0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB9C0
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021E9FEC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r4, [r5]
    // ldr r0, [r4, #0x18]
    // bl ov102_021E9028
    // add r1, r0, #0
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBF38
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EA00C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #0x14]
    // ldr r4, [r5]
    // cmp r0, #0
    // beq _021EA01E
    // cmp r0, #1
    // beq _021EA038
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x18]
    // bl ov102_021E9044
    // add r1, r0, #0
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EBFA0
    // ldr r0, [r5, #0x14]
    // add r0, r0, #1
    // str r0, [r5, #0x14]
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EC05C
    // cmp r0, #0
    // beq _021EA058
    // mov r0, #0x1f
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov102_021EC290
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EA05C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // mov r0, #0x1e
    // ldr r1, [r4]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ov102_021EAE40
    // add r0, r4, #0
    // bl ov102_021E94A4
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EA078(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r0, #0x1e
    // ldr r4, [r5]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #2
    // bl ov102_021EAE40
    // mov r0, #0x79
    // ldr r1, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // add r2, r1, #0
    // bl ov102_021EB2EC
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // ldrb r1, [r4, r0]
    // cmp r1, #1
    // bne _021EA0AE
    // sub r0, #0x10
    // ldr r0, [r4, r0]
    // bl ov102_021EB50C
    // b _021EA0B6
    // sub r0, #0x14
    // ldr r0, [r4, r0]
    // bl ov102_021EAF44
    // ldr r0, [r5, #4]
    // bl ov102_021E9090
    // add r1, r0, #0
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EB0C0
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EA0D0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r0, #0x1e
    // ldr r4, [r5]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl ov102_021EAE40
    // mov r0, #0x79
    // ldr r1, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // add r2, r1, #0
    // bl ov102_021EB2EC
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // ldrb r1, [r4, r0]
    // cmp r1, #1
    // bne _021EA106
    // sub r0, #0x10
    // ldr r0, [r4, r0]
    // bl ov102_021EB50C
    // b _021EA10E
    // sub r0, #0x14
    // ldr r0, [r4, r0]
    // bl ov102_021EAF44
    // ldr r0, [r5, #4]
    // bl ov102_021E9090
    // add r1, r0, #0
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EB0C0
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EA128(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // mov r0, #0x1e
    // ldr r1, [r4]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov102_021EAE40
    // add r0, r4, #0
    // bl ov102_021E94A4
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EA144(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // ldr r0, [r5, #4]
    // ldr r4, [r5]
    // bl ov102_021E9090
    // add r1, r0, #0
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EB170
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EA164(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // mov r0, #0x1e
    // ldr r4, [r5]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov102_021EAE40
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // ldrb r1, [r4, r0]
    // cmp r1, #1
    // bne _021EA198
    // sub r0, #0x10
    // mov r1, #1
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl ov102_021EB2EC
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov102_021EB518
    // b _021EA1AE
    // sub r0, #0x10
    // ldr r0, [r4, r0]
    // mov r1, #1
    // mov r2, #0
    // bl ov102_021EB2EC
    // mov r0, #0x1e
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov102_021EAF50
    // add r0, r5, #0
    // bl ov102_021E94A4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EA1B8(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // mov r0, #0x1f
    // ldr r1, [r4]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // mov r2, #1
    // bl ov102_021EC294
    // add r0, r4, #0
    // bl ov102_021E94A4
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EA1D4(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // mov r0, #0x1f
    // ldr r1, [r4]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // add r2, r1, #0
    // bl ov102_021EC294
    // add r0, r4, #0
    // bl ov102_021E94A4
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EA1F0(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // mov r0, #0x1f
    // ldr r1, [r4]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // add r2, r1, #0
    // bl ov102_021EC294
    // add r0, r4, #0
    // bl ov102_021E94A4
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EA20C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // mov r0, #0x1f
    // ldr r1, [r4]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // mov r2, #0
    // bl ov102_021EC294
    // add r0, r4, #0
    // bl ov102_021E94A4
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EA228(void) {
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // ldr r3, _021EA234 ; =ov102_021EAFEC
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021EA234: .word ov102_021EAFEC
    // TODO: decompile
}


void ov102_021EA238(void) {
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // ldr r3, _021EA244 ; =ov102_021EADF0
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021EA244: .word ov102_021EADF0
    // TODO: decompile
}


void ov102_021EA248(void) {
    // mov r3, #0x1e
    // lsl r3, r3, #4
    // ldr r0, [r0, r3]
    // ldr r3, _021EA254 ; =ov102_021EAB10
    // bx r3
    // nop
    // _021EA254: .word ov102_021EAB10
    // TODO: decompile
}


void ov102_021EA258(void) {
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // ldr r3, _021EA264 ; =ov102_021EB130
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021EA264: .word ov102_021EB130
    // TODO: decompile
}


void ov102_021EA268(void) {
    // ldr r0, [r0, #0x20]
    // bx lr
    // TODO: decompile
}


void ov102_021EA26C(void) {
    // ldr r0, [r0, #0x24]
    // bx lr
    // TODO: decompile
}


void ov102_021EA270(void) {
    // push {r3, r4, r5, r6}
    // mov r4, #0x15
    // lsl r4, r4, #4
    // mov r5, #0x24
    // add r6, r0, r4
    // mul r5, r2
    // add r5, r6, r5
    // str r5, [r1]
    // add r5, r4, #0
    // add r5, #0x48
    // add r6, r0, r5
    // mov r5, #0x14
    // mul r5, r2
    // lsl r2, r2, #2
    // add r5, r6, r5
    // add r2, r0, r2
    // add r0, r4, #0
    // str r5, [r1, #8]
    // add r0, #0x70
    // ldr r0, [r2, r0]
    // add r4, #0x78
    // str r0, [r1, #0xc]
    // ldr r0, [r2, r4]
    // str r0, [r1, #0x10]
    // add r0, r1, #0
    // add r0, #0x20
    // strb r3, [r0]
    // mov r0, #0
    // str r0, [r1, #4]
    // str r0, [r1, #0x14]
    // str r0, [r1, #0x18]
    // str r0, [r1, #0x1c]
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}


void ov102_021EA2B4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x20
    // ldr r0, [r0, #0x24]
    // str r0, [sp]
    // lsl r0, r2, #0xc
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x34]
    // lsl r2, r3, #0xc
    // str r0, [sp, #0x14]
    // mov r0, #0x23
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // cmp r1, #2
    // bne _021EA2E2
    // mov r0, #3
    // lsl r0, r0, #0x12
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // add r0, sp, #0
    // bl Sprite_Create
    // add r5, r0, #0
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // cmp r5, #0
    // beq _021EA30C
    // add r0, r5, #0
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl Sprite_SetAnimSpeed
    // add r0, r5, #0
    // add sp, #0x20
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EA314(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // mov r1, #0x7d
    // add r5, r0, #0
    // mov r0, #0x23
    // lsl r1, r1, #2
    // add r7, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // str r6, [r4, #4]
    // str r7, [r4, #8]
    // ldr r0, [r4, #4]
    // bl ov102_021E8F68
    // mov r1, #0x1f
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #0
    // str r0, [r4, #0x60]
    // str r0, [r4, #0x64]
    // str r0, [r4, #0x68]
    // str r0, [r4, #0x6c]
    // str r0, [r4, #0x70]
    // str r0, [r4, #0x74]
    // mov r0, #0x80
    // mov r1, #0x23
    // bl String_New
    // str r0, [r4, #0x7c]
    // ldr r2, _021EA37C ; =0x0000011B
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x23
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x78]
    // mov r0, #0x23
    // bl ListMenuCursorNew
    // add r1, r4, #0
    // add r1, #0x80
    // str r0, [r1]
    // mov r0, #0x1e
    // mov r1, #0
    // lsl r0, r0, #4
    // strh r1, [r4, r0]
    // add r0, r0, #2
    // strh r1, [r4, r0]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EA37C: .word 0x0000011B
    // TODO: decompile
}


void ov102_021EA380(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _021EA390
    // bl DestroyListMenuCursorObj
    // ldr r0, [r4, #0x60]
    // cmp r0, #0
    // beq _021EA39A
    // bl Sprite_Delete
    // ldr r0, [r4, #0x64]
    // cmp r0, #0
    // beq _021EA3A4
    // bl Sprite_Delete
    // ldr r0, [r4, #0x68]
    // cmp r0, #0
    // beq _021EA3AE
    // bl Sprite_Delete
    // ldr r0, [r4, #0x6c]
    // cmp r0, #0
    // beq _021EA3B8
    // bl Sprite_Delete
    // ldr r0, [r4, #0x70]
    // cmp r0, #0
    // beq _021EA3C2
    // bl Sprite_Delete
    // ldr r0, [r4, #0x74]
    // cmp r0, #0
    // beq _021EA3CC
    // bl Sprite_Delete
    // ldr r0, [r4, #0x78]
    // cmp r0, #0
    // beq _021EA3D6
    // bl DestroyMsgData
    // ldr r0, [r4, #0x7c]
    // cmp r0, #0
    // beq _021EA3E0
    // bl String_Delete
    // add r0, r4, #0
    // add r0, #0xc
    // bl RemoveWindow
    // add r0, r4, #0
    // add r0, #0x1c
    // bl RemoveWindow
    // add r0, r4, #0
    // add r0, #0x2c
    // bl RemoveWindow
    // add r0, r4, #0
    // add r0, #0x3c
    // bl RemoveWindow
    // add r0, r4, #0
    // add r0, #0x4c
    // bl RemoveWindow
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EA41C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // bl ov102_021EA268
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021EA80C
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r2, r6, #0
    // add r3, r1, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #4
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0xbf
    // ldr r3, _021EA63C ; =0x000001E2
    // mvn r0, r0
    // strh r0, [r5, r3]
    // ldrsh r3, [r5, r3]
    // add r0, r6, #0
    // mov r1, #4
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r7, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r1, #1
    // str r1, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r2, r6, #0
    // mov r3, #4
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // add r1, r5, #0
    // lsr r4, r7, #5
    // str r0, [sp, #8]
    // mov r2, #0
    // lsl r0, r4, #0x10
    // str r2, [sp, #0xc]
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // add r0, r6, #0
    // add r1, #0xc
    // mov r3, #3
    // bl AddWindowParameterized
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r2, #4
    // add r1, r5, #0
    // str r2, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // add r0, r6, #0
    // add r1, #0x1c
    // mov r3, #3
    // bl AddWindowParameterized
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r3, #2
    // add r1, r5, #0
    // str r3, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x6c
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // add r0, r6, #0
    // add r1, #0x2c
    // mov r2, #0
    // bl AddWindowParameterized
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #0x13
    // str r0, [sp, #4]
    // mov r3, #2
    // add r1, r5, #0
    // str r3, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x6c
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // add r0, r6, #0
    // add r1, #0x3c
    // mov r2, #0
    // bl AddWindowParameterized
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0xa2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // add r1, r5, #0
    // str r0, [sp, #0x10]
    // add r0, r6, #0
    // add r1, #0x4c
    // mov r2, #0
    // mov r3, #0x19
    // bl AddWindowParameterized
    // add r1, r4, #0
    // ldr r0, _021EA640 ; =0x000001EE
    // add r1, #0xa2
    // strh r1, [r5, r0]
    // mov r0, #0x23
    // bl YesNoPrompt_Create
    // mov r1, #0x7a
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r4, #0
    // add r0, #0xde
    // str r0, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // mov r0, #0x26
    // add r2, r6, #0
    // add r3, r1, #0
    // bl GfGfxLoader_LoadCharData
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0xde
    // add r0, #0x90
    // str r1, [r0]
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x23
    // mov r3, #7
    // str r0, [sp, #4]
    // mov r0, #0x26
    // mov r1, #0x19
    // mov r2, #0
    // lsl r3, r3, #6
    // bl GfGfxLoader_GXLoadPal
    // add r1, r4, #0
    // mov r0, #0x7b
    // add r1, #0xe7
    // lsl r0, r0, #2
    // strh r1, [r5, r0]
    // ldr r0, [r5, #4]
    // bl ov102_021E9084
    // lsl r0, r0, #0x18
    // add r2, r4, #0
    // lsr r0, r0, #0x18
    // add r2, #0xe7
    // str r0, [sp]
    // mov r0, #0x23
    // lsl r2, r2, #0x10
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // lsr r2, r2, #0x10
    // mov r3, #0xf
    // bl LoadUserFrameGfx2
    // add r0, r5, #0
    // add r4, #0xe7
    // add r0, #0x2c
    // add r1, r4, #0
    // mov r2, #0xf
    // str r0, [r5, #0x5c]
    // bl sub_0200E948
    // add r0, r5, #0
    // add r0, #0xc
    // bl PutWindowTilemap
    // add r0, r5, #0
    // add r0, #0x1c
    // bl PutWindowTilemap
    // add r0, r5, #0
    // add r0, #0x2c
    // bl PutWindowTilemap
    // add r0, r5, #0
    // add r0, #0x3c
    // bl PutWindowTilemap
    // add r0, r5, #0
    // bl ov102_021EA8C0
    // add r0, r5, #0
    // bl ov102_021EAA3C
    // add r0, r5, #0
    // mov r1, #0
    // bl ov102_021EAE40
    // add r0, r5, #0
    // bl ov102_021EA920
    // ldr r0, [r5, #4]
    // bl ov102_021E8F6C
    // cmp r0, #2
    // bne _021EA636
    // add r0, r5, #0
    // bl ov102_021EAC20
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021EA63C: .word 0x000001E2
    // _021EA640: .word 0x000001EE
    // TODO: decompile
}


void ov102_021EA644(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // bl ov102_021EA268
    // ldr r1, _021EA674 ; =0x04000006
    // ldrh r1, [r1]
    // cmp r1, #0x30
    // bge _021EA666
    // mov r3, #0x1e
    // lsl r3, r3, #4
    // ldrsh r3, [r4, r3]
    // mov r1, #0
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // pop {r4, pc}
    // mov r1, #0
    // mov r2, #3
    // add r3, r1, #0
    // bl BgSetPosTextAndCommit
    // pop {r4, pc}
    // nop
    // _021EA674: .word 0x04000006
    // TODO: decompile
}


void ov102_021EA678(void) {
    // push {r3, r4}
    // ldr r2, _021EA70C ; =0x0400004A
    // mov r3, #0x3f
    // ldrh r0, [r2]
    // mov r4, #0x1f
    // bic r0, r3
    // orr r0, r4
    // strh r0, [r2]
    // cmp r1, #0
    // beq _021EA6D2
    // sub r0, r2, #2
    // ldrh r4, [r0]
    // mov r1, #0x1a
    // bic r4, r3
    // orr r1, r4
    // strh r1, [r0]
    // ldrh r3, [r0]
    // ldr r1, _021EA710 ; =0xFFFFC0FF
    // and r3, r1
    // mov r1, #0x1b
    // lsl r1, r1, #8
    // orr r1, r3
    // strh r1, [r0]
    // add r0, r2, #0
    // mov r3, #0xff
    // sub r0, #0xa
    // strh r3, [r0]
    // mov r0, #0x30
    // sub r1, r2, #6
    // strh r0, [r1]
    // add r1, r2, #0
    // sub r1, #8
    // strh r3, [r1]
    // sub r1, r2, #4
    // ldr r3, _021EA714 ; =0x0000A0C0
    // sub r2, #0x4a
    // strh r3, [r1]
    // ldr r3, [r2]
    // ldr r1, _021EA718 ; =0xFFFF1FFF
    // lsl r0, r0, #9
    // and r1, r3
    // orr r0, r1
    // str r0, [r2]
    // pop {r3, r4}
    // bx lr
    // sub r0, r2, #2
    // ldrh r1, [r0]
    // bic r1, r3
    // orr r1, r4
    // strh r1, [r0]
    // ldrh r3, [r0]
    // ldr r1, _021EA710 ; =0xFFFFC0FF
    // and r3, r1
    // lsl r1, r4, #8
    // orr r1, r3
    // strh r1, [r0]
    // add r0, r2, #0
    // mov r1, #0
    // sub r0, #0xa
    // strh r1, [r0]
    // sub r0, r2, #6
    // strh r1, [r0]
    // add r0, r2, #0
    // sub r0, #8
    // strh r1, [r0]
    // sub r0, r2, #4
    // strh r1, [r0]
    // sub r2, #0x4a
    // ldr r1, [r2]
    // ldr r0, _021EA718 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // pop {r3, r4}
    // bx lr
    // _021EA70C: .word 0x0400004A
    // _021EA710: .word 0xFFFFC0FF
    // _021EA714: .word 0x0000A0C0
    // _021EA718: .word 0xFFFF1FFF
    // TODO: decompile
}


void ov102_021EA71C(void) {
    // add r2, r0, #0
    // mov r0, #0x79
    // mov r3, #0
    // lsl r0, r0, #2
    // strb r3, [r2, r0]
    // add r3, r0, #1
    // strb r1, [r2, r3]
    // add r0, r0, #1
    // ldrb r0, [r2, r0]
    // cmp r0, #1
    // bne _021EA740
    // ldr r1, _021EA748 ; =0x04000048
    // mov r0, #0x3f
    // ldrh r3, [r1]
    // bic r3, r0
    // mov r0, #0x1b
    // orr r0, r3
    // strh r0, [r1]
    // ldr r3, _021EA74C ; =Main_SetHBlankIntrCB
    // ldr r0, _021EA750 ; =ov102_021EA644
    // add r1, r2, #0
    // bx r3
    // _021EA748: .word 0x04000048
    // _021EA74C: .word Main_SetHBlankIntrCB
    // _021EA750: .word ov102_021EA644
    // TODO: decompile
}


void ov102_021EA754(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0x79
    // add r5, r0, #0
    // lsl r1, r1, #2
    // ldrb r2, [r5, r1]
    // cmp r2, #5
    // bls _021EA77C
    // add r1, r1, #1
    // ldrb r1, [r5, r1]
    // cmp r1, #0
    // bne _021EA772
    // mov r1, #1
    // bl ov102_021EA678
    // b _021EA778
    // mov r1, #0
    // bl ov102_021EA678
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, [r5]
    // bl ov102_021EA268
    // add r6, r0, #0
    // ldr r0, _021EA804 ; =0x000001E5
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // beq _021EA792
    // mov r4, #7
    // mvn r4, r4
    // b _021EA794
    // mov r4, #8
    // ldr r3, _021EA808 ; =0x000001E2
    // mov r2, #3
    // ldrsh r0, [r5, r3]
    // add r0, r0, r4
    // strh r0, [r5, r3]
    // sub r0, r3, #2
    // ldrsh r0, [r5, r0]
    // add r1, r0, r4
    // sub r0, r3, #2
    // strh r1, [r5, r0]
    // sub r3, r3, #2
    // ldrsh r3, [r5, r3]
    // add r0, r6, #0
    // mov r1, #0
    // bl BgSetPosTextAndCommit
    // ldr r3, _021EA808 ; =0x000001E2
    // add r0, r6, #0
    // ldrsh r3, [r5, r3]
    // mov r1, #4
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // neg r4, r4
    // lsl r2, r4, #0x10
    // ldr r0, [r5, #0x60]
    // mov r1, #0
    // asr r2, r2, #0x10
    // bl Sprite_OffsetPositionXY
    // lsl r2, r4, #0x10
    // ldr r0, [r5, #0x64]
    // mov r1, #0
    // asr r2, r2, #0x10
    // bl Sprite_OffsetPositionXY
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // add r1, r1, #1
    // strb r1, [r5, r0]
    // add r1, r0, #1
    // ldrb r1, [r5, r1]
    // cmp r1, #0
    // beq _021EA800
    // ldrb r0, [r5, r0]
    // cmp r0, #6
    // bne _021EA800
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetHBlankIntrCB
    // bl HBlankInterruptDisable
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _021EA804: .word 0x000001E5
    // _021EA808: .word 0x000001E2
    // TODO: decompile
}


void ov102_021EA80C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #7
    // lsl r0, r0, #6
    // add r5, r1, #0
    // str r0, [sp]
    // mov r0, #0x23
    // mov r2, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r0, #0x60
    // str r0, [sp]
    // mov r0, #0x23
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #0xd
    // mov r2, #4
    // mov r3, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // add r0, r5, #0
    // mov r1, #0x10
    // add r2, sp, #8
    // mov r3, #0x23
    // bl GfGfxLoader_GetPlttDataFromOpenNarc
    // add r5, r0, #0
    // ldr r0, [sp, #8]
    // add r1, r4, #0
    // mov r2, #5
    // ldr r0, [r0, #0xc]
    // add r1, #0xa0
    // lsl r2, r2, #6
    // bl MIi_CpuCopy16
    // add r4, #0xa0
    // mov r1, #5
    // add r0, r4, #0
    // lsl r1, r1, #6
    // bl DC_FlushRange
    // add r0, r5, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov102_021EA874(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl ov102_021E8F6C
    // cmp r0, #2
    // bne _021EA8A4
    // ldr r0, [r4, #4]
    // bl ov102_021E8F84
    // add r0, r0, #1
    // add r4, #0xa0
    // lsl r5, r0, #5
    // add r0, r4, r5
    // mov r1, #0
    // mov r2, #0x20
    // bl GX_LoadBGPltt
    // add r0, r4, r5
    // mov r1, #0
    // mov r2, #0x20
    // bl GXS_LoadBGPltt
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0xa0
    // mov r1, #0
    // mov r2, #0x20
    // bl GX_LoadBGPltt
    // add r4, #0xa0
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x20
    // bl GXS_LoadBGPltt
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EA8C0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl ov102_021E8F6C
    // cmp r0, #0
    // beq _021EA8D8
    // cmp r0, #1
    // beq _021EA8F0
    // cmp r0, #2
    // beq _021EA916
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x68
    // add r0, #0x84
    // strh r1, [r0]
    // add r0, r4, #0
    // mov r1, #0x10
    // add r0, #0x86
    // strh r1, [r0]
    // mov r0, #1
    // add r4, #0x8c
    // str r0, [r4]
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #0x30
    // add r0, #0x84
    // strh r1, [r0]
    // add r0, r4, #0
    // mov r2, #0x10
    // add r0, #0x86
    // strh r2, [r0]
    // add r0, r4, #0
    // mov r1, #0xa0
    // add r0, #0x88
    // strh r1, [r0]
    // add r0, r4, #0
    // add r0, #0x8a
    // strh r2, [r0]
    // mov r0, #2
    // add r4, #0x8c
    // str r0, [r4]
    // pop {r4, pc}
    // mov r0, #0
    // add r4, #0x8c
    // str r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EA920(void) {
    // push {r4, r5, lr}
    // sub sp, #0x54
    // add r4, r0, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _021EA93A
    // add r0, r4, #0
    // add r0, #0x84
    // add r1, sp, #8
    // bl ov102_021EAD5C
    // b _021EA944
    // mov r1, #0x80
    // add r0, sp, #8
    // strh r1, [r0]
    // mov r1, #0x18
    // strh r1, [r0, #2]
    // mov r2, #0
    // ldr r0, [r4]
    // add r1, sp, #0x30
    // add r3, r2, #0
    // bl ov102_021EA270
    // ldr r0, [r4]
    // add r1, sp, #0xc
    // mov r2, #1
    // mov r3, #0
    // bl ov102_021EA270
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r5, sp, #8
    // mov r3, #2
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // ldr r0, [r4]
    // add r1, sp, #0x30
    // bl ov102_021EA2B4
    // str r0, [r4, #0x60]
    // mov r2, #0
    // str r2, [sp]
    // mov r5, #2
    // str r5, [sp, #4]
    // add r3, sp, #8
    // ldrsh r2, [r3, r2]
    // ldrsh r5, [r3, r5]
    // ldr r3, _021EAA38 ; =0x000001E2
    // ldr r0, [r4]
    // ldrsh r3, [r4, r3]
    // add r1, sp, #0xc
    // sub r3, r5, r3
    // bl ov102_021EA2B4
    // mov r1, #1
    // str r0, [r4, #0x64]
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r4, #0
    // mov r1, #1
    // bl ov102_021EB088
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // add r1, sp, #0x30
    // mov r2, #8
    // mov r3, #0x40
    // bl ov102_021EA2B4
    // mov r1, #0x13
    // str r0, [r4, #0x68]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // add r1, sp, #0x30
    // mov r2, #0xf8
    // mov r3, #0x40
    // bl ov102_021EA2B4
    // mov r1, #0x15
    // str r0, [r4, #0x6c]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // add r1, sp, #0x30
    // mov r2, #0x1c
    // mov r3, #0x40
    // bl ov102_021EA2B4
    // mov r1, #0x12
    // str r0, [r4, #0x74]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // add r1, sp, #0x30
    // mov r2, #0x80
    // mov r3, #0x40
    // bl ov102_021EA2B4
    // str r0, [r4, #0x70]
    // mov r1, #0x17
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #4]
    // bl ov102_021E8F6C
    // cmp r0, #2
    // beq _021EAA34
    // ldr r0, [r4, #0x6c]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x68]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x70]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x74]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add sp, #0x54
    // pop {r4, r5, pc}
    // _021EAA38: .word 0x000001E2
    // TODO: decompile
}


void ov102_021EAA3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl ov102_021EA268
    // str r0, [sp]
    // add r0, r5, #0
    // bl ov102_021EA874
    // mov r0, #0
    // add r4, r5, #0
    // add r6, r5, #0
    // add r7, r5, #0
    // str r0, [sp, #4]
    // add r4, #0xc
    // add r6, #0x84
    // add r7, #0x88
    // add r0, r4, #0
    // mov r1, #0xd
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #4]
    // bl ov102_021E8F6C
    // cmp r0, #0
    // beq _021EAA7C
    // cmp r0, #1
    // beq _021EAA9A
    // cmp r0, #2
    // beq _021EAAD4
    // b _021EAAE8
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov102_021EAD70
    // ldr r0, [r5, #4]
    // mov r1, #0
    // bl ov102_021E8F90
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov102_021EAD98
    // b _021EAAE8
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov102_021EAD70
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov102_021EAD70
    // ldr r0, [r5, #4]
    // mov r1, #0
    // bl ov102_021E8F90
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov102_021EAD98
    // ldr r0, [r5, #4]
    // mov r1, #1
    // bl ov102_021E8F90
    // add r3, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov102_021EAD98
    // b _021EAAE8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021EAB30
    // add r1, r5, #0
    // add r1, #0x8c
    // str r0, [r1]
    // add r0, r5, #0
    // bl ov102_021EAC20
    // add r0, r4, #0
    // bl CopyWindowPixelsToVram_TextMode
    // ldr r0, [sp, #4]
    // add r4, #0x10
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #2
    // blt _021EAA60
    // ldr r0, [sp]
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [sp]
    // mov r1, #4
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov102_021EAB10(void) {
    // lsl r2, r2, #2
    // add r2, r0, r2
    // mov r0, #0x84
    // ldrsh r0, [r2, r0]
    // sub r0, #0x18
    // strb r0, [r1, #2]
    // ldrb r0, [r1, #2]
    // add r0, #0x60
    // strb r0, [r1, #3]
    // mov r0, #0x86
    // ldrsh r0, [r2, r0]
    // strb r0, [r1]
    // ldrb r0, [r1]
    // add r0, #0x10
    // strb r0, [r1, #1]
    // bx lr
    // TODO: decompile
}


void ov102_021EAB30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    // ldr r0, [r0, #4]
    // mov r1, #0x23
    // bl ov102_021E8FA8
    // mov r4, #0
    // str r0, [sp, #0x20]
    // mov r0, #1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r0, #0x94
    // str r4, [sp, #0x1c]
    // add r5, r4, #0
    // bl ov102_021EAC44
    // ldr r7, [sp, #0x10]
    // add r0, r7, #0
    // add r6, r7, #0
    // str r0, [sp, #0x24]
    // add r0, #0x94
    // add r6, #0x84
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    // bl ov102_021EAC7C
    // cmp r0, #3
    // bhi _021EABFC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAB7C: ; jump table
    // str r4, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021EAC18 ; =0x0003040D
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // mov r1, #1
    // add r3, r5, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r1, [sp, #0x20]
    // mov r0, #1
    // mov r2, #0
    // bl FontID_String_GetWidth
    // add r5, r5, r0
    // b _021EABFC
    // add r1, r5, #0
    // add r0, r7, #0
    // add r1, #0x32
    // add r0, #0x84
    // strh r1, [r0]
    // add r1, r4, #0
    // add r0, r7, #0
    // add r1, #8
    // add r0, #0x86
    // strh r1, [r0]
    // ldr r0, [sp, #0x14]
    // add r1, r6, #0
    // bl ov102_021EAD70
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r0, #4]
    // bl ov102_021E8F90
    // add r3, r0, #0
    // ldr r0, _021EAC1C ; =0x0000FFFF
    // cmp r3, r0
    // beq _021EABE4
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // add r2, r6, #0
    // bl ov102_021EAD98
    // ldr r0, [sp, #0x1c]
    // add r7, r7, #4
    // add r0, r0, #1
    // add r6, r6, #4
    // str r0, [sp, #0x1c]
    // add r5, #0x64
    // b _021EABFC
    // add r4, #0x10
    // mov r5, #0
    // b _021EABFC
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // bne _021EAB64
    // ldr r0, [sp, #0x10]
    // add r0, #0x94
    // str r0, [sp, #0x10]
    // bl ov102_021EAC70
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EAC18: .word 0x0003040D
    // _021EAC1C: .word 0x0000FFFF
    // TODO: decompile
}


void ov102_021EAC20(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl ov102_021E8FB4
    // add r1, r0, #0
    // ldr r0, [r4, #0x74]
    // cmp r0, #0
    // beq _021EAC40
    // lsl r1, r1, #1
    // add r1, #0x1c
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // mov r2, #0x40
    // bl Sprite_SetPositionXY
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EAC44(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r1, #4]
    // mov r1, #0x23
    // bl ov102_021E8FA8
    // str r0, [r4]
    // bl String_cstr
    // str r0, [r4, #4]
    // ldrh r1, [r0]
    // ldr r0, _021EAC6C ; =0x0000FFFE
    // cmp r1, r0
    // bne _021EAC66
    // mov r0, #1
    // str r0, [r4, #8]
    // pop {r4, pc}
    // mov r0, #0
    // str r0, [r4, #8]
    // pop {r4, pc}
    // _021EAC6C: .word 0x0000FFFE
    // TODO: decompile
}


void ov102_021EAC70(void) {
    String_Delete();
}


void ov102_021EAC7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // str r1, [sp]
    // mov ip, r0
    // ldr r0, [r4, #8]
    // cmp r0, #3
    // bhi _021EAD0C
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EAC98: ; jump table
    // cmp r0, #0
    // bne _021EACDC
    // ldr r6, _021EAD44 ; =0x0000FFFE
    // mov r3, #0xe
    // mov r0, #1
    // mov r1, #3
    // mov r2, #2
    // add r7, r6, #1
    // lsl r3, r3, #0xc
    // ldr r5, [r4, #4]
    // ldrh r5, [r5]
    // cmp r5, r3
    // beq _021EACC4
    // cmp r5, r6
    // beq _021EACCC
    // cmp r5, r7
    // beq _021EACC8
    // b _021EACD0
    // str r2, [r4, #8]
    // b _021EACD6
    // str r1, [r4, #8]
    // b _021EACD6
    // str r0, [r4, #8]
    // b _021EACD6
    // ldr r5, [r4, #4]
    // add r5, r5, #2
    // str r5, [r4, #4]
    // ldr r5, [r4, #8]
    // cmp r5, #0
    // beq _021EACB2
    // ldr r3, [r4, #4]
    // mov r2, ip
    // sub r3, r3, r2
    // lsr r2, r3, #0x1f
    // add r2, r3, r2
    // asr r2, r2, #1
    // ldr r0, [sp]
    // mov r1, ip
    // add r2, r2, #1
    // bl CopyU16ArrayToStringN
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, ip
    // bl MsgArray_SkipControlCode
    // str r0, [r4, #4]
    // mov r0, #1
    // b _021EAD10
    // mov r0, ip
    // add r0, r0, #2
    // str r0, [r4, #4]
    // mov r0, #2
    // b _021EAD10
    // mov r0, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r4, #4]
    // ldrh r2, [r1]
    // mov r1, #0xe
    // lsl r1, r1, #0xc
    // cmp r2, r1
    // beq _021EAD2A
    // ldr r1, _021EAD44 ; =0x0000FFFE
    // cmp r2, r1
    // beq _021EAD36
    // add r1, r1, #1
    // cmp r2, r1
    // beq _021EAD30
    // b _021EAD3C
    // mov r1, #2
    // str r1, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #3
    // str r1, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #1
    // str r1, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // str r1, [r4, #8]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EAD44: .word 0x0000FFFE
    // TODO: decompile
}


void ov102_021EAD48(void) {
    // mov r2, #0
    // ldrsh r2, [r0, r2]
    // sub r2, #0x30
    // strh r2, [r1]
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // sub r0, #8
    // strh r0, [r1, #2]
    // bx lr
    // TODO: decompile
}


void ov102_021EAD5C(void) {
    // mov r2, #0
    // ldrsh r2, [r0, r2]
    // add r2, #0x18
    // strh r2, [r1]
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // add r0, #8
    // strh r0, [r1, #2]
    // bx lr
    // TODO: decompile
}


void ov102_021EAD70(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // add r0, r1, #0
    // add r1, sp, #8
    // bl ov102_021EAD48
    // mov r0, #0x60
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // add r3, sp, #8
    // ldrh r2, [r3]
    // ldrh r3, [r3, #2]
    // add r0, r4, #0
    // mov r1, #0xe
    // bl FillWindowPixelRect
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov102_021EAD98(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, _021EADE8 ; =0x0000FFFF
    // add r6, r3, #0
    // add r4, r1, #0
    // cmp r6, r0
    // beq _021EADE2
    // add r0, r2, #0
    // add r1, sp, #0x10
    // bl ov102_021EAD48
    // ldr r1, [r5, #0x7c]
    // add r0, r6, #0
    // bl GetECWordIntoStringByIndex
    // ldr r1, [r5, #0x7c]
    // mov r0, #1
    // mov r2, #0
    // bl FontID_String_GetWidth
    // add r3, sp, #0x10
    // mov r0, #2
    // ldrsh r0, [r3, r0]
    // mov r6, #0
    // mov r1, #1
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021EADEC ; =0x0005060E
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldrsh r3, [r3, r6]
    // ldr r2, [r5, #0x7c]
    // add r0, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021EADE8: .word 0x0000FFFF
    // _021EADEC: .word 0x0005060E
    // TODO: decompile
}


void ov102_021EADF0(void) {
    // add r0, #0x8c
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov102_021EADF8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // bl ov102_021EA268
    // mov r1, #0x14
    // str r1, [sp]
    // mov r1, #0x18
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // mov r1, #0x11
    // str r1, [sp, #0xc]
    // mov r1, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl FillBgTilemapRect
    // ldr r0, [r5, #0x5c]
    // bl ClearWindowTilemapAndCopyToVram
    // add r1, r5, #0
    // add r1, #0x2c
    // lsl r0, r4, #4
    // add r0, r1, r0
    // mov r1, #0x7b
    // str r0, [r5, #0x5c]
    // lsl r1, r1, #2
    // ldrh r1, [r5, r1]
    // mov r2, #0xf
    // bl sub_0200E948
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EAE40(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, [r4, #0x5c]
    // add r5, r1, #0
    // mov r1, #9
    // bl FillWindowPixelBuffer
    // cmp r5, #3
    // bhi _021EAF34
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAE60: ; jump table
    // mov r0, #2
    // mov r1, #0x3c
    // mov r2, #0
    // bl MessageFormat_New_Custom
    // add r5, r0, #0
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // mov r1, #0
    // bl String_New
    // mov r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // bl BufferPocketName
    // ldr r0, [r4, #4]
    // bl ov102_021E8F70
    // add r1, r0, #0
    // ldr r0, [r4, #0x78]
    // ldr r2, [r4, #0x7c]
    // bl ReadMsgDataIntoString
    // ldr r2, [r4, #0x7c]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021EAF40 ; =0x00010209
    // mov r1, #1
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r0, [r4, #0x5c]
    // add r2, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl MessageFormat_Delete
    // b _021EAF34
    // ldr r0, [r4, #0x78]
    // ldr r2, [r4, #0x7c]
    // mov r1, #6
    // bl ReadMsgDataIntoString
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021EAF40 ; =0x00010209
    // mov r1, #1
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r0, [r4, #0x5c]
    // ldr r2, [r4, #0x7c]
    // bl AddTextPrinterParameterizedWithColor
    // b _021EAF34
    // ldr r0, [r4, #0x78]
    // ldr r2, [r4, #0x7c]
    // mov r1, #7
    // bl ReadMsgDataIntoString
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021EAF40 ; =0x00010209
    // mov r1, #1
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r0, [r4, #0x5c]
    // ldr r2, [r4, #0x7c]
    // bl AddTextPrinterParameterizedWithColor
    // b _021EAF34
    // ldr r0, [r4, #0x78]
    // ldr r2, [r4, #0x7c]
    // mov r1, #8
    // bl ReadMsgDataIntoString
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021EAF40 ; =0x00010209
    // mov r1, #1
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r0, [r4, #0x5c]
    // ldr r2, [r4, #0x7c]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r4, #0x5c]
    // bl CopyWindowToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021EAF40: .word 0x00010209
    // TODO: decompile
}


void ov102_021EAF44(void) {
    ov102_021EB088();
}


void ov102_021EAF50(void) {
    ov102_021EB088();
}


void ov102_021EAF5C(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + 0x60)));
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x64)), r4);
    ov102_021EB088(r5, 1);
}


void ov102_021EAF7C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl ov102_021E8F6C
    // cmp r0, #2
    // bne _021EAFAA
    // ldr r0, [r4, #0x68]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x6c]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x74]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x70]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EAFAC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl ov102_021E8F6C
    // cmp r0, #2
    // bne _021EAFEA
    // ldr r0, [r4, #0x68]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x6c]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x74]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x70]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x68]
    // mov r1, #0x13
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x6c]
    // mov r1, #0x15
    // bl Sprite_SetAnimCtrlSeq
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EAFEC(void) {
    // ldr r0, [r0, #0x74]
    // bx lr
    // TODO: decompile
}


void ov102_021EAFF0(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _021EB022
    // add r2, r4, #0
    // lsl r0, r1, #2
    // add r2, #0x84
    // add r0, r2, r0
    // add r1, sp, #0
    // bl ov102_021EAD5C
    // add r1, sp, #0
    // mov r2, #0
    // ldrsh r0, [r1, r2]
    // lsl r0, r0, #0xc
    // str r0, [sp, #4]
    // mov r0, #2
    // ldrsh r0, [r1, r0]
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // b _021EB032
    // mov r0, #2
    // lsl r0, r0, #0x12
    // str r0, [sp, #4]
    // mov r0, #6
    // lsl r0, r0, #0xe
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x60]
    // add r1, sp, #4
    // bl Sprite_SetMatrix
    // ldr r0, _021EB084 ; =0x000001E2
    // ldrsh r1, [r4, r0]
    // mov r0, #0xc0
    // sub r0, r0, r1
    // cmp r0, #0
    // ble _021EB058
    // lsl r0, r0, #0xc
    // bl _fflt
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _021EB066
    // lsl r0, r0, #0xc
    // bl _fflt
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x64]
    // add r1, sp, #4
    // bl Sprite_SetMatrix
    // add r0, r4, #0
    // mov r1, #1
    // bl ov102_021EB088
    // add sp, #0x10
    // pop {r4, pc}
    // _021EB084: .word 0x000001E2
    // TODO: decompile
}


void ov102_021EB088(void) {
    // push {r3, lr}
    // add r2, r0, #0
    // add r2, #0x8c
    // ldr r2, [r2]
    // cmp r2, #0
    // beq _021EB0AA
    // cmp r1, #0
    // ldr r0, [r0, #0x60]
    // beq _021EB0A2
    // mov r1, #0
    // bl Sprite_SetAnimCtrlSeq
    // pop {r3, pc}
    // mov r1, #1
    // bl Sprite_SetAnimCtrlSeq
    // pop {r3, pc}
    // cmp r1, #0
    // ldr r0, [r0, #0x60]
    // beq _021EB0B8
    // mov r1, #0xe
    // bl Sprite_SetAnimCtrlSeq
    // pop {r3, pc}
    // mov r1, #0xf
    // bl Sprite_SetAnimCtrlSeq
    // pop {r3, pc}
    // TODO: decompile
}


void ov102_021EB0C0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // bl ov102_021EA268
    // add r6, r0, #0
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #0x14
    // bl MI_CpuFill8
    // mov r0, #0
    // ldr r2, _021EB12C ; =0x000001EE
    // str r6, [sp]
    // str r0, [sp, #4]
    // ldrh r0, [r5, r2]
    // mov r1, #0x19
    // mov r3, #0xf
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // strb r1, [r0, #0x10]
    // mov r1, #0xc
    // strb r1, [r0, #0x11]
    // ldrb r1, [r0, #0x12]
    // bic r1, r3
    // add r3, r2, #2
    // ldr r3, [r5, r3]
    // ldr r3, [r3]
    // lsl r3, r3, #0x18
    // lsr r6, r3, #0x18
    // mov r3, #0xf
    // and r3, r6
    // orr r1, r3
    // strb r1, [r0, #0x12]
    // ldrb r1, [r0, #0x12]
    // mov r3, #0xf0
    // bic r1, r3
    // lsl r3, r4, #0x18
    // lsr r3, r3, #0x18
    // lsl r3, r3, #0x1c
    // lsr r3, r3, #0x18
    // orr r1, r3
    // strb r1, [r0, #0x12]
    // sub r0, r2, #6
    // ldr r0, [r5, r0]
    // add r1, sp, #0
    // bl YesNoPrompt_InitFromTemplate
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _021EB12C: .word 0x000001EE
    // TODO: decompile
}


void ov102_021EB130(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _021EB148
    // cmp r0, #2
    // beq _021EB14C
    // b _021EB150
    // mov r4, #1
    // b _021EB156
    // mov r4, #0
    // b _021EB156
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_IsInTouchMode
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EB170(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #0
    // add r4, r1, #0
    // add r0, #0x4c
    // mov r1, #9
    // add r3, r2, #0
    // bl FillWindowPixelRect
    // add r0, r5, #0
    // add r0, #0x80
    // add r5, #0x4c
    // ldr r0, [r0]
    // add r1, r5, #0
    // mov r2, #0
    // lsl r3, r4, #4
    // bl ListMenuUpdateCursorObj
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EB1A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #0x23
    // mov r1, #0x68
    // add r7, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // str r6, [r4, #4]
    // str r7, [r4, #8]
    // mov r0, #0
    // str r0, [r4, #0xc]
    // str r0, [r4, #0x64]
    // ldr r0, [r4]
    // bl ov102_021EA268
    // mov r2, #0x47
    // str r0, [r4, #0x10]
    // mov r0, #0
    // mov r1, #0x1b
    // lsl r2, r2, #2
    // mov r3, #0x23
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x14]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov102_021EB1E0(void) {
    ov102_021EB29C();
    DestroyMsgData(*((u32*)(r4 + 0x14)));
    Heap_Free(r4);
}


void ov102_021EB1F8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // bl ov102_021EA268
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #4
    // add r2, r6, #0
    // mov r3, #3
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #5
    // add r2, r6, #0
    // mov r3, #3
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0x23
    // add r3, r5, #0
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r2, #0
    // add r3, #0x5c
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // str r0, [r5, #0x54]
    // mov r0, #0x23
    // add r3, r5, #0
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0xf
    // mov r2, #0
    // add r3, #0x60
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // str r0, [r5, #0x58]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov102_021EB46C
    // add r0, r5, #0
    // bl ov102_021EB4D0
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov102_021EB2EC
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #1
    // bl ov102_021EB570
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov102_021EB570
    // add r0, r6, #0
    // mov r1, #3
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov102_021EB29C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, [r7]
    // bl ov102_021EA268
    // str r0, [sp]
    // ldr r0, [r7, #0xc]
    // cmp r0, #0
    // beq _021EB2B2
    // bl Sprite_Delete
    // add r4, r7, #0
    // mov r6, #0
    // add r4, #0x24
    // add r5, r7, #0
    // add r0, r4, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r4, #0
    // bl RemoveWindow
    // ldr r0, [r5, #0x18]
    // bl String_Delete
    // add r6, r6, #1
    // add r4, #0x10
    // add r5, r5, #4
    // cmp r6, #3
    // blt _021EB2BA
    // ldr r0, [r7, #0x58]
    // bl Heap_Free
    // ldr r0, [r7, #0x54]
    // bl Heap_Free
    // ldr r0, [sp]
    // mov r1, #3
    // bl BgCommitTilemapBufferToVram
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov102_021EB2EC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // add r6, r2, #0
    // bl ov102_021EA268
    // mov r1, #0xd
    // str r1, [sp]
    // mov r1, #9
    // str r1, [sp, #4]
    // mov r1, #7
    // str r1, [sp, #8]
    // mov r1, #0x11
    // str r1, [sp, #0xc]
    // mov r1, #0
    // add r2, r1, #0
    // mov r3, #0x17
    // str r0, [sp, #0x1c]
    // bl FillBgTilemapRect
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov102_021EB524
    // cmp r4, #0
    // bne _021EB330
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x5c]
    // mov r1, #9
    // str r1, [sp]
    // mov r1, #7
    // str r1, [sp, #4]
    // add r1, r0, #0
    // add r1, #0xc
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldrh r2, [r0]
    // mov r3, #0xd
    // lsl r2, r2, #0x15
    // lsr r2, r2, #0x18
    // str r2, [sp, #0x14]
    // ldrh r0, [r0, #2]
    // mov r2, #0x17
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // bl CopyToBgTilemapRect
    // add r4, r5, #0
    // mov r6, #0
    // add r4, #0x24
    // add r0, r4, #0
    // mov r1, #0xe
    // bl FillWindowPixelBuffer
    // ldr r1, [r5, #0x18]
    // mov r0, #4
    // mov r2, #0
    // bl FontID_String_GetWidth
    // mov r1, #0x38
    // sub r3, r1, r0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EB3B0 ; =0x0003010E
    // lsr r7, r3, #0x1f
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r7, r3, r7
    // ldr r2, [r5, #0x18]
    // add r0, r4, #0
    // mov r1, #4
    // asr r3, r7, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r6, r6, #1
    // add r4, #0x10
    // add r5, r5, #4
    // cmp r6, #2
    // blt _021EB366
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EB3B0: .word 0x0003010E
    // TODO: decompile
}


void ov102_021EB3B4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // bl ov102_021EA268
    // add r6, r0, #0
    // cmp r4, #0
    // bne _021EB3F6
    // mov r1, #0x14
    // str r1, [sp]
    // mov r1, #8
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // mov r1, #0x11
    // str r1, [sp, #0xc]
    // mov r1, #0
    // add r2, r1, #0
    // mov r3, #0x18
    // bl FillBgTilemapRect
    // add r5, #0x44
    // add r0, r5, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r6, #0
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // ldr r2, [r5, #0x5c]
    // mov r1, #8
    // str r1, [sp]
    // mov r1, #4
    // str r1, [sp, #4]
    // add r1, r2, #0
    // add r1, #0xc
    // str r1, [sp, #8]
    // mov r1, #0
    // str r1, [sp, #0xc]
    // mov r3, #7
    // str r3, [sp, #0x10]
    // ldrh r3, [r2]
    // lsl r3, r3, #0x15
    // lsr r3, r3, #0x18
    // str r3, [sp, #0x14]
    // ldrh r2, [r2, #2]
    // mov r3, #0x14
    // lsl r2, r2, #0x15
    // lsr r2, r2, #0x18
    // str r2, [sp, #0x18]
    // mov r2, #0x18
    // bl CopyToBgTilemapRect
    // add r0, r5, #0
    // add r0, #0x44
    // mov r1, #0xe
    // bl FillWindowPixelBuffer
    // ldr r1, [r5, #0x20]
    // mov r0, #4
    // mov r2, #0
    // bl FontID_String_GetWidth
    // mov r1, #0x30
    // sub r3, r1, r0
    // mov r1, #0
    // str r1, [sp]
    // lsr r4, r3, #0x1f
    // add r4, r3, r4
    // ldr r0, _021EB468 ; =0x0003010E
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x20]
    // add r0, #0x44
    // mov r1, #4
    // asr r3, r4, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // _021EB468: .word 0x0003010E
    // TODO: decompile
}


void ov102_021EB46C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r6, _021EB4CC ; =ov102_021EC808
    // str r0, [sp]
    // str r1, [sp, #4]
    // mov r7, #0
    // add r4, #0x24
    // add r5, r0, #0
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl AddWindow
    // ldr r0, [sp]
    // add r1, r7, #0
    // ldr r0, [r0, #0x14]
    // bl NewString_ReadMsgData
    // str r0, [r5, #0x18]
    // add r7, r7, #1
    // add r6, #8
    // add r4, #0x10
    // add r5, r5, #4
    // cmp r7, #3
    // blo _021EB47E
    // ldr r0, [sp]
    // add r0, #0x24
    // bl PutWindowTilemap
    // ldr r0, [sp]
    // mov r1, #0xe
    // add r0, #0x24
    // bl FillWindowPixelBuffer
    // ldr r0, [sp]
    // add r0, #0x34
    // bl PutWindowTilemap
    // ldr r0, [sp]
    // mov r1, #0xe
    // add r0, #0x34
    // str r0, [sp]
    // bl FillWindowPixelBuffer
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EB4CC: .word ov102_021EC808
    // TODO: decompile
}


void ov102_021EB4D0(void) {
    // push {r3, r4, lr}
    // sub sp, #0x2c
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, [r4]
    // add r1, sp, #8
    // add r3, r2, #0
    // bl ov102_021EA270
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // add r1, sp, #8
    // mov r2, #0xdc
    // mov r3, #0x78
    // bl ov102_021EA2B4
    // str r0, [r4, #0xc]
    // mov r1, #2
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add sp, #0x2c
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov102_021EB50C(void) {
    sub_020248F0();
}


void ov102_021EB518(void) {
    sub_020248F0();
}


void ov102_021EB524(void) {
    Sprite_SetDrawFlag();
}


void ov102_021EB530(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp, #8]
    // cmp r1, #1
    // beq _021EB542
    // cmp r1, #2
    // beq _021EB550
    // mov r0, #0x37
    // lsl r0, r0, #0xe
    // str r0, [sp]
    // mov r0, #0x1e
    // lsl r0, r0, #0xe
    // str r0, [sp, #4]
    // b _021EB55C
    // mov r0, #0x37
    // lsl r0, r0, #0xe
    // str r0, [sp]
    // mov r0, #9
    // lsl r0, r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [r4, #0xc]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov102_021EB570(void) {
    // push {r4, r5, lr}
    // sub sp, #0x1c
    // add r4, r1, #0
    // ldr r1, [r0, #0x60]
    // mov r3, #0xb
    // str r3, [sp]
    // mov r5, #6
    // add r3, r1, #0
    // str r5, [sp, #4]
    // add r3, #0xc
    // mul r5, r2
    // str r3, [sp, #8]
    // mov r3, #0
    // lsl r2, r5, #0x18
    // str r3, [sp, #0xc]
    // lsr r2, r2, #0x18
    // str r2, [sp, #0x10]
    // ldrh r2, [r1]
    // lsl r2, r2, #0x15
    // lsr r2, r2, #0x18
    // str r2, [sp, #0x14]
    // ldrh r1, [r1, #2]
    // lsl r2, r4, #4
    // add r2, r4, r2
    // lsl r1, r1, #0x15
    // lsr r1, r1, #0x18
    // str r1, [sp, #0x18]
    // add r2, r2, #2
    // lsl r2, r2, #0x18
    // ldr r0, [r0, #0x10]
    // mov r1, #3
    // lsr r2, r2, #0x18
    // bl CopyToBgTilemapRect
    // add sp, #0x1c
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov102_021EB5B8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _021EB5CA
    // cmp r0, #1
    // beq _021EB602
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r4, #0xa]
    // ldr r0, [r4]
    // mov r2, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl ov102_021EB570
    // ldrh r2, [r4, #0xa]
    // mov r1, #1
    // ldr r0, [r4]
    // eor r1, r2
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // mov r2, #0
    // bl ov102_021EB570
    // ldr r0, [r4]
    // mov r1, #3
    // ldr r0, [r0, #0x10]
    // bl ScheduleBgTilemapBufferTransfer
    // ldrh r0, [r4, #0xc]
    // add r0, r0, #1
    // strh r0, [r4, #0xc]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4, #8]
    // add r0, r0, #1
    // strh r0, [r4, #8]
    // ldrh r0, [r4, #8]
    // cmp r0, #4
    // blo _021EB620
    // ldr r0, [r4]
    // mov r1, #0
    // str r1, [r0, #0x64]
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EB624(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // bl ov102_021E8F7C
    // add r4, r0, #0
    // mov r0, #0x23
    // mov r1, #0x1c
    // bl Heap_Alloc
    // add r1, r0, #0
    // str r5, [r1]
    // mov r0, #0
    // str r0, [r1, #4]
    // strh r0, [r1, #8]
    // ldr r0, _021EB650 ; =ov102_021EB5B8
    // mov r2, #1
    // strh r4, [r1, #0xa]
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #0x64]
    // pop {r3, r4, r5, pc}
    // _021EB650: .word ov102_021EB5B8
    // TODO: decompile
}


void ov102_021EB654(void) {
    // ldr r0, [r0, #0x64]
    // cmp r0, #0
    // bne _021EB65E
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov102_021EB664(void) {
    ov102_021EB3B4(1);
    ov102_021EB2EC(r4, 0, 0);
}


void ov102_021EB67C(void) {
    ov102_021EB3B4(0);
    ov102_021EB2EC(r4, 1, 0);
}


void ov102_021EB694(void) {
    Heap_Alloc(0x23, 0x64);
    *((u32*)(r0 + 4)) = r6;
    *((u32*)(r0 + 8)) = r7;
    ov102_021EA268(r5);
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x5c)) = 0;
    ov102_021E8F68(*((u32*)(r4 + 4)));
    *((u32*)(r4 + 0x60)) = r0;
}


void ov102_021EB6C8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x5c]
    // cmp r0, #0
    // beq _021EB6D6
    // bl Sprite_Delete
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EB6E0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r6, r1, #0
    // bl ov102_021EA268
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // mov r1, #2
    // add r2, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // mov r1, #3
    // add r2, r4, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // lsr r2, r2, #5
    // bl ov102_021EB77C
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021EB880
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021EB94C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #1
    // sub r3, r2, #4
    // bl BgSetPosTextAndCommit
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #3
    // mov r3, #0x10
    // bl BgSetPosTextAndCommit
    // add r0, r5, #0
    // bl ov102_021EB950
    // mov r1, #2
    // add r2, r1, #0
    // ldr r0, _021EB778 ; =0x04000050
    // sub r2, #0xc
    // bl G2x_SetBlendBrightness_
    // add r0, r4, #0
    // mov r1, #1
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021EB778: .word 0x04000050
    // TODO: decompile
}


void ov102_021EB77C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // str r1, [sp, #0x18]
    // mov r1, #0x1b
    // add r6, r2, #0
    // add r2, r1, #0
    // str r0, [sp, #0x14]
    // mov r0, #1
    // add r2, #0xff
    // mov r3, #0x23
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x20]
    // mov r0, #9
    // mov r7, #1
    // str r0, [sp, #0x24]
    // mov r4, #0
    // cmp r4, #0
    // beq _021EB7B6
    // add r0, r4, #0
    // mov r1, #3
    // bl _s32_div_f
    // cmp r1, #0
    // bne _021EB7B6
    // ldr r0, [sp, #0x24]
    // mov r7, #1
    // add r0, r0, #3
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // add r1, r4, #0
    // ldr r0, [r0, #8]
    // bl sub_02091C38
    // cmp r0, #0
    // beq _021EB7D4
    // ldr r0, [sp, #0x20]
    // add r1, r4, #0
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // ldr r0, _021EB874 ; =0x0001020F
    // str r0, [sp, #0x1c]
    // b _021EB7E2
    // ldr r0, [sp, #0x20]
    // mov r1, #0xc
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // ldr r0, _021EB878 ; =0x0003040F
    // str r0, [sp, #0x1c]
    // ldr r0, _021EB87C ; =0x000003EE
    // cmp r6, r0
    // blo _021EB7EC
    // bl GF_AssertFail
    // ldr r0, [sp, #0x24]
    // lsl r3, r7, #0x18
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x28
    // mov r2, #1
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, sp, #0x28
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // add r1, r5, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov r1, #0x48
    // sub r0, r1, r0
    // lsr r3, r0, #1
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, sp, #0x28
    // add r2, r5, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, sp, #0x28
    // bl PutWindowTilemap
    // add r0, sp, #0x28
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, r5, #0
    // bl String_Delete
    // add r0, sp, #0x28
    // bl RemoveWindow
    // add r4, r4, #1
    // add r6, #0x12
    // add r7, #0xa
    // cmp r4, #0xc
    // blt _021EB79E
    // ldr r0, [sp, #0x20]
    // bl DestroyMsgData
    // add r0, r6, #0
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EB874: .word 0x0001020F
    // _021EB878: .word 0x0003040F
    // _021EB87C: .word 0x000003EE
    // TODO: decompile
}


void ov102_021EB880(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r4, r1, #0
    // mov r1, #0xce
    // add r6, r0, #0
    // lsl r1, r1, #2
    // add r0, r2, #0
    // str r2, [sp, #0x14]
    // cmp r0, r1
    // blo _021EB898
    // bl GF_AssertFail
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #0x19
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x20
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0x22
    // bl AddWindowParameterized
    // mov r0, #4
    // mov r1, #0x23
    // bl String_New
    // add r4, r0, #0
    // add r0, sp, #0x20
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // bl ov102_021EC4A4
    // add r7, r0, #0
    // ldr r5, _021EB940 ; =0x00000000
    // beq _021EB91E
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov102_021EC4A8
    // add r0, r5, #0
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    // bl ov102_021EC4CC
    // ldr r0, [r6, #8]
    // add r1, r5, #0
    // bl sub_02091C74
    // cmp r0, #0
    // beq _021EB8FA
    // ldr r1, _021EB944 ; =0x0001020F
    // b _021EB8FC
    // ldr r1, _021EB948 ; =0x0003040F
    // ldr r0, [sp, #0x18]
    // add r2, r4, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x1c]
    // add r0, sp, #0x20
    // mov r1, #0
    // add r3, r3, #3
    // bl AddTextPrinterParameterizedWithColor
    // add r5, r5, #1
    // cmp r5, r7
    // blo _021EB8D8
    // add r0, sp, #0x20
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, sp, #0x20
    // bl PutWindowTilemap
    // add r0, r4, #0
    // bl String_Delete
    // add r0, sp, #0x20
    // bl RemoveWindow
    // ldr r0, [sp, #0x14]
    // add r0, #0xc8
    // str r0, [sp, #0x14]
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EB940: .word 0x00000000
    // _021EB944: .word 0x0001020F
    // _021EB948: .word 0x0003040F
    // TODO: decompile
}


void ov102_021EB94C(void) {
    // add r0, r2, #0
    // bx lr
    // TODO: decompile
}


void ov102_021EB950(void) {
    // push {r3, r4, lr}
    // sub sp, #0x2c
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, [r4]
    // add r1, sp, #8
    // add r3, r2, #0
    // bl ov102_021EA270
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // add r1, sp, #8
    // mov r2, #0x30
    // mov r3, #0x40
    // bl ov102_021EA2B4
    // str r0, [r4, #0x5c]
    // mov r1, #4
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x5c]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add sp, #0x2c
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov102_021EB98C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #0
    // ldr r0, [r4, #0x5c]
    // beq _021EB9B8
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #4]
    // bl ov102_021E8F7C
    // cmp r0, #0
    // ldr r0, [r4, #0x5c]
    // bne _021EB9B0
    // mov r1, #4
    // bl Sprite_SetAnimCtrlSeq
    // pop {r4, pc}
    // mov r1, #6
    // bl Sprite_SetAnimCtrlSeq
    // pop {r4, pc}
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EB9C0(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // add r5, r1, #0
    // bl ov102_021E8F7C
    // mov r1, #0
    // str r1, [sp, #0x10]
    // cmp r5, #0xfe
    // bne _021EB9E2
    // mov r0, #0xe0
    // str r0, [sp, #8]
    // mov r0, #0xb0
    // str r0, [sp, #0xc]
    // mov r5, #0x10
    // b _021EBA22
    // cmp r0, #0
    // bne _021EBA0A
    // add r0, r5, #0
    // mov r1, #3
    // bl _u32_div_f
    // mov r0, #0x50
    // mul r0, r1
    // add r0, #0x30
    // str r0, [sp, #8]
    // add r0, r5, #0
    // mov r1, #3
    // bl _u32_div_f
    // mov r1, #0x18
    // mul r1, r0
    // add r1, #0x40
    // str r1, [sp, #0xc]
    // mov r5, #4
    // b _021EBA22
    // add r0, r5, #0
    // add r1, sp, #4
    // add r2, sp, #0
    // bl ov102_021EC4CC
    // ldr r0, [sp, #4]
    // mov r5, #6
    // add r0, #0x1a
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r1, sp, #8
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x5c]
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0x5c]
    // add r1, r5, #0
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0x14
    // pop {r4, r5, pc}
    // TODO: decompile
}


void ov102_021EBA44(void) {
    ov102_021EC410(0x10, 2, 0);
}


void ov102_021EBA5C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _021EBA6E
    // cmp r0, #1
    // beq _021EBA98
    // b _021EBAA4
    // add r0, r4, #0
    // add r0, #0x1c
    // bl ov102_021EC450
    // cmp r0, #0
    // beq _021EBAA4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #1
    // ldr r1, [r4, #0xc]
    // add r0, #0x3c
    // add r3, r2, #0
    // bl ov102_021EC298
    // ldr r0, [r4, #0x14]
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // b _021EBAA4
    // add r4, #0x3c
    // add r0, r4, #0
    // bl ov102_021EC2EC
    // add sp, #8
    // pop {r4, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EBAAC(void) {
    ov102_021EC298(0, 6, 1);
}


void ov102_021EBAD0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _021EBAE2
    // cmp r0, #1
    // beq _021EBB0A
    // b _021EBB16
    // add r0, r4, #0
    // add r0, #0x3c
    // bl ov102_021EC2EC
    // cmp r0, #0
    // beq _021EBB16
    // mov r0, #0x10
    // mov r2, #0
    // str r0, [sp]
    // add r0, r4, #0
    // add r3, r2, #0
    // add r0, #0x1c
    // mov r1, #2
    // sub r3, #0xa
    // bl ov102_021EC410
    // ldr r0, [r4, #0x14]
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // b _021EBB16
    // add r4, #0x1c
    // add r0, r4, #0
    // bl ov102_021EC450
    // add sp, #4
    // pop {r3, r4, pc}
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov102_021EBB1C(void) {
    BgSetPosTextAndCommit();
}


void ov102_021EBB2C(void) {
    ov102_021EC410(0x10, 2, 0);
}


void ov102_021EBB44(void) {
    ov102_021EC450();
}


void ov102_021EBB50(void) {
    ov102_021EC37C(0, 0xc, 2, 0x3f, 0x7c);
}


void ov102_021EBB6C(void) {
    // push {r3, lr}
    // add r0, #0x1c
    // bl ov102_021EC3AC
    // cmp r0, #0
    // beq _021EBB84
    // mov r0, #1
    // mov r1, #0
    // bl ToggleBgLayer
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov102_021EBB88(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // ldr r0, _021EBBC0 ; =0x04000050
    // mov r1, #2
    // mov r2, #0x3f
    // mov r3, #0
    // bl G2x_SetBlendAlpha_
    // mov r0, #1
    // add r1, r0, #0
    // bl ToggleBgLayer
    // mov r0, #0x7c
    // str r0, [sp]
    // mov r0, #0xc
    // add r4, #0x1c
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0x3f
    // mov r3, #0
    // bl ov102_021EC37C
    // add sp, #8
    // pop {r4, pc}
    // _021EBBC0: .word 0x04000050
    // TODO: decompile
}


void ov102_021EBBC4(void) {
    ov102_021EC3AC();
}


void ov102_021EBBD0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl ov102_021E8F7C
    // cmp r0, #0
    // bne _021EBBE4
    // mov r3, #3
    // mvn r3, r3
    // b _021EBBE6
    // mov r3, #0xfc
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // mov r2, #0
    // bl BgSetPosTextAndCommit
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EBBF4(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl ov102_021E8F7C
    // cmp r0, #0
    // bne _021EBC0A
    // mov r0, #0xff
    // mvn r0, r0
    // b _021EBC0E
    // mov r0, #1
    // lsl r0, r0, #8
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // add r0, r4, #0
    // ldr r1, [r4, #0xc]
    // add r0, #0x3c
    // mov r2, #1
    // mov r3, #0
    // bl ov102_021EC298
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EBC28(void) {
    ov102_021EC2EC();
}


void ov102_021EBC34(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r0, #0x23
    // mov r1, #0x98
    // add r7, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // str r5, [r4]
    // str r6, [r4, #4]
    // str r7, [r4, #8]
    // add r0, r5, #0
    // bl ov102_021EA268
    // str r0, [r4, #0xc]
    // mov r0, #0x20
    // mov r1, #0x23
    // bl String_New
    // str r0, [r4, #0x3c]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x1a
    // str r0, [sp, #4]
    // mov r0, #0x20
    // str r0, [sp, #8]
    // mov r0, #0xc
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x10
    // mov r2, #2
    // mov r3, #4
    // bl AddWindowParameterized
    // mov r3, #0
    // str r3, [sp]
    // mov r1, #0xc
    // str r1, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x20
    // mov r2, #2
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [r4, #0x30]
    // str r0, [r4, #0x34]
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #4]
    // bl ov102_021E8F68
    // add r1, r4, #0
    // add r1, #0x94
    // str r0, [r1]
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov102_021EBCBC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x30]
    // cmp r0, #0
    // beq _021EBCCA
    // bl Sprite_Delete
    // ldr r0, [r4, #0x34]
    // cmp r0, #0
    // beq _021EBCD4
    // bl Sprite_Delete
    // ldr r0, [r4, #0x38]
    // cmp r0, #0
    // beq _021EBCDE
    // bl Sprite_Delete
    // ldr r0, [r4, #0x3c]
    // cmp r0, #0
    // beq _021EBCE8
    // bl String_Delete
    // add r0, r4, #0
    // add r0, #0x20
    // bl RemoveWindow
    // add r0, r4, #0
    // add r0, #0x10
    // bl RemoveWindow
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EBD00(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl ov102_021EA268
    // add r4, r0, #0
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x23
    // bl BG_ClearCharDataRange
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xc
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #2
    // add r3, r2, #0
    // bl FillBgTilemapRect
    // add r0, r5, #0
    // add r0, #0x10
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x10
    // bl PutWindowTilemap
    // add r0, r5, #0
    // add r0, #0x10
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, r4, #0
    // mov r1, #2
    // bl BgCommitTilemapBufferToVram
    // add r0, r5, #0
    // bl ov102_021EBD68
    // mov r0, #2
    // mov r1, #0
    // bl ToggleBgLayer
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EBD68(void) {
    // push {r3, r4, lr}
    // sub sp, #0x2c
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, [r4]
    // add r1, sp, #8
    // add r3, r2, #0
    // bl ov102_021EA270
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // add r1, sp, #8
    // mov r2, #0x48
    // mov r3, #0x38
    // bl ov102_021EA2B4
    // str r0, [r4, #0x30]
    // mov r1, #8
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x30]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // add r1, sp, #8
    // mov r2, #0xf0
    // mov r3, #0x50
    // bl ov102_021EA2B4
    // str r0, [r4, #0x34]
    // mov r1, #0x18
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // add r1, sp, #8
    // mov r2, #0xf0
    // mov r3, #0x80
    // bl ov102_021EA2B4
    // str r0, [r4, #0x38]
    // mov r1, #0x1a
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x38]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add sp, #0x2c
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov102_021EBDEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r0, #0x10
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, #0
    // bl ov102_021EC11C
    // ldr r0, [r6, #4]
    // bl ov102_021E8FD8
    // add r7, r0, #0
    // cmp r7, #0xa
    // bls _021EBE0C
    // mov r7, #0xa
    // add r0, r6, #0
    // add r0, #0x8c
    // mov r5, #0
    // ldr r4, [r0]
    // cmp r7, #0
    // bls _021EBE30
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov102_021EC13C
    // mov r0, #1
    // tst r0, r5
    // beq _021EBE2A
    // add r4, #0x18
    // add r5, r5, #1
    // cmp r5, r7
    // blo _021EBE18
    // add r6, #0x10
    // add r0, r6, #0
    // bl CopyWindowPixelsToVram_TextMode
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov102_021EBE3C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // ldr r0, _021EBE7C ; =0x04000050
    // mov r1, #4
    // mov r2, #0x3f
    // mov r3, #0
    // bl G2x_SetBlendAlpha_
    // mov r0, #2
    // mov r1, #1
    // bl ToggleBgLayer
    // add r0, r4, #0
    // mov r3, #0
    // add r0, #0x80
    // str r3, [r0]
    // mov r0, #0x7c
    // str r0, [sp]
    // mov r0, #0xc
    // add r4, #0x40
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0x3f
    // bl ov102_021EC37C
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _021EBE7C: .word 0x04000050
    // TODO: decompile
}


void ov102_021EBE80(void) {
    ov102_021EC3AC(0, 1, 1);
}


void ov102_021EBEA4(void) {
    ov102_021EC37C(0xc, 4, 0, 0x3f, 0x7c);
}


void ov102_021EBEC8(void) {
    // push {r3, lr}
    // add r1, r0, #0
    // add r1, #0x80
    // ldr r1, [r1]
    // cmp r1, #0
    // bne _021EBEEA
    // add r0, #0x40
    // bl ov102_021EC3AC
    // cmp r0, #0
    // beq _021EBEEE
    // mov r0, #2
    // mov r1, #0
    // bl ToggleBgLayer
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov102_021EBEF4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #0
    // ldr r0, [r4, #0x30]
    // beq _021EBF22
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #4]
    // bl ov102_021E9050
    // add r1, r0, #0
    // ldr r0, [r4, #0x34]
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #4]
    // bl ov102_021E9064
    // add r1, r0, #0
    // ldr r0, [r4, #0x38]
    // bl Sprite_SetDrawFlag
    // pop {r4, pc}
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x34]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x38]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EBF38(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bne _021EBF6A
    // mov r0, #0xe
    // lsl r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #0xb
    // lsl r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x30]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0x30]
    // mov r1, #0x10
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0xc
    // pop {r3, r4, pc}
    // add r2, r1, #0
    // mov r0, #1
    // and r2, r0
    // mov r0, #0x70
    // mul r0, r2
    // add r0, #0x48
    // lsl r0, r0, #0xc
    // str r0, [sp]
    // lsr r1, r1, #1
    // mov r0, #0x18
    // mul r0, r1
    // add r0, #0x38
    // lsl r0, r0, #0xc
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x30]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldr r0, [r4, #0x30]
    // mov r1, #8
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov102_021EBFA0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r4, r1, #0
    // add r6, r0, #0
    // bl ov102_021EC090
    // lsl r0, r4, #1
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r0, #0x90
    // ldr r7, [r0]
    // ldr r0, [sp, #8]
    // add r0, r7, r0
    // str r0, [sp, #0x14]
    // mov r0, #0x18
    // mul r0, r4
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // ldr r1, [sp, #0xc]
    // add r1, r0, r1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp, #0x18]
    // cmp r4, #0
    // bge _021EBFE4
    // ldr r0, [sp, #8]
    // add r5, r1, #0
    // neg r0, r0
    // ldr r7, [sp, #0x14]
    // str r0, [sp, #0x10]
    // str r0, [sp, #8]
    // b _021EC004
    // add r0, #0x78
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [sp, #8]
    // add r7, #0xa
    // str r0, [sp, #0x10]
    // ldr r0, [r6, #4]
    // bl ov102_021E8FD8
    // ldr r1, [sp, #8]
    // add r1, r1, r7
    // cmp r1, r0
    // bls _021EC004
    // ldr r0, [sp, #0x10]
    // sub r0, r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // mov r4, #0
    // cmp r0, #0
    // ble _021EC02A
    // add r0, r6, #0
    // add r1, r7, r4
    // add r2, r5, #0
    // bl ov102_021EC13C
    // mov r0, #1
    // tst r0, r4
    // beq _021EC022
    // add r5, #0x18
    // lsl r0, r5, #0x18
    // lsr r5, r0, #0x18
    // ldr r0, [sp, #0x10]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _021EC00C
    // add r1, r6, #0
    // ldr r0, [sp, #0x18]
    // add r1, #0x8c
    // str r0, [r1]
    // add r1, r6, #0
    // ldr r0, [sp, #0x14]
    // add r1, #0x90
    // str r0, [r1]
    // add r0, r6, #0
    // add r0, #0x10
    // bl CopyWindowPixelsToVram_TextMode
    // ldr r0, [sp, #0xc]
    // mov r2, #2
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // mov r3, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // ldr r1, [r6, #0xc]
    // add r0, #0x60
    // bl ov102_021EC298
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov102_021EC05C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #0x60
    // bl ov102_021EC2EC
    // cmp r0, #0
    // beq _021EC08A
    // ldr r0, [r4, #4]
    // bl ov102_021E9050
    // add r1, r0, #0
    // ldr r0, [r4, #0x34]
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #4]
    // bl ov102_021E9064
    // add r1, r0, #0
    // ldr r0, [r4, #0x38]
    // bl Sprite_SetDrawFlag
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EC090(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // cmp r1, #0
    // ble _021EC0B0
    // add r0, #0x8c
    // ldr r0, [r0]
    // add r0, #0x78
    // lsl r0, r0, #0x18
    // lsr r3, r0, #0x18
    // mov r0, #0x18
    // mul r0, r1
    // add r0, r3, r0
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // b _021EC0BE
    // add r0, #0x8c
    // ldr r4, [r0]
    // mov r0, #0x18
    // mul r0, r1
    // add r0, r4, r0
    // lsl r0, r0, #0x18
    // lsr r3, r0, #0x18
    // cmp r3, r4
    // bge _021EC0E2
    // mov r0, #0xd0
    // str r0, [sp]
    // sub r0, r4, r3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // mov r1, #0
    // lsl r3, r3, #0x10
    // add r5, #0x10
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, r1, #0
    // lsr r3, r3, #0x10
    // bl FillWindowPixelRect
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // mov r0, #0xd0
    // str r0, [sp]
    // add r0, #0x30
    // sub r0, r0, r3
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #0
    // lsl r3, r3, #0x10
    // add r0, #0x10
    // add r2, r1, #0
    // lsr r3, r3, #0x10
    // bl FillWindowPixelRect
    // mov r1, #0
    // mov r0, #0xd0
    // str r0, [sp]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // add r5, #0x10
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl FillWindowPixelRect
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EC11C(void) {
    BgSetPosTextAndCommit(2, 0x30, 3, 0);
}


void ov102_021EC13C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r2, #0
    // ldr r0, [r5, #4]
    // ldr r2, [r5, #0x3c]
    // add r7, r1, #0
    // bl ov102_021E8FFC
    // cmp r4, #0xf0
    // bhi _021EC178
    // str r4, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021EC208 ; =0x00010200
    // mov r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // mov r3, #1
    // add r4, r7, #0
    // and r4, r3
    // mov r3, #0x70
    // ldr r2, [r5, #0x3c]
    // add r0, #0x10
    // mul r3, r4
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // lsl r0, r0, #8
    // sub r6, r0, r4
    // add r0, r5, #0
    // add r0, #0x20
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _021EC208 ; =0x00010200
    // add r3, r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x3c]
    // add r0, #0x20
    // bl AddTextPrinterParameterizedWithColor
    // mov r2, #0
    // mov r0, #1
    // add r1, r7, #0
    // and r1, r0
    // add r7, r1, #0
    // mov r0, #0x70
    // mul r7, r0
    // mov r0, #0x60
    // str r0, [sp]
    // mov r1, #0x10
    // str r1, [sp, #4]
    // lsl r1, r7, #0x10
    // lsr r1, r1, #0x10
    // str r1, [sp, #8]
    // lsl r1, r4, #0x10
    // lsr r1, r1, #0x10
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // ldr r1, [r5, #0x2c]
    // add r0, #0x10
    // add r3, r2, #0
    // bl BlitBitmapRectToWindow
    // mov r1, #0x60
    // lsl r2, r7, #0x10
    // lsl r3, r6, #0x10
    // str r1, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // lsr r2, r2, #0x10
    // str r2, [sp, #8]
    // mov r2, #0
    // sub r0, r0, r6
    // str r2, [sp, #0xc]
    // lsl r0, r0, #0x10
    // str r1, [sp, #0x10]
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // ldr r1, [r5, #0x2c]
    // add r0, #0x10
    // lsr r3, r3, #0x10
    // bl BlitBitmapRectToWindow
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EC208: .word 0x00010200
    // TODO: decompile
}


void ov102_021EC20C(void) {
    Heap_Alloc(0x23, 0x30);
    *((u32*)(r0 + 4)) = r6;
    *((u32*)(r0 + 8)) = r7;
    ov102_021EA268(r5);
    *((u32*)(r4 + 0xc)) = r0;
    ov102_021EA26C(r5);
    *((u32*)(r4 + 0x10)) = r0;
    *((u32*)(r4 + 0x14)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x2c)) = 0;
}


void ov102_021EC240(void) {
    Heap_Free();
}


void ov102_021EC248(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // add r4, r1, #0
    // ldr r2, [r5, #0xc]
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x23
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0xc]
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r3, #5
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // ldr r0, [r5, #0xc]
    // mov r1, #5
    // bl BgCommitTilemapBufferToVram
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov102_021EC290(void) {
    // bx lr
    // TODO: decompile
}


void ov102_021EC294(void) {
    // bx lr
    // TODO: decompile
}


void ov102_021EC298(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // str r1, [r4]
    // str r2, [r4, #4]
    // cmp r3, #0
    // bne _021EC2B2
    // add r0, r1, #0
    // add r1, r2, #0
    // bl Bg_GetXpos
    // str r0, [r4, #0xc]
    // mov r0, #0
    // b _021EC2BE
    // add r0, r1, #0
    // add r1, r2, #0
    // bl Bg_GetYpos
    // str r0, [r4, #0xc]
    // mov r0, #3
    // str r0, [r4, #8]
    // ldr r0, [sp, #8]
    // ldr r1, [r4, #0xc]
    // add r2, r1, r0
    // ldr r1, _021EC2E8 ; =0x000001FF
    // lsl r0, r0, #0xc
    // and r1, r2
    // str r1, [r4, #0x10]
    // ldr r1, [r4, #0xc]
    // lsl r1, r1, #0xc
    // str r1, [r4, #0xc]
    // ldr r1, [sp, #0xc]
    // bl _s32_div_f
    // str r0, [r4, #0x14]
    // ldr r0, [sp, #0xc]
    // strh r0, [r4, #0x18]
    // mov r0, #0
    // strh r0, [r4, #0x1a]
    // pop {r4, pc}
    // nop
    // _021EC2E8: .word 0x000001FF
    // TODO: decompile
}


void ov102_021EC2EC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrh r0, [r4, #0x1a]
    // cmp r0, #0
    // beq _021EC300
    // cmp r0, #1
    // beq _021EC314
    // cmp r0, #2
    // beq _021EC32A
    // b _021EC32E
    // ldr r0, _021EC334 ; =ov102_021EC338
    // add r1, r4, #0
    // mov r2, #0
    // bl ov102_021E93D4
    // str r0, [r4, #0x1c]
    // ldrh r0, [r4, #0x1a]
    // add r0, r0, #1
    // strh r0, [r4, #0x1a]
    // b _021EC32E
    // ldrh r0, [r4, #0x18]
    // cmp r0, #0
    // bne _021EC32E
    // ldr r0, [r4, #0x1c]
    // bl SysTask_Destroy
    // ldrh r0, [r4, #0x1a]
    // add r0, r0, #1
    // strh r0, [r4, #0x1a]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _021EC334: .word ov102_021EC338
    // TODO: decompile
}


void ov102_021EC338(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldrh r0, [r4, #0x18]
    // cmp r0, #0
    // beq _021EC366
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // add r3, r1, r0
    // str r3, [r4, #0xc]
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // lsl r1, r1, #0x18
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // asr r3, r3, #0xc
    // bl BgSetPosTextAndCommit
    // ldrh r0, [r4, #0x18]
    // sub r0, r0, #1
    // strh r0, [r4, #0x18]
    // pop {r4, pc}
    // ldr r1, [r4, #4]
    // ldr r2, [r4, #8]
    // lsl r1, r1, #0x18
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // ldr r3, [r4, #0x10]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // bl BgSetPosTextAndCommit
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EC37C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // str r1, [r4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // str r2, [r4, #4]
    // str r1, [r4, #0x14]
    // str r3, [r4, #8]
    // sub r0, r0, r3
    // bl _s32_div_f
    // str r0, [r4, #0x10]
    // ldr r0, [sp, #8]
    // mov r2, #0
    // str r0, [r4, #0xc]
    // ldr r0, _021EC3A8 ; =ov102_021EC3D4
    // add r1, r4, #0
    // str r2, [r4, #0x18]
    // bl ov102_021E93D4
    // str r0, [r4, #0x1c]
    // pop {r4, pc}
    // _021EC3A8: .word ov102_021EC3D4
    // TODO: decompile
}


void ov102_021EC3AC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // bne _021EC3CC
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // bne _021EC3D0
    // ldr r0, [r4, #0x1c]
    // bl SysTask_Destroy
    // ldr r0, [r4, #0x18]
    // add r0, r0, #1
    // str r0, [r4, #0x18]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EC3D4(void) {
    // push {r3, lr}
    // add r2, r1, #0
    // ldr r0, [r2, #0x14]
    // cmp r0, #0
    // beq _021EC3F0
    // ldr r1, [r2, #8]
    // ldr r0, [r2, #0x10]
    // add r0, r1, r0
    // str r0, [r2, #8]
    // asr r3, r0, #3
    // ldr r0, [r2, #0x14]
    // sub r0, r0, #1
    // str r0, [r2, #0x14]
    // b _021EC3F4
    // ldr r0, [r2, #0xc]
    // asr r3, r0, #3
    // cmp r3, #0x10
    // ble _021EC3FA
    // mov r3, #0x10
    // mov r0, #0x10
    // sub r0, r0, r3
    // str r0, [sp]
    // ldr r0, _021EC40C ; =0x04000050
    // ldmia r2!, {r1, r2}
    // bl G2x_SetBlendAlpha_
    // pop {r3, pc}
    // nop
    // _021EC40C: .word 0x04000050
    // TODO: decompile
}


void ov102_021EC410(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _021EC448 ; =0x04000050
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl G2x_SetBlendBrightness_
    // ldr r1, [sp, #0x18]
    // str r4, [r5]
    // str r1, [r5, #0x14]
    // lsl r0, r6, #0xc
    // str r0, [r5, #8]
    // lsl r2, r7, #0xc
    // str r2, [r5, #0xc]
    // ldr r0, [r5, #8]
    // sub r0, r2, r0
    // bl _s32_div_f
    // str r0, [r5, #0x10]
    // mov r2, #0
    // ldr r0, _021EC44C ; =ov102_021EC478
    // add r1, r5, #0
    // str r2, [r5, #0x18]
    // bl ov102_021E93D4
    // str r0, [r5, #0x1c]
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EC448: .word 0x04000050
    // _021EC44C: .word ov102_021EC478
    // TODO: decompile
}


void ov102_021EC450(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // bne _021EC470
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // bne _021EC474
    // ldr r0, [r4, #0x1c]
    // bl SysTask_Destroy
    // ldr r0, [r4, #0x18]
    // add r0, r0, #1
    // str r0, [r4, #0x18]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov102_021EC478(void) {
    // ldr r0, [r1, #0x14]
    // cmp r0, #0
    // beq _021EC490
    // ldr r2, [r1, #8]
    // ldr r0, [r1, #0x10]
    // add r0, r2, r0
    // str r0, [r1, #8]
    // asr r2, r0, #0xc
    // ldr r0, [r1, #0x14]
    // sub r0, r0, #1
    // str r0, [r1, #0x14]
    // b _021EC494
    // ldr r0, [r1, #0xc]
    // asr r2, r0, #0xc
    // ldr r3, _021EC49C ; =G2x_SetBlendBrightness_
    // ldr r0, _021EC4A0 ; =0x04000050
    // ldr r1, [r1]
    // bx r3
    // _021EC49C: .word G2x_SetBlendBrightness_
    // _021EC4A0: .word 0x04000050
    // TODO: decompile
}


u8 ov102_021EC4A4(void) {
    return 0x1b;
}


void ov102_021EC4A8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // cmp r4, #0x1b
    // blo _021EC4B6
    // bl GF_AssertFail
    // mov r1, #0xa
    // ldr r2, _021EC4C8 ; =ov102_021EC820
    // mul r1, r4
    // add r1, r2, r1
    // add r0, r5, #0
    // mov r2, #2
    // bl CopyU16ArrayToStringN
    // pop {r3, r4, r5, pc}
    // _021EC4C8: .word ov102_021EC820
    // TODO: decompile
}


void ov102_021EC4CC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // cmp r5, #0x1b
    // blo _021EC4DC
    // bl GF_AssertFail
    // mov r0, #0xa
    // add r1, r5, #0
    // mul r1, r0
    // ldr r0, _021EC4F0 ; =ov102_021EC820 + 2
    // ldrb r0, [r0, r1]
    // str r0, [r4]
    // ldr r0, _021EC4F4 ; =ov102_021EC820 + 3
    // ldrb r0, [r0, r1]
    // str r0, [r6]
    // pop {r4, r5, r6, pc}
    // _021EC4F0: .word ov102_021EC820 + 2
    // _021EC4F4: .word ov102_021EC820 + 3
    // TODO: decompile
}


void ov102_021EC4F8(void) {
    GF_AssertFail(0xa);
}


void ov102_021EC514(void) {
    GF_AssertFail(0xa);
}


void ov102_021EC530(void) {
    GF_AssertFail(0xa);
}


void ov102_021EC54C(void) {
    GF_AssertFail(0xa);
}


void ov102_021EC568(void) {
    GF_AssertFail(0xa);
}


void ov102_021EC584(void) {
    GF_AssertFail(0xa);
}


void ov102_021EC5A0(void) {
    // push {r3, r4}
    // ldr r4, _021EC5D4 ; =ov102_021EC820
    // mov r3, #0
    // ldrb r2, [r4, #2]
    // cmp r2, r0
    // bhi _021EC5C4
    // add r2, #0x10
    // cmp r0, r2
    // bhs _021EC5C4
    // ldrb r2, [r4, #3]
    // cmp r2, r1
    // bhi _021EC5C4
    // add r2, #0x10
    // cmp r1, r2
    // bhs _021EC5C4
    // add r0, r3, #0
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r4, #0xa
    // cmp r3, #0x1b
    // blo _021EC5A6
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4}
    // bx lr
    // _021EC5D4: .word ov102_021EC820
    // TODO: decompile
}

