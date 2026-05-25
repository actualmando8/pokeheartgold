/* Decompiled from asm/overlay_05.s */
#include "global.h"

void ov05_0221BA00(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _0221BA5C ; =ov05_0221BA70
    // ldr r1, _0221BA60 ; =0x00000BD4
    // ldr r3, [r5, #0x24]
    // mov r2, #0x64
    // bl CreateSysTaskAndEnvironment
    // bl SysTask_GetData
    // ldr r2, _0221BA60 ; =0x00000BD4
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // ldr r0, _0221BA64 ; =0x00000B7F
    // str r5, [r4]
    // mov r1, #0
    // strb r1, [r4, r0]
    // bl sub_020304B4
    // ldr r1, _0221BA68 ; =0x00000BC8
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // cmp r0, #1
    // bne _0221BA58
    // ldr r0, [r4]
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _0221BA58
    // mov r0, #7
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _0221BA58
    // bl Save_Bag_Get
    // ldr r1, _0221BA6C ; =0x000001D1
    // ldr r3, [r5, #0x24]
    // mov r2, #1
    // bl Bag_HasItem
    // ldr r1, _0221BA68 ; =0x00000BC8
    // str r0, [r4, r1]
    // pop {r3, r4, r5, pc}
    // nop
    // _0221BA5C: .word ov05_0221BA70
    // _0221BA60: .word 0x00000BD4
    // _0221BA64: .word 0x00000B7F
    // _0221BA68: .word 0x00000BC8
    // _0221BA6C: .word 0x000001D1
    // TODO: decompile
}



void ov05_0221BA70(void) {
    // push {r4, r5, r6, lr}
    // ldr r2, _0221BAF8 ; =0x00000B7F
    // add r5, r1, #0
    // ldrb r2, [r5, r2]
    // cmp r2, #0
    // beq _0221BA86
    // cmp r2, #1
    // beq _0221BA92
    // cmp r2, #2
    // beq _0221BAC4
    // b _0221BACC
    // add r0, r5, #0
    // bl ov05_0221BD28
    // ldr r1, _0221BAF8 ; =0x00000B7F
    // strb r0, [r5, r1]
    // b _0221BACC
    // mov r4, #0x2e
    // lsl r4, r4, #6
    // add r6, r4, #0
    // ldrb r1, [r5, r6]
    // ldr r2, [r5, #4]
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // blx r1
    // cmp r0, #0
    // beq _0221BAAE
    // ldrb r1, [r5, r4]
    // add r1, r1, #1
    // strb r1, [r5, r4]
    // cmp r0, #2
    // beq _0221BA98
    // ldr r0, [r5]
    // add r0, #0x28
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _0221BACC
    // add r0, r5, #0
    // bl ov05_0221BB30
    // b _0221BACC
    // bl ov05_0221CC74
    // cmp r0, #1
    // beq _0221BAF6
    // mov r0, #0x2e
    // lsl r0, r0, #6
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // beq _0221BAE6
    // add r0, r5, #0
    // bl ov05_0221CE50
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl SpriteSystem_DrawSprites
    // ldr r0, [r5]
    // add r0, #0x28
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0221BAF6
    // ldr r0, _0221BAFC ; =0x04000540
    // mov r1, #1
    // str r1, [r0]
    // pop {r4, r5, r6, pc}
    // _0221BAF8: .word 0x00000B7F
    // _0221BAFC: .word 0x04000540
    // TODO: decompile
}



void ov05_0221BB00(void) {
    // push {r4, lr}
    // sub sp, #0x28
    // ldr r4, _0221BB2C ; =ov05_0221EC00
    // add r3, sp, #0
    // mov r2, #5
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _0221BB0A
    // add r0, sp, #0
    // bl GfGfx_SetBanks
    // mov r1, #6
    // mov r2, #2
    // mov r0, #0
    // lsl r1, r1, #0x18
    // lsl r2, r2, #0x12
    // bl MIi_CpuClear32
    // add sp, #0x28
    // pop {r4, pc}
    // nop
    // _0221BB2C: .word ov05_0221EC00
    // TODO: decompile
}



void ov05_0221BB30(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov05_0221E9F8
    // cmp r0, #0
    // bne _0221BB40
    // b _0221BD08
    // ldr r2, _0221BD0C ; =0x00000BBC
    // ldr r0, [r4, r2]
    // cmp r0, #8
    // bhi _0221BBBA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221BB54: ; jump table
    // add r0, r4, #0
    // bl ov05_0221E9C4
    // ldr r2, _0221BD10 ; =0x00000BAC
    // mov r1, #0
    // ldr r0, [r4, r2]
    // add r2, #8
    // ldr r2, [r4, r2]
    // bl ReadMsgDataIntoString
    // mov r3, #0
    // str r3, [sp]
    // ldr r2, _0221BD14 ; =0x00000B88
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    // ldr r2, [r4, r2]
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _0221BD18 ; =0x00000BB8
    // str r0, [r4, r1]
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, _0221BD0C ; =0x00000BBC
    // mov r1, #2
    // add sp, #0xc
    // str r1, [r4, r0]
    // pop {r3, r4, pc}
    // add r0, r2, #0
    // add r0, #0xc
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0221BBBA
    // ldr r0, _0221BD1C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // bne _0221BBBC
    // b _0221BD08
    // mov r0, #3
    // add sp, #0xc
    // str r0, [r4, r2]
    // pop {r3, r4, pc}
    // add r0, r2, #0
    // add r0, #0x10
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _0221BBE0
    // add r0, r2, #0
    // sub r0, #0x10
    // sub r2, #8
    // ldr r0, [r4, r0]
    // ldr r2, [r4, r2]
    // mov r1, #2
    // bl ReadMsgDataIntoString
    // b _0221BBF0
    // add r0, r2, #0
    // sub r0, #0x10
    // sub r2, #8
    // ldr r0, [r4, r0]
    // ldr r2, [r4, r2]
    // mov r1, #1
    // bl ReadMsgDataIntoString
    // mov r0, #0xd8
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // ldr r0, _0221BD20 ; =0x00000B98
    // mov r2, #0
    // add r0, r4, r0
    // mov r1, #0xf
    // add r3, r2, #0
    // bl FillWindowPixelRect
    // ldr r0, _0221BD20 ; =0x00000B98
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #1
    // mov r3, #0xf
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // ldr r2, _0221BD20 ; =0x00000B98
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x1c
    // ldr r2, [r4, r2]
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _0221BD18 ; =0x00000BB8
    // mov r2, #0x1f
    // str r0, [r4, r1]
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4]
    // ldr r1, _0221BD24 ; =ov05_0221EA58
    // ldr r0, [r0, #0x24]
    // mov r3, #0xe
    // str r0, [sp, #4]
    // ldr r0, [r4, #0xc]
    // bl CreateYesNoMenu
    // mov r1, #0x2f
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, _0221BD0C ; =0x00000BBC
    // mov r1, #4
    // add sp, #0xc
    // str r1, [r4, r0]
    // pop {r3, r4, pc}
    // ldr r1, [r4]
    // add r0, r2, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r1, #0x24]
    // bl Handle2dMenuInput_DeleteOnFinish
    // cmp r0, #0
    // beq _0221BC78
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // beq _0221BC88
    // add sp, #0xc
    // pop {r3, r4, pc}
    // ldr r0, _0221BD0C ; =0x00000BBC
    // mov r1, #5
    // str r1, [r4, r0]
    // mov r1, #0
    // add r0, r0, #4
    // add sp, #0xc
    // str r1, [r4, r0]
    // pop {r3, r4, pc}
    // ldr r0, _0221BD0C ; =0x00000BBC
    // mov r1, #1
    // str r1, [r4, r0]
    // mov r1, #0
    // add r0, r0, #4
    // add sp, #0xc
    // str r1, [r4, r0]
    // pop {r3, r4, pc}
    // add r0, r4, #0
    // bl ov05_0221E9C4
    // ldr r2, _0221BD10 ; =0x00000BAC
    // mov r1, #5
    // ldr r0, [r4, r2]
    // add r2, #8
    // ldr r2, [r4, r2]
    // bl ReadMsgDataIntoString
    // mov r3, #0
    // str r3, [sp]
    // ldr r2, _0221BD14 ; =0x00000B88
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    // ldr r2, [r4, r2]
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _0221BD18 ; =0x00000BB8
    // str r0, [r4, r1]
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, _0221BD0C ; =0x00000BBC
    // mov r1, #6
    // add sp, #0xc
    // str r1, [r4, r0]
    // pop {r3, r4, pc}
    // add r0, r2, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0221BCF0
    // ldr r1, [r4]
    // ldr r1, [r1, #0x24]
    // bl Clear2dMenuWindowAndDelete
    // mov r0, #0x2f
    // mov r1, #0
    // lsl r0, r0, #6
    // str r1, [r4, r0]
    // ldr r0, _0221BD14 ; =0x00000B88
    // mov r1, #0
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, _0221BD0C ; =0x00000BBC
    // mov r1, #8
    // str r1, [r4, r0]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0221BD0C: .word 0x00000BBC
    // _0221BD10: .word 0x00000BAC
    // _0221BD14: .word 0x00000B88
    // _0221BD18: .word 0x00000BB8
    // _0221BD1C: .word gSystem
    // _0221BD20: .word 0x00000B98
    // _0221BD24: .word ov05_0221EA58
    // TODO: decompile
}



void ov05_0221BD28(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221BDE0 ; =0x04000050
    // add r4, r0, #0
    // mov r0, #0
    // strh r0, [r1]
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r1, #1
    // lsl r1, r1, #0x1a
    // ldr r0, [r1]
    // ldr r2, _0221BDE4 ; =0xFFFFE0FF
    // ldr r5, _0221BDE8 ; =0x04000304
    // and r0, r2
    // str r0, [r1]
    // ldr r0, _0221BDEC ; =0x04001000
    // add r1, #0x50
    // ldr r3, [r0]
    // and r2, r3
    // str r2, [r0]
    // ldrh r3, [r5]
    // lsr r2, r5, #0xb
    // add r0, #0x50
    // orr r2, r3
    // strh r2, [r5]
    // mov r2, #0
    // strh r2, [r1]
    // strh r2, [r0]
    // bl ov05_0221BB00
    // ldr r0, [r4]
    // ldr r0, [r0, #0x24]
    // bl BgConfig_Alloc
    // str r0, [r4, #0xc]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x24]
    // bl PaletteData_Init
    // str r0, [r4, #8]
    // ldr r3, [r4]
    // mov r1, #0
    // ldr r3, [r3, #0x24]
    // lsr r2, r5, #0x11
    // bl PaletteData_AllocBuffers
    // mov r0, #4
    // mov r1, #0
    // bl BG_SetMaskColor
    // ldr r0, _0221BDF0 ; =0x00000B82
    // mov r3, #0
    // strb r3, [r4, r0]
    // sub r1, r0, #1
    // mov r2, #8
    // strb r2, [r4, r1]
    // sub r0, r0, #2
    // strb r3, [r4, r0]
    // ldr r1, [r4]
    // add r0, r1, #0
    // add r0, #0x28
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0221BDBE
    // cmp r0, #1
    // beq _0221BDC4
    // cmp r0, #2
    // beq _0221BDCA
    // b _0221BDDC
    // ldr r0, _0221BDF4 ; =ov05_0221EAC0
    // str r0, [r4, #4]
    // b _0221BDDC
    // ldr r0, _0221BDF8 ; =ov05_0221EA98
    // str r0, [r4, #4]
    // b _0221BDDC
    // add r1, #0x2a
    // ldrb r0, [r1]
    // cmp r0, #3
    // bne _0221BDD8
    // ldr r0, _0221BDFC ; =ov05_0221EC28
    // str r0, [r4, #4]
    // b _0221BDDC
    // ldr r0, _0221BE00 ; =ov05_0221EC98
    // str r0, [r4, #4]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _0221BDE0: .word 0x04000050
    // _0221BDE4: .word 0xFFFFE0FF
    // _0221BDE8: .word 0x04000304
    // _0221BDEC: .word 0x04001000
    // _0221BDF0: .word 0x00000B82
    // _0221BDF4: .word ov05_0221EAC0
    // _0221BDF8: .word ov05_0221EA98
    // _0221BDFC: .word ov05_0221EC28
    // _0221BE00: .word ov05_0221EC98
    // TODO: decompile
}



void ov05_0221BE04(void) {
    // push {r4, lr}
    // ldr r1, _0221BE78 ; =0x00000B82
    // add r4, r0, #0
    // ldrb r2, [r4, r1]
    // cmp r2, #0
    // beq _0221BE1A
    // cmp r2, #1
    // beq _0221BE26
    // cmp r2, #2
    // beq _0221BE32
    // b _0221BE6C
    // bl ov05_0221DB94
    // add r0, r4, #0
    // bl ov05_0221DC60
    // b _0221BE6C
    // bl ov05_0221E07C
    // add r0, r4, #0
    // bl ov05_0221E274
    // b _0221BE6C
    // mov r2, #0
    // strb r2, [r4, r1]
    // mov r2, #0x20
    // sub r1, r1, #1
    // strb r2, [r4, r1]
    // bl ov05_0221DD08
    // add r0, r4, #0
    // bl ov05_0221E5E4
    // add r0, r4, #0
    // bl ov05_0221E944
    // add r0, r4, #0
    // bl ov05_0221DE38
    // bl sub_0203A880
    // ldr r1, [r4]
    // mov r0, #0
    // ldr r1, [r1, #0x24]
    // bl sub_020880CC
    // ldr r0, _0221BE7C ; =ov05_0221CE88
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, _0221BE78 ; =0x00000B82
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // mov r0, #0
    // pop {r4, pc}
    // _0221BE78: .word 0x00000B82
    // _0221BE7C: .word ov05_0221CE88
    // TODO: decompile
}



void ov05_0221BE80(void) {
    // push {r4, lr}
    // ldr r1, _0221BF00 ; =0x00000B82
    // add r4, r0, #0
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _0221BE96
    // cmp r1, #1
    // beq _0221BEAA
    // cmp r1, #2
    // beq _0221BEC4
    // b _0221BEF2
    // mov r1, #1
    // mov r2, #0
    // bl ov05_0221CEB8
    // add r0, r4, #0
    // bl ov05_0221D094
    // bl ov05_0221D228
    // b _0221BEF2
    // mov r1, #0
    // add r2, r1, #0
    // bl ov05_0221D6C4
    // add r0, r4, #0
    // bl ov05_0221D240
    // bl sub_0203A880
    // add r0, r4, #0
    // bl ov05_0221D9F0
    // b _0221BEF2
    // ldr r1, [r4]
    // mov r0, #0
    // ldr r1, [r1, #0x24]
    // bl sub_020880CC
    // ldr r0, _0221BF04 ; =ov05_0221CE88
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // ldr r1, _0221BF00 ; =0x00000B82
    // mov r0, #0
    // strb r0, [r4, r1]
    // mov r2, #8
    // sub r0, r1, #6
    // strb r2, [r4, r0]
    // sub r0, r1, #5
    // mov r2, #4
    // strb r2, [r4, r0]
    // mov r0, #0x10
    // sub r1, #0xe
    // str r0, [r4, r1]
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, _0221BF00 ; =0x00000B82
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0221BF00: .word 0x00000B82
    // _0221BF04: .word ov05_0221CE88
    // TODO: decompile
}



void ov05_0221BF08(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0221C000 ; =0x00000B82
    // add r5, r0, #0
    // ldrb r1, [r5, r1]
    // cmp r1, #0
    // beq _0221BF1E
    // cmp r1, #1
    // beq _0221BF7A
    // cmp r1, #2
    // beq _0221BF92
    // b _0221BFF2
    // mov r1, #0
    // mov r2, #1
    // bl ov05_0221CEB8
    // add r0, r5, #0
    // bl ov05_0221D094
    // add r0, r5, #0
    // bl ov05_0221D140
    // bl ov05_0221D228
    // ldr r2, [r5]
    // mov r0, #7
    // ldr r1, [r2]
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // ldr r1, [r2, #0x24]
    // add r2, sp, #0
    // mov r3, #0
    // bl sub_0202FD28
    // ldr r1, [sp]
    // ldr r0, _0221C004 ; =0x00000BCC
    // mov r4, #0
    // str r1, [r5, r0]
    // add r0, r0, #4
    // str r4, [r5, r0]
    // add r0, r4, #0
    // bl sub_02034818
    // cmp r0, #0
    // beq _0221BF72
    // bl PlayerProfile_GetVersion
    // cmp r0, #0
    // bne _0221BF72
    // mov r0, #0xbd
    // mov r1, #1
    // lsl r0, r0, #4
    // str r1, [r5, r0]
    // b _0221BFF2
    // add r4, r4, #1
    // cmp r4, #8
    // blt _0221BF56
    // b _0221BFF2
    // mov r1, #0x1f
    // mvn r1, r1
    // add r2, r1, #0
    // add r2, #0x10
    // bl ov05_0221D6C4
    // add r0, r5, #0
    // bl ov05_0221D7AC
    // bl sub_0203A880
    // b _0221BFF2
    // ldr r1, [r5]
    // mov r0, #0
    // ldr r1, [r1, #0x24]
    // bl sub_020880CC
    // ldr r0, _0221C008 ; =ov05_0221CE88
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // ldr r2, _0221C000 ; =0x00000B82
    // mov r0, #0
    // strb r0, [r5, r2]
    // mov r3, #4
    // sub r1, r2, #6
    // strb r3, [r5, r1]
    // sub r1, r2, #5
    // mov r3, #2
    // strb r3, [r5, r1]
    // mov r1, #0xc
    // sub r2, #0xe
    // str r1, [r5, r2]
    // ldr r3, [r5]
    // ldr r2, _0221C00C ; =0x0000027E
    // ldr r3, [r3, #0x24]
    // mov r1, #0x1b
    // bl NewMsgDataFromNarc
    // ldr r1, _0221C010 ; =0x00000BAC
    // str r0, [r5, r1]
    // ldr r0, [r5]
    // ldr r0, [r0, #0x24]
    // bl MessageFormat_New
    // mov r1, #0xbb
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r1, [r5]
    // mov r0, #5
    // ldr r1, [r1, #0x24]
    // lsl r0, r0, #6
    // bl String_New
    // ldr r1, _0221C014 ; =0x00000BB4
    // str r0, [r5, r1]
    // mov r0, #1
    // add r1, #8
    // str r0, [r5, r1]
    // pop {r3, r4, r5, pc}
    // ldr r0, _0221C000 ; =0x00000B82
    // ldrb r1, [r5, r0]
    // add r1, r1, #1
    // strb r1, [r5, r0]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0221C000: .word 0x00000B82
    // _0221C004: .word 0x00000BCC
    // _0221C008: .word ov05_0221CE88
    // _0221C00C: .word 0x0000027E
    // _0221C010: .word 0x00000BAC
    // _0221C014: .word 0x00000BB4
    // TODO: decompile
}



void ov05_0221C018(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _0221C028
    // mov r0, #0
    // pop {r4, pc}
    // ldr r1, _0221C04C ; =0x00000B81
    // add r0, r1, #1
    // ldrb r2, [r4, r1]
    // ldrb r0, [r4, r0]
    // cmp r2, r0
    // bne _0221C03E
    // mov r2, #0
    // add r0, r1, #1
    // strb r2, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r1, #1
    // ldrb r0, [r4, r0]
    // add r2, r0, #1
    // add r0, r1, #1
    // strb r2, [r4, r0]
    // mov r0, #0
    // pop {r4, pc}
    // _0221C04C: .word 0x00000B81
    // TODO: decompile
}



void ov05_0221C050(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // mov r1, #3
    // bl Bg_GetXpos
    // cmp r0, #0x18
    // bgt _0221C0EC
    // ldr r1, _0221C214 ; =0x00000B82
    // mov r2, #0
    // add r0, r1, #0
    // strb r2, [r4, r1]
    // sub r0, #0xa
    // strh r2, [r4, r0]
    // sub r1, #8
    // strh r2, [r4, r1]
    // ldr r0, [r4, #0xc]
    // mov r1, #3
    // mov r3, #0x18
    // bl ScheduleSetBgPosText
    // mov r2, #0
    // add r3, r2, #0
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // sub r3, #0x18
    // bl ScheduleSetBgPosText
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov05_0221D3AC
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #1
    // add r3, r2, #0
    // bl ov05_0221D3AC
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #2
    // add r3, r2, #0
    // bl ov05_0221D3AC
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #3
    // add r3, r2, #0
    // bl ov05_0221D3AC
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov05_0221D664
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #1
    // add r3, r2, #0
    // bl ov05_0221D664
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #2
    // add r3, r2, #0
    // bl ov05_0221D664
    // mov r2, #0
    // add r0, r4, #0
    // mov r1, #3
    // add r3, r2, #0
    // bl ov05_0221D664
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r3, _0221C218 ; =0x00000B74
    // ldr r0, [r4, #0xc]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // mov r2, #2
    // bl ScheduleSetBgPosText
    // ldr r3, _0221C218 ; =0x00000B74
    // ldr r0, [r4, #0xc]
    // ldr r3, [r4, r3]
    // mov r1, #2
    // mov r2, #1
    // bl ScheduleSetBgPosText
    // ldr r3, _0221C214 ; =0x00000B82
    // mov r1, #0
    // ldrb r0, [r4, r3]
    // add r2, r3, #0
    // sub r2, #0xe
    // add r0, r0, #1
    // strb r0, [r4, r3]
    // ldr r5, [r4, r2]
    // ldrb r2, [r4, r3]
    // add r3, r5, #0
    // add r0, r4, #0
    // mul r3, r2
    // mov r2, #1
    // lsl r2, r2, #8
    // sub r2, r3, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add r3, r1, #0
    // bl ov05_0221D3AC
    // ldr r2, _0221C218 ; =0x00000B74
    // mov r1, #1
    // ldr r3, [r4, r2]
    // add r2, #0xe
    // add r5, r3, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #0
    // mul r5, r2
    // add r2, r1, #0
    // add r2, #0xff
    // sub r2, r5, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C218 ; =0x00000B74
    // mov r1, #2
    // ldr r3, [r4, r2]
    // add r2, #0xe
    // add r5, r3, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #0
    // mul r5, r2
    // add r2, r1, #0
    // add r2, #0xfe
    // sub r2, r2, r5
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C218 ; =0x00000B74
    // mov r1, #3
    // ldr r3, [r4, r2]
    // add r2, #0xe
    // add r5, r3, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #0
    // mul r5, r2
    // add r2, r1, #0
    // add r2, #0xfd
    // sub r2, r2, r5
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C218 ; =0x00000B74
    // mov r1, #0
    // ldr r3, [r4, r2]
    // add r2, #0xe
    // add r5, r3, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // add r3, r1, #0
    // mul r5, r2
    // mov r2, #1
    // lsl r2, r2, #8
    // sub r2, r5, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r2, _0221C218 ; =0x00000B74
    // mov r1, #1
    // ldr r3, [r4, r2]
    // add r2, #0xe
    // add r5, r3, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #0
    // mul r5, r2
    // add r2, r1, #0
    // add r2, #0xff
    // sub r2, r5, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r2, _0221C218 ; =0x00000B74
    // mov r1, #2
    // ldr r3, [r4, r2]
    // add r2, #0xe
    // add r5, r3, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #0
    // mul r5, r2
    // add r2, r1, #0
    // add r2, #0xfe
    // sub r2, r2, r5
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r2, _0221C218 ; =0x00000B74
    // add r0, r4, #0
    // ldr r3, [r4, r2]
    // add r2, #0xe
    // ldrb r2, [r4, r2]
    // add r4, r3, #0
    // mov r1, #3
    // mul r4, r2
    // add r2, r1, #0
    // add r2, #0xfd
    // sub r2, r2, r4
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // mov r3, #0
    // bl ov05_0221D664
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0221C214: .word 0x00000B82
    // _0221C218: .word 0x00000B74
    // TODO: decompile
}



void ov05_0221C21C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl ov05_0221DAE0
    // cmp r0, #0
    // bne _0221C238
    // ldr r0, _0221C418 ; =0x00000B82
    // ldrb r1, [r5, r0]
    // cmp r1, #0x18
    // bls _0221C238
    // mov r1, #0
    // strb r1, [r5, r0]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // ldr r0, _0221C418 ; =0x00000B82
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // bne _0221C258
    // ldr r0, [r5]
    // add r0, #0x28
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0221C252
    // ldr r0, _0221C41C ; =0x00000715
    // bl PlaySE
    // b _0221C258
    // ldr r0, _0221C420 ; =0x00000852
    // bl PlaySE
    // ldr r0, _0221C418 ; =0x00000B82
    // ldrb r1, [r5, r0]
    // cmp r1, #0x18
    // bne _0221C2F4
    // ldr r0, [r5, #0xc]
    // mov r1, #3
    // mov r2, #0
    // mov r3, #0x18
    // bl ScheduleSetBgPosText
    // mov r2, #0
    // add r3, r2, #0
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // sub r3, #0x18
    // bl ScheduleSetBgPosText
    // mov r1, #3
    // ldr r0, [r5, #0xc]
    // add r2, r1, #0
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // mov r2, #3
    // mov r3, #0
    // bl ScheduleSetBgPosText
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov05_0221D3AC
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #1
    // add r3, r2, #0
    // bl ov05_0221D3AC
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #2
    // add r3, r2, #0
    // bl ov05_0221D3AC
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #3
    // add r3, r2, #0
    // bl ov05_0221D3AC
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // bl ov05_0221D664
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #1
    // add r3, r2, #0
    // bl ov05_0221D664
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #2
    // add r3, r2, #0
    // bl ov05_0221D664
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #3
    // add r3, r2, #0
    // bl ov05_0221D664
    // b _0221C40C
    // blo _0221C2F8
    // b _0221C40C
    // sub r0, r0, #6
    // ldrsb r4, [r5, r0]
    // bl LCRandom
    // add r1, r4, #0
    // bl _s32_div_f
    // lsr r0, r4, #0x1f
    // add r0, r4, r0
    // asr r0, r0, #1
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // ldr r0, _0221C424 ; =0x00000B7D
    // ldrsb r4, [r5, r0]
    // bl LCRandom
    // add r1, r4, #0
    // bl _s32_div_f
    // lsr r0, r4, #0x1f
    // add r0, r4, r0
    // asr r0, r0, #1
    // sub r0, r1, r0
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // cmp r6, #0
    // bge _0221C338
    // ldr r0, _0221C428 ; =0x00000B78
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // blt _0221C344
    // cmp r6, #0
    // ble _0221C34E
    // ldr r0, _0221C428 ; =0x00000B78
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // ble _0221C34E
    // mov r0, #0
    // mvn r0, r0
    // mul r0, r6
    // lsl r0, r0, #0x10
    // asr r6, r0, #0x10
    // cmp r4, #0
    // bge _0221C35A
    // ldr r0, _0221C42C ; =0x00000B7A
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // blt _0221C366
    // cmp r4, #0
    // ble _0221C370
    // ldr r0, _0221C42C ; =0x00000B7A
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // ble _0221C370
    // mov r0, #0
    // mvn r0, r0
    // mul r0, r4
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // add r3, r6, #0
    // ldr r0, [r5, #0xc]
    // mov r1, #3
    // mov r2, #0
    // add r3, #0x18
    // bl ScheduleSetBgPosText
    // add r3, r6, #0
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // mov r2, #0
    // sub r3, #0x18
    // bl ScheduleSetBgPosText
    // mov r1, #3
    // ldr r0, [r5, #0xc]
    // add r2, r1, #0
    // add r3, r4, #0
    // bl ScheduleSetBgPosText
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // mov r2, #3
    // add r3, r4, #0
    // bl ScheduleSetBgPosText
    // add r0, r5, #0
    // mov r1, #0
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov05_0221D3AC
    // add r0, r5, #0
    // mov r1, #1
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov05_0221D3AC
    // add r0, r5, #0
    // mov r1, #2
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov05_0221D3AC
    // add r0, r5, #0
    // mov r1, #3
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov05_0221D3AC
    // add r0, r5, #0
    // mov r1, #0
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov05_0221D664
    // add r0, r5, #0
    // mov r1, #1
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov05_0221D664
    // add r0, r5, #0
    // mov r1, #2
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov05_0221D664
    // add r0, r5, #0
    // mov r1, #3
    // add r2, r6, #0
    // add r3, r4, #0
    // bl ov05_0221D664
    // ldr r0, _0221C428 ; =0x00000B78
    // strh r6, [r5, r0]
    // add r0, r0, #2
    // strh r4, [r5, r0]
    // ldr r0, _0221C418 ; =0x00000B82
    // ldrb r1, [r5, r0]
    // add r1, r1, #1
    // strb r1, [r5, r0]
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0221C418: .word 0x00000B82
    // _0221C41C: .word 0x00000715
    // _0221C420: .word 0x00000852
    // _0221C424: .word 0x00000B7D
    // _0221C428: .word 0x00000B78
    // _0221C42C: .word 0x00000B7A
    // TODO: decompile
}



void ov05_0221C430(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, _0221C548 ; =0x00000B82
    // ldrb r0, [r4, r0]
    // cmp r0, #8
    // bne _0221C458
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r3, _0221C54C ; =0x00007FFF
    // ldr r0, [r0, #0x24]
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, _0221C548 ; =0x00000B82
    // ldrb r0, [r4, r0]
    // cmp r0, #8
    // blo _0221C474
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0221C474
    // ldr r0, _0221C550 ; =0x00000B7F
    // mov r1, #2
    // strb r1, [r4, r0]
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, pc}
    // ldr r0, _0221C548 ; =0x00000B82
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bne _0221C482
    // ldr r0, _0221C554 ; =0x00000719
    // bl PlaySE
    // ldr r0, [r4, #0xc]
    // mov r1, #3
    // mov r2, #1
    // mov r3, #0x10
    // bl ScheduleSetBgPosText
    // mov r1, #2
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // mov r3, #0x10
    // bl ScheduleSetBgPosText
    // ldr r2, _0221C548 ; =0x00000B82
    // mov r1, #0
    // ldrb r0, [r4, r2]
    // add r3, r1, #0
    // add r0, r0, #1
    // strb r0, [r4, r2]
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // lsl r2, r2, #4
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C548 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #1
    // mov r3, #0
    // lsl r2, r2, #4
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C548 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #2
    // mov r3, #0
    // lsl r2, r2, #0x14
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C548 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #3
    // mov r3, #0
    // lsl r2, r2, #0x14
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C548 ; =0x00000B82
    // mov r1, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // add r3, r1, #0
    // lsl r2, r2, #4
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r2, _0221C548 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #1
    // mov r3, #0
    // lsl r2, r2, #4
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r2, _0221C548 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #2
    // mov r3, #0
    // lsl r2, r2, #0x14
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r2, _0221C548 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #3
    // mov r3, #0
    // lsl r2, r2, #0x14
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0221C548: .word 0x00000B82
    // _0221C54C: .word 0x00007FFF
    // _0221C550: .word 0x00000B7F
    // _0221C554: .word 0x00000719
    // TODO: decompile
}



void ov05_0221C558(void) {
    // ldr r1, _0221C564 ; =0x00000B81
    // mov r2, #0x10
    // strb r2, [r0, r1]
    // mov r0, #2
    // bx lr
    // nop
    // _0221C564: .word 0x00000B81
    // TODO: decompile
}



void ov05_0221C568(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov05_0221CCF4
    // cmp r0, #1
    // ldr r0, [r4]
    // bne _0221C58C
    // add r0, #0x2a
    // ldrb r0, [r0]
    // cmp r0, #1
    // ldr r0, _0221C5A4 ; =0x00000B7E
    // bne _0221C586
    // mov r1, #0
    // strb r1, [r4, r0]
    // b _0221C5A0
    // mov r1, #1
    // strb r1, [r4, r0]
    // b _0221C5A0
    // add r0, #0x2a
    // ldrb r0, [r0]
    // cmp r0, #1
    // ldr r0, _0221C5A4 ; =0x00000B7E
    // bne _0221C59C
    // mov r1, #1
    // strb r1, [r4, r0]
    // b _0221C5A0
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #2
    // pop {r4, pc}
    // _0221C5A4: .word 0x00000B7E
    // TODO: decompile
}



void ov05_0221C5A8(void) {
    // push {r3, lr}
    // ldr r1, _0221C5C0 ; =0x00000B7E
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // bne _0221C5B8
    // bl ov05_0221C5C4
    // pop {r3, pc}
    // bl ov05_0221C6C8
    // pop {r3, pc}
    // nop
    // _0221C5C0: .word 0x00000B7E
    // TODO: decompile
}



void ov05_0221C5C4(void) {
    // push {r3, r4, r5, lr}
    // ldr r3, _0221C6B8 ; =0x00000B82
    // add r4, r0, #0
    // ldrb r3, [r4, r3]
    // mov r1, #2
    // ldr r0, [r4, #0xc]
    // lsl r5, r3, #1
    // ldr r3, _0221C6BC ; =ov05_0221EA6C
    // add r2, r1, #0
    // ldrb r3, [r3, r5]
    // bl ScheduleSetBgPosText
    // ldr r3, _0221C6B8 ; =0x00000B82
    // ldr r0, [r4, #0xc]
    // ldrb r3, [r4, r3]
    // mov r1, #3
    // mov r2, #2
    // lsl r5, r3, #1
    // ldr r3, _0221C6BC ; =ov05_0221EA6C
    // ldrb r3, [r3, r5]
    // bl ScheduleSetBgPosText
    // ldr r2, _0221C6B8 ; =0x00000B82
    // mov r1, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // lsl r3, r2, #1
    // ldr r2, _0221C6C0 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // add r3, r1, #0
    // bl ov05_0221D3AC
    // ldr r2, _0221C6B8 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #1
    // lsl r3, r2, #1
    // ldr r2, _0221C6C0 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // bl ov05_0221D3AC
    // ldr r2, _0221C6B8 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #2
    // lsl r3, r2, #1
    // ldr r2, _0221C6C0 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // bl ov05_0221D3AC
    // ldr r2, _0221C6B8 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #3
    // lsl r3, r2, #1
    // ldr r2, _0221C6C0 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // bl ov05_0221D3AC
    // ldr r2, _0221C6B8 ; =0x00000B82
    // mov r1, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // lsl r3, r2, #1
    // ldr r2, _0221C6C0 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // add r3, r1, #0
    // bl ov05_0221D664
    // ldr r2, _0221C6B8 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #1
    // lsl r3, r2, #1
    // ldr r2, _0221C6C0 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // bl ov05_0221D664
    // ldr r2, _0221C6B8 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #2
    // lsl r3, r2, #1
    // ldr r2, _0221C6C0 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // bl ov05_0221D664
    // ldr r2, _0221C6B8 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #3
    // lsl r3, r2, #1
    // ldr r2, _0221C6C0 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // bl ov05_0221D664
    // ldr r0, _0221C6B8 ; =0x00000B82
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bne _0221C69E
    // ldr r0, _0221C6C4 ; =0x00000853
    // bl PlaySE
    // ldr r0, _0221C6B8 ; =0x00000B82
    // ldrb r1, [r4, r0]
    // cmp r1, #5
    // bne _0221C6AE
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0221C6B8: .word 0x00000B82
    // _0221C6BC: .word ov05_0221EA6C
    // _0221C6C0: .word ov05_0221EA6D
    // _0221C6C4: .word 0x00000853
    // TODO: decompile
}



void ov05_0221C6C8(void) {
    // push {r3, r4, r5, lr}
    // ldr r3, _0221C7EC ; =0x00000B82
    // add r4, r0, #0
    // ldrb r3, [r4, r3]
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // lsl r5, r3, #1
    // ldr r3, _0221C7F0 ; =ov05_0221EA6C
    // mov r2, #1
    // ldrb r3, [r3, r5]
    // bl ScheduleSetBgPosText
    // ldr r3, _0221C7EC ; =0x00000B82
    // ldr r0, [r4, #0xc]
    // ldrb r3, [r4, r3]
    // mov r1, #3
    // mov r2, #1
    // lsl r5, r3, #1
    // ldr r3, _0221C7F0 ; =ov05_0221EA6C
    // ldrb r3, [r3, r5]
    // bl ScheduleSetBgPosText
    // ldr r2, _0221C7EC ; =0x00000B82
    // mov r1, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // lsl r3, r2, #1
    // ldr r2, _0221C7F4 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // add r3, r1, #0
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C7EC ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #1
    // lsl r3, r2, #1
    // ldr r2, _0221C7F4 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C7EC ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #2
    // lsl r3, r2, #1
    // ldr r2, _0221C7F4 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C7EC ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #3
    // lsl r3, r2, #1
    // ldr r2, _0221C7F4 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D3AC
    // ldr r2, _0221C7EC ; =0x00000B82
    // mov r1, #0
    // ldrb r2, [r4, r2]
    // add r0, r4, #0
    // lsl r3, r2, #1
    // ldr r2, _0221C7F4 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // add r3, r1, #0
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r2, _0221C7EC ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #1
    // lsl r3, r2, #1
    // ldr r2, _0221C7F4 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r2, _0221C7EC ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #2
    // lsl r3, r2, #1
    // ldr r2, _0221C7F4 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r2, _0221C7EC ; =0x00000B82
    // add r0, r4, #0
    // ldrb r2, [r4, r2]
    // mov r1, #3
    // lsl r3, r2, #1
    // ldr r2, _0221C7F4 ; =ov05_0221EA6D
    // ldrb r2, [r2, r3]
    // mov r3, #0
    // neg r2, r2
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ov05_0221D664
    // ldr r0, _0221C7EC ; =0x00000B82
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bne _0221C7D2
    // ldr r0, _0221C7F8 ; =0x00000853
    // bl PlaySE
    // ldr r0, _0221C7EC ; =0x00000B82
    // ldrb r1, [r4, r0]
    // cmp r1, #5
    // bne _0221C7E2
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _0221C7EC: .word 0x00000B82
    // _0221C7F0: .word ov05_0221EA6C
    // _0221C7F4: .word ov05_0221EA6D
    // _0221C7F8: .word 0x00000853
    // TODO: decompile
}



void ov05_0221C7FC(void) {
    // ldr r1, _0221C808 ; =0x00000B81
    // mov r2, #0x10
    // strb r2, [r0, r1]
    // mov r0, #2
    // bx lr
    // nop
    // _0221C808: .word 0x00000B81
    // TODO: decompile
}



void ov05_0221C80C(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // ldr r0, _0221C894 ; =0x00000B82
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bne _0221C850
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // add r3, r0, #0
    // ldr r2, [r0]
    // ldr r1, _0221C898 ; =0xFFFF1FFF
    // add r3, #0x48
    // and r2, r1
    // lsr r1, r0, #0xd
    // orr r1, r2
    // str r1, [r0]
    // ldrh r5, [r3]
    // mov r2, #0x3f
    // mov r1, #0x1f
    // bic r5, r2
    // orr r5, r1
    // mov r1, #0x20
    // orr r1, r5
    // strh r1, [r3]
    // add r0, #0x4a
    // ldrh r3, [r0]
    // mov r1, #0x1d
    // bic r3, r2
    // orr r1, r3
    // strh r1, [r0]
    // ldr r3, _0221C894 ; =0x00000B82
    // ldrb r1, [r4, r3]
    // cmp r1, #0x10
    // bne _0221C870
    // mov r0, #0
    // mov r1, #0x20
    // strb r0, [r4, r3]
    // sub r0, r3, #1
    // strb r1, [r4, r0]
    // lsl r2, r1, #0x15
    // ldr r1, [r2]
    // ldr r0, _0221C898 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r2, #0x47
    // sub r2, r2, r1
    // add r1, #0x48
    // lsl r1, r1, #0x18
    // mov r6, #0xff
    // ldr r0, _0221C89C ; =0x04000040
    // lsl r5, r2, #8
    // lsl r2, r6, #8
    // and r2, r5
    // lsr r1, r1, #0x18
    // strh r6, [r0]
    // orr r1, r2
    // strh r1, [r0, #4]
    // ldrb r0, [r4, r3]
    // add r0, r0, #1
    // strb r0, [r4, r3]
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _0221C894: .word 0x00000B82
    // _0221C898: .word 0xFFFF1FFF
    // _0221C89C: .word 0x04000040
    // TODO: decompile
}



void ov05_0221C8A0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0221C8D8 ; =0x0000071A
    // bl PlaySE
    // mov r0, #0x72
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0x73
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // mov r0, #0x72
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // ldr r0, _0221C8DC ; =0x00000B81
    // mov r1, #0x20
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // _0221C8D8: .word 0x0000071A
    // _0221C8DC: .word 0x00000B81
    // TODO: decompile
}



void ov05_0221C8E0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0221C900 ; =0x0000071A
    // bl PlaySE
    // mov r0, #0x72
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _0221C904 ; =0x00000B81
    // mov r1, #0x40
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // _0221C900: .word 0x0000071A
    // _0221C904: .word 0x00000B81
    // TODO: decompile
}



void ov05_0221C908(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov05_0221E9F8
    // cmp r0, #0
    // bne _0221C920
    // ldr r1, _0221CA9C ; =0x00000B81
    // mov r0, #1
    // add sp, #0xc
    // strb r0, [r4, r1]
    // pop {r3, r4, pc}
    // mov r0, #0xbd
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // bne _0221C938
    // sub r0, #0x10
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0221C938
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, pc}
    // ldr r0, _0221CAA0 ; =0x00000BBC
    // ldr r1, [r4, r0]
    // cmp r1, #5
    // bne _0221C946
    // add sp, #0xc
    // mov r0, #0
    // pop {r3, r4, pc}
    // cmp r1, #6
    // beq _0221C960
    // cmp r1, #5
    // beq _0221C960
    // cmp r1, #7
    // beq _0221C960
    // cmp r1, #8
    // beq _0221C960
    // mov r1, #7
    // str r1, [r4, r0]
    // mov r1, #0xff
    // sub r0, #0x3a
    // strb r1, [r4, r0]
    // ldr r0, _0221CAA4 ; =0x00000B82
    // ldrb r1, [r4, r0]
    // cmp r1, #0
    // beq _0221C972
    // cmp r1, #1
    // beq _0221C9B0
    // cmp r1, #2
    // beq _0221CA4A
    // b _0221CA68
    // add r0, r4, #0
    // bl ov05_0221E9C4
    // ldr r2, _0221CAA8 ; =0x00000BAC
    // mov r1, #8
    // ldr r0, [r4, r2]
    // add r2, #8
    // ldr r2, [r4, r2]
    // bl ReadMsgDataIntoString
    // mov r3, #0
    // str r3, [sp]
    // ldr r2, _0221CAAC ; =0x00000B88
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    // ldr r2, [r4, r2]
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _0221CAB0 ; =0x00000BB8
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov05_0221EA18
    // ldr r0, _0221CAA4 ; =0x00000B82
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0221CA8C
    // add r2, r0, #2
    // add r0, r0, #4
    // ldr r1, [r4]
    // add r2, r4, r2
    // str r2, [sp]
    // add r0, r4, r0
    // str r0, [sp, #4]
    // ldr r2, [r1]
    // mov r0, #7
    // add r1, #0x2c
    // lsl r0, r0, #6
    // ldr r0, [r2, r0]
    // mov r2, #0
    // ldrb r1, [r1]
    // add r3, r2, #0
    // bl sub_0202FE14
    // cmp r0, #2
    // bne _0221C9EC
    // ldr r2, _0221CAA8 ; =0x00000BAC
    // mov r1, #6
    // ldr r0, [r4, r2]
    // add r2, #8
    // ldr r2, [r4, r2]
    // bl ReadMsgDataIntoString
    // ldr r0, _0221CAB4 ; =0x0000061A
    // bl PlaySE
    // b _0221C9FE
    // cmp r0, #3
    // bne _0221CA8C
    // ldr r2, _0221CAA8 ; =0x00000BAC
    // mov r1, #7
    // ldr r0, [r4, r2]
    // add r2, #8
    // ldr r2, [r4, r2]
    // bl ReadMsgDataIntoString
    // add r0, r4, #0
    // bl ov05_0221EA38
    // mov r0, #0xd8
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // ldr r0, _0221CAAC ; =0x00000B88
    // mov r2, #0
    // add r0, r4, r0
    // mov r1, #0xf
    // add r3, r2, #0
    // bl FillWindowPixelRect
    // mov r3, #0
    // str r3, [sp]
    // ldr r2, _0221CAAC ; =0x00000B88
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    // ldr r2, [r4, r2]
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _0221CAB0 ; =0x00000BB8
    // mov r2, #0
    // str r0, [r4, r1]
    // add r0, r1, #0
    // sub r0, #0x37
    // strb r2, [r4, r0]
    // add r0, r1, #0
    // sub r0, #0x36
    // ldrb r0, [r4, r0]
    // sub r1, #0x36
    // add r0, r0, #1
    // strb r0, [r4, r1]
    // b _0221CA8C
    // sub r1, r0, #1
    // ldrb r1, [r4, r1]
    // add r2, r1, #1
    // sub r1, r0, #1
    // strb r2, [r4, r1]
    // ldrb r1, [r4, r1]
    // cmp r1, #0x1e
    // bls _0221CA8C
    // mov r2, #0
    // sub r1, r0, #1
    // strb r2, [r4, r1]
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0221CA8C
    // add r0, r0, #6
    // add r0, r4, r0
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, _0221CAA4 ; =0x00000B82
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r1, #0x15
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, pc}
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0221CA9C: .word 0x00000B81
    // _0221CAA0: .word 0x00000BBC
    // _0221CAA4: .word 0x00000B82
    // _0221CAA8: .word 0x00000BAC
    // _0221CAAC: .word 0x00000B88
    // _0221CAB0: .word 0x00000BB8
    // _0221CAB4: .word 0x0000061A
    // TODO: decompile
}



void ov05_0221CAB8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // ldr r1, _0221CB5C ; =0x00000B82
    // add r4, r0, #0
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // beq _0221CACC
    // cmp r1, #1
    // beq _0221CB34
    // b _0221CB4A
    // bl ov05_0221E9F8
    // cmp r0, #0
    // bne _0221CADC
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // bl ov05_0221E9C4
    // ldr r2, _0221CB60 ; =0x00000BAC
    // mov r1, #9
    // ldr r0, [r4, r2]
    // add r2, #8
    // ldr r2, [r4, r2]
    // bl ReadMsgDataIntoString
    // mov r3, #0
    // str r3, [sp]
    // ldr r2, _0221CB64 ; =0x00000B88
    // str r3, [sp, #4]
    // add r0, r4, r2
    // str r3, [sp, #8]
    // add r2, #0x2c
    // ldr r2, [r4, r2]
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // ldr r1, _0221CB68 ; =0x00000BB8
    // str r0, [r4, r1]
    // mov r0, #0x3e
    // bl sub_02037AC0
    // ldr r0, _0221CB6C ; =0x00000BC8
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0221CB2A
    // add r0, r4, #0
    // bl ov05_0221E9F8
    // cmp r0, #1
    // bne _0221CB2A
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _0221CB5C ; =0x00000B82
    // ldrb r1, [r4, r0]
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // b _0221CB4E
    // mov r0, #0x3e
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0221CB4E
    // ldr r0, _0221CB5C ; =0x00000B82
    // mov r1, #0
    // strb r1, [r4, r0]
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, pc}
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0221CB5C: .word 0x00000B82
    // _0221CB60: .word 0x00000BAC
    // _0221CB64: .word 0x00000B88
    // _0221CB68: .word 0x00000BB8
    // _0221CB6C: .word 0x00000BC8
    // TODO: decompile
}



void ov05_0221CB70(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl ov05_0221CCF4
    // cmp r0, #1
    // ldr r0, [r4]
    // bne _0221CBB2
    // add r0, #0x2a
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0221CB9E
    // mov r0, #0x30
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r1, #0
    // ldr r0, [r4, #8]
    // mov r2, #0x40
    // add r3, r1, #0
    // bl PaletteData_CopyPalette
    // b _0221CBE2
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // ldr r0, [r4, #8]
    // mov r2, #0x40
    // add r3, r1, #0
    // bl PaletteData_CopyPalette
    // b _0221CBE2
    // add r0, #0x2a
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0221CBCE
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // ldr r0, [r4, #8]
    // mov r2, #0x40
    // add r3, r1, #0
    // bl PaletteData_CopyPalette
    // b _0221CBE2
    // mov r0, #0x30
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r1, #0
    // ldr r0, [r4, #8]
    // mov r2, #0x40
    // add r3, r1, #0
    // bl PaletteData_CopyPalette
    // ldr r0, [r4, #8]
    // mov r1, #1
    // bl PaletteData_SetSelectedBufferAll
    // ldr r0, _0221CBFC ; =0x0000071B
    // bl PlaySE
    // ldr r0, _0221CC00 ; =0x00000B81
    // mov r1, #0x40
    // strb r1, [r4, r0]
    // mov r0, #1
    // add sp, #8
    // pop {r4, pc}
    // _0221CBFC: .word 0x0000071B
    // _0221CC00: .word 0x00000B81
    // TODO: decompile
}



void ov05_0221CC04(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0221CC50 ; =0x00000B82
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bne _0221CC16
    // ldr r0, _0221CC54 ; =0x00000719
    // bl PlaySE
    // ldr r1, _0221CC50 ; =0x00000B82
    // ldrb r0, [r4, r1]
    // cmp r0, #0x10
    // bne _0221CC2C
    // mov r0, #0
    // strb r0, [r4, r1]
    // mov r2, #0x40
    // sub r0, r1, #1
    // strb r2, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r0, #1
    // strb r0, [r4, r1]
    // ldrb r2, [r4, r1]
    // mov r1, #0x10
    // add r0, r4, #0
    // sub r1, r1, r2
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // bl ov05_0221E564
    // ldr r1, _0221CC50 ; =0x00000B82
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // bl ov05_0221DE6C
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0221CC50: .word 0x00000B82
    // _0221CC54: .word 0x00000719
    // TODO: decompile
}



void ov05_0221CC58(void) {
}



void ov05_0221CC74(void) {
    IsPaletteFadeFinished();
    Main_SetVBlankIntrCB(0, 0);
    ov05_0221EA38(r4);
    // add r0, #0x28
    // ldrb r0, [r0]
    ov05_0221CFF0(r4);
    ov05_0221D020(r4);
    ov05_0221D054(r4);
    ov05_0221DB18(r4);
    ov05_0221D690(r4);
    ov05_0221DC34(r4);
    ov05_0221E60C(r4);
    ov05_0221CE0C(r4);
    GF_DestroyVramTransferManager();
    PaletteData_FreeBuffers(*((u32*)(r4 + 8)), 0);
    PaletteData_Free(*((u32*)(r4 + 8)));
    // add r0, #0x2b
    // strb r1, [r0]
    DestroySysTaskAndEnvironment(r5, 1);
}



void ov05_0221CCF4(void) {
    sub_0203769C();
    sub_020378AC();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221CD0E: ; jump table
}



void ov05_0221CD24(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r0, #0
    // str r1, [sp]
    // ldr r1, [r5]
    // mov r0, #0x40
    // ldr r1, [r1, #0x24]
    // add r4, r2, #0
    // bl GF_CreateVramTransferManager
    // ldr r0, [r5]
    // ldr r0, [r0, #0x24]
    // bl SpriteSystem_Alloc
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // bl SpriteManager_New
    // mov r1, #0x65
    // lsl r1, r1, #2
    // add r2, sp, #0x18
    // ldr r3, _0221CDBC ; =ov05_0221EBE0
    // str r0, [r5, r1]
    // ldmia r3!, {r0, r1}
    // add r6, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r3, _0221CDC0 ; =ov05_0221EAAC
    // add r2, sp, #4
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, r6, #0
    // str r0, [r2]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // str r4, [sp, #4]
    // sub r0, r0, #4
    // ldr r0, [r5, r0]
    // add r2, r7, #0
    // mov r3, #0x10
    // bl SpriteSystem_Init
    // mov r1, #0x19
    // lsl r1, r1, #4
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl SpriteSystem_InitSprites
    // mov r1, #0x19
    // lsl r1, r1, #4
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, [sp]
    // bl SpriteSystem_InitManagerWithCapacities
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221CDBC: .word ov05_0221EBE0
    // _0221CDC0: .word ov05_0221EAAC
    // TODO: decompile
}



void ov05_0221CDC4(void) {
    // add r3, sp, #0
    // strh r0, [r3]
    *((u16*)(r3 + 2)) = 0;
    *((u16*)(r3 + 4)) = 0;
    *((u16*)(r3 + 6)) = 0;
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r3, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // str r3, [sp, #0x20]
    // str r1, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // ldr r0, [r2, r1]
    // ldr r1, [r2, r1]
    // add r2, sp, #0
    SpriteSystem_NewSprite(0, ((0x19 << 4) + 4), r0, *((u32*)(r1 + 0xc)));
}



void ov05_0221CE0C(void) {
    // ldr r0, [r6, r0]
    // ldr r0, [r5, r0]
    Sprite_DeleteAndFreeResources((0x66 << 2));
    // ldr r0, [r6, r7]
    // ldr r0, [r6, r1]
    // ldr r1, [r6, r1]
    SpriteSystem_FreeResourcesAndManager(((0x19 << 4) + 4));
    // ldr r0, [r6, r0]
    SpriteSystem_Free((0x19 << 4));
}



void ov05_0221CE50(void) {
    // ldr r0, [r5, r0]
    // add r6, #0x78
    // add r0, r5, r0
    // ldr r0, [r0, r7]
    Sprite_UpdateAnim(*((u32*)(0 << 2)), (1 << 0xc));
    // ldr r0, [r5, r6]
}



void ov05_0221CE88(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0xc]
    // bl DoScheduledBgGpuUpdates
    // ldr r0, [r4, #8]
    // bl PaletteData_PushTransparentBuffers
    // bl GF_RunVramTransferTasks
    // bl SpriteSystem_TransferOam
    // ldr r3, _0221CEB0 ; =0x027E0000
    // ldr r1, _0221CEB4 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _0221CEB0: .word 0x027E0000
    // _0221CEB4: .word 0x00003FF8
    // TODO: decompile
}



void ov05_0221CEB8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x80
    // add r5, r0, #0
    // ldr r0, _0221CFD4 ; =0x00000BA8
    // add r4, r1, #0
    // ldr r6, _0221CFD8 ; =ov05_0221EA78
    // str r4, [r5, r0]
    // add r3, sp, #0x70
    // add r7, r2, #0
    // add r2, r3, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // str r4, [sp, #0x7c]
    // bl SetBothScreensModesAndDisable
    // ldr r6, _0221CFDC ; =ov05_0221EB1C
    // add r3, sp, #0x54
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #3
    // str r0, [r3]
    // ldr r0, [r5, #0xc]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #0xc]
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r1, #3
    // add r3, r1, #0
    // ldr r0, [r5, #0xc]
    // mov r2, #0
    // add r3, #0xfd
    // bl ScheduleSetBgPosText
    // ldr r6, _0221CFE0 ; =ov05_0221EB54
    // add r3, sp, #0x38
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #2
    // str r0, [r3]
    // ldr r0, [r5, #0xc]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // mov r3, #0xff
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // mov r2, #0
    // mvn r3, r3
    // bl ScheduleSetBgPosText
    // ldr r6, _0221CFE4 ; =ov05_0221EB70
    // add r3, sp, #0x1c
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #1
    // str r0, [r3]
    // ldr r0, [r5, #0xc]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // cmp r7, #1
    // bne _0221CF88
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // mov r2, #3
    // mov r3, #0x18
    // bl BgSetPosTextAndCommit
    // cmp r4, #0
    // bne _0221CFD0
    // ldr r4, _0221CFE8 ; =ov05_0221EBA8
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // mov r1, #0
    // str r0, [r3]
    // ldr r0, [r5, #0xc]
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // ldr r0, [r5, #0xc]
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r0, _0221CFEC ; =0x00000BC8
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _0221CFC8
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x80
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x80
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221CFD4: .word 0x00000BA8
    // _0221CFD8: .word ov05_0221EA78
    // _0221CFDC: .word ov05_0221EB1C
    // _0221CFE0: .word ov05_0221EB54
    // _0221CFE4: .word ov05_0221EB70
    // _0221CFE8: .word ov05_0221EBA8
    // _0221CFEC: .word 0x00000BC8
    // TODO: decompile
}



void ov05_0221CFF0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0221D018 ; =0x00000B94
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0221D004
    // sub r0, #0xc
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _0221D01C ; =0x00000BA4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0221D014
    // sub r0, #0xc
    // add r0, r4, r0
    // bl RemoveWindow
    // pop {r4, pc}
    // nop
    // _0221D018: .word 0x00000B94
    // _0221D01C: .word 0x00000BA4
    // TODO: decompile
}



void ov05_0221D020(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0221D04C ; =0x00000BB4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0221D030
    // bl String_Delete
    // mov r0, #0xbb
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0221D03E
    // bl MessageFormat_Delete
    // ldr r0, _0221D050 ; =0x00000BAC
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0221D04A
    // bl DestroyMsgData
    // pop {r4, pc}
    // _0221D04C: .word 0x00000BB4
    // _0221D050: .word 0x00000BAC
    // TODO: decompile
}



void ov05_0221D054(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x1f
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [r4, #0xc]
    // mov r1, #3
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // ldr r0, _0221D090 ; =0x00000BA8
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0221D088
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl FreeBgTilemapBuffer
    // ldr r0, [r4, #0xc]
    // bl Heap_Free
    // pop {r4, pc}
    // _0221D090: .word 0x00000BA8
    // TODO: decompile
}



void ov05_0221D094(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x68
    // ldr r1, [r1, #0x24]
    // bl NARC_New
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldr r2, [r5]
    // mov r3, #1
    // ldr r2, [r2, #0x24]
    // add r4, r0, #0
    // str r2, [sp, #0xc]
    // ldr r2, [r5, #0xc]
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #4
    // ldr r0, [r0, #0x24]
    // mov r3, #1
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0xc]
    // add r0, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #2
    // ldr r0, [r0, #0x24]
    // add r3, r1, #0
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0xc]
    // add r0, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #3
    // ldr r0, [r0, #0x24]
    // add r3, r1, #0
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0xc]
    // add r0, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0, #0x24]
    // add r3, r2, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r1, #0
    // ldr r0, [r5, #8]
    // add r2, r1, #0
    // mov r3, #0xa0
    // bl PaletteData_LoadPaletteSlotFromHardware
    // ldr r1, _0221D13C ; =0x000018C6
    // mov r0, #1
    // bl BG_SetMaskColor
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0221D13C: .word 0x000018C6
    // TODO: decompile
}



void ov05_0221D140(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, _0221D21C ; =0x00000BA8
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0221D164
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _0221D164
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _0221D164
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // bne _0221D168
    // bl GF_AssertFail
    // ldr r0, [r4]
    // ldr r1, [r0]
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0, #0x24]
    // mov r2, #1
    // str r0, [sp, #4]
    // ldr r0, [r4, #0xc]
    // mov r3, #0xf
    // bl LoadUserFrameGfx2
    // ldr r0, [r4, #8]
    // mov r1, #0
    // mov r2, #0xf0
    // mov r3, #0x20
    // bl PaletteData_LoadPaletteSlotFromHardware
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [r4]
    // mov r2, #0x1f
    // ldr r0, [r0, #0x24]
    // mov r3, #0xe
    // str r0, [sp, #4]
    // ldr r0, [r4, #0xc]
    // bl LoadUserFrameGfx1
    // ldr r0, [r4, #8]
    // mov r1, #0
    // mov r2, #0xe0
    // mov r3, #0x20
    // bl PaletteData_LoadPaletteSlotFromHardware
    // ldr r2, [r4]
    // mov r1, #0x1a
    // ldr r2, [r2, #0x24]
    // mov r0, #0
    // lsl r1, r1, #4
    // bl LoadFontPal0
    // ldr r0, [r4, #8]
    // mov r1, #0
    // mov r2, #0xd0
    // mov r3, #0x20
    // bl PaletteData_LoadPaletteSlotFromHardware
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // ldr r1, _0221D220 ; =0x00000B88
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0xc]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl AddWindowParameterized
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // ldr r1, _0221D224 ; =0x00000B98
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #0xc]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl AddWindowParameterized
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _0221D21C: .word 0x00000BA8
    // _0221D220: .word 0x00000B88
    // _0221D224: .word 0x00000B98
    // TODO: decompile
}



void ov05_0221D228(void) {
}



void ov05_0221D240(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r4, _0221D310 ; =ov05_0221EB04
    // add r3, sp, #0
    // add r6, r0, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, r2, #0
    // add r0, r6, #0
    // mov r2, #0x15
    // bl ov05_0221CD24
    // add r0, r6, #0
    // bl ov05_0221D318
    // ldr r4, _0221D314 ; =ov05_0221EDA4
    // mov r7, #0
    // add r5, r6, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov05_0221CDC4
    // mov r1, #0x66
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r7, r7, #1
    // add r4, #0x1c
    // add r5, r5, #4
    // cmp r7, #0xc
    // blo _0221D26E
    // mov r1, #0
    // mov r2, #0xff
    // add r0, r6, #0
    // mvn r2, r2
    // add r3, r1, #0
    // bl ov05_0221D3AC
    // mov r2, #0xff
    // add r0, r6, #0
    // mov r1, #1
    // mvn r2, r2
    // mov r3, #0
    // bl ov05_0221D3AC
    // mov r1, #2
    // add r2, r1, #0
    // add r0, r6, #0
    // add r2, #0xfe
    // mov r3, #0
    // bl ov05_0221D3AC
    // mov r1, #3
    // add r2, r1, #0
    // add r0, r6, #0
    // add r2, #0xfd
    // mov r3, #0
    // bl ov05_0221D3AC
    // add r0, r6, #0
    // bl ov05_0221D4D0
    // mov r0, #0x21
    // mov r1, #0xc
    // lsl r0, r0, #4
    // str r1, [r6, r0]
    // add r0, r6, #0
    // bl ov05_0221D5DC
    // mov r1, #0
    // mov r2, #0xff
    // add r0, r6, #0
    // mvn r2, r2
    // add r3, r1, #0
    // bl ov05_0221D664
    // mov r2, #0xff
    // add r0, r6, #0
    // mov r1, #1
    // mvn r2, r2
    // mov r3, #0
    // bl ov05_0221D664
    // mov r1, #2
    // add r2, r1, #0
    // add r0, r6, #0
    // add r2, #0xfe
    // mov r3, #0
    // bl ov05_0221D664
    // mov r1, #3
    // add r2, r1, #0
    // add r0, r6, #0
    // add r2, #0xfd
    // mov r3, #0
    // bl ov05_0221D664
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221D310: .word ov05_0221EB04
    // _0221D314: .word ov05_0221EDA4
    // TODO: decompile
}



void ov05_0221D318(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #8
    // ldr r1, [r1, #0x24]
    // bl NARC_New
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0221D3A8 ; =0x0000B807
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0xd0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _0221D3A8 ; =0x0000B807
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r2, #0x68
    // mov r3, #8
    // bl SpriteSystem_LoadPlttResObj
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _0221D3A8 ; =0x0000B807
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0xcf
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _0221D3A8 ; =0x0000B807
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0xd1
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0221D3A8: .word 0x0000B807
    // TODO: decompile
}



void ov05_0221D3AC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldr r4, _0221D408 ; =_0221EA54
    // str r2, [sp]
    // ldrb r5, [r4]
    // str r3, [sp, #4]
    // add r3, sp, #8
    // strb r5, [r3]
    // ldrb r5, [r4, #1]
    // add r2, sp, #8
    // mov r7, #0
    // strb r5, [r3, #1]
    // ldrb r5, [r4, #2]
    // ldrb r4, [r4, #3]
    // add r6, r0, r1
    // strb r5, [r3, #2]
    // strb r4, [r3, #3]
    // ldrb r2, [r2, r1]
    // add r4, r7, #0
    // lsl r2, r2, #2
    // add r5, r0, r2
    // ldr r1, _0221D40C ; =0x00000B64
    // mov r0, #0x66
    // ldrb r1, [r6, r1]
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r2, r1, r4
    // ldr r1, [sp]
    // add r1, r1, r2
    // ldr r2, _0221D410 ; =0x00000B68
    // lsl r1, r1, #0x10
    // ldrb r3, [r6, r2]
    // ldr r2, [sp, #4]
    // asr r1, r1, #0x10
    // add r2, r2, r3
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r7, r7, #1
    // add r4, #0x13
    // add r5, r5, #4
    // cmp r7, #3
    // blo _0221D3D6
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0221D408: .word _0221EA54
    // _0221D40C: .word 0x00000B64
    // _0221D410: .word 0x00000B68
    // TODO: decompile
}



void ov05_0221D414(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    Party_GetCount(r1);
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r6, r6, r0
    // add r1, r6, r0
    // ldr r0, [r1, r0]
    ManagedSprite_SetAnim((0x66 << 2), 0);
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    Party_GetMonByIndex(r4);
    GetMonData(5, 0);
    GetMonData(r7, 0x4c, 0);
    Pokemon_GetStatusIconId(r7);
    // add r1, r6, r0
    // ldr r0, [r1, r0]
    ManagedSprite_SetAnim((0x66 << 2), 3);
    // add r1, r6, r0
    // ldr r0, [r1, r0]
    ManagedSprite_SetAnim((0x66 << 2), 2);
    // add r1, r6, r0
    // ldr r0, [r1, r0]
    ManagedSprite_SetAnim((0x66 << 2), 1);
    // ldr r0, [sp, #4]
}



void ov05_0221D4D0(void) {
    // add r1, #0x29
    // ldrb r1, [r1]
    ov05_0221D414(*((u32*)(*((u32*)r0) + 4)), 6, 0);
    ov05_0221D414(r4, *((u32*)(*((u32*)r4) + 8)), 6, 6);
    ov05_0221D414(3, 0);
    ov05_0221D414(r4, *((u32*)(*((u32*)r4) + 0xc)), 3, 3);
    ov05_0221D414(r4, *((u32*)(*((u32*)r4) + 8)), 3, 6);
    ov05_0221D414(r4, *((u32*)(*((u32*)r4) + 0x10)), 3, 9);
}



void ov05_0221D530(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // add r4, r0, #0
    // mov r0, #0
    // add r5, r4, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r7, r2, #0
    // add r5, #0x10
    // add r6, r1, #0
    // ldr r0, [r4, #0xc]
    // add r1, r5, #0
    // mov r2, #8
    // mov r3, #2
    // bl AddTextWindowTopLeftCorner
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0xc1
    // lsl r0, r0, #0xa
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r2, r7, #0
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, _0221D5D0 ; =0x00000B44
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x10]
    // mov r0, #0x65
    // str r5, [sp, #0x14]
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl SpriteManager_GetSpriteList
    // str r0, [sp, #0x18]
    // mov r0, #0x65
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, _0221D5D4 ; =0x0000B807
    // bl SpriteManager_FindPlttResourceProxy
    // mov r1, #0x3e
    // lsl r2, r6, #4
    // lsl r1, r1, #4
    // sub r1, r1, r2
    // lsl r1, r1, #5
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r1, [sp, #0x24]
    // mov r1, #2
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x34]
    // mov r0, #1
    // str r1, [sp, #0x30]
    // str r0, [sp, #0x38]
    // ldr r0, [r4]
    // lsl r6, r6, #2
    // ldr r0, [r0, #0x24]
    // str r0, [sp, #0x3c]
    // ldr r0, _0221D5D8 ; =0x00000B48
    // add r4, r4, r0
    // add r0, sp, #0x10
    // bl sub_020135D8
    // str r0, [r4, r6]
    // ldr r0, [r4, r6]
    // mov r1, #0
    // bl TextOBJ_SetPaletteNum
    // add r0, r5, #0
    // bl RemoveWindow
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D5D0: .word 0x00000B44
    // _0221D5D4: .word 0x0000B807
    // _0221D5D8: .word 0x00000B48
    // TODO: decompile
}



void ov05_0221D5DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4]
    // mov r0, #8
    // ldr r1, [r1, #0x24]
    // bl FontSystem_NewInit
    // ldr r1, _0221D658 ; =0x00000B44
    // str r0, [r4, r1]
    // ldr r2, [r4]
    // add r0, r4, #0
    // ldr r2, [r2, #0x14]
    // mov r1, #0
    // bl ov05_0221D530
    // ldr r2, [r4]
    // add r0, r4, #0
    // ldr r2, [r2, #0x18]
    // mov r1, #2
    // bl ov05_0221D530
    // ldr r2, [r4]
    // add r0, r2, #0
    // add r0, #0x29
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0221D62A
    // ldr r2, [r2, #0x1c]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov05_0221D530
    // ldr r2, [r4]
    // add r0, r4, #0
    // ldr r2, [r2, #0x20]
    // mov r1, #3
    // bl ov05_0221D530
    // pop {r4, pc}
    // ldr r2, [r2, #0x14]
    // add r0, r4, #0
    // mov r1, #1
    // bl ov05_0221D530
    // ldr r2, [r4]
    // add r0, r4, #0
    // ldr r2, [r2, #0x18]
    // mov r1, #3
    // bl ov05_0221D530
    // ldr r0, _0221D65C ; =0x00000B4C
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl TextOBJ_SetSpritesDrawFlag
    // ldr r0, _0221D660 ; =0x00000B54
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl TextOBJ_SetSpritesDrawFlag
    // pop {r4, pc}
    // nop
    // _0221D658: .word 0x00000B44
    // _0221D65C: .word 0x00000B4C
    // _0221D660: .word 0x00000B54
    // TODO: decompile
}



void ov05_0221D664(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r1, r2, #0
    // add r2, r3, #0
    // add r4, r0, #0
    // lsl r0, r5, #2
    // add r0, r4, r0
    // ldr r3, _0221D68C ; =0x00000B48
    // add r4, r4, r5
    // add r5, r3, #0
    // ldr r0, [r0, r3]
    // add r5, #0x24
    // add r3, #0x28
    // ldrb r5, [r4, r5]
    // ldrb r3, [r4, r3]
    // add r1, r1, r5
    // add r2, r2, r3
    // bl sub_020136B4
    // pop {r3, r4, r5, pc}
    // _0221D68C: .word 0x00000B48
    // TODO: decompile
}



void ov05_0221D690(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, [r7]
    // add r0, #0x28
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0221D6BA
    // ldr r6, _0221D6BC ; =0x00000B48
    // mov r4, #0
    // add r5, r7, #0
    // ldr r0, [r5, r6]
    // bl FontOAM_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blo _0221D6A4
    // ldr r0, _0221D6C0 ; =0x00000B44
    // ldr r0, [r7, r0]
    // bl sub_020135AC
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221D6BC: .word 0x00000B48
    // _0221D6C0: .word 0x00000B44
    // TODO: decompile
}



void ov05_0221D6C4(void) {
    // push {r3, r4, r5, r6}
    // ldr r3, [r0]
    // add r3, #0x29
    // ldrb r3, [r3]
    // cmp r3, #1
    // ldr r3, _0221D7A8 ; =0x00000B64
    // bne _0221D74E
    // mov r4, #0x14
    // add r5, r1, #0
    // strb r4, [r0, r3]
    // add r5, #0x92
    // add r4, r3, #4
    // strb r5, [r0, r4]
    // mov r5, #0x51
    // add r4, r3, #1
    // strb r5, [r0, r4]
    // add r5, r1, #0
    // add r5, #0xa2
    // add r4, r3, #5
    // strb r5, [r0, r4]
    // mov r5, #0x80
    // add r4, r3, #2
    // strb r5, [r0, r4]
    // add r5, r2, #0
    // add r5, #0x2c
    // add r4, r3, #6
    // strb r5, [r0, r4]
    // mov r5, #0xbd
    // add r4, r3, #3
    // strb r5, [r0, r4]
    // add r5, r2, #0
    // add r5, #0x3c
    // add r4, r3, #7
    // strb r5, [r0, r4]
    // add r4, r3, #0
    // mov r5, #0xb
    // add r4, #8
    // strb r5, [r0, r4]
    // add r5, r1, #0
    // add r4, r3, #0
    // add r5, #0x78
    // add r4, #0xc
    // strb r5, [r0, r4]
    // add r4, r3, #0
    // mov r5, #0x4c
    // add r4, #9
    // strb r5, [r0, r4]
    // add r4, r3, #0
    // add r1, #0x88
    // add r4, #0xd
    // strb r1, [r0, r4]
    // add r1, r3, #0
    // mov r4, #0x77
    // add r1, #0xa
    // strb r4, [r0, r1]
    // add r4, r2, #0
    // add r1, r3, #0
    // add r4, #0x12
    // add r1, #0xe
    // strb r4, [r0, r1]
    // add r1, r3, #0
    // mov r4, #0xb8
    // add r1, #0xb
    // strb r4, [r0, r1]
    // add r2, #0x22
    // add r3, #0xf
    // strb r2, [r0, r3]
    // pop {r3, r4, r5, r6}
    // bx lr
    // mov r4, #0x18
    // strb r4, [r0, r3]
    // add r4, r1, #0
    // add r4, #0xa0
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x18
    // add r5, r3, #4
    // strb r4, [r0, r5]
    // mov r6, #0x51
    // add r5, r3, #1
    // strb r6, [r0, r5]
    // add r5, r3, #5
    // strb r4, [r0, r5]
    // mov r5, #0x88
    // add r4, r3, #2
    // strb r5, [r0, r4]
    // add r4, r2, #0
    // add r4, #0x30
    // lsl r4, r4, #0x18
    // lsr r4, r4, #0x18
    // add r5, r3, #6
    // strb r4, [r0, r5]
    // mov r6, #0xc1
    // add r5, r3, #3
    // strb r6, [r0, r5]
    // add r5, r3, #7
    // strb r4, [r0, r5]
    // add r4, r3, #0
    // mov r5, #0xf
    // add r4, #8
    // strb r5, [r0, r4]
    // add r4, r3, #0
    // add r1, #0x86
    // add r4, #0xc
    // strb r1, [r0, r4]
    // add r1, r3, #0
    // mov r4, #0x80
    // add r1, #0xa
    // strb r4, [r0, r1]
    // add r2, #0x16
    // add r3, #0xe
    // strb r2, [r0, r3]
    // pop {r3, r4, r5, r6}
    // bx lr
    // nop
    // _0221D7A8: .word 0x00000B64
    // TODO: decompile
}



void ov05_0221D7AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r4, _0221D888 ; =ov05_0221EAD4
    // add r3, sp, #0
    // add r6, r0, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, r2, #0
    // add r0, r6, #0
    // mov r2, #0x17
    // bl ov05_0221CD24
    // add r0, r6, #0
    // bl ov05_0221D318
    // add r0, r6, #0
    // bl ov05_0221D890
    // ldr r4, _0221D88C ; =ov05_0221EDA4
    // mov r7, #0
    // add r5, r6, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov05_0221CDC4
    // mov r1, #0x66
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r7, r7, #1
    // add r4, #0x1c
    // add r5, r5, #4
    // cmp r7, #0xe
    // blo _0221D7E0
    // mov r1, #0
    // mov r2, #0xff
    // add r0, r6, #0
    // mvn r2, r2
    // add r3, r1, #0
    // bl ov05_0221D3AC
    // mov r2, #0xff
    // add r0, r6, #0
    // mov r1, #1
    // mvn r2, r2
    // mov r3, #0
    // bl ov05_0221D3AC
    // mov r1, #2
    // add r2, r1, #0
    // add r0, r6, #0
    // add r2, #0xfe
    // mov r3, #0
    // bl ov05_0221D3AC
    // mov r1, #3
    // add r2, r1, #0
    // add r0, r6, #0
    // add r2, #0xfd
    // mov r3, #0
    // bl ov05_0221D3AC
    // add r0, r6, #0
    // bl ov05_0221D4D0
    // add r0, r6, #0
    // bl ov05_0221D904
    // add r0, r6, #0
    // bl ov05_0221D5DC
    // mov r1, #0
    // mov r2, #0xff
    // add r0, r6, #0
    // mvn r2, r2
    // add r3, r1, #0
    // bl ov05_0221D664
    // mov r2, #0xff
    // add r0, r6, #0
    // mov r1, #1
    // mvn r2, r2
    // mov r3, #0
    // bl ov05_0221D664
    // mov r1, #2
    // add r2, r1, #0
    // add r0, r6, #0
    // add r2, #0xfe
    // mov r3, #0
    // bl ov05_0221D664
    // mov r1, #3
    // add r2, r1, #0
    // add r0, r6, #0
    // add r2, #0xfd
    // mov r3, #0
    // bl ov05_0221D664
    // mov r0, #0x21
    // mov r1, #0xe
    // lsl r0, r0, #4
    // str r1, [r6, r0]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221D888: .word ov05_0221EAD4
    // _0221D88C: .word ov05_0221EDA4
    // TODO: decompile
}



void ov05_0221D890(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x68
    // ldr r1, [r1, #0x24]
    // bl NARC_New
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221D900 ; =0x0000B808
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #5
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221D900 ; =0x0000B808
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #6
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221D900 ; =0x0000B808
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #7
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0221D900: .word 0x0000B808
    // TODO: decompile
}



void ov05_0221D904(void) {
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0x72 << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetDrawFlag((0x73 << 2), 0);
    // add r0, #0x2a
    // ldrb r0, [r0]
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x72 << 2), 0x80, 0x48);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x72 << 2), 2);
    ov05_0221CCF4();
    // add r0, #0x2a
    // ldrb r0, [r0]
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x72 << 2), 0x30, 0x48);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x73 << 2), 0xd0, 0x48);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x72 << 2), 0xd0, 0x48);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x73 << 2), 0x30, 0x48);
    // add r0, #0x2a
    // ldrb r0, [r0]
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x72 << 2), 0xd0, 0x48);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x73 << 2), 0x30, 0x48);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x72 << 2), 0x30, 0x48);
    // ldr r0, [r4, r0]
    ManagedSprite_SetPositionXY((0x73 << 2), 0xd0, 0x48);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x72 << 2), 0);
    // ldr r0, [r4, r0]
    ManagedSprite_SetAnim((0x73 << 2), 1);
}



void ov05_0221D9F0(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #2
    // mov r1, #0
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldr r0, [r4]
    // mov r2, #4
    // ldr r0, [r0, #0x24]
    // add r3, r1, #0
    // bl GF_3DVramMan_Create
    // ldr r1, _0221DAC8 ; =0x00000B58
    // ldr r2, _0221DACC ; =0x04000060
    // str r0, [r4, r1]
    // ldrh r1, [r2]
    // ldr r0, _0221DAD0 ; =0xFFFFCFFF
    // and r1, r0
    // mov r0, #8
    // orr r0, r1
    // strh r0, [r2]
    // bl sub_02014DA0
    // ldr r0, [r4]
    // mov r1, #0x12
    // ldr r0, [r0, #0x24]
    // lsl r1, r1, #0xa
    // bl Heap_Alloc
    // mov r2, #0xb6
    // lsl r2, r2, #4
    // str r0, [r4, r2]
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4]
    // mov r3, #0x12
    // ldr r0, [r0, #0x24]
    // ldr r1, _0221DAD4 ; =ov05_0221DB70
    // str r0, [sp, #4]
    // ldr r0, _0221DAD8 ; =ov05_0221DB4C
    // ldr r2, [r4, r2]
    // lsl r3, r3, #0xa
    // bl sub_02014DB4
    // ldr r1, _0221DADC ; =0x00000B5C
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // bl sub_02015524
    // add r2, r0, #0
    // mov r0, #1
    // mov r1, #0xe1
    // lsl r0, r0, #0xc
    // lsl r1, r1, #0xe
    // bl Camera_SetPerspectiveClippingPlane
    // ldr r2, [r4]
    // mov r0, #0x3b
    // ldr r2, [r2, #0x24]
    // mov r1, #2
    // bl sub_02015264
    // add r1, r0, #0
    // ldr r0, _0221DADC ; =0x00000B5C
    // mov r2, #0xa
    // ldr r0, [r4, r0]
    // mov r3, #1
    // bl sub_0201526C
    // mov r1, #0
    // ldr r0, _0221DADC ; =0x00000B5C
    // add r2, r1, #0
    // ldr r0, [r4, r0]
    // add r3, r1, #0
    // bl sub_02015494
    // ldr r0, _0221DADC ; =0x00000B5C
    // mov r2, #0
    // ldr r0, [r4, r0]
    // mov r1, #1
    // add r3, r2, #0
    // bl sub_02015494
    // ldr r0, _0221DADC ; =0x00000B5C
    // mov r2, #0
    // ldr r0, [r4, r0]
    // mov r1, #2
    // add r3, r2, #0
    // bl sub_02015494
    // ldr r0, _0221DADC ; =0x00000B5C
    // mov r2, #0
    // ldr r0, [r4, r0]
    // mov r1, #3
    // add r3, r2, #0
    // bl sub_02015494
    // ldr r0, _0221DADC ; =0x00000B5C
    // mov r2, #0
    // ldr r0, [r4, r0]
    // mov r1, #4
    // add r3, r2, #0
    // bl sub_02015494
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0221DAC8: .word 0x00000B58
    // _0221DACC: .word 0x04000060
    // _0221DAD0: .word 0xFFFFCFFF
    // _0221DAD4: .word ov05_0221DB70
    // _0221DAD8: .word ov05_0221DB4C
    // _0221DADC: .word 0x00000B5C
    // TODO: decompile
}



void ov05_0221DAE0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // add r0, #0x28
    // ldrb r0, [r0]
    // cmp r0, #1
    // beq _0221DAF2
    // mov r0, #0
    // pop {r4, pc}
    // bl Thunk_G3X_Reset
    // ldr r0, _0221DB14 ; =0x00000B5C
    // ldr r0, [r4, r0]
    // bl sub_020154B0
    // cmp r0, #0
    // bne _0221DB06
    // mov r0, #0
    // pop {r4, pc}
    // bl sub_0201543C
    // bl sub_02015460
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0221DB14: .word 0x00000B5C
    // TODO: decompile
}



void ov05_0221DB18(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // add r0, #0x28
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0221DB40
    // ldr r0, _0221DB44 ; =0x00000B5C
    // ldr r0, [r4, r0]
    // bl sub_02014EBC
    // mov r0, #0xb6
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // ldr r0, _0221DB48 ; =0x00000B58
    // ldr r0, [r4, r0]
    // bl GF_3DVramMan_Delete
    // pop {r4, pc}
    // nop
    // _0221DB44: .word 0x00000B5C
    // _0221DB48: .word 0x00000B58
    // TODO: decompile
}



void ov05_0221DB4C(void) {
    // push {r4, lr}
    // ldr r3, _0221DB6C ; =NNS_GfdDefaultFuncAllocTexVram
    // mov r2, #0
    // ldr r3, [r3]
    // blx r3
    // add r4, r0, #0
    // bl sub_02015354
    // cmp r4, #0
    // bne _0221DB64
    // bl GF_AssertFail
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0xd
    // pop {r4, pc}
    // nop
    // _0221DB6C: .word NNS_GfdDefaultFuncAllocTexVram
    // TODO: decompile
}



void ov05_0221DB70(void) {
    // push {r4, lr}
    // ldr r3, _0221DB90 ; =NNS_GfdDefaultFuncAllocPlttVram
    // mov r2, #1
    // ldr r3, [r3]
    // blx r3
    // add r4, r0, #0
    // bl sub_02015394
    // cmp r4, #0
    // bne _0221DB88
    // bl GF_AssertFail
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0xd
    // pop {r4, pc}
    // nop
    // _0221DB90: .word NNS_GfdDefaultFuncAllocPlttVram
    // TODO: decompile
}



void ov05_0221DB94(void) {
    // push {r4, r5, lr}
    // sub sp, #0x64
    // ldr r5, _0221DC24 ; =ov05_0221EA88
    // add r3, sp, #0x54
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _0221DC28 ; =ov05_0221EB8C
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // ldr r0, [r4, #0xc]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0221DC2C ; =ov05_0221EB38
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // ldr r0, [r4, #0xc]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0221DC30 ; =ov05_0221EBC4
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // ldr r0, [r4, #0xc]
    // mov r3, #0
    // bl InitBgFromTemplate
    // add sp, #0x64
    // pop {r4, r5, pc}
    // nop
    // _0221DC24: .word ov05_0221EA88
    // _0221DC28: .word ov05_0221EB8C
    // _0221DC2C: .word ov05_0221EB38
    // _0221DC30: .word ov05_0221EBC4
    // TODO: decompile
}



void ov05_0221DC34(void) {
}



void ov05_0221DC60(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x15
    // ldr r1, [r1, #0x24]
    // bl NARC_New
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // ldr r1, [r5]
    // mov r3, #3
    // ldr r1, [r1, #0x24]
    // add r4, r0, #0
    // str r1, [sp, #0xc]
    // ldr r2, [r5, #0xc]
    // mov r1, #0xf
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // mov r1, #0x11
    // ldr r0, [r0, #0x24]
    // mov r3, #3
    // str r0, [sp, #0xc]
    // ldr r2, [r5, #0xc]
    // add r0, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // ldr r2, [r5]
    // add r0, r4, #0
    // ldr r2, [r2, #0x24]
    // mov r1, #0x10
    // bl NARC_AllocAndReadWholeMember
    // add r1, sp, #0x10
    // add r6, r0, #0
    // bl NNS_G2dGetUnpackedPaletteData
    // ldr r2, [sp, #0x10]
    // mov r0, #3
    // ldr r1, [r2, #0xc]
    // ldr r2, [r2, #8]
    // mov r3, #0
    // lsl r2, r2, #0x10
    // lsr r2, r2, #0x10
    // bl BG_LoadPlttData
    // ldr r1, [sp, #0x10]
    // ldr r0, _0221DD00 ; =0x000004E4
    // ldr r1, [r1, #0xc]
    // add r0, r5, r0
    // add r1, #0x60
    // mov r2, #0x60
    // bl memcpy
    // add r0, r6, #0
    // bl Heap_Free
    // ldr r0, [r5]
    // mov r2, #0xa9
    // lsl r2, r2, #2
    // ldr r3, _0221DD04 ; =0x00000424
    // add r1, r5, r2
    // add r2, #0xc0
    // ldr r0, [r0, #0x24]
    // add r2, r5, r2
    // add r3, r5, r3
    // bl sub_0207CAAC
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _0221DD00: .word 0x000004E4
    // _0221DD04: .word 0x00000424
    // TODO: decompile
}



void ov05_0221DD08(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r6, _0221DDDC ; =ov05_0221EA60
    // mov r4, #0
    // add r7, r5, #0
    // cmp r4, #0
    // beq _0221DD1C
    // cmp r4, #3
    // bne _0221DD24
    // mov r0, #0xa9
    // lsl r0, r0, #2
    // add r1, r5, r0
    // b _0221DD3A
    // mov r0, #0x86
    // lsl r0, r0, #2
    // ldrh r0, [r7, r0]
    // cmp r0, #0
    // bne _0221DD34
    // ldr r0, _0221DDE0 ; =0x00000424
    // add r1, r5, r0
    // b _0221DD3A
    // mov r0, #0xd9
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0x10
    // str r0, [sp, #0x14]
    // mov r0, #6
    // str r0, [sp, #0x18]
    // ldrb r2, [r6]
    // ldrb r3, [r6, #1]
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // bl CopyToBgTilemapRect
    // mov r0, #0x86
    // lsl r0, r0, #2
    // ldrh r0, [r7, r0]
    // cmp r0, #0
    // beq _0221DDC6
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // add r0, r4, #3
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // ldrb r2, [r6]
    // ldrb r3, [r6, #1]
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // bl BgTilemapRectChangePalette
    // cmp r4, #3
    // bhs _0221DD92
    // ldr r0, [r5]
    // add r0, #0x29
    // ldrb r0, [r0]
    // cmp r0, #1
    // beq _0221DDA0
    // cmp r4, #3
    // blo _0221DDB4
    // ldr r0, [r5]
    // add r0, #0x29
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0221DDB4
    // ldr r1, _0221DDE4 ; =0x00000504
    // add r3, r4, #3
    // lsl r3, r3, #0x15
    // mov r0, #2
    // add r1, r5, r1
    // mov r2, #0x20
    // lsr r3, r3, #0x10
    // bl BG_LoadPlttData
    // b _0221DDC6
    // ldr r1, _0221DDE8 ; =0x000004E4
    // add r3, r4, #3
    // lsl r3, r3, #0x15
    // mov r0, #2
    // add r1, r5, r1
    // mov r2, #0x20
    // lsr r3, r3, #0x10
    // bl BG_LoadPlttData
    // add r4, r4, #1
    // add r7, #0x18
    // add r6, r6, #2
    // cmp r4, #6
    // blo _0221DD14
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _0221DDDC: .word ov05_0221EA60
    // _0221DDE0: .word 0x00000424
    // _0221DDE4: .word 0x00000504
    // _0221DDE8: .word 0x000004E4
    // TODO: decompile
}



void ov05_0221DDEC(void) {
    // str r1, [sp]
    GetBgTilemapBuffer(*((u32*)(r0 + 0xc)), r2);
    // add r0, #0x29
    // ldrb r0, [r0]
    // add r0, r7, r0
    // ldr r0, [sp]
    // add r0, r0, r1
    // add r1, r6, r4
    memcpy((0 << 5), (0 << 5), 0x20);
    // add r0, r6, r4
    memset(0, 0x20);
}



void ov05_0221DE38(void) {
    // push {r4, lr}
    // ldr r1, _0221DE64 ; =0x00000544
    // add r4, r0, #0
    // add r1, r4, r1
    // mov r2, #1
    // bl ov05_0221DDEC
    // ldr r1, _0221DE68 ; =0x00000844
    // add r0, r4, #0
    // add r1, r4, r1
    // mov r2, #2
    // bl ov05_0221DDEC
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [r4, #0xc]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // pop {r4, pc}
    // _0221DE64: .word 0x00000544
    // _0221DE68: .word 0x00000844
    // TODO: decompile
}



void ov05_0221DE6C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // add r0, #0x29
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0221DECC
    // mov r0, #0x20
    // sub r6, r0, r4
    // ldr r1, _0221DF30 ; =0x00000544
    // str r4, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // add r1, r5, r1
    // str r1, [sp, #8]
    // mov r3, #0
    // str r3, [sp, #0xc]
    // lsl r2, r6, #0x18
    // str r3, [sp, #0x10]
    // mov r1, #0x10
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // lsr r2, r2, #0x18
    // bl CopyToBgTilemapRect
    // ldr r0, _0221DF34 ; =0x00000844
    // lsl r2, r6, #0x18
    // str r4, [sp]
    // mov r1, #0x18
    // str r1, [sp, #4]
    // add r0, r5, r0
    // str r0, [sp, #8]
    // mov r3, #0
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // mov r0, #0x10
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // lsr r2, r2, #0x18
    // bl CopyToBgTilemapRect
    // b _0221DF1A
    // ldr r2, _0221DF30 ; =0x00000544
    // mov r0, #0x10
    // str r4, [sp]
    // mov r1, #0x18
    // sub r6, r0, r4
    // str r1, [sp, #4]
    // add r2, r5, r2
    // str r2, [sp, #8]
    // lsl r2, r6, #0x18
    // lsr r2, r2, #0x18
    // str r2, [sp, #0xc]
    // mov r2, #0
    // str r2, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r1, [sp, #0x18]
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // add r3, r2, #0
    // bl CopyToBgTilemapRect
    // ldr r1, _0221DF34 ; =0x00000844
    // mov r2, #0
    // str r4, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // add r1, r5, r1
    // str r1, [sp, #8]
    // lsl r1, r6, #0x18
    // lsr r1, r1, #0x18
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    // mov r1, #0x10
    // str r1, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // add r3, r2, #0
    // bl CopyToBgTilemapRect
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x1c
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0221DF30: .word 0x00000544
    // _0221DF34: .word 0x00000844
    // TODO: decompile
}



void ov05_0221DF38(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // add r0, r1, #0
    // str r1, [sp]
    // add r5, r2, #0
    // bl Party_GetCount
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0x18
    // mul r0, r5
    // add r0, r4, r0
    // mov r6, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // cmp r0, r6
    // bhi _0221DF7A
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // bl GetMonIconNaixEx
    // mov r1, #0x18
    // add r2, r6, #0
    // mul r2, r1
    // ldr r1, [sp, #4]
    // add r2, r1, r2
    // mov r1, #0x85
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // b _0221E054
    // ldr r0, [sp]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // mov r1, #0x18
    // add r2, r6, #0
    // mul r2, r1
    // ldr r1, [sp, #4]
    // add r4, r0, #0
    // add r7, r1, r2
    // bl Pokemon_GetIconNaix
    // mov r1, #0x85
    // lsl r1, r1, #2
    // str r0, [r7, r1]
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x86
    // lsl r1, r1, #2
    // strh r0, [r7, r1]
    // add r0, r1, #0
    // ldrh r0, [r7, r0]
    // cmp r0, #0
    // beq _0221E054
    // mov r0, #0x18
    // add r1, r6, #0
    // mul r1, r0
    // ldr r0, [sp, #4]
    // mov r2, #0
    // add r5, r0, r1
    // add r0, r4, #0
    // mov r1, #0x4c
    // bl GetMonData
    // ldr r1, _0221E064 ; =0x00000223
    // mov r2, #0
    // strb r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0xa3
    // bl GetMonData
    // ldr r1, _0221E068 ; =0x0000021A
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0xa4
    // bl GetMonData
    // mov r1, #0x87
    // lsl r1, r1, #2
    // strh r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // mov r1, #0x22
    // lsl r1, r1, #4
    // strb r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0221E06C ; =0x0000021E
    // mov r2, #0
    // strh r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0xa2
    // bl GetMonData
    // mov r1, #0x89
    // lsl r1, r1, #2
    // strb r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0221E070 ; =0x00000225
    // mov r2, #0
    // strb r0, [r5, r1]
    // add r0, r4, #0
    // mov r1, #0xb0
    // bl GetMonData
    // cmp r0, #1
    // bne _0221E034
    // mov r1, #0
    // b _0221E036
    // mov r1, #1
    // ldr r0, _0221E074 ; =0x00000222
    // strb r1, [r7, r0]
    // add r0, r4, #0
    // bl GetMonGender
    // ldr r1, _0221E078 ; =0x00000221
    // strb r0, [r5, r1]
    // add r0, r4, #0
    // bl Pokemon_GetStatusIconId
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // cmp r6, #3
    // bhs _0221E060
    // b _0221DF58
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0221E064: .word 0x00000223
    // _0221E068: .word 0x0000021A
    // _0221E06C: .word 0x0000021E
    // _0221E070: .word 0x00000225
    // _0221E074: .word 0x00000222
    // _0221E078: .word 0x00000221
    // TODO: decompile
}



void ov05_0221E07C(void) {
    // add r0, r4, r0
    memset((0x85 << 2), 0, 0x90);
    ov05_0221DF38(r4, *((u32*)(*((u32*)r4) + 4)), 0);
    ov05_0221DF38(r4, *((u32*)(*((u32*)r4) + 0xc)), 3);
}



void ov05_0221E0A8(void) {
    // push {r4, lr}
    // add r3, r0, #0
    // add r2, r1, #0
    // mov r0, #0x18
    // mul r2, r0
    // ldr r1, _0221E10C ; =0x0000021A
    // add r4, r3, r2
    // ldrh r0, [r4, r1]
    // cmp r0, #0
    // bne _0221E0C0
    // mov r0, #0
    // pop {r4, pc}
    // add r1, #0xe
    // ldr r1, [r4, r1]
    // cmp r1, #7
    // beq _0221E0D0
    // cmp r1, #0
    // beq _0221E0D0
    // mov r0, #5
    // pop {r4, pc}
    // mov r1, #0x87
    // add r2, r3, r2
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // cmp r0, #4
    // bhi _0221E108
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E0EE: ; jump table
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #2
    // pop {r4, pc}
    // mov r0, #3
    // pop {r4, pc}
    // mov r0, #4
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _0221E10C: .word 0x0000021A
    // TODO: decompile
}



void ov05_0221E110(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp, #8]
    // str r1, [sp]
    // add r0, r1, #0
    // lsl r1, r0, #2
    // ldr r0, [sp]
    // ldr r2, _0221E268 ; =ov05_0221EC5C
    // add r7, r0, r1
    // lsl r0, r7, #2
    // add r4, r5, r0
    // ldr r0, [sp]
    // mov r1, #0xa
    // mul r1, r0
    // str r4, [sp, #4]
    // add r6, r2, r1
    // mov r1, #0x1c
    // add r2, r7, #0
    // mul r2, r1
    // ldr r1, _0221E26C ; =ov05_0221EF2C
    // add r0, r5, #0
    // add r1, r1, r2
    // bl ov05_0221CDC4
    // mov r1, #0x66
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldrb r1, [r6]
    // ldrb r2, [r6, #1]
    // ldr r0, [r4, r0]
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [sp, #8]
    // add r7, r7, #1
    // add r0, r0, #1
    // add r4, r4, #4
    // add r6, r6, #2
    // str r0, [sp, #8]
    // cmp r0, #5
    // blo _0221E134
    // ldr r0, [sp]
    // mov r2, #0x86
    // mov r1, #0x18
    // add r6, r0, #0
    // mul r6, r1
    // add r3, r5, r6
    // lsl r2, r2, #2
    // ldrh r0, [r3, r2]
    // cmp r0, #0
    // bne _0221E19C
    // mov r5, #0
    // add r4, r2, #0
    // add r6, r5, #0
    // sub r4, #0x80
    // ldr r0, [sp, #4]
    // add r1, r6, #0
    // ldr r0, [r0, r4]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [sp, #4]
    // add r5, r5, #1
    // add r0, r0, #4
    // str r0, [sp, #4]
    // cmp r5, #5
    // blo _0221E182
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // ldr r1, [sp]
    // mov r4, #0x14
    // mul r4, r1
    // add r1, r2, #0
    // sub r1, #0x80
    // add r7, r5, r1
    // add r1, r2, #0
    // add r1, #0xd
    // add r2, #0xb
    // ldrb r1, [r3, r1]
    // ldrb r2, [r3, r2]
    // bl GetMonIconPaletteEx
    // add r1, r0, #0
    // ldr r0, [r7, r4]
    // bl ManagedSprite_SetPaletteOverride
    // ldr r1, [sp]
    // add r0, r5, #0
    // bl ov05_0221E0A8
    // add r1, r0, #0
    // ldr r0, [r7, r4]
    // bl ManagedSprite_SetAnim
    // ldr r1, _0221E270 ; =0x0000021E
    // add r0, r5, r6
    // ldrh r0, [r0, r1]
    // cmp r0, #0
    // bne _0221E1E6
    // add r0, r5, r4
    // sub r1, #0x82
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _0221E20C
    // bl ItemIdIsMail
    // cmp r0, #1
    // bne _0221E1FE
    // mov r0, #0x67
    // add r1, r5, r4
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetAnim
    // b _0221E20C
    // mov r0, #0x67
    // add r1, r5, r4
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetAnim
    // mov r0, #0x89
    // add r1, r5, r6
    // lsl r0, r0, #2
    // ldrb r1, [r1, r0]
    // cmp r1, #0
    // bne _0221E226
    // add r1, r5, r4
    // sub r0, #0x84
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _0221E232
    // add r1, r5, r4
    // sub r0, #0x84
    // ldr r0, [r1, r0]
    // mov r1, #2
    // bl ManagedSprite_SetAnim
    // mov r3, #0x8a
    // add r0, r5, r6
    // lsl r3, r3, #2
    // ldr r0, [r0, r3]
    // cmp r0, #7
    // bne _0221E24E
    // add r0, r5, r4
    // sub r3, #0x84
    // ldr r0, [r0, r3]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r0, r3, #0
    // add r1, r5, r4
    // sub r0, #0x84
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #8]
    // mov r2, #0x18
    // mul r2, r1
    // add r1, r5, r2
    // ldr r1, [r1, r3]
    // bl ManagedSprite_SetAnim
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0221E268: .word ov05_0221EC5C
    // _0221E26C: .word ov05_0221EF2C
    // _0221E270: .word 0x0000021E
    // TODO: decompile
}



void ov05_0221E274(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // ldr r5, _0221E2D4 ; =ov05_0221EAEC
    // add r3, sp, #0
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, r2, #0
    // add r0, r4, #0
    // mov r2, #0x1f
    // bl ov05_0221CD24
    // add r0, r4, #0
    // bl ov05_0221E2D8
    // add r0, r4, #0
    // bl ov05_0221E390
    // add r0, r4, #0
    // bl ov05_0221E42C
    // add r0, r4, #0
    // bl ov05_0221E4C8
    // mov r5, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov05_0221E110
    // add r5, r5, #1
    // cmp r5, #6
    // blo _0221E2B0
    // add r0, r4, #0
    // mov r1, #0x10
    // bl ov05_0221E564
    // mov r0, #0x21
    // mov r1, #0x1e
    // lsl r0, r0, #4
    // str r1, [r4, r0]
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // nop
    // _0221E2D4: .word ov05_0221EAEC
    // TODO: decompile
}



void ov05_0221E2D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x14
    // ldr r1, [r1, #0x24]
    // bl NARC_New
    // add r7, r0, #0
    // bl sub_02074490
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _0221E388 ; =0x0000B808
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadPlttResObjFromOpenNarc
    // bl sub_02074498
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221E38C ; =0x0000B809
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // bl sub_020744A4
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221E38C ; =0x0000B809
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r7, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r4, #0
    // add r6, r5, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E38C ; =0x0000B809
    // mov r1, #0x65
    // add r0, r4, r0
    // str r0, [sp, #8]
    // mov r0, #0x19
    // mov r3, #0x85
    // lsl r0, r0, #4
    // lsl r1, r1, #2
    // lsl r3, r3, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r3, [r6, r3]
    // add r2, r7, #0
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // add r4, r4, #1
    // add r6, #0x18
    // cmp r4, #6
    // blo _0221E350
    // add r0, r7, #0
    // bl NARC_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221E388: .word 0x0000B808
    // _0221E38C: .word 0x0000B809
    // TODO: decompile
}



void ov05_0221E390(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x15
    // ldr r1, [r1, #0x24]
    // bl NARC_New
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E420 ; =0x0000B80F
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0x14
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _0221E424 ; =0x0000B809
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0x15
    // bl SpriteSystem_LoadPlttResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221E428 ; =0x0000B80A
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0x13
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221E428 ; =0x0000B80A
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0x12
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0221E420: .word 0x0000B80F
    // _0221E424: .word 0x0000B809
    // _0221E428: .word 0x0000B80A
    // TODO: decompile
}



void ov05_0221E42C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x27
    // ldr r1, [r1, #0x24]
    // bl NARC_New
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E4BC ; =0x0000B810
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0x40
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _0221E4C0 ; =0x0000B80A
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0x41
    // bl SpriteSystem_LoadPlttResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221E4C4 ; =0x0000B80B
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0x3f
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221E4C4 ; =0x0000B80B
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #0x3e
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0221E4BC: .word 0x0000B810
    // _0221E4C0: .word 0x0000B80A
    // _0221E4C4: .word 0x0000B80B
    // TODO: decompile
}



void ov05_0221E4C8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r1, [r5]
    // mov r0, #0x15
    // ldr r1, [r1, #0x24]
    // bl NARC_New
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _0221E558 ; =0x0000B811
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #2
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _0221E55C ; =0x0000B80B
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #8
    // bl SpriteSystem_LoadPlttResObjFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _0221E560 ; =0x0000B80C
    // mov r1, #0x19
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #1
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r3, #0
    // mov r1, #0x19
    // ldr r0, _0221E560 ; =0x0000B80C
    // str r3, [sp]
    // lsl r1, r1, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0221E558: .word 0x0000B811
    // _0221E55C: .word 0x0000B80B
    // _0221E560: .word 0x0000B80C
    // TODO: decompile
}



void ov05_0221E564(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // ldr r0, [r0]
    // add r7, r1, #0
    // add r0, #0x29
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _0221E57E
    // mov r0, #3
    // str r0, [sp, #8]
    // lsl r0, r7, #0x13
    // b _0221E588
    // mov r0, #0
    // str r0, [sp, #8]
    // lsl r0, r7, #3
    // neg r0, r0
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // mov r1, #0xa
    // ldr r2, _0221E5E0 ; =ov05_0221EC5C
    // mul r1, r0
    // add r0, r2, r1
    // str r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r4, [sp, #4]
    // add r1, r1, r0
    // lsl r0, r1, #2
    // add r0, r1, r0
    // lsl r1, r0, #2
    // ldr r0, [sp]
    // mov r6, #0
    // add r5, r0, r1
    // ldrb r1, [r4]
    // mov r0, #0x66
    // lsl r0, r0, #2
    // add r1, r7, r1
    // lsl r1, r1, #0x10
    // ldrb r2, [r4, #1]
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r6, r6, #1
    // add r4, r4, #2
    // add r5, r5, #4
    // cmp r6, #5
    // blt _0221E5AE
    // ldr r0, [sp, #4]
    // add r0, #0xa
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // cmp r0, #3
    // blt _0221E59A
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0221E5E0: .word ov05_0221EC5C
    // TODO: decompile
}



void ov05_0221E5E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r7, #0
    // ldr r4, _0221E608 ; =ov05_0221ECE4
    // mov r6, #0
    // add r5, #0x10
    // ldr r0, [r7, #0xc]
    // add r1, r5, #0
    // add r2, r4, #0
    // bl AddWindow
    // add r6, r6, #1
    // add r4, #8
    // add r5, #0x10
    // cmp r6, #0x18
    // blo _0221E5F0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0221E608: .word ov05_0221ECE4
    // TODO: decompile
}



void ov05_0221E60C(void) {
}



void ov05_0221E624(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // ldr r4, [sp, #0x3c]
    // add r5, r0, #0
    // add r7, r5, #0
    // lsl r0, r4, #6
    // add r7, #0x10
    // str r0, [sp, #0x1c]
    // str r1, [sp, #0x10]
    // str r3, [sp, #0x14]
    // ldr r6, [sp, #0x38]
    // cmp r4, #3
    // ldr r0, [r5]
    // bhs _0221E64C
    // ldr r0, [r0, #4]
    // add r1, r4, #0
    // bl Party_GetMonByIndex
    // str r0, [sp, #0x18]
    // b _0221E656
    // ldr r0, [r0, #0xc]
    // sub r1, r4, #3
    // bl Party_GetMonByIndex
    // str r0, [sp, #0x18]
    // add r1, r4, #0
    // ldr r0, [sp, #0x10]
    // add r1, #8
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x18]
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [sp, #0x14]
    // mov r1, #0
    // bl BufferBoxMonNickname
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x20]
    // add r1, r6, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E708 ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // add r3, r1, #0
    // add r0, r7, r0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // mov r0, #0x18
    // mul r0, r4
    // add r2, r5, r0
    // ldr r0, _0221E70C ; =0x00000222
    // ldrb r1, [r2, r0]
    // cmp r1, #0
    // bne _0221E704
    // sub r0, r0, #1
    // ldrb r0, [r2, r0]
    // cmp r0, #0
    // bne _0221E6DC
    // ldr r0, [sp, #0x10]
    // mov r1, #0x1b
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0xc1
    // lsl r0, r0, #0xa
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // add r2, r6, #0
    // add r0, r7, r0
    // mov r3, #0x40
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // cmp r0, #1
    // bne _0221E704
    // ldr r0, [sp, #0x10]
    // mov r1, #0x1c
    // add r2, r6, #0
    // bl ReadMsgDataIntoString
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _0221E710 ; =0x00050600
    // add r2, r6, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x1c]
    // mov r3, #0x40
    // add r0, r7, r0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0221E708: .word 0x000F0E00
    // _0221E70C: .word 0x00000222
    // _0221E710: .word 0x00050600
    // TODO: decompile
}



void ov05_0221E714(void) {
    // ldr r3, [sp, #0x24]
    // add r0, #0x10
    // str r1, [sp]
    // add r0, r0, r5
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // mul r2, r3
    // add r3, r4, r2
    // ldrb r2, [r3, r2]
    sub_0200CE7C(r2, 1, (0x22 << 4), 3);
}



void ov05_0221E74C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldr r1, [sp, #0x24]
    // add r5, r0, #0
    // lsl r0, r1, #2
    // add r7, r2, #0
    // add r2, r5, #0
    // add r0, r0, #2
    // add r6, r1, #0
    // add r2, #0x10
    // lsl r0, r0, #4
    // add r4, r2, r0
    // mov r0, #0x18
    // mul r6, r0
    // str r4, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // ldr r1, _0221E7B4 ; =0x0000021A
    // add r2, r5, r6
    // ldrh r1, [r2, r1]
    // add r0, r7, #0
    // mov r2, #3
    // mov r3, #1
    // bl PrintUIntOnWindow
    // mov r0, #2
    // str r0, [sp]
    // add r0, r7, #0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #0x18
    // bl sub_0200CDAC
    // mov r1, #0x87
    // str r4, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r2, r5, r6
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // add r0, r7, #0
    // mov r2, #3
    // mov r3, #0
    // bl PrintUIntOnWindow
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221E7B4: .word 0x0000021A
    // TODO: decompile
}



void ov05_0221E7B8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // lsl r0, r1, #2
    // add r2, r5, #0
    // add r0, r0, #3
    // add r2, #0x10
    // lsl r0, r0, #4
    // add r4, r2, r0
    // mov r0, #0x18
    // add r6, r1, #0
    // mul r6, r0
    // mov r0, #0x87
    // lsl r0, r0, #2
    // add r7, r5, r0
    // sub r0, r0, #2
    // add r0, r5, r0
    // str r0, [sp, #8]
    // ldrh r0, [r0, r6]
    // ldrh r1, [r7, r6]
    // mov r2, #0x30
    // bl CalculateHpBarColor
    // cmp r0, #4
    // bhi _0221E846
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0221E7F6: ; jump table
    // ldrb r3, [r4, #9]
    // ldr r1, _0221E89C ; =0x000004F6
    // mov r0, #1
    // lsl r3, r3, #4
    // add r3, #9
    // lsl r3, r3, #0x11
    // add r1, r5, r1
    // mov r2, #4
    // lsr r3, r3, #0x10
    // bl BG_LoadPlttData
    // b _0221E846
    // ldrb r3, [r4, #9]
    // ldr r1, _0221E8A0 ; =0x00000516
    // mov r0, #1
    // lsl r3, r3, #4
    // add r3, #9
    // lsl r3, r3, #0x11
    // add r1, r5, r1
    // mov r2, #4
    // lsr r3, r3, #0x10
    // bl BG_LoadPlttData
    // b _0221E846
    // ldrb r3, [r4, #9]
    // ldr r1, _0221E8A4 ; =0x00000536
    // mov r0, #1
    // lsl r3, r3, #4
    // add r3, #9
    // lsl r3, r3, #0x11
    // add r1, r5, r1
    // mov r2, #4
    // lsr r3, r3, #0x10
    // bl BG_LoadPlttData
    // ldr r0, [sp, #8]
    // ldrh r1, [r7, r6]
    // ldrh r0, [r0, r6]
    // mov r2, #0x30
    // bl CalculateHpBarPixelsLength
    // add r5, r0, #0
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // mov r3, #2
    // bl FillWindowPixelRect
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #9
    // mov r2, #0
    // mov r3, #3
    // bl FillWindowPixelRect
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0
    // mov r3, #5
    // bl FillWindowPixelRect
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0221E89C: .word 0x000004F6
    // _0221E8A0: .word 0x00000516
    // _0221E8A4: .word 0x00000536
    // TODO: decompile
}



void ov05_0221E8A8(void) {
    // ldr r6, [sp, #0x2c]
    // str r1, [sp, #8]
    // add r5, #0x10
    // add r0, r5, r4
    // str r2, [sp, #0xc]
    // str r3, [sp, #0x10]
    FillWindowPixelBuffer(0);
    // add r0, r5, r4
    // add r0, #0x10
    FillWindowPixelBuffer(0);
    // add r0, r5, r4
    // add r0, #0x20
    FillWindowPixelBuffer(0);
    // add r0, r5, r4
    // add r0, #0x30
    FillWindowPixelBuffer(0);
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // str r6, [sp, #4]
    ov05_0221E624(r7);
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // str r6, [sp, #4]
    ov05_0221E714(r7);
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    // str r6, [sp, #4]
    ov05_0221E74C(r7);
    ov05_0221E7B8(r7, r6);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
    // add r0, r5, r4
    // add r0, #0x10
    ScheduleWindowCopyToVram();
    // add r0, r5, r4
    // add r0, #0x20
    ScheduleWindowCopyToVram();
    // add r0, r5, r4
    // add r0, #0x30
    ScheduleWindowCopyToVram();
}



void ov05_0221E944(void) {
    NewMsgDataFromNarc(0, 0x1b, (0x4b << 2), *((u32*)(*((u32*)r0) + 0x24)));
    // str r0, [sp, #0x10]
    MessagePrinter_New(0xf, 0xe, 0, *((u32*)(*((u32*)r6) + 0x24)));
    // str r0, [sp, #0xc]
    MessageFormat_New(*((u32*)(*((u32*)r6) + 0x24)));
    // str r0, [sp, #8]
    String_New(0x20, *((u32*)(*((u32*)r6) + 0x24)));
    // ldrh r0, [r5, r0]
    // ldr r1, [sp, #0x10]
    // str r7, [sp]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #8]
    // str r4, [sp, #4]
    ov05_0221E8A8(r6);
    // add r5, #0x18
    String_Delete(r7);
    // ldr r0, [sp, #0x10]
    DestroyMsgData();
    // ldr r0, [sp, #0xc]
    MessagePrinter_Delete();
    // ldr r0, [sp, #8]
    MessageFormat_Delete();
}



void ov05_0221E9C4(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0xd8
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // ldr r0, _0221E9F4 ; =0x00000B88
    // mov r2, #0
    // add r0, r4, r0
    // mov r1, #0xf
    // add r3, r2, #0
    // bl FillWindowPixelRect
    // ldr r0, _0221E9F4 ; =0x00000B88
    // mov r1, #0
    // add r0, r4, r0
    // mov r2, #1
    // mov r3, #0xf
    // bl DrawFrameAndWindow2
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0221E9F4: .word 0x00000B88
    // TODO: decompile
}



void ov05_0221E9F8(void) {
}



void ov05_0221EA18(void) {
}



void ov05_0221EA38(void) {
}


