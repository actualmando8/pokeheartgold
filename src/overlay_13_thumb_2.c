/* Decompiled from asm/overlay_13_thumb_2.s */
#include "global.h"

void ov13_022208E8(void) {
    // push {r3, lr}
    // ldr r1, _022208F4 ; =ov13_0224DD80
    // ldr r1, [r1]
    // blx r1
    // pop {r3, pc}
    // nop
    // _022208F4: .word ov13_0224DD80
    // TODO: decompile
}


void ov13_022208F8(void) {
    // push {r3, lr}
    // ldr r1, _02220904 ; =ov13_0224DD8C
    // ldr r1, [r1]
    // blx r1
    // pop {r3, pc}
    // nop
    // _02220904: .word ov13_0224DD8C
    // TODO: decompile
}


void ov13_02220908(void) {
    // push {r4, lr}
    // ldr r2, _022209DC ; =0x00000106
    // add r4, r0, #0
    // ldrsh r0, [r4, r2]
    // cmp r0, #0
    // beq _02220958
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // blt _02220958
    // add r0, r2, #2
    // ldrsh r0, [r4, r0]
    // cmp r0, r1
    // blt _02220958
    // add r0, r2, #4
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // beq _02220958
    // cmp r0, r1
    // blt _02220958
    // add r0, r2, #6
    // ldrsh r0, [r4, r0]
    // cmp r0, r1
    // blt _02220958
    // add r0, r2, #0
    // add r0, #8
    // ldrsh r0, [r4, r0]
    // cmp r0, r1
    // blt _02220958
    // ldrh r1, [r4, #4]
    // cmp r1, #0
    // beq _02220958
    // sub r0, r2, #6
    // cmp r1, r0
    // bhi _02220958
    // sub r0, r1, #1
    // add r0, r4, r0
    // ldrb r0, [r0, #6]
    // cmp r0, #0
    // beq _0222095E
    // mov r1, #0
    // mvn r1, r1
    // b _02220960
    // mov r1, #0
    // ldr r0, _022209E0 ; =ov13_0224DD80
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02220970
    // ldr r0, _022209E4 ; =ov13_0224DD8C
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02220974
    // mov r1, #0
    // mvn r1, r1
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bne _0222098C
    // ldr r0, _022209E8 ; =0x00000116
    // mov r1, #0xf
    // strb r1, [r4, r0]
    // bl ov13_02221428
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // ldr r0, _022209EC ; =0x000005F8
    // bl ov13_022208E8
    // ldr r1, _022209F0 ; =_0224CF98
    // cmp r0, #0
    // str r0, [r1, #0x14]
    // bne _022209AA
    // ldr r0, _022209E8 ; =0x00000116
    // mov r1, #0xf
    // strb r1, [r4, r0]
    // bl ov13_02221428
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // mov r0, #0
    // mvn r0, r0
    // bl ov13_022217D0
    // add r0, r4, #0
    // bl ov13_022209F8
    // add r4, r0, #0
    // ldr r0, _022209F0 ; =_0224CF98
    // ldr r0, [r0, #0x14]
    // bl ov13_022208F8
    // bl ov13_02221428
    // ldr r0, _022209F4 ; =ov13_022459B4
    // mov r1, #0
    // ldr r0, [r0]
    // mvn r1, r1
    // cmp r0, r1
    // beq _022209D6
    // bl ov13_02222A14
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _022209DC: .word 0x00000106
    // _022209E0: .word ov13_0224DD80
    // _022209E4: .word ov13_0224DD8C
    // _022209E8: .word 0x00000116
    // _022209EC: .word 0x000005F8
    // _022209F0: .word _0224CF98
    // _022209F4: .word ov13_022459B4
    // TODO: decompile
}


void ov13_022209F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0xc8
    // ldr r1, _02220D4C ; =_0224267C
    // str r0, [sp, #8]
    // ldrh r2, [r1]
    // ldrh r1, [r1, #2]
    // add r0, sp, #0x2c
    // strh r2, [r0, #0x30]
    // strh r1, [r0, #0x32]
    // mov r0, #0
    // add r1, sp, #0x58
    // strh r0, [r1]
    // str r0, [sp, #0x24]
    // strh r0, [r1, #2]
    // mov r0, #1
    // str r0, [sp, #0x54]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x24]
    // str r0, [sp, #0x50]
    // str r0, [sp, #0x1c]
    // add r0, sp, #0xb0
    // mov r2, #0x18
    // bl ov13_02222978
    // ldr r1, _02220D50 ; =0x00000106
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // add r1, sp, #0x2c
    // strh r0, [r1, #0x30]
    // mov r0, #0x30
    // ldrsh r2, [r1, r0]
    // sub r0, #0x31
    // cmp r2, r0
    // bne _02220A40
    // mov r0, #0xa
    // strh r0, [r1, #0x30]
    // ldr r1, _02220D54 ; =0x0000010A
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // add r1, sp, #0x2c
    // strh r0, [r1, #0x2c]
    // mov r0, #0x2c
    // ldrsh r2, [r1, r0]
    // sub r0, #0x2d
    // cmp r2, r0
    // bne _02220A58
    // mov r0, #0xa
    // strh r0, [r1, #0x2c]
    // mov r1, #0x42
    // ldr r0, [sp, #8]
    // lsl r1, r1, #2
    // ldrsh r0, [r0, r1]
    // add r1, sp, #0x2c
    // strh r0, [r1, #0x32]
    // mov r0, #0x32
    // ldrsh r2, [r1, r0]
    // sub r0, #0x33
    // cmp r2, r0
    // bne _02220A72
    // mov r0, #0x64
    // strh r0, [r1, #0x32]
    // mov r1, #0x43
    // ldr r0, [sp, #8]
    // lsl r1, r1, #2
    // ldrsh r0, [r0, r1]
    // add r1, sp, #0x2c
    // strh r0, [r1, #0x2e]
    // mov r0, #0x2e
    // ldrsh r2, [r1, r0]
    // sub r0, #0x2f
    // cmp r2, r0
    // bne _02220A8C
    // mov r0, #0x64
    // strh r0, [r1, #0x2e]
    // ldr r1, _02220D58 ; =0x0000010E
    // ldr r0, [sp, #8]
    // ldrsh r0, [r0, r1]
    // mov r1, #0
    // mvn r1, r1
    // str r0, [sp, #0xc]
    // cmp r0, r1
    // bne _02220AA2
    // mov r0, #0x7d
    // lsl r0, r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // bl ov13_02221454
    // ldr r0, _02220D5C ; =_0224CF98
    // ldr r1, [r0, #0x2c]
    // mov r0, #1
    // and r0, r1
    // cmp r0, #1
    // beq _02220ACE
    // mov r0, #0x13
    // bl ov13_022214AC
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #0
    // add r0, r4, #0
    // bl ov13_022217D0
    // add r1, sp, #0x2c
    // mov r0, #0x32
    // ldrsh r6, [r1, r0]
    // mov r0, #0x30
    // ldrsh r7, [r1, r0]
    // ldr r5, _02220D5C ; =_0224CF98
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _02220AF0
    // bl ov13_022208F8
    // mov r0, #0
    // str r0, [r5, #4]
    // ldr r0, _02220D64 ; =ov13_0224CF9C
    // bl ov13_02222DB0
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02220B12
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #4]
    // bl ov13_022216E0
    // cmp r0, #4
    // bne _02220B30
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #2
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0
    // beq _02220B5A
    // cmp r4, r7
    // blt _02220B4C
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #1
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov13_022230F8
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _02220AE2
    // mov r0, #1
    // bl ov13_022217D0
    // add r0, sp, #0x74
    // mov r1, #0
    // mov r2, #0x3c
    // bl ov13_02222978
    // add r0, sp, #0x74
    // bl ov13_0222175C
    // cmp r0, #0
    // beq _02220B88
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x58
    // bl ov13_022208E8
    // ldr r1, _02220D5C ; =_0224CF98
    // cmp r0, #0
    // str r0, [r1, #0xc]
    // bne _02220BAA
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // mov r2, #0x58
    // bl ov13_02222978
    // add r1, sp, #0x2c
    // mov r0, #0x30
    // ldrsh r5, [r1, r0]
    // mov r4, #0
    // cmp r5, #0
    // ble _02220C02
    // ldr r7, _02220D5C ; =_0224CF98
    // ldr r1, [r7, #0xc]
    // add r0, sp, #0x74
    // bl ov13_02222F28
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02220BE4
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0
    // bne _02220BF2
    // bne _02220C02
    // ldr r0, [r7, #0xc]
    // ldr r0, [r0]
    // cmp r0, #1
    // beq _02220C02
    // add r0, r6, #0
    // bl ov13_022230F8
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r4, r5
    // blt _02220BC0
    // add r0, sp, #0x2c
    // mov r1, #0x30
    // ldrsh r0, [r0, r1]
    // cmp r4, r0
    // bne _02220C20
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // add r1, #0xe6
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02220D68 ; =0xC0A80B65
    // mov r1, #0xff
    // mvn r1, r1
    // add r2, r0, #0
    // bl ov13_022228CC
    // cmp r0, #0
    // beq _02220C4A
    // mov r0, #0xc
    // bl ov13_022214AC
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov13_02221428
    // mov r3, #0x11
    // ldr r2, [sp, #8]
    // lsl r3, r3, #4
    // mov r0, #3
    // add r1, sp, #0xb0
    // add r2, r2, r3
    // bl ov13_022217A0
    // mov r0, #2
    // add r1, r0, #0
    // mov r2, #0
    // bl ov13_02222A00
    // ldr r1, _02220D6C ; =ov13_022459B4
    // cmp r0, #0
    // str r0, [r1]
    // bge _02220C84
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #4
    // str r1, [sp]
    // ldr r1, _02220D70 ; =0x0000FFFF
    // mov r2, #1
    // add r3, sp, #0x54
    // bl ov13_022229FC
    // cmp r0, #0
    // bge _02220CB0
    // mov r0, #0xb
    // bl ov13_022214AC
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #0x2c
    // mov r1, #0
    // mov r2, #8
    // bl ov13_02222978
    // mov r1, #2
    // add r0, sp, #0x2c
    // strb r1, [r0, #1]
    // ldr r0, _02220D68 ; =0xC0A80B65
    // bl ov13_02222A1C
    // str r0, [sp, #0x30]
    // ldr r0, _02220D74 ; =0x00005790
    // bl ov13_02222A44
    // add r1, sp, #0x2c
    // strh r0, [r1, #2]
    // ldr r0, _02220D6C ; =ov13_022459B4
    // add r1, sp, #0x2c
    // ldr r0, [r0]
    // mov r2, #8
    // bl ov13_02222A08
    // cmp r0, #0
    // bge _02220CF6
    // ldr r1, _02220D60 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02220D5C ; =_0224CF98
    // mov r1, #0
    // ldr r0, [r0, #0x14]
    // mov r2, #0x14
    // str r0, [sp, #0x18]
    // add r0, sp, #0x60
    // bl ov13_02222978
    // ldr r0, _02220D68 ; =0xC0A80B65
    // mov r1, #0xfa
    // str r0, [sp, #0x70]
    // sub r0, #0x64
    // str r0, [sp, #0x60]
    // ldr r0, [sp, #0xc]
    // lsl r1, r1, #2
    // bl _s32_div_f
    // str r0, [sp, #0x14]
    // mov r1, #0xfa
    // ldr r0, [sp, #0xc]
    // lsl r1, r1, #2
    // bl _s32_div_f
    // mov r0, #0xfa
    // lsl r0, r0, #2
    // mul r0, r1
    // str r0, [sp, #0x10]
    // mov r1, #0x30
    // add r0, sp, #0x2c
    // ldrsh r7, [r0, r1]
    // ldr r5, _02220D5C ; =_0224CF98
    // ldr r0, [sp, #0x24]
    // cmp r0, #1
    // bne _02220D44
    // ldr r1, _02220D78 ; =ov13_0224CFB8
    // mov r0, #0x1c
    // ldrsb r0, [r1, r0]
    // cmp r0, #1
    // bne _02220D46
    // b _02220FC0
    // ldr r0, _02220D6C ; =ov13_022459B4
    // b _02220D7C
    // nop
    // _02220D4C: .word _0224267C
    // _02220D50: .word 0x00000106
    // _02220D54: .word 0x0000010A
    // _02220D58: .word 0x0000010E
    // _02220D5C: .word _0224CF98
    // _02220D60: .word 0x00000116
    // _02220D64: .word ov13_0224CF9C
    // _02220D68: .word 0xC0A80B65
    // _02220D6C: .word ov13_022459B4
    // _02220D70: .word 0x0000FFFF
    // _02220D74: .word 0x00005790
    // _02220D78: .word ov13_0224CFB8
    // mov r1, #0
    // ldr r0, [r0]
    // mvn r1, r1
    // cmp r0, r1
    // beq _02220D8A
    // bl ov13_02222A14
    // mov r1, #0
    // ldr r0, _022210BC ; =ov13_022459B4
    // mvn r1, r1
    // str r1, [r0]
    // bl ov13_02222924
    // cmp r0, #0
    // beq _02220DAE
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x58
    // bl ov13_022208E8
    // str r0, [r5, #4]
    // cmp r0, #0
    // bne _02220DCE
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _02220DDC
    // bl ov13_022208F8
    // mov r0, #0
    // str r0, [r5, #4]
    // ldr r0, _022210C4 ; =ov13_0224CF9C
    // bl ov13_02222DB0
    // mov r1, #0
    // mvn r1, r1
    // str r0, [sp, #0x28]
    // cmp r0, r1
    // bne _02220E00
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #4]
    // bl ov13_022216E0
    // cmp r0, #4
    // bne _02220E1E
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #2
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0
    // beq _02220E48
    // cmp r4, r7
    // blt _02220E3A
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #1
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov13_022230F8
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _02220DCE
    // mov r0, #0
    // ldr r1, [sp, #0x28]
    // mvn r0, r0
    // cmp r1, r0
    // bne _02220E66
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x58
    // bl ov13_022208E8
    // str r0, [r5, #0xc]
    // cmp r0, #0
    // bne _02220E86
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // mov r2, #0x58
    // bl ov13_02222978
    // mov r4, #0
    // cmp r7, #0
    // ble _02220ED6
    // ldr r1, [r5, #0xc]
    // add r0, sp, #0x74
    // bl ov13_02222F28
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02220EB8
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0
    // bne _02220EC6
    // bne _02220ED6
    // ldr r0, [r5, #0xc]
    // ldr r0, [r0]
    // cmp r0, #1
    // beq _02220ED6
    // add r0, r6, #0
    // bl ov13_022230F8
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r4, r7
    // blt _02220E94
    // cmp r4, r7
    // bne _02220EEE
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x34]
    // ldr r1, [r5, #0x38]
    // bl ov13_02221410
    // ldr r1, [r5, #0x38]
    // add r2, r0, #0
    // str r0, [sp, #0x1c]
    // bl ov13_022228CC
    // cmp r0, #0
    // beq _02220F1E
    // mov r0, #0xc
    // bl ov13_022214AC
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _022210C8 ; =ov13_0224CFB8
    // mov r1, #1
    // strb r1, [r0, #0x1c]
    // bl ov13_02221428
    // mov r0, #2
    // add r1, r0, #0
    // mov r2, #0
    // bl ov13_02222A00
    // ldr r1, _022210BC ; =ov13_022459B4
    // cmp r0, #0
    // str r0, [r1]
    // bge _02220F4E
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #4
    // str r1, [sp]
    // ldr r1, _022210CC ; =0x0000FFFF
    // mov r2, #1
    // add r3, sp, #0x54
    // bl ov13_022229FC
    // cmp r0, #0
    // bge _02220F7A
    // mov r0, #0xb
    // bl ov13_022214AC
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #0x2c
    // mov r1, #0
    // mov r2, #8
    // bl ov13_02222978
    // mov r1, #2
    // add r0, sp, #0x2c
    // strb r1, [r0, #1]
    // ldr r0, [sp, #0x1c]
    // bl ov13_02222A1C
    // str r0, [sp, #0x30]
    // ldr r0, _022210D0 ; =0x00005790
    // bl ov13_02222A44
    // add r1, sp, #0x2c
    // strh r0, [r1, #2]
    // ldr r0, _022210BC ; =ov13_022459B4
    // add r1, sp, #0x2c
    // ldr r0, [r0]
    // mov r2, #8
    // bl ov13_02222A08
    // cmp r0, #0
    // bge _02220FC0
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r3, _022210BC ; =ov13_022459B4
    // ldr r0, [sp, #0x24]
    // ldr r3, [r3]
    // add r1, sp, #0x60
    // add r2, sp, #0xb0
    // bl ov13_022220B4
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02220FF6
    // mov r1, #1
    // ldr r0, [sp, #0x24]
    // lsl r1, r1, #0xc
    // add r0, r0, r1
    // bl ov13_022214AC
    // ldr r1, _022210C0 ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x18]
    // ldr r2, _022210D4 ; =0x000005F8
    // mov r1, #0
    // bl ov13_02222978
    // add r0, sp, #0x3c
    // bl ov13_02222B20
    // ldr r0, _022210BC ; =ov13_022459B4
    // add r1, sp, #0x3c
    // ldr r0, [r0]
    // bl ov13_02222B2C
    // ldr r0, [sp, #0x14]
    // mov r2, #0
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #0x10]
    // add r1, sp, #0x3c
    // str r0, [sp, #0x38]
    // add r0, sp, #0x34
    // str r0, [sp]
    // ldr r0, _022210BC ; =ov13_022459B4
    // add r3, r2, #0
    // ldr r0, [r0]
    // add r0, r0, #1
    // bl ov13_02222998
    // cmp r0, #0
    // bgt _02221070
    // ldr r0, [sp, #0x50]
    // add r1, sp, #0x2c
    // add r2, r0, #1
    // str r2, [sp, #0x50]
    // mov r0, #0x2c
    // ldrsh r0, [r1, r0]
    // cmp r2, r0
    // ble _02221066
    // ldr r0, [sp, #0x24]
    // cmp r0, #0
    // bne _0222104E
    // mov r0, #0xf
    // bl ov13_022214AC
    // b _02221060
    // cmp r0, #1
    // bne _0222105A
    // mov r0, #0x10
    // bl ov13_022214AC
    // b _02221060
    // mov r0, #0x11
    // bl ov13_022214AC
    // mov r5, #0
    // mvn r5, r5
    // b _0222134E
    // mov r0, #0x2e
    // ldrsh r0, [r1, r0]
    // bl ov13_022230F8
    // b _02220D34
    // mov r0, #8
    // str r0, [sp, #0x44]
    // add r0, sp, #0x48
    // str r0, [sp]
    // add r0, sp, #0x44
    // str r0, [sp, #4]
    // ldr r0, _022210BC ; =ov13_022459B4
    // ldr r1, [sp, #0x18]
    // ldr r0, [r0]
    // ldr r2, _022210D8 ; =0x000005DC
    // add r1, #0xc
    // mov r3, #0
    // bl ov13_02222984
    // ldr r1, _022210BC ; =ov13_022459B4
    // lsl r0, r0, #0x10
    // ldr r2, [r1]
    // ldr r1, [sp, #0x18]
    // lsr r0, r0, #0x10
    // str r2, [r1]
    // bl ov13_02222A84
    // ldr r1, [sp, #0x18]
    // add r2, sp, #0x50
    // str r0, [r1, #4]
    // ldr r0, _022210BC ; =ov13_022459B4
    // add r3, sp, #0xb0
    // ldr r0, [r0]
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // bl ov13_022217FC
    // str r0, [sp, #0x20]
    // cmp r0, #0x64
    // bne _022210DC
    // mov r5, #0
    // b _0222134E
    // nop
    // _022210BC: .word ov13_022459B4
    // _022210C0: .word 0x00000116
    // _022210C4: .word ov13_0224CF9C
    // _022210C8: .word ov13_0224CFB8
    // _022210CC: .word 0x0000FFFF
    // _022210D0: .word 0x00005790
    // _022210D4: .word 0x000005F8
    // _022210D8: .word 0x000005DC
    // mov r5, #0
    // mvn r5, r5
    // cmp r0, r5
    // bne _022210E6
    // b _0222134E
    // ldr r1, [sp, #0x24]
    // cmp r1, r0
    // bne _022210EE
    // b _02221310
    // cmp r0, #2
    // beq _022210F4
    // b _0222130A
    // ldr r0, _022213F8 ; =ov13_022459B4
    // ldr r0, [r0]
    // cmp r0, r5
    // beq _02221100
    // bl ov13_02222A14
    // mov r1, #0
    // ldr r0, _022213F8 ; =ov13_022459B4
    // mvn r1, r1
    // str r1, [r0]
    // bl ov13_02222924
    // cmp r0, #0
    // beq _02221124
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #4
    // mov r4, #0
    // bl ov13_022217D0
    // add r1, sp, #0x2c
    // mov r0, #0x30
    // ldrsh r7, [r1, r0]
    // ldr r5, _02221400 ; =_0224CF98
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _02221142
    // bl ov13_022208F8
    // mov r0, #0
    // str r0, [r5, #4]
    // ldr r0, _02221404 ; =ov13_0224CF9C
    // bl ov13_02222DB0
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02221164
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #4]
    // bl ov13_022216E0
    // cmp r0, #4
    // bne _02221182
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #2
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0
    // beq _022211AC
    // cmp r4, r7
    // blt _0222119E
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #1
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov13_022230F8
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // b _02221134
    // mov r0, #0x58
    // bl ov13_022208E8
    // ldr r1, _02221400 ; =_0224CF98
    // cmp r0, #0
    // str r0, [r1, #0xc]
    // bne _022211CE
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // mov r2, #0x58
    // bl ov13_02222978
    // add r1, sp, #0x2c
    // mov r0, #0x30
    // ldrsh r5, [r1, r0]
    // mov r4, #0
    // cmp r5, #0
    // ble _02221226
    // ldr r7, _02221400 ; =_0224CF98
    // ldr r1, [r7, #0xc]
    // add r0, sp, #0x74
    // bl ov13_02222F28
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02221208
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0
    // bne _02221216
    // bne _02221226
    // ldr r0, [r7, #0xc]
    // ldr r0, [r0]
    // cmp r0, #1
    // beq _02221226
    // add r0, r6, #0
    // bl ov13_022230F8
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r4, r5
    // blt _022211E4
    // add r0, sp, #0x2c
    // mov r1, #0x30
    // ldrsh r0, [r0, r1]
    // cmp r4, r0
    // bne _02221244
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // add r1, #0xe6
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _02221400 ; =_0224CF98
    // ldr r0, [sp, #0x1c]
    // ldr r1, [r1, #0x38]
    // add r2, r0, #0
    // bl ov13_022228CC
    // cmp r0, #0
    // beq _0222126E
    // mov r0, #0xc
    // bl ov13_022214AC
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov13_02221428
    // mov r0, #2
    // add r1, r0, #0
    // mov r2, #0
    // bl ov13_02222A00
    // ldr r1, _022213F8 ; =ov13_022459B4
    // cmp r0, #0
    // str r0, [r1]
    // bge _02221298
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #4
    // str r1, [sp]
    // ldr r1, _02221408 ; =0x0000FFFF
    // mov r2, #1
    // add r3, sp, #0x54
    // bl ov13_022229FC
    // cmp r0, #0
    // bge _022212C4
    // mov r0, #0xb
    // bl ov13_022214AC
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #0x2c
    // mov r1, #0
    // mov r2, #8
    // bl ov13_02222978
    // mov r1, #2
    // add r0, sp, #0x2c
    // strb r1, [r0, #1]
    // ldr r0, [sp, #0x1c]
    // bl ov13_02222A1C
    // str r0, [sp, #0x30]
    // ldr r0, _0222140C ; =0x00005790
    // bl ov13_02222A44
    // add r1, sp, #0x2c
    // strh r0, [r1, #2]
    // ldr r0, _022213F8 ; =ov13_022459B4
    // add r1, sp, #0x2c
    // ldr r0, [r0]
    // mov r2, #8
    // bl ov13_02222A08
    // cmp r0, #0
    // bge _0222130A
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    // b _02220CF6
    // str r0, [sp, #0x24]
    // add r1, sp, #0x2c
    // mov r0, #0x2c
    // ldrsh r0, [r1, r0]
    // ldr r2, [sp, #0x50]
    // cmp r2, r0
    // ble _02221344
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // bne _0222132C
    // mov r0, #0xf
    // bl ov13_022214AC
    // b _0222133E
    // cmp r0, #1
    // bne _02221338
    // mov r0, #0x10
    // bl ov13_022214AC
    // b _0222133E
    // mov r0, #0x11
    // bl ov13_022214AC
    // mov r5, #0
    // mvn r5, r5
    // b _0222134E
    // mov r0, #0x2e
    // ldrsh r0, [r1, r0]
    // bl ov13_022230F8
    // b _02220CF6
    // ldr r0, _022213F8 ; =ov13_022459B4
    // mov r1, #0
    // ldr r0, [r0]
    // mvn r1, r1
    // cmp r0, r1
    // beq _0222135E
    // bl ov13_02222A14
    // mov r1, #0
    // ldr r0, _022213F8 ; =ov13_022459B4
    // mvn r1, r1
    // str r1, [r0]
    // bl ov13_02222924
    // cmp r0, #0
    // beq _02221382
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #0xf
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #0
    // beq _022213D2
    // bl ov13_022214B8
    // sub r0, #0xf
    // cmp r0, #6
    // bhi _022213BE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222139C: ; jump table
    // mov r2, #3
    // b _022213C0
    // mov r2, #4
    // b _022213C0
    // mov r2, #5
    // b _022213C0
    // mov r2, #7
    // b _022213C0
    // mov r2, #8
    // b _022213C0
    // mov r2, #0xf
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // bl ov13_022214C4
    // cmp r0, #0
    // beq _022213F0
    // ldr r1, _022213FC ; =0x00000116
    // ldr r0, [sp, #8]
    // mov r2, #6
    // strb r2, [r0, r1]
    // bl ov13_02221428
    // mov r0, #0
    // add sp, #0xc8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0xc8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022213F8: .word ov13_022459B4
    // _022213FC: .word 0x00000116
    // _02221400: .word _0224CF98
    // _02221404: .word ov13_0224CF9C
    // _02221408: .word 0x0000FFFF
    // _0222140C: .word 0x00005790
    // TODO: decompile
}


void ov13_02221410(void) {
    // add r2, r0, #0
    // and r2, r1
    // mvn r1, r1
    // and r0, r1
    // add r0, r0, #1
    // orr r0, r2
    // orr r1, r2
    // cmp r0, r1
    // blo _02221426
    // mov r0, #1
    // orr r0, r2
    // bx lr
    // TODO: decompile
}


void ov13_02221428(void) {
    // push {r3, lr}
    // ldr r0, _02221450 ; =_0224CF98
    // ldr r0, [r0, #0xc]
    // cmp r0, #0
    // beq _0222143C
    // bl ov13_022208F8
    // ldr r0, _02221450 ; =_0224CF98
    // mov r1, #0
    // str r1, [r0, #0xc]
    // ldr r0, _02221450 ; =_0224CF98
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _0222144E
    // bl ov13_022208F8
    // ldr r0, _02221450 ; =_0224CF98
    // mov r1, #0
    // str r1, [r0, #4]
    // pop {r3, pc}
    // _02221450: .word _0224CF98
    // TODO: decompile
}


void ov13_02221454(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02221498 ; =ov13_0224DCF8
    // mov r1, #0
    // mov r2, #8
    // bl ov13_02222978
    // ldr r0, _0222149C ; =_0224CF98
    // mov r1, #1
    // str r1, [r0, #0x10]
    // ldr r0, _022214A0 ; =ov13_0224CFBC
    // mov r1, #0
    // mov r2, #0x1c
    // bl ov13_02222978
    // ldr r1, _0222149C ; =_0224CF98
    // add r0, r4, #6
    // str r0, [r1, #0x24]
    // ldrh r0, [r4, #4]
    // mov r3, #0
    // str r0, [r1, #0x28]
    // ldrh r2, [r4]
    // mov r0, #0xf
    // and r0, r2
    // str r0, [r1, #0x2c]
    // ldrb r2, [r4, #2]
    // ldr r0, _022214A4 ; =ov13_0224CFB8
    // strb r2, [r0, #0x1d]
    // ldr r2, _022214A8 ; =0xC0A80B01
    // str r3, [r1, #0x30]
    // str r2, [r1, #0x34]
    // strb r3, [r0, #0x1c]
    // pop {r4, pc}
    // nop
    // _02221498: .word ov13_0224DCF8
    // _0222149C: .word _0224CF98
    // _022214A0: .word ov13_0224CFBC
    // _022214A4: .word ov13_0224CFB8
    // _022214A8: .word 0xC0A80B01
    // TODO: decompile
}


void ov13_022214AC(void) {
    // ldr r1, _022214B4 ; =_0224CF98
    // str r0, [r1, #0x10]
    // bx lr
    // nop
    // _022214B4: .word _0224CF98
    // TODO: decompile
}


void ov13_022214B8(void) {
    // ldr r0, _022214C0 ; =_0224CF98
    // ldr r0, [r0, #0x10]
    // bx lr
    // nop
    // _022214C0: .word _0224CF98
    // TODO: decompile
}


void ov13_022214C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r0, #0
    // ldr r0, _0222169C ; =ov13_0224D8C0
    // ldr r2, _022216A0 ; =0x00000117
    // str r0, [sp, #4]
    // ldr r0, _022216A4 ; =ov13_0224D930
    // add r4, r7, r2
    // ldr r6, _022216A8 ; =ov13_0224D660
    // ldr r5, _022216AC ; =ov13_0224D790
    // str r0, [sp]
    // bne _022214E4
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _022216B0 ; =_0224CF98
    // add r2, #0x3d
    // ldr r0, [r1, #0x2c]
    // ldr r1, [r1, #0x30]
    // and r0, r1
    // strh r0, [r7]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov13_02222978
    // ldrh r1, [r7]
    // mov r0, #1
    // tst r0, r1
    // beq _02221562
    // add r1, r6, #0
    // ldr r2, [r6, #4]
    // add r0, r4, #0
    // add r1, #0x30
    // bl ov13_02222968
    // add r1, r6, #0
    // ldr r2, [r6, #4]
    // add r0, r4, #6
    // add r1, #0x70
    // bl ov13_02222968
    // add r0, r4, #0
    // add r1, r6, #0
    // ldr r2, [r6, #4]
    // add r0, #0xc
    // add r1, #0xb0
    // bl ov13_02222968
    // add r0, r4, #0
    // add r1, r6, #0
    // ldr r2, [r6, #4]
    // add r0, #0x12
    // add r1, #0xf0
    // bl ov13_02222968
    // add r0, r6, #0
    // add r0, #8
    // bl ov13_02222A9C
    // add r1, r0, #0
    // add r0, r6, #0
    // add r0, #8
    // bl ov13_022216BC
    // cmp r0, #0
    // beq _0222154C
    // b _02221688
    // add r0, r6, #0
    // add r0, #8
    // bl ov13_02222A9C
    // add r2, r0, #0
    // add r0, r4, #0
    // add r6, #8
    // add r0, #0x18
    // add r1, r6, #0
    // bl ov13_02222968
    // ldrh r1, [r7]
    // mov r0, #2
    // tst r0, r1
    // beq _022215CE
    // add r0, r4, #0
    // add r1, r5, #0
    // ldr r2, [r5, #4]
    // add r0, #0x39
    // add r1, #0x30
    // bl ov13_02222968
    // add r0, r4, #0
    // add r1, r5, #0
    // ldr r2, [r5, #4]
    // add r0, #0x47
    // add r1, #0x70
    // bl ov13_02222968
    // add r0, r4, #0
    // add r1, r5, #0
    // ldr r2, [r5, #4]
    // add r0, #0x55
    // add r1, #0xb0
    // bl ov13_02222968
    // add r0, r4, #0
    // add r1, r5, #0
    // ldr r2, [r5, #4]
    // add r0, #0x63
    // add r1, #0xf0
    // bl ov13_02222968
    // add r0, r5, #0
    // add r0, #8
    // bl ov13_02222A9C
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #8
    // bl ov13_022216BC
    // cmp r0, #0
    // bne _02221688
    // add r0, r5, #0
    // add r0, #8
    // bl ov13_02222A9C
    // add r2, r0, #0
    // add r0, r4, #0
    // add r5, #8
    // add r0, #0x71
    // add r1, r5, #0
    // bl ov13_02222968
    // ldrh r1, [r7]
    // mov r0, #4
    // tst r0, r1
    // beq _02221626
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #4]
    // ldr r1, [r1, #4]
    // add r0, #0x30
    // sub r1, r1, #1
    // bl ov13_022216BC
    // cmp r0, #0
    // bne _02221688
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // ldr r2, [r2, #4]
    // add r0, #0x92
    // add r1, #0x30
    // bl ov13_02222968
    // ldr r0, [sp, #4]
    // add r0, #8
    // bl ov13_02222A9C
    // add r1, r0, #0
    // ldr r0, [sp, #4]
    // add r0, #8
    // bl ov13_022216BC
    // cmp r0, #0
    // bne _02221688
    // ldr r0, [sp, #4]
    // add r0, #8
    // bl ov13_02222A9C
    // ldr r1, [sp, #4]
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, #8
    // add r0, #0xd2
    // str r1, [sp, #4]
    // bl ov13_02222968
    // ldrh r1, [r7]
    // mov r0, #8
    // tst r0, r1
    // beq _0222167E
    // ldr r1, [sp]
    // ldr r0, [sp]
    // ldr r1, [r1, #4]
    // add r0, #0x30
    // sub r1, r1, #1
    // bl ov13_022216BC
    // cmp r0, #0
    // bne _02221688
    // ldr r2, [sp]
    // ldr r1, [sp]
    // add r0, r4, #0
    // ldr r2, [r2, #4]
    // add r0, #0xf3
    // add r1, #0x30
    // bl ov13_02222968
    // ldr r0, [sp]
    // add r0, #8
    // bl ov13_02222A9C
    // add r1, r0, #0
    // ldr r0, [sp]
    // add r0, #8
    // bl ov13_022216BC
    // cmp r0, #0
    // bne _02221688
    // ldr r0, [sp]
    // add r0, #8
    // bl ov13_02222A9C
    // add r2, r0, #0
    // ldr r0, _022216B4 ; =0x00000133
    // ldr r1, [sp]
    // add r0, r4, r0
    // add r1, #8
    // str r1, [sp]
    // bl ov13_02222968
    // ldr r1, _022216B8 ; =0x00000116
    // mov r0, #0
    // add sp, #8
    // strb r0, [r7, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0x55
    // add r0, r4, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // bl ov13_02222978
    // mov r0, #0
    // mvn r0, r0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0222169C: .word ov13_0224D8C0
    // _022216A0: .word 0x00000117
    // _022216A4: .word ov13_0224D930
    // _022216A8: .word ov13_0224D660
    // _022216AC: .word ov13_0224D790
    // _022216B0: .word _0224CF98
    // _022216B4: .word 0x00000133
    // _022216B8: .word 0x00000116
    // TODO: decompile
}


void ov13_022216BC(void) {
    // mov r3, #0
    // cmp r1, #0
    // ble _022216DA
    // ldrb r2, [r0]
    // add r0, r0, #1
    // cmp r2, #0x20
    // blo _022216CE
    // cmp r2, #0x7f
    // bls _022216D4
    // mov r0, #0
    // mvn r0, r0
    // bx lr
    // add r3, r3, #1
    // cmp r3, r1
    // blt _022216C2
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov13_022216E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5]
    // mov r4, #0
    // str r4, [sp, #4]
    // str r0, [sp]
    // cmp r0, #0
    // bne _022216F8
    // add sp, #8
    // mov r0, #5
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0x40
    // bls _02221700
    // mov r0, #0x40
    // str r0, [sp]
    // ldr r0, [sp]
    // mov r7, #0
    // cmp r0, #0
    // ble _02221742
    // add r6, r5, #0
    // add r6, #8
    // ldr r1, [r5, #0x54]
    // mov r0, #1
    // tst r0, r1
    // beq _02221736
    // ldr r0, _02221758 ; =ov13_02245A14
    // bl ov13_02222A9C
    // ldr r1, [r5, #4]
    // cmp r1, r0
    // bne _02221736
    // ldr r0, _02221758 ; =ov13_02245A14
    // bl ov13_02222A9C
    // add r2, r0, #0
    // ldr r1, _02221758 ; =ov13_02245A14
    // add r0, r6, #0
    // bl ov13_02222948
    // cmp r0, #0
    // bne _02221736
    // add r4, r4, #1
    // ldr r0, [sp]
    // add r7, r7, #1
    // add r5, #0x54
    // add r6, #0x54
    // cmp r7, r0
    // blt _0222170C
    // cmp r4, #1
    // ble _0222174A
    // mov r0, #4
    // str r0, [sp, #4]
    // cmp r4, #0
    // bne _02221752
    // mov r0, #5
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02221758: .word ov13_02245A14
    // TODO: decompile
}


void ov13_0222175C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02221798 ; =ov13_02245A14
    // bl ov13_02222A9C
    // str r0, [r4]
    // ldr r1, _02221798 ; =ov13_02245A14
    // ldr r2, [r4]
    // add r0, r4, #4
    // bl ov13_02222968
    // mov r0, #1
    // str r0, [r4, #0x24]
    // ldr r0, _0222179C ; =ov13_02245A20
    // bl ov13_02222A9C
    // add r2, r0, #0
    // str r0, [r4, #0x28]
    // cmp r2, #0xd
    // bls _0222178A
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // add r4, #0x2c
    // ldr r1, _0222179C ; =ov13_02245A20
    // add r0, r4, #0
    // bl ov13_02222968
    // mov r0, #0
    // pop {r4, pc}
    // _02221798: .word ov13_02245A14
    // _0222179C: .word ov13_02245A20
    // TODO: decompile
}


void ov13_022217A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r7, r2, #0
    // mov r4, #0
    // cmp r6, #0
    // ble _022217CE
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #6
    // bl ov13_02222968
    // bl ov13_02222AB0
    // strh r0, [r5, #6]
    // ldrh r0, [r5, #6]
    // bl ov13_02222A44
    // strh r0, [r5, #6]
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, r6
    // blt _022217AE
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_022217D0(void) {
    // push {r3, lr}
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _022217E2
    // ldr r1, _022217F8 ; =ov13_022459B4
    // str r0, [r1, #4]
    // mov r0, #0
    // pop {r3, pc}
    // ldr r1, _022217F8 ; =ov13_022459B4
    // ldr r2, [r1, #4]
    // cmp r2, r0
    // beq _022217F2
    // str r0, [r1, #4]
    // bl ov13_02223100
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _022217F8: .word ov13_022459B4
    // TODO: decompile
}


void ov13_022217FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // ldrh r0, [r6, #0xc]
    // add r7, r6, #0
    // add r4, r2, #0
    // str r3, [sp]
    // add r7, #0xc
    // bl ov13_02222A84
    // cmp r0, #1
    // bhs _0222181E
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r7, #0xf]
    // cmp r0, #0x11
    // beq _0222182E
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // add r0, #0xc
    // bl ov13_02221AF4
    // cmp r0, #0
    // ble _02221844
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r7, #6]
    // bl ov13_02222A84
    // ldr r1, _02221890 ; =0x00001010
    // cmp r0, r1
    // beq _0222185E
    // ldr r1, _02221894 ; =0x00002010
    // cmp r0, r1
    // beq _0222186E
    // ldr r1, _02221898 ; =0x00003010
    // cmp r0, r1
    // beq _0222187E
    // b _0222188C
    // ldr r3, [sp]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov13_0222189C
    // add r5, r0, #0
    // b _0222188C
    // ldr r3, [sp]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov13_02221978
    // add r5, r0, #0
    // b _0222188C
    // ldr r3, [sp]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov13_02221A50
    // add r5, r0, #0
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02221890: .word 0x00001010
    // _02221894: .word 0x00002010
    // _02221898: .word 0x00003010
    // TODO: decompile
}


void ov13_0222189C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r2, #0
    // cmp r6, #0
    // beq _022218AE
    // ldr r1, [r5]
    // add r1, r1, #1
    // str r1, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r7, r1, #0
    // add r7, #0xc
    // add r4, r1, #0
    // add r1, r7, #0
    // add r0, r3, #0
    // add r1, #0x10
    // add r4, #0x24
    // bl ov13_02221C2C
    // cmp r0, #0
    // bge _022218CE
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r4, #2]
    // bl ov13_02222A84
    // cmp r0, #0
    // bne _022218E2
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4]
    // cmp r0, #7
    // bne _02221920
    // ldr r0, [r4, #4]
    // bl ov13_02222A5C
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // bne _022218FE
    // mov r0, #0x14
    // bl ov13_022214AC
    // b _0222191A
    // ldr r0, [r4, #4]
    // bl ov13_02222A5C
    // mov r1, #2
    // mvn r1, r1
    // cmp r0, r1
    // bne _02221914
    // mov r0, #0x15
    // bl ov13_022214AC
    // b _0222191A
    // mov r0, #0x18
    // bl ov13_022214AC
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #1
    // beq _0222192E
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, _02221970 ; =ov13_0224CFD8
    // add r0, r4, #4
    // bl ov13_02221C78
    // cmp r0, #0
    // bge _02221958
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // bne _0222194E
    // mov r0, #0x16
    // bl ov13_022214AC
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r7, #0xc]
    // bl ov13_02222A84
    // bl ov13_022220A4
    // ldr r1, _02221974 ; =_0224CF98
    // str r0, [r1]
    // mov r0, #0
    // str r0, [r5]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02221970: .word ov13_0224CFD8
    // _02221974: .word _0224CF98
    // TODO: decompile
}


void ov13_02221978(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r2, #0
    // cmp r6, #1
    // beq _0222198A
    // ldr r1, [r5]
    // add r1, r1, #1
    // str r1, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r7, r1, #0
    // add r7, #0xc
    // add r4, r1, #0
    // add r3, #8
    // add r1, r7, #0
    // add r0, r3, #0
    // add r1, #0x10
    // add r4, #0x24
    // bl ov13_02221C2C
    // cmp r0, #0
    // bge _022219AC
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r4, #2]
    // bl ov13_02222A84
    // cmp r0, #0
    // bne _022219C0
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4]
    // cmp r0, #7
    // bne _022219FE
    // ldr r0, [r4, #4]
    // bl ov13_02222A5C
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // bne _022219DC
    // mov r0, #0x14
    // bl ov13_022214AC
    // b _022219F8
    // ldr r0, [r4, #4]
    // bl ov13_02222A5C
    // mov r1, #2
    // mvn r1, r1
    // cmp r0, r1
    // bne _022219F2
    // mov r0, #0x15
    // bl ov13_022214AC
    // b _022219F8
    // mov r0, #0x18
    // bl ov13_022214AC
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0x6a
    // ldr r0, _02221A44 ; =ov13_0224D658
    // mov r1, #0
    // lsl r2, r2, #4
    // bl ov13_02222978
    // ldrh r0, [r7, #0xa]
    // bl ov13_02222A84
    // add r2, r0, #0
    // ldr r0, _02221A48 ; =ov13_0224CFD8
    // ldr r3, _02221A44 ; =ov13_0224D658
    // str r0, [sp]
    // mov r0, #0
    // add r1, r4, #0
    // bl ov13_02221F94
    // cmp r0, #0
    // bge _02221A2E
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02221A4C ; =_0224CF98
    // ldr r1, [r0, #0x30]
    // ldr r0, [r0, #0x2c]
    // tst r0, r1
    // bne _02221A3C
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [r5]
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // _02221A44: .word ov13_0224D658
    // _02221A48: .word ov13_0224CFD8
    // _02221A4C: .word _0224CF98
    // TODO: decompile
}


void ov13_02221A50(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r2, #0
    // cmp r6, #2
    // beq _02221A62
    // ldr r1, [r5]
    // add r1, r1, #1
    // str r1, [r5]
    // pop {r4, r5, r6, pc}
    // add r4, r1, #0
    // add r3, #0x10
    // add r1, #0xc
    // add r0, r3, #0
    // add r1, #0x10
    // add r4, #0x24
    // bl ov13_02221C2C
    // cmp r0, #0
    // bge _02221A80
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // ldrb r0, [r4]
    // cmp r0, #7
    // beq _02221A90
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // ldrh r0, [r4, #2]
    // bl ov13_02222A84
    // cmp r0, #0
    // bne _02221AA4
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #4]
    // bl ov13_02222A5C
    // cmp r0, #0
    // bne _02221AB2
    // mov r0, #0x64
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #4]
    // bl ov13_02222A5C
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // bne _02221ACC
    // mov r0, #0x14
    // bl ov13_022214AC
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #4]
    // bl ov13_02222A5C
    // mov r1, #2
    // mvn r1, r1
    // cmp r0, r1
    // bne _02221AE6
    // mov r0, #0x15
    // bl ov13_022214AC
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // mov r0, #0x18
    // bl ov13_022214AC
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov13_02221AF4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r1, r5, #0
    // add r4, r5, #0
    // add r0, sp, #0xc
    // add r1, #0x10
    // mov r2, #8
    // add r4, #0x18
    // bl ov13_02222968
    // ldr r0, _02221BE0 ; =ov13_02245A20
    // bl ov13_02222A9C
    // add r3, r0, #0
    // ldr r2, _02221BE0 ; =ov13_02245A20
    // add r0, sp, #0xc
    // mov r1, #8
    // bl ov13_022227A0
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02221B32
    // mov r0, #2
    // bl ov13_022214AC
    // mov r0, #0x63
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // ldrh r0, [r5, #6]
    // bl ov13_02222A84
    // add r1, sp, #0xc
    // bl ov13_02221BE8
    // cmp r0, #0
    // bne _02221BDA
    // ldrh r0, [r5, #6]
    // bl ov13_02222A84
    // mov r1, #1
    // lsl r1, r1, #0xc
    // cmp r0, r1
    // bne _02221B5A
    // ldr r0, _02221BE4 ; =ov13_0224DCF8
    // add r1, sp, #0xc
    // mov r2, #8
    // bl ov13_02222968
    // ldrh r0, [r5, #0xc]
    // bl ov13_02222A84
    // mov r1, #0xf
    // tst r0, r1
    // bne _02221B6C
    // add sp, #0x14
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // ldrh r0, [r4]
    // bl ov13_02222A84
    // add r6, r0, #0
    // bl ov13_022208E8
    // add r7, r0, #0
    // bne _02221B88
    // mov r0, #2
    // bl ov13_022214AC
    // add sp, #0x14
    // mov r0, #0x64
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #2
    // str r0, [sp]
    // ldr r0, _02221BE4 ; =ov13_0224DCF8
    // add r1, r7, #0
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // ldrb r3, [r5, #0xe]
    // add r0, r4, #4
    // add r2, r6, #0
    // bl ov13_022225B0
    // cmp r0, #0
    // bge _02221BBE
    // add r0, r7, #0
    // bl ov13_022208F8
    // bl ov13_022214B8
    // cmp r0, #2
    // bne _02221BB8
    // add sp, #0x14
    // mov r0, #0x64
    // pop {r4, r5, r6, r7, pc}
    // add sp, #0x14
    // mov r0, #0xc8
    // pop {r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r6, #0
    // bl ov13_02222968
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // bl ov13_02222A44
    // strh r0, [r5, #0xa]
    // add r0, r7, #0
    // bl ov13_022208F8
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02221BE0: .word ov13_02245A20
    // _02221BE4: .word ov13_0224DCF8
    // TODO: decompile
}


void ov13_02221BE8(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #0
    // ldr r6, _02221C28 ; =ov13_0224DCF8
    // add r5, r4, #0
    // add r3, r4, #0
    // ldrb r2, [r6]
    // cmp r2, #0
    // beq _02221BFC
    // mov r5, #1
    // b _02221C04
    // add r3, r3, #1
    // add r6, r6, #1
    // cmp r3, #6
    // blt _02221BF2
    // cmp r5, #0
    // beq _02221C18
    // ldr r0, _02221C28 ; =ov13_0224DCF8
    // mov r2, #6
    // bl ov13_02222948
    // cmp r0, #0
    // beq _02221C22
    // mov r4, #1
    // b _02221C22
    // mov r1, #1
    // lsl r1, r1, #0xc
    // cmp r0, r1
    // beq _02221C22
    // mov r4, #2
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _02221C28: .word ov13_0224DCF8
    // TODO: decompile
}


void ov13_02221C2C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _02221C74 ; =ov13_02245A20
    // add r5, r1, #0
    // mov r4, #0
    // bl ov13_02222A9C
    // add r3, r0, #0
    // ldr r2, _02221C74 ; =ov13_02245A20
    // add r0, r5, #0
    // mov r1, #8
    // bl ov13_022227A0
    // add r0, r6, #0
    // add r1, r5, #0
    // mov r2, #6
    // bl ov13_02222948
    // cmp r0, #0
    // beq _02221C58
    // sub r4, r4, #1
    // b _02221C6E
    // ldrh r0, [r6, #6]
    // bl ov13_02222A84
    // add r6, r0, #0
    // ldrh r0, [r5, #6]
    // bl ov13_02222A84
    // add r1, r6, #1
    // cmp r1, r0
    // beq _02221C6E
    // sub r4, r4, #2
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _02221C74: .word ov13_02245A20
    // TODO: decompile
}


void ov13_02221C78(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // mov r2, #0x41
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // bl ov13_02222978
    // add r7, r5, #0
    // add r4, r6, #0
    // add r7, #0x80
    // ldrh r0, [r4, #2]
    // bl ov13_02222A84
    // add r2, r0, #0
    // cmp r2, #0
    // bgt _02221CA2
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r0, [r4]
    // cmp r0, #6
    // bhi _02221D18
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221CB4: ; jump table
    // add r0, r5, #0
    // add r1, r4, #6
    // bl ov13_02222968
    // b _02221D1E
    // add r0, r7, #0
    // add r1, r4, #6
    // bl ov13_02222968
    // b _02221D1E
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r5, r0
    // add r1, r4, #6
    // bl ov13_02222968
    // b _02221D1E
    // ldrb r0, [r4, #6]
    // bl ov13_02222A84
    // cmp r0, #0
    // bgt _02221D1E
    // mov r0, #1
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #6
    // add r1, r2, #0
    // bl ov13_02221D34
    // bl ov13_02222A5C
    // ldr r1, _02221D30 ; =_0224CF98
    // str r0, [r1, #0x34]
    // b _02221D1E
    // add r0, r4, #6
    // add r1, r2, #0
    // bl ov13_02221D34
    // bl ov13_02222A5C
    // ldr r1, _02221D30 ; =_0224CF98
    // str r0, [r1, #0x38]
    // b _02221D1E
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r4, #4]
    // cmp r0, #0
    // beq _02221D2C
    // bl ov13_02222A84
    // add r4, r6, r0
    // b _02221C90
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02221D30: .word _0224CF98
    // TODO: decompile
}


void ov13_02221D34(void) {
    // push {r4, r5}
    // mov r3, #0
    // sub r2, r1, #1
    // add r5, r0, r2
    // add r4, r3, #0
    // cmp r1, #0
    // ble _02221D50
    // ldrb r0, [r5]
    // lsl r2, r3, #8
    // add r4, r4, #1
    // sub r5, r5, #1
    // add r3, r2, r0
    // cmp r4, r1
    // blt _02221D42
    // add r0, r3, #0
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov13_02221D58(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r1, #0
    // add r5, r0, #6
    // add r0, r6, #0
    // str r0, [sp, #0xc]
    // add r0, #8
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // str r0, [sp, #8]
    // add r0, #0xf0
    // str r0, [sp, #8]
    // add r0, r6, #0
    // str r0, [sp, #4]
    // add r0, #0xb0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // str r0, [sp]
    // add r0, #0x70
    // add r7, r6, #0
    // str r0, [sp]
    // add r7, #0x30
    // str r5, [sp, #0x10]
    // ldrh r0, [r5, #2]
    // bl ov13_02222A84
    // add r4, r0, #0
    // ldrb r0, [r5]
    // cmp r0, #0x21
    // bgt _02221DBE
    // bge _02221DDC
    // cmp r0, #0x15
    // bgt _02221DB8
    // add r1, r0, #0
    // sub r1, #0x10
    // bmi _02221DF4
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221DAC: ; jump table
    // cmp r0, #0x20
    // beq _02221DDC
    // b _02221DF4
    // cmp r0, #0x23
    // bgt _02221DCA
    // bge _02221DDC
    // cmp r0, #0x22
    // beq _02221DDC
    // b _02221DF4
    // cmp r0, #0x25
    // beq _02221DE8
    // b _02221DF4
    // cmp r4, #5
    // bls _02221DF4
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // cmp r4, #0xd
    // bls _02221DF4
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // cmp r4, #0x21
    // bls _02221DF4
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // cmp r0, #0x21
    // bgt _02221E22
    // bge _02221E42
    // cmp r0, #0x15
    // bgt _02221E1C
    // add r1, r0, #0
    // sub r1, #0x10
    // bmi _02221E8C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221E10: ; jump table
    // cmp r0, #0x20
    // beq _02221E34
    // b _02221E8C
    // cmp r0, #0x23
    // bgt _02221E2E
    // bge _02221E5E
    // cmp r0, #0x22
    // beq _02221E50
    // b _02221E8C
    // cmp r0, #0x25
    // beq _02221E6C
    // b _02221E8C
    // add r0, r7, #0
    // add r1, r5, #6
    // add r2, r4, #0
    // bl ov13_02222968
    // str r4, [r6, #4]
    // b _02221E94
    // ldr r0, [sp]
    // add r1, r5, #6
    // add r2, r4, #0
    // bl ov13_02222968
    // str r4, [r6, #4]
    // b _02221E94
    // ldr r0, [sp, #4]
    // add r1, r5, #6
    // add r2, r4, #0
    // bl ov13_02222968
    // str r4, [r6, #4]
    // b _02221E94
    // ldr r0, [sp, #8]
    // add r1, r5, #6
    // add r2, r4, #0
    // bl ov13_02222968
    // str r4, [r6, #4]
    // b _02221E94
    // cmp r4, #0
    // beq _02221E80
    // add r0, r5, r4
    // ldrb r0, [r0, #5]
    // cmp r0, #0
    // beq _02221E80
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0xc]
    // add r1, r5, #6
    // add r2, r4, #0
    // bl ov13_02222968
    // b _02221E94
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // ldrh r0, [r5, #4]
    // cmp r0, #0
    // beq _02221EA4
    // bl ov13_02222A84
    // ldr r1, [sp, #0x10]
    // add r5, r1, r0
    // b _02221D86
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02221EAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // add r4, r0, #6
    // add r0, r6, #0
    // str r0, [sp]
    // add r0, #8
    // add r7, r6, #0
    // str r0, [sp]
    // add r7, #0x30
    // str r4, [sp, #4]
    // ldrh r0, [r4, #2]
    // bl ov13_02222A84
    // add r5, r0, #0
    // ldrb r0, [r4]
    // cmp r0, #0x35
    // bgt _02221ED8
    // bge _02221EF2
    // cmp r0, #0x30
    // beq _02221EE6
    // b _02221EFE
    // cmp r0, #0x40
    // bgt _02221EE0
    // beq _02221EE6
    // b _02221EFE
    // cmp r0, #0x45
    // beq _02221EF2
    // b _02221EFE
    // cmp r5, #0x40
    // bls _02221EFE
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r5, #0x21
    // bls _02221EFE
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0x35
    // bgt _02221F0A
    // bge _02221F26
    // cmp r0, #0x30
    // beq _02221F18
    // b _02221F46
    // cmp r0, #0x40
    // bgt _02221F12
    // beq _02221F18
    // b _02221F46
    // cmp r0, #0x45
    // beq _02221F26
    // b _02221F46
    // add r0, r7, #0
    // add r1, r4, #6
    // add r2, r5, #0
    // bl ov13_02222968
    // str r5, [r6, #4]
    // b _02221F4E
    // cmp r5, #0
    // beq _02221F3A
    // add r0, r4, r5
    // ldrb r0, [r0, #5]
    // cmp r0, #0
    // beq _02221F3A
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // add r1, r4, #6
    // add r2, r5, #0
    // bl ov13_02222968
    // b _02221F4E
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r4, #4]
    // cmp r0, #0
    // beq _02221F5E
    // bl ov13_02222A84
    // ldr r1, [sp, #4]
    // add r4, r1, r0
    // b _02221EC2
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02221F64(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #6
    // ldrh r0, [r4, #2]
    // add r5, r1, #0
    // bl ov13_02222A84
    // add r2, r0, #0
    // cmp r2, #0
    // bgt _02221F7C
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4]
    // cmp r0, #0x70
    // beq _02221F88
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #6
    // bl ov13_02222968
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov13_02221F94(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r2, #0
    // str r0, [sp]
    // add r4, r1, #0
    // mov r5, #0
    // str r3, [sp, #4]
    // cmp r6, #0
    // bgt _02221FAC
    // add sp, #0x14
    // sub r0, r5, #2
    // pop {r4, r5, r6, r7, pc}
    // ldr r7, _0222209C ; =_022459B0
    // ldr r2, [sp]
    // ldrb r0, [r4]
    // ldrb r2, [r7, r2]
    // add r1, r4, #0
    // cmp r0, r2
    // beq _02221FD2
    // ldrh r0, [r4, #2]
    // bl ov13_02222A84
    // add r0, r0, #4
    // sub r6, r6, r0
    // add r4, r4, r0
    // cmp r6, #0
    // bgt _02221FAE
    // mov r0, #3
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // ldrh r0, [r1, #2]
    // add r4, r4, #4
    // bl ov13_02222A84
    // add r7, r0, #0
    // mov r1, #0x35
    // ldr r0, [sp]
    // lsl r1, r1, #4
    // mul r1, r0
    // ldr r0, [sp, #4]
    // add r6, r0, r1
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, r0, #3
    // lsl r0, r0, #7
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // str r0, [sp, #0x10]
    // add r0, #8
    // str r0, [sp, #0x10]
    // ldrb r0, [r4]
    // cmp r0, #0xa
    // bhi _02222076
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222200E: ; jump table
    // ldr r1, [sp, #0x10]
    // add r0, r4, #0
    // bl ov13_02221D58
    // mov r1, #1
    // orr r5, r1
    // b _0222207A
    // mov r1, #0x4e
    // lsl r1, r1, #2
    // add r0, r4, #0
    // add r1, r6, r1
    // bl ov13_02221D58
    // mov r1, #2
    // orr r5, r1
    // b _0222207A
    // mov r1, #0x9a
    // lsl r1, r1, #2
    // add r0, r4, #0
    // add r1, r6, r1
    // bl ov13_02221EAC
    // mov r1, #4
    // orr r5, r1
    // b _0222207A
    // mov r1, #0xb6
    // lsl r1, r1, #2
    // add r0, r4, #0
    // add r1, r6, r1
    // bl ov13_02221EAC
    // mov r1, #8
    // orr r5, r1
    // b _0222207A
    // ldr r2, [sp, #8]
    // ldr r1, [sp, #0xc]
    // add r0, r4, #0
    // add r1, r2, r1
    // bl ov13_02221F64
    // b _0222207A
    // mov r0, #2
    // mvn r0, r0
    // cmp r0, #0
    // bne _02222098
    // ldrh r0, [r4, #2]
    // bl ov13_02222A84
    // add r0, r0, #4
    // sub r7, r7, r0
    // add r4, r4, r0
    // cmp r7, #0
    // bgt _02221FFC
    // ldr r0, _022220A0 ; =_0224CF98
    // ldr r1, [r0, #0x30]
    // orr r1, r5
    // str r1, [r0, #0x30]
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0222209C: .word _022459B0
    // _022220A0: .word _0224CF98
    // TODO: decompile
}


void ov13_022220A4(void) {
    // mov r1, #0x10
    // mov r2, #0
    // tst r0, r1
    // beq _022220AE
    // mov r2, #1
    // add r0, r2, #0
    // bx lr
    // TODO: decompile
}


void ov13_022220B4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r0, #0
    // beq _022220CA
    // cmp r0, #1
    // beq _022220DC
    // cmp r0, #2
    // beq _022220EE
    // b _02222100
    // mov r0, #2
    // bl ov13_022217D0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov13_02222108
    // pop {r4, r5, r6, pc}
    // mov r0, #3
    // bl ov13_022217D0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov13_0222224C
    // pop {r4, r5, r6, pc}
    // mov r0, #5
    // bl ov13_022217D0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov13_02222328
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov13_02222108(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r7, r1, #0
    // mov r1, #0
    // add r0, sp, #0x10
    // strb r1, [r0]
    // strh r1, [r0, #4]
    // strh r1, [r0, #2]
    // ldr r0, _0222223C ; =_0224CF98
    // str r2, [sp, #0xc]
    // ldr r5, [r0, #0x14]
    // ldr r2, _02222240 ; =0x000005DC
    // add r0, r5, #0
    // bl ov13_02222978
    // mov r0, #0x21
    // lsl r0, r0, #4
    // bl ov13_022208E8
    // add r4, r0, #0
    // bne _02222140
    // mov r0, #2
    // bl ov13_022214AC
    // mov r0, #0
    // add sp, #0x20
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0x21
    // mov r1, #0
    // lsl r2, r2, #4
    // bl ov13_02222978
    // add r6, r5, #0
    // ldr r0, _02222244 ; =ov13_0224DCF8
    // add r1, r7, #0
    // mov r2, #8
    // add r6, #0x18
    // bl ov13_02222968
    // add r0, sp, #0x14
    // ldr r1, _02222244 ; =ov13_0224DCF8
    // add r0, #2
    // mov r2, #8
    // bl ov13_02222968
    // add r0, r4, #4
    // bl ov13_02222394
    // add r1, sp, #0x10
    // strh r0, [r1, #4]
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // cmp r0, #0
    // bge _0222218E
    // mov r0, #3
    // bl ov13_022214AC
    // cmp r4, #0
    // beq _02222186
    // add r0, r4, #0
    // bl ov13_022208F8
    // mov r0, #0
    // add sp, #0x20
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // strb r0, [r4]
    // ldrh r0, [r1, #4]
    // bl ov13_02222A44
    // strh r0, [r4, #2]
    // add r1, sp, #0x10
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // add r2, r4, #0
    // add r3, sp, #0x14
    // add r0, r0, #4
    // strh r0, [r1, #4]
    // add r0, sp, #0x10
    // add r0, #2
    // str r0, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // mov r0, #0
    // add r1, r6, #0
    // bl ov13_02222420
    // add r1, sp, #0x10
    // mov r0, #2
    // ldrsh r2, [r1, r0]
    // mov r0, #0x10
    // mov r3, #6
    // orr r0, r2
    // strh r0, [r1, #2]
    // add r0, sp, #0x14
    // ldr r2, _02222248 ; =ov13_02245A20
    // add r0, #2
    // mov r1, #8
    // bl ov13_022227A0
    // cmp r0, #0
    // beq _022221F0
    // mov r0, #2
    // bl ov13_022214AC
    // cmp r4, #0
    // beq _022221E8
    // add r0, r4, #0
    // bl ov13_022208F8
    // mov r0, #0
    // add sp, #0x20
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r3, sp, #0x10
    // mov r0, #0
    // ldrsb r0, [r3, r0]
    // mov r1, #1
    // mov r2, #4
    // str r0, [sp]
    // mov r0, #0x11
    // str r0, [sp, #4]
    // add r0, sp, #0x14
    // add r0, #2
    // str r0, [sp, #8]
    // mov r6, #2
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r6]
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl ov13_02222474
    // add r2, sp, #0x10
    // mov r1, #4
    // ldrsh r0, [r2, r1]
    // ldr r3, [sp, #0xc]
    // add r0, #0x18
    // strh r0, [r2, #4]
    // ldrsh r1, [r2, r1]
    // add r0, r5, #0
    // mov r2, #0xff
    // bl ov13_022224CC
    // cmp r4, #0
    // beq _02222234
    // add r0, r4, #0
    // bl ov13_022208F8
    // mov r0, #0
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222223C: .word _0224CF98
    // _02222240: .word 0x000005DC
    // _02222244: .word ov13_0224DCF8
    // _02222248: .word ov13_02245A20
    // TODO: decompile
}


void ov13_0222224C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x24
    // add r5, r1, #0
    // mov r1, #0
    // add r0, sp, #0xc
    // strb r1, [r0]
    // strh r1, [r0, #4]
    // strh r1, [r0, #2]
    // ldr r0, _0222231C ; =_0224CF98
    // add r6, r2, #0
    // ldr r4, [r0, #0x14]
    // add r0, sp, #0x14
    // mov r2, #8
    // bl ov13_02222978
    // ldr r2, _02222320 ; =0x000005DC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov13_02222978
    // mov r1, #2
    // add r0, sp, #0xc
    // strb r1, [r0, #8]
    // mov r1, #0
    // strb r1, [r0, #9]
    // mov r0, #4
    // bl ov13_02222A44
    // add r1, sp, #0xc
    // strh r0, [r1, #0xa]
    // ldr r0, _0222231C ; =_0224CF98
    // ldr r0, [r0, #0x2c]
    // str r0, [sp, #0x18]
    // bl ov13_02222A1C
    // str r0, [sp, #0x18]
    // mov r1, #8
    // add r0, sp, #0xc
    // strh r1, [r0, #4]
    // add r0, sp, #0xc
    // add r0, #2
    // str r0, [sp]
    // add r0, sp, #0xc
    // str r0, [sp, #4]
    // ldr r0, _0222231C ; =_0224CF98
    // add r1, r4, #0
    // ldr r0, [r0]
    // add r1, #0x18
    // add r2, sp, #0x14
    // add r3, sp, #0x10
    // bl ov13_02222420
    // add r5, #8
    // add r0, sp, #0x1c
    // add r1, r5, #0
    // mov r2, #8
    // bl ov13_02222968
    // ldr r2, _02222324 ; =ov13_02245A20
    // add r0, sp, #0x1c
    // mov r1, #8
    // mov r3, #6
    // bl ov13_022227A0
    // cmp r0, #0
    // beq _022222DE
    // mov r0, #2
    // bl ov13_022214AC
    // mov r0, #0
    // add sp, #0x24
    // mvn r0, r0
    // pop {r3, r4, r5, r6, pc}
    // add r3, sp, #0xc
    // mov r0, #0
    // ldrsb r0, [r3, r0]
    // mov r1, #2
    // mov r2, #4
    // str r0, [sp]
    // mov r0, #0x11
    // str r0, [sp, #4]
    // add r0, sp, #0x1c
    // str r0, [sp, #8]
    // mov r5, #2
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r5]
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl ov13_02222474
    // add r2, sp, #0xc
    // mov r1, #4
    // ldrsh r0, [r2, r1]
    // add r3, r6, #0
    // add r0, #0x18
    // strh r0, [r2, #4]
    // ldrsh r1, [r2, r1]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov13_022224CC
    // mov r0, #0
    // add sp, #0x24
    // pop {r3, r4, r5, r6, pc}
    // _0222231C: .word _0224CF98
    // _02222320: .word 0x000005DC
    // _02222324: .word ov13_02245A20
    // TODO: decompile
}


void ov13_02222328(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // ldr r0, _02222388 ; =_0224CF98
    // add r6, r2, #0
    // ldr r4, [r0, #0x14]
    // ldr r2, _0222238C ; =0x000005DC
    // add r5, r1, #0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov13_02222978
    // add r5, #0x10
    // add r0, sp, #0xc
    // add r1, r5, #0
    // mov r2, #8
    // bl ov13_02222968
    // ldr r0, _02222390 ; =ov13_02245A20
    // bl ov13_02222A9C
    // add r3, r0, #0
    // ldr r2, _02222390 ; =ov13_02245A20
    // add r0, sp, #0xc
    // mov r1, #8
    // bl ov13_022227A0
    // mov r2, #0
    // mov r1, #3
    // str r2, [sp]
    // mov r0, #0x11
    // str r0, [sp, #4]
    // add r0, sp, #0xc
    // str r0, [sp, #8]
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // add r3, r2, #0
    // bl ov13_02222474
    // add r0, r4, #0
    // mov r1, #0x18
    // mov r2, #0
    // add r3, r6, #0
    // bl ov13_022224CC
    // mov r0, #0
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02222388: .word _0224CF98
    // _0222238C: .word 0x000005DC
    // _02222390: .word ov13_02245A20
    // TODO: decompile
}


void ov13_02222394(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _02222418 ; =ov13_0224CFB8
    // add r5, r0, #0
    // mov r0, #0x1d
    // ldrsb r0, [r1, r0]
    // ldr r1, _0222241C ; =_0224CF98
    // mov r6, #0
    // strb r0, [r5]
    // mov r0, #1
    // strb r0, [r5, #1]
    // ldr r0, [r1, #0x28]
    // ldr r1, [r1, #0x24]
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // add r0, r5, #6
    // add r2, r4, #0
    // bl ov13_02222968
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl ov13_02222A44
    // strh r0, [r5, #2]
    // add r0, r4, #6
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add r1, r0, #1
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // lsl r0, r0, #0x11
    // asr r7, r0, #0x10
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // bl ov13_02222A44
    // strh r0, [r5, #4]
    // add r0, r6, r7
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // mov r0, #0x60
    // strb r0, [r5, r7]
    // add r4, r5, r7
    // mov r0, #0
    // strb r0, [r4, #1]
    // bl ov13_02222A44
    // strh r0, [r4, #4]
    // mov r0, #0xe
    // bl ov13_02222A1C
    // str r0, [sp]
    // add r0, r4, #6
    // add r1, sp, #0
    // mov r2, #4
    // bl ov13_02222968
    // mov r0, #4
    // bl ov13_02222A44
    // add r6, #0xa
    // strh r0, [r4, #2]
    // lsl r0, r6, #0x10
    // asr r0, r0, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02222418: .word ov13_0224CFB8
    // _0222241C: .word _0224CF98
    // TODO: decompile
}


void ov13_02222420(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r4, r3, #0
    // cmp r0, #1
    // bne _02222460
    // ldr r0, [sp, #0x18]
    // mov r1, #1
    // strh r1, [r0]
    // add r0, r5, #2
    // str r0, [sp]
    // ldr r0, _02222470 ; =ov13_0224DCF8
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // add r0, r2, #0
    // mov r2, #0
    // ldrsh r2, [r4, r2]
    // add r1, r5, #4
    // bl ov13_02222534
    // ldrh r0, [r4]
    // bl ov13_02222A44
    // strh r0, [r5]
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add sp, #0xc
    // add r0, r0, #4
    // strh r0, [r4]
    // pop {r4, r5, pc}
    // add r1, r2, #0
    // mov r2, #0
    // ldrsh r2, [r4, r2]
    // add r0, r5, #0
    // bl ov13_02222968
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _02222470: .word ov13_0224DCF8
    // TODO: decompile
}


void ov13_02222474(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #1
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov13_02222A44
    // strh r0, [r5]
    // mov r0, #0
    // strh r0, [r5, #2]
    // strh r0, [r5, #4]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl ov13_02222A44
    // strh r0, [r5, #6]
    // mov r0, #0
    // strh r0, [r5, #8]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // bl ov13_02222A44
    // strh r0, [r5, #0xa]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // bl ov13_02222A44
    // strh r0, [r5, #0xc]
    // add r1, sp, #8
    // mov r0, #0x10
    // ldrsb r0, [r1, r0]
    // mov r2, #8
    // strb r0, [r5, #0xe]
    // mov r0, #0x14
    // ldrsb r0, [r1, r0]
    // ldr r1, [sp, #0x20]
    // strb r0, [r5, #0xf]
    // add r5, #0x10
    // add r0, r5, #0
    // bl ov13_02222968
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_022224CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r1, #0
    // add r4, r2, #0
    // add r0, sp, #8
    // mov r1, #0
    // mov r2, #8
    // add r7, r3, #0
    // bl ov13_02222978
    // mov r1, #2
    // add r0, sp, #8
    // strb r1, [r0, #1]
    // ldr r0, _02222528 ; =0x00005790
    // bl ov13_02222A44
    // add r1, sp, #8
    // strh r0, [r1, #2]
    // ldr r0, _0222252C ; =_0224CF98
    // ldr r0, [r0, #0x34]
    // bl ov13_02222A1C
    // str r0, [sp, #0xc]
    // cmp r4, #0xff
    // beq _0222250A
    // ldr r1, _02222530 ; =ov13_0224CFB8
    // mov r0, #0x1c
    // ldrsb r0, [r1, r0]
    // cmp r0, #0
    // bne _02222510
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0xc]
    // add r0, sp, #8
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // mov r3, #0
    // bl ov13_022229EC
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02222528: .word 0x00005790
    // _0222252C: .word _0224CF98
    // _02222530: .word ov13_0224CFB8
    // TODO: decompile
}


void ov13_02222534(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r2, #0
    // add r7, r1, #0
    // add r4, r3, #0
    // add r1, r5, #0
    // add r6, r0, #0
    // bl ov13_02222708
    // strb r0, [r4]
    // add r0, r5, #0
    // bl ov13_022208E8
    // str r0, [sp, #0xc]
    // cmp r0, #0
    // bne _0222255C
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // bl ov13_02222AB0
    // add r1, sp, #0
    // strh r0, [r1]
    // ldr r0, [sp, #0x28]
    // add r1, sp, #0
    // mov r2, #2
    // bl ov13_02222968
    // ldr r0, _022225A8 ; =ov13_0224DD00
    // ldr r1, [sp, #0x28]
    // mov r2, #2
    // bl ov13_02222968
    // ldr r0, _022225AC ; =ov13_0224DD02
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    // bl ov13_02222968
    // ldr r2, [sp, #0x30]
    // ldr r1, _022225A8 ; =ov13_0224DD00
    // add r0, sp, #4
    // add r2, r2, #2
    // add r3, r5, #0
    // bl ov13_02222638
    // add r0, sp, #4
    // add r1, r7, #0
    // add r2, r6, #0
    // add r3, r5, #0
    // bl ov13_0222269C
    // ldr r0, [sp, #0xc]
    // bl ov13_022208F8
    // mov r0, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _022225A8: .word ov13_0224DD00
    // _022225AC: .word ov13_0224DD02
    // TODO: decompile
}


void ov13_022225B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r2, #0
    // add r7, r0, #0
    // add r0, r4, #0
    // add r5, r1, #0
    // add r6, r3, #0
    // bl ov13_022208E8
    // str r0, [sp, #8]
    // cmp r0, #0
    // bne _022225D6
    // mov r0, #2
    // bl ov13_022214AC
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02222630 ; =ov13_0224DD00
    // ldr r1, [sp, #0x28]
    // mov r2, #2
    // bl ov13_02222968
    // ldr r0, _02222634 ; =ov13_0224DD02
    // ldr r1, [sp, #0x2c]
    // ldr r2, [sp, #0x30]
    // bl ov13_02222968
    // ldr r2, [sp, #0x30]
    // ldr r1, _02222630 ; =ov13_0224DD00
    // add r0, sp, #0
    // add r2, r2, #2
    // add r3, r4, #0
    // bl ov13_02222638
    // add r0, sp, #0
    // add r1, r5, #0
    // add r2, r7, #0
    // add r3, r4, #0
    // bl ov13_0222269C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov13_02222708
    // cmp r0, r6
    // beq _02222624
    // mov r0, #0x12
    // bl ov13_022214AC
    // ldr r0, [sp, #8]
    // bl ov13_022208F8
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // bl ov13_022208F8
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02222630: .word ov13_0224DD00
    // _02222634: .word ov13_0224DD02
    // TODO: decompile
}


void ov13_02222638(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r4, [r0, #8]
    // ldr r1, [sp]
    // mov r0, #0
    // str r0, [r1, #4]
    // str r2, [sp, #8]
    // str r0, [r1]
    // add r2, r3, #0
    // str r2, [r1, #0xc]
    // str r3, [sp, #0xc]
    // add r1, r3, #0
    // beq _02222660
    // ldr r1, [sp, #0xc]
    // strb r0, [r4, r0]
    // add r0, r0, #1
    // cmp r0, r1
    // blo _02222656
    // ldr r0, [sp, #0xc]
    // mov r1, #0
    // add r6, r1, #0
    // add r5, r1, #0
    // cmp r0, #0
    // bls _02222696
    // ldr r0, [sp, #4]
    // ldrb r7, [r4, r5]
    // ldrb r0, [r0, r6]
    // add r0, r1, r0
    // ldr r1, [sp]
    // add r0, r7, r0
    // ldr r1, [r1, #0xc]
    // bl _u32_div_f
    // ldrb r0, [r4, r1]
    // add r6, r6, #1
    // strb r7, [r4, r1]
    // strb r0, [r4, r5]
    // ldr r0, [sp, #8]
    // cmp r6, r0
    // blo _0222268E
    // mov r6, #0
    // ldr r0, [sp, #0xc]
    // add r5, r5, #1
    // cmp r5, r0
    // blo _0222266C
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_0222269C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r5, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // ldr r4, _022226C4 ; =0x00000000
    // beq _022226C0
    // ldr r0, [sp]
    // bl ov13_022226C8
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // ldrb r0, [r6, r4]
    // eor r0, r1
    // strb r0, [r5, r4]
    // add r4, r4, #1
    // cmp r4, r7
    // blo _022226AA
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022226C4: .word 0x00000000
    // TODO: decompile
}


void ov13_022226C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // ldr r4, [r5, #8]
    // str r0, [sp]
    // ldr r0, [r5]
    // ldr r1, [sp]
    // add r0, r0, #1
    // bl _u32_div_f
    // lsl r0, r1, #0x18
    // lsr r7, r0, #0x18
    // ldrb r6, [r4, r7]
    // ldr r0, [r5, #4]
    // ldr r1, [sp]
    // add r0, r6, r0
    // bl _u32_div_f
    // lsl r0, r1, #0x18
    // lsr r1, r0, #0x18
    // ldrb r0, [r4, r1]
    // str r7, [r5]
    // str r1, [r5, #4]
    // strb r6, [r4, r1]
    // strb r0, [r4, r7]
    // ldr r1, [r5, #0xc]
    // add r0, r6, r0
    // bl _u32_div_f
    // ldrb r0, [r4, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02222708(void) {
    // push {r3, lr}
    // add r3, r0, #0
    // ldr r0, _0222272C ; =ov13_0224D258
    // add r2, r1, #0
    // str r0, [sp]
    // mov r0, #0
    // add r1, r3, #0
    // mvn r0, r0
    // mov r3, #0
    // bl ov13_02222730
    // mov r1, #0
    // mvn r1, r1
    // eor r0, r1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, pc}
    // nop
    // _0222272C: .word ov13_0224D258
    // TODO: decompile
}


void ov13_02222730(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // add r4, r2, #0
    // ldr r6, [sp, #0x18]
    // cmp r3, #0
    // bne _02222746
    // add r0, r3, #0
    // add r1, r6, #0
    // bl ov13_02222768
    // mov r1, #0
    // cmp r4, #0
    // ble _02222762
    // ldrb r2, [r7, r1]
    // lsr r0, r5, #8
    // add r1, r1, #1
    // eor r2, r5
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x16
    // ldr r2, [r6, r2]
    // add r5, r0, #0
    // eor r5, r2
    // cmp r1, r4
    // blt _0222274C
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02222768(void) {
    // push {r4, r5, r6, r7}
    // mov r5, #1
    // add r3, r5, #0
    // ldr r4, _0222279C ; =0xEDB88320
    // mov r0, #0
    // add r3, #0xff
    // add r7, r0, #0
    // mov r2, #0
    // add r6, r7, #0
    // tst r6, r5
    // beq _02222786
    // lsr r6, r7, #1
    // add r7, r6, #0
    // eor r7, r4
    // b _02222788
    // lsr r7, r7, #1
    // add r2, r2, #1
    // cmp r2, #8
    // blt _02222778
    // add r0, r0, #1
    // stmia r1!, {r7}
    // cmp r0, r3
    // blt _02222774
    // pop {r4, r5, r6, r7}
    // bx lr
    // nop
    // _0222279C: .word 0xEDB88320
    // TODO: decompile
}


void ov13_022227A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // add r7, r0, #0
    // lsr r0, r5, #0x1f
    // add r0, r5, r0
    // asr r0, r0, #1
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // bl ov13_022208E8
    // add r6, r0, #0
    // bne _022227C2
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov13_022208E8
    // str r0, [sp, #0xc]
    // cmp r0, #0
    // bne _022227DC
    // add r0, r6, #0
    // bl ov13_022208F8
    // mov r0, #0
    // add sp, #0x10
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #0
    // ldr r0, [sp, #8]
    // ldr r3, [sp, #4]
    // str r0, [sp]
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov13_0222281C
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl ov13_02222850
    // ldr r2, [sp, #0xc]
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov13_02222874
    // add r4, r4, #1
    // cmp r4, #2
    // blt _022227DE
    // add r0, r6, #0
    // bl ov13_022208F8
    // ldr r0, [sp, #0xc]
    // bl ov13_022208F8
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_0222281C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // lsr r1, r2, #0x1f
    // add r1, r2, r1
    // ldr r6, [sp, #0x18]
    // asr r4, r1, #1
    // add r1, r6, #0
    // add r7, r3, #0
    // bl _s32_div_f
    // mov r0, #0
    // cmp r4, #0
    // ble _0222284E
    // strb r0, [r5, r0]
    // ldrsb r2, [r7, r1]
    // ldrsb r3, [r5, r0]
    // add r1, r1, #1
    // eor r2, r3
    // strb r2, [r5, r0]
    // cmp r1, r6
    // blt _02222848
    // mov r1, #0
    // add r0, r0, #1
    // cmp r0, r4
    // blt _02222836
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02222850(void) {
    // push {r4, r5}
    // lsr r3, r2, #0x1f
    // add r3, r2, r3
    // asr r4, r3, #1
    // mov r3, #0
    // cmp r4, #0
    // ble _02222870
    // add r5, r1, r4
    // ldrsb r1, [r0, r3]
    // ldrb r2, [r5]
    // add r3, r3, #1
    // eor r1, r2
    // strb r1, [r5]
    // add r5, r5, #1
    // cmp r3, r4
    // blt _02222860
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov13_02222874(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // lsr r0, r6, #0x1f
    // add r0, r6, r0
    // asr r7, r0, #1
    // add r4, r2, #0
    // add r0, r4, #0
    // add r1, r5, r7
    // add r2, r7, #0
    // bl ov13_02222968
    // add r0, r4, r7
    // add r1, r5, #0
    // add r2, r7, #0
    // bl ov13_02222968
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov13_02222968
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_022228A4(void) {
    // push {r3, lr}
    // cmp r1, #0
    // ble _022228B4
    // add r0, r1, #0
    // ldr r1, _022228B8 ; =ov13_0224DD80
    // ldr r1, [r1]
    // blx r1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // _022228B8: .word ov13_0224DD80
    // TODO: decompile
}


void ov13_022228BC(void) {
    // push {r3, lr}
    // add r0, r1, #0
    // ldr r1, _022228C8 ; =ov13_0224DD8C
    // ldr r1, [r1]
    // blx r1
    // pop {r3, pc}
    // _022228C8: .word ov13_0224DD8C
    // TODO: decompile
}


void ov13_022228CC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl ov13_02222A1C
    // ldr r1, _02222918 ; =ov13_022459B4
    // str r0, [r1, #0x18]
    // add r0, r5, #0
    // bl ov13_02222A1C
    // ldr r1, _02222918 ; =ov13_022459B4
    // str r0, [r1, #0x1c]
    // add r0, r4, #0
    // bl ov13_02222A1C
    // ldr r1, _02222918 ; =ov13_022459B4
    // str r0, [r1, #0x20]
    // ldr r0, _0222291C ; =ov13_022459BC
    // bl SOC_Startup
    // cmp r0, #0
    // bge _022228FE
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // ldr r5, _02222920 ; =_021D4670
    // ldr r0, [r5]
    // cmp r0, #0
    // bne _02222914
    // mov r4, #0x64
    // add r0, r4, #0
    // bl OS_Sleep
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02222908
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02222918: .word ov13_022459B4
    // _0222291C: .word ov13_022459BC
    // _02222920: .word _021D4670
    // TODO: decompile
}


void ov13_02222924(void) {
    // push {r3, lr}
    // bl SOC_Cleanup
    // cmp r0, #0
    // bge _02222934
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, pc}
    // bl ov13_02222D78
    // cmp r0, #0
    // beq _02222940
    // mov r0, #1
    // b _02222942
    // mov r0, #0
    // neg r0, r0
    // pop {r3, pc}
    // TODO: decompile
}


void ov13_02222948(void) {
    // push {r3, r4}
    // mov r3, #0
    // b _02222952
    // add r0, r0, #1
    // add r1, r1, #1
    // add r4, r2, #0
    // sub r2, r2, #1
    // cmp r4, #0
    // ble _02222962
    // ldrb r4, [r0]
    // ldrb r3, [r1]
    // sub r3, r4, r3
    // beq _0222294E
    // add r0, r3, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov13_02222968(void) {
    // add r3, r0, #0
    // add r0, r1, #0
    // add r1, r3, #0
    // ldr r3, _02222974 ; =MI_CpuCopy8
    // bx r3
    // nop
    // _02222974: .word MI_CpuCopy8
    // TODO: decompile
}


void ov13_02222978(void) {
    MI_CpuFill8();
}


void ov13_02222984(void) {
    SOC_RecvFrom();
}


void ov13_02222998(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // ldr r2, [r1]
    // ldr r0, [r1, #4]
    // ldr r5, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // mov r4, #0
    // ldr r2, _022229E8 ; =0x01FF6210
    // asr r1, r0, #0x1f
    // add r3, r4, #0
    // bl _ll_mul
    // lsr r3, r0, #6
    // lsl r2, r1, #0x1a
    // orr r3, r2
    // lsr r0, r1, #6
    // add r6, r4, r3
    // adc r4, r0
    // ldr r0, [r5, #4]
    // ldr r2, _022229E8 ; =0x01FF6210
    // asr r1, r0, #0x1f
    // mov r3, #0
    // bl _ll_mul
    // lsr r3, r0, #6
    // lsl r2, r1, #0x1a
    // orr r3, r2
    // lsr r0, r1, #6
    // add r2, r6, r3
    // adc r4, r0
    // add r0, sp, #0
    // mov r1, #1
    // add r3, r4, #0
    // bl SOC_Poll
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _022229E8: .word 0x01FF6210
    // TODO: decompile
}


void ov13_022229EC(void) {
    SOC_SendTo();
}


void ov13_022229FC(void) {
    // bx lr
    // TODO: decompile
}


void ov13_02222A00(void) {
    SOC_Socket();
}


void ov13_02222A08(void) {
    SOC_Bind();
}


void ov13_02222A14(void) {
    SOC_Close();
}


void ov13_02222A1C(void) {
    // push {r4, r5}
    // mov r3, #0xff
    // lsl r1, r0, #0x18
    // lsl r3, r3, #0x18
    // add r2, r1, #0
    // lsl r4, r0, #8
    // lsr r1, r3, #8
    // and r1, r4
    // lsr r4, r0, #0x18
    // lsl r4, r4, #0x18
    // lsr r5, r4, #0x18
    // lsr r4, r0, #8
    // lsr r0, r3, #0x10
    // and r0, r4
    // orr r0, r5
    // and r2, r3
    // orr r0, r1
    // orr r0, r2
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov13_02222A44(void) {
    // asr r1, r0, #8
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // lsl r1, r0, #8
    // mov r0, #0xff
    // lsl r0, r0, #8
    // and r0, r1
    // orr r0, r2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // TODO: decompile
}


void ov13_02222A5C(void) {
    // push {r4, r5}
    // mov r3, #0xff
    // lsl r1, r0, #0x18
    // lsl r3, r3, #0x18
    // add r2, r1, #0
    // lsl r4, r0, #8
    // lsr r1, r3, #8
    // and r1, r4
    // lsr r4, r0, #0x18
    // lsl r4, r4, #0x18
    // lsr r5, r4, #0x18
    // lsr r4, r0, #8
    // lsr r0, r3, #0x10
    // and r0, r4
    // orr r0, r5
    // and r2, r3
    // orr r0, r1
    // orr r0, r2
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov13_02222A84(void) {
    // asr r1, r0, #8
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // lsl r1, r0, #8
    // mov r0, #0xff
    // lsl r0, r0, #8
    // and r0, r1
    // orr r0, r2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // TODO: decompile
}


void ov13_02222A9C(void) {
    // mov r2, #0
    // ldrsb r1, [r0, r2]
    // cmp r1, #0
    // beq _02222AAC
    // add r2, r2, #1
    // ldrsb r1, [r0, r2]
    // cmp r1, #0
    // bne _02222AA4
    // add r0, r2, #0
    // bx lr
    // TODO: decompile
}


void ov13_02222AB0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // ldr r0, _02222B10 ; =_0224CF98
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // bne _02222AF2
    // mov r4, #0
    // add r0, sp, #0
    // add r1, r4, #0
    // mov r2, #0xc
    // bl ov13_02222978
    // add r0, sp, #0
    // bl RTC_GetTime
    // cmp r0, #0
    // bne _02222AE2
    // ldr r0, [sp]
    // lsl r0, r0, #0xa
    // add r1, r4, r0
    // ldr r0, [sp, #4]
    // lsl r0, r0, #3
    // add r1, r1, r0
    // ldr r0, [sp, #8]
    // add r4, r1, r0
    // ldr r0, _02222B10 ; =_0224CF98
    // ldr r1, _02222B14 ; =0x5D588B65
    // str r4, [r0, #0x18]
    // str r1, [r0, #0x1c]
    // ldr r1, _02222B18 ; =0x00269EC3
    // str r1, [r0, #0x20]
    // mov r1, #1
    // str r1, [r0, #8]
    // ldr r0, _02222B10 ; =_0224CF98
    // ldr r2, [r0, #0x1c]
    // ldr r1, [r0, #0x18]
    // ldr r3, [r0, #0x20]
    // mul r1, r2
    // add r1, r3, r1
    // str r1, [r0, #0x18]
    // ldr r0, _02222B1C ; =0x00007FFF
    // lsr r1, r1, #0x10
    // mul r0, r1
    // lsr r0, r0, #0x10
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _02222B10: .word _0224CF98
    // _02222B14: .word 0x5D588B65
    // _02222B18: .word 0x00269EC3
    // _02222B1C: .word 0x00007FFF
    // TODO: decompile
}


void ov13_02222B20(void) {
    *(u32*)r0 = 0;
    ((u16*)r0)[4] = 0;
    ((u16*)r0)[6] = 0;
}


void ov13_02222B2C(void) {
    *(u32*)r1 = r0;
    ((u16*)r1)[4] = 1;
}


void ov13_02222B34(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrh r0, [r5, #0xa]
    // add r4, r1, #0
    // add r1, r4, #4
    // str r0, [r4]
    // add r0, r5, #0
    // add r0, #0xc
    // mov r2, #0x20
    // bl MIi_CpuCopy16
    // ldrh r0, [r5, #0x36]
    // add r1, r4, #0
    // add r1, #0x30
    // str r0, [r4, #0x24]
    // add r0, r5, #4
    // mov r2, #6
    // bl MIi_CpuCopy16
    // mov r1, #0
    // ldr r2, _02222BBC ; =ov13_02245A28
    // add r0, r1, #0
    // mov r6, #0x80
    // ldrh r7, [r5, #0x30]
    // ldrh r3, [r2]
    // tst r3, r7
    // beq _02222B8C
    // ldrb r7, [r2, #2]
    // add r3, r4, r1
    // add r3, #0x3c
    // strb r7, [r3]
    // ldrh r7, [r5, #0x2e]
    // ldrh r3, [r2]
    // tst r3, r7
    // beq _02222B8A
    // add r3, r4, r1
    // add r3, #0x3c
    // ldrb r3, [r3]
    // add r7, r3, #0
    // add r3, r4, r1
    // orr r7, r6
    // add r3, #0x3c
    // strb r7, [r3]
    // add r1, r1, #1
    // add r0, r0, #1
    // add r2, r2, #4
    // cmp r0, #0xc
    // blt _02222B62
    // str r1, [r4, #0x38]
    // ldrh r0, [r5, #0x32]
    // str r0, [r4, #0x4c]
    // ldrh r1, [r5, #0x2c]
    // mov r0, #3
    // and r0, r1
    // cmp r0, #1
    // bne _02222BAA
    // mov r0, #1
    // str r0, [r4, #0x50]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #2
    // bne _02222BB4
    // mov r0, #2
    // str r0, [r4, #0x50]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [r4, #0x50]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02222BBC: .word ov13_02245A28
    // TODO: decompile
}


void ov13_02222BC0(void) {
    MIi_CpuClear16(0, 0x20);
    *((u16*)(r4 + 0xa)) = r0;
    MI_CpuCopy8((r5 + 4), r4);
}


void ov13_02222BE4(void) {
    // add r3, r0, #0
    // add r0, r1, #0
    // str r2, [r3]
    // add r1, r3, #4
    // ldr r3, _02222BF0 ; =ov13_02222B34
    // bx r3
    // _02222BF0: .word ov13_02222B34
    // TODO: decompile
}


void ov13_02222BF4(void) {
    // ldr r3, _02222C00 ; =OS_SendMessage
    // add r1, r0, #0
    // ldr r0, _02222C04 ; =ov13_0224DDA0
    // mov r2, #0
    // bx r3
    // nop
    // _02222C00: .word OS_SendMessage
    // _02222C04: .word ov13_0224DDA0
    // TODO: decompile
}


void ov13_02222C08(void) {
    // ldr r3, _02222C14 ; =OS_SendMessage
    // add r1, r0, #0
    // ldr r0, _02222C18 ; =ov13_0224DDA0
    // mov r2, #0
    // bx r3
    // nop
    // _02222C14: .word OS_SendMessage
    // _02222C18: .word ov13_0224DDA0
    // TODO: decompile
}


void ov13_02222C1C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // ldr r0, _02222CCC ; =ov13_0224DDA0
    // ldr r1, _02222CD0 ; =ov13_0224DD90
    // mov r2, #4
    // mov r4, #1
    // bl OS_InitMessageQueue
    // cmp r5, #0
    // beq _02222C36
    // cmp r6, #0
    // bne _02222C3C
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl OS_DisableInterrupts
    // ldr r1, _02222CD4 ; =ov13_0224DD80
    // str r5, [r1]
    // str r6, [r1, #0xc]
    // bl OS_RestoreInterrupts
    // ldr r1, _02222CD4 ; =ov13_0224DD80
    // ldr r0, _02222CD8 ; =0x00005890
    // ldr r1, [r1]
    // blx r1
    // add r1, r0, #0
    // ldr r0, _02222CD4 ; =ov13_0224DD80
    // str r1, [r0, #8]
    // bne _02222C5E
    // sub r0, r4, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02222CDC ; =ov13_02222BF4
    // ldr r2, _02222CD8 ; =0x00005890
    // bl ov13_022236B8
    // cmp r0, #0
    // bne _02222C6C
    // mov r4, #0
    // cmp r4, #0
    // beq _02222CBC
    // ldr r5, _02222CCC ; =ov13_0224DDA0
    // add r6, sp, #0
    // mov r7, #1
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl OS_ReceiveMessage
    // ldr r0, [sp]
    // cmp r0, #0xf
    // bhi _02222CB6
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222C92: ; jump table
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #0
    // cmp r4, #0
    // bne _02222C76
    // ldr r1, _02222CD4 ; =ov13_0224DD80
    // ldr r0, [r1, #8]
    // ldr r1, [r1, #0xc]
    // blx r1
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02222CCC: .word ov13_0224DDA0
    // _02222CD0: .word ov13_0224DD90
    // _02222CD4: .word ov13_0224DD80
    // _02222CD8: .word 0x00005890
    // _02222CDC: .word ov13_02222BF4
    // TODO: decompile
}


void ov13_02222CE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r0, _02222D70 ; =ov13_0224DD80
    // mov r4, #1
    // ldr r0, [r0, #0xc]
    // sub r5, r4, #2
    // cmp r0, #0
    // bne _02222CF2
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov13_022235DC
    // cmp r0, #0
    // bne _02222CFE
    // sub r0, r4, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r7, _02222D74 ; =ov13_0224DDA0
    // ldr r6, _02222D70 ; =ov13_0224DD80
    // add r0, r7, #0
    // add r1, sp, #0
    // mov r2, #1
    // bl OS_ReceiveMessage
    // ldr r0, [sp]
    // cmp r0, #0x14
    // bhi _02222D54
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222D1E: ; jump table
    // ldr r0, [r6, #8]
    // mov r4, #0
    // ldr r1, [r6, #0xc]
    // add r5, r4, #0
    // blx r1
    // b _02222D56
    // mov r4, #0
    // cmp r4, #0
    // bne _02222D02
    // bl OS_DisableInterrupts
    // ldr r1, _02222D70 ; =ov13_0224DD80
    // mov r2, #0
    // str r2, [r1]
    // str r2, [r1, #0xc]
    // bl OS_RestoreInterrupts
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02222D70: .word ov13_0224DD80
    // _02222D74: .word ov13_0224DDA0
    // TODO: decompile
}


void ov13_02222D78(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r5, #0
    // mvn r5, r5
    // bl ov13_022235A4
    // cmp r0, #0
    // beq _02222DA8
    // ldr r4, _02222DAC ; =ov13_0224DDA0
    // add r6, sp, #0
    // mov r7, #1
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl OS_ReceiveMessage
    // ldr r0, [sp]
    // cmp r0, #0xe
    // bne _02222DA2
    // mov r0, #0
    // add r5, r0, #0
    // b _02222DA4
    // mov r0, #0
    // cmp r0, #0
    // bne _02222D8C
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02222DAC: .word ov13_0224DDA0
    // TODO: decompile
}


void ov13_02222DB0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // str r0, [sp, #4]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #0x10]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r6, #0
    // ldr r0, _02222F14 ; =ov13_0224DD80
    // add r7, r6, #0
    // ldr r1, [r0]
    // add r5, r6, #0
    // cmp r1, #0
    // beq _02222DD4
    // ldr r0, [r0, #0xc]
    // cmp r0, #0
    // bne _02222DDC
    // mov r0, #0
    // add sp, #0x44
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #3
    // lsl r0, r0, #0xc
    // blx r1
    // add r4, r0, #0
    // bne _02222DEC
    // add sp, #0x44
    // sub r0, r6, #1
    // pop {r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // ldr r3, _02222F18 ; =0x0030BFFE
    // add r1, r0, #0
    // add r2, r0, #0
    // str r4, [sp, #8]
    // bl ov13_02223478
    // cmp r0, #0
    // bne _02222E00
    // b _02222F04
    // add r0, sp, #0x18
    // bl OS_CreateAlarm
    // mov r0, #0x13
    // str r0, [sp]
    // ldr r1, _02222F1C ; =0x003FEC42
    // ldr r3, _02222F20 ; =ov13_02222C08
    // add r0, sp, #0x18
    // add r2, r6, #0
    // bl OS_SetAlarm
    // ldr r0, _02222F24 ; =ov13_0224DDA0
    // add r1, sp, #0x14
    // mov r2, #1
    // bl OS_ReceiveMessage
    // ldr r0, [sp, #0x14]
    // cmp r0, #0x13
    // bhi _02222EEA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222E32: ; jump table
    // cmp r6, #0
    // bne _02222EA0
    // cmp r5, #0
    // beq _02222E6C
    // add r0, r4, #0
    // mov r1, #0x40
    // bl ov13_02223434
    // add r7, r0, #0
    // bl ov13_02223568
    // cmp r0, #0
    // beq _02222EEA
    // mov r6, #1
    // b _02222EA0
    // cmp r6, #0
    // bne _02222EA0
    // cmp r5, #8
    // bge _02222E84
    // add r5, r5, #1
    // b _02222EA0
    // add r0, r4, #0
    // mov r1, #0x40
    // bl ov13_02223434
    // add r7, r0, #0
    // bl ov13_02223568
    // cmp r0, #0
    // beq _02222EEA
    // mov r6, #1
    // b _02222EA0
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // bne _02222E16
    // cmp r7, #0
    // beq _02222EBE
    // sub r1, r7, #1
    // mov r0, #0x54
    // mul r0, r1
    // ldr r1, _02222F14 ; =ov13_0224DD80
    // add r0, #0x58
    // ldr r1, [r1]
    // blx r1
    // cmp r0, #0
    // bne _02222ECA
    // b _02222EEA
    // ldr r1, _02222F14 ; =ov13_0224DD80
    // mov r0, #0x58
    // ldr r1, [r1]
    // blx r1
    // cmp r0, #0
    // beq _02222EEA
    // ldr r1, [sp, #4]
    // mov r6, #0
    // str r0, [r1]
    // str r7, [r0]
    // cmp r7, #0
    // ble _02222EEA
    // add r5, r0, #4
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov13_02222B34
    // add r6, r6, #1
    // add r4, #0xc0
    // add r5, #0x54
    // cmp r6, r7
    // blt _02222ED8
    // add r0, sp, #0x18
    // bl OS_CancelAlarm
    // ldr r5, _02222F24 ; =ov13_0224DDA0
    // add r4, sp, #0x14
    // mov r6, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl OS_ReceiveMessage
    // cmp r0, #1
    // beq _02222EF6
    // ldr r1, _02222F14 ; =ov13_0224DD80
    // ldr r0, [sp, #8]
    // ldr r1, [r1, #0xc]
    // blx r1
    // ldr r0, [sp, #0x10]
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02222F14: .word ov13_0224DD80
    // _02222F18: .word 0x0030BFFE
    // _02222F1C: .word 0x003FEC42
    // _02222F20: .word ov13_02222C08
    // _02222F24: .word ov13_0224DDA0
    // TODO: decompile
}


void ov13_02222F28(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // mov r4, #1
    // add r7, r0, #0
    // sub r0, r4, #2
    // str r0, [sp, #0xc]
    // ldr r0, [r7, #0x24]
    // mov r6, #0
    // str r1, [sp, #4]
    // cmp r0, #0
    // bne _02222F42
    // lsl r5, r4, #0x13
    // b _02222F4A
    // cmp r0, #1
    // bne _02222F4A
    // mov r5, #3
    // lsl r5, r5, #0x12
    // mov r0, #3
    // lsl r0, r0, #0x10
    // orr r5, r0
    // ldr r0, _022230DC ; =ov13_0224DE80
    // mov r1, #0
    // mov r2, #0x60
    // bl MI_CpuFill8
    // ldr r0, [r7, #0x28]
    // cmp r0, #5
    // bne _02222F68
    // ldr r0, _022230DC ; =ov13_0224DE80
    // mov r1, #1
    // strb r1, [r0]
    // b _02222F88
    // cmp r0, #0xd
    // bne _02222F74
    // ldr r0, _022230DC ; =ov13_0224DE80
    // mov r1, #2
    // strb r1, [r0]
    // b _02222F88
    // cmp r0, #0x10
    // bne _02222F80
    // ldr r0, _022230DC ; =ov13_0224DE80
    // mov r1, #3
    // strb r1, [r0]
    // b _02222F88
    // mov r0, #0
    // add sp, #0x40
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0x14
    // ldr r2, _022230DC ; =ov13_0224DE80
    // mul r1, r6
    // add r1, r1, #2
    // add r0, r7, #0
    // strb r6, [r2, #1]
    // add r1, r2, r1
    // ldr r2, [r7, #0x28]
    // add r0, #0x2c
    // bl MI_CpuCopy8
    // bl WCM_ClearApList
    // ldr r2, [r7]
    // ldr r3, _022230E0 ; =0x0030BFFE
    // mov r0, #0
    // add r1, r7, #4
    // bl ov13_02223478
    // cmp r0, #0
    // bne _02222FB4
    // b _022230C2
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x14
    // bl OS_CreateAlarm
    // mov r0, #0x12
    // str r0, [sp]
    // ldr r1, _022230E4 ; =0x003FEC42
    // ldr r3, _022230E8 ; =ov13_02222C08
    // add r0, sp, #0x14
    // mov r2, #0
    // bl OS_SetAlarm
    // b _022230A4
    // ldr r0, _022230EC ; =ov13_0224DDA0
    // add r1, sp, #0x10
    // mov r2, #1
    // bl OS_ReceiveMessage
    // ldr r0, [sp, #0x10]
    // cmp r0, #0x13
    // bhi _022230A2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222FEC: ; jump table
    // cmp r6, #0
    // bne _022230A4
    // mov r4, #0
    // b _022230A4
    // cmp r6, #0
    // bne _022230A4
    // add r0, sp, #0x14
    // bl OS_CancelAlarm
    // ldr r0, _022230F0 ; =ov13_0224DDC0
    // mov r1, #1
    // bl ov13_02223434
    // cmp r0, #1
    // beq _02223036
    // mov r4, #0
    // b _022230A4
    // ldr r1, _022230F0 ; =ov13_0224DDC0
    // add r0, r7, #0
    // bl ov13_02222BC0
    // ldr r1, _022230F4 ; =ov13_0224DDC0
    // mov r0, #0
    // ldrh r1, [r1, #0xa]
    // b _02223048
    // add r0, r0, #1
    // cmp r0, r1
    // blt _02223046
    // ldr r0, _022230F0 ; =ov13_0224DDC0
    // ldr r1, _022230DC ; =ov13_0224DE80
    // add r2, r5, #0
    // bl ov13_02223634
    // cmp r0, #0
    // bne _0222305E
    // mov r4, #0
    // b _022230A4
    // mov r6, #1
    // b _022230A4
    // ldr r1, _022230F0 ; =ov13_0224DDC0
    // add r0, r7, #0
    // bl ov13_02222BC0
    // ldr r0, _022230F0 ; =ov13_0224DDC0
    // ldr r1, _022230DC ; =ov13_0224DE80
    // add r2, r5, #0
    // bl ov13_02223634
    // cmp r0, #0
    // bne _022230A4
    // mov r4, #0
    // b _022230A4
    // mov r4, #0
    // str r4, [sp, #0xc]
    // b _022230A4
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, #3
    // bge _0222309E
    // ldr r0, _022230F0 ; =ov13_0224DDC0
    // ldr r1, _022230DC ; =ov13_0224DE80
    // add r2, r5, #0
    // bl ov13_02223634
    // cmp r0, #0
    // bne _022230A4
    // mov r4, #0
    // b _022230A4
    // mov r4, #0
    // b _022230A4
    // mov r4, #0
    // cmp r4, #0
    // bne _02222FD0
    // add r0, sp, #0x14
    // bl OS_CancelAlarm
    // ldr r5, _022230EC ; =ov13_0224DDA0
    // add r4, sp, #0x10
    // mov r6, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl OS_ReceiveMessage
    // cmp r0, #1
    // beq _022230B4
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // bne _022230CC
    // mov r2, #1
    // b _022230CE
    // mov r2, #0
    // ldr r0, [sp, #4]
    // ldr r1, _022230F0 ; =ov13_0224DDC0
    // bl ov13_02222BE4
    // ldr r0, [sp, #0xc]
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _022230DC: .word ov13_0224DE80
    // _022230E0: .word 0x0030BFFE
    // _022230E4: .word 0x003FEC42
    // _022230E8: .word ov13_02222C08
    // _022230EC: .word ov13_0224DDA0
    // _022230F0: .word ov13_0224DDC0
    // _022230F4: .word ov13_0224DDC0
    // TODO: decompile
}


void ov13_022230F8(void) {
    OS_Sleep();
}


void ov13_02223100(void) {
    // push {r3, lr}
    // ldr r1, _02223110 ; =ov13_0224DD80
    // ldr r1, [r1, #4]
    // cmp r1, #0
    // beq _0222310C
    // blx r1
    // mov r0, #0
    // pop {r3, pc}
    // _02223110: .word ov13_0224DD80
    // TODO: decompile
}


void ov13_02223114(void) {
    // push {r3, lr}
    // cmp r0, #0
    // bne _0222311C
    // b _022233C4
    // mov r1, #0
    // ldrsh r2, [r0, r1]
    // cmp r2, #7
    // bls _02223126
    // b _022233B6
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _02223132: ; jump table
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _022231AE
    // ldr r2, _022233C8 ; =ov13_0224DEE0
    // ldr r0, [r2, #0x18]
    // cmp r0, #4
    // bne _02223162
    // mov r0, #3
    // str r0, [r2, #0x18]
    // ldr r2, [r2, #0x1c]
    // cmp r2, #0
    // beq _022231BA
    // mov r0, #6
    // blx r2
    // pop {r3, pc}
    // cmp r0, #6
    // bne _02223188
    // ldr r0, [r2, #0x10]
    // ldr r1, [r2, #0x14]
    // ldr r2, [r2, #4]
    // bl WCM_SearchAsync
    // cmp r0, #3
    // beq _022231BA
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r1, #3
    // str r1, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022231BA
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #8
    // bne _022231BA
    // ldr r0, [r2, #0x20]
    // ldr r1, [r2, #0x24]
    // ldr r2, [r2, #0xc]
    // bl WCM_ConnectAsync
    // cmp r0, #3
    // beq _022231BA
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r1, #3
    // str r1, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022231BA
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r3, #1
    // str r3, [r0, #0x18]
    // ldr r3, [r0, #0x1c]
    // cmp r3, #0
    // bne _022231BC
    // b _022233C4
    // add r0, r2, #0
    // blx r3
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _022231E2
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // ldr r2, [r0, #0x18]
    // cmp r2, #6
    // bne _022232BE
    // mov r2, #5
    // str r2, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022232BE
    // mov r0, #8
    // blx r2
    // pop {r3, pc}
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r2, #3
    // str r2, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022232BE
    // mov r0, #9
    // blx r2
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _02223214
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // ldr r2, [r0, #0x18]
    // cmp r2, #8
    // bne _022232BE
    // mov r2, #7
    // str r2, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022232BE
    // mov r0, #0xc
    // blx r2
    // pop {r3, pc}
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r2, #3
    // str r2, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022232BE
    // mov r0, #0xd
    // blx r2
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _022232B2
    // ldr r2, _022233C8 ; =ov13_0224DEE0
    // ldr r0, [r2, #0x18]
    // cmp r0, #4
    // bne _02223246
    // mov r0, #3
    // str r0, [r2, #0x18]
    // ldr r2, [r2, #0x1c]
    // cmp r2, #0
    // beq _022232BE
    // mov r0, #0xa
    // blx r2
    // pop {r3, pc}
    // cmp r0, #6
    // bne _0222326C
    // ldr r0, [r2, #0x10]
    // ldr r1, [r2, #0x14]
    // ldr r2, [r2, #4]
    // bl WCM_SearchAsync
    // cmp r0, #3
    // beq _022232BE
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r1, #3
    // str r1, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022232BE
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #2
    // bne _0222328C
    // bl WCM_CleanupAsync
    // cmp r0, #3
    // beq _022232BE
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r1, #3
    // str r1, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022232BE
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #8
    // bne _022232BE
    // ldr r0, [r2, #0x20]
    // ldr r1, [r2, #0x24]
    // ldr r2, [r2, #0xc]
    // bl WCM_ConnectAsync
    // cmp r0, #3
    // beq _022232BE
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r1, #3
    // str r1, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022232BE
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r2, #3
    // str r2, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // bne _022232C0
    // b _022233C4
    // mov r0, #0xb
    // blx r2
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _02223358
    // ldr r2, _022233C8 ; =ov13_0224DEE0
    // ldr r0, [r2, #0x18]
    // cmp r0, #4
    // bne _022232E6
    // mov r0, #3
    // str r0, [r2, #0x18]
    // ldr r2, [r2, #0x1c]
    // cmp r2, #0
    // beq _022233C4
    // mov r0, #0xe
    // blx r2
    // pop {r3, pc}
    // cmp r0, #6
    // bne _0222330C
    // ldr r0, [r2, #0x10]
    // ldr r1, [r2, #0x14]
    // ldr r2, [r2, #4]
    // bl WCM_SearchAsync
    // cmp r0, #3
    // beq _022233C4
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r1, #3
    // str r1, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022233C4
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #2
    // bne _0222332C
    // bl WCM_CleanupAsync
    // cmp r0, #3
    // beq _022233C4
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r1, #3
    // str r1, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022233C4
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #8
    // bne _02223352
    // ldr r0, [r2, #0x20]
    // ldr r1, [r2, #0x24]
    // ldr r2, [r2, #0xc]
    // bl WCM_ConnectAsync
    // cmp r0, #3
    // beq _022233C4
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r1, #3
    // str r1, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022233C4
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // mov r0, #3
    // str r0, [r2, #0x18]
    // pop {r3, pc}
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r2, #3
    // str r2, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022233C4
    // mov r0, #0xf
    // blx r2
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _02223390
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // ldr r0, [r0, #0x18]
    // cmp r0, #2
    // bne _022233C4
    // bl WCM_Finish
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r1, #0
    // str r1, [r0, #0x18]
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022233C4
    // mov r0, #0x14
    // blx r2
    // pop {r3, pc}
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // mov r3, #3
    // str r3, [r0, #0x18]
    // ldr r3, [r0, #0x1c]
    // cmp r3, #0
    // beq _022233C4
    // add r0, r2, #0
    // blx r3
    // pop {r3, pc}
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // ldr r2, [r0, #0x18]
    // cmp r2, #5
    // bne _022233C4
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022233C4
    // mov r0, #5
    // blx r2
    // pop {r3, pc}
    // ldr r0, _022233C8 ; =ov13_0224DEE0
    // ldr r2, [r0, #0x1c]
    // cmp r2, #0
    // beq _022233C4
    // mov r0, #1
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // nop
    // _022233C8: .word ov13_0224DEE0
    // TODO: decompile
}


void ov13_022233CC(void) {
    // push {r3, lr}
    // ldr r1, _0222342C ; =ov13_0224DEE0
    // ldr r0, [r1, #0x18]
    // cmp r0, #8
    // bhi _02223422
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022233E2: ; jump table
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // bl WCM_SearchAsync
    // cmp r0, #3
    // beq _02223426
    // mov r0, #0
    // pop {r3, pc}
    // bl WCM_DisconnectAsync
    // cmp r0, #3
    // beq _02223426
    // mov r0, #0
    // pop {r3, pc}
    // ldr r0, [r1, #8]
    // ldr r1, _02223430 ; =ov13_02223114
    // bl WCM_StartupAsync
    // cmp r0, #3
    // beq _02223426
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // nop
    // _0222342C: .word ov13_0224DEE0
    // _02223430: .word ov13_02223114
    // TODO: decompile
}


void ov13_02223434(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #1
    // add r7, r1, #0
    // bl WCM_LockApList
    // bl WCM_CountApList
    // add r6, r0, #0
    // cmp r6, #0
    // ble _0222346C
    // mov r4, #0
    // cmp r6, #0
    // ble _0222346C
    // cmp r4, r7
    // bge _0222346C
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl WCM_PointApList
    // add r1, r5, #0
    // mov r2, #0xc0
    // bl MIi_CpuCopy32
    // add r4, r4, #1
    // add r5, #0xc0
    // cmp r4, r6
    // blt _02223450
    // mov r0, #0
    // bl WCM_LockApList
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02223478(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r3, [sp]
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl OS_DisableInterrupts
    // add r7, r0, #0
    // ldr r1, _02223554 ; =ov13_0224DEE0
    // ldr r0, [sp]
    // cmp r5, #0
    // str r0, [r1, #4]
    // beq _022234AC
    // ldr r2, _02223558 ; =ov13_0224DF08
    // mov r1, #0
    // ldrb r0, [r5]
    // add r1, r1, #1
    // add r5, r5, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // cmp r1, #6
    // blt _02223496
    // ldr r1, _02223558 ; =ov13_0224DF08
    // ldr r0, _02223554 ; =ov13_0224DEE0
    // str r1, [r0, #0x10]
    // b _022234BC
    // ldr r0, _02223558 ; =ov13_0224DF08
    // mov r1, #0xff
    // mov r2, #6
    // bl MI_CpuFill8
    // ldr r1, _0222355C ; =_02108FC0
    // ldr r0, _02223554 ; =ov13_0224DEE0
    // str r1, [r0, #0x10]
    // cmp r4, #0
    // beq _022234FA
    // cmp r6, #0
    // ble _022234FA
    // cmp r6, #0x20
    // bgt _022234FA
    // mov r0, #0
    // cmp r6, #0
    // ble _022234DE
    // ldr r2, _02223560 ; =ov13_0224DF10
    // ldrb r1, [r4]
    // add r0, r0, #1
    // add r4, r4, #1
    // strb r1, [r2]
    // add r2, r2, #1
    // cmp r0, r6
    // blt _022234D0
    // cmp r0, #0x20
    // bge _022234F2
    // ldr r1, _02223560 ; =ov13_0224DF10
    // add r2, r1, r0
    // mov r1, #0
    // add r0, r0, #1
    // strb r1, [r2]
    // add r2, r2, #1
    // cmp r0, #0x20
    // blt _022234E8
    // ldr r1, _02223560 ; =ov13_0224DF10
    // ldr r0, _02223554 ; =ov13_0224DEE0
    // str r1, [r0, #0x14]
    // b _0222350A
    // ldr r0, _02223560 ; =ov13_0224DF10
    // mov r1, #0xff
    // mov r2, #0x20
    // bl MI_CpuFill8
    // ldr r1, _02223564 ; =_02108FC8
    // ldr r0, _02223554 ; =ov13_0224DEE0
    // str r1, [r0, #0x14]
    // ldr r2, _02223554 ; =ov13_0224DEE0
    // ldr r0, [r2, #0x18]
    // cmp r0, #3
    // bne _02223530
    // ldr r0, [r2, #0x10]
    // ldr r1, [r2, #0x14]
    // ldr r2, [r2, #4]
    // bl WCM_SearchAsync
    // cmp r0, #3
    // bne _02223548
    // ldr r0, _02223554 ; =ov13_0224DEE0
    // mov r1, #6
    // str r1, [r0, #0x18]
    // add r0, r7, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov13_022233CC
    // cmp r0, #1
    // bne _02223548
    // ldr r0, _02223554 ; =ov13_0224DEE0
    // mov r1, #6
    // str r1, [r0, #0x18]
    // add r0, r7, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02223554: .word ov13_0224DEE0
    // _02223558: .word ov13_0224DF08
    // _0222355C: .word _02108FC0
    // _02223560: .word ov13_0224DF10
    // _02223564: .word _02108FC8
    // TODO: decompile
}


void ov13_02223568(void) {
    // push {r4, lr}
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // ldr r0, _022235A0 ; =ov13_0224DEE0
    // ldr r0, [r0, #0x18]
    // cmp r0, #5
    // bne _02223596
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // bl WCM_SearchAsync
    // cmp r0, #3
    // bne _02223596
    // ldr r0, _022235A0 ; =ov13_0224DEE0
    // mov r1, #4
    // str r1, [r0, #0x18]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r4, pc}
    // _022235A0: .word ov13_0224DEE0
    // TODO: decompile
}


void ov13_022235A4(void) {
    // push {r4, lr}
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // ldr r0, _022235D8 ; =ov13_0224DEE0
    // ldr r0, [r0, #0x18]
    // cmp r0, #7
    // bne _022235CC
    // bl WCM_DisconnectAsync
    // cmp r0, #3
    // bne _022235CC
    // ldr r0, _022235D8 ; =ov13_0224DEE0
    // mov r1, #4
    // str r1, [r0, #0x18]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _022235D8: .word ov13_0224DEE0
    // TODO: decompile
}


void ov13_022235DC(void) {
    // push {r4, lr}
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // ldr r0, _02223630 ; =ov13_0224DEE0
    // ldr r0, [r0, #0x18]
    // cmp r0, #3
    // bne _0222360E
    // bl WCM_CleanupAsync
    // cmp r0, #3
    // beq _022235FE
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, _02223630 ; =ov13_0224DEE0
    // mov r1, #2
    // str r1, [r0, #0x18]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r4, pc}
    // bl ov13_022233CC
    // cmp r0, #1
    // bne _02223626
    // ldr r0, _02223630 ; =ov13_0224DEE0
    // mov r1, #2
    // str r1, [r0, #0x18]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r4, pc}
    // _02223630: .word ov13_0224DEE0
    // TODO: decompile
}


void ov13_02223634(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // bl OS_DisableInterrupts
    // ldr r1, _022236B4 ; =ov13_0224DEE0
    // add r4, r0, #0
    // str r6, [r1, #0xc]
    // cmp r5, #0
    // beq _02223656
    // ldr r1, [r1, #0x24]
    // add r0, r5, #0
    // mov r2, #0x50
    // bl MI_CpuCopy8
    // b _02223660
    // ldr r0, [r1, #0x24]
    // mov r1, #0
    // mov r2, #0x50
    // bl MI_CpuFill8
    // ldr r1, _022236B4 ; =ov13_0224DEE0
    // add r0, r7, #0
    // ldr r1, [r1, #0x20]
    // mov r2, #0xc0
    // bl MIi_CpuCopy32
    // bl ov13_022233CC
    // cmp r0, #1
    // bne _02223684
    // ldr r0, _022236B4 ; =ov13_0224DEE0
    // mov r1, #8
    // str r1, [r0, #0x18]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _022236B4 ; =ov13_0224DEE0
    // ldr r0, [r2, #0x18]
    // cmp r0, #3
    // bne _022236AA
    // ldr r0, [r2, #0x20]
    // ldr r1, [r2, #0x24]
    // ldr r2, [r2, #0xc]
    // bl WCM_ConnectAsync
    // cmp r0, #3
    // bne _022236AA
    // ldr r0, _022236B4 ; =ov13_0224DEE0
    // mov r1, #8
    // str r1, [r0, #0x18]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _022236B4: .word ov13_0224DEE0
    // TODO: decompile
}


void ov13_022236B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r7, r0, #0
    // str r2, [sp]
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // add r0, r5, #0
    // ldr r2, _02223764 ; =ov13_0224DEE0
    // add r0, #0x53
    // mov r1, #3
    // bic r0, r1
    // add r6, r0, #0
    // str r5, [r2, #0x24]
    // add r6, #0x2f
    // mov r1, #0x1f
    // ldr r3, _02223768 ; =0x0000231F
    // str r0, [r2, #8]
    // bic r6, r1
    // str r6, [r2]
    // add r6, r6, r3
    // bic r6, r1
    // str r6, [r2, #0x20]
    // add r6, #0xdf
    // bic r6, r1
    // str r6, [r0, #4]
    // ldr r1, [sp]
    // ldr r0, [r2, #8]
    // add r5, r5, r1
    // ldr r1, [r0, #4]
    // sub r1, r5, r1
    // str r1, [r0, #8]
    // ldr r0, [r2, #8]
    // mov r1, #0
    // str r1, [r0, #0xc]
    // ldr r0, [r2, #8]
    // mov r1, #3
    // str r1, [r0]
    // str r7, [r2, #0x1c]
    // ldr r0, [r2, #0x18]
    // cmp r0, #0
    // bne _0222372A
    // sub r3, #0x1f
    // ldr r0, [r2]
    // add r1, r3, #0
    // bl WCM_Init
    // cmp r0, #0
    // beq _02223724
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02223764 ; =ov13_0224DEE0
    // mov r1, #1
    // str r1, [r0, #0x18]
    // ldr r0, _02223764 ; =ov13_0224DEE0
    // ldr r1, [r0, #0x18]
    // cmp r1, #1
    // bne _02223758
    // ldr r0, [r0, #8]
    // ldr r1, _0222376C ; =ov13_02223114
    // bl WCM_StartupAsync
    // cmp r0, #3
    // beq _02223748
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02223764 ; =ov13_0224DEE0
    // mov r1, #4
    // str r1, [r0, #0x18]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02223764: .word ov13_0224DEE0
    // _02223768: .word 0x0000231F
    // _0222376C: .word ov13_02223114
    // TODO: decompile
}


void ov13_02223770(void) {
    // push {r3, lr}
    // cmp r0, #0
    // bne _02223778
    // b _02223A72
    // mov r1, #0
    // ldrsh r2, [r0, r1]
    // cmp r2, #9
    // bls _02223782
    // b _02223A64
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0222378E: ; jump table
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _02223814
    // ldr r2, _02223A74 ; =ov13_0224DF30
    // ldr r0, [r2, #0x2c]
    // cmp r0, #4
    // bne _022237C4
    // mov r0, #3
    // str r0, [r2, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223858
    // mov r0, #6
    // blx r2
    // pop {r3, pc}
    // cmp r0, #6
    // bne _022237EC
    // ldr r0, [r2, #0x44]
    // ldr r1, [r2, #0x48]
    // ldr r2, [r2, #0x60]
    // bl WCM_SearchAsync
    // cmp r0, #3
    // beq _02223858
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223858
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #8
    // bne _02223858
    // ldr r0, [r2, #0x4c]
    // ldr r1, [r2, #0x28]
    // ldr r2, [r2, #0x58]
    // bl WCM_ConnectAsync
    // cmp r0, #3
    // beq _02223858
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223858
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r3, #1
    // str r3, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r3, [r0]
    // cmp r3, #0
    // beq _02223858
    // add r0, r2, #0
    // blx r3
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _0222384A
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // ldr r2, [r0, #0x2c]
    // cmp r2, #6
    // bne _02223858
    // mov r2, #5
    // str r2, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223858
    // mov r0, #8
    // blx r2
    // pop {r3, pc}
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r2, #3
    // str r2, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // bne _0222385A
    // b _02223A72
    // mov r0, #9
    // blx r2
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _02223882
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // ldr r2, [r0, #0x2c]
    // cmp r2, #8
    // bne _0222395A
    // mov r2, #7
    // str r2, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _0222395A
    // mov r0, #0xc
    // blx r2
    // pop {r3, pc}
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r2, #3
    // str r2, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _0222395A
    // mov r0, #0xd
    // blx r2
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _0222392A
    // ldr r2, _02223A74 ; =ov13_0224DF30
    // ldr r0, [r2, #0x2c]
    // cmp r0, #4
    // bne _022238B8
    // mov r0, #3
    // str r0, [r2, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _0222395A
    // mov r0, #0xa
    // blx r2
    // pop {r3, pc}
    // cmp r0, #6
    // bne _022238E0
    // ldr r0, [r2, #0x44]
    // ldr r1, [r2, #0x48]
    // ldr r2, [r2, #0x60]
    // bl WCM_SearchAsync
    // cmp r0, #3
    // beq _0222395A
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _0222395A
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #2
    // bne _02223902
    // bl WCM_CleanupAsync
    // cmp r0, #3
    // beq _0222395A
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _0222395A
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #8
    // bne _0222395A
    // ldr r0, [r2, #0x4c]
    // ldr r1, [r2, #0x28]
    // ldr r2, [r2, #0x58]
    // bl WCM_ConnectAsync
    // cmp r0, #3
    // beq _0222395A
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _0222395A
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r2, #3
    // str r2, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _0222395A
    // mov r0, #0xb
    // blx r2
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _022239DE
    // ldr r2, _02223A74 ; =ov13_0224DF30
    // ldr r0, [r2, #0x2c]
    // cmp r0, #4
    // bne _02223962
    // mov r0, #3
    // str r0, [r2, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // bne _0222395C
    // b _02223A72
    // mov r0, #0xe
    // blx r2
    // pop {r3, pc}
    // cmp r0, #6
    // bne _0222398A
    // ldr r0, [r2, #0x44]
    // ldr r1, [r2, #0x48]
    // ldr r2, [r2, #0x60]
    // bl WCM_SearchAsync
    // cmp r0, #3
    // beq _02223A72
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223A72
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #2
    // bne _022239AC
    // bl WCM_CleanupAsync
    // cmp r0, #3
    // beq _02223A72
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223A72
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #8
    // bne _022239D4
    // ldr r0, [r2, #0x4c]
    // ldr r1, [r2, #0x28]
    // ldr r2, [r2, #0x58]
    // bl WCM_ConnectAsync
    // cmp r0, #3
    // beq _02223A72
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223A72
    // mov r0, #2
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // cmp r0, #7
    // bne _02223A72
    // mov r0, #3
    // str r0, [r2, #0x2c]
    // pop {r3, pc}
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r2, #3
    // str r2, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223A72
    // mov r0, #0xf
    // blx r2
    // pop {r3, pc}
    // mov r2, #2
    // ldrsh r0, [r0, r2]
    // cmp r0, #0
    // bne _02223A1A
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // ldr r0, [r0, #0x2c]
    // cmp r0, #2
    // bne _02223A72
    // bl WCM_Finish
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r1, #0
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223A72
    // mov r0, #0x14
    // blx r2
    // pop {r3, pc}
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // mov r3, #3
    // str r3, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r3, [r0]
    // cmp r3, #0
    // beq _02223A72
    // add r0, r2, #0
    // blx r3
    // pop {r3, pc}
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // ldr r0, [r0, #0x2c]
    // cmp r0, #5
    // bne _02223A72
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223A72
    // mov r0, #5
    // blx r2
    // pop {r3, pc}
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223A72
    // mov r0, #4
    // blx r2
    // pop {r3, pc}
    // ldr r0, _02223A74 ; =ov13_0224DF30
    // str r1, [r0, #0x2c]
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223A72
    // mov r0, #3
    // blx r2
    // pop {r3, pc}
    // ldr r0, _02223A78 ; =ov13_0224DFB0
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02223A72
    // mov r0, #1
    // mov r1, #0
    // blx r2
    // pop {r3, pc}
    // _02223A74: .word ov13_0224DF30
    // _02223A78: .word ov13_0224DFB0
    // TODO: decompile
}


void ov13_02223A7C(void) {
    // push {r3, lr}
    // ldr r1, _02223ADC ; =ov13_0224DF30
    // ldr r0, [r1, #0x2c]
    // cmp r0, #8
    // bhi _02223AD2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02223A92: ; jump table
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // bl WCM_SearchAsync
    // cmp r0, #3
    // beq _02223AD6
    // mov r0, #0
    // pop {r3, pc}
    // bl WCM_DisconnectAsync
    // cmp r0, #3
    // beq _02223AD6
    // mov r0, #0
    // pop {r3, pc}
    // ldr r0, [r1, #8]
    // ldr r1, _02223AE0 ; =ov13_02223770
    // bl WCM_StartupAsync
    // cmp r0, #3
    // beq _02223AD6
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // nop
    // _02223ADC: .word ov13_0224DF30
    // _02223AE0: .word ov13_02223770
    // TODO: decompile
}


void ov13_02223AE4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #1
    // add r7, r1, #0
    // bl WCM_LockApList
    // bl WCM_CountApList
    // add r6, r0, #0
    // cmp r6, #0
    // ble _02223B1C
    // mov r4, #0
    // cmp r6, #0
    // ble _02223B1C
    // cmp r4, r7
    // bge _02223B1C
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl WCM_PointApList
    // add r1, r5, #0
    // mov r2, #0xc0
    // bl MIi_CpuCopy32
    // add r4, r4, #1
    // add r5, #0xc0
    // cmp r4, r6
    // blt _02223B00
    // mov r0, #0
    // bl WCM_LockApList
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02223B28(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r3, [sp]
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl OS_DisableInterrupts
    // add r7, r0, #0
    // ldr r1, _02223BFC ; =ov13_0224DF30
    // ldr r0, [sp]
    // cmp r5, #0
    // str r0, [r1, #0x60]
    // ldr r0, _02223C00 ; =ov13_0224E3E8
    // str r0, [r1, #0x44]
    // beq _02223B58
    // mov r2, #0
    // ldrb r1, [r5]
    // add r2, r2, #1
    // add r5, r5, #1
    // strb r1, [r0]
    // add r0, r0, #1
    // cmp r2, #6
    // blt _02223B48
    // b _02223B66
    // mov r1, #0xff
    // mov r2, #6
    // bl MI_CpuFill8
    // ldr r1, _02223C04 ; =_02108FC0
    // ldr r0, _02223BFC ; =ov13_0224DF30
    // str r1, [r0, #0x44]
    // ldr r2, _02223C08 ; =ov13_0224E420
    // ldr r0, _02223BFC ; =ov13_0224DF30
    // cmp r4, #0
    // str r2, [r0, #0x48]
    // beq _02223BA2
    // cmp r6, #0
    // ble _02223BA2
    // cmp r6, #0x20
    // bge _02223BA2
    // mov r0, #0
    // cmp r6, #0
    // ble _02223B8C
    // ldrb r1, [r4]
    // add r0, r0, #1
    // add r4, r4, #1
    // strb r1, [r2]
    // add r2, r2, #1
    // cmp r0, r6
    // blt _02223B7E
    // cmp r0, #0x20
    // bge _02223BB2
    // ldr r1, _02223C08 ; =ov13_0224E420
    // add r2, r1, r0
    // mov r1, #0
    // add r0, r0, #1
    // strb r1, [r2]
    // add r2, r2, #1
    // cmp r0, #0x20
    // blt _02223B96
    // b _02223BB2
    // ldr r0, _02223C08 ; =ov13_0224E420
    // mov r1, #0xff
    // mov r2, #0x20
    // bl MI_CpuFill8
    // ldr r1, _02223C0C ; =_02108FC8
    // ldr r0, _02223BFC ; =ov13_0224DF30
    // str r1, [r0, #0x48]
    // ldr r2, _02223BFC ; =ov13_0224DF30
    // ldr r0, [r2, #0x2c]
    // cmp r0, #3
    // bne _02223BD8
    // ldr r1, [r2, #0x48]
    // ldr r0, _02223C00 ; =ov13_0224E3E8
    // ldr r2, [r2, #0x60]
    // bl WCM_SearchAsync
    // cmp r0, #3
    // bne _02223BF0
    // ldr r0, _02223BFC ; =ov13_0224DF30
    // mov r1, #6
    // str r1, [r0, #0x2c]
    // add r0, r7, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov13_02223A7C
    // cmp r0, #1
    // bne _02223BF0
    // ldr r0, _02223BFC ; =ov13_0224DF30
    // mov r1, #6
    // str r1, [r0, #0x2c]
    // add r0, r7, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02223BFC: .word ov13_0224DF30
    // _02223C00: .word ov13_0224E3E8
    // _02223C04: .word _02108FC0
    // _02223C08: .word ov13_0224E420
    // _02223C0C: .word _02108FC8
    // TODO: decompile
}


void ov13_02223C10(void) {
    // push {r4, lr}
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // ldr r0, _02223C44 ; =ov13_0224DF30
    // ldr r0, [r0, #0x2c]
    // cmp r0, #7
    // bne _02223C38
    // bl WCM_DisconnectAsync
    // cmp r0, #3
    // bne _02223C38
    // ldr r0, _02223C44 ; =ov13_0224DF30
    // mov r1, #4
    // str r1, [r0, #0x2c]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02223C44: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02223C48(void) {
    // push {r4, lr}
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // ldr r0, _02223C9C ; =ov13_0224DF30
    // ldr r0, [r0, #0x2c]
    // cmp r0, #3
    // bne _02223C7A
    // bl WCM_CleanupAsync
    // cmp r0, #3
    // beq _02223C6A
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, _02223C9C ; =ov13_0224DF30
    // mov r1, #2
    // str r1, [r0, #0x2c]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r4, pc}
    // bl ov13_02223A7C
    // cmp r0, #1
    // bne _02223C92
    // ldr r0, _02223C9C ; =ov13_0224DF30
    // mov r1, #2
    // str r1, [r0, #0x2c]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r4, pc}
    // _02223C9C: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02223CA0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // bl OS_DisableInterrupts
    // ldr r1, _02223D20 ; =ov13_0224DF30
    // add r4, r0, #0
    // str r6, [r1, #0x58]
    // cmp r5, #0
    // beq _02223CC2
    // ldr r1, [r1, #0x28]
    // add r0, r5, #0
    // mov r2, #0x60
    // bl MI_CpuCopy8
    // b _02223CCC
    // ldr r0, [r1, #0x28]
    // mov r1, #0
    // mov r2, #0x60
    // bl MI_CpuFill8
    // ldr r1, _02223D20 ; =ov13_0224DF30
    // add r0, r7, #0
    // ldr r1, [r1, #0x4c]
    // mov r2, #0xc0
    // bl MIi_CpuCopy32
    // bl ov13_02223A7C
    // cmp r0, #1
    // bne _02223CF0
    // ldr r0, _02223D20 ; =ov13_0224DF30
    // mov r1, #8
    // str r1, [r0, #0x2c]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _02223D20 ; =ov13_0224DF30
    // ldr r0, [r2, #0x2c]
    // cmp r0, #3
    // bne _02223D16
    // ldr r0, [r2, #0x4c]
    // ldr r1, [r2, #0x28]
    // ldr r2, [r2, #0x58]
    // bl WCM_ConnectAsync
    // cmp r0, #3
    // bne _02223D16
    // ldr r0, _02223D20 ; =ov13_0224DF30
    // mov r1, #8
    // str r1, [r0, #0x2c]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02223D20: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02223D24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r7, r0, #0
    // str r2, [sp]
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // add r0, r5, #0
    // ldr r2, _02223DD0 ; =ov13_0224DF30
    // add r0, #0x63
    // mov r1, #3
    // bic r0, r1
    // add r6, r0, #0
    // str r5, [r2, #0x28]
    // add r6, #0x2f
    // mov r1, #0x1f
    // ldr r3, _02223DD4 ; =0x0000231F
    // str r0, [r2, #8]
    // bic r6, r1
    // str r6, [r2, #0x3c]
    // add r6, r6, r3
    // bic r6, r1
    // str r6, [r2, #0x4c]
    // add r6, #0xdf
    // bic r6, r1
    // str r6, [r0, #4]
    // ldr r1, [sp]
    // ldr r0, [r2, #8]
    // add r5, r5, r1
    // ldr r1, [r0, #4]
    // sub r1, r5, r1
    // str r1, [r0, #8]
    // ldr r0, [r2, #8]
    // mov r1, #0
    // str r1, [r0, #0xc]
    // ldr r0, [r2, #8]
    // mov r1, #3
    // str r1, [r0]
    // ldr r0, _02223DD8 ; =ov13_0224DFB0
    // str r7, [r0]
    // ldr r0, [r2, #0x2c]
    // cmp r0, #0
    // bne _02223D98
    // sub r3, #0x1f
    // ldr r0, [r2, #0x3c]
    // add r1, r3, #0
    // bl WCM_Init
    // cmp r0, #0
    // beq _02223D92
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02223DD0 ; =ov13_0224DF30
    // mov r1, #1
    // str r1, [r0, #0x2c]
    // ldr r0, _02223DD0 ; =ov13_0224DF30
    // ldr r1, [r0, #0x2c]
    // cmp r1, #1
    // bne _02223DC6
    // ldr r0, [r0, #8]
    // ldr r1, _02223DDC ; =ov13_02223770
    // bl WCM_StartupAsync
    // cmp r0, #3
    // beq _02223DB6
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02223DD0 ; =ov13_0224DF30
    // mov r1, #4
    // str r1, [r0, #0x2c]
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02223DD0: .word ov13_0224DF30
    // _02223DD4: .word 0x0000231F
    // _02223DD8: .word ov13_0224DFB0
    // _02223DDC: .word ov13_02223770
    // TODO: decompile
}


void ov13_02223DE0(void) {
    // ldr r0, _02223DE8 ; =ov13_0224DF30
    // ldr r0, [r0, #0x2c]
    // bx lr
    // nop
    // _02223DE8: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02223DEC(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // cmp r4, #0
    // ble _02223E0E
    // ldr r0, _02223E14 ; =ov13_0224DFC4
    // bl OS_LockMutex
    // ldr r1, _02223E18 ; =ov13_0224DF30
    // add r0, r4, #0
    // ldr r1, [r1, #4]
    // blx r1
    // add r4, r0, #0
    // ldr r0, _02223E14 ; =ov13_0224DFC4
    // bl OS_UnlockMutex
    // add r0, r4, #0
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02223E14: .word ov13_0224DFC4
    // _02223E18: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02223E1C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // beq _02223E3A
    // cmp r2, #0
    // ble _02223E3A
    // ldr r0, _02223E3C ; =ov13_0224DFC4
    // bl OS_LockMutex
    // ldr r1, _02223E40 ; =ov13_0224DF30
    // add r0, r4, #0
    // ldr r1, [r1, #0xc]
    // blx r1
    // ldr r0, _02223E3C ; =ov13_0224DFC4
    // bl OS_UnlockMutex
    // pop {r4, pc}
    // _02223E3C: .word ov13_0224DFC4
    // _02223E40: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02223E44(void) {
    // push {r3, lr}
    // bl OS_DisableInterrupts
    // ldr r1, _02223E64 ; =ov13_0224DF30
    // mov r2, #0
    // str r2, [r1, #0x68]
    // str r2, [r1, #0x6c]
    // ldr r3, _02223E68 ; =ov13_0224DFB4
    // add r1, r2, #0
    // add r2, r2, #1
    // stmia r3!, {r1}
    // cmp r2, #4
    // blt _02223E56
    // bl OS_RestoreInterrupts
    // pop {r3, pc}
    // _02223E64: .word ov13_0224DF30
    // _02223E68: .word ov13_0224DFB4
    // TODO: decompile
}


void ov13_02223E6C(void) {
    // push {r3, r4, r5, lr}
    // bl OS_DisableInterrupts
    // ldr r1, _02223E9C ; =ov13_0224DF30
    // ldr r5, [r1, #0x6c]
    // ldr r2, [r1, #0x68]
    // cmp r2, r5
    // bne _02223E80
    // mov r4, #0
    // b _02223E92
    // ldr r2, _02223EA0 ; =ov13_0224DFB4
    // lsl r3, r5, #2
    // ldr r4, [r2, r3]
    // add r2, r5, #1
    // str r2, [r1, #0x6c]
    // cmp r2, #4
    // blt _02223E92
    // mov r2, #0
    // str r2, [r1, #0x6c]
    // bl OS_RestoreInterrupts
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02223E9C: .word ov13_0224DF30
    // _02223EA0: .word ov13_0224DFB4
    // TODO: decompile
}


void ov13_02223EA4(void) {
    // push {r3, r4}
    // ldr r1, _02223ECC ; =ov13_0224DF30
    // ldr r3, [r1, #0x68]
    // ldr r2, [r1, #0x6c]
    // add r4, r3, #1
    // cmp r4, r2
    // beq _02223EC8
    // add r2, r2, #3
    // cmp r3, r2
    // beq _02223EC8
    // ldr r2, _02223ED0 ; =ov13_0224DFB4
    // lsl r3, r3, #2
    // str r0, [r2, r3]
    // str r4, [r1, #0x68]
    // cmp r4, #4
    // blt _02223EC8
    // mov r0, #0
    // str r0, [r1, #0x68]
    // pop {r3, r4}
    // bx lr
    // _02223ECC: .word ov13_0224DF30
    // _02223ED0: .word ov13_0224DFB4
    // TODO: decompile
}


void ov13_02223ED4(void) {
    ov13_02223EA4();
}


void ov13_02223EE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _02223F74 ; =ov13_0224DF30
    // mov r4, #1
    // str r6, [r0, #0x70]
    // bl ov13_02223E44
    // mov r0, #0xd0
    // add r7, r6, #0
    // mul r7, r0
    // ldr r0, _02223F78 ; =0x000024D0
    // add r1, r7, r0
    // mov r0, #0xc0
    // mul r0, r6
    // add r0, r1, r0
    // ldr r1, _02223F74 ; =ov13_0224DF30
    // ldr r1, [r1, #4]
    // blx r1
    // ldr r6, _02223F74 ; =ov13_0224DF30
    // cmp r0, #0
    // str r0, [r6, #0x54]
    // bne _02223F10
    // sub r0, r4, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0x1f
    // add r2, r0, r1
    // add r0, r1, #0
    // sub r0, #0x3f
    // add r3, r2, #0
    // and r3, r0
    // ldr r0, _02223F7C ; =0x00002490
    // str r3, [r6, #0x40]
    // add r2, r7, r0
    // add r0, r3, r2
    // add r0, r0, r1
    // sub r1, #0x3f
    // and r0, r1
    // str r0, [r6, #0x5c]
    // ldr r0, _02223F80 ; =ov13_02223EA4
    // add r1, r3, #0
    // bl ov13_02223D24
    // cmp r0, #0
    // bne _02223F3C
    // sub r0, r4, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r6, #0
    // add r7, r4, #0
    // mov r0, #0xa
    // bl OS_Sleep
    // bl ov13_02223E6C
    // cmp r0, #0
    // beq _02223F6C
    // cmp r0, #4
    // beq _02223F64
    // cmp r0, #5
    // beq _02223F64
    // cmp r0, #6
    // bne _02223F60
    // add r4, r6, #0
    // add r5, r7, #0
    // b _02223F64
    // mov r4, #0
    // sub r5, r4, #2
    // bl ov13_02223E6C
    // cmp r0, #0
    // bne _02223F4E
    // cmp r4, #0
    // bne _02223F40
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02223F74: .word ov13_0224DF30
    // _02223F78: .word 0x000024D0
    // _02223F7C: .word 0x00002490
    // _02223F80: .word ov13_02223EA4
    // TODO: decompile
}


void ov13_02223F84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r5, #1
    // bl ov13_02223C48
    // cmp r0, #0
    // beq _02223FC2
    // mov r6, #0
    // add r4, r6, #0
    // mov r7, #0xa
    // add r0, r7, #0
    // bl OS_Sleep
    // bl ov13_02223E6C
    // cmp r0, #0
    // beq _02223FBE
    // cmp r0, #4
    // beq _02223FB6
    // cmp r0, #5
    // beq _02223FB6
    // cmp r0, #0x14
    // bne _02223FB4
    // add r5, r4, #0
    // b _02223FB6
    // add r5, r6, #0
    // bl ov13_02223E6C
    // cmp r0, #0
    // bne _02223FA4
    // cmp r5, #0
    // bne _02223F96
    // ldr r1, _02223FD8 ; =ov13_0224DF30
    // ldr r0, [r1, #0x54]
    // cmp r0, #0
    // beq _02223FD4
    // ldr r1, [r1, #0xc]
    // blx r1
    // ldr r0, _02223FD8 ; =ov13_0224DF30
    // mov r1, #0
    // str r1, [r0, #0x54]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _02223FD8: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02223FDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // ldr r0, _022240EC ; =ov13_0224DF30
    // mov r4, #1
    // ldr r3, [r0, #0x5c]
    // ldr r0, [r0, #0x18]
    // mov r2, #0xc0
    // add r1, r0, #0
    // mul r1, r2
    // sub r5, r4, #3
    // add r6, r3, r1
    // bne _02223FFA
    // add sp, #0x30
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // mov r1, #0
    // lsl r2, r2, #0xa
    // bl ov13_02223CA0
    // cmp r0, #0
    // bne _0222400E
    // add sp, #0x30
    // sub r0, r4, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #4
    // bl OS_CreateAlarm
    // mov r0, #0x12
    // str r0, [sp]
    // ldr r1, _022240F0 ; =0x003FEC42
    // ldr r3, _022240F4 ; =ov13_02223ED4
    // add r0, sp, #4
    // mov r2, #0
    // bl OS_SetAlarm
    // mov r7, #0
    // bl ov13_02226CBC
    // ldr r1, _022240F8 ; =ov13_02245A58
    // ldr r1, [r1, #0xc]
    // cmp r0, r1
    // blo _02224038
    // mov r5, #2
    // mvn r5, r5
    // b _022240B8
    // ldr r0, _022240EC ; =ov13_0224DF30
    // ldr r0, [r0, #0x10]
    // cmp r0, #0
    // beq _02224046
    // mov r5, #7
    // mvn r5, r5
    // b _022240B8
    // mov r0, #0xa
    // bl OS_Sleep
    // bl ov13_02223E6C
    // cmp r0, #0
    // beq _022240B4
    // cmp r0, #0xc
    // bgt _0222406A
    // bge _0222407E
    // cmp r0, #5
    // bgt _022240AA
    // cmp r0, #4
    // blt _022240AA
    // beq _022240AC
    // cmp r0, #5
    // beq _022240AC
    // b _022240AA
    // cmp r0, #0x13
    // bgt _022240AA
    // cmp r0, #0xd
    // blt _022240AA
    // beq _02224084
    // cmp r0, #0x12
    // beq _022240AC
    // cmp r0, #0x13
    // beq _022240AC
    // b _022240AA
    // add r4, r7, #0
    // mov r5, #1
    // b _022240AC
    // ldr r0, _022240EC ; =ov13_0224DF30
    // ldr r0, [r0, #0x10]
    // cmp r0, #0
    // beq _02224094
    // mov r4, #0
    // add r5, r4, #0
    // sub r5, #8
    // b _022240AC
    // mov r2, #3
    // add r0, r6, #0
    // mov r1, #0
    // lsl r2, r2, #0x10
    // bl ov13_02223CA0
    // cmp r0, #0
    // bne _022240AC
    // add sp, #0x30
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #0
    // bl ov13_02223E6C
    // cmp r0, #0
    // bne _02224054
    // cmp r4, #0
    // bne _02224026
    // add r0, sp, #4
    // bl OS_CancelAlarm
    // bl ov13_02223E6C
    // cmp r0, #0
    // bne _022240BE
    // cmp r5, #0
    // ble _022240E6
    // ldr r0, _022240EC ; =ov13_0224DF30
    // mov r1, #1
    // str r1, [r0, #0x20]
    // ldr r0, _022240FC ; =ov13_02245A6C
    // bl SOC_Startup
    // cmp r0, #0
    // bge _022240E0
    // mov r5, #1
    // mvn r5, r5
    // b _022240E6
    // ldr r0, _022240EC ; =ov13_0224DF30
    // mov r1, #1
    // str r1, [r0, #0x24]
    // add r0, r5, #0
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _022240EC: .word ov13_0224DF30
    // _022240F0: .word 0x003FEC42
    // _022240F4: .word ov13_02223ED4
    // _022240F8: .word ov13_02245A58
    // _022240FC: .word ov13_02245A6C
    // TODO: decompile
}


void ov13_02224100(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r0, _02224160 ; =ov13_0224DF30
    // mov r5, #1
    // ldr r0, [r0, #0x20]
    // cmp r0, #0
    // beq _0222414C
    // bl ov13_02223C10
    // cmp r0, #0
    // beq _02224146
    // mov r6, #0
    // add r4, r6, #0
    // mov r7, #0xa
    // add r0, r7, #0
    // bl OS_Sleep
    // bl ov13_02223E6C
    // cmp r0, #0
    // beq _02224142
    // cmp r0, #4
    // beq _0222413A
    // cmp r0, #5
    // beq _0222413A
    // cmp r0, #0xe
    // bne _02224138
    // add r5, r4, #0
    // b _0222413A
    // add r5, r6, #0
    // bl ov13_02223E6C
    // cmp r0, #0
    // bne _02224128
    // cmp r5, #0
    // bne _0222411A
    // ldr r0, _02224160 ; =ov13_0224DF30
    // mov r1, #0
    // str r1, [r0, #0x20]
    // ldr r0, _02224160 ; =ov13_0224DF30
    // ldr r1, [r0, #0x24]
    // cmp r1, #0
    // beq _0222415C
    // mov r1, #0
    // str r1, [r0, #0x24]
    // bl SOC_Cleanup
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02224160: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02224164(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x6c
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // add r6, r0, #4
    // add r0, r1, #0
    // add r4, r0, #4
    // ldr r0, [sp, #0x20]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [r0]
    // cmp r0, #0
    // bls _02224238
    // add r2, sp, #0x48
    // add r2, #2
    // mov r1, #0x22
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02224190
    // add r0, sp, #0x48
    // add r0, #2
    // add r1, r6, #4
    // mov r2, #0x20
    // bl memcpy
    // add r0, sp, #0x48
    // ldr r1, [r6]
    // mov r7, #0
    // add r0, #2
    // strb r7, [r0, r1]
    // ldr r0, [sp, #4]
    // ldr r0, [r0]
    // str r0, [sp, #0x10]
    // cmp r0, #0
    // bls _0222421C
    // add r0, r6, #0
    // str r0, [sp, #0x24]
    // add r0, #0x28
    // ldr r5, [r6]
    // str r0, [sp, #0x24]
    // cmp r5, #0
    // beq _0222421C
    // cmp r5, #0x20
    // bhi _0222421C
    // cmp r5, #1
    // bne _022241D8
    // ldrb r0, [r6, #4]
    // cmp r0, #0
    // beq _0222421C
    // cmp r0, #0x20
    // beq _0222421C
    // add r0, sp, #0x48
    // add r0, #2
    // bl strlen
    // add r2, r0, #0
    // add r0, sp, #0x48
    // add r0, #2
    // add r1, r4, #4
    // bl memcmp
    // cmp r0, #0
    // bne _02224212
    // add r1, r4, #0
    // ldr r0, [sp, #0x24]
    // add r1, #0x28
    // mov r2, #6
    // bl memcmp
    // cmp r0, #0
    // bne _02224212
    // ldrh r1, [r6, #0x2e]
    // ldrh r0, [r4, #0x2e]
    // cmp r1, r0
    // beq _02224212
    // cmp r1, #0
    // bne _02224212
    // mov r0, #1
    // str r0, [sp, #0x20]
    // b _0222421C
    // ldr r0, [sp, #0x10]
    // add r7, r7, #1
    // add r4, #0x30
    // cmp r7, r0
    // blo _022241C2
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // bne _02224238
    // ldr r0, [sp, #4]
    // add r6, #0x30
    // add r4, r0, #4
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [r0]
    // ldr r0, [sp, #0xc]
    // cmp r0, r1
    // blo _02224188
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // bne _02224314
    // add r2, sp, #0x28
    // mov r1, #0x22
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02224244
    // mov r0, #0
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x14]
    // ldr r0, [sp]
    // ldr r6, [sp, #0x18]
    // add r4, r0, #4
    // ldr r0, [sp, #4]
    // add r5, r0, #4
    // ldr r0, [r0]
    // cmp r0, #0
    // bls _022242A0
    // add r7, sp, #0x28
    // add r0, r7, #0
    // add r1, r5, #4
    // mov r2, #0x20
    // bl memcpy
    // ldr r1, [r5]
    // mov r0, #0
    // strb r0, [r7, r1]
    // ldr r0, _0222432C ; =ov13_02245AC4
    // bl strlen
    // add r2, r0, #0
    // ldr r1, _0222432C ; =ov13_02245AC4
    // add r0, r7, #0
    // bl memcmp
    // cmp r0, #0
    // bne _02224294
    // ldrh r0, [r5, #0x2e]
    // cmp r0, #0
    // bne _02224294
    // mov r0, #1
    // str r0, [sp, #0x14]
    // b _022242A0
    // ldr r0, [sp, #4]
    // add r6, r6, #1
    // ldr r0, [r0]
    // add r5, #0x30
    // cmp r6, r0
    // blo _02224264
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [r0]
    // cmp r0, #0
    // bls _02224304
    // ldr r7, _0222432C ; =ov13_02245AC4
    // add r5, sp, #0x28
    // add r0, r5, #0
    // add r1, r4, #4
    // mov r2, #0x20
    // bl memcpy
    // ldr r1, [r4]
    // mov r0, #0
    // strb r0, [r5, r1]
    // add r0, r5, #0
    // bl strlen
    // add r6, r0, #0
    // add r0, r7, #0
    // bl strlen
    // cmp r6, r0
    // bne _022242F2
    // add r0, r7, #0
    // bl strlen
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl memcmp
    // cmp r0, #0
    // bne _022242F2
    // ldrh r0, [r4, #0x2e]
    // cmp r0, #0
    // bne _022242F2
    // mov r0, #1
    // str r0, [sp, #0x18]
    // b _02224304
    // ldr r0, [sp, #0xc]
    // add r4, #0x30
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [r0]
    // ldr r0, [sp, #0xc]
    // cmp r0, r1
    // blo _022242B0
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // beq _02224314
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // bne _02224314
    // mov r0, #1
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x20]
    // cmp r0, #0
    // beq _02224324
    // ldr r1, [sp, #0xc]
    // ldr r0, [sp, #8]
    // str r1, [r0]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // add sp, #0x6c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222432C: .word ov13_02245AC4
    // TODO: decompile
}


void ov13_02224330(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x70
    // mov r0, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0x20]
    // ldr r0, _022245A8 ; =ov13_0224DF30
    // mov r4, #0
    // ldr r1, [r0, #0x70]
    // mov r0, #0x30
    // mul r0, r1
    // str r0, [sp, #0x10]
    // add r0, #0x34
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // mov r0, #1
    // mvn r4, r4
    // bl ov13_02226CD8
    // str r0, [sp, #0xc]
    // cmp r0, #0
    // beq _02224368
    // ldr r1, [sp, #0x10]
    // mov r0, #1
    // bl ov13_02226CD8
    // str r0, [sp, #8]
    // cmp r0, #0
    // bne _0222436A
    // b _0222458E
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // b _02224556
    // bl ov13_02226CBC
    // ldr r1, _022245AC ; =ov13_02245A58
    // ldr r1, [r1, #0xc]
    // cmp r0, r1
    // bhs _0222445A
    // mov r0, #0
    // ldr r3, _022245B0 ; =0x0030BFFE
    // add r1, r0, #0
    // add r2, r0, #0
    // bl ov13_02223B28
    // cmp r0, #0
    // bne _02224392
    // mov r4, #1
    // mvn r4, r4
    // b _0222458E
    // add r0, sp, #0x24
    // bl OS_CreateAlarm
    // mov r0, #0x13
    // str r0, [sp]
    // ldr r1, _022245B4 ; =0x000FFB10
    // ldr r3, _022245B8 ; =ov13_02223ED4
    // add r0, sp, #0x24
    // mov r2, #0
    // bl OS_SetAlarm
    // ldr r7, _022245A8 ; =ov13_0224DF30
    // mov r5, #1
    // mov r4, #0
    // add r6, sp, #0x24
    // mov r0, #0xa
    // bl OS_Sleep
    // bl ov13_02226CBC
    // ldr r1, _022245AC ; =ov13_02245A58
    // ldr r1, [r1, #0xc]
    // cmp r0, r1
    // bhs _02224444
    // ldr r0, [r7, #0x10]
    // cmp r0, #0
    // bne _02224444
    // bl ov13_02223E6C
    // cmp r0, #0
    // beq _02224440
    // cmp r0, #0x13
    // bhi _02224436
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022243E0: ; jump table
    // mov r5, #0
    // b _02224438
    // ldr r0, [r7, #0x5c]
    // ldr r1, [r7, #0x70]
    // bl ov13_02223AE4
    // cmp r0, r4
    // ble _02224438
    // add r4, r0, #0
    // add r0, r6, #0
    // bl OS_CancelAlarm
    // mov r0, #0x13
    // str r0, [sp]
    // ldr r1, _022245B4 ; =0x000FFB10
    // ldr r3, _022245B8 ; =ov13_02223ED4
    // add r0, r6, #0
    // mov r2, #0
    // bl OS_SetAlarm
    // b _02224438
    // mov r5, #0
    // b _02224438
    // mov r5, #0
    // bl ov13_02223E6C
    // cmp r0, #0
    // bne _022243D0
    // cmp r5, #0
    // bne _022243B0
    // add r0, sp, #0x24
    // bl OS_CancelAlarm
    // bl ov13_02223E6C
    // cmp r0, #0
    // bne _0222444A
    // ldr r1, _022245A8 ; =ov13_0224DF30
    // ldr r0, [r1, #0x10]
    // cmp r0, #0
    // beq _0222445C
    // b _02224566
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [r1, #0x70]
    // cmp r4, r0
    // blt _0222446C
    // ldr r0, [sp, #0x14]
    // sub r4, r0, #6
    // b _0222458E
    // ldr r0, [sp, #0x14]
    // ldr r5, [r1, #0x5c]
    // str r0, [sp, #0x18]
    // cmp r4, #0
    // ble _022244E2
    // ble _022244E2
    // ldr r0, [sp, #0xc]
    // ldr r7, [sp, #0xc]
    // str r0, [sp, #4]
    // add r0, #8
    // add r6, r7, #0
    // str r0, [sp, #4]
    // add r6, #0x2c
    // add r1, r5, #0
    // ldr r0, [sp, #4]
    // add r1, #0xc
    // mov r2, #0x20
    // bl memcpy
    // ldrh r0, [r5, #0xa]
    // str r0, [r7, #4]
    // ldrh r0, [r5, #0xa]
    // add r1, r7, r0
    // mov r0, #0
    // strb r0, [r1, #8]
    // ldrh r1, [r5, #0x2c]
    // mov r0, #0x10
    // tst r0, r1
    // beq _022244AA
    // mov r0, #1
    // b _022244AC
    // mov r0, #0
    // strh r0, [r7, #0x32]
    // ldrb r0, [r5, #4]
    // add r7, #0x30
    // strb r0, [r6]
    // ldrb r0, [r5, #5]
    // strb r0, [r6, #1]
    // ldrb r0, [r5, #6]
    // strb r0, [r6, #2]
    // ldrb r0, [r5, #7]
    // strb r0, [r6, #3]
    // ldrb r0, [r5, #8]
    // strb r0, [r6, #4]
    // ldrb r0, [r5, #9]
    // add r5, #0xc0
    // strb r0, [r6, #5]
    // ldr r0, [sp, #4]
    // add r6, #0x30
    // add r0, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, r4
    // blt _02224486
    // ldr r0, [sp, #0xc]
    // str r4, [r0]
    // ldr r0, _022245A8 ; =ov13_0224DF30
    // ldr r0, [r0, #0x38]
    // cmp r0, #1
    // beq _0222453C
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #8]
    // add r2, sp, #0x20
    // bl ov13_02224164
    // cmp r0, #0
    // beq _0222453C
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x20]
    // add r1, r0, #4
    // mov r0, #0x30
    // mul r0, r2
    // add r4, r1, r0
    // ldr r0, _022245A8 ; =ov13_0224DF30
    // add r1, r4, #4
    // str r2, [r0, #0x18]
    // ldr r0, _022245BC ; =ov13_0224E440
    // bl strcpy
    // add r0, r4, #0
    // add r4, #0x28
    // ldrb r2, [r4]
    // ldr r1, _022245C0 ; =ov13_0224E3E0
    // add r0, #0x28
    // strb r2, [r1]
    // ldrb r2, [r0, #1]
    // strb r2, [r1, #1]
    // ldrb r2, [r0, #2]
    // strb r2, [r1, #2]
    // ldrb r2, [r0, #3]
    // strb r2, [r1, #3]
    // ldrb r2, [r0, #4]
    // strb r2, [r1, #4]
    // ldrb r0, [r0, #5]
    // strb r0, [r1, #5]
    // add r0, sp, #0x50
    // bl ov13_02226D40
    // b _02224566
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // bl memcpy
    // ldr r0, _022245A8 ; =ov13_0224DF30
    // mov r1, #2
    // str r1, [r0, #0x38]
    // bl ov13_02226F3C
    // ldr r0, [sp, #0x1c]
    // add r0, r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0x1e
    // bge _02224566
    // ldr r0, _022245A8 ; =ov13_0224DF30
    // ldr r0, [r0, #0x10]
    // cmp r0, #0
    // bne _02224566
    // b _02224370
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0x1e
    // bge _02224578
    // bl ov13_02226CBC
    // ldr r1, _022245AC ; =ov13_02245A58
    // ldr r1, [r1, #0xc]
    // cmp r0, r1
    // bls _0222457E
    // mov r4, #2
    // mvn r4, r4
    // b _0222458E
    // ldr r0, _022245A8 ; =ov13_0224DF30
    // ldr r0, [r0, #0x10]
    // cmp r0, #0
    // beq _0222458C
    // mov r4, #7
    // mvn r4, r4
    // b _0222458E
    // mov r4, #1
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // beq _02224598
    // bl ov13_02226CFC
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _022245A2
    // bl ov13_02226CFC
    // add r0, r4, #0
    // add sp, #0x70
    // pop {r3, r4, r5, r6, r7, pc}
    // _022245A8: .word ov13_0224DF30
    // _022245AC: .word ov13_02245A58
    // _022245B0: .word 0x0030BFFE
    // _022245B4: .word 0x000FFB10
    // _022245B8: .word ov13_02223ED4
    // _022245BC: .word ov13_0224E440
    // _022245C0: .word ov13_0224E3E0
    // TODO: decompile
}


void ov13_022245C4(void) {
    SOC_SendTo(3, 0);
}


void ov13_022245DC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r1, #0
    // mov r1, #8
    // add r0, sp, #4
    // strb r1, [r0, #4]
    // mov r1, #2
    // strb r1, [r0, #5]
    // sub r1, r1, #3
    // str r1, [sp, #0xc]
    // ldr r1, _02224614 ; =0x000001E6
    // add r4, r2, #0
    // strh r1, [r0, #6]
    // bl SOCL_GetHostID
    // add r1, sp, #4
    // bl SOC_U32to4U8
    // add r0, r5, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // add r3, r6, #0
    // str r4, [sp]
    // bl ov13_022245C4
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _02224614: .word 0x000001E6
    // TODO: decompile
}


void ov13_02224618(void) {
    ov13_022245DC();
}


void ov13_02224624(void) {
    // push {r3, r4, r5, r6}
    // ldrh r5, [r0]
    // mov r3, #0
    // asr r4, r5, #8
    // lsl r4, r4, #0x18
    // lsr r6, r4, #0x18
    // lsl r4, r5, #8
    // mov r5, #0xff
    // lsl r5, r5, #8
    // and r4, r5
    // orr r4, r6
    // lsl r4, r4, #0x10
    // lsr r4, r4, #0x10
    // str r4, [r1]
    // ldrh r6, [r0, #2]
    // asr r1, r6, #8
    // lsl r1, r1, #0x18
    // lsr r4, r1, #0x18
    // lsl r1, r6, #8
    // and r1, r5
    // orr r1, r4
    // lsl r1, r1, #0x10
    // lsr r4, r1, #0x10
    // add r1, r0, #6
    // str r4, [r2]
    // add r2, r1, r4
    // add r4, r0, #0
    // cmp r0, r2
    // bhs _02224668
    // ldrb r1, [r4]
    // add r4, r4, #1
    // add r3, r3, r1
    // cmp r4, r2
    // blo _0222465E
    // ldrh r5, [r2]
    // lsl r1, r3, #0x10
    // lsr r1, r1, #0x10
    // asr r2, r5, #8
    // lsl r2, r2, #0x18
    // lsr r4, r2, #0x18
    // mov r2, #0xff
    // lsl r3, r5, #8
    // lsl r2, r2, #8
    // and r2, r3
    // orr r2, r4
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x10
    // cmp r1, r2
    // beq _0222468C
    // mov r0, #0
    // pop {r3, r4, r5, r6}
    // bx lr
    // add r0, r0, #6
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}


void ov13_02224694(void) {
    // push {r3, r4, r5, r6}
    // add r4, r0, #0
    // ldr r0, [r4]
    // cmp r0, r1
    // blo _022246A4
    // mov r0, #0
    // pop {r3, r4, r5, r6}
    // bx lr
    // ldrh r5, [r0]
    // asr r1, r5, #8
    // lsl r1, r1, #0x18
    // lsr r6, r1, #0x18
    // lsl r1, r5, #8
    // mov r5, #0xff
    // lsl r5, r5, #8
    // and r1, r5
    // orr r1, r6
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // str r1, [r2]
    // ldrh r6, [r0, #2]
    // add r0, r0, #4
    // asr r1, r6, #8
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // lsl r1, r6, #8
    // and r1, r5
    // orr r1, r2
    // lsl r1, r1, #0x10
    // lsr r2, r1, #0x10
    // str r2, [r3]
    // add r2, #0xb
    // mov r1, #7
    // bic r2, r1
    // sub r1, r2, #4
    // add r1, r0, r1
    // str r1, [r4]
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}


void ov13_022246E4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r5, #8
    // str r5, [sp]
    // add r3, r2, #0
    // ldrh r2, [r0]
    // add r4, r1, #0
    // add r0, sp, #0
    // asr r1, r2, #8
    // lsl r6, r2, #8
    // mov r2, #0xff
    // lsl r1, r1, #0x18
    // lsl r2, r2, #8
    // lsr r1, r1, #0x18
    // and r2, r6
    // orr r1, r2
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // add r1, r5, r1
    // add r2, r4, #0
    // bl ov13_02224694
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov13_02224718(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r3, #0
    // add r6, r0, #0
    // add r0, r7, #0
    // sub r0, #8
    // str r1, [sp, #4]
    // lsl r0, r0, #0x10
    // add r1, r2, #0
    // mov r5, #0
    // strb r5, [r1]
    // lsr r0, r0, #0x10
    // strb r5, [r1, #1]
    // asr r2, r0, #8
    // strb r5, [r1, #2]
    // lsl r2, r2, #0x18
    // strb r5, [r1, #3]
    // lsr r3, r2, #0x18
    // lsl r2, r0, #8
    // mov r0, #0xff
    // strb r5, [r1, #4]
    // lsl r0, r0, #8
    // strb r5, [r1, #5]
    // and r0, r2
    // strb r5, [r1, #6]
    // orr r0, r3
    // strb r5, [r1, #7]
    // ldr r3, [sp, #0x20]
    // add r4, r6, #0
    // strh r0, [r1]
    // cmp r3, #0
    // beq _02224768
    // mov r0, #0x10
    // str r0, [sp]
    // add r0, r6, #6
    // add r2, r7, #0
    // bl ov13_02225358
    // add r7, #8
    // b _02224770
    // add r0, r6, #6
    // add r2, r7, #0
    // bl memcpy
    // mov r0, #0
    // strb r0, [r6]
    // strb r0, [r6, #1]
    // strb r0, [r6, #2]
    // strb r0, [r6, #3]
    // strb r0, [r6, #4]
    // strb r0, [r6, #5]
    // ldr r0, [sp, #4]
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // asr r0, r1, #8
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r1, r0
    // orr r1, r2
    // strh r1, [r6]
    // lsl r1, r7, #0x10
    // lsr r2, r1, #0x10
    // asr r1, r2, #8
    // lsl r1, r1, #0x18
    // lsl r2, r2, #8
    // lsr r1, r1, #0x18
    // and r0, r2
    // orr r0, r1
    // strh r0, [r6, #2]
    // add r0, r4, #6
    // add r4, r0, r7
    // add r1, r6, #0
    // cmp r6, r4
    // bhs _022247BC
    // ldrb r0, [r1]
    // add r1, r1, #1
    // add r5, r5, r0
    // cmp r1, r4
    // blo _022247B2
    // lsl r0, r5, #0x10
    // lsr r1, r0, #0x10
    // asr r0, r1, #8
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r0, r1
    // orr r0, r2
    // strh r0, [r4]
    // add r0, r4, #2
    // sub r0, r0, r6
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_022247DC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // lsl r0, r1, #0x10
    // add r4, r3, #0
    // mov r3, #0
    // lsr r0, r0, #0x10
    // add r7, r2, #0
    // strb r3, [r5]
    // asr r1, r0, #8
    // lsl r2, r0, #8
    // mov r0, #0xff
    // strb r3, [r5, #1]
    // lsl r1, r1, #0x18
    // lsl r0, r0, #8
    // strb r3, [r5, #2]
    // lsr r1, r1, #0x18
    // and r2, r0
    // orr r1, r2
    // strb r3, [r5, #3]
    // add r2, r4, #0
    // strh r1, [r5]
    // add r2, #0xb
    // mov r1, #7
    // bic r2, r1
    // lsl r1, r4, #0x10
    // sub r6, r2, #4
    // lsr r2, r1, #0x10
    // asr r1, r2, #8
    // lsl r1, r1, #0x18
    // lsl r2, r2, #8
    // and r0, r2
    // lsr r1, r1, #0x18
    // orr r0, r1
    // strh r0, [r5, #2]
    // add r5, r5, #4
    // add r0, r5, #0
    // add r1, r3, #0
    // add r2, r6, #0
    // bl memset
    // add r0, r5, #0
    // add r1, r7, #0
    // add r2, r4, #0
    // bl memcpy
    // add r0, r5, r6
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_0222483C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0
    // strb r0, [r4]
    // strb r0, [r4, #1]
    // strb r0, [r4, #2]
    // strb r0, [r4, #3]
    // strb r0, [r4, #4]
    // strb r0, [r4, #5]
    // strb r0, [r4, #6]
    // strb r0, [r4, #7]
    // add r0, r4, #0
    // add r0, #8
    // bl ov13_022247DC
    // sub r0, r0, r4
    // add r1, r0, #0
    // sub r1, #8
    // strh r1, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov13_02224864(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r1, [sp]
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    // bl ov13_02224624
    // mov r6, #0
    // add r5, r0, #0
    // add r7, r6, #0
    // str r5, [sp, #8]
    // str r6, [sp, #4]
    // cmp r5, #0
    // bne _02224886
    // add sp, #0x1c
    // add r0, r6, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x18]
    // cmp r0, #1
    // beq _02224892
    // add sp, #0x1c
    // add r0, r6, #0
    // pop {r4, r5, r6, r7, pc}
    // ldr r4, [sp, #0x14]
    // add r0, r5, #0
    // add r0, #8
    // str r0, [sp, #8]
    // add r0, sp, #8
    // add r1, r5, r4
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // bl ov13_02224694
    // cmp r0, #0
    // beq _02224912
    // ldr r1, [sp, #0x10]
    // cmp r1, #1
    // beq _022248BA
    // cmp r1, #2
    // beq _022248D2
    // cmp r1, #5
    // beq _022248EC
    // b _02224902
    // ldrh r1, [r0]
    // asr r0, r1, #8
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r0, r1
    // orr r0, r2
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // b _02224902
    // ldrh r1, [r0]
    // asr r0, r1, #8
    // lsl r2, r1, #8
    // mov r1, #0xff
    // lsl r0, r0, #0x18
    // lsl r1, r1, #8
    // lsr r0, r0, #0x18
    // and r1, r2
    // orr r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // b _02224902
    // ldrh r1, [r0]
    // asr r0, r1, #8
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r0, r1
    // orr r0, r2
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // add r0, sp, #8
    // add r1, r5, r4
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // bl ov13_02224694
    // cmp r0, #0
    // bne _022248AA
    // cmp r6, #1
    // bne _0222491C
    // ldr r0, [sp, #4]
    // cmp r0, #1
    // beq _02224922
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // cmp r7, #1
    // blt _0222492C
    // mov r1, #1
    // ldr r0, [sp]
    // b _02224930
    // ldr r0, [sp]
    // mov r1, #0
    // str r1, [r0]
    // mov r0, #1
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02224938(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r6, r2, #0
    // add r1, sp, #8
    // add r2, sp, #4
    // add r4, r3, #0
    // bl ov13_02224624
    // add r1, r0, #0
    // bne _02224954
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, [sp, #8]
    // cmp r0, r5
    // beq _02224960
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, r5, r6, pc}
    // cmp r4, #0
    // beq _0222497A
    // mov r0, #0x10
    // str r0, [sp]
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // add r3, r4, #0
    // bl ov13_02225510
    // ldr r0, [sp, #4]
    // sub r0, #8
    // str r0, [sp, #4]
    // b _02224982
    // ldr r2, [sp, #4]
    // add r0, r6, #0
    // bl memcpy
    // ldr r0, [sp, #4]
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov13_02224988(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // mov r1, #1
    // add r4, r0, #0
    // add r2, sp, #4
    // lsl r1, r1, #8
    // add r0, sp, #4
    // strh r1, [r0]
    // ldr r3, _02224A10 ; =ov13_02242680
    // add r2, #2
    // mov r1, #7
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0222499E
    // ldr r0, _02224A14 ; =ov13_02245A58
    // mov r1, #1
    // ldr r0, [r0]
    // add r2, sp, #4
    // mov r3, #2
    // bl ov13_022247DC
    // mov r1, #2
    // add r2, sp, #4
    // add r3, r1, #0
    // bl ov13_022247DC
    // ldr r1, _02224A18 ; =ov13_0224DF30
    // ldr r1, [r1, #0x50]
    // cmp r1, #0
    // beq _022249D4
    // mov r1, #5
    // add r2, sp, #4
    // mov r3, #2
    // bl ov13_022247DC
    // add r2, sp, #4
    // mov r1, #3
    // add r2, #2
    // mov r3, #7
    // bl ov13_022247DC
    // ldr r1, _02224A18 ; =ov13_0224DF30
    // add r3, r0, #0
    // ldr r1, [r1, #0x50]
    // cmp r1, #0
    // beq _022249F6
    // ldr r2, _02224A1C ; =ov13_0224E3D8
    // mov r1, #4
    // mov r3, #6
    // bl ov13_022247DC
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // add r0, r4, #0
    // ldr r4, _02224A14 ; =ov13_02245A58
    // ldr r2, _02224A20 ; =ov13_0224E464
    // ldr r4, [r4]
    // mov r1, #2
    // sub r3, r3, r4
    // add r3, #8
    // bl ov13_02224718
    // add sp, #0x10
    // pop {r4, pc}
    // _02224A10: .word ov13_02242680
    // _02224A14: .word ov13_02245A58
    // _02224A18: .word ov13_0224DF30
    // _02224A1C: .word ov13_0224E3D8
    // _02224A20: .word ov13_0224E464
    // TODO: decompile
}


void ov13_02224A24(void) {
    OS_GetMacAddress();
}


void ov13_02224A30(void) {
    // push {r3, r4, lr}
    // sub sp, #0x4c
    // ldr r1, _02224B1C ; =ov13_02245B18
    // add r4, r0, #0
    // ldrb r0, [r1]
    // add r2, r4, #0
    // add r2, #0xc
    // strb r0, [r4, #0xc]
    // ldrb r0, [r1, #1]
    // strb r0, [r2, #1]
    // ldrb r0, [r1, #2]
    // strb r0, [r2, #2]
    // ldrb r0, [r1, #3]
    // add r1, sp, #4
    // add r1, #2
    // strb r0, [r2, #3]
    // ldr r0, _02224B20 ; =ov13_0224E3E0
    // ldrb r2, [r0]
    // strb r2, [r1]
    // ldrb r2, [r0, #1]
    // strb r2, [r1, #1]
    // ldrb r2, [r0, #2]
    // strb r2, [r1, #2]
    // ldrb r2, [r0, #3]
    // strb r2, [r1, #3]
    // ldrb r2, [r0, #4]
    // ldrb r0, [r0, #5]
    // strb r2, [r1, #4]
    // strb r0, [r1, #5]
    // add r1, sp, #0
    // ldrb r2, [r1, #6]
    // mov r0, #0xfd
    // and r0, r2
    // strb r0, [r1, #6]
    // add r0, sp, #0
    // bl ov13_02224A24
    // add r1, sp, #0
    // ldrb r2, [r1]
    // ldr r0, _02224B24 ; =ov13_0224E3D8
    // strb r2, [r0]
    // ldrb r2, [r1, #1]
    // strb r2, [r0, #1]
    // ldrb r2, [r1, #2]
    // strb r2, [r0, #2]
    // ldrb r2, [r1, #3]
    // strb r2, [r0, #3]
    // ldrb r2, [r1, #4]
    // strb r2, [r0, #4]
    // ldrb r2, [r1, #5]
    // strb r2, [r0, #5]
    // add r0, sp, #4
    // add r0, #2
    // mov r2, #6
    // bl memcmp
    // cmp r0, #0
    // bgt _02224AC4
    // add r1, sp, #0
    // ldrb r0, [r1]
    // strb r0, [r4]
    // ldrb r0, [r1, #1]
    // strb r0, [r4, #1]
    // ldrb r0, [r1, #2]
    // strb r0, [r4, #2]
    // ldrb r0, [r1, #3]
    // strb r0, [r4, #3]
    // ldrb r0, [r1, #4]
    // strb r0, [r4, #4]
    // ldrb r0, [r1, #5]
    // add r1, sp, #4
    // add r1, #2
    // strb r0, [r4, #5]
    // b _02224AE2
    // add r1, sp, #4
    // add r1, #2
    // ldrb r0, [r1]
    // strb r0, [r4]
    // ldrb r0, [r1, #1]
    // strb r0, [r4, #1]
    // ldrb r0, [r1, #2]
    // strb r0, [r4, #2]
    // ldrb r0, [r1, #3]
    // strb r0, [r4, #3]
    // ldrb r0, [r1, #4]
    // strb r0, [r4, #4]
    // ldrb r0, [r1, #5]
    // add r1, sp, #0
    // strb r0, [r4, #5]
    // ldrb r0, [r1]
    // strb r0, [r4, #6]
    // ldrb r0, [r1, #1]
    // strb r0, [r4, #7]
    // ldrb r0, [r1, #2]
    // strb r0, [r4, #8]
    // ldrb r0, [r1, #3]
    // strb r0, [r4, #9]
    // ldrb r0, [r1, #4]
    // strb r0, [r4, #0xa]
    // ldrb r0, [r1, #5]
    // strb r0, [r4, #0xb]
    // ldr r0, _02224B28 ; =ov13_02245A58
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _02224B14
    // add r0, sp, #0x2c
    // add r1, sp, #0
    // bl ov13_02226D40
    // add r1, sp, #4
    // add r0, sp, #0xc
    // add r1, #2
    // bl ov13_02226D40
    // mov r0, #1
    // add sp, #0x4c
    // pop {r3, r4, pc}
    // nop
    // _02224B1C: .word ov13_02245B18
    // _02224B20: .word ov13_0224E3E0
    // _02224B24: .word ov13_0224E3D8
    // _02224B28: .word ov13_02245A58
    // TODO: decompile
}


void ov13_02224B2C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r1, r0, #0
    // str r1, [sp, #4]
    // add r1, #8
    // str r1, [sp, #4]
    // str r1, [sp, #0x14]
    // mov r1, #0
    // str r1, [sp]
    // ldrh r1, [r0]
    // add r3, sp, #0xc
    // asr r0, r1, #8
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r0, r1
    // orr r0, r2
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, sp, #0x14
    // add r1, r2, r1
    // add r2, sp, #0x10
    // bl ov13_02224694
    // add r5, r0, #0
    // bne _02224B6C
    // b _02224CDC
    // ldr r2, [sp, #0x10]
    // ldr r0, _02224CE4 ; =0x00000201
    // sub r1, r2, r0
    // cmp r1, #9
    // bhi _02224BFA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02224B82: ; jump table
    // ldr r3, _02224CE8 ; =ov13_0224E284
    // mov r0, #0
    // add r2, r3, #0
    // add r1, r0, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r2, [sp, #0xc]
    // add r0, r3, #0
    // add r1, r5, #0
    // bl memcpy
    // mov r0, #1
    // str r0, [sp]
    // b _02224CC6
    // ldrh r1, [r5]
    // asr r0, r1, #8
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r0, r1
    // orr r0, r2
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // ldr r0, _02224CEC ; =ov13_0224E2B0
    // str r1, [r0]
    // b _02224CC6
    // ldrh r3, [r5]
    // ldr r1, _02224CF0 ; =ov13_0224E184
    // mov r0, #0
    // asr r2, r3, #8
    // lsl r2, r2, #0x18
    // lsr r4, r2, #0x18
    // mov r2, #0xff
    // lsl r3, r3, #8
    // lsl r2, r2, #8
    // and r2, r3
    // orr r2, r4
    // lsl r2, r2, #0x10
    // lsr r3, r2, #0x10
    // mov r2, #0x57
    // lsl r2, r2, #2
    // add r0, r0, #1
    // str r3, [r1, r2]
    // add r1, #0x28
    // cmp r0, #4
    // blt _02224BF0
    // b _02224CC6
    // ldrh r3, [r5]
    // ldr r0, _02224CF0 ; =ov13_0224E184
    // mov r1, #0
    // asr r2, r3, #8
    // lsl r2, r2, #0x18
    // lsr r4, r2, #0x18
    // mov r2, #0xff
    // lsl r3, r3, #8
    // lsl r2, r2, #8
    // and r2, r3
    // orr r2, r4
    // lsl r2, r2, #0x10
    // lsr r3, r2, #0x10
    // mov r2, #0x16
    // lsl r2, r2, #4
    // add r1, r1, #1
    // str r3, [r0, r2]
    // add r0, #0x28
    // cmp r1, #4
    // blt _02224C1A
    // b _02224CC6
    // ldrh r1, [r5]
    // asr r0, r1, #8
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r0, r1
    // orr r0, r2
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // ldr r0, _02224CEC ; =ov13_0224E2B0
    // str r1, [r0, #4]
    // b _02224CC6
    // add r0, r0, #5
    // sub r2, r2, r0
    // mov r0, #0x28
    // mul r0, r2
    // ldr r1, _02224CF4 ; =ov13_0224E2E8
    // mov r2, #0x20
    // add r0, r1, r0
    // mov r1, #0
    // bl memset
    // ldr r0, _02224CEC ; =ov13_0224E2B0
    // ldr r1, _02224CF8 ; =0x00000206
    // ldr r0, [r0, #0x30]
    // cmp r0, #1
    // bne _02224C8C
    // ldr r2, [sp, #0x10]
    // ldr r0, _02224CF4 ; =ov13_0224E2E8
    // sub r2, r2, r1
    // mov r1, #0x28
    // mul r1, r2
    // add r4, r0, r1
    // ldr r0, [sp, #0xc]
    // mov r6, #0
    // cmp r0, #0
    // ble _02224CC6
    // add r7, r6, #0
    // ldrsb r1, [r5, r7]
    // add r0, r4, #0
    // add r5, r5, #1
    // bl ov13_02226D0C
    // add r4, r4, r0
    // ldr r0, [sp, #0xc]
    // add r6, r6, #1
    // cmp r6, r0
    // blt _02224C76
    // b _02224CC6
    // ldr r2, [sp, #0x10]
    // ldr r0, _02224CF4 ; =ov13_0224E2E8
    // sub r2, r2, r1
    // mov r1, #0x28
    // mul r1, r2
    // add r0, r0, r1
    // ldr r2, [sp, #0xc]
    // add r1, r5, #0
    // bl memcpy
    // b _02224CC6
    // ldr r3, _02224CFC ; =ov13_0224E380
    // mov r0, #0
    // add r2, r3, #0
    // add r1, r0, #0
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r2, [sp, #0xc]
    // add r0, r3, #0
    // add r1, r5, #0
    // bl memcpy
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #8]
    // add r0, sp, #0x14
    // add r1, r2, r1
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // bl ov13_02224694
    // add r5, r0, #0
    // beq _02224CDC
    // b _02224B6C
    // ldr r0, [sp]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02224CE4: .word 0x00000201
    // _02224CE8: .word ov13_0224E284
    // _02224CEC: .word ov13_0224E2B0
    // _02224CF0: .word ov13_0224E184
    // _02224CF4: .word ov13_0224E2E8
    // _02224CF8: .word 0x00000206
    // _02224CFC: .word ov13_0224E380
    // TODO: decompile
}


void ov13_02224D00(void) {
    // push {r4, r5, r6, r7}
    // add r4, r2, #0
    // mov r2, #0
    // add r5, r1, #0
    // add r3, r2, #0
    // cmp r4, #0
    // ble _02224DAE
    // mov r7, #0x1f
    // ldrsb r1, [r5, r3]
    // cmp r1, #0x63
    // bgt _02224D66
    // bge _02224D7E
    // cmp r1, #0x61
    // bgt _02224D60
    // bge _02224D7E
    // add r6, r1, #0
    // sub r6, #0x30
    // cmp r6, #0x16
    // bhi _02224D8A
    // add r6, r6, r6
    // add r6, pc
    // ldrh r6, [r6, #6]
    // lsl r6, r6, #0x10
    // asr r6, r6, #0x10
    // add pc, r6
    // _02224D32: ; jump table
    // cmp r1, #0x62
    // beq _02224D7E
    // b _02224D8A
    // cmp r1, #0x65
    // bgt _02224D72
    // bge _02224D7E
    // cmp r1, #0x64
    // beq _02224D7E
    // b _02224D8A
    // cmp r1, #0x66
    // beq _02224D7E
    // b _02224D8A
    // sub r1, #0x30
    // add r2, r2, r1
    // b _02224D90
    // sub r1, #0x57
    // add r2, r2, r1
    // b _02224D90
    // sub r1, #0x37
    // add r2, r2, r1
    // b _02224D90
    // mov r0, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // lsr r6, r3, #0x1f
    // lsl r1, r3, #0x1f
    // sub r1, r1, r6
    // ror r1, r7
    // add r1, r6, r1
    // bne _02224DA0
    // lsl r2, r2, #4
    // b _02224DA8
    // add r6, r3, r6
    // asr r1, r6, #1
    // strb r2, [r0, r1]
    // mov r2, #0
    // add r3, r3, #1
    // cmp r3, r4
    // blt _02224D10
    // mov r0, #1
    // pop {r4, r5, r6, r7}
    // bx lr
    // TODO: decompile
}


void ov13_02224DB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _02224F1C ; =ov13_0224E09C
    // ldr r1, _02224F20 ; =ov13_0224E284
    // bl strcpy
    // ldr r1, _02224F24 ; =ov13_0224E2B0
    // ldr r0, [r1]
    // cmp r0, #3
    // bls _02224DCE
    // b _02224F0E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02224DDA: ; jump table
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // mov r1, #0
    // str r1, [r0, #0xc]
    // b _02224F14
    // ldr r1, [r1, #4]
    // cmp r1, #0
    // bne _02224DF8
    // mov r0, #6
    // mvn r0, r0
    // str r0, [sp]
    // b _02224F14
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // ldr r6, _02224F2C ; =ov13_0224E2E8
    // ldr r5, _02224F30 ; =ov13_0224E0C4
    // str r1, [r0, #0x10]
    // mov r7, #0
    // add r4, sp, #4
    // add r0, sp, #4
    // add r1, r6, #0
    // mov r2, #0x20
    // bl memcpy
    // mov r1, #0
    // add r0, sp, #0x24
    // strb r1, [r0]
    // add r0, sp, #4
    // bl strlen
    // cmp r0, #0x10
    // bhi _02224E3C
    // cmp r0, #0xa
    // blo _02224E2E
    // beq _02224E66
    // cmp r0, #0xd
    // beq _02224E78
    // cmp r0, #0x10
    // beq _02224EA4
    // b _02224ED0
    // cmp r0, #0
    // bhi _02224E36
    // beq _02224ED6
    // b _02224ED0
    // cmp r0, #5
    // beq _02224E4A
    // b _02224ED0
    // cmp r0, #0x1a
    // bhi _02224E44
    // beq _02224E92
    // b _02224ED0
    // cmp r0, #0x20
    // beq _02224EBE
    // b _02224ED0
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // mov r1, #1
    // str r1, [r0, #0xc]
    // ldrb r0, [r4]
    // strb r0, [r5]
    // ldrb r0, [r4, #1]
    // strb r0, [r5, #1]
    // ldrb r0, [r4, #2]
    // strb r0, [r5, #2]
    // ldrb r0, [r4, #3]
    // strb r0, [r5, #3]
    // ldrb r0, [r4, #4]
    // strb r0, [r5, #4]
    // b _02224ED6
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // mov r1, #1
    // str r1, [r0, #0xc]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0xa
    // bl ov13_02224D00
    // b _02224ED6
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // mov r1, #2
    // str r1, [r0, #0xc]
    // add r3, r4, #0
    // add r2, r5, #0
    // mov r1, #0xd
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02224E84
    // b _02224ED6
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // mov r1, #2
    // str r1, [r0, #0xc]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x1a
    // bl ov13_02224D00
    // b _02224ED6
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // mov r1, #3
    // str r1, [r0, #0xc]
    // add r3, r4, #0
    // add r2, r5, #0
    // mov r1, #0x10
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02224EB0
    // b _02224ED6
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // mov r1, #3
    // str r1, [r0, #0xc]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x20
    // bl ov13_02224D00
    // b _02224ED6
    // mov r0, #6
    // mvn r0, r0
    // str r0, [sp]
    // add r7, r7, #1
    // add r6, #0x28
    // add r5, #0x20
    // cmp r7, #4
    // blt _02224E04
    // b _02224F14
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // mov r1, #4
    // ldr r4, _02224F34 ; =ov13_0224E144
    // ldr r3, _02224F38 ; =ov13_0224E380
    // str r1, [r0, #0xc]
    // mov r2, #8
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r2, r2, #1
    // bne _02224EEE
    // b _02224F14
    // ldr r0, _02224F28 ; =ov13_0224E0B0
    // mov r1, #5
    // ldr r4, _02224F34 ; =ov13_0224E144
    // ldr r3, _02224F38 ; =ov13_0224E380
    // str r1, [r0, #0xc]
    // mov r2, #8
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r2, r2, #1
    // bne _02224F04
    // b _02224F14
    // mov r0, #6
    // mvn r0, r0
    // str r0, [sp]
    // ldr r0, [sp]
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02224F1C: .word ov13_0224E09C
    // _02224F20: .word ov13_0224E284
    // _02224F24: .word ov13_0224E2B0
    // _02224F28: .word ov13_0224E0B0
    // _02224F2C: .word ov13_0224E2E8
    // _02224F30: .word ov13_0224E0C4
    // _02224F34: .word ov13_0224E144
    // _02224F38: .word ov13_0224E380
    // TODO: decompile
}


void ov13_02224F3C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // mov r4, #0
    // sub r0, r4, #5
    // str r0, [sp, #8]
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #1
    // str r4, [sp, #0xc]
    // str r4, [sp, #4]
    // add r6, r4, #0
    // str r1, [r0, #0x1c]
    // b _022252EE
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // bl OS_Sleep
    // ldr r0, _02225284 ; =ov13_0224DF30
    // ldr r0, [r0, #0x1c]
    // cmp r0, #0xa
    // bls _02224F66
    // b _022252EE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02224F72: ; jump table
    // bl ov13_02224330
    // str r0, [sp, #8]
    // cmp r0, #1
    // beq _02224F96
    // mov r6, #1
    // b _022252EE
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x38]
    // bl ov13_02226F3C
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #2
    // str r1, [r0, #0x1c]
    // b _022252EE
    // bl ov13_02223FDC
    // str r0, [sp, #8]
    // cmp r0, #1
    // beq _02224FB6
    // mov r6, #1
    // b _022252EE
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #3
    // str r1, [r0, #0x1c]
    // b _022252EE
    // mov r0, #2
    // add r1, r0, #0
    // mov r2, #0
    // bl SOC_Socket
    // add r4, r0, #0
    // bpl _02224FD6
    // mov r0, #1
    // mvn r0, r0
    // str r0, [sp, #8]
    // mov r6, #1
    // b _022252EE
    // add r5, sp, #0x24
    // mov r1, #0
    // str r1, [r5]
    // str r1, [r5, #4]
    // mov r3, #8
    // add r2, sp, #0x10
    // strb r3, [r2, #0x14]
    // mov r3, #2
    // strb r3, [r2, #0x15]
    // ldr r3, _02225288 ; =0x000001E6
    // strh r3, [r2, #0x16]
    // str r1, [sp, #0x28]
    // add r1, r5, #0
    // bl SOC_Bind
    // str r0, [sp, #8]
    // cmp r0, #0
    // bge _02225004
    // mov r0, #1
    // mvn r0, r0
    // str r0, [sp, #8]
    // mov r6, #1
    // b _022252EE
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #4
    // str r1, [r0, #0x1c]
    // b _022252EE
    // bl ov13_02226CBC
    // ldr r1, _0222528C ; =ov13_02245A58
    // ldr r1, [r1, #0xc]
    // cmp r0, r1
    // blo _02225028
    // add r0, r4, #0
    // bl SOC_Close
    // mov r0, #2
    // mvn r0, r0
    // str r0, [sp, #8]
    // mov r6, #1
    // b _022252EE
    // mov r1, #8
    // add r0, sp, #0x10
    // strb r1, [r0, #0xc]
    // ldr r0, _02225290 ; =ov13_0224E3F0
    // add r1, sp, #0x1c
    // bl ov13_02224A30
    // add r0, sp, #0x1c
    // mov r2, #2
    // str r0, [sp]
    // ldr r1, _02225294 ; =ov13_0224EC64
    // add r0, r4, #0
    // lsl r2, r2, #0xa
    // mov r3, #4
    // bl SOC_RecvFrom
    // cmp r0, #0
    // ble _02225126
    // ldr r0, _02225294 ; =ov13_0224EC64
    // ldr r1, _02225298 ; =ov13_0224DF80
    // bl ov13_02224864
    // cmp r0, #0
    // beq _02225126
    // bl ov13_02226CBC
    // ldr r1, _0222529C ; =0x00007530
    // add r1, r0, r1
    // ldr r0, _0222528C ; =ov13_02245A58
    // str r1, [r0, #0xc]
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #5
    // str r1, [r0, #0x1c]
    // mov r1, #4
    // str r1, [r0, #0x38]
    // bl ov13_02226F3C
    // b _022252EE
    // ldr r0, _02225294 ; =ov13_0224EC64
    // bl ov13_02224988
    // add r3, r0, #0
    // ldr r0, _02225284 ; =ov13_0224DF30
    // ldr r2, _02225294 ; =ov13_0224EC64
    // str r3, [r0, #0x14]
    // add r0, r4, #0
    // add r1, sp, #0x1c
    // bl ov13_02224618
    // bl ov13_02226CBC
    // str r0, [sp, #0xc]
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #6
    // str r1, [r0, #0x1c]
    // b _022252EE
    // bl ov13_02226CBC
    // ldr r1, _0222528C ; =ov13_02245A58
    // ldr r1, [r1, #0xc]
    // cmp r0, r1
    // blo _022250B4
    // add r0, r4, #0
    // bl SOC_Close
    // mov r0, #3
    // mvn r0, r0
    // str r0, [sp, #8]
    // mov r6, #1
    // b _022252EE
    // add r0, sp, #0x1c
    // mov r2, #2
    // str r0, [sp]
    // ldr r1, _02225294 ; =ov13_0224EC64
    // add r0, r4, #0
    // lsl r2, r2, #0xa
    // mov r3, #4
    // bl SOC_RecvFrom
    // cmp r0, #0
    // ble _02225128
    // ldr r0, _02225294 ; =ov13_0224EC64
    // ldr r2, _022252A0 ; =ov13_0224E464
    // ldr r3, _02225290 ; =ov13_0224E3F0
    // mov r1, #3
    // bl ov13_02224938
    // cmp r0, #0
    // beq _02225128
    // ldr r0, _022252A0 ; =ov13_0224E464
    // add r1, sp, #0x18
    // add r2, sp, #0x14
    // bl ov13_022246E4
    // add r5, r0, #0
    // ldr r1, [sp, #0x18]
    // ldr r0, _022252A4 ; =0x00000101
    // cmp r1, r0
    // bne _02225126
    // bl ov13_02226CBC
    // ldr r2, _022252A8 ; =ov13_0224E400
    // str r0, [sp, #0x10]
    // mov r1, #8
    // ldrb r0, [r5]
    // add r5, r5, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _022250F8
    // ldr r0, _022252AC ; =ov13_0224E408
    // add r1, sp, #0x10
    // mov r2, #4
    // bl ov13_02226C94
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #7
    // str r1, [r0, #0x1c]
    // mov r1, #5
    // str r1, [r0, #0x38]
    // ldr r0, _0222528C ; =ov13_02245A58
    // sub r1, r1, #6
    // str r1, [r0, #0xc]
    // bl ov13_02226F3C
    // b _022252EE
    // bl ov13_02226CBC
    // mov r2, #0xfa
    // ldr r1, [sp, #0xc]
    // lsl r2, r2, #2
    // add r1, r1, r2
    // cmp r0, r1
    // bhs _0222513A
    // b _022252EE
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #5
    // str r1, [r0, #0x1c]
    // b _022252EE
    // ldr r0, _022252A0 ; =ov13_0224E464
    // ldr r1, _022252B0 ; =0x00000102
    // ldr r2, _022252AC ; =ov13_0224E408
    // mov r3, #8
    // bl ov13_0222483C
    // ldr r3, _02225284 ; =ov13_0224DF30
    // ldr r2, _022252A0 ; =ov13_0224E464
    // str r0, [r3, #0x34]
    // ldr r0, _02225290 ; =ov13_0224E3F0
    // mov r1, #4
    // str r0, [sp]
    // ldr r0, _02225294 ; =ov13_0224EC64
    // ldr r3, [r3, #0x34]
    // bl ov13_02224718
    // add r3, r0, #0
    // ldr r0, _02225284 ; =ov13_0224DF30
    // ldr r2, _02225294 ; =ov13_0224EC64
    // str r3, [r0, #0x14]
    // add r0, r4, #0
    // add r1, sp, #0x1c
    // bl ov13_02224618
    // bl ov13_02226CBC
    // str r0, [sp, #0xc]
    // mov r0, #0
    // mov r5, #0x12
    // ldr r7, _022252B4 ; =ov13_0224E184
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // mov ip, r5
    // stmia r7!, {r0, r1, r2, r3}
    // mov r5, ip
    // sub r5, r5, #1
    // stmia r7!, {r0, r1, r2, r3}
    // mov ip, r5
    // bne _02225186
    // stmia r7!, {r0, r1, r2, r3}
    // str r0, [r7]
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #8
    // str r1, [r0, #0x1c]
    // b _022252EE
    // add r0, sp, #0x1c
    // mov r2, #2
    // str r0, [sp]
    // ldr r1, _02225294 ; =ov13_0224EC64
    // add r0, r4, #0
    // lsl r2, r2, #0xa
    // mov r3, #4
    // bl SOC_RecvFrom
    // cmp r0, #0
    // ble _022251F4
    // ldr r0, _02225294 ; =ov13_0224EC64
    // ldr r2, _022252A0 ; =ov13_0224E464
    // ldr r3, _022252A8 ; =ov13_0224E400
    // mov r1, #5
    // bl ov13_02224938
    // ldr r1, _02225284 ; =ov13_0224DF30
    // cmp r0, #0
    // str r0, [r1, #0x34]
    // beq _022251F4
    // ldr r0, _022252A0 ; =ov13_0224E464
    // bl ov13_02224B2C
    // cmp r0, #0
    // beq _022251F4
    // ldr r1, _022252B8 ; =ov13_0224E270
    // mov r0, #0x14
    // ldrsb r0, [r1, r0]
    // cmp r0, #0
    // beq _022251E2
    // mov r1, #1
    // ldr r0, _02225284 ; =ov13_0224DF30
    // b _022251E6
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #0
    // strb r1, [r0]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #9
    // str r1, [r0, #0x1c]
    // b _022252EE
    // bl ov13_02226CBC
    // mov r2, #0xfa
    // ldr r1, [sp, #0xc]
    // lsl r2, r2, #2
    // add r1, r1, r2
    // cmp r0, r1
    // blo _022252EE
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #0xa
    // blt _0222521E
    // add r0, r4, #0
    // bl SOC_Close
    // mov r0, #1
    // mvn r0, r0
    // str r0, [sp, #8]
    // mov r6, #1
    // b _022252EE
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #7
    // str r1, [r0, #0x1c]
    // b _022252EE
    // ldr r0, _022252A0 ; =ov13_0224E464
    // ldr r1, _022252BC ; =0x00000301
    // ldr r2, _022252C0 ; =ov13_0224DF30
    // mov r3, #1
    // bl ov13_0222483C
    // ldr r3, _02225284 ; =ov13_0224DF30
    // ldr r2, _022252A0 ; =ov13_0224E464
    // str r0, [r3, #0x34]
    // ldr r0, _022252A8 ; =ov13_0224E400
    // mov r1, #6
    // str r0, [sp]
    // ldr r0, _02225294 ; =ov13_0224EC64
    // ldr r3, [r3, #0x34]
    // bl ov13_02224718
    // ldr r1, _02225284 ; =ov13_0224DF30
    // str r0, [r1, #0x14]
    // bl ov13_02223DE0
    // cmp r0, #7
    // beq _02225268
    // bl ov13_02226CBC
    // mov r1, #0xfa
    // lsl r1, r1, #2
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // mov r0, #0xa
    // ldr r1, _02225284 ; =ov13_0224DF30
    // str r0, [sp, #4]
    // str r0, [r1, #0x1c]
    // b _022252EE
    // ldr r3, _02225284 ; =ov13_0224DF30
    // ldr r2, _02225294 ; =ov13_0224EC64
    // ldr r3, [r3, #0x14]
    // add r0, r4, #0
    // add r1, sp, #0x1c
    // bl ov13_02224618
    // bl ov13_02226CBC
    // str r0, [sp, #0xc]
    // ldr r0, _02225284 ; =ov13_0224DF30
    // mov r1, #0xa
    // str r1, [r0, #0x1c]
    // b _022252EE
    // _02225284: .word ov13_0224DF30
    // _02225288: .word 0x000001E6
    // _0222528C: .word ov13_02245A58
    // _02225290: .word ov13_0224E3F0
    // _02225294: .word ov13_0224EC64
    // _02225298: .word ov13_0224DF80
    // _0222529C: .word 0x00007530
    // _022252A0: .word ov13_0224E464
    // _022252A4: .word 0x00000101
    // _022252A8: .word ov13_0224E400
    // _022252AC: .word ov13_0224E408
    // _022252B0: .word 0x00000102
    // _022252B4: .word ov13_0224E184
    // _022252B8: .word ov13_0224E270
    // _022252BC: .word 0x00000301
    // _022252C0: .word ov13_0224DF30
    // bl ov13_02226CBC
    // mov r2, #0xfa
    // ldr r1, [sp, #0xc]
    // lsl r2, r2, #2
    // add r1, r1, r2
    // cmp r0, r1
    // blo _022252EE
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #0xa
    // blt _022252E8
    // mov r6, #1
    // bl ov13_02224DB4
    // str r0, [sp, #8]
    // b _022252EE
    // ldr r0, _0222531C ; =ov13_0224DF30
    // mov r1, #9
    // str r1, [r0, #0x1c]
    // cmp r6, #0
    // bne _022252FC
    // ldr r0, _0222531C ; =ov13_0224DF30
    // ldr r0, [r0, #0x10]
    // cmp r0, #0
    // bne _022252FC
    // b _02224F54
    // cmp r4, #0
    // beq _02225306
    // add r0, r4, #0
    // bl SOC_Close
    // ldr r0, _0222531C ; =ov13_0224DF30
    // ldr r0, [r0, #0x10]
    // cmp r0, #0
    // beq _02225314
    // mov r0, #7
    // mvn r0, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #8]
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0222531C: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02225320(void) {
    // push {r4, lr}
    // bl ov13_02224F3C
    // add r4, r0, #0
    // ldr r0, _02225350 ; =ov13_0224DF30
    // str r4, [r0, #0x78]
    // bl ov13_02224100
    // cmp r4, #1
    // bne _0222533A
    // mov r1, #6
    // ldr r0, _02225350 ; =ov13_0224DF30
    // b _0222533E
    // ldr r0, _02225350 ; =ov13_0224DF30
    // mov r1, #7
    // str r1, [r0, #0x38]
    // mov r1, #0
    // ldr r0, _02225354 ; =ov13_02245A58
    // mvn r1, r1
    // str r1, [r0, #0xc]
    // bl ov13_02226F3C
    // pop {r4, pc}
    // nop
    // _02225350: .word ov13_0224DF30
    // _02225354: .word ov13_02245A58
    // TODO: decompile
}


void ov13_02225358(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1a8
    // str r0, [sp]
    // ldr r0, _0222550C ; =0xA6A6A6A6
    // add r4, r2, #0
    // add r5, r1, #0
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // mov r0, #7
    // add r1, r4, #0
    // tst r1, r0
    // bne _02225376
    // ldr r2, [sp, #0x1c0]
    // tst r0, r2
    // beq _0222537C
    // add sp, #0x1a8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // lsr r0, r4, #3
    // str r0, [sp, #0x14]
    // cmp r0, #2
    // bge _0222538A
    // add sp, #0x1a8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #0x68
    // add r1, r3, #0
    // lsl r2, r2, #3
    // bl ov13_02225710
    // str r0, [sp, #0x1c]
    // ldr r0, [sp]
    // add r1, r5, #0
    // add r0, #8
    // add r2, r4, #0
    // bl memcpy
    // add r3, sp, #0x58
    // add r2, sp, #0x48
    // mov r1, #8
    // ldrb r0, [r2]
    // add r2, r2, #1
    // strb r0, [r3]
    // add r3, r3, #1
    // sub r1, r1, #1
    // bne _022253A8
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // mov r4, #1
    // cmp r0, #1
    // bge _022253C8
    // b _022254E4
    // ldr r2, [sp, #0x20]
    // ldr r1, [sp, #0x18]
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r1, [sp, #8]
    // str r0, [sp, #0x28]
    // mov r0, #0
    // mov r1, #0
    // str r0, [sp, #0x30]
    // add r0, r1, #0
    // orr r0, r1
    // str r0, [sp, #0x40]
    // ldr r0, [sp]
    // lsl r1, r4, #3
    // add r5, r0, r1
    // add r3, r5, #0
    // add r2, sp, #0x60
    // mov r1, #8
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _022253F2
    // add r2, sp, #0x58
    // ldr r1, [sp, #0x1c]
    // add r0, sp, #0x68
    // add r3, r2, #0
    // bl ov13_02225B58
    // ldr r0, [sp, #0xc]
    // asr r1, r4, #0x1f
    // add r3, r4, r0
    // ldr r0, [sp, #8]
    // adc r1, r0
    // mov r0, #0xff
    // lsl r0, r0, #0x18
    // and r0, r1
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x24]
    // mov r0, #0xff
    // lsl r0, r0, #0x10
    // and r0, r1
    // lsr r0, r0, #8
    // str r0, [sp, #0x2c]
    // mov r0, #0xff
    // lsl r0, r0, #8
    // mov r2, #0
    // and r0, r1
    // and r2, r3
    // lsl r6, r0, #8
    // lsr r2, r2, #0x18
    // str r2, [sp, #0x34]
    // orr r2, r6
    // lsr r0, r0, #0x18
    // str r2, [sp, #0x34]
    // str r0, [sp, #0x38]
    // mov r0, #0xff
    // mov r2, #0
    // and r0, r1
    // and r2, r3
    // lsl r6, r0, #0x18
    // lsr r2, r2, #8
    // str r2, [sp, #0x44]
    // orr r2, r6
    // lsr r0, r0, #8
    // str r2, [sp, #0x44]
    // str r0, [sp, #0x3c]
    // mov r0, #0
    // add r2, r1, #0
    // and r2, r0
    // mov r0, #0xff
    // lsl r0, r0, #0x18
    // and r0, r3
    // lsr r6, r0, #0x18
    // lsl r0, r0, #8
    // mov ip, r0
    // mov r0, #0
    // and r1, r0
    // mov r0, #0xff
    // lsl r0, r0, #0x10
    // lsl r2, r2, #8
    // and r0, r3
    // orr r2, r6
    // lsr r6, r0, #8
    // lsl r7, r0, #0x18
    // mov r0, #0xff
    // lsl r1, r1, #0x18
    // and r0, r3
    // orr r1, r6
    // lsl r6, r0, #0x18
    // mov r0, #0xff
    // lsl r0, r0, #8
    // and r0, r3
    // lsl r0, r0, #8
    // orr r0, r6
    // orr r1, r0
    // ldr r0, [sp, #0x40]
    // add r3, r7, #0
    // orr r3, r0
    // mov r0, ip
    // orr r1, r2
    // add r2, r0, #0
    // ldr r0, [sp, #0x3c]
    // orr r2, r3
    // orr r1, r0
    // ldr r0, [sp, #0x44]
    // orr r2, r0
    // ldr r0, [sp, #0x38]
    // orr r1, r0
    // ldr r0, [sp, #0x34]
    // orr r2, r0
    // ldr r0, [sp, #0x30]
    // orr r1, r0
    // ldr r0, [sp, #0x2c]
    // orr r2, r0
    // ldr r0, [sp, #0x28]
    // orr r1, r0
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #0x54]
    // orr r0, r2
    // str r0, [sp, #0x50]
    // add r0, sp, #0x58
    // add r1, sp, #0x50
    // add r2, r0, #0
    // bl ov13_022256C8
    // add r2, sp, #0x60
    // mov r1, #8
    // ldrb r0, [r2]
    // add r2, r2, #1
    // strb r0, [r5]
    // add r5, r5, #1
    // sub r1, r1, #1
    // bne _022254D0
    // ldr r0, [sp, #0x14]
    // add r4, r4, #1
    // cmp r4, r0
    // ble _022253E6
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // cmp r0, #6
    // bge _022254F0
    // b _022253BE
    // add r3, sp, #0x58
    // mov r2, #8
    // ldrb r1, [r3]
    // ldr r0, [sp]
    // add r3, r3, #1
    // strb r1, [r0]
    // add r0, r0, #1
    // str r0, [sp]
    // sub r2, r2, #1
    // bne _022254F4
    // mov r0, #1
    // add sp, #0x1a8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222550C: .word 0xA6A6A6A6
    // TODO: decompile
}


void ov13_02225510(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1a8
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // ldr r0, _022256C4 ; =0xA6A6A6A6
    // add r4, r2, #0
    // add r5, r1, #0
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // mov r0, #7
    // add r1, r4, #0
    // tst r1, r0
    // bne _02225532
    // ldr r2, [sp, #0x1c0]
    // tst r0, r2
    // beq _02225538
    // add sp, #0x1a8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, r4, #1
    // lsr r0, r0, #3
    // str r0, [sp, #0x14]
    // cmp r0, #2
    // bge _02225548
    // add sp, #0x1a8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #0x68
    // add r1, r3, #0
    // lsl r2, r2, #3
    // bl ov13_022259C8
    // str r0, [sp, #0x20]
    // add r3, sp, #0x58
    // add r2, r5, #0
    // mov r1, #8
    // ldrb r0, [r2]
    // add r2, r2, #1
    // strb r0, [r3]
    // add r3, r3, #1
    // sub r1, r1, #1
    // bne _0222555A
    // add r5, #8
    // ldr r0, [sp]
    // add r1, r5, #0
    // sub r2, r4, #1
    // bl memcpy
    // mov r0, #5
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // asr r0, r0, #0x1f
    // str r0, [sp, #0x18]
    // ldr r4, [sp, #0x14]
    // add r0, r4, #0
    // cmp r0, #0
    // bgt _02225586
    // b _022256A0
    // ldr r2, [sp, #0x24]
    // ldr r1, [sp, #0x18]
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r1, [sp, #8]
    // str r0, [sp, #0x2c]
    // mov r0, #0
    // mov r1, #0
    // str r0, [sp, #0x34]
    // add r0, r1, #0
    // orr r0, r1
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0xc]
    // asr r1, r4, #0x1f
    // add r5, r4, r0
    // ldr r0, [sp, #8]
    // adc r1, r0
    // mov r0, #0xff
    // lsl r0, r0, #0x18
    // and r0, r1
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x28]
    // mov r0, #0xff
    // lsl r0, r0, #0x10
    // and r0, r1
    // lsr r0, r0, #8
    // str r0, [sp, #0x30]
    // mov r0, #0xff
    // lsl r0, r0, #8
    // add r2, r1, #0
    // and r2, r0
    // mov r0, #0
    // add r3, r5, #0
    // and r3, r0
    // lsl r0, r2, #8
    // lsr r3, r3, #0x18
    // orr r3, r0
    // lsr r0, r2, #0x18
    // str r0, [sp, #0x38]
    // mov r0, #0xff
    // mov r2, #0
    // and r0, r1
    // and r2, r5
    // lsl r6, r0, #0x18
    // lsr r2, r2, #8
    // str r2, [sp, #0x44]
    // orr r2, r6
    // lsr r0, r0, #8
    // str r2, [sp, #0x44]
    // str r0, [sp, #0x3c]
    // mov r0, #0
    // add r2, r1, #0
    // and r2, r0
    // mov r0, #0xff
    // lsl r0, r0, #0x18
    // and r0, r5
    // lsr r6, r0, #0x18
    // lsl r0, r0, #8
    // mov ip, r0
    // mov r0, #0
    // and r1, r0
    // mov r0, #0xff
    // lsl r0, r0, #0x10
    // lsl r2, r2, #8
    // and r0, r5
    // orr r2, r6
    // lsr r6, r0, #8
    // lsl r7, r0, #0x18
    // mov r0, #0xff
    // lsl r1, r1, #0x18
    // and r0, r5
    // orr r1, r6
    // lsl r6, r0, #0x18
    // mov r0, #0xff
    // lsl r0, r0, #8
    // and r0, r5
    // lsl r0, r0, #8
    // orr r0, r6
    // orr r1, r0
    // ldr r0, [sp, #0x40]
    // add r5, r7, #0
    // orr r5, r0
    // mov r0, ip
    // orr r1, r2
    // add r2, r0, #0
    // ldr r0, [sp, #0x3c]
    // orr r2, r5
    // orr r1, r0
    // ldr r0, [sp, #0x44]
    // orr r2, r0
    // ldr r0, [sp, #0x38]
    // orr r2, r3
    // orr r1, r0
    // ldr r0, [sp, #0x34]
    // orr r1, r0
    // ldr r0, [sp, #0x30]
    // orr r2, r0
    // ldr r0, [sp, #0x2c]
    // orr r1, r0
    // ldr r0, [sp, #0x28]
    // str r1, [sp, #0x54]
    // orr r0, r2
    // str r0, [sp, #0x50]
    // add r0, sp, #0x58
    // add r1, sp, #0x50
    // add r2, r0, #0
    // bl ov13_022256C8
    // sub r0, r4, #1
    // lsl r1, r0, #3
    // ldr r0, [sp]
    // add r2, sp, #0x60
    // add r5, r0, r1
    // add r3, r5, #0
    // mov r1, #8
    // ldrb r0, [r3]
    // add r3, r3, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _02225672
    // add r2, sp, #0x58
    // ldr r1, [sp, #0x20]
    // add r0, sp, #0x68
    // add r3, r2, #0
    // bl ov13_02225F14
    // add r2, sp, #0x60
    // mov r1, #8
    // ldrb r0, [r2]
    // add r2, r2, #1
    // strb r0, [r5]
    // add r5, r5, #1
    // sub r1, r1, #1
    // bne _0222568E
    // sub r4, r4, #1
    // cmp r4, #0
    // bgt _022255A4
    // ldr r0, [sp, #0x24]
    // sub r0, r0, #1
    // str r0, [sp, #0x24]
    // bmi _022256AA
    // b _0222557C
    // add r0, sp, #0x48
    // add r1, sp, #0x58
    // mov r2, #8
    // bl memcmp
    // cmp r0, #0
    // beq _022256BC
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // add sp, #0x1a8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022256C4: .word 0xA6A6A6A6
    // TODO: decompile
}


void ov13_022256C8(void) {
    // push {r3, r4}
    // ldrb r4, [r0]
    // ldrb r3, [r1]
    // eor r3, r4
    // strb r3, [r2]
    // ldrb r4, [r0, #1]
    // ldrb r3, [r1, #1]
    // eor r3, r4
    // strb r3, [r2, #1]
    // ldrb r4, [r0, #2]
    // ldrb r3, [r1, #2]
    // eor r3, r4
    // strb r3, [r2, #2]
    // ldrb r4, [r0, #3]
    // ldrb r3, [r1, #3]
    // eor r3, r4
    // strb r3, [r2, #3]
    // ldrb r4, [r0, #4]
    // ldrb r3, [r1, #4]
    // eor r3, r4
    // strb r3, [r2, #4]
    // ldrb r4, [r0, #5]
    // ldrb r3, [r1, #5]
    // eor r3, r4
    // strb r3, [r2, #5]
    // ldrb r4, [r0, #6]
    // ldrb r3, [r1, #6]
    // eor r3, r4
    // strb r3, [r2, #6]
    // ldrb r3, [r0, #7]
    // ldrb r0, [r1, #7]
    // eor r0, r3
    // strb r0, [r2, #7]
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov13_02225710(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r3, r1, #0
    // add r1, r2, #0
    // mov r2, #0
    // str r2, [sp]
    // ldrb r2, [r3, #2]
    // ldrb r6, [r3, #1]
    // ldrb r5, [r3, #3]
    // lsl r4, r2, #8
    // ldrb r2, [r3]
    // lsl r6, r6, #0x10
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    // str r2, [r0]
    // ldrb r2, [r3, #6]
    // ldrb r6, [r3, #5]
    // ldrb r5, [r3, #7]
    // lsl r4, r2, #8
    // ldrb r2, [r3, #4]
    // lsl r6, r6, #0x10
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    // str r2, [r0, #4]
    // ldrb r2, [r3, #0xa]
    // ldrb r6, [r3, #9]
    // ldrb r5, [r3, #0xb]
    // lsl r4, r2, #8
    // ldrb r2, [r3, #8]
    // lsl r6, r6, #0x10
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    // str r2, [r0, #8]
    // ldrb r2, [r3, #0xe]
    // ldrb r6, [r3, #0xd]
    // ldrb r5, [r3, #0xf]
    // lsl r4, r2, #8
    // ldrb r2, [r3, #0xc]
    // lsl r6, r6, #0x10
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    // str r2, [r0, #0xc]
    // cmp r1, #0x80
    // bne _022257F4
    // ldr r5, _022259C0 ; =ov13_02242688
    // ldr r2, _022259C4 ; =ov13_022442B0
    // ldr r4, [r0, #0xc]
    // ldr r3, [r5]
    // lsr r1, r4, #0x18
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // add r5, r5, #4
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp, #8]
    // lsl r1, r4, #0x18
    // lsr r1, r1, #0x16
    // ldr r6, [r2, r1]
    // mov r1, #0xff
    // lsl r1, r1, #8
    // add r7, r6, #0
    // and r7, r1
    // ldr r1, [r0]
    // str r1, [sp, #4]
    // lsr r1, r4, #0x10
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x16
    // ldr r6, [r2, r1]
    // mov r1, #0xff
    // lsl r1, r1, #0x18
    // lsr r4, r4, #8
    // and r6, r1
    // ldr r1, [sp, #4]
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // eor r1, r6
    // ldr r6, [r2, r4]
    // mov r4, #0xff
    // lsl r4, r4, #0x10
    // and r4, r6
    // eor r1, r4
    // add r4, r7, #0
    // eor r4, r1
    // ldr r1, [sp, #8]
    // eor r1, r4
    // eor r3, r1
    // str r3, [r0, #0x10]
    // ldr r1, [r0, #4]
    // eor r3, r1
    // str r3, [r0, #0x14]
    // ldr r1, [r0, #8]
    // eor r3, r1
    // str r3, [r0, #0x18]
    // ldr r1, [r0, #0xc]
    // eor r1, r3
    // str r1, [r0, #0x1c]
    // ldr r1, [sp]
    // add r1, r1, #1
    // str r1, [sp]
    // cmp r1, #0xa
    // blt _022257F0
    // add sp, #0x18
    // mov r0, #0xa
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, #0x10
    // b _0222577C
    // ldrb r2, [r3, #0x12]
    // ldrb r6, [r3, #0x11]
    // ldrb r5, [r3, #0x13]
    // lsl r4, r2, #8
    // ldrb r2, [r3, #0x10]
    // lsl r6, r6, #0x10
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    // str r2, [r0, #0x10]
    // ldrb r2, [r3, #0x16]
    // ldrb r6, [r3, #0x15]
    // ldrb r5, [r3, #0x17]
    // lsl r4, r2, #8
    // ldrb r2, [r3, #0x14]
    // lsl r6, r6, #0x10
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    // str r2, [r0, #0x14]
    // cmp r1, #0xc0
    // bne _022258B0
    // ldr r5, _022259C0 ; =ov13_02242688
    // ldr r3, _022259C4 ; =ov13_022442B0
    // ldr r4, [r0, #0x14]
    // ldr r6, [r5]
    // lsr r1, r4, #0x18
    // lsl r1, r1, #2
    // ldr r1, [r3, r1]
    // add r5, r5, #4
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp, #0xc]
    // lsl r1, r4, #0x18
    // lsr r1, r1, #0x16
    // ldr r2, [r3, r1]
    // mov r1, #0xff
    // lsl r1, r1, #8
    // add r7, r2, #0
    // and r7, r1
    // ldr r1, [r0]
    // mov lr, r1
    // lsr r1, r4, #0x10
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x16
    // ldr r2, [r3, r1]
    // mov r1, #0xff
    // lsl r1, r1, #0x18
    // and r1, r2
    // mov r2, lr
    // eor r1, r2
    // lsr r2, r4, #8
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x16
    // ldr r4, [r3, r2]
    // mov r2, #0xff
    // lsl r2, r2, #0x10
    // and r2, r4
    // eor r1, r2
    // add r2, r7, #0
    // eor r2, r1
    // ldr r1, [sp, #0xc]
    // eor r1, r2
    // add r2, r6, #0
    // eor r2, r1
    // str r2, [r0, #0x18]
    // ldr r1, [r0, #4]
    // eor r2, r1
    // str r2, [r0, #0x1c]
    // ldr r1, [r0, #8]
    // eor r2, r1
    // str r2, [r0, #0x20]
    // ldr r1, [r0, #0xc]
    // eor r1, r2
    // str r1, [r0, #0x24]
    // ldr r1, [sp]
    // add r1, r1, #1
    // str r1, [sp]
    // cmp r1, #8
    // blt _0222589E
    // add sp, #0x18
    // mov r0, #0xc
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, [r0, #0x10]
    // ldr r1, [r0, #0x24]
    // eor r2, r1
    // str r2, [r0, #0x28]
    // ldr r1, [r0, #0x14]
    // eor r1, r2
    // str r1, [r0, #0x2c]
    // add r0, #0x18
    // b _02225828
    // ldrb r2, [r3, #0x1a]
    // ldrb r6, [r3, #0x19]
    // ldrb r5, [r3, #0x1b]
    // lsl r4, r2, #8
    // ldrb r2, [r3, #0x18]
    // lsl r6, r6, #0x10
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r4
    // eor r2, r5
    // str r2, [r0, #0x18]
    // ldrb r2, [r3, #0x1e]
    // ldrb r5, [r3, #0x1f]
    // lsl r4, r2, #8
    // ldrb r2, [r3, #0x1c]
    // ldrb r3, [r3, #0x1d]
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x10
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    // str r2, [r0, #0x1c]
    // mov r2, #1
    // lsl r2, r2, #8
    // cmp r1, r2
    // bne _022259BA
    // ldr r5, _022259C0 ; =ov13_02242688
    // ldr r3, _022259C4 ; =ov13_022442B0
    // ldr r4, [r0, #0x1c]
    // ldr r6, [r5]
    // lsr r1, r4, #0x18
    // lsl r1, r1, #2
    // ldr r1, [r3, r1]
    // add r5, r5, #4
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp, #0x10]
    // lsl r1, r4, #0x18
    // lsr r1, r1, #0x16
    // ldr r2, [r3, r1]
    // mov r1, #0xff
    // lsl r1, r1, #8
    // add r7, r2, #0
    // and r7, r1
    // ldr r1, [r0]
    // mov ip, r1
    // lsr r1, r4, #0x10
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x16
    // ldr r2, [r3, r1]
    // mov r1, #0xff
    // lsl r1, r1, #0x18
    // and r1, r2
    // mov r2, ip
    // eor r1, r2
    // lsr r2, r4, #8
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x16
    // ldr r4, [r3, r2]
    // mov r2, #0xff
    // lsl r2, r2, #0x10
    // and r2, r4
    // eor r1, r2
    // add r2, r7, #0
    // eor r2, r1
    // ldr r1, [sp, #0x10]
    // eor r1, r2
    // add r2, r6, #0
    // eor r2, r1
    // str r2, [r0, #0x20]
    // ldr r1, [r0, #4]
    // eor r2, r1
    // str r2, [r0, #0x24]
    // ldr r1, [r0, #8]
    // eor r2, r1
    // str r2, [r0, #0x28]
    // ldr r1, [r0, #0xc]
    // eor r1, r2
    // str r1, [r0, #0x2c]
    // ldr r1, [sp]
    // add r1, r1, #1
    // str r1, [sp]
    // cmp r1, #7
    // blt _0222595E
    // add sp, #0x18
    // mov r0, #0xe
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r6, [r0, #0x2c]
    // ldr r7, [r0, #0x10]
    // lsl r1, r6, #0x18
    // lsr r1, r1, #0x16
    // ldr r1, [r3, r1]
    // lsl r1, r1, #0x18
    // lsr r4, r1, #0x18
    // lsr r1, r6, #8
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x16
    // ldr r2, [r3, r1]
    // mov r1, #0xff
    // lsl r1, r1, #8
    // and r1, r2
    // str r1, [sp, #0x14]
    // lsr r1, r6, #0x18
    // lsl r1, r1, #2
    // ldr r2, [r3, r1]
    // mov r1, #0xff
    // lsl r1, r1, #0x18
    // and r1, r2
    // lsr r2, r6, #0x10
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x16
    // ldr r6, [r3, r2]
    // mov r2, #0xff
    // lsl r2, r2, #0x10
    // eor r1, r7
    // and r2, r6
    // eor r2, r1
    // ldr r1, [sp, #0x14]
    // eor r1, r2
    // add r2, r4, #0
    // eor r2, r1
    // str r2, [r0, #0x30]
    // ldr r1, [r0, #0x14]
    // eor r2, r1
    // str r2, [r0, #0x34]
    // ldr r1, [r0, #0x18]
    // eor r2, r1
    // str r2, [r0, #0x38]
    // ldr r1, [r0, #0x1c]
    // eor r1, r2
    // str r1, [r0, #0x3c]
    // add r0, #0x20
    // b _022258E8
    // ldr r0, [sp]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _022259C0: .word ov13_02242688
    // _022259C4: .word ov13_022442B0
    // TODO: decompile
}


void ov13_022259C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // bl ov13_02225710
    // mov ip, r0
    // mov r1, ip
    // lsl r6, r1, #2
    // mov r0, #0
    // cmp r6, #0
    // ble _02225A0E
    // lsl r2, r6, #2
    // add r1, r4, #0
    // add r2, r4, r2
    // ldr r5, [r1]
    // ldr r3, [r2]
    // add r0, r0, #4
    // str r3, [r1]
    // str r5, [r2]
    // ldr r5, [r1, #4]
    // ldr r3, [r2, #4]
    // sub r6, r6, #4
    // str r3, [r1, #4]
    // str r5, [r2, #4]
    // ldr r5, [r1, #8]
    // ldr r3, [r2, #8]
    // str r3, [r1, #8]
    // str r5, [r2, #8]
    // ldr r5, [r1, #0xc]
    // ldr r3, [r2, #0xc]
    // str r3, [r1, #0xc]
    // str r5, [r2, #0xc]
    // add r1, #0x10
    // sub r2, #0x10
    // cmp r0, r6
    // blt _022259E2
    // mov r0, #1
    // str r0, [sp]
    // mov r0, ip
    // cmp r0, #1
    // bgt _02225A1A
    // b _02225B3E
    // ldr r2, _02225B44 ; =ov13_022442B0
    // ldr r7, _02225B48 ; =ov13_02242AB0
    // add r4, #0x10
    // ldr r3, [r4]
    // lsl r0, r3, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r1, [r7, r0]
    // lsr r0, r3, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x16
    // ldr r0, _02225B4C ; =ov13_022426B0
    // ldr r6, [r0, r5]
    // lsr r0, r3, #0x18
    // lsl r0, r0, #2
    // lsr r3, r3, #0x10
    // ldr r0, [r2, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x16
    // lsl r0, r0, #0x18
    // ldr r3, [r2, r3]
    // lsr r5, r0, #0x16
    // ldr r0, _02225B50 ; =ov13_022446B0
    // lsl r3, r3, #0x18
    // ldr r0, [r0, r5]
    // lsr r5, r3, #0x16
    // ldr r3, _02225B54 ; =ov13_02244AB0
    // ldr r3, [r3, r5]
    // eor r0, r3
    // eor r0, r6
    // eor r0, r1
    // str r0, [r4]
    // ldr r3, [r4, #4]
    // lsl r0, r3, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r1, [r7, r0]
    // lsr r0, r3, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x16
    // ldr r0, _02225B4C ; =ov13_022426B0
    // ldr r6, [r0, r5]
    // lsr r0, r3, #0x18
    // lsl r0, r0, #2
    // lsr r3, r3, #0x10
    // ldr r0, [r2, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x16
    // lsl r0, r0, #0x18
    // ldr r3, [r2, r3]
    // lsr r5, r0, #0x16
    // ldr r0, _02225B50 ; =ov13_022446B0
    // lsl r3, r3, #0x18
    // ldr r0, [r0, r5]
    // lsr r5, r3, #0x16
    // ldr r3, _02225B54 ; =ov13_02244AB0
    // ldr r3, [r3, r5]
    // eor r0, r3
    // eor r0, r6
    // eor r0, r1
    // str r0, [r4, #4]
    // ldr r3, [r4, #8]
    // lsl r0, r3, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r1, [r7, r0]
    // lsr r0, r3, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x16
    // ldr r0, _02225B4C ; =ov13_022426B0
    // ldr r6, [r0, r5]
    // lsr r0, r3, #0x18
    // lsl r0, r0, #2
    // lsr r3, r3, #0x10
    // ldr r0, [r2, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x16
    // lsl r0, r0, #0x18
    // ldr r3, [r2, r3]
    // lsr r5, r0, #0x16
    // ldr r0, _02225B50 ; =ov13_022446B0
    // lsl r3, r3, #0x18
    // ldr r0, [r0, r5]
    // lsr r5, r3, #0x16
    // ldr r3, _02225B54 ; =ov13_02244AB0
    // ldr r3, [r3, r5]
    // eor r0, r3
    // eor r0, r6
    // eor r0, r1
    // str r0, [r4, #8]
    // ldr r3, [r4, #0xc]
    // lsl r0, r3, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r1, [r7, r0]
    // lsr r0, r3, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r2, r0]
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x16
    // ldr r0, _02225B4C ; =ov13_022426B0
    // ldr r6, [r0, r5]
    // lsr r0, r3, #0x18
    // lsl r0, r0, #2
    // lsr r3, r3, #0x10
    // ldr r0, [r2, r0]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x16
    // lsl r0, r0, #0x18
    // ldr r3, [r2, r3]
    // lsr r5, r0, #0x16
    // ldr r0, _02225B50 ; =ov13_022446B0
    // lsl r3, r3, #0x18
    // ldr r0, [r0, r5]
    // lsr r5, r3, #0x16
    // ldr r3, _02225B54 ; =ov13_02244AB0
    // ldr r3, [r3, r5]
    // eor r0, r3
    // eor r0, r6
    // eor r0, r1
    // str r0, [r4, #0xc]
    // ldr r0, [sp]
    // add r1, r0, #1
    // mov r0, ip
    // str r1, [sp]
    // cmp r1, r0
    // bge _02225B3E
    // b _02225A1E
    // mov r0, ip
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02225B44: .word ov13_022442B0
    // _02225B48: .word ov13_02242AB0
    // _02225B4C: .word ov13_022426B0
    // _02225B50: .word ov13_022446B0
    // _02225B54: .word ov13_02244AB0
    // TODO: decompile
}


void ov13_02225B58(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r7, r1, #0
    // add r1, r2, #0
    // ldrb r2, [r1, #2]
    // str r3, [sp]
    // ldrb r6, [r1, #1]
    // lsl r3, r2, #8
    // ldrb r2, [r1]
    // ldrb r4, [r1, #3]
    // lsl r6, r6, #0x10
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // ldr r5, [r0]
    // ldrb r6, [r1, #5]
    // eor r2, r5
    // str r2, [sp, #0xc]
    // ldrb r2, [r1, #6]
    // ldrb r4, [r1, #7]
    // lsl r6, r6, #0x10
    // lsl r3, r2, #8
    // ldrb r2, [r1, #4]
    // ldr r5, [r0, #4]
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    // str r2, [sp, #8]
    // ldrb r2, [r1, #0xa]
    // ldrb r6, [r1, #9]
    // ldrb r4, [r1, #0xb]
    // lsl r3, r2, #8
    // ldrb r2, [r1, #8]
    // lsl r6, r6, #0x10
    // ldr r5, [r0, #8]
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r5, r2
    // ldrb r2, [r1, #0xe]
    // ldrb r4, [r1, #0xf]
    // ldr r6, [r0, #0xc]
    // lsl r3, r2, #8
    // ldrb r2, [r1, #0xc]
    // ldrb r1, [r1, #0xd]
    // lsl r2, r2, #0x18
    // lsl r1, r1, #0x10
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // eor r6, r1
    // asr r1, r7, #1
    // str r1, [sp, #4]
    // lsl r1, r6, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _02225F00 ; =ov13_02243EB0
    // ldr r4, [r0, #0x10]
    // ldr r3, [r1, r2]
    // lsr r1, r5, #8
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _02225F04 ; =ov13_02243AB0
    // ldr r1, [r1, r2]
    // str r1, [sp, #0x40]
    // ldr r1, [sp, #0xc]
    // lsr r1, r1, #0x18
    // lsl r2, r1, #2
    // ldr r1, _02225F08 ; =ov13_022432B0
    // ldr r7, [r1, r2]
    // ldr r1, [sp, #8]
    // lsr r1, r1, #0x10
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _02225F0C ; =ov13_022436B0
    // ldr r1, [r1, r2]
    // add r2, r7, #0
    // eor r2, r1
    // ldr r1, [sp, #0x40]
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // ldr r4, [r0, #0x14]
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _02225F00 ; =ov13_02243EB0
    // ldr r3, [r1, r2]
    // lsr r1, r6, #8
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _02225F04 ; =ov13_02243AB0
    // ldr r1, [r1, r2]
    // str r1, [sp, #0x48]
    // ldr r1, [sp, #8]
    // lsr r1, r1, #0x18
    // lsl r2, r1, #2
    // ldr r1, _02225F08 ; =ov13_022432B0
    // ldr r7, [r1, r2]
    // lsr r1, r5, #0x10
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _02225F0C ; =ov13_022436B0
    // ldr r1, [r1, r2]
    // add r2, r7, #0
    // eor r2, r1
    // ldr r1, [sp, #0x48]
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // str r1, [sp, #0x44]
    // ldr r1, [sp, #8]
    // ldr r4, [r0, #0x18]
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _02225F00 ; =ov13_02243EB0
    // ldr r3, [r1, r2]
    // ldr r1, [sp, #0xc]
    // lsr r1, r1, #8
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _02225F04 ; =ov13_02243AB0
    // ldr r1, [r1, r2]
    // str r1, [sp, #0x14]
    // lsr r1, r5, #0x18
    // lsl r2, r1, #2
    // ldr r1, _02225F08 ; =ov13_022432B0
    // ldr r7, [r1, r2]
    // lsr r1, r6, #0x10
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _02225F0C ; =ov13_022436B0
    // ldr r1, [r1, r2]
    // add r2, r7, #0
    // eor r2, r1
    // ldr r1, [sp, #0x14]
    // ldr r7, [r0, #0x1c]
    // eor r1, r2
    // eor r1, r3
    // add r2, r4, #0
    // eor r2, r1
    // lsl r1, r5, #0x18
    // lsr r3, r1, #0x16
    // ldr r1, _02225F00 ; =ov13_02243EB0
    // add r0, #0x20
    // ldr r3, [r1, r3]
    // ldr r1, [sp, #8]
    // lsr r1, r1, #8
    // lsl r1, r1, #0x18
    // lsr r4, r1, #0x16
    // ldr r1, _02225F04 ; =ov13_02243AB0
    // ldr r1, [r1, r4]
    // lsr r4, r6, #0x18
    // lsl r5, r4, #2
    // ldr r4, _02225F08 ; =ov13_022432B0
    // ldr r6, [r4, r5]
    // ldr r4, [sp, #0xc]
    // lsr r4, r4, #0x10
    // lsl r4, r4, #0x18
    // lsr r5, r4, #0x16
    // ldr r4, _02225F0C ; =ov13_022436B0
    // ldr r4, [r4, r5]
    // eor r4, r6
    // eor r1, r4
    // eor r1, r3
    // ldr r3, [sp, #4]
    // eor r1, r7
    // sub r3, r3, #1
    // str r3, [sp, #4]
    // beq _02225D94
    // lsl r3, r1, #0x18
    // lsr r5, r3, #0x16
    // ldr r3, _02225F00 ; =ov13_02243EB0
    // ldr r4, [r0]
    // ldr r3, [r3, r5]
    // lsr r5, r2, #8
    // lsl r5, r5, #0x18
    // lsr r6, r5, #0x16
    // ldr r5, _02225F04 ; =ov13_02243AB0
    // ldr r7, [r5, r6]
    // ldr r5, [sp, #0x10]
    // lsr r5, r5, #0x18
    // lsl r6, r5, #2
    // ldr r5, _02225F08 ; =ov13_022432B0
    // ldr r5, [r5, r6]
    // str r5, [sp, #0x18]
    // ldr r5, [sp, #0x44]
    // lsr r5, r5, #0x10
    // lsl r5, r5, #0x18
    // lsr r6, r5, #0x16
    // ldr r5, _02225F0C ; =ov13_022436B0
    // ldr r6, [r5, r6]
    // ldr r5, [sp, #0x18]
    // eor r5, r6
    // eor r5, r7
    // eor r3, r5
    // eor r3, r4
    // str r3, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // ldr r4, [r0, #4]
    // lsl r3, r3, #0x18
    // lsr r5, r3, #0x16
    // ldr r3, _02225F00 ; =ov13_02243EB0
    // ldr r3, [r3, r5]
    // lsr r5, r1, #8
    // lsl r5, r5, #0x18
    // lsr r6, r5, #0x16
    // ldr r5, _02225F04 ; =ov13_02243AB0
    // ldr r7, [r5, r6]
    // ldr r5, [sp, #0x44]
    // lsr r5, r5, #0x18
    // lsl r6, r5, #2
    // ldr r5, _02225F08 ; =ov13_022432B0
    // ldr r5, [r5, r6]
    // str r5, [sp, #0x1c]
    // lsr r5, r2, #0x10
    // lsl r5, r5, #0x18
    // lsr r6, r5, #0x16
    // ldr r5, _02225F0C ; =ov13_022436B0
    // ldr r6, [r5, r6]
    // ldr r5, [sp, #0x1c]
    // eor r5, r6
    // eor r5, r7
    // eor r3, r5
    // eor r3, r4
    // str r3, [sp, #8]
    // ldr r3, [sp, #0x44]
    // ldr r6, [r0, #8]
    // lsl r3, r3, #0x18
    // lsr r4, r3, #0x16
    // ldr r3, _02225F00 ; =ov13_02243EB0
    // ldr r5, [r3, r4]
    // ldr r3, [sp, #0x10]
    // lsr r3, r3, #8
    // lsl r3, r3, #0x18
    // lsr r4, r3, #0x16
    // ldr r3, _02225F04 ; =ov13_02243AB0
    // ldr r3, [r3, r4]
    // str r3, [sp, #0x20]
    // lsr r3, r2, #0x18
    // lsl r4, r3, #2
    // ldr r3, _02225F08 ; =ov13_022432B0
    // lsl r2, r2, #0x18
    // ldr r7, [r3, r4]
    // lsr r3, r1, #0x10
    // lsl r3, r3, #0x18
    // lsr r4, r3, #0x16
    // ldr r3, _02225F0C ; =ov13_022436B0
    // lsr r1, r1, #0x18
    // ldr r3, [r3, r4]
    // add r4, r7, #0
    // eor r4, r3
    // ldr r3, [sp, #0x20]
    // ldr r7, [r0, #0xc]
    // eor r3, r4
    // eor r3, r5
    // add r5, r6, #0
    // eor r5, r3
    // lsr r3, r2, #0x16
    // ldr r2, _02225F00 ; =ov13_02243EB0
    // ldr r3, [r2, r3]
    // ldr r2, [sp, #0x44]
    // lsr r2, r2, #8
    // lsl r2, r2, #0x18
    // lsr r4, r2, #0x16
    // ldr r2, _02225F04 ; =ov13_02243AB0
    // ldr r2, [r2, r4]
    // lsl r4, r1, #2
    // ldr r1, _02225F08 ; =ov13_022432B0
    // ldr r6, [r1, r4]
    // ldr r1, [sp, #0x10]
    // lsr r1, r1, #0x10
    // lsl r1, r1, #0x18
    // lsr r4, r1, #0x16
    // ldr r1, _02225F0C ; =ov13_022436B0
    // ldr r1, [r1, r4]
    // eor r1, r6
    // eor r1, r2
    // eor r1, r3
    // add r6, r7, #0
    // eor r6, r1
    // b _02225BCA
    // ldr r3, [r0]
    // mov r6, #0xff
    // str r3, [sp, #0x24]
    // lsl r3, r1, #0x18
    // lsr r4, r3, #0x16
    // ldr r3, _02225F10 ; =ov13_022442B0
    // lsl r6, r6, #0x10
    // ldr r4, [r3, r4]
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x18
    // str r4, [sp, #0x28]
    // lsr r4, r2, #8
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #8
    // and r4, r5
    // str r4, [sp, #0x2c]
    // ldr r4, [sp, #0x10]
    // lsr r4, r4, #0x18
    // lsl r4, r4, #2
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #0x18
    // and r5, r4
    // ldr r4, [sp, #0x44]
    // lsr r4, r4, #0x10
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r4, [r3, r4]
    // and r4, r6
    // eor r5, r4
    // ldr r4, [sp, #0x2c]
    // eor r5, r4
    // ldr r4, [sp, #0x28]
    // eor r5, r4
    // ldr r4, [sp, #0x24]
    // eor r4, r5
    // ldr r5, [sp]
    // lsr r6, r4, #0x18
    // strb r6, [r5]
    // lsr r6, r4, #0x10
    // strb r6, [r5, #1]
    // lsr r6, r4, #8
    // strb r6, [r5, #2]
    // strb r4, [r5, #3]
    // ldr r4, [r0, #4]
    // mov r6, #0xff
    // str r4, [sp, #0x30]
    // ldr r4, [sp, #0x10]
    // lsl r6, r6, #0x10
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r4, [r3, r4]
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x18
    // str r4, [sp, #0x34]
    // lsr r4, r1, #8
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #8
    // and r4, r5
    // str r4, [sp, #0x38]
    // ldr r4, [sp, #0x44]
    // lsr r4, r4, #0x18
    // lsl r4, r4, #2
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #0x18
    // and r5, r4
    // lsr r4, r2, #0x10
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r4, [r3, r4]
    // and r4, r6
    // eor r5, r4
    // ldr r4, [sp, #0x38]
    // eor r5, r4
    // ldr r4, [sp, #0x34]
    // eor r5, r4
    // ldr r4, [sp, #0x30]
    // eor r4, r5
    // ldr r5, [sp]
    // lsr r6, r4, #0x18
    // strb r6, [r5, #4]
    // lsr r6, r4, #0x10
    // strb r6, [r5, #5]
    // lsr r6, r4, #8
    // strb r6, [r5, #6]
    // strb r4, [r5, #7]
    // ldr r4, [r0, #8]
    // str r4, [sp, #0x3c]
    // ldr r4, [sp, #0x44]
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r4, [r3, r4]
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x18
    // mov lr, r4
    // ldr r4, [sp, #0x10]
    // lsr r4, r4, #8
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #8
    // and r4, r5
    // mov ip, r4
    // lsr r4, r2, #0x18
    // lsl r4, r4, #2
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #0x18
    // add r6, r5, #0
    // and r6, r4
    // lsr r4, r1, #0x10
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #0x10
    // and r4, r5
    // eor r4, r6
    // mov r5, ip
    // eor r5, r4
    // mov r4, lr
    // eor r5, r4
    // ldr r4, [sp, #0x3c]
    // eor r4, r5
    // ldr r5, [sp]
    // lsr r6, r4, #0x18
    // strb r6, [r5, #8]
    // lsr r6, r4, #0x10
    // strb r6, [r5, #9]
    // lsr r6, r4, #8
    // strb r6, [r5, #0xa]
    // strb r4, [r5, #0xb]
    // ldr r5, [r0, #0xc]
    // lsl r0, r2, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r3, r0]
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, [sp, #0x44]
    // lsr r0, r0, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r2, [r3, r0]
    // mov r0, #0xff
    // lsl r0, r0, #8
    // and r2, r0
    // lsr r0, r1, #0x18
    // lsl r0, r0, #2
    // ldr r1, [r3, r0]
    // mov r0, #0xff
    // lsl r0, r0, #0x18
    // and r0, r1
    // ldr r1, [sp, #0x10]
    // lsr r1, r1, #0x10
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x16
    // ldr r3, [r3, r1]
    // mov r1, #0xff
    // lsl r1, r1, #0x10
    // and r1, r3
    // eor r0, r1
    // eor r0, r2
    // eor r0, r4
    // eor r0, r5
    // ldr r1, [sp]
    // lsr r2, r0, #0x18
    // strb r2, [r1, #0xc]
    // lsr r2, r0, #0x10
    // strb r2, [r1, #0xd]
    // lsr r2, r0, #8
    // strb r2, [r1, #0xe]
    // strb r0, [r1, #0xf]
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // _02225F00: .word ov13_02243EB0
    // _02225F04: .word ov13_02243AB0
    // _02225F08: .word ov13_022432B0
    // _02225F0C: .word ov13_022436B0
    // _02225F10: .word ov13_022442B0
    // TODO: decompile
}


void ov13_02225F14(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x48
    // add r7, r1, #0
    // add r1, r2, #0
    // ldrb r2, [r1, #2]
    // str r3, [sp]
    // ldrb r6, [r1, #1]
    // lsl r3, r2, #8
    // ldrb r2, [r1]
    // ldrb r4, [r1, #3]
    // lsl r6, r6, #0x10
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // ldr r5, [r0]
    // ldrb r6, [r1, #5]
    // eor r2, r5
    // str r2, [sp, #0xc]
    // ldrb r2, [r1, #6]
    // ldrb r4, [r1, #7]
    // lsl r6, r6, #0x10
    // lsl r3, r2, #8
    // ldrb r2, [r1, #4]
    // ldr r5, [r0, #4]
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    // str r2, [sp, #8]
    // ldrb r2, [r1, #0xa]
    // ldrb r6, [r1, #9]
    // ldrb r4, [r1, #0xb]
    // lsl r3, r2, #8
    // ldrb r2, [r1, #8]
    // lsl r6, r6, #0x10
    // ldr r5, [r0, #8]
    // lsl r2, r2, #0x18
    // eor r2, r6
    // eor r2, r3
    // eor r2, r4
    // eor r2, r5
    // str r2, [sp, #0x40]
    // ldrb r2, [r1, #0xe]
    // ldr r5, [r0, #0xc]
    // ldrb r4, [r1, #0xf]
    // lsl r3, r2, #8
    // ldrb r2, [r1, #0xc]
    // ldrb r1, [r1, #0xd]
    // add r6, r5, #0
    // lsl r2, r2, #0x18
    // lsl r1, r1, #0x10
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // eor r6, r1
    // asr r1, r7, #1
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r5, [r0, #0x10]
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _022262BC ; =ov13_02242AB0
    // ldr r4, [r1, r2]
    // ldr r1, [sp, #0x40]
    // lsr r1, r1, #8
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _022262C0 ; =ov13_022426B0
    // ldr r3, [r1, r2]
    // ldr r1, [sp, #0xc]
    // lsr r1, r1, #0x18
    // lsl r2, r1, #2
    // ldr r1, _022262C4 ; =ov13_022446B0
    // ldr r7, [r1, r2]
    // lsr r1, r6, #0x10
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _022262C8 ; =ov13_02244AB0
    // ldr r1, [r1, r2]
    // eor r1, r7
    // eor r1, r3
    // eor r1, r4
    // eor r1, r5
    // str r1, [sp, #0x10]
    // ldr r1, [sp, #0x40]
    // ldr r5, [r0, #0x14]
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _022262BC ; =ov13_02242AB0
    // ldr r4, [r1, r2]
    // lsr r1, r6, #8
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _022262C0 ; =ov13_022426B0
    // ldr r3, [r1, r2]
    // ldr r1, [sp, #8]
    // lsr r1, r1, #0x18
    // lsl r2, r1, #2
    // ldr r1, _022262C4 ; =ov13_022446B0
    // ldr r7, [r1, r2]
    // ldr r1, [sp, #0xc]
    // lsr r1, r1, #0x10
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _022262C8 ; =ov13_02244AB0
    // ldr r1, [r1, r2]
    // eor r1, r7
    // eor r1, r3
    // eor r1, r4
    // eor r1, r5
    // str r1, [sp, #0x44]
    // lsl r1, r6, #0x18
    // lsr r2, r1, #0x16
    // ldr r1, _022262BC ; =ov13_02242AB0
    // ldr r3, [r0, #0x18]
    // ldr r2, [r1, r2]
    // ldr r1, [sp, #0xc]
    // lsr r1, r1, #8
    // lsl r1, r1, #0x18
    // lsr r4, r1, #0x16
    // ldr r1, _022262C0 ; =ov13_022426B0
    // ldr r1, [r1, r4]
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x40]
    // lsr r1, r1, #0x18
    // lsl r4, r1, #2
    // ldr r1, _022262C4 ; =ov13_022446B0
    // ldr r1, [r1, r4]
    // ldr r4, [sp, #8]
    // lsr r4, r4, #0x10
    // lsl r4, r4, #0x18
    // lsr r5, r4, #0x16
    // ldr r4, _022262C8 ; =ov13_02244AB0
    // ldr r4, [r4, r5]
    // eor r4, r1
    // ldr r1, [sp, #0x14]
    // eor r1, r4
    // eor r1, r2
    // add r2, r3, #0
    // eor r2, r1
    // ldr r1, [sp, #0xc]
    // ldr r3, [r0, #0x1c]
    // lsl r1, r1, #0x18
    // lsr r4, r1, #0x16
    // ldr r1, _022262BC ; =ov13_02242AB0
    // add r0, #0x20
    // ldr r1, [r1, r4]
    // ldr r4, [sp, #8]
    // lsr r4, r4, #8
    // lsl r4, r4, #0x18
    // lsr r5, r4, #0x16
    // ldr r4, _022262C0 ; =ov13_022426B0
    // ldr r7, [r4, r5]
    // lsr r4, r6, #0x18
    // lsl r5, r4, #2
    // ldr r4, _022262C4 ; =ov13_022446B0
    // ldr r6, [r4, r5]
    // ldr r4, [sp, #0x40]
    // lsr r4, r4, #0x10
    // lsl r4, r4, #0x18
    // lsr r5, r4, #0x16
    // ldr r4, _022262C8 ; =ov13_02244AB0
    // ldr r4, [r4, r5]
    // eor r4, r6
    // eor r4, r7
    // eor r1, r4
    // eor r1, r3
    // ldr r3, [sp, #4]
    // sub r3, r3, #1
    // str r3, [sp, #4]
    // beq _0222614E
    // ldr r3, [sp, #0x44]
    // ldr r4, [r0]
    // lsl r3, r3, #0x18
    // lsr r5, r3, #0x16
    // ldr r3, _022262BC ; =ov13_02242AB0
    // ldr r3, [r3, r5]
    // lsr r5, r2, #8
    // lsl r5, r5, #0x18
    // lsr r6, r5, #0x16
    // ldr r5, _022262C0 ; =ov13_022426B0
    // ldr r7, [r5, r6]
    // ldr r5, [sp, #0x10]
    // lsr r5, r5, #0x18
    // lsl r6, r5, #2
    // ldr r5, _022262C4 ; =ov13_022446B0
    // ldr r5, [r5, r6]
    // str r5, [sp, #0x18]
    // lsr r5, r1, #0x10
    // lsl r5, r5, #0x18
    // lsr r6, r5, #0x16
    // ldr r5, _022262C8 ; =ov13_02244AB0
    // ldr r6, [r5, r6]
    // ldr r5, [sp, #0x18]
    // eor r5, r6
    // eor r5, r7
    // eor r3, r5
    // eor r3, r4
    // str r3, [sp, #0xc]
    // lsl r3, r2, #0x18
    // lsr r5, r3, #0x16
    // ldr r3, _022262BC ; =ov13_02242AB0
    // ldr r4, [r0, #4]
    // ldr r3, [r3, r5]
    // lsr r5, r1, #8
    // lsl r5, r5, #0x18
    // lsr r6, r5, #0x16
    // ldr r5, _022262C0 ; =ov13_022426B0
    // ldr r7, [r5, r6]
    // ldr r5, [sp, #0x44]
    // lsr r5, r5, #0x18
    // lsl r6, r5, #2
    // ldr r5, _022262C4 ; =ov13_022446B0
    // ldr r5, [r5, r6]
    // str r5, [sp, #0x1c]
    // ldr r5, [sp, #0x10]
    // lsr r5, r5, #0x10
    // lsl r5, r5, #0x18
    // lsr r6, r5, #0x16
    // ldr r5, _022262C8 ; =ov13_02244AB0
    // ldr r6, [r5, r6]
    // ldr r5, [sp, #0x1c]
    // eor r5, r6
    // eor r5, r7
    // eor r3, r5
    // eor r3, r4
    // str r3, [sp, #8]
    // lsl r3, r1, #0x18
    // lsr r4, r3, #0x16
    // ldr r3, _022262BC ; =ov13_02242AB0
    // ldr r6, [r0, #8]
    // ldr r5, [r3, r4]
    // ldr r3, [sp, #0x10]
    // lsr r1, r1, #0x18
    // lsr r3, r3, #8
    // lsl r3, r3, #0x18
    // lsr r4, r3, #0x16
    // ldr r3, _022262C0 ; =ov13_022426B0
    // ldr r3, [r3, r4]
    // str r3, [sp, #0x20]
    // lsr r3, r2, #0x18
    // lsl r4, r3, #2
    // ldr r3, _022262C4 ; =ov13_022446B0
    // lsr r2, r2, #0x10
    // ldr r7, [r3, r4]
    // ldr r3, [sp, #0x44]
    // lsl r2, r2, #0x18
    // lsr r3, r3, #0x10
    // lsl r3, r3, #0x18
    // lsr r4, r3, #0x16
    // ldr r3, _022262C8 ; =ov13_02244AB0
    // ldr r3, [r3, r4]
    // add r4, r7, #0
    // eor r4, r3
    // ldr r3, [sp, #0x20]
    // eor r3, r4
    // eor r3, r5
    // eor r3, r6
    // str r3, [sp, #0x40]
    // ldr r3, [sp, #0x10]
    // ldr r5, [r0, #0xc]
    // lsl r3, r3, #0x18
    // lsr r4, r3, #0x16
    // ldr r3, _022262BC ; =ov13_02242AB0
    // ldr r4, [r3, r4]
    // ldr r3, [sp, #0x44]
    // lsr r3, r3, #8
    // lsl r3, r3, #0x18
    // lsr r6, r3, #0x16
    // ldr r3, _022262C0 ; =ov13_022426B0
    // ldr r3, [r3, r6]
    // lsl r6, r1, #2
    // ldr r1, _022262C4 ; =ov13_022446B0
    // ldr r1, [r1, r6]
    // lsr r6, r2, #0x16
    // ldr r2, _022262C8 ; =ov13_02244AB0
    // ldr r2, [r2, r6]
    // add r6, r5, #0
    // eor r1, r2
    // eor r1, r3
    // eor r1, r4
    // eor r6, r1
    // b _02225F8A
    // ldr r3, [r0]
    // mov r6, #0xff
    // str r3, [sp, #0x24]
    // ldr r3, [sp, #0x44]
    // lsl r6, r6, #0x10
    // lsl r3, r3, #0x18
    // lsr r4, r3, #0x16
    // ldr r3, _022262CC ; =ov13_02242EB0
    // ldr r4, [r3, r4]
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x18
    // str r4, [sp, #0x28]
    // lsr r4, r2, #8
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #8
    // and r4, r5
    // str r4, [sp, #0x2c]
    // ldr r4, [sp, #0x10]
    // lsr r4, r4, #0x18
    // lsl r4, r4, #2
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #0x18
    // and r5, r4
    // lsr r4, r1, #0x10
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r4, [r3, r4]
    // and r4, r6
    // eor r5, r4
    // ldr r4, [sp, #0x2c]
    // eor r5, r4
    // ldr r4, [sp, #0x28]
    // eor r5, r4
    // ldr r4, [sp, #0x24]
    // eor r4, r5
    // ldr r5, [sp]
    // lsr r6, r4, #0x18
    // strb r6, [r5]
    // lsr r6, r4, #0x10
    // strb r6, [r5, #1]
    // lsr r6, r4, #8
    // strb r6, [r5, #2]
    // strb r4, [r5, #3]
    // ldr r4, [r0, #4]
    // mov r6, #0xff
    // str r4, [sp, #0x30]
    // lsl r4, r2, #0x18
    // lsr r4, r4, #0x16
    // ldr r4, [r3, r4]
    // lsl r6, r6, #0x10
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x18
    // str r4, [sp, #0x34]
    // lsr r4, r1, #8
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #8
    // and r4, r5
    // str r4, [sp, #0x38]
    // ldr r4, [sp, #0x44]
    // lsr r4, r4, #0x18
    // lsl r4, r4, #2
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #0x18
    // and r5, r4
    // ldr r4, [sp, #0x10]
    // lsr r4, r4, #0x10
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r4, [r3, r4]
    // and r4, r6
    // eor r5, r4
    // ldr r4, [sp, #0x38]
    // eor r5, r4
    // ldr r4, [sp, #0x34]
    // eor r5, r4
    // ldr r4, [sp, #0x30]
    // eor r4, r5
    // ldr r5, [sp]
    // lsr r6, r4, #0x18
    // strb r6, [r5, #4]
    // lsr r6, r4, #0x10
    // strb r6, [r5, #5]
    // lsr r6, r4, #8
    // strb r6, [r5, #6]
    // strb r4, [r5, #7]
    // ldr r4, [r0, #8]
    // str r4, [sp, #0x3c]
    // lsl r4, r1, #0x18
    // lsr r4, r4, #0x16
    // ldr r4, [r3, r4]
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x18
    // mov lr, r4
    // ldr r4, [sp, #0x10]
    // lsr r4, r4, #8
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #8
    // and r4, r5
    // mov ip, r4
    // lsr r4, r2, #0x18
    // lsl r4, r4, #2
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #0x18
    // add r6, r5, #0
    // and r6, r4
    // ldr r4, [sp, #0x44]
    // lsr r4, r4, #0x10
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x16
    // ldr r5, [r3, r4]
    // mov r4, #0xff
    // lsl r4, r4, #0x10
    // and r4, r5
    // eor r4, r6
    // mov r5, ip
    // eor r5, r4
    // mov r4, lr
    // eor r5, r4
    // ldr r4, [sp, #0x3c]
    // eor r4, r5
    // ldr r5, [sp]
    // lsr r6, r4, #0x18
    // strb r6, [r5, #8]
    // lsr r6, r4, #0x10
    // strb r6, [r5, #9]
    // lsr r6, r4, #8
    // strb r6, [r5, #0xa]
    // strb r4, [r5, #0xb]
    // ldr r5, [r0, #0xc]
    // ldr r0, [sp, #0x10]
    // lsr r2, r2, #0x10
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r0, [r3, r0]
    // lsr r1, r1, #0x18
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, [sp, #0x44]
    // lsl r2, r2, #0x18
    // lsr r0, r0, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // ldr r6, [r3, r0]
    // mov r0, #0xff
    // lsl r0, r0, #8
    // lsl r1, r1, #2
    // and r0, r6
    // mov r6, #0xff
    // lsr r2, r2, #0x16
    // ldr r1, [r3, r1]
    // ldr r3, [r3, r2]
    // mov r2, #0xff
    // lsl r6, r6, #0x18
    // lsl r2, r2, #0x10
    // and r1, r6
    // and r2, r3
    // eor r1, r2
    // eor r0, r1
    // eor r0, r4
    // eor r0, r5
    // ldr r1, [sp]
    // lsr r2, r0, #0x18
    // strb r2, [r1, #0xc]
    // lsr r2, r0, #0x10
    // strb r2, [r1, #0xd]
    // lsr r2, r0, #8
    // strb r2, [r1, #0xe]
    // strb r0, [r1, #0xf]
    // add sp, #0x48
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022262BC: .word ov13_02242AB0
    // _022262C0: .word ov13_022426B0
    // _022262C4: .word ov13_022446B0
    // _022262C8: .word ov13_02244AB0
    // _022262CC: .word ov13_02242EB0
    // TODO: decompile
}


void ov13_022262D0(void) {
    // mov r1, #0
    // str r1, [r0, #0x14]
    // str r1, [r0, #0x10]
    // ldr r1, _022262E8 ; =0x67452301
    // str r1, [r0]
    // ldr r1, _022262EC ; =0xEFCDAB89
    // str r1, [r0, #4]
    // ldr r1, _022262F0 ; =0x98BADCFE
    // str r1, [r0, #8]
    // ldr r1, _022262F4 ; =0x10325476
    // str r1, [r0, #0xc]
    // bx lr
    // _022262E8: .word 0x67452301
    // _022262EC: .word 0xEFCDAB89
    // _022262F0: .word 0x98BADCFE
    // _022262F4: .word 0x10325476
    // TODO: decompile
}


void ov13_022262F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // ldr r1, [r5, #0x10]
    // add r6, r2, #0
    // lsr r2, r1, #3
    // mov r0, #0x3f
    // and r0, r2
    // lsl r2, r6, #3
    // add r1, r1, r2
    // str r1, [r5, #0x10]
    // cmp r1, r2
    // bhs _02226318
    // ldr r1, [r5, #0x14]
    // add r1, r1, #1
    // str r1, [r5, #0x14]
    // ldr r2, [r5, #0x14]
    // lsr r1, r6, #0x1d
    // add r1, r2, r1
    // str r1, [r5, #0x14]
    // mov r1, #0x40
    // sub r4, r1, r0
    // cmp r6, r4
    // blo _0222635E
    // add r1, r5, #0
    // add r1, #0x18
    // add r0, r1, r0
    // add r1, r7, #0
    // add r2, r4, #0
    // bl ov13_02226C64
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x18
    // bl ov13_022263C4
    // add r0, r4, #0
    // add r0, #0x3f
    // cmp r0, r6
    // bhs _0222635A
    // add r0, r5, #0
    // add r1, r7, r4
    // bl ov13_022263C4
    // add r4, #0x40
    // add r0, r4, #0
    // add r0, #0x3f
    // cmp r0, r6
    // blo _02226348
    // mov r0, #0
    // b _02226360
    // mov r4, #0
    // add r5, #0x18
    // add r0, r5, r0
    // add r1, r7, r4
    // sub r2, r6, r4
    // bl ov13_02226C64
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02226370(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r4, r1, #0
    // add r0, sp, #0
    // add r1, #0x10
    // mov r2, #8
    // bl ov13_02226C0C
    // ldr r0, [r4, #0x10]
    // lsr r1, r0, #3
    // mov r0, #0x3f
    // and r1, r0
    // cmp r1, #0x38
    // bhs _02226392
    // mov r0, #0x38
    // b _02226394
    // mov r0, #0x78
    // sub r2, r0, r1
    // ldr r1, _022263C0 ; =ov13_02245AD8
    // add r0, r4, #0
    // bl ov13_022262F8
    // add r0, r4, #0
    // add r1, sp, #0
    // mov r2, #8
    // bl ov13_022262F8
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x10
    // bl ov13_02226C0C
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x58
    // bl ov13_02226C7C
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _022263C0: .word ov13_02245AD8
    // TODO: decompile
}


void ov13_022263C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x84
    // add r7, r0, #0
    // ldr r0, [r7]
    // mov r2, #0x40
    // str r0, [sp]
    // add r0, sp, #0x44
    // ldr r4, [r7, #4]
    // ldr r5, [r7, #8]
    // ldr r6, [r7, #0xc]
    // bl ov13_02226C38
    // ldr r0, [sp, #0x44]
    // add r1, r4, #0
    // str r0, [sp, #4]
    // mvn r0, r4
    // and r1, r5
    // and r0, r6
    // orr r1, r0
    // ldr r0, [sp, #4]
    // add r1, r0, r1
    // ldr r0, _0222679C ; =0x28955B88
    // sub r1, r1, r0
    // ldr r0, [sp]
    // add r0, r0, r1
    // lsl r1, r0, #7
    // lsr r0, r0, #0x19
    // orr r0, r1
    // add r3, r0, r4
    // ldr r0, [sp, #0x48]
    // mvn r1, r3
    // str r0, [sp, #8]
    // add r0, r3, #0
    // and r0, r4
    // and r1, r5
    // orr r1, r0
    // ldr r0, [sp, #8]
    // add r1, r0, r1
    // ldr r0, _022267A0 ; =0x173848AA
    // sub r0, r1, r0
    // add r0, r6, r0
    // lsl r1, r0, #0xc
    // lsr r0, r0, #0x14
    // orr r0, r1
    // add r2, r0, r3
    // ldr r0, [sp, #0x4c]
    // mvn r1, r2
    // str r0, [sp, #0xc]
    // add r0, r2, #0
    // and r0, r3
    // and r1, r4
    // orr r1, r0
    // ldr r0, [sp, #0xc]
    // add r1, r0, r1
    // ldr r0, _022267A4 ; =0x242070DB
    // add r0, r1, r0
    // add r0, r5, r0
    // lsl r1, r0, #0x11
    // lsr r0, r0, #0xf
    // orr r0, r1
    // add r1, r0, r2
    // ldr r0, [sp, #0x50]
    // mvn r5, r1
    // str r0, [sp, #0x10]
    // add r0, r1, #0
    // and r0, r2
    // and r5, r3
    // orr r5, r0
    // ldr r0, [sp, #0x10]
    // add r5, r0, r5
    // ldr r0, _022267A8 ; =0x3E423112
    // sub r0, r5, r0
    // add r0, r4, r0
    // lsl r4, r0, #0x16
    // lsr r0, r0, #0xa
    // orr r0, r4
    // ldr r4, [sp, #0x54]
    // add r0, r0, r1
    // str r4, [sp, #0x14]
    // add r4, r0, #0
    // mvn r5, r0
    // and r4, r1
    // and r5, r2
    // orr r5, r4
    // ldr r4, [sp, #0x14]
    // add r5, r4, r5
    // ldr r4, _022267AC ; =0x0A83F051
    // sub r4, r5, r4
    // add r3, r3, r4
    // lsl r4, r3, #7
    // lsr r3, r3, #0x19
    // orr r3, r4
    // ldr r4, [sp, #0x58]
    // add r3, r3, r0
    // str r4, [sp, #0x18]
    // add r4, r3, #0
    // mvn r5, r3
    // and r4, r0
    // and r5, r1
    // orr r5, r4
    // ldr r4, [sp, #0x18]
    // add r5, r4, r5
    // ldr r4, _022267B0 ; =0x4787C62A
    // add r4, r5, r4
    // add r2, r2, r4
    // lsl r4, r2, #0xc
    // lsr r2, r2, #0x14
    // orr r2, r4
    // ldr r4, [sp, #0x5c]
    // add r2, r2, r3
    // str r4, [sp, #0x1c]
    // add r4, r2, #0
    // mvn r5, r2
    // and r4, r3
    // and r5, r0
    // orr r5, r4
    // ldr r4, [sp, #0x1c]
    // add r5, r4, r5
    // ldr r4, _022267B4 ; =0x57CFB9ED
    // sub r4, r5, r4
    // add r1, r1, r4
    // lsl r4, r1, #0x11
    // lsr r1, r1, #0xf
    // orr r1, r4
    // ldr r4, [sp, #0x60]
    // add r1, r1, r2
    // str r4, [sp, #0x20]
    // add r4, r1, #0
    // mvn r5, r1
    // and r4, r2
    // and r5, r3
    // orr r5, r4
    // ldr r4, [sp, #0x20]
    // add r5, r4, r5
    // ldr r4, _022267B8 ; =0x02B96AFF
    // sub r4, r5, r4
    // add r0, r0, r4
    // lsl r4, r0, #0x16
    // lsr r0, r0, #0xa
    // orr r0, r4
    // ldr r4, [sp, #0x64]
    // add r0, r0, r1
    // str r4, [sp, #0x24]
    // add r4, r0, #0
    // mvn r5, r0
    // and r4, r1
    // and r5, r2
    // orr r5, r4
    // ldr r4, [sp, #0x24]
    // add r5, r4, r5
    // ldr r4, _022267BC ; =0x698098D8
    // add r4, r5, r4
    // add r3, r3, r4
    // lsl r4, r3, #7
    // lsr r3, r3, #0x19
    // orr r3, r4
    // ldr r4, [sp, #0x68]
    // add r3, r3, r0
    // str r4, [sp, #0x28]
    // add r4, r3, #0
    // mvn r5, r3
    // and r4, r0
    // and r5, r1
    // orr r5, r4
    // ldr r4, [sp, #0x28]
    // add r5, r4, r5
    // ldr r4, _022267C0 ; =0x74BB0851
    // sub r4, r5, r4
    // add r2, r2, r4
    // lsl r4, r2, #0xc
    // lsr r2, r2, #0x14
    // orr r2, r4
    // ldr r4, [sp, #0x6c]
    // add r2, r2, r3
    // str r4, [sp, #0x2c]
    // add r4, r2, #0
    // mvn r5, r2
    // and r4, r3
    // and r5, r0
    // orr r5, r4
    // ldr r4, [sp, #0x2c]
    // add r5, r4, r5
    // ldr r4, _022267C4 ; =0x0000A44F
    // sub r4, r5, r4
    // add r1, r1, r4
    // lsl r4, r1, #0x11
    // lsr r1, r1, #0xf
    // orr r1, r4
    // ldr r4, [sp, #0x70]
    // add r1, r1, r2
    // str r4, [sp, #0x30]
    // add r4, r1, #0
    // mvn r5, r1
    // and r4, r2
    // and r5, r3
    // orr r5, r4
    // ldr r4, [sp, #0x30]
    // add r5, r4, r5
    // ldr r4, _022267C8 ; =0x76A32842
    // sub r4, r5, r4
    // add r0, r0, r4
    // lsl r4, r0, #0x16
    // lsr r0, r0, #0xa
    // orr r0, r4
    // add r0, r0, r1
    // ldr r4, [sp, #0x74]
    // mvn r5, r0
    // str r4, [sp, #0x34]
    // add r4, r0, #0
    // and r4, r1
    // and r5, r2
    // orr r5, r4
    // ldr r4, [sp, #0x34]
    // add r5, r4, r5
    // ldr r4, _022267CC ; =0x6B901122
    // add r4, r5, r4
    // add r3, r3, r4
    // lsl r4, r3, #7
    // lsr r3, r3, #0x19
    // orr r3, r4
    // add r4, r3, r0
    // ldr r3, [sp, #0x78]
    // mvn r5, r4
    // str r3, [sp, #0x38]
    // add r3, r4, #0
    // and r3, r0
    // and r5, r1
    // orr r5, r3
    // ldr r3, [sp, #0x38]
    // add r5, r3, r5
    // ldr r3, _022267D0 ; =0x02678E6D
    // sub r3, r5, r3
    // add r2, r2, r3
    // lsl r3, r2, #0xc
    // lsr r2, r2, #0x14
    // orr r2, r3
    // add r3, r2, r4
    // mvn r2, r3
    // str r2, [sp, #0x3c]
    // ldr r2, [sp, #0x7c]
    // ldr r5, [sp, #0x3c]
    // str r2, [sp, #0x40]
    // add r2, r3, #0
    // and r2, r4
    // and r5, r0
    // orr r5, r2
    // ldr r2, [sp, #0x40]
    // add r5, r2, r5
    // ldr r2, _022267D4 ; =0x5986BC72
    // sub r2, r5, r2
    // add r1, r1, r2
    // lsl r2, r1, #0x11
    // lsr r1, r1, #0xf
    // orr r1, r2
    // add r2, r1, r3
    // ldr r1, [sp, #0x80]
    // add r5, r2, #0
    // mvn r6, r2
    // mov ip, r1
    // add r1, r6, #0
    // and r5, r3
    // and r1, r4
    // orr r5, r1
    // mov r1, ip
    // add r5, r1, r5
    // ldr r1, _022267D8 ; =0x49B40821
    // add r1, r5, r1
    // add r0, r0, r1
    // lsl r1, r0, #0x16
    // lsr r0, r0, #0xa
    // orr r0, r1
    // add r1, r0, r2
    // ldr r5, [sp, #0x3c]
    // add r0, r1, #0
    // and r0, r3
    // and r5, r2
    // orr r5, r0
    // ldr r0, [sp, #8]
    // add r5, r0, r5
    // ldr r0, _022267DC ; =0x09E1DA9E
    // sub r0, r5, r0
    // add r0, r4, r0
    // lsl r4, r0, #5
    // lsr r0, r0, #0x1b
    // orr r0, r4
    // add r0, r0, r1
    // add r4, r0, #0
    // add r5, r1, #0
    // and r4, r2
    // bic r5, r2
    // orr r5, r4
    // ldr r4, [sp, #0x1c]
    // add r5, r4, r5
    // ldr r4, _022267E0 ; =0x3FBF4CC0
    // sub r4, r5, r4
    // add r3, r3, r4
    // lsl r4, r3, #9
    // lsr r3, r3, #0x17
    // orr r3, r4
    // add r3, r3, r0
    // add r4, r3, #0
    // mvn r5, r1
    // and r4, r1
    // and r5, r0
    // orr r5, r4
    // ldr r4, [sp, #0x30]
    // add r5, r4, r5
    // ldr r4, _022267E4 ; =0x265E5A51
    // add r4, r5, r4
    // add r2, r2, r4
    // lsl r4, r2, #0xe
    // lsr r2, r2, #0x12
    // orr r2, r4
    // add r2, r2, r3
    // add r4, r2, #0
    // mvn r5, r0
    // and r4, r0
    // and r5, r3
    // orr r5, r4
    // ldr r4, [sp, #4]
    // add r5, r4, r5
    // ldr r4, _022267E8 ; =0x16493856
    // sub r4, r5, r4
    // add r1, r1, r4
    // lsl r4, r1, #0x14
    // lsr r1, r1, #0xc
    // orr r1, r4
    // add r1, r1, r2
    // add r4, r1, #0
    // mvn r5, r3
    // and r4, r3
    // and r5, r2
    // orr r5, r4
    // ldr r4, [sp, #0x18]
    // add r5, r4, r5
    // ldr r4, _022267EC ; =0x29D0EFA3
    // sub r4, r5, r4
    // add r0, r0, r4
    // lsl r4, r0, #5
    // lsr r0, r0, #0x1b
    // orr r0, r4
    // add r4, r0, r1
    // add r0, r4, #0
    // mvn r5, r2
    // and r0, r2
    // and r5, r1
    // orr r5, r0
    // ldr r0, [sp, #0x2c]
    // add r5, r0, r5
    // ldr r0, _022267F0 ; =0x02441453
    // add r0, r5, r0
    // add r0, r3, r0
    // lsl r3, r0, #9
    // lsr r0, r0, #0x17
    // orr r0, r3
    // add r3, r0, r4
    // add r0, r3, #0
    // mvn r5, r1
    // and r0, r1
    // and r5, r4
    // orr r5, r0
    // mov r0, ip
    // add r5, r0, r5
    // ldr r0, _022267F4 ; =0x275E197F
    // sub r0, r5, r0
    // add r0, r2, r0
    // lsl r2, r0, #0xe
    // lsr r0, r0, #0x12
    // orr r0, r2
    // add r0, r0, r3
    // add r2, r0, #0
    // mvn r5, r4
    // and r2, r4
    // and r5, r3
    // orr r5, r2
    // ldr r2, [sp, #0x14]
    // add r5, r2, r5
    // ldr r2, _022267F8 ; =0x182C0438
    // sub r2, r5, r2
    // add r1, r1, r2
    // lsl r2, r1, #0x14
    // lsr r1, r1, #0xc
    // orr r1, r2
    // add r5, r1, r0
    // add r1, r5, #0
    // mvn r2, r3
    // and r1, r3
    // and r2, r0
    // orr r2, r1
    // ldr r1, [sp, #0x28]
    // add r2, r1, r2
    // ldr r1, _022267FC ; =0x21E1CDE6
    // add r1, r2, r1
    // add r1, r4, r1
    // lsl r2, r1, #5
    // lsr r1, r1, #0x1b
    // orr r1, r2
    // add r2, r1, r5
    // add r1, r2, #0
    // mvn r4, r0
    // and r1, r0
    // and r4, r5
    // orr r4, r1
    // ldr r1, [sp, #0x40]
    // add r4, r1, r4
    // ldr r1, _02226800 ; =0x3CC8F82A
    // sub r1, r4, r1
    // add r1, r3, r1
    // lsl r3, r1, #9
    // lsr r1, r1, #0x17
    // orr r1, r3
    // add r1, r1, r2
    // add r3, r1, #0
    // mvn r4, r5
    // and r3, r5
    // and r4, r2
    // orr r4, r3
    // ldr r3, [sp, #0x10]
    // add r4, r3, r4
    // ldr r3, _02226804 ; =0x0B2AF279
    // sub r3, r4, r3
    // add r0, r0, r3
    // lsl r3, r0, #0xe
    // lsr r0, r0, #0x12
    // orr r0, r3
    // add r4, r0, r1
    // add r0, r4, #0
    // mvn r3, r2
    // and r0, r2
    // and r3, r1
    // orr r3, r0
    // ldr r0, [sp, #0x24]
    // add r3, r0, r3
    // ldr r0, _02226808 ; =0x455A14ED
    // add r0, r3, r0
    // add r0, r5, r0
    // lsl r3, r0, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r3
    // add r3, r0, r4
    // add r0, r3, #0
    // mvn r5, r1
    // and r0, r1
    // and r5, r4
    // orr r5, r0
    // ldr r0, [sp, #0x38]
    // add r5, r0, r5
    // ldr r0, _0222680C ; =0x561C16FB
    // sub r0, r5, r0
    // add r0, r2, r0
    // lsl r2, r0, #5
    // lsr r0, r0, #0x1b
    // orr r0, r2
    // add r0, r0, r3
    // add r2, r0, #0
    // mvn r5, r4
    // and r2, r4
    // and r5, r3
    // orr r5, r2
    // ldr r2, [sp, #0xc]
    // add r5, r2, r5
    // ldr r2, _02226810 ; =0x03105C08
    // sub r2, r5, r2
    // add r1, r1, r2
    // lsl r2, r1, #9
    // lsr r1, r1, #0x17
    // orr r1, r2
    // add r5, r1, r0
    // add r1, r5, #0
    // mvn r2, r3
    // and r1, r3
    // and r2, r0
    // orr r2, r1
    // ldr r1, [sp, #0x20]
    // add r2, r1, r2
    // ldr r1, _02226814 ; =0x676F02D9
    // add r1, r2, r1
    // add r1, r4, r1
    // lsl r2, r1, #0xe
    // lsr r1, r1, #0x12
    // orr r1, r2
    // add r2, r1, r5
    // add r1, r2, #0
    // mvn r4, r0
    // and r1, r0
    // and r4, r5
    // orr r4, r1
    // ldr r1, [sp, #0x34]
    // add r4, r1, r4
    // ldr r1, _02226818 ; =0x72D5B376
    // b _0222681C
    // nop
    // _0222679C: .word 0x28955B88
    // _022267A0: .word 0x173848AA
    // _022267A4: .word 0x242070DB
    // _022267A8: .word 0x3E423112
    // _022267AC: .word 0x0A83F051
    // _022267B0: .word 0x4787C62A
    // _022267B4: .word 0x57CFB9ED
    // _022267B8: .word 0x02B96AFF
    // _022267BC: .word 0x698098D8
    // _022267C0: .word 0x74BB0851
    // _022267C4: .word 0x0000A44F
    // _022267C8: .word 0x76A32842
    // _022267CC: .word 0x6B901122
    // _022267D0: .word 0x02678E6D
    // _022267D4: .word 0x5986BC72
    // _022267D8: .word 0x49B40821
    // _022267DC: .word 0x09E1DA9E
    // _022267E0: .word 0x3FBF4CC0
    // _022267E4: .word 0x265E5A51
    // _022267E8: .word 0x16493856
    // _022267EC: .word 0x29D0EFA3
    // _022267F0: .word 0x02441453
    // _022267F4: .word 0x275E197F
    // _022267F8: .word 0x182C0438
    // _022267FC: .word 0x21E1CDE6
    // _02226800: .word 0x3CC8F82A
    // _02226804: .word 0x0B2AF279
    // _02226808: .word 0x455A14ED
    // _0222680C: .word 0x561C16FB
    // _02226810: .word 0x03105C08
    // _02226814: .word 0x676F02D9
    // _02226818: .word 0x72D5B376
    // sub r1, r4, r1
    // add r1, r3, r1
    // lsl r3, r1, #0x14
    // lsr r1, r1, #0xc
    // orr r1, r3
    // add r1, r1, r2
    // add r3, r1, #0
    // eor r3, r2
    // add r4, r5, #0
    // eor r4, r3
    // ldr r3, [sp, #0x18]
    // add r4, r3, r4
    // ldr r3, _02226B8C ; =0x0005C6BE
    // sub r3, r4, r3
    // add r0, r0, r3
    // lsl r3, r0, #4
    // lsr r0, r0, #0x1c
    // orr r0, r3
    // add r4, r0, r1
    // add r0, r4, #0
    // eor r0, r1
    // add r3, r2, #0
    // eor r3, r0
    // ldr r0, [sp, #0x24]
    // add r3, r0, r3
    // ldr r0, _02226B90 ; =0x788E097F
    // sub r0, r3, r0
    // add r0, r5, r0
    // lsl r3, r0, #0xb
    // lsr r0, r0, #0x15
    // orr r0, r3
    // add r3, r0, r4
    // add r0, r3, #0
    // eor r0, r4
    // add r5, r1, #0
    // eor r5, r0
    // ldr r0, [sp, #0x30]
    // add r5, r0, r5
    // ldr r0, _02226B94 ; =0x6D9D6122
    // add r0, r5, r0
    // add r0, r2, r0
    // lsl r2, r0, #0x10
    // lsr r0, r0, #0x10
    // orr r0, r2
    // add r0, r0, r3
    // add r2, r0, #0
    // eor r2, r3
    // add r5, r4, #0
    // eor r5, r2
    // ldr r2, [sp, #0x40]
    // add r5, r2, r5
    // ldr r2, _02226B98 ; =0x021AC7F4
    // sub r2, r5, r2
    // add r1, r1, r2
    // lsl r2, r1, #0x17
    // lsr r1, r1, #9
    // orr r1, r2
    // add r5, r1, r0
    // add r1, r5, #0
    // eor r1, r0
    // add r2, r3, #0
    // eor r2, r1
    // ldr r1, [sp, #8]
    // add r2, r1, r2
    // ldr r1, _02226B9C ; =0x5B4115BC
    // sub r1, r2, r1
    // add r1, r4, r1
    // lsl r2, r1, #4
    // lsr r1, r1, #0x1c
    // orr r1, r2
    // add r2, r1, r5
    // add r1, r2, #0
    // eor r1, r5
    // add r4, r0, #0
    // eor r4, r1
    // ldr r1, [sp, #0x14]
    // add r4, r1, r4
    // ldr r1, _02226BA0 ; =0x4BDECFA9
    // add r1, r4, r1
    // add r1, r3, r1
    // lsl r3, r1, #0xb
    // lsr r1, r1, #0x15
    // orr r1, r3
    // add r1, r1, r2
    // add r3, r1, #0
    // eor r3, r2
    // add r4, r5, #0
    // eor r4, r3
    // ldr r3, [sp, #0x20]
    // add r4, r3, r4
    // ldr r3, _02226BA4 ; =0x0944B4A0
    // sub r3, r4, r3
    // add r0, r0, r3
    // lsl r3, r0, #0x10
    // lsr r0, r0, #0x10
    // orr r0, r3
    // add r4, r0, r1
    // add r0, r4, #0
    // eor r0, r1
    // add r3, r2, #0
    // eor r3, r0
    // ldr r0, [sp, #0x2c]
    // add r3, r0, r3
    // ldr r0, _02226BA8 ; =0x41404390
    // sub r0, r3, r0
    // add r0, r5, r0
    // lsl r3, r0, #0x17
    // lsr r0, r0, #9
    // orr r0, r3
    // add r3, r0, r4
    // add r0, r3, #0
    // eor r0, r4
    // add r5, r1, #0
    // eor r5, r0
    // ldr r0, [sp, #0x38]
    // add r5, r0, r5
    // ldr r0, _02226BAC ; =0x289B7EC6
    // add r0, r5, r0
    // add r0, r2, r0
    // lsl r2, r0, #4
    // lsr r0, r0, #0x1c
    // orr r0, r2
    // add r0, r0, r3
    // add r2, r0, #0
    // eor r2, r3
    // add r5, r4, #0
    // eor r5, r2
    // ldr r2, [sp, #4]
    // add r5, r2, r5
    // ldr r2, _02226BB0 ; =0x155ED806
    // sub r2, r5, r2
    // add r1, r1, r2
    // lsl r2, r1, #0xb
    // lsr r1, r1, #0x15
    // orr r1, r2
    // add r5, r1, r0
    // add r1, r5, #0
    // eor r1, r0
    // add r2, r3, #0
    // eor r2, r1
    // ldr r1, [sp, #0x10]
    // add r2, r1, r2
    // ldr r1, _02226BB4 ; =0x2B10CF7B
    // sub r1, r2, r1
    // add r1, r4, r1
    // lsl r2, r1, #0x10
    // lsr r1, r1, #0x10
    // orr r1, r2
    // add r2, r1, r5
    // add r1, r2, #0
    // eor r1, r5
    // add r4, r0, #0
    // eor r4, r1
    // ldr r1, [sp, #0x1c]
    // add r4, r1, r4
    // ldr r1, _02226BB8 ; =0x04881D05
    // add r1, r4, r1
    // add r1, r3, r1
    // lsl r3, r1, #0x17
    // lsr r1, r1, #9
    // orr r1, r3
    // add r1, r1, r2
    // add r3, r1, #0
    // eor r3, r2
    // add r4, r5, #0
    // eor r4, r3
    // ldr r3, [sp, #0x28]
    // add r4, r3, r4
    // ldr r3, _02226BBC ; =0x262B2FC7
    // sub r3, r4, r3
    // add r0, r0, r3
    // lsl r3, r0, #4
    // lsr r0, r0, #0x1c
    // orr r0, r3
    // add r4, r0, r1
    // add r0, r4, #0
    // eor r0, r1
    // add r3, r2, #0
    // eor r3, r0
    // ldr r0, [sp, #0x34]
    // add r3, r0, r3
    // ldr r0, _02226BC0 ; =0x1924661B
    // sub r0, r3, r0
    // add r0, r5, r0
    // lsl r3, r0, #0xb
    // lsr r0, r0, #0x15
    // orr r0, r3
    // add r3, r0, r4
    // add r0, r3, #0
    // eor r0, r4
    // add r5, r1, #0
    // eor r5, r0
    // mov r0, ip
    // add r5, r0, r5
    // ldr r0, _02226BC4 ; =0x1FA27CF8
    // add r0, r5, r0
    // add r0, r2, r0
    // lsl r2, r0, #0x10
    // lsr r0, r0, #0x10
    // orr r0, r2
    // add r0, r0, r3
    // add r2, r0, #0
    // eor r2, r3
    // add r5, r4, #0
    // eor r5, r2
    // ldr r2, [sp, #0xc]
    // add r5, r2, r5
    // ldr r2, _02226BC8 ; =0x3B53A99B
    // sub r2, r5, r2
    // add r1, r1, r2
    // lsl r2, r1, #0x17
    // lsr r1, r1, #9
    // orr r1, r2
    // add r5, r1, r0
    // mvn r1, r3
    // orr r1, r5
    // add r2, r0, #0
    // eor r2, r1
    // ldr r1, [sp, #4]
    // add r2, r1, r2
    // ldr r1, _02226BCC ; =0x0BD6DDBC
    // sub r1, r2, r1
    // add r1, r4, r1
    // lsl r2, r1, #6
    // lsr r1, r1, #0x1a
    // orr r1, r2
    // add r2, r1, r5
    // mvn r1, r0
    // orr r1, r2
    // add r4, r5, #0
    // eor r4, r1
    // ldr r1, [sp, #0x20]
    // add r4, r1, r4
    // ldr r1, _02226BD0 ; =0x432AFF97
    // add r1, r4, r1
    // add r1, r3, r1
    // lsl r3, r1, #0xa
    // lsr r1, r1, #0x16
    // orr r1, r3
    // add r1, r1, r2
    // mvn r3, r5
    // orr r3, r1
    // add r4, r2, #0
    // eor r4, r3
    // ldr r3, [sp, #0x40]
    // add r4, r3, r4
    // ldr r3, _02226BD4 ; =0x546BDC59
    // sub r3, r4, r3
    // add r0, r0, r3
    // lsl r3, r0, #0xf
    // lsr r0, r0, #0x11
    // orr r0, r3
    // add r4, r0, r1
    // mvn r0, r2
    // orr r0, r4
    // add r3, r1, #0
    // eor r3, r0
    // ldr r0, [sp, #0x18]
    // add r3, r0, r3
    // ldr r0, _02226BD8 ; =0x036C5FC7
    // sub r0, r3, r0
    // add r0, r5, r0
    // lsl r3, r0, #0x15
    // lsr r0, r0, #0xb
    // orr r0, r3
    // add r3, r0, r4
    // mvn r0, r1
    // orr r0, r3
    // add r5, r4, #0
    // eor r5, r0
    // ldr r0, [sp, #0x34]
    // add r5, r0, r5
    // ldr r0, _02226BDC ; =0x655B59C3
    // add r0, r5, r0
    // add r0, r2, r0
    // lsl r2, r0, #6
    // lsr r0, r0, #0x1a
    // orr r0, r2
    // add r0, r0, r3
    // mvn r2, r4
    // orr r2, r0
    // add r5, r3, #0
    // eor r5, r2
    // ldr r2, [sp, #0x10]
    // add r5, r2, r5
    // ldr r2, _02226BE0 ; =0x70F3336E
    // sub r2, r5, r2
    // add r1, r1, r2
    // lsl r2, r1, #0xa
    // lsr r1, r1, #0x16
    // orr r1, r2
    // add r5, r1, r0
    // mvn r1, r3
    // orr r1, r5
    // add r2, r0, #0
    // eor r2, r1
    // ldr r1, [sp, #0x2c]
    // add r2, r1, r2
    // ldr r1, _02226BE4 ; =0x00100B83
    // sub r1, r2, r1
    // add r1, r4, r1
    // lsl r2, r1, #0xf
    // lsr r1, r1, #0x11
    // orr r1, r2
    // add r2, r1, r5
    // mvn r1, r0
    // orr r1, r2
    // add r4, r5, #0
    // eor r4, r1
    // ldr r1, [sp, #8]
    // add r4, r1, r4
    // ldr r1, _02226BE8 ; =0x7A7BA22F
    // sub r1, r4, r1
    // add r1, r3, r1
    // lsl r3, r1, #0x15
    // lsr r1, r1, #0xb
    // orr r1, r3
    // add r1, r1, r2
    // mvn r3, r5
    // orr r3, r1
    // add r4, r2, #0
    // eor r4, r3
    // ldr r3, [sp, #0x24]
    // add r4, r3, r4
    // ldr r3, _02226BEC ; =0x6FA87E4F
    // add r3, r4, r3
    // add r0, r0, r3
    // lsl r3, r0, #6
    // lsr r0, r0, #0x1a
    // orr r0, r3
    // add r3, r0, r1
    // mvn r0, r2
    // orr r0, r3
    // eor r0, r1
    // mov r4, ip
    // add r4, r4, r0
    // ldr r0, _02226BF0 ; =0x01D31920
    // sub r0, r4, r0
    // add r0, r5, r0
    // lsl r4, r0, #0xa
    // lsr r0, r0, #0x16
    // orr r0, r4
    // add r0, r0, r3
    // mvn r4, r1
    // orr r4, r0
    // add r5, r3, #0
    // eor r5, r4
    // ldr r4, [sp, #0x1c]
    // add r5, r4, r5
    // ldr r4, _02226BF4 ; =0x5CFEBCEC
    // sub r4, r5, r4
    // add r2, r2, r4
    // lsl r4, r2, #0xf
    // lsr r2, r2, #0x11
    // orr r2, r4
    // add r4, r2, r0
    // mvn r2, r3
    // orr r2, r4
    // add r5, r0, #0
    // eor r5, r2
    // ldr r2, [sp, #0x38]
    // add r5, r2, r5
    // ldr r2, _02226BF8 ; =0x4E0811A1
    // add r2, r5, r2
    // add r1, r1, r2
    // lsl r2, r1, #0x15
    // lsr r1, r1, #0xb
    // orr r1, r2
    // add r2, r1, r4
    // mvn r1, r0
    // orr r1, r2
    // add r5, r4, #0
    // eor r5, r1
    // ldr r1, [sp, #0x14]
    // add r5, r1, r5
    // ldr r1, _02226BFC ; =0x08AC817E
    // sub r1, r5, r1
    // add r1, r3, r1
    // lsl r3, r1, #6
    // lsr r1, r1, #0x1a
    // orr r1, r3
    // add r1, r1, r2
    // mvn r3, r4
    // orr r3, r1
    // add r5, r2, #0
    // eor r5, r3
    // ldr r3, [sp, #0x30]
    // add r5, r3, r5
    // ldr r3, _02226C00 ; =0x42C50DCB
    // sub r3, r5, r3
    // add r0, r0, r3
    // lsl r3, r0, #0xa
    // lsr r0, r0, #0x16
    // orr r0, r3
    // add r5, r0, r1
    // mvn r0, r2
    // orr r0, r5
    // add r3, r1, #0
    // eor r3, r0
    // ldr r0, [sp, #0xc]
    // add r3, r0, r3
    // ldr r0, _02226C04 ; =0x2AD7D2BB
    // add r0, r3, r0
    // add r0, r4, r0
    // lsl r3, r0, #0xf
    // lsr r0, r0, #0x11
    // orr r0, r3
    // add r3, r0, r5
    // mvn r0, r1
    // orr r0, r3
    // add r4, r5, #0
    // eor r4, r0
    // ldr r0, [sp, #0x28]
    // add r4, r0, r4
    // ldr r0, _02226C08 ; =0x14792C6F
    // sub r0, r4, r0
    // add r0, r2, r0
    // lsl r2, r0, #0x15
    // lsr r0, r0, #0xb
    // orr r0, r2
    // ldr r2, [r7]
    // add r0, r0, r3
    // add r1, r2, r1
    // str r1, [r7]
    // ldr r1, [r7, #4]
    // mov r2, #0x40
    // add r0, r1, r0
    // str r0, [r7, #4]
    // ldr r0, [r7, #8]
    // mov r1, #0
    // add r0, r0, r3
    // str r0, [r7, #8]
    // ldr r0, [r7, #0xc]
    // add r0, r0, r5
    // str r0, [r7, #0xc]
    // add r0, sp, #0x44
    // bl ov13_02226C7C
    // add sp, #0x84
    // pop {r4, r5, r6, r7, pc}
    // _02226B8C: .word 0x0005C6BE
    // _02226B90: .word 0x788E097F
    // _02226B94: .word 0x6D9D6122
    // _02226B98: .word 0x021AC7F4
    // _02226B9C: .word 0x5B4115BC
    // _02226BA0: .word 0x4BDECFA9
    // _02226BA4: .word 0x0944B4A0
    // _02226BA8: .word 0x41404390
    // _02226BAC: .word 0x289B7EC6
    // _02226BB0: .word 0x155ED806
    // _02226BB4: .word 0x2B10CF7B
    // _02226BB8: .word 0x04881D05
    // _02226BBC: .word 0x262B2FC7
    // _02226BC0: .word 0x1924661B
    // _02226BC4: .word 0x1FA27CF8
    // _02226BC8: .word 0x3B53A99B
    // _02226BCC: .word 0x0BD6DDBC
    // _02226BD0: .word 0x432AFF97
    // _02226BD4: .word 0x546BDC59
    // _02226BD8: .word 0x036C5FC7
    // _02226BDC: .word 0x655B59C3
    // _02226BE0: .word 0x70F3336E
    // _02226BE4: .word 0x00100B83
    // _02226BE8: .word 0x7A7BA22F
    // _02226BEC: .word 0x6FA87E4F
    // _02226BF0: .word 0x01D31920
    // _02226BF4: .word 0x5CFEBCEC
    // _02226BF8: .word 0x4E0811A1
    // _02226BFC: .word 0x08AC817E
    // _02226C00: .word 0x42C50DCB
    // _02226C04: .word 0x2AD7D2BB
    // _02226C08: .word 0x14792C6F
    // TODO: decompile
}


void ov13_02226C0C(void) {
    // push {r4, r5}
    // mov r4, #0
    // cmp r2, #0
    // bls _02226C34
    // ldr r5, [r1]
    // add r3, r0, r4
    // strb r5, [r0, r4]
    // ldr r5, [r1]
    // add r4, r4, #4
    // lsr r5, r5, #8
    // strb r5, [r3, #1]
    // ldr r5, [r1]
    // lsr r5, r5, #0x10
    // strb r5, [r3, #2]
    // ldr r5, [r1]
    // add r1, r1, #4
    // lsr r5, r5, #0x18
    // strb r5, [r3, #3]
    // cmp r4, r2
    // blo _02226C14
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov13_02226C38(void) {
    // push {r4, r5, r6, r7}
    // mov r7, #0
    // cmp r2, #0
    // bls _02226C5E
    // add r6, r1, r7
    // ldrb r3, [r6, #3]
    // lsl r5, r3, #0x18
    // ldrb r3, [r6, #2]
    // ldrb r6, [r6, #1]
    // lsl r4, r3, #0x10
    // ldrb r3, [r1, r7]
    // lsl r6, r6, #8
    // add r7, r7, #4
    // orr r3, r6
    // orr r3, r4
    // orr r3, r5
    // stmia r0!, {r3}
    // cmp r7, r2
    // blo _02226C40
    // pop {r4, r5, r6, r7}
    // bx lr
    // TODO: decompile
}


void ov13_02226C64(void) {
    // push {r3, r4}
    // mov r4, #0
    // cmp r2, #0
    // bls _02226C76
    // ldrb r3, [r1, r4]
    // strb r3, [r0, r4]
    // add r4, r4, #1
    // cmp r4, r2
    // blo _02226C6C
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov13_02226C7C(void) {
    // mov r3, #0
    // cmp r2, #0
    // bls _02226C90
    // lsl r1, r1, #0x18
    // asr r1, r1, #0x18
    // add r3, r3, #1
    // strb r1, [r0]
    // add r0, r0, #1
    // cmp r3, r2
    // blo _02226C86
    // bx lr
    // TODO: decompile
}


void ov13_02226C94(void) {
    ov13_022262D0();
    ov13_022262F8(r4, r6);
    ov13_02226370(r5);
}


void ov13_02226CBC(void) {
    // push {r3, lr}
    // bl OS_GetTick
    // lsr r2, r0, #0x1a
    // lsl r1, r1, #6
    // orr r1, r2
    // ldr r2, _02226CD4 ; =0x000082EA
    // lsl r0, r0, #6
    // mov r3, #0
    // bl _ll_udiv
    // pop {r3, pc}
    // _02226CD4: .word 0x000082EA
    // TODO: decompile
}


void ov13_02226CD8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mul r4, r1
    // ldr r1, _02226CF8 ; =ov13_0224DF30
    // add r0, r4, #0
    // ldr r1, [r1, #4]
    // blx r1
    // add r5, r0, #0
    // beq _02226CF2
    // mov r1, #0
    // add r2, r4, #0
    // bl memset
    // add r0, r5, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02226CF8: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02226CFC(void) {
    // push {r3, lr}
    // ldr r1, _02226D08 ; =ov13_0224DF30
    // ldr r1, [r1, #0xc]
    // blx r1
    // pop {r3, pc}
    // nop
    // _02226D08: .word ov13_0224DF30
    // TODO: decompile
}


void ov13_02226D0C(void) {
    // push {r4, r5}
    // lsl r1, r1, #0x18
    // lsr r3, r1, #0x18
    // mov r1, #0xf0
    // and r1, r3
    // asr r5, r1, #4
    // mov r1, #0xf
    // add r2, r0, #0
    // mov r4, #0
    // and r1, r3
    // cmp r5, #9
    // bgt _02226D28
    // add r5, #0x30
    // b _02226D2A
    // add r5, #0x37
    // add r4, r4, #1
    // strb r5, [r2]
    // add r2, r2, #1
    // add r5, r1, #0
    // cmp r4, #2
    // blt _02226D20
    // mov r1, #0
    // strb r1, [r2]
    // sub r0, r2, r0
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov13_02226D40(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r6, r1, #0
    // add r4, r0, #0
    // mov r5, #0
    // mov r7, #0x3a
    // mov r1, #0
    // ldrsb r1, [r6, r1]
    // add r0, r4, #0
    // add r6, r6, #1
    // bl ov13_02226D0C
    // add r0, r4, r0
    // add r4, r0, #0
    // cmp r5, #5
    // bge _02226D64
    // add r4, r0, #1
    // strb r7, [r0]
    // add r5, r5, #1
    // cmp r5, #6
    // blt _02226D4C
    // mov r0, #0
    // strb r0, [r4]
    // ldr r0, [sp]
    // sub r0, r4, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov13_02226D74(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, _02226E44 ; =ov13_0224DF30
    // ldr r0, [r0, #0x38]
    // cmp r0, #1
    // blt _02226D8E
    // cmp r0, #5
    // bgt _02226D8E
    // mov r0, #9
    // add sp, #8
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // ldr r5, _02226E48 ; =ov13_02245A58
    // ldr r0, _02226E44 ; =ov13_0224DF30
    // mov r6, #7
    // str r1, [r5, #0x10]
    // str r6, [r0, #0x38]
    // str r2, [r0, #0x7c]
    // ldr r2, [sp, #0x18]
    // str r3, [r0, #4]
    // str r2, [r0, #0xc]
    // ldr r0, [sp, #0x1c]
    // str r0, [r5, #8]
    // add r0, r1, #0
    // bl ov13_02223EE0
    // mov r2, #1
    // ldr r1, _02226E44 ; =ov13_0224DF30
    // cmp r0, #0
    // str r2, [r1, #0x74]
    // bge _02226DBA
    // str r0, [r1, #0x78]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // ldr r0, [r0, #8]
    // ldr r1, [r1, #4]
    // blx r1
    // ldr r1, _02226E44 ; =ov13_0224DF30
    // cmp r0, #0
    // str r0, [r1, #0x30]
    // bne _02226DD4
    // add r0, r6, #0
    // sub r0, #8
    // str r0, [r1, #0x78]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // bl OS_IsThreadAvailable
    // cmp r0, #1
    // beq _02226DE8
    // add r0, r6, #0
    // ldr r1, _02226E44 ; =ov13_0224DF30
    // sub r0, #0x10
    // str r0, [r1, #0x78]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // ldr r3, [r0, #8]
    // ldr r0, _02226E4C ; =ov13_0224DFDC
    // str r3, [sp]
    // str r4, [sp, #4]
    // ldr r4, _02226E44 ; =ov13_0224DF30
    // ldr r1, _02226E50 ; =ov13_02225320
    // ldr r5, [r4, #0x30]
    // mov r4, #7
    // bic r3, r4
    // mov r2, #0
    // add r3, r5, r3
    // bl OS_CreateThread
    // ldr r0, _02226E44 ; =ov13_0224DF30
    // mov r1, #1
    // str r1, [r0, #0x38]
    // bl ov13_02226CBC
    // ldr r1, _02226E54 ; =0x0000EA60
    // ldr r5, _02226E58 ; =ov13_0224E09C
    // add r1, r0, r1
    // ldr r0, _02226E48 ; =ov13_02245A58
    // add r4, r6, #0
    // str r1, [r0, #0xc]
    // mov r0, #0
    // ldr r1, _02226E44 ; =ov13_0224DF30
    // add r2, r0, #0
    // str r0, [r1, #0x10]
    // add r1, r0, #0
    // add r3, r0, #0
    // stmia r5!, {r0, r1, r2, r3}
    // stmia r5!, {r0, r1, r2, r3}
    // sub r4, r4, #1
    // bne _02226E26
    // stmia r5!, {r0, r1}
    // bl ov13_02226F3C
    // ldr r0, _02226E4C ; =ov13_0224DFDC
    // bl OS_WakeupThreadDirect
    // ldr r1, _02226E44 ; =ov13_0224DF30
    // mov r0, #1
    // str r0, [r1, #0x64]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _02226E44: .word ov13_0224DF30
    // _02226E48: .word ov13_02245A58
    // _02226E4C: .word ov13_0224DFDC
    // _02226E50: .word ov13_02225320
    // _02226E54: .word 0x0000EA60
    // _02226E58: .word ov13_0224E09C
    // TODO: decompile
}


void ov13_02226E5C(void) {
    // push {r4, r5, r6, lr}
    // ldr r4, _02226EE8 ; =ov13_0224DF30
    // ldr r0, [r4, #0x64]
    // cmp r0, #0
    // beq _02226ECC
    // ldr r6, [r4, #0x38]
    // mov r0, #1
    // str r0, [r4, #0x10]
    // mov r5, #0x64
    // b _02226E76
    // add r0, r5, #0
    // bl OS_Sleep
    // ldr r0, [r4, #0x38]
    // cmp r0, #1
    // blt _02226E80
    // cmp r0, #5
    // ble _02226E70
    // mov r0, #0x7d
    // lsl r0, r0, #2
    // bl OS_Sleep
    // ldr r0, _02226EEC ; =ov13_0224DFDC
    // bl OS_IsThreadTerminated
    // cmp r0, #0
    // bne _02226EAA
    // ldr r4, _02226EEC ; =ov13_0224DFDC
    // add r0, r4, #0
    // bl OS_WakeupThreadDirect
    // add r0, r4, #0
    // bl OS_JoinThread
    // add r0, r4, #0
    // bl OS_IsThreadTerminated
    // cmp r0, #0
    // beq _02226E94
    // ldr r1, _02226EE8 ; =ov13_0224DF30
    // ldr r0, [r1, #0x30]
    // cmp r0, #0
    // beq _02226EBC
    // ldr r1, [r1, #0xc]
    // blx r1
    // ldr r0, _02226EE8 ; =ov13_0224DF30
    // mov r1, #0
    // str r1, [r0, #0x30]
    // ldr r0, _02226EE8 ; =ov13_0224DF30
    // mov r1, #0
    // str r1, [r0, #0x64]
    // ldr r0, [r0, #0x38]
    // cmp r6, r0
    // beq _02226ECC
    // bl ov13_02226F3C
    // ldr r0, _02226EE8 ; =ov13_0224DF30
    // ldr r0, [r0, #0x74]
    // cmp r0, #0
    // ble _02226EE0
    // bl ov13_02223F84
    // ldr r1, _02226EE8 ; =ov13_0224DF30
    // mov r2, #0
    // str r2, [r1, #0x74]
    // pop {r4, r5, r6, pc}
    // mov r0, #9
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // nop
    // _02226EE8: .word ov13_0224DF30
    // _02226EEC: .word ov13_0224DFDC
    // TODO: decompile
}


void ov13_02226EF0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02226F20 ; =ov13_0224DF30
    // ldr r0, [r0, #0x38]
    // str r0, [r4]
    // ldr r0, _02226F24 ; =ov13_02245A58
    // ldr r1, [r0, #0xc]
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // bne _02226F08
    // b _02226F12
    // bl ov13_02226CBC
    // ldr r1, _02226F24 ; =ov13_02245A58
    // ldr r1, [r1, #0xc]
    // sub r0, r1, r0
    // str r0, [r4, #4]
    // ldr r0, _02226F20 ; =ov13_0224DF30
    // ldr r0, [r0, #0x78]
    // str r0, [r4, #8]
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _02226F20: .word ov13_0224DF30
    // _02226F24: .word ov13_02245A58
    // TODO: decompile
}


void ov13_02226F28(void) {
    memcpy();
}


void ov13_02226F3C(void) {
    ov13_02226EF0();
}

