/* Decompiled from asm/overlay_18.s */
#include "global.h"

void ov18_021EE35C(void) {
    // str r2, [sp]
    // add r4, #0xc
    AddWindow(*((u32*)(r0 + 4)), r0, r1);
    // ldr r0, [sp]
    // add r5, #8
    // add r4, #0x10
}




void ov18_021EE388(void) {
    // add r4, #0xc
    RemoveWindow(r0);
    // add r5, #0x10
    // add r4, #0x10
}




void ov18_021EE3AC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // add r1, r3, #0
    // add r4, r2, #0
    // bl NewString_ReadMsgData
    // mov r1, #0x66
    // add r6, r0, #0
    // lsl r1, r1, #4
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x28]
    // add r1, r5, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r1, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #8]
    // lsl r0, r4, #4
    // add r0, r1, r0
    // ldr r1, _021EE3F8 ; =0x00000664
    // ldr r3, [sp, #0x24]
    // ldr r1, [r5, r1]
    // bl ov18_021F95FC
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _021EE3F8: .word 0x00000664
    // TODO: decompile
}




void ov18_021EE3FC(void) {
    // push {r4, r5, r6, lr}
    // ldr r1, _021EE448 ; =ov18_021F9F3C
    // mov r2, #0x14
    // add r5, r0, #0
    // bl ov18_021EE35C
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov18_021EE508
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov18_021EE508
    // add r0, r5, #0
    // bl ov18_021EE5FC
    // add r0, r5, #0
    // bl ov18_021F8824
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov18_021F8838
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov18_021EE6BC
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov18_021EE8B8
    // pop {r4, r5, r6, pc}
    // _021EE448: .word ov18_021F9F3C
    // TODO: decompile
}




void ov18_021EE44C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // str r0, [sp, #0x1c]
    // mov r0, #0x25
    // add r4, r1, #0
    // str r0, [sp]
    // ldr r1, _021EE4FC ; =0x00000854
    // ldr r0, [sp, #0x1c]
    // str r2, [sp, #0x20]
    // ldr r0, [r0, r1]
    // mov r1, #1
    // add r2, r1, #0
    // add r3, sp, #0x2c
    // bl GfGfxLoader_GetCharDataFromOpenNarc
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // lsl r6, r4, #4
    // ldr r7, [r0, #0x14]
    // ldr r4, [sp, #0x1c]
    // mov r5, #0
    // str r5, [sp, #0x24]
    // add r4, #0xc
    // add r7, #0x20
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r4, r6
    // add r1, r7, #0
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r4, r6
    // add r1, r7, #0
    // add r3, r2, #0
    // bl BlitBitmapRect
    // ldr r0, [sp, #0x24]
    // add r5, #8
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // cmp r0, #0xc
    // blo _021EE47C
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EE500 ; =0x000F0800
    // ldr r2, _021EE504 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x1c]
    // add r0, r4, r6
    // ldr r1, [r1, r2]
    // ldr r2, [sp, #0x20]
    // mov r3, #0x60
    // bl ov18_021F9648
    // ldr r0, [sp, #0x28]
    // bl Heap_Free
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EE4FC: .word 0x00000854
    // _021EE500: .word 0x000F0800
    // _021EE504: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EE508(void) {
    ov18_021EE44C();
    // add r4, #0xc
    // add r0, r4, r0
    ScheduleWindowCopyToVram((r5 << 4));
}




void ov18_021EE520(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // mov r0, #0x25
    // str r0, [sp]
    // ldr r0, _021EE5E0 ; =0x00000854
    // str r1, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // mov r1, #1
    // str r2, [sp, #0x20]
    // add r2, r1, #0
    // add r3, sp, #0x2c
    // bl GfGfxLoader_GetCharDataFromOpenNarc
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x2c]
    // mov r6, #0
    // ldr r7, [r0, #0x14]
    // ldr r0, [sp, #0x1c]
    // add r5, #0xc
    // lsl r0, r0, #4
    // add r5, r5, r0
    // add r0, r7, #0
    // str r0, [sp, #0x28]
    // add r0, #0x20
    // add r4, r6, #0
    // str r0, [sp, #0x28]
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // mov r1, #3
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #8
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // add r1, r7, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // mov r2, #0
    // str r0, [sp, #0x18]
    // ldr r1, [sp, #0x28]
    // add r0, r5, #0
    // add r3, r2, #0
    // bl BlitBitmapRect
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, #3
    // blo _021EE556
    // ldr r0, [sp, #0x24]
    // bl Heap_Free
    // mov r0, #0xf
    // mov r1, #8
    // mov r2, #7
    // mov r3, #0x25
    // bl MessagePrinter_New
    // str r5, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // ldr r1, [sp, #0x20]
    // add r4, r0, #0
    // mov r2, #3
    // mov r3, #2
    // bl PrintUIntOnWindow
    // add r0, r4, #0
    // bl MessagePrinter_Delete
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EE5E0: .word 0x00000854
    // TODO: decompile
}




void ov18_021EE5E4(void) {
    ov18_021EE520();
    // add r4, #0xc
    // add r0, r4, r0
    ScheduleWindowCopyToVram((r5 << 4));
}




void ov18_021EE5FC(void) {
    // push {r4, lr}
    // ldr r1, _021EE62C ; =0x0000185D
    // add r4, r0, #0
    // ldr r2, _021EE630 ; =0x0000102C
    // ldrb r1, [r4, r1]
    // ldrh r2, [r4, r2]
    // add r1, r1, #2
    // bl ov18_021EE5E4
    // ldr r1, _021EE62C ; =0x0000185D
    // ldr r2, _021EE634 ; =0x0000102E
    // ldrb r1, [r4, r1]
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // add r1, r1, #4
    // bl ov18_021EE5E4
    // ldr r1, _021EE62C ; =0x0000185D
    // mov r0, #1
    // ldrb r2, [r4, r1]
    // eor r0, r2
    // strb r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _021EE62C: .word 0x0000185D
    // _021EE630: .word 0x0000102C
    // _021EE634: .word 0x0000102E
    // TODO: decompile
}




void ov18_021EE638(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r7, r1, #0
    // beq _021EE6A6
    // add r4, r5, #0
    // add r4, #0xc
    // lsl r6, r2, #4
    // add r0, r4, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _021EE6B4 ; =0x0000185C
    // add r0, r7, #0
    // ldrb r1, [r5, r1]
    // mov r2, #0x25
    // bl ov18_021E590C
    // add r7, r0, #0
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Pokedex_GetInternationalViewFlag
    // cmp r0, #1
    // ldr r0, _021EE6B8 ; =0x00020100
    // bne _021EE682
    // mov r3, #0
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, r4, r6
    // add r1, r7, #0
    // mov r2, #0x38
    // bl ov18_021F95FC
    // b _021EE696
    // mov r3, #0
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, r4, r6
    // add r1, r7, #0
    // mov r2, #0x2c
    // bl ov18_021F95FC
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r5, #0xc
    // lsl r0, r2, #4
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021EE6B4: .word 0x0000185C
    // _021EE6B8: .word 0x00020100
    // TODO: decompile
}




void ov18_021EE6BC(void) {
}




void ov18_021EE6EC(void) {
}




void ov18_021EE71C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EE754 ; =0x00020100
    // ldr r1, _021EE758 ; =0x0000065C
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #8
    // bl ov18_021F9648
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EE754: .word 0x00020100
    // _021EE758: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EE75C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r2, #0
    // add r7, r1, #0
    // add r4, #0xc
    // lsl r6, r0, #4
    // add r0, r4, r6
    // mov r1, #0
    // str r2, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // cmp r7, #0
    // beq _021EE7C6
    // ldr r0, _021EE7D0 ; =0x00001858
    // add r1, r7, #0
    // ldrb r0, [r5, r0]
    // bl Pokedex_ConvertToCurrentDexNo
    // add r2, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x66
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r0, #1
    // str r0, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, _021EE7D4 ; =0x00020100
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, _021EE7D8 ; =0x0000065C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // mov r3, #9
    // bl ov18_021EE3AC
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, r6
    // bl ClearWindowTilemapAndScheduleTransfer
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EE7D0: .word 0x00001858
    // _021EE7D4: .word 0x00020100
    // _021EE7D8: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EE7DC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // lsl r5, r2, #4
    // add r4, #0xc
    // add r6, r1, #0
    // add r0, r4, r5
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // cmp r6, #0
    // beq _021EE826
    // add r0, r6, #0
    // mov r1, #2
    // mov r2, #0x25
    // bl ov18_021E590C
    // add r6, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _021EE830 ; =0x00020100
    // mov r2, #0
    // str r0, [sp, #4]
    // add r0, r4, r5
    // add r1, r6, #0
    // add r3, r2, #0
    // str r2, [sp, #8]
    // bl ov18_021F95FC
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, r5
    // bl ScheduleWindowCopyToVram
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // add r0, r4, r5
    // bl ClearWindowTilemapAndScheduleTransfer
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _021EE830: .word 0x00020100
    // TODO: decompile
}




void ov18_021EE834(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r4, r6, #0
    // lsl r5, r3, #4
    // add r4, #0xc
    // add r7, r1, #0
    // add r0, r4, r5
    // mov r1, #0
    // str r2, [sp, #0xc]
    // bl FillWindowPixelBuffer
    // cmp r7, #0
    // beq _021EE8A6
    // ldr r0, [sp, #0xc]
    // lsl r0, r0, #2
    // add r1, r6, r0
    // ldr r0, _021EE8B0 ; =0x00001032
    // ldrh r0, [r1, r0]
    // cmp r0, #2
    // bne _021EE86A
    // add r0, r7, #0
    // mov r1, #2
    // mov r2, #0x25
    // bl ov18_021E595C
    // b _021EE874
    // mov r0, #0
    // mov r1, #2
    // mov r2, #0x25
    // bl ov18_021E595C
    // add r6, r0, #0
    // add r0, r4, r5
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r2, r0, #4
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _021EE8B4 ; =0x00020100
    // add r1, r6, #0
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r0, r4, r5
    // mov r3, #0
    // bl ov18_021F95FC
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, r5
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, r5
    // bl ClearWindowTilemapAndScheduleTransfer
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EE8B0: .word 0x00001032
    // _021EE8B4: .word 0x00020100
    // TODO: decompile
}




void ov18_021EE8B8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, #0xcc
    // add r4, r1, #0
    // add r6, r2, #0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // add r0, #0xec
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // add r0, #0xbc
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // add r0, #0xdc
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r5, #0
    // add r0, #0xfc
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x47
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // cmp r4, #0
    // beq _021EE97C
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0xb
    // bl ov18_021EE984
    // ldr r0, _021EE980 ; =0x0000185C
    // ldrb r0, [r5, r0]
    // cmp r0, #2
    // bne _021EE950
    // add r0, r5, #0
    // mov r1, #0xc
    // bl ov18_021EE9FC
    // add r0, r5, #0
    // mov r1, #0xe
    // bl ov18_021EEA40
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0xd
    // bl ov18_021EEAE4
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0xf
    // bl ov18_021EEB94
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // mov r1, #0x10
    // bl ov18_021EEBE4
    // ldr r3, _021EE980 ; =0x0000185C
    // add r0, r5, #0
    // ldrb r3, [r5, r3]
    // add r1, r4, #0
    // mov r2, #0x11
    // bl ov18_021EEC34
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x12
    // bl ov18_021EECB0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0x13
    // bl ov18_021EED00
    // pop {r4, r5, r6, pc}
    // nop
    // _021EE980: .word 0x0000185C
    // TODO: decompile
}




void ov18_021EE984(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // lsl r0, r2, #2
    // add r7, r1, #0
    // add r1, r6, r0
    // ldr r0, _021EE9F0 ; =0x00001032
    // ldrh r0, [r1, r0]
    // cmp r0, #2
    // bne _021EE9EC
    // add r5, r6, #0
    // add r5, #0xc
    // lsl r4, r3, #4
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _021EE9F4 ; =0x0000185C
    // add r0, r7, #0
    // ldrb r1, [r6, r1]
    // mov r2, #0
    // mov r3, #0x25
    // bl ov18_021E59A8
    // add r6, r0, #0
    // add r0, r5, r4
    // bl GetWindowWidth
    // add r7, r0, #0
    // mov r0, #0
    // add r1, r6, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidthMultiline
    // lsl r1, r7, #3
    // sub r0, r1, r0
    // lsr r2, r0, #1
    // mov r3, #0
    // ldr r0, _021EE9F8 ; =0x00020100
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r4
    // add r1, r6, #0
    // str r3, [sp, #8]
    // bl ov18_021F95FC
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021EE9F0: .word 0x00001032
    // _021EE9F4: .word 0x0000185C
    // _021EE9F8: .word 0x00020100
    // TODO: decompile
}




void ov18_021EE9FC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EEA38 ; =0x00020100
    // ldr r1, _021EEA3C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #0xa
    // mov r3, #0x14
    // bl ov18_021F9648
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021EEA38: .word 0x00020100
    // _021EEA3C: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EEA40(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EEA7C ; =0x00020100
    // ldr r1, _021EEA80 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #0xb
    // mov r3, #0x14
    // bl ov18_021F9648
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _021EEA7C: .word 0x00020100
    // _021EEA80: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EEA84(void) {
    GetDexHeightMsgBank();
    NewMsgDataFromNarc(0, 0x1b, r0, 0x25);
    // str r0, [sp, #0xc]
    NewString_ReadMsgData(r7);
    NewString_ReadMsgData(0);
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // add r4, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // add r0, r4, r0
    ov18_021F95FC((r6 << 4), r0);
    String_Delete(r5);
    // ldr r0, [sp, #0xc]
    DestroyMsgData();
}




void ov18_021EEAE4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r3, #0
    // str r1, [sp, #0x10]
    // add r4, #0xc
    // lsl r6, r0, #4
    // add r0, r4, r6
    // mov r1, #0
    // add r7, r2, #0
    // str r3, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // mov r0, #4
    // str r0, [sp]
    // mov r1, #0
    // lsl r2, r7, #2
    // add r3, r5, r2
    // ldr r0, _021EEB2C ; =0x00020100
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, _021EEB30 ; =0x00001032
    // ldr r1, [sp, #0x10]
    // ldrh r2, [r3, r2]
    // ldr r3, [sp, #0x14]
    // add r0, r5, #0
    // bl ov18_021EEA84
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EEB2C: .word 0x00020100
    // _021EEB30: .word 0x00001032
    // TODO: decompile
}




void ov18_021EEB34(void) {
    GetDexWeightMsgBank();
    NewMsgDataFromNarc(0, 0x1b, r0, 0x25);
    // str r0, [sp, #0xc]
    NewString_ReadMsgData(r7);
    NewString_ReadMsgData(0);
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // add r4, #0xc
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // ldr r2, [sp, #0x28]
    // str r0, [sp, #8]
    // ldr r3, [sp, #0x2c]
    // add r0, r4, r0
    ov18_021F95FC((r6 << 4), r0);
    String_Delete(r5);
    // ldr r0, [sp, #0xc]
    DestroyMsgData();
}




void ov18_021EEB94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // add r0, r3, #0
    // str r1, [sp, #0x10]
    // add r4, #0xc
    // lsl r6, r0, #4
    // add r0, r4, r6
    // mov r1, #0
    // add r7, r2, #0
    // str r3, [sp, #0x14]
    // bl FillWindowPixelBuffer
    // mov r0, #4
    // str r0, [sp]
    // mov r1, #0
    // lsl r2, r7, #2
    // add r3, r5, r2
    // ldr r0, _021EEBDC ; =0x00020100
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r2, _021EEBE0 ; =0x00001032
    // ldr r1, [sp, #0x10]
    // ldrh r2, [r3, r2]
    // ldr r3, [sp, #0x14]
    // add r0, r5, #0
    // bl ov18_021EEB34
    // add r0, r4, r6
    // bl ScheduleWindowCopyToVram
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EEBDC: .word 0x00020100
    // _021EEBE0: .word 0x00001032
    // TODO: decompile
}




void ov18_021EEBE4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _021EEC28 ; =0x0000185C
    // ldrb r0, [r6, r0]
    // bl LanguageToDexFlag
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EEC2C ; =0x00020100
    // ldr r1, _021EEC30 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // add r2, #0x7a
    // mov r3, #0x38
    // bl ov18_021F9648
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EEC28: .word 0x0000185C
    // _021EEC2C: .word 0x00020100
    // _021EEC30: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EEC34(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r5, #0
    // lsl r0, r6, #4
    // str r1, [sp, #0x14]
    // add r7, #0xc
    // str r0, [sp, #0x18]
    // add r0, r7, r0
    // mov r1, #0
    // add r4, r3, #0
    // bl FillWindowPixelBuffer
    // cmp r4, #1
    // bne _021EEC58
    // mov r4, #0
    // b _021EEC5A
    // mov r4, #1
    // ldr r0, _021EECA4 ; =0x00001858
    // ldr r1, [sp, #0x14]
    // ldrb r0, [r5, r0]
    // bl Pokedex_ConvertToCurrentDexNo
    // add r2, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x66
    // str r4, [sp, #4]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // ldr r0, _021EECA8 ; =0x00020100
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, _021EECAC ; =0x0000065C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // mov r3, #9
    // bl ov18_021EE3AC
    // ldr r0, [sp, #0x18]
    // add r0, r7, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021EECA4: .word 0x00001858
    // _021EECA8: .word 0x00020100
    // _021EECAC: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EECB0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // add r5, r6, #0
    // add r5, #0xc
    // lsl r4, r2, #4
    // add r7, r1, #0
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _021EECF8 ; =0x0000185C
    // add r0, r7, #0
    // ldrb r1, [r6, r1]
    // mov r2, #0x25
    // bl ov18_021E590C
    // add r6, r0, #0
    // mov r2, #0
    // ldr r0, _021EECFC ; =0x00020100
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, r4
    // add r1, r6, #0
    // add r3, r2, #0
    // str r2, [sp, #8]
    // bl ov18_021F95FC
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021EECF8: .word 0x0000185C
    // _021EECFC: .word 0x00020100
    // TODO: decompile
}




void ov18_021EED00(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r5, #0
    // lsl r4, r3, #4
    // add r6, #0xc
    // str r1, [sp, #0xc]
    // add r7, r2, #0
    // add r0, r6, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // lsl r0, r7, #2
    // add r1, r5, r0
    // ldr r0, _021EED64 ; =0x00001032
    // ldrh r0, [r1, r0]
    // ldr r1, _021EED68 ; =0x0000185C
    // cmp r0, #2
    // bne _021EED32
    // ldrb r1, [r5, r1]
    // ldr r0, [sp, #0xc]
    // mov r2, #0x25
    // bl ov18_021E595C
    // b _021EED3C
    // ldrb r1, [r5, r1]
    // mov r0, #0
    // mov r2, #0x25
    // bl ov18_021E595C
    // add r5, r0, #0
    // mov r3, #0
    // ldr r0, _021EED6C ; =0x00020100
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r0, r6, r4
    // add r1, r5, #0
    // mov r2, #0x7c
    // bl ov18_021F95FC
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r6, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EED64: .word 0x00001032
    // _021EED68: .word 0x0000185C
    // _021EED6C: .word 0x00020100
    // TODO: decompile
}




void ov18_021EED70(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _021EEE30 ; =0x0000056C
    // add r4, r1, #0
    // add r0, r5, r0
    // add r6, r2, #0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _021EEE34 ; =0x0000058C
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _021EEE38 ; =0x0000055C
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _021EEE3C ; =0x0000057C
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _021EEE40 ; =0x0000059C
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _021EEE44 ; =0x000005AC
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _021EEE48 ; =0x000005BC
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _021EEE4C ; =0x000005CC
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _021EEE50 ; =0x000005DC
    // add r0, r5, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // cmp r4, #0
    // beq _021EEE2E
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0x55
    // bl ov18_021EE984
    // ldr r0, _021EEE54 ; =0x0000185C
    // ldrb r0, [r5, r0]
    // cmp r0, #2
    // bne _021EEE02
    // add r0, r5, #0
    // mov r1, #0x56
    // bl ov18_021EE9FC
    // add r0, r5, #0
    // mov r1, #0x58
    // bl ov18_021EEA40
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0x57
    // bl ov18_021EEAE4
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0x59
    // bl ov18_021EEB94
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // mov r1, #0x5a
    // bl ov18_021EEBE4
    // ldr r3, _021EEE54 ; =0x0000185C
    // add r0, r5, #0
    // ldrb r3, [r5, r3]
    // add r1, r4, #0
    // mov r2, #0x5b
    // bl ov18_021EEC34
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x5c
    // bl ov18_021EECB0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0x5d
    // bl ov18_021EED00
    // pop {r4, r5, r6, pc}
    // _021EEE30: .word 0x0000056C
    // _021EEE34: .word 0x0000058C
    // _021EEE38: .word 0x0000055C
    // _021EEE3C: .word 0x0000057C
    // _021EEE40: .word 0x0000059C
    // _021EEE44: .word 0x000005AC
    // _021EEE48: .word 0x000005BC
    // _021EEE4C: .word 0x000005CC
    // _021EEE50: .word 0x000005DC
    // _021EEE54: .word 0x0000185C
    // TODO: decompile
}




void ov18_021EEE58(void) {
    // push {r4, lr}
    // ldr r1, _021EEE80 ; =ov18_021F9FDC
    // add r4, r0, #0
    // mov r2, #0x65
    // bl ov18_021EE35C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021EEED0
    // add r0, r4, #0
    // bl ov18_021EF45C
    // add r0, r4, #0
    // bl ov18_021EF528
    // add r0, r4, #0
    // bl ov18_021EEE84
    // pop {r4, pc}
    // _021EEE80: .word ov18_021F9FDC
    // TODO: decompile
}




void ov18_021EEE84(void) {
    // add r2, r4, r2
    sub_02019A60(*((u32*)(r0 + 8)), 6, (0x47 << 2));
    // add r2, r4, r2
    sub_02019A60(*((u32*)(r4 + 8)), 6, (0x4b << 2));
    // add r2, r4, r2
    sub_02019A60(*((u32*)(r4 + 8)), 6, (0x4f << 2));
    // add r2, r4, r2
    sub_02019A60(*((u32*)(r4 + 8)), 7, (0x47 << 2));
    // add r2, r4, r2
    sub_02019A60(*((u32*)(r4 + 8)), 7, (0x4f << 2));
}




void ov18_021EEED0(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // add r5, r4, #0
    // add r5, #0xc
    // add r6, r1, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // cmp r6, #0xa
    // bls _021EEEEA
    // b _021EF1CE
    // add r0, r6, r6
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EEEF6: ; jump table
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xc
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #0x16
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xd
    // mov r3, #0x70
    // bl ov18_021F9648
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xe
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r2, _021EF1E0 ; =0x0000102C
    // mov r0, #0x66
    // lsl r0, r0, #4
    // ldrh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // mov r1, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r0, #0x70
    // str r0, [sp]
    // mov r0, #0x16
    // str r0, [sp, #4]
    // mov r2, #0
    // ldr r0, _021EF1D8 ; =0x00020100
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r1, _021EF1DC ; =0x0000065C
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // mov r3, #0xf
    // bl ov18_021EE3AC
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xc
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #0x16
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x10
    // mov r3, #0x70
    // bl ov18_021F9648
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xc
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #0x16
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x11
    // mov r3, #0x70
    // bl ov18_021F9648
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xc
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #0x16
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x12
    // mov r3, #0x70
    // bl ov18_021F9648
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xc
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #0x16
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x14
    // mov r3, #0x70
    // bl ov18_021F9648
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xc
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #0x16
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x13
    // mov r3, #0x70
    // bl ov18_021F9648
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xc
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r2, #0x16
    // str r2, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r3, #0x70
    // bl ov18_021F9648
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xc
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #0x16
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x15
    // mov r3, #0x70
    // bl ov18_021F9648
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0xc
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #0x16
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x19
    // mov r3, #0x70
    // bl ov18_021F9648
    // b _021EF1CE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x17
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r0, #0x16
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021EF1D8 ; =0x00020100
    // ldr r1, _021EF1DC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r1]
    // add r0, r5, #0
    // mov r2, #0x18
    // mov r3, #0x70
    // bl ov18_021F9648
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _021EF1D8: .word 0x00020100
    // _021EF1DC: .word 0x0000065C
    // _021EF1E0: .word 0x0000102C
    // TODO: decompile
}




void ov18_021EF1E4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF218 ; =0x00020100
    // ldr r1, _021EF21C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #0x1a
    // mov r3, #0x24
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EF218: .word 0x00020100
    // _021EF21C: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EF220(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF254 ; =0x00020100
    // ldr r1, _021EF258 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #0x1b
    // mov r3, #0x14
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EF254: .word 0x00020100
    // _021EF258: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EF25C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF290 ; =0x00020100
    // ldr r1, _021EF294 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #0x1c
    // mov r3, #0x14
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EF290: .word 0x00020100
    // _021EF294: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EF298(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF2CC ; =0x00020100
    // ldr r1, _021EF2D0 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #0x1d
    // mov r3, #0x14
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EF2CC: .word 0x00020100
    // _021EF2D0: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EF2D4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF308 ; =0x00020100
    // ldr r1, _021EF30C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #0x1e
    // mov r3, #0x14
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EF308: .word 0x00020100
    // _021EF30C: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EF310(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF344 ; =0x00020100
    // ldr r1, _021EF348 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #0x1f
    // mov r3, #0x14
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EF344: .word 0x00020100
    // _021EF348: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EF34C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF380 ; =0x00020100
    // ldr r1, _021EF384 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r1]
    // add r0, r5, r4
    // mov r2, #0x20
    // mov r3, #0x18
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EF380: .word 0x00020100
    // _021EF384: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EF388(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // add r4, r0, #0
    // str r0, [sp, #0x1c]
    // mov r0, #0x25
    // lsl r6, r1, #4
    // str r0, [sp]
    // str r2, [sp, #0x20]
    // ldr r1, _021EF450 ; =0x00000854
    // ldr r0, [sp, #0x1c]
    // mov r2, #1
    // ldr r0, [r0, r1]
    // mov r1, #4
    // add r3, sp, #0x2c
    // add r4, #0xc
    // bl GfGfxLoader_GetCharDataFromOpenNarc
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // mov r5, #0
    // ldr r7, [r0, #0x14]
    // str r5, [sp, #0x24]
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // mov r0, #8
    // str r0, [sp, #0x10]
    // mov r1, #0x31
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #6
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r4, r6
    // add r1, r7, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // mov r0, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #8
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r1, #0xca
    // str r0, [sp, #0x14]
    // mov r0, #0xff
    // lsl r1, r1, #4
    // mov r2, #0
    // str r0, [sp, #0x18]
    // add r0, r4, r6
    // add r1, r7, r1
    // add r3, r2, #0
    // bl BlitBitmapRect
    // ldr r0, [sp, #0x24]
    // add r5, #8
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // cmp r0, #8
    // blo _021EF3B4
    // ldr r0, [sp, #0x28]
    // bl Heap_Free
    // add r0, r4, r6
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EF454 ; =0x00020100
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // lsr r3, r5, #0x1f
    // add r3, r5, r3
    // ldr r2, _021EF458 ; =0x0000065C
    // ldr r1, [sp, #0x1c]
    // add r0, r4, r6
    // ldr r1, [r1, r2]
    // ldr r2, [sp, #0x20]
    // asr r3, r3, #1
    // bl ov18_021F9648
    // add r0, r4, r6
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EF450: .word 0x00000854
    // _021EF454: .word 0x00020100
    // _021EF458: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EF45C(void) {
    ov18_021E613C(0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x53 << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x57 << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x5b << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x5f << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x63 << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x67 << 2), 0);
    // add r0, r5, r0
    FillWindowPixelBuffer((0x6b << 2), 0);
    ov18_021EF1E4(r5, 0x14);
    ov18_021EF220(r5, 0x15);
    ov18_021EF25C(r5, 0x16);
    ov18_021EF298(r5, 0x17);
    ov18_021EF2D4(r5, 0x18);
    ov18_021EF310(r5, 0x19);
    ov18_021EF34C(r5, 0x1a);
    ov18_021EF388(r5, 0x11, 0x23);
    ov18_021EF388(r5, 0x12, 0x24);
    ov18_021EF388(r5, 0x13, 0x25);
    // add r5, r5, r0
    ScheduleWindowCopyToVram(r5);
    // add r5, #0x10
}




void ov18_021EF528(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #0x1b
    // bl ov18_021EFBE8
    // add r0, r5, #0
    // mov r1, #0x1c
    // bl ov18_021EFC3C
    // ldr r1, _021EF5CC ; =0x00001870
    // mov r2, #0x1d
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r3, r2, #0
    // bl ov18_021EFC9C
    // ldr r1, _021EF5D0 ; =0x00001874
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // mov r2, #0x1e
    // mov r3, #0x1d
    // bl ov18_021EFC9C
    // ldr r1, _021EF5D4 ; =0x00001850
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // add r1, #0x28
    // ldr r1, [r5, r1]
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // mov r2, #0x1f
    // bl ov18_021EFD00
    // ldr r1, _021EF5D4 ; =0x00001850
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // add r1, #0x2c
    // ldr r1, [r5, r1]
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // mov r2, #0x20
    // bl ov18_021EFD00
    // ldr r1, _021EF5D4 ; =0x00001850
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // add r1, #0x30
    // ldr r1, [r5, r1]
    // lsl r1, r1, #2
    // add r1, r2, r1
    // ldrh r1, [r1, #2]
    // mov r2, #0x21
    // bl ov18_021EFDB4
    // ldr r1, _021EF5D4 ; =0x00001850
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // add r1, #0x34
    // ldr r1, [r5, r1]
    // lsl r1, r1, #2
    // add r1, r2, r1
    // ldrh r1, [r1, #2]
    // mov r2, #0x22
    // bl ov18_021EFDB4
    // add r0, r5, #0
    // mov r1, #0x23
    // bl ov18_021EFE70
    // mov r0, #0x6f
    // lsl r0, r0, #2
    // mov r4, #0x1b
    // add r5, r5, r0
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0x23
    // bls _021EF5BA
    // pop {r3, r4, r5, pc}
    // nop
    // _021EF5CC: .word 0x00001870
    // _021EF5D0: .word 0x00001874
    // _021EF5D4: .word 0x00001850
    // TODO: decompile
}




void ov18_021EF5D8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r5, r0, #0
    // bl ov18_021E613C
    // mov r0, #0x93
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0x9f
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xa3
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xa7
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xab
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF75C ; =0x00020100
    // ldr r1, _021EF760 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x93
    // lsl r0, r0, #2
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x1a
    // mov r3, #0x2c
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EF75C ; =0x00020100
    // ldr r1, _021EF760 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x9b
    // lsl r0, r0, #2
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x29
    // mov r3, #0x2c
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EF75C ; =0x00020100
    // ldr r1, _021EF760 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x9f
    // lsl r0, r0, #2
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x2a
    // mov r3, #0x2c
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EF75C ; =0x00020100
    // ldr r1, _021EF760 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xa3
    // lsl r0, r0, #2
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x2b
    // mov r3, #0x2c
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EF75C ; =0x00020100
    // ldr r1, _021EF760 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xa7
    // lsl r0, r0, #2
    // mov r2, #0x2c
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // add r3, r2, #0
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EF75C ; =0x00020100
    // ldr r1, _021EF760 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xab
    // lsl r0, r0, #2
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x2d
    // mov r3, #0x2c
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EF75C ; =0x00020100
    // ldr r1, _021EF760 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xaf
    // lsl r0, r0, #2
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x2e
    // mov r3, #0x2c
    // bl ov18_021F9648
    // add r0, r5, #0
    // mov r1, #0x11
    // mov r2, #0x27
    // bl ov18_021EF388
    // add r0, r5, #0
    // mov r1, #0x13
    // mov r2, #0x28
    // bl ov18_021EF388
    // add r0, r5, #0
    // mov r1, #0x25
    // bl ov18_021EFBE8
    // mov r0, #0x93
    // lsl r0, r0, #2
    // mov r4, #0x24
    // add r5, r5, r0
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0x2b
    // bls _021EF748
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _021EF75C: .word 0x00020100
    // _021EF760: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EF764(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r1, #0
    // add r5, r0, #0
    // bl ov18_021E613C
    // ldr r0, _021EF834 ; =0x0000041C
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _021EF838 ; =0x0000043C
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF83C ; =0x00020100
    // ldr r1, _021EF840 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _021EF834 ; =0x0000041C
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x1b
    // mov r3, #0x18
    // bl ov18_021F9648
    // mov r4, #0
    // add r0, r4, #0
    // bl ov18_021E7698
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // cmp r4, #0x1a
    // bne _021EF7B6
    // mov r6, #0x71
    // b _021EF7BA
    // add r6, r4, #0
    // add r6, #0x45
    // add r0, r7, #0
    // mov r1, #7
    // bl _s32_div_f
    // str r1, [sp, #0x10]
    // add r0, r7, #0
    // mov r1, #7
    // bl _s32_div_f
    // lsl r0, r0, #5
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EF83C ; =0x00020100
    // ldr r3, [sp, #0x10]
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, _021EF840 ; =0x0000065C
    // ldr r0, _021EF838 ; =0x0000043C
    // lsl r3, r3, #5
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // add r2, r6, #0
    // add r3, #0x18
    // bl ov18_021F9648
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0x1b
    // blo _021EF7A4
    // add r0, r5, #0
    // mov r1, #0x11
    // mov r2, #0x27
    // bl ov18_021EF388
    // add r0, r5, #0
    // mov r1, #0x13
    // mov r2, #0x28
    // bl ov18_021EF388
    // add r0, r5, #0
    // mov r1, #0x42
    // bl ov18_021EFC3C
    // ldr r0, _021EF834 ; =0x0000041C
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _021EF838 ; =0x0000043C
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _021EF844 ; =0x0000042C
    // add r0, r5, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021EF834: .word 0x0000041C
    // _021EF838: .word 0x0000043C
    // _021EF83C: .word 0x00020100
    // _021EF840: .word 0x0000065C
    // _021EF844: .word 0x0000042C
    // TODO: decompile
}




void ov18_021EF848(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r6, r0, #0
    // bl ov18_021E613C
    // mov r0, #0xb3
    // lsl r0, r0, #2
    // add r0, r6, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF908 ; =0x00020100
    // mov r2, #0x1c
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, _021EF90C ; =0x0000065C
    // mov r0, #0xb3
    // lsl r0, r0, #2
    // ldr r1, [r6, r1]
    // add r0, r6, r0
    // add r3, r2, #0
    // bl ov18_021F9648
    // mov r0, #0xbf
    // lsl r0, r0, #2
    // ldr r5, _021EF910 ; =ov18_021F9DE4 + 7 * 8 + 2
    // mov r7, #0x2f
    // add r4, r6, r0
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EF908 ; =0x00020100
    // add r2, r5, #0
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, _021EF90C ; =0x0000065C
    // sub r2, #0x5e
    // ldrh r2, [r2]
    // ldr r1, [r6, r1]
    // add r0, r4, #0
    // mov r3, #0x20
    // bl ov18_021F9648
    // add r7, r7, #1
    // add r4, #0x10
    // add r5, r5, #2
    // cmp r7, #0x40
    // bls _021EF88A
    // add r0, r6, #0
    // mov r1, #0x11
    // mov r2, #0x27
    // bl ov18_021EF388
    // add r0, r6, #0
    // mov r1, #0x13
    // mov r2, #0x28
    // bl ov18_021EF388
    // ldr r1, _021EF914 ; =0x00001870
    // add r0, r6, #0
    // ldr r1, [r6, r1]
    // mov r2, #0x2d
    // mov r3, #0x1d
    // bl ov18_021EFC9C
    // ldr r1, _021EF918 ; =0x00001874
    // add r0, r6, #0
    // ldr r1, [r6, r1]
    // mov r2, #0x2e
    // mov r3, #0x23
    // bl ov18_021EFC9C
    // mov r0, #0xb3
    // lsl r0, r0, #2
    // mov r4, #0x2c
    // add r5, r6, r0
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0x40
    // bls _021EF8F6
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EF908: .word 0x00020100
    // _021EF90C: .word 0x0000065C
    // _021EF910: .word ov18_021F9DE4 + 7 * 8 + 2
    // _021EF914: .word 0x00001870
    // _021EF918: .word 0x00001874
    // TODO: decompile
}




void ov18_021EF91C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r5, r0, #0
    // bl ov18_021E613C
    // ldr r0, _021EF9A4 ; =0x0000044C
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EF9A8 ; =0x00020100
    // ldr r1, _021EF9AC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _021EF9A4 ; =0x0000044C
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x1d
    // mov r3, #0x14
    // bl ov18_021F9648
    // add r0, r5, #0
    // mov r1, #0x11
    // mov r2, #0x27
    // bl ov18_021EF388
    // add r0, r5, #0
    // mov r1, #0x13
    // mov r2, #0x28
    // bl ov18_021EF388
    // ldr r1, _021EF9B0 ; =0x00001850
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // add r1, #0x28
    // ldr r1, [r5, r1]
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // mov r2, #0x45
    // bl ov18_021EFD00
    // ldr r1, _021EF9B0 ; =0x00001850
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // add r1, #0x2c
    // ldr r1, [r5, r1]
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // mov r2, #0x46
    // bl ov18_021EFD00
    // ldr r0, _021EF9A4 ; =0x0000044C
    // mov r4, #0x44
    // add r5, r5, r0
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0x46
    // bls _021EF992
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _021EF9A4: .word 0x0000044C
    // _021EF9A8: .word 0x00020100
    // _021EF9AC: .word 0x0000065C
    // _021EF9B0: .word 0x00001850
    // TODO: decompile
}




void ov18_021EF9B4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r5, r0, #0
    // bl ov18_021E613C
    // ldr r0, _021EFA40 ; =0x0000047C
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EFA44 ; =0x00020100
    // ldr r1, _021EFA48 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _021EFA40 ; =0x0000047C
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x1e
    // mov r3, #0x18
    // bl ov18_021F9648
    // add r0, r5, #0
    // mov r1, #0x11
    // mov r2, #0x27
    // bl ov18_021EF388
    // add r0, r5, #0
    // mov r1, #0x13
    // mov r2, #0x28
    // bl ov18_021EF388
    // ldr r1, _021EFA4C ; =0x00001850
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // add r1, #0x30
    // ldr r1, [r5, r1]
    // lsl r1, r1, #2
    // add r1, r2, r1
    // ldrh r1, [r1, #2]
    // mov r2, #0x48
    // bl ov18_021EFDB4
    // ldr r1, _021EFA4C ; =0x00001850
    // add r0, r5, #0
    // ldr r2, [r5, r1]
    // add r1, #0x34
    // ldr r1, [r5, r1]
    // lsl r1, r1, #2
    // add r1, r2, r1
    // ldrh r1, [r1, #2]
    // mov r2, #0x49
    // bl ov18_021EFDB4
    // ldr r0, _021EFA40 ; =0x0000047C
    // mov r4, #0x47
    // add r5, r5, r0
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0x49
    // bls _021EFA2E
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _021EFA40: .word 0x0000047C
    // _021EFA44: .word 0x00020100
    // _021EFA48: .word 0x0000065C
    // _021EFA4C: .word 0x00001850
    // TODO: decompile
}




void ov18_021EFA50(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r5, r0, #0
    // bl ov18_021E613C
    // ldr r0, _021EFB68 ; =0x000004AC
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _021EFB6C ; =0x000004CC
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _021EFB70 ; =0x000004DC
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _021EFB74 ; =0x000004EC
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _021EFB78 ; =0x000004FC
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EFB7C ; =0x00020100
    // ldr r1, _021EFB80 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _021EFB68 ; =0x000004AC
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x1f
    // mov r3, #0x18
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EFB7C ; =0x00020100
    // ldr r1, _021EFB80 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _021EFB6C ; =0x000004CC
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x41
    // mov r3, #0x1c
    // bl ov18_021F9648
    // ldr r0, _021EFB84 ; =0x00001860
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _021EFAF4
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EFB7C ; =0x00020100
    // ldr r1, _021EFB80 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _021EFB70 ; =0x000004DC
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x42
    // mov r3, #0x1c
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EFB7C ; =0x00020100
    // ldr r1, _021EFB80 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _021EFB74 ; =0x000004EC
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x43
    // mov r3, #0x1c
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EFB7C ; =0x00020100
    // ldr r1, _021EFB80 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _021EFB78 ; =0x000004FC
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0x44
    // mov r3, #0x1c
    // bl ov18_021F9648
    // add r0, r5, #0
    // mov r1, #0x11
    // mov r2, #0x27
    // bl ov18_021EF388
    // add r0, r5, #0
    // mov r1, #0x13
    // mov r2, #0x28
    // bl ov18_021EF388
    // add r0, r5, #0
    // mov r1, #0x4b
    // bl ov18_021EFE70
    // ldr r0, _021EFB68 ; =0x000004AC
    // mov r4, #0x4a
    // add r5, r5, r0
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0x4f
    // bls _021EFB56
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _021EFB68: .word 0x000004AC
    // _021EFB6C: .word 0x000004CC
    // _021EFB70: .word 0x000004DC
    // _021EFB74: .word 0x000004EC
    // _021EFB78: .word 0x000004FC
    // _021EFB7C: .word 0x00020100
    // _021EFB80: .word 0x0000065C
    // _021EFB84: .word 0x00001860
    // TODO: decompile
}




void ov18_021EFB88(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r4, r0, #0
    // bl ov18_021E613C
    // ldr r0, _021EFBDC ; =0x0000050C
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021EFBE0 ; =0x00020100
    // ldr r1, _021EFBE4 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r0, _021EFBDC ; =0x0000050C
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // mov r2, #0x20
    // mov r3, #0x18
    // bl ov18_021F9648
    // add r0, r4, #0
    // mov r1, #0x11
    // mov r2, #0x27
    // bl ov18_021EF388
    // add r0, r4, #0
    // mov r1, #0x13
    // mov r2, #0x28
    // bl ov18_021EF388
    // ldr r0, _021EFBDC ; =0x0000050C
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, pc}
    // _021EFBDC: .word 0x0000050C
    // _021EFBE0: .word 0x00020100
    // _021EFBE4: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EFBE8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, r4
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EFC30 ; =0x00020100
    // ldr r2, _021EFC34 ; =0x00001868
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    // ldr r1, _021EFC38 ; =0x0000065C
    // lsl r4, r3, #3
    // ldr r2, [r6, r2]
    // lsr r3, r4, #0x1f
    // add r3, r4, r3
    // ldr r1, [r6, r1]
    // add r2, #0x29
    // asr r3, r3, #1
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EFC30: .word 0x00020100
    // _021EFC34: .word 0x00001868
    // _021EFC38: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EFC3C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r7, r5, #0
    // lsl r6, r1, #4
    // add r7, #0xc
    // add r0, r7, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _021EFC90 ; =0x0000186C
    // ldr r4, [r5, r0]
    // cmp r4, #0x1a
    // bne _021EFC5C
    // mov r4, #0x71
    // b _021EFC5E
    // add r4, #0x45
    // add r0, r7, r6
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EFC94 ; =0x00020100
    // add r2, r4, #0
    // str r0, [sp, #8]
    // mov r0, #2
    // lsl r4, r3, #3
    // str r0, [sp, #0xc]
    // ldr r1, _021EFC98 ; =0x0000065C
    // lsr r3, r4, #0x1f
    // add r3, r4, r3
    // ldr r1, [r5, r1]
    // add r0, r7, r6
    // asr r3, r3, #1
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EFC90: .word 0x0000186C
    // _021EFC94: .word 0x00020100
    // _021EFC98: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EFC9C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // add r5, r7, #0
    // add r5, #0xc
    // lsl r4, r2, #4
    // str r1, [sp, #0x10]
    // add r0, r5, r4
    // mov r1, #0
    // add r6, r3, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // bne _021EFCCA
    // add r0, r5, r4
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r6, r0, #1
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, _021EFCF4 ; =0x00020100
    // lsl r3, r2, #1
    // ldr r2, _021EFCF8 ; =ov18_021F9DC0
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, _021EFCFC ; =0x0000065C
    // ldrh r2, [r2, r3]
    // ldr r1, [r7, r1]
    // add r0, r5, r4
    // add r3, r6, #0
    // bl ov18_021F9648
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021EFCF4: .word 0x00020100
    // _021EFCF8: .word ov18_021F9DC0
    // _021EFCFC: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EFD00(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r4, _021EFDA4 ; =0x000003E7
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r1, r4
    // bne _021EFD12
    // add r4, #0xbd
    // b _021EFD26
    // ldr r0, _021EFDA8 ; =0x00002710
    // mul r0, r1
    // mov r1, #0xfe
    // bl _u32_div_f
    // add r0, r0, #5
    // mov r1, #0xa
    // bl _u32_div_f
    // add r4, r0, #0
    // add r7, r5, #0
    // lsl r0, r6, #4
    // add r7, #0xc
    // str r0, [sp, #0x14]
    // add r0, r7, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // mov r1, #0xc
    // bl _u32_div_f
    // mov r1, #0
    // add r2, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x66
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r3, #3
    // bl BufferIntegerAsString
    // add r0, r4, #0
    // mov r1, #0xc
    // bl _u32_div_f
    // mov r3, #2
    // add r2, r1, #0
    // mov r0, #0x66
    // str r3, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl BufferIntegerAsString
    // ldr r0, [sp, #0x14]
    // add r0, r7, r0
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, _021EFDAC ; =0x00020100
    // ldr r1, _021EFDB0 ; =0x0000065C
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r6, #0
    // mov r3, #0xaf
    // bl ov18_021EE3AC
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EFDA4: .word 0x000003E7
    // _021EFDA8: .word 0x00002710
    // _021EFDAC: .word 0x00020100
    // _021EFDB0: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EFDB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, _021EFE58 ; =0x0000270F
    // add r4, r2, #0
    // cmp r1, r0
    // bne _021EFDC6
    // ldr r6, _021EFE5C ; =0x00018696
    // b _021EFDD6
    // ldr r0, _021EFE60 ; =0x00035D2E
    // mul r0, r1
    // ldr r1, _021EFE64 ; =0x0000C350
    // add r0, r0, r1
    // lsl r1, r1, #1
    // bl _u32_div_f
    // add r6, r0, #0
    // add r7, r5, #0
    // lsl r0, r4, #4
    // add r7, #0xc
    // str r0, [sp, #0x14]
    // add r0, r7, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // mov r1, #0
    // add r2, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x66
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r3, #4
    // bl BufferIntegerAsString
    // add r0, r6, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // mov r0, #2
    // add r2, r1, #0
    // str r0, [sp]
    // mov r1, #1
    // mov r0, #0x66
    // str r1, [sp, #4]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r3, r1, #0
    // bl BufferIntegerAsString
    // ldr r0, [sp, #0x14]
    // add r0, r7, r0
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, _021EFE68 ; =0x00020100
    // ldr r1, _021EFE6C ; =0x0000065C
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #0x26
    // bl ov18_021EE3AC
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EFE58: .word 0x0000270F
    // _021EFE5C: .word 0x00018696
    // _021EFE60: .word 0x00035D2E
    // _021EFE64: .word 0x0000C350
    // _021EFE68: .word 0x00020100
    // _021EFE6C: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EFE70(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r6, #0
    // lsl r4, r1, #4
    // add r5, #0xc
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, r4
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021EFEB8 ; =0x00020100
    // ldr r2, _021EFEBC ; =0x00001888
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, r4
    // ldr r1, _021EFEC0 ; =0x0000065C
    // lsl r4, r3, #3
    // ldr r2, [r6, r2]
    // lsr r3, r4, #0x1f
    // add r3, r4, r3
    // ldr r1, [r6, r1]
    // add r2, #0x41
    // asr r3, r3, #1
    // bl ov18_021F9648
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _021EFEB8: .word 0x00020100
    // _021EFEBC: .word 0x00001888
    // _021EFEC0: .word 0x0000065C
    // TODO: decompile
}




void ov18_021EFEC4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r0, #0x1c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0x2c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0x3c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0x4c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0x5c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0x6c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0x7c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // mov r1, #1
    // bl ov18_021EF1E4
    // add r0, r4, #0
    // mov r1, #2
    // bl ov18_021EF220
    // add r0, r4, #0
    // mov r1, #3
    // bl ov18_021EF25C
    // add r0, r4, #0
    // mov r1, #4
    // bl ov18_021EF298
    // add r0, r4, #0
    // mov r1, #5
    // bl ov18_021EF2D4
    // add r0, r4, #0
    // mov r1, #6
    // bl ov18_021EF310
    // add r0, r4, #0
    // mov r1, #7
    // bl ov18_021EF34C
    // add r0, r4, #0
    // mov r1, #8
    // bl ov18_021EFBE8
    // add r0, r4, #0
    // mov r1, #9
    // bl ov18_021EFC3C
    // ldr r1, _021EFFE0 ; =0x00001870
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // mov r2, #0xa
    // mov r3, #0x1d
    // bl ov18_021EFC9C
    // ldr r1, _021EFFE4 ; =0x00001874
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // mov r2, #0xb
    // mov r3, #0x1d
    // bl ov18_021EFC9C
    // ldr r1, _021EFFE8 ; =0x00001850
    // add r0, r4, #0
    // ldr r2, [r4, r1]
    // add r1, #0x28
    // ldr r1, [r4, r1]
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // mov r2, #0xc
    // bl ov18_021EFD00
    // ldr r1, _021EFFE8 ; =0x00001850
    // add r0, r4, #0
    // ldr r2, [r4, r1]
    // add r1, #0x2c
    // ldr r1, [r4, r1]
    // lsl r1, r1, #2
    // ldrh r1, [r2, r1]
    // mov r2, #0xd
    // bl ov18_021EFD00
    // ldr r1, _021EFFE8 ; =0x00001850
    // add r0, r4, #0
    // ldr r2, [r4, r1]
    // add r1, #0x30
    // ldr r1, [r4, r1]
    // lsl r1, r1, #2
    // add r1, r2, r1
    // ldrh r1, [r1, #2]
    // mov r2, #0xe
    // bl ov18_021EFDB4
    // ldr r1, _021EFFE8 ; =0x00001850
    // add r0, r4, #0
    // ldr r2, [r4, r1]
    // add r1, #0x34
    // ldr r1, [r4, r1]
    // lsl r1, r1, #2
    // add r1, r2, r1
    // ldrh r1, [r1, #2]
    // mov r2, #0xf
    // bl ov18_021EFDB4
    // add r0, r4, #0
    // mov r1, #0x10
    // bl ov18_021EFE70
    // mov r5, #1
    // add r4, #0x1c
    // add r0, r4, #0
    // bl CopyWindowPixelsToVram_TextMode
    // add r5, r5, #1
    // add r4, #0x10
    // cmp r5, #0x10
    // bls _021EFFD0
    // pop {r3, r4, r5, pc}
    // _021EFFE0: .word 0x00001870
    // _021EFFE4: .word 0x00001874
    // _021EFFE8: .word 0x00001850
    // TODO: decompile
}




void ov18_021EFFEC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #8]
    // mov r1, #0xf
    // bl sub_02019B08
    // add r0, r4, #0
    // mov r1, #0x5f
    // mov r2, #0
    // bl ov18_021EE44C
    // add r0, r4, #0
    // mov r1, #0x60
    // mov r2, #1
    // bl ov18_021EE44C
    // ldr r1, _021F0060 ; =0x0000185D
    // ldr r2, _021F0064 ; =0x0000102C
    // ldrb r1, [r4, r1]
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // add r1, #0x61
    // bl ov18_021EE520
    // ldr r1, _021F0060 ; =0x0000185D
    // ldr r2, _021F0068 ; =0x0000102E
    // ldrb r1, [r4, r1]
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // add r1, #0x63
    // bl ov18_021EE520
    // add r0, r4, #0
    // mov r1, #0x5f
    // bl ov18_021F006C
    // add r0, r4, #0
    // mov r1, #0x60
    // bl ov18_021F006C
    // ldr r1, _021F0060 ; =0x0000185D
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // add r1, #0x61
    // bl ov18_021F006C
    // ldr r1, _021F0060 ; =0x0000185D
    // add r0, r4, #0
    // ldrb r1, [r4, r1]
    // add r1, #0x63
    // bl ov18_021F006C
    // ldr r1, _021F0060 ; =0x0000185D
    // mov r0, #1
    // ldrb r2, [r4, r1]
    // eor r0, r2
    // strb r0, [r4, r1]
    // pop {r4, pc}
    // _021F0060: .word 0x0000185D
    // _021F0064: .word 0x0000102C
    // _021F0068: .word 0x0000102E
    // TODO: decompile
}




void ov18_021F006C(void) {
    // str r0, [sp]
    sub_02019B08(*((u32*)(r0 + 8)), 0xf);
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // add r0, #0xc
    // str r0, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #0x10]
    // add r0, r1, r0
    GetWindowBaseTile((r4 << 4));
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    GetWindowX();
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    GetWindowY();
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    GetWindowWidth();
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    GetWindowHeight();
    // str r0, [sp, #4]
    // mov ip, r0
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r0, r0, r2
    // mov r1, ip
    // str r0, [sp, #8]
    // ldr r2, [sp, #8]
    // add r2, r2, r3
    // ldrh r3, [r2]
    // and r3, r6
    // add r3, r5, r3
    // add r3, r1, r3
    // add r3, r0, r3
    // strh r3, [r2]
    // mov r0, ip
    // ldr r0, [sp, #4]
    // add r1, r1, r4
    // mov ip, r2
    // ldr r1, [sp]
    // ldr r0, [sp, #0x10]
    // add r0, r1, r0
    CopyWindowPixelsToVram_TextMode((0 + 1), ((0 + 1) + 1), (r7 << 6));
}




void ov18_021F0118(void) {
    // add r5, #0xc
    ScheduleWindowCopyToVram(r0);
    // add r5, #0x10
    // add r4, #0xc
    ClearWindowTilemapAndScheduleTransfer(r0);
    // add r4, #0x10
}




void ov18_021F014C(void) {
}




void ov18_021F0168(void) {
    // str r6, [sp]
    // add r1, #0x11
    sub_020195F4(*((u32*)(r0 + 8)), 0, 2, 0x12);
}




void ov18_021F018C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r5, #1
    // add r7, r0, #0
    // mov r4, #0
    // lsl r5, r5, #0xc
    // add r1, r4, #0
    // ldr r0, [r7, #8]
    // add r1, #0x11
    // bl sub_02019B08
    // add r2, r0, #0
    // ldr r0, _021F01D0 ; =ov18_021F9E4C
    // lsl r1, r4, #3
    // add r0, r0, r1
    // add r0, #0x46
    // ldrh r6, [r0]
    // mov r3, #0
    // add r0, r6, r3
    // add r1, r0, #0
    // orr r1, r5
    // lsl r0, r3, #1
    // strh r1, [r2, r0]
    // add r0, r3, #1
    // lsl r0, r0, #0x10
    // lsr r3, r0, #0x10
    // cmp r3, #0x24
    // blo _021F01AE
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #6
    // blo _021F0196
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F01D0: .word ov18_021F9E4C
    // TODO: decompile
}




void ov18_021F01D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r5, #1
    // add r7, r0, #0
    // mov r4, #0
    // lsl r5, r5, #0xc
    // add r1, r4, #0
    // ldr r0, [r7, #8]
    // add r1, #0x11
    // bl sub_02019B08
    // add r2, r0, #0
    // ldr r0, _021F0218 ; =ov18_021F9EBC
    // lsl r1, r4, #3
    // add r0, r0, r1
    // add r0, #0x56
    // ldrh r6, [r0]
    // mov r3, #0
    // add r0, r6, r3
    // add r1, r0, #0
    // orr r1, r5
    // lsl r0, r3, #1
    // strh r1, [r2, r0]
    // add r0, r3, #1
    // lsl r0, r0, #0x10
    // lsr r3, r0, #0x10
    // cmp r3, #0x24
    // blo _021F01F6
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #6
    // blo _021F01DE
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F0218: .word ov18_021F9EBC
    // TODO: decompile
}




void ov18_021F021C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // ldr r1, _021F03A4 ; =ov18_021F9E4C
    // add r5, r0, #0
    // mov r2, #0xe
    // bl ov18_021EE35C
    // add r0, r5, #0
    // add r0, #0xc
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x2c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x4c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F03A8 ; =0x00020100
    // ldr r1, _021F03AC ; =0x0000065C
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0xc
    // mov r2, #0x8e
    // bl ov18_021F9648
    // ldr r0, _021F03B0 ; =0x000018A2
    // mov r1, #2
    // ldrh r0, [r5, r0]
    // mov r2, #0x25
    // bl ov18_021E590C
    // add r4, r0, #0
    // mov r3, #0
    // ldr r0, _021F03A8 ; =0x00020100
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x2c
    // add r1, r4, #0
    // mov r2, #0x24
    // bl ov18_021F95FC
    // add r0, r4, #0
    // bl String_Delete
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F03B4 ; =0x00050900
    // ldr r1, _021F03AC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x4c
    // mov r2, #0x84
    // mov r3, #0x18
    // bl ov18_021F9648
    // add r0, r5, #0
    // add r0, #0xc
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0x2c
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0x4c
    // bl ScheduleWindowCopyToVram
    // ldr r0, _021F03B8 ; =0x00001860
    // ldr r0, [r5, r0]
    // cmp r0, #1
    // bne _021F0334
    // add r0, r5, #0
    // add r0, #0x5c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x7c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F03BC ; =0x000F0C00
    // ldr r1, _021F03AC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x5c
    // mov r2, #0x41
    // mov r3, #0x1c
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F03BC ; =0x000F0C00
    // ldr r1, _021F03AC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x7c
    // mov r2, #0x42
    // mov r3, #0x1c
    // bl ov18_021F9648
    // add r0, r5, #0
    // add r0, #0x5c
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0x7c
    // bl ScheduleWindowCopyToVram
    // b _021F0364
    // add r0, r5, #0
    // add r0, #0x6c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F03B4 ; =0x00050900
    // ldr r1, _021F03AC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x6c
    // mov r2, #0x41
    // mov r3, #0x1c
    // bl ov18_021F9648
    // add r0, r5, #0
    // add r0, #0x6c
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0x3c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F03A8 ; =0x00020100
    // ldr r1, _021F03AC ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x3c
    // mov r2, #0x80
    // mov r3, #0x38
    // bl ov18_021F9648
    // add r0, r5, #0
    // add r0, #0x3c
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, r5, #0
    // bl ov18_021F03E0
    // add r0, r5, #0
    // bl ov18_021F0428
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _021F03A4: .word ov18_021F9E4C
    // _021F03A8: .word 0x00020100
    // _021F03AC: .word 0x0000065C
    // _021F03B0: .word 0x000018A2
    // _021F03B4: .word 0x00050900
    // _021F03B8: .word 0x00001860
    // _021F03BC: .word 0x000F0C00
    // TODO: decompile
}




void ov18_021F03C0(void) {
    // add r5, #0xc
    ClearWindowTilemapAndScheduleTransfer(r0);
    // add r5, #0x10
    ov18_021EE388(r6);
}




void ov18_021F03E0(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // add r0, #0x1c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F041C ; =0x00020100
    // ldr r2, _021F0420 ; =0x000018C9
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, _021F0424 ; =0x0000065C
    // ldrsb r2, [r4, r2]
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // add r0, #0x1c
    // add r2, #0x81
    // mov r3, #0x1c
    // bl ov18_021F9648
    // add r4, #0x1c
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r4, pc}
    // _021F041C: .word 0x00020100
    // _021F0420: .word 0x000018C9
    // _021F0424: .word 0x0000065C
    // TODO: decompile
}




void ov18_021F0428(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r6, r5, #0
    // mov r4, #0
    // add r6, #0xc
    // add r0, r4, #0
    // add r0, #8
    // lsl r7, r0, #4
    // add r0, r6, r7
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _021F04B4 ; =0x000018CA
    // ldrsb r0, [r5, r0]
    // add r0, r0, r4
    // sub r1, r0, #2
    // bmi _021F0480
    // mov r0, #0x19
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // cmp r1, r0
    // bge _021F0480
    // add r0, r5, #0
    // bl ov18_021F04C0
    // add r3, r0, #0
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, _021F04B8 ; =0x000F0C00
    // add r2, r4, #0
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r1, _021F04BC ; =0x0000065C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r2, #8
    // bl ov18_021EE3AC
    // add r0, r6, r7
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, r6, r7
    // bl GetWindowX
    // str r0, [sp, #0x14]
    // add r0, r6, r7
    // bl GetWindowY
    // add r3, r0, #0
    // ldr r2, [sp, #0x14]
    // add r1, r4, #0
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r5, #8]
    // add r1, #0x11
    // asr r2, r2, #0x18
    // asr r3, r3, #0x18
    // bl sub_020196E8
    // add r4, r4, #1
    // cmp r4, #6
    // blo _021F0434
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F04B4: .word 0x000018CA
    // _021F04B8: .word 0x000F0C00
    // _021F04BC: .word 0x0000065C
    // TODO: decompile
}




void ov18_021F04C0(void) {
    // push {r3, r4, r5, lr}
    // ldr r2, _021F0500 ; =0x000018FC
    // add r4, r0, #0
    // ldr r5, [r4, r2]
    // lsl r3, r1, #2
    // ldr r5, [r5, r3]
    // mov r3, #1
    // mvn r3, r3
    // cmp r5, r3
    // bne _021F04E4
    // sub r2, #0x34
    // ldrsb r0, [r4, r2]
    // cmp r0, #0
    // bne _021F04E0
    // mov r0, #0x86
    // pop {r3, r4, r5, pc}
    // mov r0, #0x87
    // pop {r3, r4, r5, pc}
    // bl ov18_021E8AE0
    // bl MapHeader_GetMapSec
    // add r2, r0, #0
    // mov r0, #0x66
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl BufferLandmarkName
    // mov r0, #0x85
    // pop {r3, r4, r5, pc}
    // nop
    // _021F0500: .word 0x000018FC
    // TODO: decompile
}




void ov18_021F0504(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // mov r4, #0
    // add r5, r0, #0
    // str r1, [sp, #0x14]
    // add r6, sp, #0x18
    // add r7, r4, #0
    // add r1, r4, #0
    // add r2, sp, #0x18
    // ldr r0, [r5, #8]
    // add r1, #0x11
    // add r2, #1
    // add r3, sp, #0x18
    // bl sub_02019B1C
    // ldrsb r0, [r6, r7]
    // cmp r0, #2
    // beq _021F0532
    // cmp r0, #0x14
    // beq _021F0532
    // add r4, r4, #1
    // cmp r4, #6
    // blo _021F0512
    // add r0, r4, #0
    // add r6, r5, #0
    // add r0, #8
    // add r6, #0xc
    // lsl r7, r0, #4
    // add r0, r6, r7
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // ldr r0, [r5, #8]
    // bge _021F0592
    // add r1, r4, #0
    // add r1, #0x11
    // mov r2, #0xa
    // mov r3, #0x14
    // bl sub_020196E8
    // ldr r0, _021F05DC ; =0x000018CA
    // ldrsb r1, [r5, r0]
    // add r0, #0x36
    // ldr r0, [r5, r0]
    // add r1, r1, #2
    // cmp r1, r0
    // bge _021F05D0
    // add r0, r5, #0
    // bl ov18_021F04C0
    // add r3, r0, #0
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, _021F05E0 ; =0x000F0C00
    // add r4, #8
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r1, _021F05E4 ; =0x0000065C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl ov18_021EE3AC
    // b _021F05D0
    // add r1, r4, #0
    // add r1, #0x11
    // mov r2, #0xa
    // mov r3, #2
    // bl sub_020196E8
    // ldr r0, _021F05DC ; =0x000018CA
    // ldrsb r0, [r5, r0]
    // sub r1, r0, #2
    // bmi _021F05D0
    // add r0, r5, #0
    // bl ov18_021F04C0
    // add r3, r0, #0
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, _021F05E0 ; =0x000F0C00
    // add r4, #8
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r1, _021F05E4 ; =0x0000065C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r2, r4, #0
    // bl ov18_021EE3AC
    // add r0, r6, r7
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F05DC: .word 0x000018CA
    // _021F05E0: .word 0x000F0C00
    // _021F05E4: .word 0x0000065C
    // TODO: decompile
}




void ov18_021F05E8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r1, _021F0820 ; =ov18_021F9DE4
    // mov r2, #0xd
    // add r5, r0, #0
    // bl ov18_021EE35C
    // mov r6, #0
    // add r4, r5, #0
    // add r4, #0xc
    // add r7, r6, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #0xd
    // blo _021F05FE
    // ldr r1, _021F0824 ; =0x000018A2
    // ldr r0, [r5]
    // ldrh r1, [r5, r1]
    // ldr r0, [r0]
    // bl Pokedex_CheckMonCaughtFlag
    // cmp r0, #0
    // beq _021F0622
    // mov r4, #2
    // b _021F0624
    // mov r4, #1
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F0828 ; =0x00020100
    // ldr r1, _021F082C ; =0x0000065C
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0xc
    // mov r2, #0x8f
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0828 ; =0x00020100
    // ldr r1, _021F082C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x3c
    // mov r2, #0x88
    // mov r3, #0x30
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0828 ; =0x00020100
    // ldr r1, _021F082C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x4c
    // mov r2, #0xa
    // mov r3, #0x10
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0828 ; =0x00020100
    // ldr r1, _021F082C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x6c
    // mov r2, #0xa
    // mov r3, #0x10
    // bl ov18_021F9648
    // ldr r0, _021F0824 ; =0x000018A2
    // mov r1, #2
    // ldrh r0, [r5, r0]
    // mov r2, #0x25
    // bl ov18_021E590C
    // add r6, r0, #0
    // mov r3, #0
    // ldr r0, _021F0828 ; =0x00020100
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x1c
    // add r1, r6, #0
    // mov r2, #0x20
    // bl ov18_021F95FC
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [r5]
    // mov r1, #0x25
    // ldr r0, [r0, #4]
    // bl PlayerProfile_GetPlayerName_NewString
    // add r6, r0, #0
    // mov r3, #0
    // ldr r0, _021F0828 ; =0x00020100
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x2c
    // add r1, r6, #0
    // mov r2, #0x20
    // bl ov18_021F95FC
    // add r0, r6, #0
    // bl String_Delete
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021F0828 ; =0x00020100
    // ldr r1, _021F0824 ; =0x000018A2
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldrh r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #5
    // bl ov18_021EEA84
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0830 ; =0x00050900
    // ldr r1, _021F082C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x8c
    // mov r2, #0x89
    // mov r3, #0x30
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0834 ; =0x000F0500
    // ldr r1, _021F082C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x9c
    // mov r2, #0xb
    // mov r3, #0x10
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0834 ; =0x000F0500
    // ldr r1, _021F082C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0xbc
    // mov r2, #0xb
    // mov r3, #0x10
    // bl ov18_021F9648
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _021F0834 ; =0x000F0500
    // ldr r1, _021F0824 ; =0x000018A2
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // ldrh r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #0xa
    // bl ov18_021EEB34
    // ldr r0, [r5]
    // ldr r0, [r0, #4]
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // ldr r1, _021F082C ; =0x0000065C
    // bne _021F07D0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0828 ; =0x00020100
    // mov r2, #0x8a
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x7c
    // mov r3, #0x20
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0834 ; =0x000F0500
    // ldr r1, _021F082C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0xcc
    // mov r2, #0x8c
    // mov r3, #0x20
    // bl ov18_021F9648
    // b _021F080A
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0828 ; =0x00020100
    // mov r2, #0x8b
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x7c
    // mov r3, #0x20
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0834 ; =0x000F0500
    // ldr r1, _021F082C ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0xcc
    // mov r2, #0x8d
    // mov r3, #0x20
    // bl ov18_021F9648
    // mov r4, #0
    // add r5, #0xc
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0xd
    // blo _021F080E
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F0820: .word ov18_021F9DE4
    // _021F0824: .word 0x000018A2
    // _021F0828: .word 0x00020100
    // _021F082C: .word 0x0000065C
    // _021F0830: .word 0x00050900
    // _021F0834: .word 0x000F0500
    // TODO: decompile
}




void ov18_021F0838(void) {
    // add r5, #0xc
    ClearWindowTilemapAndScheduleTransfer(r0);
    // add r5, #0x10
    ov18_021EE388(r6);
}




void ov18_021F0858(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r1, _021F08D0 ; =ov18_021F9DB0
    // mov r2, #2
    // add r5, r0, #0
    // bl ov18_021EE35C
    // mov r6, #0
    // add r4, r5, #0
    // add r4, #0xc
    // add r7, r6, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl FillWindowPixelBuffer
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #2
    // blo _021F086E
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F08D4 ; =0x00020100
    // ldr r1, _021F08D8 ; =0x0000065C
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0xc
    // mov r2, #0xad
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F08DC ; =0x000F0C00
    // ldr r1, _021F08D8 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x1c
    // mov r2, #0xae
    // mov r3, #0x3c
    // bl ov18_021F9648
    // mov r4, #0
    // add r5, #0xc
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #2
    // blo _021F08BE
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F08D0: .word ov18_021F9DB0
    // _021F08D4: .word 0x00020100
    // _021F08D8: .word 0x0000065C
    // _021F08DC: .word 0x000F0C00
    // TODO: decompile
}




void ov18_021F08E0(void) {
    // add r5, #0xc
    ClearWindowTilemapAndScheduleTransfer(r0);
    // add r5, #0x10
    ov18_021EE388(r6);
}




void ov18_021F0900(void) {
    // push {r4, lr}
    // ldr r1, _021F0914 ; =ov18_021F9EBC
    // add r4, r0, #0
    // mov r2, #0x10
    // bl ov18_021EE35C
    // add r0, r4, #0
    // bl ov18_021F0928
    // pop {r4, pc}
    // _021F0914: .word ov18_021F9EBC
    // TODO: decompile
}




void ov18_021F0918(void) {
}




void ov18_021F0928(void) {
}




void ov18_021F0940(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r6, r5, #0
    // mov r4, #0
    // add r6, #0xc
    // add r0, r4, #0
    // add r0, #0xa
    // lsl r7, r0, #4
    // add r0, r6, r7
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _021F09C8 ; =0x000018C5
    // ldrsb r0, [r5, r0]
    // add r0, r0, r4
    // sub r1, r0, #2
    // bmi _021F0994
    // ldr r0, _021F09CC ; =0x000018C4
    // ldrsb r0, [r5, r0]
    // cmp r1, r0
    // bge _021F0994
    // add r0, r5, #0
    // bl ov18_021F09D8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // ldr r0, _021F09D0 ; =0x000F0C00
    // add r2, r4, #0
    // str r0, [sp, #0xc]
    // mov r0, #0
    // str r0, [sp, #0x10]
    // ldr r1, _021F09D4 ; =0x0000065C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r2, #0xa
    // bl ov18_021EE3AC
    // add r0, r6, r7
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, r6, r7
    // bl GetWindowX
    // str r0, [sp, #0x14]
    // add r0, r6, r7
    // bl GetWindowY
    // add r3, r0, #0
    // ldr r2, [sp, #0x14]
    // add r1, r4, #0
    // lsl r2, r2, #0x18
    // lsl r3, r3, #0x18
    // ldr r0, [r5, #8]
    // add r1, #0x11
    // asr r2, r2, #0x18
    // asr r3, r3, #0x18
    // bl sub_020196E8
    // add r4, r4, #1
    // cmp r4, #6
    // blo _021F094C
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F09C8: .word 0x000018C5
    // _021F09CC: .word 0x000018C4
    // _021F09D0: .word 0x000F0C00
    // _021F09D4: .word 0x0000065C
    // TODO: decompile
}




void ov18_021F09D8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // ldr r2, _021F0B64 ; =0x000018A2
    // add r4, r0, #0
    // ldrh r0, [r4, r2]
    // ldr r3, _021F0B68 ; =0x0000019D
    // cmp r0, r3
    // bgt ov18_021F0A1E
    // sub r5, r3, #1
    // cmp r0, r5
    // blt _021F09FA
    // add r2, r5, #0
    // cmp r0, r2
    // beq _021F0A8C
    // cmp r0, r3
    // beq _021F0A8C
    // b _021F0B1E
    // cmp r0, #0xc9
    // bgt ov18_021F0A06
    // bge _021F0A76
    // cmp r0, #0xac
    // beq _021F0AFC
    // b _021F0B1E
    // add r5, r3, #0
    // sub r5, #0x3e
    // cmp r0, r5
    // bgt ov18_021F0A16
    // sub r3, #0x3e
    // cmp r0, r3
    // beq _021F0ADC
    // b _021F0B1E
    // sub r3, #0x1b
    // cmp r0, r3
    // beq _021F0A9C
    // b _021F0B1E
    // add r5, r3, #0
    // add r5, #0x42
    // cmp r0, r5
    // bgt ov18_021F0A5E
    // add r5, r3, #0
    // add r5, #0x42
    // cmp r0, r5
    // bge _021F0ACC
    // add r5, r3, #0
    // add r5, #8
    // cmp r0, r5
    // bgt ov18_021F0A3E
    // add r3, #8
    // cmp r0, r3
    // beq _021F0AEC
    // b _021F0B1E
    // add r2, r3, #0
    // add r2, #0xa
    // cmp r0, r2
    // bgt _021F0B1E
    // add r2, r3, #0
    // add r2, #9
    // cmp r0, r2
    // blt _021F0B1E
    // add r2, r3, #0
    // add r2, #9
    // cmp r0, r2
    // beq _021F0A7C
    // add r3, #0xa
    // cmp r0, r3
    // beq _021F0A7C
    // b _021F0B1E
    // add r5, r3, #0
    // add r5, #0x4a
    // cmp r0, r5
    // bgt ov18_021F0A6E
    // add r3, #0x4a
    // cmp r0, r3
    // beq _021F0ABC
    // b _021F0B1E
    // add r3, #0x4f
    // cmp r0, r3
    // beq _021F0AAC
    // b _021F0B1E
    // add sp, #8
    // mov r0, #0x79
    // pop {r3, r4, r5, pc}
    // ldr r0, _021F0B6C ; =0x000018A4
    // add r1, r4, r1
    // ldrb r1, [r1, r0]
    // mov r0, #0x80
    // add sp, #8
    // eor r0, r1
    // add r0, #0x74
    // pop {r3, r4, r5, pc}
    // ldr r0, _021F0B6C ; =0x000018A4
    // add r1, r4, r1
    // ldrb r1, [r1, r0]
    // mov r0, #0x80
    // add sp, #8
    // eor r0, r1
    // add r0, #0x76
    // pop {r3, r4, r5, pc}
    // add r1, r4, r1
    // add r0, r2, #2
    // ldrb r1, [r1, r0]
    // mov r0, #0x80
    // add sp, #8
    // eor r0, r1
    // add r0, #0x91
    // pop {r3, r4, r5, pc}
    // add r1, r4, r1
    // add r0, r2, #2
    // ldrb r1, [r1, r0]
    // mov r0, #0x80
    // add sp, #8
    // eor r0, r1
    // add r0, #0x95
    // pop {r3, r4, r5, pc}
    // add r1, r4, r1
    // add r0, r2, #2
    // ldrb r1, [r1, r0]
    // mov r0, #0x80
    // add sp, #8
    // eor r0, r1
    // add r0, #0x97
    // pop {r3, r4, r5, pc}
    // add r1, r4, r1
    // add r0, r2, #2
    // ldrb r1, [r1, r0]
    // mov r0, #0x80
    // add sp, #8
    // eor r0, r1
    // add r0, #0x99
    // pop {r3, r4, r5, pc}
    // add r1, r4, r1
    // add r0, r2, #2
    // ldrb r1, [r1, r0]
    // mov r0, #0x80
    // add sp, #8
    // eor r0, r1
    // add r0, #0xa0
    // pop {r3, r4, r5, pc}
    // add r1, r4, r1
    // add r0, r2, #2
    // ldrb r1, [r1, r0]
    // mov r0, #0x80
    // add sp, #8
    // eor r0, r1
    // add r0, #0xa4
    // pop {r3, r4, r5, pc}
    // add r1, r4, r1
    // add r0, r2, #2
    // ldrb r1, [r1, r0]
    // mov r0, #0x80
    // eor r0, r1
    // bne _021F0B0E
    // add sp, #8
    // mov r0, #0x72
    // pop {r3, r4, r5, pc}
    // cmp r0, #1
    // bne _021F0B18
    // add sp, #8
    // mov r0, #0x73
    // pop {r3, r4, r5, pc}
    // add sp, #8
    // mov r0, #0xa6
    // pop {r3, r4, r5, pc}
    // add r2, r4, r1
    // ldr r1, _021F0B6C ; =0x000018A4
    // ldrb r1, [r2, r1]
    // cmp r1, #1
    // bne _021F0B2E
    // add sp, #8
    // mov r0, #0x72
    // pop {r3, r4, r5, pc}
    // cmp r1, #2
    // bne _021F0B38
    // add sp, #8
    // mov r0, #0x73
    // pop {r3, r4, r5, pc}
    // mov r1, #2
    // mov r2, #0x25
    // bl ov18_021E590C
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r3, #2
    // mov r0, #0x66
    // str r3, [sp, #4]
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // add r2, r5, #0
    // bl BufferString
    // add r0, r5, #0
    // bl String_Delete
    // mov r0, #0x9f
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _021F0B64: .word 0x000018A2
    // _021F0B68: .word 0x0000019D
    // _021F0B6C: .word 0x000018A4
    // TODO: decompile
}




void ov18_021F0B70(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // mov r4, #0
    // add r5, r0, #0
    // str r1, [sp, #0x14]
    // add r6, sp, #0x18
    // sub r7, r4, #2
    // add r1, r4, #0
    // add r2, sp, #0x18
    // ldr r0, [r5, #8]
    // add r1, #0x11
    // add r2, #1
    // add r3, sp, #0x18
    // bl sub_02019B1C
    // mov r0, #0
    // ldrsb r0, [r6, r0]
    // cmp r0, r7
    // beq _021F0BA0
    // cmp r0, #0x10
    // beq _021F0BA0
    // add r4, r4, #1
    // cmp r4, #6
    // blo _021F0B7E
    // add r0, r4, #0
    // add r6, r5, #0
    // add r0, #0xa
    // add r6, #0xc
    // lsl r7, r0, #4
    // add r0, r6, r7
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // ldr r0, [r5, #8]
    // bge _021F0BFC
    // add r1, r4, #0
    // add r1, #0x11
    // mov r2, #8
    // mov r3, #0x10
    // bl sub_020196E8
    // ldr r0, _021F0C44 ; =0x000018C5
    // ldrsb r1, [r5, r0]
    // sub r0, r0, #1
    // ldrsb r0, [r5, r0]
    // add r1, r1, #2
    // cmp r1, r0
    // bge _021F0C38
    // add r0, r5, #0
    // bl ov18_021F09D8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // add r4, #0xa
    // str r0, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // ldr r1, _021F0C48 ; =0x000F0C00
    // add r2, r4, #0
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, _021F0C4C ; =0x0000065C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov18_021EE3AC
    // b _021F0C38
    // mov r2, #8
    // add r1, r4, #0
    // add r3, r2, #0
    // add r1, #0x11
    // sub r3, #0xa
    // bl sub_020196E8
    // ldr r0, _021F0C44 ; =0x000018C5
    // ldrsb r0, [r5, r0]
    // sub r1, r0, #2
    // bmi _021F0C38
    // add r0, r5, #0
    // bl ov18_021F09D8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // add r4, #0xa
    // str r0, [sp, #4]
    // mov r1, #4
    // str r1, [sp, #8]
    // ldr r1, _021F0C48 ; =0x000F0C00
    // add r2, r4, #0
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r1, _021F0C4C ; =0x0000065C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov18_021EE3AC
    // add r0, r6, r7
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F0C44: .word 0x000018C5
    // _021F0C48: .word 0x000F0C00
    // _021F0C4C: .word 0x0000065C
    // TODO: decompile
}




void ov18_021F0C50(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r0, #0xc
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x4c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x1c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F0D18 ; =0x00020100
    // ldr r1, _021F0D1C ; =0x0000065C
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0xc
    // mov r2, #0xaa
    // bl ov18_021F9648
    // ldr r0, _021F0D20 ; =0x000018C4
    // ldrsb r0, [r5, r0]
    // cmp r0, #1
    // beq _021F0CB2
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F0D24 ; =0x000F0C00
    // ldr r1, _021F0D1C ; =0x0000065C
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x4c
    // mov r2, #0xa8
    // bl ov18_021F9648
    // ldr r0, _021F0D28 ; =0x000018A2
    // mov r1, #2
    // ldrh r0, [r5, r0]
    // mov r2, #0x25
    // bl ov18_021E590C
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r3, #2
    // mov r0, #0x66
    // str r3, [sp, #4]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // add r2, r4, #0
    // bl BufferString
    // add r0, r4, #0
    // bl String_Delete
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _021F0D18 ; =0x00020100
    // mov r2, #1
    // str r0, [sp, #0xc]
    // ldr r1, _021F0D1C ; =0x0000065C
    // str r2, [sp, #0x10]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // mov r3, #0xa7
    // bl ov18_021EE3AC
    // add r0, r5, #0
    // add r0, #0xc
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0x4c
    // bl ScheduleWindowCopyToVram
    // add r5, #0x1c
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, pc}
    // nop
    // _021F0D18: .word 0x00020100
    // _021F0D1C: .word 0x0000065C
    // _021F0D20: .word 0x000018C4
    // _021F0D24: .word 0x000F0C00
    // _021F0D28: .word 0x000018A2
    // TODO: decompile
}




void ov18_021F0D2C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // add r0, #0x2c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _021F0D70 ; =0x000018C5
    // add r0, r4, #0
    // ldrsb r1, [r4, r1]
    // bl ov18_021F09D8
    // add r3, r0, #0
    // mov r0, #0x3c
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _021F0D74 ; =0x00020100
    // mov r2, #2
    // str r0, [sp, #0xc]
    // ldr r1, _021F0D78 ; =0x0000065C
    // str r2, [sp, #0x10]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov18_021EE3AC
    // add r4, #0x2c
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _021F0D70: .word 0x000018C5
    // _021F0D74: .word 0x00020100
    // _021F0D78: .word 0x0000065C
    // TODO: decompile
}




void ov18_021F0D7C(void) {
    // add r0, #0xc
    ClearWindowTilemapAndScheduleTransfer();
    // add r0, #0x1c
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0x2c
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0x4c
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xac
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xbc
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xcc
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xdc
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r0, #0xec
    ClearWindowTilemapAndScheduleTransfer(r4);
    // add r4, #0xfc
    ClearWindowTilemapAndScheduleTransfer(r4);
}




void ov18_021F0DD0(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // bl ov18_021F0D7C
    // add r0, r5, #0
    // add r0, #0xc
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x3c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x5c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x8c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x9c
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F0F10 ; =0x00020100
    // ldr r1, _021F0F14 ; =0x0000065C
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0xc
    // mov r2, #0xaa
    // bl ov18_021F9648
    // ldr r0, _021F0F18 ; =0x000018A2
    // mov r1, #2
    // ldrh r0, [r5, r0]
    // mov r2, #0x25
    // bl ov18_021E590C
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r3, #2
    // mov r0, #0x66
    // str r3, [sp, #4]
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // add r2, r4, #0
    // bl BufferString
    // add r0, r4, #0
    // bl String_Delete
    // mov r0, #0x48
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _021F0F10 ; =0x00020100
    // ldr r1, _021F0F14 ; =0x0000065C
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // mov r2, #3
    // mov r3, #0xa9
    // bl ov18_021EE3AC
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0F1C ; =0x00050900
    // ldr r1, _021F0F14 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x5c
    // mov r2, #0xaa
    // mov r3, #0x18
    // bl ov18_021F9648
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0F20 ; =0x000F0C00
    // ldr r1, _021F0F14 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x8c
    // mov r2, #0xab
    // mov r3, #0x30
    // bl ov18_021F9648
    // mov r0, #4
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F0F20 ; =0x000F0C00
    // ldr r1, _021F0F14 ; =0x0000065C
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // add r0, #0x9c
    // mov r2, #0xac
    // mov r3, #0x30
    // bl ov18_021F9648
    // add r0, r5, #0
    // add r0, #0xc
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0x3c
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0x5c
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0x8c
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0x9c
    // bl ScheduleWindowCopyToVram
    // ldr r2, _021F0F24 ; =0x000018C5
    // add r0, r5, #0
    // ldrsb r2, [r5, r2]
    // mov r1, #6
    // bl ov18_021F0F68
    // ldr r2, _021F0F28 ; =0x000018C6
    // add r0, r5, #0
    // ldrsb r2, [r5, r2]
    // mov r1, #7
    // bl ov18_021F0F68
    // add sp, #0x14
    // pop {r4, r5, pc}
    // _021F0F10: .word 0x00020100
    // _021F0F14: .word 0x0000065C
    // _021F0F18: .word 0x000018A2
    // _021F0F1C: .word 0x00050900
    // _021F0F20: .word 0x000F0C00
    // _021F0F24: .word 0x000018C5
    // _021F0F28: .word 0x000018C6
    // TODO: decompile
}




void ov18_021F0F2C(void) {
}




void ov18_021F0F68(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r6, #0
    // add r5, #0xc
    // lsl r4, r7, #4
    // str r2, [sp, #0x14]
    // add r0, r5, r4
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, [sp, #0x14]
    // add r0, r6, #0
    // bl ov18_021F09D8
    // str r0, [sp, #0x18]
    // add r0, r5, r4
    // bl GetWindowWidth
    // lsl r1, r0, #3
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _021F0FC0 ; =0x00050900
    // ldr r1, _021F0FC4 ; =0x0000065C
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r1, [r6, r1]
    // ldr r3, [sp, #0x18]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl ov18_021EE3AC
    // add r0, r5, r4
    // bl ScheduleWindowCopyToVram
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _021F0FC0: .word 0x00050900
    // _021F0FC4: .word 0x0000065C
    // TODO: decompile
}




void ov18_021F0FC8(void) {
}




void ov18_021F0FEC(void) {
}




void ov18_021F1004(void) {
}




void ov18_021F1024(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x4c
    // add r4, r0, #0
    // mov r0, #0x25
    // bl SpriteSystem_Alloc
    // ldr r1, _021F10B4 ; =0x00000668
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // bl SpriteManager_New
    // ldr r7, _021F10B8 ; =0x0000066C
    // add r2, sp, #0x2c
    // ldr r3, _021F10BC ; =ov18_021FA3C8
    // str r0, [r4, r7]
    // ldmia r3!, {r0, r1}
    // add r6, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // ldr r5, _021F10C0 ; =ov18_021FA36C
    // stmia r2!, {r0, r1}
    // add r3, sp, #0x18
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r6, #0
    // str r0, [r3]
    // sub r0, r7, #4
    // ldr r0, [r4, r0]
    // mov r3, #0x20
    // bl SpriteSystem_Init
    // ldr r3, _021F10C4 ; =ov18_021FA380
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r1, r7, #4
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x78
    // bl SpriteSystem_InitSprites
    // sub r1, r7, #4
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // add r2, sp, #0
    // bl SpriteSystem_InitManagerWithCapacities
    // sub r0, r7, #4
    // ldr r0, [r4, r0]
    // bl SpriteSystem_GetRenderer
    // mov r2, #2
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // add sp, #0x4c
    // pop {r4, r5, r6, r7, pc}
    // _021F10B4: .word 0x00000668
    // _021F10B8: .word 0x0000066C
    // _021F10BC: .word ov18_021FA3C8
    // _021F10C0: .word ov18_021FA36C
    // _021F10C4: .word ov18_021FA380
    // TODO: decompile
}




void ov18_021F10C8(void) {
    // push {r4, lr}
    // ldr r1, _021F10E4 ; =0x00000668
    // add r4, r0, #0
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // bl SpriteSystem_FreeResourcesAndManager
    // ldr r0, _021F10E4 ; =0x00000668
    // ldr r0, [r4, r0]
    // bl SpriteSystem_Free
    // pop {r4, pc}
    // nop
    // _021F10E4: .word 0x00000668
    // TODO: decompile
}




void ov18_021F10E8(void) {
}




void ov18_021F1104(void) {
}




void ov18_021F111C(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    Sprite_GetImageProxy(*((u32*)(0x67 << 4)), (r1 << 2));
    // ldr r1, [sp, #0x10]
    NNS_G2dGetImageLocation();
    DC_FlushRange(r5, r4);
    // ldr r0, [sp, #0x10]
    GX_LoadOBJ(r5, r6, r4);
    GXS_LoadOBJ(r5, r6, r4);
}




void ov18_021F1160(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetOamMode((0x67 << 4), 1);
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetOamMode((0x67 << 4), 0);
}




void ov18_021F118C(void) {
    // add r5, r0, r2
    // ldr r0, [r5, r4]
    ManagedSprite_SetAnimationFrame(0, (0x67 << 4));
    // ldr r0, [r5, r4]
    ManagedSprite_SetAnim(r6);
}




void ov18_021F11AC(void) {
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r3, _021F11BC ; =ManagedSprite_IsAnimated
    // ldr r0, [r1, r0]
    // bx r3
    // nop
    // _021F11BC: .word ManagedSprite_IsAnimated
    // TODO: decompile
}




void ov18_021F11C0(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0x67 << 4), 1);
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0x67 << 4), 0);
}




void ov18_021F11EC(void) {
    // push {r3, lr}
    // add r2, r1, #0
    // add r3, r0, #0
    // ldr r0, [r2, #0x10]
    // ldr r1, _021F1218 ; =0x00000668
    // cmp r0, #1
    // bne _021F1206
    // ldr r0, [r3, r1]
    // add r1, r1, #4
    // ldr r1, [r3, r1]
    // bl SpriteSystem_NewSprite
    // pop {r3, pc}
    // ldr r0, [r3, r1]
    // add r1, r1, #4
    // ldr r1, [r3, r1]
    // mov r3, #2
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // pop {r3, pc}
    // nop
    // _021F1218: .word 0x00000668
    // TODO: decompile
}




void ov18_021F121C(void) {
    // ldr r2, [sp, #0x18]
    // add r5, r0, r2
    // add r1, sp, #0
    // ldr r0, [r5, r7]
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4));
    // add r2, sp, #0
    // ldrsh r1, [r2, r1]
    // ldrsh r2, [r2, r3]
    // add r1, r1, r4
    // add r2, r2, r6
    // ldr r0, [r5, r7]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY((2 << 0x10), (r2 << 0x10), 0);
    // add r5, r0, r2
    // add r1, sp, #0
    // ldr r0, [r5, r7]
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXYWithSubscreenOffset((0x67 << 4), (2 << 0x14));
    // add r2, sp, #0
    // ldrsh r1, [r2, r3]
    // ldr r0, [r5, r7]
    // add r1, r1, r4
    // ldrsh r2, [r2, r4]
    // asr r1, r1, #0x10
    // add r2, r2, r6
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXYWithSubscreenOffset((r1 << 0x10), (r2 << 0x10), (2 << 0x14));
}




void ov18_021F1294(void) {
    // ldr r4, [sp, #8]
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetPositionXY((0x67 << 4), r2, r3);
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_SetPositionXYWithSubscreenOffset((0x67 << 4), r2, r3, (2 << 0x14));
}




void ov18_021F12C8(void) {
    // ldr r4, [sp, #8]
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_GetPositionXY((0x67 << 4), r2, r3);
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    ManagedSprite_GetPositionXYWithSubscreenOffset((0x67 << 4), r2, r3, (2 << 0x14));
}




void ov18_021F12FC(void) {
}




void ov18_021F1314(void) {
    // ldr r1, _021F131C ; =0x00000858
    // ldr r3, _021F1320 ; =NARC_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // _021F131C: .word 0x00000858
    // _021F1320: .word NARC_Delete
    // TODO: decompile
}




void ov18_021F1324(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r6, r1, #0
    // ldr r4, _021F13C4 ; =0x00000000
    // beq _021F1354
    // mov r7, #1
    // ldr r0, _021F13C8 ; =0x0000C550
    // str r7, [sp]
    // str r7, [sp, #4]
    // add r0, r4, r0
    // str r0, [sp, #8]
    // ldr r0, _021F13CC ; =0x00000668
    // ldr r1, _021F13D0 ; =0x0000066C
    // ldr r2, _021F13D4 ; =0x00000854
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // add r4, r4, #1
    // cmp r4, r6
    // blo _021F1332
    // bl sub_02074490
    // ldr r1, _021F13D8 ; =0x00000858
    // ldr r3, _021F13CC ; =0x00000668
    // ldr r2, [r5, r1]
    // sub r1, #8
    // str r2, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _021F13C8 ; =0x0000C550
    // str r0, [sp, #0x14]
    // ldr r2, [r5, r3]
    // add r3, r3, #4
    // ldr r0, [r5, r1]
    // ldr r3, [r5, r3]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // bl sub_0207449C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F13C8 ; =0x0000C550
    // ldr r1, _021F13CC ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F13D8 ; =0x00000858
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // bl sub_020744A8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F13C8 ; =0x0000C550
    // ldr r1, _021F13CC ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F13D8 ; =0x00000858
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F13C4: .word 0x00000000
    // _021F13C8: .word 0x0000C550
    // _021F13CC: .word 0x00000668
    // _021F13D0: .word 0x0000066C
    // _021F13D4: .word 0x00000854
    // _021F13D8: .word 0x00000858
    // TODO: decompile
}




void ov18_021F13DC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // ldr r4, _021F1418 ; =0x00000000
    // beq _021F13F8
    // ldr r7, _021F141C ; =0x0000C550
    // ldr r0, _021F1420 ; =0x0000066C
    // add r1, r4, r7
    // ldr r0, [r5, r0]
    // bl SpriteManager_UnloadCharObjById
    // add r4, r4, #1
    // cmp r4, r6
    // blo _021F13E8
    // ldr r0, _021F1420 ; =0x0000066C
    // ldr r1, _021F141C ; =0x0000C550
    // ldr r0, [r5, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F1420 ; =0x0000066C
    // ldr r1, _021F141C ; =0x0000C550
    // ldr r0, [r5, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F1420 ; =0x0000066C
    // ldr r1, _021F141C ; =0x0000C550
    // ldr r0, [r5, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F1418: .word 0x00000000
    // _021F141C: .word 0x0000C550
    // _021F1420: .word 0x0000066C
    // TODO: decompile
}




void ov18_021F1424(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x68
    // add r7, r0, #0
    // lsl r0, r1, #2
    // ldr r3, _021F147C ; =ov18_021FA3E8
    // mov r4, #0
    // add r5, r7, r0
    // add r2, sp, #0
    // mov r6, #6
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r6, r6, #1
    // bne _021F1436
    // ldr r0, [r3]
    // str r0, [r2]
    // add r6, sp, #0
    // add r3, sp, #0x34
    // mov r2, #6
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F1448
    // ldr r0, [r6]
    // ldr r1, _021F1480 ; =0x0000066C
    // str r0, [r3]
    // ldr r0, _021F1484 ; =0x0000C550
    // add r2, sp, #0x34
    // add r0, r4, r0
    // str r0, [sp, #0x48]
    // ldr r0, _021F1488 ; =0x00000668
    // ldr r1, [r7, r1]
    // ldr r0, [r7, r0]
    // bl SpriteSystem_NewSprite
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x3c
    // blo _021F1442
    // add sp, #0x68
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F147C: .word ov18_021FA3E8
    // _021F1480: .word 0x0000066C
    // _021F1484: .word 0x0000C550
    // _021F1488: .word 0x00000668
    // TODO: decompile
}




void ov18_021F148C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #0
    // add r4, r3, #0
    // bl GetBattleMonIconNaixEx
    // add r1, r0, #0
    // mov r0, #0x25
    // str r0, [sp]
    // ldr r0, _021F14B0 ; =0x00000858
    // mov r2, #0
    // ldr r0, [r5, r0]
    // add r3, r4, #0
    // bl GfGfxLoader_GetCharDataFromOpenNarc
    // pop {r3, r4, r5, pc}
    // nop
    // _021F14B0: .word 0x00000858
    // TODO: decompile
}




void ov18_021F14B4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _021F14F4 ; =0x0000066C
    // str r1, [sp, #4]
    // add r4, r2, #0
    // ldr r0, [r5, r0]
    // ldr r1, _021F14F8 ; =0x0000C550
    // mov r2, #1
    // add r6, r3, #0
    // bl SpriteManager_FindPlttResourceOffset
    // mov r3, #1
    // add r7, r0, #0
    // str r3, [sp]
    // ldr r2, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r3, r3, #9
    // bl ov18_021F111C
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, r7, r6
    // bl ManagedSprite_SetPaletteOverride
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F14F4: .word 0x0000066C
    // _021F14F8: .word 0x0000C550
    // TODO: decompile
}




void ov18_021F14FC(void) {
    // str r3, [sp]
    // add r3, sp, #4
    ov18_021F148C();
    GetBattleMonIconPaletteEx(r4, r6, 0);
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov18_021F14B4(r5, *((u32*)(r1 + 0x14)), r0);
    Heap_Free(r7);
}




void ov18_021F1534(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r3, #0
    // add r3, sp, #0xc
    // add r5, r0, #0
    // add r7, r1, #0
    // str r2, [sp, #4]
    // bl ov18_021F148C
    // mov r3, #2
    // str r3, [sp]
    // ldr r2, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r2, [r2, #0x14]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r3, r3, #8
    // bl ov18_021F111C
    // ldr r0, _021F1590 ; =0x0000066C
    // ldr r1, _021F1594 ; =0x0000C551
    // ldr r0, [r5, r0]
    // mov r2, #2
    // bl SpriteManager_FindPlttResourceOffset
    // add r6, r0, #0
    // ldr r1, [sp, #4]
    // add r0, r7, #0
    // mov r2, #0
    // bl GetBattleMonIconPaletteEx
    // add r1, r0, #0
    // lsl r0, r4, #2
    // add r2, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // add r1, r6, r1
    // bl ManagedSprite_SetPaletteOverride
    // ldr r0, [sp, #8]
    // bl Heap_Free
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F1590: .word 0x0000066C
    // _021F1594: .word 0x0000C551
    // TODO: decompile
}




void ov18_021F1598(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r6, r2, #0
    // add r7, r5, r0
    // lsl r0, r6, #2
    // str r0, [sp]
    // add r4, r1, #0
    // ldr r0, [r7, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F1618 ; =0x00001030
    // lsl r4, r4, #2
    // add r0, r5, r0
    // ldrh r1, [r0, r4]
    // str r0, [sp, #4]
    // cmp r1, #0
    // beq _021F1614
    // ldr r0, [r5]
    // mov r2, #0
    // ldr r0, [r0]
    // bl Pokedex_GetSeenFormByIdx
    // add r2, r0, #0
    // ldr r0, [sp, #4]
    // ldrh r1, [r0, r4]
    // cmp r1, #0xac
    // bne _021F15E0
    // cmp r2, #2
    // bne _021F15DE
    // mov r2, #1
    // b _021F15E0
    // mov r2, #0
    // add r0, r5, #0
    // add r3, r6, #0
    // bl ov18_021F14FC
    // ldr r0, [sp]
    // mov r1, #1
    // ldr r0, [r7, r0]
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F161C ; =0x00001032
    // add r1, r5, r4
    // ldrh r0, [r1, r0]
    // cmp r0, #1
    // bne _021F160A
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl ov18_021F1160
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #0
    // bl ov18_021F1160
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F1618: .word 0x00001030
    // _021F161C: .word 0x00001032
    // TODO: decompile
}




void ov18_021F1620(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r6, #0x67
    // add r5, r0, #0
    // add r7, r1, #0
    // mov r4, #0
    // lsl r6, r6, #4
    // ldr r1, _021F16BC ; =0x0000185E
    // add r0, r7, r4
    // ldrb r2, [r5, r1]
    // mov r1, #1
    // eor r2, r1
    // mov r1, #0x1e
    // mul r1, r2
    // add r0, r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0xe
    // add r0, r5, r0
    // ldr r0, [r0, r6]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0x1e
    // blo _021F162C
    // mov r4, #0
    // ldr r1, _021F16BC ; =0x0000185E
    // add r0, r7, r4
    // ldrb r2, [r5, r1]
    // mov r1, #0x1e
    // mul r1, r2
    // add r0, r0, r1
    // ldr r1, _021F16C0 ; =0x00001859
    // lsl r0, r0, #0x10
    // ldrb r2, [r5, r1]
    // mov r1, #0xf
    // lsr r6, r0, #0x10
    // mul r1, r2
    // add r0, r5, #0
    // add r1, r4, r1
    // add r2, r6, #0
    // bl ov18_021F1598
    // add r0, r4, #0
    // mov r1, #5
    // bl _s32_div_f
    // str r1, [sp]
    // add r0, r4, #0
    // mov r1, #5
    // bl _s32_div_f
    // add r2, r0, #0
    // lsl r0, r6, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r3, [sp]
    // mov r1, #0x28
    // mul r1, r3
    // mov r3, #0x28
    // mul r3, r2
    // add r1, #0x30
    // add r3, #0x18
    // lsl r1, r1, #0x10
    // lsl r2, r3, #0x10
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0x1e
    // blo _021F1656
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F16BC: .word 0x0000185E
    // _021F16C0: .word 0x00001859
    // TODO: decompile
}




void ov18_021F16C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r1, [sp]
    // add r1, r3, #1
    // add r5, r0, #0
    // lsl r0, r1, #2
    // mov r6, #0
    // add r0, r1, r0
    // str r2, [sp, #4]
    // add r7, r6, #0
    // str r0, [sp, #0xc]
    // add r4, sp, #0x14
    // ldr r1, _021F1758 ; =0x0000185E
    // ldr r0, [sp]
    // ldrb r2, [r5, r1]
    // mov r1, #0x1e
    // add r0, r0, r7
    // mul r1, r2
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // str r1, [sp, #8]
    // ldr r0, [r1, r0]
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // cmp r0, #0xe0
    // bne _021F172C
    // mov r0, #0xf
    // mvn r0, r0
    // strh r0, [r4]
    // ldr r1, _021F175C ; =0x00001859
    // mov r2, #0xf
    // ldrb r1, [r5, r1]
    // add r0, r5, #0
    // mul r2, r1
    // ldr r1, [sp, #0xc]
    // sub r1, r2, r1
    // ldr r2, [sp, #0x10]
    // add r1, r6, r1
    // bl ov18_021F1598
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #4]
    // mov r2, #0
    // add r0, r1, r0
    // strh r0, [r4]
    // mov r0, #0x67
    // ldr r1, [sp, #8]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // bl ManagedSprite_SetPositionXY
    // add r0, r7, #1
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // cmp r7, #0x1e
    // blo _021F16DC
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F1758: .word 0x0000185E
    // _021F175C: .word 0x00001859
    // TODO: decompile
}




void ov18_021F1760(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r1, [sp]
    // add r1, r3, #5
    // add r5, r0, #0
    // lsl r0, r1, #2
    // mov r6, #0
    // add r0, r1, r0
    // str r2, [sp, #4]
    // add r7, r6, #0
    // str r0, [sp, #0xc]
    // add r4, sp, #0x14
    // ldr r1, _021F17F4 ; =0x0000185E
    // ldr r0, [sp]
    // ldrb r2, [r5, r1]
    // mov r1, #0x1e
    // add r0, r0, r7
    // mul r1, r2
    // add r0, r0, r1
    // str r0, [sp, #0x10]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // str r1, [sp, #8]
    // ldr r0, [r1, r0]
    // add r1, sp, #0x14
    // add r1, #2
    // add r2, sp, #0x14
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // sub r0, #0x10
    // cmp r1, r0
    // bne _021F17C8
    // mov r0, #0xe0
    // strh r0, [r4]
    // ldr r1, _021F17F8 ; =0x00001859
    // mov r2, #0xf
    // ldrb r1, [r5, r1]
    // add r0, r5, #0
    // mul r2, r1
    // ldr r1, [sp, #0xc]
    // add r1, r2, r1
    // ldr r2, [sp, #0x10]
    // add r1, r6, r1
    // bl ov18_021F1598
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // ldr r0, [sp, #4]
    // mov r2, #0
    // add r0, r1, r0
    // strh r0, [r4]
    // mov r0, #0x67
    // ldr r1, [sp, #8]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #2
    // ldrsh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // bl ManagedSprite_SetPositionXY
    // add r0, r7, #1
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // cmp r7, #0x1e
    // blo _021F1778
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F17F4: .word 0x0000185E
    // _021F17F8: .word 0x00001859
    // TODO: decompile
}




void ov18_021F17FC(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F18C8 ; =0x0000C58C
    // ldr r1, _021F18CC ; =0x00000668
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F18D0 ; =0x0000C58D
    // ldr r1, _021F18CC ; =0x00000668
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0x4b
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021F18D4 ; =0x0000C552
    // ldr r3, _021F18CC ; =0x00000668
    // str r0, [sp, #0x14]
    // mov r0, #0x85
    // lsl r0, r0, #4
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBuffer
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0x4b
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021F18D8 ; =0x0000C553
    // ldr r3, _021F18CC ; =0x00000668
    // str r0, [sp, #0x14]
    // mov r0, #0x85
    // lsl r0, r0, #4
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBuffer
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F18DC ; =0x0000C551
    // ldr r1, _021F18CC ; =0x00000668
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4d
    // bl SpriteSystem_LoadCellResObj
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F18DC ; =0x0000C551
    // ldr r1, _021F18CC ; =0x00000668
    // str r0, [sp, #4]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4e
    // bl SpriteSystem_LoadAnimResObj
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _021F18C8: .word 0x0000C58C
    // _021F18CC: .word 0x00000668
    // _021F18D0: .word 0x0000C58D
    // _021F18D4: .word 0x0000C552
    // _021F18D8: .word 0x0000C553
    // _021F18DC: .word 0x0000C551
    // TODO: decompile
}




void ov18_021F18E0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F1924 ; =0x0000066C
    // ldr r1, _021F1928 ; =0x0000C58C
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F1924 ; =0x0000066C
    // ldr r1, _021F192C ; =0x0000C58D
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F1924 ; =0x0000066C
    // ldr r1, _021F1930 ; =0x0000C552
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F1924 ; =0x0000066C
    // ldr r1, _021F1934 ; =0x0000C553
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F1924 ; =0x0000066C
    // ldr r1, _021F1938 ; =0x0000C551
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F1924 ; =0x0000066C
    // ldr r1, _021F1938 ; =0x0000C551
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // nop
    // _021F1924: .word 0x0000066C
    // _021F1928: .word 0x0000C58C
    // _021F192C: .word 0x0000C58D
    // _021F1930: .word 0x0000C552
    // _021F1934: .word 0x0000C553
    // _021F1938: .word 0x0000C551
    // TODO: decompile
}




void ov18_021F193C(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F19D8 ; =0x0000C58E
    // ldr r1, _021F19DC ; =0x00000668
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F19E0 ; =0x0000C58F
    // ldr r1, _021F19DC ; =0x00000668
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #8
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObj
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0x4b
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021F19E4 ; =0x0000C554
    // ldr r3, _021F19DC ; =0x00000668
    // str r0, [sp, #0x14]
    // mov r0, #0x85
    // lsl r0, r0, #4
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBuffer
    // mov r0, #8
    // str r0, [sp]
    // mov r0, #0x4b
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021F19E8 ; =0x0000C555
    // ldr r3, _021F19DC ; =0x00000668
    // str r0, [sp, #0x14]
    // mov r0, #0x85
    // lsl r0, r0, #4
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBuffer
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _021F19D8: .word 0x0000C58E
    // _021F19DC: .word 0x00000668
    // _021F19E0: .word 0x0000C58F
    // _021F19E4: .word 0x0000C554
    // _021F19E8: .word 0x0000C555
    // TODO: decompile
}




void ov18_021F19EC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F1A1C ; =0x0000066C
    // ldr r1, _021F1A20 ; =0x0000C58E
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F1A1C ; =0x0000066C
    // ldr r1, _021F1A24 ; =0x0000C58F
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F1A1C ; =0x0000066C
    // ldr r1, _021F1A28 ; =0x0000C554
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F1A1C ; =0x0000066C
    // ldr r1, _021F1A2C ; =0x0000C555
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // pop {r4, pc}
    // nop
    // _021F1A1C: .word 0x0000066C
    // _021F1A20: .word 0x0000C58E
    // _021F1A24: .word 0x0000C58F
    // _021F1A28: .word 0x0000C554
    // _021F1A2C: .word 0x0000C555
    // TODO: decompile
}




void ov18_021F1A30(void) {
    // push {r3, r4, r5, lr}
    // lsl r4, r1, #2
    // ldr r1, _021F1A6C ; =0x00000668
    // add r5, r0, #0
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // mov r3, #2
    // ldr r1, [r5, r1]
    // ldr r2, _021F1A70 ; =ov18_021FABC0
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0x67
    // mov r3, #2
    // add r2, r5, r4
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // add r0, r1, #0
    // sub r0, #8
    // sub r1, r1, #4
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, _021F1A74 ; =ov18_021FABF4
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // ldr r1, _021F1A78 ; =0x00000674
    // add r2, r5, r4
    // str r0, [r2, r1]
    // pop {r3, r4, r5, pc}
    // _021F1A6C: .word 0x00000668
    // _021F1A70: .word ov18_021FABC0
    // _021F1A74: .word ov18_021FABF4
    // _021F1A78: .word 0x00000674
    // TODO: decompile
}




void ov18_021F1A7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x40
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // ldr r3, _021F1BC0 ; =ov18_021FA328
    // add r2, sp, #0x20
    // add r5, r0, #0
    // add r4, r1, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r1, #0x32
    // mov r0, #0x25
    // lsl r1, r1, #6
    // bl Heap_AllocAtEnd
    // add r7, r0, #0
    // mov r0, #0
    // add r1, sp, #0x30
    // mov r2, #0x10
    // bl MIi_CpuClearFast
    // ldr r0, _021F1BC4 ; =0x00000147
    // cmp r4, r0
    // bne _021F1AC6
    // add r0, sp, #0x48
    // ldrb r0, [r0, #0x10]
    // cmp r0, #2
    // bne _021F1AC6
    // ldr r0, [r5]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Pokedex_GetSeenSpindaPersonality
    // add r6, r0, #0
    // b _021F1AC8
    // mov r6, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x48
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldrb r3, [r3, #0x10]
    // ldr r2, [sp, #0x18]
    // add r0, sp, #0x30
    // add r1, r4, #0
    // bl GetMonSpriteCharAndPlttNarcIdsEx
    // str r7, [sp]
    // str r6, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, sp, #0x48
    // ldrb r0, [r0, #0x10]
    // add r1, sp, #0x20
    // mov r2, #0x25
    // str r0, [sp, #0xc]
    // str r4, [sp, #0x10]
    // ldrh r0, [r1, #0x10]
    // ldrh r1, [r1, #0x12]
    // add r3, sp, #0x20
    // bl sub_02014510
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r4, r5, r0
    // ldr r0, [sp, #0x5c]
    // lsl r6, r0, #2
    // ldr r0, [r4, r6]
    // ldr r0, [r0]
    // bl Sprite_GetImageProxy
    // mov r1, #2
    // bl NNS_G2dGetImageLocation
    // mov r1, #0x32
    // str r0, [sp, #0x1c]
    // add r0, r7, #0
    // lsl r1, r1, #6
    // bl DC_FlushRange
    // mov r2, #0x32
    // ldr r1, [sp, #0x1c]
    // add r0, r7, #0
    // lsl r2, r2, #6
    // bl GXS_LoadOBJ
    // ldr r0, [r4, r6]
    // ldr r0, [r0]
    // bl Sprite_GetPaletteProxy
    // mov r1, #2
    // bl NNS_G2dGetImagePaletteLocation
    // add r4, r0, #0
    // ldr r0, [sp, #0x60]
    // cmp r0, #0
    // bne _021F1B6E
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x25
    // str r0, [sp, #4]
    // add r1, sp, #0x20
    // ldrh r0, [r1, #0x10]
    // ldrh r1, [r1, #0x14]
    // mov r2, #5
    // add r3, r4, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0x85
    // lsl r0, r0, #4
    // lsl r2, r4, #0xf
    // ldr r0, [r5, r0]
    // mov r1, #3
    // lsr r2, r2, #0x10
    // mov r3, #0x20
    // bl PaletteData_LoadPaletteSlotFromHardware
    // b _021F1BB4
    // cmp r0, #1
    // bne _021F1B94
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // lsl r0, r4, #0xf
    // lsr r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0x85
    // add r2, sp, #0x20
    // lsl r0, r0, #4
    // ldrh r1, [r2, #0x10]
    // ldrh r2, [r2, #0x14]
    // ldr r0, [r5, r0]
    // mov r3, #0x25
    // bl PaletteData_LoadNarc
    // b _021F1BB4
    // lsr r1, r4, #1
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // add r1, #0x10
    // str r0, [sp]
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #0x85
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #3
    // mov r2, #2
    // mov r3, #0
    // bl PaletteData_FillPaletteInBuffer
    // add r0, r7, #0
    // bl Heap_Free
    // add sp, #0x40
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F1BC0: .word ov18_021FA328
    // _021F1BC4: .word 0x00000147
    // TODO: decompile
}




void ov18_021F1BC8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _021F1CA8 ; =0x0000185F
    // add r4, r2, #0
    // ldrb r0, [r5, r0]
    // add r6, r1, #0
    // add r7, r3, #0
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // add r0, r4, r0
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r3, _021F1CA8 ; =0x0000185F
    // mov r1, #0xf
    // ldrb r2, [r5, r3]
    // add r0, r2, #0
    // bic r0, r1
    // lsl r1, r2, #0x1c
    // lsr r2, r1, #0x1c
    // mov r1, #1
    // eor r1, r2
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // mov r1, #0xf
    // and r1, r2
    // orr r0, r1
    // strb r0, [r5, r3]
    // ldrb r0, [r5, r3]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // add r4, r4, r0
    // cmp r6, #0
    // bne _021F1C3C
    // lsl r0, r7, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // lsl r0, r7, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5]
    // add r1, r6, #0
    // ldr r0, [r0]
    // mov r2, #0
    // bl Pokedex_SpeciesGetLastSeenGender
    // add r7, r0, #0
    // ldr r0, [r5]
    // add r1, r6, #0
    // ldr r0, [r0]
    // mov r2, #0
    // bl Pokedex_GetSeenFormByIdx
    // add r2, r0, #0
    // cmp r6, #0xac
    // bne _021F1C88
    // cmp r2, #2
    // bne _021F1C86
    // mov r2, #1
    // add r7, r2, #0
    // b _021F1C88
    // mov r2, #0
    // mov r0, #2
    // str r0, [sp]
    // lsl r2, r2, #0x18
    // lsl r3, r7, #0x18
    // str r4, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r1, r6, #0
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl ov18_021F1A7C
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F1CA8: .word 0x0000185F
    // TODO: decompile
}




void ov18_021F1CAC(void) {
}




void ov18_021F1CB4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // bl ov18_021E5900
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F1D44 ; =0x0000C599
    // ldr r1, _021F1D48 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F1D4C ; =0x00000854
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // mov r3, #0x4d
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // bl ov18_021E5908
    // str r4, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021F1D50 ; =0x0000C55B
    // ldr r3, _021F1D48 ; =0x00000668
    // str r0, [sp, #0x14]
    // mov r0, #0x85
    // lsl r0, r0, #4
    // ldr r2, [r5, r3]
    // add r3, r3, #4
    // ldr r0, [r5, r0]
    // ldr r3, [r5, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBuffer
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F1D54 ; =0x0000C558
    // ldr r1, _021F1D48 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F1D4C ; =0x00000854
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // mov r3, #0x4e
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F1D54 ; =0x0000C558
    // ldr r1, _021F1D48 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F1D4C ; =0x00000854
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // mov r3, #0x4f
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // nop
    // _021F1D44: .word 0x0000C599
    // _021F1D48: .word 0x00000668
    // _021F1D4C: .word 0x00000854
    // _021F1D50: .word 0x0000C55B
    // _021F1D54: .word 0x0000C558
    // TODO: decompile
}




void ov18_021F1D58(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F1D88 ; =0x0000066C
    // ldr r1, _021F1D8C ; =0x0000C599
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F1D88 ; =0x0000066C
    // ldr r1, _021F1D90 ; =0x0000C55B
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F1D88 ; =0x0000066C
    // ldr r1, _021F1D94 ; =0x0000C558
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F1D88 ; =0x0000066C
    // ldr r1, _021F1D94 ; =0x0000C558
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // nop
    // _021F1D88: .word 0x0000066C
    // _021F1D8C: .word 0x0000C599
    // _021F1D90: .word 0x0000C55B
    // _021F1D94: .word 0x0000C558
    // TODO: decompile
}




void ov18_021F1D98(void) {
    // push {r4, r5, r6, lr}
    // mov r2, #0x67
    // lsl r2, r2, #4
    // add r6, r0, #0
    // add r0, r2, #0
    // lsl r4, r1, #2
    // sub r0, #8
    // sub r1, r2, #4
    // add r5, r6, r2
    // mov r3, #2
    // ldr r0, [r6, r0]
    // ldr r1, [r6, r1]
    // ldr r2, _021F1DD8 ; =ov18_021FA450
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // str r0, [r5, r4]
    // ldr r0, _021F1DDC ; =0x0000066C
    // ldr r1, _021F1DE0 ; =0x0000C55B
    // ldr r0, [r6, r0]
    // mov r2, #2
    // bl SpriteManager_FindPlttResourceOffset
    // add r1, r0, #0
    // ldr r0, [r5, r4]
    // bl ManagedSprite_SetPaletteOverride
    // ldr r0, [r5, r4]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r4, r5, r6, pc}
    // _021F1DD8: .word ov18_021FA450
    // _021F1DDC: .word 0x0000066C
    // _021F1DE0: .word 0x0000C55B
    // TODO: decompile
}




void ov18_021F1DE4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // ldr r0, _021F1E64 ; =0x0000185C
    // add r4, r1, #0
    // ldrb r0, [r5, r0]
    // add r6, r3, #0
    // cmp r0, #2
    // bne _021F1E1A
    // cmp r4, #0
    // beq _021F1E1A
    // lsl r0, r2, #2
    // add r2, r5, r0
    // ldr r0, _021F1E68 ; =0x00001032
    // ldrh r0, [r2, r0]
    // cmp r0, #1
    // beq _021F1E1A
    // ldr r0, _021F1E6C ; =0x000001E7
    // cmp r4, r0
    // bne _021F1E2E
    // ldr r0, [r5]
    // mov r2, #0
    // ldr r0, [r0]
    // bl Pokedex_GetSeenFormByIdx
    // cmp r0, #1
    // bne _021F1E2E
    // lsl r0, r6, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // lsl r0, r6, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0x25
    // bl ov18_021F9694
    // add r4, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // mov r3, #0x80
    // bl ov18_021F111C
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021F1E64: .word 0x0000185C
    // _021F1E68: .word 0x00001032
    // _021F1E6C: .word 0x000001E7
    // TODO: decompile
}




void ov18_021F1E70(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F1F54 ; =0x0000C593
    // ldr r1, _021F1F58 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F1F5C ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x24
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F1F60 ; =0x0000C594
    // ldr r1, _021F1F58 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F1F5C ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x24
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F1F64 ; =0x0000C595
    // ldr r1, _021F1F58 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F1F5C ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x24
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F1F68 ; =0x0000C596
    // ldr r1, _021F1F58 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F1F5C ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x24
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F1F5C ; =0x00000854
    // ldr r3, _021F1F58 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x23
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #4
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _021F1F6C ; =0x0000C558
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F1F70 ; =0x0000C555
    // ldr r1, _021F1F58 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F1F5C ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x21
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F1F70 ; =0x0000C555
    // ldr r1, _021F1F58 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F1F5C ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x22
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _021F1F54: .word 0x0000C593
    // _021F1F58: .word 0x00000668
    // _021F1F5C: .word 0x00000854
    // _021F1F60: .word 0x0000C594
    // _021F1F64: .word 0x0000C595
    // _021F1F68: .word 0x0000C596
    // _021F1F6C: .word 0x0000C558
    // _021F1F70: .word 0x0000C555
    // TODO: decompile
}




void ov18_021F1F74(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F1FC0 ; =0x0000066C
    // ldr r1, _021F1FC4 ; =0x0000C593
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F1FC0 ; =0x0000066C
    // ldr r1, _021F1FC8 ; =0x0000C594
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F1FC0 ; =0x0000066C
    // ldr r1, _021F1FCC ; =0x0000C595
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F1FC0 ; =0x0000066C
    // ldr r1, _021F1FD0 ; =0x0000C596
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F1FC0 ; =0x0000066C
    // ldr r1, _021F1FD4 ; =0x0000C558
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F1FC0 ; =0x0000066C
    // ldr r1, _021F1FD8 ; =0x0000C555
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F1FC0 ; =0x0000066C
    // ldr r1, _021F1FD8 ; =0x0000C555
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // _021F1FC0: .word 0x0000066C
    // _021F1FC4: .word 0x0000C593
    // _021F1FC8: .word 0x0000C594
    // _021F1FCC: .word 0x0000C595
    // _021F1FD0: .word 0x0000C596
    // _021F1FD4: .word 0x0000C558
    // _021F1FD8: .word 0x0000C555
    // TODO: decompile
}




void ov18_021F1FDC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x34
    // ldr r6, _021F207C ; =ov18_021FA41C
    // add r4, r0, #0
    // add r2, r1, #0
    // add r5, sp, #0
    // mov r3, #6
    // ldmia r6!, {r0, r1}
    // stmia r5!, {r0, r1}
    // sub r3, r3, #1
    // bne _021F1FEA
    // ldr r0, [r6]
    // ldr r1, _021F2080 ; =0x00000668
    // str r0, [r5]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // mov r3, #2
    // lsl r5, r2, #2
    // ldr r1, [r4, r1]
    // add r2, sp, #0
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0x67
    // mov r3, #2
    // add r2, r4, r5
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // ldr r0, _021F2084 ; =0x0000C595
    // add r2, sp, #0
    // str r0, [sp, #0x14]
    // add r0, r1, #0
    // sub r0, #8
    // sub r1, r1, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r3, #2
    // ldr r1, _021F2088 ; =0x00000678
    // add r2, r4, r5
    // str r0, [r2, r1]
    // add r2, sp, #0
    // mov r0, #0
    // ldrsh r0, [r2, r0]
    // lsl r3, r3, #0x14
    // add r0, #0x31
    // strh r0, [r2]
    // ldr r0, _021F208C ; =0x0000C594
    // add r2, sp, #0
    // str r0, [sp, #0x14]
    // add r0, r1, #0
    // sub r0, #0x10
    // sub r1, #0xc
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r3, #2
    // ldr r1, _021F2090 ; =0x00000674
    // add r2, r4, r5
    // str r0, [r2, r1]
    // ldr r0, _021F2094 ; =0x0000C596
    // add r2, sp, #0
    // str r0, [sp, #0x14]
    // add r0, r1, #0
    // sub r0, #0xc
    // sub r1, #8
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // ldr r1, _021F2098 ; =0x0000067C
    // add r2, r4, r5
    // str r0, [r2, r1]
    // add sp, #0x34
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021F207C: .word ov18_021FA41C
    // _021F2080: .word 0x00000668
    // _021F2084: .word 0x0000C595
    // _021F2088: .word 0x00000678
    // _021F208C: .word 0x0000C594
    // _021F2090: .word 0x00000674
    // _021F2094: .word 0x0000C596
    // _021F2098: .word 0x0000067C
    // TODO: decompile
}




void ov18_021F209C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // ldr r1, _021F21E4 ; =0x0000185C
    // add r5, r0, #0
    // ldrb r0, [r5, r1]
    // add r4, r3, #0
    // cmp r0, #2
    // bne _021F20BE
    // cmp r6, #0
    // beq _021F20BE
    // lsl r0, r2, #2
    // add r2, r5, r0
    // ldr r0, _021F21E8 ; =0x00001032
    // ldrh r0, [r2, r0]
    // cmp r0, #1
    // bne _021F20F6
    // lsl r4, r4, #2
    // mov r0, #0x67
    // add r1, r5, r4
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F21EC ; =0x00000674
    // add r1, r5, r4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F21F0 ; =0x00000678
    // add r1, r5, r4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F21F4 ; =0x0000067C
    // add r1, r5, r4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r1, #3
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1c
    // bne _021F2120
    // lsl r7, r4, #2
    // mov r0, #0x67
    // add r1, r5, r7
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F21EC ; =0x00000674
    // add r1, r5, r7
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r4, r4, #2
    // b _021F213A
    // lsl r7, r4, #2
    // ldr r0, _021F21F0 ; =0x00000678
    // add r1, r5, r7
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F21F4 ; =0x0000067C
    // add r1, r5, r7
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F21F8 ; =0x0000185F
    // mov r2, #0xf0
    // ldrb r3, [r5, r0]
    // add r1, r3, #0
    // bic r1, r2
    // lsl r2, r3, #0x18
    // lsr r3, r2, #0x1c
    // mov r2, #1
    // eor r2, r3
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x18
    // orr r1, r2
    // strb r1, [r5, r0]
    // ldr r0, [r5]
    // add r1, r6, #0
    // ldr r0, [r0]
    // mov r2, #0
    // bl Pokedex_GetSeenFormByIdx
    // add r7, r0, #0
    // cmp r6, #0xac
    // bne _021F2174
    // cmp r7, #2
    // bne _021F2172
    // mov r7, #1
    // b _021F2174
    // mov r7, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // mov r2, #6
    // bl GetMonBaseStat_HandleAlternateForm
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldr r2, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F21FC
    // lsl r0, r4, #2
    // str r0, [sp]
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r0, r6, #0
    // add r1, r7, #0
    // mov r2, #7
    // bl GetMonBaseStat_HandleAlternateForm
    // lsl r0, r0, #0x10
    // lsr r2, r0, #0x10
    // beq _021F21B6
    // ldr r0, [sp, #4]
    // cmp r0, r2
    // bne _021F21C8
    // ldr r0, [sp]
    // add r1, r5, r0
    // ldr r0, _021F21EC ; =0x00000674
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #1
    // bl ov18_021F21FC
    // ldr r0, [sp]
    // add r1, r5, r0
    // ldr r0, _021F21EC ; =0x00000674
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F21E4: .word 0x0000185C
    // _021F21E8: .word 0x00001032
    // _021F21EC: .word 0x00000674
    // _021F21F0: .word 0x00000678
    // _021F21F4: .word 0x0000067C
    // _021F21F8: .word 0x0000185F
    // TODO: decompile
}




void ov18_021F21FC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r2, #0
    // add r4, r1, #0
    // str r2, [sp, #4]
    // bl ov18_021F967C
    // add r1, r0, #0
    // mov r0, #0x25
    // str r0, [sp]
    // ldr r0, _021F2264 ; =0x00000854
    // mov r2, #1
    // ldr r0, [r5, r0]
    // add r3, sp, #8
    // bl GfGfxLoader_GetCharDataFromOpenNarc
    // add r7, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // ldr r2, [sp, #8]
    // mov r3, #6
    // ldr r2, [r2, #0x14]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r3, r3, #6
    // bl ov18_021F111C
    // ldr r0, _021F2268 ; =0x0000066C
    // ldr r1, _021F226C ; =0x0000C558
    // ldr r0, [r5, r0]
    // mov r2, #2
    // bl SpriteManager_FindPlttResourceOffset
    // add r6, r0, #0
    // ldr r0, [sp, #4]
    // bl ov18_021F9688
    // add r1, r0, #0
    // lsl r0, r4, #2
    // add r2, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r2, r0]
    // add r1, r6, r1
    // bl ManagedSprite_SetPaletteOverride
    // add r0, r7, #0
    // bl Heap_Free
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021F2264: .word 0x00000854
    // _021F2268: .word 0x0000066C
    // _021F226C: .word 0x0000C558
    // TODO: decompile
}




void ov18_021F2270(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F22F4 ; =0x0000C597
    // ldr r1, _021F22F8 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F22FC ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x35
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F22FC ; =0x00000854
    // ldr r3, _021F22F8 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x38
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, _021F2300 ; =0x0000C559
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F2304 ; =0x0000C556
    // ldr r1, _021F22F8 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F22FC ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x36
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F2304 ; =0x0000C556
    // ldr r1, _021F22F8 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F22FC ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x37
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // _021F22F4: .word 0x0000C597
    // _021F22F8: .word 0x00000668
    // _021F22FC: .word 0x00000854
    // _021F2300: .word 0x0000C559
    // _021F2304: .word 0x0000C556
    // TODO: decompile
}




void ov18_021F2308(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F2338 ; =0x0000066C
    // ldr r1, _021F233C ; =0x0000C597
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F2338 ; =0x0000066C
    // ldr r1, _021F2340 ; =0x0000C559
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F2338 ; =0x0000066C
    // ldr r1, _021F2344 ; =0x0000C556
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F2338 ; =0x0000066C
    // ldr r1, _021F2344 ; =0x0000C556
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // nop
    // _021F2338: .word 0x0000066C
    // _021F233C: .word 0x0000C597
    // _021F2340: .word 0x0000C559
    // _021F2344: .word 0x0000C556
    // TODO: decompile
}




void ov18_021F2348(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F23D0 ; =0x0000C598
    // ldr r1, _021F23D4 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F23D8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x35
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F23D8 ; =0x00000854
    // ldr r3, _021F23D4 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x38
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _021F23DC ; =0x0000C55A
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F23E0 ; =0x0000C557
    // ldr r1, _021F23D4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F23D8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x36
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F23E0 ; =0x0000C557
    // ldr r1, _021F23D4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F23D8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x37
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // _021F23D0: .word 0x0000C598
    // _021F23D4: .word 0x00000668
    // _021F23D8: .word 0x00000854
    // _021F23DC: .word 0x0000C55A
    // _021F23E0: .word 0x0000C557
    // TODO: decompile
}




void ov18_021F23E4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F2414 ; =0x0000066C
    // ldr r1, _021F2418 ; =0x0000C598
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F2414 ; =0x0000066C
    // ldr r1, _021F241C ; =0x0000C55A
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F2414 ; =0x0000066C
    // ldr r1, _021F2420 ; =0x0000C557
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F2414 ; =0x0000066C
    // ldr r1, _021F2420 ; =0x0000C557
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // nop
    // _021F2414: .word 0x0000066C
    // _021F2418: .word 0x0000C598
    // _021F241C: .word 0x0000C55A
    // _021F2420: .word 0x0000C557
    // TODO: decompile
}




void ov18_021F2424(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r2, #0x30]
    // add r4, r1, #0
    // cmp r0, #1
    // ldr r1, _021F2464 ; =0x00000668
    // bne _021F2448
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // bl SpriteSystem_NewSprite
    // lsl r1, r4, #2
    // add r2, r5, r1
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // mov r3, #2
    // ldr r1, [r5, r1]
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // lsl r1, r4, #2
    // add r2, r5, r1
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // pop {r3, r4, r5, pc}
    // nop
    // _021F2464: .word 0x00000668
    // TODO: decompile
}




void ov18_021F2468(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // ldr r4, _021F24D0 ; =ov18_021FA484
    // add r7, r0, #0
    // add r3, sp, #0
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F2474
    // ldr r0, [r4]
    // mov r4, #0x1b
    // add r5, r7, #0
    // str r0, [r3]
    // mov r6, #0x12
    // lsl r4, r4, #4
    // add r5, #0x48
    // mov r0, #0x4d
    // lsl r0, r0, #2
    // sub r1, r4, r0
    // add r0, sp, #0
    // strh r1, [r0]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, sp, #0
    // bl ov18_021F2424
    // ldr r0, _021F24D4 ; =0x0000066C
    // ldr r1, _021F24D8 ; =0x0000C55A
    // ldr r0, [r7, r0]
    // mov r2, #2
    // bl SpriteManager_FindPlttResourceOffset
    // add r1, r0, #0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPaletteOverride
    // add r6, r6, #1
    // add r4, #0x18
    // add r5, r5, #4
    // cmp r6, #0x17
    // bls _021F248A
    // ldr r2, _021F24DC ; =ov18_021FAB24
    // add r0, r7, #0
    // mov r1, #8
    // bl ov18_021F2424
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F24D0: .word ov18_021FA484
    // _021F24D4: .word 0x0000066C
    // _021F24D8: .word 0x0000C55A
    // _021F24DC: .word ov18_021FAB24
    // TODO: decompile
}




void ov18_021F24E0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // cmp r1, #0
    // beq _021F24F6
    // ldr r0, [r5]
    // ldr r0, [r0]
    // bl Pokedex_GetInternationalViewFlag
    // cmp r0, #0
    // bne _021F2508
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // ldr r0, _021F252C ; =0x0000185C
    // ldrb r0, [r5, r0]
    // bl LanguageToDexFlag
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F118C
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // _021F252C: .word 0x0000185C
    // TODO: decompile
}




void ov18_021F2530(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r1, [sp]
    // add r6, r0, #0
    // ldr r0, [sp]
    // str r2, [sp, #4]
    // cmp r0, #0
    // beq _021F254C
    // ldr r0, [r6]
    // ldr r0, [r0]
    // bl Pokedex_GetInternationalViewFlag
    // cmp r0, #0
    // bne _021F257A
    // ldr r0, [sp, #4]
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // ldr r0, [sp, #4]
    // add r7, r0, #6
    // cmp r4, r7
    // bhs _021F263E
    // lsl r0, r4, #2
    // add r5, r6, r0
    // mov r6, #0x67
    // lsl r6, r6, #4
    // ldr r0, [r5, r6]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // asr r4, r0, #0x10
    // add r5, r5, #4
    // cmp r4, r7
    // blo _021F2562
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #4]
    // mov r7, #0
    // add r0, r0, #5
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // ldr r0, [sp, #4]
    // cmp r5, r0
    // blo _021F263E
    // lsl r0, r5, #2
    // add r4, r6, r0
    // ldr r0, [sp, #4]
    // sub r0, r5, r0
    // str r0, [sp, #8]
    // bl sub_020912AC
    // bl sub_02091294
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // ldr r1, [sp]
    // lsl r2, r2, #0x10
    // add r0, r6, #0
    // lsr r2, r2, #0x10
    // bl ov18_021E6D10
    // cmp r0, #1
    // beq _021F25B6
    // ldr r0, [sp, #0xc]
    // cmp r0, #2
    // bne _021F2624
    // ldr r0, _021F2644 ; =0x0000185C
    // ldrb r0, [r6, r0]
    // bl LanguageToDexFlag
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #8]
    // bl sub_020912AC
    // add r2, r0, #0
    // ldr r0, [sp, #0x10]
    // cmp r2, r0
    // bne _021F25D8
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov18_021F118C
    // b _021F25E2
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r2, #6
    // bl ov18_021F118C
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r1, sp, #0x14
    // ldr r0, [r4, r0]
    // add r1, #2
    // add r2, sp, #0x14
    // bl ManagedSprite_GetPositionXY
    // mov r1, #5
    // sub r2, r1, r7
    // mov r1, #0x18
    // mul r1, r2
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r1, #0x7c
    // lsl r1, r1, #0x10
    // add r3, sp, #0x14
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // add r0, r7, #1
    // lsl r0, r0, #0x10
    // asr r7, r0, #0x10
    // b _021F2630
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // sub r0, r5, #1
    // lsl r0, r0, #0x10
    // asr r5, r0, #0x10
    // ldr r0, [sp, #4]
    // sub r4, r4, #4
    // cmp r5, r0
    // bhs _021F258E
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2644: .word 0x0000185C
    // TODO: decompile
}




void ov18_021F2648(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F26D0 ; =0x0000C590
    // ldr r1, _021F26D4 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F26D8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0xc
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F26D8 ; =0x00000854
    // ldr r3, _021F26D4 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0xf
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #5
    // str r1, [sp, #0xc]
    // mov r1, #1
    // str r1, [sp, #0x10]
    // ldr r1, _021F26DC ; =0x0000C556
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F26E0 ; =0x0000C552
    // ldr r1, _021F26D4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F26D8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0xd
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F26E0 ; =0x0000C552
    // ldr r1, _021F26D4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F26D8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0xe
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _021F26D0: .word 0x0000C590
    // _021F26D4: .word 0x00000668
    // _021F26D8: .word 0x00000854
    // _021F26DC: .word 0x0000C556
    // _021F26E0: .word 0x0000C552
    // TODO: decompile
}




void ov18_021F26E4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F2714 ; =0x0000066C
    // ldr r1, _021F2718 ; =0x0000C590
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F2714 ; =0x0000066C
    // ldr r1, _021F271C ; =0x0000C556
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F2714 ; =0x0000066C
    // ldr r1, _021F2720 ; =0x0000C552
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F2714 ; =0x0000066C
    // ldr r1, _021F2720 ; =0x0000C552
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // nop
    // _021F2714: .word 0x0000066C
    // _021F2718: .word 0x0000C590
    // _021F271C: .word 0x0000C556
    // _021F2720: .word 0x0000C552
    // TODO: decompile
}




void ov18_021F2724(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F2800 ; =0x0000C591
    // ldr r1, _021F2804 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F2808 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x1a
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F2808 ; =0x00000854
    // ldr r3, _021F2804 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x20
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _021F280C ; =0x0000C557
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F2810 ; =0x0000C553
    // ldr r1, _021F2804 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F2808 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x1b
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F2810 ; =0x0000C553
    // ldr r1, _021F2804 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F2808 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x1c
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F2814 ; =0x0000C592
    // ldr r1, _021F2804 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F2808 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x1d
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F2818 ; =0x0000C554
    // ldr r1, _021F2804 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F2808 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x1e
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F2818 ; =0x0000C554
    // ldr r1, _021F2804 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F2808 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x1f
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _021F2800: .word 0x0000C591
    // _021F2804: .word 0x00000668
    // _021F2808: .word 0x00000854
    // _021F280C: .word 0x0000C557
    // _021F2810: .word 0x0000C553
    // _021F2814: .word 0x0000C592
    // _021F2818: .word 0x0000C554
    // TODO: decompile
}




void ov18_021F281C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F2868 ; =0x0000066C
    // ldr r1, _021F286C ; =0x0000C591
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F2868 ; =0x0000066C
    // ldr r1, _021F2870 ; =0x0000C557
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F2868 ; =0x0000066C
    // ldr r1, _021F2874 ; =0x0000C553
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F2868 ; =0x0000066C
    // ldr r1, _021F2874 ; =0x0000C553
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, _021F2868 ; =0x0000066C
    // ldr r1, _021F2878 ; =0x0000C592
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F2868 ; =0x0000066C
    // ldr r1, _021F287C ; =0x0000C554
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F2868 ; =0x0000066C
    // ldr r1, _021F287C ; =0x0000C554
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // _021F2868: .word 0x0000066C
    // _021F286C: .word 0x0000C591
    // _021F2870: .word 0x0000C557
    // _021F2874: .word 0x0000C553
    // _021F2878: .word 0x0000C592
    // _021F287C: .word 0x0000C554
    // TODO: decompile
}




void ov18_021F2880(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // bl ov18_021F2964
    // add r0, r5, #0
    // mov r1, #0x18
    // bl ov18_021F1424
    // add r0, r5, #0
    // mov r1, #0x18
    // bl ov18_021F1620
    // add r0, r5, #0
    // bl ov18_021F299C
    // ldr r0, _021F2960 ; =0x00001860
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _021F28B4
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // b _021F28BC
    // add r0, r5, #0
    // mov r1, #0
    // bl ov18_021F2AC0
    // add r0, r5, #0
    // mov r1, #5
    // bl ov18_021F2BB0
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov18_021F2C10
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov18_021F2C5C
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov18_021F2E80
    // add r0, r5, #0
    // bl ov18_021F8838
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov18_021F8824
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0xb
    // bl ov18_021F1A30
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0xb
    // mov r3, #0xa
    // bl ov18_021F1CAC
    // add r0, r5, #0
    // mov r1, #0xe
    // bl ov18_021F1FDC
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0xe
    // bl ov18_021F209C
    // add r0, r5, #0
    // mov r1, #0xd
    // bl ov18_021F1D98
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // mov r3, #0xd
    // bl ov18_021F1DE4
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #9
    // bl ov18_021F2EC8
    // add r0, r5, #0
    // bl ov18_021F2468
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x12
    // bl ov18_021F2530
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #8
    // bl ov18_021F24E0
    // mov r0, #0x69
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r4, r5, r6, pc}
    // _021F2960: .word 0x00001860
    // TODO: decompile
}




void ov18_021F2964(void) {
}




void ov18_021F299C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r6, _021F2A0C ; =ov18_021FA984
    // mov r7, #0
    // add r4, r5, #0
    // ldr r0, _021F2A10 ; =0x00000668
    // ldr r1, _021F2A14 ; =0x0000066C
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r6, #0
    // bl SpriteSystem_NewSprite
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r7, r7, #1
    // add r6, #0x34
    // add r4, r4, #4
    // cmp r7, #7
    // bls _021F29A6
    // add r0, r1, #0
    // add r0, #0x18
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F2A18 ; =0x0000068C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetDrawFlag
    // ldr r1, _021F2A10 ; =0x00000668
    // mov r3, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, _021F2A1C ; =ov18_021FAB58
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // ldr r1, _021F2A20 ; =0x00000694
    // mov r3, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0x2c
    // sub r1, #0x28
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, _021F2A24 ; =ov18_021FAB8C
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // ldr r1, _021F2A28 ; =0x00000698
    // str r0, [r5, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2A0C: .word ov18_021FA984
    // _021F2A10: .word 0x00000668
    // _021F2A14: .word 0x0000066C
    // _021F2A18: .word 0x0000068C
    // _021F2A1C: .word ov18_021FAB58
    // _021F2A20: .word 0x00000694
    // _021F2A24: .word ov18_021FAB8C
    // _021F2A28: .word 0x00000698
    // TODO: decompile
}




void ov18_021F2A2C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // cmp r2, #1
    // bne _021F2A60
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl Pokedex_GetInternationalViewFlag
    // cmp r0, #1
    // bne _021F2A60
    // lsl r5, r5, #2
    // mov r0, #0x67
    // add r1, r4, r5
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F2A80 ; =0x00000674
    // add r1, r4, r5
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // lsl r5, r5, #2
    // mov r0, #0x67
    // add r1, r4, r5
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, _021F2A80 ; =0x00000674
    // add r1, r4, r5
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, r4, r5, pc}
    // nop
    // _021F2A80: .word 0x00000674
    // TODO: decompile
}




void ov18_021F2A84(void) {
    Pokedex_GetInternationalViewFlag(*((u32*)*((u32*)r0)));
    // add r1, r5, r0
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0x67 << 4), 1);
    // add r1, r5, r0
    // ldr r0, [r1, r0]
    ManagedSprite_SetDrawFlag((0x67 << 4), 0);
}




void ov18_021F2AC0(void) {
    // push {r3, lr}
    // ldr r2, _021F2AF4 ; =0x00001858
    // ldrb r2, [r0, r2]
    // cmp r2, #0
    // bne _021F2ADE
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0x90
    // mov r2, #0x80
    // bl ManagedSprite_SetPositionXY
    // pop {r3, pc}
    // lsl r1, r1, #2
    // add r1, r0, r1
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0x70
    // mov r2, #0x80
    // bl ManagedSprite_SetPositionXY
    // pop {r3, pc}
    // nop
    // _021F2AF4: .word 0x00001858
    // TODO: decompile
}




void ov18_021F2AF8(void) {
    // ldr r0, [r0, r1]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4));
    // add r1, sp, #0
    // ldrsh r2, [r1, r0]
    // sub r0, #0x10
    // add r2, #0x10
    // ldrsh r1, [r1, r0]
    // sub r0, #0x10
    // add r1, #0x10
}




void ov18_021F2B3C(void) {
    // add r5, r0, r2
    // add r1, sp, #0
    // ldr r0, [r5, r4]
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4));
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    // add r1, r1, r6
    // ldr r0, [r5, r4]
    // asr r1, r1, #0x10
    ManagedSprite_SetPositionXY((2 << 0x10), 0);
}




void ov18_021F2B70(void) {
    // add r5, r0, r2
    // add r1, sp, #0
    // ldr r0, [r5, r4]
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r5, r4]
    ManagedSprite_SetPositionXY(r6, 0);
}




void ov18_021F2B9C(void) {
    // ldr r1, _021F2BAC ; =0x00001858
    // ldrb r0, [r0, r1]
    // cmp r0, #0
    // bne _021F2BA8
    // mov r0, #0x90
    // bx lr
    // mov r0, #0x70
    // bx lr
    // _021F2BAC: .word 0x00001858
    // TODO: decompile
}




void ov18_021F2BB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r2, _021F2BF8 ; =0x0000185A
    // lsl r4, r1, #2
    // ldrb r6, [r0, r2]
    // mov r2, #0x67
    // lsl r2, r2, #4
    // add r5, r0, r2
    // add r0, r6, #0
    // mov r1, #5
    // bl _s32_div_f
    // add r7, r1, #0
    // add r0, r6, #0
    // mov r1, #5
    // bl _s32_div_f
    // add r3, r0, #0
    // mov r2, #0x28
    // add r1, r7, #0
    // mul r1, r2
    // mul r2, r3
    // add r1, #0x30
    // add r2, #0x18
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r4]
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [r5, r4]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2BF8: .word 0x0000185A
    // TODO: decompile
}




void ov18_021F2BFC(void) {
    // ldr r1, _021F2C08 ; =0x00000684
    // ldr r3, _021F2C0C ; =ManagedSprite_SetDrawFlag
    // ldr r0, [r0, r1]
    // mov r1, #0
    // bx r3
    // nop
    // _021F2C08: .word 0x00000684
    // _021F2C0C: .word ManagedSprite_SetDrawFlag
    // TODO: decompile
}




void ov18_021F2C10(void) {
    // push {r4, r5, r6, lr}
    // add r6, r2, #0
    // ldr r2, _021F2C58 ; =0x00001859
    // add r5, r0, #0
    // ldrb r2, [r5, r2]
    // add r4, r1, #0
    // cmp r2, #0
    // bne _021F2C28
    // mov r2, #7
    // bl ov18_021F118C
    // b _021F2C2E
    // mov r2, #5
    // bl ov18_021F118C
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov18_021F8950
    // ldr r1, _021F2C58 ; =0x00001859
    // ldrb r1, [r5, r1]
    // cmp r1, r0
    // bne _021F2C4A
    // add r0, r5, #0
    // add r1, r4, #1
    // mov r2, #0xa
    // bl ov18_021F118C
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r4, #1
    // mov r2, #8
    // bl ov18_021F118C
    // pop {r4, r5, r6, pc}
    // nop
    // _021F2C58: .word 0x00001859
    // TODO: decompile
}




void ov18_021F2C5C(void) {
}




void ov18_021F2C74(void) {
    // push {r3, lr}
    // bl ov18_021F891C
    // ldr r3, _021F2C94 ; =ov18_021FA398
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bls _021F2C8C
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #0xc
    // blo _021F2C7E
    // add r2, #0xb
    // add r0, r2, #0
    // pop {r3, pc}
    // nop
    // _021F2C94: .word ov18_021FA398
    // TODO: decompile
}




void ov18_021F2C98(void) {
}




void ov18_021F2CB4(void) {
}




void ov18_021F2CC0(void) {
}




void ov18_021F2CD0(void) {
    // add r1, r6, r0
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4));
    ov18_021F2C98(r6, r7);
    // add r2, sp, #0
    // ldrsh r3, [r2, r1]
    // sub r1, #0xb
    // add r3, #0xb
    // ldrsh r1, [r2, r0]
    // sub r0, r1, r3
    // add r0, r1, r3
}




void ov18_021F2D24(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0x67
    // add r4, r1, #0
    // lsl r0, r0, #4
    // add r7, r5, r0
    // lsl r0, r4, #2
    // str r0, [sp, #4]
    // add r1, sp, #8
    // ldr r0, [r7, r0]
    // add r1, #2
    // add r2, sp, #8
    // add r6, r3, #0
    // bl ManagedSprite_GetPositionXY
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F2CB4
    // cmp r6, r0
    // bhs _021F2D52
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F2CC0
    // cmp r6, r0
    // bls _021F2D60
    // add r6, r0, #0
    // ldr r0, [sp, #4]
    // add r2, sp, #8
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // lsl r2, r6, #0x10
    // ldr r0, [r7, r0]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F2CB4
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F2CC0
    // sub r0, r0, r7
    // str r0, [sp]
    // ldr r1, [sp, #0x20]
    // add r0, r5, #0
    // bl ov18_021F8950
    // add r4, r0, #0
    // ldr r0, [sp]
    // add r1, r4, #0
    // lsl r0, r0, #8
    // bl _u32_div_f
    // sub r1, r6, r7
    // mov r3, #0
    // lsl r2, r1, #8
    // add r6, r3, #0
    // add r7, r3, #0
    // cmp r2, r6
    // blo _021F2DC0
    // add r1, r7, r0
    // cmp r2, r1
    // bhs _021F2DC0
    // ldr r0, _021F2DD0 ; =0x00001859
    // ldrb r1, [r5, r0]
    // cmp r1, r3
    // beq _021F2DCA
    // add sp, #0xc
    // strb r3, [r5, r0]
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // add r3, r3, #1
    // add r6, r6, r0
    // add r7, r7, r0
    // cmp r3, r4
    // bls _021F2DA6
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021F2DD0: .word 0x00001859
    // TODO: decompile
}




void ov18_021F2DD4(void) {
    // str r3, [sp]
    ov18_021F2CB4(r2);
    ov18_021F2CC0(r7, r4);
    // ldr r1, [sp]
    ov18_021F8950(r7);
    // sub r0, r4, r6
    _u32_div_f((r0 << 8), r0);
    // mul r1, r5
    // add r4, r6, r0
}




void ov18_021F2E14(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4), (r1 << 2));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // sub r0, r5, r0
    _u32_div_f(0, r4);
    // sub r0, r0, r5
    _u32_div_f(r4);
}




void ov18_021F2E4C(void) {
    // add r5, r0, r2
    // add r1, sp, #0
    // ldr r0, [r5, r4]
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, r2, r6
    // ldr r0, [r5, r4]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(2, (0 << 0x10));
}




void ov18_021F2E80(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r1, sp, #4
    // str r2, [sp]
    // add r6, r5, r0
    // lsl r7, r4, #2
    // ldr r0, [r6, r7]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // ldr r1, _021F2EC4 ; =0x00001859
    // ldr r3, [sp]
    // ldrb r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov18_021F2DD4
    // add r3, r0, #0
    // add r2, sp, #4
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // lsl r2, r3, #0x10
    // ldr r0, [r6, r7]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F2EC4: .word 0x00001859
    // TODO: decompile
}




void ov18_021F2EC8(void) {
    // push {r3, lr}
    // lsl r1, r1, #2
    // add r3, r0, r1
    // ldr r1, _021F2EFC ; =0x00001032
    // ldrh r1, [r3, r1]
    // cmp r1, #2
    // bne _021F2EE8
    // lsl r1, r2, #2
    // add r1, r0, r1
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, pc}
    // lsl r1, r2, #2
    // add r1, r0, r1
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // pop {r3, pc}
    // nop
    // _021F2EFC: .word 0x00001032
    // TODO: decompile
}




void ov18_021F2F00(void) {
}




void ov18_021F2F3C(void) {
}




void ov18_021F2F4C(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r1, #0x3c
    // bl ov18_021F1324
    // add r0, r4, #0
    // bl ov18_021F2648
    // add r0, r4, #0
    // bl ov18_021F2270
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F30E0 ; =0x0000C5A0
    // ldr r1, _021F30E4 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F30E8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x48
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F30E8 ; =0x00000854
    // ldr r3, _021F30E4 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x4b
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, _021F30EC ; =0x0000C561
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F30F0 ; =0x0000C55E
    // ldr r1, _021F30E4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F30E8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x49
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F30F0 ; =0x0000C55E
    // ldr r1, _021F30E4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F30E8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x4a
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F30F4 ; =0x0000C59F
    // ldr r1, _021F30E4 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F30E8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x48
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F30E8 ; =0x00000854
    // ldr r3, _021F30E4 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x4b
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _021F30F8 ; =0x0000C560
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F30FC ; =0x0000C55D
    // ldr r1, _021F30E4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F30E8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x49
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F30FC ; =0x0000C55D
    // ldr r1, _021F30E4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F30E8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x4a
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F3100 ; =0x0000C59E
    // ldr r1, _021F30E4 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F30E8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x17
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F30E8 ; =0x00000854
    // ldr r3, _021F30E4 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x20
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _021F3104 ; =0x0000C55F
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3108 ; =0x0000C55C
    // ldr r1, _021F30E4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F30E8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x18
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3108 ; =0x0000C55C
    // ldr r1, _021F30E4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F30E8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x19
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _021F30E0: .word 0x0000C5A0
    // _021F30E4: .word 0x00000668
    // _021F30E8: .word 0x00000854
    // _021F30EC: .word 0x0000C561
    // _021F30F0: .word 0x0000C55E
    // _021F30F4: .word 0x0000C59F
    // _021F30F8: .word 0x0000C560
    // _021F30FC: .word 0x0000C55D
    // _021F3100: .word 0x0000C59E
    // _021F3104: .word 0x0000C55F
    // _021F3108: .word 0x0000C55C
    // TODO: decompile
}




void ov18_021F310C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #0x3c
    // bl ov18_021F13DC
    // add r0, r4, #0
    // bl ov18_021F26E4
    // add r0, r4, #0
    // bl ov18_021F2308
    // ldr r0, _021F3174 ; =0x0000066C
    // ldr r1, _021F3178 ; =0x0000C59F
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F3174 ; =0x0000066C
    // ldr r1, _021F317C ; =0x0000C560
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F3174 ; =0x0000066C
    // ldr r1, _021F3180 ; =0x0000C55D
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F3174 ; =0x0000066C
    // ldr r1, _021F3180 ; =0x0000C55D
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, _021F3174 ; =0x0000066C
    // ldr r1, _021F3184 ; =0x0000C5A0
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F3174 ; =0x0000066C
    // ldr r1, _021F3188 ; =0x0000C561
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F3174 ; =0x0000066C
    // ldr r1, _021F318C ; =0x0000C55E
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F3174 ; =0x0000066C
    // ldr r1, _021F318C ; =0x0000C55E
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // _021F3174: .word 0x0000066C
    // _021F3178: .word 0x0000C59F
    // _021F317C: .word 0x0000C560
    // _021F3180: .word 0x0000C55D
    // _021F3184: .word 0x0000C5A0
    // _021F3188: .word 0x0000C561
    // _021F318C: .word 0x0000C55E
    // TODO: decompile
}




void ov18_021F3190(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // bl ov18_021F17FC
    // add r0, r5, #0
    // bl ov18_021F1CB4
    // add r0, r5, #0
    // bl ov18_021F1E70
    // add r0, r5, #0
    // bl ov18_021F2724
    // add r0, r5, #0
    // bl ov18_021F2348
    // ldr r1, _021F3270 ; =0x00000668
    // mov r3, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, _021F3274 ; =ov18_021FAB58
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0x72
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0xb8
    // sub r1, #0xb4
    // mov r3, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, _021F3278 ; =ov18_021FAB8C
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // ldr r1, _021F327C ; =0x00000724
    // str r0, [r5, r1]
    // add r0, r5, #0
    // mov r1, #0x2e
    // bl ov18_021F1A30
    // add r0, r5, #0
    // mov r1, #0x30
    // bl ov18_021F1D98
    // add r0, r5, #0
    // mov r1, #0x31
    // bl ov18_021F1FDC
    // ldr r4, _021F3280 ; =ov18_021FA484
    // add r3, sp, #0
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F3200
    // ldr r0, [r4]
    // add r4, r5, #0
    // ldr r6, _021F3284 ; =0x000004F8
    // str r0, [r3]
    // mov r7, #0x35
    // add r4, #0xd4
    // ldr r0, _021F3288 ; =0x0000047C
    // add r2, sp, #0
    // sub r1, r6, r0
    // add r0, sp, #0
    // strh r1, [r0]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov18_021F2424
    // ldr r0, _021F328C ; =0x0000066C
    // ldr r1, _021F3290 ; =0x0000C55A
    // ldr r0, [r5, r0]
    // mov r2, #2
    // bl SpriteManager_FindPlttResourceOffset
    // add r1, r0, #0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ManagedSprite_SetPaletteOverride
    // add r7, r7, #1
    // add r6, #0x18
    // add r4, r4, #4
    // cmp r7, #0x3a
    // bls _021F3214
    // mov r7, #0x67
    // lsl r7, r7, #4
    // mov r4, #0x2c
    // add r5, #0xb0
    // add r6, r7, #0
    // ldr r0, [r5, r7]
    // mov r1, #0
    // bl ManagedSprite_SetDrawFlag
    // ldr r0, [r5, r6]
    // mov r1, #2
    // bl ManagedSprite_SetPriority
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x3a
    // bls _021F3252
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F3270: .word 0x00000668
    // _021F3274: .word ov18_021FAB58
    // _021F3278: .word ov18_021FAB8C
    // _021F327C: .word 0x00000724
    // _021F3280: .word ov18_021FA484
    // _021F3284: .word 0x000004F8
    // _021F3288: .word 0x0000047C
    // _021F328C: .word 0x0000066C
    // _021F3290: .word 0x0000C55A
    // TODO: decompile
}




void ov18_021F3294(void) {
}




void ov18_021F32B8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // mov r7, #0x67
    // ldr r6, _021F340C ; =ov18_021FB004
    // add r5, r0, #0
    // mov r4, #0
    // lsl r7, r7, #4
    // ldr r0, _021F3410 ; =0x00000668
    // ldr r1, _021F3414 ; =0x0000066C
    // mov r2, #0x34
    // mul r2, r4
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r6, r2
    // bl SpriteSystem_NewSprite
    // lsl r1, r4, #2
    // add r1, r5, r1
    // str r0, [r1, r7]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0x19
    // bls _021F32C6
    // ldr r1, _021F3410 ; =0x00000668
    // mov r3, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, _021F3418 ; =ov18_021FA520
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // ldr r1, _021F341C ; =0x0000071C
    // mov r2, #0
    // str r0, [r5, r1]
    // add r0, r5, #0
    // mov r1, #0x2b
    // bl ov18_021F11C0
    // ldr r1, _021F3410 ; =0x00000668
    // mov r3, #2
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // ldr r2, _021F3420 ; =ov18_021FB54C
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // ldr r1, _021F3424 ; =0x000006D8
    // mov r3, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0x70
    // sub r1, #0x6c
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // ldr r2, _021F3428 ; =ov18_021FB580
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // ldr r1, _021F342C ; =0x000006DC
    // mov r2, #0
    // str r0, [r5, r1]
    // add r0, r5, #0
    // mov r1, #0x1b
    // bl ov18_021F11C0
    // ldr r4, _021F3430 ; =ov18_021FA4EC
    // add r3, sp, #0
    // mov r2, #6
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F3350
    // ldr r0, [r4]
    // mov r4, #0x1c
    // str r0, [r3]
    // add r7, sp, #0
    // cmp r4, #0x1c
    // bne _021F33A2
    // mov r0, #0xe0
    // strh r0, [r7]
    // mov r0, #0x48
    // strh r0, [r7, #2]
    // ldr r0, _021F3410 ; =0x00000668
    // ldr r1, _021F3414 ; =0x0000066C
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // lsl r1, r4, #2
    // add r2, r5, r1
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // ldr r0, _021F3434 ; =0x0000188C
    // ldr r2, [r5, r0]
    // cmp r2, #0xe
    // bne _021F3398
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // b _021F33F6
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F118C
    // b _021F33F6
    // add r0, r4, #0
    // sub r0, #0x1d
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r0, r6, #0
    // mov r1, #5
    // bl _s32_div_f
    // mov r0, #0x30
    // mul r0, r1
    // add r0, #0x20
    // strh r0, [r7]
    // add r0, r6, #0
    // mov r1, #5
    // bl _s32_div_f
    // mov r1, #0x28
    // mul r1, r0
    // add r1, #0x38
    // strh r1, [r7, #2]
    // ldr r0, _021F3410 ; =0x00000668
    // ldr r1, _021F3414 ; =0x0000066C
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, sp, #0
    // bl SpriteSystem_NewSprite
    // lsl r1, r4, #2
    // add r2, r5, r1
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov18_021F118C
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0x2a
    // bls _021F3360
    // add r0, r5, #0
    // mov r1, #0x3b
    // bl ov18_021F1424
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _021F340C: .word ov18_021FB004
    // _021F3410: .word 0x00000668
    // _021F3414: .word 0x0000066C
    // _021F3418: .word ov18_021FA520
    // _021F341C: .word 0x0000071C
    // _021F3420: .word ov18_021FB54C
    // _021F3424: .word 0x000006D8
    // _021F3428: .word ov18_021FB580
    // _021F342C: .word 0x000006DC
    // _021F3430: .word ov18_021FA4EC
    // _021F3434: .word 0x0000188C
    // TODO: decompile
}




void ov18_021F3438(void) {
}




void ov18_021F3448(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #0x1a
    // bl ov18_021F10E8
    // add r0, r4, #0
    // mov r1, #0x1b
    // bl ov18_021F10E8
    // ldr r0, _021F3484 ; =0x0000066C
    // ldr r1, _021F3488 ; =0x0000C59E
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F3484 ; =0x0000066C
    // ldr r1, _021F348C ; =0x0000C55F
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F3484 ; =0x0000066C
    // ldr r1, _021F3490 ; =0x0000C55C
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F3484 ; =0x0000066C
    // ldr r1, _021F3490 ; =0x0000C55C
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // _021F3484: .word 0x0000066C
    // _021F3488: .word 0x0000C59E
    // _021F348C: .word 0x0000C55F
    // _021F3490: .word 0x0000C55C
    // TODO: decompile
}




void ov18_021F3494(void) {
    // push {r4, lr}
    // ldr r1, _021F34C0 ; =0x0000188C
    // add r4, r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #0xe
    // bne _021F34AA
    // mov r1, #0x1c
    // mov r2, #0
    // bl ov18_021F11C0
    // pop {r4, pc}
    // mov r1, #0x1c
    // mov r2, #1
    // bl ov18_021F11C0
    // ldr r2, _021F34C0 ; =0x0000188C
    // add r0, r4, #0
    // ldr r2, [r4, r2]
    // mov r1, #0x1c
    // bl ov18_021F118C
    // pop {r4, pc}
    // _021F34C0: .word 0x0000188C
    // TODO: decompile
}




void ov18_021F34C4(void) {
    ov18_021F11C0(0x1c, 0);
    ov18_021F11C0(r5, 0x1d, 0);
}




void ov18_021F34EC(void) {
    ov18_021F3494();
    // ldr r0, [r5, r0]
    ManagedSprite_SetPositionXY((0x6e << 4), 0xe0, 0x48);
    ov18_021F11C0(r5, 0x1d, 0);
    // ldr r0, [r5, r0]
    ManagedSprite_SetPositionXY((0x6e << 4), 0x98, 0x14);
    ov18_021F11C0(r5, 0x1d, 1);
}




void ov18_021F3544(void) {
}




void ov18_021F3560(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // cmp r3, #0
    // bne _021F35B4
    // add r1, r6, #0
    // bl ov18_021F3AD0
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #5
    // mov r3, #1
    // bl ov18_021F36D4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F3AD0
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #0xb
    // mov r3, #0
    // bl ov18_021F36D4
    // ldr r2, _021F3614 ; =0x00001850
    // add r0, r5, #0
    // ldr r3, [r5, r2]
    // lsl r2, r6, #2
    // ldrh r2, [r3, r2]
    // mov r1, #6
    // bl ov18_021F38F0
    // ldr r2, _021F3614 ; =0x00001850
    // add r0, r5, #0
    // ldr r3, [r5, r2]
    // lsl r2, r4, #2
    // ldrh r2, [r3, r2]
    // mov r1, #0xc
    // bl ov18_021F38F0
    // b _021F35FE
    // add r1, r6, #0
    // bl ov18_021F3AD0
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #5
    // mov r3, #1
    // bl ov18_021F37D4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F3AD0
    // add r1, r0, #0
    // add r0, r5, #0
    // mov r2, #0xb
    // mov r3, #0
    // bl ov18_021F37D4
    // ldr r2, _021F3614 ; =0x00001850
    // add r0, r5, #0
    // ldr r3, [r5, r2]
    // lsl r2, r6, #2
    // add r2, r3, r2
    // ldrh r2, [r2, #2]
    // mov r1, #6
    // bl ov18_021F39C4
    // ldr r2, _021F3614 ; =0x00001850
    // add r0, r5, #0
    // ldr r3, [r5, r2]
    // lsl r2, r4, #2
    // add r2, r3, r2
    // ldrh r2, [r2, #2]
    // mov r1, #0xc
    // bl ov18_021F39C4
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl ov18_021F3A64
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #3
    // bl ov18_021F3A64
    // pop {r4, r5, r6, pc}
    // _021F3614: .word 0x00001850
    // TODO: decompile
}




void ov18_021F3618(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #3
    // bhi _021F36BE
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // ov18_021F362C: ; jump table
    // mov r1, #1
    // bl ov18_021F34EC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F3544
    // pop {r4, pc}
    // mov r1, #0
    // bl ov18_021F34EC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F3544
    // pop {r4, pc}
    // mov r1, #1
    // bl ov18_021F34C4
    // add r0, r4, #0
    // mov r1, #1
    // bl ov18_021F3544
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0x43
    // bl ov18_021F118C
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0x44
    // bl ov18_021F118C
    // ldr r2, _021F36D0 ; =0x00001878
    // add r0, r4, #0
    // ldr r1, [r4, r2]
    // add r2, r2, #4
    // ldr r2, [r4, r2]
    // mov r3, #0
    // bl ov18_021F3560
    // pop {r4, pc}
    // mov r1, #1
    // bl ov18_021F34C4
    // add r0, r4, #0
    // mov r1, #1
    // bl ov18_021F3544
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0x29
    // bl ov18_021F118C
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0x2a
    // bl ov18_021F118C
    // mov r2, #0x62
    // lsl r2, r2, #6
    // ldr r1, [r4, r2]
    // add r2, r2, #4
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #1
    // bl ov18_021F3560
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #1
    // bl ov18_021F34C4
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F3544
    // pop {r4, pc}
    // _021F36D0: .word 0x00001878
    // TODO: decompile
}




void ov18_021F36D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // lsl r6, r2, #2
    // mov r0, #0x67
    // add r4, r1, #0
    // add r1, r5, r6
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // str r3, [sp]
    // bl ManagedSprite_GetPositionXY
    // cmp r4, #0
    // bne _021F36FE
    // add r1, sp, #4
    // mov r0, #2
    // ldrsh r4, [r1, r0]
    // b _021F370C
    // cmp r4, #0x34
    // bhs _021F3706
    // mov r4, #0x34
    // b _021F370C
    // cmp r4, #0xcc
    // bls _021F370C
    // mov r4, #0xcc
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r7, r5, r0
    // add r1, sp, #4
    // ldr r0, [r7, r6]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // lsl r1, r4, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r7, r6]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021F37C8 ; =0x00000674
    // add r1, sp, #4
    // add r7, r5, r0
    // ldr r0, [r7, r6]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // add r1, r4, #0
    // sub r1, #0x14
    // lsl r1, r1, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r7, r6]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021F37CC ; =0x00000678
    // add r1, r5, r6
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // sub r1, #0xc
    // lsl r1, r1, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021F37D0 ; =0x0000067C
    // add r1, r5, r6
    // ldr r0, [r1, r0]
    // add r1, r4, #4
    // lsl r1, r1, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0x1a
    // add r1, r5, r6
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // add r1, #0xc
    // lsl r1, r1, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [sp]
    // cmp r0, #1
    // bne _021F37C4
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r1, sp, #4
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x67
    // lsl r0, r0, #4
    // lsl r1, r4, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F37C8: .word 0x00000674
    // _021F37CC: .word 0x00000678
    // _021F37D0: .word 0x0000067C
    // TODO: decompile
}




void ov18_021F37D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // lsl r6, r2, #2
    // mov r0, #0x67
    // add r4, r1, #0
    // add r1, r5, r6
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, sp, #4
    // add r1, #2
    // add r2, sp, #4
    // str r3, [sp]
    // bl ManagedSprite_GetPositionXY
    // cmp r4, #0
    // bne _021F37FE
    // add r1, sp, #4
    // mov r0, #2
    // ldrsh r4, [r1, r0]
    // b _021F380C
    // cmp r4, #0x34
    // bhs _021F3806
    // mov r4, #0x34
    // b _021F380C
    // cmp r4, #0xcc
    // bls _021F380C
    // mov r4, #0xcc
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r7, r5, r0
    // add r1, sp, #4
    // ldr r0, [r7, r6]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // lsl r1, r4, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r7, r6]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021F38E0 ; =0x00000674
    // add r1, sp, #4
    // add r7, r5, r0
    // ldr r0, [r7, r6]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // add r1, r4, #0
    // sub r1, #0x14
    // lsl r1, r1, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r7, r6]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021F38E4 ; =0x00000678
    // add r1, r5, r6
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // sub r1, #0xc
    // lsl r1, r1, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021F38E8 ; =0x0000067C
    // add r1, r5, r6
    // ldr r0, [r1, r0]
    // sub r1, r4, #4
    // lsl r1, r1, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0x1a
    // add r1, r5, r6
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // add r1, r4, #4
    // lsl r1, r1, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021F38EC ; =0x00000684
    // add r1, r5, r6
    // ldr r0, [r1, r0]
    // add r1, r4, #0
    // add r1, #0x14
    // lsl r1, r1, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, [sp]
    // cmp r0, #1
    // bne _021F38DA
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r1, sp, #4
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x67
    // lsl r0, r0, #4
    // lsl r1, r4, #0x10
    // add r3, sp, #4
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F38E0: .word 0x00000674
    // _021F38E4: .word 0x00000678
    // _021F38E8: .word 0x0000067C
    // _021F38EC: .word 0x00000684
    // TODO: decompile
}




void ov18_021F38F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r6, _021F39BC ; =0x000003E7
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r2, r6
    // bne _021F3900
    // add r6, #0xbd
    // b _021F3914
    // ldr r0, _021F39C0 ; =0x00002710
    // mov r1, #0xfe
    // mul r0, r2
    // bl _u32_div_f
    // add r0, r0, #5
    // mov r1, #0xa
    // bl _u32_div_f
    // add r6, r0, #0
    // add r0, r6, #0
    // mov r1, #0xc
    // bl _u32_div_f
    // add r7, r0, #0
    // add r0, r6, #0
    // mov r1, #0xc
    // bl _u32_div_f
    // add r6, r1, #0
    // cmp r7, #0xa
    // blo _021F394C
    // add r0, r7, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, #0x2b
    // bl ov18_021F118C
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov18_021F11C0
    // b _021F3956
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r7, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // add r2, r1, #0
    // add r0, r5, #0
    // add r1, r4, #1
    // add r2, #0x2b
    // bl ov18_021F118C
    // add r0, r5, #0
    // add r1, r4, #1
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r6, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #2
    // add r2, #0x2b
    // bl ov18_021F118C
    // add r0, r5, #0
    // add r1, r4, #2
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r6, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // add r2, r1, #0
    // add r0, r5, #0
    // add r1, r4, #3
    // add r2, #0x2b
    // bl ov18_021F118C
    // add r0, r5, #0
    // add r1, r4, #3
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r5, #0
    // add r1, r4, #4
    // mov r2, #0
    // bl ov18_021F11C0
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F39BC: .word 0x000003E7
    // _021F39C0: .word 0x00002710
    // TODO: decompile
}




void ov18_021F39C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // add r7, r0, #0
    // ldr r1, _021F3A50 ; =0x0000270F
    // add r0, r2, #0
    // str r2, [sp]
    // cmp r0, r1
    // bne _021F39DC
    // ldr r0, _021F3A54 ; =0x00018696
    // str r0, [sp]
    // b _021F39EC
    // ldr r1, _021F3A58 ; =0x00035D2E
    // mul r2, r1
    // ldr r1, _021F3A5C ; =0x0000C350
    // add r0, r2, r1
    // lsl r1, r1, #1
    // bl _u32_div_f
    // str r0, [sp]
    // mov r0, #0
    // ldr r5, _021F3A60 ; =0x00002710
    // str r0, [sp, #4]
    // add r4, r0, #0
    // ldr r0, [sp]
    // add r1, r5, #0
    // bl _u32_div_f
    // add r2, r0, #0
    // bne _021F3A06
    // ldr r0, [sp, #4]
    // cmp r0, #1
    // bne _021F3A20
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, r4
    // add r2, #0x2b
    // bl ov18_021F118C
    // add r0, r7, #0
    // add r1, r6, r4
    // mov r2, #1
    // bl ov18_021F11C0
    // b _021F3A2A
    // add r0, r7, #0
    // add r1, r6, r4
    // mov r2, #0
    // bl ov18_021F11C0
    // ldr r0, [sp]
    // add r1, r5, #0
    // bl _u32_div_f
    // str r1, [sp]
    // add r0, r5, #0
    // mov r1, #0xa
    // bl _u32_div_f
    // add r5, r0, #0
    // cmp r4, #2
    // bne _021F3A46
    // mov r0, #1
    // str r0, [sp, #4]
    // add r4, r4, #1
    // cmp r4, #5
    // blo _021F39F4
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F3A50: .word 0x0000270F
    // _021F3A54: .word 0x00018696
    // _021F3A58: .word 0x00035D2E
    // _021F3A5C: .word 0x0000C350
    // _021F3A60: .word 0x00002710
    // TODO: decompile
}




void ov18_021F3A64(void) {
    ov18_021F118C(r2, 0x3a);
    ov18_021F118C(r5, (r4 + 1), 0x35);
    ov18_021F118C(r4, 0x38);
    ov18_021F118C(r5, (r4 + 1), 0x37);
    ov18_021F118C(r4, 0x38);
    ov18_021F118C(r5, (r4 + 1), 0x35);
}




void ov18_021F3AB0(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4), (r1 << 2));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // sub r0, #0x34
}




void ov18_021F3AD0(void) {
    // add r1, #0x34
}




void ov18_021F3AD8(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021F3B24 ; =0x00001860
    // add r4, r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #1
    // bne _021F3B20
    // mov r1, #0x11
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0x11
    // bl ov18_021F2AC0
    // ldr r0, _021F3B28 ; =0x000006B4
    // add r1, sp, #0
    // ldr r0, [r4, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r0, _021F3B28 ; =0x000006B4
    // add r3, sp, #0
    // mov r1, #2
    // ldrsh r2, [r3, r1]
    // mov r1, #0x12
    // lsl r1, r1, #4
    // sub r1, r2, r1
    // mov r2, #0
    // lsl r1, r1, #0x10
    // ldrsh r2, [r3, r2]
    // ldr r0, [r4, r0]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // add sp, #4
    // pop {r3, r4, pc}
    // _021F3B24: .word 0x00001860
    // _021F3B28: .word 0x000006B4
    // TODO: decompile
}




void ov18_021F3B2C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F3B5C ; =0x000006B4
    // add r4, r1, #0
    // add r1, sp, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r0, _021F3B5C ; =0x000006B4
    // add r3, sp, #0
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // add r1, r1, r4
    // lsl r1, r1, #0x10
    // ldr r0, [r5, r0]
    // asr r1, r1, #0x10
    // bl ManagedSprite_SetPositionXY
    // pop {r3, r4, r5, pc}
    // nop
    // _021F3B5C: .word 0x000006B4
    // TODO: decompile
}




void ov18_021F3B60(void) {
    ov18_021F11C0(r0, 0x2c, 1);
    ov18_021F11C0(r5, 0x2b, 0);
    ov18_021F11C0(r5, 0x2c, 0);
    ov18_021F3BA4(r5);
}




void ov18_021F3BA4(void) {
    // push {r4, lr}
    // ldr r1, _021F3BD0 ; =0x0000188C
    // add r4, r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #0xe
    // bne _021F3BBA
    // mov r1, #0x2b
    // mov r2, #0
    // bl ov18_021F11C0
    // pop {r4, pc}
    // mov r1, #0x2b
    // mov r2, #1
    // bl ov18_021F11C0
    // ldr r2, _021F3BD0 ; =0x0000188C
    // add r0, r4, #0
    // ldr r2, [r4, r2]
    // mov r1, #0x2b
    // bl ov18_021F118C
    // pop {r4, pc}
    // _021F3BD0: .word 0x0000188C
    // TODO: decompile
}




void ov18_021F3BD4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // add r4, r1, #0
    // add r1, sp, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x6e
    // lsl r0, r0, #4
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // add r2, r2, r4
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // ldr r0, _021F3C2C ; =0x0000071C
    // add r1, sp, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r0, _021F3C2C ; =0x0000071C
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // add r2, r2, r4
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // pop {r3, r4, r5, pc}
    // _021F3C2C: .word 0x0000071C
    // TODO: decompile
}




void ov18_021F3C30(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F3C50 ; =0x000006D4
    // mov r1, #0x30
    // add r2, r1, #0
    // ldr r0, [r4, r0]
    // sub r2, #0x90
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #0
    // mov r1, #0x19
    // mov r2, #1
    // bl ov18_021F11C0
    // pop {r4, pc}
    // nop
    // _021F3C50: .word 0x000006D4
    // TODO: decompile
}




void ov18_021F3C54(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F3C84 ; =0x000006D4
    // add r4, r1, #0
    // add r1, sp, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r0, _021F3C84 ; =0x000006D4
    // add r3, sp, #0
    // mov r2, #0
    // ldrsh r2, [r3, r2]
    // mov r1, #2
    // ldrsh r1, [r3, r1]
    // add r2, r2, r4
    // lsl r2, r2, #0x10
    // ldr r0, [r5, r0]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // pop {r3, r4, r5, pc}
    // nop
    // _021F3C84: .word 0x000006D4
    // TODO: decompile
}




void ov18_021F3C88(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F3CA4 ; =0x000006D4
    // mov r1, #0x30
    // ldr r0, [r4, r0]
    // mov r2, #0x18
    // bl ManagedSprite_SetPositionXY
    // add r0, r4, #0
    // mov r1, #0x19
    // mov r2, #1
    // bl ov18_021F11C0
    // pop {r4, pc}
    // _021F3CA4: .word 0x000006D4
    // TODO: decompile
}




void ov18_021F3CA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // add r0, r2, #0
    // ldr r2, _021F3D30 ; =0x000018A4
    // add r5, r3, #0
    // add r6, r4, r2
    // ldrb r3, [r6, r1]
    // mov r7, #0x80
    // add r2, r3, #0
    // tst r2, r7
    // beq _021F3D0C
    // ldr r1, _021F3D30 ; =0x000018A4
    // sub r1, r1, #2
    // ldrh r1, [r4, r1]
    // cmp r1, #0xac
    // bne _021F3CF2
    // add r1, r3, #0
    // eor r1, r7
    // beq _021F3CD8
    // cmp r1, #1
    // beq _021F3CE0
    // cmp r1, #2
    // beq _021F3CEA
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // strb r1, [r0]
    // strb r1, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #0
    // strb r1, [r0]
    // mov r0, #1
    // strb r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r1, #1
    // strb r1, [r0]
    // strb r1, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r3, #0
    // eor r1, r7
    // strb r1, [r0]
    // ldr r1, _021F3D30 ; =0x000018A4
    // ldr r0, [r4]
    // sub r1, r1, #2
    // ldrh r1, [r4, r1]
    // ldr r0, [r0]
    // mov r2, #0
    // bl Pokedex_SpeciesGetLastSeenGender
    // strb r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r2, #0
    // strb r2, [r0]
    // ldrb r0, [r6, r1]
    // cmp r0, #1
    // beq _021F3D1E
    // cmp r0, #2
    // beq _021F3D22
    // cmp r0, #3
    // b _021F3D28
    // strb r2, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // strb r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #2
    // strb r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F3D30: .word 0x000018A4
    // TODO: decompile
}




void ov18_021F3D34(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov18_021F2648
    // ldr r1, _021F3D64 ; =0x00000668
    // ldr r2, _021F3D68 ; =ov18_021FA554
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // bl SpriteSystem_NewSprite
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #4
    // bl ManagedSprite_SetPaletteOverride
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov18_021F11C0
    // pop {r4, pc}
    // _021F3D64: .word 0x00000668
    // _021F3D68: .word ov18_021FA554
    // TODO: decompile
}




void ov18_021F3D6C(void) {
}




void ov18_021F3D80(void) {
}




void ov18_021F3D98(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // bl ov18_021F3E24
    // mov r6, #1
    // mov r4, #0x34
    // add r5, r7, #4
    // add r2, r4, #0
    // ldr r1, _021F3E00 ; =ov18_021FA610
    // sub r2, #0x34
    // add r0, r7, #0
    // add r1, r1, r2
    // bl ov18_021F11EC
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r6, r6, #1
    // add r4, #0x34
    // add r5, r5, #4
    // cmp r6, #8
    // bls _021F3DA6
    // add r0, r7, #0
    // mov r1, #1
    // bl ov18_021F69C0
    // add r2, sp, #0
    // add r0, r7, #0
    // mov r1, #0
    // add r2, #1
    // add r3, sp, #0
    // bl ov18_021F3CA8
    // ldr r1, _021F3E04 ; =0x000018A2
    // add r2, sp, #0
    // ldrh r1, [r7, r1]
    // ldrb r2, [r2, #1]
    // add r0, r7, #0
    // mov r3, #1
    // bl ov18_021F1534
    // add r0, r7, #0
    // bl ov18_021F40E4
    // add r0, r7, #0
    // bl ov18_021F40A0
    // add r0, r7, #0
    // bl ov18_021F4188
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F3E00: .word ov18_021FA610
    // _021F3E04: .word 0x000018A2
    // TODO: decompile
}




void ov18_021F3E08(void) {
    ov18_021F10E8(r0, 1);
    ov18_021F3FDC(r5);
}




void ov18_021F3E24(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F3FB0 ; =0x0000C550
    // ldr r1, _021F3FB4 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F3FB8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // bl sub_02074490
    // ldr r2, _021F3FBC ; =0x00000858
    // ldr r3, _021F3FB4 ; =0x00000668
    // ldr r1, [r4, r2]
    // sub r2, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r1, #3
    // str r1, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021F3FC0 ; =0x0000C551
    // str r0, [sp, #0x14]
    // ldr r0, [r4, r2]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r3, [r4, r3]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // bl sub_0207449C
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F3FB0 ; =0x0000C550
    // ldr r1, _021F3FB4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F3FBC ; =0x00000858
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // bl sub_020744A8
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, _021F3FB0 ; =0x0000C550
    // ldr r1, _021F3FB4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F3FBC ; =0x00000858
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F3FC4 ; =0x0000C59C
    // ldr r1, _021F3FB4 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F3FB8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x73
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F3FB8 ; =0x00000854
    // ldr r3, _021F3FB4 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x76
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _021F3FC8 ; =0x0000C55E
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3FCC ; =0x0000C55A
    // ldr r1, _021F3FB4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F3FB8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x74
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3FCC ; =0x0000C55A
    // ldr r1, _021F3FB4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F3FB8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x75
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F3FD0 ; =0x0000C59A
    // ldr r1, _021F3FB4 ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F3FB8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x77
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F3FB8 ; =0x00000854
    // ldr r3, _021F3FB4 ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x7a
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #2
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, _021F3FD4 ; =0x0000C55C
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3FD8 ; =0x0000C559
    // ldr r1, _021F3FB4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F3FB8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x78
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F3FD8 ; =0x0000C559
    // ldr r1, _021F3FB4 ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F3FB8 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x79
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // nop
    // _021F3FB0: .word 0x0000C550
    // _021F3FB4: .word 0x00000668
    // _021F3FB8: .word 0x00000854
    // _021F3FBC: .word 0x00000858
    // _021F3FC0: .word 0x0000C551
    // _021F3FC4: .word 0x0000C59C
    // _021F3FC8: .word 0x0000C55E
    // _021F3FCC: .word 0x0000C55A
    // _021F3FD0: .word 0x0000C59A
    // _021F3FD4: .word 0x0000C55C
    // _021F3FD8: .word 0x0000C559
    // TODO: decompile
}




void ov18_021F3FDC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F4060 ; =0x0000C550
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F4064 ; =0x0000C551
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F4060 ; =0x0000C550
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F4060 ; =0x0000C550
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F4068 ; =0x0000C59C
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F406C ; =0x0000C55E
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F4070 ; =0x0000C55A
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F4070 ; =0x0000C55A
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F4074 ; =0x0000C59A
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F4078 ; =0x0000C55C
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F407C ; =0x0000C559
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F405C ; =0x0000066C
    // ldr r1, _021F407C ; =0x0000C559
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // pop {r4, pc}
    // nop
    // _021F405C: .word 0x0000066C
    // _021F4060: .word 0x0000C550
    // _021F4064: .word 0x0000C551
    // _021F4068: .word 0x0000C59C
    // _021F406C: .word 0x0000C55E
    // _021F4070: .word 0x0000C55A
    // _021F4074: .word 0x0000C59A
    // _021F4078: .word 0x0000C55C
    // _021F407C: .word 0x0000C559
    // TODO: decompile
}




void ov18_021F4080(void) {
}




void ov18_021F40A0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r1, #9
    // mov r2, #0x19
    // str r1, [sp]
    // add r4, r0, #0
    // lsl r2, r2, #8
    // ldr r2, [r4, r2]
    // ldr r3, _021F40DC ; =ov18_021FA35A
    // lsl r2, r2, #0x18
    // mov r1, #5
    // asr r2, r2, #0x18
    // bl ov18_021F61DC
    // add r0, r4, #0
    // bl ov18_021F65EC
    // ldr r2, _021F40E0 ; =0x000018CA
    // add r0, r4, #0
    // ldrsb r1, [r4, r2]
    // add r2, #0x36
    // ldr r2, [r4, r2]
    // mov r3, #6
    // lsl r2, r2, #0x18
    // asr r2, r2, #0x18
    // bl ov18_021F619C
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021F40DC: .word ov18_021FA35A
    // _021F40E0: .word 0x000018CA
    // TODO: decompile
}




void ov18_021F40E4(void) {
    // asr r0, r1, #4
    // add r0, r1, r0
    // asr r0, r1, #4
    // add r0, r1, r0
    // sub r2, #0x16
    // add r2, #0x44
    // add r3, #0x2c
    // asr r2, r2, #0x10
    // asr r3, r3, #0x10
    // str r1, [sp]
    ov18_021F1294(r0, 2, (((((((r0 >> 0x1b) << 0xb) >> 0x10) << 0x10) >> 0x10) << 3) << 0x10), (((((((r0 >> 0x1b) << 0xb) >> 0x1b) << 0xb) >> 0x10) << 3) << 0x10));
    ov18_021F4134(r4);
}




void ov18_021F4134(void) {
    // push {r3, lr}
    // ldr r1, _021F4184 ; =0x000018C8
    // ldrsb r1, [r0, r1]
    // cmp r1, #0
    // ldr r1, [r0]
    // bne _021F4162
    // ldr r2, [r1, #0x10]
    // asr r1, r2, #4
    // lsr r1, r1, #0x1b
    // add r1, r2, r1
    // asr r1, r1, #5
    // cmp r1, #0x17
    // blt _021F4158
    // mov r1, #2
    // mov r2, #0
    // bl ov18_021F11C0
    // pop {r3, pc}
    // mov r1, #2
    // mov r2, #1
    // bl ov18_021F11C0
    // pop {r3, pc}
    // ldr r2, [r1, #0x10]
    // asr r1, r2, #4
    // lsr r1, r1, #0x1b
    // add r1, r2, r1
    // asr r1, r1, #5
    // cmp r1, #0x17
    // blt _021F417A
    // mov r1, #2
    // mov r2, #1
    // bl ov18_021F11C0
    // pop {r3, pc}
    // mov r1, #2
    // mov r2, #0
    // bl ov18_021F11C0
    // pop {r3, pc}
    // _021F4184: .word 0x000018C8
    // TODO: decompile
}




void ov18_021F4188(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r5, #0
    // mov r7, #0x67
    // mov r4, #9
    // add r6, #0x24
    // lsl r7, r7, #4
    // ldr r1, _021F41C0 ; =ov18_021FA4B8
    // add r0, r5, #0
    // bl ov18_021F11EC
    // str r0, [r6, r7]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov18_021F1160
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r4, #0x3b
    // blo _021F4196
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F41C0: .word ov18_021FA4B8
    // TODO: decompile
}




void ov18_021F41C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // add r7, r2, #0
    // str r3, [sp]
    // ldr r4, [sp, #0x18]
    // bl ov18_021E8B24
    // cmp r0, #1
    // bne _021F41E4
    // mov r0, #0x20
    // mov r1, #4
    // mov r2, #1
    // mov r3, #3
    // b _021F422C
    // add r0, r5, #0
    // bl ov18_021E8B0C
    // cmp r0, #0x12
    // bne _021F4204
    // mov r0, #0x24
    // add r1, r5, #0
    // mul r1, r0
    // ldr r0, _021F42DC ; =0x0000190C
    // mov r3, #2
    // ldr r2, [r6, r0]
    // ldrb r0, [r2, r1]
    // add r1, r2, r1
    // ldrb r1, [r1, #1]
    // mov r2, #1
    // b _021F422C
    // add r0, r5, #0
    // bl ov18_021E8B5C
    // cmp r0, #1
    // bne _021F4218
    // mov r0, #0x23
    // mov r1, #8
    // mov r2, #2
    // mov r3, #1
    // b _021F422C
    // mov r0, #0x24
    // add r1, r5, #0
    // mul r1, r0
    // ldr r0, _021F42DC ; =0x0000190C
    // ldr r2, [r6, r0]
    // add r3, r2, r1
    // ldrb r0, [r2, r1]
    // ldrb r1, [r3, #1]
    // ldrb r2, [r3, #2]
    // ldrb r3, [r3, #3]
    // cmp r2, #1
    // bne _021F4262
    // cmp r3, #1
    // bne _021F423A
    // mov r5, #0
    // strb r5, [r4]
    // b _021F42AC
    // cmp r3, #2
    // bne _021F4244
    // mov r5, #6
    // strb r5, [r4]
    // b _021F42AC
    // cmp r3, #3
    // bne _021F424E
    // mov r5, #7
    // strb r5, [r4]
    // b _021F42AC
    // cmp r3, #4
    // bne _021F4258
    // mov r5, #8
    // strb r5, [r4]
    // b _021F42AC
    // cmp r3, #5
    // bne _021F42AC
    // mov r5, #9
    // strb r5, [r4]
    // b _021F42AC
    // cmp r2, #2
    // bne _021F4276
    // cmp r3, #1
    // bne _021F4270
    // mov r5, #1
    // strb r5, [r4]
    // b _021F42AC
    // mov r5, #0xa
    // strb r5, [r4]
    // b _021F42AC
    // cmp r2, #3
    // bne _021F428A
    // cmp r3, #1
    // bne _021F4284
    // mov r5, #2
    // strb r5, [r4]
    // b _021F42AC
    // mov r5, #0xb
    // strb r5, [r4]
    // b _021F42AC
    // cmp r2, #4
    // bne _021F4294
    // mov r5, #3
    // strb r5, [r4]
    // b _021F42AC
    // cmp r2, #5
    // bne _021F429E
    // mov r5, #4
    // strb r5, [r4]
    // b _021F42AC
    // cmp r2, #6
    // bne _021F42A8
    // mov r5, #5
    // strb r5, [r4]
    // b _021F42AC
    // mov r5, #0
    // strb r5, [r4]
    // lsl r4, r2, #3
    // lsr r2, r4, #0x1f
    // add r2, r4, r2
    // ldr r4, _021F42E0 ; =0x000018C8
    // asr r2, r2, #1
    // ldrsb r5, [r6, r4]
    // mov r4, #0x16
    // mul r4, r5
    // sub r0, r0, r4
    // lsl r0, r0, #3
    // add r0, r2, r0
    // add r0, #0x40
    // lsl r2, r1, #3
    // lsl r1, r3, #3
    // strh r0, [r7]
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r0, r0, #1
    // add r1, r2, r0
    // ldr r0, [sp]
    // add r1, #0x28
    // strh r1, [r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F42DC: .word 0x0000190C
    // _021F42E0: .word 0x000018C8
    // TODO: decompile
}




void ov18_021F42E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r2, #0
    // ldr r2, _021F437C ; =0x00001908
    // mov ip, r1
    // ldr r2, [r0, r2]
    // lsl r1, r1, #2
    // ldrb r7, [r2, r1]
    // ldr r2, _021F437C ; =0x00001908
    // add r4, r3, #0
    // sub r2, #0x40
    // ldrsb r3, [r0, r2]
    // mov r2, #0x16
    // ldr r5, [sp, #0x18]
    // mul r2, r3
    // sub r2, r7, r2
    // lsl r2, r2, #3
    // add r2, #0x44
    // strh r2, [r6]
    // ldr r2, _021F437C ; =0x00001908
    // ldr r0, [r0, r2]
    // add r0, r0, r1
    // ldrb r0, [r0, #1]
    // lsl r0, r0, #3
    // add r0, #0x2c
    // strh r0, [r4]
    // mov r0, ip
    // bl ov18_021E8B18
    // cmp r0, #0x7c
    // beq _021F4328
    // add r1, r0, #0
    // sub r1, #0xb2
    // cmp r1, #1
    // bhi _021F4336
    // mov r0, #6
    // strb r0, [r5]
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add r0, r0, #4
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0x60
    // beq _021F4340
    // ldr r2, _021F4380 ; =0x000001E7
    // cmp r0, r2
    // bne _021F4352
    // mov r1, #0
    // strb r1, [r5]
    // ldrsh r0, [r6, r1]
    // add r0, r0, #4
    // strh r0, [r6]
    // ldrsh r0, [r4, r1]
    // add r0, r0, #4
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r0, #0x71
    // beq _021F4366
    // add r1, r2, #0
    // sub r1, #0xac
    // cmp r0, r1
    // beq _021F4366
    // add r1, r2, #3
    // sub r0, r0, r1
    // cmp r0, #2
    // bhi _021F4374
    // mov r0, #6
    // strb r0, [r5]
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add r0, r0, #4
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // strb r0, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F437C: .word 0x00001908
    // _021F4380: .word 0x000001E7
    // TODO: decompile
}




void ov18_021F4384(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // mov r1, #0
    // add r3, sp, #0xc
    // str r1, [sp, #4]
    // mov r1, #2
    // add r2, sp, #0x10
    // add r3, #2
    // add r5, r0, #0
    // str r1, [sp]
    // bl ov18_021F12C8
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, _021F4610 ; =0x000018CA
    // ldrsb r1, [r5, r0]
    // cmp r1, #0
    // bne _021F44A8
    // add r0, #0x36
    // ldr r0, [r5, r0]
    // mov r4, #1
    // cmp r0, #1
    // ble ov18_021F4478
    // add r6, sp, #8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021E8AB0
    // cmp r0, #0
    // add r0, sp, #8
    // bne _021F43DA
    // ldr r1, _021F4614 ; =0x000018FC
    // str r0, [sp]
    // ldr r2, [r5, r1]
    // lsl r1, r4, #2
    // ldr r1, [r2, r1]
    // add r3, sp, #8
    // add r0, r5, #0
    // add r2, sp, #0xc
    // add r3, #2
    // bl ov18_021F41C4
    // b _021F4400
    // ldr r1, _021F4614 ; =0x000018FC
    // str r0, [sp]
    // ldr r1, [r5, r1]
    // lsl r7, r4, #2
    // add r3, sp, #8
    // ldr r1, [r1, r7]
    // add r0, r5, #0
    // add r2, sp, #0xc
    // add r3, #2
    // bl ov18_021F42E4
    // ldr r0, _021F4614 ; =0x000018FC
    // ldr r0, [r5, r0]
    // ldr r0, [r0, r7]
    // bl ov18_021E8B18
    // add r1, sp, #0x14
    // bl ov18_021F47C0
    // mov r0, #2
    // str r0, [sp]
    // mov r2, #4
    // mov r3, #2
    // add r7, r4, #0
    // add r7, #8
    // ldrsh r2, [r6, r2]
    // ldrsh r3, [r6, r3]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov18_021F1294
    // ldrb r2, [r6]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov18_021F118C
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #1
    // bl ov18_021F11C0
    // ldrb r0, [r6]
    // lsl r1, r0, #1
    // ldr r0, _021F4618 ; =ov18_021FA3B0
    // add r3, r0, r1
    // ldrb r0, [r0, r1]
    // lsr r2, r0, #1
    // mov r0, #4
    // ldrsh r1, [r6, r0]
    // mov r0, #8
    // ldrsh r7, [r6, r0]
    // sub r0, r1, r2
    // cmp r7, r0
    // blt _021F4468
    // add r0, r1, r2
    // cmp r7, r0
    // bge _021F4468
    // ldrb r0, [r3, #1]
    // lsr r2, r0, #1
    // mov r0, #2
    // ldrsh r1, [r6, r0]
    // mov r0, #6
    // ldrsh r0, [r6, r0]
    // sub r3, r1, r2
    // cmp r0, r3
    // blt _021F4468
    // add r1, r1, r2
    // cmp r0, r1
    // bge _021F4468
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // mov r0, #0x19
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // cmp r4, r0
    // blt _021F43B4
    // add r4, #8
    // ldr r1, [sp, #0x14]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl ov18_021F47F8
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // bne _021F4490
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // bne _021F4492
    // b _021F4602
    // add r1, r4, #0
    // add r4, sp, #8
    // mov r2, #8
    // mov r3, #6
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, r5, #0
    // bl ov18_021F4974
    // str r0, [sp, #4]
    // b _021F4602
    // add r0, r5, #0
    // bl ov18_021F4620
    // ldr r1, _021F4610 ; =0x000018CA
    // add r0, r5, #0
    // ldrsb r1, [r5, r1]
    // bl ov18_021E8AB0
    // cmp r0, #0
    // add r0, sp, #8
    // ldr r1, _021F4614 ; =0x000018FC
    // bne _021F4542
    // str r0, [sp]
    // ldr r2, [r5, r1]
    // sub r1, #0x32
    // ldrsb r1, [r5, r1]
    // add r3, sp, #8
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // add r2, sp, #0xc
    // add r3, #2
    // bl ov18_021F41C4
    // mov r4, #2
    // str r4, [sp]
    // add r3, sp, #8
    // mov r2, #4
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r4]
    // add r0, r5, #0
    // mov r1, #9
    // bl ov18_021F1294
    // add r2, sp, #8
    // ldrb r2, [r2]
    // add r0, r5, #0
    // mov r1, #9
    // bl ov18_021F118C
    // add r0, r5, #0
    // mov r1, #9
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, sp, #8
    // ldrb r1, [r0]
    // lsl r4, r1, #1
    // ldr r1, _021F4618 ; =ov18_021FA3B0
    // ldrb r1, [r1, r4]
    // lsr r3, r1, #1
    // mov r1, #4
    // ldrsh r2, [r0, r1]
    // mov r1, #8
    // ldrsh r1, [r0, r1]
    // sub r6, r2, r3
    // cmp r1, r6
    // blt _021F4602
    // add r2, r2, r3
    // cmp r1, r2
    // bge _021F4602
    // ldr r1, _021F461C ; =ov18_021FA3B0 + 1
    // mov r2, #2
    // ldrb r1, [r1, r4]
    // ldrsh r3, [r0, r2]
    // mov r2, #6
    // ldrsh r2, [r0, r2]
    // lsr r1, r1, #1
    // sub r0, r3, r1
    // cmp r2, r0
    // blt _021F4602
    // add r0, r3, r1
    // cmp r2, r0
    // bge _021F4602
    // mov r0, #1
    // str r0, [sp, #4]
    // b _021F4602
    // str r0, [sp]
    // ldr r2, [r5, r1]
    // sub r1, #0x32
    // ldrsb r1, [r5, r1]
    // add r3, sp, #8
    // add r0, r5, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // add r2, sp, #0xc
    // add r3, #2
    // bl ov18_021F42E4
    // ldr r0, _021F4614 ; =0x000018FC
    // ldr r1, [r5, r0]
    // sub r0, #0x32
    // ldrsb r0, [r5, r0]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl ov18_021E8B18
    // add r1, sp, #0x14
    // bl ov18_021F47C0
    // mov r4, #2
    // str r4, [sp]
    // add r3, sp, #8
    // mov r2, #4
    // ldrsh r2, [r3, r2]
    // ldrsh r3, [r3, r4]
    // add r0, r5, #0
    // mov r1, #9
    // bl ov18_021F1294
    // add r2, sp, #8
    // ldrb r2, [r2]
    // add r0, r5, #0
    // mov r1, #9
    // bl ov18_021F118C
    // add r0, r5, #0
    // mov r1, #9
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, sp, #8
    // ldrb r1, [r0]
    // lsl r4, r1, #1
    // ldr r1, _021F4618 ; =ov18_021FA3B0
    // ldrb r1, [r1, r4]
    // lsr r3, r1, #1
    // mov r1, #4
    // ldrsh r2, [r0, r1]
    // mov r1, #8
    // ldrsh r1, [r0, r1]
    // sub r6, r2, r3
    // cmp r1, r6
    // blt _021F45D8
    // add r2, r2, r3
    // cmp r1, r2
    // bge _021F45D8
    // ldr r1, _021F461C ; =ov18_021FA3B0 + 1
    // mov r2, #2
    // ldrb r1, [r1, r4]
    // ldrsh r3, [r0, r2]
    // mov r2, #6
    // ldrsh r2, [r0, r2]
    // lsr r1, r1, #1
    // sub r0, r3, r1
    // cmp r2, r0
    // blt _021F45D8
    // add r0, r3, r1
    // cmp r2, r0
    // bge _021F45D8
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x14]
    // add r0, r5, #0
    // mov r2, #0xa
    // bl ov18_021F47F8
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // bne _021F4602
    // ldr r0, [sp, #0x14]
    // cmp r0, #0
    // beq _021F4602
    // add r4, sp, #8
    // mov r2, #8
    // mov r3, #6
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    // add r0, r5, #0
    // mov r1, #0xa
    // bl ov18_021F4974
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, r5, #0
    // bl ov18_021F69C0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F4610: .word 0x000018CA
    // _021F4614: .word 0x000018FC
    // _021F4618: .word ov18_021FA3B0
    // _021F461C: .word ov18_021FA3B0 + 1
    // TODO: decompile
}




void ov18_021F4620(void) {
}




void ov18_021F463C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // mov r1, #0
    // str r1, [sp, #8]
    // str r1, [sp, #4]
    // ldr r1, _021F47B0 ; =0x000018CA
    // add r5, r0, #0
    // ldrsb r2, [r5, r1]
    // cmp r2, #0
    // bne _021F470A
    // add r1, #0x36
    // ldr r0, [r5, r1]
    // mov r4, #1
    // cmp r0, #1
    // ble ov18_021F46EC
    // ldr r7, _021F47B4 ; =0x000018CB
    // add r6, r7, #0
    // ldrb r2, [r5, r6]
    // add r0, r5, #0
    // add r1, r4, #0
    // lsl r2, r2, #0x19
    // lsr r2, r2, #0x1f
    // bl ov18_021E8ACC
    // cmp r0, #0
    // beq _021F4694
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x69
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldrb r1, [r5, r7]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1f
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverride
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #8
    // mov r2, #1
    // bl ov18_021F11C0
    // b _021F46BE
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #8
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021E8AB0
    // cmp r0, #0
    // beq _021F46BE
    // ldr r0, _021F47B8 ; =0x000018FC
    // ldr r1, [r5, r0]
    // lsl r0, r4, #2
    // ldr r0, [r1, r0]
    // bl ov18_021E8B18
    // add r1, sp, #4
    // bl ov18_021F47C0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021E8AB0
    // cmp r0, #0
    // beq _021F46DC
    // ldr r0, _021F47B8 ; =0x000018FC
    // ldr r1, [r5, r0]
    // lsl r0, r4, #2
    // ldr r0, [r1, r0]
    // bl ov18_021E8B18
    // add r1, sp, #8
    // bl ov18_021F47C0
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // mov r0, #0x19
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // cmp r4, r0
    // blt _021F465E
    // ldr r0, _021F47B4 ; =0x000018CB
    // add r4, #8
    // ldrb r0, [r5, r0]
    // add r3, r4, #0
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1f
    // add r0, r0, #4
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // add r0, r5, #0
    // bl ov18_021F48AC
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // bl ov18_021F4620
    // ldr r2, _021F47B0 ; =0x000018CA
    // add r0, r5, #0
    // ldrsb r1, [r5, r2]
    // add r2, r2, #1
    // ldrb r2, [r5, r2]
    // lsl r2, r2, #0x19
    // lsr r2, r2, #0x1f
    // bl ov18_021E8ACC
    // cmp r0, #0
    // beq _021F4742
    // ldr r1, _021F47B4 ; =0x000018CB
    // ldr r0, _021F47BC ; =0x00000694
    // ldrb r1, [r5, r1]
    // ldr r0, [r5, r0]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1f
    // add r1, r1, #4
    // bl ManagedSprite_SetPaletteOverride
    // add r0, r5, #0
    // mov r1, #9
    // mov r2, #1
    // bl ov18_021F11C0
    // b _021F4770
    // add r0, r5, #0
    // mov r1, #9
    // mov r2, #0
    // bl ov18_021F11C0
    // ldr r1, _021F47B0 ; =0x000018CA
    // add r0, r5, #0
    // ldrsb r1, [r5, r1]
    // bl ov18_021E8AB0
    // cmp r0, #0
    // beq _021F4770
    // ldr r0, _021F47B8 ; =0x000018FC
    // ldr r1, [r5, r0]
    // sub r0, #0x32
    // ldrsb r0, [r5, r0]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl ov18_021E8B18
    // add r1, sp, #4
    // bl ov18_021F47C0
    // ldr r1, _021F47B0 ; =0x000018CA
    // add r0, r5, #0
    // ldrsb r1, [r5, r1]
    // bl ov18_021E8AB0
    // cmp r0, #0
    // beq _021F4794
    // ldr r0, _021F47B8 ; =0x000018FC
    // ldr r1, [r5, r0]
    // sub r0, #0x32
    // ldrsb r0, [r5, r0]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // bl ov18_021E8B18
    // add r1, sp, #8
    // bl ov18_021F47C0
    // ldr r0, _021F47B4 ; =0x000018CB
    // mov r3, #0xa
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1f
    // add r0, r0, #4
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #4]
    // add r0, r5, #0
    // bl ov18_021F48AC
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021F47B0: .word 0x000018CA
    // _021F47B4: .word 0x000018CB
    // _021F47B8: .word 0x000018FC
    // _021F47BC: .word 0x00000694
    // TODO: decompile
}




void ov18_021F47C0(void) {
    // orr r0, r2
    // str r0, [r1]
    // sub r2, #0xed
    // orr r0, r2
    // str r0, [r1]
    // orr r0, r2
    // str r0, [r1]
}




void ov18_021F47F8(void) {
    // tst r1, r6
    // str r1, [sp]
    ov18_021F1294(r2, 0x94, 0x4c);
    ov18_021F118C(r5, r4, 0);
    ov18_021F11C0(r5, r4, 1);
    // tst r1, r0
    // str r0, [sp]
    ov18_021F1294(r5, (r4 + 1), 0xec, 0x4c);
    ov18_021F118C(r5, r4, 0);
    ov18_021F11C0(r5, r4, 1);
    // tst r0, r6
    // str r0, [sp]
    ov18_021F1294(r5, (r4 + 1), 0xe4, 0x5c);
    ov18_021F118C(r5, r4, 0);
    ov18_021F11C0(r5, r4, 1);
    // str r0, [sp]
    ov18_021F1294(r5, (r4 + 1), 0xdc, 0x7c);
    ov18_021F118C(r5, (r4 + 1), 0);
    ov18_021F11C0(r5, (r4 + 1), 1);
}




void ov18_021F48AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r2, #0
    // mov r2, #1
    // add r5, r0, #0
    // add r6, r1, #0
    // add r4, r3, #0
    // tst r1, r2
    // beq _021F48E4
    // add r1, r7, #0
    // tst r1, r2
    // beq _021F48CC
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // b _021F48E2
    // add r1, r4, #0
    // bl ov18_021F11C0
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #0x18]
    // bl ManagedSprite_SetPaletteOverride
    // add r4, r4, #1
    // mov r0, #2
    // add r1, r6, #0
    // tst r1, r0
    // beq _021F4918
    // tst r0, r7
    // beq _021F48FC
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // b _021F4916
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov18_021F11C0
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #0x18]
    // bl ManagedSprite_SetPaletteOverride
    // add r4, r4, #1
    // mov r0, #4
    // add r1, r6, #0
    // tst r1, r0
    // beq _021F496C
    // tst r0, r7
    // beq _021F493A
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // add r1, r4, #1
    // mov r2, #0
    // bl ov18_021F11C0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r5, #0
    // add r1, r4, #1
    // mov r2, #1
    // bl ov18_021F11C0
    // lsl r4, r4, #2
    // mov r0, #0x67
    // ldr r6, [sp, #0x18]
    // add r1, r5, r4
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, r6, #0
    // bl ManagedSprite_SetPaletteOverride
    // ldr r0, _021F4970 ; =0x00000674
    // add r1, r5, r4
    // ldr r0, [r1, r0]
    // add r1, r6, #0
    // bl ManagedSprite_SetPaletteOverride
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F4970: .word 0x00000674
    // TODO: decompile
}




void ov18_021F4974(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // str r0, [sp, #4]
    // add r0, r5, #4
    // add r6, r2, #0
    // add r7, r3, #0
    // str r0, [sp, #8]
    // cmp r5, r0
    // bhs _021F49EE
    // ldr r0, [sp, #4]
    // lsl r1, r5, #2
    // add r4, r0, r1
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ManagedSprite_GetDrawFlag
    // cmp r0, #0
    // beq _021F49E4
    // mov r0, #2
    // str r0, [sp]
    // add r2, sp, #0xc
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // add r2, #2
    // add r3, sp, #0xc
    // bl ov18_021F12C8
    // ldr r0, _021F49F4 ; =ov18_021FA3B0
    // add r2, sp, #0xc
    // ldrb r0, [r0]
    // mov r1, #2
    // ldrsh r2, [r2, r1]
    // lsr r0, r0, #1
    // sub r1, r2, r0
    // cmp r6, r1
    // blt _021F49E4
    // add r0, r2, r0
    // cmp r6, r0
    // bge _021F49E4
    // ldr r0, _021F49F4 ; =ov18_021FA3B0
    // add r2, sp, #0xc
    // ldrb r0, [r0, #1]
    // mov r1, #0
    // ldrsh r2, [r2, r1]
    // lsr r0, r0, #1
    // sub r1, r2, r0
    // cmp r7, r1
    // blt _021F49E4
    // add r0, r2, r0
    // cmp r7, r0
    // bge _021F49E4
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [sp, #8]
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, r0
    // blo _021F498E
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F49F4: .word ov18_021FA3B0
    // TODO: decompile
}




void ov18_021F49F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // bl ov18_021F4A6C
    // mov r6, #1
    // mov r4, #0x34
    // add r5, r7, #4
    // add r2, r4, #0
    // ldr r1, _021F4A4C ; =ov18_021FA7B0
    // sub r2, #0x34
    // add r0, r7, #0
    // add r1, r1, r2
    // bl ov18_021F11EC
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r6, r6, #1
    // add r4, #0x34
    // add r5, r5, #4
    // cmp r6, #0xa
    // blo _021F4A06
    // add r0, r7, #0
    // bl ov18_021F4D64
    // add r0, r7, #0
    // bl ov18_021F4DDC
    // add r0, r7, #0
    // bl ov18_021F4E28
    // add r0, r7, #0
    // mov r1, #3
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r7, #0
    // mov r1, #5
    // mov r2, #0
    // bl ov18_021F11C0
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F4A4C: .word ov18_021FA7B0
    // TODO: decompile
}




void ov18_021F4A50(void) {
    ov18_021F10E8(r0, 1);
    ov18_021F4CC4(r5);
}




void ov18_021F4A6C(void) {
    // push {r4, lr}
    // sub sp, #0x18
    // mov r1, #1
    // add r4, r0, #0
    // bl ov18_021F1324
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F4C98 ; =0x0000C551
    // ldr r1, _021F4C9C ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F4CA0 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x4c
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // bl sub_02074490
    // ldr r2, _021F4CA4 ; =0x00000858
    // ldr r3, _021F4C9C ; =0x00000668
    // ldr r1, [r4, r2]
    // sub r2, #8
    // str r1, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r1, #3
    // str r1, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021F4C98 ; =0x0000C551
    // str r0, [sp, #0x14]
    // ldr r0, [r4, r2]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r3, [r4, r3]
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F4CA8 ; =0x0000C55A
    // ldr r1, _021F4C9C ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F4CA0 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x6a
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F4CA8 ; =0x0000C55A
    // ldr r1, _021F4C9C ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F4CA0 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x6b
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F4CAC ; =0x0000C55B
    // ldr r1, _021F4C9C ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F4CA0 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x70
    // bl SpriteSystem_LoadCellResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F4CAC ; =0x0000C55B
    // ldr r1, _021F4C9C ; =0x00000668
    // str r0, [sp, #4]
    // ldr r2, _021F4CA0 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x71
    // bl SpriteSystem_LoadAnimResObjFromOpenNarc
    // ldr r0, [r4]
    // ldr r0, [r0, #4]
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // ldr r1, _021F4C9C ; =0x00000668
    // bne _021F4BE8
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F4CB0 ; =0x0000C59B
    // ldr r2, _021F4CA0 ; =0x00000854
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x69
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F4CB4 ; =0x0000C59C
    // ldr r1, _021F4C9C ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F4CA0 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x69
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F4CB8 ; =0x0000C59D
    // ldr r1, _021F4C9C ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F4CA0 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x6f
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F4CA0 ; =0x00000854
    // ldr r3, _021F4C9C ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x6c
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, _021F4CBC ; =0x0000C55D
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // ldr r0, _021F4CA0 ; =0x00000854
    // ldr r3, _021F4C9C ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x6c
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _021F4CC0 ; =0x0000C55E
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F4CB0 ; =0x0000C59B
    // ldr r2, _021F4CA0 ; =0x00000854
    // str r0, [sp, #8]
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x6d
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F4CB4 ; =0x0000C59C
    // ldr r1, _021F4C9C ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F4CA0 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x6d
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // ldr r0, _021F4CB8 ; =0x0000C59D
    // ldr r1, _021F4C9C ; =0x00000668
    // str r0, [sp, #8]
    // ldr r2, _021F4CA0 ; =0x00000854
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #0x72
    // bl SpriteSystem_LoadCharResObjFromOpenNarc
    // ldr r0, _021F4CA0 ; =0x00000854
    // ldr r3, _021F4C9C ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x6e
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, _021F4CBC ; =0x0000C55D
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #2
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // ldr r0, _021F4CA0 ; =0x00000854
    // ldr r3, _021F4C9C ; =0x00000668
    // ldr r1, [r4, r0]
    // sub r0, r0, #4
    // str r1, [sp]
    // mov r1, #0x6e
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #1
    // str r1, [sp, #0xc]
    // mov r1, #2
    // str r1, [sp, #0x10]
    // ldr r1, _021F4CC0 ; =0x0000C55E
    // str r1, [sp, #0x14]
    // ldr r2, [r4, r3]
    // add r3, r3, #4
    // ldr r0, [r4, r0]
    // ldr r3, [r4, r3]
    // mov r1, #3
    // bl SpriteSystem_LoadPaletteBufferFromOpenNarc
    // add sp, #0x18
    // pop {r4, pc}
    // _021F4C98: .word 0x0000C551
    // _021F4C9C: .word 0x00000668
    // _021F4CA0: .word 0x00000854
    // _021F4CA4: .word 0x00000858
    // _021F4CA8: .word 0x0000C55A
    // _021F4CAC: .word 0x0000C55B
    // _021F4CB0: .word 0x0000C59B
    // _021F4CB4: .word 0x0000C59C
    // _021F4CB8: .word 0x0000C59D
    // _021F4CBC: .word 0x0000C55D
    // _021F4CC0: .word 0x0000C55E
    // TODO: decompile
}




void ov18_021F4CC4(void) {
    // push {r4, lr}
    // mov r1, #1
    // add r4, r0, #0
    // bl ov18_021F13DC
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D44 ; =0x0000C551
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D44 ; =0x0000C551
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D48 ; =0x0000C55A
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D48 ; =0x0000C55A
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D4C ; =0x0000C55B
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCellObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D4C ; =0x0000C55B
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadAnimObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D50 ; =0x0000C59B
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D54 ; =0x0000C59C
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D58 ; =0x0000C59D
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadCharObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D5C ; =0x0000C55D
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // ldr r0, _021F4D40 ; =0x0000066C
    // ldr r1, _021F4D60 ; =0x0000C55E
    // ldr r0, [r4, r0]
    // bl SpriteManager_UnloadPlttObjById
    // pop {r4, pc}
    // nop
    // _021F4D40: .word 0x0000066C
    // _021F4D44: .word 0x0000C551
    // _021F4D48: .word 0x0000C55A
    // _021F4D4C: .word 0x0000C55B
    // _021F4D50: .word 0x0000C59B
    // _021F4D54: .word 0x0000C59C
    // _021F4D58: .word 0x0000C59D
    // _021F4D5C: .word 0x0000C55D
    // _021F4D60: .word 0x0000C55E
    // TODO: decompile
}




void ov18_021F4D64(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _021F4DD0 ; =0x000018A4
    // add r5, r0, #0
    // ldrb r3, [r5, r1]
    // mov r0, #0x80
    // add r2, r3, #0
    // tst r2, r0
    // beq _021F4D8E
    // eor r0, r3
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // sub r0, r1, #2
    // ldrh r0, [r5, r0]
    // cmp r0, #0xac
    // bne _021F4D90
    // cmp r4, #2
    // bne _021F4D8A
    // mov r4, #1
    // b _021F4D90
    // mov r4, #0
    // b _021F4D90
    // mov r4, #0
    // ldr r1, _021F4DD4 ; =0x000018A2
    // add r0, r5, #0
    // ldrh r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #2
    // bl ov18_021F14FC
    // ldr r1, _021F4DD4 ; =0x000018A2
    // add r0, r5, #0
    // ldrh r1, [r5, r1]
    // add r2, r4, #0
    // mov r3, #3
    // bl ov18_021F1534
    // ldr r0, _021F4DD8 ; =0x0000068C
    // mov r1, #2
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, _021F4DD8 ; =0x0000068C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetAffineZRotation
    // ldr r0, _021F4DD8 ; =0x0000068C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // sub r2, r1, #4
    // bl ManagedSprite_SetAffineTranslation
    // pop {r3, r4, r5, pc}
    // nop
    // _021F4DD0: .word 0x000018A4
    // _021F4DD4: .word 0x000018A2
    // _021F4DD8: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F4DDC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r2, sp, #4
    // mov r1, #0
    // add r2, #1
    // add r3, sp, #4
    // add r5, r0, #0
    // bl ov18_021F3CA8
    // ldr r1, _021F4E20 ; =0x000018CC
    // mov r0, #2
    // add r4, r5, r1
    // str r0, [sp]
    // sub r1, #0x2a
    // add r3, sp, #4
    // ldrb r2, [r3, #1]
    // ldrh r1, [r5, r1]
    // ldrb r3, [r3]
    // add r0, r5, #0
    // bl ov18_021F69E8
    // ldr r0, _021F4E24 ; =0x000018A2
    // ldr r1, [r4, #8]
    // ldrh r0, [r5, r0]
    // ldr r2, [r4, #0xc]
    // lsl r3, r0, #1
    // ldrsh r1, [r1, r3]
    // ldrsh r2, [r2, r3]
    // add r0, r5, #0
    // bl ov18_021F6AB0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _021F4E20: .word 0x000018CC
    // _021F4E24: .word 0x000018A2
    // TODO: decompile
}




void ov18_021F4E28(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // ldr r1, _021F4EA4 ; =0x000018CC
    // add r4, r0, #0
    // add r2, r4, r1
    // sub r1, #0x2a
    // ldrh r1, [r4, r1]
    // ldr r2, [r2, #4]
    // mov r0, #1
    // lsl r1, r1, #1
    // ldrsh r1, [r2, r1]
    // lsl r0, r0, #0x14
    // lsl r1, r1, #0xc
    // bl FX_Div
    // bl _fflt
    // ldr r1, _021F4EA8 ; =0x45800000
    // bl _fdiv
    // add r5, r0, #0
    // ldr r0, _021F4EAC ; =0x00000674
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl ManagedSprite_SetAffineOverwriteMode
    // ldr r0, _021F4EAC ; =0x00000674
    // add r1, r5, #0
    // ldr r0, [r4, r0]
    // add r2, r5, #0
    // bl ManagedSprite_SetAffineScale
    // mov r0, #2
    // add r2, sp, #4
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #1
    // add r2, #2
    // add r3, sp, #4
    // bl ov18_021F12C8
    // mov r2, #2
    // ldr r6, _021F4EA4 ; =0x000018CC
    // str r2, [sp]
    // add r5, sp, #4
    // mov r3, #0
    // ldrsh r2, [r5, r2]
    // ldrsh r5, [r5, r3]
    // ldr r3, [r4, r6]
    // sub r6, #0x2a
    // add r0, r4, #0
    // ldrh r4, [r4, r6]
    // mov r1, #1
    // lsl r4, r4, #1
    // ldrsh r3, [r3, r4]
    // add r3, r5, r3
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // bl ov18_021F1294
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _021F4EA4: .word 0x000018CC
    // _021F4EA8: .word 0x45800000
    // _021F4EAC: .word 0x00000674
    // TODO: decompile
}




void ov18_021F4EB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // asr r0, r0, #4
    // lsl r6, r0, #1
    // add r5, r1, #0
    // ldr r0, _021F4F90 ; =FX_SinCosTable_
    // lsl r1, r6, #1
    // ldrsh r7, [r0, r1]
    // add r4, r2, #0
    // add r0, r7, #0
    // bl _fflt
    // ldr r1, _021F4F94 ; =0x45800000
    // bl _fdiv
    // mov r1, #0
    // bl _fgr
    // bls _021F4EF4
    // add r0, r7, #0
    // bl _fflt
    // ldr r1, _021F4F94 ; =0x45800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _021F4F94 ; =0x45800000
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _021F4F10
    // add r0, r7, #0
    // bl _fflt
    // ldr r1, _021F4F94 ; =0x45800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _021F4F94 ; =0x45800000
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // add r7, r0, #0
    // add r0, r6, #1
    // lsl r1, r0, #1
    // ldr r0, _021F4F90 ; =FX_SinCosTable_
    // ldrsh r6, [r0, r1]
    // add r0, r6, #0
    // bl _fflt
    // ldr r1, _021F4F94 ; =0x45800000
    // bl _fdiv
    // mov r1, #0
    // bl _fgr
    // bls _021F4F52
    // add r0, r6, #0
    // bl _fflt
    // ldr r1, _021F4F94 ; =0x45800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _021F4F94 ; =0x45800000
    // bl _fmul
    // add r1, r0, #0
    // mov r0, #0x3f
    // lsl r0, r0, #0x18
    // bl _fadd
    // b _021F4F6E
    // add r0, r6, #0
    // bl _fflt
    // ldr r1, _021F4F94 ; =0x45800000
    // bl _fdiv
    // add r1, r0, #0
    // ldr r0, _021F4F94 ; =0x45800000
    // bl _fmul
    // mov r1, #0x3f
    // lsl r1, r1, #0x18
    // bl _fsub
    // bl _ffix
    // mov r2, #0
    // ldrsh r1, [r5, r2]
    // mov r3, #0x38
    // add r6, r7, #0
    // mul r6, r3
    // asr r6, r6, #0xc
    // add r1, r1, r6
    // strh r1, [r5]
    // add r1, r0, #0
    // mul r1, r3
    // ldrsh r2, [r4, r2]
    // asr r0, r1, #0xc
    // add r0, r2, r0
    // strh r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F4F90: .word FX_SinCosTable_
    // _021F4F94: .word 0x45800000
    // TODO: decompile
}




void ov18_021F4F98(void) {
    // add r1, sp, #0x1c
    // add r2, sp, #0x20
    ov18_021F4EB0(r2);
    // str r0, [sp]
    // add r4, sp, #0x10
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    ov18_021F1294(r5, r4, 0xc, 0x10);
}




void ov18_021F4FC8(void) {
    // str r1, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    ov18_021F12C8(r2);
    // add r6, sp, #4
    // ldrsh r0, [r6, r3]
    // sub r0, #0x10
    // strh r0, [r6]
    // str r0, [sp]
    // ldrsh r2, [r6, r2]
    // ldrsh r3, [r6, r3]
    ov18_021F1294(r5, r4, 2, 0);
}




void ov18_021F5000(void) {
    // push {r3, r4, r5, lr}
    // ldr r2, _021F5048 ; =0xFFFFC000
    // add r4, r1, #0
    // sub r2, r2, r4
    // mov r1, #0x68
    // lsl r2, r2, #0x10
    // str r1, [sp]
    // mov r1, #8
    // lsr r2, r2, #0x10
    // mov r3, #0x80
    // add r5, r0, #0
    // bl ov18_021F4F98
    // mov r2, #1
    // lsl r2, r2, #0xe
    // sub r2, r2, r4
    // mov r0, #0x68
    // lsl r2, r2, #0x10
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #9
    // lsr r2, r2, #0x10
    // mov r3, #0x80
    // bl ov18_021F4F98
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #8
    // bl ov18_021F4FC8
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #9
    // bl ov18_021F4FC8
    // pop {r3, r4, r5, pc}
    // _021F5048: .word 0xFFFFC000
    // TODO: decompile
}




void ov18_021F504C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // str r5, [r4]
    // mov r0, #0
    // str r0, [r4, #4]
    // strb r0, [r4, #0xb]
    // ldr r0, [r5]
    // ldr r0, [r0, #4]
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // bne _021F506C
    // mov r0, #0x19
    // lsl r0, r0, #4
    // b _021F506E
    // ldr r0, _021F50B4 ; =0x0000019A
    // ldr r1, _021F50B8 ; =0x0000184C
    // ldr r2, [r5, r1]
    // add r1, #0x56
    // ldrh r1, [r5, r1]
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // cmp r1, r0
    // blo _021F5086
    // add r2, r0, #0
    // add r0, r1, #0
    // mov r1, #0
    // b _021F508A
    // add r2, r1, #0
    // mov r1, #1
    // strb r1, [r4, #0xa]
    // sub r0, r0, r2
    // mov r1, #0xa
    // bl _u32_div_f
    // ldr r3, _021F50BC ; =ov18_021FA5CC
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // blo _021F50A8
    // ldrh r1, [r3, #2]
    // cmp r0, r1
    // bhi _021F50A8
    // strh r2, [r4, #8]
    // pop {r3, r4, r5, pc}
    // add r2, r2, #1
    // add r3, r3, #4
    // cmp r2, #0x11
    // blo _021F5098
    // pop {r3, r4, r5, pc}
    // nop
    // _021F50B4: .word 0x0000019A
    // _021F50B8: .word 0x0000184C
    // _021F50BC: .word ov18_021FA5CC
    // TODO: decompile
}




void ov18_021F50C0(void) {
    // str r0, [sp]
    // add r2, sp, #8
    // add r2, #2
    // add r3, sp, #8
    ov18_021F12C8(*((u32*)r0), 2);
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    ov18_021F12C8(*((u32*)r4), 4);
    // add r0, r1, r0
    *((u32*)(r4 + 4)) = (1 << 0xa);
    // add r2, sp, #4
    // ldrsh r3, [r2, r1]
    // asr r0, r0, #0xc
    // add r0, r3, r0
    *((u16*)(r2 + 4)) = (1 << 0xa);
    // ldrsh r3, [r2, r0]
    // asr r0, r0, #0xc
    // add r0, r3, r0
    // strh r0, [r2]
    // ldrsh r3, [r2, r1]
    // str r0, [sp]
    // ldrsh r2, [r2, r3]
    ov18_021F1294(*((u32*)r4), 2, 0x58);
    // str r0, [sp]
    // add r3, sp, #4
    // ldrsh r2, [r3, r2]
    ov18_021F1294(*((u32*)r4), 4, 2, 0x58);
    // str r0, [sp]
    // ldrsh r2, [r2, r5]
    ov18_021F1294(*((u32*)r4), 2);
    // str r0, [sp]
    // add r4, sp, #4
    // ldrsh r2, [r4, r2]
    // ldrsh r3, [r4, r3]
    ov18_021F1294(*((u32*)r4), 4, 2, 0);
}




void ov18_021F516C(void) {
    // push {r3, lr}
    // ldrh r1, [r0, #8]
    // lsl r2, r1, #2
    // ldr r1, _021F517C ; =ov18_021FA588
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r3, pc}
    // nop
    // _021F517C: .word ov18_021FA588
    // TODO: decompile
}




void ov18_021F5180(void) {
    // neg r1, r1
    *((u32*)(r0 + 0xc)) = r1;
    *((u32*)(r0 + 0x10)) = r2;
    *((u32*)(r0 + 0xc)) = r1;
    // neg r1, r2
    *((u32*)(r0 + 0x10)) = r1;
}




void ov18_021F5198(void) {
    // neg r1, r1
    *((u32*)(r0 + 0xc)) = r1;
    // neg r1, r2
    *((u32*)(r0 + 0x10)) = r1;
    // neg r1, r3
    *((u32*)(r0 + 0x14)) = r1;
    *((u32*)(r0 + 0xc)) = r1;
    *((u32*)(r0 + 0x10)) = r2;
    *((u32*)(r0 + 0x14)) = r3;
}




void ov18_021F51BC(void) {
}




void ov18_021F51CC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #0
    // beq _021F51DC
    // cmp r0, #1
    // beq _021F51FA
    // b _021F522A
    // ldr r0, _021F5230 ; =0x000008EB
    // bl PlaySE
    // mov r2, #0x1f
    // mvn r2, r2
    // mov r1, #1
    // add r3, r2, #0
    // add r0, r4, #0
    // lsl r1, r1, #8
    // sub r3, #0xc0
    // bl ov18_021F5198
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5234 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5234 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r1, r1, r0
    // str r1, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // cmp r1, r0
    // bne _021F522A
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _021F5230: .word 0x000008EB
    // _021F5234: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F5238(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #0
    // beq _021F5248
    // cmp r0, #1
    // beq _021F5266
    // b _021F5296
    // ldr r0, _021F529C ; =0x000008EB
    // bl PlaySE
    // mov r2, #0x1f
    // mvn r2, r2
    // mov r1, #0x12
    // add r3, r2, #0
    // add r0, r4, #0
    // lsl r1, r1, #4
    // sub r3, #0xe0
    // bl ov18_021F5198
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F52A0 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F52A0 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r1, r1, r0
    // str r1, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // cmp r1, r0
    // bne _021F5296
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _021F529C: .word 0x000008EB
    // _021F52A0: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F52A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #0
    // beq _021F52B4
    // cmp r0, #1
    // beq _021F52D0
    // b _021F5300
    // ldr r0, _021F5304 ; =0x000008EB
    // bl PlaySE
    // mov r1, #5
    // mov r2, #0x1f
    // ldr r3, _021F5308 ; =0xFFFFFEE0
    // add r0, r4, #0
    // lsl r1, r1, #6
    // mvn r2, r2
    // bl ov18_021F5198
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F530C ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F530C ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r1, r1, r0
    // str r1, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // cmp r1, r0
    // bne _021F5300
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // _021F5304: .word 0x000008EB
    // _021F5308: .word 0xFFFFFEE0
    // _021F530C: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F5310(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #0
    // beq _021F5320
    // cmp r0, #1
    // beq _021F533C
    // b _021F536C
    // ldr r0, _021F5370 ; =0x000008EB
    // bl PlaySE
    // mov r1, #0x16
    // mov r2, #0x1f
    // ldr r3, _021F5374 ; =0xFFFFFEC0
    // add r0, r4, #0
    // lsl r1, r1, #4
    // mvn r2, r2
    // bl ov18_021F5198
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5378 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5378 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r1, r1, r0
    // str r1, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // cmp r1, r0
    // bne _021F536C
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // _021F5370: .word 0x000008EB
    // _021F5374: .word 0xFFFFFEC0
    // _021F5378: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F537C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #0
    // beq _021F538C
    // cmp r0, #1
    // beq _021F53A8
    // b _021F53D8
    // ldr r0, _021F53DC ; =0x000008EB
    // bl PlaySE
    // mov r1, #6
    // mov r2, #0x1f
    // ldr r3, _021F53E0 ; =0xFFFFFEA0
    // add r0, r4, #0
    // lsl r1, r1, #6
    // mvn r2, r2
    // bl ov18_021F5198
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F53E4 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F53E4 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r1, r1, r0
    // str r1, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // cmp r1, r0
    // bne _021F53D8
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // _021F53DC: .word 0x000008EB
    // _021F53E0: .word 0xFFFFFEA0
    // _021F53E4: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F53E8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #0
    // beq _021F53F8
    // cmp r0, #1
    // beq _021F5414
    // b _021F5444
    // ldr r0, _021F5448 ; =0x000008EB
    // bl PlaySE
    // mov r1, #7
    // mov r2, #0x3f
    // ldr r3, _021F544C ; =0xFFFFFEC0
    // add r0, r4, #0
    // lsl r1, r1, #6
    // mvn r2, r2
    // bl ov18_021F5198
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5450 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5450 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r1, r1, r0
    // str r1, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // cmp r1, r0
    // bne _021F5444
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // _021F5448: .word 0x000008EB
    // _021F544C: .word 0xFFFFFEC0
    // _021F5450: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F5454(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #0
    // beq _021F5464
    // cmp r0, #1
    // beq _021F5480
    // b _021F54B0
    // ldr r0, _021F54B4 ; =0x000008EB
    // bl PlaySE
    // mov r1, #2
    // mov r2, #0x3f
    // ldr r3, _021F54B8 ; =0xFFFFFE80
    // add r0, r4, #0
    // lsl r1, r1, #8
    // mvn r2, r2
    // bl ov18_021F5198
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F54BC ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F54BC ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r1, r1, r0
    // str r1, [r4, #0xc]
    // ldr r0, [r4, #0x14]
    // cmp r1, r0
    // bne _021F54B0
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // _021F54B4: .word 0x000008EB
    // _021F54B8: .word 0xFFFFFE80
    // _021F54BC: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F54C0(void) {
    *((u16*)(r0 + 0x18)) = r1;
    *((u16*)(r0 + 0x1a)) = r2;
    // str r0, [sp]
    // add r2, sp, #8
    // add r2, #2
    // add r3, sp, #8
    ov18_021F12C8(*((u32*)r0), 2);
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    ov18_021F12C8(*((u32*)r4), 4);
    // add r1, sp, #4
    // ldrsh r3, [r1, r2]
    // ldrsh r0, [r1, r0]
    *((u16*)(r4 + 0x1c)) = 2;
    *((u16*)(r4 + 0x1e)) = 8;
    ov18_021F11C0(*((u32*)r4), 3, 1);
    // str r0, [sp]
    // add r4, sp, #4
    // ldrsh r3, [r4, r3]
    // ldrsh r2, [r4, r2]
    // add r3, #0xc0
    // asr r3, r3, #0x10
    ov18_021F1294(*((u32*)r4), 3, 6, (4 << 0x10));
    *((u16*)(r4 + 0x1c)) = r2;
    *((u16*)(r4 + 0x1e)) = 9;
    ov18_021F11C0(*((u32*)r4), 5, 1);
    // str r2, [sp]
    // add r4, sp, #4
    // ldrsh r3, [r4, r3]
    // ldrsh r2, [r4, r2]
    // add r3, #0xc0
    // asr r3, r3, #0x10
    ov18_021F1294(*((u32*)r4), 5, 2, (0 << 0x10));
}




void ov18_021F555C(void) {
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    ov18_021F12C8(*((u32*)r0), *((u16*)(r0 + 0x1c)));
    // add r5, sp, #4
    // ldrsh r1, [r5, r3]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // strh r0, [r5]
    // str r0, [sp]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    ov18_021F1294(*((u32*)r4), *((u16*)(r4 + 0x1c)), 2, 0);
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    ov18_021F12C8(*((u32*)r4), (*((u16*)(r4 + 0x1c)) + 1));
    // ldrsh r1, [r5, r3]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    // strh r0, [r5]
    // str r2, [sp]
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    ov18_021F1294(*((u32*)r4), (*((u16*)(r4 + 0x1c)) + 1), 2, 0);
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // add r0, r1, r0
    *((u16*)(r4 + 0x18)) = 0x1a;
}




void ov18_021F55D8(void) {
    ov18_021F555C();
    // str r0, [sp]
    // add r2, sp, #8
    // add r2, #2
    // add r3, sp, #8
    ov18_021F12C8(*((u32*)r4), *((u16*)(r4 + 0x1c)));
    // str r0, [sp]
    // add r2, sp, #4
    // add r2, #2
    // add r3, sp, #4
    ov18_021F12C8(*((u32*)r4), *((u16*)(r4 + 0x1e)));
    // add r2, sp, #4
    // ldrsh r3, [r2, r0]
    // ldrsh r0, [r2, r0]
    // sub r3, #0x10
    // str r0, [sp]
    // ldrsh r2, [r2, r4]
    // asr r3, r3, #0x10
    ov18_021F1294(*((u32*)r4), *((u16*)(r4 + 0x1c)), (r3 << 0x10));
}




void ov18_021F5638(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #0xb]
    // cmp r0, #0
    // beq _021F5648
    // cmp r0, #1
    // beq _021F5660
    // b _021F56CE
    // ldr r0, _021F56D4 ; =0x000008EB
    // bl PlaySE
    // mov r1, #3
    // add r0, r5, #0
    // lsl r1, r1, #8
    // mov r2, #0
    // bl ov18_021F5180
    // ldrb r0, [r5, #0xb]
    // add r0, r0, #1
    // strb r0, [r5, #0xb]
    // ldr r1, [r5]
    // ldr r0, _021F56D8 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r5, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r5]
    // ldr r0, _021F56D8 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r4, r0, #0
    // ldr r0, [r5]
    // add r1, r4, #0
    // bl ov18_021F5000
    // ldr r1, [r5, #0xc]
    // ldr r0, [r5, #0x10]
    // add r0, r1, r0
    // str r0, [r5, #0xc]
    // ldrb r0, [r5, #0xa]
    // cmp r0, #0
    // bne _021F56AE
    // mov r1, #0xf6
    // lsl r1, r1, #8
    // cmp r4, r1
    // bhi _021F56CE
    // ldr r2, [r5]
    // ldr r0, _021F56D8 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xf6
    // ldr r0, [r5]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r1, #0xa
    // lsl r1, r1, #8
    // cmp r4, r1
    // blo _021F56CE
    // ldr r2, [r5]
    // ldr r0, _021F56D8 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xa
    // ldr r0, [r5]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021F56D4: .word 0x000008EB
    // _021F56D8: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F56DC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #3
    // bhi _021F57A6
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F56F2: ; jump table
    // ldr r0, _021F57AC ; =0x000008EC
    // bl PlaySE
    // mov r1, #3
    // add r0, r4, #0
    // lsl r1, r1, #8
    // mov r2, #0
    // bl ov18_021F5180
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F57B0 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F57B0 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r0, r1, r0
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // bne _021F5764
    // mov r1, #0xf6
    // lsl r1, r1, #8
    // cmp r5, r1
    // bhi _021F57A6
    // ldr r2, [r4]
    // ldr r0, _021F57B0 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xf6
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // b _021F5786
    // mov r1, #0xa
    // lsl r1, r1, #8
    // cmp r5, r1
    // blo _021F57A6
    // ldr r2, [r4]
    // ldr r0, _021F57B0 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xa
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // mov r1, #3
    // add r0, r4, #0
    // mvn r1, r1
    // mov r2, #1
    // bl ov18_021F54C0
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // add r0, r4, #0
    // bl ov18_021F55D8
    // cmp r0, #0
    // bne _021F57A6
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021F57AC: .word 0x000008EC
    // _021F57B0: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F57B4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #3
    // bhi _021F587E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F57CA: ; jump table
    // ldr r0, _021F5884 ; =0x000008EC
    // bl PlaySE
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xa
    // mov r2, #0
    // bl ov18_021F5180
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5888 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5888 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r0, r1, r0
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // bne _021F583C
    // mov r1, #0xf6
    // lsl r1, r1, #8
    // cmp r5, r1
    // bhi _021F587E
    // ldr r2, [r4]
    // ldr r0, _021F5888 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xf6
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // b _021F585E
    // mov r1, #0xa
    // lsl r1, r1, #8
    // cmp r5, r1
    // blo _021F587E
    // ldr r2, [r4]
    // ldr r0, _021F5888 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xa
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // mov r1, #7
    // add r0, r4, #0
    // mvn r1, r1
    // mov r2, #1
    // bl ov18_021F54C0
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // add r0, r4, #0
    // bl ov18_021F55D8
    // cmp r0, #0
    // bne _021F587E
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021F5884: .word 0x000008EC
    // _021F5888: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F588C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #3
    // bhi _021F5956
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F58A2: ; jump table
    // ldr r0, _021F595C ; =0x000008EC
    // bl PlaySE
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xa
    // mov r2, #0
    // bl ov18_021F5180
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5960 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5960 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r0, r1, r0
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // bne _021F5914
    // mov r1, #0xf6
    // lsl r1, r1, #8
    // cmp r5, r1
    // bhi _021F5956
    // ldr r2, [r4]
    // ldr r0, _021F5960 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xf6
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // b _021F5936
    // mov r1, #0xa
    // lsl r1, r1, #8
    // cmp r5, r1
    // blo _021F5956
    // ldr r2, [r4]
    // ldr r0, _021F5960 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xa
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // mov r1, #0xb
    // add r0, r4, #0
    // mvn r1, r1
    // mov r2, #1
    // bl ov18_021F54C0
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // add r0, r4, #0
    // bl ov18_021F55D8
    // cmp r0, #0
    // bne _021F5956
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021F595C: .word 0x000008EC
    // _021F5960: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F5964(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #3
    // bhi _021F5A2E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F597A: ; jump table
    // ldr r0, _021F5A34 ; =0x000008ED
    // bl PlaySE
    // mov r1, #5
    // add r0, r4, #0
    // lsl r1, r1, #8
    // mov r2, #0
    // bl ov18_021F5180
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5A38 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5A38 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r0, r1, r0
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // bne _021F59EC
    // mov r1, #0xf6
    // lsl r1, r1, #8
    // cmp r5, r1
    // bhi _021F5A2E
    // ldr r2, [r4]
    // ldr r0, _021F5A38 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xf6
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // b _021F5A0E
    // mov r1, #0xa
    // lsl r1, r1, #8
    // cmp r5, r1
    // blo _021F5A2E
    // ldr r2, [r4]
    // ldr r0, _021F5A38 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xa
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // mov r1, #0xd
    // add r0, r4, #0
    // mvn r1, r1
    // mov r2, #1
    // bl ov18_021F54C0
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // add r0, r4, #0
    // bl ov18_021F55D8
    // cmp r0, #0
    // bne _021F5A2E
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021F5A34: .word 0x000008ED
    // _021F5A38: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F5A3C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #3
    // bhi _021F5B06
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F5A52: ; jump table
    // ldr r0, _021F5B0C ; =0x000008ED
    // bl PlaySE
    // mov r1, #5
    // add r0, r4, #0
    // lsl r1, r1, #8
    // mov r2, #0
    // bl ov18_021F5180
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5B10 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5B10 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r0, r1, r0
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // bne _021F5AC4
    // mov r1, #0xf6
    // lsl r1, r1, #8
    // cmp r5, r1
    // bhi _021F5B06
    // ldr r2, [r4]
    // ldr r0, _021F5B10 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xf6
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // b _021F5AE6
    // mov r1, #0xa
    // lsl r1, r1, #8
    // cmp r5, r1
    // blo _021F5B06
    // ldr r2, [r4]
    // ldr r0, _021F5B10 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xa
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // mov r1, #0x11
    // add r0, r4, #0
    // mvn r1, r1
    // mov r2, #1
    // bl ov18_021F54C0
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // add r0, r4, #0
    // bl ov18_021F55D8
    // cmp r0, #0
    // bne _021F5B06
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021F5B0C: .word 0x000008ED
    // _021F5B10: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F5B14(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #3
    // bhi _021F5BDE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F5B2A: ; jump table
    // ldr r0, _021F5BE4 ; =0x000008ED
    // bl PlaySE
    // mov r1, #6
    // add r0, r4, #0
    // lsl r1, r1, #8
    // mov r2, #0
    // bl ov18_021F5180
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5BE8 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5BE8 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r0, r1, r0
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // bne _021F5B9C
    // mov r1, #0xf6
    // lsl r1, r1, #8
    // cmp r5, r1
    // bhi _021F5BDE
    // ldr r2, [r4]
    // ldr r0, _021F5BE8 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xf6
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // b _021F5BBE
    // mov r1, #0xa
    // lsl r1, r1, #8
    // cmp r5, r1
    // blo _021F5BDE
    // ldr r2, [r4]
    // ldr r0, _021F5BE8 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xa
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // mov r1, #0x14
    // add r0, r4, #0
    // mvn r1, r1
    // mov r2, #1
    // bl ov18_021F54C0
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // add r0, r4, #0
    // bl ov18_021F55D8
    // cmp r0, #0
    // bne _021F5BDE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021F5BE4: .word 0x000008ED
    // _021F5BE8: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F5BEC(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #3
    // bhi _021F5CB6
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F5C02: ; jump table
    // ldr r0, _021F5CBC ; =0x000008ED
    // bl PlaySE
    // mov r1, #7
    // add r0, r4, #0
    // lsl r1, r1, #8
    // mov r2, #0
    // bl ov18_021F5180
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5CC0 ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5CC0 ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r0, r1, r0
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // bne _021F5C74
    // mov r1, #0xf6
    // lsl r1, r1, #8
    // cmp r5, r1
    // bhi _021F5CB6
    // ldr r2, [r4]
    // ldr r0, _021F5CC0 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xf6
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // b _021F5C96
    // mov r1, #0xa
    // lsl r1, r1, #8
    // cmp r5, r1
    // blo _021F5CB6
    // ldr r2, [r4]
    // ldr r0, _021F5CC0 ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xa
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // mov r1, #0x17
    // add r0, r4, #0
    // mvn r1, r1
    // mov r2, #1
    // bl ov18_021F54C0
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // add r0, r4, #0
    // bl ov18_021F55D8
    // cmp r0, #0
    // bne _021F5CB6
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // nop
    // _021F5CBC: .word 0x000008ED
    // _021F5CC0: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F5CC4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldrb r0, [r4, #0xb]
    // cmp r0, #3
    // bhi _021F5DB2
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F5CDC: ; jump table
    // ldr r0, _021F5DB8 ; =0x000008EE
    // bl PlaySE
    // mov r1, #2
    // add r0, r4, #0
    // lsl r1, r1, #0xa
    // mov r2, #0
    // bl ov18_021F5180
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // ldr r1, [r4]
    // ldr r0, _021F5DBC ; =0x0000068C
    // ldr r0, [r1, r0]
    // ldr r1, [r4, #0xc]
    // bl ManagedSprite_OffsetAffineZRotation
    // ldr r1, [r4]
    // ldr r0, _021F5DBC ; =0x0000068C
    // ldr r0, [r1, r0]
    // bl ManagedSprite_GetRotation
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl ov18_021F5000
    // ldr r1, [r4, #0xc]
    // ldr r0, [r4, #0x10]
    // add r0, r1, r0
    // str r0, [r4, #0xc]
    // ldrb r0, [r4, #0xa]
    // cmp r0, #0
    // bne _021F5D4E
    // mov r1, #0xf6
    // lsl r1, r1, #8
    // cmp r5, r1
    // bhi _021F5DB2
    // ldr r2, [r4]
    // ldr r0, _021F5DBC ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xf6
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // b _021F5D70
    // mov r1, #0xa
    // lsl r1, r1, #8
    // cmp r5, r1
    // blo _021F5DB2
    // ldr r2, [r4]
    // ldr r0, _021F5DBC ; =0x0000068C
    // ldr r0, [r2, r0]
    // bl ManagedSprite_SetAffineZRotation
    // mov r1, #0xa
    // ldr r0, [r4]
    // lsl r1, r1, #8
    // bl ov18_021F5000
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // mov r1, #0x17
    // add r0, r4, #0
    // mvn r1, r1
    // mov r2, #0
    // bl ov18_021F54C0
    // ldrb r0, [r4, #0xb]
    // add r0, r0, #1
    // strb r0, [r4, #0xb]
    // add r0, r4, #0
    // bl ov18_021F55D8
    // cmp r0, #0
    // bne _021F5D92
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #1
    // str r0, [sp]
    // ldrh r1, [r4, #0x1c]
    // add r2, sp, #4
    // ldr r0, [r4]
    // add r2, #2
    // add r3, sp, #4
    // bl ov18_021F12C8
    // add r1, sp, #4
    // mov r0, #0
    // ldrsh r2, [r1, r0]
    // mov r1, #0xff
    // mvn r1, r1
    // cmp r2, r1
    // ble ov18_021F5DB4
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _021F5DB8: .word 0x000008EE
    // _021F5DBC: .word 0x0000068C
    // TODO: decompile
}




void ov18_021F5DC0(void) {
}




void ov18_021F5DE0(void) {
    ov18_021F10E8(r0, 1);
    ov18_021F13DC(r5, 6);
    ov18_021F18E0(r5);
    ov18_021F19EC(r5);
}




void ov18_021F5E0C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r7, #1
    // mov r6, #0x34
    // add r4, r5, #4
    // ldr r0, _021F5ED8 ; =0x00000668
    // ldr r1, _021F5EDC ; =0x0000066C
    // add r3, r6, #0
    // ldr r2, _021F5EE0 ; =ov18_021FAC28
    // sub r3, #0x34
    // add r2, r2, r3
    // mov r3, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // lsl r3, r3, #0x14
    // bl SpriteSystem_NewSpriteWithYOffset
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r7, r7, #1
    // add r6, #0x34
    // add r4, r4, #4
    // cmp r7, #4
    // bls _021F5E16
    // mov r7, #5
    // add r6, r7, #0
    // add r4, r5, #0
    // add r6, #0xff
    // add r4, #0x14
    // ldr r0, _021F5ED8 ; =0x00000668
    // ldr r1, _021F5EDC ; =0x0000066C
    // add r3, r6, #0
    // ldr r2, _021F5EE0 ; =ov18_021FAC28
    // sub r3, #0x34
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // add r2, r2, r3
    // bl SpriteSystem_NewSprite
    // mov r1, #0x67
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r7, r7, #1
    // add r6, #0x34
    // add r4, r4, #4
    // cmp r7, #0x14
    // blo _021F5E48
    // add r0, r5, #0
    // mov r1, #9
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // mov r1, #0xa
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // mov r1, #0xb
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // mov r1, #0xc
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // mov r1, #0xd
    // mov r2, #0
    // bl ov18_021F11C0
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov18_021F5EFC
    // add r0, r5, #0
    // bl ov18_021F6038
    // mov r0, #9
    // str r0, [sp]
    // ldr r2, _021F5EE4 ; =0x000018C4
    // ldr r3, _021F5EE8 ; =ov18_021FA348
    // ldrsb r2, [r5, r2]
    // add r0, r5, #0
    // mov r1, #5
    // bl ov18_021F61DC
    // add r0, r5, #0
    // bl ov18_021F65AC
    // ldr r2, _021F5EEC ; =0x000018C5
    // add r0, r5, #0
    // ldrsb r1, [r5, r2]
    // sub r2, r2, #1
    // ldrsb r2, [r5, r2]
    // mov r3, #6
    // bl ov18_021F619C
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F5ED8: .word 0x00000668
    // _021F5EDC: .word 0x0000066C
    // _021F5EE0: .word ov18_021FAC28
    // _021F5EE4: .word 0x000018C4
    // _021F5EE8: .word ov18_021FA348
    // _021F5EEC: .word 0x000018C5
    // TODO: decompile
}




void ov18_021F5EF0(void) {
}




void ov18_021F5EFC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r3, sp, #0xc
    // add r7, r2, #0
    // add r2, sp, #0xc
    // add r3, #1
    // add r5, r0, #0
    // bl ov18_021F3CA8
    // ldr r0, _021F5FF4 ; =0x000018C7
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1f
    // bne _021F5F32
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #0
    // mov r6, #1
    // mov r4, #2
    // bl ov18_021F11C0
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #0
    // bl ov18_021F11C0
    // b _021F5F4A
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // mov r6, #3
    // mov r4, #4
    // bl ov18_021F11C0
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov18_021F11C0
    // ldr r1, _021F5FF4 ; =0x000018C7
    // mov r2, #0x20
    // ldrb r3, [r5, r1]
    // add r0, r3, #0
    // bic r0, r2
    // lsl r2, r3, #0x1a
    // lsr r3, r2, #0x1f
    // mov r2, #1
    // eor r2, r3
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x18
    // lsl r2, r2, #0x1f
    // lsr r2, r2, #0x1a
    // orr r0, r2
    // strb r0, [r5, r1]
    // mov r0, #2
    // str r0, [sp]
    // str r6, [sp, #4]
    // str r7, [sp, #8]
    // sub r1, #0x25
    // add r3, sp, #0xc
    // ldrb r2, [r3]
    // ldrh r1, [r5, r1]
    // ldrb r3, [r3, #1]
    // add r0, r5, #0
    // bl ov18_021F1A7C
    // lsl r0, r6, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0x40
    // mov r2, #0x78
    // lsl r3, r1, #0xf
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // mov r0, #0
    // str r0, [sp]
    // str r4, [sp, #4]
    // ldr r1, _021F5FF8 ; =0x000018A2
    // str r7, [sp, #8]
    // add r3, sp, #0xc
    // ldrb r2, [r3]
    // ldrh r1, [r5, r1]
    // ldrb r3, [r3, #1]
    // add r0, r5, #0
    // bl ov18_021F1A7C
    // mov r2, #0
    // ldr r0, _021F5FF8 ; =0x000018A2
    // str r2, [sp]
    // add r3, sp, #0xc
    // ldrb r1, [r3, #1]
    // ldrh r0, [r5, r0]
    // ldrb r3, [r3]
    // bl GetMonPicHeightBySpeciesGenderForm
    // add r2, r0, #0
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x67
    // lsl r0, r0, #4
    // add r2, #0x78
    // ldr r0, [r1, r0]
    // lsl r2, r2, #0x10
    // mov r3, #2
    // mov r1, #0xc0
    // asr r2, r2, #0x10
    // lsl r3, r3, #0x14
    // bl ManagedSprite_SetPositionXYWithSubscreenOffset
    // add r0, r5, #0
    // add r1, r6, #0
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov18_021F11C0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F5FF4: .word 0x000018C7
    // _021F5FF8: .word 0x000018A2
    // TODO: decompile
}




void ov18_021F5FFC(void) {
    // push {r3, r4, r5, lr}
    // add r3, r1, #0
    // ldr r1, _021F6030 ; =0x000018A4
    // add r2, r0, r2
    // ldrb r5, [r2, r1]
    // mov r2, #0x80
    // add r4, r5, #0
    // tst r4, r2
    // beq _021F6024
    // sub r1, r1, #2
    // ldrh r1, [r0, r1]
    // eor r2, r5
    // cmp r1, #0xac
    // bne _021F6026
    // cmp r2, #2
    // bne _021F6020
    // mov r2, #1
    // b _021F6026
    // mov r2, #0
    // b _021F6026
    // mov r2, #0
    // ldr r1, _021F6034 ; =0x000018A2
    // ldrh r1, [r0, r1]
    // bl ov18_021F14FC
    // pop {r3, r4, r5, pc}
    // _021F6030: .word 0x000018A4
    // _021F6034: .word 0x000018A2
    // TODO: decompile
}




void ov18_021F6038(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r4, #0
    // mov r6, #0xe
    // ldr r0, _021F6094 ; =0x000018C5
    // ldrsb r0, [r5, r0]
    // add r0, r0, r4
    // sub r7, r0, #2
    // ldr r0, _021F6098 ; =0x000018C4
    // ldrsb r0, [r5, r0]
    // cmp r7, r0
    // blo _021F605E
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0xe
    // mov r2, #0
    // bl ov18_021F11C0
    // b _021F6076
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0xe
    // mov r2, #1
    // bl ov18_021F11C0
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0xe
    // add r2, r7, #0
    // bl ov18_021F5FFC
    // mov r0, #0
    // add r1, r4, #0
    // lsl r3, r6, #0x10
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, #0xe
    // mov r2, #0x30
    // asr r3, r3, #0x10
    // bl ov18_021F1294
    // add r4, r4, #1
    // add r6, #0x18
    // cmp r4, #6
    // blo _021F6040
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F6094: .word 0x000018C5
    // _021F6098: .word 0x000018C4
    // TODO: decompile
}




void ov18_021F609C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // mov r4, #0
    // add r5, r0, #0
    // str r1, [sp, #4]
    // add r6, r4, #0
    // add r7, sp, #8
    // add r1, r4, #0
    // add r2, sp, #8
    // add r0, r5, #0
    // add r1, #0xe
    // add r2, #2
    // add r3, sp, #8
    // str r6, [sp]
    // bl ov18_021F12C8
    // mov r0, #0
    // ldrsh r1, [r7, r0]
    // sub r0, #0xa
    // cmp r1, r0
    // beq _021F60D0
    // cmp r1, #0x86
    // beq _021F60D0
    // add r4, r4, #1
    // cmp r4, #6
    // blo _021F60AA
    // ldr r0, [sp, #4]
    // cmp r0, #0
    // bge _021F6126
    // mov r0, #0
    // add r1, r4, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, #0xe
    // mov r2, #0x30
    // mov r3, #0x86
    // bl ov18_021F1294
    // ldr r0, _021F6174 ; =0x000018C5
    // ldrsb r1, [r5, r0]
    // sub r0, r0, #1
    // ldrsb r0, [r5, r0]
    // add r1, r1, #2
    // cmp r1, r0
    // blt _021F6106
    // add r4, #0xe
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0xe
    // mov r2, #1
    // bl ov18_021F11C0
    // ldr r2, _021F6174 ; =0x000018C5
    // add r4, #0xe
    // ldrsb r2, [r5, r2]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r2, #2
    // bl ov18_021F5FFC
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r2, #0x30
    // mov r0, #0
    // add r1, r4, #0
    // add r3, r2, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, #0xe
    // sub r3, #0x3a
    // bl ov18_021F1294
    // ldr r0, _021F6174 ; =0x000018C5
    // ldrsb r0, [r5, r0]
    // sub r0, r0, #2
    // bpl _021F6152
    // add r4, #0xe
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov18_021F11C0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r1, r4, #0
    // add r0, r5, #0
    // add r1, #0xe
    // mov r2, #1
    // bl ov18_021F11C0
    // ldr r2, _021F6174 ; =0x000018C5
    // add r4, #0xe
    // ldrsb r2, [r5, r2]
    // add r0, r5, #0
    // add r1, r4, #0
    // sub r2, r2, #2
    // bl ov18_021F5FFC
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F6174: .word 0x000018C5
    // TODO: decompile
}




void ov18_021F6178(void) {
    // add r1, #0xe
    // str r7, [sp]
    ov18_021F121C(r0, 0, 0, r1);
}




void ov18_021F619C(void) {
    ov18_021F118C(r3, 7);
    ov18_021F118C(r4, 5);
    ov18_021F118C(r6, (r4 + 1), 0xa);
    ov18_021F118C(r6, (r4 + 1), 8);
}




void ov18_021F61DC(void) {
    // ldr r3, [sp, #0x10]
    ov18_021F61F8(r2, r3);
    ov18_021F118C(r5, r4, r0);
}




void ov18_021F61F8(void) {
    // ldrh r4, [r2]
    // add r0, #0xe
}




void ov18_021F6214(void) {
}




void ov18_021F6230(void) {
}




void ov18_021F6244(void) {
}




void ov18_021F6258(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r6, r0, #0
    // ldr r0, _021F62AC ; =0x00000684
    // add r5, r1, #0
    // add r1, sp, #0
    // add r4, r2, #0
    // ldr r0, [r6, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r2, _021F62B0 ; =ov18_021FA310
    // add r0, r6, #0
    // mov r1, #5
    // bl ov18_021F6214
    // add r2, sp, #0
    // mov r1, #2
    // ldrsh r3, [r2, r1]
    // add r1, r3, #0
    // sub r1, #0xb
    // cmp r5, r1
    // blo _021F62A6
    // add r3, #0xb
    // cmp r5, r3
    // bhi _021F62A6
    // lsr r3, r0, #1
    // mov r0, #0
    // ldrsh r1, [r2, r0]
    // sub r0, r1, r3
    // cmp r4, r0
    // blo _021F62A6
    // add r0, r1, r3
    // cmp r4, r0
    // bhi _021F62A6
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _021F62AC: .word 0x00000684
    // _021F62B0: .word ov18_021FA310
    // TODO: decompile
}




void ov18_021F62B4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r6, r0, #0
    // ldr r0, _021F6308 ; =0x00000684
    // add r5, r1, #0
    // add r1, sp, #0
    // add r4, r2, #0
    // ldr r0, [r6, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r2, _021F630C ; =ov18_021FA304
    // add r0, r6, #0
    // mov r1, #5
    // bl ov18_021F6214
    // add r2, sp, #0
    // mov r1, #2
    // ldrsh r3, [r2, r1]
    // add r1, r3, #0
    // sub r1, #0xb
    // cmp r5, r1
    // blo _021F6302
    // add r3, #0xb
    // cmp r5, r3
    // bhi _021F6302
    // lsr r3, r0, #1
    // mov r0, #0
    // ldrsh r1, [r2, r0]
    // sub r0, r1, r3
    // cmp r4, r0
    // blo _021F6302
    // add r0, r1, r3
    // cmp r4, r0
    // bhi _021F6302
    // add sp, #4
    // mov r0, #1
    // pop {r3, r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _021F6308: .word 0x00000684
    // _021F630C: .word ov18_021FA304
    // TODO: decompile
}




void ov18_021F6310(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _021F63CC ; =0x00000684
    // add r1, sp, #4
    // add r6, r2, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F63D0 ; =ov18_021FA310
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #0x40
    // bl ov18_021F6230
    // cmp r6, r0
    // bhs _021F633C
    // add r6, r0, #0
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F63D0 ; =ov18_021FA310
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #0x40
    // bl ov18_021F6244
    // cmp r6, r0
    // bls _021F6352
    // add r6, r0, #0
    // ldr r0, _021F63CC ; =0x00000684
    // add r2, sp, #4
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // lsl r2, r6, #0x10
    // ldr r0, [r5, r0]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F63D0 ; =ov18_021FA310
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #0x40
    // bl ov18_021F6230
    // add r7, r0, #0
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F63D0 ; =ov18_021FA310
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #0x40
    // bl ov18_021F6244
    // sub r1, r0, r7
    // ldr r0, _021F63D4 ; =0x000018C4
    // ldrsb r0, [r5, r0]
    // sub r4, r0, #1
    // lsl r0, r1, #8
    // add r1, r4, #0
    // bl _u32_div_f
    // sub r1, r6, r7
    // mov r3, #0
    // lsl r2, r1, #8
    // add r6, r3, #0
    // add r7, r3, #0
    // cmp r2, r6
    // blo _021F63BA
    // add r1, r7, r0
    // cmp r2, r1
    // bhs _021F63BA
    // ldr r0, _021F63D8 ; =0x000018C5
    // ldrsb r1, [r5, r0]
    // cmp r1, r3
    // beq _021F63C4
    // add sp, #8
    // strb r3, [r5, r0]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r3, r3, #1
    // add r6, r6, r0
    // add r7, r7, r0
    // cmp r3, r4
    // bls _021F63A0
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F63CC: .word 0x00000684
    // _021F63D0: .word ov18_021FA310
    // _021F63D4: .word 0x000018C4
    // _021F63D8: .word 0x000018C5
    // TODO: decompile
}




void ov18_021F63DC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _021F6498 ; =0x00000684
    // add r1, sp, #4
    // add r6, r2, #0
    // ldr r0, [r5, r0]
    // add r1, #2
    // add r2, sp, #4
    // bl ManagedSprite_GetPositionXY
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F649C ; =ov18_021FA304
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #0x60
    // bl ov18_021F6230
    // cmp r6, r0
    // bhs _021F6408
    // add r6, r0, #0
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F649C ; =ov18_021FA304
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #0x60
    // bl ov18_021F6244
    // cmp r6, r0
    // bls _021F641E
    // add r6, r0, #0
    // ldr r0, _021F6498 ; =0x00000684
    // add r2, sp, #4
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // lsl r2, r6, #0x10
    // ldr r0, [r5, r0]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F649C ; =ov18_021FA304
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #0x60
    // bl ov18_021F6230
    // add r7, r0, #0
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F649C ; =ov18_021FA304
    // add r0, r5, #0
    // mov r1, #5
    // mov r3, #0x60
    // bl ov18_021F6244
    // sub r1, r0, r7
    // mov r0, #0x19
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // sub r4, r0, #1
    // lsl r0, r1, #8
    // add r1, r4, #0
    // bl _u32_div_f
    // sub r1, r6, r7
    // mov r3, #0
    // lsl r2, r1, #8
    // add r6, r3, #0
    // add r7, r3, #0
    // cmp r2, r6
    // blo _021F6488
    // add r1, r7, r0
    // cmp r2, r1
    // bhs _021F6488
    // ldr r0, _021F64A0 ; =0x000018CA
    // ldrsb r1, [r5, r0]
    // cmp r1, r3
    // beq _021F6492
    // add sp, #8
    // strb r3, [r5, r0]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r3, r3, #1
    // add r6, r6, r0
    // add r7, r7, r0
    // cmp r3, r4
    // bls _021F646E
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F6498: .word 0x00000684
    // _021F649C: .word ov18_021FA304
    // _021F64A0: .word 0x000018CA
    // TODO: decompile
}




void ov18_021F64A4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r1, #0
    // mov r1, #0x56
    // str r1, [sp]
    // ldr r2, _021F64EC ; =ov18_021FA310
    // mov r1, #5
    // mov r3, #0x40
    // add r6, r0, #0
    // bl ov18_021F6230
    // add r4, r0, #0
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F64EC ; =ov18_021FA310
    // add r0, r6, #0
    // mov r1, #5
    // mov r3, #0x40
    // bl ov18_021F6244
    // ldr r1, _021F64F0 ; =0x000018C4
    // ldrsb r1, [r6, r1]
    // sub r1, r1, #1
    // cmp r5, r1
    // beq _021F64E6
    // sub r0, r0, r4
    // lsl r0, r0, #8
    // bl _u32_div_f
    // add r1, r0, #0
    // mul r1, r5
    // lsr r0, r1, #8
    // add r0, r4, r0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021F64EC: .word ov18_021FA310
    // _021F64F0: .word 0x000018C4
    // TODO: decompile
}




void ov18_021F64F4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r1, #0
    // mov r1, #0x56
    // str r1, [sp]
    // ldr r2, _021F653C ; =ov18_021FA304
    // mov r1, #5
    // mov r3, #0x60
    // add r6, r0, #0
    // bl ov18_021F6230
    // add r4, r0, #0
    // mov r0, #0x56
    // str r0, [sp]
    // ldr r2, _021F653C ; =ov18_021FA304
    // add r0, r6, #0
    // mov r1, #5
    // mov r3, #0x60
    // bl ov18_021F6244
    // mov r1, #0x19
    // lsl r1, r1, #8
    // ldr r1, [r6, r1]
    // sub r1, r1, #1
    // cmp r5, r1
    // beq _021F6538
    // sub r0, r0, r4
    // lsl r0, r0, #8
    // bl _u32_div_f
    // add r1, r0, #0
    // mul r1, r5
    // lsr r0, r1, #8
    // add r0, r4, r0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _021F653C: .word ov18_021FA304
    // TODO: decompile
}




void ov18_021F6540(void) {
    // add r1, r0, r1
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4), (r1 << 2));
    // add r1, sp, #0
    // ldrsh r0, [r1, r0]
    // sub r0, r5, r0
    _u32_div_f(0, r4);
    // sub r0, r0, r5
    _u32_div_f(r4);
}




void ov18_021F6578(void) {
    // add r5, r0, r2
    // add r1, sp, #0
    // ldr r0, [r5, r4]
    // add r1, #2
    // add r2, sp, #0
    ManagedSprite_GetPositionXY((0x67 << 4));
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    // ldrsh r1, [r3, r1]
    // add r2, r2, r6
    // ldr r0, [r5, r4]
    // asr r2, r2, #0x10
    ManagedSprite_SetPositionXY(2, (0 << 0x10));
}




void ov18_021F65AC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _021F65E4 ; =0x00000684
    // add r1, sp, #0
    // ldr r0, [r4, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r1, _021F65E8 ; =0x000018C5
    // add r0, r4, #0
    // ldrsb r1, [r4, r1]
    // bl ov18_021F64A4
    // add r3, r0, #0
    // ldr r0, _021F65E4 ; =0x00000684
    // add r2, sp, #0
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // lsl r2, r3, #0x10
    // ldr r0, [r4, r0]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021F65E4: .word 0x00000684
    // _021F65E8: .word 0x000018C5
    // TODO: decompile
}




void ov18_021F65EC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _021F6624 ; =0x00000684
    // add r1, sp, #0
    // ldr r0, [r4, r0]
    // add r1, #2
    // add r2, sp, #0
    // bl ManagedSprite_GetPositionXY
    // ldr r1, _021F6628 ; =0x000018CA
    // add r0, r4, #0
    // ldrsb r1, [r4, r1]
    // bl ov18_021F64F4
    // add r3, r0, #0
    // ldr r0, _021F6624 ; =0x00000684
    // add r2, sp, #0
    // mov r1, #2
    // ldrsh r1, [r2, r1]
    // lsl r2, r3, #0x10
    // ldr r0, [r4, r0]
    // asr r2, r2, #0x10
    // bl ManagedSprite_SetPositionXY
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _021F6624: .word 0x00000684
    // _021F6628: .word 0x000018CA
    // TODO: decompile
}




void ov18_021F662C(void) {
    // push {r4, lr}
    // ldr r1, _021F6680 ; =0x000018C5
    // add r4, r0, #0
    // ldrsb r1, [r4, r1]
    // mov r2, #1
    // bl ov18_021F5EFC
    // add r0, r4, #0
    // bl ov18_021F6038
    // add r0, r4, #0
    // bl ov18_021F65AC
    // ldr r2, _021F6680 ; =0x000018C5
    // add r0, r4, #0
    // ldrsb r1, [r4, r2]
    // sub r2, r2, #1
    // ldrsb r2, [r4, r2]
    // mov r3, #6
    // bl ov18_021F619C
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #8
    // mov r2, #1
    // bl ov18_021F11C0
    // pop {r4, pc}
    // _021F6680: .word 0x000018C5
    // TODO: decompile
}




void ov18_021F6684(void) {
}




void ov18_021F6714(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _021F67C4 ; =0x000018C4
    // add r4, r0, #0
    // ldrsb r1, [r4, r1]
    // cmp r1, #3
    // blt _021F6752
    // mov r1, #9
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #1
    // bl ov18_021F11C0
    // ldr r2, _021F67C8 ; =0x000018C5
    // add r0, r4, #0
    // ldrsb r2, [r4, r2]
    // mov r1, #0xe
    // bl ov18_021F6844
    // ldr r2, _021F67CC ; =0x000018C6
    // add r0, r4, #0
    // ldrsb r2, [r4, r2]
    // mov r1, #0xf
    // bl ov18_021F6844
    // mov r0, #0
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r2, #0x40
    // mov r3, #0x50
    // bl ov18_021F1294
    // mov r0, #0
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0xf
    // mov r2, #0xc0
    // mov r3, #0x50
    // bl ov18_021F1294
    // ldr r2, _021F67C8 ; =0x000018C5
    // mov r1, #1
    // ldrsb r2, [r4, r2]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl ov18_021F684C
    // ldr r2, _021F67CC ; =0x000018C6
    // add r0, r4, #0
    // ldrsb r2, [r4, r2]
    // mov r1, #2
    // mov r3, #1
    // bl ov18_021F684C
    // add r0, r4, #0
    // bl ov18_021F6990
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0xf
    // mov r2, #1
    // bl ov18_021F11C0
    // add sp, #4
    // pop {r3, r4, pc}
    // _021F67C4: .word 0x000018C4
    // _021F67C8: .word 0x000018C5
    // _021F67CC: .word 0x000018C6
    // TODO: decompile
}




void ov18_021F67D0(void) {
}




void ov18_021F6844(void) {
}




void ov18_021F684C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r3, [sp, #0xc]
    // add r3, sp, #0x14
    // add r4, r1, #0
    // add r1, r2, #0
    // add r2, sp, #0x14
    // add r3, #1
    // add r5, r0, #0
    // bl ov18_021F3CA8
    // ldr r0, _021F697C ; =0x000018C7
    // ldrb r1, [r5, r0]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1f
    // bne _021F6872
    // mov r6, #2
    // mov r0, #0
    // b _021F6886
    // mov r6, #0
    // str r6, [sp]
    // sub r0, #0x25
    // add r3, sp, #0x14
    // ldrb r1, [r3, #1]
    // ldrh r0, [r5, r0]
    // ldrb r3, [r3]
    // add r2, r6, #0
    // bl GetMonPicHeightBySpeciesGenderForm
    // cmp r4, #1
    // bne _021F68EC
    // add r0, #0x78
    // lsl r0, r0, #0x18
    // mov r1, #0x40
    // lsr r7, r0, #0x18
    // ldr r0, _021F697C ; =0x000018C7
    // str r1, [sp, #0x10]
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021F68B8
    // mov r4, #3
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov18_021F11C0
    // b _021F68CC
    // mov r1, #1
    // add r0, r5, #0
    // add r2, r1, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #0
    // bl ov18_021F11C0
    // ldr r3, _021F697C ; =0x000018C7
    // mov r1, #0x20
    // ldrb r2, [r5, r3]
    // add r0, r2, #0
    // bic r0, r1
    // lsl r1, r2, #0x1a
    // lsr r2, r1, #0x1f
    // mov r1, #1
    // eor r1, r2
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x1f
    // lsr r1, r1, #0x1a
    // orr r0, r1
    // strb r0, [r5, r3]
    // b _021F6950
    // cmp r4, #2
    // bne _021F6950
    // add r0, #0x78
    // lsl r0, r0, #0x18
    // mov r1, #0xc0
    // lsr r7, r0, #0x18
    // ldr r0, _021F697C ; =0x000018C7
    // str r1, [sp, #0x10]
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021F691E
    // mov r4, #4
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov18_021F11C0
    // b _021F6932
    // add r0, r5, #0
    // mov r1, #2
    // mov r2, #1
    // bl ov18_021F11C0
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #0
    // bl ov18_021F11C0
    // ldr r3, _021F697C ; =0x000018C7
    // mov r1, #0x40
    // ldrb r2, [r5, r3]
    // add r0, r2, #0
    // bic r0, r1
    // lsl r1, r2, #0x19
    // lsr r2, r1, #0x1f
    // mov r1, #1
    // eor r1, r2
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x1f
    // lsr r1, r1, #0x19
    // orr r0, r1
    // strb r0, [r5, r3]
    // str r6, [sp]
    // ldr r0, [sp, #0xc]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, _021F6980 ; =0x000018A2
    // add r3, sp, #0x14
    // ldrb r2, [r3]
    // ldrh r1, [r5, r1]
    // ldrb r3, [r3, #1]
    // add r0, r5, #0
    // bl ov18_021F1A7C
    // mov r0, #1
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r7, #0
    // bl ov18_021F1294
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F697C: .word 0x000018C7
    // _021F6980: .word 0x000018A2
    // TODO: decompile
}




void ov18_021F6984(void) {
}




void ov18_021F6990(void) {
    // push {r3, lr}
    // ldr r1, _021F69BC ; =0x000018C7
    // ldrb r1, [r0, r1]
    // lsl r1, r1, #0x1b
    // lsr r1, r1, #0x1b
    // bne _021F69AC
    // mov r1, #0
    // str r1, [sp]
    // mov r1, #0xd
    // mov r2, #0x40
    // mov r3, #0x58
    // bl ov18_021F1294
    // pop {r3, pc}
    // mov r1, #0
    // str r1, [sp]
    // mov r1, #0xd
    // mov r2, #0xc0
    // mov r3, #0x58
    // bl ov18_021F1294
    // pop {r3, pc}
    // _021F69BC: .word 0x000018C7
    // TODO: decompile
}




void ov18_021F69C0(void) {
    PlayerProfile_GetTrainerGender(*((u32*)(*((u32*)r0) + 4)));
    ov18_021F118C(r5, 2, (1 + 2));
}




void ov18_021F69E8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // str r2, [sp, #0x14]
    // str r3, [sp, #0x18]
    // ldr r3, _021F6AA4 ; =ov18_021FA338
    // add r2, sp, #0x1c
    // add r5, r0, #0
    // add r4, r1, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r1, #0x32
    // mov r0, #0x25
    // lsl r1, r1, #6
    // bl Heap_AllocAtEnd
    // add r7, r0, #0
    // ldr r0, _021F6AA8 ; =0x00000147
    // cmp r4, r0
    // bne _021F6A20
    // ldr r0, [r5]
    // mov r1, #0
    // ldr r0, [r0]
    // bl Pokedex_GetSeenSpindaPersonality
    // add r6, r0, #0
    // b _021F6A22
    // mov r6, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x14]
    // add r3, sp, #0x40
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldrb r3, [r3, #0x10]
    // ldr r2, [sp, #0x18]
    // add r0, sp, #0x2c
    // add r1, r4, #0
    // bl GetMonSpriteCharAndPlttNarcIdsEx
    // str r7, [sp]
    // str r6, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // str r4, [sp, #0x10]
    // add r1, sp, #0x1c
    // ldrh r0, [r1, #0x10]
    // ldrh r1, [r1, #0x12]
    // mov r2, #0x25
    // add r3, sp, #0x1c
    // bl sub_02014510
    // mov r1, #0x32
    // add r0, r7, #0
    // lsl r1, r1, #6
    // mov r2, #0xf
    // mov r3, #0x25
    // bl Convert4bppTo8bpp
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r3, #0x19
    // ldr r0, [r5, #4]
    // mov r1, #7
    // add r2, r4, #0
    // lsl r3, r3, #8
    // bl BG_LoadCharTilesData
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r7, #0
    // bl Heap_Free
    // mov r3, #0xb
    // str r3, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r5, #4]
    // ldr r2, _021F6AAC ; =ov18_021FB5B4
    // mov r1, #7
    // bl LoadRectToBgTilemapRect
    // ldr r0, [r5, #4]
    // mov r1, #7
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _021F6AA4: .word ov18_021FA338
    // _021F6AA8: .word 0x00000147
    // _021F6AAC: .word ov18_021FB5B4
    // TODO: decompile
}




void ov18_021F6AB0(void) {
    FX_Div((1 << 0x14), (r2 << 0xc));
    FX_Inv();
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x18]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    Bg_SetTextDimAndAffineParams(*((u32*)(r5 + 4)), 7, 0, 0x38);
    // add r0, sp, #0xc
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // sub r3, r3, r4
    Bg_SetTextDimAndAffineParams(*((u32*)(r5 + 4)), 7, 3, 0x10);
}




void ov18_021F6B00(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021F6BA8 ; =0x00000864
    // mov r1, #0
    // str r1, [r4, r0]
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _021F6B3A
    // ldr r0, _021F6BAC ; =ov18_021FB72C
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F6B24
    // add r0, r1, #0
    // pop {r4, pc}
    // lsl r1, r0, #2
    // ldr r0, _021F6BB0 ; =ov18_021FB6F0
    // ldr r0, [r0, r1]
    // cmp r0, #6
    // bne _021F6BA4
    // ldr r1, _021F6BB4 ; =0x00001860
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // bne _021F6BA4
    // mov r0, #5
    // pop {r4, pc}
    // ldr r0, _021F6BA8 ; =0x00000864
    // mov r1, #1
    // str r1, [r4, r0]
    // ldr r1, _021F6BB4 ; =0x00001860
    // ldr r0, [r4, r1]
    // cmp r0, #1
    // bne _021F6B7C
    // ldr r0, _021F6BB8 ; =gSystem
    // ldr r3, [r0, #0x48]
    // mov r0, #0x20
    // add r2, r3, #0
    // tst r2, r0
    // beq _021F6B64
    // sub r1, #8
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // bne _021F6B60
    // mov r0, #3
    // pop {r4, pc}
    // sub r0, #0x21
    // pop {r4, pc}
    // mov r0, #0x10
    // add r2, r3, #0
    // tst r2, r0
    // beq _021F6B7C
    // sub r1, #8
    // ldrb r1, [r4, r1]
    // cmp r1, #1
    // bne _021F6B78
    // mov r0, #4
    // pop {r4, pc}
    // sub r0, #0x11
    // pop {r4, pc}
    // ldr r0, _021F6BB8 ; =gSystem
    // mov r1, #1
    // ldr r3, [r0, #0x48]
    // add r0, r3, #0
    // tst r0, r1
    // bne _021F6B8E
    // mov r0, #8
    // tst r0, r3
    // beq _021F6B92
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #2
    // add r2, r3, #0
    // tst r2, r0
    // bne _021F6BA4
    // lsl r2, r0, #0xa
    // tst r2, r3
    // bne _021F6BA2
    // sub r1, r0, #3
    // add r0, r1, #0
    // pop {r4, pc}
    // nop
    // _021F6BA8: .word 0x00000864
    // _021F6BAC: .word ov18_021FB72C
    // _021F6BB0: .word ov18_021FB6F0
    // _021F6BB4: .word 0x00001860
    // _021F6BB8: .word gSystem
    // TODO: decompile
}




void ov18_021F6BBC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _021F6DBC ; =0x00000864
    // mov r1, #0
    // str r1, [r5, r0]
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchNewCoords
    // cmp r0, #1
    // bne _021F6C5C
    // ldr r0, _021F6DC0 ; =ov18_021FB8A4
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F6BEA
    // add sp, #8
    // add r0, r1, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r1, r0, #2
    // ldr r0, _021F6DC4 ; =ov18_021FB84C
    // ldr r4, [r0, r1]
    // cmp r4, #0
    // bne _021F6C32
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // sub r1, r1, #4
    // sub r0, #0x1b
    // str r1, [sp]
    // mov r1, #0x28
    // str r0, [sp, #4]
    // bl _u32_div_f
    // add r6, r0, #0
    // ldr r0, [sp]
    // mov r1, #0x28
    // bl _u32_div_f
    // lsl r1, r0, #2
    // add r0, r0, r1
    // add r0, r6, r0
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // ldr r0, _021F6DC8 ; =0x0000185A
    // ldrb r1, [r5, r0]
    // cmp r2, r1
    // bne _021F6C28
    // add sp, #8
    // mov r0, #4
    // pop {r3, r4, r5, r6, r7, pc}
    // strb r2, [r5, r0]
    // ldr r0, _021F6DCC ; =0x000008E9
    // bl PlaySE
    // b _021F6C56
    // cmp r4, #0xe
    // bne _021F6C3E
    // ldr r0, _021F6DD0 ; =0x000008F2
    // bl PlaySE
    // b _021F6C56
    // cmp r4, #2
    // bne _021F6C4A
    // ldr r0, _021F6DCC ; =0x000008E9
    // bl PlaySE
    // b _021F6C56
    // cmp r4, #5
    // bne _021F6C56
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add sp, #8
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, _021F6DBC ; =0x00000864
    // mov r6, #1
    // ldr r7, _021F6DD4 ; =gSystem
    // str r6, [r5, r2]
    // ldr r3, [r7, #0x4c]
    // mov r0, #0x40
    // tst r0, r3
    // beq _021F6C8C
    // ldr r0, _021F6DC8 ; =0x0000185A
    // ldrb r1, [r5, r0]
    // cmp r1, #5
    // bhs _021F6C7A
    // add sp, #8
    // mov r0, #0xa
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r1, r1, #5
    // add r2, #0x84
    // strb r1, [r5, r0]
    // add r0, r2, #0
    // bl PlaySE
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x80
    // tst r0, r3
    // beq _021F6CB8
    // ldr r0, _021F6DC8 ; =0x0000185A
    // ldrb r0, [r5, r0]
    // cmp r0, #0xa
    // blo _021F6CA4
    // cmp r0, #0xf
    // bhs _021F6CA4
    // add sp, #8
    // mov r0, #0xc
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _021F6DC8 ; =0x0000185A
    // ldrb r1, [r5, r0]
    // add r1, r1, #5
    // strb r1, [r5, r0]
    // ldr r0, _021F6DD8 ; =0x000008E8
    // bl PlaySE
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x20
    // add r1, r3, #0
    // tst r1, r0
    // beq _021F6CF2
    // ldr r3, _021F6DC8 ; =0x0000185A
    // ldrb r1, [r5, r3]
    // cmp r1, #0
    // beq _021F6CDA
    // sub r0, r1, #1
    // add r2, #0x84
    // strb r0, [r5, r3]
    // add r0, r2, #0
    // bl PlaySE
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r1, r3, #1
    // ldrb r1, [r5, r1]
    // cmp r1, #0
    // beq _021F6CEC
    // mov r0, #0xe
    // strb r0, [r5, r3]
    // add sp, #8
    // mov r0, #9
    // pop {r3, r4, r5, r6, r7, pc}
    // add sp, #8
    // sub r0, #0x21
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x10
    // tst r0, r3
    // beq _021F6D36
    // ldr r0, _021F6DC8 ; =0x0000185A
    // ldrb r1, [r5, r0]
    // add r1, r1, #1
    // cmp r1, #0xf
    // beq _021F6D12
    // add r2, #0x84
    // strb r1, [r5, r0]
    // add r0, r2, #0
    // bl PlaySE
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F8950
    // ldr r1, _021F6DDC ; =0x00001859
    // ldrb r2, [r5, r1]
    // add r2, r2, #1
    // cmp r2, r0
    // bhi _021F6D30
    // mov r2, #0
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // add sp, #8
    // mov r0, #0xb
    // pop {r3, r4, r5, r6, r7, pc}
    // add sp, #8
    // sub r0, r6, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r7, #0x48]
    // add r0, r1, #0
    // tst r0, r6
    // beq _021F6D44
    // add sp, #8
    // mov r0, #4
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #2
    // add r0, r1, #0
    // tst r0, r4
    // beq _021F6D5A
    // add r2, #0xdc
    // add r0, r2, #0
    // bl PlaySE
    // add sp, #8
    // mov r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r4, #9
    // tst r0, r1
    // beq _021F6D66
    // add sp, #8
    // mov r0, #3
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r4, #0xa
    // tst r0, r1
    // beq _021F6D7A
    // add r2, #0x85
    // add r0, r2, #0
    // bl PlaySE
    // add sp, #8
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // lsl r0, r4, #8
    // tst r0, r3
    // beq _021F6D86
    // add sp, #8
    // mov r0, #9
    // pop {r3, r4, r5, r6, r7, pc}
    // add r4, #0xfe
    // add r0, r3, #0
    // tst r0, r4
    // beq _021F6D94
    // add sp, #8
    // mov r0, #0xb
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #4
    // tst r0, r1
    // beq _021F6DA0
    // add sp, #8
    // mov r0, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #8
    // tst r1, r0
    // beq _021F6DB4
    // add r2, #0x8e
    // add r0, r2, #0
    // bl PlaySE
    // add sp, #8
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, #9
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F6DBC: .word 0x00000864
    // _021F6DC0: .word ov18_021FB8A4
    // _021F6DC4: .word ov18_021FB84C
    // _021F6DC8: .word 0x0000185A
    // _021F6DCC: .word 0x000008E9
    // _021F6DD0: .word 0x000008F2
    // _021F6DD4: .word gSystem
    // _021F6DD8: .word 0x000008E8
    // _021F6DDC: .word 0x00001859
    // TODO: decompile
}




void ov18_021F6DE0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x25
    // str r0, [sp, #8]
    // ldr r0, _021F6E1C ; =ov18_021FB878
    // ldr r1, _021F6E20 ; =ov18_021FB9F0
    // ldr r2, _021F6E24 ; =ov18_021FB688
    // add r3, r5, #0
    // bl GridInputHandler_Create
    // ldr r1, _021F6E28 ; =0x00001864
    // mov r2, #1
    // str r0, [r5, r1]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov18_021F11C0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F6E58
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _021F6E1C: .word ov18_021FB878
    // _021F6E20: .word ov18_021FB9F0
    // _021F6E24: .word ov18_021FB688
    // _021F6E28: .word 0x00001864
    // TODO: decompile
}




void ov18_021F6E2C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F6E50 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #8
    // tst r1, r0
    // bne _021F6E4C
    // ldr r0, _021F6E54 ; =0x00001864
    // ldr r0, [r4, r0]
    // bl GridInputHandler_HandleInput_AllowHold
    // pop {r4, pc}
    // nop
    // _021F6E50: .word gSystem
    // _021F6E54: .word 0x00001864
    // TODO: decompile
}




void ov18_021F6E58(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F6E90 ; =0x00001864
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x67
    // add r2, sp, #0
    // lsl r0, r0, #4
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPositionXY
    // ldr r2, _021F6E94 ; =ov18_021FBD1C
    // add r0, r5, #0
    // ldrb r2, [r2, r4]
    // mov r1, #0
    // bl ov18_021F118C
    // pop {r3, r4, r5, pc}
    // nop
    // _021F6E90: .word 0x00001864
    // _021F6E94: .word ov18_021FBD1C
    // TODO: decompile
}




void ov18_021F6E98(void) {
    // push {r3, lr}
    // bl ov18_021F6E58
    // ldr r0, _021F6EA8 ; =0x000008E8
    // bl PlaySE
    // pop {r3, pc}
    // nop
    // _021F6EA8: .word 0x000008E8
    // TODO: decompile
}




void ov18_021F6EAC(void) {
}




void ov18_021F6EC0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x25
    // str r0, [sp, #8]
    // ldr r0, _021F6EF8 ; =ov18_021FB828
    // ldr r1, _021F6EFC ; =ov18_021FB968
    // ldr r2, _021F6F00 ; =ov18_021FB668
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // ldr r1, _021F6F04 ; =0x00001864
    // mov r2, #1
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F6F38
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021F6EF8: .word ov18_021FB828
    // _021F6EFC: .word ov18_021FB968
    // _021F6F00: .word ov18_021FB668
    // _021F6F04: .word 0x00001864
    // TODO: decompile
}




void ov18_021F6F08(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F6F30 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #8
    // tst r0, r1
    // beq _021F6F24
    // mov r0, #6
    // pop {r4, pc}
    // ldr r0, _021F6F34 ; =0x00001864
    // ldr r0, [r4, r0]
    // bl GridInputHandler_HandleInput_AllowHold
    // pop {r4, pc}
    // nop
    // _021F6F30: .word gSystem
    // _021F6F34: .word 0x00001864
    // TODO: decompile
}




void ov18_021F6F38(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F6F70 ; =0x00001864
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x67
    // add r2, sp, #0
    // lsl r0, r0, #4
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPositionXY
    // ldr r2, _021F6F74 ; =ov18_021FB628
    // add r0, r5, #0
    // ldrb r2, [r2, r4]
    // mov r1, #0
    // bl ov18_021F118C
    // pop {r3, r4, r5, pc}
    // nop
    // _021F6F70: .word 0x00001864
    // _021F6F74: .word ov18_021FB628
    // TODO: decompile
}




void ov18_021F6F78(void) {
    // push {r3, lr}
    // bl ov18_021F6F38
    // ldr r0, _021F6F88 ; =0x000008E8
    // bl PlaySE
    // pop {r3, pc}
    // nop
    // _021F6F88: .word 0x000008E8
    // TODO: decompile
}




void ov18_021F6F8C(void) {
}




void ov18_021F6FA0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x25
    // str r0, [sp, #8]
    // ldr r0, _021F6FD8 ; =ov18_021FBA94
    // ldr r1, _021F6FDC ; =ov18_021FBC34
    // ldr r2, _021F6FE0 ; =ov18_021FB6A8
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // ldr r1, _021F6FE4 ; =0x00001864
    // mov r2, #1
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F7018
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021F6FD8: .word ov18_021FBA94
    // _021F6FDC: .word ov18_021FBC34
    // _021F6FE0: .word ov18_021FB6A8
    // _021F6FE4: .word 0x00001864
    // TODO: decompile
}




void ov18_021F6FE8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F7010 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #8
    // tst r0, r1
    // beq _021F7004
    // mov r0, #0x1b
    // pop {r4, pc}
    // ldr r0, _021F7014 ; =0x00001864
    // ldr r0, [r4, r0]
    // bl GridInputHandler_HandleInput_AllowHold
    // pop {r4, pc}
    // nop
    // _021F7010: .word gSystem
    // _021F7014: .word 0x00001864
    // TODO: decompile
}




void ov18_021F7018(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F705C ; =0x00001864
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x67
    // add r2, sp, #0
    // lsl r0, r0, #4
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPositionXY
    // cmp r4, #0x1b
    // blt _021F7050
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x23
    // bl ov18_021F118C
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x28
    // bl ov18_021F118C
    // pop {r3, r4, r5, pc}
    // _021F705C: .word 0x00001864
    // TODO: decompile
}




void ov18_021F7060(void) {
    // push {r4, r5, r6, lr}
    // add r6, r2, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // sub r0, #0x1b
    // add r4, r1, #0
    // cmp r0, #1
    // bhi _021F70DA
    // ldr r0, _021F70F0 ; =0x0000189C
    // ldr r0, [r5, r0]
    // lsl r1, r0, #3
    // ldr r0, _021F70F4 ; =ov18_021FBC34
    // cmp r4, #0
    // ldrb r0, [r0, r1]
    // beq _021F7082
    // cmp r4, #6
    // bne _021F70AC
    // ldr r3, _021F70F4 ; =ov18_021FBC34
    // mov r1, #0
    // ldrb r2, [r3]
    // cmp r0, r2
    // bne _021F70A2
    // ldr r0, _021F70F8 ; =0x00001864
    // lsl r2, r6, #0x18
    // add r4, r1, #0
    // lsl r1, r1, #0x18
    // lsr r2, r2, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F70DA
    // add r1, r1, #1
    // add r3, #8
    // cmp r1, #0x1a
    // ble ov18_021F7086
    // b _021F70DA
    // cmp r4, #0x15
    // beq _021F70B4
    // cmp r4, #0x1a
    // bne _021F70DA
    // ldr r3, _021F70FC ; =ov18_021FBC34 + 0xD0
    // mov r1, #0x1a
    // ldrb r2, [r3]
    // cmp r0, r2
    // bne _021F70D4
    // ldr r0, _021F70F8 ; =0x00001864
    // lsl r2, r6, #0x18
    // add r4, r1, #0
    // lsl r1, r1, #0x18
    // lsr r2, r2, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // add r3, r2, #0
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F70DA
    // sub r3, #8
    // sub r1, r1, #1
    // bpl _021F70B8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F7018
    // ldr r0, _021F70F0 ; =0x0000189C
    // str r6, [r5, r0]
    // ldr r0, _021F7100 ; =0x000008E8
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // nop
    // _021F70F0: .word 0x0000189C
    // _021F70F4: .word ov18_021FBC34
    // _021F70F8: .word 0x00001864
    // _021F70FC: .word ov18_021FBC34 + 0xD0
    // _021F7100: .word 0x000008E8
    // TODO: decompile
}




void ov18_021F7104(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // bl ov18_021F7018
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F7120 ; =0x0000189C
    // str r4, [r5, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _021F7120: .word 0x0000189C
    // TODO: decompile
}




void ov18_021F7124(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x25
    // str r0, [sp, #8]
    // ldr r0, _021F715C ; =ov18_021FBA40
    // ldr r1, _021F7160 ; =ov18_021FBB94
    // ldr r2, _021F7164 ; =ov18_021FB638
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // ldr r1, _021F7168 ; =0x00001864
    // mov r2, #1
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F719C
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021F715C: .word ov18_021FBA40
    // _021F7160: .word ov18_021FBB94
    // _021F7164: .word ov18_021FB638
    // _021F7168: .word 0x00001864
    // TODO: decompile
}




void ov18_021F716C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F7194 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #8
    // tst r0, r1
    // beq _021F7188
    // mov r0, #0x12
    // pop {r4, pc}
    // ldr r0, _021F7198 ; =0x00001864
    // ldr r0, [r4, r0]
    // bl GridInputHandler_HandleInput_AllowHold
    // pop {r4, pc}
    // nop
    // _021F7194: .word gSystem
    // _021F7198: .word 0x00001864
    // TODO: decompile
}




void ov18_021F719C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F71D4 ; =0x00001864
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x67
    // add r2, sp, #0
    // lsl r0, r0, #4
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPositionXY
    // ldr r2, _021F71D8 ; =ov18_021FBD3C
    // add r0, r5, #0
    // ldrb r2, [r2, r4]
    // mov r1, #0
    // bl ov18_021F118C
    // pop {r3, r4, r5, pc}
    // nop
    // _021F71D4: .word 0x00001864
    // _021F71D8: .word ov18_021FBD3C
    // TODO: decompile
}




void ov18_021F71DC(void) {
    // push {r4, r5, r6, lr}
    // add r6, r2, #0
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r6, #0x12
    // bne _021F727C
    // cmp r4, #0
    // bne _021F7236
    // ldr r0, _021F7328 ; =0x0000189C
    // ldr r1, [r5, r0]
    // cmp r1, #0x10
    // blt _021F7218
    // cmp r1, #0x11
    // bgt _021F7218
    // lsr r3, r1, #0x1f
    // lsl r2, r1, #0x1e
    // sub r2, r2, r3
    // mov r1, #0x1e
    // ror r2, r1
    // add r4, r3, r2
    // sub r0, #0x38
    // lsl r1, r4, #0x18
    // lsl r2, r6, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x12
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7312
    // cmp r1, #0
    // blt _021F7312
    // cmp r1, #1
    // bgt _021F7312
    // ldr r0, _021F732C ; =0x00001864
    // add r4, r1, #0
    // lsl r1, r1, #0x18
    // lsl r2, r6, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x12
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7312
    // cmp r4, #0x10
    // bne _021F7312
    // ldr r0, _021F7328 ; =0x0000189C
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // blt _021F725E
    // cmp r1, #1
    // bgt _021F725E
    // add r4, r1, #0
    // add r4, #0x10
    // sub r0, #0x38
    // lsl r1, r4, #0x18
    // lsl r2, r6, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x12
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7312
    // cmp r1, #0x10
    // blt _021F7312
    // cmp r1, #0x11
    // bgt _021F7312
    // ldr r0, _021F732C ; =0x00001864
    // add r4, r1, #0
    // lsl r1, r1, #0x18
    // lsl r2, r6, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x12
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7312
    // cmp r6, #0x13
    // bne _021F7312
    // cmp r4, #3
    // bne _021F72CE
    // ldr r0, _021F7328 ; =0x0000189C
    // ldr r1, [r5, r0]
    // cmp r1, #0xe
    // blt _021F72B0
    // cmp r1, #0xf
    // bgt _021F72B0
    // lsr r3, r1, #0x1f
    // lsl r2, r1, #0x1e
    // sub r2, r2, r3
    // mov r1, #0x1e
    // ror r2, r1
    // add r4, r3, r2
    // sub r0, #0x38
    // lsl r1, r4, #0x18
    // lsl r2, r6, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x13
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7312
    // cmp r1, #2
    // blt _021F7312
    // cmp r1, #3
    // bgt _021F7312
    // ldr r0, _021F732C ; =0x00001864
    // add r4, r1, #0
    // lsl r1, r1, #0x18
    // lsl r2, r6, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x13
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7312
    // cmp r4, #0xf
    // bne _021F7312
    // ldr r0, _021F7328 ; =0x0000189C
    // ldr r1, [r5, r0]
    // cmp r1, #2
    // blt _021F72F6
    // cmp r1, #3
    // bgt _021F72F6
    // add r4, r1, #0
    // add r4, #0xc
    // sub r0, #0x38
    // lsl r1, r4, #0x18
    // lsl r2, r6, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x13
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7312
    // cmp r1, #0xe
    // blt _021F7312
    // cmp r1, #0xf
    // bgt _021F7312
    // ldr r0, _021F732C ; =0x00001864
    // add r4, r1, #0
    // lsl r1, r1, #0x18
    // lsl r2, r6, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x13
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F719C
    // ldr r0, _021F7328 ; =0x0000189C
    // str r6, [r5, r0]
    // ldr r0, _021F7330 ; =0x000008E8
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // nop
    // _021F7328: .word 0x0000189C
    // _021F732C: .word 0x00001864
    // _021F7330: .word 0x000008E8
    // TODO: decompile
}




void ov18_021F7334(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // bl ov18_021F719C
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F7350 ; =0x0000189C
    // str r4, [r5, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _021F7350: .word 0x0000189C
    // TODO: decompile
}




void ov18_021F7354(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x25
    // str r0, [sp, #8]
    // ldr r0, _021F738C ; =ov18_021FB6C8
    // ldr r1, _021F7390 ; =ov18_021FB780
    // ldr r2, _021F7394 ; =ov18_021FB648
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // ldr r1, _021F7398 ; =0x00001864
    // mov r2, #1
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F7444
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021F738C: .word ov18_021FB6C8
    // _021F7390: .word ov18_021FB780
    // _021F7394: .word ov18_021FB648
    // _021F7398: .word 0x00001864
    // TODO: decompile
}




void ov18_021F739C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _021F7438 ; =0x00001864
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetNextInput
    // add r4, r0, #0
    // ldr r0, [r5]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r1, _021F743C ; =gSystem
    // mov r0, #8
    // ldr r2, [r1, #0x48]
    // tst r0, r2
    // beq _021F73C2
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // cmp r4, #0
    // bne _021F73DC
    // ldr r1, [r1, #0x4c]
    // mov r0, #0x20
    // tst r0, r1
    // beq _021F73D2
    // mov r0, #5
    // pop {r4, r5, r6, pc}
    // mov r0, #0x10
    // tst r0, r1
    // beq _021F73DC
    // mov r0, #4
    // pop {r4, r5, r6, pc}
    // cmp r4, #1
    // bne _021F73F8
    // ldr r0, _021F743C ; =gSystem
    // ldr r1, [r0, #0x4c]
    // mov r0, #0x20
    // tst r0, r1
    // beq _021F73EE
    // mov r0, #7
    // pop {r4, r5, r6, pc}
    // mov r0, #0x10
    // tst r0, r1
    // beq _021F73F8
    // mov r0, #6
    // pop {r4, r5, r6, pc}
    // ldr r0, _021F7440 ; =ov18_021FB718
    // bl TouchscreenHitbox_FindRectAtTouchHeld
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _021F742C
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F7438 ; =0x00001864
    // lsr r4, r6, #1
    // lsl r1, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F7444
    // add r0, r6, #4
    // pop {r4, r5, r6, pc}
    // ldr r0, _021F7438 ; =0x00001864
    // ldr r0, [r5, r0]
    // bl GridInputHandler_HandleInput_AllowHold
    // pop {r4, r5, r6, pc}
    // nop
    // _021F7438: .word 0x00001864
    // _021F743C: .word gSystem
    // _021F7440: .word ov18_021FB718
    // TODO: decompile
}




void ov18_021F7444(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F74A0 ; =0x00001864
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // cmp r4, #0
    // bne _021F7470
    // ldr r1, _021F74A4 ; =0x0000187C
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov18_021F3AD0
    // add r1, sp, #0
    // strb r0, [r1, #1]
    // b _021F7482
    // cmp r4, #1
    // bne _021F7482
    // ldr r1, _021F74A8 ; =0x00001878
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov18_021F3AD0
    // add r1, sp, #0
    // strb r0, [r1, #1]
    // mov r0, #0x67
    // add r2, sp, #0
    // lsl r0, r0, #4
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPositionXY
    // ldr r2, _021F74AC ; =ov18_021FB618
    // add r0, r5, #0
    // ldrb r2, [r2, r4]
    // mov r1, #0
    // bl ov18_021F118C
    // pop {r3, r4, r5, pc}
    // _021F74A0: .word 0x00001864
    // _021F74A4: .word 0x0000187C
    // _021F74A8: .word 0x00001878
    // _021F74AC: .word ov18_021FB618
    // TODO: decompile
}




void ov18_021F74B0(void) {
    // push {r3, lr}
    // bl ov18_021F7444
    // ldr r0, _021F74C0 ; =0x000008E8
    // bl PlaySE
    // pop {r3, pc}
    // nop
    // _021F74C0: .word 0x000008E8
    // TODO: decompile
}




void ov18_021F74C4(void) {
}




void ov18_021F74D8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x25
    // str r0, [sp, #8]
    // ldr r0, _021F7510 ; =ov18_021FB6DC
    // ldr r1, _021F7514 ; =ov18_021FB7A0
    // ldr r2, _021F7518 ; =ov18_021FB678
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // ldr r1, _021F751C ; =0x00001864
    // mov r2, #1
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F75C8
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021F7510: .word ov18_021FB6DC
    // _021F7514: .word ov18_021FB7A0
    // _021F7518: .word ov18_021FB678
    // _021F751C: .word 0x00001864
    // TODO: decompile
}




void ov18_021F7520(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _021F75BC ; =0x00001864
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetNextInput
    // add r4, r0, #0
    // ldr r0, [r5]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r1, _021F75C0 ; =gSystem
    // mov r0, #8
    // ldr r2, [r1, #0x48]
    // tst r0, r2
    // beq _021F7546
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // cmp r4, #0
    // bne _021F7560
    // ldr r1, [r1, #0x4c]
    // mov r0, #0x20
    // tst r0, r1
    // beq _021F7556
    // mov r0, #5
    // pop {r4, r5, r6, pc}
    // mov r0, #0x10
    // tst r0, r1
    // beq _021F7560
    // mov r0, #4
    // pop {r4, r5, r6, pc}
    // cmp r4, #1
    // bne _021F757C
    // ldr r0, _021F75C0 ; =gSystem
    // ldr r1, [r0, #0x4c]
    // mov r0, #0x20
    // tst r0, r1
    // beq _021F7572
    // mov r0, #7
    // pop {r4, r5, r6, pc}
    // mov r0, #0x10
    // tst r0, r1
    // beq _021F757C
    // mov r0, #6
    // pop {r4, r5, r6, pc}
    // ldr r0, _021F75C4 ; =ov18_021FB718
    // bl TouchscreenHitbox_FindRectAtTouchHeld
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _021F75B0
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F75BC ; =0x00001864
    // lsr r4, r6, #1
    // lsl r1, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F75C8
    // add r0, r6, #4
    // pop {r4, r5, r6, pc}
    // ldr r0, _021F75BC ; =0x00001864
    // ldr r0, [r5, r0]
    // bl GridInputHandler_HandleInput_AllowHold
    // pop {r4, r5, r6, pc}
    // nop
    // _021F75BC: .word 0x00001864
    // _021F75C0: .word gSystem
    // _021F75C4: .word ov18_021FB718
    // TODO: decompile
}




void ov18_021F75C8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F7628 ; =0x00001864
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // cmp r4, #0
    // bne _021F75F4
    // ldr r1, _021F762C ; =0x00001884
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov18_021F3AD0
    // add r1, sp, #0
    // strb r0, [r1, #1]
    // b _021F7608
    // cmp r4, #1
    // bne _021F7608
    // mov r1, #0x62
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov18_021F3AD0
    // add r1, sp, #0
    // strb r0, [r1, #1]
    // mov r0, #0x67
    // add r2, sp, #0
    // lsl r0, r0, #4
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPositionXY
    // ldr r2, _021F7630 ; =ov18_021FB61C
    // add r0, r5, #0
    // ldrb r2, [r2, r4]
    // mov r1, #0
    // bl ov18_021F118C
    // pop {r3, r4, r5, pc}
    // nop
    // _021F7628: .word 0x00001864
    // _021F762C: .word 0x00001884
    // _021F7630: .word ov18_021FB61C
    // TODO: decompile
}




void ov18_021F7634(void) {
    // push {r3, lr}
    // bl ov18_021F75C8
    // ldr r0, _021F7644 ; =0x000008E8
    // bl PlaySE
    // pop {r3, pc}
    // nop
    // _021F7644: .word 0x000008E8
    // TODO: decompile
}




void ov18_021F7648(void) {
}




void ov18_021F765C(void) {
}




void ov18_021F7668(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x25
    // str r0, [sp, #8]
    // ldr r0, _021F76A0 ; =ov18_021FB744
    // ldr r1, _021F76A4 ; =ov18_021FB8D4
    // ldr r2, _021F76A8 ; =ov18_021FB6B8
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // ldr r1, _021F76AC ; =0x00001864
    // mov r2, #1
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F76E0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021F76A0: .word ov18_021FB744
    // _021F76A4: .word ov18_021FB8D4
    // _021F76A8: .word ov18_021FB6B8
    // _021F76AC: .word 0x00001864
    // TODO: decompile
}




void ov18_021F76B0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F76D8 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #8
    // tst r0, r1
    // beq _021F76CC
    // mov r0, #4
    // pop {r4, pc}
    // ldr r0, _021F76DC ; =0x00001864
    // ldr r0, [r4, r0]
    // bl GridInputHandler_HandleInput_AllowHold
    // pop {r4, pc}
    // nop
    // _021F76D8: .word gSystem
    // _021F76DC: .word 0x00001864
    // TODO: decompile
}




void ov18_021F76E0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F7718 ; =0x00001864
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x67
    // add r2, sp, #0
    // lsl r0, r0, #4
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPositionXY
    // ldr r2, _021F771C ; =ov18_021FB620
    // add r0, r5, #0
    // ldrb r2, [r2, r4]
    // mov r1, #0
    // bl ov18_021F118C
    // pop {r3, r4, r5, pc}
    // nop
    // _021F7718: .word 0x00001864
    // _021F771C: .word ov18_021FB620
    // TODO: decompile
}




void ov18_021F7720(void) {
    // push {r3, lr}
    // bl ov18_021F76E0
    // ldr r0, _021F7730 ; =0x000008E8
    // bl PlaySE
    // pop {r3, pc}
    // nop
    // _021F7730: .word 0x000008E8
    // TODO: decompile
}




void ov18_021F7734(void) {
}




void ov18_021F7748(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x25
    // str r0, [sp, #8]
    // ldr r0, _021F7780 ; =ov18_021FB9A8
    // ldr r1, _021F7784 ; =ov18_021FBB0C
    // ldr r2, _021F7788 ; =ov18_021FB658
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // ldr r1, _021F778C ; =0x00001864
    // mov r2, #1
    // str r0, [r4, r1]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F11C0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov18_021F77C0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021F7780: .word ov18_021FB9A8
    // _021F7784: .word ov18_021FBB0C
    // _021F7788: .word ov18_021FB658
    // _021F778C: .word 0x00001864
    // TODO: decompile
}




void ov18_021F7790(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F77B8 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #8
    // tst r0, r1
    // beq _021F77AC
    // mov r0, #0xf
    // pop {r4, pc}
    // ldr r0, _021F77BC ; =0x00001864
    // ldr r0, [r4, r0]
    // bl GridInputHandler_HandleInput_AllowHold
    // pop {r4, pc}
    // nop
    // _021F77B8: .word gSystem
    // _021F77BC: .word 0x00001864
    // TODO: decompile
}




void ov18_021F77C0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _021F77F8 ; =0x00001864
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetDpadBox
    // add r1, sp, #0
    // add r1, #1
    // add r2, sp, #0
    // bl DpadMenuBox_GetPosition
    // mov r0, #0x67
    // add r2, sp, #0
    // lsl r0, r0, #4
    // ldrb r1, [r2, #1]
    // ldrb r2, [r2]
    // ldr r0, [r5, r0]
    // bl ManagedSprite_SetPositionXY
    // ldr r2, _021F77FC ; =ov18_021FBD28
    // add r0, r5, #0
    // ldrb r2, [r2, r4]
    // mov r1, #0
    // bl ov18_021F118C
    // pop {r3, r4, r5, pc}
    // nop
    // _021F77F8: .word 0x00001864
    // _021F77FC: .word ov18_021FBD28
    // TODO: decompile
}




void ov18_021F7800(void) {
    // push {r4, r5, r6, lr}
    // add r4, r2, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // cmp r4, #0xf
    // bne _021F789E
    // cmp r6, #0
    // bne _021F7858
    // ldr r0, _021F7948 ; =0x0000189C
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // blt _021F7832
    // cmp r1, #2
    // bgt _021F7832
    // sub r0, #0x38
    // add r6, r1, #0
    // lsl r1, r1, #0x18
    // lsl r2, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0xf
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7932
    // cmp r1, #0xa
    // blt _021F7932
    // cmp r1, #0xc
    // bgt _021F7932
    // add r0, r1, #0
    // mov r1, #5
    // bl _s32_div_f
    // ldr r0, _021F794C ; =0x00001864
    // add r6, r1, #0
    // lsl r1, r6, #0x18
    // lsl r2, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0xf
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7932
    // cmp r6, #0xa
    // bne _021F7932
    // ldr r0, _021F7948 ; =0x0000189C
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // blt _021F7880
    // cmp r1, #2
    // bgt _021F7880
    // add r6, r1, #0
    // add r6, #0xa
    // sub r0, #0x38
    // lsl r1, r6, #0x18
    // lsl r2, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0xf
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7932
    // cmp r1, #0xa
    // blt _021F7932
    // cmp r1, #0xc
    // bgt _021F7932
    // ldr r0, _021F794C ; =0x00001864
    // add r6, r1, #0
    // lsl r1, r1, #0x18
    // lsl r2, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0xf
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7932
    // cmp r4, #0x10
    // bne _021F7932
    // cmp r6, #4
    // bne _021F78EE
    // ldr r0, _021F7948 ; =0x0000189C
    // ldr r1, [r5, r0]
    // cmp r1, #3
    // blt _021F78C8
    // cmp r1, #4
    // bgt _021F78C8
    // sub r0, #0x38
    // add r6, r1, #0
    // lsl r1, r1, #0x18
    // lsl r2, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x10
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7932
    // cmp r1, #0xd
    // blt _021F7932
    // cmp r1, #0xe
    // bgt _021F7932
    // add r0, r1, #0
    // mov r1, #5
    // bl _s32_div_f
    // ldr r0, _021F794C ; =0x00001864
    // add r6, r1, #0
    // lsl r1, r6, #0x18
    // lsl r2, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x10
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7932
    // cmp r6, #0xe
    // bne _021F7932
    // ldr r0, _021F7948 ; =0x0000189C
    // ldr r1, [r5, r0]
    // cmp r1, #3
    // blt _021F7916
    // cmp r1, #4
    // bgt _021F7916
    // add r6, r1, #0
    // add r6, #0xa
    // sub r0, #0x38
    // lsl r1, r6, #0x18
    // lsl r2, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x10
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // b _021F7932
    // cmp r1, #0xd
    // blt _021F7932
    // cmp r1, #0xe
    // bgt _021F7932
    // ldr r0, _021F794C ; =0x00001864
    // add r6, r1, #0
    // lsl r1, r1, #0x18
    // lsl r2, r4, #0x18
    // ldr r0, [r5, r0]
    // lsr r1, r1, #0x18
    // lsr r2, r2, #0x18
    // mov r3, #0x10
    // bl GridInputHandler_SetNextLastUnk0FInputs
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov18_021F77C0
    // ldr r0, _021F7948 ; =0x0000189C
    // str r4, [r5, r0]
    // ldr r0, _021F7950 ; =0x000008E8
    // bl PlaySE
    // pop {r4, r5, r6, pc}
    // nop
    // _021F7948: .word 0x0000189C
    // _021F794C: .word 0x00001864
    // _021F7950: .word 0x000008E8
    // TODO: decompile
}




void ov18_021F7954(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r2, #0
    // bl ov18_021F77C0
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0, #0xc]
    // bl MenuInputStateMgr_SetState
    // ldr r0, _021F7970 ; =0x0000189C
    // str r4, [r5, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _021F7970: .word 0x0000189C
    // TODO: decompile
}




void ov18_021F7974(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r4, r1, #0
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchNewCoords
    // cmp r0, #1
    // bne _021F7A1A
    // ldr r0, _021F7B58 ; =ov18_021FB8A4
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F799C
    // add sp, #8
    // add r0, r1, #0
    // pop {r4, r5, r6, pc}
    // lsl r1, r0, #2
    // ldr r0, _021F7B5C ; =ov18_021FB84C
    // ldr r4, [r0, r1]
    // cmp r4, #0
    // bne _021F79FC
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // sub r1, r1, #4
    // sub r0, #0x1b
    // str r1, [sp]
    // mov r1, #0x28
    // str r0, [sp, #4]
    // bl _u32_div_f
    // add r6, r0, #0
    // ldr r0, [sp]
    // mov r1, #0x28
    // bl _u32_div_f
    // lsl r1, r0, #2
    // add r0, r0, r1
    // add r0, r6, r0
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // ldr r0, _021F7B60 ; =0x0000185A
    // ldrb r1, [r5, r0]
    // cmp r2, r1
    // bne _021F79F2
    // cmp r1, #0
    // bne _021F79EC
    // sub r0, r0, #1
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // bne _021F79EC
    // ldr r0, _021F7B64 ; =0x000008E9
    // bl PlaySE
    // add sp, #8
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // add sp, #8
    // mov r0, #4
    // pop {r4, r5, r6, pc}
    // strb r2, [r5, r0]
    // ldr r0, _021F7B64 ; =0x000008E9
    // bl PlaySE
    // b _021F7A14
    // cmp r4, #2
    // bne _021F7A08
    // ldr r0, _021F7B64 ; =0x000008E9
    // bl PlaySE
    // b _021F7A14
    // cmp r4, #5
    // bne _021F7A14
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add sp, #8
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // ldr r1, _021F7B68 ; =gSystem
    // mov r0, #0x40
    // ldr r2, [r1, #0x4c]
    // tst r0, r2
    // beq _021F7A42
    // ldr r0, _021F7B60 ; =0x0000185A
    // ldrb r1, [r5, r0]
    // cmp r1, #5
    // bhs _021F7A32
    // add sp, #8
    // mov r0, #0xa
    // pop {r4, r5, r6, pc}
    // sub r1, r1, #5
    // strb r1, [r5, r0]
    // ldr r0, _021F7B6C ; =0x000008E8
    // bl PlaySE
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #0x80
    // tst r0, r2
    // beq _021F7A6E
    // ldr r0, _021F7B60 ; =0x0000185A
    // ldrb r0, [r5, r0]
    // cmp r0, #0xa
    // blo _021F7A5A
    // cmp r0, #0xf
    // bhs _021F7A5A
    // add sp, #8
    // mov r0, #0xc
    // pop {r4, r5, r6, pc}
    // ldr r0, _021F7B60 ; =0x0000185A
    // ldrb r1, [r5, r0]
    // add r1, r1, #5
    // strb r1, [r5, r0]
    // ldr r0, _021F7B6C ; =0x000008E8
    // bl PlaySE
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #0x20
    // add r3, r2, #0
    // tst r3, r0
    // beq _021F7AA6
    // ldr r2, _021F7B60 ; =0x0000185A
    // ldrb r1, [r5, r2]
    // cmp r1, #0
    // beq _021F7A8E
    // sub r0, r1, #1
    // strb r0, [r5, r2]
    // ldr r0, _021F7B6C ; =0x000008E8
    // bl PlaySE
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // sub r1, r2, #1
    // ldrb r1, [r5, r1]
    // cmp r1, #0
    // beq _021F7AA0
    // mov r0, #0xe
    // strb r0, [r5, r2]
    // add sp, #8
    // mov r0, #9
    // pop {r4, r5, r6, pc}
    // add sp, #8
    // sub r0, #0x21
    // pop {r4, r5, r6, pc}
    // mov r0, #0x10
    // tst r0, r2
    // beq _021F7AEA
    // ldr r0, _021F7B60 ; =0x0000185A
    // ldrb r1, [r5, r0]
    // add r1, r1, #1
    // cmp r1, #0xf
    // beq _021F7AC4
    // strb r1, [r5, r0]
    // ldr r0, _021F7B6C ; =0x000008E8
    // bl PlaySE
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov18_021F8950
    // ldr r1, _021F7B70 ; =0x00001859
    // ldrb r2, [r5, r1]
    // add r2, r2, #1
    // cmp r2, r0
    // bhi _021F7AE2
    // mov r2, #0
    // add r0, r1, #1
    // strb r2, [r5, r0]
    // add sp, #8
    // mov r0, #0xb
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // ldr r0, [r1, #0x48]
    // mov r1, #1
    // tst r1, r0
    // beq _021F7AF8
    // add sp, #8
    // mov r0, #4
    // pop {r4, r5, r6, pc}
    // mov r3, #2
    // add r1, r0, #0
    // tst r1, r3
    // beq _021F7B0E
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add sp, #8
    // mov r0, #6
    // pop {r4, r5, r6, pc}
    // lsl r1, r3, #9
    // tst r1, r0
    // beq _021F7B1A
    // add sp, #8
    // mov r0, #3
    // pop {r4, r5, r6, pc}
    // lsl r1, r3, #0xa
    // tst r1, r0
    // beq _021F7B2C
    // ldr r0, _021F7B64 ; =0x000008E9
    // bl PlaySE
    // add sp, #8
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // lsl r1, r3, #8
    // tst r1, r2
    // beq _021F7B38
    // add sp, #8
    // mov r0, #9
    // pop {r4, r5, r6, pc}
    // add r3, #0xfe
    // add r1, r2, #0
    // tst r1, r3
    // beq _021F7B46
    // add sp, #8
    // mov r0, #0xb
    // pop {r4, r5, r6, pc}
    // mov r1, #4
    // tst r0, r1
    // beq _021F7B52
    // add sp, #8
    // mov r0, #8
    // pop {r4, r5, r6, pc}
    // sub r0, r1, #5
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _021F7B58: .word ov18_021FB8A4
    // _021F7B5C: .word ov18_021FB84C
    // _021F7B60: .word 0x0000185A
    // _021F7B64: .word 0x000008E9
    // _021F7B68: .word gSystem
    // _021F7B6C: .word 0x000008E8
    // _021F7B70: .word 0x00001859
    // TODO: decompile
}




void ov18_021F7B74(void) {
}




void ov18_021F7B90(void) {
    // bx lr
    // TODO: decompile
}




void ov18_021F7B94(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r4, r1, #0
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _021F7BE8
    // ldr r0, _021F7C04 ; =ov18_021FB704
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _021F7BFE
    // add r0, sp, #4
    // add r1, sp, #0
    // bl System_GetTouchNewCoords
    // ldr r0, _021F7C08 ; =ov18_021FB698
    // lsl r1, r6, #2
    // ldr r6, [r0, r1]
    // cmp r6, #1
    // bne _021F7BDE
    // ldr r1, _021F7C0C ; =0x000018A2
    // ldr r0, [r5]
    // ldrh r1, [r5, r1]
    // ldr r0, [r0]
    // bl Pokedex_CheckMonCaughtFlag
    // cmp r0, #0
    // bne _021F7BDE
    // mov r0, #0
    // add sp, #8
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // str r0, [r4]
    // add sp, #8
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, _021F7C10 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r1, r0
    // beq _021F7BFC
    // mov r0, #0
    // str r0, [r4]
    // add sp, #8
    // mov r0, #3
    // pop {r4, r5, r6, pc}
    // sub r0, r0, #3
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _021F7C04: .word ov18_021FB704
    // _021F7C08: .word ov18_021FB698
    // _021F7C0C: .word 0x000018A2
    // _021F7C10: .word gSystem
    // TODO: decompile
}




void ov18_021F7C14(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // bl ov18_021F7B94
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F7CE6
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _021F7C4C
    // ldr r0, _021F7CE8 ; =ov18_021FB934
    // bl TouchscreenHitbox_FindHitboxAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F7C40
    // add r0, r1, #0
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // str r1, [r5]
    // lsl r1, r0, #2
    // ldr r0, _021F7CEC ; =ov18_021FB904
    // ldr r0, [r0, r1]
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // str r0, [r5]
    // ldr r2, _021F7CF0 ; =gSystem
    // mov r0, #0x40
    // ldr r1, [r2, #0x4c]
    // tst r0, r1
    // beq _021F7C5E
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r0, #0x80
    // tst r0, r1
    // beq _021F7C68
    // mov r0, #7
    // pop {r3, r4, r5, pc}
    // ldr r0, [r2, #0x48]
    // mov r2, #1
    // tst r2, r0
    // beq _021F7C88
    // ldr r0, _021F7CF4 ; =0x000018C9
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // bne _021F7C7C
    // mov r0, #0xe
    // pop {r3, r4, r5, pc}
    // cmp r0, #1
    // bne _021F7C84
    // mov r0, #0xf
    // pop {r3, r4, r5, pc}
    // mov r0, #0xd
    // pop {r3, r4, r5, pc}
    // mov r3, #4
    // add r2, r0, #0
    // tst r2, r3
    // beq _021F7CA0
    // ldr r0, _021F7CF8 ; =0x000018C8
    // ldrsb r0, [r4, r0]
    // cmp r0, #0
    // bne _021F7C9C
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // mov r0, #0xb
    // pop {r3, r4, r5, pc}
    // ldr r2, _021F7CF8 ; =0x000018C8
    // ldrsb r2, [r4, r2]
    // cmp r2, #0
    // bne _021F7CB2
    // add r3, #0xfc
    // tst r0, r3
    // beq _021F7CBC
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // lsl r2, r3, #7
    // tst r0, r2
    // beq _021F7CBC
    // mov r0, #0xb
    // pop {r3, r4, r5, pc}
    // mov r0, #0x20
    // tst r0, r1
    // beq _021F7CC6
    // mov r0, #0x10
    // pop {r3, r4, r5, pc}
    // mov r0, #0x10
    // tst r1, r0
    // beq _021F7CE4
    // ldr r1, _021F7CFC ; =0x000018A2
    // ldr r0, [r4]
    // ldrh r1, [r4, r1]
    // ldr r0, [r0]
    // bl Pokedex_CheckMonCaughtFlag
    // cmp r0, #0
    // beq _021F7CE0
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // sub r0, #0x11
    // pop {r3, r4, r5, pc}
    // _021F7CE8: .word ov18_021FB934
    // _021F7CEC: .word ov18_021FB904
    // _021F7CF0: .word gSystem
    // _021F7CF4: .word 0x000018C9
    // _021F7CF8: .word 0x000018C8
    // _021F7CFC: .word 0x000018A2
    // TODO: decompile
}




void ov18_021F7D00(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl ov18_021F7B94
    // mov r3, #0
    // mvn r3, r3
    // cmp r0, r3
    // bne _021F7D28
    // mov r0, #0
    // ldr r1, _021F7D2C ; =gSystem
    // str r0, [r4]
    // ldr r2, [r1, #0x4c]
    // mov r1, #0x20
    // tst r1, r2
    // bne _021F7D28
    // mov r0, #0x10
    // tst r0, r2
    // beq _021F7D26
    // mov r3, #2
    // add r0, r3, #0
    // pop {r4, pc}
    // nop
    // _021F7D2C: .word gSystem
    // TODO: decompile
}




void ov18_021F7D30(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // bl ov18_021F7B94
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F7DBA
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _021F7D68
    // ldr r0, _021F7DBC ; =ov18_021FB804
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F7D5C
    // add r0, r1, #0
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // str r1, [r5]
    // lsl r1, r0, #2
    // ldr r0, _021F7DC0 ; =ov18_021FB760
    // ldr r0, [r0, r1]
    // pop {r3, r4, r5, pc}
    // ldr r2, _021F7DC4 ; =gSystem
    // mov r0, #0
    // str r0, [r5]
    // ldr r0, [r2, #0x4c]
    // mov r1, #0x40
    // tst r1, r0
    // beq _021F7D7A
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // mov r1, #0x80
    // tst r1, r0
    // beq _021F7D84
    // mov r0, #7
    // pop {r3, r4, r5, pc}
    // mov r1, #0x20
    // tst r1, r0
    // beq _021F7DA2
    // ldr r1, _021F7DC8 ; =0x000018A2
    // ldr r0, [r4]
    // ldrh r1, [r4, r1]
    // ldr r0, [r0]
    // bl Pokedex_CheckMonCaughtFlag
    // cmp r0, #0
    // beq _021F7D9E
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // mov r1, #0x10
    // tst r0, r1
    // beq _021F7DAC
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // ldr r1, [r2, #0x48]
    // mov r0, #1
    // tst r1, r0
    // beq _021F7DB8
    // mov r0, #0xb
    // pop {r3, r4, r5, pc}
    // sub r0, r0, #2
    // pop {r3, r4, r5, pc}
    // _021F7DBC: .word ov18_021FB804
    // _021F7DC0: .word ov18_021FB760
    // _021F7DC4: .word gSystem
    // _021F7DC8: .word 0x000018A2
    // TODO: decompile
}




void ov18_021F7DCC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _021F7DF8
    // ldr r0, _021F7E60 ; =ov18_021FB7E0
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F7DEC
    // add r0, r1, #0
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // str r1, [r4]
    // lsl r1, r0, #2
    // ldr r0, _021F7E64 ; =ov18_021FB7C0
    // ldr r0, [r0, r1]
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // ldr r2, _021F7E68 ; =gSystem
    // str r0, [r4]
    // ldr r3, [r2, #0x4c]
    // mov r1, #0x40
    // tst r1, r3
    // beq _021F7E14
    // ldr r1, _021F7E6C ; =0x000018C7
    // ldrb r1, [r5, r1]
    // lsl r1, r1, #0x1b
    // lsr r1, r1, #0x1b
    // beq _021F7E5C
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // mov r0, #0x80
    // tst r0, r3
    // beq _021F7E2C
    // ldr r0, _021F7E6C ; =0x000018C7
    // ldrb r0, [r5, r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1b
    // bne _021F7E28
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // ldr r2, [r2, #0x48]
    // mov r0, #0x20
    // tst r0, r2
    // beq _021F7E38
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // mov r0, #0x10
    // add r1, r2, #0
    // tst r1, r0
    // beq _021F7E44
    // mov r0, #7
    // pop {r3, r4, r5, pc}
    // lsl r0, r0, #6
    // tst r0, r2
    // beq _021F7E4E
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // mov r0, #3
    // add r1, r2, #0
    // tst r1, r0
    // beq _021F7E5A
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // sub r0, r0, #4
    // pop {r3, r4, r5, pc}
    // nop
    // _021F7E60: .word ov18_021FB7E0
    // _021F7E64: .word ov18_021FB7C0
    // _021F7E68: .word gSystem
    // _021F7E6C: .word 0x000018C7
    // TODO: decompile
}




void ov18_021F7E70(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl ov18_021F7B94
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F7EC8
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _021F7EA2
    // ldr r0, _021F7ECC ; =ov18_021FB630
    // bl TouchscreenHitbox_FindHitboxAtTouchNew
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _021F7E9A
    // add r0, r1, #0
    // pop {r4, pc}
    // mov r0, #1
    // str r0, [r4]
    // mov r0, #4
    // pop {r4, pc}
    // mov r0, #0
    // ldr r2, _021F7ED0 ; =gSystem
    // str r0, [r4]
    // ldr r3, [r2, #0x4c]
    // mov r1, #0x20
    // tst r1, r3
    // beq _021F7EB4
    // mov r0, #2
    // pop {r4, pc}
    // mov r1, #0x10
    // tst r1, r3
    // bne _021F7EC8
    // ldr r1, [r2, #0x48]
    // mov r0, #1
    // tst r1, r0
    // beq _021F7EC6
    // mov r0, #3
    // pop {r4, pc}
    // sub r0, r0, #2
    // pop {r4, pc}
    // nop
    // _021F7ECC: .word ov18_021FB630
    // _021F7ED0: .word gSystem
    // TODO: decompile
}




void ov18_021F7ED4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // str r2, [sp, #0x10]
    // add r5, r0, #0
    // ldr r2, _021F815C ; =0x00000878
    // add r7, r1, #0
    // add r1, r5, r2
    // mov r0, #0
    // sub r2, #0xc0
    // str r3, [sp, #0x14]
    // bl MIi_CpuClear32
    // ldr r1, _021F8160 ; =0x000003DA
    // mov r0, #0x25
    // bl Heap_AllocAtEnd
    // add r6, r0, #0
    // bne _021F7EFC
    // bl GF_AssertFail
    // ldr r2, _021F8160 ; =0x000003DA
    // add r0, r6, #0
    // mov r1, #0
    // bl memset
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // ldr r1, _021F8160 ; =0x000003DA
    // mov r0, #0x25
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // bne _021F7F1A
    // bl GF_AssertFail
    // ldr r2, _021F8160 ; =0x000003DA
    // add r0, r4, #0
    // mov r1, #0
    // bl memset
    // mov r0, #0
    // str r0, [sp, #0x18]
    // cmp r7, #0
    // add r1, sp, #0x20
    // bne _021F7F36
    // mov r0, #1
    // bl ov18_021F8168
    // b _021F7F3A
    // bl ov18_021F8168
    // add r7, r0, #0
    // ldr r0, [sp, #0x20]
    // add r1, sp, #0x1c
    // str r0, [sp]
    // ldr r2, [r5]
    // add r0, r6, #0
    // ldr r2, [r2]
    // add r3, r7, #0
    // bl ov18_021F8198
    // ldr r0, [sp, #0x1c]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5]
    // add r2, sp, #0x18
    // ldr r0, [r0]
    // add r3, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // bl ov18_021F822C
    // ldr r2, [sp, #0x18]
    // add r0, r6, #0
    // add r1, r4, #0
    // lsl r2, r2, #1
    // bl memcpy
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // str r2, [sp, #0x1c]
    // mov r1, #0
    // lsl r2, r2, #1
    // bl memset
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5]
    // add r2, sp, #0x18
    // ldr r0, [r0]
    // add r3, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // bl ov18_021F82CC
    // ldr r2, [sp, #0x18]
    // cmp r2, #0
    // beq _021F8090
    // add r0, r6, #0
    // add r1, r4, #0
    // lsl r2, r2, #1
    // bl memcpy
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // str r2, [sp, #0x1c]
    // mov r1, #0
    // lsl r2, r2, #1
    // bl memset
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5]
    // add r2, sp, #0x18
    // ldr r0, [r0]
    // add r3, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // bl ov18_021F831C
    // ldr r2, [sp, #0x18]
    // cmp r2, #0
    // beq _021F8090
    // add r0, r6, #0
    // add r1, r4, #0
    // lsl r2, r2, #1
    // bl memcpy
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // str r2, [sp, #0x1c]
    // mov r1, #0
    // lsl r2, r2, #1
    // bl memset
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5]
    // add r2, sp, #0x18
    // ldr r0, [r0]
    // add r3, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x3c]
    // bl ov18_021F831C
    // ldr r2, [sp, #0x18]
    // cmp r2, #0
    // beq _021F8090
    // add r0, r6, #0
    // add r1, r4, #0
    // lsl r2, r2, #1
    // bl memcpy
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // str r2, [sp, #0x1c]
    // mov r1, #0
    // lsl r2, r2, #1
    // bl memset
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5]
    // add r2, sp, #0x18
    // ldr r0, [r0]
    // add r3, r6, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x54]
    // bl ov18_021F8468
    // ldr r2, [sp, #0x18]
    // cmp r2, #0
    // beq _021F8142
    // add r0, r6, #0
    // add r1, r4, #0
    // lsl r2, r2, #1
    // bl memcpy
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // str r2, [sp, #0x1c]
    // mov r1, #0
    // lsl r2, r2, #1
    // bl memset
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, _021F8164 ; =0x00001860
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _021F8092
    // ldr r1, [sp, #0x50]
    // mov r0, #4
    // tst r0, r1
    // beq _021F8092
    // str r6, [sp]
    // ldr r0, [sp, #0x1c]
    // mov r1, #6
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // add r2, r4, #0
    // ldr r0, [r0]
    // add r3, sp, #0x18
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl ov18_021F8584
    // ldr r2, [sp, #0x18]
    // cmp r2, #0
    // bne _021F80B0
    // b _021F8142
    // str r6, [sp]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x50]
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // add r2, r4, #0
    // ldr r0, [r0]
    // add r3, sp, #0x18
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl ov18_021F8584
    // ldr r2, [sp, #0x18]
    // cmp r2, #0
    // beq _021F8142
    // add r0, r6, #0
    // add r1, r4, #0
    // lsl r2, r2, #1
    // bl memcpy
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // str r2, [sp, #0x1c]
    // mov r1, #0
    // lsl r2, r2, #1
    // bl memset
    // mov r0, #0
    // str r0, [sp, #0x18]
    // add r0, sp, #0x18
    // str r0, [sp]
    // str r6, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x40]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, [sp, #0x44]
    // ldr r0, [r0]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x10
    // add r3, r4, #0
    // bl ov18_021F8640
    // ldr r2, [sp, #0x18]
    // add r0, r6, #0
    // add r1, r4, #0
    // lsl r2, r2, #1
    // bl memcpy
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // str r2, [sp, #0x1c]
    // mov r1, #0
    // lsl r2, r2, #1
    // bl memset
    // mov r0, #0
    // str r0, [sp, #0x18]
    // add r0, sp, #0x18
    // str r0, [sp]
    // str r6, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x48]
    // str r0, [sp, #8]
    // ldr r0, [r5]
    // ldr r2, [sp, #0x4c]
    // ldr r0, [r0]
    // lsl r1, r1, #0x10
    // lsl r2, r2, #0x10
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // lsr r1, r1, #0x10
    // lsr r2, r2, #0x10
    // add r3, r4, #0
    // bl ov18_021F86D0
    // ldr r1, [r5]
    // ldr r0, _021F815C ; =0x00000878
    // ldr r1, [r1]
    // ldr r3, [sp, #0x18]
    // add r0, r5, r0
    // add r2, r4, #0
    // bl ov18_021F81D8
    // add r0, r7, #0
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl Heap_Free
    // mov r0, #1
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F815C: .word 0x00000878
    // _021F8160: .word 0x000003DA
    // _021F8164: .word 0x00001860
    // TODO: decompile
}




void ov18_021F8168(void) {
    // ; u32 size;
    // ; void * ret;
    // ; GF_ASSERT(a < 82);
    GF_AssertFail();
    // ; ret = GfGfxLoader_LoadFromNarc_GetSizeOut(GetPokedexDataNarcID(), a0 + 11, FALSE, HEAP_ID_POKEDEX_APP, FALSE, &size);
    GetPokedexDataNarcID();
    // str r2, [sp]
    // add r1, sp, #8
    // add r5, #0xb
    // str r1, [sp, #4]
    GfGfxLoader_LoadFromNarc_GetSizeOut(r5, 0, 0x25);
    // ; *a1 = size / 2;
    // ldr r1, [sp, #8]
    // str r1, [r4]
    // ; return ret;
}




void ov18_021F8198(void) {
    // ldr r7, [sp, #0x20]
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r6, [r5]
    // ldrh r1, [r4]
    // ldr r0, [sp, #4]
    Pokedex_CheckMonSeenFlag();
    // ldrh r0, [r4]
    // ldr r1, [sp]
    // strh r0, [r1, r2]
    // str r0, [r5]
}




void ov18_021F81D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r1, [sp]
    // add r5, r0, #0
    // ldr r1, _021F8228 ; =0x000007B4
    // add r0, r3, #0
    // strh r0, [r5, r1]
    // mov r7, #0
    // add r0, r1, #2
    // add r4, r2, #0
    // strh r7, [r5, r0]
    // str r3, [sp, #4]
    // add r0, r3, #0
    // beq _021F8224
    // add r0, r1, #2
    // add r6, r5, r0
    // ldrh r0, [r4]
    // strh r0, [r5]
    // ldrh r1, [r4]
    // ldr r0, [sp]
    // bl Pokedex_CheckMonCaughtFlag
    // cmp r0, #0
    // beq _021F8214
    // mov r0, #2
    // strh r0, [r5, #2]
    // ldrh r0, [r6]
    // add r0, r0, #1
    // strh r0, [r6]
    // b _021F8218
    // mov r0, #1
    // strh r0, [r5, #2]
    // ldr r0, [sp, #4]
    // add r7, r7, #1
    // add r4, r4, #2
    // add r5, r5, #4
    // cmp r7, r0
    // blo _021F81F8
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F8228: .word 0x000007B4
    // TODO: decompile
}




void ov18_021F822C(void) {
    // str r3, [sp, #0x10]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F8248: ; jump table
    // ldr r2, [sp, #0x30]
    memcpy(r1, r3, (r2 << 1));
    // ldr r0, [sp, #0x30]
    // str r0, [r5]
    // add r1, sp, #0x14
    ov18_021F8168(2);
    // add r1, sp, #0x14
    ov18_021F8168(3);
    // add r1, sp, #0x14
    ov18_021F8168(4);
    // add r1, sp, #0x14
    ov18_021F8168(5);
    // add r1, sp, #0x14
    ov18_021F8168(6);
    GF_AssertFail();
    // str r6, [sp]
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r4, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x30]
    ov18_021F8764(r7, r5);
    Heap_Free(r6);
}




void ov18_021F82CC(void) {
    // ldr r2, [sp, #0x28]
    memcpy(r1, r3, (r2 << 1));
    // ldr r0, [sp, #0x28]
    // str r0, [r5]
    // add r1, sp, #0x10
    ov18_021F8168((r0 + 7));
    // ldr r0, [sp, #0x28]
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    ov18_021F8764(r6, r5, r0);
    Heap_Free(r7);
}




void ov18_021F831C(void) {
    ov18_021F8970();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F833C: ; jump table
    // ldr r5, [sp, #0x28]
    memcpy(r7, r6, (r5 << 1));
    // str r5, [r4]
    // add r1, sp, #0x10
    ov18_021F8168(0x33);
    // add r1, sp, #0x10
    ov18_021F8168(0x34);
    // add r1, sp, #0x10
    ov18_021F8168(0x35);
    // add r1, sp, #0x10
    ov18_021F8168(0x36);
    // add r1, sp, #0x10
    ov18_021F8168(0x37);
    // add r1, sp, #0x10
    ov18_021F8168(0x38);
    // add r1, sp, #0x10
    ov18_021F8168(0x39);
    // add r1, sp, #0x10
    ov18_021F8168(0x3a);
    // add r1, sp, #0x10
    ov18_021F8168(0x3b);
    // add r1, sp, #0x10
    ov18_021F8168(0x3c);
    // add r1, sp, #0x10
    ov18_021F8168(0x3d);
    // add r1, sp, #0x10
    ov18_021F8168(0x3e);
    // add r1, sp, #0x10
    ov18_021F8168(0x3f);
    // add r1, sp, #0x10
    ov18_021F8168(0x40);
    // add r1, sp, #0x10
    ov18_021F8168(0x41);
    // add r1, sp, #0x10
    ov18_021F8168(0x42);
    // add r1, sp, #0x10
    ov18_021F8168(0x43);
    GF_AssertFail();
    // ldr r0, [sp, #0x28]
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    ov18_021F8764(r7, r4, r5);
    Heap_Free(r5);
}




void ov18_021F8468(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F8482: ; jump table
    // ldr r2, [sp, #0x28]
    memcpy(r1, r3, (r2 << 1));
    // ldr r0, [sp, #0x28]
    // str r0, [r4]
    // add r1, sp, #0x10
    ov18_021F8168(0x44);
    // add r1, sp, #0x10
    ov18_021F8168(0x45);
    // add r1, sp, #0x10
    ov18_021F8168(0x46);
    // add r1, sp, #0x10
    ov18_021F8168(0x47);
    // add r1, sp, #0x10
    ov18_021F8168(0x48);
    // add r1, sp, #0x10
    ov18_021F8168(0x49);
    // add r1, sp, #0x10
    ov18_021F8168(0x4a);
    // add r1, sp, #0x10
    ov18_021F8168(0x4b);
    // add r1, sp, #0x10
    ov18_021F8168(0x4c);
    // add r1, sp, #0x10
    ov18_021F8168(0x4d);
    // add r1, sp, #0x10
    ov18_021F8168(0x4e);
    // add r1, sp, #0x10
    ov18_021F8168(0x4f);
    // add r1, sp, #0x10
    ov18_021F8168(0x50);
    // add r1, sp, #0x10
    ov18_021F8168(0x51);
    GF_AssertFail();
    // ldr r0, [sp, #0x28]
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x10]
    ov18_021F8764(r6, r4, r7);
    Heap_Free(r7);
}




void ov18_021F8584(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // ldr r0, [sp, #0x30]
    // add r7, r1, #0
    // str r0, [sp, #0x30]
    // mov r0, #8
    // add r4, r3, #0
    // str r2, [sp, #4]
    // ldr r6, [sp, #0x2c]
    // tst r0, r7
    // beq _021F85AC
    // ldr r1, [sp, #0x28]
    // add r0, r2, #0
    // lsl r2, r6, #1
    // bl memcpy
    // add sp, #0x10
    // str r6, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r7, #6
    // bne _021F85FA
    // mov r0, #0
    // str r0, [sp, #0xc]
    // cmp r6, #0
    // bls _021F8638
    // ldr r5, [sp, #0x28]
    // ldr r2, [sp]
    // ldr r0, _021F863C ; =0x00001854
    // ldrh r1, [r5]
    // ldr r0, [r2, r0]
    // add r2, r7, #0
    // ldrb r0, [r0, r1]
    // tst r2, r0
    // beq _021F85EA
    // mov r2, #1
    // tst r0, r2
    // bne _021F85EA
    // ldr r0, [sp, #0x30]
    // bl Pokedex_CheckMonSeenFlag
    // cmp r0, #0
    // beq _021F85EA
    // ldr r1, [r4]
    // ldrh r0, [r5]
    // lsl r2, r1, #1
    // ldr r1, [sp, #4]
    // strh r0, [r1, r2]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, [sp, #0xc]
    // add r5, r5, #2
    // add r0, r0, #1
    // str r0, [sp, #0xc]
    // cmp r0, r6
    // blo _021F85BA
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #8]
    // cmp r6, #0
    // bls _021F8638
    // ldr r5, [sp, #0x28]
    // ldr r2, [sp]
    // ldr r0, _021F863C ; =0x00001854
    // ldrh r1, [r5]
    // ldr r0, [r2, r0]
    // ldrb r0, [r0, r1]
    // tst r0, r7
    // beq _021F862C
    // ldr r0, [sp, #0x30]
    // bl Pokedex_CheckMonSeenFlag
    // cmp r0, #0
    // beq _021F862C
    // ldr r1, [r4]
    // ldrh r0, [r5]
    // lsl r2, r1, #1
    // ldr r1, [sp, #4]
    // strh r0, [r1, r2]
    // ldr r0, [r4]
    // add r0, r0, #1
    // str r0, [r4]
    // ldr r0, [sp, #8]
    // add r5, r5, #2
    // add r0, r0, #1
    // str r0, [sp, #8]
    // cmp r0, r6
    // blo _021F8604
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F863C: .word 0x00001854
    // TODO: decompile
}




void ov18_021F8640(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // ldr r0, [sp, #0x28]
    // str r3, [sp]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r5, [sp, #0x20]
    // str r0, [sp, #0x2c]
    // cmp r1, #0
    // bne _021F866E
    // cmp r2, #0x98
    // bne _021F866E
    // ldr r2, [sp, #0x28]
    // ldr r1, [sp, #0x24]
    // add r0, r3, #0
    // lsl r2, r2, #1
    // bl memcpy
    // ldr r0, [sp, #0x28]
    // add sp, #0xc
    // str r0, [r5]
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x28]
    // mov r7, #0
    // cmp r0, #0
    // bls _021F86C4
    // lsl r0, r1, #2
    // str r0, [sp, #8]
    // lsl r0, r2, #2
    // ldr r4, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r0, _021F86C8 ; =0x00001848
    // ldrh r2, [r4]
    // ldr r1, [r6, r0]
    // ldr r3, [sp, #8]
    // lsl r0, r2, #2
    // ldr r1, [r1, r0]
    // ldr r0, _021F86CC ; =0x00001850
    // ldr r0, [r6, r0]
    // ldrh r3, [r3, r0]
    // cmp r1, r3
    // blt _021F86BA
    // ldr r3, [sp, #4]
    // ldrh r0, [r3, r0]
    // cmp r1, r0
    // bgt _021F86BA
    // ldr r0, [sp, #0x2c]
    // add r1, r2, #0
    // bl Pokedex_CheckMonCaughtFlag
    // cmp r0, #0
    // beq _021F86BA
    // ldr r1, [r5]
    // ldrh r0, [r4]
    // lsl r2, r1, #1
    // ldr r1, [sp]
    // strh r0, [r1, r2]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, [sp, #0x28]
    // add r7, r7, #1
    // add r4, r4, #2
    // cmp r7, r0
    // blo _021F8680
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021F86C8: .word 0x00001848
    // _021F86CC: .word 0x00001850
    // TODO: decompile
}




void ov18_021F86D0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // ldr r0, [sp, #0x28]
    // str r3, [sp]
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x2c]
    // ldr r5, [sp, #0x20]
    // str r0, [sp, #0x2c]
    // cmp r1, #0
    // bne _021F86FE
    // cmp r2, #0x98
    // bne _021F86FE
    // ldr r2, [sp, #0x28]
    // ldr r1, [sp, #0x24]
    // add r0, r3, #0
    // lsl r2, r2, #1
    // bl memcpy
    // ldr r0, [sp, #0x28]
    // add sp, #0xc
    // str r0, [r5]
    // pop {r4, r5, r6, r7, pc}
    // ldr r0, [sp, #0x28]
    // mov r7, #0
    // cmp r0, #0
    // bls _021F8758
    // lsl r0, r1, #2
    // str r0, [sp, #8]
    // lsl r0, r2, #2
    // ldr r4, [sp, #0x24]
    // str r0, [sp, #4]
    // ldr r0, _021F875C ; =0x0000184C
    // ldrh r2, [r4]
    // ldr r1, [r6, r0]
    // ldr r3, [sp, #8]
    // lsl r0, r2, #2
    // ldr r1, [r1, r0]
    // ldr r0, _021F8760 ; =0x00001850
    // ldr r0, [r6, r0]
    // add r3, r3, r0
    // ldrh r3, [r3, #2]
    // cmp r1, r3
    // blt _021F874E
    // ldr r3, [sp, #4]
    // add r0, r3, r0
    // ldrh r0, [r0, #2]
    // cmp r1, r0
    // bgt _021F874E
    // ldr r0, [sp, #0x2c]
    // add r1, r2, #0
    // bl Pokedex_CheckMonCaughtFlag
    // cmp r0, #0
    // beq _021F874E
    // ldr r1, [r5]
    // ldrh r0, [r4]
    // lsl r2, r1, #1
    // ldr r1, [sp]
    // strh r0, [r1, r2]
    // ldr r0, [r5]
    // add r0, r0, #1
    // str r0, [r5]
    // ldr r0, [sp, #0x28]
    // add r7, r7, #1
    // add r4, r4, #2
    // cmp r7, r0
    // blo _021F8710
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _021F875C: .word 0x0000184C
    // _021F8760: .word 0x00001850
    // TODO: decompile
}




void ov18_021F8764(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r1, [sp, #4]
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0x34]
    // ldr r0, [sp, #4]
    // str r2, [sp, #8]
    // str r1, [r0]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
    // ldrh r2, [r1]
    // ldr r6, [sp, #8]
    // ldrh r3, [r6]
    // ldr r3, [sp, #4]
    // ldr r3, [sp]
    // strh r2, [r3, r4]
    // ldr r2, [sp, #4]
    // ldr r2, [sp, #4]
    // str r3, [r2]
    // ldr r2, [sp, #0xc]
    // ldr r2, [sp, #0x2c]
    // str r3, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // ldr r7, [sp, #0x28]
    // ldr r4, [sp, #8]
    // ldrh r1, [r7]
    // ldrh r0, [r4]
    // ldr r0, [sp, #0x34]
    Pokedex_CheckMonCaughtFlag(0, (0 + 2), *((u32*)r2), (*((u32*)r2) + 1));
    // ldr r0, [sp, #4]
    // ldrh r2, [r7]
    // ldr r0, [sp]
    // strh r2, [r0, r1]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #4]
    // str r1, [r0]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // str r1, [sp, #0xc]
}




void ov18_021F8824(void) {
    // ldr r1, _021F8834 ; =0x0000185A
    // ldrb r2, [r0, r1]
    // sub r1, r1, #1
    // ldrb r1, [r0, r1]
    // mov r0, #0xf
    // mul r0, r1
    // add r0, r2, r0
    // bx lr
    // _021F8834: .word 0x0000185A
    // TODO: decompile
}




void ov18_021F8838(void) {
}




void ov18_021F8850(void) {
    // push {r4, r5}
    // ldr r2, _021F8880 ; =0x000007B4
    // mov r4, #0
    // ldrh r5, [r0, r2]
    // add r3, r4, #0
    // cmp r5, #0
    // bls _021F8878
    // cmp r4, #0
    // bne _021F8864
    // ldrh r4, [r0]
    // ldrh r2, [r0]
    // cmp r1, r2
    // bne _021F8870
    // add r0, r1, #0
    // pop {r4, r5}
    // bx lr
    // add r3, r3, #1
    // add r0, r0, #4
    // cmp r3, r5
    // blo _021F885E
    // add r0, r4, #0
    // pop {r4, r5}
    // bx lr
    // nop
    // _021F8880: .word 0x000007B4
    // TODO: decompile
}




void ov18_021F8884(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r2, _021F8900 ; =0x00001030
    // add r5, r0, #0
    // add r4, r1, #0
    // add r1, r5, r2
    // mov r0, #0
    // lsr r2, r2, #1
    // bl MIi_CpuClear32
    // cmp r4, #1
    // ldr r0, _021F8904 ; =0x0000102C
    // bne _021F88D6
    // ldrh r0, [r5, r0]
    // mov r6, #0
    // cmp r0, #0
    // bls _021F88FE
    // ldr r7, _021F8904 ; =0x0000102C
    // add r4, r5, #0
    // ldr r0, _021F8908 ; =0x00001858
    // ldr r1, _021F890C ; =0x00000878
    // ldrb r0, [r5, r0]
    // ldrh r1, [r4, r1]
    // bl Pokedex_ConvertToCurrentDexNo
    // ldr r1, _021F890C ; =0x00000878
    // sub r0, r0, #1
    // ldrh r2, [r4, r1]
    // lsl r0, r0, #2
    // ldr r1, _021F8900 ; =0x00001030
    // add r0, r5, r0
    // strh r2, [r0, r1]
    // ldr r1, _021F8910 ; =0x0000087A
    // add r6, r6, #1
    // ldrh r2, [r4, r1]
    // ldr r1, _021F8914 ; =0x00001032
    // add r4, r4, #4
    // strh r2, [r0, r1]
    // ldrh r0, [r5, r7]
    // cmp r6, r0
    // blo _021F88A8
    // pop {r3, r4, r5, r6, r7, pc}
    // ldrh r0, [r5, r0]
    // mov r1, #0
    // cmp r0, #0
    // bls _021F88FE
    // ldr r3, _021F8918 ; =0x00001034
    // ldr r4, _021F8910 ; =0x0000087A
    // add r7, r3, #0
    // add r0, r5, #0
    // add r6, r3, #2
    // sub r7, #8
    // ldr r2, _021F890C ; =0x00000878
    // add r1, r1, #1
    // ldrh r2, [r0, r2]
    // strh r2, [r0, r3]
    // ldrh r2, [r0, r4]
    // strh r2, [r0, r6]
    // ldrh r2, [r5, r7]
    // add r0, r0, #4
    // cmp r1, r2
    // blo _021F88EA
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F8900: .word 0x00001030
    // _021F8904: .word 0x0000102C
    // _021F8908: .word 0x00001858
    // _021F890C: .word 0x00000878
    // _021F8910: .word 0x0000087A
    // _021F8914: .word 0x00001032
    // _021F8918: .word 0x00001034
    // TODO: decompile
}




void ov18_021F891C(void) {
    // push {r3, lr}
    // add r2, r0, #0
    // cmp r1, #0
    // bne _021F892A
    // ldr r0, _021F8944 ; =0x0000102C
    // ldrh r0, [r2, r0]
    // pop {r3, pc}
    // ldr r1, _021F8944 ; =0x0000102C
    // ldr r0, _021F8948 ; =0x00001858
    // ldrh r1, [r2, r1]
    // ldrb r0, [r2, r0]
    // sub r1, r1, #1
    // lsl r1, r1, #2
    // add r2, r2, r1
    // ldr r1, _021F894C ; =0x00000878
    // ldrh r1, [r2, r1]
    // bl Pokedex_ConvertToCurrentDexNo
    // pop {r3, pc}
    // nop
    // _021F8944: .word 0x0000102C
    // _021F8948: .word 0x00001858
    // _021F894C: .word 0x00000878
    // TODO: decompile
}




void ov18_021F8950(void) {
    ov18_021F891C();
    _u32_div_f(0xf);
    ov18_021F891C();
    _u32_div_f((r0 - 1), 0xf);
}




void ov18_021F8970(void) {
    // bx lr
    // TODO: decompile
}




void ov18_021F8974(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r1, #0x96
    // ldr r0, [r5, #0x14]
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0x96
    // mov r1, #0
    // lsl r2, r2, #2
    // add r4, r0, #0
    // bl memset
    // add r2, r4, #0
    // mov r1, #0x18
    // ldrb r0, [r5]
    // add r5, r5, #1
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _021F8992
    // ldr r1, [r4, #0x14]
    // mov r0, #0x44
    // bl NARC_New
    // str r0, [r4, #0x1c]
    // mov r0, #9
    // mov r2, #0
    // lsl r0, r0, #6
    // strh r2, [r4, r0]
    // add r0, #0x14
    // str r2, [r4, r0]
    // ldr r0, _021F89C4 ; =ov18_021F89F8
    // add r1, r4, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x18]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _021F89C4: .word ov18_021F89F8
    // TODO: decompile
}




void ov18_021F89C8(void) {
    // ldr r0, [r0, r1]
}




void ov18_021F89D0(void) {
}




void ov18_021F89F8(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r1, #0
    // mov r1, #9
    // lsl r1, r1, #6
    // ldrh r0, [r4, r1]
    // cmp r0, #4
    // bhi _021F8AA0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // ov18_021F8A14: ; jump table
    // ldr r0, _021F8AB4 ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // add r0, r4, #0
    // bl ov18_021F8AB8
    // add r0, r4, #0
    // bl ov18_021F8B10
    // add r0, r4, #0
    // bl ov18_021F8CCC
    // add r0, r4, #0
    // bl ov18_021F8FA0
    // add r0, r4, #0
    // bl ov18_021F95CC
    // add r0, r4, #0
    // bl ov18_021F8C0C
    // mov r0, #9
    // mov r1, #1
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // b _021F8AA0
    // add r0, r4, #0
    // bl ov18_021F8C48
    // cmp r0, #1
    // bne _021F8AA0
    // mov r0, #9
    // mov r1, #2
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // b _021F8AA0
    // add r2, r1, #0
    // sub r2, #0x41
    // str r2, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r0, #0xe
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // add r3, r2, #0
    // bl PlayCryEx
    // mov r0, #9
    // mov r1, #3
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // b _021F8AA0
    // bl IsCryFinished
    // cmp r0, #0
    // bne _021F8AA0
    // mov r0, #0x95
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r1, #4
    // sub r0, #0x14
    // strh r1, [r4, r0]
    // add r0, r4, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // bl SpriteList_RenderAndAnimateSprites
    // add r0, r4, #0
    // bl ov18_021F8C68
    // add sp, #8
    // pop {r4, pc}
    // _021F8AB4: .word 0x04000050
    // TODO: decompile
}




void ov18_021F8AB8(void) {
    AcquireMonLock(*((u32*)(r0 + 0xc)));
    GetMonData(*((u32*)(r5 + 0xc)), 5, 0);
    // str r0, [r5, r1]
    GetMonData(*((u32*)(r5 + 0xc)), 0x70, 0);
    // str r0, [r5, r1]
    GetMonData(*((u32*)(r5 + 0xc)), 0xb1, 0);
    // str r0, [r5, r1]
    GetMonData(*((u32*)(r5 + 0xc)), 0xb2, 0);
    // str r0, [r5, r1]
    ReleaseMonLock(*((u32*)(r5 + 0xc)), r4);
}




void ov18_021F8B10(void) {
    // push {r4, r5, lr}
    // sub sp, #0x64
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r5, _021F8BE0 ; =ov18_021FBD7C
    // add r3, sp, #0x48
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
    // ldr r0, [r4]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r3, [r4, #0x14]
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // bl BG_ClearCharDataRange
    // ldr r5, _021F8BE4 ; =ov18_021FBD60
    // add r3, sp, #0x2c
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
    // ldr r0, [r4]
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _021F8BE8 ; =ov18_021FBD98
    // add r3, sp, #0x10
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
    // ldr r0, [r4]
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x14]
    // mov r1, #0x13
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x1c]
    // ldr r2, [r4]
    // mov r3, #2
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x14]
    // mov r1, #0x14
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x1c]
    // ldr r2, [r4]
    // mov r3, #2
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r4, #4]
    // ldr r1, [r4, #0x1c]
    // ldr r3, [r4, #0x14]
    // mov r2, #0x12
    // bl PaletteData_LoadOpenNarc
    // add sp, #0x64
    // pop {r4, r5, pc}
    // nop
    // _021F8BE0: .word ov18_021FBD7C
    // _021F8BE4: .word ov18_021FBD60
    // _021F8BE8: .word ov18_021FBD98
    // TODO: decompile
}




void ov18_021F8BEC(void) {
}




void ov18_021F8C0C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [r4, #4]
    // ldr r2, _021F8C44 ; =0x0000FFFF
    // mov r1, #5
    // mov r3, #1
    // bl PaletteData_BeginPaletteFade
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, [r4, #0x20]
    // mov r1, #0x10
    // add r3, r2, #0
    // bl Pokepic_StartPaletteFade
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl PaletteData_SetAutoTransparent
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _021F8C44: .word 0x0000FFFF
    // TODO: decompile
}




void ov18_021F8C48(void) {
    PaletteData_GetSelectedBuffersBitmask(*((u32*)(r0 + 4)));
    Pokepic_ResumePaletteFade(*((u32*)(r4 + 0x20)));
}




void ov18_021F8C68(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, _021F8CC8 ; =0x00000242
    // ldrh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // ldrh r0, [r4, r0]
    // cmp r0, #0x10
    // bne _021F8C9E
    // mov r0, #0x20
    // str r0, [sp]
    // mov r1, #2
    // mov r2, #0
    // str r1, [sp, #4]
    // mov r0, #7
    // str r0, [sp, #8]
    // ldr r0, [r4]
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // ldr r0, [r4]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0xc
    // pop {r3, r4, pc}
    // cmp r0, #0x20
    // bne _021F8CC4
    // mov r0, #0x20
    // str r0, [sp]
    // mov r1, #2
    // mov r2, #0
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // ldr r0, [r4]
    // add r3, r2, #0
    // bl BgTilemapRectChangePalette
    // ldr r0, [r4]
    // mov r1, #2
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r0, _021F8CC8 ; =0x00000242
    // mov r1, #0
    // strh r1, [r4, r0]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _021F8CC8: .word 0x00000242
    // TODO: decompile
}




void ov18_021F8CCC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r4, r5, #0
    // ldr r6, _021F8F04 ; =ov18_021FBDB4
    // mov r7, #0
    // add r4, #0x24
    // ldr r0, [r5]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl AddWindow
    // add r0, r4, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r7, r7, #1
    // add r6, #8
    // add r4, #0x10
    // cmp r7, #9
    // blo _021F8CDA
    // ldr r2, _021F8F08 ; =0x00000322
    // ldr r3, [r5, #0x14]
    // mov r0, #0
    // mov r1, #0x1b
    // bl NewMsgDataFromNarc
    // add r4, r0, #0
    // ldr r0, [r5, #0x14]
    // bl MessageFormat_New
    // add r6, r0, #0
    // mov r0, #1
    // ldr r1, [r5, #0x14]
    // lsl r0, r0, #0xa
    // bl String_New
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _021F8F0C ; =0x00020100
    // add r1, r4, #0
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r0, #0x24
    // mov r2, #0x90
    // mov r3, #0x70
    // bl ov18_021F9648
    // mov r1, #0x91
    // lsl r1, r1, #2
    // ldr r0, [r5, #0x10]
    // ldr r1, [r5, r1]
    // bl Pokedex_ConvertToCurrentDexNo
    // add r2, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // add r0, r4, #0
    // mov r1, #9
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r1, [sp, #0x10]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _021F8F0C ; =0x00020100
    // ldr r1, [sp, #0x10]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r3, #0
    // add r0, #0x34
    // mov r2, #1
    // str r3, [sp, #8]
    // bl ov18_021F95FC
    // add r0, r7, #0
    // bl String_Delete
    // mov r0, #0x91
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r2, [r5, #0x14]
    // mov r1, #2
    // bl ov18_021E590C
    // add r7, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _021F8F0C ; =0x00020100
    // mov r2, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x44
    // add r1, r7, #0
    // add r3, r2, #0
    // str r2, [sp, #8]
    // bl ov18_021F95FC
    // add r0, r7, #0
    // bl String_Delete
    // mov r0, #0x91
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r2, [r5, #0x14]
    // mov r1, #2
    // bl ov18_021E595C
    // add r7, r0, #0
    // add r0, r5, #0
    // add r0, #0x54
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r2, r0, #4
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, _021F8F0C ; =0x00020100
    // add r1, r7, #0
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r0, #0x54
    // mov r3, #0
    // bl ov18_021F95FC
    // add r0, r7, #0
    // bl String_Delete
    // mov r0, #0x91
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r3, [r5, #0x14]
    // mov r1, #2
    // mov r2, #0
    // bl ov18_021E59A8
    // add r7, r0, #0
    // add r0, r5, #0
    // add r0, #0x64
    // bl GetWindowWidth
    // str r0, [sp, #0x14]
    // mov r0, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidthMultiline
    // ldr r1, [sp, #0x14]
    // mov r3, #0
    // lsl r1, r1, #3
    // sub r0, r1, r0
    // lsr r2, r0, #1
    // ldr r0, _021F8F0C ; =0x00020100
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x64
    // add r1, r7, #0
    // str r3, [sp, #8]
    // bl ov18_021F95FC
    // add r0, r7, #0
    // bl String_Delete
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F8F0C ; =0x00020100
    // add r1, r4, #0
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r0, #0x74
    // mov r2, #0xa
    // mov r3, #0x14
    // bl ov18_021F9648
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _021F8F0C ; =0x00020100
    // add r1, r4, #0
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r5, #0
    // add r0, #0x94
    // mov r2, #0xb
    // mov r3, #0x14
    // bl ov18_021F9648
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // add r0, r4, #0
    // bl DestroyMsgData
    // bl GetDexHeightMsgBank
    // add r2, r0, #0
    // ldr r3, [r5, #0x14]
    // mov r0, #0
    // mov r1, #0x1b
    // bl NewMsgDataFromNarc
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp]
    // mov r2, #0x91
    // ldr r0, _021F8F0C ; =0x00020100
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // lsl r2, r2, #2
    // add r0, r5, #0
    // ldr r2, [r5, r2]
    // add r0, #0x84
    // add r1, r4, #0
    // mov r3, #4
    // bl ov18_021F9648
    // add r0, r4, #0
    // bl DestroyMsgData
    // bl GetDexWeightMsgBank
    // add r2, r0, #0
    // ldr r3, [r5, #0x14]
    // mov r0, #0
    // mov r1, #0x1b
    // bl NewMsgDataFromNarc
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp]
    // mov r2, #0x91
    // ldr r0, _021F8F0C ; =0x00020100
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // lsl r2, r2, #2
    // add r0, r5, #0
    // ldr r2, [r5, r2]
    // add r0, #0xa4
    // add r1, r4, #0
    // mov r3, #4
    // bl ov18_021F9648
    // add r0, r4, #0
    // bl DestroyMsgData
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // mov r4, #0
    // add r5, #0x24
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #9
    // blo _021F8EF2
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F8F04: .word ov18_021FBDB4
    // _021F8F08: .word 0x00000322
    // _021F8F0C: .word 0x00020100
    // TODO: decompile
}




void ov18_021F8F10(void) {
}




void ov18_021F8F28(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // ldr r4, _021F8F50 ; =ov18_021FBD50
    // add r3, sp, #0
    // add r5, r0, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5, #0x14]
    // ldr r1, _021F8F54 ; =0x00100010
    // str r0, [sp, #0xc]
    // add r0, r2, #0
    // mov r2, #0x10
    // bl ObjCharTransfer_InitEx
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _021F8F50: .word ov18_021FBD50
    // _021F8F54: .word 0x00100010
    // TODO: decompile
}




void ov18_021F8F58(void) {
}




void ov18_021F8F60(void) {
    Create2DGfxResObjMan(8, 0, *((u32*)(r0 + 0x14)));
    // str r0, [r5, r7]
}




void ov18_021F8F84(void) {
}




void ov18_021F8FA0(void) {
    // add r1, #0xb8
    G2dRenderer_Init(0x20, r0, *((u32*)(r0 + 0x14)));
    // add r1, #0xb4
    // str r0, [r1]
    ClearMainOAM(*((u32*)(r4 + 0x14)), r4);
    ov18_021F8F28(r4);
    ov18_021F8F60(r4);
    ov18_021F8FF8(r4);
    ov18_021F9068(r4);
    ov18_021F9150(r4);
    ov18_021F94BC(r4);
    ov18_021F9370(r4);
    ov18_021F9518(r4);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov18_021F8FF8(void) {
    // push {r3, r4, lr}
    // sub sp, #0x24
    // add r4, r0, #0
    // mov r0, #0x1d
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x1e
    // str r0, [sp, #8]
    // mov r0, #0x1f
    // str r0, [sp, #0xc]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // ldr r0, _021F9050 ; =0x0000C618
    // mov r1, #0x7d
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // lsl r1, r1, #2
    // add r0, r4, r1
    // sub r1, #0x14
    // ldr r2, [r4, #0x14]
    // ldr r3, [r4, #0x1c]
    // add r1, r4, r1
    // bl ov18_021F922C
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl SpriteTransfer_GetPlttOffset
    // add r2, r0, #0
    // lsl r2, r2, #0x14
    // ldr r0, [r4, #4]
    // mov r1, #2
    // lsr r2, r2, #0x10
    // mov r3, #0x40
    // bl PaletteData_LoadPaletteSlotFromHardware
    // add sp, #0x24
    // pop {r3, r4, pc}
    // nop
    // _021F9050: .word 0x0000C618
    // TODO: decompile
}




void ov18_021F9054(void) {
    // mov r1, #0x7d
    // add r2, r0, #0
    // lsl r1, r1, #2
    // add r0, r2, r1
    // sub r1, #0x14
    // ldr r3, _021F9064 ; =ov18_021F92DC
    // add r1, r2, r1
    // bx r3
    // _021F9064: .word ov18_021F92DC
    // TODO: decompile
}




void ov18_021F9068(void) {
    // push {r3, r4, lr}
    // sub sp, #0x24
    // add r4, r0, #0
    // mov r0, #0x93
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov18_021F967C
    // str r0, [sp]
    // mov r0, #0x23
    // str r0, [sp, #4]
    // mov r0, #0x21
    // str r0, [sp, #8]
    // mov r0, #0x22
    // str r0, [sp, #0xc]
    // mov r0, #4
    // str r0, [sp, #0x10]
    // ldr r0, _021F9100 ; =0x0000C619
    // mov r1, #0x82
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // lsl r1, r1, #2
    // add r0, r4, r1
    // sub r1, #0x28
    // ldr r2, [r4, #0x14]
    // ldr r3, [r4, #0x1c]
    // add r1, r4, r1
    // bl ov18_021F922C
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov18_021F967C
    // str r0, [sp]
    // mov r0, #0
    // mvn r0, r0
    // str r0, [sp, #4]
    // mov r0, #0x21
    // str r0, [sp, #8]
    // mov r0, #0x22
    // str r0, [sp, #0xc]
    // mov r0, #4
    // str r0, [sp, #0x10]
    // ldr r0, _021F9104 ; =0x0000C61A
    // mov r1, #0x87
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // lsl r1, r1, #2
    // add r0, r4, r1
    // sub r1, #0x3c
    // ldr r2, [r4, #0x14]
    // ldr r3, [r4, #0x1c]
    // add r1, r4, r1
    // bl ov18_021F922C
    // mov r0, #0x83
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl SpriteTransfer_GetPlttOffset
    // add r2, r0, #0
    // lsl r2, r2, #0x14
    // ldr r0, [r4, #4]
    // mov r1, #2
    // lsr r2, r2, #0x10
    // mov r3, #0x80
    // bl PaletteData_LoadPaletteSlotFromHardware
    // add sp, #0x24
    // pop {r3, r4, pc}
    // _021F9100: .word 0x0000C619
    // _021F9104: .word 0x0000C61A
    // TODO: decompile
}




void ov18_021F9108(void) {
    // add r0, r4, r1
    // sub r1, #0x28
    // add r1, r4, r1
    ov18_021F92DC((0x82 << 2));
    // ldr r0, [r4, r0]
    sub_0200AEB0((0x87 << 2));
    // ldr r0, [r4, r1]
    // add r1, #0x3c
    // ldr r1, [r4, r1]
    DestroySingle2DGfxResObj((0x1e << 4));
    // ldr r0, [r4, r1]
    // add r1, #0x3c
    // ldr r1, [r4, r1]
    DestroySingle2DGfxResObj((0x7a << 2));
    // ldr r0, [r4, r1]
    // add r1, #0x3c
    // ldr r1, [r4, r1]
    DestroySingle2DGfxResObj((0x7b << 2));
}




void ov18_021F9150(void) {
    // push {r4, r5, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // bl ov18_021E5900
    // ldr r1, [r5, #0x14]
    // bl NARC_New
    // add r4, r0, #0
    // mov r0, #0x4d
    // str r0, [sp]
    // sub r0, #0x4e
    // str r0, [sp, #4]
    // mov r0, #0x4e
    // str r0, [sp, #8]
    // mov r0, #0x4f
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, _021F91D8 ; =0x0000C61B
    // mov r1, #0x23
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x20]
    // lsl r1, r1, #4
    // add r0, r5, r1
    // sub r1, #0x50
    // ldr r2, [r5, #0x14]
    // ldr r3, [r5, #0x1c]
    // add r1, r5, r1
    // bl ov18_021F922C
    // bl ov18_021E5908
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _021F91D8 ; =0x0000C61B
    // add r2, r4, #0
    // str r0, [sp, #4]
    // mov r0, #0x79
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [r5, #0x14]
    // bl ov18_021F92AC
    // mov r1, #0x8d
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #1
    // bl SpriteTransfer_GetPlttOffset
    // add r2, r0, #0
    // lsl r2, r2, #0x14
    // ldr r0, [r5, #4]
    // mov r1, #2
    // lsr r2, r2, #0x10
    // mov r3, #0x20
    // bl PaletteData_LoadPaletteSlotFromHardware
    // add r0, r4, #0
    // bl NARC_Delete
    // add sp, #0x24
    // pop {r4, r5, pc}
    // nop
    // _021F91D8: .word 0x0000C61B
    // TODO: decompile
}




void ov18_021F91DC(void) {
    // mov r1, #0x23
    // add r2, r0, #0
    // lsl r1, r1, #4
    // add r0, r2, r1
    // sub r1, #0x50
    // ldr r3, _021F91EC ; =ov18_021F92DC
    // add r1, r2, r1
    // bx r3
    // _021F91EC: .word ov18_021F92DC
    // TODO: decompile
}




void ov18_021F91F0(void) {
    ov18_021F959C();
    ov18_021F94A0(r4);
    ov18_021F9508(r4);
    ov18_021F91DC(r4);
    ov18_021F9108(r4);
    ov18_021F9054(r4);
    ov18_021F8F84(r4);
    ov18_021F8F58();
    // add r4, #0xb4
    SpriteList_Delete(*((u32*)r4));
}




void ov18_021F922C(void) {
    // ldr r0, [sp, #0x34]
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r6, [sp, #8]
    // ldr r2, [sp, #0x20]
    AddCharResObjFromOpenNarc(*((u32*)r1), r3, 1);
    // str r0, [r5]
    sub_0200ADA4();
    sub_0200A740(*((u32*)r5));
    // ldr r3, [sp, #0x24]
    // mvn r0, r0
    // ldr r0, [sp, #0x30]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #4]
    ov18_021F92AC(*((u32*)(r4 + 4)), r6, r7);
    *((u32*)(r5 + 4)) = r0;
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x28]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r4 + 8)), r7, 1);
    *((u32*)(r5 + 8)) = r0;
    // ldr r0, [sp, #0x40]
    // ldr r2, [sp, #0x2c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    AddCellOrAnimResObjFromOpenNarc(*((u32*)(r4 + 0xc)), r7, 1);
    *((u32*)(r5 + 0xc)) = r0;
}




void ov18_021F92AC(void) {
    // ldr r4, [sp, #0x1c]
    // str r4, [sp]
    // str r4, [sp, #4]
    // ldr r4, [sp, #0x18]
    // str r4, [sp, #8]
    // str r1, [sp, #0xc]
    AddPlttResObjFromOpenNarc(r2, r3, 0);
    sub_0200B00C();
    sub_0200A740(r4);
}




void ov18_021F92DC(void) {
}




void ov18_021F9310(void) {
    GF2DGfxResObj_GetResID(*((u32*)r0));
    // str r0, [sp, #0x2c]
    GF2DGfxResObj_GetResID(*((u32*)(r5 + 4)));
    // str r0, [sp, #0x30]
    GF2DGfxResObj_GetResID(*((u32*)(r5 + 8)));
    // str r0, [sp, #0x34]
    GF2DGfxResObj_GetResID(*((u32*)(r5 + 0xc)));
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r6, [sp, #0x10]
    // ldr r2, [sp, #0x30]
    // str r1, [sp, #0x14]
    // ldr r3, [sp, #0x34]
    // str r1, [sp, #0x18]
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, [sp, #0x2c]
    CreateSpriteResourcesHeader(r7, *((u32*)(r4 + 0xc)));
}




void ov18_021F9370(void) {
    // add r0, r5, r1
    // sub r1, #0x28
    // add r1, r5, r1
    // add r2, sp, #0x2c
    ov18_021F9310((0x82 << 2), 1);
    // add r0, #0xb4
    // str r0, [sp, #0x50]
    // add r0, sp, #0x2c
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // add r0, sp, #0x50
    Sprite_Create((0x12 << 0xe));
    // str r0, [r5, r1]
    // add r1, #0x48
    // ldr r0, [r5, r1]
    ov18_021F9688((0x81 << 2));
    // ldr r0, [r5, r0]
    Sprite_SetPalIndexRespectVramOffset((0x81 << 2), r0);
    // ldr r0, [r5, r0]
    GF2DGfxResObj_GetResID((0x87 << 2));
    // ldr r0, [r5, r0]
    GF2DGfxResObj_GetResID((0x83 << 2));
    // ldr r0, [r5, r0]
    GF2DGfxResObj_GetResID((0x89 << 2));
    // ldr r0, [r5, r0]
    GF2DGfxResObj_GetResID((0x8a << 2));
    // str r0, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [r5, r0]
    // str r2, [sp, #0x14]
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x18]
    // add r2, #8
    // ldr r2, [r5, r2]
    // add r0, #0xc
    // str r2, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r1, [sp, #0x28]
    // add r0, sp, #0x2c
    CreateSpriteResourcesHeader((0x1e << 4), r4, r6, r7);
    // add r0, #0xb4
    // str r0, [sp, #0x50]
    // add r0, sp, #0x2c
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x68]
    // str r0, [sp, #0x64]
    // str r0, [sp, #0x6c]
    // str r0, [sp, #0x58]
    // str r0, [sp, #0x5c]
    // add r0, sp, #0x50
    Sprite_Create((0x12 << 0xe));
    // str r0, [r5, r1]
    // add r0, #0x38
    // ldr r0, [r5, r0]
    // add r1, #0x34
    // ldr r1, [r5, r1]
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0x86 << 2), 0);
    ov18_021F9688();
    // ldr r0, [r5, r0]
    Sprite_SetPalIndexRespectVramOffset((0x86 << 2), r0);
}




void ov18_021F94A0(void) {
    // ldr r0, [r4, r0]
    Sprite_Delete((0x81 << 2));
    // ldr r0, [r4, r0]
    Sprite_Delete((0x86 << 2));
}




void ov18_021F94BC(void) {
    // add r0, r4, r1
    // sub r1, #0x14
    // add r1, r4, r1
    // add r2, sp, #0
    ov18_021F9310((0x7d << 2), 1);
    // add r0, #0xb4
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // str r0, [sp, #0x28]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, sp, #0x24
    Sprite_Create((1 << 0x11), 1);
    // str r0, [r4, r1]
}




void ov18_021F9508(void) {
    // mov r1, #0x1f
    // lsl r1, r1, #4
    // ldr r3, _021F9514 ; =Sprite_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021F9514: .word Sprite_Delete
    // TODO: decompile
}




void ov18_021F9518(void) {
    // add r0, r5, r1
    // sub r1, #0x50
    // add r1, r5, r1
    // add r2, sp, #0
    ov18_021F9310((0x23 << 4), 1);
    // add r0, #0xb4
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x38]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x2c]
    // str r0, [sp, #0x30]
    // add r0, sp, #0x24
    Sprite_Create((5 << 0x10));
    // str r0, [r5, r1]
    // add r1, #0x18
    // ldr r0, [r5, r1]
    ov18_021F9694(*((u32*)(r5 + 0x14)));
    // ldr r0, [r5, r0]
    Sprite_GetImageProxy((0x8b << 2));
    NNS_G2dGetImageLocation(1);
    DC_FlushRange(r4, 0x80);
    GX_LoadOBJ(r4, r5, 0x80);
    Heap_Free(r4);
}




void ov18_021F959C(void) {
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldr r3, _021F95A8 ; =Sprite_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021F95A8: .word Sprite_Delete
    // TODO: decompile
}




void ov18_021F95AC(void) {
}




void ov18_021F95CC(void) {
    // add r0, sp, #0x10
    GetPokemonSpriteCharAndPlttNarcIds(*((u32*)(r0 + 0xc)), 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x10
    PokepicManager_CreatePokepic(*((u32*)(r4 + 8)), 0x30, 0x48);
    *((u32*)(r4 + 0x20)) = r0;
}




void ov18_021F95F8(void) {
    // ldr r0, [r0, #0x20]
    // bx lr
    // TODO: decompile
}




void ov18_021F95FC(void) {
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x28]
    FontID_String_GetWidth(0);
    // sub r5, r5, r0
    // ldr r0, [sp, #0x28]
    FontID_String_GetWidth(0);
    // sub r5, r5, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, r7, r5);
}




void ov18_021F9648(void) {
    NewString_ReadMsgData(r1, r2);
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    ov18_021F95FC(r5, r0, r6);
    String_Delete(r4);
}




void ov18_021F967C(void) {
    // lsl r1, r0, #2
    // ldr r0, _021F9684 ; =ov18_021FBE10
    // ldr r0, [r0, r1]
    // bx lr
    // _021F9684: .word ov18_021FBE10
    // TODO: decompile
}




void ov18_021F9688(void) {
    // ldr r1, _021F9690 ; =ov18_021FBDFC
    // ldrb r0, [r1, r0]
    // bx lr
    // nop
    // _021F9690: .word ov18_021FBDFC
    // TODO: decompile
}




void ov18_021F9694(void) {
    ov18_021E5900();
    ov18_021E5904(r5);
    // str r4, [sp]
    // add r3, sp, #4
    GfGfxLoader_GetCharData(r6, r0, 1);
    // ldr r0, [sp, #4]
    Heap_AllocAtEnd(r4, 0x80);
    memset(0, 0x80);
    // add r1, #0x80
    memcpy(r4, r5, 0x40);
    // add r0, #0x40
    memcpy(r4, r5, 0x40);
    Heap_Free(r6);
}



