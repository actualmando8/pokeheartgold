/* Decompiled from asm/unk_02054648.s */
#include "global.h"

void sub_02054648(void) {
    // cmp r0, r1
    // blt _02054650
    // sub r0, r0, r1
    // bx lr
    // sub r0, r1, r0
    // bx lr
    // TODO: decompile
}


void sub_02054654(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r5, r0, #0
    // add r6, r3, #0
    // mov r4, #0
    // ldr r0, [sp, #0x50]
    // str r6, [sp, #0x30]
    // str r4, [sp, #0x34]
    // str r0, [sp, #0x38]
    // ldr r0, [r5, #0x2c]
    // str r1, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x30]
    // str r2, [sp, #0xc]
    // bl MapMatrix_GetWidth
    // str r0, [sp, #0x28]
    // lsl r0, r0, #5
    // str r0, [sp, #0x14]
    // asr r0, r6, #0xf
    // lsr r0, r0, #0x10
    // add r0, r6, r0
    // add r2, r5, #0
    // add r2, #0x98
    // ldr r1, [sp, #0x50]
    // asr r7, r0, #0x10
    // asr r0, r1, #0xf
    // lsr r0, r0, #0x10
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x20]
    // ldr r2, [r2]
    // add r0, r7, #0
    // add r3, sp, #0x2c
    // bl ov01_021FB42C
    // str r0, [sp, #0x24]
    // lsr r0, r7, #5
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x50]
    // lsr r0, r0, #5
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // lsl r0, r0, #5
    // add r0, #0x10
    // lsl r0, r0, #0x10
    // sub r0, r6, r0
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x18]
    // lsl r0, r0, #5
    // add r0, #0x10
    // lsl r0, r0, #0x10
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // mul r0, r1
    // ldr r1, [sp, #0x14]
    // add r0, r7, r0
    // bl ov01_021F6328
    // ldr r2, [sp, #0x18]
    // add r1, r0, #0
    // add r3, r2, #0
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x10]
    // mul r3, r0
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r3
    // bl ov01_021F635C
    // add r1, r0, #0
    // cmp r1, #3
    // bls _020546F0
    // add r6, r4, #0
    // b _0205470E
    // lsl r1, r1, #0x18
    // ldr r0, [sp, #0x10]
    // lsr r1, r1, #0x18
    // bl ov01_021F65D0
    // str r0, [sp]
    // add r0, sp, #0x34
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x38]
    // bl ov01_021FAE50
    // add r6, r0, #0
    // ldr r0, [sp, #0x24]
    // cmp r0, #0
    // beq _02054758
    // add r0, sp, #0x2c
    // add r5, #0x98
    // ldrb r0, [r0]
    // ldr r1, [r5]
    // bl ov01_021FB474
    // add r5, r0, #0
    // cmp r6, #0
    // beq _02054752
    // ldr r4, [sp, #0x34]
    // cmp r5, r4
    // bgt _02054730
    // mov r1, #1
    // b _02054764
    // ldr r1, [sp, #0xc]
    // add r0, r4, #0
    // bl sub_02054648
    // add r4, r0, #0
    // ldr r1, [sp, #0xc]
    // add r0, r5, #0
    // bl sub_02054648
    // cmp r4, r0
    // bgt _0205474C
    // ldr r4, [sp, #0x34]
    // mov r1, #1
    // b _02054764
    // add r4, r5, #0
    // mov r1, #2
    // b _02054764
    // mov r1, #2
    // add r4, r5, #0
    // b _02054764
    // cmp r6, #0
    // beq _02054762
    // mov r1, #1
    // ldr r4, [sp, #0x34]
    // b _02054764
    // mov r1, #0
    // ldr r0, [sp, #0x54]
    // cmp r0, #0
    // beq _0205476C
    // strb r1, [r0]
    // add r0, r4, #0
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054774(void) {
    sub_02054654(0);
}


void sub_02054790(void) {
    sub_02054654();
}


void sub_020547A4(void) {
    // push {r3, lr}
    // asr r1, r2, #0xf
    // lsr r1, r1, #0x10
    // add r1, r2, r1
    // asr r2, r3, #0xf
    // lsr r2, r2, #0x10
    // add r2, r3, r2
    // ldr r0, [r0, #0x2c]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // mov r3, #0
    // bl ov01_021F654C
    // ldr r1, [sp, #8]
    // cmp r1, #0
    // beq _020547D2
    // cmp r0, #0
    // beq _020547CC
    // mov r1, #1
    // b _020547CE
    // mov r1, #0
    // ldr r0, [sp, #8]
    // strb r1, [r0]
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void sub_020547D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r7, [r0, #0x2c]
    // add r4, r3, #0
    // add r0, r7, #0
    // add r3, sp, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // bl ov01_021F654C
    // cmp r0, #0
    // bne _020547F6
    // mov r0, #0xff
    // strh r0, [r4]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, sp, #0
    // ldrb r1, [r1]
    // add r0, r7, #0
    // bl ov01_021F65E4
    // lsr r2, r5, #0x1f
    // lsl r1, r5, #0x1b
    // sub r1, r1, r2
    // mov r3, #0x1b
    // ror r1, r3
    // add r1, r2, r1
    // lsr r5, r6, #0x1f
    // lsl r2, r6, #0x1b
    // sub r2, r2, r5
    // ror r2, r3
    // add r2, r5, r2
    // lsl r2, r2, #5
    // add r1, r1, r2
    // lsl r1, r1, #1
    // ldrh r0, [r0, r1]
    // strh r0, [r4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054824(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, [r6, #0x30]
    // add r4, r2, #0
    // add r5, r1, #0
    // add r7, r3, #0
    // bl MapMatrix_GetWidth
    // asr r2, r4, #4
    // asr r1, r5, #4
    // lsr r2, r2, #0x1b
    // lsr r1, r1, #0x1b
    // add r2, r4, r2
    // add r1, r5, r1
    // asr r2, r2, #5
    // asr r1, r1, #5
    // mul r0, r2
    // add r0, r1, r0
    // ldr r1, [r6, #0x5c]
    // bl TerrainAttributes_Get
    // lsr r2, r5, #0x1f
    // lsl r1, r5, #0x1b
    // sub r1, r1, r2
    // mov r3, #0x1b
    // ror r1, r3
    // add r1, r2, r1
    // lsr r5, r4, #0x1f
    // lsl r2, r4, #0x1b
    // sub r2, r2, r5
    // ror r2, r3
    // add r2, r5, r2
    // lsl r2, r2, #5
    // add r1, r1, r2
    // lsl r1, r1, #1
    // ldrh r0, [r0, r1]
    // strh r0, [r7]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054874(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r4, [r0, #0x2c]
    // add r3, sp, #0
    // add r0, r4, #0
    // bl ov01_021F654C
    // cmp r0, #0
    // bne _0205488C
    // add sp, #4
    // mov r0, #0
    // pop {r3, r4, pc}
    // add r1, sp, #0
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov01_021F6600
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_0205489C(void) {
    GF_AssertFail();
}


void sub_020548C0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r4, [r0, #0x60]
    // add r3, sp, #0
    // ldr r4, [r4, #4]
    // blx r4
    // cmp r0, #0
    // beq _020548E6
    // add r0, sp, #0
    // ldrh r0, [r0]
    // asr r0, r0, #0xf
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // mov r0, #1
    // and r1, r0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, #1
    // beq _020548E8
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_020548EC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r4, [r0, #0x60]
    // add r3, sp, #0
    // ldr r4, [r4, #4]
    // blx r4
    // cmp r0, #0
    // beq _02054912
    // add r0, sp, #0
    // ldrh r0, [r0]
    // add sp, #4
    // asr r0, r0, #8
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // mov r0, #0x7f
    // and r0, r1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, pc}
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void GetMetatileBehavior(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r4, [r0, #0x60]
    // add r3, sp, #0
    // ldr r4, [r4, #4]
    // blx r4
    // cmp r0, #0
    // beq _02054938
    // add r0, sp, #0
    // ldrh r0, [r0]
    // add sp, #4
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, pc}
    // mov r0, #0xff
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_02054940(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r4, [sp, #0x10]
    // str r4, [sp]
    // ldr r4, [r0, #0x60]
    // ldr r4, [r4]
    // blx r4
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_02054954(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [sp, #0x10]
    // mov r5, #2
    // str r1, [sp]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x10
    // lsl r5, r5, #0xe
    // lsl r3, r3, #0x10
    // add r2, r2, r5
    // add r3, r3, r5
    // bl sub_02054940
    // ldr r1, [r4, #4]
    // cmp r0, r1
    // bge _0205497C
    // mov r4, #0
    // add r2, r1, #0
    // mvn r4, r4
    // b _0205498C
    // cmp r0, r1
    // ble _02054988
    // add r2, r0, #0
    // add r0, r1, #0
    // mov r4, #1
    // b _0205498C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // sub r1, r2, r0
    // mov r0, #5
    // lsl r0, r0, #0xe
    // cmp r1, r0
    // blt _020549A0
    // cmp r4, #0
    // bne _020549A2
    // bl GF_AssertFail
    // b _020549A2
    // mov r4, #0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020549A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, sp, #4
    // add r5, r0, #0
    // add r4, r2, #0
    // add r7, r3, #0
    // str r6, [sp]
    // bl sub_02054954
    // ldr r1, [sp, #0x20]
    // cmp r1, #0
    // beq _020549C2
    // strb r0, [r1]
    // cmp r0, #0
    // bne _020549EC
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl sub_020548C0
    // add r6, r0, #0
    // bne _020549E6
    // add r0, sp, #4
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _020549E6
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl GetMetatileBehavior
    // add sp, #8
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020549F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, sp, #8
    // add r5, r0, #0
    // str r1, [sp, #4]
    // add r4, r2, #0
    // add r7, r3, #0
    // str r6, [sp]
    // bl sub_02054954
    // ldr r1, [sp, #0x28]
    // cmp r1, #0
    // beq _02054A10
    // strb r0, [r1]
    // cmp r0, #0
    // bne _02054A58
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r3, [sp, #4]
    // add r0, r5, #0
    // ldr r3, [r3, #4]
    // add r1, r4, #0
    // add r2, r7, #0
    // bl sub_02064938
    // cmp r0, #0
    // bne _02054A52
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl sub_020548C0
    // str r0, [sp, #0xc]
    // cmp r0, #0
    // bne _02054A4C
    // add r0, sp, #8
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _02054A4C
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl GetMetatileBehavior
    // ldr r0, [sp, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054A60(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, r2
    // ldr r0, [sp, #0x18]
    // add r4, r1, r3
    // add r0, r6, r0
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // ldr r5, [sp, #0x20]
    // add r7, r4, r0
    // cmp r6, #0
    // blt _02054A84
    // cmp r4, #0
    // blt _02054A84
    // ldr r0, [sp]
    // cmp r0, #0
    // blt _02054A84
    // cmp r7, #0
    // bge _02054A88
    // bl GF_AssertFail
    // lsl r0, r6, #0x10
    // str r0, [r5]
    // lsl r0, r4, #0x10
    // str r0, [r5, #4]
    // ldr r0, [sp]
    // lsl r0, r0, #0x10
    // str r0, [r5, #8]
    // lsl r0, r7, #0x10
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054A9C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r3, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // add r0, sp, #0
    // add r1, r3, #0
    // bl ov01_021F3B0C
    // ldr r1, [sp]
    // ldr r0, [r4]
    // ldr r2, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [r4, #8]
    // add r2, r2, r1
    // str r2, [sp, #8]
    // ldr r1, [r5]
    // cmp r1, r0
    // bgt _02054ADC
    // ldr r1, [r5, #8]
    // cmp r0, r1
    // bgt _02054ADC
    // ldr r0, [r5, #4]
    // cmp r0, r2
    // bgt _02054ADC
    // ldr r0, [r5, #0xc]
    // cmp r2, r0
    // bgt _02054ADC
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void sub_02054AE4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp]
    // mov r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [r1, #0x2c]
    // add r2, sp, #0xc
    // bl ov01_021F630C
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // beq _02054B5E
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r0, [r0, #0x2c]
    // bl ov01_021F652C
    // add r4, r0, #0
    // ldr r0, [sp]
    // ldr r0, [r0, #0x30]
    // bl MapMatrix_GetWidth
    // add r1, r0, #0
    // add r0, r4, #0
    // add r2, sp, #0x10
    // bl sub_02054DC8
    // mov r5, #0
    // ldr r0, [sp, #0xc]
    // add r1, r5, #0
    // bl ov01_021F3B44
    // add r1, r7, #0
    // add r2, sp, #0x10
    // add r4, r0, #0
    // bl sub_02054A9C
    // cmp r0, #0
    // beq _02054B54
    // add r0, r4, #0
    // bl ov01_021F3B34
    // cmp r0, r6
    // bne _02054B54
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _02054B4E
    // str r4, [r0]
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #0x20
    // blo _02054B26
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // cmp r0, #4
    // blo _02054AF4
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054B74(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp]
    // mov r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [r1, #0x2c]
    // add r2, sp, #0xc
    // bl ov01_021F630C
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // beq _02054C0A
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r0, [r0, #0x2c]
    // bl ov01_021F652C
    // add r6, r0, #0
    // ldr r0, [sp]
    // ldr r0, [r0, #0x30]
    // bl MapMatrix_GetWidth
    // add r1, r0, #0
    // add r0, r6, #0
    // add r2, sp, #0x10
    // bl sub_02054DC8
    // mov r6, #0
    // ldr r0, [sp, #0xc]
    // add r1, r6, #0
    // bl ov01_021F3B44
    // ldr r1, [sp, #4]
    // add r2, sp, #0x10
    // add r7, r0, #0
    // bl sub_02054A9C
    // cmp r0, #0
    // beq _02054C00
    // add r0, r7, #0
    // bl ov01_021F3B34
    // mov r1, #0
    // cmp r4, #0
    // bls _02054C00
    // lsl r2, r1, #2
    // ldr r2, [r5, r2]
    // cmp r0, r2
    // bne _02054BF6
    // ldr r1, [sp, #0x30]
    // cmp r1, #0
    // beq _02054BE8
    // str r7, [r1]
    // ldr r1, [sp, #0x34]
    // cmp r1, #0
    // beq _02054BF0
    // str r0, [r1]
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, r4
    // blo _02054BD8
    // add r0, r6, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // cmp r6, #0x20
    // blo _02054BB6
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // cmp r0, #4
    // blo _02054B84
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054C20(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // add r5, r1, #0
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // mov r7, #0
    // ldr r1, [sp]
    // add r0, r7, #0
    // ldr r1, [r1, #0x2c]
    // add r2, sp, #0xc
    // bl ov01_021F630C
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // beq _02054C80
    // mov r4, #0
    // ldr r0, [sp, #0xc]
    // add r1, r4, #0
    // bl ov01_021F3B44
    // add r6, r0, #0
    // bl ov01_021F3B34
    // cmp r0, r5
    // bne _02054C76
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _02054C5C
    // str r6, [r0]
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _02054C70
    // ldr r0, [sp]
    // add r1, r7, #0
    // ldr r0, [r0, #0x2c]
    // bl ov01_021F652C
    // ldr r1, [sp, #8]
    // str r0, [r1]
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #0x20
    // blo _02054C42
    // add r0, r7, #1
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // cmp r7, #4
    // blo _02054C2E
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054C90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // mov r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [r1, #0x2c]
    // add r2, sp, #0xc
    // bl ov01_021F630C
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // beq _02054CFA
    // mov r6, #0
    // ldr r0, [sp, #0xc]
    // add r1, r6, #0
    // bl ov01_021F3B44
    // add r7, r0, #0
    // bl ov01_021F3B34
    // mov r1, #0
    // cmp r4, #0
    // bls _02054CF0
    // lsl r2, r1, #2
    // ldr r2, [r5, r2]
    // cmp r0, r2
    // bne _02054CE6
    // ldr r1, [sp, #4]
    // cmp r1, #0
    // beq _02054CD8
    // str r7, [r1]
    // ldr r1, [sp, #0x28]
    // cmp r1, #0
    // beq _02054CE0
    // str r0, [r1]
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, r4
    // blo _02054CC8
    // add r0, r6, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // cmp r6, #0x20
    // blo _02054CB4
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // cmp r0, #4
    // blo _02054CA0
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054D10(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r7, r2, #0
    // str r0, [sp]
    // add r0, r1, #0
    // lsl r1, r7, #2
    // str r3, [sp, #4]
    // bl Heap_AllocAtEnd
    // str r0, [sp, #8]
    // mov r0, #0
    // cmp r7, #0
    // ble _02054D36
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x38]
    // add r0, r0, #1
    // stmia r1!, {r2}
    // cmp r0, r7
    // blt _02054D2E
    // mov r4, #0
    // str r4, [sp, #0xc]
    // ldr r1, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r1, [r1, #0x2c]
    // add r2, sp, #0x10
    // bl ov01_021F630C
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // beq _02054DB2
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // ldr r0, [r0, #0x2c]
    // bl ov01_021F652C
    // add r5, r0, #0
    // ldr r0, [sp]
    // ldr r0, [r0, #0x30]
    // bl MapMatrix_GetWidth
    // add r1, r0, #0
    // add r0, r5, #0
    // add r2, sp, #0x14
    // bl sub_02054DC8
    // mov r5, #0
    // ldr r0, [sp, #0x10]
    // add r1, r5, #0
    // bl ov01_021F3B44
    // ldr r1, [sp, #4]
    // add r2, sp, #0x14
    // add r6, r0, #0
    // bl sub_02054A9C
    // cmp r0, #0
    // beq _02054DA8
    // add r0, r6, #0
    // bl ov01_021F3B34
    // cmp r0, #0
    // beq _02054DA8
    // cmp r4, r7
    // blo _02054D9A
    // bl GF_AssertFail
    // ldr r0, [sp, #8]
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r4, #1
    // lsl r1, r1, #0x18
    // add r2, r4, #0
    // lsr r4, r1, #0x18
    // ldr r1, [sp, #8]
    // lsl r2, r2, #2
    // str r0, [r1, r2]
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #0x20
    // blo _02054D6C
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // cmp r0, #4
    // blo _02054D3A
    // ldr r0, [sp, #8]
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02054DC8(void) {
    // push {r4, r5, r6, lr}
    // add r4, r2, #0
    // mov r2, #1
    // lsl r2, r2, #0x14
    // str r2, [r4]
    // add r5, r0, #0
    // add r6, r1, #0
    // str r2, [r4, #8]
    // bl _s32_div_f
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // ldr r0, [r4]
    // lsl r1, r1, #0x15
    // add r0, r0, r1
    // str r0, [r4]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // ldr r1, [r4, #8]
    // lsl r0, r0, #0x15
    // add r0, r1, r0
    // str r0, [r4, #8]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02054E00(void) {
    // ldr r3, _02054E1C ; =_020FC60C
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _02054E0E
    // mov r0, #1
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #4
    // blt _02054E04
    // mov r0, #0
    // bx lr
    // nop
    // _02054E1C: .word _020FC60C
    // TODO: decompile
}


void sub_02054E20(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02054E00
    // cmp r0, #0
    // bne _02054E30
    // mov r0, #0
    // pop {r4, pc}
    // ldr r2, _02054E4C ; =_020FC5FC
    // mov r1, #0
    // ldrh r0, [r2]
    // cmp r4, r0
    // bne _02054E3E
    // mov r0, #1
    // pop {r4, pc}
    // add r1, r1, #1
    // add r2, r2, #2
    // cmp r1, #3
    // blt _02054E34
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02054E4C: .word _020FC5FC
    // TODO: decompile
}

