/* Decompiled from asm/overlay_01_021E8744.s */
#include "global.h"

void ov01_021E8744(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r2, #0
    // add r6, r0, #0
    // add r0, r7, #0
    // add r5, r1, #0
    // add r4, r3, #0
    // bl ov01_02204554
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021E8760
    // bl GF_AssertFail
    // mov r0, #0
    // add r1, r6, #0
    // ldr r2, [r1]
    // cmp r2, #0
    // beq _021E877A
    // ldr r2, [r1, #0xc]
    // cmp r4, r2
    // bne _021E877A
    // ldr r2, [r1, #4]
    // cmp r2, r5
    // bne _021E877A
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r0, #1
    // add r1, #0x10
    // cmp r0, #2
    // blt _021E8764
    // mov r2, #0
    // add r1, r6, #0
    // ldr r0, [r1]
    // cmp r0, #0
    // bne _021E879C
    // lsl r1, r2, #4
    // mov r0, #1
    // str r0, [r6, r1]
    // add r0, r6, r1
    // str r4, [r0, #0xc]
    // str r7, [r0, #8]
    // str r5, [r0, #4]
    // b _021E87A4
    // add r2, r2, #1
    // add r1, #0x10
    // cmp r2, #2
    // blt _021E8786
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E87A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0
    // add r6, r3, #0
    // mvn r0, r0
    // add r4, r1, #0
    // add r7, r2, #0
    // cmp r6, r0
    // bne _021E87BE
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #4
    // bl NARC_AllocAndReadWholeMember
    // add r5, r0, #0
    // bne _021E87D0
    // bl GF_AssertFail
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl ov01_02204470
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E87E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r1, [sp, #4]
    // mov r1, #0x4f
    // str r0, [sp]
    // mov r0, #4
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // add r7, r0, #0
    // mov r0, #0
    // add r1, r7, #0
    // add r6, r0, #0
    // str r6, [r1, #0x14]
    // str r6, [r1, #0x18]
    // str r6, [r1, #0x1c]
    // add r0, r0, #1
    // add r1, #0x10
    // cmp r0, #0x10
    // blt _021E87FE
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r2, r0, #0
    // add r3, r0, #0
    // add r5, r7, #0
    // mov r4, #0
    // add r1, r0, #4
    // add r2, #8
    // add r3, #0xc
    // str r4, [r5, r0]
    // str r4, [r5, r1]
    // str r4, [r5, r2]
    // str r4, [r5, r3]
    // add r6, r6, #1
    // add r5, #0x10
    // cmp r6, #2
    // blt _021E881E
    // mov r0, #0x6a
    // mov r1, #4
    // bl NARC_New
    // mov r1, #0x13
    // lsl r1, r1, #4
    // str r0, [r7, r1]
    // ldr r0, [sp]
    // add r1, r1, #4
    // str r0, [r7, r1]
    // ldr r0, [sp, #4]
    // mov r1, #4
    // mov r2, #0x10
    // bl ov01_022041D8
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // str r0, [r7, r1]
    // add r0, r7, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E8858(void) {
    // cmp r0, #0
    // bne _021E8860
    // mov r0, #0
    // bx lr
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021E8864(void) {
    // cmp r0, #8
    // bne _021E886C
    // mov r0, #0
    // bx lr
    // mov r1, #1
    // and r0, r1
    // cmp r0, #1
    // beq _021E8876
    // mov r1, #0
    // add r0, r1, #0
    // bx lr
    // TODO: decompile
}


void ov01_021E887C(void) {
    // cmp r0, #8
    // bne _021E8884
    // mov r0, #1
    // bx lr
    // asr r1, r0, #1
    // mov r0, #1
    // and r1, r0
    // cmp r1, #1
    // beq _021E8890
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021E8894(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r6, r0, #0
    // mov r0, #0x4d
    // ldr r7, [sp, #0x54]
    // lsl r0, r0, #2
    // add r4, r1, #0
    // str r2, [sp, #8]
    // ldr r0, [r7, r0]
    // add r1, r6, #0
    // add r2, sp, #0x10
    // add r5, r3, #0
    // bl NARC_ReadWholeMember
    // cmp r4, #4
    // blt _021E88B8
    // bl GF_AssertFail
    // lsl r1, r4, #2
    // add r0, sp, #0x18
    // ldr r0, [r0, r1]
    // mov r1, #0
    // mvn r1, r1
    // str r0, [sp, #0xc]
    // cmp r0, r1
    // bne _021E88CE
    // add sp, #0x28
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #0x10
    // ldrb r0, [r0, #1]
    // bl ov01_021E8864
    // ldr r1, [sp, #0x48]
    // cmp r1, r0
    // beq _021E88E2
    // add sp, #0x28
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r6, #0
    // add r4, r7, #0
    // cmp r5, #0
    // beq _021E88F4
    // ldr r0, [r4, #0x1c]
    // cmp r5, r0
    // bne _021E88F4
    // bl GF_AssertFail
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #0x10
    // blt _021E88E6
    // mov r2, #0
    // add r1, r7, #0
    // ldr r0, [r1, #0x14]
    // cmp r0, #0
    // bne _021E895E
    // lsl r4, r2, #4
    // mov r1, #1
    // add r0, r7, r4
    // str r1, [r0, #0x14]
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // bl ov01_022042FC
    // add r6, r0, #0
    // bne _021E8920
    // bl GF_AssertFail
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x44]
    // ldr r3, [sp, #0x40]
    // add r0, r6, #0
    // bl ov01_022044C8
    // ldr r0, [sp, #0xc]
    // add r1, r7, r4
    // str r0, [r1, #0x18]
    // str r5, [r1, #0x1c]
    // ldr r0, [sp, #0x4c]
    // mov r1, #0x13
    // str r0, [sp]
    // ldr r0, [sp, #0x50]
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r7, r1]
    // add r1, #8
    // ldr r1, [r7, r1]
    // ldr r3, [sp, #0xc]
    // add r2, r6, #0
    // bl ov01_021E87A8
    // add r7, #0x10
    // str r6, [r7, r4]
    // ldr r0, [r7, r4]
    // bl ov01_022044E0
    // add sp, #0x28
    // add r0, r7, r4
    // pop {r3, r4, r5, r6, r7, pc}
    // add r2, r2, #1
    // add r1, #0x10
    // cmp r2, #0x10
    // blt _021E8900
    // bl GF_AssertFail
    // mov r0, #0
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E8970(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // ldr r6, [sp, #0x30]
    // add r5, r0, #0
    // add r4, r1, #0
    // add r7, r2, #0
    // str r3, [sp]
    // cmp r6, #0
    // bne _021E898C
    // bl GF_AssertFail
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov01_021E8B9C
    // cmp r5, r0
    // blt _021E899C
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // add r1, r5, #0
    // add r2, sp, #4
    // bl NARC_ReadWholeMember
    // cmp r4, #4
    // blt _021E89B2
    // bl GF_AssertFail
    // lsl r1, r4, #2
    // add r0, sp, #0xc
    // ldr r5, [r0, r1]
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _021E89C6
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, sp, #4
    // ldrb r0, [r0, #1]
    // bl ov01_021E887C
    // cmp r7, r0
    // beq _021E89D8
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r4, #0
    // add r1, r6, #0
    // ldr r0, [r1, #0x18]
    // cmp r5, r0
    // bne _021E8A1A
    // add r0, sp, #4
    // ldrb r0, [r0, #2]
    // cmp r0, #0
    // beq _021E8A02
    // lsl r2, r4, #4
    // mov r0, #0x11
    // add r2, r6, r2
    // lsl r0, r0, #4
    // lsl r3, r5, #0x18
    // ldr r1, [sp]
    // ldr r2, [r2, #0x10]
    // add r0, r6, r0
    // lsr r3, r3, #0x18
    // bl ov01_021E8744
    // b _021E8A04
    // mov r0, #1
    // cmp r0, #0
    // beq _021E8A14
    // lsl r1, r4, #4
    // add r1, r6, r1
    // ldr r0, [sp]
    // ldr r1, [r1, #0x10]
    // bl ov01_0220450C
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // add r1, #0x10
    // cmp r4, #0x10
    // blt _021E89DC
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E8A28(void) {
    // push {r3, r4}
    // cmp r0, #0
    // beq _021E8A4C
    // mov r4, #0
    // add r2, r4, #0
    // add r1, r4, #0
    // ldr r3, [r0, #0x14]
    // cmp r3, #0
    // beq _021E8A44
    // cmp r3, #1
    // bne _021E8A40
    // str r2, [r0, #0x10]
    // str r1, [r0, #0x14]
    // str r1, [r0, #0x1c]
    // add r4, r4, #1
    // add r0, #0x10
    // cmp r4, #0x10
    // blt _021E8A34
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov01_021E8A50(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // beq _021E8A88
    // cmp r5, #0
    // bne _021E8A60
    // bl GF_AssertFail
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _021E8A88
    // cmp r0, #1
    // bne _021E8A82
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r5]
    // bl ov01_02204500
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r5]
    // bl ov01_0220431C
    // mov r0, #0
    // str r0, [r5, #4]
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021E8A8C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // add r6, r1, #0
    // add r1, r2, #0
    // ldr r0, [r4, r0]
    // add r2, sp, #0
    // add r5, r3, #0
    // bl NARC_ReadWholeMember
    // cmp r5, #4
    // blt _021E8AAC
    // bl GF_AssertFail
    // lsl r1, r5, #2
    // add r0, sp, #8
    // ldr r5, [r0, r1]
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _021E8ABE
    // bl GF_AssertFail
    // mov r0, #0
    // lsl r1, r0, #4
    // add r1, r4, r1
    // ldr r2, [r1, #0x14]
    // cmp r2, #1
    // bne _021E8ADC
    // ldr r2, [r1, #0x18]
    // cmp r5, r2
    // bne _021E8ADC
    // ldr r1, [r1, #0x10]
    // add r0, r6, #0
    // bl ov01_02204518
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #0x10
    // blo _021E8AC0
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021E8AEC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // beq _021E8B02
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl NARC_Delete
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021E8B04(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r3, r0, #0
    // mov r0, #0x4d
    // add r5, r2, #0
    // lsl r0, r0, #2
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // add r1, r3, #0
    // add r2, sp, #0
    // bl NARC_ReadWholeMember
    // cmp r4, #4
    // blt _021E8B24
    // bl GF_AssertFail
    // lsl r1, r4, #2
    // add r0, sp, #8
    // mov r4, #0
    // ldr r1, [r0, r1]
    // add r2, r4, #0
    // add r3, r5, #0
    // ldr r0, [r3, #0x18]
    // cmp r1, r0
    // bne _021E8B48
    // add r5, #0x10
    // lsl r0, r2, #4
    // add r4, r5, r0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _021E8B50
    // bl GF_AssertFail
    // b _021E8B50
    // add r2, r2, #1
    // add r3, #0x10
    // cmp r2, #0x10
    // blt _021E8B30
    // cmp r4, #0
    // bne _021E8B58
    // bl GF_AssertFail
    // add r0, r4, #0
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021E8B60(void) {
    ov01_0220455C();
}


void ov01_021E8B6C(void) {
    ov01_022044E0();
}


void ov01_021E8B78(void) {
    ov01_02204570();
}


void ov01_021E8B84(void) {
    ov01_02204590();
}


void ov01_021E8B90(void) {
    ov01_02204560();
}


void ov01_021E8B9C(void) {
    // mov r1, #0x4d
    // lsl r1, r1, #2
    // ldr r3, _021E8BA8 ; =NARC_GetFileCount
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021E8BA8: .word NARC_GetFileCount
    // TODO: decompile
}


void ov01_021E8BAC(void) {
    // push {r3, lr}
    // sub sp, #0x18
    // mov r2, #0x4d
    // lsl r2, r2, #2
    // ldr r0, [r0, r2]
    // add r2, sp, #0
    // bl NARC_ReadWholeMember
    // add r0, sp, #0
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021E8BCA
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #0
    // add r3, sp, #0
    // sub r1, r0, #1
    // lsl r2, r0, #2
    // add r2, r3, r2
    // ldr r2, [r2, #8]
    // cmp r2, r1
    // beq _021E8BE4
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #4
    // blo _021E8BD0
    // add sp, #0x18
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_021E8BE8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bne _021E8BF4
    // bl GF_AssertFail
    // mov r1, #0x10
    // mov r0, #0
    // mov r2, #0x38
    // cmp r1, #0x10
    // bne _021E8C0E
    // add r3, r0, #0
    // mul r3, r2
    // add r3, r5, r3
    // add r3, #0x34
    // ldrb r3, [r3]
    // cmp r3, #0
    // bne _021E8C0E
    // add r1, r0, #0
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #0x10
    // blo _021E8BFA
    // cmp r1, #0x10
    // beq _021E8C32
    // add r2, r1, #0
    // mov r0, #0x38
    // mul r2, r0
    // add r0, r5, r2
    // add r0, #0x34
    // strb r4, [r0]
    // add r0, r5, r2
    // mov r1, #0
    // add r0, #0x35
    // strb r1, [r0]
    // b _021E8C3A
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, r2
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021E8C40(void) {
    // add r1, r0, #0
    // mov r3, #0
    // add r1, #0x34
    // strb r3, [r1]
    // str r3, [r0, #0x30]
    // str r3, [r0, #0x2c]
    // add r2, r3, #0
    // lsl r1, r3, #2
    // add r1, r0, r1
    // str r2, [r1, #0x14]
    // add r1, r3, #1
    // lsl r1, r1, #0x18
    // lsr r3, r1, #0x18
    // cmp r3, #6
    // blo _021E8C4E
    // bx lr
    // TODO: decompile
}


void ov01_021E8C60(void) {
    // push {r4, r5}
    // mov r4, #0
    // add r3, r4, #0
    // add r5, r0, #0
    // add r2, r5, #0
    // add r2, #0x34
    // ldrb r2, [r2]
    // cmp r1, r2
    // bne _021E8C7A
    // mov r1, #0x38
    // mul r1, r3
    // add r4, r0, r1
    // b _021E8C82
    // add r3, r3, #1
    // add r5, #0x38
    // cmp r3, #0x10
    // blt _021E8C68
    // add r0, r4, #0
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov01_021E8C88(void) {
    GF_AssertFail();
}


void ov01_021E8CA4(void) {
    GF_AssertFail();
}


void ov01_021E8CBC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // add r4, r1, #0
    // cmp r4, r0
    // blt _021E8CCE
    // bl GF_AssertFail
    // lsl r0, r4, #2
    // ldr r0, [r5, r0]
    // str r0, [sp, #4]
    // bl ov01_021E8858
    // str r0, [sp]
    // ldr r0, [r5, #0x2c]
    // bl ov01_021E8858
    // add r7, r0, #0
    // mov r4, #0
    // lsl r0, r4, #2
    // add r6, r5, r0
    // ldr r0, [r6, #0x14]
    // cmp r0, #0
    // beq _021E8CFC
    // add r1, r7, #0
    // bl ov01_02204518
    // ldr r0, [r6, #0x14]
    // ldr r1, [sp]
    // bl ov01_0220450C
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #6
    // blo _021E8CE4
    // ldr r0, [sp, #4]
    // str r0, [r5, #0x2c]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E8D10(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x40]
    // str r1, [sp, #0x1c]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x4c]
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x4c]
    // add r0, r3, #0
    // mov r5, #0
    // str r3, [sp, #0x24]
    // ldr r6, [sp, #0x44]
    // ldr r7, [sp, #0x48]
    // cmp r0, #0
    // ble _021E8D68
    // str r6, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x40]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x20]
    // add r1, r5, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // mov r3, #0
    // str r7, [sp, #0x14]
    // bl ov01_021E8894
    // add r4, r0, #0
    // bne _021E8D56
    // bl GF_AssertFail
    // ldr r0, [sp, #0x4c]
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov01_021E8CA4
    // ldr r0, [sp, #0x24]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _021E8D30
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E8D6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // str r0, [sp]
    // ldr r0, [r6, #0x2c]
    // bl ov01_021E8858
    // add r7, r0, #0
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #0x14]
    // cmp r0, #0
    // beq _021E8D8A
    // add r1, r7, #0
    // bl ov01_02204518
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blt _021E8D7E
    // ldr r0, [r6, #0x10]
    // mov r5, #0
    // cmp r0, #0
    // ble _021E8DB0
    // add r4, r6, #0
    // add r7, r5, #0
    // ldr r0, [r4]
    // ldr r1, [sp]
    // bl ov01_021E8A50
    // stmia r4!, {r7}
    // ldr r0, [r6, #0x10]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _021E8D9E
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E8DB4(void) {
    // push {r4, lr}
    // mov r1, #0xe
    // mov r0, #4
    // lsl r1, r1, #6
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r2, #0xe
    // mov r0, #0
    // add r1, r4, #0
    // lsl r2, r2, #6
    // bl MIi_CpuClearFast
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021E8DD4(void) {
    Heap_Free(0);
}


void ov01_021E8DE8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r0, #0
    // add r0, r1, #0
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // add r6, r3, #0
    // bl ov01_021E8BE8
    // add r5, r0, #0
    // bne _021E8E06
    // bl GF_AssertFail
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #0x34]
    // add r2, r5, #0
    // bl ov01_021E8C88
    // add r0, sp, #0x38
    // ldrb r4, [r0]
    // cmp r4, #0
    // bne _021E8E1C
    // bl GF_AssertFail
    // cmp r4, #0
    // bne _021E8E22
    // mov r4, #1
    // ldr r0, [sp, #0x3c]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x34]
    // add r0, r6, #0
    // str r5, [sp, #0xc]
    // bl ov01_021E8D10
    // str r6, [r5, #0x30]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E8E40(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r2, #0
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r3, #0
    // cmp r4, #6
    // blo _021E8E52
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov01_021E8C60
    // add r5, r0, #0
    // add r5, #0x14
    // lsl r4, r4, #2
    // ldr r0, [r5, r4]
    // cmp r0, #0
    // beq _021E8E6A
    // bl GF_AssertFail
    // str r6, [r5, r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E8E70(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r4, #0
    // bne _021E8E80
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021E8C60
    // add r1, r6, #0
    // bl ov01_021E8CBC
    // mov r1, #0
    // bl ov01_021E8B60
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021E8E98(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // cmp r5, #0
    // bne _021E8EAA
    // bl GF_AssertFail
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov01_021E8C60
    // add r1, r7, #0
    // bl ov01_021E8CBC
    // add r5, r0, #0
    // cmp r4, #0
    // beq _021E8EC6
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0
    // bl ov01_021E8B60
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E8ED0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bne _021E8EDE
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov01_021E8C60
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021E8D6C
    // add r0, r4, #0
    // bl ov01_021E8C40
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021E8EF8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bne _021E8F04
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021E8C60
    // ldr r0, [r0, #0x2c]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021E8F10(void) {
    // push {r4, lr}
    // bl ov01_021E8EF8
    // add r4, r0, #0
    // bne _021E8F1E
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl ov01_02204560
    // cmp r0, #0
    // beq _021E8F2C
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021E8F30(void) {
    ov01_021E8C60();
}


void ov01_021E8F3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r4, r0, #0
    // ldr r0, [sp, #0x50]
    // ldr r7, [sp, #0x54]
    // str r0, [sp, #0x50]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // add r0, r7, #0
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    // bl ov01_021E8B9C
    // cmp r4, r0
    // bge _021E8F86
    // ldr r0, [sp, #0x50]
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021E8F86
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x50]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // ldr r0, [r0, #8]
    // mvn r1, r1
    // str r0, [sp, #0x24]
    // cmp r0, r1
    // beq _021E8F86
    // ldr r0, [sp, #0x50]
    // ldrb r0, [r0, #1]
    // bl ov01_021E8864
    // cmp r0, #0
    // beq _021E8F88
    // b _021E90AC
    // ldr r0, [sp, #0x50]
    // ldrb r0, [r0, #1]
    // bl ov01_021E887C
    // cmp r0, #0
    // bne _021E8F9A
    // mov r0, #1
    // str r0, [sp, #0x14]
    // b _021E8F9E
    // mov r0, #0
    // str r0, [sp, #0x14]
    // mov r4, #0
    // add r1, r7, #0
    // ldr r0, [r1, #0x14]
    // cmp r0, #0
    // bne _021E9062
    // lsl r0, r4, #4
    // add r5, r7, r0
    // mov r0, #1
    // str r0, [r5, #0x14]
    // mov r0, #0x4e
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // bl ov01_022042FC
    // add r6, r0, #0
    // bne _021E8FC2
    // bl GF_AssertFail
    // ldr r0, [sp, #0x50]
    // ldrb r0, [r0, #2]
    // cmp r0, #0
    // beq _021E8FD8
    // mov r1, #1
    // add r0, r6, #0
    // add r2, r1, #0
    // mov r3, #0
    // bl ov01_022044C8
    // b _021E8FE6
    // mov r1, #0
    // mov r2, #0
    // add r0, r6, #0
    // mvn r1, r1
    // add r3, r2, #0
    // bl ov01_022044C8
    // ldr r0, [sp, #0x24]
    // mov r1, #0x13
    // str r0, [r5, #0x18]
    // mov r0, #0
    // str r0, [r5, #0x1c]
    // ldr r0, [sp, #8]
    // lsl r1, r1, #4
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r0, [r7, r1]
    // add r1, #8
    // ldr r1, [r7, r1]
    // add r2, r6, #0
    // bl ov01_021E87A8
    // add r0, r6, #0
    // str r6, [r5, #0x10]
    // bl ov01_022044E0
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // beq _021E9044
    // ldr r0, [sp, #0x50]
    // ldrb r0, [r0, #2]
    // cmp r0, #0
    // beq _021E9034
    // ldr r3, [sp, #0x24]
    // mov r0, #0x11
    // lsl r0, r0, #4
    // lsl r3, r3, #0x18
    // ldr r1, [sp, #0xc]
    // ldr r2, [r5, #0x10]
    // add r0, r7, r0
    // lsr r3, r3, #0x18
    // bl ov01_021E8744
    // b _021E9036
    // mov r0, #1
    // cmp r0, #0
    // beq _021E906A
    // ldr r0, [sp, #0xc]
    // ldr r1, [r5, #0x10]
    // bl ov01_0220450C
    // b _021E906A
    // ldr r0, [sp, #0x50]
    // ldrb r0, [r0, #1]
    // cmp r0, #8
    // bne _021E906A
    // ldr r0, [sp, #0x1c]
    // add r1, r0, #0
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp, #0x1c]
    // ldr r2, [r5, #0x10]
    // lsl r1, r0, #2
    // add r0, sp, #0x28
    // str r2, [r0, r1]
    // b _021E906A
    // add r4, r4, #1
    // add r1, #0x10
    // cmp r4, #0x10
    // blt _021E8FA2
    // cmp r4, #0x10
    // bne _021E9072
    // bl GF_AssertFail
    // ldr r0, [sp, #0x18]
    // add r0, r0, #4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // cmp r0, #4
    // bge _021E9084
    // b _021E8F6C
    // ldr r0, [sp, #0x50]
    // ldrb r0, [r0, #1]
    // cmp r0, #8
    // bne _021E90AC
    // ldr r0, [sp, #0x58]
    // bl ov01_02204834
    // add r1, r0, #0
    // lsl r2, r1, #2
    // add r1, sp, #0x28
    // ldr r0, [sp, #0xc]
    // ldr r1, [r1, r2]
    // bl ov01_0220450C
    // ldr r0, [sp, #0x58]
    // ldr r1, [sp, #0xc]
    // add r2, sp, #0x28
    // mov r3, #4
    // bl ov01_0220476C
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021E90B0(void) {
    ov01_021E8C60();
}

