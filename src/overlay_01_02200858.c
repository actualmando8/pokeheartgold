/* Decompiled from asm/overlay_01_02200858.s */
#include "global.h"

void ov01_02200858(void) {
    ov01_021F1430(0x6c, 0, 0);
    ov01_02200884();
}


void ov01_02200874(void) {
    ov01_022008A8();
    ov01_021F1448(r4);
}


void ov01_02200884(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r2, #0
    // add r4, r0, #0
    // str r2, [sp]
    // ldr r0, [r4]
    // add r1, r4, #4
    // mov r3, #0x55
    // bl ov01_021F19F4
    // add r0, r4, #0
    // add r0, #0x18
    // add r1, r4, #4
    // bl sub_02069978
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_022008A8(void) {
    sub_02069784();
}


void ov01_022008B4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x20
    // add r2, sp, #8
    // mov r1, #0
    // str r1, [r2]
    // str r1, [r2, #4]
    // add r5, r0, #0
    // str r1, [r2, #8]
    // bl PlayerAvatar_GetMapObject
    // add r4, r0, #0
    // bl ov01_021F146C
    // add r6, r0, #0
    // mov r1, #3
    // str r6, [sp, #0x14]
    // bl ov01_021F1450
    // str r0, [sp, #0x18]
    // add r0, r4, #0
    // mov r1, #2
    // str r5, [sp, #0x1c]
    // bl MapObject_GetPriorityPlusValue
    // add r1, sp, #0x14
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, _022008FC ; =ov01_02209340
    // add r0, r6, #0
    // add r2, sp, #8
    // mov r3, #0
    // bl ov01_021F1620
    // add sp, #0x20
    // pop {r4, r5, r6, pc}
    // nop
    // _022008FC: .word ov01_02209340
    // TODO: decompile
}


void ov01_02200900(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl sub_02068D98
    // add r4, r0, #0
    // add r3, r4, #0
    // add r2, r5, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0x24
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // ldr r0, [r4, #8]
    // bl PlayerAvatar_GetMapObject
    // mov r1, #0
    // mvn r1, r1
    // add r4, r0, #0
    // str r1, [r5, #4]
    // bl MapObject_GetID
    // str r0, [r5, #0x14]
    // add r0, r4, #0
    // bl MapObject_GetMapID
    // str r0, [r5, #0x18]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_02200938(void) {
    // bx lr
    // TODO: decompile
}


void ov01_0220093C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r1, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x2c]
    // str r0, [sp, #4]
    // bl PlayerAvatar_GetMapObject
    // ldr r1, [r5, #0x14]
    // ldr r2, [r5, #0x18]
    // add r6, r0, #0
    // bl sub_0205F0A8
    // cmp r0, #0
    // bne _02200964
    // ldr r0, [sp]
    // bl ov01_021F1640
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // ldr r7, [r5, #4]
    // add r0, r6, #0
    // bl sub_0205F504
    // strb r0, [r5, #8]
    // ldrb r0, [r5, #8]
    // bl ov01_02200AB0
    // str r0, [r5, #4]
    // mov r0, #0
    // str r0, [r5]
    // ldr r4, [r5, #4]
    // sub r0, r0, #1
    // cmp r4, r0
    // beq _0220098C
    // ldr r0, [sp, #4]
    // bl PlayerAvatar_GetFacingDirection
    // cmp r4, r0
    // beq _0220099A
    // mov r0, #0
    // str r0, [r5, #0x1c]
    // str r0, [r5, #0x20]
    // mov r0, #1
    // add sp, #0x24
    // str r0, [r5]
    // pop {r4, r5, r6, r7, pc}
    // cmp r7, r4
    // beq _022009A4
    // mov r0, #0
    // str r0, [r5, #0x1c]
    // str r0, [r5, #0x20]
    // add r0, r6, #0
    // bl MapObject_GetXCoord
    // add r4, r0, #0
    // ldr r0, [r5, #4]
    // bl GetDeltaXByFacingDirection
    // add r7, r0, #0
    // add r0, r6, #0
    // bl MapObject_GetZCoord
    // str r0, [sp, #8]
    // ldr r0, [r5, #4]
    // bl GetDeltaYByFacingDirection
    // add r2, r0, #0
    // ldr r1, [sp, #8]
    // add r0, r4, r7
    // add r1, r1, r2
    // add r2, sp, #0xc
    // bl sub_020611C8
    // add r0, r6, #0
    // add r1, sp, #0x18
    // bl MapObject_CopyPositionVector
    // ldr r0, [sp, #0x1c]
    // add r1, sp, #0xc
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // bl sub_02068DA8
    // ldr r0, [r5, #0x1c]
    // add r0, r0, #1
    // str r0, [r5, #0x1c]
    // cmp r0, #0xf
    // ble _02200A04
    // mov r0, #0
    // str r0, [r5, #0x1c]
    // ldr r0, [r5, #0x20]
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // str r0, [r5, #0x20]
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_02200A08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r3, r1, #0
    // add r6, r0, #0
    // ldr r0, [r3]
    // cmp r0, #1
    // beq _02200AA4
    // mov r0, #0
    // ldr r1, [r3, #4]
    // mvn r0, r0
    // cmp r1, r0
    // beq _02200AA4
    // ldr r5, _02200AA8 ; =ov01_02209334
    // add r4, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r4!, {r0, r1}
    // ldr r0, [r5]
    // mov r7, #0x18
    // str r0, [r4]
    // ldr r1, [r3, #4]
    // ldr r4, _02200AAC ; =ov01_02209354
    // add r0, r1, #0
    // mul r0, r7
    // add r0, r4, r0
    // ldr r5, [r3, #0x28]
    // ldr r4, [r3, #0x20]
    // mov r3, #0xc
    // mul r3, r4
    // mov r2, #0
    // add r5, #0x18
    // add r4, r0, r3
    // cmp r1, #3
    // bhi _02200A6A
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02200A56: ; jump table
    // mov r2, #0xb4
    // b _02200A6A
    // add r2, r7, #0
    // add r2, #0xf6
    // b _02200A6A
    // mov r2, #0x5a
    // mov r1, #0
    // lsl r2, r2, #0x10
    // add r0, sp, #0x18
    // lsr r2, r2, #0x10
    // add r3, r1, #0
    // bl sub_02020DA4
    // add r0, r6, #0
    // add r1, sp, #0xc
    // bl sub_02068DB8
    // ldr r1, [sp, #0xc]
    // ldr r0, [r4]
    // add r2, sp, #0
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r3, sp, #0x18
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r0, [r4, #8]
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r1, sp, #0xc
    // bl sub_020699AC
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _02200AA8: .word ov01_02209334
    // _02200AAC: .word ov01_02209354
    // TODO: decompile
}


void ov01_02200AB0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0205B730
    // cmp r0, #0
    // beq _02200AC0
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_0205B73C
    // cmp r0, #0
    // beq _02200ACE
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_0205B724
    // cmp r0, #0
    // beq _02200ADC
    // mov r0, #2
    // pop {r4, pc}
    // add r0, r4, #0
    // bl sub_0205B718
    // cmp r0, #0
    // beq _02200AEA
    // mov r0, #3
    // pop {r4, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // TODO: decompile
}

