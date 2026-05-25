/* Decompiled from asm/overlay_80_0222AEF8.s */
#include "global.h"

void ov80_0222AEF8(void) {
}



void ov80_0222AF10(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222AF34 ; =0x000006FC
    // ldr r0, [r4, r0]
    // bl Save_PlayerData_GetProfile
    // ldr r1, _0222AF38 ; =0x0000072C
    // mov r0, #0x22
    // add r1, r4, r1
    // mov r2, #0x2c
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222AF30
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _0222AF34: .word 0x000006FC
    // _0222AF38: .word 0x0000072C
    // TODO: decompile
}



void ov80_0222AF3C(void) {
}



void ov80_0222AF54(void) {
    // push {r4, lr}
    // ldr r1, _0222AF80 ; =0x0000072C
    // mov r3, #0
    // add r1, r0, r1
    // add r4, r1, #0
    // ldrh r2, [r0, #0x18]
    // add r3, r3, #1
    // add r0, r0, #2
    // strh r2, [r4]
    // add r4, r4, #2
    // cmp r3, #0x14
    // blt _0222AF5E
    // mov r0, #0x23
    // mov r2, #0x2c
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222AF7C
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _0222AF80: .word 0x0000072C
    // TODO: decompile
}



void ov80_0222AF84(void) {
    // ldrb r1, [r4, r0]
    // strb r1, [r4, r0]
    sub_0203769C((0xd9 << 4), (r1 + 1));
    sub_0203769C();
    // ldrh r0, [r5]
    *((u16*)(r4 + 0x18)) = r0;
}



void ov80_0222AFB8(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0222AFE8 ; =0x0000072C
    // mov r2, #0x9a
    // add r1, r0, r1
    // mov r4, #0
    // add r5, r1, #0
    // lsl r2, r2, #2
    // ldrh r3, [r0, r2]
    // add r4, r4, #1
    // add r0, r0, #2
    // strh r3, [r5]
    // add r5, r5, #2
    // cmp r4, #0x14
    // blt _0222AFC6
    // mov r0, #0x24
    // mov r2, #0x2c
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222AFE4
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0222AFE8: .word 0x0000072C
    // TODO: decompile
}



void ov80_0222AFEC(void) {
    // ldrb r1, [r4, r0]
    // strb r1, [r4, r0]
    sub_0203769C((0xd9 << 4), (r1 + 1));
    sub_0203769C();
    // ldrh r1, [r5]
    // strh r1, [r4, r0]
}



void ov80_0222B024(void) {
}



void ov80_0222B048(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0xd9
    // add r4, r3, #0
    // lsl r0, r0, #4
    // ldrb r1, [r4, r0]
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _0222B068
    // ldrh r1, [r6]
    // ldr r0, _0222B06C ; =0x00000D88
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _0222B06C: .word 0x00000D88
    // TODO: decompile
}



void ov80_0222B070(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl SizeOfStructPokemon
    // add r4, r0, #0
    // ldr r0, _0222B0B0 ; =0x000006FC
    // ldr r0, [r5, r0]
    // bl SaveArray_Party_Get
    // mov r1, #0x26
    // lsl r1, r1, #4
    // ldrb r1, [r5, r1]
    // bl Party_GetMonByIndex
    // ldr r1, _0222B0B4 ; =0x00000784
    // add r2, r4, #0
    // add r1, r5, r1
    // bl MI_CpuCopy8
    // ldr r1, _0222B0B4 ; =0x00000784
    // mov r2, #2
    // mov r0, #0x26
    // add r1, r5, r1
    // lsl r2, r2, #8
    // bl sub_02036FD8
    // cmp r0, #1
    // bne _0222B0AC
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0222B0B0: .word 0x000006FC
    // _0222B0B4: .word 0x00000784
    // TODO: decompile
}



void ov80_0222B0B8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r0, #0xd9
    // add r4, r3, #0
    // lsl r0, r0, #4
    // ldrb r1, [r4, r0]
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _0222B0E2
    // bl SizeOfStructPokemon
    // ldr r1, _0222B0E4 ; =0x00000D8C
    // add r2, r0, #0
    // ldr r1, [r4, r1]
    // add r0, r6, #0
    // bl MI_CpuCopy8
    // pop {r4, r5, r6, pc}
    // _0222B0E4: .word 0x00000D8C
    // TODO: decompile
}



void ov80_0222B0E8(void) {
}



void ov80_0222B108(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _0222B13C ; =0x00000504
    // add r4, r5, r0
    // sub r0, #0xc
    // ldr r0, [r5, r0]
    // bl Save_PlayerData_GetProfile
    // ldrh r0, [r5, #8]
    // add r1, r4, #0
    // mov r2, #0x3c
    // strh r0, [r4, #2]
    // ldrh r0, [r5, #0xc]
    // strh r0, [r4, #4]
    // ldrh r0, [r5, #0xe]
    // strh r0, [r4, #6]
    // mov r0, #0x16
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222B136
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0222B13C: .word 0x00000504
    // TODO: decompile
}



void ov80_0222B140(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0222B170 ; =0x00000702
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222B16C
    // ldrh r1, [r5, #2]
    // mov r0, #0x16
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // ldrh r2, [r5, #4]
    // add r1, r0, #2
    // sub r0, r0, #2
    // strh r2, [r4, r1]
    // ldrh r1, [r5, #6]
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _0222B170: .word 0x00000702
    // TODO: decompile
}



void ov80_0222B174(void) {
    // push {r4, lr}
    // ldr r1, _0222B1A0 ; =0x00000504
    // mov r3, #0
    // add r1, r0, r1
    // add r4, r1, #0
    // ldrh r2, [r0, #0x18]
    // add r3, r3, #1
    // add r0, r0, #2
    // strh r2, [r4]
    // add r4, r4, #2
    // cmp r3, #0xe
    // blt _0222B17E
    // mov r0, #0x17
    // mov r2, #0x3c
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222B19C
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _0222B1A0: .word 0x00000504
    // TODO: decompile
}



void ov80_0222B1A4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0222B1D8 ; =0x00000702
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222B1D4
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222B1D4
    // mov r1, #0
    // ldrh r0, [r5]
    // add r1, r1, #1
    // add r5, r5, #2
    // strh r0, [r4, #0x18]
    // add r4, r4, #2
    // cmp r1, #0xe
    // blt _0222B1C6
    // pop {r4, r5, r6, pc}
    // nop
    // _0222B1D8: .word 0x00000702
    // TODO: decompile
}



void ov80_0222B1DC(void) {
    // push {r4, r5, r6, lr}
    // ldr r1, _0222B240 ; =0x00000504
    // ldr r2, _0222B244 ; =0x00000584
    // add r1, r0, r1
    // mov r4, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // ldrh r3, [r5, r2]
    // add r4, r4, #1
    // add r5, r5, #2
    // strh r3, [r6]
    // add r6, r6, #2
    // cmp r4, #6
    // blt _0222B1EA
    // mov r2, #0x59
    // mov r5, #0
    // add r4, r1, #0
    // lsl r2, r2, #4
    // add r3, r0, r5
    // ldrb r3, [r3, r2]
    // add r5, r5, #1
    // strh r3, [r4, #0xc]
    // add r4, r4, #2
    // cmp r5, #6
    // blt _0222B200
    // ldr r4, _0222B248 ; =0x00000598
    // add r2, r1, #0
    // mov r3, #0
    // add r2, #0x18
    // add r5, r4, #0
    // ldr r6, [r0, r4]
    // add r3, r3, #1
    // strh r6, [r2]
    // ldr r6, [r0, r5]
    // add r0, r0, #4
    // lsr r6, r6, #0x10
    // strh r6, [r2, #0xc]
    // add r2, r2, #2
    // cmp r3, #6
    // blt _0222B218
    // mov r0, #0x18
    // mov r2, #0x3c
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222B23C
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0222B240: .word 0x00000504
    // _0222B244: .word 0x00000584
    // _0222B248: .word 0x00000598
    // TODO: decompile
}



void ov80_0222B24C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _0222B2C0 ; =0x00000702
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222B2BE
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222B2BE
    // mov r0, #0x95
    // mov r2, #0
    // add r3, r5, #0
    // add r6, r4, #0
    // lsl r0, r0, #2
    // ldrh r1, [r3]
    // add r2, r2, #1
    // add r3, r3, #2
    // strh r1, [r6, r0]
    // add r6, r6, #2
    // cmp r2, #6
    // blt _0222B276
    // mov r0, #0x26
    // mov r6, #0
    // add r3, r5, #0
    // lsl r0, r0, #4
    // ldrh r2, [r3, #0xc]
    // add r1, r4, r6
    // add r6, r6, #1
    // add r3, r3, #2
    // strb r2, [r1, r0]
    // cmp r6, #6
    // blt _0222B28C
    // mov r2, #0x9a
    // lsl r2, r2, #2
    // mov r1, #0
    // add r5, #0x18
    // add r3, r2, #0
    // add r6, r2, #0
    // ldrh r0, [r5]
    // add r1, r1, #1
    // str r0, [r4, r2]
    // ldrh r7, [r5, #0xc]
    // ldr r0, [r4, r3]
    // add r5, r5, #2
    // lsl r7, r7, #0x10
    // orr r0, r7
    // str r0, [r4, r6]
    // add r4, r4, #4
    // cmp r1, #6
    // blt _0222B2A6
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B2C0: .word 0x00000702
    // TODO: decompile
}



void ov80_0222B2C4(void) {
    // push {r4, r5, r6, lr}
    // ldr r1, _0222B328 ; =0x00000504
    // ldr r2, _0222B32C ; =0x000003D2
    // add r1, r0, r1
    // mov r4, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // ldrh r3, [r5, r2]
    // add r4, r4, #1
    // add r5, r5, #2
    // strh r3, [r6]
    // add r6, r6, #2
    // cmp r4, #4
    // blt _0222B2D2
    // ldr r2, _0222B330 ; =0x000003DA
    // mov r5, #0
    // add r4, r1, #0
    // add r3, r0, r5
    // ldrb r3, [r3, r2]
    // add r5, r5, #1
    // strh r3, [r4, #8]
    // add r4, r4, #2
    // cmp r5, #4
    // blt _0222B2E6
    // mov r4, #0x3e
    // add r2, r1, #0
    // lsl r4, r4, #4
    // mov r3, #0
    // add r2, #0x10
    // add r5, r4, #0
    // ldr r6, [r0, r4]
    // add r3, r3, #1
    // strh r6, [r2]
    // ldr r6, [r0, r5]
    // add r0, r0, #4
    // lsr r6, r6, #0x10
    // strh r6, [r2, #8]
    // add r2, r2, #2
    // cmp r3, #4
    // blt _0222B300
    // mov r0, #0x19
    // mov r2, #0x3c
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222B324
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0222B328: .word 0x00000504
    // _0222B32C: .word 0x000003D2
    // _0222B330: .word 0x000003DA
    // TODO: decompile
}



void ov80_0222B334(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _0222B3A4 ; =0x00000702
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222B3A2
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222B3A2
    // ldr r0, _0222B3A8 ; =0x000003D2
    // mov r2, #0
    // add r3, r5, #0
    // add r6, r4, #0
    // ldrh r1, [r3]
    // add r2, r2, #1
    // add r3, r3, #2
    // strh r1, [r6, r0]
    // add r6, r6, #2
    // cmp r2, #4
    // blt _0222B35C
    // ldr r0, _0222B3AC ; =0x000003DA
    // mov r6, #0
    // add r3, r5, #0
    // ldrh r2, [r3, #8]
    // add r1, r4, r6
    // add r6, r6, #1
    // add r3, r3, #2
    // strb r2, [r1, r0]
    // cmp r6, #4
    // blt _0222B370
    // mov r2, #0x3e
    // lsl r2, r2, #4
    // mov r1, #0
    // add r5, #0x10
    // add r3, r2, #0
    // add r6, r2, #0
    // ldrh r0, [r5]
    // add r1, r1, #1
    // str r0, [r4, r2]
    // ldrh r7, [r5, #8]
    // ldr r0, [r4, r3]
    // add r5, r5, #2
    // lsl r7, r7, #0x10
    // orr r0, r7
    // str r0, [r4, r6]
    // add r4, r4, #4
    // cmp r1, #4
    // blt _0222B38A
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B3A4: .word 0x00000702
    // _0222B3A8: .word 0x000003D2
    // _0222B3AC: .word 0x000003DA
    // TODO: decompile
}



void ov80_0222B3B0(void) {
}



void ov80_0222B3D4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0222B3F4 ; =0x00000702
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _0222B3F2
    // ldrh r1, [r6]
    // ldr r0, _0222B3F8 ; =0x0000057C
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // _0222B3F4: .word 0x00000702
    // _0222B3F8: .word 0x0000057C
    // TODO: decompile
}



void ov80_0222B3FC(void) {
}



void ov80_0222B420(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0222B440 ; =0x00000702
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _0222B43E
    // ldrh r1, [r6]
    // ldr r0, _0222B444 ; =0x0000057D
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // _0222B440: .word 0x00000702
    // _0222B444: .word 0x0000057D
    // TODO: decompile
}



void ov80_0222B448(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, _0222B520 ; =0x00000504
    // add r0, r5, r0
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldrb r0, [r5, #4]
    // bl ov80_02236DD4
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp, #8]
    // cmp r4, #0
    // ble _0222B49A
    // add r7, sp, #0x10
    // add r6, sp, #0x14
    // ldr r0, _0222B524 ; =0x000004D4
    // ldr r1, [sp, #8]
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // str r0, [sp, #0xc]
    // mov r1, #0x47
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r7]
    // mov r1, #0
    // ldr r0, [sp, #0xc]
    // add r2, r1, #0
    // bl GetMonData
    // stmia r6!, {r0}
    // ldr r0, [sp, #8]
    // add r7, r7, #1
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, r4
    // blt _0222B46C
    // mov r3, #0
    // cmp r4, #0
    // ble _0222B4B2
    // ldr r2, [sp]
    // ldr r0, _0222B528 ; =0x000004E8
    // ldrh r1, [r5, r0]
    // add r3, r3, #1
    // add r5, r5, #2
    // strh r1, [r2]
    // add r2, r2, #2
    // cmp r3, r4
    // blt _0222B4A4
    // ldr r0, [sp, #4]
    // add r0, r0, r4
    // str r0, [sp, #4]
    // mov r0, #0
    // cmp r4, #0
    // ble _0222B4D6
    // ldr r1, [sp, #4]
    // add r3, sp, #0x10
    // lsl r2, r1, #1
    // ldr r1, [sp]
    // add r2, r1, r2
    // ldrb r1, [r3]
    // add r0, r0, #1
    // add r3, r3, #1
    // strh r1, [r2]
    // add r2, r2, #2
    // cmp r0, r4
    // blt _0222B4C8
    // ldr r0, [sp, #4]
    // mov r3, #0
    // add r0, r0, r4
    // cmp r4, #0
    // ble _0222B506
    // ldr r5, [sp]
    // lsl r6, r4, #1
    // ldr r2, [sp]
    // lsl r0, r0, #1
    // add r5, r5, r6
    // add r2, r2, r0
    // add r1, sp, #0x14
    // add r0, r5, r0
    // ldr r5, [r1]
    // add r3, r3, #1
    // strh r5, [r2]
    // ldr r5, [r1]
    // add r1, r1, #4
    // lsr r5, r5, #0x10
    // strh r5, [r0]
    // add r2, r2, #2
    // add r0, r0, #2
    // cmp r3, r4
    // blt _0222B4F0
    // ldr r1, [sp]
    // mov r0, #0x1c
    // mov r2, #0x3c
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222B51A
    // add sp, #0x1c
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0222B520: .word 0x00000504
    // _0222B524: .word 0x000004D4
    // _0222B528: .word 0x000004E8
    // TODO: decompile
}



void ov80_0222B52C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0222B5BC ; =0x00000702
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // str r2, [sp]
    // mov r7, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _0222B5B8
    // ldrb r0, [r4, #4]
    // bl ov80_02236DD4
    // add r3, r7, #0
    // cmp r0, #0
    // ble _0222B566
    // ldr r5, [sp]
    // ldr r1, _0222B5C0 ; =0x00000584
    // add r6, r4, #0
    // ldrh r2, [r5]
    // add r3, r3, #1
    // add r5, r5, #2
    // strh r2, [r6, r1]
    // add r6, r6, #2
    // cmp r3, r0
    // blt _0222B558
    // add r7, r7, r0
    // mov r6, #0
    // cmp r0, #0
    // ble _0222B586
    // ldr r1, [sp]
    // lsl r2, r7, #1
    // add r5, r1, r2
    // mov r1, #0x59
    // lsl r1, r1, #4
    // ldrh r3, [r5]
    // add r2, r4, r6
    // add r6, r6, #1
    // strb r3, [r2, r1]
    // add r5, r5, #2
    // cmp r6, r0
    // blt _0222B578
    // add r2, r7, r0
    // mov r1, #0
    // cmp r0, #0
    // ble _0222B5B8
    // ldr r3, [sp]
    // lsl r2, r2, #1
    // lsl r6, r0, #1
    // add r5, r3, r2
    // add r3, r3, r6
    // add r6, r3, r2
    // ldr r2, _0222B5C4 ; =0x00000598
    // ldrh r7, [r5]
    // ldr r3, _0222B5C4 ; =0x00000598
    // add r1, r1, #1
    // str r7, [r4, r3]
    // ldrh r7, [r6]
    // ldr r3, [r4, r3]
    // add r5, r5, #2
    // lsl r7, r7, #0x10
    // orr r3, r7
    // str r3, [r4, r2]
    // add r4, r4, #4
    // add r6, r6, #2
    // cmp r1, r0
    // blt _0222B59C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222B5BC: .word 0x00000702
    // _0222B5C0: .word 0x00000584
    // _0222B5C4: .word 0x00000598
    // TODO: decompile
}



void ov80_0222B5C8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // bl sub_02030E08
    // ldrh r1, [r5, #0x14]
    // ldr r0, _0222B620 ; =0x000003C2
    // strh r1, [r5, r0]
    // ldrh r1, [r5, #0x16]
    // add r0, r0, #2
    // strh r1, [r5, r0]
    // ldr r0, [r5, #4]
    // bl Save_Frontier_GetStatic
    // add r4, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // add r6, r0, #0
    // ldrb r0, [r5, #0x10]
    // bl sub_0205C1F0
    // bl sub_0205C268
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // ldr r1, _0222B624 ; =0x000003D6
    // mov r2, #0x28
    // strh r0, [r5, r1]
    // sub r1, #0x16
    // mov r0, #0x2a
    // add r1, r5, r1
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222B61A
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _0222B620: .word 0x000003C2
    // _0222B624: .word 0x000003D6
    // TODO: decompile
}



void ov80_0222B628(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0222B654 ; =0x00000A1A
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222B652
    // ldrh r1, [r5, #2]
    // ldr r0, _0222B658 ; =0x00000A16
    // strh r1, [r4, r0]
    // ldrh r2, [r5, #4]
    // sub r1, r0, #4
    // add r0, r0, #6
    // strh r2, [r4, r1]
    // ldrh r1, [r5, #0x16]
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // _0222B654: .word 0x00000A1A
    // _0222B658: .word 0x00000A16
    // TODO: decompile
}



void ov80_0222B65C(void) {
    // strh r1, [r3, r0]
    // add r1, r4, r1
    sub_02037030(0x2b, (0xf << 6), 0x28, (r0 + 2));
}



void ov80_0222B690(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0222B6C4 ; =0x00000A1A
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222B6C0
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222B6C0
    // mov r1, #0
    // ldrh r0, [r5]
    // add r1, r1, #1
    // add r5, r5, #2
    // strh r0, [r4, #0x30]
    // add r4, r4, #2
    // cmp r1, #0xe
    // blt _0222B6B2
    // pop {r4, r5, r6, pc}
    // nop
    // _0222B6C4: .word 0x00000A1A
    // TODO: decompile
}



void ov80_0222B6C8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0222B734 ; =0x00000A18
    // ldrb r1, [r4, r0]
    // mov r0, #0xf
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // ldr r1, _0222B738 ; =0x00000A1B
    // bne _0222B700
    // ldrb r0, [r4, r1]
    // cmp r0, #0
    // bne _0222B6EE
    // sub r0, r1, #3
    // ldrb r0, [r4, r0]
    // strb r0, [r4, r1]
    // b _0222B712
    // sub r0, r0, #6
    // cmp r0, #4
    // bne _0222B712
    // sub r0, r1, #3
    // ldrb r0, [r4, r0]
    // cmp r0, #4
    // beq _0222B712
    // strb r0, [r4, r1]
    // b _0222B712
    // ldrb r0, [r4, r1]
    // cmp r0, #4
    // bne _0222B712
    // sub r0, r1, #3
    // ldrb r0, [r4, r0]
    // cmp r0, #4
    // beq _0222B712
    // add r0, r0, #6
    // strb r0, [r4, r1]
    // ldr r0, _0222B738 ; =0x00000A1B
    // ldr r1, _0222B73C ; =0x000003C2
    // ldrb r0, [r4, r0]
    // mov r2, #0x28
    // strh r0, [r4, r1]
    // sub r1, r1, #2
    // mov r0, #0x2c
    // add r1, r4, r1
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222B72E
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0222B734: .word 0x00000A18
    // _0222B738: .word 0x00000A1B
    // _0222B73C: .word 0x000003C2
    // TODO: decompile
}



void ov80_0222B740(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0222B7D4 ; =0x00000A1A
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222B7D2
    // ldrh r1, [r5]
    // ldr r0, _0222B7D8 ; =0x00000A19
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0222B7A4
    // ldr r1, _0222B7DC ; =0x00000A1B
    // ldrb r0, [r4, r1]
    // cmp r0, #0
    // beq _0222B78A
    // cmp r0, #4
    // bne _0222B7D2
    // sub r0, r1, #2
    // ldrb r0, [r4, r0]
    // cmp r0, #4
    // beq _0222B7D2
    // add r2, r0, #6
    // sub r0, r1, #3
    // strb r2, [r4, r0]
    // sub r0, r1, #2
    // ldrb r0, [r4, r0]
    // add r0, r0, #6
    // strb r0, [r4, r1]
    // pop {r4, r5, r6, pc}
    // sub r0, r1, #2
    // ldrb r0, [r4, r0]
    // add r0, r0, #6
    // strb r0, [r4, r1]
    // sub r0, r1, #2
    // ldrb r0, [r4, r0]
    // cmp r0, #4
    // beq _0222B7D2
    // add r0, r1, #5
    // ldr r2, _0222B7E0 ; =0x0000EEDD
    // ldr r0, [r4, r0]
    // strh r2, [r0]
    // pop {r4, r5, r6, pc}
    // ldrh r1, [r5, #2]
    // ldr r0, _0222B7DC ; =0x00000A1B
    // strb r1, [r4, r0]
    // ldrb r1, [r4, r0]
    // cmp r1, #4
    // beq _0222B7B8
    // add r0, r0, #5
    // ldr r1, _0222B7E0 ; =0x0000EEDD
    // ldr r0, [r4, r0]
    // strh r1, [r0]
    // ldr r1, _0222B7D8 ; =0x00000A19
    // ldrb r0, [r4, r1]
    // cmp r0, #4
    // bne _0222B7D2
    // sub r0, r1, #1
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _0222B7D2
    // cmp r0, #4
    // beq _0222B7D2
    // add r2, r0, #6
    // add r0, r1, #2
    // strb r2, [r4, r0]
    // pop {r4, r5, r6, pc}
    // _0222B7D4: .word 0x00000A1A
    // _0222B7D8: .word 0x00000A19
    // _0222B7DC: .word 0x00000A1B
    // _0222B7E0: .word 0x0000EEDD
    // TODO: decompile
}



void ov80_0222B7E4(void) {
    // ldrh r2, [r5, r0]
    // strh r2, [r5, r1]
    // add r2, r3, r5
    // ldrb r2, [r2, r0]
    // strh r2, [r4, r1]
    // add r1, #0x10
    // add r6, #8
    // ldr r4, [r0, r4]
    // strh r4, [r1, r7]
    // ldr r4, [r0, r5]
    // strh r4, [r1, r6]
    // add r1, r3, r1
    sub_02037030(0x2d, (0xf << 6), 0x28, r0);
}



void ov80_0222B860(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _0222B8D4 ; =0x00000A1A
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222B8D2
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222B8D2
    // mov r0, #0x9b
    // mov r2, #0
    // add r3, r5, #0
    // add r6, r4, #0
    // lsl r0, r0, #2
    // ldrh r1, [r3]
    // add r2, r2, #1
    // add r3, r3, #2
    // strh r1, [r6, r0]
    // add r6, r6, #2
    // cmp r2, #4
    // blt _0222B88A
    // mov r0, #0x9d
    // mov r6, #0
    // add r3, r5, #0
    // lsl r0, r0, #2
    // ldrh r2, [r3, #8]
    // add r1, r4, r6
    // add r6, r6, #1
    // add r3, r3, #2
    // strb r2, [r1, r0]
    // cmp r6, #4
    // blt _0222B8A0
    // mov r2, #0x9e
    // lsl r2, r2, #2
    // mov r1, #0
    // add r5, #0x10
    // add r3, r2, #0
    // add r6, r2, #0
    // ldrh r0, [r5]
    // add r1, r1, #1
    // str r0, [r4, r2]
    // ldrh r7, [r5, #8]
    // ldr r0, [r4, r3]
    // add r5, r5, #2
    // lsl r7, r7, #0x10
    // orr r0, r7
    // str r0, [r4, r6]
    // add r4, r4, #4
    // cmp r1, #4
    // blt _0222B8BA
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222B8D4: .word 0x00000A1A
    // TODO: decompile
}



void ov80_0222B8D8(void) {
}



void ov80_0222B8F8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0222B91C ; =0x00000A1A
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _0222B918
    // ldrh r1, [r6]
    // mov r0, #0xa1
    // lsl r0, r0, #4
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _0222B91C: .word 0x00000A1A
    // TODO: decompile
}



void ov80_0222B920(void) {
}



void ov80_0222B940(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0222B960 ; =0x00000A1A
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _0222B95E
    // ldrh r1, [r6]
    // ldr r0, _0222B964 ; =0x00000A11
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // _0222B960: .word 0x00000A1A
    // _0222B964: .word 0x00000A11
    // TODO: decompile
}



void ov80_0222B968(void) {
    ov80_02237B24(*((u8*)(r0 + 0x10)), 0);
    // str r0, [sp]
    SizeOfStructPokemon();
    // ldr r0, [sp]
    // add r0, r7, r0
    // str r0, [sp, #4]
    Party_GetMonByIndex(*((u32*)(r7 + 0x28)), 0);
    // ldr r1, [sp, #4]
    // add r1, r1, r5
    MI_CpuCopy8(r6);
    // ldr r0, [sp]
    // add r5, r5, r6
    // add r1, r7, r1
    sub_02036FD8(0x30, (0x41 << 4), (2 << 8));
}



void ov80_0222B9CC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldr r1, _0222BA58 ; =0x00000A1A
    // add r4, r0, #0
    // add r0, r3, #0
    // ldrb r0, [r0, r1]
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r2, r0, #1
    // add r0, r3, #0
    // strb r2, [r0, r1]
    // bl sub_0203769C
    // cmp r4, r0
    // beq _0222BA54
    // ldr r0, [sp, #4]
    // mov r1, #0
    // ldrb r0, [r0, #0x10]
    // bl ov80_02237B24
    // str r0, [sp, #8]
    // bl SizeOfStructPokemon
    // add r5, r0, #0
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r6, r0, #0
    // ldr r0, [sp, #8]
    // mov r7, #0
    // cmp r0, #0
    // ble _0222BA2E
    // add r4, r7, #0
    // ldr r0, [sp]
    // add r1, r6, #0
    // add r0, r0, r4
    // add r2, r5, #0
    // bl MI_CpuCopy8
    // ldr r0, [sp, #4]
    // add r1, r6, #0
    // ldr r0, [r0, #0x28]
    // bl Party_AddMon
    // ldr r0, [sp, #8]
    // add r7, r7, #1
    // add r4, r4, r5
    // cmp r7, r0
    // blt _0222BA0E
    // add r0, r6, #0
    // bl Heap_Free
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222BA54
    // ldr r0, [sp, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x28]
    // mov r2, #2
    // bl Party_SwapSlots
    // ldr r0, [sp, #4]
    // mov r1, #1
    // ldr r0, [r0, #0x28]
    // mov r2, #3
    // bl Party_SwapSlots
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0222BA58: .word 0x00000A1A
    // TODO: decompile
}



void ov80_0222BA5C(void) {
}



void ov80_0222BA7C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // bl sub_02030FA0
    // ldrh r0, [r4, #0x18]
    // ldr r1, _0222BAAC ; =0x00000426
    // strh r0, [r4, r1]
    // add r0, r1, #2
    // ldrh r2, [r4, #0x1a]
    // sub r1, r1, #2
    // add r1, r4, r1
    // strh r2, [r4, r0]
    // mov r0, #0x41
    // mov r2, #0x28
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222BAA6
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0222BAAC: .word 0x00000426
    // TODO: decompile
}



void ov80_0222BAB0(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0222BAD8 ; =0x00000A7C
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222BAD4
    // ldrh r1, [r5, #2]
    // ldr r0, _0222BADC ; =0x00000A78
    // strh r1, [r4, r0]
    // ldrh r1, [r5, #4]
    // sub r0, r0, #2
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _0222BAD8: .word 0x00000A7C
    // _0222BADC: .word 0x00000A78
    // TODO: decompile
}



void ov80_0222BAE0(void) {
    // push {r4, lr}
    // add r1, r0, #0
    // ldr r2, _0222BB14 ; =0x00000424
    // mov r3, #0
    // add r4, r1, #0
    // add r0, r4, #0
    // add r0, #0x78
    // ldrh r0, [r0]
    // add r3, r3, #1
    // strh r0, [r4, r2]
    // add r4, r4, #2
    // cmp r3, #0xe
    // blt _0222BAEA
    // ldr r2, _0222BB14 ; =0x00000424
    // mov r0, #0x42
    // add r1, r1, r2
    // mov r2, #0x28
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222BB0E
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0222BB14: .word 0x00000424
    // TODO: decompile
}



void ov80_0222BB18(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0222BB50 ; =0x00000A7C
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222BB4C
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222BB4C
    // mov r2, #0
    // ldrh r1, [r5]
    // add r0, r4, #0
    // add r0, #0x78
    // add r2, r2, #1
    // strh r1, [r0]
    // add r5, r5, #2
    // add r4, r4, #2
    // cmp r2, #0xe
    // blt _0222BB3A
    // pop {r4, r5, r6, pc}
    // nop
    // _0222BB50: .word 0x00000A7C
    // TODO: decompile
}



void ov80_0222BB54(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r3, r0, #0
    // mov r0, #0xc5
    // ldr r1, _0222BBC8 ; =0x00000424
    // mov r4, #0
    // add r5, r3, #0
    // lsl r0, r0, #2
    // ldrh r2, [r5, r0]
    // add r4, r4, #1
    // strh r2, [r5, r1]
    // add r5, r5, #2
    // cmp r4, #4
    // blt _0222BB62
    // mov r0, #0xc7
    // ldr r1, _0222BBCC ; =0x0000042C
    // mov r5, #0
    // add r4, r3, #0
    // lsl r0, r0, #2
    // add r2, r3, r5
    // ldrb r2, [r2, r0]
    // add r5, r5, #1
    // strh r2, [r4, r1]
    // add r4, r4, #2
    // cmp r5, #4
    // blt _0222BB78
    // ldr r7, _0222BBC8 ; =0x00000424
    // add r1, r3, #0
    // mov r5, #0x32
    // add r6, r7, #0
    // mov r2, #0
    // add r0, r3, #0
    // add r1, #0x10
    // lsl r5, r5, #4
    // add r6, #8
    // mov r4, #0x32
    // lsl r4, r4, #4
    // ldr r4, [r0, r4]
    // add r2, r2, #1
    // strh r4, [r1, r7]
    // ldr r4, [r0, r5]
    // add r0, r0, #4
    // lsr r4, r4, #0x10
    // strh r4, [r1, r6]
    // add r1, r1, #2
    // cmp r2, #4
    // blt _0222BB98
    // ldr r1, _0222BBC8 ; =0x00000424
    // mov r0, #0x43
    // add r1, r3, r1
    // mov r2, #0x28
    // bl sub_02037030
    // cmp r0, #1
    // bne _0222BBC4
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222BBC8: .word 0x00000424
    // _0222BBCC: .word 0x0000042C
    // TODO: decompile
}



void ov80_0222BBD0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _0222BC44 ; =0x00000A7C
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0222BC42
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222BC42
    // mov r0, #0xc5
    // mov r2, #0
    // add r3, r5, #0
    // add r6, r4, #0
    // lsl r0, r0, #2
    // ldrh r1, [r3]
    // add r2, r2, #1
    // add r3, r3, #2
    // strh r1, [r6, r0]
    // add r6, r6, #2
    // cmp r2, #4
    // blt _0222BBFA
    // mov r0, #0xc7
    // mov r6, #0
    // add r3, r5, #0
    // lsl r0, r0, #2
    // ldrh r2, [r3, #8]
    // add r1, r4, r6
    // add r6, r6, #1
    // add r3, r3, #2
    // strb r2, [r1, r0]
    // cmp r6, #4
    // blt _0222BC10
    // mov r2, #0x32
    // lsl r2, r2, #4
    // mov r1, #0
    // add r5, #0x10
    // add r3, r2, #0
    // add r6, r2, #0
    // ldrh r0, [r5]
    // add r1, r1, #1
    // str r0, [r4, r2]
    // ldrh r7, [r5, #8]
    // ldr r0, [r4, r3]
    // add r5, r5, #2
    // lsl r7, r7, #0x10
    // orr r0, r7
    // str r0, [r4, r6]
    // add r4, r4, #4
    // cmp r1, #4
    // blt _0222BC2A
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222BC44: .word 0x00000A7C
    // TODO: decompile
}



void ov80_0222BC48(void) {
}



void ov80_0222BC6C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0222BC8C ; =0x00000A7C
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _0222BC8A
    // ldrh r1, [r6]
    // ldr r0, _0222BC90 ; =0x00000A74
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // _0222BC8C: .word 0x00000A7C
    // _0222BC90: .word 0x00000A74
    // TODO: decompile
}



void ov80_0222BC94(void) {
}



void ov80_0222BCB8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0222BCD8 ; =0x00000A7C
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r6, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r5, r0
    // beq _0222BCD6
    // ldrh r1, [r6]
    // ldr r0, _0222BCDC ; =0x00000A75
    // strb r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // _0222BCD8: .word 0x00000A7C
    // _0222BCDC: .word 0x00000A75
    // TODO: decompile
}



void ov80_0222BCE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r0, #0
    // ldrb r0, [r7, #0x10]
    // mov r1, #0
    // bl BattleArcade_GetMonCount
    // str r0, [sp]
    // bl SizeOfStructPokemon
    // add r6, r0, #0
    // ldr r0, [sp]
    // mov r4, #0
    // cmp r0, #0
    // ble _0222BD22
    // ldr r0, _0222BD40 ; =0x00000474
    // add r5, r4, #0
    // add r0, r7, r0
    // str r0, [sp, #4]
    // ldr r0, [r7, #0x70]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // ldr r1, [sp, #4]
    // add r2, r6, #0
    // add r1, r1, r5
    // bl MI_CpuCopy8
    // ldr r0, [sp]
    // add r4, r4, #1
    // add r5, r5, r6
    // cmp r4, r0
    // blt _0222BD06
    // ldr r1, _0222BD40 ; =0x00000474
    // mov r2, #2
    // mov r0, #0x46
    // add r1, r7, r1
    // lsl r2, r2, #8
    // bl sub_02036FD8
    // cmp r0, #1
    // bne _0222BD3A
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222BD40: .word 0x00000474
    // TODO: decompile
}



void ov80_0222BD44(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldr r1, _0222BDD0 ; =0x00000A7C
    // add r4, r0, #0
    // add r0, r3, #0
    // ldrb r0, [r0, r1]
    // str r2, [sp]
    // str r3, [sp, #4]
    // add r2, r0, #1
    // add r0, r3, #0
    // strb r2, [r0, r1]
    // bl sub_0203769C
    // cmp r4, r0
    // beq _0222BDCC
    // ldr r0, [sp, #4]
    // mov r1, #0
    // ldrb r0, [r0, #0x10]
    // bl BattleArcade_GetMonCount
    // str r0, [sp, #8]
    // bl SizeOfStructPokemon
    // add r5, r0, #0
    // mov r0, #0xb
    // bl AllocMonZeroed
    // add r6, r0, #0
    // ldr r0, [sp, #8]
    // mov r7, #0
    // cmp r0, #0
    // ble _0222BDA6
    // add r4, r7, #0
    // ldr r0, [sp]
    // add r1, r6, #0
    // add r0, r0, r4
    // add r2, r5, #0
    // bl MI_CpuCopy8
    // ldr r0, [sp, #4]
    // add r1, r6, #0
    // ldr r0, [r0, #0x70]
    // bl Party_AddMon
    // ldr r0, [sp, #8]
    // add r7, r7, #1
    // add r4, r4, r5
    // cmp r7, r0
    // blt _0222BD86
    // add r0, r6, #0
    // bl Heap_Free
    // bl sub_0203769C
    // cmp r0, #0
    // beq _0222BDCC
    // ldr r0, [sp, #4]
    // mov r1, #0
    // ldr r0, [r0, #0x70]
    // mov r2, #2
    // bl Party_SwapSlots
    // ldr r0, [sp, #4]
    // mov r1, #1
    // ldr r0, [r0, #0x70]
    // mov r2, #3
    // bl Party_SwapSlots
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0222BDD0: .word 0x00000A7C
    // TODO: decompile
}



void ov80_0222BDD4(void) {
}


