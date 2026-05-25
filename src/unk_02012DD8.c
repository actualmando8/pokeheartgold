/* Decompiled from asm/unk_02012DD8.s */
#include "global.h"

void sub_02012DD8(void) {
    Heap_Alloc(*((u32*)(r0 + 0x20)), 0x4c);
    *((u32*)(r5 + 0x14)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    sub_02012E6C(*((u32*)(r5 + 0x14)), r4, *((u32*)(r5 + 4)), *((u32*)(r5 + 8)));
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
}



void sub_02012E10(void) {
    sub_02012F54(*((u32*)(r0 + 0x14)));
    sub_02010F34(*((u32*)(r4 + 0x34)), *((u32*)(r4 + 0x44)), *((u32*)(r5 + 0x10)));
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
    sub_02010EC8(r4);
    Heap_Free(*((u32*)(r5 + 0x14)));
    *((u32*)(r5 + 0x14)) = r6;
    *((u32*)(r5 + 0xc)) = (*((u32*)(r5 + 0xc)) + 1);
    GF_AssertFail((*((u32*)(r5 + 0xc)) + 1));
}



void sub_02012E6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r4, r1, #0
    // ldr r6, [sp, #0x38]
    // str r3, [sp, #0x1c]
    // str r2, [sp, #0x18]
    // ldrb r1, [r4, #8]
    // ldr r3, [sp, #0x44]
    // add r2, r6, #0
    // add r5, r0, #0
    // ldr r7, [sp, #0x3c]
    // bl sub_02010E64
    // ldr r0, _02012F44 ; =0x007FFF80
    // mov r1, #0
    // str r0, [r5, #0x14]
    // ldrsh r1, [r4, r1]
    // lsr r0, r0, #7
    // str r1, [r5, #0xc]
    // mov r1, #2
    // ldrsh r1, [r4, r1]
    // str r1, [r5, #0x10]
    // ldr r1, [r4, #4]
    // str r1, [r5, #0x18]
    // ldr r1, [r4, #4]
    // str r1, [r5, #0x1c]
    // ldr r1, [sp, #0x18]
    // bl _s32_div_f
    // str r0, [r5, #0x20]
    // ldr r0, [sp, #0x18]
    // str r0, [r5, #0x24]
    // ldr r0, [sp, #0x1c]
    // str r0, [r5, #0x28]
    // mov r0, #0
    // str r0, [r5, #0x2c]
    // ldr r0, [sp, #0x40]
    // str r7, [r5, #0x44]
    // str r0, [r5, #0x48]
    // ldr r0, [sp, #0x44]
    // str r0, [r5, #0x30]
    // ldrb r0, [r4, #0xb]
    // str r0, [r5, #0x34]
    // ldrb r0, [r4, #8]
    // str r0, [r5, #0x38]
    // str r6, [r5, #0x3c]
    // mov r0, #1
    // str r0, [r5, #0x40]
    // add r0, r5, #0
    // bl sub_020131AC
    // ldr r0, _02012F48 ; =sub_02010F00
    // ldr r2, _02012F4C ; =0x000003FF
    // add r1, r5, #0
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02010EE0
    // mov r1, #3
    // str r6, [sp]
    // lsl r1, r1, #8
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #0x12
    // lsl r1, r1, #6
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x34]
    // str r0, [sp, #0x14]
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #0xa]
    // ldrb r3, [r4, #8]
    // add r0, r7, #0
    // bl sub_02010F84
    // ldrb r0, [r4, #8]
    // cmp r0, #0
    // bne _02012F22
    // ldr r3, [r5, #0x34]
    // add r0, r7, #0
    // mov r1, #1
    // add r2, r6, #0
    // bl sub_02011068
    // b _02012F2E
    // ldr r3, [r5, #0x34]
    // add r0, r7, #0
    // mov r1, #2
    // add r2, r6, #0
    // bl sub_02011068
    // ldr r0, [sp, #0x44]
    // ldr r2, _02012F50 ; =sub_02010C38
    // str r0, [sp]
    // ldr r0, [r5, #0x48]
    // add r1, r5, #0
    // add r3, r6, #0
    // bl sub_0200FF88
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02012F44: .word 0x007FFF80
    // _02012F48: .word sub_02010F00
    // _02012F4C: .word 0x000003FF
    // _02012F50: .word sub_02010C38
    // TODO: decompile
}



void sub_02012F54(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x2c]
    // add r1, r0, #1
    // str r1, [r4, #0x2c]
    // ldr r0, [r4, #0x28]
    // cmp r1, r0
    // blt _02012FF0
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // ldr r0, [r4, #0x24]
    // sub r0, r0, #1
    // cmp r0, #0
    // ble _02012FE2
    // ldr r2, [r4, #0x1c]
    // ldr r1, [r4, #0x20]
    // add r0, r4, #0
    // add r1, r2, r1
    // str r1, [r4, #0x1c]
    // ldr r1, [r4, #0x24]
    // ldr r2, _02012FF4 ; =0x0000FFFF
    // sub r1, r1, #1
    // str r1, [r4, #0x24]
    // ldr r1, [r4, #0x1c]
    // add r0, #0x1c
    // cmp r1, r2
    // blt _02012F98
    // add r3, r2, #0
    // ldr r1, [r0]
    // sub r1, r1, r2
    // str r1, [r0]
    // ldr r1, [r4, #0x1c]
    // cmp r1, r3
    // bge _02012F8C
    // cmp r1, #0
    // bge _02012FAE
    // add r2, r4, #0
    // ldr r0, _02012FF4 ; =0x0000FFFF
    // add r2, #0x1c
    // ldr r1, [r2]
    // add r1, r1, r0
    // str r1, [r2]
    // ldr r1, [r4, #0x1c]
    // cmp r1, #0
    // blt _02012FA2
    // ldr r0, _02012FF8 ; =0x00007FFF
    // cmp r1, r0
    // blt _02012FD0
    // ldr r0, [r4, #0x18]
    // cmp r1, r0
    // bge _02012FD0
    // ldr r0, [r4, #0x40]
    // cmp r0, #1
    // bne _02012FD0
    // ldr r0, [r4, #0x44]
    // ldr r1, [r4, #0x38]
    // ldr r2, [r4, #0x3c]
    // ldr r3, [r4, #0x34]
    // bl sub_02010FEC
    // mov r0, #0
    // str r0, [r4, #0x40]
    // add r0, r4, #0
    // bl sub_020131AC
    // ldr r0, _02012FFC ; =sub_02010F00
    // ldr r2, _02013000 ; =0x000003FF
    // add r1, r4, #0
    // bl SysTask_CreateOnVWaitQueue
    // b _02012FF0
    // ldr r0, [r4, #0x48]
    // ldr r1, [r4, #8]
    // ldr r2, [r4, #0x30]
    // bl sub_0200FFB4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _02012FF4: .word 0x0000FFFF
    // _02012FF8: .word 0x00007FFF
    // _02012FFC: .word sub_02010F00
    // _02013000: .word 0x000003FF
    // TODO: decompile
}



void sub_02013004(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // ldr r0, [sp, #0x28]
    // add r5, r3, #0
    // str r0, [sp, #0x10]
    // asr r0, r0, #4
    // add r4, r2, #0
    // lsl r2, r0, #1
    // add r0, r2, #1
    // str r1, [sp]
    // lsl r1, r0, #1
    // ldr r0, _020131A4 ; =FX_SinCosTable_
    // ldr r3, [sp, #0x2c]
    // ldrsh r1, [r0, r1]
    // ldr r0, _020131A8 ; =0x0000FFFF
    // ldr r6, [sp, #0x30]
    // mul r0, r1
    // asr r1, r0, #0xc
    // ldr r0, [sp]
    // ldr r7, [sp, #0x34]
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // ldr r0, _020131A4 ; =FX_SinCosTable_
    // lsl r1, r2, #1
    // ldrsh r1, [r0, r1]
    // ldr r0, _020131A8 ; =0x0000FFFF
    // mul r0, r1
    // asr r0, r0, #0xc
    // add r1, r4, r0
    // asr r0, r3, #4
    // lsl r0, r0, #1
    // mov ip, r0
    // add r0, r0, #1
    // lsl r2, r0, #1
    // ldr r0, _020131A4 ; =FX_SinCosTable_
    // ldrsh r2, [r0, r2]
    // ldr r0, _020131A8 ; =0x0000FFFF
    // mul r0, r2
    // asr r2, r0, #0xc
    // ldr r0, [sp]
    // add r0, r0, r2
    // str r0, [sp, #8]
    // mov r0, ip
    // lsl r2, r0, #1
    // ldr r0, _020131A4 ; =FX_SinCosTable_
    // ldrsh r2, [r0, r2]
    // ldr r0, _020131A8 ; =0x0000FFFF
    // mul r0, r2
    // asr r0, r0, #0xc
    // add r0, r4, r0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // sub r2, r3, r0
    // ldr r0, _020131A8 ; =0x0000FFFF
    // lsr r0, r0, #1
    // cmp r2, r0
    // bne _0201308C
    // cmp r5, #0
    // blt _0201307E
    // cmp r5, r4
    // blt _02013080
    // b _020131A0
    // mov r0, #0
    // str r0, [r6]
    // mov r0, #0xff
    // add sp, #0x14
    // str r0, [r7]
    // pop {r4, r5, r6, r7, pc}
    // cmp r3, #0
    // blt _02013100
    // ldr r0, _020131A8 ; =0x0000FFFF
    // lsr r0, r0, #1
    // cmp r3, r0
    // bge _02013100
    // cmp r1, r4
    // bge _020130A0
    // add r0, r1, #0
    // b _020130A2
    // add r0, r4, #0
    // cmp r1, r4
    // ble _020130AA
    // add r2, r1, #0
    // b _020130AC
    // add r2, r4, #0
    // cmp r0, r5
    // bgt _020130CC
    // cmp r5, r2
    // bgt _020130CC
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp]
    // sub r2, r2, r0
    // sub r0, r5, r1
    // mul r0, r2
    // sub r1, r1, r4
    // bl _s32_div_f
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [r6]
    // b _020130E6
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // sub r1, r1, r0
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // mul r0, r1
    // ldr r1, [sp, #4]
    // sub r1, r1, r4
    // bl _s32_div_f
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [r6]
    // ldr r0, [r6]
    // cmp r0, #0xff
    // ble _020130F0
    // mov r0, #0xff
    // b _020130F6
    // cmp r0, #0
    // bge _020130F6
    // mov r0, #0
    // str r0, [r6]
    // mov r0, #0xff
    // add sp, #0x14
    // str r0, [r7]
    // pop {r4, r5, r6, r7, pc}
    // cmp r1, r4
    // bge _02013108
    // add r0, r1, #0
    // b _0201310A
    // add r0, r4, #0
    // cmp r1, r4
    // ble _02013112
    // add r2, r1, #0
    // b _02013114
    // add r2, r4, #0
    // cmp r0, r5
    // bgt _02013144
    // cmp r5, r2
    // bgt _02013144
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp]
    // sub r2, r2, r0
    // sub r0, r5, r1
    // mul r0, r2
    // sub r1, r1, r4
    // bl _s32_div_f
    // ldr r1, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [r6]
    // cmp r0, #0xff
    // ble _0201313A
    // mov r0, #0xff
    // b _02013140
    // cmp r0, #0
    // bge _02013140
    // mov r0, #0
    // str r0, [r6]
    // b _02013148
    // mov r0, #0
    // str r0, [r6]
    // ldr r0, [sp, #4]
    // cmp r0, r4
    // bge _02013152
    // add r1, r0, #0
    // b _02013154
    // add r1, r4, #0
    // ldr r0, [sp, #4]
    // cmp r0, r4
    // bgt _0201315C
    // add r0, r4, #0
    // cmp r1, r5
    // bgt _02013190
    // cmp r5, r0
    // bgt _02013190
    // ldr r1, [sp, #8]
    // ldr r0, [sp]
    // sub r1, r1, r0
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // mul r0, r1
    // ldr r1, [sp, #4]
    // sub r1, r1, r4
    // bl _s32_div_f
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [r7]
    // cmp r0, #0xff
    // ble _02013186
    // mov r0, #0xff
    // b _0201318C
    // cmp r0, #0
    // bge _0201318C
    // mov r0, #0
    // str r0, [r7]
    // b _02013194
    // ldr r0, [r6]
    // str r0, [r7]
    // ldr r1, [r7]
    // ldr r0, [r6]
    // cmp r0, r1
    // ble _020131A0
    // str r1, [r6]
    // str r0, [r7]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _020131A4: .word FX_SinCosTable_
    // _020131A8: .word 0x0000FFFF
    // TODO: decompile
}



void sub_020131AC(void) {
    sub_02010EE0(0);
    // add r7, sp, #0x14
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // add r0, sp, #0x10
    // str r0, [sp, #0xc]
    sub_02013004(*((u32*)(r5 + 0x14)), *((u32*)(r5 + 0xc)), *((u32*)(r5 + 0x10)), 0);
    // ldr r1, [sp, #0x14]
    // strh r1, [r4, r0]
    // ldr r1, [sp, #0x10]
    // strh r1, [r4, r0]
}



void sub_020131F4(void) {
    // cmp r1, #0
    // ldr r1, _02013218 ; =0xFFFF1FFF
    // bne _0201320A
    // mov r3, #1
    // lsl r3, r3, #0x1a
    // ldr r2, [r3]
    // lsl r0, r0, #0xd
    // and r1, r2
    // orr r0, r1
    // str r0, [r3]
    // bx lr
    // ldr r3, _0201321C ; =0x04001000
    // lsl r0, r0, #0xd
    // ldr r2, [r3]
    // and r1, r2
    // orr r0, r1
    // str r0, [r3]
    // bx lr
    // _02013218: .word 0xFFFF1FFF
    // _0201321C: .word 0x04001000
    // TODO: decompile
}



void sub_02013220(void) {
    // push {r3, r4}
    // cmp r2, #0
    // bne _02013262
    // cmp r3, #0
    // bne _02013246
    // ldr r2, _0201329C ; =0x04000048
    // ldrh r3, [r2]
    // mov r2, #0x3f
    // bic r3, r2
    // add r2, r3, #0
    // orr r2, r0
    // cmp r1, #0
    // beq _0201323E
    // mov r0, #0x20
    // orr r2, r0
    // ldr r0, _0201329C ; =0x04000048
    // strh r2, [r0]
    // pop {r3, r4}
    // bx lr
    // ldr r2, _020132A0 ; =0x04001048
    // ldrh r3, [r2]
    // mov r2, #0x3f
    // bic r3, r2
    // add r2, r3, #0
    // orr r2, r0
    // cmp r1, #0
    // beq _0201325A
    // mov r0, #0x20
    // orr r2, r0
    // ldr r0, _020132A0 ; =0x04001048
    // strh r2, [r0]
    // pop {r3, r4}
    // bx lr
    // cmp r3, #0
    // ldr r2, _020132A4 ; =0xFFFFC0FF
    // bne _02013282
    // ldr r4, _0201329C ; =0x04000048
    // lsl r0, r0, #8
    // ldrh r3, [r4]
    // and r2, r3
    // orr r2, r0
    // cmp r1, #0
    // beq _0201327A
    // lsr r0, r4, #0xd
    // orr r2, r0
    // ldr r0, _0201329C ; =0x04000048
    // strh r2, [r0]
    // pop {r3, r4}
    // bx lr
    // ldr r4, _020132A0 ; =0x04001048
    // lsl r0, r0, #8
    // ldrh r3, [r4]
    // and r2, r3
    // orr r2, r0
    // cmp r1, #0
    // beq _02013294
    // lsr r0, r4, #0xd
    // orr r2, r0
    // ldr r0, _020132A0 ; =0x04001048
    // strh r2, [r0]
    // pop {r3, r4}
    // bx lr
    // _0201329C: .word 0x04000048
    // _020132A0: .word 0x04001048
    // _020132A4: .word 0xFFFFC0FF
    // TODO: decompile
}



void sub_020132A8(void) {
    // cmp r2, #0
    // bne _020132C6
    // ldr r2, _020132E0 ; =0x0400004A
    // ldrh r3, [r2]
    // mov r2, #0x3f
    // bic r3, r2
    // add r2, r3, #0
    // orr r2, r0
    // cmp r1, #0
    // beq _020132C0
    // mov r0, #0x20
    // orr r2, r0
    // ldr r0, _020132E0 ; =0x0400004A
    // strh r2, [r0]
    // bx lr
    // ldr r2, _020132E4 ; =0x0400104A
    // ldrh r3, [r2]
    // mov r2, #0x3f
    // bic r3, r2
    // add r2, r3, #0
    // orr r2, r0
    // cmp r1, #0
    // beq _020132DA
    // mov r0, #0x20
    // orr r2, r0
    // ldr r0, _020132E4 ; =0x0400104A
    // strh r2, [r0]
    // bx lr
    // _020132E0: .word 0x0400004A
    // _020132E4: .word 0x0400104A
    // TODO: decompile
}



void sub_020132E8(void) {
    // push {r3}
    // sub sp, #4
    // cmp r0, #0
    // bne _02013308
    // cmp r1, #0
    // bne _020132FE
    // ldr r0, _0201332C ; =0x04000048
    // ldrb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // b _0201331E
    // ldr r0, _02013330 ; =0x04001048
    // ldrb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // b _0201331E
    // cmp r1, #0
    // bne _02013316
    // ldr r0, _02013334 ; =0x04000049
    // ldrb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // b _0201331E
    // ldr r0, _02013338 ; =0x04001049
    // ldrb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // add r1, sp, #0
    // mov r0, #0
    // ldrsb r0, [r1, r0]
    // add sp, #4
    // pop {r3}
    // bx lr
    // nop
    // _0201332C: .word 0x04000048
    // _02013330: .word 0x04001048
    // _02013334: .word 0x04000049
    // _02013338: .word 0x04001049
    // TODO: decompile
}



void sub_0201333C(void) {
    // push {r3}
    // sub sp, #4
    // cmp r0, #0
    // bne _02013348
    // ldr r0, _0201335C ; =0x0400004A
    // b _0201334A
    // ldr r0, _02013360 ; =0x0400104A
    // ldrb r1, [r0]
    // add r0, sp, #0
    // strb r1, [r0]
    // add r1, sp, #0
    // mov r0, #0
    // ldrsb r0, [r1, r0]
    // add sp, #4
    // pop {r3}
    // bx lr
    // _0201335C: .word 0x0400004A
    // _02013360: .word 0x0400104A
    // TODO: decompile
}



void sub_02013364(void) {
    // push {r4, r5}
    // add r4, r2, #0
    // add r2, r3, #0
    // ldr r3, [sp, #8]
    // cmp r3, #0
    // bne _020133C2
    // ldr r3, [sp, #0xc]
    // cmp r3, #0
    // bne _0201339C
    // lsl r0, r0, #8
    // mov r3, #0xff
    // add r5, r0, #0
    // lsl r3, r3, #8
    // lsl r0, r4, #0x18
    // and r5, r3
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // lsr r0, r0, #0x18
    // add r4, r5, #0
    // orr r4, r0
    // ldr r0, _02013414 ; =0x04000040
    // orr r1, r3
    // strh r4, [r0]
    // strh r1, [r0, #4]
    // pop {r4, r5}
    // bx lr
    // lsl r0, r0, #8
    // mov r3, #0xff
    // add r5, r0, #0
    // lsl r3, r3, #8
    // lsl r0, r4, #0x18
    // and r5, r3
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // lsr r0, r0, #0x18
    // add r4, r5, #0
    // orr r4, r0
    // ldr r0, _02013418 ; =0x04001040
    // orr r1, r3
    // strh r4, [r0]
    // strh r1, [r0, #4]
    // pop {r4, r5}
    // bx lr
    // ldr r3, [sp, #0xc]
    // cmp r3, #0
    // bne _020133EE
    // lsl r0, r0, #8
    // mov r3, #0xff
    // add r5, r0, #0
    // lsl r3, r3, #8
    // lsl r0, r4, #0x18
    // and r5, r3
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // lsr r0, r0, #0x18
    // add r4, r5, #0
    // orr r4, r0
    // ldr r0, _0201341C ; =0x04000042
    // orr r1, r3
    // strh r4, [r0]
    // strh r1, [r0, #4]
    // pop {r4, r5}
    // bx lr
    // lsl r0, r0, #8
    // mov r3, #0xff
    // add r5, r0, #0
    // lsl r3, r3, #8
    // lsl r0, r4, #0x18
    // and r5, r3
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // lsr r0, r0, #0x18
    // add r4, r5, #0
    // orr r4, r0
    // ldr r0, _02013420 ; =0x04001042
    // orr r1, r3
    // strh r4, [r0]
    // strh r1, [r0, #4]
    // pop {r4, r5}
    // bx lr
    // _02013414: .word 0x04000040
    // _02013418: .word 0x04001040
    // _0201341C: .word 0x04000042
    // _02013420: .word 0x04001042
    // TODO: decompile
}



void sub_02013424(void) {
}



void sub_02013440(void) {
    // push {r4, r5, r6, lr}
    // ldr r5, [sp, #0x10]
    // add r0, #0x10
    // lsl r4, r5, #5
    // add r6, r0, r4
    // lsl r0, r3, #4
    // add r4, r6, r0
    // str r1, [r6, r0]
    // str r2, [r4, #4]
    // str r3, [r4, #8]
    // ldr r0, _02013464 ; =sub_020134D0
    // add r1, r4, #0
    // mov r2, #1
    // str r5, [r4, #0xc]
    // bl SysTask_CreateOnVWaitQueue
    // pop {r4, r5, r6, pc}
    // nop
    // _02013464: .word sub_020134D0
    // TODO: decompile
}



void sub_02013468(void) {
}



void sub_02013488(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r5, [sp, #0x20]
    // add r7, r1, #0
    // add r0, #0x80
    // lsl r1, r5, #5
    // add r6, r0, r1
    // add r4, r2, #0
    // ldr r0, [sp, #0x1c]
    // add r2, r3, #0
    // lsl r3, r0, #4
    // add r1, r6, r3
    // strh r7, [r6, r3]
    // strh r4, [r1, #2]
    // strh r2, [r1, #4]
    // ldr r2, [sp, #0x18]
    // strh r2, [r1, #6]
    // str r0, [r1, #8]
    // ldr r0, _020134B8 ; =sub_02013504
    // mov r2, #1
    // str r5, [r1, #0xc]
    // bl SysTask_CreateOnVWaitQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020134B8: .word sub_02013504
    // TODO: decompile
}



void sub_020134BC(void) {
    // ldmia r1!, {r0, r1}
    sub_020131F4();
    SysTask_Destroy(r4);
}



void sub_020134D0(void) {
}



void sub_020134EC(void) {
}



void sub_02013504(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldrsh r0, [r3, r0]
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r5]
    sub_02013364(0, 2, 4, r1);
    SysTask_Destroy(r4);
}


