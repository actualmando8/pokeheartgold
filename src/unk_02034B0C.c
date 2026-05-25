/* Decompiled from asm/unk_02034B0C.s */
#include "global.h"

void sub_02034B0C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldr r0, _02034BCC ; =_021D4134
    // add r7, r1, #0
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _02034BCA
    // ldr r1, _02034BD0 ; =0x00000D98
    // mov r0, #0xf
    // bl Heap_Alloc
    // ldr r1, _02034BCC ; =_021D4134
    // ldr r2, _02034BD0 ; =0x00000D98
    // str r0, [r1, #8]
    // mov r1, #0
    // bl MI_CpuFill8
    // bl sub_020335B4
    // add r1, r0, #0
    // mov r0, #0xf
    // bl Heap_Alloc
    // ldr r1, _02034BCC ; =_021D4134
    // ldr r2, [r1, #8]
    // ldr r1, _02034BD4 ; =0x00000D64
    // str r0, [r2, r1]
    // bl sub_020335B4
    // add r2, r0, #0
    // ldr r0, _02034BCC ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02034BD4 ; =0x00000D64
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl MI_CpuFill8
    // bl LinkBattleRuleset_sizeof
    // add r1, r0, #0
    // mov r0, #0xf
    // bl Heap_Alloc
    // ldr r1, _02034BCC ; =_021D4134
    // ldr r2, [r1, #8]
    // ldr r1, _02034BD8 ; =0x00000D7C
    // str r0, [r2, r1]
    // bl LinkBattleRuleset_sizeof
    // add r2, r0, #0
    // ldr r0, _02034BCC ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02034BD8 ; =0x00000D7C
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl MI_CpuFill8
    // mov r0, #0xf
    // mov r1, #0x90
    // bl Heap_Alloc
    // ldr r2, _02034BCC ; =_021D4134
    // ldr r1, _02034BDC ; =0x00000D84
    // ldr r3, [r2, #8]
    // str r0, [r3, r1]
    // ldr r6, [r2, #8]
    // mov r0, #0x1f
    // ldr r5, [r6, r1]
    // add r3, r5, #0
    // and r3, r0
    // mov r0, #0x20
    // sub r0, r0, r3
    // add r3, r0, r5
    // add r0, r1, #4
    // str r3, [r6, r0]
    // ldr r5, _02034BE0 ; =0x00000333
    // ldr r3, [r2, #8]
    // sub r0, r1, #4
    // str r5, [r3, r0]
    // add r0, r1, #0
    // ldr r3, [r2, #8]
    // sub r0, #0xc
    // str r4, [r3, r0]
    // ldr r0, [r2, #8]
    // sub r1, #0x1c
    // add r0, r0, r1
    // bl MailMsg_Init
    // add r0, r7, #0
    // bl sub_02034DF0
    // bl WM_GetNextTgid
    // ldr r1, _02034BCC ; =_021D4134
    // strh r0, [r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02034BCC: .word _021D4134
    // _02034BD0: .word 0x00000D98
    // _02034BD4: .word 0x00000D64
    // _02034BD8: .word 0x00000D7C
    // _02034BDC: .word 0x00000D84
    // _02034BE0: .word 0x00000333
    // TODO: decompile
}


void sub_02034BE4(void) {
    // ldr r0, _02034BF4 ; =_021D4134
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _02034BF0
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02034BF4: .word _021D4134
    // TODO: decompile
}


void sub_02034BF8(void) {
    // push {r4, r5}
    // mov r5, #0
    // cmp r2, #0
    // ble _02034C18
    // ldrb r4, [r0]
    // ldrb r3, [r1]
    // cmp r4, r3
    // beq _02034C0E
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // add r5, r5, #1
    // add r0, r0, #1
    // add r1, r1, #1
    // cmp r5, r2
    // blt _02034C00
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void sub_02034C20(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // bl sub_0203993C
    // add r5, r0, #0
    // bl sub_02039954
    // add r4, r6, #0
    // add r7, r0, #0
    // add r4, #0x50
    // cmp r5, #0xe
    // beq _02034C62
    // ldrb r0, [r4, #4]
    // bl sub_0203401C
    // cmp r0, #0
    // beq _02034C4C
    // add r0, r5, #0
    // bl sub_0203401C
    // cmp r0, #0
    // bne _02034C62
    // add r0, r4, #0
    // add r0, #0x54
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02034C5C
    // ldrb r0, [r4, #4]
    // cmp r0, #0xa
    // beq _02034C88
    // ldrb r0, [r4, #4]
    // cmp r0, r5
    // bne _02034C88
    // cmp r5, #0xe
    // beq _02034C6C
    // ldrb r0, [r4, #5]
    // cmp r0, r7
    // bne _02034C88
    // ldr r1, _02034C8C ; =_021D4134
    // add r0, r6, #0
    // ldr r1, [r1, #8]
    // mov r2, #0xc0
    // add r1, #0x54
    // bl MI_CpuCopy8
    // ldr r0, _02034C8C ; =_021D4134
    // ldr r1, _02034C90 ; =0x00000D95
    // ldr r3, [r0, #8]
    // mov r0, #0x40
    // ldrb r2, [r3, r1]
    // orr r0, r2
    // strb r0, [r3, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02034C8C: .word _021D4134
    // _02034C90: .word 0x00000D95
    // TODO: decompile
}


void sub_02034C94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r0, _02034D50 ; =_021D4134
    // ldr r1, _02034D54 ; =0x00000D95
    // ldr r3, [r0, #8]
    // ldrb r2, [r3, r1]
    // add r7, r3, #0
    // add r7, #0x54
    // lsl r0, r2, #0x19
    // lsr r0, r0, #0x1f
    // beq _02034D4E
    // mov r0, #0x40
    // mov r6, #0
    // bic r2, r0
    // strb r2, [r3, r1]
    // add r4, r6, #0
    // add r5, r6, #0
    // ldr r0, _02034D50 ; =_021D4134
    // ldr r1, _02034D58 ; =0x00000D44
    // ldr r0, [r0, #8]
    // add r2, r0, r4
    // ldrh r1, [r2, r1]
    // cmp r1, #0
    // beq _02034CFC
    // mov r1, #0x46
    // lsl r1, r1, #2
    // add r0, r0, r1
    // add r0, r0, r5
    // add r1, r7, #4
    // mov r2, #6
    // bl sub_02034BF8
    // cmp r0, #0
    // beq _02034CFC
    // ldr r2, _02034D50 ; =_021D4134
    // mov r1, #0x4b
    // ldr r3, [r2, #8]
    // lsl r0, r6, #1
    // add r3, r3, r0
    // ldr r0, _02034D58 ; =0x00000D44
    // lsl r1, r1, #2
    // strh r1, [r3, r0]
    // ldr r2, [r2, #8]
    // sub r1, #0x18
    // add r3, r2, r1
    // mov r2, #0xc0
    // add r1, r6, #0
    // mul r1, r2
    // add r0, r7, #0
    // add r1, r3, r1
    // bl MI_CpuCopy8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r6, r6, #1
    // add r4, r4, #2
    // add r5, #0xc0
    // cmp r6, #0x10
    // blt _02034CB4
    // ldr r0, _02034D50 ; =_021D4134
    // ldr r1, _02034D58 ; =0x00000D44
    // ldr r0, [r0, #8]
    // mov r3, #0
    // add r4, r0, #0
    // ldrh r2, [r4, r1]
    // cmp r2, #0
    // beq _02034D1E
    // add r3, r3, #1
    // add r4, r4, #2
    // cmp r3, #0x10
    // blt _02034D10
    // cmp r3, #0x10
    // bge _02034D4E
    // lsl r2, r3, #1
    // mov r1, #0x4b
    // add r2, r0, r2
    // ldr r0, _02034D58 ; =0x00000D44
    // lsl r1, r1, #2
    // strh r1, [r2, r0]
    // ldr r2, _02034D50 ; =_021D4134
    // sub r1, #0x18
    // ldr r2, [r2, #8]
    // add r0, r7, #0
    // add r4, r2, r1
    // mov r2, #0xc0
    // add r1, r3, #0
    // mul r1, r2
    // add r1, r4, r1
    // bl MI_CpuCopy8
    // ldr r0, _02034D50 ; =_021D4134
    // mov r2, #1
    // ldr r1, [r0, #8]
    // ldr r0, _02034D5C ; =0x00000D74
    // strb r2, [r1, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02034D50: .word _021D4134
    // _02034D54: .word 0x00000D95
    // _02034D58: .word 0x00000D44
    // _02034D5C: .word 0x00000D74
    // TODO: decompile
}


void sub_02034D60(void) {
    OS_Terminate(2);
}


void sub_02034D78(void) {
    // ldr r0, _02034D84 ; =_021D4134
    // mov r1, #0
    // str r1, [r0, #4]
    // ldr r3, _02034D88 ; =Sys_ClearSleepDisableFlag
    // mov r0, #4
    // bx r3
    // _02034D84: .word _021D4134
    // _02034D88: .word Sys_ClearSleepDisableFlag
    // TODO: decompile
}


void sub_02034D8C(void) {
    // push {r3, lr}
    // mov r0, #4
    // bl Sys_SetSleepDisableFlag
    // ldr r0, _02034DB0 ; =_021D4134
    // mov r1, #1
    // str r1, [r0, #4]
    // ldr r1, _02034DB4 ; =sub_02034D60
    // mov r0, #8
    // mov r2, #0
    // bl WVR_StartUpAsync
    // cmp r0, #1
    // beq _02034DAC
    // bl OS_Terminate
    // pop {r3, pc}
    // nop
    // _02034DB0: .word _021D4134
    // _02034DB4: .word sub_02034D60
    // TODO: decompile
}


void sub_02034DB8(void) {
    // ldr r0, _02034DC8 ; =_021D4134
    // ldr r0, [r0, #4]
    // cmp r0, #2
    // bne _02034DC4
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02034DC8: .word _021D4134
    // TODO: decompile
}


void sub_02034DCC(void) {
    // ldr r0, _02034DDC ; =_021D4134
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _02034DD8
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02034DDC: .word _021D4134
    // TODO: decompile
}


void sub_02034DE0(void) {
    // ldr r3, _02034DE8 ; =WVR_TerminateAsync
    // ldr r0, _02034DEC ; =sub_02034D78
    // mov r1, #0
    // bx r3
    // _02034DE8: .word WVR_TerminateAsync
    // _02034DEC: .word sub_02034D78
    // TODO: decompile
}


void sub_02034DF0(void) {
    // push {r4, lr}
    // ldr r2, _02034E28 ; =_021D4134
    // add r1, r0, #0
    // mov r0, #0xd7
    // ldr r3, [r2, #8]
    // mov r4, #0
    // lsl r0, r0, #4
    // str r4, [r3, r0]
    // ldr r2, [r2, #8]
    // sub r0, #0xc
    // ldr r3, [r2, r0]
    // mov r0, #0x1f
    // add r2, r3, #0
    // and r2, r0
    // mov r0, #0x20
    // sub r0, r0, r2
    // add r0, r3, r0
    // bl sub_02033528
    // ldr r0, _02034E28 ; =_021D4134
    // ldr r1, [r0, #8]
    // mov r0, #0x36
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // bl sub_02033234
    // pop {r4, pc}
    // nop
    // _02034E28: .word _021D4134
    // TODO: decompile
}


void sub_02034E2C(void) {
    // push {r3, r4, r5, lr}
    // mov r4, #0
    // ldr r2, _02034E5C ; =_021D4134
    // ldr r0, _02034E60 ; =0x00000D44
    // add r5, r4, #0
    // add r1, r4, #0
    // ldr r3, [r2, #8]
    // add r4, r4, #1
    // add r3, r3, r5
    // add r5, r5, #2
    // strh r1, [r3, r0]
    // cmp r4, #0x10
    // blt _02034E38
    // ldr r0, _02034E5C ; =_021D4134
    // ldr r2, [r0, #8]
    // mov r0, #0x45
    // lsl r0, r0, #2
    // add r0, r2, r0
    // mov r2, #3
    // lsl r2, r2, #0xa
    // bl MI_CpuFill8
    // pop {r3, r4, r5, pc}
    // nop
    // _02034E5C: .word _021D4134
    // _02034E60: .word 0x00000D44
    // TODO: decompile
}


void sub_02034E64(void) {
    // push {r3, r4}
    // ldr r1, _02034E84 ; =_021D4134
    // lsl r0, r0, #0x18
    // ldr r2, [r1, #8]
    // ldr r4, _02034E88 ; =0x00000D95
    // lsr r0, r0, #0x18
    // ldrb r1, [r2, r4]
    // mov r3, #8
    // lsl r0, r0, #0x1f
    // bic r1, r3
    // lsr r0, r0, #0x1c
    // orr r0, r1
    // strb r0, [r2, r4]
    // pop {r3, r4}
    // bx lr
    // nop
    // _02034E84: .word _021D4134
    // _02034E88: .word 0x00000D95
    // TODO: decompile
}


void sub_02034E8C(void) {
    // push {r4, r5}
    // ldr r1, _02034EE8 ; =_021D4134
    // ldr r0, _02034EEC ; =0x00000D74
    // ldr r3, [r1, #8]
    // mov r2, #0
    // strb r2, [r3, r0]
    // add r3, r0, #0
    // ldr r5, [r1, #8]
    // add r3, #0x21
    // ldrb r4, [r5, r3]
    // mov r3, #1
    // bic r4, r3
    // add r3, r0, #0
    // add r3, #0x21
    // strb r4, [r5, r3]
    // add r3, r0, #0
    // ldr r5, [r1, #8]
    // add r3, #0x21
    // ldrb r4, [r5, r3]
    // mov r3, #4
    // bic r4, r3
    // add r3, r0, #0
    // add r3, #0x21
    // strb r4, [r5, r3]
    // add r3, r0, #0
    // ldr r4, [r1, #8]
    // add r3, #0x1e
    // strb r2, [r4, r3]
    // add r3, r0, #0
    // ldr r5, [r1, #8]
    // add r3, #0x21
    // ldrb r4, [r5, r3]
    // mov r3, #0x10
    // bic r4, r3
    // add r3, r0, #0
    // add r3, #0x21
    // strb r4, [r5, r3]
    // add r3, r0, #0
    // ldr r4, [r1, #8]
    // add r3, #0x20
    // strb r2, [r4, r3]
    // ldr r1, [r1, #8]
    // add r0, #0x1f
    // strb r2, [r1, r0]
    // pop {r4, r5}
    // bx lr
    // _02034EE8: .word _021D4134
    // _02034EEC: .word 0x00000D74
    // TODO: decompile
}


void sub_02034EF0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl sub_02034E8C
    // add r0, r5, #0
    // bl sub_02034E64
    // bl sub_02033A68
    // ldr r0, _02034F54 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02034F58 ; =0x00000D93
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _02034F22
    // ldr r0, _02034F5C ; =sub_02036904
    // mov r1, #0xe
    // bl sub_020337D0
    // ldr r0, _02034F54 ; =_021D4134
    // mov r2, #1
    // ldr r1, [r0, #8]
    // ldr r0, _02034F58 ; =0x00000D93
    // strb r2, [r1, r0]
    // ldr r0, _02034F54 ; =_021D4134
    // ldr r3, _02034F60 ; =0x00000D95
    // ldr r1, [r0, #8]
    // mov r2, #0x20
    // ldrb r0, [r1, r3]
    // bic r0, r2
    // lsl r2, r4, #0x18
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x1f
    // lsr r2, r2, #0x1a
    // orr r0, r2
    // strb r0, [r1, r3]
    // bl sub_02033298
    // cmp r0, #1
    // bne _02034F4E
    // bl sub_020332C0
    // cmp r0, #0
    // beq _02034F4E
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02034F54: .word _021D4134
    // _02034F58: .word 0x00000D93
    // _02034F5C: .word sub_02036904
    // _02034F60: .word 0x00000D95
    // TODO: decompile
}


void sub_02034F64(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r1, #0
    // bl sub_02034E8C
    // cmp r4, #0
    // beq _02034F76
    // bl sub_02034E2C
    // ldr r0, _02034FD4 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02034FD8 ; =0x00000D93
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _02034F94
    // ldr r0, _02034FDC ; =sub_020367A8
    // mov r1, #0xe
    // bl sub_020337D0
    // ldr r0, _02034FD4 ; =_021D4134
    // mov r2, #1
    // ldr r1, [r0, #8]
    // ldr r0, _02034FD8 ; =0x00000D93
    // strb r2, [r1, r0]
    // bl sub_02033298
    // cmp r0, #1
    // bne _02034FCC
    // ldr r2, _02034FE0 ; =_020F6A88
    // add r0, sp, #0
    // ldrb r3, [r2]
    // add r1, sp, #0
    // strb r3, [r0]
    // ldrb r3, [r2, #1]
    // strb r3, [r0, #1]
    // ldrb r3, [r2, #2]
    // strb r3, [r0, #2]
    // ldrb r3, [r2, #3]
    // strb r3, [r0, #3]
    // ldrb r3, [r2, #4]
    // ldrb r2, [r2, #5]
    // strb r3, [r0, #4]
    // strb r2, [r0, #5]
    // ldr r0, _02034FE4 ; =sub_02034C20
    // mov r2, #0
    // bl sub_02032C1C
    // cmp r0, #0
    // beq _02034FCC
    // add sp, #8
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _02034FD4: .word _021D4134
    // _02034FD8: .word 0x00000D93
    // _02034FDC: .word sub_020367A8
    // _02034FE0: .word _020F6A88
    // _02034FE4: .word sub_02034C20
    // TODO: decompile
}


void sub_02034FE8(void) {
    // push {r3, lr}
    // ldr r0, _02035074 ; =_021D4134
    // ldr r1, [r0, #8]
    // cmp r1, #0
    // bne _02034FF6
    // mov r0, #1
    // pop {r3, pc}
    // ldr r0, _02035078 ; =0x00000D94
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // beq _02035008
    // cmp r0, #1
    // beq _02035038
    // cmp r0, #2
    // beq _02035050
    // b _0203506E
    // bl sub_02033990
    // cmp r0, #0
    // beq _02035020
    // bl sub_02032E24
    // ldr r0, _02035074 ; =_021D4134
    // mov r2, #1
    // ldr r1, [r0, #8]
    // ldr r0, _02035078 ; =0x00000D94
    // strb r2, [r1, r0]
    // b _0203506E
    // bl sub_0203393C
    // cmp r0, #0
    // bne _0203506E
    // bl sub_02033858
    // ldr r0, _02035074 ; =_021D4134
    // mov r2, #2
    // ldr r1, [r0, #8]
    // ldr r0, _02035078 ; =0x00000D94
    // strb r2, [r1, r0]
    // b _0203506E
    // bl sub_0203393C
    // cmp r0, #0
    // bne _0203506E
    // bl sub_02033858
    // ldr r0, _02035074 ; =_021D4134
    // mov r2, #2
    // ldr r1, [r0, #8]
    // ldr r0, _02035078 ; =0x00000D94
    // strb r2, [r1, r0]
    // b _0203506E
    // bl sub_02033920
    // cmp r0, #0
    // beq _0203505C
    // mov r0, #1
    // pop {r3, pc}
    // bl sub_02033958
    // cmp r0, #0
    // beq _0203506E
    // ldr r0, _02035074 ; =_021D4134
    // mov r2, #1
    // ldr r1, [r0, #8]
    // ldr r0, _02035078 ; =0x00000D94
    // strb r2, [r1, r0]
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _02035074: .word _021D4134
    // _02035078: .word 0x00000D94
    // TODO: decompile
}


void sub_0203507C(void) {
    // push {r3, lr}
    // ldr r0, _020350A0 ; =_021D4134
    // ldr r2, [r0, #8]
    // cmp r2, #0
    // beq _0203509A
    // ldr r0, _020350A4 ; =0x00000D92
    // ldrb r1, [r2, r0]
    // cmp r1, #0
    // bne _0203509A
    // mov r1, #1
    // strb r1, [r2, r0]
    // bl sub_02033858
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _020350A0: .word _021D4134
    // _020350A4: .word 0x00000D92
    // TODO: decompile
}


void sub_020350A8(void) {
    // push {r3, lr}
    // ldr r1, _020350CC ; =_021D4134
    // ldr r2, [r1, #8]
    // cmp r2, #0
    // beq _020350C8
    // cmp r0, #0
    // ldr r0, _020350D0 ; =0x00000D92
    // beq _020350BE
    // mov r1, #2
    // strb r1, [r2, r0]
    // pop {r3, pc}
    // mov r1, #0
    // strb r1, [r2, r0]
    // mov r0, #1
    // bl sub_02034DF0
    // pop {r3, pc}
    // nop
    // _020350CC: .word _021D4134
    // _020350D0: .word 0x00000D92
    // TODO: decompile
}


void sub_020350D4(void) {
    // push {r3, lr}
    // ldr r0, _0203510C ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02035110 ; =0x00000D7C
    // ldr r0, [r1, r0]
    // bl Heap_Free
    // ldr r0, _0203510C ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02035114 ; =0x00000D64
    // ldr r0, [r1, r0]
    // bl Heap_Free
    // ldr r0, _0203510C ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02035118 ; =0x00000D84
    // ldr r0, [r1, r0]
    // bl Heap_Free
    // ldr r0, _0203510C ; =_021D4134
    // ldr r0, [r0, #8]
    // bl Heap_Free
    // ldr r0, _0203510C ; =_021D4134
    // mov r1, #0
    // str r1, [r0, #8]
    // pop {r3, pc}
    // nop
    // _0203510C: .word _021D4134
    // _02035110: .word 0x00000D7C
    // _02035114: .word 0x00000D64
    // _02035118: .word 0x00000D84
    // TODO: decompile
}


void sub_0203511C(void) {
    // push {r4, lr}
    // bl sub_02037474
    // cmp r0, #0
    // bne _0203512A
    // mov r0, #0
    // pop {r4, pc}
    // ldr r1, _02035148 ; =_021D4134
    // mov r0, #0
    // ldr r4, [r1, #8]
    // ldr r1, _0203514C ; =0x00000D44
    // add r3, r0, #0
    // ldrh r2, [r4, r1]
    // cmp r2, #0
    // beq _0203513C
    // add r0, r0, #1
    // add r3, r3, #1
    // add r4, r4, #2
    // cmp r3, #0x10
    // blt _02035134
    // pop {r4, pc}
    // nop
    // _02035148: .word _021D4134
    // _0203514C: .word 0x00000D44
    // TODO: decompile
}


void sub_02035150(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0203517C ; =_021D4134
    // mov r4, #0
    // ldr r5, [r1, #8]
    // ldr r1, _02035180 ; =0x00000D44
    // add r3, r4, #0
    // ldrh r2, [r5, r1]
    // cmp r2, #0
    // beq _0203516C
    // cmp r4, r0
    // bne _0203516A
    // add r0, r3, #0
    // pop {r3, r4, r5, pc}
    // add r4, r4, #1
    // add r3, r3, #1
    // add r5, r5, #2
    // cmp r3, #0x10
    // blt _0203515C
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0203517C: .word _021D4134
    // _02035180: .word 0x00000D44
    // TODO: decompile
}


void sub_02035184(void) {
    // ldr r0, _02035190 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02035194 ; =0x00000D74
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _02035190: .word _021D4134
    // _02035194: .word 0x00000D74
    // TODO: decompile
}


void sub_02035198(void) {
    // ldr r0, _020351A4 ; =_021D4134
    // mov r2, #0
    // ldr r1, [r0, #8]
    // ldr r0, _020351A8 ; =0x00000D74
    // strb r2, [r1, r0]
    // bx lr
    // _020351A4: .word _021D4134
    // _020351A8: .word 0x00000D74
    // TODO: decompile
}


void sub_020351AC(void) {
    // ldr r1, _020351D4 ; =_021D4134
    // ldr r3, [r1, #8]
    // lsl r1, r0, #1
    // add r2, r3, r1
    // ldr r1, _020351D8 ; =0x00000D44
    // ldrh r1, [r2, r1]
    // cmp r1, #0
    // beq _020351D0
    // mov r1, #0xc0
    // add r2, r0, #0
    // mul r2, r1
    // add r0, r3, r2
    // add r1, #0xaa
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // bne _020351D2
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _020351D4: .word _021D4134
    // _020351D8: .word 0x00000D44
    // TODO: decompile
}


void sub_020351DC(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // ldr r1, _02035210 ; =_021D4134
    // mov r5, #0
    // ldr r6, [r1, #8]
    // ldr r1, _02035214 ; =0x00000D44
    // add r3, r5, #0
    // ldrh r2, [r6, r1]
    // cmp r2, #0
    // beq _02035204
    // cmp r0, r5
    // bne _02035202
    // add r0, r3, #0
    // bl sub_02035798
    // add r1, r4, #0
    // bl PlayerProfile_Copy
    // pop {r4, r5, r6, pc}
    // add r5, r5, #1
    // add r3, r3, #1
    // add r6, r6, #2
    // cmp r3, #0x10
    // blt _020351EA
    // pop {r4, r5, r6, pc}
    // nop
    // _02035210: .word _021D4134
    // _02035214: .word 0x00000D44
    // TODO: decompile
}


void sub_02035218(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_02033298
    // cmp r0, #2
    // bne _0203522C
    // bl sub_02032E24
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // bl sub_02033298
    // cmp r0, #1
    // bne _02035282
    // bl sub_0203993C
    // ldr r2, _02035288 ; =_021D4134
    // mov r1, #0xc0
    // add r4, r5, #0
    // mul r4, r1
    // ldr r3, [r2, #8]
    // add r1, #0x8a
    // add r2, r3, r4
    // ldrh r2, [r2, r1]
    // mov r1, #0xd9
    // lsl r1, r1, #4
    // strb r2, [r3, r1]
    // bl sub_0203401C
    // cmp r0, #0
    // beq _0203526C
    // ldr r1, _02035288 ; =_021D4134
    // mov r0, #1
    // ldr r2, [r1, #8]
    // mov r1, #0x46
    // lsl r1, r1, #2
    // add r1, r2, r1
    // add r1, r1, r4
    // mov r2, #0
    // bl sub_02032B84
    // b _0203527E
    // ldr r1, _02035288 ; =_021D4134
    // mov r0, #1
    // ldr r2, [r1, #8]
    // mov r1, #0x45
    // lsl r1, r1, #2
    // add r1, r2, r1
    // add r1, r1, r4
    // bl sub_0203373C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02035288: .word _021D4134
    // TODO: decompile
}


void sub_0203528C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // bl sub_02034C94
    // mov r4, #0
    // ldr r1, _020352CC ; =_021D4134
    // ldr r0, _020352D0 ; =0x00000D44
    // add r5, r4, #0
    // mov r2, #1
    // ldr r3, [r1, #8]
    // add r3, r3, r5
    // ldrh r6, [r3, r0]
    // cmp r6, #0
    // beq _020352C0
    // beq _020352C0
    // ldr r6, _020352D0 ; =0x00000D44
    // ldrh r6, [r3, r6]
    // sub r7, r6, #1
    // ldr r6, _020352D0 ; =0x00000D44
    // strh r7, [r3, r6]
    // ldr r3, [r1, #8]
    // add r7, r3, r5
    // ldrh r6, [r7, r6]
    // cmp r6, #0
    // bne _020352C0
    // ldr r6, _020352D4 ; =0x00000D74
    // strb r2, [r3, r6]
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, #0x10
    // blt _0203529C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020352CC: .word _021D4134
    // _020352D0: .word 0x00000D44
    // _020352D4: .word 0x00000D74
    // TODO: decompile
}


void sub_020352D8(void) {
    // push {r3, r4, r5, lr}
    // bl sub_0203993C
    // add r5, r0, #0
    // bl sub_02035784
    // add r4, r0, #0
    // cmp r5, #0xf
    // beq _02035360
    // ldr r0, _020353A8 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _020353AC ; =0x00000D88
    // ldr r5, [r1, r0]
    // bl LinkBattleRuleset_sizeof
    // cmp r0, #0x20
    // ble _020352FE
    // bl GF_AssertFail
    // bl PlayerProfile_sizeof
    // cmp r0, #0x20
    // beq _0203530A
    // bl GF_AssertFail
    // bl PlayerProfile_sizeof
    // add r1, r5, #0
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, #0x10
    // bl MI_CpuCopy8
    // bl LinkBattleRuleset_sizeof
    // add r2, r0, #0
    // ldr r0, _020353A8 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _020353B0 ; =0x00000D7C
    // ldr r0, [r1, r0]
    // add r1, r5, #0
    // add r1, #0x30
    // bl MI_CpuCopy8
    // add r0, r4, #0
    // bl PlayerProfile_GetTrainerID
    // str r0, [r5]
    // bl sub_0203993C
    // strb r0, [r5, #4]
    // bl sub_02039954
    // strb r0, [r5, #5]
    // ldr r0, _020353A8 ; =_021D4134
    // mov r2, #8
    // ldr r1, [r0, #8]
    // ldr r0, _020353B4 ; =0x00000D68
    // add r0, r1, r0
    // add r1, r5, #0
    // add r1, #8
    // bl MI_CpuCopy8
    // bl sub_02033AB8
    // add r5, #0x54
    // strb r0, [r5]
    // b _02035388
    // ldr r1, _020353A8 ; =_021D4134
    // ldr r2, [r1, #8]
    // ldr r1, _020353AC ; =0x00000D88
    // ldr r4, [r2, r1]
    // bl PlayerProfile_GetTrainerID
    // str r0, [r4]
    // bl sub_0203993C
    // strb r0, [r4, #4]
    // bl sub_02039954
    // strb r0, [r4, #5]
    // ldr r0, _020353A8 ; =_021D4134
    // add r4, #8
    // ldr r0, [r0, #8]
    // add r1, r4, #0
    // mov r2, #0x54
    // bl MI_CpuCopy8
    // ldr r0, _020353A8 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _020353AC ; =0x00000D88
    // ldr r0, [r1, r0]
    // mov r1, #0x5c
    // bl DC_FlushRange
    // ldr r0, _020353A8 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _020353AC ; =0x00000D88
    // ldr r0, [r1, r0]
    // mov r1, #0x5c
    // bl sub_02033240
    // pop {r3, r4, r5, pc}
    // nop
    // _020353A8: .word _021D4134
    // _020353AC: .word 0x00000D88
    // _020353B0: .word 0x00000D7C
    // _020353B4: .word 0x00000D68
    // TODO: decompile
}


void sub_020353B8(void) {
    // push {r4, lr}
    // ldr r0, _02035404 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02035408 ; =0x00000D88
    // ldr r4, [r1, r0]
    // bl sub_02035610
    // ldrb r1, [r4, #6]
    // cmp r1, r0
    // beq _02035402
    // bl sub_02035610
    // strb r0, [r4, #6]
    // ldr r0, _02035404 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02035408 ; =0x00000D88
    // ldr r0, [r1, r0]
    // mov r1, #0x5c
    // bl DC_FlushRange
    // ldr r0, _02035404 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02035408 ; =0x00000D88
    // ldr r0, [r1, r0]
    // mov r1, #0x5c
    // bl sub_02033240
    // ldr r3, _02035404 ; =_021D4134
    // ldr r2, _02035408 ; =0x00000D88
    // ldr r4, [r3, #8]
    // ldrh r3, [r3]
    // ldr r0, [r4, r2]
    // sub r2, #8
    // ldr r2, [r4, r2]
    // mov r1, #0x5c
    // bl sub_020339B4
    // pop {r4, pc}
    // _02035404: .word _021D4134
    // _02035408: .word 0x00000D88
    // TODO: decompile
}


void sub_0203540C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl sub_02033298
    // add r5, r0, #0
    // bl sub_020347CC
    // add r6, r0, #0
    // bl sub_020353B8
    // bl sub_020338F4
    // cmp r0, #0
    // bne _0203544A
    // bl sub_0203567C
    // cmp r0, #0
    // bne _0203544A
    // ldr r0, _020355AC ; =_021D4134
    // ldr r3, _020355B0 ; =0x00000D95
    // ldr r1, [r0, #8]
    // ldrb r0, [r1, r3]
    // lsl r2, r0, #0x1d
    // lsr r2, r2, #0x1f
    // beq _0203544A
    // mov r2, #1
    // bic r0, r2
    // mov r2, #1
    // orr r0, r2
    // strb r0, [r1, r3]
    // ldr r0, _020355AC ; =_021D4134
    // ldr r3, _020355B4 ; =0x00000D8E
    // ldr r2, [r0, #8]
    // ldr r0, _020355B8 ; =0x0000FFFF
    // ldrh r1, [r2, r3]
    // cmp r1, r0
    // bne _0203545A
    // strh r4, [r2, r3]
    // ldr r0, _020355AC ; =_021D4134
    // ldr r3, _020355B0 ; =0x00000D95
    // ldr r1, [r0, #8]
    // ldrb r0, [r1, r3]
    // lsl r2, r0, #0x1e
    // lsr r2, r2, #0x1f
    // beq _02035490
    // sub r2, r3, #7
    // ldrh r2, [r1, r2]
    // cmp r2, r4
    // bls _0203547A
    // mov r2, #1
    // bic r0, r2
    // mov r2, #1
    // orr r0, r2
    // strb r0, [r1, r3]
    // cmp r6, #0
    // beq _02035490
    // ldr r0, _020355AC ; =_021D4134
    // ldr r2, _020355B0 ; =0x00000D95
    // ldr r0, [r0, #8]
    // mov r1, #1
    // ldrb r3, [r0, r2]
    // bic r3, r1
    // mov r1, #1
    // orr r1, r3
    // strb r1, [r0, r2]
    // bl sub_020332AC
    // cmp r0, #0x19
    // bne _0203549E
    // mov r0, #0
    // bl sub_020399DC
    // cmp r5, #9
    // bls _020354A4
    // b _020355A6
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _020354B0: ; jump table
    // ldr r0, _020355AC ; =_021D4134
    // ldr r2, [r0, #8]
    // ldr r0, _020355BC ; =0x00000D92
    // ldrb r1, [r2, r0]
    // cmp r1, #1
    // bne _020354D8
    // bl sub_020350D4
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // cmp r1, #2
    // bne _020355A6
    // mov r1, #3
    // strb r1, [r2, r0]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // ldr r0, _020355AC ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _020355BC ; =0x00000D92
    // ldrb r0, [r1, r0]
    // cmp r0, #1
    // bne _020354F8
    // bl sub_020338D0
    // cmp r0, #0
    // bne _020355A6
    // ldr r0, _020355AC ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _020355BC ; =0x00000D92
    // ldrb r0, [r1, r0]
    // cmp r0, #2
    // bne _020355A6
    // bl sub_020338D0
    // add sp, #8
    // cmp r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, _020355AC ; =_021D4134
    // ldr r3, [r0, #8]
    // cmp r3, #0
    // beq _020355A6
    // ldr r1, _020355B0 ; =0x00000D95
    // mov r0, #1
    // ldrb r2, [r3, r1]
    // add sp, #8
    // bic r2, r0
    // mov r0, #1
    // orr r0, r2
    // strb r0, [r3, r1]
    // pop {r4, r5, r6, pc}
    // bl sub_02033468
    // ldr r3, _020355AC ; =_021D4134
    // ldr r2, _020355C0 ; =0x00000D91
    // ldr r4, [r3, #8]
    // ldrb r1, [r4, r2]
    // cmp r1, #0
    // bne _02035544
    // sub r1, r2, #5
    // strh r0, [r4, r1]
    // ldr r0, [r3, #8]
    // mov r1, #5
    // strb r1, [r0, r2]
    // b _02035548
    // sub r0, r1, #1
    // strb r0, [r4, r2]
    // ldr r0, _020355AC ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _020355C4 ; =0x00000D8C
    // ldrh r5, [r1, r0]
    // add r0, #9
    // ldrb r0, [r1, r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1f
    // beq _02035562
    // bl WM_GetNextTgid
    // ldr r1, _020355AC ; =_021D4134
    // strh r0, [r1]
    // bl sub_020352D8
    // bl sub_0203993C
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl sub_02033FC4
    // add r4, r0, #0
    // bl sub_0203993C
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bl sub_02035724
    // str r0, [sp]
    // ldr r1, _020355AC ; =_021D4134
    // ldr r0, _020355B0 ; =0x00000D95
    // ldr r2, [r1, #8]
    // add r3, r4, #0
    // ldrb r0, [r2, r0]
    // add r2, r5, #0
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1f
    // str r0, [sp, #4]
    // ldrh r1, [r1]
    // mov r0, #0
    // bl sub_02033668
    // ldr r0, _020355AC ; =_021D4134
    // ldr r1, [r0, #8]
    // mov r0, #0xd9
    // lsl r0, r0, #4
    // strb r5, [r1, r0]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _020355AC: .word _021D4134
    // _020355B0: .word 0x00000D95
    // _020355B4: .word 0x00000D8E
    // _020355B8: .word 0x0000FFFF
    // _020355BC: .word 0x00000D92
    // _020355C0: .word 0x00000D91
    // _020355C4: .word 0x00000D8C
    // TODO: decompile
}


void sub_020355C8(void) {
    sub_0203540C();
}


void sub_020355DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0203560C ; =_021D4134
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _020355EC
    // mov r0, #0
    // pop {r4, pc}
    // bl sub_02033298
    // cmp r0, #4
    // beq _020355F8
    // mov r0, #0
    // pop {r4, pc}
    // bl sub_02033250
    // mov r2, #1
    // add r1, r2, #0
    // lsl r1, r4
    // tst r0, r1
    // bne _02035608
    // mov r2, #0
    // add r0, r2, #0
    // pop {r4, pc}
    // _0203560C: .word _021D4134
    // TODO: decompile
}


void sub_02035610(void) {
    sub_020355DC(0);
}


void sub_02035630(void) {
    // ldr r0, _02035648 ; =_021D4134
    // ldr r1, [r0, #8]
    // cmp r1, #0
    // beq _02035644
    // ldr r0, _0203564C ; =0x00000D92
    // ldrb r0, [r1, r0]
    // cmp r0, #3
    // bne _02035644
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02035648: .word _021D4134
    // _0203564C: .word 0x00000D92
    // TODO: decompile
}


void sub_02035650(void) {
    // ldr r0, _02035660 ; =_021D4134
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _0203565C
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02035660: .word _021D4134
    // TODO: decompile
}


void sub_02035664(void) {
    sub_02033920(1);
}


void sub_0203567C(void) {
    sub_02033250(0);
}


void sub_0203569C(void) {
    // ldr r0, _020356B8 ; =_021D4134
    // ldr r1, [r0, #8]
    // cmp r1, #0
    // beq _020356B2
    // ldr r0, _020356BC ; =0x00000D95
    // ldrb r0, [r1, r0]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _020356B2
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _020356B8: .word _021D4134
    // _020356BC: .word 0x00000D95
    // TODO: decompile
}


void sub_020356C0(void) {
    // push {r3, r4}
    // ldr r1, _020356E4 ; =_021D4134
    // ldr r2, [r1, #8]
    // cmp r2, #0
    // beq _020356DE
    // ldr r4, _020356E8 ; =0x00000D95
    // lsl r0, r0, #0x18
    // ldrb r1, [r2, r4]
    // lsr r0, r0, #0x18
    // mov r3, #4
    // lsl r0, r0, #0x1f
    // bic r1, r3
    // lsr r0, r0, #0x1d
    // orr r0, r1
    // strb r0, [r2, r4]
    // pop {r3, r4}
    // bx lr
    // nop
    // _020356E4: .word _021D4134
    // _020356E8: .word 0x00000D95
    // TODO: decompile
}


void sub_020356EC(void) {
    // push {r4, r5}
    // ldr r5, _02035718 ; =_021D4134
    // ldr r2, [r5, #8]
    // cmp r2, #0
    // beq _02035712
    // ldr r4, _0203571C ; =0x00000D95
    // lsl r0, r0, #0x18
    // ldrb r1, [r2, r4]
    // lsr r0, r0, #0x18
    // mov r3, #2
    // lsl r0, r0, #0x1f
    // bic r1, r3
    // lsr r0, r0, #0x1e
    // orr r0, r1
    // strb r0, [r2, r4]
    // ldr r2, _02035720 ; =0x0000FFFF
    // ldr r1, [r5, #8]
    // sub r0, r4, #7
    // strh r2, [r1, r0]
    // pop {r4, r5}
    // bx lr
    // nop
    // _02035718: .word _021D4134
    // _0203571C: .word 0x00000D95
    // _02035720: .word 0x0000FFFF
    // TODO: decompile
}


void sub_02035724(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl WM_GetDispersionBeaconPeriod
    // add r4, r0, #0
    // cmp r5, #0x29
    // blo _02035736
    // bl GF_AssertFail
    // cmp r5, #0xa
    // bne _02035740
    // lsl r0, r4, #0xe
    // lsr r0, r0, #0x10
    // pop {r3, r4, r5, pc}
    // cmp r5, #9
    // beq _02035748
    // cmp r5, #0xd
    // bne _0203574E
    // lsl r0, r4, #0xe
    // lsr r0, r0, #0x10
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02035754(void) {
    // ldr r1, _0203577C ; =_021D4134
    // ldr r3, [r1, #8]
    // cmp r3, #0
    // beq _02035776
    // lsl r1, r0, #1
    // add r2, r3, r1
    // ldr r1, _02035780 ; =0x00000D44
    // ldrh r1, [r2, r1]
    // cmp r1, #0
    // beq _02035776
    // mov r1, #0x45
    // lsl r1, r1, #2
    // add r2, r3, r1
    // mov r1, #0xc0
    // mul r1, r0
    // add r0, r2, r1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _0203577C: .word _021D4134
    // _02035780: .word 0x00000D44
    // TODO: decompile
}


void sub_02035784(void) {
    // ldr r0, _02035790 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02035794 ; =0x00000D78
    // ldr r0, [r1, r0]
    // bx lr
    // nop
    // _02035790: .word _021D4134
    // _02035794: .word 0x00000D78
    // TODO: decompile
}


void sub_02035798(void) {
    // ldr r1, _020357BC ; =_021D4134
    // ldr r3, [r1, #8]
    // lsl r1, r0, #1
    // add r2, r3, r1
    // ldr r1, _020357C0 ; =0x00000D44
    // ldrh r1, [r2, r1]
    // cmp r1, #0
    // bne _020357AC
    // mov r0, #0
    // bx lr
    // mov r1, #0x59
    // lsl r1, r1, #2
    // add r2, r3, r1
    // mov r1, #0xc0
    // mul r1, r0
    // add r0, r2, r1
    // add r0, #0x10
    // bx lr
    // _020357BC: .word _021D4134
    // _020357C0: .word 0x00000D44
    // TODO: decompile
}


void sub_020357C4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _020357F4 ; =_021D4134
    // add r4, r1, #0
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _020357F0
    // cmp r4, #8
    // blt _020357DA
    // bl GF_AssertFail
    // ldr r1, _020357F4 ; =_021D4134
    // add r0, r5, #0
    // ldr r2, [r1, #8]
    // ldr r1, _020357F8 ; =0x00000D14
    // add r3, r2, r1
    // mov r2, #6
    // add r1, r4, #0
    // mul r1, r2
    // add r1, r3, r1
    // bl MI_CpuCopy8
    // pop {r3, r4, r5, pc}
    // nop
    // _020357F4: .word _021D4134
    // _020357F8: .word 0x00000D14
    // TODO: decompile
}


void sub_020357FC(void) {
    // ldr r0, _02035814 ; =_021D4134
    // ldr r1, [r0, #8]
    // cmp r1, #0
    // beq _0203580E
    // ldr r0, _02035818 ; =0x00000D95
    // ldrb r0, [r1, r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1f
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _02035814: .word _021D4134
    // _02035818: .word 0x00000D95
    // TODO: decompile
}


void sub_0203581C(void) {
    // ldr r0, _02035830 ; =_021D4134
    // ldr r3, [r0, #8]
    // cmp r3, #0
    // beq _0203582E
    // ldr r1, _02035834 ; =0x00000D95
    // mov r0, #0x10
    // ldrb r2, [r3, r1]
    // orr r0, r2
    // strb r0, [r3, r1]
    // bx lr
    // _02035830: .word _021D4134
    // _02035834: .word 0x00000D95
    // TODO: decompile
}


void sub_02035838(void) {
    // ldr r1, _02035848 ; =_021D4134
    // ldr r3, _0203584C ; =MI_CpuCopy8
    // ldr r2, [r1, #8]
    // ldr r1, _02035850 ; =0x00000D68
    // add r1, r2, r1
    // mov r2, #8
    // bx r3
    // nop
    // _02035848: .word _021D4134
    // _0203584C: .word MI_CpuCopy8
    // _02035850: .word 0x00000D68
    // TODO: decompile
}


void sub_02035854(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl LinkBattleRuleset_sizeof
    // ldr r1, _02035870 ; =_021D4134
    // add r2, r0, #0
    // ldr r3, [r1, #8]
    // ldr r1, _02035874 ; =0x00000D7C
    // add r0, r4, #0
    // ldr r1, [r3, r1]
    // bl MI_CpuCopy8
    // pop {r4, pc}
    // nop
    // _02035870: .word _021D4134
    // _02035874: .word 0x00000D7C
    // TODO: decompile
}


void sub_02035878(void) {
    // ldr r0, _02035884 ; =_021D4134
    // ldr r1, [r0, #8]
    // ldr r0, _02035888 ; =0x00000D7C
    // ldr r0, [r1, r0]
    // bx lr
    // nop
    // _02035884: .word _021D4134
    // _02035888: .word 0x00000D7C
    // TODO: decompile
}


void sub_0203588C(void) {
    // push {r4, lr}
    // bl sub_020352D8
    // ldr r3, _020358A8 ; =_021D4134
    // ldr r2, _020358AC ; =0x00000D88
    // ldr r4, [r3, #8]
    // ldrh r3, [r3]
    // ldr r0, [r4, r2]
    // sub r2, #8
    // ldr r2, [r4, r2]
    // mov r1, #0x5c
    // bl sub_020339B4
    // pop {r4, pc}
    // _020358A8: .word _021D4134
    // _020358AC: .word 0x00000D88
    // TODO: decompile
}


void sub_020358B0(void) {
    sub_02033A44();
}


void sub_020358B8(void) {
    // push {r3, lr}
    // ldr r1, _020358CC ; =_021D4134
    // mov r2, #0x54
    // ldr r1, [r1, #8]
    // bl MI_CpuCopy8
    // bl sub_0203588C
    // pop {r3, pc}
    // nop
    // _020358CC: .word _021D4134
    // TODO: decompile
}


void sub_020358D0(void) {
    // ldr r1, _020358F8 ; =_021D4134
    // ldr r3, [r1, #8]
    // cmp r3, #0
    // beq _020358F4
    // lsl r1, r0, #1
    // add r2, r3, r1
    // ldr r1, _020358FC ; =0x00000D44
    // ldrh r1, [r2, r1]
    // cmp r1, #0
    // beq _020358F4
    // mov r1, #0x59
    // lsl r1, r1, #2
    // add r2, r3, r1
    // mov r1, #0xc0
    // mul r1, r0
    // add r0, r2, r1
    // add r0, #8
    // bx lr
    // mov r0, #0
    // bx lr
    // _020358F8: .word _021D4134
    // _020358FC: .word 0x00000D44
    // TODO: decompile
}

