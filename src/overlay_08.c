/* Decompiled from asm/overlay_08.s */
#include "global.h"

void ov08_0221BE20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0x11]
    // cmp r0, #5
    // bls _0221BE2E
    // mov r0, #0
    // strb r0, [r5, #0x11]
    // ldr r0, _0221BE88 ; =ov08_0221BE98
    // ldr r1, _0221BE8C ; =0x00002090
    // ldr r3, [r5, #0xc]
    // mov r2, #0
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // ldr r2, _0221BE8C ; =0x00002090
    // add r4, r0, #0
    // mov r1, #0
    // bl memset
    // str r5, [r4]
    // ldr r0, [r5, #8]
    // bl BattleSystem_GetBgConfig
    // mov r1, #0x79
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r5, #8]
    // bl BattleSystem_GetPaletteData
    // mov r1, #0x7a
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, _0221BE90 ; =0x00002078
    // mov r1, #0
    // strb r1, [r4, r0]
    // ldrb r2, [r5, #0x11]
    // sub r1, r0, #2
    // strb r2, [r4, r1]
    // sub r1, r0, #1
    // ldrb r2, [r4, r1]
    // mov r1, #0xf0
    // sub r0, r0, #1
    // bic r2, r1
    // strb r2, [r4, r0]
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #0x28]
    // bl ov12_0223AB0C
    // ldr r1, _0221BE94 ; =0x0000208F
    // strb r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // _0221BE88: .word ov08_0221BE98
    // _0221BE8C: .word 0x00002090
    // _0221BE90: .word 0x00002078
    // _0221BE94: .word 0x0000208F
    // TODO: decompile
}



void ov08_0221BE98(void) {
    // push {r4, lr}
    // ldr r2, _0221C040 ; =0x00002078
    // add r4, r1, #0
    // ldrb r2, [r4, r2]
    // cmp r2, #0x1a
    // bls _0221BEA6
    // b _0221C028
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0221BEB2: ; jump table
    // add r0, r4, #0
    // bl ov08_0221C048
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C14C
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C318
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C3C8
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C488
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C58C
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C918
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C924
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C930
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C93C
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C948
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C954
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C978
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C9A4
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C9C8
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221CA08
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221CA20
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221CA34
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221CA50
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C604
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C6F8
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221C814
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221CA78
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221CA90
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221CC38
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // add r0, r4, #0
    // bl ov08_0221CD64
    // ldr r1, _0221C040 ; =0x00002078
    // strb r0, [r4, r1]
    // b _0221C028
    // bl ov08_0221CD90
    // cmp r0, #1
    // beq _0221C03C
    // add r0, r4, #0
    // bl ov08_0222145C
    // ldr r0, _0221C044 ; =0x00001FB4
    // ldr r0, [r4, r0]
    // bl SpriteSystem_DrawSprites
    // add r0, r4, #0
    // bl ov08_022220FC
    // pop {r4, pc}
    // nop
    // _0221C040: .word 0x00002078
    // _0221C044: .word 0x00001FB4
    // TODO: decompile
}



void ov08_0221C048(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0221C13C ; =0x04001050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, [r5]
    // add r0, #0x35
    // ldrb r0, [r0]
    // cmp r0, #3
    // ldr r0, _0221C140 ; =0x0000207A
    // bne _0221C068
    // mov r1, #6
    // strb r1, [r5, r0]
    // mov r4, #0x13
    // b _0221C06C
    // strb r1, [r5, r0]
    // mov r4, #1
    // ldr r0, [r5]
    // ldr r0, [r0, #0xc]
    // bl ov08_02224B64
    // ldr r1, _0221C144 ; =0x00002088
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov08_0221D184
    // add r0, r5, #0
    // bl ov08_0221CDF8
    // add r0, r5, #0
    // bl ov08_0221CF38
    // add r0, r5, #0
    // bl ov08_0221D0F4
    // ldr r1, [r5]
    // mov r0, #4
    // ldr r1, [r1, #0xc]
    // bl FontID_Alloc
    // ldr r1, _0221C140 ; =0x0000207A
    // add r0, r5, #0
    // ldrb r1, [r5, r1]
    // bl ov08_0221D8B0
    // ldr r1, _0221C140 ; =0x0000207A
    // add r0, r5, #0
    // ldrb r1, [r5, r1]
    // bl ov08_022221CC
    // ldr r1, _0221C140 ; =0x0000207A
    // add r0, r5, #0
    // ldrb r1, [r5, r1]
    // bl ov08_02222524
    // add r0, r5, #0
    // bl ov08_022205E0
    // ldr r1, _0221C140 ; =0x0000207A
    // add r0, r5, #0
    // ldrb r1, [r5, r1]
    // bl ov08_02220C5C
    // add r0, r5, #0
    // bl ov08_0221DC00
    // ldr r1, _0221C140 ; =0x0000207A
    // add r0, r5, #0
    // ldrb r1, [r5, r1]
    // bl ov08_0221DD70
    // ldr r0, [r5]
    // add r0, #0x32
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0221C0EC
    // ldr r0, _0221C144 ; =0x00002088
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl ov08_02224B90
    // ldr r0, _0221C140 ; =0x0000207A
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // bne _0221C106
    // add r0, r5, #0
    // mov r1, #0
    // bl ov08_0221DB24
    // cmp r0, #1
    // bne _0221C106
    // ldr r0, [r5]
    // mov r1, #1
    // strb r1, [r0, #0x11]
    // ldr r1, _0221C140 ; =0x0000207A
    // add r0, r5, #0
    // ldrb r1, [r5, r1]
    // bl ov08_0222171C
    // ldr r1, _0221C140 ; =0x0000207A
    // add r0, r5, #0
    // ldrb r1, [r5, r1]
    // bl ov08_0221D6CC
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // mov r1, #0xa
    // add r3, r1, #0
    // ldr r0, [r5, r0]
    // ldr r2, _0221C148 ; =0x0000FFFF
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0221C13C: .word 0x04001050
    // _0221C140: .word 0x0000207A
    // _0221C144: .word 0x00002088
    // _0221C148: .word 0x0000FFFF
    // TODO: decompile
}



void ov08_0221C14C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _0221C162
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov08_0221D438
    // cmp r0, #1
    // bne _0221C1BA
    // ldr r1, [r4]
    // ldrb r0, [r1, #0x11]
    // cmp r0, #6
    // bne _0221C18E
    // add r1, #0x35
    // ldrb r0, [r1]
    // cmp r0, #1
    // beq _0221C1BA
    // ldr r0, _0221C1C0 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // bl ov08_022220AC
    // mov r0, #0x19
    // pop {r4, pc}
    // ldr r0, _0221C1C0 ; =0x000005DD
    // bl PlaySE
    // ldr r1, [r4]
    // add r0, r4, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_022220AC
    // ldr r0, [r4]
    // add r0, #0x35
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0221C1B0
    // add r0, r4, #0
    // bl ov08_0221C1C8
    // pop {r4, pc}
    // ldr r0, _0221C1C4 ; =0x00002079
    // mov r1, #7
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0221C1C0: .word 0x000005DD
    // _0221C1C4: .word 0x00002079
    // TODO: decompile
}



void ov08_0221C1C8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r4, [r5]
    // ldrb r1, [r4, #0x11]
    // cmp r1, #0
    // bne _0221C1DA
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // bne _0221C1E4
    // cmp r1, #1
    // bne _0221C200
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // beq _0221C200
    // add r0, r5, #0
    // bl ov08_0222057C
    // add r0, r5, #0
    // bl ov08_022201C0
    // ldr r0, [r5]
    // mov r1, #6
    // strb r1, [r0, #0x11]
    // ldr r0, _0221C30C ; =0x00002079
    // mov r1, #0x19
    // strb r1, [r5, r0]
    // mov r0, #0x11
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4, #0x22]
    // ldr r2, [r4, #0xc]
    // mov r1, #0x24
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0221C236
    // ldrh r0, [r4, #0x22]
    // ldr r2, [r4, #0xc]
    // mov r1, #0x25
    // bl GetItemAttr
    // cmp r0, #0
    // bne _0221C236
    // ldrb r1, [r4, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r0, r5, r0
    // ldrb r0, [r0, #0x1b]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _0221C236
    // ldr r0, _0221C30C ; =0x00002079
    // mov r1, #0xd
    // strb r1, [r5, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldrh r0, [r4, #0x22]
    // mov r3, #0
    // str r0, [sp]
    // ldrb r2, [r4, #0x11]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0x28]
    // add r2, r4, r2
    // add r2, #0x2c
    // ldrb r2, [r2]
    // bl BattleSystem_RecoverStatus
    // cmp r0, #1
    // bne _0221C2E6
    // ldrh r0, [r4, #0x22]
    // ldr r2, [r4, #0xc]
    // mov r1, #0x25
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0221C266
    // ldr r0, _0221C30C ; =0x00002079
    // mov r1, #0xd
    // strb r1, [r5, r0]
    // b _0221C2DC
    // ldrb r1, [r4, #0x11]
    // add r0, r5, #0
    // bl ov08_0221D5DC
    // cmp r0, #1
    // bne _0221C2D6
    // ldrh r0, [r4, #0x22]
    // ldr r2, [r4, #0xc]
    // mov r1, #0x17
    // bl GetItemAttr
    // cmp r0, #0
    // bne _0221C2D6
    // add r2, r4, #0
    // add r2, #0x33
    // ldrh r1, [r4, #0x22]
    // ldrb r2, [r2]
    // ldr r0, [r4, #8]
    // ldr r3, [r4, #0xc]
    // bl ov08_0221DBCC
    // ldrb r2, [r4, #0x11]
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #0x28]
    // add r2, r4, r2
    // add r2, #0x2c
    // ldrb r2, [r2]
    // bl BattleSystem_GetPartyMon
    // ldrb r2, [r4, #0x11]
    // mov r1, #0x50
    // add r3, r2, #0
    // mul r3, r1
    // add r2, r5, r3
    // str r0, [r2, #4]
    // ldrb r0, [r4, #0x11]
    // mov r2, #0
    // mul r1, r0
    // add r0, r5, r1
    // ldr r0, [r0, #4]
    // mov r1, #0xa3
    // bl GetMonData
    // strh r0, [r4, #0x20]
    // ldrb r1, [r4, #0x11]
    // mov r0, #0x50
    // ldrh r2, [r4, #0x20]
    // mul r0, r1
    // add r0, r5, r0
    // ldrh r0, [r0, #0x14]
    // mov r1, #0x19
    // sub r0, r2, r0
    // strh r0, [r4, #0x20]
    // ldr r0, _0221C30C ; =0x00002079
    // strb r1, [r5, r0]
    // b _0221C2DC
    // ldr r0, _0221C30C ; =0x00002079
    // mov r1, #0x17
    // strb r1, [r5, r0]
    // ldr r0, _0221C310 ; =0x0000207C
    // mov r1, #0
    // strb r1, [r5, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldr r2, _0221C314 ; =0x00001FA8
    // mov r1, #0x51
    // ldr r0, [r5, r2]
    // add r2, #8
    // ldr r2, [r5, r2]
    // bl ReadMsgDataIntoString
    // add r0, r5, #0
    // bl ov08_022201C0
    // ldr r0, [r5]
    // mov r1, #6
    // strb r1, [r0, #0x11]
    // ldr r0, _0221C30C ; =0x00002079
    // mov r1, #0x19
    // strb r1, [r5, r0]
    // mov r0, #0x11
    // pop {r3, r4, r5, pc}
    // nop
    // _0221C30C: .word 0x00002079
    // _0221C310: .word 0x0000207C
    // _0221C314: .word 0x00001FA8
    // TODO: decompile
}



void ov08_0221C318(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov08_0221D4B0
    // cmp r0, #3
    // bhi _0221C3BA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C330: ; jump table
    // ldr r0, _0221C3C0 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #7
    // bl ov08_022220AC
    // add r0, r4, #0
    // bl ov08_0221D91C
    // cmp r0, #1
    // bne _0221C354
    // mov r0, #0x19
    // pop {r4, pc}
    // ldr r0, _0221C3C4 ; =0x00002079
    // mov r1, #0xf
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov08_0221DAC4
    // cmp r0, #1
    // beq _0221C3BA
    // ldr r0, _0221C3C0 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #8
    // bl ov08_022220AC
    // ldr r0, _0221C3C4 ; =0x00002079
    // mov r1, #8
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov08_0221DAC4
    // cmp r0, #1
    // beq _0221C3BA
    // ldr r0, _0221C3C0 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // bl ov08_022220AC
    // ldr r0, _0221C3C4 ; =0x00002079
    // mov r1, #9
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r4, pc}
    // ldr r0, _0221C3C0 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // bl ov08_022220AC
    // ldr r0, _0221C3C4 ; =0x00002079
    // mov r1, #6
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r4, pc}
    // mov r0, #2
    // pop {r4, pc}
    // nop
    // _0221C3C0: .word 0x000005DD
    // _0221C3C4: .word 0x00002079
    // TODO: decompile
}



void ov08_0221C3C8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov08_0221D4F8
    // cmp r0, #3
    // bhi _0221C478
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C3E0: ; jump table
    // ldr r1, [r4]
    // mov r2, #0
    // ldrb r1, [r1, #0x11]
    // add r0, r4, #0
    // mvn r2, r2
    // bl ov08_0221D614
    // cmp r0, #0xff
    // beq _0221C478
    // ldr r1, [r4]
    // strb r0, [r1, #0x11]
    // ldr r0, _0221C47C ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov08_022220AC
    // ldr r0, _0221C480 ; =0x00002079
    // mov r1, #0xe
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r4, pc}
    // ldr r1, [r4]
    // add r0, r4, #0
    // ldrb r1, [r1, #0x11]
    // mov r2, #1
    // bl ov08_0221D614
    // cmp r0, #0xff
    // beq _0221C478
    // ldr r1, [r4]
    // strb r0, [r1, #0x11]
    // ldr r0, _0221C47C ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov08_022220AC
    // ldr r0, _0221C480 ; =0x00002079
    // mov r1, #0xe
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r4, pc}
    // ldr r0, _0221C47C ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xb
    // bl ov08_022220AC
    // ldr r0, _0221C480 ; =0x00002079
    // mov r1, #9
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r4, pc}
    // ldr r0, _0221C47C ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // bl ov08_022220AC
    // ldr r0, _0221C484 ; =0x0000208C
    // mov r1, #1
    // strb r1, [r4, r0]
    // mov r1, #7
    // sub r0, #0x13
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r4, pc}
    // mov r0, #3
    // pop {r4, pc}
    // _0221C47C: .word 0x000005DD
    // _0221C480: .word 0x00002079
    // _0221C484: .word 0x0000208C
    // TODO: decompile
}



void ov08_0221C488(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov08_0221D540
    // add r5, r0, #0
    // cmp r5, #7
    // bhi _0221C57A
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C4A2: ; jump table
    // ldr r0, [r4]
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r1, r4, r0
    // lsl r0, r5, #3
    // add r0, r1, r0
    // ldrh r0, [r0, #0x34]
    // cmp r0, #0
    // beq _0221C57A
    // ldr r0, _0221C580 ; =0x000005DD
    // bl PlaySE
    // add r1, r5, #0
    // add r1, #0xe
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov08_022220AC
    // ldr r0, [r4]
    // mov r1, #0xa
    // add r0, #0x34
    // strb r5, [r0]
    // ldr r0, _0221C584 ; =0x00002079
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4]
    // mov r2, #0
    // ldrb r1, [r1, #0x11]
    // add r0, r4, #0
    // mvn r2, r2
    // bl ov08_0221D614
    // cmp r0, #0xff
    // beq _0221C57A
    // ldr r1, [r4]
    // strb r0, [r1, #0x11]
    // ldr r0, _0221C580 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // bl ov08_022220AC
    // ldr r0, _0221C584 ; =0x00002079
    // mov r1, #0xe
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4]
    // add r0, r4, #0
    // ldrb r1, [r1, #0x11]
    // mov r2, #1
    // bl ov08_0221D614
    // cmp r0, #0xff
    // beq _0221C57A
    // ldr r1, [r4]
    // strb r0, [r1, #0x11]
    // ldr r0, _0221C580 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov08_022220AC
    // ldr r0, _0221C584 ; =0x00002079
    // mov r1, #0xe
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldr r0, _0221C580 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #9
    // bl ov08_022220AC
    // ldr r0, _0221C584 ; =0x00002079
    // mov r1, #8
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldr r0, _0221C580 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // bl ov08_022220AC
    // ldr r0, _0221C588 ; =0x0000208C
    // mov r1, #2
    // strb r1, [r4, r0]
    // mov r1, #7
    // sub r0, #0x13
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // nop
    // _0221C580: .word 0x000005DD
    // _0221C584: .word 0x00002079
    // _0221C588: .word 0x0000208C
    // TODO: decompile
}



void ov08_0221C58C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov08_0221D588
    // add r5, r0, #0
    // cmp r5, #4
    // bhi _0221C5F6
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C5A6: ; jump table
    // ldr r1, [r4]
    // add r0, r1, #0
    // add r0, #0x34
    // ldrb r0, [r0]
    // cmp r0, r5
    // beq _0221C5CE
    // ldrb r1, [r1, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r1, r4, r0
    // lsl r0, r5, #3
    // add r0, r1, r0
    // ldrh r0, [r0, #0x34]
    // cmp r0, #0
    // beq _0221C5F6
    // ldr r0, _0221C5FC ; =0x000005DD
    // bl PlaySE
    // ldr r0, [r4]
    // add r0, #0x34
    // strb r5, [r0]
    // mov r0, #0xa
    // pop {r3, r4, r5, pc}
    // ldr r0, _0221C5FC ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // bl ov08_022220AC
    // ldr r0, _0221C600 ; =0x00002079
    // mov r1, #9
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // nop
    // _0221C5FC: .word 0x000005DD
    // _0221C600: .word 0x00002079
    // TODO: decompile
}



void ov08_0221C604(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221C6E0 ; =ov08_02224F3C
    // add r4, r0, #0
    // bl ov08_0221D5D0
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _0221C62E
    // ldr r0, _0221C6E4 ; =0x00002088
    // ldr r0, [r4, r0]
    // bl ov08_02224C94
    // add r5, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bne _0221C634
    // mov r5, #6
    // b _0221C634
    // add r0, r4, #0
    // bl ov08_022217C8
    // cmp r5, #6
    // bhi _0221C6DC
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C644: ; jump table
    // lsl r0, r5, #0x18
    // lsr r1, r0, #0x18
    // ldr r0, [r4]
    // add r0, #0x34
    // strb r1, [r0]
    // ldr r0, _0221C6E8 ; =0x0000208D
    // strb r1, [r4, r0]
    // ldr r0, _0221C6EC ; =0x000005DD
    // bl PlaySE
    // add r5, #0x17
    // lsl r1, r5, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov08_022220AC
    // ldr r0, _0221C6F0 ; =0x00002079
    // mov r1, #0xc
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldr r0, _0221C6F4 ; =0x00002077
    // ldrb r3, [r4, r0]
    // lsl r1, r3, #0x18
    // lsr r1, r1, #0x1c
    // beq _0221C6DC
    // mov r2, #0xf
    // add r1, r3, #0
    // bic r1, r2
    // lsl r2, r3, #0x1c
    // lsr r3, r2, #0x1c
    // mov r2, #1
    // eor r2, r3
    // lsl r2, r2, #0x18
    // lsr r3, r2, #0x18
    // mov r2, #0xf
    // and r2, r3
    // orr r1, r2
    // strb r1, [r4, r0]
    // add r0, #0x16
    // strb r5, [r4, r0]
    // ldr r0, _0221C6EC ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x12
    // bl ov08_022220AC
    // ldr r0, _0221C6F0 ; =0x00002079
    // mov r1, #0xb
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4]
    // mov r1, #4
    // add r0, #0x34
    // strb r1, [r0]
    // ldr r0, _0221C6EC ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // bl ov08_022220AC
    // ldr r0, _0221C6F0 ; =0x00002079
    // mov r1, #0x19
    // strb r1, [r4, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // mov r0, #0x13
    // pop {r3, r4, r5, pc}
    // _0221C6E0: .word ov08_02224F3C
    // _0221C6E4: .word 0x00002088
    // _0221C6E8: .word 0x0000208D
    // _0221C6EC: .word 0x000005DD
    // _0221C6F0: .word 0x00002079
    // _0221C6F4: .word 0x00002077
    // TODO: decompile
}



void ov08_0221C6F8(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221C7FC ; =ov08_02224E44
    // add r5, r0, #0
    // bl ov08_0221D5D0
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221C722
    // ldr r0, _0221C800 ; =0x00002088
    // ldr r0, [r5, r0]
    // bl ov08_02224C94
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221C728
    // mov r4, #2
    // b _0221C728
    // add r0, r5, #0
    // bl ov08_022217C8
    // cmp r4, #0
    // beq _0221C736
    // cmp r4, #1
    // beq _0221C792
    // cmp r4, #2
    // beq _0221C7D8
    // b _0221C7F6
    // ldr r0, _0221C804 ; =0x000005DD
    // bl PlaySE
    // ldr r0, _0221C808 ; =0x00002077
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // bne _0221C750
    // add r0, r5, #0
    // mov r1, #0x1c
    // bl ov08_022220AC
    // b _0221C758
    // add r0, r5, #0
    // mov r1, #0x1d
    // bl ov08_022220AC
    // add r0, r5, #0
    // bl ov08_0221DB54
    // cmp r0, #1
    // bne _0221C788
    // add r0, r5, #0
    // bl ov08_0221F220
    // ldr r0, _0221C808 ; =0x00002077
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // bne _0221C77A
    // add r0, r5, #0
    // bl ov08_0221DB7C
    // b _0221C780
    // add r0, r5, #0
    // bl ov08_0221DBB4
    // ldr r0, _0221C80C ; =0x00002079
    // mov r1, #0x14
    // strb r1, [r5, r0]
    // b _0221C78E
    // ldr r0, _0221C80C ; =0x00002079
    // mov r1, #0x19
    // strb r1, [r5, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldr r0, _0221C808 ; =0x00002077
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // beq _0221C7F6
    // ldr r0, _0221C804 ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0x12
    // bl ov08_022220AC
    // ldr r2, _0221C808 ; =0x00002077
    // mov r1, #0xf
    // ldrb r3, [r5, r2]
    // add r0, r3, #0
    // bic r0, r1
    // lsl r1, r3, #0x1c
    // lsr r3, r1, #0x1c
    // mov r1, #1
    // eor r1, r3
    // lsl r1, r1, #0x18
    // lsr r3, r1, #0x18
    // mov r1, #0xf
    // and r1, r3
    // orr r0, r1
    // strb r0, [r5, r2]
    // add r0, r2, #0
    // add r0, #0x17
    // strb r4, [r5, r0]
    // mov r1, #0xc
    // add r0, r2, #2
    // strb r1, [r5, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // ldr r0, _0221C804 ; =0x000005DD
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #6
    // bl ov08_022220AC
    // ldr r0, _0221C810 ; =0x0000208E
    // mov r1, #0
    // strb r1, [r5, r0]
    // mov r1, #0xb
    // sub r0, #0x15
    // strb r1, [r5, r0]
    // mov r0, #0x16
    // pop {r3, r4, r5, pc}
    // mov r0, #0x14
    // pop {r3, r4, r5, pc}
    // nop
    // _0221C7FC: .word ov08_02224E44
    // _0221C800: .word 0x00002088
    // _0221C804: .word 0x000005DD
    // _0221C808: .word 0x00002077
    // _0221C80C: .word 0x00002079
    // _0221C810: .word 0x0000208E
    // TODO: decompile
}



void ov08_0221C814(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // ldr r1, _0221C900 ; =ov08_02224E94
    // add r4, r0, #0
    // ldr r6, [r4]
    // bl ov08_0221D5D0
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _0221C842
    // ldr r0, _0221C904 ; =0x00002088
    // ldr r0, [r4, r0]
    // bl ov08_02224C94
    // add r5, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bne _0221C848
    // mov r5, #4
    // b _0221C848
    // add r0, r4, #0
    // bl ov08_022217C8
    // cmp r5, #4
    // bhi _0221C8FA
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221C858: ; jump table
    // ldrb r1, [r6, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r1, r4, r0
    // lsl r0, r5, #3
    // add r0, r1, r0
    // ldrh r0, [r0, #0x34]
    // cmp r0, #0
    // beq _0221C8FA
    // ldr r0, [r4]
    // add r0, #0x34
    // strb r5, [r0]
    // ldr r0, _0221C908 ; =0x000005DD
    // bl PlaySE
    // add r1, r5, #0
    // add r1, #0x13
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl ov08_022220AC
    // ldrh r0, [r6, #0x22]
    // add r3, r5, #0
    // str r0, [sp]
    // ldrb r2, [r6, #0x11]
    // ldr r0, [r6, #8]
    // ldr r1, [r6, #0x28]
    // add r2, r6, r2
    // add r2, #0x2c
    // ldrb r2, [r2]
    // bl BattleSystem_RecoverStatus
    // cmp r0, #1
    // bne _0221C8BA
    // ldr r0, _0221C90C ; =0x0000207C
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r1, #0x17
    // sub r0, r0, #3
    // strb r1, [r4, r0]
    // add sp, #4
    // mov r0, #0x16
    // pop {r3, r4, r5, r6, pc}
    // ldr r2, _0221C910 ; =0x00001FA8
    // mov r1, #0x51
    // ldr r0, [r4, r2]
    // add r2, #8
    // ldr r2, [r4, r2]
    // bl ReadMsgDataIntoString
    // add r0, r4, #0
    // bl ov08_022201C0
    // ldr r0, [r4]
    // mov r1, #6
    // strb r1, [r0, #0x11]
    // ldr r0, _0221C914 ; =0x00002079
    // mov r1, #0x19
    // strb r1, [r4, r0]
    // add sp, #4
    // mov r0, #0x11
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _0221C908 ; =0x000005DD
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #6
    // bl ov08_022220AC
    // ldr r0, _0221C914 ; =0x00002079
    // mov r1, #6
    // strb r1, [r4, r0]
    // add sp, #4
    // mov r0, #0x16
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0x15
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0221C900: .word ov08_02224E94
    // _0221C904: .word 0x00002088
    // _0221C908: .word 0x000005DD
    // _0221C90C: .word 0x0000207C
    // _0221C910: .word 0x00001FA8
    // _0221C914: .word 0x00002079
    // TODO: decompile
}



void ov08_0221C918(void) {
}



void ov08_0221C924(void) {
}



void ov08_0221C930(void) {
}



void ov08_0221C93C(void) {
}



void ov08_0221C948(void) {
}



void ov08_0221C954(void) {
    // push {r3, lr}
    // ldr r1, _0221C974 ; =0x00002077
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // bne _0221C968
    // mov r1, #6
    // bl ov08_0221D840
    // b _0221C96E
    // mov r1, #8
    // bl ov08_0221D840
    // mov r0, #0x13
    // pop {r3, pc}
    // nop
    // _0221C974: .word 0x00002077
    // TODO: decompile
}



void ov08_0221C978(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov08_022213C8
    // ldr r0, _0221C9A0 ; =0x00002077
    // ldrb r0, [r4, r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // bne _0221C994
    // add r0, r4, #0
    // mov r1, #7
    // bl ov08_0221D840
    // b _0221C99C
    // add r0, r4, #0
    // mov r1, #9
    // bl ov08_0221D840
    // mov r0, #0x14
    // pop {r4, pc}
    // _0221C9A0: .word 0x00002077
    // TODO: decompile
}



void ov08_0221C9A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #5
    // bl ov08_0221D840
    // ldr r2, [r4]
    // mov r1, #0x25
    // ldrh r0, [r2, #0x22]
    // ldr r2, [r2, #0xc]
    // bl GetItemAttr
    // cmp r0, #0
    // beq _0221C9C2
    // mov r0, #0x18
    // pop {r4, pc}
    // mov r0, #0x15
    // pop {r4, pc}
    // TODO: decompile
}



void ov08_0221C9C8(void) {
    // push {r4, lr}
    // ldr r1, _0221CA04 ; =0x0000207A
    // add r4, r0, #0
    // ldrb r1, [r4, r1]
    // bl ov08_02220C5C
    // ldr r1, _0221CA04 ; =0x0000207A
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_0221DD70
    // ldr r1, _0221CA04 ; =0x0000207A
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_022221CC
    // ldr r1, _0221CA04 ; =0x0000207A
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_0221D6CC
    // ldr r0, _0221CA04 ; =0x0000207A
    // ldrb r0, [r4, r0]
    // cmp r0, #2
    // bne _0221C9FE
    // mov r0, #3
    // pop {r4, pc}
    // mov r0, #4
    // pop {r4, pc}
    // nop
    // _0221CA04: .word 0x0000207A
    // TODO: decompile
}



void ov08_0221CA08(void) {
}



void ov08_0221CA20(void) {
}



void ov08_0221CA34(void) {
}



void ov08_0221CA50(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0221CA70 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _0221CA66
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _0221CA6C
    // ldr r0, _0221CA74 ; =0x00002079
    // ldrb r0, [r4, r0]
    // pop {r4, pc}
    // mov r0, #0x12
    // pop {r4, pc}
    // _0221CA70: .word gSystem
    // _0221CA74: .word 0x00002079
    // TODO: decompile
}



void ov08_0221CA78(void) {
    // ldr r1, _0221CA8C ; =0x00001FA3
    // ldrb r2, [r0, r1]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x1f
    // bne _0221CA88
    // add r1, #0xd6
    // ldrb r0, [r0, r1]
    // bx lr
    // mov r0, #0x16
    // bx lr
    // _0221CA8C: .word 0x00001FA3
    // TODO: decompile
}



void ov08_0221CA90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r7, _0221CC28 ; =0x0000207C
    // add r4, r0, #0
    // ldrb r1, [r4, r7]
    // ldr r5, [r4]
    // cmp r1, #4
    // bls _0221CAA0
    // b _0221CC24
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221CAAC: ; jump table
    // ldrb r2, [r5, #0x11]
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #0x28]
    // add r2, r5, r2
    // add r2, #0x2c
    // ldrb r2, [r2]
    // bl BattleSystem_GetPartyMon
    // ldrb r2, [r5, #0x11]
    // mov r1, #0x50
    // mul r1, r2
    // add r1, r4, r1
    // str r0, [r1, #4]
    // add r0, r4, #0
    // bl ov08_02220224
    // sub r0, r7, #2
    // ldrb r0, [r4, r0]
    // ldrb r1, [r5, #0x11]
    // cmp r0, #5
    // bne _0221CB00
    // mov r0, #0x50
    // mul r0, r1
    // add r5, #0x34
    // ldrb r1, [r5]
    // add r0, r4, r0
    // ldr r0, [r0, #4]
    // add r1, #0x3a
    // mov r2, #0
    // bl GetMonData
    // add r1, r7, #4
    // strh r0, [r4, r1]
    // mov r2, #2
    // sub r0, r1, #4
    // strb r2, [r4, r0]
    // b _0221CB72
    // mov r0, #0x50
    // mul r0, r1
    // add r0, r4, r0
    // ldr r0, [r0, #4]
    // bl Pokemon_GetStatusIconId
    // add r6, r0, #0
    // ldrb r0, [r5, #0x11]
    // add r3, r4, #0
    // mov r7, #0x50
    // add r2, r0, #0
    // add r3, #0x1b
    // mul r2, r7
    // ldrb r1, [r3, r2]
    // mov r0, #0x78
    // bic r1, r0
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x19
    // orr r0, r1
    // strb r0, [r3, r2]
    // ldrb r0, [r5, #0x11]
    // add r1, r0, #0
    // mul r1, r7
    // add r1, r4, r1
    // ldrb r1, [r1, #0x1b]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1c
    // cmp r1, #7
    // bne _0221CB56
    // add r0, #0xd
    // lsl r0, r0, #2
    // add r1, r4, r0
    // ldr r0, _0221CC2C ; =0x00001FB8
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldrb r1, [r5, #0x11]
    // add r0, r4, #0
    // bl ov08_0221F5B0
    // ldrb r1, [r5, #0x11]
    // mov r0, #0x50
    // mov r2, #0
    // mul r0, r1
    // add r0, r4, r0
    // ldr r0, [r0, #4]
    // mov r1, #0xa3
    // bl GetMonData
    // ldr r1, _0221CC30 ; =0x0000207E
    // mov r2, #4
    // strh r0, [r4, r1]
    // sub r0, r1, #2
    // strb r2, [r4, r0]
    // ldr r0, _0221CC34 ; =0x000005EC
    // bl PlaySE
    // b _0221CC24
    // ldrb r1, [r5, #0x11]
    // add r6, r4, #0
    // mov r2, #0x50
    // add r3, r1, #0
    // add r6, #0x14
    // mul r3, r2
    // add r1, r7, #2
    // ldrh r2, [r4, r1]
    // ldrh r1, [r6, r3]
    // cmp r2, r1
    // beq _0221CB9C
    // add r1, r1, #1
    // strh r1, [r6, r3]
    // ldrb r1, [r5, #0x11]
    // bl ov08_0221F550
    // b _0221CC24
    // mov r0, #3
    // strb r0, [r4, r7]
    // b _0221CC24
    // ldrb r3, [r5, #0x11]
    // add r1, r4, #0
    // mov r2, #0x50
    // add r1, #0x36
    // mul r2, r3
    // add r6, r1, r2
    // add r1, r5, #0
    // add r1, #0x34
    // ldrb r1, [r1]
    // lsl r3, r1, #3
    // add r1, r7, #4
    // ldrh r2, [r4, r1]
    // ldrb r1, [r6, r3]
    // cmp r2, r1
    // beq _0221CBD4
    // add r1, r1, #1
    // strb r1, [r6, r3]
    // add r5, #0x34
    // ldrb r2, [r5]
    // add r1, r2, #1
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // bl ov08_02220064
    // b _0221CC24
    // mov r0, #3
    // strb r0, [r4, r7]
    // b _0221CC24
    // add r2, r5, #0
    // add r2, #0x33
    // ldrh r1, [r5, #0x22]
    // ldrb r2, [r2]
    // ldr r0, [r5, #8]
    // ldr r3, [r5, #0xc]
    // bl ov08_0221DBCC
    // add r0, r4, #0
    // bl ov08_022201C0
    // mov r1, #0x19
    // sub r0, r7, #3
    // strb r1, [r4, r0]
    // mov r0, #0x11
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrb r1, [r5, #0x11]
    // add r3, r4, #0
    // mov r2, #0x50
    // mul r2, r1
    // add r1, r7, #2
    // add r3, #0x14
    // ldrh r6, [r4, r1]
    // ldrh r1, [r3, r2]
    // cmp r6, r1
    // beq _0221CC1E
    // add r1, r1, #1
    // strh r1, [r3, r2]
    // ldrb r1, [r5, #0x11]
    // bl ov08_0221F550
    // add r0, r4, #0
    // bl ov08_022225A4
    // ldr r0, _0221CC28 ; =0x0000207C
    // mov r1, #1
    // strb r1, [r4, r0]
    // mov r0, #0x17
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221CC28: .word 0x0000207C
    // _0221CC2C: .word 0x00001FB8
    // _0221CC30: .word 0x0000207E
    // _0221CC34: .word 0x000005EC
    // TODO: decompile
}



void ov08_0221CC38(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5]
    // str r0, [sp, #4]
    // ldr r0, _0221CD58 ; =0x0000207C
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // beq _0221CC54
    // cmp r0, #1
    // beq _0221CCBE
    // cmp r0, #2
    // beq _0221CD28
    // b _0221CD50
    // ldr r2, [sp, #4]
    // ldr r0, [sp, #4]
    // ldrb r3, [r2, #0x11]
    // ldr r1, [sp, #4]
    // ldr r0, [r0, #8]
    // add r2, r2, r3
    // add r2, #0x2c
    // ldrb r2, [r2]
    // ldr r1, [r1, #0x28]
    // bl BattleSystem_GetPartyMon
    // ldr r1, [sp, #4]
    // mov r7, #0
    // ldrb r2, [r1, #0x11]
    // mov r1, #0x50
    // add r6, r7, #0
    // mul r1, r2
    // add r1, r5, r1
    // str r0, [r1, #4]
    // add r4, r5, #0
    // ldr r0, [sp, #4]
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r1, r5, r0
    // add r0, r1, r6
    // ldrh r0, [r0, #0x34]
    // cmp r0, #0
    // beq _0221CCA0
    // ldr r0, [r1, #4]
    // add r1, r7, #0
    // add r1, #0x3a
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x82
    // lsl r1, r1, #6
    // strh r0, [r4, r1]
    // add r7, r7, #1
    // add r6, #8
    // add r4, r4, #2
    // cmp r7, #4
    // blo _0221CC7C
    // add r0, r5, #0
    // bl ov08_02220224
    // ldr r0, _0221CD5C ; =0x000005EC
    // bl PlaySE
    // ldr r0, _0221CD58 ; =0x0000207C
    // mov r1, #1
    // strb r1, [r5, r0]
    // b _0221CD50
    // mov r6, #0
    // add r4, r6, #0
    // str r6, [sp]
    // add r7, r5, #0
    // ldr r0, [sp, #4]
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r1, r5, r0
    // ldr r0, [sp]
    // add r1, r1, r0
    // ldrh r0, [r1, #0x34]
    // cmp r0, #0
    // bne _0221CCDE
    // add r6, r6, #1
    // b _0221CD0E
    // mov r0, #0x82
    // add r2, r1, #0
    // lsl r0, r0, #6
    // add r2, #0x36
    // ldrh r0, [r7, r0]
    // ldrb r2, [r2]
    // cmp r0, r2
    // beq _0221CD0C
    // add r0, r1, #0
    // add r0, #0x36
    // ldrb r0, [r0]
    // lsl r2, r4, #0x10
    // add r1, #0x36
    // add r0, r0, #1
    // strb r0, [r1]
    // add r1, r4, #1
    // lsl r1, r1, #0x10
    // add r0, r5, #0
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x10
    // bl ov08_02220064
    // b _0221CD0E
    // add r6, r6, #1
    // ldr r0, [sp]
    // add r4, r4, #1
    // add r0, #8
    // add r7, r7, #2
    // str r0, [sp]
    // cmp r4, #4
    // blo _0221CCC6
    // cmp r6, #4
    // bne _0221CD50
    // ldr r0, _0221CD58 ; =0x0000207C
    // mov r1, #2
    // strb r1, [r5, r0]
    // b _0221CD50
    // ldr r2, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [sp, #4]
    // add r2, #0x33
    // ldr r3, [sp, #4]
    // ldrh r1, [r1, #0x22]
    // ldrb r2, [r2]
    // ldr r0, [r0, #8]
    // ldr r3, [r3, #0xc]
    // bl ov08_0221DBCC
    // add r0, r5, #0
    // bl ov08_022201C0
    // ldr r0, _0221CD60 ; =0x00002079
    // mov r1, #0x19
    // strb r1, [r5, r0]
    // add sp, #8
    // mov r0, #0x11
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x18
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221CD58: .word 0x0000207C
    // _0221CD5C: .word 0x000005EC
    // _0221CD60: .word 0x00002079
    // TODO: decompile
}



void ov08_0221CD64(void) {
    // push {lr}
    // sub sp, #0xc
    // mov r2, #0
    // str r2, [sp]
    // mov r1, #0x10
    // str r1, [sp, #4]
    // mov r1, #0x7a
    // str r2, [sp, #8]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #0xa
    // add r3, r1, #0
    // ldr r2, _0221CD8C ; =0x0000FFFF
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // mov r0, #0x1a
    // add sp, #0xc
    // pop {pc}
    // nop
    // _0221CD8C: .word 0x0000FFFF
    // TODO: decompile
}



void ov08_0221CD90(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x7a
    // add r4, r1, #0
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _0221CDA8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov08_0221D14C
    // add r0, r4, #0
    // bl ov08_02220A50
    // add r0, r4, #0
    // bl ov08_0221DD40
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov08_0221CF08
    // ldr r0, _0221CDF4 ; =0x00002088
    // ldr r0, [r4, r0]
    // bl ov08_02224B8C
    // ldr r1, [r4]
    // add r1, #0x32
    // strb r0, [r1]
    // ldr r0, _0221CDF4 ; =0x00002088
    // ldr r0, [r4, r0]
    // bl ov08_02224B7C
    // mov r0, #4
    // bl FontID_Release
    // ldr r0, [r4]
    // mov r1, #1
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, r5, #0
    // bl DestroySysTaskAndEnvironment
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _0221CDF4: .word 0x00002088
    // TODO: decompile
}



void ov08_0221CDF8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x80
    // ldr r5, _0221CEF4 ; =ov08_02224E34
    // add r3, sp, #0x70
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // mov r1, #1
    // bl SetScreenModeAndDisable
    // ldr r5, _0221CEF8 ; =ov08_02224EAC
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #7
    // str r0, [r3]
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _0221CEFC ; =ov08_02224EE4
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #6
    // str r0, [r3]
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _0221CF00 ; =ov08_02224F00
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0221CF04 ; =ov08_02224EC8
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r3, [r4]
    // mov r0, #5
    // ldr r3, [r3, #0xc]
    // mov r1, #0x20
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // ldr r3, [r4]
    // mov r0, #4
    // ldr r3, [r3, #0xc]
    // mov r1, #0x20
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #5
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #4
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x80
    // pop {r3, r4, r5, pc}
    // _0221CEF4: .word ov08_02224E34
    // _0221CEF8: .word ov08_02224EAC
    // _0221CEFC: .word ov08_02224EE4
    // _0221CF00: .word ov08_02224F00
    // _0221CF04: .word ov08_02224EC8
    // TODO: decompile
}



void ov08_0221CF08(void) {
}



void ov08_0221CF38(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x47
    // ldr r1, [r1, #0xc]
    // bl NARC_New
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [r5]
    // mov r2, #0x79
    // ldr r1, [r1, #0xc]
    // lsl r2, r2, #2
    // str r1, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r1, #0x16
    // mov r3, #7
    // add r4, r0, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // ldr r2, [r5]
    // add r0, r4, #0
    // ldr r2, [r2, #0xc]
    // mov r1, #0x14
    // bl NARC_AllocAndReadWholeMember
    // add r1, sp, #0x10
    // add r6, r0, #0
    // bl NNS_G2dGetUnpackedScreenData
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // add r1, #0xc
    // bl ov08_022217F0
    // add r0, r6, #0
    // bl Heap_Free
    // ldr r2, [r5]
    // add r0, r4, #0
    // ldr r2, [r2, #0xc]
    // mov r1, #0x15
    // bl NARC_AllocAndReadWholeMember
    // add r1, sp, #0x10
    // add r6, r0, #0
    // bl NNS_G2dGetUnpackedScreenData
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // add r1, #0xc
    // bl ov08_02221B1C
    // add r0, r6, #0
    // bl Heap_Free
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r0, #9
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #0x7a
    // ldr r3, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [r3, #0xc]
    // mov r1, #0x47
    // mov r2, #0x17
    // bl PaletteData_LoadNarc
    // add r0, r4, #0
    // bl NARC_Delete
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl PaletteData_GetUnfadedBuf
    // add r2, r0, #0
    // ldr r0, _0221D0F0 ; =0x00001F60
    // mov r1, #6
    // lsl r1, r1, #6
    // add r1, r2, r1
    // add r0, r5, r0
    // mov r2, #0x40
    // bl memcpy
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xd0
    // str r0, [sp, #8]
    // mov r0, #0x7a
    // ldr r3, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [r3, #0xc]
    // mov r1, #0x10
    // mov r2, #7
    // bl PaletteData_LoadNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xf0
    // str r0, [sp, #8]
    // ldr r3, [r5]
    // add r0, #0xf8
    // ldr r0, [r5, r0]
    // ldr r3, [r3, #0xc]
    // mov r1, #0x10
    // mov r2, #8
    // bl PaletteData_LoadNarc
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetFrame
    // add r4, r0, #0
    // bl sub_0200E63C
    // add r1, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r2, #0x79
    // ldr r0, [r0, #0xc]
    // lsl r2, r2, #2
    // str r0, [sp, #0xc]
    // ldr r2, [r5, r2]
    // mov r0, #0x26
    // mov r3, #4
    // bl GfGfxLoader_LoadCharData
    // add r0, r4, #0
    // bl sub_0200E640
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xe0
    // str r0, [sp, #8]
    // mov r0, #0x7a
    // ldr r3, [r5]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [r3, #0xc]
    // mov r1, #0x26
    // bl PaletteData_LoadNarc
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl PaletteData_GetUnfadedBuf
    // add r6, r0, #0
    // ldr r0, [r5]
    // mov r1, #0x20
    // ldr r0, [r0, #0xc]
    // bl Heap_Alloc
    // mov r1, #0x1a
    // lsl r1, r1, #4
    // add r1, r6, r1
    // mov r2, #0x20
    // add r4, r0, #0
    // bl memcpy
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // add r1, r6, r0
    // ldrb r3, [r1]
    // add r2, r4, #0
    // add r2, #0xe
    // strb r3, [r4, #0xe]
    // ldrb r3, [r1, #1]
    // strb r3, [r2, #1]
    // ldrb r3, [r1, #2]
    // strb r3, [r2, #2]
    // ldrb r1, [r1, #3]
    // mov r3, #0xd0
    // strb r1, [r2, #3]
    // add r2, r0, #4
    // add r1, r0, #4
    // ldrb r2, [r6, r2]
    // add r1, r6, r1
    // add r0, #0xb4
    // strb r2, [r4, #6]
    // ldrb r2, [r1, #1]
    // strb r2, [r4, #7]
    // ldrb r2, [r1, #2]
    // strb r2, [r4, #8]
    // ldrb r1, [r1, #3]
    // mov r2, #1
    // strb r1, [r4, #9]
    // mov r1, #0x20
    // str r1, [sp]
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // bl PaletteData_LoadPalette
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0221D0F0: .word 0x00001F60
    // TODO: decompile
}



void ov08_0221D0F4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r3, [r4]
    // mov r0, #0
    // ldr r3, [r3, #0xc]
    // mov r1, #0x1b
    // mov r2, #6
    // bl NewMsgDataFromNarc
    // ldr r1, _0221D13C ; =0x00001FA8
    // mov r2, #0
    // str r0, [r4, r1]
    // ldr r3, [r4]
    // mov r0, #0xf
    // ldr r3, [r3, #0xc]
    // mov r1, #0xe
    // bl MessagePrinter_New
    // ldr r1, _0221D140 ; =0x00001FA4
    // str r0, [r4, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, #0xc]
    // bl MessageFormat_New
    // ldr r1, _0221D144 ; =0x00001FAC
    // str r0, [r4, r1]
    // ldr r1, [r4]
    // mov r0, #2
    // ldr r1, [r1, #0xc]
    // lsl r0, r0, #8
    // bl String_New
    // ldr r1, _0221D148 ; =0x00001FB0
    // str r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _0221D13C: .word 0x00001FA8
    // _0221D140: .word 0x00001FA4
    // _0221D144: .word 0x00001FAC
    // _0221D148: .word 0x00001FB0
    // TODO: decompile
}



void ov08_0221D14C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0221D174 ; =0x00001FA8
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // ldr r0, _0221D178 ; =0x00001FA4
    // ldr r0, [r4, r0]
    // bl MessagePrinter_Delete
    // ldr r0, _0221D17C ; =0x00001FAC
    // ldr r0, [r4, r0]
    // bl MessageFormat_Delete
    // ldr r0, _0221D180 ; =0x00001FB0
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // nop
    // _0221D174: .word 0x00001FA8
    // _0221D178: .word 0x00001FA4
    // _0221D17C: .word 0x00001FAC
    // _0221D180: .word 0x00001FB0
    // TODO: decompile
}



void ov08_0221D184(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bl Party_GetCount
    // cmp r0, #0
    // bgt _0221D19E
    // b _0221D432
    // ldr r0, [sp, #8]
    // mov r1, #0x50
    // mul r1, r0
    // ldr r0, [sp]
    // str r1, [sp, #4]
    // add r4, r0, r1
    // ldr r0, [r0]
    // ldr r1, [sp, #8]
    // ldr r0, [r0]
    // bl Party_GetMonByIndex
    // str r0, [r4, #4]
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #8]
    // ldrh r0, [r4, #8]
    // cmp r0, #0
    // bne _0221D1C8
    // b _0221D416
    // ldr r0, [sp, #8]
    // mov r1, #0x50
    // add r5, r0, #0
    // mul r5, r1
    // ldr r0, [sp]
    // mov r1, #0xa5
    // add r4, r0, r5
    // ldr r0, [r4, #4]
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0xa]
    // ldr r0, [r4, #4]
    // mov r1, #0xa6
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0xc]
    // ldr r0, [r4, #4]
    // mov r1, #0xa7
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0xe]
    // ldr r0, [r4, #4]
    // mov r1, #0xa8
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x10]
    // ldr r0, [r4, #4]
    // mov r1, #0xa9
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x12]
    // ldr r0, [r4, #4]
    // mov r1, #0xa3
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x14]
    // ldr r0, [r4, #4]
    // mov r1, #0xa4
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x16]
    // ldr r0, [r4, #4]
    // mov r1, #0xb1
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r4, #0x18]
    // ldr r0, [r4, #4]
    // mov r1, #0xb2
    // mov r2, #0
    // bl GetMonData
    // ldr r6, [sp]
    // strb r0, [r4, #0x19]
    // ldr r0, [r4, #4]
    // add r6, #0x1a
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // ldrb r1, [r6, r5]
    // mov r2, #0x7f
    // lsl r0, r0, #0x18
    // bic r1, r2
    // lsr r2, r0, #0x18
    // mov r0, #0x7f
    // and r0, r2
    // orr r0, r1
    // strb r0, [r6, r5]
    // ldr r0, [r4, #4]
    // mov r1, #0xb0
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #1
    // ldrb r1, [r6, r5]
    // bne _0221D278
    // mov r0, #0x80
    // bic r1, r0
    // strb r1, [r6, r5]
    // b _0221D27E
    // mov r0, #0x80
    // orr r0, r1
    // strb r0, [r6, r5]
    // ldr r0, [sp]
    // add r4, r0, r5
    // add r6, r0, #0
    // ldr r0, [r4, #4]
    // add r6, #0x1b
    // bl GetMonGender
    // ldrb r1, [r6, r5]
    // mov r2, #7
    // bic r1, r2
    // mov r2, #7
    // and r0, r2
    // orr r0, r1
    // strb r0, [r6, r5]
    // ldr r0, [r4, #4]
    // bl Pokemon_GetStatusIconId
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0x1c
    // ldrb r1, [r6, r5]
    // mov r2, #0x78
    // lsr r0, r0, #0x19
    // bic r1, r2
    // orr r0, r1
    // strb r0, [r6, r5]
    // ldr r0, [r4, #4]
    // mov r1, #0x4c
    // mov r2, #0
    // bl GetMonData
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r0, r0, #0x1f
    // ldrb r1, [r6, r5]
    // mov r2, #0x80
    // lsr r0, r0, #0x18
    // bic r1, r2
    // orr r0, r1
    // strb r0, [r6, r5]
    // ldr r0, [r4, #4]
    // mov r1, #0xa
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x1c]
    // ldr r0, [r4, #4]
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // strh r0, [r4, #0x1e]
    // ldr r0, [r4, #4]
    // mov r1, #8
    // mov r2, #0
    // bl GetMonData
    // ldr r6, [sp]
    // str r0, [r4, #0x20]
    // add r6, #0x1a
    // ldrb r1, [r6, r5]
    // ldrh r0, [r4, #8]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x19
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [r4, #0x24]
    // ldrb r0, [r6, r5]
    // lsl r0, r0, #0x19
    // lsr r1, r0, #0x19
    // cmp r1, #0x64
    // bne _0221D316
    // ldr r0, [sp]
    // add r4, r0, r5
    // ldr r0, [r4, #0x24]
    // b _0221D322
    // ldr r0, [sp]
    // add r1, r1, #1
    // add r4, r0, r5
    // ldrh r0, [r4, #8]
    // bl GetMonExpBySpeciesAndLevel
    // str r0, [r4, #0x28]
    // ldr r0, [r4, #4]
    // mov r1, #0x13
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x2c
    // strb r0, [r1]
    // ldr r0, [r4, #4]
    // mov r1, #0x14
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x2d
    // strb r0, [r1]
    // ldr r0, [r4, #4]
    // mov r1, #0x15
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x2e
    // strb r0, [r1]
    // ldr r0, [r4, #4]
    // mov r1, #0x16
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x2f
    // strb r0, [r1]
    // ldr r0, [r4, #4]
    // mov r1, #0x17
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x30
    // strb r0, [r1]
    // ldr r0, [r4, #4]
    // mov r1, #0xa2
    // mov r2, #0
    // bl GetMonData
    // add r1, r4, #0
    // add r1, #0x31
    // strb r0, [r1]
    // ldr r0, [r4, #4]
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // add r4, #0x32
    // strb r0, [r4]
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r1, #0x34
    // add r7, r1, r0
    // ldr r1, [sp]
    // mov r4, #0
    // add r6, r1, r0
    // lsl r0, r4, #3
    // add r1, r4, #0
    // str r0, [sp, #0xc]
    // add r5, r7, r0
    // ldr r0, [r6, #4]
    // add r1, #0x36
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0xc]
    // strh r0, [r7, r1]
    // add r0, r1, #0
    // ldrh r0, [r7, r0]
    // cmp r0, #0
    // beq _0221D40C
    // add r1, r4, #0
    // ldr r0, [r6, #4]
    // add r1, #0x3a
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r5, #2]
    // add r1, r4, #0
    // ldr r0, [r6, #4]
    // add r1, #0x3e
    // mov r2, #0
    // bl GetMonData
    // strb r0, [r5, #3]
    // ldrh r0, [r5]
    // ldrb r1, [r5, #3]
    // bl GetMoveMaxPP
    // strb r0, [r5, #3]
    // ldrh r0, [r5]
    // mov r1, #3
    // bl GetMoveAttr
    // strb r0, [r5, #4]
    // ldrh r0, [r5]
    // mov r1, #1
    // bl GetMoveAttr
    // strb r0, [r5, #5]
    // ldrh r0, [r5]
    // mov r1, #4
    // bl GetMoveAttr
    // strb r0, [r5, #6]
    // ldrh r0, [r5]
    // mov r1, #2
    // bl GetMoveAttr
    // strb r0, [r5, #7]
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #4
    // blo _0221D3A0
    // ldr r0, [sp, #8]
    // add r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bl Party_GetCount
    // ldr r1, [sp, #8]
    // cmp r1, r0
    // bge _0221D432
    // b _0221D19E
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_0221D438(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221D4A8 ; =ov08_02224F1C
    // add r4, r0, #0
    // bl ov08_0221D5D0
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _0221D484
    // ldr r0, _0221D4AC ; =0x00002088
    // ldr r0, [r4, r0]
    // bl ov08_02224C94
    // add r5, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bne _0221D462
    // mov r5, #6
    // b _0221D46C
    // add r0, r0, #1
    // cmp r5, r0
    // bne _0221D46C
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // cmp r5, #6
    // beq _0221D47C
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov08_0221D5DC
    // cmp r0, #0
    // beq _0221D4A2
    // ldr r0, [r4]
    // strb r5, [r0, #0x11]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // cmp r5, #6
    // beq _0221D494
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov08_0221D5DC
    // cmp r0, #0
    // beq _0221D4A2
    // ldr r0, [r4]
    // strb r5, [r0, #0x11]
    // add r0, r4, #0
    // bl ov08_022217C8
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0221D4A8: .word ov08_02224F1C
    // _0221D4AC: .word 0x00002088
    // TODO: decompile
}



void ov08_0221D4B0(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221D4F0 ; =ov08_02224E54
    // add r5, r0, #0
    // bl ov08_0221D5D0
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221D4E4
    // ldr r0, _0221D4F4 ; =0x00002088
    // ldr r0, [r5, r0]
    // bl ov08_02224C94
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221D4DA
    // mov r4, #3
    // b _0221D4EA
    // add r0, r0, #1
    // cmp r4, r0
    // bne _0221D4EA
    // mov r0, #0xff
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov08_022217C8
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // _0221D4F0: .word ov08_02224E54
    // _0221D4F4: .word 0x00002088
    // TODO: decompile
}



void ov08_0221D4F8(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221D538 ; =ov08_02224E68
    // add r5, r0, #0
    // bl ov08_0221D5D0
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221D52C
    // ldr r0, _0221D53C ; =0x00002088
    // ldr r0, [r5, r0]
    // bl ov08_02224C94
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221D522
    // mov r4, #3
    // b _0221D532
    // add r0, r0, #1
    // cmp r4, r0
    // bne _0221D532
    // mov r0, #0xff
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov08_022217C8
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // _0221D538: .word ov08_02224E68
    // _0221D53C: .word 0x00002088
    // TODO: decompile
}



void ov08_0221D540(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221D580 ; =ov08_02224F5C
    // add r5, r0, #0
    // bl ov08_0221D5D0
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221D574
    // ldr r0, _0221D584 ; =0x00002088
    // ldr r0, [r5, r0]
    // bl ov08_02224C94
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221D56A
    // mov r4, #7
    // b _0221D57A
    // add r0, r0, #1
    // cmp r4, r0
    // bne _0221D57A
    // mov r0, #0xff
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov08_022217C8
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // _0221D580: .word ov08_02224F5C
    // _0221D584: .word 0x00002088
    // TODO: decompile
}



void ov08_0221D588(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221D5C8 ; =ov08_02224E7C
    // add r5, r0, #0
    // bl ov08_0221D5D0
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221D5BC
    // ldr r0, _0221D5CC ; =0x00002088
    // ldr r0, [r5, r0]
    // bl ov08_02224C94
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // bne _0221D5B2
    // mov r4, #4
    // b _0221D5C2
    // add r0, r0, #1
    // cmp r4, r0
    // bne _0221D5C2
    // mov r0, #0xff
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // bl ov08_022217C8
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // _0221D5C8: .word ov08_02224E7C
    // _0221D5CC: .word 0x00002088
    // TODO: decompile
}



void ov08_0221D5D0(void) {
}



void ov08_0221D5DC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // mov r1, #0x50
    // add r5, r0, #0
    // mul r1, r4
    // add r1, r5, r1
    // ldrh r1, [r1, #8]
    // cmp r1, #0
    // bne _0221D5F2
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // cmp r4, #0
    // beq _0221D60C
    // bl ov08_0221DAE4
    // cmp r0, #0
    // bne _0221D608
    // add r0, r5, #0
    // bl ov08_0221DB04
    // cmp r0, #0
    // beq _0221D610
    // cmp r4, #1
    // bne _0221D610
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void ov08_0221D614(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // add r7, r2, #0
    // add r6, r4, #0
    // bl ov08_0221DB04
    // cmp r0, #1
    // bne _0221D68C
    // ldr r2, _0221D6C8 ; =_02224E2C
    // add r1, sp, #0
    // ldrb r3, [r2]
    // add r0, sp, #0
    // mov r4, #0
    // strb r3, [r1]
    // ldrb r3, [r2, #1]
    // strb r3, [r1, #1]
    // ldrb r3, [r2, #2]
    // strb r3, [r1, #2]
    // ldrb r3, [r2, #3]
    // strb r3, [r1, #3]
    // ldrb r3, [r2, #4]
    // ldrb r2, [r2, #5]
    // strb r3, [r1, #4]
    // strb r2, [r1, #5]
    // ldrb r1, [r0]
    // cmp r6, r1
    // beq _0221D656
    // add r4, r4, #1
    // add r0, r0, #1
    // cmp r4, #6
    // blt _0221D648
    // add r4, r4, r7
    // bpl _0221D65E
    // mov r4, #5
    // b _0221D664
    // cmp r4, #6
    // blt _0221D664
    // mov r4, #0
    // add r0, sp, #0
    // ldrb r1, [r0, r4]
    // cmp r6, r1
    // beq _0221D6C0
    // add r0, r5, #0
    // bl ov08_0221D5DC
    // cmp r0, #0
    // beq _0221D656
    // add r0, sp, #0
    // ldrb r0, [r0, r4]
    // mov r1, #0x50
    // mul r1, r0
    // add r1, r5, r1
    // ldrb r1, [r1, #0x1b]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1f
    // bne _0221D656
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r4, r4, r7
    // bpl _0221D694
    // mov r4, #5
    // b _0221D69A
    // cmp r4, #6
    // blt _0221D69A
    // mov r4, #0
    // cmp r6, r4
    // beq _0221D6C0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_0221D5DC
    // cmp r0, #0
    // beq _0221D68C
    // mov r0, #0x50
    // mul r0, r4
    // add r0, r5, r0
    // ldrb r0, [r0, #0x1b]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _0221D68C
    // lsl r0, r4, #0x18
    // add sp, #8
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xff
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221D6C8: .word _02224E2C
    // TODO: decompile
}



void ov08_0221D6CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // cmp r1, #2
    // bne _0221D74A
    // ldr r0, [r6]
    // add r2, r6, #4
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r0, r2, r0
    // ldrb r1, [r0, #0x16]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x19
    // cmp r1, #0x64
    // bhs _0221D6F6
    // ldr r2, [r0, #0x20]
    // ldr r1, [r0, #0x24]
    // ldr r0, [r0, #0x1c]
    // sub r1, r1, r2
    // sub r0, r0, r2
    // b _0221D6FA
    // mov r1, #0
    // add r0, r1, #0
    // mov r2, #0x40
    // bl CalculateHpBarPixelsLength
    // add r4, r0, #0
    // mov r5, #0
    // mov r7, #0x1e
    // cmp r4, #8
    // blo _0221D70E
    // add r1, r7, #0
    // b _0221D716
    // add r0, r4, #0
    // add r0, #0x16
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // add r2, r5, #0
    // add r2, #0xa
    // lsl r2, r2, #0x10
    // add r0, r6, #0
    // lsr r2, r2, #0x10
    // mov r3, #8
    // bl ov08_0221D74C
    // cmp r4, #8
    // bhs _0221D72E
    // mov r4, #0
    // b _0221D734
    // sub r4, #8
    // lsl r0, r4, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #8
    // blo _0221D706
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #7
    // bl ScheduleBgTilemapBufferTransfer
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_0221D74C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // lsl r1, r3, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // add r4, r2, #0
    // str r1, [sp, #8]
    // mov r1, #0x10
    // str r1, [sp, #0xc]
    // mov r1, #0x79
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // lsl r3, r4, #0x18
    // mov r1, #7
    // add r2, r5, #0
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void ov08_0221D77C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // lsl r6, r2, #1
    // add r4, r1, #0
    // str r0, [sp, #0xc]
    // mov r0, #0x79
    // add r7, r6, #2
    // lsl r0, r0, #2
    // lsl r3, r7, #0x18
    // ldr r0, [r5, r0]
    // mov r1, #7
    // add r2, r4, #0
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #0x79
    // add r6, r6, #3
    // lsl r0, r0, #2
    // add r2, r4, #1
    // lsl r2, r2, #0x10
    // lsl r3, r6, #0x18
    // ldr r0, [r5, r0]
    // mov r1, #7
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // mov r0, #0xf
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #0x79
    // add r2, r4, #0
    // lsl r0, r0, #2
    // add r2, #0x20
    // lsl r2, r2, #0x10
    // lsl r3, r7, #0x18
    // ldr r0, [r5, r0]
    // mov r1, #7
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // mov r0, #0xf
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x10
    // str r0, [sp, #0xc]
    // mov r0, #0x79
    // lsl r0, r0, #2
    // add r4, #0x21
    // lsl r2, r4, #0x10
    // lsl r3, r6, #0x18
    // ldr r0, [r5, r0]
    // mov r1, #7
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_0221D81C(void) {
    // push {r4, r5, r6, lr}
    // ldr r6, _0221D83C ; =0x00000125
    // add r5, r0, #0
    // mov r4, #0
    // lsl r2, r4, #0x18
    // add r0, r5, #0
    // add r1, r6, #0
    // lsr r2, r2, #0x18
    // bl ov08_0221D77C
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #6
    // blo _0221D824
    // pop {r4, r5, r6, pc}
    // _0221D83C: .word 0x00000125
    // TODO: decompile
}



void ov08_0221D840(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov08_0221D8B0
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #4
    // mov r2, #0
    // bl BgFillTilemapBufferAndSchedule
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #5
    // mov r2, #0
    // bl BgFillTilemapBufferAndSchedule
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02220C5C
    // add r0, r5, #0
    // bl ov08_0221DD28
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_0221DC3C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_0221DD70
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_0221D6CC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_0222171C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_022221CC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02222524
    // ldr r0, _0221D8AC ; =0x0000207A
    // strb r4, [r5, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _0221D8AC: .word 0x0000207A
    // TODO: decompile
}



void ov08_0221D8B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r2, _0221D918 ; =ov08_02224F80
    // add r5, r0, #0
    // lsl r0, r1, #3
    // mov r4, #0
    // add r6, r2, r0
    // ldr r2, [r5]
    // ldr r1, [r6]
    // ldr r2, [r2, #0xc]
    // mov r0, #0x47
    // bl AllocAndReadWholeNarcMemberByIdPair
    // add r1, sp, #0xc
    // add r7, r0, #0
    // bl NNS_G2dGetUnpackedScreenData
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0x79
    // lsl r0, r0, #2
    // add r1, r4, #6
    // ldr r2, [sp, #0xc]
    // lsl r1, r1, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // add r2, #0xc
    // mov r3, #0
    // bl LoadRectToBgTilemapRect
    // mov r0, #0x79
    // lsl r0, r0, #2
    // add r1, r4, #6
    // lsl r1, r1, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r7, #0
    // bl Heap_Free
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #2
    // blo _0221D8BE
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221D918: .word ov08_02224F80
    // TODO: decompile
}



void ov08_0221D91C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r2, #0x50
    // ldrb r1, [r1, #0x11]
    // add r3, r5, #4
    // mul r2, r1
    // add r4, r3, r2
    // bl ov08_0221DB24
    // cmp r0, #1
    // bne _0221D978
    // ldr r0, _0221DAB8 ; =0x00001FA8
    // mov r1, #0x50
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // add r4, r0, #0
    // ldr r0, [r1, #8]
    // ldr r1, [r1, #0x28]
    // bl BattleSystem_GetBattlerIdPartner
    // add r1, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetTrainer
    // add r2, r0, #0
    // ldr r0, _0221DABC ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferTrainerNameFromDataStruct
    // ldr r1, _0221DABC ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r4, #0x10]
    // cmp r0, #0
    // bne _0221D9B4
    // ldr r0, _0221DAB8 ; =0x00001FA8
    // mov r1, #0x4d
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _0221DABC ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _0221DABC ; =0x00001FAC
    // add r2, r6, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, [r5]
    // ldrb r0, [r2, #0x11]
    // add r0, r2, r0
    // add r0, #0x2c
    // ldrb r1, [r0]
    // ldrb r0, [r2, #0x14]
    // cmp r0, r1
    // beq _0221D9CA
    // ldrb r0, [r2, #0x15]
    // cmp r0, r1
    // bne _0221DA00
    // ldr r0, _0221DAB8 ; =0x00001FA8
    // mov r1, #0x4c
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _0221DABC ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _0221DABC ; =0x00001FAC
    // add r2, r6, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov08_0221DAC4
    // cmp r0, #1
    // bne _0221DA1C
    // ldr r2, _0221DAB8 ; =0x00001FA8
    // mov r1, #0x4f
    // ldr r0, [r5, r2]
    // add r2, #8
    // ldr r2, [r5, r2]
    // bl ReadMsgDataIntoString
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, [r5]
    // ldrb r1, [r2, #0x12]
    // cmp r1, #6
    // beq _0221DA6C
    // ldrb r4, [r2, #0x11]
    // add r0, r2, r4
    // add r0, #0x2c
    // ldrb r0, [r0]
    // cmp r1, r0
    // bne _0221DA6C
    // ldr r0, _0221DAB8 ; =0x00001FA8
    // mov r1, #0x5d
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #0x50
    // mul r0, r4
    // add r0, r5, r0
    // ldr r0, [r0, #4]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _0221DABC ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _0221DABC ; =0x00001FAC
    // add r2, r6, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r2, #0x24]
    // cmp r0, #0
    // beq _0221DAB4
    // ldr r1, _0221DAC0 ; =0x00002076
    // mov r0, #0x50
    // ldrb r2, [r5, r1]
    // sub r1, #0xce
    // add r4, r5, #4
    // add r6, r2, #0
    // mul r6, r0
    // ldr r0, [r5, r1]
    // mov r1, #0x4e
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, [r4, r6]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _0221DABC ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _0221DABC ; =0x00001FAC
    // add r2, r7, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r7, #0
    // bl String_Delete
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221DAB8: .word 0x00001FA8
    // _0221DABC: .word 0x00001FAC
    // _0221DAC0: .word 0x00002076
    // TODO: decompile
}



void ov08_0221DAC4(void) {
    // ldr r1, [r0]
    // ldrb r2, [r1, #0x11]
    // mov r1, #0x50
    // mul r1, r2
    // add r0, r0, r1
    // ldrb r0, [r0, #0x1b]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // beq _0221DADA
    // mov r0, #1
    // b _0221DADC
    // mov r0, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx lr
    // TODO: decompile
}



void ov08_0221DAE4(void) {
}



void ov08_0221DB04(void) {
}



void ov08_0221DB24(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov08_0221DB04
    // cmp r0, #1
    // bne _0221DB4C
    // ldr r0, _0221DB50 ; =0x0000208F
    // ldrb r0, [r5, r0]
    // cmp r0, #2
    // bne _0221DB44
    // mov r0, #1
    // add r1, r4, #0
    // tst r1, r0
    // beq _0221DB4C
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // add r1, r4, #0
    // tst r1, r0
    // beq _0221DB4E
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0221DB50: .word 0x0000208F
    // TODO: decompile
}



void ov08_0221DB54(void) {
    // ldr r2, [r0]
    // add r1, r2, #0
    // add r1, #0x34
    // ldrb r3, [r1]
    // cmp r3, #4
    // bne _0221DB64
    // ldrh r0, [r2, #0x24]
    // b _0221DB72
    // ldrb r2, [r2, #0x11]
    // mov r1, #0x50
    // mul r1, r2
    // add r1, r0, r1
    // lsl r0, r3, #3
    // add r0, r1, r0
    // ldrh r0, [r0, #0x34]
    // ldr r3, _0221DB78 ; =MoveIsHM
    // bx r3
    // nop
    // _0221DB78: .word MoveIsHM
    // TODO: decompile
}



void ov08_0221DB7C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0221DBAC ; =0x00002020
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _0221DBB0 ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, #0xa0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _0221DBB0 ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, #0x60
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _0221DBB0 ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, #0x70
    // bl ClearWindowTilemapAndScheduleTransfer
    // pop {r4, pc}
    // nop
    // _0221DBAC: .word 0x00002020
    // _0221DBB0: .word 0x00002070
    // TODO: decompile
}



void ov08_0221DBB4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov08_0221D81C
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #7
    // bl ScheduleBgTilemapBufferTransfer
    // pop {r4, pc}
    // TODO: decompile
}



void ov08_0221DBCC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // cmp r4, #0x41
    // beq _0221DBF0
    // cmp r4, #0x43
    // beq _0221DBF0
    // cmp r4, #0x42
    // beq _0221DBF0
    // bl BattleSystem_GetBag
    // add r1, r4, #0
    // mov r2, #1
    // add r3, r7, #0
    // bl Bag_TakeItem
    // add r0, r5, #0
    // bl BattleSystem_GetBagCursor
    // add r1, r4, #0
    // add r2, r6, #0
    // bl BagCursor_Battle_SetLastUsedItem
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_0221DC00(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, _0221DC30 ; =0x00002050
    // ldr r4, _0221DC34 ; =ov08_02224FD0
    // mov r6, #0
    // add r5, r7, r0
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // add r1, r5, #0
    // add r2, r4, #0
    // bl AddWindow
    // add r6, r6, #1
    // add r4, #8
    // add r5, #0x10
    // cmp r6, #2
    // blo _0221DC0C
    // ldr r1, _0221DC38 ; =0x0000207A
    // add r0, r7, #0
    // ldrb r1, [r7, r1]
    // bl ov08_0221DC3C
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221DC30: .word 0x00002050
    // _0221DC34: .word ov08_02224FD0
    // _0221DC38: .word 0x0000207A
    // TODO: decompile
}



void ov08_0221DC3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // cmp r1, #9
    // bhi _0221DCBC
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221DC50: ; jump table
    // ldr r0, _0221DCFC ; =0x00002074
    // mov r1, #6
    // ldr r6, _0221DD00 ; =ov08_02225084
    // strb r1, [r4, r0]
    // b _0221DCBC
    // ldr r0, _0221DCFC ; =0x00002074
    // mov r1, #4
    // ldr r6, _0221DD04 ; =ov08_0222500C
    // strb r1, [r4, r0]
    // b _0221DCBC
    // ldr r0, _0221DCFC ; =0x00002074
    // mov r1, #0x23
    // ldr r6, _0221DD08 ; =ov08_0222522C
    // strb r1, [r4, r0]
    // b _0221DCBC
    // ldr r0, _0221DCFC ; =0x00002074
    // mov r1, #0xb
    // ldr r6, _0221DD0C ; =ov08_022250EC
    // strb r1, [r4, r0]
    // b _0221DCBC
    // ldr r0, _0221DCFC ; =0x00002074
    // mov r1, #0x11
    // ldr r6, _0221DD10 ; =ov08_022251A4
    // strb r1, [r4, r0]
    // b _0221DCBC
    // ldr r0, _0221DCFC ; =0x00002074
    // mov r1, #5
    // ldr r6, _0221DD14 ; =ov08_0222502C
    // strb r1, [r4, r0]
    // b _0221DCBC
    // ldr r0, _0221DCFC ; =0x00002074
    // mov r1, #6
    // ldr r6, _0221DD18 ; =ov08_02225054
    // strb r1, [r4, r0]
    // b _0221DCBC
    // ldr r0, _0221DCFC ; =0x00002074
    // mov r1, #0xc
    // ldr r6, _0221DD1C ; =ov08_02225144
    // strb r1, [r4, r0]
    // b _0221DCBC
    // ldr r0, _0221DCFC ; =0x00002074
    // mov r1, #7
    // ldr r6, _0221DD20 ; =ov08_022250B4
    // strb r1, [r4, r0]
    // ldr r1, _0221DCFC ; =0x00002074
    // ldr r0, [r4]
    // ldrb r1, [r4, r1]
    // ldr r0, [r0, #0xc]
    // bl AllocWindows
    // ldr r1, _0221DD24 ; =0x00002070
    // mov r5, #0
    // str r0, [r4, r1]
    // add r0, r1, #4
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bls _0221DCFA
    // add r7, r1, #4
    // ldr r1, _0221DD24 ; =0x00002070
    // mov r0, #0x79
    // ldr r2, [r4, r1]
    // lsl r0, r0, #2
    // lsl r1, r5, #4
    // add r1, r2, r1
    // lsl r2, r5, #3
    // ldr r0, [r4, r0]
    // add r2, r6, r2
    // bl AddWindow
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // ldrb r0, [r4, r7]
    // cmp r5, r0
    // blo _0221DCD8
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221DCFC: .word 0x00002074
    // _0221DD00: .word ov08_02225084
    // _0221DD04: .word ov08_0222500C
    // _0221DD08: .word ov08_0222522C
    // _0221DD0C: .word ov08_022250EC
    // _0221DD10: .word ov08_022251A4
    // _0221DD14: .word ov08_0222502C
    // _0221DD18: .word ov08_02225054
    // _0221DD1C: .word ov08_02225144
    // _0221DD20: .word ov08_022250B4
    // _0221DD24: .word 0x00002070
    // TODO: decompile
}



void ov08_0221DD28(void) {
    // ldr r1, _0221DD38 ; =0x00002070
    // add r2, r0, #0
    // ldr r0, [r2, r1]
    // add r1, r1, #4
    // ldr r3, _0221DD3C ; =WindowArray_Delete
    // ldrb r1, [r2, r1]
    // bx r3
    // nop
    // _0221DD38: .word 0x00002070
    // _0221DD3C: .word WindowArray_Delete
    // TODO: decompile
}



void ov08_0221DD40(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221DD68 ; =0x00002070
    // add r5, r0, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldrb r1, [r5, r1]
    // bl WindowArray_Delete
    // ldr r0, _0221DD6C ; =0x00002050
    // mov r4, #0
    // add r5, r5, r0
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #2
    // blo _0221DD56
    // pop {r3, r4, r5, pc}
    // nop
    // _0221DD68: .word 0x00002070
    // _0221DD6C: .word 0x00002050
    // TODO: decompile
}



void ov08_0221DD70(void) {
    // push {r3, lr}
    // cmp r1, #9
    // bhi _0221DDCA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0221DD82: ; jump table
    // bl ov08_0221F4A4
    // pop {r3, pc}
    // bl ov08_0221F5D0
    // pop {r3, pc}
    // bl ov08_0221F900
    // pop {r3, pc}
    // bl ov08_0221F7C0
    // pop {r3, pc}
    // bl ov08_0221FB18
    // pop {r3, pc}
    // bl ov08_0221FF70
    // pop {r3, pc}
    // bl ov08_0221FC7C
    // pop {r3, pc}
    // bl ov08_0221FDA4
    // pop {r3, pc}
    // bl ov08_02220084
    // pop {r3, pc}
    // TODO: decompile
}



void ov08_0221DDCC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r6, r0, #0
    // ldr r0, _0221DF5C ; =0x00002070
    // str r3, [sp, #0x14]
    // ldr r5, [r6, r0]
    // lsl r4, r1, #4
    // ldr r0, [sp, #0x14]
    // mov r1, #0x50
    // mul r1, r0
    // add r7, r6, #4
    // add r0, r7, r1
    // str r1, [sp, #0x24]
    // ldr r1, [r6]
    // str r0, [sp, #0x20]
    // ldr r1, [r1, #0xc]
    // mov r0, #0xc
    // str r2, [sp, #0x10]
    // bl String_New
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // ldr r0, _0221DF60 ; =0x00001FA8
    // lsl r2, r1, #2
    // ldr r1, _0221DF64 ; =ov08_02224FF4
    // ldr r0, [r6, r0]
    // ldr r1, [r1, r2]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    // ldr r0, [r7, r0]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _0221DF68 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r6, r0]
    // bl BufferBoxMonNickname
    // ldr r0, _0221DF68 ; =0x00001FAC
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r6, r0]
    // ldr r2, [sp, #0x18]
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x10]
    // add r3, sp, #0x38
    // cmp r0, #0
    // bne _0221DE4E
    // ldrb r7, [r3, #0x14]
    // mov r0, #0xff
    // ldr r1, [sp, #0x10]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0221DF6C ; =0x000F0E00
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldrb r3, [r3, #0x10]
    // add r0, r5, r4
    // bl AddTextPrinterParameterizedWithColor
    // b _0221DE6A
    // ldrb r7, [r3, #0x14]
    // mov r0, #0xff
    // ldr r1, [sp, #0x10]
    // str r7, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0221DF70 ; =0x00070809
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldrb r3, [r3, #0x10]
    // add r0, r5, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // ldrb r0, [r0, #0x16]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _0221DF50
    // ldr r0, [sp, #0x20]
    // ldrb r0, [r0, #0x17]
    // lsl r1, r0, #0x18
    // lsr r1, r1, #0x1f
    // bne _0221DF50
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1d
    // bne _0221DEEE
    // ldr r0, _0221DF60 ; =0x00001FA8
    // mov r1, #0x10
    // ldr r0, [r6, r0]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, r4
    // bl GetWindowWidth
    // str r0, [sp, #0x28]
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // ldr r1, [sp, #0x28]
    // str r7, [sp]
    // lsl r1, r1, #3
    // sub r3, r1, r0
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // bne _0221DED2
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221DF74 ; =0x00070800
    // mov r1, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r2, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // b _0221DEE6
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221DF78 ; =0x000A0B00
    // mov r1, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r2, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // b _0221DF50
    // cmp r0, #1
    // bne _0221DF50
    // ldr r0, _0221DF60 ; =0x00001FA8
    // mov r1, #0x11
    // ldr r0, [r6, r0]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, r4
    // bl GetWindowWidth
    // str r0, [sp, #0x2c]
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // ldr r1, [sp, #0x2c]
    // str r7, [sp]
    // lsl r1, r1, #3
    // sub r3, r1, r0
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // bne _0221DF36
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0xc1
    // lsl r0, r0, #0xa
    // str r0, [sp, #8]
    // mov r1, #0
    // add r0, r5, r4
    // add r2, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // b _0221DF4A
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221DF7C ; =0x000C0D00
    // mov r1, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r2, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221DF5C: .word 0x00002070
    // _0221DF60: .word 0x00001FA8
    // _0221DF64: .word ov08_02224FF4
    // _0221DF68: .word 0x00001FAC
    // _0221DF6C: .word 0x000F0E00
    // _0221DF70: .word 0x00070809
    // _0221DF74: .word 0x00070800
    // _0221DF78: .word 0x000A0B00
    // _0221DF7C: .word 0x000C0D00
    // TODO: decompile
}



void ov08_0221DF80(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221DFC4 ; =0x00002070
    // lsl r4, r1, #4
    // ldr r1, [r5, r0]
    // add r3, #8
    // add r1, r1, r4
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // add r1, sp, #0x10
    // ldrb r1, [r1, #0x10]
    // mov r3, #0x50
    // mul r3, r2
    // str r1, [sp, #0xc]
    // add r2, r5, r3
    // ldrb r2, [r2, #0x1a]
    // sub r0, #0xcc
    // ldr r0, [r5, r0]
    // lsl r2, r2, #0x19
    // mov r1, #1
    // lsr r2, r2, #0x19
    // mov r3, #3
    // bl sub_0200CE7C
    // ldr r0, _0221DFC4 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0221DFC4: .word 0x00002070
    // TODO: decompile
}



void ov08_0221DFC8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x50
    // add r7, r3, #0
    // mul r0, r2
    // add r3, r5, #4
    // add r0, r3, r0
    // str r0, [sp, #0xc]
    // add r0, sp, #0x18
    // ldrb r6, [r0, #0x10]
    // ldr r0, _0221E040 ; =0x00002070
    // lsl r4, r1, #4
    // ldr r1, [r5, r0]
    // sub r0, #0xcc
    // add r1, r1, r4
    // str r1, [sp]
    // str r7, [sp, #4]
    // str r6, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // ldrh r1, [r1, #0x10]
    // mov r2, #3
    // mov r3, #1
    // bl PrintUIntOnWindow
    // add r3, r7, #0
    // ldr r2, _0221E044 ; =0x00001FA4
    // str r6, [sp]
    // ldr r0, [r5, r2]
    // add r2, #0xcc
    // ldr r2, [r5, r2]
    // mov r1, #0
    // add r2, r2, r4
    // add r3, #0x18
    // bl sub_0200CDAC
    // ldr r0, _0221E040 ; =0x00002070
    // add r7, #0x20
    // ldr r1, [r5, r0]
    // sub r0, #0xcc
    // add r1, r1, r4
    // str r1, [sp]
    // str r7, [sp, #4]
    // str r6, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // ldrh r1, [r1, #0x12]
    // mov r2, #3
    // mov r3, #0
    // bl PrintUIntOnWindow
    // ldr r0, _0221E040 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221E040: .word 0x00002070
    // _0221E044: .word 0x00001FA4
    // TODO: decompile
}



void ov08_0221E048(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0x50
    // str r1, [sp, #8]
    // mul r0, r2
    // add r1, r4, #4
    // str r3, [sp, #0xc]
    // add r5, r1, r0
    // ldrh r0, [r5, #0x10]
    // ldrh r1, [r5, #0x12]
    // mov r2, #0x30
    // mov r7, #1
    // bl CalculateHpBarPixelsLength
    // str r0, [sp, #0x14]
    // ldrh r0, [r5, #0x10]
    // ldrh r1, [r5, #0x12]
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // cmp r0, #4
    // bhi _0221E0A6
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E082: ; jump table
    // ldr r0, _0221E11C ; =0x00002070
    // ldr r1, [r4, r0]
    // ldr r0, [sp, #8]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // b _0221E0A6
    // mov r7, #3
    // b _0221E0A6
    // mov r7, #5
    // add r0, sp, #0x20
    // ldrb r6, [r0, #0x10]
    // add r0, r7, #1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // lsl r5, r0, #4
    // ldr r0, [sp, #0x14]
    // add r3, r6, #1
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E11C ; =0x00002070
    // lsl r1, r1, #0x18
    // ldr r0, [r4, r0]
    // lsl r3, r3, #0x10
    // ldr r2, [sp, #0xc]
    // add r0, r0, r5
    // lsr r1, r1, #0x18
    // lsr r3, r3, #0x10
    // bl FillWindowPixelRect
    // ldr r0, [sp, #0x14]
    // add r3, r6, #2
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _0221E11C ; =0x00002070
    // lsl r3, r3, #0x10
    // ldr r0, [r4, r0]
    // ldr r2, [sp, #0xc]
    // add r0, r0, r5
    // add r1, r7, #0
    // lsr r3, r3, #0x10
    // bl FillWindowPixelRect
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E11C ; =0x00002070
    // add r3, r6, #4
    // ldr r0, [r4, r0]
    // lsl r1, r1, #0x18
    // lsl r3, r3, #0x10
    // ldr r2, [sp, #0xc]
    // add r0, r0, r5
    // lsr r1, r1, #0x18
    // lsr r3, r3, #0x10
    // bl FillWindowPixelRect
    // ldr r0, _0221E11C ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, r0, r5
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221E11C: .word 0x00002070
    // TODO: decompile
}



void ov08_0221E120(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5]
    // mov r0, #0x10
    // ldr r1, [r1, #0xc]
    // add r7, r2, #0
    // bl String_New
    // add r6, r0, #0
    // ldr r0, _0221E198 ; =0x00001FA8
    // mov r1, #8
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // mov r2, #0x50
    // mul r2, r7
    // str r0, [sp, #0x10]
    // ldr r0, _0221E19C ; =0x00001FAC
    // add r2, r5, r2
    // ldrh r2, [r2, #0x1c]
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl BufferAbilityName
    // ldr r0, _0221E19C ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E1A0 ; =0x000F0E00
    // lsl r4, r4, #4
    // str r0, [sp, #8]
    // ldr r0, _0221E1A4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r2, r6, #0
    // add r0, r0, r4
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E1A4 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0221E198: .word 0x00001FA8
    // _0221E19C: .word 0x00001FAC
    // _0221E1A0: .word 0x000F0E00
    // _0221E1A4: .word 0x00002070
    // TODO: decompile
}



void ov08_0221E1A8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r0, #0x50
    // add r7, r1, #0
    // add r1, r4, #4
    // mul r0, r2
    // add r5, r1, r0
    // ldrh r0, [r5, #0x1a]
    // cmp r0, #0
    // bne _0221E1CC
    // ldr r0, _0221E234 ; =0x00001FA8
    // mov r1, #0x14
    // ldr r0, [r4, r0]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // b _0221E202
    // ldr r1, [r4]
    // mov r0, #0x12
    // ldr r1, [r1, #0xc]
    // bl String_New
    // add r6, r0, #0
    // ldr r0, _0221E234 ; =0x00001FA8
    // mov r1, #9
    // ldr r0, [r4, r0]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x10]
    // ldr r0, _0221E238 ; =0x00001FAC
    // ldrh r2, [r5, #0x1a]
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl BufferItemName
    // ldr r0, _0221E238 ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r4, r0]
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E23C ; =0x000F0E00
    // lsl r5, r7, #4
    // str r0, [sp, #8]
    // ldr r0, _0221E240 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r4, r0]
    // add r2, r6, #0
    // add r0, r0, r5
    // add r3, r1, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E240 ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, r0, r5
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0221E234: .word 0x00001FA8
    // _0221E238: .word 0x00001FAC
    // _0221E23C: .word 0x000F0E00
    // _0221E240: .word 0x00002070
    // TODO: decompile
}



void ov08_0221E244(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // str r1, [sp, #0x10]
    // ldr r1, [r5]
    // ldr r0, _0221E2DC ; =0x00002070
    // ldr r1, [r1, #0xc]
    // ldr r4, [r5, r0]
    // mov r0, #0x10
    // str r3, [sp, #0x14]
    // lsl r6, r2, #4
    // bl String_New
    // add r7, r0, #0
    // ldr r0, _0221E2E0 ; =0x00001FA8
    // ldr r1, [sp, #0x14]
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x18]
    // ldr r0, _0221E2E4 ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl BufferMoveName
    // ldr r0, _0221E2E4 ; =0x00001FAC
    // ldr r2, [sp, #0x18]
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // add r0, sp, #0x20
    // ldrh r0, [r0, #0x10]
    // cmp r0, #4
    // bne _0221E2A8
    // add r0, r4, r6
    // bl GetWindowWidth
    // add r5, r0, #0
    // add r0, sp, #0x20
    // ldrh r0, [r0, #0x10]
    // add r1, r7, #0
    // mov r2, #0
    // bl FontID_String_GetWidth
    // lsl r1, r5, #3
    // sub r0, r1, r0
    // lsr r3, r0, #1
    // b _0221E2AA
    // mov r3, #0
    // add r1, sp, #0x20
    // ldrh r0, [r1, #0x14]
    // add r2, r7, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldrh r1, [r1, #0x10]
    // add r0, r4, r6
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0221E2DC: .word 0x00002070
    // _0221E2E0: .word 0x00001FA8
    // _0221E2E4: .word 0x00001FAC
    // TODO: decompile
}



void ov08_0221E2E8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, _0221E334 ; =0x00001FA8
    // str r2, [sp, #0x10]
    // add r5, r1, #0
    // ldr r0, [r4, r0]
    // add r6, r3, #0
    // mov r1, #0xe
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E338 ; =0x000F0E00
    // mov r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r0, _0221E33C ; =0x00002070
    // lsl r5, r5, #4
    // ldr r0, [r4, r0]
    // ldr r3, [sp, #0x10]
    // add r0, r0, r5
    // add r2, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, _0221E33C ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, r0, r5
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221E334: .word 0x00001FA8
    // _0221E338: .word 0x000F0E00
    // _0221E33C: .word 0x00002070
    // TODO: decompile
}



void ov08_0221E340(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, _0221E398 ; =0x00002050
    // add r5, r1, #0
    // mov r1, #1
    // add r0, r4, r0
    // add r2, r1, #0
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // ldr r0, _0221E398 ; =0x00002050
    // mov r1, #0xf
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221E39C ; =0x00001FA8
    // add r1, r5, #0
    // ldr r0, [r4, r0]
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E3A0 ; =0x00010200
    // mov r1, #1
    // str r0, [sp, #8]
    // ldr r0, _0221E398 ; =0x00002050
    // add r2, r5, #0
    // add r0, r4, r0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, _0221E398 ; =0x00002050
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0221E398: .word 0x00002050
    // _0221E39C: .word 0x00001FA8
    // _0221E3A0: .word 0x00010200
    // TODO: decompile
}



void ov08_0221E3A4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r3, _0221E400 ; =0x00002070
    // lsl r4, r1, #4
    // ldr r5, [r0, r3]
    // sub r3, #0xc8
    // ldr r0, [r0, r3]
    // add r1, r2, #0
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #4
    // add r1, r7, #0
    // mov r2, #0
    // bl FontID_String_GetWidth
    // add r6, r0, #0
    // add r0, r5, r4
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E404 ; =0x00070809
    // lsl r3, r3, #3
    // str r0, [sp, #8]
    // mov r0, #0
    // sub r3, r3, r6
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    // mov r1, #4
    // add r2, r7, #0
    // lsr r3, r3, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221E400: .word 0x00002070
    // _0221E404: .word 0x00070809
    // TODO: decompile
}



void ov08_0221E408(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // mov r0, #0x50
    // mul r0, r1
    // add r2, r5, #4
    // add r4, r2, r0
    // ldr r1, _0221E5C4 ; =0x00002075
    // mov r0, #0x16
    // ldrb r2, [r5, r1]
    // sub r1, #0xcd
    // mul r0, r2
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // ldr r0, [r5, r1]
    // mov r1, #0x17
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r7, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r2, _0221E5C8 ; =0x000F0E00
    // add r0, #0x31
    // str r2, [sp, #8]
    // ldr r2, _0221E5CC ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r2, [r5, r2]
    // add r3, r1, #0
    // add r0, r2, r0
    // add r2, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, _0221E5D0 ; =0x00001FA8
    // mov r1, #0x18
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x18]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // mov r1, #0
    // str r0, [sp, #0x1c]
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldrb r2, [r4, #0x16]
    // ldr r0, _0221E5D4 ; =0x00001FAC
    // mov r3, #3
    // lsl r2, r2, #0x19
    // ldr r0, [r5, r0]
    // lsr r2, r2, #0x19
    // bl BufferIntegerAsString
    // ldr r0, _0221E5D4 ; =0x00001FAC
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x18]
    // bl StringExpandPlaceholders
    // mov r1, #0
    // add r0, r6, #0
    // add r0, #0xb
    // lsl r7, r0, #4
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E5C8 ; =0x000F0E00
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, _0221E5CC ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r3, r1, #0
    // add r0, r0, r7
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, _0221E5D0 ; =0x00001FA8
    // mov r1, #0x19
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // mov r1, #0
    // str r0, [sp, #0x20]
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r2, _0221E5C8 ; =0x000F0E00
    // add r0, #0x41
    // str r2, [sp, #8]
    // ldr r2, _0221E5CC ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r2, [r5, r2]
    // add r3, r1, #0
    // add r0, r2, r0
    // ldr r2, [sp, #0x20]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // ldr r0, _0221E5D0 ; =0x00001FA8
    // mov r1, #0x1a
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x14]
    // ldr r1, [r1, #0xc]
    // mov r0, #0xe
    // bl String_New
    // str r0, [sp, #0x10]
    // ldrb r0, [r4, #0x16]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x19
    // cmp r0, #0x64
    // bhs _0221E528
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0221E5D4 ; =0x00001FAC
    // ldr r2, [r4, #0x24]
    // ldr r3, [r4, #0x1c]
    // ldr r0, [r5, r0]
    // sub r2, r2, r3
    // mov r1, #0
    // mov r3, #6
    // bl BufferIntegerAsString
    // b _0221E53C
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0221E5D4 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // mov r3, #6
    // bl BufferIntegerAsString
    // ldr r0, _0221E5D4 ; =0x00001FAC
    // ldr r1, [sp, #0x10]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x14]
    // bl StringExpandPlaceholders
    // ldr r0, _0221E5CC ; =0x00002070
    // add r6, #0xc
    // ldr r0, [r5, r0]
    // lsl r4, r6, #4
    // add r0, r0, r4
    // bl GetWindowWidth
    // add r6, r0, #0
    // mov r0, #0
    // ldr r1, [sp, #0x10]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r1, r6, #3
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // mov r1, #0
    // lsr r3, r0, #0x10
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E5D8 ; =0x00010200
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, _0221E5CC ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // ldr r0, _0221E5CC ; =0x00002070
    // ldr r1, [r5, r0]
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221E5CC ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r7
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221E5CC ; =0x00002070
    // ldr r1, [r5, r0]
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221E5CC ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0221E5C4: .word 0x00002075
    // _0221E5C8: .word 0x000F0E00
    // _0221E5CC: .word 0x00002070
    // _0221E5D0: .word 0x00001FA8
    // _0221E5D4: .word 0x00001FAC
    // _0221E5D8: .word 0x00010200
    // TODO: decompile
}



void ov08_0221E5DC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r1, #0
    // add r5, r0, #0
    // ldr r1, _0221E6C0 ; =0x00002075
    // mov r0, #0x16
    // ldrb r2, [r5, r1]
    // sub r1, #0xcd
    // mul r0, r2
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [r5, r1]
    // mov r1, #0x20
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E6C4 ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221E6C8 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r3, r1, #0
    // add r0, #0xe0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E6CC ; =0x00001FA8
    // mov r1, #0x21
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x10]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // mov r1, #0
    // mov r2, #0x50
    // add r6, r0, #0
    // mul r2, r7
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E6D0 ; =0x00001FAC
    // add r2, r5, r2
    // ldrh r2, [r2, #0xa]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221E6D0 ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // add r0, r4, #5
    // lsl r4, r0, #4
    // ldr r0, _0221E6C8 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r7
    // lsl r0, r0, #0x18
    // mov r1, #0
    // lsr r3, r0, #0x18
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E6D4 ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221E6C8 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E6C8 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0xe0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221E6C8 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221E6C0: .word 0x00002075
    // _0221E6C4: .word 0x000F0E00
    // _0221E6C8: .word 0x00002070
    // _0221E6CC: .word 0x00001FA8
    // _0221E6D0: .word 0x00001FAC
    // _0221E6D4: .word 0x00010200
    // TODO: decompile
}



void ov08_0221E6D8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r1, #0
    // add r5, r0, #0
    // ldr r1, _0221E7BC ; =0x00002075
    // mov r0, #0x16
    // ldrb r2, [r5, r1]
    // sub r1, #0xcd
    // mul r0, r2
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [r5, r1]
    // mov r1, #0x22
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E7C0 ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221E7C4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r3, r1, #0
    // add r0, #0xf0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E7C8 ; =0x00001FA8
    // mov r1, #0x23
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x10]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // mov r1, #0
    // mov r2, #0x50
    // add r6, r0, #0
    // mul r2, r7
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E7CC ; =0x00001FAC
    // add r2, r5, r2
    // ldrh r2, [r2, #0xc]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221E7CC ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // add r0, r4, #6
    // lsl r4, r0, #4
    // ldr r0, _0221E7C4 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r7
    // lsl r0, r0, #0x18
    // mov r1, #0
    // lsr r3, r0, #0x18
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E7D0 ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221E7C4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E7C4 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0xf0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221E7C4 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221E7BC: .word 0x00002075
    // _0221E7C0: .word 0x000F0E00
    // _0221E7C4: .word 0x00002070
    // _0221E7C8: .word 0x00001FA8
    // _0221E7CC: .word 0x00001FAC
    // _0221E7D0: .word 0x00010200
    // TODO: decompile
}



void ov08_0221E7D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r1, #0
    // add r5, r0, #0
    // ldr r1, _0221E8BC ; =0x00002075
    // mov r0, #0x16
    // ldrb r2, [r5, r1]
    // sub r1, #0xcd
    // mul r0, r2
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [r5, r1]
    // mov r1, #0x28
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r2, #0xff
    // str r2, [sp, #4]
    // ldr r0, _0221E8C0 ; =0x000F0E00
    // add r2, r2, #1
    // str r0, [sp, #8]
    // ldr r0, _0221E8C4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r3, r1, #0
    // add r0, r0, r2
    // add r2, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E8C8 ; =0x00001FA8
    // mov r1, #0x29
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x10]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // mov r1, #0
    // mov r2, #0x50
    // add r6, r0, #0
    // mul r2, r7
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E8CC ; =0x00001FAC
    // add r2, r5, r2
    // ldrh r2, [r2, #0xe]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221E8CC ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // add r0, r4, #7
    // lsl r4, r0, #4
    // ldr r0, _0221E8C4 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r7
    // lsl r0, r0, #0x18
    // mov r1, #0
    // lsr r3, r0, #0x18
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E8D0 ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221E8C4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E8C4 ; =0x00002070
    // ldr r1, [r5, r0]
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221E8C4 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0221E8BC: .word 0x00002075
    // _0221E8C0: .word 0x000F0E00
    // _0221E8C4: .word 0x00002070
    // _0221E8C8: .word 0x00001FA8
    // _0221E8CC: .word 0x00001FAC
    // _0221E8D0: .word 0x00010200
    // TODO: decompile
}



void ov08_0221E8D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r1, #0
    // add r4, r0, #0
    // ldr r1, _0221E9BC ; =0x00002075
    // mov r0, #0x16
    // ldrb r2, [r4, r1]
    // sub r1, #0xcd
    // mul r0, r2
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // ldr r0, [r4, r1]
    // mov r1, #0x24
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r2, _0221E9C0 ; =0x000F0E00
    // add r0, #0x11
    // str r2, [sp, #8]
    // ldr r2, _0221E9C4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r2, [r4, r2]
    // add r3, r1, #0
    // add r0, r2, r0
    // add r2, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E9C8 ; =0x00001FA8
    // mov r1, #0x25
    // ldr r0, [r4, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r4]
    // str r0, [sp, #0x10]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // mov r1, #0
    // mov r2, #0x50
    // add r6, r0, #0
    // mul r2, r7
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E9CC ; =0x00001FAC
    // add r2, r4, r2
    // ldrh r2, [r2, #0x10]
    // ldr r0, [r4, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221E9CC ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r4, r0]
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, _0221E9C4 ; =0x00002070
    // add r5, #8
    // ldr r0, [r4, r0]
    // lsl r5, r5, #4
    // add r0, r0, r5
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r7
    // lsl r0, r0, #0x18
    // mov r1, #0
    // lsr r3, r0, #0x18
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E9D0 ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221E9C4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r4, r0]
    // add r0, r0, r5
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221E9C4 ; =0x00002070
    // ldr r1, [r4, r0]
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221E9C4 ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, r0, r5
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0221E9BC: .word 0x00002075
    // _0221E9C0: .word 0x000F0E00
    // _0221E9C4: .word 0x00002070
    // _0221E9C8: .word 0x00001FA8
    // _0221E9CC: .word 0x00001FAC
    // _0221E9D0: .word 0x00010200
    // TODO: decompile
}



void ov08_0221E9D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r1, #0
    // add r4, r0, #0
    // ldr r1, _0221EABC ; =0x00002075
    // mov r0, #0x16
    // ldrb r2, [r4, r1]
    // sub r1, #0xcd
    // mul r0, r2
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // ldr r0, [r4, r1]
    // mov r1, #0x26
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r2, _0221EAC0 ; =0x000F0E00
    // add r0, #0x21
    // str r2, [sp, #8]
    // ldr r2, _0221EAC4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r2, [r4, r2]
    // add r3, r1, #0
    // add r0, r2, r0
    // add r2, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221EAC8 ; =0x00001FA8
    // mov r1, #0x27
    // ldr r0, [r4, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r4]
    // str r0, [sp, #0x10]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // mov r1, #0
    // mov r2, #0x50
    // add r6, r0, #0
    // mul r2, r7
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221EACC ; =0x00001FAC
    // add r2, r4, r2
    // ldrh r2, [r2, #0x12]
    // ldr r0, [r4, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221EACC ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r4, r0]
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, _0221EAC4 ; =0x00002070
    // add r5, #9
    // ldr r0, [r4, r0]
    // lsl r5, r5, #4
    // add r0, r0, r5
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r7
    // lsl r0, r0, #0x18
    // mov r1, #0
    // lsr r3, r0, #0x18
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EAD0 ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221EAC4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r4, r0]
    // add r0, r0, r5
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221EAC4 ; =0x00002070
    // ldr r1, [r4, r0]
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221EAC4 ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, r0, r5
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _0221EABC: .word 0x00002075
    // _0221EAC0: .word 0x000F0E00
    // _0221EAC4: .word 0x00002070
    // _0221EAC8: .word 0x00001FA8
    // _0221EACC: .word 0x00001FAC
    // _0221EAD0: .word 0x00010200
    // TODO: decompile
}



void ov08_0221EAD4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // mov r0, #0x50
    // mul r0, r1
    // add r2, r5, #4
    // add r7, r2, r0
    // ldr r1, _0221EC54 ; =0x00002075
    // mov r0, #0x16
    // ldrb r2, [r5, r1]
    // sub r1, #0xcd
    // mul r0, r2
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [r5, r1]
    // mov r1, #0x1c
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EC58 ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221EC5C ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r3, r1, #0
    // add r0, #0xd0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _0221EC60 ; =0x00001FA8
    // mov r1, #0x1f
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x10]
    // mov r0, #0
    // ldr r1, [sp, #0x10]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // str r0, [sp, #0x14]
    // ldr r0, _0221EC5C ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x40
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // sub r0, r1, r0
    // lsl r0, r0, #0xf
    // lsr r6, r0, #0x10
    // add r0, r4, #4
    // mov r1, #0
    // lsl r4, r0, #4
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EC64 ; =0x00010200
    // add r3, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221EC5C ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // ldr r0, _0221EC60 ; =0x00001FA8
    // mov r1, #0x1d
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x18]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // str r0, [sp, #0x1c]
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221EC68 ; =0x00001FAC
    // ldrh r2, [r7, #0x10]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221EC68 ; =0x00001FAC
    // ldr r1, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x18]
    // bl StringExpandPlaceholders
    // mov r0, #0
    // ldr r1, [sp, #0x1c]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r3, r0, #0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EC64 ; =0x00010200
    // ldr r2, [sp, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, _0221EC5C ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // sub r3, r6, r3
    // add r0, r0, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, _0221EC60 ; =0x00001FA8
    // mov r1, #0x1e
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x20]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // mov r1, #0
    // str r0, [sp, #0x24]
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221EC68 ; =0x00001FAC
    // ldrh r2, [r7, #0x12]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221EC68 ; =0x00001FAC
    // ldr r1, [sp, #0x24]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x20]
    // bl StringExpandPlaceholders
    // mov r1, #0
    // ldr r3, [sp, #0x14]
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EC64 ; =0x00010200
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #8]
    // ldr r0, _0221EC5C ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r3, r6, r3
    // add r0, r0, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // ldr r0, [sp, #0x24]
    // bl String_Delete
    // ldr r0, _0221EC5C ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0xd0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221EC5C ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221EC54: .word 0x00002075
    // _0221EC58: .word 0x000F0E00
    // _0221EC5C: .word 0x00002070
    // _0221EC60: .word 0x00001FA8
    // _0221EC64: .word 0x00010200
    // _0221EC68: .word 0x00001FAC
    // TODO: decompile
}



void ov08_0221EC6C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _0221ECD8 ; =0x00002075
    // add r6, r1, #0
    // ldrb r1, [r5, r0]
    // ldr r3, [r5]
    // mov r0, #0x16
    // add r4, r1, #0
    // mul r4, r0
    // ldr r2, _0221ECDC ; =0x000002D2
    // ldr r3, [r3, #0xc]
    // mov r0, #1
    // mov r1, #0x1b
    // bl NewMsgDataFromNarc
    // mov r1, #0x50
    // mul r1, r6
    // add r1, r5, r1
    // ldrh r1, [r1, #0x1c]
    // add r7, r0, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r1, #0
    // add r0, r4, #2
    // lsl r4, r0, #4
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221ECE0 ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, _0221ECE4 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r3, r1, #0
    // add r0, r0, r4
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // ldr r0, _0221ECE4 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, r0, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221ECD8: .word 0x00002075
    // _0221ECDC: .word 0x000002D2
    // _0221ECE0: .word 0x00010200
    // _0221ECE4: .word 0x00002070
    // TODO: decompile
}



void ov08_0221ECE8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // ldr r2, _0221ED28 ; =0x00002070
    // lsl r4, r1, #4
    // ldr r5, [r0, r2]
    // sub r2, #0xc8
    // ldr r0, [r0, r2]
    // mov r1, #0x33
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221ED2C ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0221ED28: .word 0x00002070
    // _0221ED2C: .word 0x000F0E00
    // TODO: decompile
}



void ov08_0221ED30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r2, [sp, #0x10]
    // add r5, r0, #0
    // ldr r2, _0221EE0C ; =0x00002070
    // ldr r0, [sp, #0x10]
    // lsl r6, r1, #4
    // ldr r4, [r5, r2]
    // cmp r0, #0
    // bne _0221ED8A
    // sub r2, #0xc8
    // ldr r0, [r5, r2]
    // mov r1, #0x32
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // add r0, r4, r6
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r5
    // lsl r0, r0, #0x10
    // mov r1, #0
    // lsr r3, r0, #0x10
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EE10 ; =0x00010200
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // b _0221EE00
    // sub r2, #0xc8
    // ldr r0, [r5, r2]
    // mov r1, #0x34
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x14]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // mov r1, #0
    // add r7, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221EE14 ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221EE14 ; =0x00001FAC
    // ldr r2, [sp, #0x14]
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // add r0, r4, r6
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r5
    // lsl r0, r0, #0x10
    // mov r1, #0
    // lsr r3, r0, #0x10
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EE10 ; =0x00010200
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221EE0C: .word 0x00002070
    // _0221EE10: .word 0x00010200
    // _0221EE14: .word 0x00001FAC
    // TODO: decompile
}



void ov08_0221EE18(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // ldr r2, _0221EE58 ; =0x00002070
    // lsl r4, r1, #4
    // ldr r5, [r0, r2]
    // sub r2, #0xc8
    // ldr r0, [r0, r2]
    // mov r1, #0x30
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EE5C ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _0221EE58: .word 0x00002070
    // _0221EE5C: .word 0x000F0E00
    // TODO: decompile
}



void ov08_0221EE60(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r2, [sp, #0x10]
    // add r5, r0, #0
    // ldr r2, _0221EF3C ; =0x00002070
    // ldr r0, [sp, #0x10]
    // lsl r6, r1, #4
    // ldr r4, [r5, r2]
    // cmp r0, #1
    // bhi _0221EEBA
    // sub r2, #0xc8
    // ldr r0, [r5, r2]
    // mov r1, #0x32
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // add r0, r4, r6
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r5
    // lsl r0, r0, #0x10
    // mov r1, #0
    // lsr r3, r0, #0x10
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EF40 ; =0x00010200
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // b _0221EF30
    // sub r2, #0xc8
    // ldr r0, [r5, r2]
    // mov r1, #0x31
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x14]
    // ldr r1, [r1, #0xc]
    // mov r0, #8
    // bl String_New
    // mov r1, #0
    // add r7, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221EF44 ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221EF44 ; =0x00001FAC
    // ldr r2, [sp, #0x14]
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // add r0, r4, r6
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r5
    // lsl r0, r0, #0x10
    // mov r1, #0
    // lsr r3, r0, #0x10
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EF40 ; =0x00010200
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221EF3C: .word 0x00002070
    // _0221EF40: .word 0x00010200
    // _0221EF44: .word 0x00001FAC
    // TODO: decompile
}



void ov08_0221EF48(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r3, r0, #0
    // ldr r0, _0221EF9C ; =0x00002070
    // add r6, r2, #0
    // ldr r5, [r3, r0]
    // ldr r3, [r3]
    // lsl r4, r1, #4
    // ldr r2, _0221EFA0 ; =0x000002ED
    // ldr r3, [r3, #0xc]
    // mov r0, #1
    // mov r1, #0x1b
    // bl NewMsgDataFromNarc
    // add r1, r6, #0
    // add r7, r0, #0
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221EFA4 ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221EF9C: .word 0x00002070
    // _0221EFA0: .word 0x000002ED
    // _0221EFA4: .word 0x00010200
    // TODO: decompile
}



void ov08_0221EFA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r2, _0221F004 ; =0x00002070
    // lsl r4, r1, #4
    // ldr r5, [r0, r2]
    // sub r2, #0xc8
    // ldr r0, [r0, r2]
    // mov r1, #0x35
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r0, r5, r4
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r1, r0, r6
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // lsl r0, r0, #0xf
    // mov r1, #0
    // lsr r3, r0, #0x10
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F008 ; =0x000F0E00
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221F004: .word 0x00002070
    // _0221F008: .word 0x000F0E00
    // TODO: decompile
}



void ov08_0221F00C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // ldr r3, _0221F074 ; =0x00002070
    // lsl r4, r1, #4
    // ldr r5, [r0, r3]
    // cmp r2, #0
    // beq _0221F024
    // cmp r2, #1
    // beq _0221F032
    // cmp r2, #2
    // beq _0221F040
    // b _0221F04C
    // sub r3, #0xc8
    // ldr r0, [r0, r3]
    // mov r1, #0x36
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // b _0221F04C
    // sub r3, #0xc8
    // ldr r0, [r0, r3]
    // mov r1, #0x38
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // b _0221F04C
    // sub r3, #0xc8
    // ldr r0, [r0, r3]
    // mov r1, #0x37
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F078 ; =0x00010200
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r5, r4
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0221F074: .word 0x00002070
    // _0221F078: .word 0x00010200
    // TODO: decompile
}



void ov08_0221F07C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // ldr r0, _0221F1A0 ; =0x00002070
    // lsl r6, r1, #4
    // ldr r4, [r5, r0]
    // sub r0, #0xc8
    // ldr r0, [r5, r0]
    // mov r1, #0x2e
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x18]
    // mov r0, #0
    // ldr r1, [sp, #0x18]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // str r0, [sp, #0x1c]
    // add r0, r4, r6
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x18]
    // sub r0, r1, r0
    // lsr r7, r0, #1
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F1A4 ; =0x000F0E00
    // add r3, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, r6
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, _0221F1A8 ; =0x00001FA8
    // mov r1, #0x2c
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x20]
    // ldr r1, [r1, #0xc]
    // mov r0, #6
    // bl String_New
    // mov r1, #0
    // str r0, [sp, #0x24]
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221F1AC ; =0x00001FAC
    // ldr r2, [sp, #0x10]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221F1AC ; =0x00001FAC
    // ldr r1, [sp, #0x24]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x20]
    // bl StringExpandPlaceholders
    // mov r0, #0
    // ldr r1, [sp, #0x24]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r3, r0, #0
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F1A4 ; =0x000F0E00
    // ldr r2, [sp, #0x24]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // sub r3, r7, r3
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // ldr r0, [sp, #0x24]
    // bl String_Delete
    // ldr r0, _0221F1A8 ; =0x00001FA8
    // mov r1, #0x2d
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // ldr r1, [r5]
    // str r0, [sp, #0x28]
    // ldr r1, [r1, #0xc]
    // mov r0, #6
    // bl String_New
    // mov r1, #0
    // str r0, [sp, #0x2c]
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221F1AC ; =0x00001FAC
    // ldr r2, [sp, #0x14]
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, _0221F1AC ; =0x00001FAC
    // ldr r1, [sp, #0x2c]
    // ldr r0, [r5, r0]
    // ldr r2, [sp, #0x28]
    // bl StringExpandPlaceholders
    // mov r1, #0
    // ldr r3, [sp, #0x1c]
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F1A4 ; =0x000F0E00
    // ldr r2, [sp, #0x2c]
    // str r0, [sp, #8]
    // add r0, r4, r6
    // add r3, r7, r3
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x28]
    // bl String_Delete
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221F1A0: .word 0x00002070
    // _0221F1A4: .word 0x000F0E00
    // _0221F1A8: .word 0x00001FA8
    // _0221F1AC: .word 0x00001FAC
    // TODO: decompile
}



void ov08_0221F1B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // lsl r4, r1, #4
    // ldr r1, [r0]
    // ldr r2, _0221F218 ; =0x00002070
    // add r1, #0x34
    // ldrb r1, [r1]
    // ldr r5, [r0, r2]
    // cmp r1, #4
    // bne _0221F1D0
    // sub r2, #0xc8
    // ldr r0, [r0, r2]
    // mov r1, #0x3b
    // bl NewString_ReadMsgData
    // b _0221F1DA
    // sub r2, #0xc8
    // ldr r0, [r0, r2]
    // mov r1, #0x3a
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #4
    // add r1, r6, #0
    // mov r2, #0
    // bl FontID_String_GetWidth
    // add r7, r0, #0
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F21C ; =0x00070809
    // mov r3, #0x60
    // str r0, [sp, #8]
    // mov r0, #0
    // sub r3, r3, r7
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    // mov r1, #4
    // add r2, r6, #0
    // lsr r3, r3, #1
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221F218: .word 0x00002070
    // _0221F21C: .word 0x00070809
    // TODO: decompile
}



void ov08_0221F220(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r0, _0221F278 ; =0x0000207A
    // ldrb r1, [r4, r0]
    // cmp r1, #7
    // bne _0221F236
    // sub r0, #0xa
    // ldr r5, [r4, r0]
    // add r5, #0x80
    // b _0221F23C
    // sub r0, #0xa
    // ldr r5, [r4, r0]
    // add r5, #0x50
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221F27C ; =0x00001FA8
    // mov r1, #0x3c
    // ldr r0, [r4, r0]
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F280 ; =0x00010200
    // add r2, r4, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0221F278: .word 0x0000207A
    // _0221F27C: .word 0x00001FA8
    // _0221F280: .word 0x00010200
    // TODO: decompile
}



void ov08_0221F284(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // str r1, [sp, #0x10]
    // ldr r1, [r5]
    // ldr r0, _0221F3C0 ; =0x00002070
    // ldr r1, [r1, #0xc]
    // ldr r4, [r5, r0]
    // mov r0, #6
    // lsl r6, r2, #4
    // bl String_New
    // add r7, r0, #0
    // ldr r0, _0221F3C4 ; =0x00001FA8
    // mov r1, #0x2b
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x14]
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F3C8 ; =0x000F0E00
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #8]
    // mov r1, #0
    // add r0, r4, r6
    // mov r3, #0x28
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // ldr r0, _0221F3C4 ; =0x00001FA8
    // mov r1, #0x2e
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x18]
    // mov r0, #0
    // ldr r1, [sp, #0x18]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // str r0, [sp, #0x1c]
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F3C8 ; =0x000F0E00
    // ldr r2, [sp, #0x18]
    // str r0, [sp, #8]
    // mov r1, #0
    // add r0, r4, r6
    // mov r3, #0x50
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, _0221F3C4 ; =0x00001FA8
    // mov r1, #0x2d
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // mov r1, #0
    // str r0, [sp, #0x20]
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // ldr r0, _0221F3CC ; =0x00001FAC
    // ldrb r2, [r2, #3]
    // ldr r0, [r5, r0]
    // mov r3, #2
    // bl BufferIntegerAsString
    // ldr r0, _0221F3CC ; =0x00001FAC
    // ldr r2, [sp, #0x20]
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F3C8 ; =0x000F0E00
    // ldr r3, [sp, #0x1c]
    // str r0, [sp, #8]
    // mov r1, #0
    // add r3, #0x50
    // add r0, r4, r6
    // add r2, r7, #0
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x1c]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // ldr r0, _0221F3C4 ; =0x00001FA8
    // mov r1, #0x2c
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // mov r1, #0
    // str r0, [sp, #0x24]
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // ldr r0, _0221F3CC ; =0x00001FAC
    // ldrb r2, [r2, #2]
    // ldr r0, [r5, r0]
    // mov r3, #2
    // bl BufferIntegerAsString
    // ldr r0, _0221F3CC ; =0x00001FAC
    // ldr r2, [sp, #0x24]
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r5, r0, #0
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F3C8 ; =0x000F0E00
    // mov r3, #0x50
    // str r0, [sp, #8]
    // mov r1, #0
    // add r0, r4, r6
    // add r2, r7, #0
    // sub r3, r3, r5
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x24]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221F3C0: .word 0x00002070
    // _0221F3C4: .word 0x00001FA8
    // _0221F3C8: .word 0x000F0E00
    // _0221F3CC: .word 0x00001FAC
    // TODO: decompile
}



void ov08_0221F3D0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // str r1, [sp, #0x10]
    // ldr r1, [r5]
    // ldr r0, _0221F494 ; =0x00002070
    // ldr r1, [r1, #0xc]
    // ldr r4, [r5, r0]
    // mov r0, #6
    // lsl r6, r2, #4
    // bl String_New
    // str r0, [sp, #0x14]
    // ldr r0, _0221F498 ; =0x00001FA8
    // mov r1, #0x2b
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x18]
    // mov r0, #0
    // ldr r1, [sp, #0x18]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r7, r0, #0
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // add r7, #0x28
    // mov r0, #0x50
    // sub r0, r0, r7
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #0x10
    // lsl r2, r7, #0x10
    // str r0, [sp, #4]
    // add r0, r4, r6
    // mov r1, #0
    // lsr r2, r2, #0x10
    // mov r3, #0x18
    // bl FillWindowPixelRect
    // ldr r0, _0221F498 ; =0x00001FA8
    // mov r1, #0x2c
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r7, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // ldr r0, _0221F49C ; =0x00001FAC
    // ldrb r2, [r2, #2]
    // ldr r0, [r5, r0]
    // mov r3, #2
    // bl BufferIntegerAsString
    // ldr r0, _0221F49C ; =0x00001FAC
    // ldr r1, [sp, #0x14]
    // ldr r0, [r5, r0]
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // ldr r1, [sp, #0x14]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r5, r0, #0
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F4A0 ; =0x000F0E00
    // mov r3, #0x50
    // str r0, [sp, #8]
    // mov r1, #0
    // ldr r2, [sp, #0x14]
    // add r0, r4, r6
    // sub r3, r3, r5
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221F494: .word 0x00002070
    // _0221F498: .word 0x00001FA8
    // _0221F49C: .word 0x00001FAC
    // _0221F4A0: .word 0x000F0E00
    // TODO: decompile
}



void ov08_0221F4A4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, [r5]
    // mov r4, #0
    // ldr r0, [r0]
    // bl Party_GetCount
    // cmp r0, #0
    // ble _0221F52A
    // add r0, r4, #0
    // add r7, r5, #0
    // str r0, [sp, #8]
    // add r6, r5, #0
    // add r7, #0x1b
    // ldr r0, _0221F54C ; =0x00002070
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #8]
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldrh r0, [r6, #8]
    // cmp r0, #0
    // beq _0221F512
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #7
    // lsl r3, r4, #0x10
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #4
    // lsr r3, r3, #0x10
    // bl ov08_0221DDCC
    // ldrb r0, [r7]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _0221F4FE
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov08_0221F550
    // ldr r0, [r6, #4]
    // bl Pokemon_GetStatusIconId
    // cmp r0, #7
    // bne _0221F512
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // bl ov08_0221F5B0
    // ldr r0, [sp, #8]
    // add r6, #0x50
    // add r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // add r7, #0x50
    // ldr r0, [r0]
    // add r4, r4, #1
    // bl Party_GetCount
    // cmp r4, r0
    // blt _0221F4C2
    // ldr r0, [r5]
    // add r0, #0x35
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0221F540
    // add r0, r5, #0
    // mov r1, #7
    // bl ov08_0221E340
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // mov r1, #6
    // bl ov08_0221E340
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0221F54C: .word 0x00002070
    // TODO: decompile
}



void ov08_0221F550(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x18
    // str r0, [sp]
    // mov r0, #8
    // add r6, r1, #0
    // str r0, [sp, #4]
    // ldr r0, _0221F5AC ; =0x00002070
    // lsl r4, r6, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // add r0, r0, r4
    // mov r2, #0x38
    // mov r3, #0x20
    // bl FillWindowPixelRect
    // mov r2, #0x40
    // str r2, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // ldr r0, _0221F5AC ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // mov r3, #0x18
    // add r0, r0, r4
    // bl FillWindowPixelRect
    // mov r0, #0x20
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r6, #0
    // mov r3, #0x38
    // bl ov08_0221DFC8
    // mov r0, #0x18
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r6, #0
    // mov r3, #0x40
    // bl ov08_0221E048
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0221F5AC: .word 0x00002070
    // TODO: decompile
}



void ov08_0221F5B0(void) {
}



void ov08_0221F5D0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0221F654 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl FillWindowPixelBuffer
    // ldr r0, _0221F654 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r0, #0x10
    // bl FillWindowPixelBuffer
    // ldr r0, _0221F654 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r0, #0x20
    // bl FillWindowPixelBuffer
    // ldr r0, _0221F654 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r0, #0x30
    // bl FillWindowPixelBuffer
    // ldr r1, [r4]
    // add r0, r4, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221F658
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0xf
    // bl ov08_0221E3A4
    // ldr r0, [r4]
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r0, r4, r0
    // ldrb r0, [r0, #0x1b]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _0221F63E
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0x12
    // bl ov08_0221E3A4
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0x13
    // bl ov08_0221E3A4
    // pop {r4, pc}
    // ldr r0, _0221F654 ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, #0x20
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221F654 ; =0x00002070
    // ldr r0, [r4, r0]
    // add r0, #0x30
    // bl ScheduleWindowCopyToVram
    // pop {r4, pc}
    // _0221F654: .word 0x00002070
    // TODO: decompile
}



void ov08_0221F658(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // ldr r0, _0221F7A4 ; =0x00002070
    // add r6, r1, #0
    // ldr r0, [r4, r0]
    // ldr r1, [r4]
    // str r0, [sp, #0x18]
    // mov r0, #0x50
    // add r7, r6, #0
    // add r5, r4, #4
    // mul r7, r0
    // add r0, r5, r7
    // str r0, [sp, #0x14]
    // ldr r1, [r1, #0xc]
    // mov r0, #0xc
    // bl String_New
    // str r0, [sp, #0x10]
    // ldr r0, _0221F7A8 ; =0x00001FA8
    // ldr r1, _0221F7AC ; =ov08_02224FF4
    // lsl r2, r6, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r1, r2]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r0, [r5, r7]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _0221F7B0 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl BufferBoxMonNickname
    // ldr r0, _0221F7B0 ; =0x00001FAC
    // ldr r1, [sp, #0x10]
    // ldr r0, [r4, r0]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x14]
    // mov r5, #0
    // ldrb r0, [r0, #0x16]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // bne _0221F6EC
    // ldr r0, [sp, #0x14]
    // ldrb r0, [r0, #0x17]
    // lsl r1, r0, #0x18
    // lsr r1, r1, #0x1f
    // bne _0221F6EC
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1d
    // bne _0221F6DC
    // ldr r0, _0221F7A8 ; =0x00001FA8
    // mov r1, #0x10
    // ldr r0, [r4, r0]
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // b _0221F6EC
    // cmp r0, #1
    // bne _0221F6EC
    // ldr r0, _0221F7A8 ; =0x00001FA8
    // mov r1, #0x11
    // ldr r0, [r4, r0]
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // ldr r1, [sp, #0x10]
    // mov r0, #4
    // mov r2, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // cmp r5, #0
    // bne _0221F704
    // mov r7, #0
    // add r4, r7, #0
    // b _0221F714
    // mov r0, #0
    // add r1, r5, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // mov r4, #8
    // ldr r0, [sp, #0x18]
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r6
    // sub r0, r0, r7
    // sub r1, r0, r4
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // lsl r0, r0, #0x17
    // lsr r7, r0, #0x18
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F7B4 ; =0x00070809
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // mov r1, #4
    // add r3, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // cmp r5, #0
    // beq _0221F79A
    // ldr r0, [sp, #0x14]
    // ldrb r0, [r0, #0x17]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1d
    // bne _0221F778
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F7B8 ; =0x000A0B00
    // add r3, r7, r6
    // str r0, [sp, #8]
    // mov r1, #0
    // ldr r0, [sp, #0x18]
    // add r2, r5, #0
    // add r3, r4, r3
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // b _0221F794
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221F7BC ; =0x000C0D00
    // add r3, r7, r6
    // str r0, [sp, #8]
    // mov r1, #0
    // ldr r0, [sp, #0x18]
    // add r2, r5, #0
    // add r3, r4, r3
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0221F7A4: .word 0x00002070
    // _0221F7A8: .word 0x00001FA8
    // _0221F7AC: .word ov08_02224FF4
    // _0221F7B0: .word 0x00001FAC
    // _0221F7B4: .word 0x00070809
    // _0221F7B8: .word 0x000A0B00
    // _0221F7BC: .word 0x000C0D00
    // TODO: decompile
}



void ov08_0221F7C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r0, #0
    // ldr r0, _0221F8F0 ; =0x00002075
    // mov r1, #6
    // ldrb r2, [r5, r0]
    // sub r0, r0, #5
    // mul r1, r2
    // lsl r1, r1, #0x10
    // lsr r6, r1, #0x10
    // ldr r1, [r5, r0]
    // lsl r0, r6, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, #1
    // lsl r0, r0, #4
    // str r0, [sp, #0x18]
    // ldr r0, _0221F8F4 ; =0x00002070
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0x18]
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, #2
    // lsl r0, r0, #4
    // str r0, [sp, #0x14]
    // ldr r0, _0221F8F4 ; =0x00002070
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0x14]
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, #3
    // lsl r0, r0, #4
    // str r0, [sp, #0x10]
    // ldr r0, _0221F8F4 ; =0x00002070
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, #4
    // lsl r0, r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, _0221F8F4 ; =0x00002070
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221F8F4 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x50
    // bl FillWindowPixelBuffer
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r3, [r5]
    // add r0, r5, #0
    // ldrb r3, [r3, #0x11]
    // add r1, r6, #0
    // bl ov08_0221DDCC
    // add r0, r5, #0
    // str r0, [sp, #0x1c]
    // add r0, #0x34
    // mov r4, #0
    // add r7, r6, #1
    // str r0, [sp, #0x1c]
    // ldr r0, [r5]
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #0x1c]
    // lsl r1, r4, #3
    // add r0, r0, r2
    // str r1, [sp, #0x20]
    // ldrh r1, [r0, r1]
    // str r0, [sp, #0x24]
    // cmp r1, #0
    // beq _0221F89C
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #7
    // str r0, [sp, #4]
    // ldr r0, _0221F8F8 ; =0x00070809
    // ldr r3, _0221F8FC ; =ov08_02224FE0
    // lsl r6, r4, #2
    // str r0, [sp, #8]
    // ldr r3, [r3, r6]
    // add r0, r5, #0
    // add r2, r7, r4
    // bl ov08_0221E244
    // ldr r2, [sp, #0x20]
    // ldr r1, [sp, #0x24]
    // add r0, r5, #0
    // add r1, r1, r2
    // add r2, r7, r4
    // bl ov08_0221F284
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #4
    // blo _0221F85A
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0x12
    // bl ov08_0221E3A4
    // ldr r0, _0221F8F4 ; =0x00002070
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0x18]
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221F8F4 ; =0x00002070
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0x14]
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221F8F4 ; =0x00002070
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221F8F4 ; =0x00002070
    // ldr r1, [r5, r0]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldr r1, _0221F8F0 ; =0x00002075
    // mov r0, #1
    // ldrb r2, [r5, r1]
    // eor r0, r2
    // strb r0, [r5, r1]
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221F8F0: .word 0x00002075
    // _0221F8F4: .word 0x00002070
    // _0221F8F8: .word 0x00070809
    // _0221F8FC: .word ov08_02224FE0
    // TODO: decompile
}



void ov08_0221F900(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _0221FB10 ; =0x00002075
    // mov r1, #0x16
    // ldrb r2, [r5, r0]
    // sub r0, r0, #5
    // add r4, r2, #0
    // mul r4, r1
    // ldr r1, [r5, r0]
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0xe0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0xf0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0xd0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // mov r0, #0x15
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // lsl r0, r4, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #0
    // add r0, #0xa
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #0
    // add r0, #0xb
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #0
    // add r0, #0xc
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #5
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #6
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #7
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #0
    // add r0, #8
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #0
    // add r0, #9
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #4
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #1
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #2
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FB14 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #3
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r2, #0
    // str r2, [sp]
    // str r2, [sp, #4]
    // ldr r3, [r5]
    // add r0, r5, #0
    // ldrb r3, [r3, #0x11]
    // add r1, r4, #0
    // bl ov08_0221DDCC
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221EAD4
    // mov r3, #0
    // str r3, [sp]
    // ldr r2, [r5]
    // add r1, r4, #0
    // ldrb r2, [r2, #0x11]
    // add r0, r5, #0
    // add r1, #0xa
    // bl ov08_0221E048
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221E408
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221E5DC
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221E6D8
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221E7D4
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221E8D4
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221E9D4
    // ldr r2, [r5]
    // add r0, r5, #0
    // ldrb r2, [r2, #0x11]
    // add r1, r4, #1
    // bl ov08_0221E120
    // ldr r2, [r5]
    // add r0, r5, #0
    // ldrb r2, [r2, #0x11]
    // add r1, r4, #3
    // bl ov08_0221E1A8
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221EC6C
    // add r0, r5, #0
    // mov r1, #0x15
    // mov r2, #0x13
    // bl ov08_0221E3A4
    // ldr r1, _0221FB10 ; =0x00002075
    // mov r0, #1
    // ldrb r2, [r5, r1]
    // eor r0, r2
    // strb r0, [r5, r1]
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _0221FB10: .word 0x00002075
    // _0221FB14: .word 0x00002070
    // TODO: decompile
}



void ov08_0221FB18(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0221FC6C ; =0x00002075
    // mov r1, #0xb
    // ldrb r2, [r5, r0]
    // sub r0, r0, #5
    // ldr r0, [r5, r0]
    // add r4, r2, #0
    // mul r4, r1
    // add r0, #0x60
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x70
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x80
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x90
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0xa0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #1
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // ldr r1, [r5, r0]
    // lsl r0, r4, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #2
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #3
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #5
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FC70 ; =0x00002070
    // ldr r1, [r5, r0]
    // add r0, r4, #4
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5]
    // add r2, r5, #0
    // ldrb r3, [r0, #0x11]
    // add r0, #0x34
    // ldrb r0, [r0]
    // mov r1, #0x50
    // add r2, #0x34
    // mul r1, r3
    // add r1, r2, r1
    // lsl r0, r0, #3
    // add r7, r1, r0
    // mov r2, #0
    // str r2, [sp]
    // add r0, r5, #0
    // mov r1, #6
    // str r2, [sp, #4]
    // bl ov08_0221DDCC
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #7
    // add r3, r2, #0
    // bl ov08_0221E2E8
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0221FC74 ; =0x000F0E00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // ldr r3, [r5]
    // ldrh r1, [r7]
    // add r3, #0x34
    // ldrb r3, [r3]
    // add r0, r5, #0
    // lsl r6, r3, #2
    // ldr r3, _0221FC78 ; =ov08_02224FE0
    // ldr r3, [r3, r6]
    // bl ov08_0221E244
    // add r0, r5, #0
    // mov r1, #8
    // bl ov08_0221ECE8
    // ldrb r2, [r7, #6]
    // add r0, r5, #0
    // add r1, r4, #2
    // bl ov08_0221ED30
    // add r0, r5, #0
    // mov r1, #9
    // bl ov08_0221EE18
    // ldrb r2, [r7, #7]
    // add r0, r5, #0
    // add r1, r4, #3
    // bl ov08_0221EE60
    // ldrh r2, [r7]
    // add r0, r5, #0
    // add r1, r4, #4
    // bl ov08_0221EF48
    // add r0, r5, #0
    // mov r1, #0xa
    // bl ov08_0221EFA8
    // ldrb r2, [r7, #5]
    // add r0, r5, #0
    // add r1, r4, #5
    // bl ov08_0221F00C
    // ldrb r2, [r7, #2]
    // ldrb r3, [r7, #3]
    // add r0, r5, #0
    // add r1, r4, #1
    // bl ov08_0221F07C
    // ldr r1, _0221FC6C ; =0x00002075
    // mov r0, #1
    // ldrb r2, [r5, r1]
    // eor r0, r2
    // strb r0, [r5, r1]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0221FC6C: .word 0x00002075
    // _0221FC70: .word 0x00002070
    // _0221FC74: .word 0x000F0E00
    // _0221FC78: .word ov08_02224FE0
    // TODO: decompile
}



void ov08_0221FC7C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, _0221FD98 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FD98 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x10
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FD98 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x20
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FD98 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x30
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FD98 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x40
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FD98 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x50
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r3, [r5]
    // add r0, r5, #0
    // ldrb r3, [r3, #0x11]
    // add r2, r1, #0
    // bl ov08_0221DDCC
    // add r0, r5, #0
    // mov r6, #0
    // str r0, [sp, #0x10]
    // add r0, #0x34
    // ldr r7, _0221FD9C ; =ov08_02224FE0
    // add r4, r6, #0
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // ldrh r1, [r0, r4]
    // str r0, [sp, #0xc]
    // cmp r1, #0
    // beq _0221FD20
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #7
    // str r0, [sp, #4]
    // ldr r0, _0221FDA0 ; =0x00070809
    // add r2, r6, #1
    // str r0, [sp, #8]
    // ldr r3, [r7]
    // add r0, r5, #0
    // bl ov08_0221E244
    // ldr r1, [sp, #0xc]
    // add r0, r5, #0
    // add r1, r1, r4
    // add r2, r6, #1
    // bl ov08_0221F284
    // add r6, r6, #1
    // add r4, #8
    // add r7, r7, #4
    // cmp r6, #4
    // blo _0221FCE8
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #7
    // str r0, [sp, #4]
    // ldr r0, _0221FDA0 ; =0x00070809
    // mov r2, #5
    // str r0, [sp, #8]
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrh r1, [r1, #0x24]
    // mov r3, #0x49
    // bl ov08_0221E244
    // ldr r0, [r5]
    // mov r1, #5
    // ldrh r0, [r0, #0x24]
    // bl GetMoveAttr
    // add r1, sp, #0x14
    // strb r0, [r1, #2]
    // ldrb r0, [r1, #2]
    // mov r2, #5
    // strb r0, [r1, #3]
    // add r0, r5, #0
    // add r1, sp, #0x14
    // bl ov08_0221F284
    // ldr r0, _0221FD98 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x10
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221FD98 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x20
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221FD98 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x30
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221FD98 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x40
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0221FD98 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x50
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221FD98: .word 0x00002070
    // _0221FD9C: .word ov08_02224FE0
    // _0221FDA0: .word 0x00070809
    // TODO: decompile
}



void ov08_0221FDA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x20
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x30
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x10
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x40
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x60
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x50
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x70
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x90
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0xa0
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x80
    // bl FillWindowPixelBuffer
    // ldr r0, _0221FF64 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0xb0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r3, [r5]
    // add r0, r5, #0
    // ldrb r3, [r3, #0x11]
    // add r2, r1, #0
    // bl ov08_0221DDCC
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #2
    // add r3, r2, #0
    // bl ov08_0221E2E8
    // add r0, r5, #0
    // mov r1, #4
    // bl ov08_0221ECE8
    // add r0, r5, #0
    // mov r1, #5
    // bl ov08_0221EE18
    // add r0, r5, #0
    // mov r1, #9
    // bl ov08_0221EFA8
    // ldr r1, [r5]
    // add r0, r1, #0
    // add r0, #0x34
    // ldrb r3, [r0]
    // cmp r3, #4
    // bhs _0221FEE0
    // ldrb r1, [r1, #0x11]
    // add r2, r5, #0
    // mov r0, #0x50
    // add r2, #0x34
    // mul r0, r1
    // add r7, r2, r0
    // lsl r0, r3, #3
    // str r0, [sp, #0xc]
    // add r4, r7, r0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0221FF68 ; =0x000F0E00
    // lsl r6, r3, #2
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r3, _0221FF6C ; =ov08_02224FE0
    // ldrh r1, [r7, r1]
    // ldr r3, [r3, r6]
    // add r0, r5, #0
    // mov r2, #1
    // bl ov08_0221E244
    // ldrb r2, [r4, #6]
    // add r0, r5, #0
    // mov r1, #6
    // bl ov08_0221ED30
    // ldrb r2, [r4, #7]
    // add r0, r5, #0
    // mov r1, #7
    // bl ov08_0221EE60
    // ldr r2, [sp, #0xc]
    // add r0, r5, #0
    // ldrh r2, [r7, r2]
    // mov r1, #8
    // bl ov08_0221EF48
    // ldrb r2, [r4, #5]
    // add r0, r5, #0
    // mov r1, #0xa
    // bl ov08_0221F00C
    // ldrb r2, [r4, #2]
    // ldrb r3, [r4, #3]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov08_0221F07C
    // b _0221FF56
    // ldrh r0, [r1, #0x24]
    // mov r1, #5
    // bl GetMoveAttr
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0221FF68 ; =0x000F0E00
    // mov r2, #1
    // str r0, [sp, #8]
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrh r1, [r1, #0x24]
    // mov r3, #0x49
    // bl ov08_0221E244
    // ldr r2, [r5]
    // add r0, r5, #0
    // ldrh r2, [r2, #0x24]
    // mov r1, #8
    // bl ov08_0221EF48
    // ldr r0, [r5]
    // mov r1, #4
    // ldrh r0, [r0, #0x24]
    // bl GetMoveAttr
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #6
    // bl ov08_0221ED30
    // ldr r0, [r5]
    // mov r1, #2
    // ldrh r0, [r0, #0x24]
    // bl GetMoveAttr
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #7
    // bl ov08_0221EE60
    // ldr r0, [r5]
    // mov r1, #1
    // ldrh r0, [r0, #0x24]
    // bl GetMoveAttr
    // add r2, r0, #0
    // add r0, r5, #0
    // mov r1, #0xa
    // bl ov08_0221F00C
    // add r0, r5, #0
    // mov r1, #3
    // add r2, r4, #0
    // add r3, r4, #0
    // bl ov08_0221F07C
    // add r0, r5, #0
    // mov r1, #0xb
    // bl ov08_0221F1B0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221FF64: .word 0x00002070
    // _0221FF68: .word 0x000F0E00
    // _0221FF6C: .word ov08_02224FE0
    // TODO: decompile
}



void ov08_0221FF70(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, _02220058 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl FillWindowPixelBuffer
    // ldr r0, _02220058 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x10
    // bl FillWindowPixelBuffer
    // ldr r0, _02220058 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x20
    // bl FillWindowPixelBuffer
    // ldr r0, _02220058 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x30
    // bl FillWindowPixelBuffer
    // ldr r0, _02220058 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x40
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r3, [r5]
    // add r0, r5, #0
    // ldrb r3, [r3, #0x11]
    // add r2, r1, #0
    // bl ov08_0221DDCC
    // add r0, r5, #0
    // mov r6, #0
    // str r0, [sp, #0x10]
    // add r0, #0x34
    // ldr r7, _0222005C ; =ov08_02224FE0
    // add r4, r6, #0
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #0x10]
    // add r0, r0, r2
    // ldrh r1, [r0, r4]
    // str r0, [sp, #0xc]
    // cmp r1, #0
    // beq _02220008
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #7
    // str r0, [sp, #4]
    // ldr r0, _02220060 ; =0x00070809
    // add r2, r6, #1
    // str r0, [sp, #8]
    // ldr r3, [r7]
    // add r0, r5, #0
    // bl ov08_0221E244
    // ldr r1, [sp, #0xc]
    // add r0, r5, #0
    // add r1, r1, r4
    // add r2, r6, #1
    // bl ov08_0221F284
    // add r6, r6, #1
    // add r4, #8
    // add r7, r7, #4
    // cmp r6, #4
    // blo _0221FFD0
    // ldr r2, [r5]
    // mov r1, #0x25
    // ldrh r0, [r2, #0x22]
    // ldr r2, [r2, #0xc]
    // bl GetItemAttr
    // cmp r0, #0
    // bne _0222002A
    // add r0, r5, #0
    // mov r1, #0x5e
    // bl ov08_0221E340
    // ldr r0, _02220058 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x10
    // bl ScheduleWindowCopyToVram
    // ldr r0, _02220058 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x20
    // bl ScheduleWindowCopyToVram
    // ldr r0, _02220058 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x30
    // bl ScheduleWindowCopyToVram
    // ldr r0, _02220058 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x40
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02220058: .word 0x00002070
    // _0222005C: .word ov08_02224FE0
    // _02220060: .word 0x00070809
    // TODO: decompile
}



void ov08_02220064(void) {
}



void ov08_02220084(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _022201B0 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl FillWindowPixelBuffer
    // ldr r0, _022201B0 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x20
    // bl FillWindowPixelBuffer
    // ldr r0, _022201B0 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x30
    // bl FillWindowPixelBuffer
    // ldr r0, _022201B0 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x10
    // bl FillWindowPixelBuffer
    // ldr r0, _022201B0 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x40
    // bl FillWindowPixelBuffer
    // ldr r0, _022201B0 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x50
    // bl FillWindowPixelBuffer
    // ldr r0, _022201B0 ; =0x00002070
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r0, #0x60
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r3, [r5]
    // add r0, r5, #0
    // ldrb r3, [r3, #0x11]
    // add r2, r1, #0
    // bl ov08_0221DDCC
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #2
    // add r3, r2, #0
    // bl ov08_0221E2E8
    // ldr r0, _022201B4 ; =0x00001FA8
    // mov r1, #0x39
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022201B8 ; =0x000F0E00
    // add r2, r4, #0
    // str r0, [sp, #8]
    // ldr r0, _022201B0 ; =0x00002070
    // str r1, [sp, #0xc]
    // ldr r0, [r5, r0]
    // add r3, r1, #0
    // add r0, #0x40
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, _022201B0 ; =0x00002070
    // ldr r0, [r5, r0]
    // add r0, #0x40
    // bl ScheduleWindowCopyToVram
    // ldr r1, [r5]
    // add r0, r1, #0
    // add r0, #0x34
    // ldrb r3, [r0]
    // cmp r3, #4
    // bhs _02220176
    // ldrb r1, [r1, #0x11]
    // add r2, r5, #0
    // mov r0, #0x50
    // mul r0, r1
    // add r2, #0x34
    // add r2, r2, r0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _022201B8 ; =0x000F0E00
    // lsl r1, r3, #3
    // str r0, [sp, #8]
    // lsl r6, r3, #2
    // ldr r3, _022201BC ; =ov08_02224FE0
    // add r4, r2, r1
    // ldrh r1, [r2, r1]
    // ldr r3, [r3, r6]
    // add r0, r5, #0
    // mov r2, #1
    // bl ov08_0221E244
    // ldrb r2, [r4, #2]
    // ldrb r3, [r4, #3]
    // add r0, r5, #0
    // mov r1, #3
    // bl ov08_0221F07C
    // b _022201A4
    // ldrh r0, [r1, #0x24]
    // mov r1, #5
    // bl GetMoveAttr
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _022201B8 ; =0x000F0E00
    // mov r2, #1
    // str r0, [sp, #8]
    // ldr r1, [r5]
    // add r0, r5, #0
    // ldrh r1, [r1, #0x24]
    // mov r3, #0x49
    // bl ov08_0221E244
    // add r0, r5, #0
    // mov r1, #3
    // add r2, r4, #0
    // add r3, r4, #0
    // bl ov08_0221F07C
    // add r0, r5, #0
    // mov r1, #6
    // bl ov08_0221F1B0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _022201B0: .word 0x00002070
    // _022201B4: .word 0x00001FA8
    // _022201B8: .word 0x000F0E00
    // _022201BC: .word ov08_02224FE0
    // TODO: decompile
}



void ov08_022201C0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _022201E4 ; =0x00002060
    // mov r1, #1
    // add r0, r4, r0
    // add r2, r1, #0
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // ldr r0, _022201E4 ; =0x00002060
    // mov r1, #0xf
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // bl ov08_022201E8
    // pop {r4, pc}
    // _022201E4: .word 0x00002060
    // TODO: decompile
}



void ov08_022201E8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // bl TextFlags_SetCanABSpeedUpPrint
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetTextFrameDelay
    // mov r3, #0
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r2, _0222021C ; =0x00002060
    // str r3, [sp, #8]
    // add r0, r4, r2
    // sub r2, #0xb0
    // ldr r2, [r4, r2]
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _02220220 ; =0x0000207B
    // strb r0, [r4, r1]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0222021C: .word 0x00002060
    // _02220220: .word 0x0000207B
    // TODO: decompile
}



void ov08_02220224(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // ldrh r0, [r0, #0x22]
    // ldr r2, [r2, #0xc]
    // bl LoadItemDataOrGfx
    // ldr r2, [sp, #0xc]
    // add r6, r0, #0
    // ldrb r3, [r2, #0x11]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r2, r2, r3
    // add r2, #0x2c
    // ldrb r2, [r2]
    // ldr r0, [r0, #8]
    // ldr r1, [r1, #0x28]
    // bl BattleSystem_GetPartyMon
    // mov r1, #0xa3
    // mov r2, #0
    // add r7, r0, #0
    // bl GetMonData
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // add r0, r6, #0
    // mov r1, #0xf
    // mov r4, #0
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _02220278
    // mov r0, #1
    // orr r0, r4
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r6, #0
    // mov r1, #0x10
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _0222028C
    // mov r0, #2
    // orr r0, r4
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r6, #0
    // mov r1, #0x11
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _022202A0
    // mov r0, #4
    // orr r0, r4
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r6, #0
    // mov r1, #0x12
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _022202B4
    // mov r0, #8
    // orr r0, r4
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r6, #0
    // mov r1, #0x13
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _022202C8
    // mov r0, #0x10
    // orr r0, r4
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r6, #0
    // mov r1, #0x14
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _022202DC
    // mov r0, #0x20
    // orr r0, r4
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r6, #0
    // mov r1, #0x15
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _022202F0
    // mov r0, #0x40
    // orr r0, r4
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, [sp, #0xc]
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r0, r5, r0
    // ldrh r1, [r0, #0x14]
    // cmp r1, #0
    // bne _0222033A
    // ldr r0, [sp, #8]
    // cmp r0, #0
    // beq _0222033A
    // ldr r0, _02220574 ; =0x00001FA8
    // mov r1, #0x58
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // b _0222056A
    // ldr r0, [sp, #8]
    // cmp r0, r1
    // beq _02220396
    // ldr r0, _02220574 ; =0x00001FA8
    // mov r1, #0x52
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #1
    // ldr r2, [sp, #0xc]
    // str r1, [sp, #4]
    // ldrb r3, [r2, #0x11]
    // mov r2, #0x50
    // ldr r0, _02220578 ; =0x00001FAC
    // mul r2, r3
    // add r2, r5, r2
    // ldrh r3, [r2, #0x14]
    // ldr r2, [sp, #8]
    // ldr r0, [r5, r0]
    // sub r2, r2, r3
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // b _0222056A
    // add r0, r6, #0
    // mov r1, #0x24
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // bne _022203AE
    // add r0, r6, #0
    // mov r1, #0x25
    // bl GetItemAttr_PreloadedItemData
    // cmp r0, #0
    // beq _022203BE
    // ldr r2, _02220574 ; =0x00001FA8
    // mov r1, #0x57
    // ldr r0, [r5, r2]
    // add r2, #8
    // ldr r2, [r5, r2]
    // bl ReadMsgDataIntoString
    // b _0222056A
    // cmp r4, #1
    // ldr r0, _02220574 ; =0x00001FA8
    // bne _022203F6
    // ldr r0, [r5, r0]
    // mov r1, #0x5c
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // b _0222056A
    // cmp r4, #2
    // bne _0222042C
    // ldr r0, [r5, r0]
    // mov r1, #0x53
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // b _0222056A
    // cmp r4, #4
    // bne _02220462
    // ldr r0, [r5, r0]
    // mov r1, #0x55
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // b _0222056A
    // cmp r4, #8
    // bne _02220498
    // ldr r0, [r5, r0]
    // mov r1, #0x56
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // b _0222056A
    // cmp r4, #0x10
    // bne _022204CE
    // ldr r0, [r5, r0]
    // mov r1, #0x54
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // b _0222056A
    // cmp r4, #0x20
    // bne _02220504
    // ldr r0, [r5, r0]
    // mov r1, #0x5a
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // b _0222056A
    // cmp r4, #0x40
    // bne _0222053A
    // ldr r0, [r5, r0]
    // mov r1, #0x5b
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // b _0222056A
    // ldr r0, [r5, r0]
    // mov r1, #0x59
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _02220578 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r1, _02220578 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl Heap_Free
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02220574: .word 0x00001FA8
    // _02220578: .word 0x00001FAC
    // TODO: decompile
}



void ov08_0222057C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r3, [r5]
    // ldrb r2, [r3, #0x11]
    // ldr r0, [r3, #8]
    // ldr r1, [r3, #0x28]
    // add r2, r3, r2
    // add r2, #0x2c
    // ldrb r2, [r2]
    // bl BattleSystem_GetPartyMon
    // add r6, r0, #0
    // ldr r0, _022205D4 ; =0x00001FA8
    // mov r1, #0x5f
    // ldr r0, [r5, r0]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r6, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _022205D8 ; =0x00001FAC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonNickname
    // ldr r0, _022205D8 ; =0x00001FAC
    // ldr r2, _022205DC ; =MOVE_EMBARGO
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl BufferMoveName
    // ldr r1, _022205D8 ; =0x00001FAC
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // pop {r4, r5, r6, pc}
    // _022205D4: .word 0x00001FA8
    // _022205D8: .word 0x00001FAC
    // _022205DC: .word MOVE_EMBARGO
    // TODO: decompile
}



void ov08_022205E0(void) {
    ov08_0222061C();
    ov08_02220668(r4);
    ov08_02220750(r4);
    ov08_02220800(r4);
    ov08_02220878(r4);
    ov08_02220928(r4);
    ov08_02220A28(r4);
    ov08_0222162C(r4);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}



void ov08_0222061C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // ldr r3, _02220660 ; =ov08_0222541C
    // add r2, sp, #0
    // add r5, r0, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetSpriteSystem
    // add r4, r0, #0
    // bl SpriteManager_New
    // ldr r1, _02220664 ; =0x00001FB4
    // mov r2, #0x2b
    // str r0, [r5, r1]
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // bl SpriteSystem_InitSprites
    // ldr r1, _02220664 ; =0x00001FB4
    // add r0, r4, #0
    // ldr r1, [r5, r1]
    // add r2, sp, #0
    // bl SpriteSystem_InitManagerWithCapacities
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // nop
    // _02220660: .word ov08_0222541C
    // _02220664: .word 0x00001FB4
    // TODO: decompile
}



void ov08_02220668(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // ldr r1, [r6]
    // mov r0, #0x14
    // ldr r1, [r1, #0xc]
    // bl NARC_New
    // add r7, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetSpriteSystem
    // str r0, [sp, #0x18]
    // bl sub_02074490
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r1, #3
    // str r1, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _02220748 ; =0x0000B007
    // ldr r3, _0222074C ; =0x00001FB4
    // str r0, [sp, #0x14]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // ldr r2, [sp, #0x18]
    // ldr r3, [r6, r3]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // bl sub_02074498
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02220748 ; =0x0000B007
    // ldr r1, _0222074C ; =0x00001FB4
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r1, [r6, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // bl sub_020744A4
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02220748 ; =0x0000B007
    // ldr r1, _0222074C ; =0x00001FB4
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r1, [r6, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r4, #0
    // add r5, r6, #0
    // ldrh r0, [r5, #8]
    // cmp r0, #0
    // beq _0222070E
    // ldr r0, [r5, #4]
    // bl Pokemon_GetIconNaix
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _02220748 ; =0x0000B007
    // ldr r1, _0222074C ; =0x00001FB4
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // ldr r1, [r6, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // b _02220734
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // bl GetMonIconNaixEx
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _02220748 ; =0x0000B007
    // ldr r1, _0222074C ; =0x00001FB4
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // ldr r1, [r6, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // add r4, r4, #1
    // add r5, #0x50
    // cmp r4, #6
    // blo _022206E4
    // add r0, r7, #0
    // bl NARC_Delete
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02220748: .word 0x0000B007
    // _0222074C: .word 0x00001FB4
    // TODO: decompile
}



void ov08_02220750(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetSpriteSystem
    // ldr r1, [r5]
    // add r4, r0, #0
    // ldr r1, [r1, #0xc]
    // mov r0, #0x27
    // bl NARC_New
    // add r6, r0, #0
    // bl sub_0208AD58
    // str r6, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _022207F4 ; =0x0000B008
    // ldr r3, _022207F8 ; =0x00001FB4
    // str r0, [sp, #0x14]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [r5, r3]
    // mov r1, #3
    // add r2, r4, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // bl sub_0208AD5C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022207F4 ; =0x0000B008
    // ldr r1, _022207F8 ; =0x00001FB4
    // str r0, [sp, #4]
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // bl sub_0208AD60
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022207F4 ; =0x0000B008
    // ldr r1, _022207F8 ; =0x00001FB4
    // str r0, [sp, #4]
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // bl sub_0208AD54
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _022207FC ; =0x0000B00D
    // ldr r1, _022207F8 ; =0x00001FB4
    // str r0, [sp, #8]
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // add r2, r6, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // add r0, r6, #0
    // bl NARC_Delete
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // nop
    // _022207F4: .word 0x0000B008
    // _022207F8: .word 0x00001FB4
    // _022207FC: .word 0x0000B00D
    // TODO: decompile
}



void ov08_02220800(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetSpriteSystem
    // add r6, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, _02220868 ; =0x0000B009
    // ldr r3, _0222086C ; =0x00001FB4
    // str r0, [sp, #4]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [r5, r3]
    // mov r1, #3
    // add r2, r6, #0
    // bl sub_02077720
    // ldr r1, _0222086C ; =0x00001FB4
    // ldr r2, _02220868 ; =0x0000B009
    // ldr r1, [r5, r1]
    // add r0, r6, #0
    // add r3, r2, #0
    // bl sub_0207775C
    // ldr r4, _02220870 ; =0x0000B00E
    // add r7, r4, #6
    // ldr r1, _0222086C ; =0x00001FB4
    // str r4, [sp]
    // ldr r1, [r5, r1]
    // add r0, r6, #0
    // mov r2, #2
    // mov r3, #0
    // bl sub_020776B8
    // add r4, r4, #1
    // cmp r4, r7
    // bls _0222083C
    // ldr r0, _02220874 ; =0x0000B015
    // ldr r1, _0222086C ; =0x00001FB4
    // str r0, [sp]
    // ldr r1, [r5, r1]
    // add r0, r6, #0
    // mov r2, #2
    // mov r3, #0
    // bl sub_02077834
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02220868: .word 0x0000B009
    // _0222086C: .word 0x00001FB4
    // _02220870: .word 0x0000B00E
    // _02220874: .word 0x0000B015
    // TODO: decompile
}



void ov08_02220878(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x15
    // ldr r1, [r1, #0xc]
    // bl NARC_New
    // add r4, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetSpriteSystem
    // add r6, r0, #0
    // bl sub_0207CAA0
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _0222091C ; =0x0000B00A
    // ldr r3, _02220920 ; =0x00001FB4
    // str r0, [sp, #0x14]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [r5, r3]
    // mov r1, #3
    // add r2, r6, #0
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // bl sub_0207CAA4
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222091C ; =0x0000B00A
    // ldr r1, _02220920 ; =0x00001FB4
    // str r0, [sp, #4]
    // ldr r1, [r5, r1]
    // add r0, r6, #0
    // add r2, r4, #0
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // bl sub_0207CAA8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0222091C ; =0x0000B00A
    // ldr r1, _02220920 ; =0x00001FB4
    // str r0, [sp, #4]
    // ldr r1, [r5, r1]
    // add r0, r6, #0
    // add r2, r4, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // bl sub_0207CA9C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _02220924 ; =0x0000B016
    // ldr r1, _02220920 ; =0x00001FB4
    // str r0, [sp, #8]
    // ldr r1, [r5, r1]
    // add r0, r6, #0
    // add r2, r4, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // nop
    // _0222091C: .word 0x0000B00A
    // _02220920: .word 0x00001FB4
    // _02220924: .word 0x0000B016
    // TODO: decompile
}



void ov08_02220928(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetSpriteSystem
    // add r4, r0, #0
    // mov r0, #0x47
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _022209AC ; =0x0000B00B
    // ldr r3, _022209B0 ; =0x00001FB4
    // str r0, [sp, #0x14]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [r5, r3]
    // mov r1, #3
    // add r2, r4, #0
    // bl SpriteSystem_LoadPaletteBuffer
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022209AC ; =0x0000B00B
    // ldr r1, _022209B0 ; =0x00001FB4
    // str r0, [sp, #4]
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // mov r2, #0x47
    // mov r3, #0x19
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _022209AC ; =0x0000B00B
    // ldr r1, _022209B0 ; =0x00001FB4
    // str r0, [sp, #4]
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // mov r2, #0x47
    // mov r3, #0x18
    // bl SpriteSystem_LoadAnimResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _022209B4 ; =0x0000B017
    // ldr r1, _022209B0 ; =0x00001FB4
    // str r0, [sp, #8]
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // mov r2, #0x47
    // mov r3, #0x1a
    // bl SpriteSystem_LoadCharResObj
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // _022209AC: .word 0x0000B00B
    // _022209B0: .word 0x00001FB4
    // _022209B4: .word 0x0000B017
    // TODO: decompile
}



void ov08_022209B8(void) {
    // push {r4, r5, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetSpriteSystem
    // mov r2, #0
    // add r1, sp, #0
    // strh r2, [r1]
    // strh r2, [r1, #2]
    // strh r2, [r1, #4]
    // strh r2, [r1, #6]
    // mov r1, #0x14
    // ldr r3, _02220A10 ; =ov08_02225654
    // mul r1, r4
    // ldr r3, [r3, r1]
    // str r2, [sp, #0xc]
    // str r3, [sp, #8]
    // mov r3, #2
    // str r3, [sp, #0x10]
    // ldr r3, _02220A14 ; =ov08_02225644
    // str r2, [sp, #0x30]
    // ldr r3, [r3, r1]
    // add r2, sp, #0
    // str r3, [sp, #0x14]
    // ldr r3, _02220A18 ; =ov08_02225648
    // ldr r3, [r3, r1]
    // str r3, [sp, #0x18]
    // ldr r3, _02220A1C ; =ov08_0222564C
    // ldr r3, [r3, r1]
    // str r3, [sp, #0x1c]
    // ldr r3, _02220A20 ; =ov08_02225650
    // ldr r1, [r3, r1]
    // str r1, [sp, #0x20]
    // mov r1, #1
    // str r1, [sp, #0x2c]
    // ldr r1, _02220A24 ; =0x00001FB4
    // ldr r1, [r5, r1]
    // bl SpriteSystem_NewSprite
    // add sp, #0x34
    // pop {r4, r5, pc}
    // _02220A10: .word ov08_02225654
    // _02220A14: .word ov08_02225644
    // _02220A18: .word ov08_02225648
    // _02220A1C: .word ov08_0222564C
    // _02220A20: .word ov08_02225650
    // _02220A24: .word 0x00001FB4
    // TODO: decompile
}



void ov08_02220A28(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r7, _02220A4C ; =0x00001FB8
    // mov r4, #0
    // add r5, r6, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov08_022209B8
    // str r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x26
    // blo _02220A32
    // add r0, r6, #0
    // bl ov08_02220AAC
    // pop {r3, r4, r5, r6, r7, pc}
    // _02220A4C: .word 0x00001FB8
    // TODO: decompile
}



void ov08_02220A50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, [r7]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetSpriteSystem
    // ldr r6, _02220A84 ; =0x00001FB8
    // str r0, [sp]
    // mov r4, #0
    // add r5, r7, #0
    // ldr r0, [r5, r6]
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x26
    // blo _02220A64
    // add r0, r7, #0
    // bl ov08_02221698
    // ldr r1, _02220A88 ; =0x00001FB4
    // ldr r0, [sp]
    // ldr r1, [r7, r1]
    // bl SpriteSystem_FreeResourcesAndManager
    // pop {r3, r4, r5, r6, r7, pc}
    // _02220A84: .word 0x00001FB8
    // _02220A88: .word 0x00001FB4
    // TODO: decompile
}



void ov08_02220A8C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // mov r1, #1
    // add r6, r0, #0
    // bl ManagedSprite_SetDrawFlag
    // lsl r1, r5, #0x10
    // lsl r2, r4, #0x10
    // add r0, r6, #0
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void ov08_02220AAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r5, #0
    // mov r7, #0
    // add r4, #0x1b
    // add r6, r5, #0
    // ldrh r0, [r5, #8]
    // cmp r0, #0
    // beq _02220AD8
    // add r1, r5, #0
    // ldrb r2, [r4]
    // add r1, #0x32
    // ldrb r1, [r1]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x1f
    // bl GetMonIconPaletteEx
    // add r1, r0, #0
    // ldr r0, _02220AE8 ; =0x00001FD4
    // ldr r0, [r6, r0]
    // bl ManagedSprite_SetPaletteOverride
    // add r7, r7, #1
    // add r5, #0x50
    // add r4, #0x50
    // add r6, r6, #4
    // cmp r7, #6
    // blt _02220AB8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02220AE8: .word 0x00001FD4
    // TODO: decompile
}



void ov08_02220AEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r6, r3, #0
    // ldr r0, [r0, #8]
    // add r7, r1, #0
    // add r4, r2, #0
    // bl BattleSystem_GetSpriteSystem
    // str r0, [sp, #8]
    // bl sub_020776B4
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // bl sub_02077678
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r1, _02220B38 ; =0x00001FB4
    // str r4, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [r5, r1]
    // ldr r2, [sp, #0xc]
    // bl SpriteSystem_ReplaceCharResObj
    // add r0, r6, #0
    // bl sub_0207769C
    // add r1, r0, #0
    // add r0, r7, #0
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverride
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02220B38: .word 0x00001FB4
    // TODO: decompile
}



void ov08_02220B3C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r2, #0
    // ldr r0, [r0, #8]
    // add r6, r1, #0
    // bl BattleSystem_GetSpriteSystem
    // add r7, r0, #0
    // bl sub_02077830
    // str r0, [sp, #8]
    // add r0, r4, #0
    // bl sub_02077800
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _02220B88 ; =0x0000B015
    // ldr r1, _02220B8C ; =0x00001FB4
    // str r0, [sp, #4]
    // ldr r1, [r5, r1]
    // ldr r2, [sp, #8]
    // add r0, r7, #0
    // bl SpriteSystem_ReplaceCharResObj
    // add r0, r4, #0
    // bl sub_02077818
    // add r1, r0, #0
    // add r0, r6, #0
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverride
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02220B88: .word 0x0000B015
    // _02220B8C: .word 0x00001FB4
    // TODO: decompile
}



void ov08_02220B90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // add r7, r3, #0
    // cmp r6, #7
    // beq _02220BB0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ManagedSprite_SetAnim
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov08_02220A8C
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_02220BB4(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // ldr r1, _02220BF8 ; =0x00002004
    // add r5, r0, #0
    // add r6, r2, #0
    // ldrb r3, [r4, #0x14]
    // ldr r1, [r5, r1]
    // ldr r2, _02220BFC ; =0x0000B00E
    // bl ov08_02220AEC
    // ldr r0, _02220BF8 ; =0x00002004
    // ldr r1, [r6]
    // ldr r0, [r5, r0]
    // ldr r2, [r6, #4]
    // bl ov08_02220A8C
    // ldrb r3, [r4, #0x15]
    // ldrb r0, [r4, #0x14]
    // cmp r0, r3
    // beq _02220BF4
    // ldr r1, _02220C00 ; =0x00002008
    // ldr r2, _02220C04 ; =0x0000B00F
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov08_02220AEC
    // ldr r0, _02220C00 ; =0x00002008
    // ldr r1, [r6, #8]
    // ldr r0, [r5, r0]
    // ldr r2, [r6, #0xc]
    // bl ov08_02220A8C
    // pop {r4, r5, r6, pc}
    // nop
    // _02220BF8: .word 0x00002004
    // _02220BFC: .word 0x0000B00E
    // _02220C00: .word 0x00002008
    // _02220C04: .word 0x0000B00F
    // TODO: decompile
}



void ov08_02220C08(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r0, #0
    // beq _02220C38
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _02220C26
    // add r0, r5, #0
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // b _02220C2E
    // add r0, r5, #0
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov08_02220A8C
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void ov08_02220C3C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r0, #0
    // beq _02220C5A
    // add r0, r5, #0
    // mov r1, #2
    // bl ManagedSprite_SetAnim
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov08_02220A8C
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void ov08_02220C5C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r7, _02220CF0 ; =0x00001FB8
    // str r1, [sp]
    // mov r5, #0
    // add r4, r6, #0
    // ldr r0, [r4, r7]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #0x26
    // blo _02220C68
    // ldr r0, [sp]
    // cmp r0, #9
    // bhi _02220CEC
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02220C8A: ; jump table
    // add r0, r6, #0
    // bl ov08_02220CF4
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov08_02220D90
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov08_02220DE8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov08_02220E80
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov08_02220F58
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov08_0222114C
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov08_0222101C
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov08_02221088
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov08_02221230
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // bl ov08_022211B8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02220CF0: .word 0x00001FB8
    // TODO: decompile
}



void ov08_02220CF4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r6, #0
    // str r0, [sp]
    // add r0, #0x1b
    // ldr r4, _02220D78 ; =ov08_02225534
    // ldr r7, _02220D7C ; =ov08_02225564
    // add r5, r6, #0
    // str r0, [sp]
    // ldrh r0, [r6, #8]
    // cmp r0, #0
    // beq _02220D5A
    // ldr r0, _02220D80 ; =0x00001FD4
    // ldr r1, [r4]
    // ldr r0, [r5, r0]
    // ldr r2, [r4, #4]
    // bl ov08_02220A8C
    // ldr r0, [sp]
    // ldr r1, _02220D84 ; =0x00001FEC
    // ldrb r0, [r0]
    // ldr r1, [r5, r1]
    // ldr r2, [r7]
    // lsl r0, r0, #0x19
    // ldr r3, [r7, #4]
    // lsr r0, r0, #0x1c
    // bl ov08_02220B90
    // ldr r1, _02220D88 ; =0x00001FB8
    // ldr r2, [r4]
    // ldr r3, [r4, #4]
    // ldrh r0, [r6, #0x1e]
    // ldr r1, [r5, r1]
    // add r2, #8
    // add r3, #8
    // bl ov08_02220C08
    // add r0, r6, #0
    // add r0, #0x31
    // ldr r1, _02220D8C ; =0x00002038
    // ldr r2, [r4]
    // ldr r3, [r4, #4]
    // ldrb r0, [r0]
    // ldr r1, [r5, r1]
    // add r2, #0x10
    // add r3, #8
    // bl ov08_02220C3C
    // ldr r0, [sp]
    // add r6, #0x50
    // add r0, #0x50
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // add r4, #8
    // add r0, r0, #1
    // add r5, r5, #4
    // add r7, #8
    // str r0, [sp, #4]
    // cmp r0, #6
    // blt _02220D0C
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02220D78: .word ov08_02225534
    // _02220D7C: .word ov08_02225564
    // _02220D80: .word 0x00001FD4
    // _02220D84: .word 0x00001FEC
    // _02220D88: .word 0x00001FB8
    // _02220D8C: .word 0x00002038
    // TODO: decompile
}



void ov08_02220D90(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r1, r5, #4
    // ldrb r2, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r2
    // add r4, r1, r0
    // add r0, r2, #7
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02220DE4 ; =0x00001FB8
    // mov r2, #0x48
    // ldr r0, [r1, r0]
    // mov r1, #0x80
    // bl ov08_02220A8C
    // ldr r1, [r5]
    // ldrh r0, [r4, #0x1a]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x50
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02220DE4 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x88
    // bl ov08_02220C08
    // ldr r1, [r5]
    // add r4, #0x2d
    // ldrb r1, [r1, #0x11]
    // ldrb r0, [r4]
    // mov r3, #0x50
    // add r1, #0x20
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02220DE4 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x90
    // bl ov08_02220C3C
    // pop {r3, r4, r5, pc}
    // _02220DE4: .word 0x00001FB8
    // TODO: decompile
}



void ov08_02220DE8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r1, r5, #4
    // ldrb r2, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r2
    // add r4, r1, r0
    // add r0, r2, #7
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02220E74 ; =0x00001FB8
    // mov r2, #0xc
    // ldr r0, [r1, r0]
    // mov r1, #0x18
    // bl ov08_02220A8C
    // ldr r1, [r5]
    // ldrb r0, [r4, #0x17]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x14
    // lsl r0, r0, #0x19
    // add r1, #0xd
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02220E74 ; =0x00001FB8
    // lsr r0, r0, #0x1c
    // ldr r1, [r2, r1]
    // mov r2, #0xc6
    // bl ov08_02220B90
    // ldr r2, _02220E78 ; =ov08_022253F4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02220BB4
    // ldr r1, [r5]
    // ldrh r0, [r4, #0x1a]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x14
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02220E74 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x20
    // bl ov08_02220C08
    // ldr r1, [r5]
    // add r0, r4, #0
    // ldrb r1, [r1, #0x11]
    // add r0, #0x2d
    // ldrb r0, [r0]
    // add r1, #0x20
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02220E74 ; =0x00001FB8
    // mov r3, #0x14
    // ldr r1, [r2, r1]
    // mov r2, #0x28
    // bl ov08_02220C3C
    // ldr r1, _02220E7C ; =0x00001FD0
    // ldrh r0, [r4, #0x1a]
    // ldr r1, [r5, r1]
    // mov r2, #0x14
    // mov r3, #0x84
    // bl ov08_02220C08
    // pop {r3, r4, r5, pc}
    // nop
    // _02220E74: .word 0x00001FB8
    // _02220E78: .word ov08_022253F4
    // _02220E7C: .word 0x00001FD0
    // TODO: decompile
}



void ov08_02220E80(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // ldr r0, [r0]
    // ldrb r2, [r0, #0x11]
    // ldr r0, [sp]
    // add r1, r0, #4
    // mov r0, #0x50
    // mul r0, r2
    // add r4, r1, r0
    // add r0, r2, #7
    // lsl r1, r0, #2
    // ldr r0, [sp]
    // mov r2, #0xc
    // add r1, r0, r1
    // ldr r0, _02220F44 ; =0x00001FB8
    // ldr r0, [r1, r0]
    // mov r1, #0x18
    // bl ov08_02220A8C
    // ldr r1, [sp]
    // ldrb r0, [r4, #0x17]
    // ldr r1, [r1]
    // mov r3, #0x14
    // ldrb r1, [r1, #0x11]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1c
    // add r1, #0xd
    // lsl r2, r1, #2
    // ldr r1, [sp]
    // add r2, r1, r2
    // ldr r1, _02220F44 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0xc6
    // bl ov08_02220B90
    // ldr r0, [sp]
    // ldr r2, _02220F48 ; =ov08_022253D4
    // add r1, r4, #0
    // bl ov08_02220BB4
    // ldr r1, [sp]
    // ldrh r0, [r4, #0x1a]
    // ldr r1, [r1]
    // mov r3, #0x14
    // ldrb r1, [r1, #0x11]
    // lsl r2, r1, #2
    // ldr r1, [sp]
    // add r2, r1, r2
    // ldr r1, _02220F44 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x20
    // bl ov08_02220C08
    // ldr r1, [sp]
    // add r0, r4, #0
    // ldr r1, [r1]
    // add r0, #0x2d
    // ldrb r1, [r1, #0x11]
    // ldrb r0, [r0]
    // mov r3, #0x14
    // add r1, #0x20
    // lsl r2, r1, #2
    // ldr r1, [sp]
    // add r2, r1, r2
    // ldr r1, _02220F44 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x28
    // bl ov08_02220C3C
    // ldr r5, [sp]
    // ldr r6, _02220F4C ; =ov08_02225454
    // mov r7, #0
    // ldrh r0, [r4, #0x30]
    // cmp r0, #0
    // beq _02220F36
    // add r3, r4, #0
    // ldr r1, _02220F50 ; =0x0000200C
    // add r3, #0x34
    // ldr r2, _02220F54 ; =0x0000B010
    // ldrb r3, [r3]
    // ldr r0, [sp]
    // ldr r1, [r5, r1]
    // add r2, r7, r2
    // bl ov08_02220AEC
    // ldr r0, _02220F50 ; =0x0000200C
    // ldr r1, [r6]
    // ldr r0, [r5, r0]
    // ldr r2, [r6, #4]
    // bl ov08_02220A8C
    // add r7, r7, #1
    // add r4, #8
    // add r5, r5, #4
    // add r6, #8
    // cmp r7, #4
    // blo _02220F10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02220F44: .word 0x00001FB8
    // _02220F48: .word ov08_022253D4
    // _02220F4C: .word ov08_02225454
    // _02220F50: .word 0x0000200C
    // _02220F54: .word 0x0000B010
    // TODO: decompile
}



void ov08_02220F58(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r1, r5, #4
    // ldrb r2, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r2
    // add r4, r1, r0
    // add r0, r2, #7
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02221010 ; =0x00001FB8
    // mov r2, #0xc
    // ldr r0, [r1, r0]
    // mov r1, #0x18
    // bl ov08_02220A8C
    // ldr r1, [r5]
    // ldrb r0, [r4, #0x17]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x14
    // lsl r0, r0, #0x19
    // add r1, #0xd
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02221010 ; =0x00001FB8
    // lsr r0, r0, #0x1c
    // ldr r1, [r2, r1]
    // mov r2, #0xc6
    // bl ov08_02220B90
    // ldr r2, _02221014 ; =ov08_022253E4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02220BB4
    // ldr r0, [r5]
    // mov r2, #0x30
    // add r0, #0x34
    // ldrb r0, [r0]
    // add r0, #0x15
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02221010 ; =0x00001FB8
    // ldr r0, [r1, r0]
    // mov r1, #0x88
    // bl ov08_02220A8C
    // ldr r1, [r5]
    // ldrh r0, [r4, #0x1a]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x14
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02221010 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x20
    // bl ov08_02220C08
    // ldr r1, [r5]
    // add r0, r4, #0
    // ldrb r1, [r1, #0x11]
    // add r0, #0x2d
    // ldrb r0, [r0]
    // add r1, #0x20
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02221010 ; =0x00001FB8
    // mov r3, #0x14
    // ldr r1, [r2, r1]
    // mov r2, #0x28
    // bl ov08_02220C3C
    // ldr r2, [r5]
    // ldr r1, _02221018 ; =0x00002020
    // add r2, #0x34
    // ldrb r2, [r2]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // lsl r2, r2, #3
    // add r2, r4, r2
    // add r2, #0x35
    // ldrb r2, [r2]
    // bl ov08_02220B3C
    // ldr r0, _02221018 ; =0x00002020
    // mov r1, #0x18
    // ldr r0, [r5, r0]
    // mov r2, #0x58
    // bl ov08_02220A8C
    // pop {r3, r4, r5, pc}
    // _02221010: .word 0x00001FB8
    // _02221014: .word ov08_022253E4
    // _02221018: .word 0x00002020
    // TODO: decompile
}



void ov08_0222101C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r1, r5, #4
    // ldrb r2, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r2
    // add r4, r1, r0
    // add r0, r2, #7
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02221080 ; =0x00001FB8
    // mov r2, #0xc
    // ldr r0, [r1, r0]
    // mov r1, #0x18
    // bl ov08_02220A8C
    // ldr r2, _02221084 ; =ov08_022253C4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02220BB4
    // ldr r1, [r5]
    // ldrh r0, [r4, #0x1a]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x14
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02221080 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x20
    // bl ov08_02220C08
    // ldr r1, [r5]
    // add r4, #0x2d
    // ldrb r1, [r1, #0x11]
    // ldrb r0, [r4]
    // mov r3, #0x14
    // add r1, #0x20
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02221080 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x28
    // bl ov08_02220C3C
    // add r0, r5, #0
    // bl ov08_022213C8
    // pop {r3, r4, r5, pc}
    // _02221080: .word 0x00001FB8
    // _02221084: .word ov08_022253C4
    // TODO: decompile
}



void ov08_02221088(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r1, r5, #4
    // ldrb r2, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r2
    // add r4, r1, r0
    // add r0, r2, #7
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02221140 ; =0x00001FB8
    // mov r2, #0xc
    // ldr r0, [r1, r0]
    // mov r1, #0x18
    // bl ov08_02220A8C
    // ldr r2, _02221144 ; =ov08_022253B4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02220BB4
    // ldr r0, [r5]
    // mov r2, #0x30
    // add r0, #0x34
    // ldrb r0, [r0]
    // add r0, #0x15
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02221140 ; =0x00001FB8
    // ldr r0, [r1, r0]
    // mov r1, #0x88
    // bl ov08_02220A8C
    // ldr r1, [r5]
    // ldrh r0, [r4, #0x1a]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x14
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02221140 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x20
    // bl ov08_02220C08
    // ldr r1, [r5]
    // add r0, r4, #0
    // ldrb r1, [r1, #0x11]
    // add r0, #0x2d
    // ldrb r0, [r0]
    // add r1, #0x20
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02221140 ; =0x00001FB8
    // mov r3, #0x14
    // ldr r1, [r2, r1]
    // mov r2, #0x28
    // bl ov08_02220C3C
    // ldr r1, [r5]
    // add r0, r1, #0
    // add r0, #0x34
    // ldrb r2, [r0]
    // cmp r2, #4
    // bhs _0222111E
    // lsl r2, r2, #3
    // add r2, r4, r2
    // ldr r1, _02221148 ; =0x00002020
    // add r2, #0x35
    // ldrb r2, [r2]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov08_02220B3C
    // b _02221132
    // ldrh r0, [r1, #0x24]
    // mov r1, #1
    // bl GetMoveAttr
    // ldr r1, _02221148 ; =0x00002020
    // add r2, r0, #0
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov08_02220B3C
    // ldr r0, _02221148 ; =0x00002020
    // mov r1, #0x18
    // ldr r0, [r5, r0]
    // mov r2, #0x58
    // bl ov08_02220A8C
    // pop {r3, r4, r5, pc}
    // _02221140: .word 0x00001FB8
    // _02221144: .word ov08_022253B4
    // _02221148: .word 0x00002020
    // TODO: decompile
}



void ov08_0222114C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r1, r5, #4
    // ldrb r2, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r2
    // add r4, r1, r0
    // add r0, r2, #7
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _022211B0 ; =0x00001FB8
    // mov r2, #0xc
    // ldr r0, [r1, r0]
    // mov r1, #0x18
    // bl ov08_02220A8C
    // ldr r2, _022211B4 ; =ov08_022253C4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02220BB4
    // ldr r1, [r5]
    // ldrh r0, [r4, #0x1a]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x14
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _022211B0 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x20
    // bl ov08_02220C08
    // ldr r1, [r5]
    // add r4, #0x2d
    // ldrb r1, [r1, #0x11]
    // ldrb r0, [r4]
    // mov r3, #0x14
    // add r1, #0x20
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _022211B0 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x28
    // bl ov08_02220C3C
    // add r0, r5, #0
    // bl ov08_022213C8
    // pop {r3, r4, r5, pc}
    // _022211B0: .word 0x00001FB8
    // _022211B4: .word ov08_022253C4
    // TODO: decompile
}



void ov08_022211B8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r1, r5, #4
    // ldrb r2, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r2
    // add r4, r1, r0
    // add r0, r2, #7
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _0222122C ; =0x00001FB8
    // mov r2, #0xc
    // ldr r0, [r1, r0]
    // mov r1, #0x18
    // bl ov08_02220A8C
    // ldr r0, [r5]
    // mov r2, #0x48
    // add r0, #0x34
    // ldrb r0, [r0]
    // add r0, #0x15
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _0222122C ; =0x00001FB8
    // ldr r0, [r1, r0]
    // mov r1, #0x88
    // bl ov08_02220A8C
    // ldr r1, [r5]
    // ldrh r0, [r4, #0x1a]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x14
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _0222122C ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x20
    // bl ov08_02220C08
    // ldr r1, [r5]
    // add r4, #0x2d
    // ldrb r1, [r1, #0x11]
    // ldrb r0, [r4]
    // mov r3, #0x14
    // add r1, #0x20
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _0222122C ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x28
    // bl ov08_02220C3C
    // add r0, r5, #0
    // bl ov08_02221500
    // pop {r3, r4, r5, pc}
    // nop
    // _0222122C: .word 0x00001FB8
    // TODO: decompile
}



void ov08_02221230(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r1, r5, #4
    // ldrb r2, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r2
    // add r4, r1, r0
    // add r0, r2, #7
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _02221290 ; =0x00001FB8
    // mov r2, #0xc
    // ldr r0, [r1, r0]
    // mov r1, #0x18
    // bl ov08_02220A8C
    // ldr r1, [r5]
    // ldrh r0, [r4, #0x1a]
    // ldrb r1, [r1, #0x11]
    // mov r3, #0x14
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02221290 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x20
    // bl ov08_02220C08
    // ldr r1, [r5]
    // add r4, #0x2d
    // ldrb r1, [r1, #0x11]
    // ldrb r0, [r4]
    // mov r3, #0x14
    // add r1, #0x20
    // lsl r1, r1, #2
    // add r2, r5, r1
    // ldr r1, _02221290 ; =0x00001FB8
    // ldr r1, [r2, r1]
    // mov r2, #0x28
    // bl ov08_02220C3C
    // add r0, r5, #0
    // bl ov08_022213C8
    // add r0, r5, #0
    // bl ov08_02221500
    // pop {r3, r4, r5, pc}
    // _02221290: .word 0x00001FB8
    // TODO: decompile
}



void ov08_02221294(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, [r6]
    // add r2, r6, #4
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // mov r4, #0
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp]
    // ldr r0, [sp]
    // lsl r5, r4, #3
    // add r3, r0, r5
    // ldrh r0, [r3, #0x30]
    // cmp r0, #0
    // beq _022212DC
    // lsl r0, r4, #2
    // add r3, #0x34
    // add r7, r6, r0
    // ldr r1, _02221314 ; =0x0000200C
    // ldr r2, _02221318 ; =0x0000B010
    // ldrb r3, [r3]
    // ldr r1, [r7, r1]
    // add r0, r6, #0
    // add r2, r4, r2
    // bl ov08_02220AEC
    // ldr r0, _0222131C ; =ov08_0222550C
    // ldr r1, _0222131C ; =ov08_0222550C
    // add r2, r0, r5
    // ldr r0, _02221314 ; =0x0000200C
    // ldr r1, [r1, r5]
    // ldr r0, [r7, r0]
    // ldr r2, [r2, #4]
    // bl ov08_02220A8C
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #4
    // blo _022212A8
    // ldr r0, [r6]
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _02221312
    // mov r1, #3
    // bl GetMoveAttr
    // add r3, r0, #0
    // ldr r1, _02221320 ; =0x0000201C
    // lsl r3, r3, #0x18
    // ldr r1, [r6, r1]
    // ldr r2, _02221324 ; =0x0000B014
    // add r0, r6, #0
    // lsr r3, r3, #0x18
    // bl ov08_02220AEC
    // ldr r0, _02221320 ; =0x0000201C
    // mov r1, #0x58
    // ldr r0, [r6, r0]
    // mov r2, #0xb0
    // bl ov08_02220A8C
    // pop {r3, r4, r5, r6, r7, pc}
    // _02221314: .word 0x0000200C
    // _02221318: .word 0x0000B010
    // _0222131C: .word ov08_0222550C
    // _02221320: .word 0x0000201C
    // _02221324: .word 0x0000B014
    // TODO: decompile
}



void ov08_02221328(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, [r7]
    // add r2, r7, #4
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // mov r4, #0
    // mul r0, r1
    // add r0, r2, r0
    // str r0, [sp]
    // ldr r0, [sp]
    // lsl r5, r4, #3
    // add r0, r0, r5
    // ldrh r0, [r0, #0x30]
    // cmp r0, #0
    // beq _0222137A
    // lsl r1, r4, #2
    // add r6, r7, r1
    // mov r1, #0xb
    // bl GetMoveAttr
    // add r3, r0, #0
    // ldr r1, _022213B4 ; =0x0000200C
    // ldr r2, _022213B8 ; =0x0000B010
    // add r3, #0x12
    // lsl r3, r3, #0x18
    // ldr r1, [r6, r1]
    // add r0, r7, #0
    // add r2, r4, r2
    // lsr r3, r3, #0x18
    // bl ov08_02220AEC
    // ldr r0, _022213BC ; =ov08_0222550C
    // ldr r1, _022213BC ; =ov08_0222550C
    // add r2, r0, r5
    // ldr r0, _022213B4 ; =0x0000200C
    // ldr r1, [r1, r5]
    // ldr r0, [r6, r0]
    // ldr r2, [r2, #4]
    // bl ov08_02220A8C
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #4
    // blo _0222133C
    // ldr r0, [r7]
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _022213B2
    // mov r1, #0xb
    // bl GetMoveAttr
    // add r3, r0, #0
    // ldr r1, _022213C0 ; =0x0000201C
    // add r3, #0x12
    // lsl r3, r3, #0x18
    // ldr r1, [r7, r1]
    // ldr r2, _022213C4 ; =0x0000B014
    // add r0, r7, #0
    // lsr r3, r3, #0x18
    // bl ov08_02220AEC
    // ldr r0, _022213C0 ; =0x0000201C
    // mov r1, #0x58
    // ldr r0, [r7, r0]
    // mov r2, #0xb0
    // bl ov08_02220A8C
    // pop {r3, r4, r5, r6, r7, pc}
    // _022213B4: .word 0x0000200C
    // _022213B8: .word 0x0000B010
    // _022213BC: .word ov08_0222550C
    // _022213C0: .word 0x0000201C
    // _022213C4: .word 0x0000B014
    // TODO: decompile
}



void ov08_022213C8(void) {
    // push {r3, lr}
    // ldr r1, _022213E0 ; =0x00002077
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // bne _022213DA
    // bl ov08_02221294
    // pop {r3, pc}
    // bl ov08_02221328
    // pop {r3, pc}
    // _022213E0: .word 0x00002077
    // TODO: decompile
}



void ov08_022213E4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ManagedSprite_GetActiveAnim
    // cmp r4, r0
    // beq _02221402
    // add r0, r5, #0
    // mov r1, #0
    // bl ManagedSprite_SetAnimationFrame
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ManagedSprite_SetAnim
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void ov08_02221404(void) {
    // push {r3, lr}
    // add r2, r0, #0
    // ldrh r0, [r2, #0x10]
    // cmp r0, #0
    // bne _02221412
    // mov r0, #0
    // pop {r3, pc}
    // ldrb r1, [r2, #0x17]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1c
    // cmp r1, #7
    // beq _02221424
    // cmp r1, #6
    // beq _02221424
    // mov r0, #5
    // pop {r3, pc}
    // ldrh r1, [r2, #0x12]
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // cmp r0, #4
    // bhi _02221456
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222143C: ; jump table
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #3
    // pop {r3, pc}
    // mov r0, #4
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}



void ov08_0222145C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // mov r4, #0
    // ldr r0, [r0]
    // bl Party_GetCount
    // cmp r0, #0
    // ble _022214B4
    // add r7, r5, #4
    // mov r0, #0x50
    // add r1, r4, #0
    // mul r1, r0
    // add r0, r5, r1
    // ldrh r0, [r0, #8]
    // cmp r0, #0
    // beq _022214A2
    // add r0, r7, r1
    // bl ov08_02221404
    // add r1, r0, #0
    // lsl r0, r4, #2
    // add r6, r5, r0
    // ldr r0, _022214B8 ; =0x00001FD4
    // lsl r1, r1, #0x18
    // ldr r0, [r6, r0]
    // lsr r1, r1, #0x18
    // bl ov08_022213E4
    // ldr r0, _022214B8 ; =0x00001FD4
    // mov r1, #1
    // ldr r0, [r6, r0]
    // lsl r1, r1, #0xc
    // bl ManagedSprite_TickNFrames
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Party_GetCount
    // cmp r4, r0
    // blt _02221470
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022214B8: .word 0x00001FD4
    // TODO: decompile
}



void ov08_022214BC(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // cmp r4, r1
    // ble _022214E2
    // add r0, #0x2c
    // sub r1, r4, r1
    // mul r1, r0
    // lsl r0, r1, #0x10
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // bl _u32_div_f
    // lsr r0, r0, #0x10
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // sub r0, r4, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // pop {r4, pc}
    // add r0, #0x2c
    // sub r1, r1, r4
    // mul r1, r0
    // lsl r0, r1, #0x10
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // bl _u32_div_f
    // lsr r0, r0, #0x10
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add r0, r4, r0
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // pop {r4, pc}
    // TODO: decompile
}



void ov08_02221500(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, [r6]
    // add r5, r6, #4
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // add r4, r1, #0
    // mul r4, r0
    // ldr r0, _02221618 ; =0x00002024
    // mov r1, #0
    // ldr r0, [r6, r0]
    // bl ov08_022213E4
    // ldr r0, _0222161C ; =0x00002028
    // mov r1, #1
    // ldr r0, [r6, r0]
    // bl ov08_022213E4
    // ldr r0, _02221620 ; =0x0000202C
    // mov r1, #3
    // ldr r0, [r6, r0]
    // bl ov08_022213E4
    // ldr r0, _02221624 ; =0x00002030
    // mov r1, #4
    // ldr r0, [r6, r0]
    // bl ov08_022213E4
    // ldr r0, _02221628 ; =0x00002034
    // mov r1, #2
    // ldr r0, [r6, r0]
    // bl ov08_022213E4
    // add r0, r5, r4
    // add r0, #0x28
    // mov r1, #0x90
    // ldrb r0, [r0]
    // add r2, r1, #0
    // bl ov08_022214BC
    // add r7, r0, #0
    // add r0, r5, r4
    // add r0, #0x28
    // ldrb r0, [r0]
    // mov r1, #2
    // mov r2, #0x18
    // bl ov08_022214BC
    // add r2, r0, #0
    // ldr r0, _02221618 ; =0x00002024
    // add r1, r7, #0
    // ldr r0, [r6, r0]
    // bl ov08_02220A8C
    // add r0, r5, r4
    // add r0, #0x29
    // ldrb r0, [r0]
    // mov r1, #0xa4
    // mov r2, #0x90
    // bl ov08_022214BC
    // add r7, r0, #0
    // add r0, r5, r4
    // add r0, #0x29
    // ldrb r0, [r0]
    // mov r1, #0x10
    // mov r2, #0x18
    // bl ov08_022214BC
    // add r2, r0, #0
    // ldr r0, _0222161C ; =0x00002028
    // add r1, r7, #0
    // ldr r0, [r6, r0]
    // bl ov08_02220A8C
    // add r0, r5, r4
    // add r0, #0x2a
    // ldrb r0, [r0]
    // mov r1, #0x9c
    // mov r2, #0x90
    // bl ov08_022214BC
    // add r7, r0, #0
    // add r0, r5, r4
    // add r0, #0x2a
    // ldrb r0, [r0]
    // mov r1, #0x29
    // mov r2, #0x18
    // bl ov08_022214BC
    // add r2, r0, #0
    // ldr r0, _02221620 ; =0x0000202C
    // add r1, r7, #0
    // ldr r0, [r6, r0]
    // bl ov08_02220A8C
    // add r0, r5, r4
    // add r0, #0x2b
    // ldrb r0, [r0]
    // mov r1, #0x83
    // mov r2, #0x8f
    // bl ov08_022214BC
    // add r7, r0, #0
    // add r0, r5, r4
    // add r0, #0x2b
    // ldrb r0, [r0]
    // mov r1, #0x29
    // mov r2, #0x18
    // bl ov08_022214BC
    // add r2, r0, #0
    // ldr r0, _02221624 ; =0x00002030
    // add r1, r7, #0
    // ldr r0, [r6, r0]
    // bl ov08_02220A8C
    // add r0, r5, r4
    // add r0, #0x2c
    // ldrb r0, [r0]
    // mov r1, #0x7b
    // mov r2, #0x8f
    // bl ov08_022214BC
    // add r7, r0, #0
    // add r0, r5, r4
    // add r0, #0x2c
    // ldrb r0, [r0]
    // mov r1, #0x10
    // mov r2, #0x18
    // bl ov08_022214BC
    // add r2, r0, #0
    // ldr r0, _02221628 ; =0x00002034
    // add r1, r7, #0
    // ldr r0, [r6, r0]
    // bl ov08_02220A8C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02221618: .word 0x00002024
    // _0222161C: .word 0x00002028
    // _02221620: .word 0x0000202C
    // _02221624: .word 0x00002030
    // _02221628: .word 0x00002034
    // TODO: decompile
}



void ov08_0222162C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl BattleSystem_GetSpriteSystem
    // ldr r1, _02221688 ; =0x0000B018
    // mov r2, #0x7a
    // str r1, [sp]
    // sub r1, #0xc
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r1, _0222168C ; =0x00001FB4
    // ldr r3, [r5]
    // lsl r2, r2, #2
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // ldr r3, [r3, #0xc]
    // add r4, r0, #0
    // bl BattleCursor_LoadResources
    // ldr r3, _02221690 ; =0x0000B00C
    // mov r0, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r1, _0222168C ; =0x00001FB4
    // ldr r2, [r5]
    // ldr r1, [r5, r1]
    // ldr r2, [r2, #0xc]
    // add r0, r4, #0
    // add r3, #0xc
    // bl BattleCursor_New
    // add r1, r0, #0
    // ldr r0, _02221694 ; =0x00002088
    // ldr r0, [r5, r0]
    // bl ov08_02224B94
    // add sp, #0x14
    // pop {r4, r5, pc}
    // _02221688: .word 0x0000B018
    // _0222168C: .word 0x00001FB4
    // _02221690: .word 0x0000B00C
    // _02221694: .word 0x00002088
    // TODO: decompile
}



void ov08_02221698(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _022216C0 ; =0x00002088
    // ldr r0, [r4, r0]
    // bl ov08_02224B84
    // bl BattleCursor_Delete
    // ldr r2, _022216C4 ; =0x0000B00C
    // ldr r0, _022216C8 ; =0x00001FB4
    // str r2, [sp]
    // add r1, r2, #0
    // ldr r0, [r4, r0]
    // add r1, #0xc
    // add r3, r2, #0
    // bl BattleCursor_FreeResources
    // add sp, #4
    // pop {r3, r4, pc}
    // _022216C0: .word 0x00002088
    // _022216C4: .word 0x0000B00C
    // _022216C8: .word 0x00001FB4
    // TODO: decompile
}



void ov08_022216CC(void) {
    // push {r3, lr}
    // ldr r1, _022216F0 ; =0x00002077
    // ldrb r2, [r0, r1]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x1c
    // bne _022216E4
    // add r1, #0x11
    // ldr r0, [r0, r1]
    // mov r1, #0x5f
    // bl ov08_02224BF8
    // pop {r3, pc}
    // add r1, #0x11
    // ldr r0, [r0, r1]
    // mov r1, #0x7f
    // bl ov08_02224BF8
    // pop {r3, pc}
    // _022216F0: .word 0x00002077
    // TODO: decompile
}



void ov08_022216F4(void) {
    // push {r3, lr}
    // ldr r1, _02221718 ; =0x00002077
    // ldrb r2, [r0, r1]
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x1c
    // bne _0222170C
    // add r1, #0x11
    // ldr r0, [r0, r1]
    // mov r1, #5
    // bl ov08_02224BF8
    // pop {r3, pc}
    // add r1, #0x11
    // ldr r0, [r0, r1]
    // mov r1, #7
    // bl ov08_02224BF8
    // pop {r3, pc}
    // _02221718: .word 0x00002077
    // TODO: decompile
}



void ov08_0222171C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // ldr r0, _022217BC ; =0x00002088
    // ldr r1, _022217C0 ; =ov08_022254BC
    // lsl r2, r5, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r1, r2]
    // bl ov08_02224BCC
    // cmp r5, #9
    // bhi _022217BA
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221740: ; jump table
    // ldr r1, [r4]
    // ldr r0, _022217BC ; =0x00002088
    // ldrb r1, [r1, #0x11]
    // ldr r0, [r4, r0]
    // bl ov08_02224B98
    // ldr r0, _022217C4 ; =0x0000208C
    // mov r1, #0
    // strb r1, [r4, r0]
    // ldr r0, [r4]
    // add r0, #0x34
    // strb r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldr r1, _022217BC ; =0x00002088
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldrb r1, [r4, r1]
    // bl ov08_02224B98
    // ldr r0, [r4]
    // mov r1, #0
    // add r0, #0x34
    // strb r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4]
    // ldr r0, _022217BC ; =0x00002088
    // add r1, #0x34
    // ldrb r1, [r1]
    // ldr r0, [r4, r0]
    // bl ov08_02224B98
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov08_022216CC
    // ldr r1, _022217BC ; =0x00002088
    // ldr r0, [r4, r1]
    // add r1, r1, #5
    // ldrb r1, [r4, r1]
    // bl ov08_02224B98
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov08_022216F4
    // ldr r1, _022217BC ; =0x00002088
    // ldr r0, [r4, r1]
    // add r1, r1, #6
    // ldrb r1, [r4, r1]
    // bl ov08_02224B98
    // pop {r3, r4, r5, pc}
    // _022217BC: .word 0x00002088
    // _022217C0: .word ov08_022254BC
    // _022217C4: .word 0x0000208C
    // TODO: decompile
}



void ov08_022217C8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _022217EC ; =0x00002088
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl ov08_02224B90
    // ldr r0, _022217EC ; =0x00002088
    // ldr r0, [r4, r0]
    // bl ov08_02224BC0
    // ldr r0, _022217EC ; =0x00002088
    // ldr r0, [r4, r0]
    // bl ov08_02224B84
    // bl BattleCursor_Disable
    // pop {r4, pc}
    // _022217EC: .word 0x00002088
    // TODO: decompile
}



void ov08_022217F0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0x7b
    // lsl r0, r0, #2
    // mov r2, #0
    // add r0, r5, r0
    // add r3, r2, #0
    // add r4, r1, #0
    // bl ov08_02221BD0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xab
    // lsl r0, r0, #2
    // mov r3, #6
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r2, #0
    // str r3, [sp, #4]
    // bl ov08_02221BD0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0xdb
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r2, #0
    // mov r3, #0xc
    // bl ov08_02221BD0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, _02221AB0 ; =0x0000042C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x12
    // bl ov08_02221BD0
    // mov r2, #0x10
    // str r2, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, _02221AB4 ; =0x000004EC
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r3, #0
    // bl ov08_02221BD0
    // ldr r0, _02221AB8 ; =0x000005AC
    // mov r2, #0x10
    // str r2, [sp]
    // mov r3, #6
    // add r0, r5, r0
    // add r1, r4, #0
    // str r3, [sp, #4]
    // bl ov08_02221BD0
    // mov r2, #0x10
    // str r2, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, _02221ABC ; =0x0000066C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r3, #0xc
    // bl ov08_02221BD0
    // mov r2, #0x10
    // str r2, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, _02221AC0 ; =0x0000072C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r3, #0x12
    // bl ov08_02221BD0
    // mov r0, #0xd
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // ldr r0, _02221AC4 ; =0x000007EC
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x27
    // bl ov08_02221BD0
    // mov r0, #0xd
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // ldr r0, _02221AC8 ; =0x0000086E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x2c
    // bl ov08_02221BD0
    // mov r2, #0xd
    // str r2, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #0x8f
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0x27
    // bl ov08_02221BD0
    // mov r2, #0xd
    // str r2, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // ldr r0, _02221ACC ; =0x00000972
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r3, #0x2c
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02221AD0 ; =0x000009F4
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x31
    // bl ov08_02221BD0
    // ldr r0, _02221AD4 ; =0x00000A26
    // mov r2, #5
    // str r2, [sp]
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0x31
    // str r2, [sp, #4]
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02221AD8 ; =0x00000A58
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0xa
    // mov r3, #0x31
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02221ADC ; =0x00000A8A
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0xf
    // mov r3, #0x31
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02221AE0 ; =0x00000ABC
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x36
    // bl ov08_02221BD0
    // ldr r0, _02221AE4 ; =0x00000AEE
    // mov r2, #5
    // str r2, [sp]
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0x36
    // str r2, [sp, #4]
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0xb2
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r2, #0xa
    // mov r3, #0x36
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02221AE8 ; =0x00000B52
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0xf
    // mov r3, #0x36
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02221AEC ; =0x00000B84
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x1a
    // mov r3, #0x18
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02221AF0 ; =0x00000BB6
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x1a
    // mov r3, #0x1d
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02221AF4 ; =0x00000BE8
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x1a
    // mov r3, #0x22
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02221AF8 ; =0x00000C1A
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x1a
    // mov r3, #0x27
    // bl ov08_02221BD0
    // mov r0, #0x1a
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #0x6d
    // lsl r0, r0, #6
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r2, #0
    // mov r3, #0x18
    // bl ov08_02221BD0
    // mov r0, #0x1a
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // ldr r0, _02221AFC ; =0x00001C44
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x1d
    // bl ov08_02221BD0
    // mov r0, #0x1a
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // ldr r0, _02221B00 ; =0x00001D48
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x22
    // bl ov08_02221BD0
    // mov r0, #9
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _02221B04 ; =0x00001E4C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x14
    // mov r3, #0x31
    // bl ov08_02221BD0
    // mov r0, #9
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _02221B08 ; =0x00001E94
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x14
    // mov r3, #0x35
    // bl ov08_02221BD0
    // mov r0, #9
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _02221B0C ; =0x00001EDC
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x14
    // mov r3, #0x39
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _02221B10 ; =0x00001F24
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x3b
    // bl ov08_02221BD0
    // mov r2, #5
    // str r2, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _02221B14 ; =0x00001F38
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r3, #0x3b
    // bl ov08_02221BD0
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _02221B18 ; =0x00001F4C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0xa
    // mov r3, #0x3b
    // bl ov08_02221BD0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _02221AB0: .word 0x0000042C
    // _02221AB4: .word 0x000004EC
    // _02221AB8: .word 0x000005AC
    // _02221ABC: .word 0x0000066C
    // _02221AC0: .word 0x0000072C
    // _02221AC4: .word 0x000007EC
    // _02221AC8: .word 0x0000086E
    // _02221ACC: .word 0x00000972
    // _02221AD0: .word 0x000009F4
    // _02221AD4: .word 0x00000A26
    // _02221AD8: .word 0x00000A58
    // _02221ADC: .word 0x00000A8A
    // _02221AE0: .word 0x00000ABC
    // _02221AE4: .word 0x00000AEE
    // _02221AE8: .word 0x00000B52
    // _02221AEC: .word 0x00000B84
    // _02221AF0: .word 0x00000BB6
    // _02221AF4: .word 0x00000BE8
    // _02221AF8: .word 0x00000C1A
    // _02221AFC: .word 0x00001C44
    // _02221B00: .word 0x00001D48
    // _02221B04: .word 0x00001E4C
    // _02221B08: .word 0x00001E94
    // _02221B0C: .word 0x00001EDC
    // _02221B10: .word 0x00001F24
    // _02221B14: .word 0x00001F38
    // _02221B18: .word 0x00001F4C
    // TODO: decompile
}



void ov08_02221B1C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x1e
    // str r0, [sp]
    // mov r0, #0x11
    // str r0, [sp, #4]
    // ldr r0, _02221BC4 ; =0x00000C4C
    // mov r2, #0
    // add r0, r5, r0
    // add r3, r2, #0
    // add r4, r1, #0
    // bl ov08_02221BD0
    // mov r0, #0x1e
    // str r0, [sp]
    // ldr r0, _02221BC8 ; =0x00001048
    // mov r3, #0x11
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r2, #0
    // str r3, [sp, #4]
    // bl ov08_02221BD0
    // mov r0, #0x1e
    // str r0, [sp]
    // mov r0, #0x11
    // str r0, [sp, #4]
    // ldr r0, _02221BCC ; =0x00001444
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x22
    // bl ov08_02221BD0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0x61
    // lsl r0, r0, #6
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r2, #0
    // mov r3, #0x33
    // bl ov08_02221BD0
    // mov r2, #0x10
    // str r2, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0x19
    // lsl r0, r0, #8
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0x33
    // bl ov08_02221BD0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0x67
    // lsl r0, r0, #6
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r2, #0
    // mov r3, #0x39
    // bl ov08_02221BD0
    // mov r2, #0x10
    // str r2, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #0x6a
    // lsl r0, r0, #6
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0x39
    // bl ov08_02221BD0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _02221BC4: .word 0x00000C4C
    // _02221BC8: .word 0x00001048
    // _02221BCC: .word 0x00001444
    // TODO: decompile
}



void ov08_02221BD0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r0, sp, #8
    // mov lr, r3
    // ldrb r3, [r0, #0x14]
    // mov r6, #0
    // mov ip, r3
    // cmp r3, #0
    // ble _02221C1C
    // ldrb r3, [r0, #0x10]
    // lsl r2, r2, #1
    // add r7, r1, r2
    // mov r2, #0
    // cmp r3, #0
    // ble _02221C10
    // mov r0, lr
    // add r0, r0, r6
    // lsl r0, r0, #6
    // add r5, r7, r0
    // add r0, r6, #0
    // mul r0, r3
    // lsl r1, r0, #1
    // ldr r0, [sp]
    // add r4, r0, r1
    // lsl r1, r2, #1
    // ldrh r0, [r5, r1]
    // strh r0, [r4, r1]
    // add r0, r2, #1
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // cmp r2, r3
    // blt _02221C00
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // mov r0, ip
    // cmp r6, r0
    // blt _02221BE8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_02221C20(void) {
    // cmp r1, #0x21
    // bhi _02221D06
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02221C30: ; jump table
    // cmp r3, #0
    // bne _02221C86
    // mov r1, #0x7b
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0xc0
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02221D0C ; =0x000004EC
    // add r1, r0, r1
    // mov r0, #0xc0
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02221D10 ; =0x00000B84
    // add r1, r0, r1
    // mov r0, #0x32
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02221D14 ; =0x00000C4C
    // add r1, r0, r1
    // mov r0, #0xff
    // lsl r0, r0, #2
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02221D18 ; =0x000007EC
    // add r1, r0, r1
    // mov r0, #0x82
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02221D1C ; =0x000009F4
    // add r1, r0, r1
    // mov r0, #0x32
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02221D20 ; =0x00000ABC
    // add r1, r0, r1
    // mov r0, #0x32
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // mov r1, #0x61
    // lsl r1, r1, #6
    // add r1, r0, r1
    // mov r0, #0xc0
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // mov r1, #0x6d
    // lsl r1, r1, #6
    // add r1, r0, r1
    // lsl r0, r2, #6
    // add r0, r2, r0
    // lsl r0, r0, #2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02221D24 ; =0x00001E4C
    // add r1, r0, r1
    // mov r0, #0x48
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02221D28 ; =0x00001F24
    // add r1, r0, r1
    // mov r0, #0x14
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _02221D0C: .word 0x000004EC
    // _02221D10: .word 0x00000B84
    // _02221D14: .word 0x00000C4C
    // _02221D18: .word 0x000007EC
    // _02221D1C: .word 0x000009F4
    // _02221D20: .word 0x00000ABC
    // _02221D24: .word 0x00001E4C
    // _02221D28: .word 0x00001F24
    // TODO: decompile
}



void ov08_02221D2C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r2, #0
    // add r2, r3, #0
    // add r3, sp, #0x10
    // add r4, r1, #0
    // ldrb r3, [r3, #0x10]
    // add r1, r7, #0
    // str r0, [sp]
    // bl ov08_02221C20
    // add r1, r0, #0
    // ldr r2, _02221E60 ; =ov08_02225A56
    // lsl r0, r7, #2
    // ldrb r6, [r2, r0]
    // ldr r2, _02221E64 ; =ov08_02225A57
    // ldrb r0, [r2, r0]
    // add r5, r6, #0
    // mul r5, r0
    // add r0, r4, #0
    // lsl r2, r5, #1
    // bl memcpy
    // cmp r7, #5
    // bgt _02221D7A
    // cmp r7, #0
    // blt _02221E5C
    // add r0, r7, r7
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221D6E: ; jump table
    // cmp r7, #0x1b
    // beq _02221E3C
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x50
    // add r1, r7, #0
    // mul r1, r0
    // ldr r0, [sp]
    // add r0, r0, r1
    // ldrh r1, [r0, #8]
    // cmp r1, #0
    // beq _02221E5C
    // ldrb r1, [r0, #0x1b]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1f
    // beq _02221DE2
    // lsl r2, r6, #1
    // add r0, r2, #5
    // lsl r0, r0, #1
    // ldrh r1, [r4, r0]
    // add r0, sp, #4
    // strh r1, [r0]
    // add r1, r6, r2
    // add r1, r1, #5
    // lsl r1, r1, #1
    // ldrh r1, [r4, r1]
    // strh r1, [r0, #2]
    // mov r1, #0
    // add r0, sp, #4
    // add r5, r1, #2
    // lsl r3, r1, #1
    // add r7, r5, #0
    // mul r7, r6
    // lsl r5, r7, #1
    // ldrh r3, [r0, r3]
    // mov r2, #0
    // add r5, r4, r5
    // lsl r7, r2, #1
    // add r2, r2, #1
    // lsl r2, r2, #0x18
    // add r7, r5, r7
    // lsr r2, r2, #0x18
    // strh r3, [r7, #0xc]
    // cmp r2, #9
    // blo _02221DC4
    // add r1, r1, #1
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // cmp r1, #2
    // blo _02221DB4
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r0, #0x14]
    // cmp r0, #0
    // bne _02221E0C
    // mov r1, #0
    // cmp r5, #0
    // ble _02221E5C
    // mov r3, #2
    // ldr r2, _02221E68 ; =0x00000FFF
    // lsl r3, r3, #0xc
    // lsl r0, r1, #1
    // ldrh r6, [r4, r0]
    // and r6, r2
    // orr r6, r3
    // strh r6, [r4, r0]
    // add r0, r1, #1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // cmp r1, r5
    // blt _02221DF4
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r1, r7, #0x18
    // ldr r0, [sp]
    // lsr r1, r1, #0x18
    // bl ov08_0221DB24
    // cmp r0, #1
    // bne _02221E5C
    // mov r1, #0
    // cmp r5, #0
    // ble _02221E5C
    // ldr r2, _02221E68 ; =0x00000FFF
    // add r3, r2, #1
    // lsl r0, r1, #1
    // ldrh r6, [r4, r0]
    // and r6, r2
    // orr r6, r3
    // strh r6, [r4, r0]
    // add r0, r1, #1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // cmp r1, r5
    // blt _02221E24
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // cmp r5, #0
    // ble _02221E5C
    // mov r3, #0xa
    // ldr r2, _02221E68 ; =0x00000FFF
    // lsl r3, r3, #0xc
    // lsl r0, r1, #1
    // ldrh r6, [r4, r0]
    // and r6, r2
    // orr r6, r3
    // strh r6, [r4, r0]
    // add r0, r1, #1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // cmp r1, r5
    // blt _02221E48
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02221E60: .word ov08_02225A56
    // _02221E64: .word ov08_02225A57
    // _02221E68: .word 0x00000FFF
    // TODO: decompile
}



void ov08_02221E6C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r5, r0, #0
    // ldr r0, [sp, #0xc]
    // lsl r4, r0, #2
    // ldr r0, _02221ED8 ; =ov08_02225A57
    // ldrb r7, [r0, r4]
    // ldr r0, _02221EDC ; =ov08_02225A56
    // ldrb r6, [r0, r4]
    // ldr r0, [r5]
    // add r1, r6, #0
    // mul r1, r7
    // ldr r0, [r0, #0xc]
    // lsl r1, r1, #1
    // bl Heap_Alloc
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // bl ov08_02221D2C
    // ldr r0, _02221EE0 ; =ov08_02225A55
    // ldr r3, _02221EE4 ; =ov08_02225A54
    // ldrb r0, [r0, r4]
    // ldrb r3, [r3, r4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp]
    // str r6, [sp, #4]
    // mov r0, #0x79
    // str r7, [sp, #8]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl LoadRectToBgTilemapRect
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [sp, #0x18]
    // bl Heap_Free
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02221ED8: .word ov08_02225A57
    // _02221EDC: .word ov08_02225A56
    // _02221EE0: .word ov08_02225A55
    // _02221EE4: .word ov08_02225A54
    // TODO: decompile
}



void ov08_02221EE8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _02221F88 ; =ov08_022259CC
    // lsl r3, r1, #2
    // ldr r6, [r0, r3]
    // cmp r6, #0
    // beq _02221F86
    // cmp r1, #5
    // bhi _02221F02
    // ldr r0, _02221F8C ; =ov08_022259BC
    // ldrb r0, [r0, r2]
    // str r0, [sp]
    // b _02221F08
    // ldr r0, _02221F90 ; =ov08_022259AC
    // ldrb r0, [r0, r2]
    // str r0, [sp]
    // cmp r2, #0
    // beq _02221F16
    // cmp r2, #1
    // beq _02221F1A
    // cmp r2, #2
    // beq _02221F1E
    // b _02221F20
    // mov r7, #1
    // b _02221F20
    // mov r7, #0
    // b _02221F20
    // mov r7, #1
    // cmp r1, #0xe
    // blo _02221F54
    // cmp r1, #0x11
    // bhi _02221F54
    // ldr r1, _02221F94 ; =0x00002070
    // ldr r2, [sp]
    // ldr r0, [r5, r1]
    // add r1, r1, #5
    // ldrb r1, [r5, r1]
    // mov r3, #0
    // ldrb r1, [r6, r1]
    // lsl r1, r1, #4
    // add r0, r0, r1
    // add r1, r7, #0
    // bl ScrollWindow
    // ldr r1, _02221F94 ; =0x00002070
    // ldr r0, [r5, r1]
    // add r1, r1, #5
    // ldrb r1, [r5, r1]
    // ldrb r1, [r6, r1]
    // lsl r1, r1, #4
    // add r0, r0, r1
    // bl ScheduleWindowCopyToVram
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #0
    // ldrb r2, [r6, r4]
    // cmp r2, #0xff
    // beq _02221F86
    // ldr r0, _02221F94 ; =0x00002070
    // mov r3, #0
    // ldr r1, [r5, r0]
    // lsl r0, r2, #4
    // add r0, r1, r0
    // ldr r2, [sp]
    // add r1, r7, #0
    // bl ScrollWindow
    // ldr r0, _02221F94 ; =0x00002070
    // ldr r1, [r5, r0]
    // ldrb r0, [r6, r4]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #8
    // blo _02221F56
    // pop {r3, r4, r5, r6, r7, pc}
    // _02221F88: .word ov08_022259CC
    // _02221F8C: .word ov08_022259BC
    // _02221F90: .word ov08_022259AC
    // _02221F94: .word 0x00002070
    // TODO: decompile
}



void ov08_02221F98(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r0, #0
    // cmp r5, #0x1b
    // bhi _0222209C
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02221FAE: ; jump table
    // ldr r0, _022220A0 ; =ov08_022259C6
    // lsl r1, r2, #1
    // ldrsh r6, [r0, r1]
    // add r0, r5, #0
    // add r0, #0xd
    // lsl r0, r0, #2
    // add r1, r4, r0
    // ldr r0, _022220A4 ; =0x00001FB8
    // add r2, r6, #0
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // lsl r0, r5, #2
    // add r1, r4, r0
    // ldr r0, _022220A4 ; =0x00001FB8
    // add r2, r6, #0
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // add r0, r5, #7
    // lsl r0, r0, #2
    // add r1, r4, r0
    // ldr r0, _022220A4 ; =0x00001FB8
    // add r2, r6, #0
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // pop {r4, r5, r6, pc}
    // ldr r0, _022220A8 ; =ov08_022259C0
    // lsl r1, r2, #1
    // ldrsh r5, [r0, r1]
    // ldr r0, [r4]
    // ldrb r0, [r0, #0x11]
    // add r2, r5, #0
    // lsl r0, r0, #2
    // add r1, r4, r0
    // ldr r0, _022220A4 ; =0x00001FB8
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // ldr r0, [r4]
    // add r2, r5, #0
    // ldrb r0, [r0, #0x11]
    // add r0, r0, #7
    // lsl r0, r0, #2
    // add r1, r4, r0
    // ldr r0, _022220A4 ; =0x00001FB8
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // pop {r4, r5, r6, pc}
    // add r0, r5, #7
    // lsl r0, r0, #2
    // lsl r3, r2, #1
    // ldr r2, _022220A8 ; =ov08_022259C0
    // add r1, r4, r0
    // ldr r0, _022220A4 ; =0x00001FB8
    // ldrsh r2, [r2, r3]
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // pop {r4, r5, r6, pc}
    // add r0, r5, #2
    // lsl r0, r0, #2
    // lsl r3, r2, #1
    // ldr r2, _022220A8 ; =ov08_022259C0
    // add r1, r4, r0
    // ldr r0, _022220A4 ; =0x00001FB8
    // ldrsh r2, [r2, r3]
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // pop {r4, r5, r6, pc}
    // sub r0, r5, #2
    // lsl r0, r0, #2
    // lsl r3, r2, #1
    // ldr r2, _022220A8 ; =ov08_022259C0
    // add r1, r4, r0
    // ldr r0, _022220A4 ; =0x00001FB8
    // ldrsh r2, [r2, r3]
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_OffsetPositionXY
    // pop {r4, r5, r6, pc}
    // nop
    // _022220A0: .word ov08_022259C6
    // _022220A4: .word 0x00001FB8
    // _022220A8: .word ov08_022259C0
    // TODO: decompile
}



void ov08_022220AC(void) {
    // push {r4, r5, r6, lr}
    // ldr r3, _022220F4 ; =0x00001FA3
    // add r5, r0, #0
    // ldrb r6, [r5, r3]
    // mov r2, #0x70
    // add r4, r1, #0
    // bic r6, r2
    // strb r6, [r5, r3]
    // cmp r4, #5
    // bhi _022220D6
    // bl ov08_0221D5DC
    // cmp r0, #2
    // bne _022220D6
    // ldr r1, _022220F4 ; =0x00001FA3
    // mov r0, #0x70
    // ldrb r2, [r5, r1]
    // bic r2, r0
    // mov r0, #0x10
    // orr r0, r2
    // strb r0, [r5, r1]
    // ldr r0, _022220F8 ; =0x00001FA0
    // mov r2, #0
    // strb r2, [r5, r0]
    // add r1, r0, #1
    // strb r2, [r5, r1]
    // add r1, r0, #2
    // strb r4, [r5, r1]
    // add r1, r0, #3
    // ldrb r2, [r5, r1]
    // mov r1, #0x80
    // add r0, r0, #3
    // orr r1, r2
    // strb r1, [r5, r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _022220F4: .word 0x00001FA3
    // _022220F8: .word 0x00001FA0
    // TODO: decompile
}



void ov08_022220FC(void) {
    // push {r4, lr}
    // ldr r2, _022221C0 ; =0x00001FA3
    // add r4, r0, #0
    // ldrb r3, [r4, r2]
    // lsl r1, r3, #0x18
    // lsr r1, r1, #0x1f
    // beq _022221BC
    // sub r1, r2, #3
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _0222211C
    // cmp r1, #1
    // beq _02222150
    // cmp r1, #2
    // beq _02222184
    // pop {r4, pc}
    // sub r1, r2, #1
    // ldrb r1, [r4, r1]
    // lsl r3, r3, #0x19
    // mov r2, #1
    // lsr r3, r3, #0x1d
    // bl ov08_02221E6C
    // ldr r1, _022221C4 ; =0x00001FA2
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // mov r2, #1
    // bl ov08_02221EE8
    // ldr r1, _022221C4 ; =0x00001FA2
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // mov r2, #1
    // bl ov08_02221F98
    // ldr r0, _022221C8 ; =0x00001FA1
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r1, #1
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // sub r1, r2, #1
    // ldrb r1, [r4, r1]
    // lsl r3, r3, #0x19
    // mov r2, #2
    // lsr r3, r3, #0x1d
    // bl ov08_02221E6C
    // ldr r1, _022221C4 ; =0x00001FA2
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // mov r2, #2
    // bl ov08_02221EE8
    // ldr r1, _022221C4 ; =0x00001FA2
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // mov r2, #2
    // bl ov08_02221F98
    // ldr r0, _022221C8 ; =0x00001FA1
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r1, #2
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // sub r1, r2, #1
    // ldrb r1, [r4, r1]
    // lsl r3, r3, #0x19
    // mov r2, #0
    // lsr r3, r3, #0x1d
    // bl ov08_02221E6C
    // ldr r1, _022221C4 ; =0x00001FA2
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // mov r2, #0
    // bl ov08_02221EE8
    // ldr r1, _022221C4 ; =0x00001FA2
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // mov r2, #0
    // bl ov08_02221F98
    // ldr r0, _022221C8 ; =0x00001FA1
    // mov r1, #0
    // strb r1, [r4, r0]
    // add r1, r0, #2
    // ldrb r2, [r4, r1]
    // mov r1, #0x80
    // add r0, r0, #2
    // bic r2, r1
    // strb r2, [r4, r0]
    // pop {r4, pc}
    // nop
    // _022221C0: .word 0x00001FA3
    // _022221C4: .word 0x00001FA2
    // _022221C8: .word 0x00001FA1
    // TODO: decompile
}



void ov08_022221CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // cmp r1, #9
    // bls _022221D6
    // b _0222251E
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022221E2: ; jump table
    // mov r5, #0
    // mov r6, #3
    // mov r7, #1
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov08_0221D5DC
    // cmp r0, #0
    // bne _02222218
    // lsl r1, r5, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // add r2, r6, #0
    // add r3, r7, #0
    // bl ov08_02221E6C
    // b _0222223E
    // cmp r0, #1
    // bne _0222222C
    // lsl r1, r5, #0x18
    // mov r2, #0
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl ov08_02221E6C
    // b _0222223E
    // cmp r0, #2
    // bne _0222223E
    // lsl r1, r5, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // mov r2, #0
    // mov r3, #1
    // bl ov08_02221E6C
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #6
    // blo _022221FC
    // ldr r0, [r4]
    // add r0, #0x35
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02222260
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #3
    // mov r3, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #7
    // add r3, r2, #0
    // bl ov08_02221E6C
    // ldr r0, [r4]
    // ldrb r1, [r0, #0x11]
    // mov r0, #0x50
    // mul r0, r1
    // add r0, r4, r0
    // ldrb r0, [r0, #0x1b]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // beq _022222B0
    // add r0, r4, #0
    // mov r1, #8
    // mov r2, #3
    // mov r3, #0
    // bl ov08_02221E6C
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #3
    // mov r3, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #8
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0xa
    // add r3, r2, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov08_02222564
    // cmp r0, #1
    // bne _022222EC
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0xc
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0xd
    // add r3, r2, #0
    // bl ov08_02221E6C
    // b _02222304
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #3
    // mov r3, #0
    // bl ov08_02221E6C
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #3
    // mov r3, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0xb
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // bl ov08_02222564
    // cmp r0, #1
    // bne _02222340
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0xc
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0xd
    // add r3, r2, #0
    // bl ov08_02221E6C
    // b _02222358
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #3
    // mov r3, #0
    // bl ov08_02221E6C
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #3
    // mov r3, #0
    // bl ov08_02221E6C
    // mov r5, #0
    // mov r7, #3
    // mov r6, #0x50
    // ldr r0, [r4]
    // lsl r1, r5, #3
    // ldrb r0, [r0, #0x11]
    // add r2, r0, #0
    // mul r2, r6
    // add r0, r4, r2
    // add r0, r1, r0
    // ldrh r0, [r0, #0x34]
    // cmp r0, #0
    // beq _02222386
    // add r1, r5, #0
    // add r1, #0xe
    // lsl r1, r1, #0x18
    // mov r2, #0
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl ov08_02221E6C
    // b _02222398
    // add r1, r5, #0
    // add r1, #0xe
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // add r2, r7, #0
    // mov r3, #0
    // bl ov08_02221E6C
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #4
    // blo _0222235E
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #9
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r5, #0
    // mov r6, #2
    // add r7, r5, #0
    // ldr r0, [r4]
    // add r0, #0x34
    // ldrb r0, [r0]
    // cmp r0, r5
    // bne _022223EA
    // add r1, r5, #0
    // add r1, #0x1e
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // add r2, r6, #0
    // add r3, r7, #0
    // bl ov08_02221E6C
    // b _022223FC
    // add r1, r5, #0
    // add r1, #0x1e
    // lsl r1, r1, #0x18
    // mov r2, #0
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl ov08_02221E6C
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #4
    // blo _022223CC
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r5, #0
    // mov r7, #3
    // mov r6, #0x50
    // ldr r0, [r4]
    // lsl r1, r5, #3
    // ldrb r0, [r0, #0x11]
    // add r2, r0, #0
    // mul r2, r6
    // add r0, r4, r2
    // add r0, r1, r0
    // ldrh r0, [r0, #0x34]
    // cmp r0, #0
    // beq _02222436
    // add r1, r5, #0
    // add r1, #0x13
    // lsl r1, r1, #0x18
    // mov r2, #0
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl ov08_02221E6C
    // b _02222448
    // add r1, r5, #0
    // add r1, #0x13
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // add r2, r7, #0
    // mov r3, #0
    // bl ov08_02221E6C
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #4
    // blo _0222240E
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0
    // mov r1, #0x17
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0x18
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0x19
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0x1a
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0x1b
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl ov08_02221E6C
    // ldr r0, _02222520 ; =0x00002077
    // ldrb r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // cmp r0, #1
    // bne _0222251E
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0x12
    // add r3, r2, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0
    // mov r1, #0x1c
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl ov08_02221E6C
    // ldr r0, _02222520 ; =0x00002077
    // ldrb r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // cmp r0, #1
    // bne _0222251E
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0x12
    // add r3, r2, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0
    // mov r1, #0x1d
    // add r3, r2, #0
    // bl ov08_02221E6C
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #6
    // add r3, r2, #0
    // bl ov08_02221E6C
    // ldr r0, _02222520 ; =0x00002077
    // ldrb r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // cmp r0, #1
    // bne _0222251E
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #0x12
    // add r3, r2, #0
    // bl ov08_02221E6C
    // pop {r3, r4, r5, r6, r7, pc}
    // _02222520: .word 0x00002077
    // TODO: decompile
}



void ov08_02222524(void) {
    // push {r3, lr}
    // add r2, r0, #0
    // cmp r1, #3
    // bne _02222546
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // mov r1, #0x7e
    // lsl r1, r1, #6
    // ldr r0, [r2, r0]
    // add r1, r2, r1
    // mov r2, #1
    // mov r3, #0xc0
    // bl PaletteData_LoadPalette
    // pop {r3, pc}
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x7a
    // lsl r0, r0, #2
    // ldr r1, _02222560 ; =0x00001F60
    // ldr r0, [r2, r0]
    // add r1, r2, r1
    // mov r2, #1
    // mov r3, #0xc0
    // bl PaletteData_LoadPalette
    // pop {r3, pc}
    // nop
    // _02222560: .word 0x00001F60
    // TODO: decompile
}



void ov08_02222564(void) {
    // push {r4, r5}
    // mov r2, #0
    // add r1, r2, #0
    // mov r3, #0x50
    // add r4, r1, #0
    // mul r4, r3
    // add r5, r0, r4
    // ldrh r4, [r5, #8]
    // cmp r4, #0
    // beq _02222586
    // ldrb r4, [r5, #0x1b]
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x1f
    // bne _02222586
    // add r2, r2, #1
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x10
    // add r1, r1, #1
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // cmp r1, #6
    // blo _0222256C
    // cmp r2, #2
    // blo _02222598
    // mov r0, #1
    // b _0222259A
    // mov r0, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}



void ov08_022225A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4]
    // ldrb r1, [r1, #0x11]
    // bl ov08_0221D5DC
    // cmp r0, #2
    // bne _022225C4
    // ldr r1, [r4]
    // add r0, r4, #0
    // ldrb r1, [r1, #0x11]
    // mov r2, #0
    // mov r3, #1
    // bl ov08_02221E6C
    // pop {r4, pc}
    // ldr r1, [r4]
    // mov r2, #0
    // ldrb r1, [r1, #0x11]
    // add r0, r4, #0
    // add r3, r2, #0
    // bl ov08_02221E6C
    // pop {r4, pc}
    // TODO: decompile
}



void ov08_022225D4(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _02222664 ; =ov08_02222670
    // ldr r1, _02222668 ; =0x0000115C
    // ldr r3, [r5, #0xc]
    // mov r2, #0x64
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // ldr r2, _02222668 ; =0x0000115C
    // add r4, r0, #0
    // mov r1, #0
    // bl memset
    // str r5, [r4]
    // ldr r0, [r5]
    // bl BattleSystem_GetBgConfig
    // str r0, [r4, #4]
    // ldr r0, [r5]
    // bl BattleSystem_GetPaletteData
    // str r0, [r4, #8]
    // ldr r0, _0222266C ; =0x0000114A
    // mov r1, #0
    // strb r1, [r4, r0]
    // ldr r0, [r5]
    // bl BattleSystem_GetBagCursor
    // add r6, r0, #0
    // mov r5, #0
    // ldr r3, [r4]
    // add r0, r6, #0
    // add r2, r3, #0
    // add r2, #0x27
    // add r3, #0x2c
    // add r1, r5, #0
    // add r2, r2, r5
    // add r3, r3, r5
    // bl BagCursor_Battle_PocketGetPosition
    // add r0, r5, #1
    // lsl r0, r0, #0x18
    // lsr r5, r0, #0x18
    // cmp r5, #5
    // blo _02222614
    // add r0, r6, #0
    // bl BagCursor_Battle_GetLastUsedItem
    // ldr r1, [r4]
    // strh r0, [r1, #0x20]
    // add r0, r6, #0
    // bl BagCursor_Battle_GetLastUsedPocket
    // ldr r1, [r4]
    // strb r0, [r1, #0x1f]
    // add r0, r4, #0
    // bl ov08_02223B78
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // lsl r1, r1, #0xa
    // tst r0, r1
    // beq _02222662
    // ldr r0, [r4]
    // mov r1, #1
    // str r1, [r0, #0x14]
    // pop {r4, r5, r6, pc}
    // _02222664: .word ov08_02222670
    // _02222668: .word 0x0000115C
    // _0222266C: .word 0x0000114A
    // TODO: decompile
}



void ov08_02222670(void) {
    // push {r4, lr}
    // ldr r2, _02222768 ; =0x0000114A
    // add r4, r1, #0
    // ldrb r2, [r4, r2]
    // cmp r2, #0xe
    // bhi _02222756
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _02222688: ; jump table
    // add r0, r4, #0
    // bl ov08_0222276C
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222840
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222918
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222AF0
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222D78
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222D84
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222D90
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222A78
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222D9C
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222DAC
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222DC4
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222DEC
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222EC4
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // add r0, r4, #0
    // bl ov08_02222E04
    // ldr r1, _02222768 ; =0x0000114A
    // strb r0, [r4, r1]
    // b _02222756
    // bl ov08_02222E2C
    // cmp r0, #1
    // beq _02222766
    // add r0, r4, #0
    // bl ov08_02224974
    // mov r0, #0xc3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl SpriteSystem_DrawSprites
    // pop {r4, pc}
    // _02222768: .word 0x0000114A
    // TODO: decompile
}



void ov08_0222276C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, _02222830 ; =0x04001050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, [r4]
    // ldr r0, [r0, #0xc]
    // bl ov08_02224B64
    // str r0, [r4, #0x34]
    // add r0, r4, #0
    // bl ov08_02223000
    // add r0, r4, #0
    // bl ov08_022230F4
    // add r0, r4, #0
    // bl ov08_022231E8
    // ldr r1, [r4]
    // mov r0, #4
    // ldr r1, [r1, #0xc]
    // bl FontID_Alloc
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl BattleSystem_GetBagCursor
    // bl BagCursor_Battle_GetPocket
    // ldr r1, _02222834 ; =0x0000114D
    // strb r0, [r4, r1]
    // add r0, r4, #0
    // bl ov08_02223BF4
    // ldr r1, _02222838 ; =0x0000114C
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_02224A50
    // add r0, r4, #0
    // bl ov08_022233B8
    // ldr r1, _02222838 ; =0x0000114C
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_02223480
    // add r0, r4, #0
    // bl ov08_02223D08
    // ldr r1, _02222838 ; =0x0000114C
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_02223F94
    // ldr r0, [r4]
    // add r0, #0x25
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _022227F0
    // ldr r0, [r4, #0x34]
    // mov r1, #1
    // bl ov08_02224B90
    // ldr r1, _02222838 ; =0x0000114C
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_02224134
    // ldr r1, _02222838 ; =0x0000114C
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_0222421C
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r1, #0xa
    // str r0, [sp, #8]
    // add r3, r1, #0
    // ldr r0, [r4, #8]
    // ldr r2, _0222283C ; =0x0000FFFF
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // ldr r0, [r4]
    // ldr r0, [r0, #0x14]
    // cmp r0, #1
    // bne _0222282A
    // add sp, #0xc
    // mov r0, #0xc
    // pop {r3, r4, pc}
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _02222830: .word 0x04001050
    // _02222834: .word 0x0000114D
    // _02222838: .word 0x0000114C
    // _0222283C: .word 0x0000FFFF
    // TODO: decompile
}



void ov08_02222840(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _02222852
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r1, _0222290C ; =ov08_02225B4C
    // add r0, r4, #0
    // bl ov08_02223368
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _02222878
    // ldr r0, [r4, #0x34]
    // bl ov08_02224C94
    // add r5, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bne _0222287E
    // mov r5, #5
    // b _0222287E
    // add r0, r4, #0
    // bl ov08_0222417C
    // cmp r5, #5
    // bhi _02222908
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222288E: ; jump table
    // ldr r0, _02222910 ; =0x000005DD
    // bl PlaySE
    // lsl r0, r5, #0x18
    // lsr r1, r0, #0x18
    // ldr r0, _02222914 ; =0x0000114D
    // mov r2, #5
    // strb r1, [r4, r0]
    // sub r0, r0, #2
    // strb r2, [r4, r0]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov08_02224938
    // mov r0, #0xb
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4]
    // ldrh r0, [r0, #0x20]
    // cmp r0, #0
    // beq _02222908
    // ldr r0, _02222910 ; =0x000005DD
    // bl PlaySE
    // ldr r0, [r4]
    // ldrb r1, [r0, #0x1f]
    // ldr r0, _02222914 ; =0x0000114D
    // strb r1, [r4, r0]
    // mov r1, #6
    // sub r0, r0, #2
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // bl ov08_02223BA8
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0
    // bl ov08_02224938
    // mov r0, #0xb
    // pop {r3, r4, r5, pc}
    // ldr r0, _02222910 ; =0x000005DD
    // bl PlaySE
    // ldr r0, [r4]
    // mov r2, #0
    // strh r2, [r0, #0x1c]
    // ldr r0, [r4]
    // mov r1, #4
    // strb r1, [r0, #0x1e]
    // add r0, r4, #0
    // mov r1, #5
    // bl ov08_02224938
    // mov r0, #0xd
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0222290C: .word ov08_02225B4C
    // _02222910: .word 0x000005DD
    // _02222914: .word 0x0000114D
    // TODO: decompile
}



void ov08_02222918(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _02222A64 ; =ov08_02225B68
    // add r4, r0, #0
    // bl ov08_02223368
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _0222298C
    // ldr r0, [r4, #0x34]
    // bl ov08_02224B8C
    // add r6, r0, #0
    // ldr r0, [r4, #0x34]
    // bl ov08_02224B88
    // add r7, r0, #0
    // ldr r0, [r4, #0x34]
    // bl ov08_02224C94
    // add r5, r0, #0
    // ldr r0, [r4, #0x34]
    // bl ov08_02224B88
    // mov r1, #1
    // mvn r1, r1
    // cmp r5, r1
    // bne _02222956
    // mov r5, #6
    // b _02222992
    // cmp r6, #1
    // bne _02222992
    // cmp r7, r0
    // bne _02222992
    // ldr r1, _02222A68 ; =gSystem
    // mov r2, #0x20
    // ldr r1, [r1, #0x4c]
    // tst r2, r1
    // beq _02222976
    // cmp r0, #0
    // beq _02222974
    // cmp r0, #2
    // beq _02222974
    // cmp r0, #4
    // bne _02222976
    // mov r5, #7
    // mov r2, #0x10
    // tst r1, r2
    // beq _02222992
    // cmp r0, #1
    // beq _02222988
    // cmp r0, #3
    // beq _02222988
    // cmp r0, #5
    // bne _02222992
    // mov r5, #8
    // b _02222992
    // add r0, r4, #0
    // bl ov08_0222417C
    // cmp r5, #8
    // bhi _02222A60
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022229A2: ; jump table
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov08_02223CD4
    // cmp r0, #0
    // beq _02222A60
    // ldr r0, _02222A6C ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02222A70 ; =0x0000114D
    // ldr r2, [r4]
    // ldrb r1, [r4, r0]
    // sub r0, r0, #2
    // add r1, r2, r1
    // add r1, #0x27
    // strb r5, [r1]
    // mov r1, #6
    // strb r1, [r4, r0]
    // add r1, r5, #6
    // lsl r1, r1, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // mov r2, #0
    // bl ov08_02224938
    // mov r0, #0xb
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02222A6C ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02222A74 ; =0x0000114B
    // mov r1, #4
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r2, #0
    // bl ov08_02224938
    // mov r0, #0xb
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02222A70 ; =0x0000114D
    // ldrb r1, [r4, r0]
    // add r0, r0, #7
    // add r1, r4, r1
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // beq _02222A60
    // ldr r0, _02222A6C ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02222A74 ; =0x0000114B
    // mov r1, #7
    // strb r1, [r4, r0]
    // sub r1, #8
    // add r0, r0, #3
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0
    // bl ov08_02224938
    // mov r0, #0xb
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02222A70 ; =0x0000114D
    // ldrb r1, [r4, r0]
    // add r0, r0, #7
    // add r1, r4, r1
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // beq _02222A60
    // ldr r0, _02222A6C ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02222A74 ; =0x0000114B
    // mov r1, #7
    // strb r1, [r4, r0]
    // mov r1, #1
    // add r0, r0, #3
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #0
    // bl ov08_02224938
    // mov r0, #0xb
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // _02222A64: .word ov08_02225B68
    // _02222A68: .word gSystem
    // _02222A6C: .word 0x000005DD
    // _02222A70: .word 0x0000114D
    // _02222A74: .word 0x0000114B
    // TODO: decompile
}



void ov08_02222A78(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, _02222AE8 ; =0x0000114D
    // ldr r1, [r4]
    // ldrb r2, [r4, r0]
    // mov r3, #0
    // add r5, r1, r2
    // mov r1, #0x2c
    // ldrsb r2, [r5, r1]
    // add r5, #0x27
    // add r1, r0, #1
    // strb r3, [r5]
    // ldrsb r1, [r4, r1]
    // add r1, r2, r1
    // lsl r1, r1, #0x18
    // asr r2, r1, #0x18
    // ldrb r1, [r4, r0]
    // add r0, r0, #7
    // add r5, r4, r1
    // ldrb r5, [r5, r0]
    // cmp r2, r5
    // ble _02222AAE
    // ldr r0, [r4]
    // add r0, r0, r1
    // add r0, #0x2c
    // strb r3, [r0]
    // b _02222AC2
    // cmp r2, #0
    // ldr r0, [r4]
    // bge _02222ABC
    // add r0, r0, r1
    // add r0, #0x2c
    // strb r5, [r0]
    // b _02222AC2
    // add r0, r0, r1
    // add r0, #0x2c
    // strb r2, [r0]
    // add r0, r4, #0
    // bl ov08_0222377C
    // add r0, r4, #0
    // bl ov08_022237C4
    // ldr r1, _02222AEC ; =0x0000114C
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_02223F94
    // ldr r1, _02222AEC ; =0x0000114C
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_02224A50
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // nop
    // _02222AE8: .word 0x0000114D
    // _02222AEC: .word 0x0000114C
    // TODO: decompile
}



void ov08_02222AF0(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _02222B7C ; =ov08_02225ADC
    // add r5, r0, #0
    // bl ov08_02223368
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _02222B18
    // ldr r0, [r5, #0x34]
    // bl ov08_02224C94
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // bne _02222B1E
    // mov r4, #1
    // b _02222B1E
    // add r0, r5, #0
    // bl ov08_0222417C
    // cmp r4, #0
    // beq _02222B28
    // cmp r4, #1
    // beq _02222B5E
    // b _02222B78
    // ldr r0, _02222B80 ; =0x000005DD
    // bl PlaySE
    // ldr r1, _02222B84 ; =0x0000114D
    // ldr r2, [r5]
    // ldrb r1, [r5, r1]
    // add r0, r5, #0
    // add r1, r2, r1
    // add r1, #0x27
    // ldrb r1, [r1]
    // bl ov08_02223CD4
    // ldr r1, [r5]
    // mov r2, #0
    // strh r0, [r1, #0x1c]
    // ldr r0, _02222B84 ; =0x0000114D
    // ldrb r1, [r5, r0]
    // ldr r0, [r5]
    // strb r1, [r0, #0x1e]
    // add r0, r5, #0
    // mov r1, #0xf
    // bl ov08_02224938
    // add r0, r5, #0
    // bl ov08_02222B8C
    // pop {r3, r4, r5, pc}
    // ldr r0, _02222B80 ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02222B88 ; =0x0000114B
    // mov r1, #5
    // strb r1, [r5, r0]
    // add r0, r5, #0
    // mov r1, #0x10
    // mov r2, #0
    // bl ov08_02224938
    // mov r0, #0xb
    // pop {r3, r4, r5, pc}
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // _02222B7C: .word ov08_02225ADC
    // _02222B80: .word 0x000005DD
    // _02222B84: .word 0x0000114D
    // _02222B88: .word 0x0000114B
    // TODO: decompile
}



void ov08_02222B8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _02222D6C ; =0x0000114D
    // add r5, r0, #0
    // ldrb r1, [r5, r1]
    // ldr r4, [r5]
    // cmp r1, #3
    // beq _02222B9C
    // b _02222CB6
    // bl ov08_02223374
    // add r7, r0, #0
    // ldrh r0, [r4, #0x1c]
    // ldr r2, [r4, #0xc]
    // mov r1, #7
    // bl GetItemAttr
    // add r6, r0, #0
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // beq _02222C0E
    // ldrh r0, [r4, #0x1c]
    // cmp r0, #0x37
    // beq _02222C0E
    // cmp r6, #3
    // beq _02222C0E
    // ldr r0, [r4]
    // ldr r1, [r4, #0x10]
    // add r2, r7, #0
    // bl BattleSystem_GetPartyMon
    // add r6, r0, #0
    // ldr r0, [r5, #0x10]
    // mov r1, #0x2e
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r6, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // bl BufferBoxMonNickname
    // ldr r0, [r5, #0x14]
    // ldr r2, _02222D70 ; =MOVE_EMBARGO
    // mov r1, #1
    // bl BufferMoveName
    // ldr r0, [r5, #0x14]
    // ldr r1, [r5, #0x18]
    // add r2, r4, #0
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl ov08_02223B20
    // ldr r0, _02222D74 ; =0x0000114B
    // mov r1, #8
    // strb r1, [r5, r0]
    // mov r0, #9
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r4, #0x1c]
    // add r2, r7, #0
    // mov r3, #0
    // str r0, [sp]
    // ldr r0, [r4]
    // ldr r1, [r4, #0x10]
    // bl BattleSystem_RecoverStatus
    // cmp r0, #1
    // bne _02222C34
    // ldr r2, _02222D6C ; =0x0000114D
    // ldrh r1, [r4, #0x1c]
    // ldrb r2, [r5, r2]
    // ldr r0, [r4]
    // ldr r3, [r4, #0xc]
    // bl ov08_02223390
    // mov r0, #0xd
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r6, #3
    // bne _02222C9C
    // ldr r0, [r4]
    // bl BattleSystem_GetBattleType
    // mov r1, #1
    // tst r0, r1
    // bne _02222C56
    // ldr r2, _02222D6C ; =0x0000114D
    // ldrh r1, [r4, #0x1c]
    // ldrb r2, [r5, r2]
    // ldr r0, [r4]
    // ldr r3, [r4, #0xc]
    // bl ov08_02223390
    // mov r0, #0xd
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r3, [r4, #0xc]
    // add r0, r1, #0
    // mov r1, #0x1b
    // mov r2, #0x28
    // bl NewMsgDataFromNarc
    // mov r1, #0x25
    // add r7, r0, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r0, [r5, #0x14]
    // ldr r2, [r4, #4]
    // mov r1, #0
    // bl BufferPlayersName
    // ldr r0, [r5, #0x14]
    // ldr r1, [r5, #0x18]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r0, r5, #0
    // bl ov08_02223B20
    // ldr r0, _02222D74 ; =0x0000114B
    // mov r1, #8
    // strb r1, [r5, r0]
    // mov r0, #9
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0x10]
    // ldr r2, [r5, #0x18]
    // mov r1, #0x22
    // bl ReadMsgDataIntoString
    // add r0, r5, #0
    // bl ov08_02223B20
    // ldr r0, _02222D74 ; =0x0000114B
    // mov r1, #8
    // strb r1, [r5, r0]
    // mov r0, #9
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r1, #2
    // bne _02222D66
    // add r0, r4, #0
    // add r0, #0x22
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02222CDE
    // ldr r0, [r5, #0x10]
    // ldr r2, [r5, #0x18]
    // mov r1, #0x2c
    // bl ReadMsgDataIntoString
    // add r0, r5, #0
    // bl ov08_02223B20
    // ldr r0, _02222D74 ; =0x0000114B
    // mov r1, #8
    // strb r1, [r5, r0]
    // mov r0, #9
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0x23
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02222D02
    // ldr r0, [r5, #0x10]
    // ldr r2, [r5, #0x18]
    // mov r1, #0x2f
    // bl ReadMsgDataIntoString
    // add r0, r5, #0
    // bl ov08_02223B20
    // ldr r0, _02222D74 ; =0x0000114B
    // mov r1, #8
    // strb r1, [r5, r0]
    // mov r0, #9
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _02222D26
    // ldr r0, [r5, #0x10]
    // ldr r2, [r5, #0x18]
    // mov r1, #0x30
    // bl ReadMsgDataIntoString
    // add r0, r5, #0
    // bl ov08_02223B20
    // ldr r0, _02222D74 ; =0x0000114B
    // mov r1, #8
    // strb r1, [r5, r0]
    // mov r0, #9
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r4]
    // ldr r1, [r4, #0x10]
    // bl BattleSystem_GetParty
    // add r6, r0, #0
    // ldr r0, [r4]
    // bl BattleSystem_GetPcStorage
    // add r4, r0, #0
    // add r0, r6, #0
    // bl Party_GetCount
    // cmp r0, #6
    // bne _02222D66
    // add r0, r4, #0
    // bl PCStorage_FindFirstBoxWithEmptySlot
    // cmp r0, #0x12
    // bne _02222D66
    // ldr r0, [r5, #0x10]
    // ldr r2, [r5, #0x18]
    // mov r1, #0x2d
    // bl ReadMsgDataIntoString
    // add r0, r5, #0
    // bl ov08_02223B20
    // ldr r0, _02222D74 ; =0x0000114B
    // mov r1, #8
    // strb r1, [r5, r0]
    // mov r0, #9
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0xd
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02222D6C: .word 0x0000114D
    // _02222D70: .word MOVE_EMBARGO
    // _02222D74: .word 0x0000114B
    // TODO: decompile
}



void ov08_02222D78(void) {
}



void ov08_02222D84(void) {
}



void ov08_02222D90(void) {
}



void ov08_02222D9C(void) {
}



void ov08_02222DAC(void) {
}



void ov08_02222DC4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02222DE4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _02222DDA
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _02222DE0
    // ldr r0, _02222DE8 ; =0x0000114B
    // ldrb r0, [r4, r0]
    // pop {r4, pc}
    // mov r0, #0xa
    // pop {r4, pc}
    // _02222DE4: .word gSystem
    // _02222DE8: .word 0x0000114B
    // TODO: decompile
}



void ov08_02222DEC(void) {
    // ldr r1, _02222E00 ; =0x0000113E
    // ldrb r2, [r0, r1]
    // cmp r2, #2
    // bne _02222DFA
    // add r1, #0xd
    // ldrb r0, [r0, r1]
    // bx lr
    // mov r0, #0xb
    // bx lr
    // nop
    // _02222E00: .word 0x0000113E
    // TODO: decompile
}



void ov08_02222E04(void) {
    // push {lr}
    // sub sp, #0xc
    // mov r2, #0
    // str r2, [sp]
    // mov r1, #0x10
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // mov r1, #0xa
    // add r3, r1, #0
    // ldr r0, [r0, #8]
    // ldr r2, _02222E28 ; =0x0000FFFF
    // sub r3, #0x12
    // bl PaletteData_BeginPaletteFade
    // mov r0, #0xe
    // add sp, #0xc
    // pop {pc}
    // nop
    // _02222E28: .word 0x0000FFFF
    // TODO: decompile
}



void ov08_02222E2C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r7, r0, #0
    // ldr r0, [r5, #8]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _02222E40
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov08_02223F34
    // add r0, r5, #0
    // bl ov08_02223464
    // add r0, r5, #0
    // bl ov08_02223228
    // ldr r0, [r5, #4]
    // bl ov08_022230CC
    // ldr r0, [r5, #0x34]
    // bl ov08_02224B8C
    // ldr r1, [r5]
    // add r1, #0x25
    // strb r0, [r1]
    // ldr r0, [r5, #0x34]
    // bl ov08_02224B7C
    // mov r0, #4
    // bl FontID_Release
    // ldr r1, [r5]
    // ldrh r0, [r1, #0x1c]
    // cmp r0, #0
    // beq _02222EAC
    // ldr r0, [r1]
    // bl BattleSystem_GetBagCursor
    // add r6, r0, #0
    // mov r4, #0
    // ldr r3, [r5]
    // add r0, r6, #0
    // add r2, r3, r4
    // add r3, r3, r4
    // add r2, #0x27
    // add r3, #0x2c
    // ldrb r2, [r2]
    // ldrb r3, [r3]
    // add r1, r4, #0
    // bl BagCursor_Battle_PocketSetPosition
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #5
    // blo _02222E82
    // ldr r1, _02222EC0 ; =0x0000114D
    // add r0, r6, #0
    // ldrb r1, [r5, r1]
    // bl BagCursor_Battle_SetPocket
    // ldr r0, [r5]
    // mov r1, #1
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, r7, #0
    // bl DestroySysTaskAndEnvironment
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02222EC0: .word 0x0000114D
    // TODO: decompile
}



void ov08_02222EC4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _02222ED6
    // mov r0, #0xc
    // pop {r4, pc}
    // ldr r0, _02222FF0 ; =0x00001159
    // ldrb r0, [r4, r0]
    // cmp r0, #4
    // bls _02222EE0
    // b _02222FEA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02222EEC: ; jump table
    // ldr r0, [r4, #0x38]
    // bl ov12_0226BD50
    // cmp r0, #1
    // bne _02222F2E
    // ldr r0, _02222FF4 ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02222FF8 ; =0x0000114D
    // mov r1, #2
    // strb r1, [r4, r0]
    // mov r2, #0xc
    // sub r0, r0, #2
    // strb r2, [r4, r0]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov08_02224938
    // ldr r0, _02222FFC ; =0x0000115A
    // mov r1, #0
    // strb r1, [r4, r0]
    // sub r1, r0, #1
    // ldrb r1, [r4, r1]
    // sub r0, r0, #1
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // mov r0, #0xb
    // pop {r4, pc}
    // ldr r0, _02222FFC ; =0x0000115A
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _02222FEA
    // add r0, r4, #0
    // bl ov08_02222D84
    // ldr r0, _02222FF0 ; =0x00001159
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _02222FEA
    // ldr r0, [r4, #0x38]
    // bl ov12_0226BD50
    // cmp r0, #1
    // bne _02222F88
    // ldr r0, _02222FF4 ; =0x000005DD
    // bl PlaySE
    // ldr r0, _02222FF8 ; =0x0000114D
    // ldr r3, [r4]
    // ldrb r1, [r4, r0]
    // mov r2, #0
    // sub r0, r0, #2
    // add r1, r3, r1
    // add r1, #0x27
    // strb r2, [r1]
    // mov r1, #0xc
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #6
    // bl ov08_02224938
    // ldr r0, _02222FFC ; =0x0000115A
    // mov r1, #0
    // strb r1, [r4, r0]
    // sub r1, r0, #1
    // ldrb r1, [r4, r1]
    // sub r0, r0, #1
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // mov r0, #0xb
    // pop {r4, pc}
    // ldr r0, _02222FFC ; =0x0000115A
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _02222FEA
    // add r0, r4, #0
    // bl ov08_02222D90
    // ldr r0, _02222FF0 ; =0x00001159
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _02222FEA
    // ldr r0, [r4, #0x38]
    // bl ov12_0226BD50
    // cmp r0, #1
    // bne _02222FE2
    // ldr r0, _02222FF4 ; =0x000005DD
    // bl PlaySE
    // ldr r1, _02222FF8 ; =0x0000114D
    // ldr r2, [r4]
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // add r1, r2, r1
    // add r1, #0x27
    // ldrb r1, [r1]
    // bl ov08_02223CD4
    // ldr r1, [r4]
    // mov r2, #0
    // strh r0, [r1, #0x1c]
    // ldr r0, _02222FF8 ; =0x0000114D
    // ldrb r1, [r4, r0]
    // ldr r0, [r4]
    // strb r1, [r0, #0x1e]
    // add r0, r4, #0
    // mov r1, #0xf
    // bl ov08_02224938
    // add r0, r4, #0
    // bl ov08_02222B8C
    // pop {r4, pc}
    // ldr r0, _02222FFC ; =0x0000115A
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // mov r0, #0xc
    // pop {r4, pc}
    // nop
    // _02222FF0: .word 0x00001159
    // _02222FF4: .word 0x000005DD
    // _02222FF8: .word 0x0000114D
    // _02222FFC: .word 0x0000115A
    // TODO: decompile
}



void ov08_02223000(void) {
    // push {r4, r5, lr}
    // sub sp, #0x64
    // ldr r5, _022230BC ; =ov08_02225AE8
    // add r3, sp, #0x54
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // mov r1, #1
    // bl SetScreenModeAndDisable
    // ldr r5, _022230C0 ; =ov08_02225B30
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #6
    // str r0, [r3]
    // ldr r0, [r4, #4]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _022230C4 ; =ov08_02225B14
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // ldr r0, [r4, #4]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #4]
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _022230C8 ; =ov08_02225AF8
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // ldr r0, [r4, #4]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #4]
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r3, [r4]
    // mov r0, #5
    // ldr r3, [r3, #0xc]
    // mov r1, #0x20
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // ldr r3, [r4]
    // mov r0, #4
    // ldr r3, [r3, #0xc]
    // mov r1, #0x20
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #4]
    // mov r1, #5
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [r4, #4]
    // mov r1, #4
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x64
    // pop {r4, r5, pc}
    // _022230BC: .word ov08_02225AE8
    // _022230C0: .word ov08_02225B30
    // _022230C4: .word ov08_02225B14
    // _022230C8: .word ov08_02225AF8
    // TODO: decompile
}



void ov08_022230CC(void) {
}



void ov08_022230F4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x4d
    // ldr r1, [r1, #0xc]
    // bl NARC_New
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [r5]
    // mov r3, #6
    // ldr r1, [r1, #0xc]
    // add r4, r0, #0
    // str r1, [sp, #0xc]
    // ldr r2, [r5, #4]
    // mov r1, #2
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r5]
    // mov r3, #6
    // ldr r0, [r0, #0xc]
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #4]
    // add r0, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r2, [r5]
    // add r0, r4, #0
    // ldr r2, [r2, #0xc]
    // mov r1, #1
    // bl NARC_AllocAndReadWholeMember
    // add r1, sp, #0x10
    // add r6, r0, #0
    // bl NNS_G2dGetUnpackedScreenData
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // add r1, #0xc
    // bl ov08_02224254
    // add r0, r6, #0
    // bl Heap_Free
    // add r0, r4, #0
    // bl NARC_Delete
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #6
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r3, [r5]
    // ldr r0, [r5, #8]
    // ldr r3, [r3, #0xc]
    // mov r1, #0x4d
    // mov r2, #3
    // bl PaletteData_LoadNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xf0
    // str r0, [sp, #8]
    // ldr r3, [r5]
    // ldr r0, [r5, #8]
    // ldr r3, [r3, #0xc]
    // mov r1, #0x10
    // mov r2, #8
    // bl PaletteData_LoadNarc
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl BattleSystem_GetFrame
    // add r4, r0, #0
    // bl sub_0200E63C
    // add r1, r0, #0
    // ldr r0, _022231E4 ; =0x000003E2
    // mov r3, #4
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // ldr r0, [r0, #0xc]
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #4]
    // mov r0, #0x26
    // bl GfGfxLoader_LoadCharData
    // add r0, r4, #0
    // bl sub_0200E640
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0xe0
    // str r0, [sp, #8]
    // ldr r3, [r5]
    // ldr r0, [r5, #8]
    // ldr r3, [r3, #0xc]
    // mov r1, #0x26
    // bl PaletteData_LoadNarc
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _022231E4: .word 0x000003E2
    // TODO: decompile
}



void ov08_022231E8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r3, [r4]
    // mov r0, #0
    // ldr r3, [r3, #0xc]
    // mov r1, #0x1b
    // mov r2, #5
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x10]
    // ldr r3, [r4]
    // mov r0, #0xf
    // ldr r3, [r3, #0xc]
    // mov r1, #0xe
    // mov r2, #0
    // bl MessagePrinter_New
    // str r0, [r4, #0xc]
    // ldr r0, [r4]
    // ldr r0, [r0, #0xc]
    // bl MessageFormat_New
    // str r0, [r4, #0x14]
    // ldr r1, [r4]
    // mov r0, #2
    // ldr r1, [r1, #0xc]
    // lsl r0, r0, #8
    // bl String_New
    // str r0, [r4, #0x18]
    // pop {r4, pc}
    // TODO: decompile
}



void ov08_02223228(void) {
}



void ov08_02223248(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #0
    // beq _0222325A
    // cmp r1, #1
    // beq _02223274
    // cmp r1, #2
    // beq _02223290
    // pop {r4, pc}
    // mov r2, #0
    // ldr r0, [r4, #4]
    // mov r1, #6
    // add r3, r2, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r4, #4]
    // mov r1, #6
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // pop {r4, pc}
    // mov r1, #6
    // add r3, r1, #0
    // ldr r0, [r4, #4]
    // mov r2, #0
    // add r3, #0xfa
    // bl ScheduleSetBgPosText
    // ldr r0, [r4, #4]
    // mov r1, #6
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // pop {r4, pc}
    // mov r2, #0
    // ldr r0, [r4, #4]
    // mov r1, #6
    // add r3, r2, #0
    // bl ScheduleSetBgPosText
    // mov r2, #3
    // add r3, r2, #0
    // ldr r0, [r4, #4]
    // mov r1, #6
    // add r3, #0xfd
    // bl ScheduleSetBgPosText
    // pop {r4, pc}
    // TODO: decompile
}



void ov08_022232AC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // cmp r1, #2
    // bne _022232F6
    // mov r0, #0x1c
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _022232FC ; =0x0000114D
    // mov r1, #6
    // ldrb r0, [r4, r0]
    // mov r2, #2
    // mov r3, #0x23
    // add r0, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [r4, #4]
    // bl BgTilemapRectChangePalette
    // mov r0, #0x1c
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // ldr r0, _022232FC ; =0x0000114D
    // mov r1, #6
    // ldrb r0, [r4, r0]
    // mov r2, #2
    // mov r3, #0x28
    // add r0, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // ldr r0, [r4, #4]
    // bl BgTilemapRectChangePalette
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _022232FC: .word 0x0000114D
    // TODO: decompile
}



void ov08_02223300(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov08_022232AC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02223248
    // ldr r0, [r5, #4]
    // mov r1, #4
    // mov r2, #0
    // bl BgFillTilemapBufferAndSchedule
    // ldr r0, [r5, #4]
    // mov r1, #5
    // mov r2, #0
    // bl BgFillTilemapBufferAndSchedule
    // add r0, r5, #0
    // bl ov08_02223454
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_022233DC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02223480
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02224A50
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02224134
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_0222421C
    // ldr r1, _02223364 ; =0x0000114C
    // add r0, r5, #0
    // strb r4, [r5, r1]
    // ldrb r1, [r5, r1]
    // bl ov08_02223F94
    // pop {r3, r4, r5, pc}
    // nop
    // _02223364: .word 0x0000114C
    // TODO: decompile
}



void ov08_02223368(void) {
}



void ov08_02223374(void) {
}



void ov08_02223390(void) {
}



void ov08_022233B8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r1, r4, #0
    // ldr r0, [r4, #4]
    // ldr r2, _022233D4 ; =ov08_02225B90
    // add r1, #0x1c
    // bl AddWindow
    // ldr r1, _022233D8 ; =0x0000114C
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov08_022233DC
    // pop {r4, pc}
    // _022233D4: .word ov08_02225B90
    // _022233D8: .word 0x0000114C
    // TODO: decompile
}



void ov08_022233DC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // cmp r1, #0
    // beq _022233EE
    // cmp r1, #1
    // beq _022233F8
    // cmp r1, #2
    // beq _02223402
    // b _0222340A
    // mov r1, #5
    // add r0, #0x30
    // ldr r6, _02223448 ; =ov08_02225BB8
    // strb r1, [r0]
    // b _0222340A
    // mov r1, #0x1a
    // add r0, #0x30
    // ldr r6, _0222344C ; =ov08_02225C10
    // strb r1, [r0]
    // b _0222340A
    // ldr r6, _02223450 ; =ov08_02225B98
    // mov r1, #4
    // add r0, #0x30
    // strb r1, [r0]
    // add r1, r5, #0
    // ldr r0, [r5]
    // add r1, #0x30
    // ldrb r1, [r1]
    // ldr r0, [r0, #0xc]
    // bl AllocWindows
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // add r0, #0x30
    // ldrb r0, [r0]
    // mov r4, #0
    // cmp r0, #0
    // bls _02223446
    // ldr r2, [r5, #0x2c]
    // lsl r1, r4, #4
    // add r1, r2, r1
    // lsl r2, r4, #3
    // ldr r0, [r5, #4]
    // add r2, r6, r2
    // bl AddWindow
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // add r0, #0x30
    // ldrb r0, [r0]
    // cmp r4, r0
    // blo _02223426
    // pop {r4, r5, r6, pc}
    // _02223448: .word ov08_02225BB8
    // _0222344C: .word ov08_02225C10
    // _02223450: .word ov08_02225B98
    // TODO: decompile
}



void ov08_02223454(void) {
    // add r1, r0, #0
    // ldr r0, [r1, #0x2c]
    // add r1, #0x30
    // ldr r3, _02223460 ; =WindowArray_Delete
    // ldrb r1, [r1]
    // bx r3
    // _02223460: .word WindowArray_Delete
    // TODO: decompile
}



void ov08_02223464(void) {
}



void ov08_02223480(void) {
    // push {r3, lr}
    // cmp r1, #0
    // beq _02223490
    // cmp r1, #1
    // beq _02223496
    // cmp r1, #2
    // beq _0222349C
    // pop {r3, pc}
    // bl ov08_022234FC
    // pop {r3, pc}
    // bl ov08_022239B4
    // pop {r3, pc}
    // bl ov08_02223AA0
    // pop {r3, pc}
    // TODO: decompile
}



void ov08_022234A4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // ldr r5, [r0, #0x2c]
    // lsl r4, r1, #4
    // ldr r0, [r0, #0x10]
    // add r1, r2, #0
    // add r6, r3, #0
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r0, r6, #0
    // mov r2, #0
    // bl FontID_String_GetWidth
    // add r7, r0, #0
    // add r0, r5, r4
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r7
    // lsr r3, r0, #1
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x10]
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // add r1, r6, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_022234FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r6, #0
    // add r5, r0, #0
    // add r4, r6, #0
    // add r7, r6, #0
    // ldr r0, [r5, #0x2c]
    // add r1, r7, #0
    // add r0, r0, r4
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #5
    // blo _02223508
    // mov r0, #7
    // str r0, [sp]
    // ldr r0, _022235D0 ; =0x00030201
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r2, r1, #0
    // mov r3, #4
    // bl ov08_022234A4
    // mov r0, #0x17
    // str r0, [sp]
    // ldr r0, _022235D0 ; =0x00030201
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #4
    // bl ov08_022234A4
    // mov r0, #7
    // str r0, [sp]
    // ldr r0, _022235D0 ; =0x00030201
    // mov r1, #1
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #2
    // mov r3, #4
    // bl ov08_022234A4
    // mov r0, #0x17
    // str r0, [sp]
    // ldr r0, _022235D0 ; =0x00030201
    // mov r1, #1
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #3
    // mov r3, #4
    // bl ov08_022234A4
    // mov r2, #7
    // ldr r0, _022235D0 ; =0x00030201
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r1, #2
    // mov r3, #4
    // bl ov08_022234A4
    // mov r0, #7
    // str r0, [sp]
    // ldr r0, _022235D0 ; =0x00030201
    // mov r1, #3
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #6
    // mov r3, #4
    // bl ov08_022234A4
    // ldr r0, [r5]
    // ldrh r0, [r0, #0x20]
    // cmp r0, #0
    // beq _022235CC
    // ldr r0, [r5, #0x10]
    // mov r1, #8
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022235D0 ; =0x00030201
    // mov r3, #0
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r0, [r5, #0x2c]
    // mov r1, #4
    // add r0, #0x40
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // ldr r0, [r5, #0x2c]
    // add r0, #0x40
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _022235D0: .word 0x00030201
    // TODO: decompile
}



void ov08_022235D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r4, [r5, #0x2c]
    // lsl r6, r3, #4
    // add r7, r1, #0
    // add r0, r4, r6
    // mov r1, #0
    // str r2, [sp, #0x10]
    // bl FillWindowPixelBuffer
    // ldr r0, _02223670 ; =0x0000114D
    // lsl r7, r7, #2
    // ldrb r1, [r5, r0]
    // mov r0, #0x90
    // mul r0, r1
    // add r0, r5, r0
    // add r0, r0, r7
    // ldrh r0, [r0, #0x3c]
    // cmp r0, #0
    // beq _02223666
    // ldr r1, [sp, #0x10]
    // ldr r0, [r5, #0x10]
    // lsl r2, r1, #3
    // ldr r1, _02223674 ; =ov08_02225BE0
    // ldr r1, [r1, r2]
    // bl NewString_ReadMsgData
    // ldr r2, _02223670 ; =0x0000114D
    // str r0, [sp, #0x14]
    // ldrb r3, [r5, r2]
    // mov r2, #0x90
    // ldr r0, [r5, #0x14]
    // mul r2, r3
    // add r2, r5, r2
    // add r2, r2, r7
    // ldrh r2, [r2, #0x3c]
    // mov r1, #0
    // bl BufferItemName
    // ldr r0, [r5, #0x14]
    // ldr r1, [r5, #0x18]
    // ldr r2, [sp, #0x14]
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x30]
    // ldr r1, [r5, #0x18]
    // mov r2, #0
    // bl FontID_String_GetWidth
    // add r7, r0, #0
    // add r0, r4, r6
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r7
    // lsr r3, r0, #1
    // mov r0, #7
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r1, [sp, #0x30]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0x18]
    // add r0, r4, r6
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _02223670: .word 0x0000114D
    // _02223674: .word ov08_02225BE0
    // TODO: decompile
}



void ov08_02223678(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r4, [r5, #0x2c]
    // lsl r7, r3, #4
    // add r6, r1, #0
    // add r0, r4, r7
    // mov r1, #0
    // str r2, [sp, #0x10]
    // bl FillWindowPixelBuffer
    // ldr r0, _02223704 ; =0x0000114D
    // lsl r6, r6, #2
    // ldrb r1, [r5, r0]
    // mov r0, #0x90
    // mul r0, r1
    // add r0, r5, r0
    // add r0, r0, r6
    // ldrh r0, [r0, #0x3e]
    // cmp r0, #0
    // beq _022236FA
    // ldr r1, [sp, #0x10]
    // ldr r0, [r5, #0x10]
    // lsl r2, r1, #3
    // ldr r1, _02223708 ; =ov08_02225BE4
    // ldr r1, [r1, r2]
    // bl NewString_ReadMsgData
    // mov r1, #0
    // str r0, [sp, #0x14]
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, _02223704 ; =0x0000114D
    // ldr r0, [r5, #0x14]
    // ldrb r3, [r5, r2]
    // mov r2, #0x90
    // mul r2, r3
    // add r2, r5, r2
    // add r2, r2, r6
    // ldrh r2, [r2, #0x3e]
    // mov r3, #3
    // bl BufferIntegerAsString
    // ldr r0, [r5, #0x14]
    // ldr r1, [r5, #0x18]
    // ldr r2, [sp, #0x14]
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x34]
    // mov r3, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // ldr r1, [sp, #0x30]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r2, [r5, #0x18]
    // add r0, r4, r7
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add r0, r4, r7
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _02223704: .word 0x0000114D
    // _02223708: .word ov08_02225BE4
    // TODO: decompile
}



void ov08_0222370C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // ldr r0, _02223770 ; =0x0000114D
    // add r5, r1, #0
    // ldrb r0, [r6, r0]
    // ldr r1, [r6]
    // add r0, r1, r0
    // add r0, #0x2c
    // ldrb r1, [r0]
    // mov r0, #6
    // mul r0, r1
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // add r0, #0x31
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02223734
    // mov r4, #0
    // b _02223736
    // mov r4, #0xc
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _02223774 ; =0x00030201
    // ldr r1, [sp, #0xc]
    // lsl r7, r5, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r1, r5, r1
    // add r2, r5, #0
    // add r3, r4, r7
    // bl ov08_022235D4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _02223778 ; =0x00010200
    // ldr r1, [sp, #0xc]
    // add r3, r4, #1
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r1, r5, r1
    // add r2, r5, #0
    // add r3, r3, r7
    // bl ov08_02223678
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02223770: .word 0x0000114D
    // _02223774: .word 0x00030201
    // _02223778: .word 0x00010200
    // TODO: decompile
}



void ov08_0222377C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r2, #0
    // add r4, r0, #0
    // str r2, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x13
    // str r0, [sp, #8]
    // mov r0, #0x11
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #4]
    // mov r1, #5
    // add r3, r2, #0
    // bl FillBgTilemapRect
    // mov r5, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov08_0222370C
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #6
    // blo _0222379E
    // add r0, r4, #0
    // add r0, #0x31
    // ldrb r1, [r0]
    // mov r0, #1
    // add r4, #0x31
    // eor r0, r1
    // strb r0, [r4]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void ov08_022237C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // mov r0, #0x19
    // ldr r1, [r5, #0x2c]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x10]
    // mov r1, #0x1c
    // ldr r4, [r5, #0x2c]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x10]
    // mov r0, #0
    // ldr r1, [sp, #0x10]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r7, r0, #0
    // mov r0, #0x19
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, r0, r7
    // lsr r6, r0, #1
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022238EC ; =0x00010200
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #8]
    // mov r0, #0x19
    // lsl r0, r0, #4
    // mov r1, #0
    // add r0, r4, r0
    // add r3, r6, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // ldr r0, [r5, #0x10]
    // mov r1, #0x1d
    // bl NewString_ReadMsgData
    // mov r1, #0
    // str r0, [sp, #0x14]
    // ldr r3, _022238F0 ; =0x0000114D
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, _022238F0 ; =0x0000114D
    // add r3, r3, #7
    // ldrb r2, [r5, r2]
    // ldr r0, [r5, #0x14]
    // add r2, r5, r2
    // ldrb r2, [r2, r3]
    // mov r3, #2
    // add r2, r2, #1
    // bl BufferIntegerAsString
    // ldr r0, [r5, #0x14]
    // ldr r1, [r5, #0x18]
    // ldr r2, [sp, #0x14]
    // bl StringExpandPlaceholders
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022238EC ; =0x00010200
    // mov r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r2, [r5, #0x18]
    // add r0, r4, r0
    // add r3, r6, r7
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // ldr r0, [r5, #0x10]
    // mov r1, #0x1e
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r7, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r3, _022238F0 ; =0x0000114D
    // ldr r2, [r5]
    // ldrb r3, [r5, r3]
    // ldr r0, [r5, #0x14]
    // add r2, r2, r3
    // add r2, #0x2c
    // ldrb r2, [r2]
    // mov r3, #2
    // add r2, r2, #1
    // bl BufferIntegerAsString
    // ldr r0, [r5, #0x14]
    // ldr r1, [r5, #0x18]
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // ldr r1, [r5, #0x18]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r3, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _022238EC ; =0x00010200
    // mov r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r0, #0x19
    // lsl r0, r0, #4
    // ldr r2, [r5, #0x18]
    // add r0, r4, r0
    // sub r3, r6, r3
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // mov r0, #0x19
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022238EC: .word 0x00010200
    // _022238F0: .word 0x0000114D
    // TODO: decompile
}



void ov08_022238F4(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #6
    // ldr r1, [r4, #0x2c]
    // lsl r0, r0, #6
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _022239AC ; =0x0000114D
    // ldrb r0, [r4, r0]
    // cmp r0, #3
    // bhi _022239A8
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0222391C: ; jump table
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _022239B0 ; =0x00010200
    // mov r1, #0x18
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x16
    // mov r3, #0
    // bl ov08_022234A4
    // mov r0, #0x14
    // str r0, [sp]
    // ldr r0, _022239B0 ; =0x00010200
    // mov r1, #0x18
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x17
    // mov r3, #0
    // bl ov08_022234A4
    // add sp, #8
    // pop {r4, pc}
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _022239B0 ; =0x00010200
    // mov r1, #0x18
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r1, #0
    // mov r3, #0
    // bl ov08_022234A4
    // mov r0, #0x14
    // str r0, [sp]
    // ldr r0, _022239B0 ; =0x00010200
    // mov r1, #0x18
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x19
    // mov r3, #0
    // bl ov08_022234A4
    // add sp, #8
    // pop {r4, pc}
    // mov r0, #0xc
    // str r0, [sp]
    // ldr r0, _022239B0 ; =0x00010200
    // mov r1, #0x18
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x1a
    // mov r3, #0
    // bl ov08_022234A4
    // add sp, #8
    // pop {r4, pc}
    // mov r0, #0xc
    // str r0, [sp]
    // ldr r0, _022239B0 ; =0x00010200
    // mov r1, #0x18
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x1b
    // mov r3, #0
    // bl ov08_022234A4
    // add sp, #8
    // pop {r4, pc}
    // _022239AC: .word 0x0000114D
    // _022239B0: .word 0x00010200
    // TODO: decompile
}



void ov08_022239B4(void) {
}



void ov08_022239CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // add r6, r1, #0
    // mov r1, #9
    // ldr r4, [r5, #0x2c]
    // bl NewString_ReadMsgData
    // ldr r2, _02223A34 ; =0x0000114D
    // add r7, r0, #0
    // ldrb r3, [r5, r2]
    // mov r2, #0x90
    // ldr r0, [r5, #0x14]
    // mul r2, r3
    // add r2, r5, r2
    // lsl r3, r6, #2
    // add r2, r2, r3
    // ldrh r2, [r2, #0x3c]
    // mov r1, #0
    // bl BufferItemName
    // ldr r0, [r5, #0x14]
    // ldr r1, [r5, #0x18]
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02223A38 ; =0x00010200
    // add r3, r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, [r5, #0x18]
    // add r0, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02223A34: .word 0x0000114D
    // _02223A38: .word 0x00010200
    // TODO: decompile
}



void ov08_02223A3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r1, #0
    // ldr r1, [r5]
    // ldr r4, [r5, #0x2c]
    // ldr r1, [r1, #0xc]
    // mov r0, #0x82
    // add r4, #0x20
    // bl String_New
    // ldr r1, _02223A98 ; =0x0000114D
    // add r7, r0, #0
    // ldrb r2, [r5, r1]
    // mov r1, #0x90
    // mul r1, r2
    // add r2, r5, r1
    // lsl r1, r6, #2
    // add r1, r2, r1
    // ldr r2, [r5]
    // ldrh r1, [r1, #0x3c]
    // ldr r2, [r2, #0xc]
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x10
    // bl GetItemDescIntoString
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02223A9C ; =0x00010200
    // add r2, r7, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r3, #4
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02223A98: .word 0x0000114D
    // _02223A9C: .word 0x00010200
    // TODO: decompile
}



void ov08_02223AA0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // mov r6, #0
    // add r5, r0, #0
    // add r4, r6, #0
    // add r7, r6, #0
    // ldr r0, [r5, #0x2c]
    // add r1, r7, #0
    // add r0, r0, r4
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #4
    // blo _02223AAC
    // ldr r0, _02223B14 ; =0x0000114D
    // ldr r1, [r5]
    // ldrb r2, [r5, r0]
    // add r0, r1, r2
    // add r0, #0x27
    // ldrb r4, [r0]
    // add r0, r1, r2
    // add r0, #0x2c
    // ldrb r1, [r0]
    // mov r0, #6
    // add r6, r1, #0
    // mul r6, r0
    // add r0, r5, #0
    // add r1, r4, r6
    // bl ov08_022239CC
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, _02223B18 ; =0x00010200
    // str r2, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r1, r4, r6
    // mov r3, #1
    // bl ov08_02223678
    // add r0, r5, #0
    // add r1, r4, r6
    // bl ov08_02223A3C
    // mov r0, #5
    // str r0, [sp]
    // ldr r0, _02223B1C ; =0x00030201
    // mov r1, #3
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #0x1f
    // mov r3, #4
    // bl ov08_022234A4
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02223B14: .word 0x0000114D
    // _02223B18: .word 0x00010200
    // _02223B1C: .word 0x00030201
    // TODO: decompile
}



void ov08_02223B20(void) {
    // push {r4, lr}
    // ldr r2, _02223B44 ; =0x000003E2
    // add r4, r0, #0
    // add r0, #0x1c
    // mov r1, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // add r0, r4, #0
    // add r0, #0x1c
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // bl ov08_02223B48
    // pop {r4, pc}
    // nop
    // _02223B44: .word 0x000003E2
    // TODO: decompile
}



void ov08_02223B48(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // bl TextFlags_SetCanABSpeedUpPrint
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl BattleSystem_GetTextFrameDelay
    // mov r3, #0
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // add r0, r4, #0
    // ldr r2, [r4, #0x18]
    // add r0, #0x1c
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // add r4, #0x32
    // strb r0, [r4]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}



void ov08_02223B78(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r3, [r4]
    // ldrh r1, [r3, #0x20]
    // cmp r1, #0
    // bne _02223B88
    // mov r0, #0
    // pop {r4, pc}
    // ldr r0, [r3, #8]
    // ldr r3, [r3, #0xc]
    // mov r2, #1
    // bl Bag_HasItem
    // cmp r0, #0
    // bne _02223BA2
    // ldr r1, [r4]
    // mov r0, #0
    // strh r0, [r1, #0x20]
    // ldr r1, [r4]
    // strb r0, [r1, #0x1f]
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}



void ov08_02223BA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _02223BF0 ; =0x0000114D
    // ldr r6, [r5]
    // ldrb r7, [r5, r0]
    // mov r0, #0x90
    // ldrh r2, [r6, #0x20]
    // mul r0, r7
    // mov r4, #0
    // add r1, r5, r0
    // ldrh r0, [r1, #0x3c]
    // cmp r2, r0
    // bne _02223BE6
    // add r0, r4, #0
    // mov r1, #6
    // bl _u32_div_f
    // add r0, r6, r7
    // add r0, #0x27
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #6
    // bl _u32_div_f
    // ldr r1, _02223BF0 ; =0x0000114D
    // ldr r2, [r5]
    // ldrb r1, [r5, r1]
    // add r1, r2, r1
    // add r1, #0x2c
    // strb r0, [r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // add r1, r1, #4
    // cmp r4, #0x24
    // blo _02223BBC
    // pop {r3, r4, r5, r6, r7, pc}
    // _02223BF0: .word 0x0000114D
    // TODO: decompile
}



void ov08_02223BF4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // ldr r2, [sp]
    // ldr r0, [r0, #8]
    // lsl r2, r2, #0x10
    // ldr r1, [sp, #8]
    // lsr r2, r2, #0x10
    // bl Bag_GetPocketSlotN
    // add r5, r0, #0
    // beq _02223C7C
    // ldrh r0, [r5]
    // cmp r0, #0
    // beq _02223C74
    // ldrh r1, [r5, #2]
    // cmp r1, #0
    // beq _02223C74
    // ldr r2, [r4]
    // mov r1, #0xd
    // ldr r2, [r2, #0xc]
    // bl GetItemAttr
    // add r7, r0, #0
    // ldr r1, _02223CC8 ; =ov08_02225CE0
    // mov r0, #0
    // mov r2, #1
    // lsl r2, r0
    // tst r2, r7
    // beq _02223C6C
    // ldrb r2, [r1]
    // mov r3, #0x90
    // add r6, r2, #0
    // mul r6, r3
    // add r3, r4, r2
    // ldr r2, _02223CCC ; =0x0000114F
    // ldrb r2, [r3, r2]
    // add r3, r4, r6
    // lsl r2, r2, #2
    // add r2, r2, r3
    // ldrh r3, [r5]
    // strh r3, [r2, #0x3c]
    // ldrh r3, [r5, #2]
    // strh r3, [r2, #0x3e]
    // ldrb r2, [r1]
    // add r6, r4, r2
    // ldr r2, _02223CCC ; =0x0000114F
    // ldrb r2, [r6, r2]
    // add r3, r2, #1
    // ldr r2, _02223CCC ; =0x0000114F
    // strb r3, [r6, r2]
    // add r0, r0, #1
    // add r1, r1, #1
    // cmp r0, #5
    // blo _02223C3A
    // ldr r0, [sp]
    // add r0, r0, #1
    // str r0, [sp]
    // b _02223C0A
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // cmp r0, #8
    // blo _02223BFE
    // mov r5, #0
    // add r7, r5, #0
    // ldr r0, _02223CCC ; =0x0000114F
    // add r6, r4, r5
    // ldrb r0, [r6, r0]
    // cmp r0, #0
    // bne _02223C9A
    // ldr r0, _02223CD0 ; =0x00001154
    // strb r7, [r6, r0]
    // b _02223CA6
    // sub r0, r0, #1
    // mov r1, #6
    // bl _s32_div_f
    // ldr r1, _02223CD0 ; =0x00001154
    // strb r0, [r6, r1]
    // ldr r1, [r4]
    // ldr r0, _02223CD0 ; =0x00001154
    // add r2, r1, r5
    // add r2, #0x2c
    // ldrb r0, [r6, r0]
    // ldrb r2, [r2]
    // cmp r0, r2
    // bhs _02223CBC
    // add r1, r1, r5
    // add r1, #0x2c
    // strb r0, [r1]
    // add r5, r5, #1
    // cmp r5, #5
    // blo _02223C8A
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02223CC8: .word ov08_02225CE0
    // _02223CCC: .word 0x0000114F
    // _02223CD0: .word 0x00001154
    // TODO: decompile
}



void ov08_02223CD4(void) {
    // push {r3, r4}
    // ldr r2, _02223D04 ; =0x0000114D
    // ldr r3, [r0]
    // ldrb r2, [r0, r2]
    // add r3, r3, r2
    // add r3, #0x2c
    // ldrb r4, [r3]
    // mov r3, #6
    // mul r3, r4
    // add r1, r1, r3
    // lsl r3, r1, #2
    // mov r1, #0x90
    // mul r1, r2
    // add r0, r0, r1
    // add r1, r0, r3
    // ldrh r0, [r1, #0x3c]
    // cmp r0, #0
    // beq _02223CFE
    // ldrh r1, [r1, #0x3e]
    // cmp r1, #0
    // bne _02223D00
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // _02223D04: .word 0x0000114D
    // TODO: decompile
}



void ov08_02223D08(void) {
}



void ov08_02223D34(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // ldr r3, _02223D7C ; =ov08_02225D14
    // add r2, sp, #0
    // add r5, r0, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl BattleSystem_GetSpriteSystem
    // add r4, r0, #0
    // bl SpriteManager_New
    // mov r1, #0xc3
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // mov r2, #0xc
    // bl SpriteSystem_InitSprites
    // mov r1, #0xc3
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // add r2, sp, #0
    // bl SpriteSystem_InitManagerWithCapacities
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // nop
    // _02223D7C: .word ov08_02225D14
    // TODO: decompile
}



void ov08_02223D80(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // ldr r1, [r6]
    // mov r0, #0x12
    // ldr r1, [r1, #0xc]
    // bl NARC_New
    // add r7, r0, #0
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl BattleSystem_GetSpriteSystem
    // str r0, [sp, #0x18]
    // mov r4, #0
    // ldr r0, _02223E38 ; =0x0000B4B7
    // add r5, r4, r0
    // mov r0, #1
    // add r1, r0, #0
    // bl GetItemIndexMapping
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r1, #0xc3
    // str r5, [sp, #8]
    // lsl r1, r1, #2
    // ldr r0, [sp, #0x18]
    // ldr r1, [r6, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #1
    // mov r1, #2
    // bl GetItemIndexMapping
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // mov r3, #0xc3
    // str r5, [sp, #0x14]
    // lsl r3, r3, #2
    // ldr r0, [r6, #8]
    // ldr r2, [sp, #0x18]
    // ldr r3, [r6, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // add r4, r4, #1
    // cmp r4, #6
    // blo _02223D9E
    // bl GetItemIconCell
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02223E38 ; =0x0000B4B7
    // mov r1, #0xc3
    // str r0, [sp, #4]
    // lsl r1, r1, #2
    // ldr r0, [sp, #0x18]
    // ldr r1, [r6, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // bl GetItemIconAnim
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _02223E38 ; =0x0000B4B7
    // mov r1, #0xc3
    // str r0, [sp, #4]
    // lsl r1, r1, #2
    // ldr r0, [sp, #0x18]
    // ldr r1, [r6, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add r0, r7, #0
    // bl NARC_Delete
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02223E38: .word 0x0000B4B7
    // TODO: decompile
}



void ov08_02223E3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r6, r1, #0
    // ldr r0, [r0]
    // add r4, r2, #0
    // bl BattleSystem_GetSpriteSystem
    // add r7, r0, #0
    // add r0, r6, #0
    // mov r1, #1
    // bl GetItemIndexMapping
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0xc3
    // str r4, [sp, #4]
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r7, #0
    // mov r2, #0x12
    // bl SpriteSystem_ReplaceCharResObj
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_02223E74(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #2
    // add r4, r2, #0
    // bl GetItemIndexMapping
    // add r2, r0, #0
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r4, #0x14
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // ldr r3, [r5]
    // ldr r0, [r5, #8]
    // ldr r3, [r3, #0xc]
    // mov r1, #0x12
    // bl PaletteData_LoadNarc
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}



void ov08_02223EA4(void) {
    // push {r4, r5, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // ldr r0, [r0]
    // bl BattleSystem_GetSpriteSystem
    // mov r2, #0
    // add r1, sp, #0
    // strh r2, [r1]
    // strh r2, [r1, #2]
    // strh r2, [r1, #4]
    // strh r2, [r1, #6]
    // mov r1, #0x14
    // ldr r3, _02223F00 ; =ov08_02225DEC
    // mul r1, r4
    // ldr r3, [r3, r1]
    // str r2, [sp, #0xc]
    // str r3, [sp, #8]
    // mov r3, #2
    // str r3, [sp, #0x10]
    // ldr r3, _02223F04 ; =ov08_02225DDC
    // str r2, [sp, #0x30]
    // ldr r3, [r3, r1]
    // add r2, sp, #0
    // str r3, [sp, #0x14]
    // ldr r3, _02223F08 ; =ov08_02225DE0
    // ldr r3, [r3, r1]
    // str r3, [sp, #0x18]
    // ldr r3, _02223F0C ; =ov08_02225DE4
    // ldr r3, [r3, r1]
    // str r3, [sp, #0x1c]
    // ldr r3, _02223F10 ; =ov08_02225DE8
    // ldr r1, [r3, r1]
    // str r1, [sp, #0x20]
    // mov r1, #1
    // str r1, [sp, #0x2c]
    // mov r1, #0xc3
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // bl SpriteSystem_NewSprite
    // add sp, #0x34
    // pop {r4, r5, pc}
    // nop
    // _02223F00: .word ov08_02225DEC
    // _02223F04: .word ov08_02225DDC
    // _02223F08: .word ov08_02225DE0
    // _02223F0C: .word ov08_02225DE4
    // _02223F10: .word ov08_02225DE8
    // TODO: decompile
}



void ov08_02223F14(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r7, #0x31
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #4
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov08_02223EA4
    // str r0, [r5, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blo _02223F20
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_02223F34(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, [r7]
    // ldr r0, [r0]
    // bl BattleSystem_GetSpriteSystem
    // mov r6, #0x31
    // str r0, [sp]
    // mov r4, #0
    // add r5, r7, #0
    // lsl r6, r6, #4
    // ldr r0, [r5, r6]
    // bl Sprite_DeleteAndFreeResources
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blo _02223F4A
    // add r0, r7, #0
    // bl ov08_02224108
    // add r0, r7, #0
    // bl ov08_022241F4
    // mov r1, #0xc3
    // lsl r1, r1, #2
    // ldr r0, [sp]
    // ldr r1, [r7, r1]
    // bl SpriteSystem_FreeResourcesAndManager
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_02223F74(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // mov r1, #1
    // add r6, r0, #0
    // bl ManagedSprite_SetDrawFlag
    // lsl r1, r5, #0x10
    // lsl r2, r4, #0x10
    // add r0, r6, #0
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}



void ov08_02223F94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r6, #0x31
    // str r0, [sp]
    // add r7, r1, #0
    // mov r4, #0
    // add r5, r0, #0
    // lsl r6, r6, #4
    // ldr r0, [r5, r6]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blo _02223FA2
    // cmp r7, #0
    // beq _02223FC0
    // cmp r7, #1
    // beq _02223FC8
    // cmp r7, #2
    // beq _02223FD0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // bl ov08_02223FD8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // bl ov08_0222400C
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp]
    // bl ov08_02224064
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_02223FD8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4]
    // ldrh r1, [r1, #0x20]
    // cmp r1, #0
    // beq _02224006
    // ldr r2, _02224008 ; =0x0000B4B7
    // bl ov08_02223E3C
    // ldr r1, [r4]
    // ldr r3, _02224008 ; =0x0000B4B7
    // ldrh r1, [r1, #0x20]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov08_02223E74
    // mov r0, #0x31
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x18
    // mov r2, #0xb2
    // bl ov08_02223F74
    // pop {r4, pc}
    // _02224008: .word 0x0000B4B7
    // TODO: decompile
}



void ov08_0222400C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r6, _0222405C ; =ov08_02225D74
    // mov r4, #0
    // add r7, r5, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02223CD4
    // str r0, [sp]
    // cmp r0, #0
    // beq _0222404E
    // ldr r2, _02224060 ; =0x0000B4B7
    // ldr r1, [sp]
    // add r0, r5, #0
    // add r2, r4, r2
    // bl ov08_02223E3C
    // ldr r3, _02224060 ; =0x0000B4B7
    // lsl r2, r4, #0x10
    // ldr r1, [sp]
    // add r0, r5, #0
    // lsr r2, r2, #0x10
    // add r3, r4, r3
    // bl ov08_02223E74
    // mov r0, #0x31
    // lsl r0, r0, #4
    // ldr r0, [r7, r0]
    // ldr r1, [r6]
    // ldr r2, [r6, #4]
    // bl ov08_02223F74
    // add r4, r4, #1
    // add r6, #8
    // add r7, r7, #4
    // cmp r4, #6
    // blo _02224016
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0222405C: .word ov08_02225D74
    // _02224060: .word 0x0000B4B7
    // TODO: decompile
}



void ov08_02224064(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _022240A0 ; =0x0000114D
    // add r4, r0, #0
    // ldrb r1, [r4, r1]
    // ldr r2, [r4]
    // add r1, r2, r1
    // add r1, #0x27
    // ldrb r1, [r1]
    // bl ov08_02223CD4
    // add r5, r0, #0
    // ldr r2, _022240A4 ; =0x0000B4B7
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov08_02223E3C
    // ldr r3, _022240A4 ; =0x0000B4B7
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0
    // bl ov08_02223E74
    // mov r0, #0x31
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x28
    // mov r2, #0x2c
    // bl ov08_02223F74
    // pop {r3, r4, r5, pc}
    // _022240A0: .word 0x0000114D
    // _022240A4: .word 0x0000B4B7
    // TODO: decompile
}



void ov08_022240A8(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl BattleSystem_GetSpriteSystem
    // ldr r1, _02224104 ; =0x0000B4BE
    // add r4, r0, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // sub r1, r1, #5
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r1, #0xc3
    // ldr r3, [r5]
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // ldr r2, [r5, #8]
    // ldr r3, [r3, #0xc]
    // bl BattleCursor_LoadResources
    // ldr r3, _02224104 ; =0x0000B4BE
    // mov r1, #0xc3
    // str r3, [sp]
    // sub r0, r3, #5
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r2, [r5]
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // ldr r2, [r2, #0xc]
    // add r0, r4, #0
    // bl BattleCursor_New
    // add r1, r0, #0
    // ldr r0, [r5, #0x34]
    // bl ov08_02224B94
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _02224104: .word 0x0000B4BE
    // TODO: decompile
}



void ov08_02224108(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4, #0x34]
    // bl ov08_02224B84
    // bl BattleCursor_Delete
    // ldr r3, _02224130 ; =0x0000B4B9
    // mov r0, #0xc3
    // add r1, r3, #5
    // str r3, [sp]
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl BattleCursor_FreeResources
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02224130: .word 0x0000B4B9
    // TODO: decompile
}



void ov08_02224134(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r1, _02224174 ; =ov08_02225CF8
    // lsl r2, r4, #2
    // ldr r0, [r5, #0x34]
    // ldr r1, [r1, r2]
    // bl ov08_02224BCC
    // cmp r4, #0
    // beq _02224152
    // cmp r4, #1
    // beq _0222415E
    // cmp r4, #2
    // pop {r3, r4, r5, pc}
    // ldr r1, _02224178 ; =0x0000114D
    // ldr r0, [r5, #0x34]
    // ldrb r1, [r5, r1]
    // bl ov08_02224B98
    // pop {r3, r4, r5, pc}
    // ldr r1, _02224178 ; =0x0000114D
    // ldr r2, [r5]
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, #0x34]
    // add r1, r2, r1
    // add r1, #0x27
    // ldrb r1, [r1]
    // bl ov08_02224B98
    // pop {r3, r4, r5, pc}
    // nop
    // _02224174: .word ov08_02225CF8
    // _02224178: .word 0x0000114D
    // TODO: decompile
}



void ov08_0222417C(void) {
}



void ov08_0222419C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl BattleSystem_GetSpriteSystem
    // ldr r1, _022241F0 ; =0x0000B4BD
    // add r4, r0, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // sub r1, r1, #5
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // mov r1, #0xc3
    // ldr r2, [r5]
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // ldr r2, [r2, #0xc]
    // ldr r3, [r5, #8]
    // bl BattleFinger_LoadResources
    // ldr r3, _022241F0 ; =0x0000B4BD
    // mov r1, #0xc3
    // str r3, [sp]
    // sub r0, r3, #5
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [r5]
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // ldr r2, [r2, #0xc]
    // add r0, r4, #0
    // bl BattleFinger_New
    // str r0, [r5, #0x38]
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _022241F0: .word 0x0000B4BD
    // TODO: decompile
}



void ov08_022241F4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4, #0x38]
    // bl BattleFinger_Delete
    // ldr r3, _02224218 ; =0x0000B4B8
    // mov r0, #0xc3
    // add r1, r3, #5
    // str r3, [sp]
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r2, r1, #0
    // bl BattleFinger_FreeResources
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02224218: .word 0x0000B4B8
    // TODO: decompile
}



void ov08_0222421C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0, #0x14]
    // cmp r0, #1
    // bne _02224242
    // lsl r3, r1, #3
    // ldr r1, _0222424C ; =ov08_02225D2C
    // ldr r2, _02224250 ; =ov08_02225D30
    // ldr r0, [r4, #0x38]
    // ldr r1, [r1, r3]
    // ldr r2, [r2, r3]
    // bl ov12_0226BD2C
    // ldr r0, [r4, #0x38]
    // mov r1, #0x3c
    // bl ov12_0226BD4C
    // pop {r4, pc}
    // ldr r0, [r4, #0x38]
    // bl BattleFinger_Disable
    // pop {r4, pc}
    // nop
    // _0222424C: .word ov08_02225D2C
    // _02224250: .word ov08_02225D30
    // TODO: decompile
}



void ov08_02224254(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r0, #0xca
    // lsl r0, r0, #2
    // mov r2, #0
    // add r0, r5, r0
    // add r3, r2, #0
    // add r4, r1, #0
    // bl ov08_0222458C
    // mov r0, #0x10
    // str r0, [sp]
    // ldr r0, _02224510 ; =0x00000448
    // mov r3, #9
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r2, #0
    // str r3, [sp, #4]
    // bl ov08_0222458C
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // ldr r0, _02224514 ; =0x00000568
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x12
    // bl ov08_0222458C
    // mov r0, #0x1a
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // ldr r0, _02224518 ; =0x00000688
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x1b
    // bl ov08_0222458C
    // mov r0, #0x1a
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // ldr r0, _0222451C ; =0x0000078C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x20
    // bl ov08_0222458C
    // mov r0, #0x1a
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #0x89
    // lsl r0, r0, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r2, #0
    // mov r3, #0x25
    // bl ov08_0222458C
    // mov r0, #0x1a
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // ldr r0, _02224520 ; =0x00000994
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x2a
    // bl ov08_0222458C
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224524 ; =0x00000A98
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x39
    // bl ov08_0222458C
    // ldr r0, _02224528 ; =0x00000ACA
    // mov r2, #5
    // str r2, [sp]
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0x39
    // str r2, [sp, #4]
    // bl ov08_0222458C
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222452C ; =0x00000AFC
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0xa
    // mov r3, #0x39
    // bl ov08_0222458C
    // mov r2, #0x10
    // str r2, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, _02224530 ; =0x00000B2E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r3, #0
    // bl ov08_0222458C
    // ldr r0, _02224534 ; =0x00000BEE
    // mov r2, #0x10
    // str r2, [sp]
    // mov r3, #6
    // add r0, r5, r0
    // add r1, r4, #0
    // str r3, [sp, #4]
    // bl ov08_0222458C
    // mov r2, #0x10
    // str r2, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, _02224538 ; =0x00000CAE
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r3, #0xc
    // bl ov08_0222458C
    // mov r2, #0x10
    // str r2, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // ldr r0, _0222453C ; =0x00000D6E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r3, #0x12
    // bl ov08_0222458C
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224540 ; =0x00000E2E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x2f
    // bl ov08_0222458C
    // mov r0, #0xe6
    // mov r2, #5
    // lsl r0, r0, #4
    // str r2, [sp]
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0x2f
    // str r2, [sp, #4]
    // bl ov08_0222458C
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224544 ; =0x00000E92
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0xa
    // mov r3, #0x2f
    // bl ov08_0222458C
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224548 ; =0x00000EC4
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0xf
    // mov r3, #0x2f
    // bl ov08_0222458C
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222454C ; =0x00000EF6
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #0x34
    // bl ov08_0222458C
    // ldr r0, _02224550 ; =0x00000F28
    // mov r2, #5
    // str r2, [sp]
    // add r0, r5, r0
    // add r1, r4, #0
    // mov r3, #0x34
    // str r2, [sp, #4]
    // bl ov08_0222458C
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224554 ; =0x00000F5A
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0xa
    // mov r3, #0x34
    // bl ov08_0222458C
    // mov r0, #5
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224558 ; =0x00000F8C
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0xf
    // mov r3, #0x34
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222455C ; =0x00000FBE
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x14
    // mov r3, #0x2f
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224560 ; =0x00000FDE
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x18
    // mov r3, #0x2f
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224564 ; =0x00000FFE
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x1c
    // mov r3, #0x2f
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224568 ; =0x0000101E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x14
    // mov r3, #0x33
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222456C ; =0x0000103E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x18
    // mov r3, #0x33
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224570 ; =0x0000105E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x1c
    // mov r3, #0x33
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224574 ; =0x0000107E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x14
    // mov r3, #0x37
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224578 ; =0x0000109E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x18
    // mov r3, #0x37
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0222457C ; =0x000010BE
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x1c
    // mov r3, #0x37
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224580 ; =0x000010DE
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x14
    // mov r3, #0x3b
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224584 ; =0x000010FE
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x18
    // mov r3, #0x3b
    // bl ov08_0222458C
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02224588 ; =0x0000111E
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #0x1c
    // mov r3, #0x3b
    // bl ov08_0222458C
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _02224510: .word 0x00000448
    // _02224514: .word 0x00000568
    // _02224518: .word 0x00000688
    // _0222451C: .word 0x0000078C
    // _02224520: .word 0x00000994
    // _02224524: .word 0x00000A98
    // _02224528: .word 0x00000ACA
    // _0222452C: .word 0x00000AFC
    // _02224530: .word 0x00000B2E
    // _02224534: .word 0x00000BEE
    // _02224538: .word 0x00000CAE
    // _0222453C: .word 0x00000D6E
    // _02224540: .word 0x00000E2E
    // _02224544: .word 0x00000E92
    // _02224548: .word 0x00000EC4
    // _0222454C: .word 0x00000EF6
    // _02224550: .word 0x00000F28
    // _02224554: .word 0x00000F5A
    // _02224558: .word 0x00000F8C
    // _0222455C: .word 0x00000FBE
    // _02224560: .word 0x00000FDE
    // _02224564: .word 0x00000FFE
    // _02224568: .word 0x0000101E
    // _0222456C: .word 0x0000103E
    // _02224570: .word 0x0000105E
    // _02224574: .word 0x0000107E
    // _02224578: .word 0x0000109E
    // _0222457C: .word 0x000010BE
    // _02224580: .word 0x000010DE
    // _02224584: .word 0x000010FE
    // _02224588: .word 0x0000111E
    // TODO: decompile
}



void ov08_0222458C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // add r0, sp, #8
    // mov lr, r3
    // ldrb r3, [r0, #0x14]
    // mov r6, #0
    // mov ip, r3
    // cmp r3, #0
    // ble _022245D8
    // ldrb r3, [r0, #0x10]
    // lsl r2, r2, #1
    // add r7, r1, r2
    // mov r2, #0
    // cmp r3, #0
    // ble _022245CC
    // mov r0, lr
    // add r0, r0, r6
    // lsl r0, r0, #6
    // add r5, r7, r0
    // add r0, r6, #0
    // mul r0, r3
    // lsl r1, r0, #1
    // ldr r0, [sp]
    // add r4, r0, r1
    // lsl r1, r2, #1
    // ldrh r0, [r5, r1]
    // strh r0, [r4, r1]
    // add r0, r2, #1
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // cmp r2, r3
    // blt _022245BC
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // mov r0, ip
    // cmp r6, r0
    // blt _022245A4
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_022245DC(void) {
    // cmp r1, #0x10
    // bhi _0222466A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022245EC: ; jump table
    // mov r1, #0xca
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0x12
    // lsl r0, r0, #4
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02224670 ; =0x00000688
    // add r1, r0, r1
    // lsl r0, r2, #6
    // add r0, r2, r0
    // lsl r0, r0, #2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02224674 ; =0x00000A98
    // add r1, r0, r1
    // mov r0, #0x32
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02224678 ; =0x00000B2E
    // add r1, r0, r1
    // mov r0, #0xc0
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _0222467C ; =0x00000E2E
    // add r1, r0, r1
    // mov r0, #0x32
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02224680 ; =0x00000EF6
    // add r1, r0, r1
    // mov r0, #0x32
    // mul r0, r2
    // add r0, r1, r0
    // bx lr
    // ldr r1, _02224670 ; =0x00000688
    // add r1, r0, r1
    // lsl r0, r2, #6
    // add r0, r2, r0
    // lsl r0, r0, #2
    // add r0, r1, r0
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _02224670: .word 0x00000688
    // _02224674: .word 0x00000A98
    // _02224678: .word 0x00000B2E
    // _0222467C: .word 0x00000E2E
    // _02224680: .word 0x00000EF6
    // TODO: decompile
}



void ov08_02224684(void) {
    // cmp r2, #3
    // bne _0222468C
    // mov r0, #5
    // bx lr
    // cmp r1, #0x10
    // bhi _022246EA
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0222469C: ; jump table
    // mov r0, #0
    // bx lr
    // mov r0, #3
    // bx lr
    // mov r0, #2
    // bx lr
    // ldr r1, _022246F0 ; =0x0000114D
    // ldrb r0, [r0, r1]
    // add r0, #8
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // cmp r3, #2
    // bne _022246E6
    // ldr r1, _022246F0 ; =0x0000114D
    // ldrb r0, [r0, r1]
    // add r0, #8
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _022246F0: .word 0x0000114D
    // TODO: decompile
}



void ov08_022246F4(void) {
    // push {r4, r5, r6, r7}
    // cmp r2, #0
    // bne _02224704
    // ldr r2, _02224758 ; =0x00000FBE
    // add r2, r0, r2
    // lsl r0, r3, #5
    // add r0, r2, r0
    // b _0222472C
    // cmp r2, #1
    // bne _02224712
    // ldr r2, _0222475C ; =0x0000101E
    // add r2, r0, r2
    // lsl r0, r3, #5
    // add r0, r2, r0
    // b _0222472C
    // cmp r2, #2
    // bne _02224720
    // ldr r2, _02224760 ; =0x0000107E
    // add r2, r0, r2
    // lsl r0, r3, #5
    // add r0, r2, r0
    // b _0222472C
    // cmp r2, #3
    // bne _02224754
    // ldr r2, _02224764 ; =0x000010DE
    // add r2, r0, r2
    // lsl r0, r3, #5
    // add r0, r2, r0
    // mov r2, #0
    // lsl r4, r2, #3
    // lsl r5, r2, #5
    // mov r3, #0
    // add r4, r0, r4
    // add r5, r1, r5
    // lsl r6, r3, #1
    // ldrh r7, [r4, r6]
    // add r3, r3, #1
    // lsl r3, r3, #0x10
    // add r6, r5, r6
    // lsr r3, r3, #0x10
    // strh r7, [r6, #0xc]
    // cmp r3, #4
    // blo _02224738
    // add r2, r2, #1
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x10
    // cmp r2, #4
    // blo _0222472E
    // pop {r4, r5, r6, r7}
    // bx lr
    // _02224758: .word 0x00000FBE
    // _0222475C: .word 0x0000101E
    // _02224760: .word 0x0000107E
    // _02224764: .word 0x000010DE
    // TODO: decompile
}



void ov08_02224768(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // add r5, r1, #0
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // bl ov08_022245DC
    // add r3, sp, #0x10
    // add r4, r0, #0
    // ldrb r3, [r3, #0x10]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // bl ov08_02224684
    // lsl r0, r0, #0x1c
    // lsr r2, r0, #0x10
    // ldr r0, [sp, #4]
    // ldr r6, _022247D4 ; =ov08_02225E9F
    // lsl r3, r0, #2
    // ldr r0, _022247D8 ; =ov08_02225E9E
    // ldrb r6, [r6, r3]
    // ldrb r0, [r0, r3]
    // mov r1, #0
    // mul r6, r0
    // cmp r6, #0
    // ble _022247C4
    // ldr r0, _022247DC ; =ov08_02225E9C
    // ldr r7, _022247E0 ; =0x00000FFF
    // add r3, r0, r3
    // lsl r0, r1, #1
    // ldrh r6, [r4, r0]
    // and r6, r7
    // orr r6, r2
    // strh r6, [r5, r0]
    // add r0, r1, #1
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // ldrb r6, [r3, #2]
    // ldrb r0, [r3, #3]
    // mul r0, r6
    // cmp r1, r0
    // blt _022247AA
    // ldr r0, [sp]
    // ldr r2, [sp, #4]
    // ldr r3, [sp, #8]
    // add r1, r5, #0
    // bl ov08_022246F4
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _022247D4: .word ov08_02225E9F
    // _022247D8: .word ov08_02225E9E
    // _022247DC: .word ov08_02225E9C
    // _022247E0: .word 0x00000FFF
    // TODO: decompile
}



void ov08_022247E4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r5, r0, #0
    // ldr r0, [sp, #0xc]
    // lsl r4, r0, #2
    // ldr r0, _02224848 ; =ov08_02225E9F
    // ldrb r7, [r0, r4]
    // ldr r0, _0222484C ; =ov08_02225E9E
    // ldrb r6, [r0, r4]
    // ldr r0, [r5]
    // add r1, r6, #0
    // mul r1, r7
    // ldr r0, [r0, #0xc]
    // lsl r1, r1, #1
    // bl Heap_Alloc
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // bl ov08_02224768
    // ldr r0, _02224850 ; =ov08_02225E9D
    // ldr r3, _02224854 ; =ov08_02225E9C
    // ldrb r0, [r0, r4]
    // ldrb r3, [r3, r4]
    // ldr r2, [sp, #0x18]
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    // ldr r0, [r5, #4]
    // mov r1, #6
    // bl LoadRectToBgTilemapRect
    // ldr r0, [r5, #4]
    // mov r1, #6
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [sp, #0x18]
    // bl Heap_Free
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02224848: .word ov08_02225E9F
    // _0222484C: .word ov08_02225E9E
    // _02224850: .word ov08_02225E9D
    // _02224854: .word ov08_02225E9C
    // TODO: decompile
}



void ov08_02224858(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // cmp r1, #6
    // blo _02224876
    // cmp r1, #0xb
    // bhi _02224876
    // add r0, #0x31
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02224876
    // add r1, #0xb
    // ldr r0, _022248CC ; =ov08_02225EE0
    // lsl r1, r1, #2
    // ldr r4, [r0, r1]
    // b _0222487C
    // ldr r0, _022248CC ; =ov08_02225EE0
    // lsl r1, r1, #2
    // ldr r4, [r0, r1]
    // cmp r4, #0
    // beq _022248C8
    // cmp r2, #0
    // beq _0222488C
    // cmp r2, #1
    // beq _02224894
    // cmp r2, #2
    // bne _0222489A
    // mov r0, #1
    // str r0, [sp]
    // mov r7, #2
    // b _0222489A
    // mov r0, #0
    // str r0, [sp]
    // mov r7, #4
    // mov r5, #0
    // ldrb r0, [r4, r5]
    // cmp r0, #0xff
    // beq _022248C8
    // ldr r1, [r6, #0x2c]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // ldr r1, [sp]
    // add r2, r7, #0
    // mov r3, #0
    // bl ScrollWindow
    // ldrb r0, [r4, r5]
    // ldr r1, [r6, #0x2c]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #1
    // lsl r0, r0, #0x10
    // lsr r5, r0, #0x10
    // cmp r5, #8
    // blo _0222489C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022248CC: .word ov08_02225EE0
    // TODO: decompile
}



void ov08_022248D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // str r2, [sp]
    // cmp r1, #6
    // blo _022248EC
    // cmp r1, #0xb
    // bhi _022248EC
    // sub r0, r1, #6
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x31
    // lsl r0, r0, #4
    // ldr r6, [r1, r0]
    // b _02224910
    // cmp r1, #4
    // bne _02224934
    // mov r7, #0x31
    // mov r4, #0
    // lsl r7, r7, #4
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r6, [r0, r7]
    // add r0, r6, #0
    // bl ManagedSprite_GetDrawFlag
    // cmp r0, #0
    // bne _02224910
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #6
    // blo _022248F6
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _0222491E
    // cmp r0, #1
    // beq _0222492A
    // cmp r0, #2
    // bne _02224934
    // add r0, r6, #0
    // mov r1, #0
    // mov r2, #2
    // bl ManagedSprite_OffsetPositionXY
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // add r0, r6, #0
    // sub r2, r1, #4
    // bl ManagedSprite_OffsetPositionXY
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}



void ov08_02224938(void) {
    // push {r4, r5}
    // ldr r3, _02224970 ; =0x0000113E
    // mov r5, #0
    // strb r5, [r0, r3]
    // add r4, r3, #1
    // strb r5, [r0, r4]
    // add r4, r3, #2
    // strb r1, [r0, r4]
    // add r1, r3, #3
    // ldrb r4, [r0, r1]
    // mov r1, #0xf0
    // bic r4, r1
    // lsl r1, r2, #0x1c
    // lsr r1, r1, #0x18
    // add r2, r4, #0
    // orr r2, r1
    // add r1, r3, #3
    // strb r2, [r0, r1]
    // ldrb r2, [r0, r1]
    // mov r1, #0xf
    // bic r2, r1
    // mov r1, #1
    // orr r2, r1
    // add r1, r3, #3
    // strb r2, [r0, r1]
    // pop {r4, r5}
    // bx lr
    // nop
    // _02224970: .word 0x0000113E
    // TODO: decompile
}



void ov08_02224974(void) {
    // push {r4, lr}
    // ldr r3, _02224A48 ; =0x00001141
    // add r4, r0, #0
    // ldrb r1, [r4, r3]
    // lsl r1, r1, #0x1c
    // lsr r1, r1, #0x1c
    // beq _02224A44
    // sub r1, r3, #3
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _02224994
    // cmp r1, #1
    // beq _022249CC
    // cmp r1, #2
    // beq _02224A04
    // pop {r4, pc}
    // sub r1, r3, #1
    // add r3, #0xb
    // ldrb r1, [r4, r1]
    // ldrb r3, [r4, r3]
    // mov r2, #1
    // bl ov08_022247E4
    // mov r1, #0x45
    // lsl r1, r1, #6
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #1
    // bl ov08_02224858
    // mov r1, #0x45
    // lsl r1, r1, #6
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #1
    // bl ov08_022248D0
    // ldr r0, _02224A4C ; =0x0000113F
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r1, #1
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // sub r1, r3, #1
    // add r3, #0xb
    // ldrb r1, [r4, r1]
    // ldrb r3, [r4, r3]
    // mov r2, #2
    // bl ov08_022247E4
    // mov r1, #0x45
    // lsl r1, r1, #6
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov08_02224858
    // mov r1, #0x45
    // lsl r1, r1, #6
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #2
    // bl ov08_022248D0
    // ldr r0, _02224A4C ; =0x0000113F
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r1, #2
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // sub r1, r3, #1
    // add r3, #0xb
    // ldrb r1, [r4, r1]
    // ldrb r3, [r4, r3]
    // mov r2, #0
    // bl ov08_022247E4
    // mov r1, #0x45
    // lsl r1, r1, #6
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov08_02224858
    // mov r1, #0x45
    // lsl r1, r1, #6
    // ldrb r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov08_022248D0
    // ldr r0, _02224A4C ; =0x0000113F
    // mov r2, #0
    // strb r2, [r4, r0]
    // sub r1, r0, #1
    // strb r2, [r4, r1]
    // add r1, r0, #2
    // ldrb r2, [r4, r1]
    // mov r1, #0xf
    // add r0, r0, #2
    // bic r2, r1
    // strb r2, [r4, r0]
    // pop {r4, pc}
    // nop
    // _02224A48: .word 0x00001141
    // _02224A4C: .word 0x0000113F
    // TODO: decompile
}



void ov08_02224A50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // beq _02224A62
    // cmp r6, #1
    // beq _02224AC0
    // cmp r6, #2
    // beq _02224B46
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // add r2, r1, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // ldr r0, [r5]
    // ldrh r0, [r0, #0x20]
    // cmp r0, #0
    // bne _02224AA6
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #3
    // add r3, r6, #0
    // bl ov08_022247E4
    // b _02224AB2
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #0
    // mov r7, #3
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov08_02223CD4
    // cmp r0, #0
    // bne _02224AE2
    // add r1, r4, #6
    // lsl r1, r1, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // add r2, r7, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // b _02224AF2
    // add r1, r4, #6
    // lsl r1, r1, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // add r4, r4, #1
    // cmp r4, #6
    // blo _02224AC4
    // ldr r0, _02224B60 ; =0x0000114D
    // ldrb r1, [r5, r0]
    // add r0, r0, #7
    // add r1, r5, r1
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // bne _02224B20
    // add r0, r5, #0
    // mov r1, #0xc
    // mov r2, #3
    // add r3, r6, #0
    // bl ov08_022247E4
    // add r0, r5, #0
    // mov r1, #0xd
    // mov r2, #3
    // add r3, r6, #0
    // bl ov08_022247E4
    // b _02224B38
    // add r0, r5, #0
    // mov r1, #0xc
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // add r0, r5, #0
    // mov r1, #0xd
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // add r0, r5, #0
    // mov r1, #0xe
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0xf
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // add r0, r5, #0
    // mov r1, #0x10
    // mov r2, #0
    // add r3, r6, #0
    // bl ov08_022247E4
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02224B60: .word 0x0000114D
    // TODO: decompile
}



void ov08_02224B64(void) {
}



void ov08_02224B7C(void) {
}



void ov08_02224B84(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}



void ov08_02224B88(void) {
    // ldrb r0, [r0, #9]
    // bx lr
    // TODO: decompile
}



void ov08_02224B8C(void) {
    // ldrb r0, [r0, #8]
    // bx lr
    // TODO: decompile
}



void ov08_02224B90(void) {
}



void ov08_02224B94(void) {
}



void ov08_02224B98(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // strb r1, [r0, #9]
    // ldrb r1, [r0, #8]
    // cmp r1, #1
    // bne _02224BBC
    // ldrb r1, [r0, #9]
    // ldr r2, [r0, #4]
    // lsl r4, r1, #3
    // add r3, r2, r4
    // ldrb r1, [r3, #3]
    // str r1, [sp]
    // ldrb r1, [r2, r4]
    // ldrb r2, [r3, #2]
    // ldrb r3, [r3, #1]
    // ldr r0, [r0]
    // bl ov12_0226BAFC
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}



void ov08_02224BC0(void) {
}



void ov08_02224BCC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // bl ov08_02224BC0
    // mov r0, #0
    // str r5, [r4, #4]
    // mvn r0, r0
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #8]
    // cmp r0, #1
    // bne _02224BF6
    // ldr r3, [r4, #4]
    // ldrb r0, [r3, #3]
    // str r0, [sp]
    // ldrb r1, [r3]
    // ldrb r2, [r3, #2]
    // ldrb r3, [r3, #1]
    // ldr r0, [r4]
    // bl ov12_0226BAFC
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}



void ov08_02224BF8(void) {
}



void ov08_02224BFC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldrb r1, [r0, #8]
    // cmp r1, #1
    // bne _02224C0C
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, pc}
    // ldr r1, _02224C40 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0xf3
    // tst r1, r2
    // beq _02224C38
    // mov r1, #1
    // strb r1, [r0, #8]
    // ldrb r1, [r0, #9]
    // ldr r2, [r0, #4]
    // lsl r4, r1, #3
    // add r3, r2, r4
    // ldrb r1, [r3, #3]
    // str r1, [sp]
    // ldrb r1, [r2, r4]
    // ldrb r2, [r3, #2]
    // ldrb r3, [r3, #1]
    // ldr r0, [r0]
    // bl ov12_0226BAFC
    // ldr r0, _02224C44 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02224C40: .word gSystem
    // _02224C44: .word 0x000005DC
    // TODO: decompile
}



void ov08_02224C48(void) {
    // cmp r1, #3
    // bhi _02224C90
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02224C58: ; jump table
    // ldrb r1, [r0, #5]
    // mov r0, #0x80
    // tst r0, r1
    // beq _02224C90
    // mov r0, #1
    // bx lr
    // ldrb r1, [r0, #4]
    // mov r0, #0x80
    // tst r0, r1
    // beq _02224C90
    // mov r0, #1
    // bx lr
    // ldrb r1, [r0, #7]
    // mov r0, #0x80
    // tst r0, r1
    // beq _02224C90
    // mov r0, #1
    // bx lr
    // ldrb r1, [r0, #6]
    // mov r0, #0x80
    // tst r0, r1
    // beq _02224C90
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}



void ov08_02224C94(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // bl ov08_02224BFC
    // cmp r0, #0
    // bne _02224CAA
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _02224E20 ; =gSystem
    // mov r1, #0x40
    // ldr r0, [r0, #0x48]
    // tst r1, r0
    // beq _02224CCE
    // mov r1, #0
    // str r1, [sp]
    // ldrb r0, [r5, #9]
    // add r2, r1, #0
    // add r3, r1, #0
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // ldr r0, [r5, #4]
    // bl DpadMenuBox_GetNeighborInDirection
    // add r4, r0, #0
    // mov r6, #0
    // b _02224D36
    // mov r1, #0x80
    // tst r1, r0
    // beq _02224CF0
    // mov r1, #0
    // str r1, [sp]
    // ldrb r0, [r5, #9]
    // add r2, r1, #0
    // add r3, r1, #0
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, [r5, #4]
    // bl DpadMenuBox_GetNeighborInDirection
    // add r4, r0, #0
    // mov r6, #1
    // b _02224D36
    // mov r1, #0x20
    // tst r1, r0
    // beq _02224D12
    // mov r1, #0
    // str r1, [sp]
    // ldrb r0, [r5, #9]
    // add r2, r1, #0
    // add r3, r1, #0
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r0, [r5, #4]
    // bl DpadMenuBox_GetNeighborInDirection
    // add r4, r0, #0
    // mov r6, #2
    // b _02224D36
    // mov r1, #0x10
    // tst r0, r1
    // beq _02224D34
    // mov r1, #0
    // str r1, [sp]
    // ldrb r0, [r5, #9]
    // add r2, r1, #0
    // add r3, r1, #0
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // ldr r0, [r5, #4]
    // bl DpadMenuBox_GetNeighborInDirection
    // add r4, r0, #0
    // mov r6, #3
    // b _02224D36
    // mov r4, #0xff
    // cmp r4, #0xff
    // beq _02224DF6
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0x80
    // add r1, r4, #0
    // tst r1, r0
    // beq _02224D56
    // ldrb r1, [r5, #0xa]
    // cmp r1, #0xff
    // beq _02224D50
    // add r4, r1, #0
    // b _02224D56
    // eor r0, r4
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // mov r7, #0
    // mov r0, #1
    // ldr r1, [r5, #0xc]
    // lsl r0, r4
    // tst r0, r1
    // bne _02224D90
    // str r7, [sp, #0xc]
    // str r7, [sp]
    // str r4, [sp, #4]
    // str r6, [sp, #8]
    // ldr r0, [r5, #4]
    // add r1, r7, #0
    // add r2, r7, #0
    // add r3, r7, #0
    // bl DpadMenuBox_GetNeighborInDirection
    // mov r1, #0x7f
    // and r0, r1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // cmp r1, r4
    // beq _02224D88
    // ldrb r0, [r5, #9]
    // cmp r1, r0
    // bne _02224D8C
    // ldrb r4, [r5, #9]
    // b _02224D90
    // add r4, r1, #0
    // b _02224D58
    // ldrb r0, [r5, #9]
    // cmp r0, r4
    // beq _02224DEE
    // ldr r0, [r5, #4]
    // lsl r7, r4, #3
    // add r1, sp, #0x10
    // add r2, sp, #0x10
    // add r0, r0, r7
    // add r1, #3
    // add r2, #2
    // bl DpadMenuBox_GetPosition
    // ldr r0, [r5, #4]
    // add r1, sp, #0x10
    // add r0, r0, r7
    // add r1, #1
    // add r2, sp, #0x10
    // bl DpadMenuBox_GetDimensions
    // ldr r0, [r5, #4]
    // add r1, r6, #0
    // add r0, r0, r7
    // bl ov08_02224C48
    // cmp r0, #1
    // bne _02224DD0
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // beq _02224DD0
    // ldrb r0, [r5, #9]
    // strb r0, [r5, #0xa]
    // b _02224DD4
    // mov r0, #0xff
    // strb r0, [r5, #0xa]
    // strb r4, [r5, #9]
    // add r3, sp, #0x10
    // ldrb r0, [r3]
    // str r0, [sp]
    // ldrb r1, [r3, #3]
    // ldrb r2, [r3, #1]
    // ldrb r3, [r3, #2]
    // ldr r0, [r5]
    // bl ov12_0226BAFC
    // ldr r0, _02224E24 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, _02224E20 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _02224E06
    // add sp, #0x14
    // ldrb r0, [r5, #9]
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #2
    // tst r1, r0
    // beq _02224E1A
    // ldr r0, _02224E28 ; =0x000005DD
    // bl PlaySE
    // mov r0, #1
    // add sp, #0x14
    // mvn r0, r0
    // pop {r4, r5, r6, r7, pc}
    // sub r0, r0, #3
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02224E20: .word gSystem
    // _02224E24: .word 0x000005DC
    // _02224E28: .word 0x000005DD
    // TODO: decompile
}


