/* Decompiled from asm/overlay_01_021FD41C.s */
#include "global.h"

void ov01_021FD41C(void) {
    // push {r3, r4, r5, lr}
    // mov r1, #0x72
    // mov r2, #0
    // lsl r1, r1, #2
    // add r3, r2, #0
    // add r5, r0, #0
    // bl ov01_021F1430
    // add r4, r0, #0
    // str r5, [r4, #0x20]
    // bl ov01_021FD5CC
    // add r0, r4, #0
    // bl ov01_021FD458
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FD440(void) {
    ov01_021FD47C();
    ov01_021FD60C(r4);
    ov01_021F1448(r4);
}


void ov01_021FD458(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x20]
    // bl ov01_021F1468
    // ldr r0, [r0, #0x3c]
    // bl MapObjectManager_GetPriority
    // sub r2, r0, #1
    // ldr r0, _021FD478 ; =ov01_021FD4F4
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x24]
    // pop {r4, pc}
    // nop
    // _021FD478: .word ov01_021FD4F4
    // TODO: decompile
}


void ov01_021FD47C(void) {
    sub_0200E390();
}


void ov01_021FD488(void) {
    // add r2, r0, #0
    // add r2, #0x14
    // add r3, r1, #0
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r3]
    // bx lr
    // TODO: decompile
}


void ov01_021FD498(void) {
    // asr r1, r0, #0xb
    // lsr r1, r1, #0x14
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // bx lr
    // TODO: decompile
}


void ov01_021FD4A4(void) {
    // ldr r1, [r0, #4]
    // lsl r2, r1, #2
    // ldr r1, _021FD4C8 ; =ov01_02208EB4
    // ldr r1, [r1, r2]
    // str r1, [r0, #0x10]
    // ldr r2, [r0, #4]
    // mov r1, #0xc
    // add r3, r2, #0
    // mul r3, r1
    // ldr r1, _021FD4CC ; =ov01_02208F38
    // add r2, r0, #0
    // add r3, r1, r3
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // bx lr
    // _021FD4C8: .word ov01_02208EB4
    // _021FD4CC: .word ov01_02208F38
    // TODO: decompile
}


void ov01_021FD4D0(void) {
    // ldr r3, [r0]
    // cmp r3, r1
    // bge _021FD4E2
    // add r2, r3, r2
    // str r2, [r0]
    // cmp r2, r1
    // ble _021FD4F0
    // str r1, [r0]
    // bx lr
    // cmp r3, r1
    // ble _021FD4F0
    // sub r2, r3, r2
    // str r2, [r0]
    // cmp r2, r1
    // bge _021FD4F0
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FD4F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // bl GF_RTC_GetTimeOfDay
    // ldr r1, [r5]
    // add r4, r0, #0
    // cmp r1, #0
    // beq _021FD512
    // cmp r1, #1
    // beq _021FD534
    // cmp r1, #2
    // beq _021FD53E
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // str r4, [r5, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FD4A4
    // ldr r0, [r5, #0x10]
    // bl ov01_021FD498
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021FD624
    // ldr r0, [r5]
    // add sp, #0x10
    // add r0, r0, #1
    // str r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #4]
    // cmp r0, r4
    // beq _021FD5C0
    // add r0, r1, #1
    // str r0, [r5]
    // ldr r0, _021FD5C4 ; =ov01_02208EB4
    // lsl r1, r4, #2
    // ldr r6, [r0, r1]
    // mov r0, #0xc
    // add r1, r4, #0
    // mul r1, r0
    // ldr r0, _021FD5C8 ; =ov01_02208F38
    // add r2, sp, #4
    // add r3, r0, r1
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, r5, #0
    // ldr r1, [sp, #4]
    // add r0, #0x14
    // mov r2, #0x10
    // bl ov01_021FD4D0
    // ldr r0, [sp, #8]
    // mov r2, #0x10
    // str r0, [sp]
    // add r0, r5, #0
    // ldr r1, [sp]
    // add r0, #0x18
    // bl ov01_021FD4D0
    // ldr r7, [sp, #0xc]
    // add r0, r5, #0
    // add r0, #0x1c
    // add r1, r7, #0
    // mov r2, #0x10
    // bl ov01_021FD4D0
    // add r0, r5, #0
    // mov r2, #2
    // add r0, #0x10
    // add r1, r6, #0
    // lsl r2, r2, #8
    // bl ov01_021FD4D0
    // ldr r0, [r5, #0x10]
    // bl ov01_021FD498
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021FD624
    // ldr r1, [sp, #4]
    // ldr r0, [r5, #0x14]
    // cmp r1, r0
    // bne _021FD5C0
    // ldr r1, [r5, #0x18]
    // ldr r0, [sp]
    // cmp r0, r1
    // bne _021FD5C0
    // ldr r0, [r5, #0x1c]
    // cmp r7, r0
    // bne _021FD5C0
    // ldr r0, [r5, #0x10]
    // cmp r6, r0
    // bne _021FD5C0
    // str r4, [r5, #4]
    // mov r0, #1
    // str r0, [r5]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FD5C4: .word ov01_02208EB4
    // _021FD5C8: .word ov01_02208F38
    // TODO: decompile
}


void ov01_021FD5CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r0, #0
    // add r5, r0, #0
    // ldr r6, _021FD608 ; =ov01_02208E90
    // str r0, [sp, #4]
    // mov r7, #0
    // add r4, #0x28
    // add r5, #0x78
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r3, [r6]
    // ldr r0, [r0, #0x20]
    // add r1, r4, #0
    // mov r2, #0
    // bl ov01_021F19F4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02069978
    // add r7, r7, #1
    // add r6, r6, #4
    // add r4, #0x14
    // add r5, #0x54
    // cmp r7, #4
    // blt _021FD5DE
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FD608: .word ov01_02208E90
    // TODO: decompile
}


void ov01_021FD60C(void) {
    sub_02069784(0);
}


void ov01_021FD624(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r2, #0x1f
    // add r4, r1, #0
    // ldr r0, [r5, #0x34]
    // mov r1, #1
    // lsl r2, r2, #0x10
    // bl NNSi_G3dModifyPolygonAttrMask
    // ldr r0, [r5, #0x34]
    // add r1, r4, #0
    // bl NNS_G3dMdlSetMdlAlphaAll
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FD640(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // mov r1, #0
    // str r4, [sp, #0x14]
    // bl ov01_021F1450
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // add r1, sp, #8
    // str r5, [sp, #0x1c]
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _021FD680 ; =ov01_02208EA0
    // add r0, r4, #0
    // add r2, sp, #8
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x20
    // pop {r3, r4, r5, pc}
    // nop
    // _021FD680: .word ov01_02208EA0
    // TODO: decompile
}


void ov01_021FD684(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // bl ov01_021F146C
    // add r4, r0, #0
    // mov r1, #0
    // str r4, [sp, #0x14]
    // bl ov01_021F1450
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // add r1, sp, #8
    // str r5, [sp, #0x1c]
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _021FD6C4 ; =ov01_02208EC8
    // add r0, r4, #0
    // add r2, sp, #8
    // mov r3, #3
    // bl ov01_021F1620
    // add sp, #0x20
    // pop {r3, r4, r5, pc}
    // nop
    // _021FD6C4: .word ov01_02208EC8
    // TODO: decompile
}


void ov01_021FD6C8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02068D98
    // add r3, r0, #0
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, r5, #0
    // bl sub_02068D90
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0x1c]
    // bl MapObject_GetSpriteID
    // str r0, [r4]
    // ldr r0, [r4, #0x1c]
    // bl MapObject_GetID
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x1c]
    // bl MapObject_CheckFlag25
    // cmp r0, #1
    // ldr r0, [r4, #0x1c]
    // bne _021FD70A
    // bl sub_0205F544
    // b _021FD70E
    // bl MapObject_GetMapID
    // str r0, [r4, #8]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FD714(void) {
    // bx lr
    // TODO: decompile
}


void ov01_021FD718(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r6, [r4, #0x1c]
    // ldr r1, [r4]
    // add r5, r0, #0
    // ldr r2, [r4, #4]
    // ldr r3, [r4, #8]
    // add r0, r6, #0
    // bl sub_0205F0F8
    // cmp r0, #0
    // bne _021FD73C
    // add r0, r5, #0
    // bl ov01_021F1640
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // add r0, r6, #0
    // mov r1, #8
    // bl sub_0205F5E8
    // cmp r0, #0
    // beq _021FD752
    // add r0, r5, #0
    // bl ov01_021F1640
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // str r0, [r4, #0xc]
    // ldr r1, _021FD780 ; =0x00100200
    // add r0, r6, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021FD76A
    // mov r0, #1
    // add sp, #0xc
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, pc}
    // add r0, r6, #0
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021FD780: .word 0x00100200
    // TODO: decompile
}


void ov01_021FD784(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02068D98
    // add r3, r0, #0
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, r5, #0
    // bl sub_02068D90
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0x1c]
    // bl MapObject_GetSpriteID
    // str r0, [r4]
    // ldr r0, [r4, #0x1c]
    // bl MapObject_GetID
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x1c]
    // bl MapObject_CheckFlag25
    // cmp r0, #1
    // ldr r0, [r4, #0x1c]
    // bne _021FD7C6
    // bl sub_0205F544
    // b _021FD7CA
    // bl MapObject_GetMapID
    // str r0, [r4, #8]
    // mov r0, #1
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FD7D4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x3c
    // add r2, r1, #0
    // add r4, r0, #0
    // ldr r0, [r2, #0xc]
    // cmp r0, #0
    // bne _021FD82E
    // ldr r6, _021FD834 ; =ov01_02208F14
    // add r5, sp, #0
    // mov r3, #4
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // sub r3, r3, #1
    // bne _021FD7E8
    // ldr r0, [r6]
    // add r1, sp, #0x24
    // str r0, [r5]
    // ldr r5, [r2, #0x18]
    // add r0, r5, #0
    // bl ov01_021FD488
    // add r0, r4, #0
    // add r1, sp, #0x30
    // bl sub_02068DB8
    // mov r0, #2
    // ldr r1, [sp, #0x30]
    // lsl r0, r0, #0xa
    // sub r1, r1, r0
    // str r1, [sp, #0x30]
    // lsl r1, r0, #3
    // ldr r2, [sp, #0x34]
    // lsl r0, r0, #1
    // sub r1, r2, r1
    // str r1, [sp, #0x34]
    // ldr r1, [sp, #0x38]
    // add r5, #0x78
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, r5, #0
    // add r1, sp, #0x30
    // add r2, sp, #0x24
    // add r3, sp, #0
    // bl sub_020699AC
    // add sp, #0x3c
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021FD834: .word ov01_02208F14
    // TODO: decompile
}


void ov01_021FD838(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x48
    // add r2, r1, #0
    // add r6, r0, #0
    // ldr r0, [r2, #0xc]
    // cmp r0, #0
    // bne _021FD8E0
    // ldr r5, _021FD8E4 ; =ov01_02208EF0
    // add r4, sp, #0xc
    // mov r3, #4
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r3, r3, #1
    // bne _021FD84C
    // ldr r0, [r5]
    // add r1, sp, #0x30
    // str r0, [r4]
    // ldr r0, [r2, #0x18]
    // ldr r4, [r2, #0x1c]
    // add r5, r0, #0
    // add r5, #0x78
    // bl ov01_021FD488
    // add r0, r4, #0
    // bl ov01_021F8F88
    // cmp r0, #0
    // add r1, sp, #0x3c
    // beq _021FD8A0
    // add r0, r6, #0
    // bl sub_02068DB8
    // mov r0, #2
    // ldr r1, [sp, #0x3c]
    // lsl r0, r0, #0xa
    // sub r1, r1, r0
    // str r1, [sp, #0x3c]
    // lsl r1, r0, #3
    // ldr r2, [sp, #0x40]
    // lsl r0, r0, #1
    // sub r1, r2, r1
    // str r1, [sp, #0x40]
    // ldr r1, [sp, #0x44]
    // add r0, r1, r0
    // str r0, [sp, #0x44]
    // add r0, r4, #0
    // bl MapObject_GetFacingDirection
    // add r1, sp, #0x3c
    // bl ov01_021FD9CC
    // b _021FD8D4
    // add r0, r4, #0
    // bl MapObject_CopyPositionVector
    // add r0, r4, #0
    // add r1, sp, #0
    // bl ov01_021F8FA0
    // ldr r1, [sp, #0x3c]
    // ldr r0, [sp]
    // ldr r3, [sp, #0x40]
    // add r2, r1, r0
    // ldr r1, [sp, #0x44]
    // ldr r0, [sp, #8]
    // str r2, [sp, #0x3c]
    // add r0, r1, r0
    // mov r1, #2
    // lsl r1, r1, #0xa
    // sub r2, r2, r1
    // str r2, [sp, #0x3c]
    // lsl r2, r1, #3
    // sub r2, r3, r2
    // lsl r1, r1, #1
    // str r0, [sp, #0x44]
    // add r0, r0, r1
    // str r2, [sp, #0x40]
    // str r0, [sp, #0x44]
    // add r0, r5, #0
    // add r1, sp, #0x3c
    // add r2, sp, #0x30
    // add r3, sp, #0xc
    // bl sub_020699AC
    // add sp, #0x48
    // pop {r4, r5, r6, pc}
    // _021FD8E4: .word ov01_02208EF0
    // TODO: decompile
}


void ov01_021FD8E8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F146C
    // add r6, r0, #0
    // mov r1, #0
    // str r6, [sp, #0x14]
    // bl ov01_021F1450
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // add r1, sp, #8
    // str r5, [sp, #0x1c]
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _021FD928 ; =ov01_02208EDC
    // add r0, r6, #0
    // add r2, sp, #8
    // add r3, r4, #0
    // bl ov01_021F1620
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // _021FD928: .word ov01_02208EDC
    // TODO: decompile
}


void ov01_021FD92C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r6, [r4, #0x1c]
    // ldr r1, [r4]
    // add r5, r0, #0
    // ldr r2, [r4, #4]
    // ldr r3, [r4, #8]
    // add r0, r6, #0
    // bl sub_0205F0F8
    // cmp r0, #0
    // bne _021FD950
    // add r0, r5, #0
    // bl ov01_021F1640
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // str r0, [r4, #0xc]
    // ldr r1, _021FD97C ; =0x00100200
    // add r0, r6, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021FD968
    // mov r0, #1
    // add sp, #0xc
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, pc}
    // add r0, r6, #0
    // add r1, sp, #0
    // bl MapObject_CopyPositionVector
    // add r0, r5, #0
    // add r1, sp, #0
    // bl sub_02068DA8
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _021FD97C: .word 0x00100200
    // TODO: decompile
}


void ov01_021FD980(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // ldr r1, [r4, #0xc]
    // add r6, r0, #0
    // cmp r1, #1
    // beq _021FD9C6
    // bl sub_02068D90
    // ldr r5, [r4, #0x18]
    // add r4, r0, #0
    // mov r1, #0x54
    // mul r4, r1
    // add r0, r6, #0
    // add r1, sp, #0
    // add r5, #0x78
    // bl sub_02068DB8
    // mov r0, #2
    // ldr r1, [sp]
    // lsl r0, r0, #0xa
    // sub r1, r1, r0
    // str r1, [sp]
    // lsl r1, r0, #3
    // ldr r2, [sp, #4]
    // lsl r0, r0, #1
    // sub r1, r2, r1
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r1, sp, #0
    // bl sub_020699BC
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FD9CC(void) {
    // cmp r0, #3
    // bhi _021FDA12
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021FD9DC: ; jump table
    // mov r0, #2
    // ldr r2, [r1, #8]
    // lsl r0, r0, #0xc
    // add r0, r2, r0
    // str r0, [r1, #8]
    // bx lr
    // mov r0, #2
    // ldr r2, [r1, #8]
    // lsl r0, r0, #0xc
    // sub r0, r2, r0
    // str r0, [r1, #8]
    // bx lr
    // mov r0, #6
    // ldr r2, [r1]
    // lsl r0, r0, #0xc
    // add r0, r2, r0
    // str r0, [r1]
    // bx lr
    // mov r0, #6
    // ldr r2, [r1]
    // lsl r0, r0, #0xc
    // sub r0, r2, r0
    // str r0, [r1]
    // bx lr
    // TODO: decompile
}

