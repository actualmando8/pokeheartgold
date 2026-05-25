/* Decompiled from asm/overlay_10_trainer_ai.s */
#include "global.h"

void ov10_0221BF44(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // add r5, r1, #0
    // bl ov10_0221EE88
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // beq _0221BF9A
    // add r6, r0, #0
    // add r4, r0, #5
    // mov r0, #1
    // tst r0, r1
    // beq _0221BF80
    // mov r0, #0xd9
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // mov r0, #0x10
    // tst r0, r1
    // bne _0221BF78
    // mov r0, #0xd5
    // mov r1, #0
    // lsl r0, r0, #2
    // strb r1, [r5, r0]
    // ldr r0, [sp]
    // add r1, r5, #0
    // bl ov10_0221C278
    // ldr r0, [r5, r6]
    // mov r1, #0
    // lsr r0, r0, #1
    // str r0, [r5, r6]
    // ldrb r0, [r5, r4]
    // add r0, r0, #1
    // strb r0, [r5, r4]
    // ldr r0, _0221C030 ; =0x00000355
    // strb r1, [r5, r0]
    // add r0, #0xb
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bne _0221BF5E
    // mov r3, #0xd9
    // lsl r3, r3, #2
    // ldrb r1, [r5, r3]
    // mov r0, #2
    // tst r0, r1
    // beq _0221BFAA
    // mov r0, #4
    // b _0221C01C
    // mov r0, #4
    // tst r0, r1
    // beq _0221BFB4
    // mov r0, #5
    // b _0221C01C
    // add r0, r3, #0
    // sub r0, #0xc
    // ldrsb r0, [r5, r0]
    // add r1, sp, #4
    // mov r4, #1
    // strb r0, [r1, #4]
    // mov r0, #0
    // strb r0, [r1]
    // add r3, #0x6b
    // ldrb r3, [r5, r3]
    // mov r0, #0xc0
    // add r2, r4, #0
    // mul r0, r3
    // add r0, r5, r0
    // add r3, r0, #2
    // ldr r0, _0221C034 ; =0x00002D4C
    // ldrh r0, [r3, r0]
    // cmp r0, #0
    // beq _0221C004
    // mov r0, #0xd6
    // add r6, r5, r2
    // lsl r0, r0, #2
    // ldrsb r6, [r6, r0]
    // ldrb r0, [r1, #4]
    // cmp r0, r6
    // bne _0221BFF8
    // add r0, sp, #8
    // strb r6, [r0, r4]
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // add r7, r4, #0
    // lsr r4, r0, #0x18
    // add r0, sp, #4
    // strb r2, [r0, r7]
    // ldrb r0, [r1, #4]
    // cmp r0, r6
    // bge _0221C004
    // strb r6, [r1, #4]
    // mov r4, #1
    // strb r2, [r1]
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #4
    // blt _0221BFD2
    // ldr r0, [sp]
    // bl BattleSystem_Random
    // add r1, r4, #0
    // bl _s32_div_f
    // add r0, sp, #4
    // ldrb r0, [r0, r1]
    // mov r2, #0x3d
    // lsl r2, r2, #4
    // sub r1, r2, #1
    // ldrb r1, [r5, r1]
    // ldrb r3, [r5, r2]
    // add r2, #0xa
    // add r1, r5, r1
    // strb r3, [r1, r2]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0221C030: .word 0x00000355
    // _0221C034: .word 0x00002D4C
    // TODO: decompile
}



void ov10_0221C038(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r7, r0, #0
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, sp, #0x18
    // add r5, r1, #0
    // str r0, [sp, #4]
    // add r0, sp, #0x20
    // str r5, [sp, #8]
    // str r0, [sp]
    // ldr r0, _0221C264 ; =0x000003CF
    // ldrb r2, [r5, r0]
    // ldr r0, [sp, #0xc]
    // cmp r0, r2
    // beq _0221C062
    // ldr r1, _0221C268 ; =0x00002D8C
    // ldr r0, [sp, #8]
    // ldr r0, [r0, r1]
    // cmp r0, #0
    // bne _0221C070
    // mov r1, #0
    // ldr r0, [sp, #4]
    // mvn r1, r1
    // strb r1, [r0]
    // ldr r0, [sp]
    // strh r1, [r0]
    // b _0221C190
    // add r0, r7, #0
    // add r1, r5, #0
    // mov r3, #0xf
    // bl ov10_0221BE20
    // mov r1, #0x3d
    // ldr r0, [sp, #0xc]
    // lsl r1, r1, #4
    // strb r0, [r5, r1]
    // sub r1, r1, #1
    // mov r2, #1
    // ldrb r1, [r5, r1]
    // and r0, r2
    // and r1, r2
    // cmp r0, r1
    // beq _0221C098
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov10_0221EE88
    // ldr r0, _0221C26C ; =0x00000365
    // mov r2, #0
    // add r1, r0, #0
    // strb r2, [r5, r0]
    // sub r1, #0x10
    // strb r2, [r5, r1]
    // sub r0, r0, #5
    // ldr r4, [r5, r0]
    // cmp r4, #0
    // beq _0221C0E2
    // ldr r6, _0221C26C ; =0x00000365
    // mov r0, #1
    // tst r0, r4
    // beq _0221C0D0
    // mov r0, #0xd9
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // mov r0, #0x10
    // tst r0, r1
    // bne _0221C0C8
    // mov r0, #0xd5
    // mov r1, #0
    // lsl r0, r0, #2
    // strb r1, [r5, r0]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov10_0221C278
    // ldrb r0, [r5, r6]
    // asr r4, r4, #1
    // mov r1, #0
    // add r0, r0, #1
    // strb r0, [r5, r6]
    // ldr r0, _0221C270 ; =0x00000355
    // cmp r4, #0
    // strb r1, [r5, r0]
    // bne _0221C0AE
    // mov r2, #0xd9
    // lsl r2, r2, #2
    // ldrb r1, [r5, r2]
    // mov r0, #2
    // tst r0, r1
    // beq _0221C0F6
    // ldr r0, [sp, #4]
    // mov r1, #4
    // strb r1, [r0]
    // b _0221C190
    // mov r0, #4
    // tst r0, r1
    // beq _0221C104
    // ldr r0, [sp, #4]
    // mov r1, #5
    // strb r1, [r0]
    // b _0221C190
    // add r0, r2, #0
    // sub r0, #0xc
    // ldrsb r1, [r5, r0]
    // add r0, sp, #0x10
    // add r2, #0x6b
    // strb r1, [r0, #4]
    // mov r1, #0
    // strb r1, [r0]
    // ldrb r3, [r5, r2]
    // mov r2, #0xc0
    // mov r4, #1
    // mul r2, r3
    // add r2, r5, r2
    // add r1, r4, #0
    // add r2, r2, #2
    // ldr r3, _0221C274 ; =0x00002D4C
    // ldrh r3, [r2, r3]
    // cmp r3, #0
    // beq _0221C14E
    // mov r3, #0xd6
    // add r6, r5, r1
    // lsl r3, r3, #2
    // ldrsb r3, [r6, r3]
    // ldrb r6, [r0, #4]
    // cmp r6, r3
    // bne _0221C142
    // add r6, sp, #0x14
    // strb r3, [r6, r4]
    // add r6, sp, #0x10
    // strb r1, [r6, r4]
    // add r4, r4, #1
    // ldrb r6, [r0, #4]
    // cmp r6, r3
    // bge _0221C14E
    // strb r3, [r0, #4]
    // strb r1, [r0]
    // mov r4, #1
    // add r1, r1, #1
    // add r2, r2, #2
    // cmp r1, #4
    // blt _0221C122
    // add r0, r7, #0
    // bl BattleSystem_Random
    // add r1, r4, #0
    // bl _s32_div_f
    // add r0, sp, #0x10
    // ldrb r1, [r0, r1]
    // ldr r0, [sp, #4]
    // strb r1, [r0]
    // add r0, sp, #0x10
    // ldrb r1, [r0, #4]
    // ldr r0, [sp]
    // strh r1, [r0]
    // ldr r0, _0221C264 ; =0x000003CF
    // ldrb r1, [r5, r0]
    // mov r0, #2
    // eor r1, r0
    // ldr r0, [sp, #0xc]
    // cmp r0, r1
    // bne _0221C190
    // ldr r0, [sp]
    // mov r1, #0
    // ldrsh r0, [r0, r1]
    // cmp r0, #0x64
    // bge _0221C190
    // ldr r0, [sp]
    // sub r1, r1, #1
    // strh r1, [r0]
    // ldr r0, [sp, #8]
    // add r0, #0xc0
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, r0, #2
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // cmp r0, #4
    // bge _0221C1AE
    // b _0221C04E
    // mov r1, #0x10
    // add r0, sp, #0x10
    // ldrsh r1, [r0, r1]
    // mov r2, #0
    // mov r6, #1
    // strb r2, [r0, #0xc]
    // add r2, sp, #0x20
    // add r4, r6, #0
    // add r2, #2
    // mov r0, #0
    // ldrsh r3, [r2, r0]
    // cmp r1, r3
    // bne _0221C1CE
    // add r0, sp, #0x1c
    // strb r4, [r0, r6]
    // add r6, r6, #1
    // cmp r1, r3
    // bge _0221C1DA
    // add r0, sp, #0x10
    // add r1, r3, #0
    // strb r4, [r0, #0xc]
    // mov r6, #1
    // add r4, r4, #1
    // add r2, r2, #2
    // cmp r4, #4
    // blt _0221C1C0
    // add r0, r7, #0
    // bl BattleSystem_Random
    // add r1, r6, #0
    // bl _s32_div_f
    // add r0, sp, #0x1c
    // ldrb r3, [r0, r1]
    // ldr r0, _0221C264 ; =0x000003CF
    // ldrb r1, [r5, r0]
    // add r2, r5, r1
    // add r1, r0, #0
    // add r1, #0xb
    // strb r3, [r2, r1]
    // ldrb r2, [r5, r0]
    // add r1, r0, #0
    // add r1, #0xb
    // add r3, r5, r2
    // ldrb r1, [r3, r1]
    // add r3, sp, #0x18
    // add r0, #0x17
    // ldrsb r4, [r3, r1]
    // mov r3, #0xc0
    // mul r3, r2
    // add r3, r5, r3
    // lsl r2, r4, #1
    // add r3, r3, r2
    // ldr r2, _0221C274 ; =0x00002D4C
    // ldrh r6, [r3, r2]
    // lsl r2, r6, #4
    // add r2, r5, r2
    // ldrh r2, [r2, r0]
    // mov r0, #2
    // lsl r0, r0, #8
    // cmp r2, r0
    // bne _0221C23E
    // add r0, r7, #0
    // bl BattleSystem_GetFieldSide
    // cmp r0, #0
    // bne _0221C23E
    // ldr r0, _0221C264 ; =0x000003CF
    // ldrb r2, [r5, r0]
    // add r0, #0xb
    // add r1, r5, r2
    // strb r2, [r1, r0]
    // cmp r6, #0xae
    // bne _0221C25C
    // ldr r2, _0221C264 ; =0x000003CF
    // add r0, r5, #0
    // ldrb r2, [r5, r2]
    // add r1, r6, #0
    // bl CurseUserIsGhost
    // cmp r0, #0
    // bne _0221C25C
    // ldr r0, _0221C264 ; =0x000003CF
    // ldrb r2, [r5, r0]
    // add r0, #0xb
    // add r1, r5, r2
    // strb r2, [r1, r0]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221C264: .word 0x000003CF
    // _0221C268: .word 0x00002D8C
    // _0221C26C: .word 0x00000365
    // _0221C270: .word 0x00000355
    // _0221C274: .word 0x00002D4C
    // TODO: decompile
}



void ov10_0221C278(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r0, #0xd5
    // add r5, r1, #0
    // lsl r0, r0, #2
    // ldrb r0, [r5, r0]
    // cmp r0, #2
    // beq _0221C35E
    // mov r6, #0xd9
    // lsl r6, r6, #2
    // add r4, r6, #0
    // sub r4, #0x10
    // cmp r0, #0
    // beq _0221C29C
    // cmp r0, #1
    // beq _0221C2DC
    // cmp r0, #2
    // b _0221C354
    // ldr r1, _0221C360 ; =0x00000365
    // ldr r0, _0221C364 ; =0x00002134
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, r0]
    // lsl r1, r1, #2
    // ldr r1, [r0, r1]
    // ldr r0, _0221C368 ; =0x00002138
    // str r1, [r5, r0]
    // ldr r0, _0221C36C ; =0x000003CF
    // ldrb r1, [r5, r0]
    // mov r0, #0xc0
    // mul r0, r1
    // add r3, r5, r0
    // ldr r0, _0221C370 ; =0x00000355
    // ldrb r2, [r5, r0]
    // ldr r0, _0221C374 ; =0x00002D6C
    // add r1, r3, r2
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _0221C2C8
    // mov r1, #0
    // b _0221C2D0
    // lsl r0, r2, #1
    // add r1, r3, r0
    // ldr r0, _0221C378 ; =0x00002D4C
    // ldrh r1, [r1, r0]
    // ldr r0, _0221C37C ; =0x00000356
    // strh r1, [r5, r0]
    // ldrb r0, [r5, r4]
    // add r0, r0, #1
    // strb r0, [r5, r4]
    // b _0221C354
    // ldr r0, _0221C37C ; =0x00000356
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _0221C2FE
    // ldr r3, _0221C368 ; =0x00002138
    // ldr r2, _0221C364 ; =0x00002134
    // ldr r3, [r5, r3]
    // ldr r2, [r5, r2]
    // lsl r3, r3, #2
    // ldr r2, [r2, r3]
    // add r0, r7, #0
    // lsl r3, r2, #2
    // ldr r2, _0221C380 ; =ov10_0222B0B4
    // add r1, r5, #0
    // ldr r2, [r2, r3]
    // blx r2
    // b _0221C314
    // ldr r0, _0221C370 ; =0x00000355
    // mov r1, #0
    // ldrb r0, [r5, r0]
    // add r2, r5, r0
    // mov r0, #0xd6
    // lsl r0, r0, #2
    // strb r1, [r2, r0]
    // ldrb r1, [r5, r6]
    // mov r0, #1
    // orr r0, r1
    // strb r0, [r5, r6]
    // mov r0, #0xd9
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // mov r0, #1
    // tst r0, r1
    // beq _0221C354
    // ldr r0, _0221C370 ; =0x00000355
    // ldrb r0, [r5, r0]
    // add r1, r0, #1
    // ldr r0, _0221C370 ; =0x00000355
    // strb r1, [r5, r0]
    // ldrb r0, [r5, r0]
    // cmp r0, #4
    // bhs _0221C346
    // mov r0, #0xd9
    // lsl r0, r0, #2
    // ldrb r1, [r5, r0]
    // mov r0, #8
    // tst r0, r1
    // bne _0221C346
    // mov r0, #0xd5
    // mov r1, #0
    // lsl r0, r0, #2
    // strb r1, [r5, r0]
    // b _0221C34C
    // ldrb r0, [r5, r4]
    // add r0, r0, #1
    // strb r0, [r5, r4]
    // ldrb r1, [r5, r6]
    // mov r0, #0xfe
    // and r0, r1
    // strb r0, [r5, r6]
    // mov r0, #0xd5
    // lsl r0, r0, #2
    // ldrb r0, [r5, r0]
    // cmp r0, #2
    // bne _0221C290
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221C360: .word 0x00000365
    // _0221C364: .word 0x00002134
    // _0221C368: .word 0x00002138
    // _0221C36C: .word 0x000003CF
    // _0221C370: .word 0x00000355
    // _0221C374: .word 0x00002D6C
    // _0221C378: .word 0x00002D4C
    // _0221C37C: .word 0x00000356
    // _0221C380: .word ov10_0222B0B4
    // TODO: decompile
}



void ov10_0221C384(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    BattleSystem_Random(r6);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    ov10_0221EF24(r5, r7, (r0 >> 0x1f));
}



void ov10_0221C3C4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    BattleSystem_Random(r6);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    ov10_0221EF24(r5, r7, (r0 >> 0x1f));
}



void ov10_0221C404(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    BattleSystem_Random(r6);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    ov10_0221EF24(r5, r7, (r0 >> 0x1f));
}



void ov10_0221C444(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    BattleSystem_Random(r6);
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    ov10_0221EF24(r5, r7, (r0 >> 0x1f));
}



void ov10_0221C484(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    // ldrb r5, [r4, r3]
    // add r1, r4, r2
    // ldrsb r3, [r1, r5]
    // add r0, r3, r0
    // strb r0, [r1, r5]
    // ldrb r2, [r4, r0]
    // ldrsb r0, [r1, r2]
    // strb r0, [r1, r2]
}



void ov10_0221C4B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r3, _0221C50C ; =0x00002D8C
    // add r2, r5, r1
    // ldr r1, [r2, r3]
    // mov r0, #0x64
    // mul r0, r1
    // add r1, r3, #4
    // ldr r1, [r2, r1]
    // bl _u32_div_f
    // cmp r0, r6
    // bhs _0221C508
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221C50C: .word 0x00002D8C
    // TODO: decompile
}



void ov10_0221C510(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r3, _0221C564 ; =0x00002D8C
    // add r2, r5, r1
    // ldr r1, [r2, r3]
    // mov r0, #0x64
    // mul r0, r1
    // add r1, r3, #4
    // ldr r1, [r2, r1]
    // bl _u32_div_f
    // cmp r0, r6
    // bls _0221C560
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221C564: .word 0x00002D8C
    // TODO: decompile
}



void ov10_0221C568(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r3, _0221C5BC ; =0x00002D8C
    // add r2, r5, r1
    // ldr r1, [r2, r3]
    // mov r0, #0x64
    // mul r0, r1
    // add r1, r3, #4
    // ldr r1, [r2, r1]
    // bl _u32_div_f
    // cmp r0, r6
    // bne _0221C5B8
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221C5BC: .word 0x00002D8C
    // TODO: decompile
}



void ov10_0221C5C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r3, _0221C614 ; =0x00002D8C
    // add r2, r5, r1
    // ldr r1, [r2, r3]
    // mov r0, #0x64
    // mul r0, r1
    // add r1, r3, #4
    // ldr r1, [r2, r1]
    // bl _u32_div_f
    // cmp r0, r6
    // beq _0221C610
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221C614: .word 0x00002D8C
    // TODO: decompile
}



void ov10_0221C618(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221C660 ; =0x00002DAC
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    // tst r0, r6
    // beq _0221C65C
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221C660: .word 0x00002DAC
    // TODO: decompile
}



void ov10_0221C664(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221C6AC ; =0x00002DAC
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    // tst r0, r6
    // bne _0221C6A8
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221C6AC: .word 0x00002DAC
    // TODO: decompile
}



void ov10_0221C6B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221C6F8 ; =0x00002DB0
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    // tst r0, r6
    // beq _0221C6F4
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221C6F8: .word 0x00002DB0
    // TODO: decompile
}



void ov10_0221C6FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221C744 ; =0x00002DB0
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    // tst r0, r6
    // bne _0221C740
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221C744: .word 0x00002DB0
    // TODO: decompile
}



void ov10_0221C748(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // mul r1, r0
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    // tst r0, r6
    ov10_0221EF24(r5, r7);
}



void ov10_0221C790(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // mul r1, r0
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    // tst r0, r6
    ov10_0221EF24(r5, r7);
}



void ov10_0221C7D8(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    BattleSystem_GetFieldSide(r7, r0);
    // add r1, r5, r0
    // ldr r0, [r1, r0]
    // tst r0, r6
    // ldr r1, [sp]
    ov10_0221EF24(r5);
}



void ov10_0221C828(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    BattleSystem_GetFieldSide(r7, r0);
    // add r1, r5, r0
    // ldr r0, [r1, r0]
    // tst r0, r6
    // ldr r1, [sp]
    ov10_0221EF24(r5);
}



void ov10_0221C878(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // ldr r0, [r5, r0]
    ov10_0221EF24(r5, r0);
}



void ov10_0221C8A8(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // ldr r0, [r5, r0]
    ov10_0221EF24(r5, r0);
}



void ov10_0221C8D8(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // ldr r0, [r5, r0]
    ov10_0221EF24(r5, r0);
}



void ov10_0221C908(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // ldr r0, [r5, r0]
    ov10_0221EF24(r5, r0);
}



void ov10_0221C938(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // ldr r0, [r5, r0]
    // tst r0, r4
    ov10_0221EF24(r5, r0);
}



void ov10_0221C968(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // ldr r0, [r5, r0]
    // tst r0, r4
    ov10_0221EF24(r5, r0);
}



void ov10_0221C998(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // ldr r0, _0221C9C4 ; =0x00000356
    // ldrh r0, [r5, r0]
    // cmp r0, r4
    // bne _0221C9C2
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, pc}
    // _0221C9C4: .word 0x00000356
    // TODO: decompile
}



void ov10_0221C9C8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // ldr r0, _0221C9F4 ; =0x00000356
    // ldrh r0, [r5, r0]
    // cmp r0, r4
    // beq _0221C9F2
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, pc}
    // _0221C9F4: .word 0x00000356
    // TODO: decompile
}



void ov10_0221C9F8(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    ov10_0221EF10(r5, r4);
    // mvn r1, r1
    // ldr r1, [r5, r6]
    // ldr r1, [sp]
    ov10_0221EF24(r5, 0);
    ov10_0221EF10(r5, (r4 + 1));
}



void ov10_0221CA4C(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // str r0, [sp]
    ov10_0221EF10(r5, r4);
    // mvn r1, r1
    // ldr r1, [r5, r6]
    ov10_0221EF10(r5, (r4 + 1));
    // ldr r1, [sp]
    ov10_0221EF24(r5);
}



void ov10_0221CA9C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r0, r6, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // ldr r1, _0221CAF4 ; =0x000003CF
    // mov ip, r0
    // ldrb r2, [r6, r1]
    // mov r1, #0xc0
    // mov r0, #0
    // mul r1, r2
    // add r3, r6, r1
    // ldr r7, _0221CAF8 ; =0x00002D4C
    // add r1, r3, #0
    // add r2, r0, #0
    // ldrh r4, [r1, r7]
    // cmp r4, #0
    // beq _0221CADA
    // ldr r4, _0221CAF8 ; =0x00002D4C
    // add r5, r3, r2
    // ldrh r4, [r5, r4]
    // lsl r4, r4, #4
    // add r5, r6, r4
    // ldr r4, _0221CAFC ; =0x000003E1
    // ldrb r4, [r5, r4]
    // cmp r4, #0
    // bne _0221CAE4
    // add r0, r0, #1
    // add r1, r1, #2
    // add r2, r2, #2
    // cmp r0, #4
    // blt _0221CAC2
    // cmp r0, #4
    // bge _0221CAF0
    // add r0, r6, #0
    // mov r1, ip
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221CAF4: .word 0x000003CF
    // _0221CAF8: .word 0x00002D4C
    // _0221CAFC: .word 0x000003E1
    // TODO: decompile
}



void ov10_0221CB00(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r0, r6, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // ldr r1, _0221CB58 ; =0x000003CF
    // mov ip, r0
    // ldrb r2, [r6, r1]
    // mov r1, #0xc0
    // mov r0, #0
    // mul r1, r2
    // add r3, r6, r1
    // ldr r7, _0221CB5C ; =0x00002D4C
    // add r1, r3, #0
    // add r2, r0, #0
    // ldrh r4, [r1, r7]
    // cmp r4, #0
    // beq _0221CB3E
    // ldr r4, _0221CB5C ; =0x00002D4C
    // add r5, r3, r2
    // ldrh r4, [r5, r4]
    // lsl r4, r4, #4
    // add r5, r6, r4
    // ldr r4, _0221CB60 ; =0x000003E1
    // ldrb r4, [r5, r4]
    // cmp r4, #0
    // bne _0221CB48
    // add r0, r0, #1
    // add r1, r1, #2
    // add r2, r2, #2
    // cmp r0, #4
    // blt _0221CB26
    // cmp r0, #4
    // bne _0221CB54
    // add r0, r6, #0
    // mov r1, ip
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221CB58: .word 0x000003CF
    // _0221CB5C: .word 0x00002D4C
    // _0221CB60: .word 0x000003E1
    // TODO: decompile
}



void ov10_0221CB64(void) {
}



void ov10_0221CB80(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // cmp r0, #8
    // bls _0221CB9A
    // b _0221CCA4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221CBA6: ; jump table
    // ldr r1, _0221CCAC ; =0x000003CF
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // ldr r1, _0221CCAC ; =0x000003CF
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // ldr r0, _0221CCB0 ; =0x00000356
    // ldrh r1, [r4, r0]
    // lsl r1, r1, #4
    // add r2, r4, r1
    // add r1, r0, #0
    // add r1, #0x8c
    // ldrb r1, [r2, r1]
    // add r0, r0, #6
    // str r1, [r4, r0]
    // pop {r3, r4, r5, pc}
    // ldr r1, _0221CCAC ; =0x000003CF
    // add r0, r5, #0
    // ldrb r1, [r4, r1]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // add r0, r5, #0
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // ldr r1, _0221CCAC ; =0x000003CF
    // add r0, r5, #0
    // ldrb r1, [r4, r1]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r1, [r4, r1]
    // add r0, r5, #0
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // nop
    // _0221CCAC: .word 0x000003CF
    // _0221CCB0: .word 0x00000356
    // TODO: decompile
}



void ov10_0221CCB4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r6 << 0x18) >> 0x18));
    GetBattlerVar(r5, r0, 0x1b, 0);
    GetBattlerVar(r5, r6, 0x1c, 0);
    // str r1, [r5, r0]
    // str r1, [r5, r0]
}



void ov10_0221CD10(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // ldr r0, _0221CD30 ; =0x00000356
    // ldrh r1, [r4, r0]
    // lsl r1, r1, #4
    // add r2, r4, r1
    // add r1, r0, #0
    // add r1, #0x8b
    // ldrb r1, [r2, r1]
    // add r0, r0, #6
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0221CD30: .word 0x00000356
    // TODO: decompile
}



void ov10_0221CD34(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r6, r1, #0
    // str r0, [sp, #0x18]
    // add r0, r6, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // ldr r2, _0221CE50 ; =0x00000356
    // str r0, [sp, #0x1c]
    // ldrh r3, [r6, r2]
    // add r2, #0x88
    // ldr r1, _0221CE54 ; =ov10_0222B098
    // lsl r7, r3, #4
    // add r3, r6, r7
    // ldrh r3, [r3, r2]
    // ldr r2, _0221CE58 ; =0x0000FFFF
    // mov r0, #0
    // ldrh r4, [r1]
    // cmp r3, r4
    // beq _0221CD6E
    // add r1, r1, #2
    // ldrh r4, [r1]
    // add r0, r0, #1
    // cmp r4, r2
    // bne _0221CD5E
    // ldr r2, _0221CE5C ; =ov10_0222B080
    // ldr r4, _0221CE58 ; =0x0000FFFF
    // mov r1, #0
    // ldrh r5, [r2]
    // cmp r3, r5
    // beq _0221CD84
    // add r2, r2, #2
    // ldrh r5, [r2]
    // add r1, r1, #1
    // cmp r5, r4
    // bne _0221CD74
    // lsl r2, r1, #1
    // ldr r1, _0221CE5C ; =ov10_0222B080
    // ldrh r1, [r1, r2]
    // ldr r2, _0221CE58 ; =0x0000FFFF
    // cmp r1, r2
    // bne _0221CDA4
    // ldr r1, _0221CE60 ; =0x000003E1
    // add r3, r6, r7
    // ldrb r1, [r3, r1]
    // cmp r1, #1
    // bls _0221CE42
    // lsl r1, r0, #1
    // ldr r0, _0221CE54 ; =ov10_0222B098
    // ldrh r0, [r0, r1]
    // cmp r0, r2
    // bne _0221CE42
    // ldr r7, _0221CE64 ; =0x000003CF
    // mov r4, #0
    // add r5, sp, #0x20
    // ldrb r1, [r6, r7]
    // add r2, r4, #0
    // add r0, r6, #0
    // add r2, #0xa
    // mov r3, #0
    // bl GetBattlerVar
    // strb r0, [r5]
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #6
    // blt _0221CDAA
    // ldr r0, _0221CE64 ; =0x000003CF
    // ldrb r4, [r6, r0]
    // mov r0, #0xc0
    // add r5, r4, #0
    // mul r5, r0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl GetBattlerAbility
    // add r1, sp, #0x28
    // str r1, [sp]
    // ldr r3, _0221CE68 ; =0x00002DB8
    // add r1, r6, r5
    // ldrh r1, [r1, r3]
    // add r2, r4, #0
    // str r1, [sp, #4]
    // add r1, sp, #0x20
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // mul r0, r4
    // add r1, r6, r0
    // add r0, r3, #0
    // add r0, #0x14
    // ldr r0, [r1, r0]
    // sub r3, #0x6c
    // lsl r0, r0, #0xa
    // lsr r0, r0, #0x1d
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x1c]
    // add r3, r6, r3
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r1, r6, #0
    // add r3, r3, r5
    // bl ov10_0221EF7C
    // ldr r0, _0221CE6C ; =0x00000355
    // add r1, sp, #0x28
    // ldrb r0, [r6, r0]
    // mov r3, #0
    // lsl r0, r0, #2
    // ldr r2, [r1, r0]
    // ldr r0, [r1]
    // cmp r0, r2
    // bgt _0221CE26
    // add r3, r3, #1
    // add r1, r1, #4
    // cmp r3, #4
    // blt _0221CE18
    // cmp r3, #4
    // bne _0221CE36
    // mov r0, #0xd7
    // mov r1, #2
    // lsl r0, r0, #2
    // add sp, #0x38
    // str r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xd7
    // mov r1, #1
    // lsl r0, r0, #2
    // add sp, #0x38
    // str r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xd7
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r6, r0]
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221CE50: .word 0x00000356
    // _0221CE54: .word ov10_0222B098
    // _0221CE58: .word 0x0000FFFF
    // _0221CE5C: .word ov10_0222B080
    // _0221CE60: .word 0x000003E1
    // _0221CE64: .word 0x000003CF
    // _0221CE68: .word 0x00002DB8
    // _0221CE6C: .word 0x00000355
    // TODO: decompile
}



void ov10_0221CE70(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // lsl r0, r0, #1
    // add r1, r4, r0
    // ldr r0, _0221CEA0 ; =0x0000307C
    // ldrh r1, [r1, r0]
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0221CEA0: .word 0x0000307C
    // TODO: decompile
}



void ov10_0221CEA4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // ldr r0, [r5, r0]
    ov10_0221EF24(r5, r0);
}



void ov10_0221CED4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // ldr r0, [r5, r0]
    ov10_0221EF24(r5, r0);
}



void ov10_0221CF04(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r7, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r3, _0221CF44 ; =0x000003CF
    // add r0, r6, #0
    // ldrb r2, [r5, r3]
    // add r3, r3, #1
    // ldrb r3, [r5, r3]
    // add r1, r5, #0
    // bl CheckSortSpeed
    // cmp r4, r0
    // bne _0221CF42
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221CF44: .word 0x000003CF
    // TODO: decompile
}



void ov10_0221CF48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r7, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r3, _0221CF88 ; =0x000003CF
    // add r0, r6, #0
    // ldrb r2, [r5, r3]
    // add r3, r3, #1
    // ldrb r3, [r5, r3]
    // add r1, r5, #0
    // bl CheckSortSpeed
    // cmp r4, r0
    // beq _0221CF86
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221CF88: .word 0x000003CF
    // TODO: decompile
}



void ov10_0221CF8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r2, r0, #0
    // mov r0, #0xd7
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // lsl r1, r2, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // str r0, [sp]
    // ldr r1, [sp]
    // add r0, r7, #0
    // bl BattleSystem_GetParty
    // str r0, [sp, #0xc]
    // ldr r1, [r7, #0x2c]
    // mov r0, #2
    // tst r0, r1
    // beq _0221CFE6
    // ldr r0, [sp]
    // add r1, r5, r0
    // ldr r0, _0221D060 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // ldr r1, [sp]
    // str r0, [sp, #8]
    // add r0, r7, #0
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r5, r0
    // ldr r0, _0221D060 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // str r0, [sp, #4]
    // b _0221CFF2
    // ldr r0, [sp]
    // add r1, r5, r0
    // ldr r0, _0221D060 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // add r0, r7, #0
    // mov r4, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // ble _0221D05C
    // ldr r0, [sp, #0xc]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // ldr r1, [sp, #8]
    // add r6, r0, #0
    // cmp r4, r1
    // beq _0221D04E
    // ldr r1, [sp, #4]
    // cmp r4, r1
    // beq _0221D04E
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221D04E
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221D04E
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0221D064 ; =0x000001EE
    // cmp r0, r1
    // beq _0221D04E
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r0, #1
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // ldr r1, [sp]
    // add r0, r7, #0
    // add r4, r4, #1
    // bl BattleSystem_GetPartySize
    // cmp r4, r0
    // blt _0221D000
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D060: .word 0x0000219C
    // _0221D064: .word 0x000001EE
    // TODO: decompile
}



void ov10_0221D068(void) {
}



void ov10_0221D084(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // ldr r0, _0221D0A4 ; =0x00000356
    // ldrh r1, [r4, r0]
    // lsl r1, r1, #4
    // add r2, r4, r1
    // add r1, r0, #0
    // add r1, #0x88
    // ldrh r1, [r2, r1]
    // add r0, r0, #6
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0221D0A4: .word 0x00000356
    // TODO: decompile
}



void ov10_0221D0A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r7, r0, #0
    // lsl r1, r7, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // add r1, r0, #0
    // mov r3, #0xb7
    // mov r2, #2
    // mov r0, #0xc0
    // add r6, r1, #0
    // mul r6, r0
    // add r0, r5, r6
    // lsl r3, r3, #6
    // ldr r4, [r0, r3]
    // lsl r2, r2, #0x14
    // tst r2, r4
    // beq _0221D0EA
    // mov r0, #0xd7
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _0221D180 ; =0x000003CF
    // ldrb r4, [r5, r2]
    // cmp r4, r1
    // beq _0221D172
    // cmp r7, #3
    // beq _0221D172
    // add r4, r5, r1
    // add r1, r2, #0
    // sub r1, #0x3f
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _0221D108
    // sub r2, #0x73
    // str r1, [r5, r2]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r3, #0
    // sub r1, #0x59
    // ldrb r1, [r0, r1]
    // cmp r1, #0x17
    // beq _0221D11A
    // cmp r1, #0x2a
    // beq _0221D11A
    // cmp r1, #0x47
    // bne _0221D122
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r3, #0x80
    // add r7, r5, r3
    // ldrh r0, [r7, r6]
    // mov r1, #0x18
    // bl GetMonBaseStat
    // add r4, r0, #0
    // ldrh r0, [r7, r6]
    // mov r1, #0x19
    // bl GetMonBaseStat
    // add r6, r0, #0
    // cmp r4, #0
    // beq _0221D15E
    // cmp r6, #0
    // beq _0221D15E
    // ldr r0, [sp]
    // bl BattleSystem_Random
    // mov r1, #1
    // tst r0, r1
    // beq _0221D156
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r4, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r6, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #0
    // beq _0221D16A
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r4, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r6, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0221D184 ; =0x00002D67
    // add r1, r5, r6
    // ldrb r1, [r1, r0]
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D180: .word 0x000003CF
    // _0221D184: .word 0x00002D67
    // TODO: decompile
}



void ov10_0221D188(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // mov r2, #2
    // mov ip, r1
    // add r6, r5, r1
    // mov r1, #0xb7
    // lsl r1, r1, #6
    // ldr r3, [r6, r1]
    // lsl r2, r2, #0x14
    // tst r2, r3
    // beq _0221D1C8
    // mov r4, #0
    // b _0221D234
    // cmp r4, #0
    // beq _0221D1D0
    // cmp r4, #2
    // bne _0221D230
    // mov r1, #0x39
    // add r2, r5, r0
    // lsl r1, r1, #4
    // ldrb r4, [r2, r1]
    // cmp r4, #0
    // beq _0221D1E2
    // sub r1, #0x34
    // str r4, [r5, r1]
    // b _0221D234
    // mov r1, ip
    // add r2, r5, r1
    // ldr r1, _0221D25C ; =0x00002D67
    // ldrb r4, [r2, r1]
    // cmp r4, #0x17
    // beq _0221D234
    // cmp r4, #0x2a
    // beq _0221D234
    // cmp r4, #0x47
    // beq _0221D234
    // sub r1, #0x27
    // add r6, r5, r1
    // mov r1, #0xc0
    // mul r1, r0
    // ldrh r0, [r6, r1]
    // str r1, [sp]
    // mov r1, #0x18
    // bl GetMonBaseStat
    // add r4, r0, #0
    // ldr r0, [sp]
    // mov r1, #0x19
    // ldrh r0, [r6, r0]
    // bl GetMonBaseStat
    // cmp r4, #0
    // beq _0221D228
    // cmp r0, #0
    // beq _0221D228
    // cmp r4, r7
    // beq _0221D224
    // cmp r0, r7
    // bne _0221D234
    // mov r4, #0
    // b _0221D234
    // cmp r4, #0
    // bne _0221D234
    // add r4, r0, #0
    // b _0221D234
    // sub r1, #0x59
    // ldrb r4, [r6, r1]
    // cmp r4, #0
    // bne _0221D242
    // mov r0, #0xd7
    // mov r1, #2
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, r7
    // bne _0221D250
    // mov r0, #0xd7
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xd7
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221D25C: .word 0x00002D67
    // TODO: decompile
}



void ov10_0221D260(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r1, #0
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // mov r0, #0
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [sp, #0x10]
    // str r0, [r5, r1]
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, _0221D308 ; =0x000003CF
    // ldrb r2, [r5, r0]
    // mov r0, #0xc0
    // mul r0, r2
    // add r0, r5, r0
    // add r1, r4, r0
    // ldr r0, _0221D30C ; =0x00002D4C
    // ldrh r6, [r1, r0]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r3, r6, #0
    // bl ov10_0221F47C
    // add r3, r0, #0
    // cmp r6, #0
    // beq _0221D2F8
    // ldr r0, _0221D308 ; =0x000003CF
    // add r1, r5, #0
    // ldrb r0, [r5, r0]
    // add r2, r6, #0
    // str r0, [sp]
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // ldrb r0, [r5, r0]
    // str r0, [sp, #4]
    // mov r0, #0x28
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    // str r0, [sp, #0xc]
    // add r0, r7, #0
    // bl ov12_02251D28
    // cmp r0, #0x78
    // bne _0221D2C8
    // mov r0, #0x50
    // b _0221D2DE
    // cmp r0, #0xf0
    // bne _0221D2D0
    // mov r0, #0xa0
    // b _0221D2DE
    // cmp r0, #0x1e
    // bne _0221D2D8
    // mov r0, #0x14
    // b _0221D2DE
    // cmp r0, #0xf
    // bne _0221D2DE
    // mov r0, #0xa
    // ldr r2, [sp, #0x14]
    // ldr r1, _0221D310 ; =0x00140808
    // tst r1, r2
    // beq _0221D2E8
    // mov r0, #0
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // cmp r1, r0
    // bhs _0221D2F8
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [sp, #0x10]
    // add r4, r4, #2
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // cmp r0, #4
    // blt _0221D27C
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D308: .word 0x000003CF
    // _0221D30C: .word 0x00002D4C
    // _0221D310: .word 0x00140808
    // TODO: decompile
}



void ov10_0221D314(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r7, r0, #0
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r3, _0221D3A4 ; =0x000003CF
    // add r0, r5, #0
    // ldrb r6, [r4, r3]
    // sub r3, #0x79
    // ldrh r3, [r4, r3]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov10_0221F47C
    // mov r2, #0x3d
    // str r6, [sp]
    // lsl r2, r2, #4
    // add r3, r0, #0
    // ldrb r0, [r4, r2]
    // sub r2, #0x7a
    // add r1, r4, #0
    // str r0, [sp, #4]
    // mov r0, #0x28
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    // str r0, [sp, #0xc]
    // ldrh r2, [r4, r2]
    // add r0, r5, #0
    // bl ov12_02251D28
    // cmp r0, #0x78
    // bne _0221D372
    // mov r0, #0x50
    // b _0221D388
    // cmp r0, #0xf0
    // bne _0221D37A
    // mov r0, #0xa0
    // b _0221D388
    // cmp r0, #0x1e
    // bne _0221D382
    // mov r0, #0x14
    // b _0221D388
    // cmp r0, #0xf
    // bne _0221D388
    // mov r0, #0xa
    // ldr r2, [sp, #0x14]
    // ldr r1, _0221D3A8 ; =0x00140808
    // tst r1, r2
    // beq _0221D392
    // mov r0, #0
    // cmp r0, r7
    // bne _0221D39E
    // ldr r1, [sp, #0x10]
    // add r0, r4, #0
    // bl ov10_0221EF24
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221D3A4: .word 0x000003CF
    // _0221D3A8: .word 0x00140808
    // TODO: decompile
}



void ov10_0221D3AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r7, r0, #0
    // str r1, [sp]
    // add r0, r1, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // ldr r0, [sp]
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // ldr r0, [sp]
    // bl ov10_0221EEF0
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // bl ov10_0221EEF0
    // str r0, [sp, #0xc]
    // lsl r1, r4, #0x18
    // ldr r0, [sp]
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // add r6, r0, #0
    // ldr r1, [r7, #0x2c]
    // mov r0, #2
    // tst r0, r1
    // beq _0221D406
    // ldr r0, [sp]
    // add r1, r0, r6
    // ldr r0, _0221D498 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // add r1, r6, #0
    // str r0, [sp, #8]
    // add r0, r7, #0
    // bl BattleSystem_GetBattlerIdPartner
    // ldr r1, [sp]
    // add r1, r1, r0
    // ldr r0, _0221D498 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // str r0, [sp, #4]
    // b _0221D412
    // ldr r0, [sp]
    // add r1, r0, r6
    // ldr r0, _0221D498 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r7, #0
    // add r1, r6, #0
    // bl BattleSystem_GetParty
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r1, r6, #0
    // mov r5, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // ble _0221D494
    // ldr r0, [sp, #0x14]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // ldr r1, [sp, #8]
    // add r4, r0, #0
    // cmp r5, r1
    // beq _0221D486
    // ldr r1, [sp, #4]
    // cmp r5, r1
    // beq _0221D486
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221D486
    // add r0, r4, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221D486
    // add r0, r4, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0221D49C ; =0x000001EE
    // cmp r0, r1
    // beq _0221D486
    // add r0, r4, #0
    // mov r1, #0xa0
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0x10]
    // tst r0, r1
    // beq _0221D486
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // bl ov10_0221EF24
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // add r1, r6, #0
    // add r5, r5, #1
    // bl BattleSystem_GetPartySize
    // cmp r5, r0
    // blt _0221D42A
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D498: .word 0x0000219C
    // _0221D49C: .word 0x000001EE
    // TODO: decompile
}



void ov10_0221D4A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r7, r0, #0
    // str r1, [sp]
    // add r0, r1, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // ldr r0, [sp]
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // ldr r0, [sp]
    // bl ov10_0221EEF0
    // str r0, [sp, #0x10]
    // ldr r0, [sp]
    // bl ov10_0221EEF0
    // str r0, [sp, #0xc]
    // lsl r1, r4, #0x18
    // ldr r0, [sp]
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // add r6, r0, #0
    // ldr r1, [r7, #0x2c]
    // mov r0, #2
    // tst r0, r1
    // beq _0221D4FA
    // ldr r0, [sp]
    // add r1, r0, r6
    // ldr r0, _0221D58C ; =0x0000219C
    // ldrb r0, [r1, r0]
    // add r1, r6, #0
    // str r0, [sp, #8]
    // add r0, r7, #0
    // bl BattleSystem_GetBattlerIdPartner
    // ldr r1, [sp]
    // add r1, r1, r0
    // ldr r0, _0221D58C ; =0x0000219C
    // ldrb r0, [r1, r0]
    // str r0, [sp, #4]
    // b _0221D506
    // ldr r0, [sp]
    // add r1, r0, r6
    // ldr r0, _0221D58C ; =0x0000219C
    // ldrb r0, [r1, r0]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r7, #0
    // add r1, r6, #0
    // bl BattleSystem_GetParty
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r1, r6, #0
    // mov r5, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // ble _0221D588
    // ldr r0, [sp, #0x14]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // ldr r1, [sp, #8]
    // add r4, r0, #0
    // cmp r5, r1
    // beq _0221D57A
    // ldr r1, [sp, #4]
    // cmp r5, r1
    // beq _0221D57A
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221D57A
    // add r0, r4, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221D57A
    // add r0, r4, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0221D590 ; =0x000001EE
    // cmp r0, r1
    // beq _0221D57A
    // add r0, r4, #0
    // mov r1, #0xa0
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0x10]
    // tst r0, r1
    // bne _0221D57A
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    // bl ov10_0221EF24
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // add r1, r6, #0
    // add r5, r5, #1
    // bl BattleSystem_GetPartySize
    // cmp r5, r0
    // blt _0221D51E
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D58C: .word 0x0000219C
    // _0221D590: .word 0x000001EE
    // TODO: decompile
}



void ov10_0221D594(void) {
    ov10_0221EF24(r1, 1);
    // str r1, [r4, r0]
    // ldr r2, [r4, r1]
    // tst r1, r2
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // tst r0, r1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // tst r0, r1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // tst r0, r1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // tst r0, r1
    // str r1, [r4, r0]
}



void ov10_0221D60C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // ldr r0, _0221D640 ; =0x00000356
    // ldrh r2, [r5, r0]
    // add r0, #0x88
    // lsl r2, r2, #4
    // add r2, r5, r2
    // ldrh r0, [r2, r0]
    // cmp r4, r0
    // bne _0221D63E
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, pc}
    // _0221D640: .word 0x00000356
    // TODO: decompile
}



void ov10_0221D644(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // ldr r0, _0221D678 ; =0x00000356
    // ldrh r2, [r5, r0]
    // add r0, #0x88
    // lsl r2, r2, #4
    // add r2, r5, r2
    // ldrh r0, [r2, r0]
    // cmp r4, r0
    // beq _0221D676
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, pc}
    // _0221D678: .word 0x00000356
    // TODO: decompile
}



void ov10_0221D67C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r7, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // add r0, r5, r1
    // add r1, r0, r6
    // ldr r0, _0221D6CC ; =0x00002D58
    // ldrsb r0, [r1, r0]
    // cmp r0, r7
    // bge _0221D6CA
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D6CC: .word 0x00002D58
    // TODO: decompile
}



void ov10_0221D6D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r7, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // add r0, r5, r1
    // add r1, r0, r6
    // ldr r0, _0221D720 ; =0x00002D58
    // ldrsb r0, [r1, r0]
    // cmp r0, r7
    // ble _0221D71E
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D720: .word 0x00002D58
    // TODO: decompile
}



void ov10_0221D724(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r7, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // add r0, r5, r1
    // add r1, r0, r6
    // ldr r0, _0221D774 ; =0x00002D58
    // ldrsb r0, [r1, r0]
    // cmp r7, r0
    // bne _0221D772
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D774: .word 0x00002D58
    // TODO: decompile
}



void ov10_0221D778(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r7, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // add r0, r5, r1
    // add r1, r0, r6
    // ldr r0, _0221D7C8 ; =0x00002D58
    // ldrsb r0, [r1, r0]
    // cmp r7, r0
    // beq _0221D7C6
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D7C8: .word 0x00002D58
    // TODO: decompile
}



void ov10_0221D7CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r6, r1, #0
    // str r0, [sp, #0x14]
    // add r0, r6, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // str r0, [sp, #0x1c]
    // cmp r4, #1
    // bne _0221D7FE
    // ldr r0, _0221D8D4 ; =0x00000355
    // ldrb r1, [r6, r0]
    // add r0, #0x17
    // add r1, r6, r1
    // ldrb r0, [r1, r0]
    // str r0, [sp, #0x18]
    // b _0221D802
    // mov r0, #0x64
    // str r0, [sp, #0x18]
    // ldr r2, _0221D8D8 ; =0x00000356
    // ldr r1, _0221D8DC ; =ov10_0222B098
    // ldrh r3, [r6, r2]
    // add r2, #0x88
    // mov r0, #0
    // lsl r7, r3, #4
    // add r3, r6, r7
    // ldrh r3, [r3, r2]
    // ldr r2, _0221D8E0 ; =0x0000FFFF
    // ldrh r4, [r1]
    // cmp r3, r4
    // beq _0221D824
    // add r1, r1, #2
    // ldrh r4, [r1]
    // add r0, r0, #1
    // cmp r4, r2
    // bne _0221D814
    // ldr r2, _0221D8E4 ; =ov10_0222B080
    // ldr r4, _0221D8E0 ; =0x0000FFFF
    // mov r1, #0
    // ldrh r5, [r2]
    // cmp r3, r5
    // beq _0221D83A
    // add r2, r2, #2
    // ldrh r5, [r2]
    // add r1, r1, #1
    // cmp r5, r4
    // bne _0221D82A
    // lsl r2, r1, #1
    // ldr r1, _0221D8E4 ; =ov10_0222B080
    // ldrh r1, [r1, r2]
    // ldr r2, _0221D8E0 ; =0x0000FFFF
    // cmp r1, r2
    // bne _0221D85A
    // ldr r1, _0221D8E8 ; =0x000003E1
    // add r3, r6, r7
    // ldrb r1, [r3, r1]
    // cmp r1, #1
    // bls _0221D8D0
    // lsl r1, r0, #1
    // ldr r0, _0221D8DC ; =ov10_0222B098
    // ldrh r0, [r0, r1]
    // cmp r0, r2
    // bne _0221D8D0
    // ldr r7, _0221D8EC ; =0x000003CF
    // mov r4, #0
    // add r5, sp, #0x20
    // ldrb r1, [r6, r7]
    // add r2, r4, #0
    // add r0, r6, #0
    // add r2, #0xa
    // mov r3, #0
    // bl GetBattlerVar
    // strb r0, [r5]
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #6
    // blt _0221D860
    // ldr r0, _0221D8EC ; =0x000003CF
    // ldrb r4, [r6, r0]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl GetBattlerAbility
    // add r1, sp, #0x20
    // str r1, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xc0
    // mul r0, r4
    // ldr r3, _0221D8F0 ; =0x00002DCC
    // add r4, r6, r0
    // ldr r0, [r4, r3]
    // ldr r2, _0221D8D8 ; =0x00000356
    // lsl r0, r0, #0xa
    // lsr r0, r0, #0x1d
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // sub r3, #0x14
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // ldrh r2, [r6, r2]
    // ldrh r3, [r4, r3]
    // ldr r0, [sp, #0x14]
    // add r1, r6, #0
    // bl ov10_0221F084
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r2, [r6, r1]
    // mov r1, #0xc0
    // mul r1, r2
    // add r2, r6, r1
    // ldr r1, _0221D8F4 ; =0x00002D8C
    // ldr r1, [r2, r1]
    // cmp r1, r0
    // bhi _0221D8D0
    // ldr r1, [sp, #0x1c]
    // add r0, r6, #0
    // bl ov10_0221EF24
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D8D4: .word 0x00000355
    // _0221D8D8: .word 0x00000356
    // _0221D8DC: .word ov10_0222B098
    // _0221D8E0: .word 0x0000FFFF
    // _0221D8E4: .word ov10_0222B080
    // _0221D8E8: .word 0x000003E1
    // _0221D8EC: .word 0x000003CF
    // _0221D8F0: .word 0x00002DCC
    // _0221D8F4: .word 0x00002D8C
    // TODO: decompile
}



void ov10_0221D8F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r6, r1, #0
    // str r0, [sp, #0x14]
    // add r0, r6, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // str r0, [sp, #0x1c]
    // cmp r4, #1
    // bne _0221D92A
    // ldr r0, _0221DA00 ; =0x00000355
    // ldrb r1, [r6, r0]
    // add r0, #0x17
    // add r1, r6, r1
    // ldrb r0, [r1, r0]
    // str r0, [sp, #0x18]
    // b _0221D92E
    // mov r0, #0x64
    // str r0, [sp, #0x18]
    // ldr r2, _0221DA04 ; =0x00000356
    // ldr r1, _0221DA08 ; =ov10_0222B098
    // ldrh r3, [r6, r2]
    // add r2, #0x88
    // mov r0, #0
    // lsl r7, r3, #4
    // add r3, r6, r7
    // ldrh r3, [r3, r2]
    // ldr r2, _0221DA0C ; =0x0000FFFF
    // ldrh r4, [r1]
    // cmp r3, r4
    // beq _0221D950
    // add r1, r1, #2
    // ldrh r4, [r1]
    // add r0, r0, #1
    // cmp r4, r2
    // bne _0221D940
    // ldr r2, _0221DA10 ; =ov10_0222B080
    // ldr r4, _0221DA0C ; =0x0000FFFF
    // mov r1, #0
    // ldrh r5, [r2]
    // cmp r3, r5
    // beq _0221D966
    // add r2, r2, #2
    // ldrh r5, [r2]
    // add r1, r1, #1
    // cmp r5, r4
    // bne _0221D956
    // lsl r2, r1, #1
    // ldr r1, _0221DA10 ; =ov10_0222B080
    // ldrh r1, [r1, r2]
    // ldr r2, _0221DA0C ; =0x0000FFFF
    // cmp r1, r2
    // bne _0221D986
    // ldr r1, _0221DA14 ; =0x000003E1
    // add r3, r6, r7
    // ldrb r1, [r3, r1]
    // cmp r1, #1
    // bls _0221D9FC
    // lsl r1, r0, #1
    // ldr r0, _0221DA08 ; =ov10_0222B098
    // ldrh r0, [r0, r1]
    // cmp r0, r2
    // bne _0221D9FC
    // ldr r7, _0221DA18 ; =0x000003CF
    // mov r4, #0
    // add r5, sp, #0x20
    // ldrb r1, [r6, r7]
    // add r2, r4, #0
    // add r0, r6, #0
    // add r2, #0xa
    // mov r3, #0
    // bl GetBattlerVar
    // strb r0, [r5]
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #6
    // blt _0221D98C
    // ldr r0, _0221DA18 ; =0x000003CF
    // ldrb r4, [r6, r0]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl GetBattlerAbility
    // add r1, sp, #0x20
    // str r1, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xc0
    // mul r0, r4
    // ldr r3, _0221DA1C ; =0x00002DCC
    // add r4, r6, r0
    // ldr r0, [r4, r3]
    // ldr r2, _0221DA04 ; =0x00000356
    // lsl r0, r0, #0xa
    // lsr r0, r0, #0x1d
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // sub r3, #0x14
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // ldrh r2, [r6, r2]
    // ldrh r3, [r4, r3]
    // ldr r0, [sp, #0x14]
    // add r1, r6, #0
    // bl ov10_0221F084
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r2, [r6, r1]
    // mov r1, #0xc0
    // mul r1, r2
    // add r2, r6, r1
    // ldr r1, _0221DA20 ; =0x00002D8C
    // ldr r1, [r2, r1]
    // cmp r1, r0
    // bls _0221D9FC
    // ldr r1, [sp, #0x1c]
    // add r0, r6, #0
    // bl ov10_0221EF24
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221DA00: .word 0x00000355
    // _0221DA04: .word 0x00000356
    // _0221DA08: .word ov10_0222B098
    // _0221DA0C: .word 0x0000FFFF
    // _0221DA10: .word ov10_0222B080
    // _0221DA14: .word 0x000003E1
    // _0221DA18: .word 0x000003CF
    // _0221DA1C: .word 0x00002DCC
    // _0221DA20: .word 0x00002D8C
    // TODO: decompile
}



void ov10_0221DA24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r6, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // cmp r6, #0
    // beq _0221DAB4
    // cmp r6, #1
    // beq _0221DA60
    // cmp r6, #3
    // beq _0221DA86
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0xc0
    // mul r2, r0
    // ldr r0, _0221DADC ; =0x00002D4C
    // mov r1, #0
    // add r3, r5, r2
    // ldrh r2, [r3, r0]
    // cmp r4, r2
    // beq _0221DA78
    // add r1, r1, #1
    // add r3, r3, #2
    // cmp r1, #4
    // blt _0221DA6A
    // cmp r1, #4
    // bge _0221DAD8
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0xc0
    // mul r1, r0
    // add r0, r5, r1
    // ldr r1, _0221DAE0 ; =0x00002D8C
    // ldr r1, [r0, r1]
    // cmp r1, #0
    // beq _0221DAD8
    // ldr r1, _0221DADC ; =0x00002D4C
    // mov r3, #0
    // ldrh r2, [r0, r1]
    // cmp r4, r2
    // beq _0221DAA6
    // add r3, r3, #1
    // add r0, r0, #2
    // cmp r3, #4
    // blt _0221DA98
    // cmp r3, #4
    // bge _0221DAD8
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r0, #3
    // add r3, r5, r0
    // mov r0, #0x37
    // mov r1, #0
    // lsl r0, r0, #4
    // ldrh r2, [r3, r0]
    // cmp r4, r2
    // beq _0221DACC
    // add r1, r1, #1
    // add r3, r3, #2
    // cmp r1, #4
    // blt _0221DABE
    // cmp r1, #4
    // bge _0221DAD8
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221DADC: .word 0x00002D4C
    // _0221DAE0: .word 0x00002D8C
    // TODO: decompile
}



void ov10_0221DAE4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r6, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // cmp r6, #0
    // beq _0221DB74
    // cmp r6, #1
    // beq _0221DB20
    // cmp r6, #3
    // beq _0221DB46
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0xc0
    // mul r2, r0
    // ldr r0, _0221DB9C ; =0x00002D4C
    // mov r1, #0
    // add r3, r5, r2
    // ldrh r2, [r3, r0]
    // cmp r4, r2
    // beq _0221DB38
    // add r1, r1, #1
    // add r3, r3, #2
    // cmp r1, #4
    // blt _0221DB2A
    // cmp r1, #4
    // bne _0221DB98
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0xc0
    // mul r1, r0
    // add r0, r5, r1
    // ldr r1, _0221DBA0 ; =0x00002D8C
    // ldr r1, [r0, r1]
    // cmp r1, #0
    // beq _0221DB98
    // ldr r1, _0221DB9C ; =0x00002D4C
    // mov r3, #0
    // ldrh r2, [r0, r1]
    // cmp r4, r2
    // beq _0221DB66
    // add r3, r3, #1
    // add r0, r0, #2
    // cmp r3, #4
    // blt _0221DB58
    // cmp r3, #4
    // bne _0221DB98
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r0, #3
    // add r3, r5, r0
    // mov r0, #0x37
    // mov r1, #0
    // lsl r0, r0, #4
    // ldrh r2, [r3, r0]
    // cmp r4, r2
    // beq _0221DB8C
    // add r1, r1, #1
    // add r3, r3, #2
    // cmp r1, #4
    // blt _0221DB7E
    // cmp r1, #4
    // bne _0221DB98
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221DB9C: .word 0x00002D4C
    // _0221DBA0: .word 0x00002D8C
    // TODO: decompile
}



void ov10_0221DBA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r6, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // cmp r6, #0
    // beq _0221DC0C
    // cmp r6, #1
    // bne _0221DC3C
    // mov r2, #0xc0
    // mul r2, r0
    // add r0, r5, r2
    // ldr r2, _0221DC40 ; =0x000003DE
    // ldr r3, _0221DC44 ; =0x00002D4C
    // mov r1, #0
    // ldrh r6, [r0, r3]
    // cmp r6, #0
    // beq _0221DBF6
    // lsl r6, r6, #4
    // add r6, r5, r6
    // ldrh r6, [r6, r2]
    // cmp r4, r6
    // beq _0221DBFE
    // add r1, r1, #1
    // add r0, r0, #2
    // cmp r1, #4
    // blt _0221DBE6
    // cmp r1, #4
    // bge _0221DC3C
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _0221DC40 ; =0x000003DE
    // lsl r0, r0, #3
    // add r3, r2, #0
    // mov r1, #0
    // add r0, r5, r0
    // sub r3, #0x6e
    // ldrh r6, [r0, r3]
    // cmp r6, #0
    // beq _0221DC28
    // lsl r6, r6, #4
    // add r6, r5, r6
    // ldrh r6, [r6, r2]
    // cmp r4, r6
    // beq _0221DC30
    // add r1, r1, #1
    // add r0, r0, #2
    // cmp r1, #4
    // blt _0221DC18
    // cmp r1, #4
    // bge _0221DC3C
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221DC40: .word 0x000003DE
    // _0221DC44: .word 0x00002D4C
    // TODO: decompile
}



void ov10_0221DC48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r6, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // cmp r6, #0
    // beq _0221DCB0
    // cmp r6, #1
    // bne _0221DCE0
    // mov r2, #0xc0
    // mul r2, r0
    // add r0, r5, r2
    // ldr r2, _0221DCE4 ; =0x000003DE
    // ldr r3, _0221DCE8 ; =0x00002D4C
    // mov r1, #0
    // ldrh r6, [r0, r3]
    // cmp r6, #0
    // beq _0221DC9A
    // lsl r6, r6, #4
    // add r6, r5, r6
    // ldrh r6, [r6, r2]
    // cmp r4, r6
    // beq _0221DCA2
    // add r1, r1, #1
    // add r0, r0, #2
    // cmp r1, #4
    // blt _0221DC8A
    // cmp r1, #4
    // bne _0221DCE0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _0221DCE4 ; =0x000003DE
    // lsl r0, r0, #3
    // add r3, r2, #0
    // mov r1, #0
    // add r0, r5, r0
    // sub r3, #0x6e
    // ldrh r6, [r0, r3]
    // cmp r6, #0
    // beq _0221DCCC
    // lsl r6, r6, #4
    // add r6, r5, r6
    // ldrh r6, [r6, r2]
    // cmp r4, r6
    // beq _0221DCD4
    // add r1, r1, #1
    // add r0, r0, #2
    // cmp r1, #4
    // blt _0221DCBC
    // cmp r1, #4
    // bne _0221DCE0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221DCE4: .word 0x000003DE
    // _0221DCE8: .word 0x00002D4C
    // TODO: decompile
}



void ov10_0221DCEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r6, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // cmp r4, #0
    // beq _0221DD24
    // cmp r4, #1
    // beq _0221DD3E
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221DD58 ; =0x00002DC8
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1d
    // beq _0221DD56
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221DD58 ; =0x00002DC8
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1d
    // beq _0221DD56
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221DD58: .word 0x00002DC8
    // TODO: decompile
}



void ov10_0221DD5C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // cmp r5, #0
    // beq _0221DD82
    // cmp r5, #1
    // beq _0221DDA0
    // pop {r3, r4, r5, pc}
    // ldr r2, _0221DDC0 ; =0x00000356
    // ldrh r0, [r4, r2]
    // add r2, #0x79
    // ldrb r3, [r4, r2]
    // mov r2, #0xc0
    // mul r2, r3
    // add r3, r4, r2
    // ldr r2, _0221DDC4 ; =0x00002DE8
    // ldrh r2, [r3, r2]
    // cmp r0, r2
    // bne _0221DDBC
    // add r0, r4, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, pc}
    // ldr r2, _0221DDC0 ; =0x00000356
    // ldrh r0, [r4, r2]
    // add r2, #0x79
    // ldrb r3, [r4, r2]
    // mov r2, #0xc0
    // mul r2, r3
    // add r3, r4, r2
    // ldr r2, _0221DDC8 ; =0x00002DEC
    // ldrh r2, [r3, r2]
    // cmp r0, r2
    // bne _0221DDBC
    // add r0, r4, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, pc}
    // nop
    // _0221DDC0: .word 0x00000356
    // _0221DDC4: .word 0x00002DE8
    // _0221DDC8: .word 0x00002DEC
    // TODO: decompile
}



void ov10_0221DDCC(void) {
}



void ov10_0221DDE8(void) {
    // bx lr
    // TODO: decompile
}



void ov10_0221DDEC(void) {
    // bx lr
    // TODO: decompile
}



void ov10_0221DDF0(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221DE20 ; =0x00002DB8
    // add r1, r4, r1
    // ldrh r1, [r1, r0]
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0221DE20: .word 0x00002DB8
    // TODO: decompile
}



void ov10_0221DE24(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // ldr r1, _0221DE80 ; =0x000003CF
    // add r2, r0, #0
    // ldrb r0, [r4, r1]
    // cmp r0, r2
    // beq _0221DE64
    // lsl r2, r2, #1
    // add r2, r4, r2
    // sub r1, #0x3b
    // ldrh r1, [r2, r1]
    // add r0, r4, #0
    // mov r2, #1
    // bl GetItemVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r4, pc}
    // mov r1, #0xc0
    // mul r1, r2
    // add r2, r4, r1
    // ldr r1, _0221DE84 ; =0x00002DB8
    // add r0, r4, #0
    // ldrh r1, [r2, r1]
    // mov r2, #1
    // bl GetItemVar
    // mov r1, #0xd7
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _0221DE80: .word 0x000003CF
    // _0221DE84: .word 0x00002DB8
    // TODO: decompile
}



void ov10_0221DE88(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r6, #0x18
    // add r7, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // add r6, r0, #0
    // ldr r0, _0221DEE8 ; =0x000003CF
    // mov r1, #1
    // add r3, r6, #0
    // ldrb r2, [r5, r0]
    // and r3, r1
    // and r1, r2
    // cmp r3, r1
    // bne _0221DED2
    // mov r0, #0xc0
    // mul r0, r6
    // add r1, r5, r0
    // ldr r0, _0221DEEC ; =0x00002DB8
    // b _0221DED8
    // lsl r1, r6, #1
    // add r1, r5, r1
    // sub r0, #0x3b
    // ldrh r0, [r1, r0]
    // cmp r0, r4
    // bne _0221DEE6
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221DEE8: .word 0x000003CF
    // _0221DEEC: .word 0x00002DB8
    // TODO: decompile
}



void ov10_0221DEF0(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    // ldr r0, [r5, r0]
    // tst r0, r4
    ov10_0221EF24(r5, r0);
}



void ov10_0221DF20(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r6 << 0x18) >> 0x18));
    BattleSystem_GetFieldSide(r7, r0);
    // add r1, r5, r0
    // ldr r0, [r1, r0]
    // str r1, [r5, r0]
    // add r2, r5, r0
    // ldr r0, [r2, r0]
    // sub r1, #0xa4
    // str r0, [r5, r1]
}



void ov10_0221DF88(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // str r1, [sp]
    // add r0, r1, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // ldr r0, [sp]
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // ldr r0, [sp]
    // bl ov10_0221EEF0
    // str r0, [sp, #8]
    // lsl r1, r4, #0x18
    // ldr r0, [sp]
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r4, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // ble _0221E010
    // ldr r0, [sp]
    // add r0, r0, r6
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl BattleSystem_GetPartyMon
    // ldr r2, [sp, #4]
    // ldr r1, _0221E014 ; =0x0000219C
    // str r0, [sp, #0xc]
    // ldrb r1, [r2, r1]
    // cmp r4, r1
    // beq _0221E002
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // ldr r0, [sp, #0xc]
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // cmp r7, r0
    // beq _0221E002
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    // bl ov10_0221EF24
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // add r4, r4, #1
    // bl BattleSystem_GetPartySize
    // cmp r4, r0
    // blt _0221DFC8
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221E014: .word 0x0000219C
    // TODO: decompile
}



void ov10_0221E018(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r0, r1, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // ldr r0, [sp, #4]
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // ldr r0, [sp, #4]
    // bl ov10_0221EEF0
    // str r0, [sp, #0x10]
    // lsl r1, r4, #0x18
    // ldr r0, [sp, #4]
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    // mov r7, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // ble _0221E0B2
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    // add r2, r7, #0
    // bl BattleSystem_GetPartyMon
    // add r5, r0, #0
    // ldr r1, [sp, #0xc]
    // ldr r0, _0221E0B8 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // cmp r7, r0
    // beq _0221E0A4
    // mov r4, #0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0x3a
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, #0x42
    // mov r2, #0
    // bl GetMonData
    // cmp r6, r0
    // beq _0221E09A
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // bl ov10_0221EF24
    // b _0221E0A0
    // add r4, r4, #1
    // cmp r4, #4
    // blt _0221E072
    // cmp r4, #4
    // bne _0221E0B2
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    // add r7, r7, #1
    // bl BattleSystem_GetPartySize
    // cmp r7, r0
    // blt _0221E05A
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221E0B8: .word 0x0000219C
    // TODO: decompile
}



void ov10_0221E0BC(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    GetHeldItemFlingPower(r4, r0);
    // str r0, [r4, r1]
}



void ov10_0221E0EC(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // ldr r1, _0221E114 ; =0x000003CF
    // mov r0, #0xc0
    // ldrb r2, [r4, r1]
    // mul r0, r2
    // add r2, r4, r0
    // add r0, r1, #0
    // sub r0, #0x7a
    // ldrb r0, [r4, r0]
    // sub r1, #0x73
    // add r2, r2, r0
    // ldr r0, _0221E118 ; =0x00002D6C
    // ldrb r0, [r2, r0]
    // str r0, [r4, r1]
    // pop {r4, pc}
    // _0221E114: .word 0x000003CF
    // _0221E118: .word 0x00002D6C
    // TODO: decompile
}



void ov10_0221E11C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r6, r0, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // lsl r1, r5, #0x18
    // add r7, r0, #0
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // add r5, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r5, #0
    // bl GetBattlerLearnedMoveCount
    // mov r1, #0xc0
    // mul r1, r5
    // add r2, r4, r1
    // ldr r1, _0221E174 ; =0x00002DCC
    // ldr r1, [r2, r1]
    // lsl r1, r1, #0x13
    // lsr r2, r1, #0x1d
    // sub r1, r0, #1
    // cmp r2, r1
    // blo _0221E170
    // cmp r0, #1
    // ble _0221E170
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221E174: .word 0x00002DCC
    // TODO: decompile
}



void ov10_0221E178(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // ldr r0, _0221E198 ; =0x00000356
    // ldrh r1, [r4, r0]
    // lsl r1, r1, #4
    // add r2, r4, r1
    // add r1, r0, #0
    // add r1, #0x8a
    // ldrb r1, [r2, r1]
    // add r0, r0, #6
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0221E198: .word 0x00000356
    // TODO: decompile
}



void ov10_0221E19C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r0, [r4, r1]
    // lsl r0, r0, #1
    // add r2, r4, r0
    // ldr r0, _0221E1C8 ; =0x0000307C
    // ldrh r0, [r2, r0]
    // lsl r0, r0, #4
    // add r2, r4, r0
    // add r0, r1, #0
    // add r0, #0x10
    // ldrb r0, [r2, r0]
    // sub r1, #0x74
    // str r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _0221E1C8: .word 0x0000307C
    // TODO: decompile
}



void ov10_0221E1CC(void) {
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    ov10_0221EF24(r1, 1);
    // ldr r0, [sp, #8]
    ov10_0221EEF0();
    // ldr r0, [sp, #8]
    ov10_0221EF34(((r0 << 0x18) >> 0x18));
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    BattleSystem_GetMaxBattlers();
    // str r0, [sp, #0x14]
    // add r2, sp, #0x24
    // ldr r0, [sp, #0x14]
    // stmia r2!, {r1}
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // add r6, sp, #0x24
    // str r6, [sp, #0x20]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0x20]
    // add r5, r0, r1
    // str r0, [sp, #0x18]
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x18]
    CheckSortSpeed(1, (((0 - 1) + 1) << 2), *((u32*)r5));
    // ldr r0, [sp, #0x18]
    // str r4, [r6]
    // str r0, [r5]
    // ldr r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x1c]
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0x14]
    // add r3, sp, #0x24
    // ldr r1, [sp, #0x10]
    // ldr r1, [sp, #8]
    // str r0, [r1, r2]
    // ldr r1, [sp, #0x14]
}



void ov10_0221E290(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0x15
    // lsl r1, r1, #4
    // ldr r2, [r4, r1]
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221E2C8 ; =0x00002DD4
    // add r1, r4, r1
    // ldr r0, [r1, r0]
    // sub r1, r2, r0
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0221E2C8: .word 0x00002DD4
    // TODO: decompile
}



void ov10_0221E2CC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x54
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // add r0, r1, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // ldr r0, [sp, #0x1c]
    // bl ov10_0221EEF0
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x1c]
    // bl ov10_0221EEF0
    // str r0, [sp, #0x2c]
    // mov r4, #0
    // ldr r1, _0221E450 ; =0x000003CF
    // ldr r0, [sp, #0x1c]
    // add r5, sp, #0x34
    // ldrb r0, [r0, r1]
    // add r6, r4, #0
    // str r0, [sp, #0x28]
    // add r2, r4, #0
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x28]
    // add r2, #0xa
    // add r3, r6, #0
    // bl GetBattlerVar
    // strb r0, [r5]
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #6
    // blt _0221E2FA
    // ldr r0, [sp, #0x28]
    // mov r1, #0xc0
    // add r4, r0, #0
    // mul r4, r1
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x28]
    // bl GetBattlerAbility
    // add r1, sp, #0x44
    // str r1, [sp]
    // ldr r1, [sp, #0x1c]
    // ldr r3, _0221E454 ; =0x00002DB8
    // add r2, r1, r4
    // ldrh r1, [r2, r3]
    // ldr r5, _0221E450 ; =0x000003CF
    // str r1, [sp, #4]
    // add r1, sp, #0x34
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r3, #0
    // add r0, #0x14
    // ldr r0, [r2, r0]
    // ldr r1, [sp, #0x1c]
    // lsl r0, r0, #0xa
    // lsr r0, r0, #0x1d
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x30]
    // add r2, r1, #0
    // str r0, [sp, #0x14]
    // ldrb r2, [r2, r5]
    // sub r3, #0x6c
    // add r5, r1, #0
    // add r3, r5, r3
    // ldr r0, [sp, #0x18]
    // add r3, r3, r4
    // bl ov10_0221EF7C
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    // mov r7, #0
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // ble _0221E44A
    // ldr r1, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // add r0, r1, r0
    // str r0, [sp, #0x20]
    // ldr r1, _0221E458 ; =0x0000219C
    // ldr r0, [sp, #0x20]
    // ldrb r0, [r0, r1]
    // cmp r7, r0
    // beq _0221E43C
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    // add r2, r7, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221E43C
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221E43C
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0221E45C ; =0x000001EE
    // cmp r0, r1
    // beq _0221E43C
    // add r5, sp, #0x38
    // mov r4, #0
    // add r5, #2
    // add r1, r4, #0
    // add r0, r6, #0
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r5]
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, #4
    // blt _0221E3BA
    // mov r5, #0
    // add r4, sp, #0x34
    // add r1, r5, #0
    // add r0, r6, #0
    // add r1, #0x46
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r4]
    // add r5, r5, #1
    // add r4, r4, #1
    // cmp r5, #6
    // blt _0221E3D4
    // add r0, r6, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r4, r0, #0
    // add r0, r6, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // add r1, sp, #0x44
    // str r1, [sp]
    // lsl r1, r4, #0x10
    // lsr r1, r1, #0x10
    // str r1, [sp, #4]
    // add r1, sp, #0x34
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x1c]
    // str r0, [sp, #0x14]
    // ldr r3, _0221E450 ; =0x000003CF
    // add r2, r1, #0
    // ldrb r2, [r2, r3]
    // add r3, sp, #0x38
    // ldr r0, [sp, #0x18]
    // add r3, #2
    // bl ov10_0221EF7C
    // ldr r1, [sp, #0x24]
    // cmp r0, r1
    // ble _0221E43C
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x2c]
    // bl ov10_0221EF24
    // add sp, #0x54
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    // add r7, r7, #1
    // bl BattleSystem_GetPartySize
    // cmp r7, r0
    // blt _0221E374
    // add sp, #0x54
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221E450: .word 0x000003CF
    // _0221E454: .word 0x00002DB8
    // _0221E458: .word 0x0000219C
    // _0221E45C: .word 0x000001EE
    // TODO: decompile
}



void ov10_0221E460(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // ldr r2, _0221E494 ; =0x000003CF
    // add r6, r0, #0
    // ldrb r2, [r4, r2]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r3, #1
    // bl ov10_0221FD34
    // cmp r0, #1
    // bne _0221E490
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov10_0221EF24
    // pop {r4, r5, r6, pc}
    // nop
    // _0221E494: .word 0x000003CF
    // TODO: decompile
}



void ov10_0221E498(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // add r6, r1, #0
    // str r0, [sp, #0x18]
    // add r0, r6, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // str r0, [sp, #0x28]
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // str r0, [sp, #0x24]
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // ldr r7, _0221E59C ; =0x000003CF
    // str r0, [sp, #0x20]
    // mov r4, #0
    // add r5, sp, #0x2c
    // ldrb r1, [r6, r7]
    // add r2, r4, #0
    // add r0, r6, #0
    // add r2, #0xa
    // mov r3, #0
    // bl GetBattlerVar
    // strb r0, [r5]
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #6
    // blt _0221E4C6
    // ldr r0, _0221E59C ; =0x000003CF
    // ldrb r4, [r6, r0]
    // mov r0, #0xc0
    // add r5, r4, #0
    // mul r5, r0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl GetBattlerAbility
    // add r1, sp, #0x34
    // str r1, [sp]
    // ldr r3, _0221E5A0 ; =0x00002DB8
    // add r1, r6, r5
    // ldrh r1, [r1, r3]
    // add r2, r4, #0
    // str r1, [sp, #4]
    // add r1, sp, #0x2c
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // mul r0, r4
    // add r1, r6, r0
    // add r0, r3, #0
    // add r0, #0x14
    // ldr r0, [r1, r0]
    // sub r3, #0x6c
    // lsl r0, r0, #0xa
    // lsr r0, r0, #0x1d
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x24]
    // add r3, r6, r3
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r1, r6, #0
    // add r3, r3, r5
    // bl ov10_0221EF7C
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #0x1c]
    // lsl r1, r1, #0x18
    // add r0, r6, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // add r4, r0, #0
    // ldr r0, [sp, #0x24]
    // cmp r0, #1
    // bne _0221E54A
    // ldr r0, _0221E5A4 ; =0x00000355
    // ldrb r1, [r6, r0]
    // add r0, #0x17
    // add r1, r6, r1
    // ldrb r5, [r1, r0]
    // b _0221E54C
    // mov r5, #0x64
    // mov r0, #0xc0
    // add r7, r4, #0
    // mul r7, r0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl GetBattlerAbility
    // add r1, sp, #0x2c
    // str r1, [sp]
    // str r4, [sp, #4]
    // lsl r2, r4, #1
    // add r4, r6, r2
    // ldr r3, _0221E5A8 ; =0x00002DCC
    // add r7, r6, r7
    // str r0, [sp, #8]
    // ldr r0, [r7, r3]
    // ldr r2, _0221E5AC ; =0x0000307C
    // lsl r0, r0, #0xa
    // lsr r0, r0, #0x1d
    // str r0, [sp, #0xc]
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // sub r3, #0x14
    // ldrh r2, [r4, r2]
    // ldrh r3, [r7, r3]
    // ldr r0, [sp, #0x18]
    // add r1, r6, #0
    // bl ov10_0221F084
    // ldr r1, [sp, #0x1c]
    // cmp r0, r1
    // ble _0221E596
    // ldr r1, [sp, #0x20]
    // add r0, r6, #0
    // bl ov10_0221EF24
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221E59C: .word 0x000003CF
    // _0221E5A0: .word 0x00002DB8
    // _0221E5A4: .word 0x00000355
    // _0221E5A8: .word 0x00002DCC
    // _0221E5AC: .word 0x0000307C
    // TODO: decompile
}



void ov10_0221E5B0(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r2, #0xd7
    // mov r3, #0xd7
    // mov r1, #0
    // lsl r2, r2, #2
    // str r1, [r4, r2]
    // mov r2, #0xc0
    // mul r2, r0
    // add r0, r4, r2
    // ldr r2, _0221E5FC ; =0x00002D58
    // lsl r3, r3, #2
    // ldrsb r5, [r0, r2]
    // cmp r5, #6
    // ble _0221E5F0
    // ldr r6, [r4, r3]
    // sub r5, r5, #6
    // add r5, r6, r5
    // str r5, [r4, r3]
    // add r1, r1, #1
    // add r0, r0, #1
    // cmp r1, #8
    // blt _0221E5E2
    // pop {r4, r5, r6, pc}
    // nop
    // _0221E5FC: .word 0x00002D58
    // TODO: decompile
}



void ov10_0221E600(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r6, #0x18
    // add r4, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // ldr r3, _0221E648 ; =0x000003CF
    // mov r1, #0xc0
    // ldrb r6, [r5, r3]
    // add r2, r0, #0
    // mul r2, r1
    // add r0, r5, r2
    // mul r1, r6
    // add r1, r5, r1
    // ldr r2, _0221E64C ; =0x00002D58
    // add r0, r0, r4
    // add r1, r1, r4
    // ldrsb r0, [r0, r2]
    // ldrsb r1, [r1, r2]
    // sub r3, #0x73
    // sub r0, r0, r1
    // str r0, [r5, r3]
    // pop {r4, r5, r6, pc}
    // _0221E648: .word 0x000003CF
    // _0221E64C: .word 0x00002D58
    // TODO: decompile
}



void ov10_0221E650(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // str r6, [sp]
    // add r2, sp, #8
    // add r3, sp, #4
    ov10_0221E74C(r5, r0);
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    ov10_0221EF24(r5, r7);
}



void ov10_0221E6A4(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // str r6, [sp]
    // add r2, sp, #8
    // add r3, sp, #4
    ov10_0221E74C(r5, r0);
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    ov10_0221EF24(r5, r7);
}



void ov10_0221E6F8(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EEF0(r5);
    ov10_0221EF34(r5, ((r4 << 0x18) >> 0x18));
    // str r6, [sp]
    // add r2, sp, #8
    // add r3, sp, #4
    ov10_0221E74C(r5, r0);
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #4]
    ov10_0221EF24(r5, r7);
}



void ov10_0221E74C(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r1, r3, #0
    // ldr r3, [sp, #0x10]
    // cmp r3, #5
    // bhi _0221E824
    // add r3, r3, r3
    // add r3, pc
    // ldrh r3, [r3, #6]
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // add pc, r3
    // _0221E764: ; jump table
    // ldr r3, _0221E82C ; =0x000003CF
    // ldrb r5, [r0, r3]
    // mov r3, #0xc0
    // add r6, r5, #0
    // mul r6, r3
    // ldr r5, _0221E830 ; =0x00002D8C
    // add r6, r0, r6
    // ldr r6, [r6, r5]
    // str r6, [r2]
    // add r2, r4, #0
    // mul r2, r3
    // add r0, r0, r2
    // ldr r0, [r0, r5]
    // str r0, [r1]
    // pop {r4, r5, r6, pc}
    // ldr r3, _0221E82C ; =0x000003CF
    // ldrb r5, [r0, r3]
    // mov r3, #0xc0
    // add r6, r5, #0
    // mul r6, r3
    // ldr r5, _0221E834 ; =0x00002D42
    // add r6, r0, r6
    // ldrh r6, [r6, r5]
    // str r6, [r2]
    // add r2, r4, #0
    // mul r2, r3
    // add r0, r0, r2
    // ldrh r0, [r0, r5]
    // str r0, [r1]
    // pop {r4, r5, r6, pc}
    // ldr r3, _0221E82C ; =0x000003CF
    // ldrb r5, [r0, r3]
    // mov r3, #0xc0
    // add r6, r5, #0
    // mul r6, r3
    // ldr r5, _0221E838 ; =0x00002D44
    // add r6, r0, r6
    // ldrh r6, [r6, r5]
    // str r6, [r2]
    // add r2, r4, #0
    // mul r2, r3
    // add r0, r0, r2
    // ldrh r0, [r0, r5]
    // str r0, [r1]
    // pop {r4, r5, r6, pc}
    // ldr r3, _0221E82C ; =0x000003CF
    // ldrb r5, [r0, r3]
    // mov r3, #0xc0
    // add r6, r5, #0
    // mul r6, r3
    // ldr r5, _0221E83C ; =0x00002D48
    // add r6, r0, r6
    // ldrh r6, [r6, r5]
    // str r6, [r2]
    // add r2, r4, #0
    // mul r2, r3
    // add r0, r0, r2
    // ldrh r0, [r0, r5]
    // str r0, [r1]
    // pop {r4, r5, r6, pc}
    // ldr r3, _0221E82C ; =0x000003CF
    // ldrb r5, [r0, r3]
    // mov r3, #0xc0
    // add r6, r5, #0
    // mul r6, r3
    // ldr r5, _0221E840 ; =0x00002D4A
    // add r6, r0, r6
    // ldrh r6, [r6, r5]
    // str r6, [r2]
    // add r2, r4, #0
    // mul r2, r3
    // add r0, r0, r2
    // ldrh r0, [r0, r5]
    // str r0, [r1]
    // pop {r4, r5, r6, pc}
    // ldr r3, _0221E82C ; =0x000003CF
    // ldrb r5, [r0, r3]
    // mov r3, #0xc0
    // add r6, r5, #0
    // mul r6, r3
    // ldr r5, _0221E844 ; =0x00002D46
    // add r6, r0, r6
    // ldrh r6, [r6, r5]
    // str r6, [r2]
    // add r2, r4, #0
    // mul r2, r3
    // add r0, r0, r2
    // ldrh r0, [r0, r5]
    // str r0, [r1]
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // nop
    // _0221E82C: .word 0x000003CF
    // _0221E830: .word 0x00002D8C
    // _0221E834: .word 0x00002D42
    // _0221E838: .word 0x00002D44
    // _0221E83C: .word 0x00002D48
    // _0221E840: .word 0x00002D4A
    // _0221E844: .word 0x00002D46
    // TODO: decompile
}



void ov10_0221E848(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r6, r1, #0
    // str r0, [sp, #0x18]
    // add r0, r6, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r6, #0
    // bl ov10_0221EEF0
    // ldr r2, _0221E984 ; =0x00000356
    // str r0, [sp, #0x20]
    // ldrh r3, [r6, r2]
    // add r2, #0x88
    // ldr r1, _0221E988 ; =ov10_0222B098
    // lsl r7, r3, #4
    // add r3, r6, r7
    // ldrh r3, [r3, r2]
    // ldr r2, _0221E98C ; =0x0000FFFF
    // mov r0, #0
    // ldrh r4, [r1]
    // cmp r3, r4
    // beq _0221E882
    // add r1, r1, #2
    // ldrh r4, [r1]
    // add r0, r0, #1
    // cmp r4, r2
    // bne _0221E872
    // ldr r2, _0221E990 ; =ov10_0222B080
    // ldr r4, _0221E98C ; =0x0000FFFF
    // mov r1, #0
    // ldrh r5, [r2]
    // cmp r3, r5
    // beq _0221E898
    // add r2, r2, #2
    // ldrh r5, [r2]
    // add r1, r1, #1
    // cmp r5, r4
    // bne _0221E888
    // lsl r2, r1, #1
    // ldr r1, _0221E990 ; =ov10_0222B080
    // ldrh r1, [r1, r2]
    // ldr r2, _0221E98C ; =0x0000FFFF
    // cmp r1, r2
    // bne _0221E8B8
    // ldr r1, _0221E994 ; =0x000003E1
    // add r3, r6, r7
    // ldrb r1, [r3, r1]
    // cmp r1, #1
    // bls _0221E976
    // lsl r1, r0, #1
    // ldr r0, _0221E988 ; =ov10_0222B098
    // ldrh r0, [r0, r1]
    // cmp r0, r2
    // bne _0221E976
    // ldr r0, _0221E998 ; =0x000003CF
    // ldrb r7, [r6, r0]
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // mov r4, #0
    // add r5, sp, #0x28
    // add r2, r4, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, #0xa
    // mov r3, #0
    // bl GetBattlerVar
    // strb r0, [r5]
    // add r4, r4, #1
    // add r5, r5, #1
    // cmp r4, #6
    // blt _0221E8C4
    // mov r0, #0xc0
    // add r4, r7, #0
    // mul r4, r0
    // add r0, r6, #0
    // add r1, r7, #0
    // bl GetBattlerAbility
    // add r1, sp, #0x30
    // str r1, [sp]
    // ldr r3, _0221E99C ; =0x00002DB8
    // add r1, r6, r4
    // ldrh r2, [r1, r3]
    // str r2, [sp, #4]
    // add r2, sp, #0x28
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r3, #0
    // add r0, #0x14
    // ldr r0, [r1, r0]
    // sub r3, #0x6c
    // lsl r0, r0, #0xa
    // lsr r0, r0, #0x1d
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x20]
    // add r3, r6, r3
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r1, r6, #0
    // add r2, r7, #0
    // add r3, r3, r4
    // bl ov10_0221EF7C
    // ldr r1, _0221E998 ; =0x000003CF
    // ldr r0, [sp, #0x18]
    // ldrb r1, [r6, r1]
    // bl BattleSystem_GetBattlerIdPartner
    // add r7, r0, #0
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0
    // bne _0221E93A
    // ldr r0, _0221E9A0 ; =0x00000355
    // ldrb r0, [r6, r0]
    // lsl r1, r0, #2
    // add r0, sp, #0x30
    // ldr r0, [r0, r1]
    // str r0, [sp, #0x24]
    // mov r3, #0
    // add r2, sp, #0x30
    // ldr r1, [r2]
    // ldr r0, [sp, #0x24]
    // cmp r1, r0
    // bgt _0221E94E
    // add r3, r3, #1
    // add r2, r2, #4
    // cmp r3, #4
    // blt _0221E93E
    // cmp r3, #4
    // bne _0221E95C
    // mov r0, #0xd7
    // mov r1, #2
    // lsl r0, r0, #2
    // str r1, [r6, r0]
    // b _0221E968
    // mov r0, #0xd7
    // mov r1, #1
    // lsl r0, r0, #2
    // add sp, #0x40
    // str r1, [r6, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // cmp r0, #2
    // blt _0221E8C0
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xd7
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r6, r0]
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221E984: .word 0x00000356
    // _0221E988: .word ov10_0222B098
    // _0221E98C: .word 0x0000FFFF
    // _0221E990: .word ov10_0222B080
    // _0221E994: .word 0x000003E1
    // _0221E998: .word 0x000003CF
    // _0221E99C: .word 0x00002DB8
    // _0221E9A0: .word 0x00000355
    // TODO: decompile
}



void ov10_0221E9A4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // cmp r4, #1
    // bne _0221E9C8
    // bl GF_AssertFail
    // cmp r4, #0
    // bne _0221E9D0
    // bl GF_AssertFail
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // bl MaskOfFlagNo
    // ldr r1, _0221E9F0 ; =0x00003108
    // ldrb r1, [r5, r1]
    // tst r0, r1
    // beq _0221E9EE
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov10_0221EF24
    // pop {r4, r5, r6, pc}
    // _0221E9F0: .word 0x00003108
    // TODO: decompile
}



void ov10_0221E9F4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r6, r0, #0
    // cmp r4, #1
    // bne _0221EA18
    // bl GF_AssertFail
    // cmp r4, #0
    // bne _0221EA20
    // bl GF_AssertFail
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // bl MaskOfFlagNo
    // ldr r1, _0221EA40 ; =0x00003108
    // ldrb r1, [r5, r1]
    // tst r0, r1
    // bne _0221EA3E
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov10_0221EF24
    // pop {r4, r5, r6, pc}
    // _0221EA40: .word 0x00003108
    // TODO: decompile
}



void ov10_0221EA44(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221EA78 ; =0x00002DBE
    // add r1, r4, r1
    // ldrb r0, [r1, r0]
    // lsl r0, r0, #0x1c
    // lsr r1, r0, #0x1c
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0221EA78: .word 0x00002DBE
    // TODO: decompile
}



void ov10_0221EA7C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // add r2, r0, #0
    // mov r1, #0xc0
    // mul r2, r1
    // ldr r0, _0221EAC4 ; =0x00002DD4
    // add r2, r4, r2
    // add r1, #0x90
    // ldr r2, [r2, r0]
    // ldr r0, [r4, r1]
    // cmp r2, r0
    // bge _0221EAB8
    // mov r0, #0xd7
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // mov r1, #1
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0221EAC4: .word 0x00002DD4
    // TODO: decompile
}



void ov10_0221EAC8(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221EAFC ; =0x00002DC8
    // add r1, r4, r1
    // ldr r0, [r1, r0]
    // lsl r0, r0, #8
    // lsr r1, r0, #0x1d
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // _0221EAFC: .word 0x00002DC8
    // TODO: decompile
}



void ov10_0221EB00(void) {
}



void ov10_0221EB18(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // lsl r0, r0, #1
    // add r1, r4, r0
    // ldr r0, _0221EB48 ; =0x00003124
    // ldrh r1, [r1, r0]
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0221EB48: .word 0x00003124
    // TODO: decompile
}



void ov10_0221EB4C(void) {
    ov10_0221EF24(r1, 1);
    // ldr r0, [r4, r1]
    // add r2, r4, r0
    // add r0, #0x86
    // ldrb r0, [r2, r0]
    // str r0, [r4, r1]
}



void ov10_0221EB6C(void) {
    ov10_0221EF24(r1, 1);
    // ldr r0, [r4, r1]
    // add r2, r4, r0
    // add r0, #0x85
    // ldrb r0, [r2, r0]
    // str r0, [r4, r1]
}



void ov10_0221EB8C(void) {
    ov10_0221EF24(r1, 1);
    // ldr r0, [r4, r1]
    // add r2, r4, r0
    // add r0, #0x82
    // ldrh r0, [r2, r0]
    // str r0, [r4, r1]
}



void ov10_0221EBAC(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // lsl r1, r0, #1
    // add r2, r4, r1
    // ldr r1, _0221EC00 ; =0x0000305C
    // ldrh r1, [r2, r1]
    // cmp r1, #0xb6
    // beq _0221EBE8
    // cmp r1, #0xc5
    // beq _0221EBE8
    // cmp r1, #0xcb
    // beq _0221EBE8
    // mov r0, #0xd7
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221EC04 ; =0x00002DC8
    // add r1, r4, r1
    // ldr r0, [r1, r0]
    // lsl r0, r0, #0x13
    // lsr r1, r0, #0x1e
    // mov r0, #0xd7
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // pop {r4, pc}
    // nop
    // _0221EC00: .word 0x0000305C
    // _0221EC04: .word 0x00002DC8
    // TODO: decompile
}



void ov10_0221EC08(void) {
}



void ov10_0221EC28(void) {
}



void ov10_0221EC44(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EE60(r5, r4);
    // ldrb r2, [r4, r1]
    // orr r0, r2
    // strb r0, [r4, r1]
}



void ov10_0221EC6C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // cmp r4, #0
    // beq _0221EC96
    // cmp r4, #1
    // beq _0221ECBC
    // cmp r4, #2
    // beq _0221ECE2
    // pop {r3, r4, r5, pc}
    // ldr r2, _0221ED08 ; =0x000003CF
    // mov r3, #0xc0
    // ldrb r0, [r5, r2]
    // add r2, r2, #1
    // ldrb r2, [r5, r2]
    // add r4, r0, #0
    // mul r4, r3
    // add r0, r5, r4
    // ldr r4, _0221ED0C ; =0x00002D74
    // mul r3, r2
    // add r2, r5, r3
    // ldrb r0, [r0, r4]
    // ldrb r2, [r2, r4]
    // cmp r0, r2
    // bls _0221ED06
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, pc}
    // ldr r2, _0221ED08 ; =0x000003CF
    // mov r3, #0xc0
    // ldrb r0, [r5, r2]
    // add r2, r2, #1
    // ldrb r2, [r5, r2]
    // add r4, r0, #0
    // mul r4, r3
    // add r0, r5, r4
    // ldr r4, _0221ED0C ; =0x00002D74
    // mul r3, r2
    // add r2, r5, r3
    // ldrb r0, [r0, r4]
    // ldrb r2, [r2, r4]
    // cmp r0, r2
    // bhs _0221ED06
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, pc}
    // ldr r2, _0221ED08 ; =0x000003CF
    // mov r3, #0xc0
    // ldrb r0, [r5, r2]
    // add r2, r2, #1
    // ldrb r2, [r5, r2]
    // add r4, r0, #0
    // mul r4, r3
    // add r0, r5, r4
    // ldr r4, _0221ED0C ; =0x00002D74
    // mul r3, r2
    // add r2, r5, r3
    // ldrb r0, [r0, r4]
    // ldrb r2, [r2, r4]
    // cmp r0, r2
    // bne _0221ED06
    // add r0, r5, #0
    // bl ov10_0221EF24
    // pop {r3, r4, r5, pc}
    // _0221ED08: .word 0x000003CF
    // _0221ED0C: .word 0x00002D74
    // TODO: decompile
}



void ov10_0221ED10(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // ldrb r2, [r4, r0]
    // mov r0, #0xc0
    // mul r0, r2
    // add r2, r4, r0
    // ldr r0, _0221ED44 ; =0x00002DC8
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x1d
    // beq _0221ED40
    // add r0, r4, #0
    // bl ov10_0221EF24
    // pop {r4, pc}
    // nop
    // _0221ED44: .word 0x00002DC8
    // TODO: decompile
}



void ov10_0221ED48(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // add r1, r0, #0
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // ldrb r2, [r4, r0]
    // mov r0, #0xc0
    // mul r0, r2
    // add r2, r4, r0
    // ldr r0, _0221ED7C ; =0x00002DC8
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x15
    // lsr r0, r0, #0x1d
    // bne _0221ED78
    // add r0, r4, #0
    // bl ov10_0221EF24
    // pop {r4, pc}
    // nop
    // _0221ED7C: .word 0x00002DC8
    // TODO: decompile
}



void ov10_0221ED80(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r4, #0
    // bl ov10_0221EEF0
    // ldr r2, _0221EDB0 ; =0x000003CF
    // add r1, r0, #0
    // ldrb r0, [r4, r2]
    // add r2, r2, #1
    // mov r3, #1
    // ldrb r2, [r4, r2]
    // and r0, r3
    // and r2, r3
    // cmp r0, r2
    // bne _0221EDAC
    // add r0, r4, #0
    // bl ov10_0221EF24
    // pop {r4, pc}
    // nop
    // _0221EDB0: .word 0x000003CF
    // TODO: decompile
}



void ov10_0221EDB4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // mov r1, #1
    // bl ov10_0221EF24
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov10_0221EEF0
    // lsl r1, r4, #0x18
    // add r6, r0, #0
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov10_0221EF34
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221EDF4 ; =0x00002DC8
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    // lsr r0, r0, #0x1f
    // beq _0221EDF0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov10_0221EF24
    // pop {r4, r5, r6, pc}
    // nop
    // _0221EDF4: .word 0x00002DC8
    // TODO: decompile
}



void ov10_0221EDF8(void) {
    ov10_0221EF24(r1, 1);
    ov10_0221EEF0(r4);
    ov10_0221EF34(r4, ((r0 << 0x18) >> 0x18));
    GetBattlerAbility(r4, r0);
    // str r0, [r4, r1]
}



void ov10_0221EE28(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // mov r1, #0xf3
    // lsl r1, r1, #2
    // ldrb r5, [r4, r1]
    // add r0, r5, #1
    // strb r0, [r4, r1]
    // ldr r0, _0221EE5C ; =0x00002138
    // sub r1, #0x20
    // ldr r3, [r4, r0]
    // lsl r0, r5, #2
    // add r0, r4, r0
    // str r3, [r0, r1]
    // add r0, r4, #0
    // add r1, r2, #0
    // bl ov10_0221EF24
    // mov r0, #0xf3
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // cmp r0, #8
    // bls _0221EE58
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // nop
    // _0221EE5C: .word 0x00002138
    // TODO: decompile
}



void ov10_0221EE60(void) {
    // mov r0, #0xf3
    // lsl r0, r0, #2
    // ldrb r2, [r1, r0]
    // cmp r2, #0
    // beq _0221EE80
    // sub r2, r2, #1
    // strb r2, [r1, r0]
    // ldrb r2, [r1, r0]
    // sub r0, #0x20
    // lsl r2, r2, #2
    // add r2, r1, r2
    // ldr r2, [r2, r0]
    // ldr r0, _0221EE84 ; =0x00002138
    // str r2, [r1, r0]
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0221EE84: .word 0x00002138
    // TODO: decompile
}



void ov10_0221EE88(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r2, #0x3d
    // lsl r2, r2, #4
    // str r1, [sp]
    // ldrb r1, [r1, r2]
    // mov r7, #0x37
    // lsl r7, r7, #4
    // mov lr, r1
    // mov r3, lr
    // lsl r4, r3, #1
    // ldr r3, [sp]
    // ldr r2, [sp]
    // lsl r1, r1, #3
    // add r4, r3, r4
    // ldr r3, _0221EEEC ; =0x0000307C
    // mov r0, #0
    // add r5, r2, r1
    // mov ip, r1
    // ldrh r3, [r4, r3]
    // add r1, r5, #0
    // add r2, r0, #0
    // add r6, r7, #0
    // ldrh r4, [r1, r6]
    // cmp r3, r4
    // beq _0221EEEA
    // add r4, r5, r2
    // ldrh r4, [r4, r7]
    // cmp r4, #0
    // bne _0221EEE0
    // mov r1, lr
    // lsl r2, r1, #1
    // ldr r1, [sp]
    // ldr r3, [sp]
    // add r2, r1, r2
    // ldr r1, _0221EEEC ; =0x0000307C
    // lsl r0, r0, #1
    // ldrh r1, [r2, r1]
    // mov r2, ip
    // add r2, r3, r2
    // add r2, r2, r0
    // mov r0, #0x37
    // lsl r0, r0, #4
    // strh r1, [r2, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r0, #1
    // add r1, r1, #2
    // add r2, r2, #2
    // cmp r0, #4
    // blt _0221EEB4
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221EEEC: .word 0x0000307C
    // TODO: decompile
}



void ov10_0221EEF0(void) {
    // ldr r1, _0221EF0C ; =0x00002134
    // add r2, r1, #4
    // ldr r2, [r0, r2]
    // ldr r3, [r0, r1]
    // lsl r2, r2, #2
    // ldr r3, [r3, r2]
    // add r2, r1, #4
    // ldr r2, [r0, r2]
    // add r1, r1, #4
    // add r2, r2, #1
    // str r2, [r0, r1]
    // add r0, r3, #0
    // bx lr
    // nop
    // _0221EF0C: .word 0x00002134
    // TODO: decompile
}



void ov10_0221EF10(void) {
    // ldr r2, _0221EF20 ; =0x00002134
    // ldr r3, [r0, r2]
    // add r2, r2, #4
    // ldr r0, [r0, r2]
    // add r0, r0, r1
    // lsl r0, r0, #2
    // ldr r0, [r3, r0]
    // bx lr
    // _0221EF20: .word 0x00002134
    // TODO: decompile
}



void ov10_0221EF24(void) {
    // ldr r2, _0221EF30 ; =0x00002138
    // ldr r3, [r0, r2]
    // add r1, r3, r1
    // str r1, [r0, r2]
    // bx lr
    // nop
    // _0221EF30: .word 0x00002138
    // TODO: decompile
}



void ov10_0221EF34(void) {
    // cmp r1, #3
    // bhi _0221EF52
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221EF44: ; jump table
    // ldr r1, _0221EF78 ; =0x000003CF
    // ldrb r0, [r0, r1]
    // bx lr
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r0, [r0, r1]
    // bx lr
    // ldr r1, _0221EF78 ; =0x000003CF
    // ldrb r1, [r0, r1]
    // mov r0, #2
    // eor r0, r1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx lr
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r1, [r0, r1]
    // mov r0, #2
    // eor r0, r1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx lr
    // _0221EF78: .word 0x000003CF
    // TODO: decompile
}



void ov10_0221EF7C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x44]
    // ldr r6, [sp, #0x40]
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x48]
    // add r7, r1, #0
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x4c]
    // str r2, [sp, #0x18]
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x50]
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x50]
    // ldr r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // mov r0, #0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x1c]
    // ldr r3, _0221F070 ; =0x000003DE
    // ldrh r2, [r2]
    // ldr r1, _0221F074 ; =ov10_0222B098
    // mov r0, #0
    // mov ip, r2
    // lsl r2, r2, #4
    // add r2, r7, r2
    // ldrh r3, [r2, r3]
    // str r2, [sp, #0x20]
    // ldr r2, _0221F078 ; =0x0000FFFF
    // ldrh r4, [r1]
    // cmp r4, r3
    // beq _0221EFCA
    // add r1, r1, #2
    // ldrh r4, [r1]
    // add r0, r0, #1
    // cmp r4, r2
    // bne _0221EFBA
    // ldr r2, _0221F07C ; =ov10_0222B080
    // ldr r4, _0221F078 ; =0x0000FFFF
    // mov r1, #0
    // ldrh r5, [r2]
    // cmp r5, r3
    // beq _0221EFE0
    // add r2, r2, #2
    // ldrh r5, [r2]
    // add r1, r1, #1
    // cmp r5, r4
    // bne _0221EFD0
    // lsl r2, r1, #1
    // ldr r1, _0221F07C ; =ov10_0222B080
    // ldrh r1, [r1, r2]
    // ldr r2, _0221F078 ; =0x0000FFFF
    // cmp r1, r2
    // bne _0221F006
    // mov r1, ip
    // cmp r1, #0
    // beq _0221F03C
    // lsl r1, r0, #1
    // ldr r0, _0221F074 ; =ov10_0222B098
    // ldrh r0, [r0, r1]
    // cmp r0, r2
    // bne _0221F03C
    // ldr r1, _0221F080 ; =0x000003E1
    // ldr r0, [sp, #0x20]
    // ldrb r0, [r0, r1]
    // cmp r0, #1
    // bls _0221F03C
    // ldr r0, [sp, #0x54]
    // cmp r0, #1
    // bne _0221F018
    // ldr r0, [sp, #0x28]
    // add r1, r7, r0
    // mov r0, #0xdb
    // lsl r0, r0, #2
    // ldrb r0, [r1, r0]
    // b _0221F01A
    // mov r0, #0x64
    // ldr r1, [sp, #0x48]
    // mov r2, ip
    // str r1, [sp]
    // ldr r1, [sp, #0x18]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x4c]
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x50]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x44]
    // add r1, r7, #0
    // bl ov10_0221F084
    // str r0, [r6]
    // b _0221F040
    // mov r0, #0
    // str r0, [r6]
    // ldr r0, [sp, #0x1c]
    // add r6, r6, #4
    // add r0, r0, #2
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #4
    // blt _0221EFA4
    // ldr r2, [sp, #0x40]
    // mov r3, #0
    // ldr r1, [r2]
    // ldr r0, [sp, #0x24]
    // cmp r0, r1
    // bge _0221F060
    // str r1, [sp, #0x24]
    // add r3, r3, #1
    // add r2, r2, #4
    // cmp r3, #4
    // blt _0221F056
    // ldr r0, [sp, #0x24]
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221F070: .word 0x000003DE
    // _0221F074: .word ov10_0222B098
    // _0221F078: .word 0x0000FFFF
    // _0221F07C: .word ov10_0222B080
    // _0221F080: .word 0x000003E1
    // TODO: decompile
}



void ov10_0221F084(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r6, r1, #0
    // ldr r1, [sp, #0x60]
    // str r3, [sp, #0x1c]
    // str r1, [sp, #0x60]
    // ldr r1, [sp, #0x64]
    // str r0, [sp, #0x18]
    // str r1, [sp, #0x64]
    // mov r1, #0x3d
    // lsl r1, r1, #4
    // ldrb r1, [r6, r1]
    // add r5, r2, #0
    // bl BattleSystem_GetFieldSide
    // mov r4, #0
    // str r0, [sp, #0x28]
    // add r0, r4, #0
    // add r7, r4, #0
    // str r4, [sp, #0x20]
    // str r0, [sp, #0x48]
    // cmp r5, #0xd8
    // bgt _0221F0EA
    // blt _0221F0B6
    // b _0221F2F4
    // cmp r5, #0x52
    // bgt _0221F0D8
    // blt _0221F0BE
    // b _0221F2B8
    // cmp r5, #0x31
    // bgt _0221F0C8
    // bne _0221F0C6
    // b _0221F36E
    // b _0221F3B0
    // cmp r5, #0x45
    // bgt _0221F0D6
    // cmp r5, #0x43
    // blt _0221F0D6
    // beq _0221F120
    // cmp r5, #0x45
    // beq _0221F0DE
    // b _0221F3B0
    // cmp r5, #0x65
    // bgt _0221F0E2
    // bne _0221F0E0
    // b _0221F2BE
    // b _0221F3B0
    // cmp r5, #0x95
    // bne _0221F0E8
    // b _0221F2CE
    // b _0221F3B0
    // mov r0, #0x5a
    // lsl r0, r0, #2
    // cmp r5, r0
    // bgt _0221F110
    // blt _0221F0F6
    // b _0221F28E
    // cmp r5, #0xde
    // bgt _0221F10A
    // cmp r5, #0xda
    // blt _0221F108
    // bne _0221F102
    // b _0221F30E
    // cmp r5, #0xde
    // bne _0221F108
    // b _0221F32C
    // b _0221F3B0
    // cmp r5, #0xed
    // beq _0221F1E8
    // b _0221F3B0
    // add r1, r0, #0
    // add r1, #0x57
    // cmp r5, r1
    // bgt _0221F12A
    // add r1, r0, #0
    // add r1, #0x57
    // cmp r5, r1
    // blt _0221F122
    // b _0221F374
    // add r0, r0, #3
    // cmp r5, r0
    // beq _0221F132
    // b _0221F3B0
    // add r0, #0x59
    // cmp r5, r0
    // beq _0221F15A
    // b _0221F3B0
    // ldr r0, [sp, #0x68]
    // cmp r0, #0x67
    // beq _0221F166
    // ldr r0, [sp, #0x6c]
    // cmp r0, #0
    // bne _0221F166
    // ldr r1, [sp, #0x1c]
    // add r0, r6, #0
    // mov r2, #0xb
    // bl GetItemVar
    // add r4, r0, #0
    // beq _0221F166
    // ldr r1, [sp, #0x1c]
    // add r0, r6, #0
    // mov r2, #0xc
    // bl GetItemVar
    // add r7, r0, #0
    // b _0221F3B4
    // ldr r0, [sp, #0x68]
    // cmp r0, #0x67
    // beq _0221F166
    // ldr r0, [sp, #0x6c]
    // cmp r0, #0
    // beq _0221F168
    // b _0221F3B4
    // ldr r1, [sp, #0x1c]
    // add r0, r6, #0
    // mov r2, #1
    // bl GetItemVar
    // sub r0, #0x7e
    // cmp r0, #0xf
    // bhi _0221F1E4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221F184: ; jump table
    // mov r7, #1
    // b _0221F3B4
    // mov r7, #2
    // b _0221F3B4
    // mov r7, #3
    // b _0221F3B4
    // mov r7, #4
    // b _0221F3B4
    // mov r7, #5
    // b _0221F3B4
    // mov r7, #6
    // b _0221F3B4
    // mov r7, #7
    // b _0221F3B4
    // mov r7, #8
    // b _0221F3B4
    // mov r7, #0xa
    // b _0221F3B4
    // mov r7, #0xb
    // b _0221F3B4
    // mov r7, #0xc
    // b _0221F3B4
    // mov r7, #0xd
    // b _0221F3B4
    // mov r7, #0xe
    // b _0221F3B4
    // mov r7, #0xf
    // b _0221F3B4
    // mov r7, #0x10
    // b _0221F3B4
    // mov r7, #0x11
    // b _0221F3B4
    // mov r7, #0
    // b _0221F3B4
    // ldr r0, [sp, #0x60]
    // ldr r1, [sp, #0x60]
    // ldrb r0, [r0, #1]
    // ldrb r3, [r1, #4]
    // ldrb r1, [r1, #5]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x34]
    // ldrb r0, [r0]
    // lsl r1, r1, #0x1f
    // lsr r1, r1, #0x1a
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x38]
    // ldrb r2, [r0, #2]
    // lsl r1, r3, #0x1f
    // lsr r1, r1, #0x1b
    // ldrb r0, [r0, #3]
    // str r1, [sp, #0x3c]
    // mov r4, #1
    // lsl r1, r0, #0x1f
    // lsr r1, r1, #0x1c
    // str r1, [sp, #0x40]
    // lsl r1, r2, #0x1f
    // lsr r7, r1, #0x1d
    // ldr r1, [sp, #0x30]
    // and r1, r4
    // ldr r4, [sp, #0x2c]
    // lsl r4, r4, #0x1f
    // lsr r4, r4, #0x1e
    // orr r1, r4
    // add r4, r7, #0
    // orr r4, r1
    // ldr r1, [sp, #0x40]
    // orr r4, r1
    // ldr r1, [sp, #0x3c]
    // orr r4, r1
    // ldr r1, [sp, #0x38]
    // orr r1, r4
    // str r1, [sp, #0x24]
    // mov r1, #2
    // ldr r4, [sp, #0x34]
    // and r3, r1
    // and r4, r1
    // lsl r4, r4, #4
    // str r4, [sp, #0x44]
    // and r0, r1
    // lsl r4, r3, #3
    // lsl r3, r0, #2
    // add r0, r2, #0
    // and r0, r1
    // lsl r2, r0, #1
    // ldr r0, [sp, #0x30]
    // and r0, r1
    // asr r7, r0, #1
    // ldr r0, [sp, #0x2c]
    // and r0, r1
    // orr r0, r7
    // orr r0, r2
    // orr r0, r3
    // add r1, r4, #0
    // orr r1, r0
    // ldr r0, [sp, #0x44]
    // orr r1, r0
    // mov r0, #0x28
    // mul r0, r1
    // mov r1, #0x3f
    // bl _s32_div_f
    // add r4, r0, #0
    // ldr r1, [sp, #0x24]
    // mov r0, #0xf
    // mul r0, r1
    // mov r1, #0x3f
    // add r4, #0x1e
    // bl _s32_div_f
    // add r7, r0, #1
    // cmp r7, #9
    // bge _0221F28A
    // b _0221F3B4
    // add r7, r7, #1
    // b _0221F3B4
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // ldrb r0, [r6, r0]
    // ldr r2, _0221F454 ; =0x000021F0
    // lsl r0, r0, #2
    // add r0, r6, r0
    // ldr r1, [r0, r2]
    // mov r0, #0x19
    // mul r0, r1
    // ldr r1, [sp, #0x64]
    // lsl r1, r1, #2
    // add r1, r6, r1
    // ldr r1, [r1, r2]
    // bl _u32_div_f
    // add r4, r0, #1
    // cmp r4, #0x96
    // ble _0221F2B4
    // mov r4, #0x96
    // mov r7, #0
    // b _0221F3B4
    // mov r0, #0x28
    // str r0, [sp, #0x20]
    // b _0221F3B4
    // ldr r0, [sp, #0x64]
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221F458 ; =0x00002D74
    // add r1, r6, r1
    // ldrb r0, [r1, r0]
    // str r0, [sp, #0x20]
    // b _0221F3B4
    // ldr r0, [sp, #0x18]
    // bl BattleSystem_Random
    // mov r1, #0xb
    // bl _s32_div_f
    // ldr r0, [sp, #0x64]
    // mov r2, #0xc0
    // mul r2, r0
    // ldr r0, _0221F458 ; =0x00002D74
    // add r2, r6, r2
    // ldrb r2, [r2, r0]
    // add r0, r1, #5
    // mov r1, #0xa
    // mul r0, r2
    // bl _s32_div_f
    // str r0, [sp, #0x20]
    // b _0221F3B4
    // ldr r0, [sp, #0x64]
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221F45C ; =0x00002D75
    // add r1, r6, r1
    // ldrb r1, [r1, r0]
    // mov r0, #0xa
    // mul r0, r1
    // mov r1, #0x19
    // bl _s32_div_f
    // add r4, r0, #0
    // b _0221F3B4
    // ldr r0, [sp, #0x64]
    // mov r1, #0xc0
    // mul r1, r0
    // ldr r0, _0221F45C ; =0x00002D75
    // add r1, r6, r1
    // ldrb r1, [r1, r0]
    // mov r0, #0xff
    // sub r1, r0, r1
    // mov r0, #0xa
    // mul r0, r1
    // mov r1, #0x19
    // bl _s32_div_f
    // add r4, r0, #0
    // b _0221F3B4
    // ldr r0, [sp, #0x18]
    // bl BattleSystem_Random
    // mov r1, #0x64
    // bl _s32_div_f
    // cmp r1, #5
    // bge _0221F340
    // mov r4, #0xa
    // b _0221F36A
    // cmp r1, #0xf
    // bge _0221F348
    // mov r4, #0x1e
    // b _0221F36A
    // cmp r1, #0x23
    // bge _0221F350
    // mov r4, #0x32
    // b _0221F36A
    // cmp r1, #0x41
    // bge _0221F358
    // mov r4, #0x46
    // b _0221F36A
    // cmp r1, #0x55
    // bge _0221F360
    // mov r4, #0x5a
    // b _0221F36A
    // cmp r1, #0x5f
    // bge _0221F368
    // mov r4, #0x6e
    // b _0221F36A
    // mov r4, #0x96
    // mov r7, #0
    // b _0221F3B4
    // mov r0, #0x14
    // str r0, [sp, #0x20]
    // b _0221F3B4
    // mov r2, #0x3d
    // lsl r2, r2, #4
    // ldrb r3, [r6, r2]
    // mov r2, #0xc0
    // ldr r1, _0221F460 ; =ov10_0222B068
    // mul r2, r3
    // add r3, r6, r2
    // ldr r2, _0221F464 ; =0x00002D60
    // ldr r4, _0221F468 ; =0x0000FFFF
    // ldr r2, [r3, r2]
    // mov r0, #0
    // ldrh r3, [r1]
    // cmp r3, r2
    // bge _0221F39A
    // add r1, r1, #4
    // ldrh r3, [r1]
    // add r0, r0, #1
    // cmp r3, r4
    // bne _0221F38A
    // ldr r1, _0221F460 ; =ov10_0222B068
    // lsl r0, r0, #2
    // ldrh r2, [r1, r0]
    // ldr r1, _0221F468 ; =0x0000FFFF
    // cmp r2, r1
    // beq _0221F3AC
    // ldr r1, _0221F46C ; =ov10_0222B06A
    // ldrh r4, [r1, r0]
    // b _0221F3B4
    // mov r4, #0x78
    // b _0221F3B4
    // mov r4, #0
    // add r7, r4, #0
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // bne _0221F3FE
    // mov r0, #6
    // lsl r0, r0, #6
    // mov ip, r0
    // ldr r0, [r6, r0]
    // ldr r3, [sp, #0x28]
    // str r0, [sp]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x64]
    // lsl r3, r3, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // ldrb r0, [r6, r0]
    // add r4, r6, r3
    // mov r3, ip
    // str r0, [sp, #0x10]
    // mov r0, #1
    // str r0, [sp, #0x14]
    // add r3, #0x3c
    // ldr r0, [sp, #0x18]
    // ldr r3, [r4, r3]
    // add r1, r6, #0
    // add r2, r5, #0
    // bl CalcMoveDamage
    // str r0, [sp, #0x20]
    // b _0221F40A
    // ldr r1, _0221F470 ; =0x0000213C
    // mov r0, #2
    // ldr r2, [r6, r1]
    // lsl r0, r0, #0xa
    // orr r0, r2
    // str r0, [r6, r1]
    // ldr r0, [sp, #0x64]
    // add r1, r6, #0
    // str r0, [sp]
    // mov r0, #0x3d
    // lsl r0, r0, #4
    // ldrb r0, [r6, r0]
    // add r2, r5, #0
    // add r3, r7, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // add r0, sp, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // bl ov12_02251D28
    // ldr r2, _0221F470 ; =0x0000213C
    // ldr r1, _0221F474 ; =0xFFFFF7FF
    // ldr r3, [r6, r2]
    // and r1, r3
    // str r1, [r6, r2]
    // ldr r2, [sp, #0x48]
    // ldr r1, _0221F478 ; =0x00140808
    // tst r1, r2
    // beq _0221F442
    // add sp, #0x4c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r1, sp, #0x70
    // ldrb r1, [r1]
    // mul r1, r0
    // add r0, r1, #0
    // mov r1, #0x64
    // bl DamageDivide
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // _0221F454: .word 0x000021F0
    // _0221F458: .word 0x00002D74
    // _0221F45C: .word 0x00002D75
    // _0221F460: .word ov10_0222B068
    // _0221F464: .word 0x00002D60
    // _0221F468: .word 0x0000FFFF
    // _0221F46C: .word ov10_0222B06A
    // _0221F470: .word 0x0000213C
    // _0221F474: .word 0xFFFFF7FF
    // _0221F478: .word 0x00140808
    // TODO: decompile
}



void ov10_0221F47C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r2, #0
    // ldr r2, _0221F5E8 ; =0x00000137
    // add r7, r0, #0
    // add r4, r1, #0
    // cmp r3, r2
    // bgt _0221F494
    // blt _0221F48E
    // b _0221F590
    // cmp r3, #0xed
    // beq _0221F536
    // b _0221F5E2
    // add r0, r2, #0
    // add r0, #0x34
    // cmp r3, r0
    // bgt _0221F4A4
    // add r2, #0x34
    // cmp r3, r2
    // beq _0221F4AC
    // b _0221F5E2
    // add r2, #0x8a
    // cmp r3, r2
    // beq _0221F4B8
    // b _0221F5E2
    // add r0, r4, #0
    // add r1, r6, #0
    // bl GetNaturalGiftType
    // add r5, r0, #0
    // b _0221F5E4
    // add r0, r4, #0
    // add r1, r6, #0
    // bl GetBattlerHeldItemEffect
    // sub r0, #0x7e
    // cmp r0, #0xf
    // bhi _0221F532
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221F4D2: ; jump table
    // mov r5, #1
    // b _0221F5E4
    // mov r5, #2
    // b _0221F5E4
    // mov r5, #3
    // b _0221F5E4
    // mov r5, #4
    // b _0221F5E4
    // mov r5, #5
    // b _0221F5E4
    // mov r5, #6
    // b _0221F5E4
    // mov r5, #7
    // b _0221F5E4
    // mov r5, #8
    // b _0221F5E4
    // mov r5, #0xa
    // b _0221F5E4
    // mov r5, #0xb
    // b _0221F5E4
    // mov r5, #0xc
    // b _0221F5E4
    // mov r5, #0xd
    // b _0221F5E4
    // mov r5, #0xe
    // b _0221F5E4
    // mov r5, #0xf
    // b _0221F5E4
    // mov r5, #0x10
    // b _0221F5E4
    // mov r5, #0x11
    // b _0221F5E4
    // mov r5, #0
    // b _0221F5E4
    // ldr r0, _0221F5EC ; =0x00002D54
    // add r1, r4, r0
    // mov r0, #0xc0
    // mul r0, r6
    // ldr r4, [r1, r0]
    // lsl r0, r4, #2
    // lsr r0, r0, #0x1b
    // lsl r0, r0, #0x1f
    // lsr r5, r0, #0x1a
    // lsl r0, r4, #7
    // lsr r0, r0, #0x1b
    // lsl r0, r0, #0x1f
    // lsr r3, r0, #0x1b
    // lsl r0, r4, #0xc
    // lsr r0, r0, #0x1b
    // lsl r0, r0, #0x1f
    // lsr r2, r0, #0x1c
    // lsl r0, r4, #0x11
    // lsr r0, r0, #0x1b
    // lsl r0, r0, #0x1f
    // lsr r1, r0, #0x1d
    // lsl r0, r4, #0x1b
    // lsl r4, r4, #0x16
    // lsr r4, r4, #0x1b
    // lsr r6, r0, #0x1b
    // mov r0, #1
    // lsl r4, r4, #0x1f
    // and r0, r6
    // lsr r4, r4, #0x1e
    // orr r0, r4
    // orr r0, r1
    // orr r0, r2
    // orr r0, r3
    // add r1, r5, #0
    // orr r1, r0
    // mov r0, #0xf
    // mul r0, r1
    // mov r1, #0x3f
    // bl _s32_div_f
    // add r5, r0, #1
    // cmp r5, #9
    // blt _0221F5E4
    // add r5, r5, #1
    // b _0221F5E4
    // mov r2, #0xd
    // str r2, [sp]
    // mov r2, #8
    // mov r3, #0
    // bl CheckAbilityActive
    // cmp r0, #0
    // bne _0221F5E4
    // mov r0, #0x4c
    // str r0, [sp]
    // add r0, r7, #0
    // add r1, r4, #0
    // mov r2, #8
    // mov r3, #0
    // bl CheckAbilityActive
    // cmp r0, #0
    // bne _0221F5E4
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // ldr r1, _0221F5F0 ; =0x000080FF
    // tst r1, r0
    // beq _0221F5E4
    // mov r1, #3
    // tst r1, r0
    // beq _0221F5C8
    // mov r5, #0xb
    // mov r1, #0xc
    // tst r1, r0
    // beq _0221F5D0
    // mov r5, #5
    // mov r1, #0x30
    // tst r1, r0
    // beq _0221F5D8
    // mov r5, #0xa
    // mov r1, #0xc0
    // tst r0, r1
    // beq _0221F5E4
    // mov r5, #0xf
    // b _0221F5E4
    // mov r5, #0
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221F5E8: .word 0x00000137
    // _0221F5EC: .word 0x00002D54
    // _0221F5F0: .word 0x000080FF
    // TODO: decompile
}



void ov10_0221F5F4(void) {
    // push {r4, r5}
    // mov r2, #0xc0
    // mul r2, r1
    // add r5, r0, r2
    // mov r2, #0xb7
    // lsl r2, r2, #6
    // ldr r4, [r5, r2]
    // mov r3, #0x20
    // tst r3, r4
    // beq _0221F620
    // add r2, #8
    // ldr r2, [r5, r2]
    // lsl r2, r2, #0x11
    // lsr r2, r2, #0x1e
    // bne _0221F620
    // add r1, r0, r1
    // ldr r0, _0221F628 ; =0x000021A4
    // mov r2, #6
    // strb r2, [r1, r0]
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // nop
    // _0221F628: .word 0x000021A4
    // TODO: decompile
}



void ov10_0221F62C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // str r0, [sp, #0x14]
    // add r5, r1, #0
    // str r2, [sp, #0x18]
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // beq _0221F646
    // add sp, #0x44
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // add r4, r0, #0
    // eor r4, r1
    // mov r1, #0xc0
    // add r0, r4, #0
    // mul r0, r1
    // add r2, r5, r0
    // ldr r0, _0221F7DC ; =0x00002D67
    // ldrb r0, [r2, r0]
    // cmp r0, #0x19
    // bne _0221F6C4
    // mov r0, #0
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x18]
    // mul r1, r0
    // add r6, r5, r1
    // ldr r0, _0221F7E0 ; =0x00002D4C
    // ldr r2, [sp, #0x18]
    // ldrh r7, [r6, r0]
    // ldr r0, [sp, #0x14]
    // add r1, r5, #0
    // add r3, r7, #0
    // bl ov10_0221F47C
    // add r3, r0, #0
    // cmp r7, #0
    // beq _0221F6A8
    // mov r0, #0
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x18]
    // add r1, r5, #0
    // str r0, [sp]
    // str r4, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x40
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r2, r7, #0
    // bl ov12_02251D28
    // ldr r1, [sp, #0x40]
    // mov r0, #2
    // tst r0, r1
    // beq _0221F6A8
    // add sp, #0x44
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x28]
    // add r6, r6, #2
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #4
    // blt _0221F668
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // bl BattleSystem_GetPartySize
    // cmp r0, #0
    // bgt _0221F6C6
    // b _0221F7D6
    // ldr r0, [sp, #0x18]
    // add r0, r5, r0
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x20]
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221F7C0
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221F7C0
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0221F7E4 ; =0x000001EE
    // cmp r0, r1
    // beq _0221F7C0
    // ldr r1, _0221F7E8 ; =0x0000219C
    // ldr r0, [sp, #0x24]
    // ldrb r1, [r0, r1]
    // ldr r0, [sp, #0x20]
    // cmp r0, r1
    // beq _0221F7C0
    // mov r7, #0
    // add r1, r7, #0
    // add r0, r6, #0
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x1c]
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov12_02258BB4
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0
    // beq _0221F7BA
    // mov r0, #0
    // str r0, [sp, #0x40]
    // add r0, r6, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x30]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetBattlerAbility
    // str r0, [sp, #0x34]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetBattlerHeldItemEffect
    // str r0, [sp, #0x38]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // str r0, [sp, #0x3c]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // ldr r1, [sp, #0x34]
    // ldr r2, [sp, #0x2c]
    // str r1, [sp]
    // ldr r1, [sp, #0x38]
    // ldr r3, [sp, #0x30]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x3c]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x40
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x1c]
    // add r0, r5, #0
    // bl ov12_02252054
    // ldr r1, [sp, #0x40]
    // mov r0, #2
    // tst r0, r1
    // beq _0221F7BA
    // ldr r0, [sp, #0x14]
    // bl BattleSystem_Random
    // mov r1, #3
    // bl _s32_div_f
    // cmp r1, #2
    // bge _0221F7BA
    // ldr r0, [sp, #0x18]
    // ldr r1, _0221F7EC ; =0x000021A4
    // add r2, r5, r0
    // ldr r0, [sp, #0x20]
    // add sp, #0x44
    // strb r0, [r2, r1]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r7, r7, #1
    // cmp r7, #4
    // blt _0221F710
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // bl BattleSystem_GetPartySize
    // ldr r1, [sp, #0x20]
    // cmp r1, r0
    // bge _0221F7D6
    // b _0221F6CC
    // mov r0, #0
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // _0221F7DC: .word 0x00002D67
    // _0221F7E0: .word 0x00002D4C
    // _0221F7E4: .word 0x000001EE
    // _0221F7E8: .word 0x0000219C
    // _0221F7EC: .word 0x000021A4
    // TODO: decompile
}



void ov10_0221F7F0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xbc
    // add r7, r0, #0
    // add r5, r1, #0
    // str r2, [sp, #0x14]
    // bl BattleSystem_GetBattleType
    // mov r4, #2
    // tst r0, r4
    // beq _0221F808
    // mov r6, #0
    // b _0221F80C
    // mov r6, #0
    // add r4, r6, #0
    // ldr r1, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp, #0x5c]
    // str r0, [sp, #0x74]
    // mov r0, #0xc0
    // add r2, r1, #0
    // mul r2, r0
    // add r1, r5, r2
    // str r1, [sp, #0x44]
    // add r1, r6, #0
    // mul r1, r0
    // mul r0, r4
    // add r1, r5, r1
    // add r0, r5, r0
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // ldr r1, [sp, #0x44]
    // ldr r0, _0221FB5C ; =0x00002D4C
    // ldr r2, [sp, #0x14]
    // ldrh r0, [r1, r0]
    // add r1, r5, #0
    // str r0, [sp, #0x40]
    // ldr r3, [sp, #0x40]
    // add r0, r7, #0
    // bl ov10_0221F47C
    // str r0, [sp, #0x64]
    // ldr r0, [sp, #0x40]
    // cmp r0, #0
    // beq _0221F8C6
    // lsl r0, r0, #4
    // add r1, r5, r0
    // ldr r0, _0221FB60 ; =0x000003E1
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // beq _0221F8C6
    // ldr r0, [sp, #0x5c]
    // ldr r1, [sp, #0x3c]
    // add r0, r0, #1
    // str r0, [sp, #0x5c]
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // ldr r0, _0221FB64 ; =0x00002D8C
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0221F882
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x40]
    // str r0, [sp]
    // str r6, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0xb8
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x64]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov12_02251D28
    // ldr r1, [sp, #0xb8]
    // mov r0, #8
    // tst r0, r1
    // bne _0221F890
    // add sp, #0xbc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x38]
    // ldr r0, _0221FB64 ; =0x00002D8C
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0221F8B8
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x40]
    // str r0, [sp]
    // str r4, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0xb8
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x64]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov12_02251D28
    // ldr r1, [sp, #0xb8]
    // mov r0, #8
    // tst r0, r1
    // bne _0221F8C6
    // add sp, #0xbc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x44]
    // add r0, r0, #2
    // str r0, [sp, #0x44]
    // ldr r0, [sp, #0x74]
    // add r0, r0, #1
    // str r0, [sp, #0x74]
    // cmp r0, #4
    // blt _0221F82C
    // ldr r0, [sp, #0x5c]
    // cmp r0, #2
    // bge _0221F8E2
    // add sp, #0xbc
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x14]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x6c]
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #0x10
    // tst r0, r1
    // bne _0221F902
    // add r0, r7, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // beq _0221F908
    // ldr r0, [sp, #0x6c]
    // str r0, [sp, #0x68]
    // b _0221F916
    // ldr r1, [sp, #0x14]
    // add r0, r7, #0
    // bl BattleSystem_GetBattlerIdPartner
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x68]
    // ldr r1, [sp, #0x14]
    // add r0, r7, #0
    // bl BattleSystem_GetPartySize
    // str r0, [sp, #0x60]
    // mov r0, #0
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x60]
    // cmp r0, #0
    // bgt _0221F92C
    // b _0221FB0E
    // ldr r0, [sp, #0x6c]
    // add r0, r5, r0
    // str r0, [sp, #0x4c]
    // ldr r0, [sp, #0x68]
    // add r0, r5, r0
    // str r0, [sp, #0x48]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x30]
    // add r0, r7, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // str r0, [sp, #0x58]
    // bl GetMonData
    // cmp r0, #0
    // beq _0221F99E
    // ldr r0, [sp, #0x58]
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221F99E
    // ldr r0, [sp, #0x58]
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0221FB68 ; =0x000001EE
    // cmp r0, r1
    // beq _0221F99E
    // ldr r0, _0221FB6C ; =0x0000219C
    // ldr r1, [sp, #0x4c]
    // ldrb r2, [r1, r0]
    // ldr r1, [sp, #0x30]
    // cmp r1, r2
    // beq _0221F99E
    // ldr r1, [sp, #0x48]
    // ldrb r2, [r1, r0]
    // ldr r1, [sp, #0x30]
    // cmp r1, r2
    // beq _0221F99E
    // add r2, r0, #0
    // ldr r1, [sp, #0x4c]
    // add r2, #8
    // ldrb r2, [r1, r2]
    // ldr r1, [sp, #0x30]
    // cmp r1, r2
    // beq _0221F99E
    // ldr r1, [sp, #0x48]
    // add r0, #8
    // ldrb r1, [r1, r0]
    // ldr r0, [sp, #0x30]
    // cmp r0, r1
    // bne _0221F9A0
    // b _0221FB00
    // mov r0, #0
    // str r0, [sp, #0x70]
    // ldr r1, [sp, #0x70]
    // ldr r0, [sp, #0x58]
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x28]
    // ldr r2, [sp, #0x58]
    // ldr r3, [sp, #0x28]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov12_02258BB4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // cmp r0, #0
    // beq _0221F9D6
    // lsl r0, r0, #4
    // add r1, r5, r0
    // ldr r0, _0221FB60 ; =0x000003E1
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _0221F9D8
    // b _0221FAF4
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x3c]
    // ldr r0, _0221FB64 ; =0x00002D8C
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0221FA3E
    // ldr r0, [sp, #0x58]
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x78]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl GetBattlerAbility
    // str r0, [sp, #0x7c]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl GetBattlerHeldItemEffect
    // str r0, [sp, #0x80]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // str r0, [sp, #0x84]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // ldr r1, [sp, #0x7c]
    // ldr r2, [sp, #0x20]
    // str r1, [sp]
    // ldr r1, [sp, #0x80]
    // ldr r3, [sp, #0x78]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x84]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0xb8
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x28]
    // add r0, r5, #0
    // bl ov12_02252054
    // ldr r1, [sp, #0xb8]
    // mov r0, #2
    // tst r0, r1
    // beq _0221FA66
    // add r0, r7, #0
    // bl BattleSystem_Random
    // mov r1, #3
    // bl _s32_div_f
    // cmp r1, #2
    // bge _0221FA66
    // ldr r0, [sp, #0x14]
    // ldr r1, _0221FB70 ; =0x000021A4
    // add r2, r5, r0
    // ldr r0, [sp, #0x30]
    // add sp, #0xbc
    // strb r0, [r2, r1]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x38]
    // ldr r0, _0221FB64 ; =0x00002D8C
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0221FACC
    // ldr r0, [sp, #0x58]
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x88]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetBattlerAbility
    // str r0, [sp, #0x8c]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetBattlerHeldItemEffect
    // str r0, [sp, #0x90]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // str r0, [sp, #0x94]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // ldr r1, [sp, #0x8c]
    // ldr r2, [sp, #0x20]
    // str r1, [sp]
    // ldr r1, [sp, #0x90]
    // ldr r3, [sp, #0x88]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x94]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0xb8
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x28]
    // add r0, r5, #0
    // bl ov12_02252054
    // ldr r1, [sp, #0xb8]
    // mov r0, #2
    // tst r0, r1
    // beq _0221FAF4
    // add r0, r7, #0
    // bl BattleSystem_Random
    // mov r1, #3
    // bl _s32_div_f
    // cmp r1, #2
    // bge _0221FAF4
    // ldr r0, [sp, #0x14]
    // ldr r1, _0221FB70 ; =0x000021A4
    // add r2, r5, r0
    // ldr r0, [sp, #0x30]
    // add sp, #0xbc
    // strb r0, [r2, r1]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x70]
    // add r0, r0, #1
    // str r0, [sp, #0x70]
    // cmp r0, #4
    // bge _0221FB00
    // b _0221F9A4
    // ldr r0, [sp, #0x30]
    // add r1, r0, #1
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x30]
    // cmp r1, r0
    // bge _0221FB0E
    // b _0221F938
    // mov r0, #0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x60]
    // cmp r0, #0
    // bgt _0221FB1A
    // b _0221FD1C
    // ldr r0, [sp, #0x6c]
    // add r0, r5, r0
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x68]
    // add r0, r5, r0
    // str r0, [sp, #0x50]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x34]
    // add r0, r7, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // str r0, [sp, #0x1c]
    // bl GetMonData
    // cmp r0, #0
    // beq _0221FBA8
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221FBA8
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0221FB68 ; =0x000001EE
    // b _0221FB74
    // nop
    // _0221FB5C: .word 0x00002D4C
    // _0221FB60: .word 0x000003E1
    // _0221FB64: .word 0x00002D8C
    // _0221FB68: .word 0x000001EE
    // _0221FB6C: .word 0x0000219C
    // _0221FB70: .word 0x000021A4
    // cmp r0, r1
    // beq _0221FBA8
    // ldr r0, _0221FD24 ; =0x0000219C
    // ldr r1, [sp, #0x54]
    // ldrb r2, [r1, r0]
    // ldr r1, [sp, #0x34]
    // cmp r1, r2
    // beq _0221FBA8
    // ldr r1, [sp, #0x50]
    // ldrb r2, [r1, r0]
    // ldr r1, [sp, #0x34]
    // cmp r1, r2
    // beq _0221FBA8
    // add r2, r0, #0
    // ldr r1, [sp, #0x54]
    // add r2, #8
    // ldrb r2, [r1, r2]
    // ldr r1, [sp, #0x34]
    // cmp r1, r2
    // beq _0221FBA8
    // ldr r1, [sp, #0x50]
    // add r0, #8
    // ldrb r1, [r1, r0]
    // ldr r0, [sp, #0x34]
    // cmp r0, r1
    // bne _0221FBAA
    // b _0221FD0E
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x2c]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x2c]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov12_02258BB4
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
    // cmp r0, #0
    // beq _0221FBE0
    // lsl r0, r0, #4
    // add r1, r5, r0
    // ldr r0, _0221FD28 ; =0x000003E1
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _0221FBE2
    // b _0221FD02
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x3c]
    // ldr r0, _0221FD2C ; =0x00002D8C
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0221FC48
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x98]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl GetBattlerAbility
    // str r0, [sp, #0x9c]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl GetBattlerHeldItemEffect
    // str r0, [sp, #0xa0]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // str r0, [sp, #0xa4]
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // ldr r1, [sp, #0x9c]
    // ldr r2, [sp, #0x24]
    // str r1, [sp]
    // ldr r1, [sp, #0xa0]
    // ldr r3, [sp, #0x98]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0xa4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0xb8
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x2c]
    // add r0, r5, #0
    // bl ov12_02252054
    // ldr r0, [sp, #0xb8]
    // cmp r0, #0
    // bne _0221FC72
    // add r0, r7, #0
    // bl BattleSystem_Random
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x1f
    // sub r2, r2, r1
    // mov r0, #0x1f
    // ror r2, r0
    // add r0, r1, r2
    // bne _0221FC72
    // ldr r0, [sp, #0x14]
    // ldr r1, _0221FD30 ; =0x000021A4
    // add r2, r5, r0
    // ldr r0, [sp, #0x34]
    // add sp, #0xbc
    // strb r0, [r2, r1]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #0xb8]
    // ldr r1, [sp, #0x38]
    // ldr r0, _0221FD2C ; =0x00002D8C
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0221FCD8
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0xa8]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetBattlerAbility
    // str r0, [sp, #0xac]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetBattlerHeldItemEffect
    // str r0, [sp, #0xb0]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // str r0, [sp, #0xb4]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // ldr r1, [sp, #0xac]
    // ldr r2, [sp, #0x24]
    // str r1, [sp]
    // ldr r1, [sp, #0xb0]
    // ldr r3, [sp, #0xa8]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0xb4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0xb8
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x2c]
    // add r0, r5, #0
    // bl ov12_02252054
    // ldr r0, [sp, #0xb8]
    // cmp r0, #0
    // bne _0221FD02
    // add r0, r7, #0
    // bl BattleSystem_Random
    // lsr r1, r0, #0x1f
    // lsl r2, r0, #0x1f
    // sub r2, r2, r1
    // mov r0, #0x1f
    // ror r2, r0
    // add r0, r1, r2
    // bne _0221FD02
    // ldr r0, [sp, #0x14]
    // ldr r1, _0221FD30 ; =0x000021A4
    // add r2, r5, r0
    // ldr r0, [sp, #0x34]
    // add sp, #0xbc
    // strb r0, [r2, r1]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #4
    // bge _0221FD0E
    // b _0221FBAE
    // ldr r0, [sp, #0x34]
    // add r1, r0, #1
    // ldr r0, [sp, #0x60]
    // str r1, [sp, #0x34]
    // cmp r1, r0
    // bge _0221FD1C
    // b _0221FB26
    // mov r0, #0
    // add sp, #0xbc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221FD24: .word 0x0000219C
    // _0221FD28: .word 0x000003E1
    // _0221FD2C: .word 0x00002D8C
    // _0221FD30: .word 0x000021A4
    // TODO: decompile
}



void ov10_0221FD34(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r6, r2, #0
    // add r4, r1, #0
    // add r1, r6, #0
    // add r5, r0, #0
    // str r3, [sp, #0x10]
    // bl ov12_0223AB0C
    // mov r1, #1
    // eor r0, r1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // add r0, r5, #0
    // bl BattleSystem_GetBattlerFromBattlerType
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x24]
    // bl MaskOfFlagNo
    // ldr r1, _0221FE84 ; =0x00003108
    // ldrb r1, [r4, r1]
    // tst r0, r1
    // bne _0221FDDC
    // mov r0, #0
    // str r0, [sp, #0x28]
    // mov r0, #0xc0
    // mul r0, r6
    // add r7, r4, r0
    // ldr r0, _0221FE88 ; =0x00002D4C
    // add r1, r4, #0
    // ldrh r0, [r7, r0]
    // add r2, r6, #0
    // str r0, [sp, #0x20]
    // ldr r3, [sp, #0x20]
    // add r0, r5, #0
    // bl ov10_0221F47C
    // add r3, r0, #0
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // beq _0221FDD0
    // mov r0, #0
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x24]
    // str r6, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x2c
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x20]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov12_02251D28
    // ldr r1, [sp, #0x2c]
    // mov r0, #2
    // tst r0, r1
    // beq _0221FDD0
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // beq _0221FDBA
    // add sp, #0x30
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl BattleSystem_Random
    // mov r1, #0xa
    // bl _s32_div_f
    // cmp r1, #0
    // beq _0221FDD0
    // add sp, #0x30
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x28]
    // add r7, r7, #2
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #4
    // blt _0221FD70
    // add r0, r5, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #2
    // tst r0, r1
    // bne _0221FDEE
    // add sp, #0x30
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #0x24]
    // add r0, r5, #0
    // bl BattleSystem_GetBattlerIdPartner
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x1c]
    // bl MaskOfFlagNo
    // ldr r1, _0221FE84 ; =0x00003108
    // ldrb r1, [r4, r1]
    // tst r0, r1
    // bne _0221FE7E
    // mov r0, #0
    // str r0, [sp, #0x18]
    // mov r0, #0xc0
    // mul r0, r6
    // add r7, r4, r0
    // ldr r0, _0221FE88 ; =0x00002D4C
    // add r1, r4, #0
    // ldrh r0, [r7, r0]
    // add r2, r6, #0
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x14]
    // add r0, r5, #0
    // bl ov10_0221F47C
    // add r3, r0, #0
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // beq _0221FE72
    // mov r0, #0
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x1c]
    // str r6, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x2c
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x14]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov12_02251D28
    // ldr r1, [sp, #0x2c]
    // mov r0, #2
    // tst r0, r1
    // beq _0221FE72
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // beq _0221FE5C
    // add sp, #0x30
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl BattleSystem_Random
    // mov r1, #0xa
    // bl _s32_div_f
    // cmp r1, #0
    // beq _0221FE72
    // add sp, #0x30
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x18]
    // add r7, r7, #2
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #4
    // blt _0221FE12
    // mov r0, #0
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221FE84: .word 0x00003108
    // _0221FE88: .word 0x00002D4C
    // TODO: decompile
}



void ov10_0221FE8C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r3, #1
    // add r6, r0, #0
    // str r1, [sp]
    // str r2, [sp, #4]
    // bl ov10_0221FD34
    // cmp r0, #0
    // beq _0221FEB6
    // add r0, r6, #0
    // bl BattleSystem_Random
    // mov r1, #3
    // bl _s32_div_f
    // cmp r1, #0
    // beq _0221FEB6
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // lsl r1, r0, #1
    // ldr r0, [sp]
    // add r1, r0, r1
    // ldr r0, _0221FFFC ; =0x00003064
    // ldrh r0, [r1, r0]
    // cmp r0, #0
    // bne _0221FECC
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // lsl r1, r0, #4
    // ldr r0, [sp]
    // add r2, r0, r1
    // ldr r0, _02220000 ; =0x000003E1
    // ldrb r1, [r2, r0]
    // cmp r1, #0
    // bne _0221FEE0
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r0, #1
    // ldrb r0, [r2, r0]
    // cmp r0, #0xa
    // bne _0221FEEE
    // mov r0, #0x12
    // str r0, [sp, #0x10]
    // b _0221FF08
    // cmp r0, #0xb
    // bne _0221FEF8
    // mov r0, #0xb
    // str r0, [sp, #0x10]
    // b _0221FF08
    // cmp r0, #0xd
    // bne _0221FF02
    // mov r0, #0xa
    // str r0, [sp, #0x10]
    // b _0221FF08
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // bl GetBattlerAbility
    // ldr r1, [sp, #0x10]
    // cmp r1, r0
    // bne _0221FF1C
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #0x10
    // tst r0, r1
    // bne _0221FF3A
    // add r0, r6, #0
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // beq _0221FF3E
    // add r7, r4, #0
    // b _0221FF4A
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // bl BattleSystem_GetBattlerIdPartner
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // bl BattleSystem_GetPartySize
    // mov r5, #0
    // str r0, [sp, #0xc]
    // cmp r0, #0
    // ble _0221FFF4
    // ldr r0, [sp]
    // add r0, r0, r4
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r7, r0, r7
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // add r2, r5, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // add r4, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221FFEC
    // add r0, r4, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0221FFEC
    // add r0, r4, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02220004 ; =0x000001EE
    // cmp r0, r1
    // beq _0221FFEC
    // ldr r1, [sp, #8]
    // ldr r0, _02220008 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // cmp r5, r0
    // beq _0221FFEC
    // ldr r0, _02220008 ; =0x0000219C
    // ldrb r0, [r7, r0]
    // cmp r5, r0
    // beq _0221FFEC
    // ldr r0, _0222000C ; =0x000021A4
    // ldrb r0, [r1, r0]
    // cmp r5, r0
    // beq _0221FFEC
    // ldr r0, _0222000C ; =0x000021A4
    // ldrb r0, [r7, r0]
    // cmp r5, r0
    // beq _0221FFEC
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // ldr r0, [sp, #0x10]
    // cmp r0, r1
    // bne _0221FFEC
    // add r0, r6, #0
    // bl BattleSystem_Random
    // mov r1, #1
    // tst r0, r1
    // beq _0221FFEC
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add sp, #0x14
    // add r1, r1, r0
    // ldr r0, _0222000C ; =0x000021A4
    // strb r5, [r1, r0]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0xc]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _0221FF64
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221FFFC: .word 0x00003064
    // _02220000: .word 0x000003E1
    // _02220004: .word 0x000001EE
    // _02220008: .word 0x0000219C
    // _0222000C: .word 0x000021A4
    // TODO: decompile
}



void ov10_02220010(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x60
    // add r5, r1, #0
    // add r1, r2, #0
    // lsl r6, r1, #1
    // str r3, [sp, #0x1c]
    // ldr r1, _02220258 ; =0x00003064
    // add r3, r5, r6
    // str r2, [sp, #0x18]
    // ldrh r2, [r3, r1]
    // str r0, [sp, #0x14]
    // cmp r2, #0
    // beq _02220032
    // add r1, #8
    // ldrh r1, [r3, r1]
    // cmp r1, #0xff
    // bne _02220038
    // add sp, #0x60
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r1, r2, #4
    // add r2, r5, r1
    // ldr r1, _0222025C ; =0x000003E1
    // ldrb r1, [r2, r1]
    // cmp r1, #0
    // bne _0222004A
    // add sp, #0x60
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp, #0x18]
    // lsl r1, r1, #0x18
    // lsr r4, r1, #0x18
    // bl BattleSystem_GetBattleType
    // mov r1, #0x10
    // tst r0, r1
    // bne _02220066
    // ldr r0, [sp, #0x14]
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // beq _0222006A
    // add r7, r4, #0
    // b _02220076
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // bl BattleSystem_GetBattlerIdPartner
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // bl BattleSystem_GetPartySize
    // str r0, [sp, #0x30]
    // mov r0, #0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x30]
    // cmp r0, #0
    // bgt _0222008C
    // b _02220250
    // add r0, r5, r4
    // str r0, [sp, #0x2c]
    // add r0, r5, r7
    // str r0, [sp, #0x28]
    // add r0, sp, #0x68
    // ldrb r0, [r0, #0x10]
    // add r4, r5, r6
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x34]
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02220102
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02220102
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02220260 ; =0x000001EE
    // cmp r0, r1
    // beq _02220102
    // ldr r0, _02220264 ; =0x0000219C
    // ldr r1, [sp, #0x2c]
    // ldrb r2, [r1, r0]
    // ldr r1, [sp, #0x34]
    // cmp r1, r2
    // beq _02220102
    // ldr r1, [sp, #0x28]
    // ldrb r2, [r1, r0]
    // ldr r1, [sp, #0x34]
    // cmp r1, r2
    // beq _02220102
    // add r2, r0, #0
    // ldr r1, [sp, #0x2c]
    // add r2, #8
    // ldrb r2, [r1, r2]
    // ldr r1, [sp, #0x34]
    // cmp r1, r2
    // beq _02220102
    // ldr r1, [sp, #0x28]
    // add r0, #8
    // ldrb r1, [r1, r0]
    // ldr r0, [sp, #0x34]
    // cmp r0, r1
    // bne _02220104
    // b _02220242
    // mov r0, #0
    // str r0, [sp, #0x5c]
    // ldr r3, _02220268 ; =0x0000306C
    // ldr r0, [sp, #0x14]
    // ldrh r2, [r4, r3]
    // sub r3, #8
    // ldrh r3, [r4, r3]
    // add r1, r5, #0
    // bl ov10_0221F47C
    // ldr r1, _02220268 ; =0x0000306C
    // str r0, [sp, #0x38]
    // ldrh r1, [r4, r1]
    // add r0, r5, #0
    // bl GetBattlerAbility
    // str r0, [sp, #0x3c]
    // add r0, r6, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x40]
    // add r0, r6, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r1, r0, #0
    // lsl r1, r1, #0x10
    // add r0, r5, #0
    // lsr r1, r1, #0x10
    // mov r2, #1
    // bl GetItemVar
    // str r0, [sp, #0x44]
    // add r0, r6, #0
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // add r7, r0, #0
    // add r0, r6, #0
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0x40]
    // ldr r2, [sp, #0x38]
    // str r1, [sp]
    // ldr r1, [sp, #0x44]
    // ldr r3, [sp, #0x3c]
    // str r1, [sp, #4]
    // str r7, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x10]
    // ldr r1, _02220258 ; =0x00003064
    // add r0, r5, #0
    // ldrh r1, [r4, r1]
    // bl ov12_02252054
    // ldr r1, [sp, #0x5c]
    // ldr r0, [sp, #0x1c]
    // tst r0, r1
    // beq _02220242
    // mov r7, #0
    // add r1, r7, #0
    // add r0, r6, #0
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x20]
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov12_02258BB4
    // str r0, [sp, #0x48]
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // beq _0222023C
    // mov r0, #0
    // str r0, [sp, #0x5c]
    // add r0, r6, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02220268 ; =0x0000306C
    // str r0, [sp, #0x4c]
    // ldrh r1, [r4, r1]
    // add r0, r5, #0
    // bl GetBattlerAbility
    // ldr r1, _02220268 ; =0x0000306C
    // str r0, [sp, #0x50]
    // ldrh r1, [r4, r1]
    // add r0, r5, #0
    // bl GetBattlerHeldItemEffect
    // ldr r1, _02220268 ; =0x0000306C
    // str r0, [sp, #0x54]
    // ldrh r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // ldr r1, _02220268 ; =0x0000306C
    // str r0, [sp, #0x58]
    // ldrh r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // ldr r1, [sp, #0x50]
    // ldr r2, [sp, #0x48]
    // str r1, [sp]
    // ldr r1, [sp, #0x54]
    // ldr r3, [sp, #0x4c]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x58]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x20]
    // add r0, r5, #0
    // bl ov12_02252054
    // ldr r1, [sp, #0x5c]
    // mov r0, #2
    // tst r0, r1
    // beq _0222023C
    // ldr r0, [sp, #0x14]
    // bl BattleSystem_Random
    // ldr r1, [sp, #0x24]
    // bl _s32_div_f
    // cmp r1, #0
    // bne _0222023C
    // ldr r0, [sp, #0x18]
    // ldr r1, _0222026C ; =0x000021A4
    // add r2, r5, r0
    // ldr r0, [sp, #0x34]
    // add sp, #0x60
    // strb r0, [r2, r1]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r7, r7, #1
    // cmp r7, #4
    // blt _0222018A
    // ldr r0, [sp, #0x34]
    // add r1, r0, #1
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0x34]
    // cmp r1, r0
    // bge _02220250
    // b _0222009C
    // mov r0, #0
    // add sp, #0x60
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02220258: .word 0x00003064
    // _0222025C: .word 0x000003E1
    // _02220260: .word 0x000001EE
    // _02220264: .word 0x0000219C
    // _02220268: .word 0x0000306C
    // _0222026C: .word 0x000021A4
    // TODO: decompile
}



void ov10_02220270(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // add r4, r2, #0
    // mov r0, #0xc0
    // add r5, r1, #0
    // mul r0, r4
    // add r1, r5, r0
    // ldr r0, _02220358 ; =0x00002DAC
    // ldr r1, [r1, r0]
    // mov r0, #7
    // tst r0, r1
    // beq _022202AA
    // add r0, r5, #0
    // add r1, r4, #0
    // bl GetBattlerAbility
    // cmp r0, #0x1e
    // bne _022202AA
    // mov r0, #0xc0
    // mul r0, r4
    // ldr r1, _0222035C ; =0x00002D8C
    // add r2, r5, r0
    // ldr r0, [r2, r1]
    // add r1, r1, #4
    // ldr r1, [r2, r1]
    // lsr r1, r1, #1
    // cmp r0, r1
    // bhs _022202B0
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02220360 ; =0x00003064
    // add r7, r5, r0
    // lsl r0, r4, #1
    // str r0, [sp, #4]
    // ldrh r0, [r7, r0]
    // cmp r0, #0
    // bne _022202D8
    // add r0, r6, #0
    // bl BattleSystem_Random
    // mov r1, #1
    // tst r0, r1
    // beq _022202D8
    // ldr r0, _02220364 ; =0x000021A4
    // mov r3, #6
    // add r2, r5, r4
    // strb r3, [r2, r0]
    // add sp, #8
    // add r0, r1, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // ldrh r0, [r7, r0]
    // lsl r0, r0, #4
    // add r1, r5, r0
    // ldr r0, _02220368 ; =0x000003E1
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _02220302
    // add r0, r6, #0
    // bl BattleSystem_Random
    // mov r1, #1
    // tst r0, r1
    // beq _02220302
    // ldr r0, _02220364 ; =0x000021A4
    // mov r3, #6
    // add r2, r5, r4
    // strb r3, [r2, r0]
    // add sp, #8
    // add r0, r1, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // str r0, [sp]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #8
    // bl ov10_02220010
    // cmp r0, #0
    // beq _0222031C
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // str r0, [sp]
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // mov r3, #4
    // bl ov10_02220010
    // cmp r0, #0
    // beq _02220336
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl BattleSystem_Random
    // mov r1, #1
    // tst r0, r1
    // beq _02220350
    // ldr r0, _02220364 ; =0x000021A4
    // mov r3, #6
    // add r2, r5, r4
    // strb r3, [r2, r0]
    // add sp, #8
    // add r0, r1, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02220358: .word 0x00002DAC
    // _0222035C: .word 0x00002D8C
    // _02220360: .word 0x00003064
    // _02220364: .word 0x000021A4
    // _02220368: .word 0x000003E1
    // TODO: decompile
}



void ov10_0222036C(void) {
    // push {r3, r4}
    // mov r4, #0xc0
    // mul r4, r2
    // mov r3, #0
    // ldr r2, _022203A0 ; =0x00002D58
    // add r0, r3, #0
    // add r4, r1, r4
    // ldrsb r1, [r4, r2]
    // cmp r1, #6
    // ble _02220388
    // sub r1, r1, #6
    // add r1, r3, r1
    // lsl r1, r1, #0x18
    // lsr r3, r1, #0x18
    // add r0, r0, #1
    // add r4, r4, #1
    // cmp r0, #8
    // blt _0222037A
    // cmp r3, #4
    // blo _0222039A
    // mov r0, #1
    // pop {r3, r4}
    // bx lr
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // _022203A0: .word 0x00002D58
    // TODO: decompile
}



void ov10_022203A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r6, r2, #0
    // mov r2, #0xc0
    // add r3, r6, #0
    // mul r3, r2
    // add r2, r1, #0
    // add r5, r2, r3
    // ldr r2, _022205A8 ; =0x00002DB0
    // ldr r3, _022205AC ; =0x0400E000
    // ldr r4, [r5, r2]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // tst r4, r3
    // bne _02220424
    // add r2, #0x10
    // ldr r4, [r5, r2]
    // lsr r2, r3, #0x10
    // tst r2, r4
    // bne _02220424
    // mov r2, #0x17
    // str r2, [sp]
    // mov r2, #2
    // add r3, r6, #0
    // bl CheckAbilityActive
    // cmp r0, #0
    // bne _02220424
    // mov r0, #0x47
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // mov r2, #2
    // add r3, r6, #0
    // bl CheckAbilityActive
    // cmp r0, #0
    // bne _02220424
    // mov r0, #0x2a
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // mov r2, #6
    // add r3, r6, #0
    // bl CheckAbilityActive
    // cmp r0, #0
    // beq _0222042A
    // ldr r0, [sp, #8]
    // add r1, r6, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl GetBattlerVar
    // cmp r0, #8
    // beq _02220424
    // ldr r0, [sp, #8]
    // add r1, r6, #0
    // mov r2, #0x1c
    // mov r3, #0
    // bl GetBattlerVar
    // cmp r0, #8
    // bne _0222042A
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #0x14]
    // lsl r0, r6, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, [sp, #4]
    // bl BattleSystem_GetBattleType
    // mov r1, #0x10
    // tst r0, r1
    // bne _0222044A
    // ldr r0, [sp, #4]
    // bl BattleSystem_GetBattleType
    // mov r1, #8
    // tst r0, r1
    // beq _0222044E
    // add r7, r4, #0
    // b _0222045A
    // ldr r0, [sp, #4]
    // add r1, r6, #0
    // bl BattleSystem_GetBattlerIdPartner
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [sp, #4]
    // add r1, r6, #0
    // bl BattleSystem_GetPartySize
    // mov r5, #0
    // str r0, [sp, #0x10]
    // cmp r0, #0
    // ble _022204DA
    // ldr r0, [sp, #8]
    // add r0, r0, r4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r7, r0, r7
    // ldr r0, [sp, #4]
    // add r1, r6, #0
    // add r2, r5, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // add r4, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _022204D2
    // add r0, r4, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _022204D2
    // add r0, r4, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _022205B0 ; =0x000001EE
    // cmp r0, r1
    // beq _022204D2
    // ldr r1, [sp, #0xc]
    // ldr r0, _022205B4 ; =0x0000219C
    // ldrb r0, [r1, r0]
    // cmp r5, r0
    // beq _022204D2
    // ldr r0, _022205B4 ; =0x0000219C
    // ldrb r0, [r7, r0]
    // cmp r5, r0
    // beq _022204D2
    // ldr r0, _022205B8 ; =0x000021A4
    // ldrb r0, [r1, r0]
    // cmp r5, r0
    // beq _022204D2
    // ldr r0, _022205B8 ; =0x000021A4
    // ldrb r0, [r7, r0]
    // cmp r5, r0
    // beq _022204D2
    // ldr r0, [sp, #0x14]
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _02220474
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // beq _022205A0
    // ldr r0, [sp, #8]
    // add r1, r6, #0
    // bl ov10_0221F5F4
    // cmp r0, #0
    // beq _022204F2
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r6, #0
    // bl ov10_0221F62C
    // cmp r0, #0
    // beq _02220506
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r6, #0
    // bl ov10_0221F7F0
    // cmp r0, #0
    // beq _0222051A
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r6, #0
    // bl ov10_0221FE8C
    // cmp r0, #0
    // beq _0222052E
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r6, #0
    // bl ov10_02220270
    // cmp r0, #0
    // beq _02220542
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r6, #0
    // mov r3, #0
    // bl ov10_0221FD34
    // cmp r0, #0
    // beq _02220558
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r6, #0
    // bl ov10_0222036C
    // cmp r0, #0
    // beq _0222056C
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r6, #0
    // mov r3, #8
    // bl ov10_02220010
    // cmp r0, #0
    // beq _02220586
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #3
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // add r2, r6, #0
    // mov r3, #4
    // bl ov10_02220010
    // cmp r0, #0
    // beq _022205A0
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022205A8: .word 0x00002DB0
    // _022205AC: .word 0x0400E000
    // _022205B0: .word 0x000001EE
    // _022205B4: .word 0x0000219C
    // _022205B8: .word 0x000021A4
    // TODO: decompile
}



void ov10_022205BC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r1, #0
    // add r1, r0, #0
    // str r0, [sp]
    // ldr r5, [r1, #0x30]
    // bl BattleSystem_GetBattleType
    // add r6, r0, #0
    // mov r0, #1
    // tst r0, r6
    // bne _022205E0
    // ldr r0, [sp]
    // add r1, r7, #0
    // bl BattleSystem_GetFieldSide
    // cmp r0, #0
    // bne _022206A0
    // ldr r0, [sp]
    // add r1, r5, #0
    // add r2, r7, #0
    // bl ov10_022203A4
    // cmp r0, #0
    // beq _0222068E
    // ldr r0, _022206A8 ; =0x000021A4
    // add r0, r5, r0
    // str r0, [sp, #0x10]
    // ldrb r0, [r0, r7]
    // cmp r0, #6
    // bne _02220688
    // ldr r0, [sp]
    // add r1, r7, #0
    // bl ov12_02258800
    // add r4, r0, #0
    // cmp r4, #6
    // bne _02220684
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // mov r0, #0x10
    // tst r0, r6
    // bne _0222061A
    // mov r0, #8
    // tst r0, r6
    // beq _02220620
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // b _0222062E
    // ldr r0, [sp]
    // add r1, r7, #0
    // bl BattleSystem_GetBattlerIdPartner
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r1, r7, #0
    // bl BattleSystem_GetPartySize
    // mov r4, #0
    // str r0, [sp, #4]
    // cmp r0, #0
    // ble _02220684
    // ldr r0, [sp, #0xc]
    // add r6, r5, r0
    // ldr r0, [sp, #8]
    // add r5, r5, r0
    // ldr r0, [sp]
    // add r1, r7, #0
    // add r2, r4, #0
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0222067C
    // ldr r0, _022206AC ; =0x0000219C
    // ldrb r0, [r6, r0]
    // cmp r4, r0
    // beq _0222067C
    // ldr r0, _022206AC ; =0x0000219C
    // ldrb r0, [r5, r0]
    // cmp r4, r0
    // beq _0222067C
    // ldr r0, _022206A8 ; =0x000021A4
    // ldrb r0, [r6, r0]
    // cmp r4, r0
    // beq _0222067C
    // ldr r0, _022206A8 ; =0x000021A4
    // ldrb r0, [r5, r0]
    // cmp r4, r0
    // bne _02220684
    // ldr r0, [sp, #4]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _02220646
    // ldr r0, [sp, #0x10]
    // strb r4, [r0, r7]
    // add sp, #0x14
    // mov r0, #3
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // add r1, r7, #0
    // bl ov10_022206B0
    // cmp r0, #0
    // beq _022206A0
    // add sp, #0x14
    // mov r0, #2
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #1
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022206A8: .word 0x000021A4
    // _022206AC: .word 0x0000219C
    // TODO: decompile
}



void ov10_022206B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r2, #0
    // str r2, [sp, #0x14]
    // add r2, r1, #0
    // asr r2, r2, #1
    // ldr r4, [r5, #0x30]
    // str r2, [sp, #0xc]
    // add r6, r4, r2
    // ldr r2, [sp, #0x14]
    // ldr r3, _022209C4 ; =0x000003D3
    // str r2, [sp, #0x1c]
    // strb r2, [r6, r3]
    // ldr r3, [r5, #0x2c]
    // mov r2, #0x4b
    // and r2, r3
    // str r1, [sp]
    // cmp r2, #0x4b
    // bne _022206E6
    // bl ov12_0223AB0C
    // cmp r0, #4
    // bne _022206E6
    // add sp, #0x20
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // mov r1, #0xc0
    // mul r1, r0
    // mov r0, #0xb7
    // str r1, [sp, #8]
    // add r1, r4, r1
    // lsl r0, r0, #6
    // ldr r1, [r1, r0]
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // tst r0, r1
    // beq _02220704
    // add sp, #0x20
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl BattleSystem_GetParty
    // add r7, r0, #0
    // mov r5, #0
    // bl Party_GetCount
    // cmp r0, #0
    // ble _02220762
    // add r0, r7, #0
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xa3
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02220756
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _02220756
    // add r0, r6, #0
    // mov r1, #0xae
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _022209C8 ; =0x000001EE
    // cmp r0, r1
    // beq _02220756
    // ldr r0, [sp, #0x14]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // add r5, r5, #1
    // bl Party_GetCount
    // cmp r5, r0
    // blt _02220718
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // lsl r0, r0, #3
    // str r0, [sp, #0x10]
    // add r0, r4, r0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // add r5, r4, r0
    // ldr r0, [sp, #8]
    // add r7, r4, r0
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // beq _0222078C
    // ldr r0, _022209CC ; =0x000003CD
    // ldrb r1, [r5, r0]
    // ldr r0, [sp, #4]
    // sub r1, r1, r0
    // ldr r0, [sp, #0x14]
    // cmp r0, r1
    // bgt _02220798
    // mov r0, #0xe7
    // ldr r1, [sp, #0x18]
    // lsl r0, r0, #2
    // ldrh r6, [r1, r0]
    // cmp r6, #0
    // bne _0222079A
    // b _02220A88
    // cmp r6, #0x17
    // bne _022207BC
    // ldr r1, _022209D0 ; =0x00002D90
    // ldr r0, _022209D4 ; =0x00002D8C
    // ldr r1, [r7, r1]
    // ldr r0, [r7, r0]
    // lsr r1, r1, #2
    // cmp r0, r1
    // bhs _02220816
    // cmp r0, #0
    // beq _02220816
    // ldr r0, _022209D8 ; =0x000003D1
    // mov r1, #0
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x26
    // bl GetItemVar
    // cmp r0, #0
    // beq _022207FE
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x36
    // bl GetItemVar
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // beq _02220816
    // ldr r0, _022209D4 ; =0x00002D8C
    // ldr r1, [r7, r0]
    // cmp r1, #0
    // beq _02220816
    // add r0, r0, #4
    // ldr r3, [r7, r0]
    // lsr r0, r3, #2
    // cmp r1, r0
    // blo _022207F2
    // sub r0, r3, r1
    // cmp r0, r2
    // bls _02220816
    // ldr r0, _022209D8 ; =0x000003D1
    // mov r1, #1
    // strb r1, [r5, r0]
    // add r0, r1, #0
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0xf
    // bl GetItemVar
    // cmp r0, #0
    // beq _02220834
    // ldr r0, _022209DC ; =0x00002DAC
    // ldr r1, [r7, r0]
    // mov r0, #7
    // tst r0, r1
    // bne _02220818
    // b _02220A62
    // mov r0, #5
    // bl MaskOfFlagNo
    // ldr r1, _022209C4 ; =0x000003D3
    // ldrb r1, [r5, r1]
    // orr r1, r0
    // ldr r0, _022209C4 ; =0x000003D3
    // strb r1, [r5, r0]
    // mov r1, #2
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x10
    // bl GetItemVar
    // cmp r0, #0
    // beq _0222086E
    // ldr r0, _022209DC ; =0x00002DAC
    // mov r1, #8
    // ldr r0, [r7, r0]
    // tst r1, r0
    // bne _02220852
    // mov r1, #0x80
    // tst r0, r1
    // beq _02220922
    // mov r0, #4
    // bl MaskOfFlagNo
    // ldr r1, _022209C4 ; =0x000003D3
    // ldrb r1, [r5, r1]
    // orr r1, r0
    // ldr r0, _022209C4 ; =0x000003D3
    // strb r1, [r5, r0]
    // mov r1, #2
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x11
    // bl GetItemVar
    // cmp r0, #0
    // beq _022208A2
    // ldr r0, _022209DC ; =0x00002DAC
    // ldr r1, [r7, r0]
    // mov r0, #0x10
    // tst r0, r1
    // beq _02220922
    // mov r0, #3
    // bl MaskOfFlagNo
    // ldr r1, _022209C4 ; =0x000003D3
    // ldrb r1, [r5, r1]
    // orr r1, r0
    // ldr r0, _022209C4 ; =0x000003D3
    // strb r1, [r5, r0]
    // mov r1, #2
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x12
    // bl GetItemVar
    // cmp r0, #0
    // beq _022208D6
    // ldr r0, _022209DC ; =0x00002DAC
    // ldr r1, [r7, r0]
    // mov r0, #0x20
    // tst r0, r1
    // beq _02220922
    // mov r0, #2
    // bl MaskOfFlagNo
    // ldr r1, _022209C4 ; =0x000003D3
    // ldrb r1, [r5, r1]
    // orr r1, r0
    // ldr r0, _022209C4 ; =0x000003D3
    // strb r1, [r5, r0]
    // mov r1, #2
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x13
    // bl GetItemVar
    // cmp r0, #0
    // beq _0222090A
    // ldr r0, _022209DC ; =0x00002DAC
    // ldr r1, [r7, r0]
    // mov r0, #0x40
    // tst r0, r1
    // beq _02220922
    // mov r0, #1
    // bl MaskOfFlagNo
    // ldr r1, _022209C4 ; =0x000003D3
    // ldrb r1, [r5, r1]
    // orr r1, r0
    // ldr r0, _022209C4 ; =0x000003D3
    // strb r1, [r5, r0]
    // mov r1, #2
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x14
    // bl GetItemVar
    // cmp r0, #0
    // beq _02220940
    // ldr r0, _022209E0 ; =0x00002DB0
    // ldr r1, [r7, r0]
    // mov r0, #7
    // tst r0, r1
    // bne _02220924
    // b _02220A62
    // mov r0, #0
    // bl MaskOfFlagNo
    // ldr r1, _022209C4 ; =0x000003D3
    // ldrb r1, [r5, r1]
    // orr r1, r0
    // ldr r0, _022209C4 ; =0x000003D3
    // strb r1, [r5, r0]
    // mov r1, #2
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // ldr r0, _022209E4 ; =0x00002DD4
    // ldr r1, [r7, r0]
    // mov r0, #0x15
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // sub r0, r1, r0
    // bpl _02220950
    // b _02220A5C
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x1b
    // bl GetItemVar
    // cmp r0, #0
    // beq _02220970
    // ldr r0, _022209C4 ; =0x000003D3
    // mov r1, #1
    // strb r1, [r5, r0]
    // mov r1, #3
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x1c
    // bl GetItemVar
    // cmp r0, #0
    // beq _02220990
    // ldr r0, _022209C4 ; =0x000003D3
    // mov r1, #2
    // strb r1, [r5, r0]
    // mov r1, #3
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x1d
    // bl GetItemVar
    // cmp r0, #0
    // beq _022209B0
    // ldr r0, _022209C4 ; =0x000003D3
    // mov r1, #4
    // strb r1, [r5, r0]
    // mov r1, #3
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x1e
    // bl GetItemVar
    // cmp r0, #0
    // beq _022209F8
    // ldr r0, _022209C4 ; =0x000003D3
    // b _022209E8
    // nop
    // _022209C4: .word 0x000003D3
    // _022209C8: .word 0x000001EE
    // _022209CC: .word 0x000003CD
    // _022209D0: .word 0x00002D90
    // _022209D4: .word 0x00002D8C
    // _022209D8: .word 0x000003D1
    // _022209DC: .word 0x00002DAC
    // _022209E0: .word 0x00002DB0
    // _022209E4: .word 0x00002DD4
    // mov r1, #5
    // strb r1, [r5, r0]
    // mov r1, #3
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x1f
    // bl GetItemVar
    // cmp r0, #0
    // beq _02220A16
    // ldr r0, _02220AA0 ; =0x000003D3
    // mov r1, #3
    // strb r1, [r5, r0]
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x20
    // bl GetItemVar
    // cmp r0, #0
    // beq _02220A36
    // ldr r0, _02220AA0 ; =0x000003D3
    // mov r1, #6
    // strb r1, [r5, r0]
    // mov r1, #3
    // sub r0, r0, #2
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // add r0, r4, #0
    // add r1, r6, #0
    // mov r2, #0x16
    // bl GetItemVar
    // cmp r0, #0
    // beq _02220A62
    // mov r0, #7
    // lsl r0, r0, #6
    // ldr r1, [r4, r0]
    // mov r0, #0x40
    // tst r0, r1
    // bne _02220A62
    // ldr r0, _02220AA4 ; =0x000003D1
    // mov r1, #4
    // strb r1, [r5, r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02220A62
    // ldr r0, _02220AA4 ; =0x000003D1
    // mov r1, #5
    // strb r1, [r5, r0]
    // ldr r0, [sp, #0x1c]
    // cmp r0, #1
    // bne _02220A88
    // ldr r0, [sp]
    // mov r1, #1
    // bic r0, r1
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // add r3, r4, r1
    // ldr r1, [sp, #4]
    // ldr r2, _02220AA8 ; =0x000003D6
    // add r0, r4, r0
    // strh r6, [r0, r2]
    // lsl r1, r1, #1
    // mov r0, #0
    // add r1, r3, r1
    // sub r2, #0x3a
    // strh r0, [r1, r2]
    // b _02220A9A
    // ldr r0, [sp, #0x18]
    // add r0, r0, #2
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #4
    // bge _02220A9A
    // b _02220778
    // ldr r0, [sp, #0x1c]
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02220AA0: .word 0x000003D3
    // _02220AA4: .word 0x000003D1
    // _02220AA8: .word 0x000003D6
    // TODO: decompile
}


