/* Decompiled from asm/overlay_03.s */
#include "global.h"

void ov03_02253E20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02253ECC ; =ov03_022598A0
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // bne _02253E42
    // ldr r0, _02253ECC ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl RemoveTextPrinter
    // cmp r4, #0
    // beq _02253E64
    // ldr r0, _02253ECC ; =ov03_022598A0
    // add r1, r5, #0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #0x10]
    // bl ReadMsgDataIntoString
    // ldr r0, _02253ECC ; =ov03_022598A0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x58]
    // ldr r1, [r2, #0x14]
    // ldr r2, [r2, #0x10]
    // bl StringExpandPlaceholders
    // b _02253E72
    // ldr r0, _02253ECC ; =ov03_022598A0
    // add r1, r5, #0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #0x14]
    // bl ReadMsgDataIntoString
    // ldr r0, _02253ECC ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x40
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _02253E90
    // ldr r0, _02253ECC ; =ov03_022598A0
    // mov r2, #3
    // ldr r1, [r0]
    // ldr r0, [r1, #0x68]
    // add r1, #0x40
    // ldr r0, [r0, #8]
    // bl sub_0205B514
    // ldr r0, _02253ECC ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x68]
    // ldr r0, [r0, #0xc]
    // bl Save_PlayerData_GetOptionsAddr
    // add r1, r0, #0
    // ldr r0, _02253ECC ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x40
    // bl sub_0205B564
    // ldr r0, _02253ECC ; =ov03_022598A0
    // ldr r4, [r0]
    // ldr r0, [r4, #0x68]
    // ldr r0, [r0, #0xc]
    // bl Save_PlayerData_GetOptionsAddr
    // add r2, r0, #0
    // add r0, r4, #0
    // ldr r1, [r4, #0x14]
    // add r0, #0x40
    // mov r3, #1
    // bl sub_0205B5B4
    // ldr r1, _02253ECC ; =ov03_022598A0
    // ldr r1, [r1]
    // add r1, #0x94
    // strb r0, [r1]
    // pop {r3, r4, r5, pc}
    // _02253ECC: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02253ED0(void) {
    // push {r0, r1, r2, r3}
    // push {r3, r4, lr}
    // sub sp, #0x34
    // ldr r0, _02253F6C ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x20
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _02253F14
    // ldr r0, _02253F6C ; =ov03_022598A0
    // add r3, sp, #0x60
    // ldr r1, [r0]
    // add r0, sp, #0x64
    // ldrb r0, [r0]
    // ldrb r3, [r3]
    // mov r2, #3
    // str r0, [sp]
    // add r0, sp, #0x68
    // ldrb r0, [r0]
    // str r0, [sp, #4]
    // add r0, sp, #0x6c
    // ldrb r0, [r0]
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // add r0, sp, #0x40
    // ldrh r0, [r0, #0x30]
    // str r0, [sp, #0x10]
    // ldr r0, [r1, #0x68]
    // add r1, #0x20
    // ldr r0, [r0, #8]
    // bl AddWindowParameterized
    // ldr r0, _02253F6C ; =ov03_022598A0
    // ldr r2, _02253F70 ; =0x000003D9
    // ldr r0, [r0]
    // mov r1, #1
    // add r0, #0x20
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // add r4, sp, #0x40
    // add r3, sp, #0x14
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, _02253F6C ; =ov03_022598A0
    // mov r3, #4
    // ldr r1, [r0]
    // ldr r0, [r1, #0x64]
    // add r1, #0x20
    // str r1, [sp, #0x20]
    // str r0, [sp, #0x14]
    // mov r1, #0
    // add r0, r2, #0
    // add r2, r1, #0
    // bl ListMenuInit
    // ldr r1, _02253F6C ; =ov03_022598A0
    // ldr r2, [r1]
    // str r0, [r2, #0x5c]
    // ldr r0, [r1]
    // add r0, #0x20
    // bl CopyWindowToVram
    // add sp, #0x34
    // pop {r3, r4}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // nop
    // _02253F6C: .word ov03_022598A0
    // _02253F70: .word 0x000003D9
    // TODO: decompile
}



void ov03_02253F74(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldr r0, _02254050 ; =ov03_022598A0
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02253F84
    // bl GF_AssertFail
    // mov r0, #4
    // mov r1, #0xac
    // bl Heap_Alloc
    // ldr r1, _02254050 ; =ov03_022598A0
    // mov r2, #0xac
    // str r0, [r1]
    // mov r1, #0
    // bl MI_CpuFill8
    // ldr r0, _02254050 ; =ov03_022598A0
    // mov r2, #0
    // ldr r1, [r0]
    // mov r3, #4
    // add r1, #0x88
    // str r2, [r1]
    // ldr r1, [r0]
    // str r4, [r1, #0x68]
    // ldr r0, [r0]
    // mov r1, #0x1b
    // add r0, #0x97
    // strb r2, [r0]
    // mov r0, #1
    // mov r2, #0xb6
    // bl NewMsgDataFromNarc
    // ldr r1, _02254050 ; =ov03_022598A0
    // ldr r2, [r1]
    // str r0, [r2, #0x74]
    // ldr r0, [r1]
    // ldr r0, [r0, #0x68]
    // bl FieldSystem_GetSaveData
    // bl Save_PlayerData_GetProfile
    // ldr r1, _02254050 ; =ov03_022598A0
    // ldr r1, [r1]
    // str r0, [r1, #0x78]
    // mov r0, #4
    // bl PlayerProfile_New
    // ldr r1, _02254050 ; =ov03_022598A0
    // ldr r2, [r1]
    // str r0, [r2, #0x7c]
    // ldr r0, [r1]
    // add r0, #0x20
    // bl InitWindow
    // ldr r0, _02254050 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x30
    // bl InitWindow
    // ldr r0, _02254050 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x40
    // bl InitWindow
    // mov r0, #4
    // bl MessageFormat_New
    // ldr r1, _02254050 ; =ov03_022598A0
    // ldr r1, [r1]
    // str r0, [r1, #0x50]
    // mov r0, #4
    // bl MessageFormat_New
    // ldr r1, _02254050 ; =ov03_022598A0
    // ldr r1, [r1]
    // str r0, [r1, #0x54]
    // mov r0, #4
    // bl MessageFormat_New
    // ldr r1, _02254050 ; =ov03_022598A0
    // ldr r2, [r1]
    // str r0, [r2, #0x58]
    // ldr r0, [r1]
    // mov r2, #0
    // add r0, #0x98
    // strb r2, [r0]
    // add r5, r2, #0
    // ldr r0, [r1]
    // add r0, r0, r2
    // add r0, #0x80
    // add r2, r2, #1
    // strb r5, [r0]
    // cmp r2, #8
    // blt _02254026
    // ldr r6, _02254050 ; =ov03_022598A0
    // add r4, r5, #0
    // mov r7, #0x8c
    // add r0, r7, #0
    // mov r1, #4
    // bl String_New
    // ldr r1, [r6]
    // add r5, r5, #1
    // str r0, [r1, r4]
    // add r4, r4, #4
    // cmp r5, #8
    // blt _0225403A
    // pop {r3, r4, r5, r6, r7, pc}
    // _02254050: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02254054(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #0
    // ldr r6, _022540E4 ; =ov03_022598A0
    // add r5, r4, #0
    // ldr r0, [r6]
    // ldr r0, [r0, r5]
    // bl String_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #8
    // blt _0225405C
    // ldr r0, _022540E4 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x7c]
    // bl Heap_Free
    // ldr r0, _022540E4 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x50]
    // cmp r0, #0
    // beq _0225408C
    // bl MessageFormat_Delete
    // ldr r0, _022540E4 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // str r1, [r0, #0x50]
    // ldr r0, _022540E4 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x54]
    // cmp r0, #0
    // beq _022540A2
    // bl MessageFormat_Delete
    // ldr r0, _022540E4 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // str r1, [r0, #0x54]
    // ldr r0, _022540E4 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x58]
    // cmp r0, #0
    // beq _022540B8
    // bl MessageFormat_Delete
    // ldr r0, _022540E4 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // str r1, [r0, #0x58]
    // ldr r0, _022540E4 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x74]
    // bl DestroyMsgData
    // ldr r0, _022540E4 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r1, [r0, #0x4c]
    // cmp r1, #0
    // beq _022540D2
    // add r0, #0x40
    // bl RemoveWindow
    // ldr r0, _022540E4 ; =ov03_022598A0
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, _022540E4 ; =ov03_022598A0
    // mov r1, #0
    // str r1, [r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _022540E4: .word ov03_022598A0
    // TODO: decompile
}



void ov03_022540E8(void) {
}



void ov03_02254100(void) {
}



void ov03_02254120(void) {
    ListMenuGetTemplateField(3);
    ov03_02254150(r5, r4, ((r4 << 0x18) >> 0x18));
    ListMenuGetTemplateField(r5, r7);
}



void ov03_02254150(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r2, #0
    // bl sub_0203511C
    // add r4, r0, #0
    // mov r2, #0
    // add r0, sp, #0xc
    // strh r2, [r0]
    // ldr r0, _022542C4 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x5c]
    // cmp r0, #0
    // beq _02254172
    // add r1, sp, #0xc
    // bl ListMenuGetScrollAndRow
    // add r0, sp, #0xc
    // ldrh r1, [r0]
    // add r1, r1, r5
    // strh r1, [r0]
    // ldr r0, _022542C4 ; =ov03_022598A0
    // lsl r5, r5, #4
    // ldr r0, [r0]
    // add r0, #0x20
    // bl GetWindowWidth
    // lsl r0, r0, #3
    // sub r0, #8
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, _022542C4 ; =ov03_022598A0
    // lsl r3, r5, #0x10
    // ldr r0, [r0]
    // mov r1, #0xf
    // add r0, #0x20
    // mov r2, #8
    // lsr r3, r3, #0x10
    // bl FillWindowPixelRect
    // add r0, sp, #0xc
    // ldrh r2, [r0]
    // cmp r2, r4
    // bge _02254274
    // ldr r1, _022542C4 ; =ov03_022598A0
    // add r0, r2, #0
    // ldr r1, [r1]
    // ldr r1, [r1, #0x7c]
    // bl sub_020351DC
    // mov r3, #2
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022542C4 ; =ov03_022598A0
    // add r2, sp, #0xc
    // ldr r0, [r0]
    // ldrh r2, [r2]
    // ldr r0, [r0, #0x50]
    // mov r1, #0
    // add r2, r2, #1
    // bl BufferIntegerAsString
    // ldr r0, _022542C4 ; =ov03_022598A0
    // mov r1, #1
    // ldr r2, [r0]
    // ldr r0, [r2, #0x50]
    // ldr r2, [r2, #0x7c]
    // bl BufferPlayersName
    // ldr r0, _022542C4 ; =ov03_022598A0
    // mov r1, #0x4c
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #4]
    // bl ReadMsgDataIntoString
    // ldr r0, _022542C4 ; =ov03_022598A0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x50]
    // ldmia r2!, {r1, r2}
    // bl StringExpandPlaceholders
    // ldr r0, _022542C4 ; =ov03_022598A0
    // mov r1, #0
    // ldr r2, [r0]
    // mov r0, #0xff
    // str r5, [sp]
    // str r0, [sp, #4]
    // add r0, r2, #0
    // str r1, [sp, #8]
    // ldr r2, [r2]
    // add r0, #0x20
    // mov r3, #8
    // bl AddTextPrinterParameterized
    // ldr r0, _022542C4 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x7c]
    // bl PlayerProfile_GetTrainerID
    // add r2, r0, #0
    // mov r1, #2
    // lsl r2, r2, #0x10
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022542C4 ; =ov03_022598A0
    // lsr r2, r2, #0x10
    // ldr r0, [r0]
    // mov r3, #5
    // ldr r0, [r0, #0x50]
    // bl BufferIntegerAsString
    // ldr r0, _022542C4 ; =ov03_022598A0
    // mov r1, #0x4e
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #0xc]
    // bl ReadMsgDataIntoString
    // ldr r0, _022542C4 ; =ov03_022598A0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x50]
    // ldr r1, [r2, #8]
    // ldr r2, [r2, #0xc]
    // bl StringExpandPlaceholders
    // ldr r0, _022542C4 ; =ov03_022598A0
    // mov r1, #0
    // ldr r2, [r0]
    // mov r0, #0xff
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r2, #0
    // ldr r2, [r2, #8]
    // add r0, #0x20
    // mov r3, #0x58
    // bl AddTextPrinterParameterized
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // mov r3, #2
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022542C4 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // add r2, r2, #1
    // ldr r0, [r0, #0x50]
    // bl BufferIntegerAsString
    // ldr r0, _022542C4 ; =ov03_022598A0
    // mov r1, #0x4d
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #4]
    // bl ReadMsgDataIntoString
    // ldr r0, _022542C4 ; =ov03_022598A0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x50]
    // ldmia r2!, {r1, r2}
    // bl StringExpandPlaceholders
    // ldr r0, _022542C4 ; =ov03_022598A0
    // mov r1, #0
    // ldr r2, [r0]
    // mov r0, #0xff
    // str r5, [sp]
    // str r0, [sp, #4]
    // add r0, r2, #0
    // str r1, [sp, #8]
    // ldr r2, [r2]
    // add r0, #0x20
    // mov r3, #8
    // bl AddTextPrinterParameterized
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _022542C4: .word ov03_022598A0
    // TODO: decompile
}



void ov03_022542C8(void) {
    // push {r4, lr}
    // sub sp, #0x68
    // add r4, r0, #0
    // ldr r0, _02254398 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x30
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _02254302
    // ldr r0, _02254398 ; =ov03_022598A0
    // mov r2, #3
    // ldr r1, [r0]
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0xc9
    // str r0, [sp, #0x10]
    // ldr r0, [r1, #0x68]
    // add r1, #0x30
    // ldr r0, [r0, #8]
    // mov r3, #0x17
    // bl AddWindowParameterized
    // ldr r0, _02254398 ; =ov03_022598A0
    // ldr r2, _0225439C ; =0x000003D9
    // ldr r0, [r0]
    // mov r1, #1
    // add r0, #0x30
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // ldr r0, _02254398 ; =ov03_022598A0
    // mov r1, #0xf
    // ldr r0, [r0]
    // add r0, #0x30
    // bl FillWindowPixelBuffer
    // ldr r0, _02254398 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x30
    // bl CopyWindowToVram
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0x97
    // strb r1, [r0]
    // ldr r0, _022543A0 ; =ov03_02254D64
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, _02254398 ; =ov03_022598A0
    // ldr r0, [r0]
    // bl ov03_022543AC
    // ldr r3, _022543A4 ; =ov03_0225927A
    // add r2, sp, #0x14
    // mov r1, #0x29
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _02254348
    // ldr r0, _02254398 ; =ov03_022598A0
    // ldr r1, [r0]
    // add r0, r1, #0
    // add r0, #0x91
    // ldrb r0, [r0]
    // cmp r0, #8
    // bne _02254370
    // add r1, #0x92
    // ldrb r0, [r1]
    // mov r1, #0
    // add r0, #0x7a
    // bl ov03_02253E20
    // b _0225438E
    // cmp r0, #0x28
    // bne _02254382
    // add r1, #0x92
    // ldrb r0, [r1]
    // mov r1, #0
    // add r0, #0x94
    // bl ov03_02253E20
    // b _0225438E
    // lsl r1, r0, #1
    // add r0, sp, #0x14
    // ldrh r0, [r0, r1]
    // mov r1, #0
    // bl ov03_02253E20
    // ldr r0, _022543A8 ; =ov03_02254420
    // bl ov03_02254B4C
    // add sp, #0x68
    // pop {r4, pc}
    // _02254398: .word ov03_022598A0
    // _0225439C: .word 0x000003D9
    // _022543A0: .word ov03_02254D64
    // _022543A4: .word ov03_0225927A
    // _022543A8: .word ov03_02254420
    // TODO: decompile
}



void ov03_022543AC(void) {
    // push {lr}
    // sub sp, #0xc
    // ldr r0, _0225441C ; =ov03_022598A0
    // mov r1, #0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x54]
    // ldr r2, [r2, #0x78]
    // bl BufferPlayersName
    // ldr r0, _0225441C ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x78]
    // bl PlayerProfile_GetTrainerID
    // add r2, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r1, #1
    // lsl r2, r2, #0x10
    // ldr r0, _0225441C ; =ov03_022598A0
    // str r1, [sp, #4]
    // ldr r0, [r0]
    // lsr r2, r2, #0x10
    // ldr r0, [r0, #0x54]
    // mov r3, #5
    // bl BufferIntegerAsString
    // ldr r0, _0225441C ; =ov03_022598A0
    // mov r1, #0x4b
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #0x18]
    // bl ReadMsgDataIntoString
    // ldr r0, _0225441C ; =ov03_022598A0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x54]
    // ldr r1, [r2, #0x1c]
    // ldr r2, [r2, #0x18]
    // bl StringExpandPlaceholders
    // ldr r0, _0225441C ; =ov03_022598A0
    // mov r3, #2
    // ldr r2, [r0]
    // mov r1, #0
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r0, r2, #0
    // str r1, [sp, #8]
    // ldr r2, [r2, #0x1c]
    // add r0, #0x30
    // bl AddTextPrinterParameterized
    // add sp, #0xc
    // pop {pc}
    // nop
    // _0225441C: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02254420(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // ldr r0, _022544EC ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _022544E6
    // mov r0, #0x10
    // mov r1, #4
    // bl ListMenuItems_New
    // ldr r4, _022544EC ; =ov03_022598A0
    // mov r5, #0
    // ldr r1, [r4]
    // mov r6, #2
    // str r0, [r1, #0x64]
    // mov r7, #1
    // str r6, [sp]
    // str r7, [sp, #4]
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0, #0x50]
    // add r2, r5, #1
    // add r3, r6, #0
    // bl BufferIntegerAsString
    // ldr r2, [r4]
    // mov r1, #0x4d
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #4]
    // bl ReadMsgDataIntoString
    // ldr r2, [r4]
    // ldr r0, [r2, #0x50]
    // ldmia r2!, {r1, r2}
    // bl StringExpandPlaceholders
    // ldr r1, [r4]
    // mov r2, #0
    // ldr r0, [r1, #0x64]
    // ldr r1, [r1]
    // bl ListMenuItems_AddItem
    // add r5, r5, #1
    // cmp r5, #0x10
    // blt _02254448
    // mov r1, #1
    // str r1, [sp, #0x10]
    // mov r0, #2
    // str r0, [sp, #0x14]
    // mov r0, #0x14
    // str r0, [sp, #0x18]
    // mov r0, #0xa
    // mov r4, sp
    // str r0, [sp, #0x1c]
    // sub r4, #0x10
    // ldr r3, _022544F0 ; =ov03_02259164
    // str r1, [sp, #0x20]
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1, r2, r3}
    // bl ov03_02253ED0
    // ldr r0, _022544EC ; =ov03_022598A0
    // ldr r2, _022544F4 ; =ov03_02259134
    // ldr r1, [r0]
    // add r1, #0x9c
    // str r2, [r1]
    // ldr r1, [r0]
    // mov r2, #2
    // add r1, #0xa0
    // strb r2, [r1]
    // ldr r1, [r0]
    // ldr r2, _022544F8 ; =0x0000FFFF
    // add r1, #0xa2
    // strh r2, [r1]
    // ldr r1, [r0]
    // mov r2, #0
    // add r1, #0xa1
    // strb r2, [r1]
    // ldr r2, [r0]
    // mov r1, #7
    // ldr r0, [r2, #0x68]
    // add r2, #0x9c
    // bl ov01_021F6A9C
    // ldr r0, _022544FC ; =ov03_02254500
    // bl ov03_02254B4C
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022544EC: .word ov03_022598A0
    // _022544F0: .word ov03_02259164
    // _022544F4: .word ov03_02259134
    // _022544F8: .word 0x0000FFFF
    // _022544FC: .word ov03_02254500
    // TODO: decompile
}



void ov03_02254500(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov03_022543AC
    // ldr r0, [r4, #0x68]
    // bl ov01_021F6B10
    // cmp r0, #1
    // bne _022545F2
    // bl sub_02037700
    // cmp r0, #0
    // beq _02254536
    // ldr r0, _022545F4 ; =ov03_022598A0
    // mov r1, #3
    // ldr r0, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // bl ov03_02254B44
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // pop {r3, r4, r5, pc}
    // bl sub_02035184
    // cmp r0, #0
    // bne _02254574
    // ldr r0, _022545F4 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x5c]
    // bl ListMenu_ProcessInput
    // mov r2, #0
    // mvn r2, r2
    // cmp r0, r2
    // bne _02254578
    // add r1, r4, #0
    // add r1, #0xa2
    // ldrh r1, [r1]
    // cmp r1, #0
    // bne _0225456C
    // ldr r0, _022545F4 ; =ov03_022598A0
    // add r1, sp, #0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x5c]
    // bl ListMenuGetCurrentItemArrayId
    // add r0, sp, #0
    // ldrh r0, [r0]
    // b _02254578
    // cmp r1, #1
    // bne _02254578
    // sub r0, r2, #1
    // b _02254578
    // mov r0, #0
    // mvn r0, r0
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // beq _0225458E
    // add r1, r1, #1
    // cmp r0, r1
    // bne _022545AC
    // add r0, r4, #0
    // bl ov03_02254600
    // pop {r3, r4, r5, pc}
    // ldr r0, _022545F8 ; =0x000005DC
    // bl PlaySE
    // ldr r0, _022545F4 ; =ov03_022598A0
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // bl ov03_02254B44
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // pop {r3, r4, r5, pc}
    // ldr r0, _022545F8 ; =0x000005DC
    // bl PlaySE
    // add r1, r4, #0
    // ldr r0, [r4, #0x5c]
    // add r1, #0x8e
    // bl ListMenuGetCurrentItemArrayId
    // bl sub_0203511C
    // add r1, r4, #0
    // add r1, #0x8e
    // ldrh r1, [r1]
    // cmp r0, r1
    // ble _022545F2
    // add r0, r4, #0
    // bl ov03_02254600
    // add r0, r4, #0
    // add r0, #0x8e
    // ldrh r0, [r0]
    // bl sub_02035150
    // add r1, r4, #0
    // add r1, #0x8e
    // add r4, #0x8e
    // strh r0, [r1]
    // ldrh r0, [r4]
    // bl sub_02058164
    // bl sub_02037BC8
    // ldr r0, _022545FC ; =ov03_02254660
    // bl ov03_02254B4C
    // pop {r3, r4, r5, pc}
    // _022545F4: .word ov03_022598A0
    // _022545F8: .word 0x000005DC
    // _022545FC: .word ov03_02254660
    // TODO: decompile
}



void ov03_02254600(void) {
    // push {r3, lr}
    // sub sp, #8
    // bl sub_02035184
    // cmp r0, #0
    // bne _02254618
    // ldr r0, _0225465C ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x98
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02254656
    // ldr r0, _0225465C ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0x98
    // strb r1, [r0]
    // bl sub_02035198
    // mov r0, #0xc
    // str r0, [sp]
    // mov r0, #0x50
    // str r0, [sp, #4]
    // ldr r0, _0225465C ; =ov03_022598A0
    // mov r1, #0xf
    // ldr r0, [r0]
    // mov r2, #8
    // add r0, #0x20
    // mov r3, #0
    // bl FillWindowPixelRect
    // ldr r0, _0225465C ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // add r2, r1, #0
    // ldr r0, [r0, #0x5c]
    // bl ov03_02254120
    // ldr r0, _0225465C ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x20
    // bl CopyWindowToVram
    // add sp, #8
    // pop {r3, pc}
    // nop
    // _0225465C: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02254660(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02037700
    // cmp r0, #0
    // beq _02254690
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // mov r0, #0
    // add r1, r0, #0
    // bl ov03_02253E20
    // add r0, r4, #0
    // bl ov03_02255ADC
    // ldr r0, _022546AC ; =ov03_022598A0
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0xa1
    // strb r1, [r0]
    // pop {r3, r4, r5, pc}
    // bl sub_0203769C
    // bl sub_02034818
    // cmp r0, #0
    // beq _022546A8
    // bl sub_02037BC8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_022546B0
    // pop {r3, r4, r5, pc}
    // nop
    // _022546AC: .word ov03_022598A0
    // TODO: decompile
}



void ov03_022546B0(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02037700
    // cmp r0, #0
    // beq _022546E4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // mov r0, #0
    // add r1, r0, #0
    // bl ov03_02253E20
    // add r0, r4, #0
    // bl ov03_02255ADC
    // ldr r0, _022547D0 ; =ov03_022598A0
    // mov r1, #1
    // ldr r0, [r0]
    // add sp, #0xc
    // add r0, #0xa1
    // strb r1, [r0]
    // pop {r4, r5, pc}
    // ldr r1, _022547D0 ; =ov03_022598A0
    // add r0, r4, #0
    // add r0, #0x8e
    // ldr r1, [r1]
    // ldrh r0, [r0]
    // ldr r1, [r1, #0x7c]
    // bl sub_020351DC
    // ldr r2, _022547D0 ; =ov03_022598A0
    // ldr r0, [r4, #0x58]
    // ldr r2, [r2]
    // mov r1, #1
    // ldr r2, [r2, #0x7c]
    // bl BufferPlayersName
    // bl ov03_02255B70
    // cmp r0, #2
    // bgt _02254714
    // mov r0, #1
    // add r1, r0, #0
    // bl ov03_02253E20
    // b _022547B4
    // ldr r0, _022547D0 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // bne _02254730
    // ldr r0, _022547D0 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl RemoveTextPrinter
    // ldr r0, _022547D0 ; =ov03_022598A0
    // mov r1, #2
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #0x10]
    // bl ReadMsgDataIntoString
    // ldr r0, _022547D0 ; =ov03_022598A0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x58]
    // ldr r1, [r2, #0x14]
    // ldr r2, [r2, #0x10]
    // bl StringExpandPlaceholders
    // ldr r0, _022547D0 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x40
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _0225476A
    // ldr r0, _022547D0 ; =ov03_022598A0
    // mov r2, #3
    // ldr r1, [r0]
    // ldr r0, [r1, #0x68]
    // add r1, #0x40
    // ldr r0, [r0, #8]
    // bl sub_0205B514
    // ldr r0, _022547D0 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x68]
    // ldr r0, [r0, #0xc]
    // bl Save_PlayerData_GetOptionsAddr
    // add r1, r0, #0
    // ldr r0, _022547D0 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x40
    // bl sub_0205B564
    // mov r0, #1
    // bl TextFlags_SetCanABSpeedUpPrint
    // mov r0, #0
    // bl TextFlags_SetAutoScrollParam
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, _022547D0 ; =ov03_022598A0
    // mov r3, #0
    // ldr r2, [r0]
    // mov r1, #1
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r0, r2, #0
    // str r3, [sp, #8]
    // ldr r2, [r2, #0x14]
    // add r0, #0x40
    // bl AddTextPrinterParameterized
    // ldr r1, _022547D0 ; =ov03_022598A0
    // ldr r1, [r1]
    // add r1, #0x94
    // strb r0, [r1]
    // ldr r0, _022547D0 ; =ov03_022598A0
    // mov r2, #0
    // ldr r1, [r0]
    // add r1, #0xa8
    // str r2, [r1]
    // ldr r0, [r0]
    // mov r1, #1
    // add r0, #0xa1
    // strb r1, [r0]
    // ldr r0, _022547D4 ; =ov03_022548E0
    // bl ov03_02254B4C
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _022547D0: .word ov03_022598A0
    // _022547D4: .word ov03_022548E0
    // TODO: decompile
}



void ov03_022547D8(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r4, r1, #0
    // bl sub_02037700
    // cmp r0, #0
    // beq _022547FE
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // mov r0, #0
    // add r1, r0, #0
    // bl ov03_02253E20
    // add r0, r4, #0
    // bl ov03_02255ADC
    // b _022548D2
    // mov r0, #0
    // mov r1, #3
    // bl sub_02037BA0
    // add r5, r0, #0
    // bl sub_0203769C
    // cmp r5, r0
    // bne _02254824
    // bl sub_02037BC8
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // add r0, r4, #0
    // bl ov03_02255A70
    // b _022548D2
    // mov r0, #0
    // mov r1, #5
    // bl sub_02037BA0
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02254848
    // bl sub_02037BC8
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // add r0, r4, #0
    // bl ov03_02255A70
    // b _022548D2
    // mov r0, #0
    // mov r1, #4
    // bl sub_02037BA0
    // add r5, r0, #0
    // bl sub_0203769C
    // cmp r5, r0
    // bne _0225486A
    // mov r0, #0x74
    // mov r1, #0
    // bl ov03_02253E20
    // ldr r0, _022548D8 ; =ov03_02255280
    // bl ov03_02254B4C
    // b _022548D2
    // mov r0, #0
    // mov r1, #2
    // bl sub_02037BA0
    // add r5, r0, #0
    // bl sub_0203769C
    // cmp r5, r0
    // bne _022548B6
    // bl sub_02037BC8
    // bl sub_020347A0
    // add r1, r4, #0
    // add r1, #0x90
    // strb r0, [r1]
    // ldr r0, _022548DC ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // bne _022548A6
    // ldr r0, _022548DC ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl RemoveTextPrinter
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // add r0, r4, #0
    // bl ov03_02255804
    // b _022548D2
    // bl ov03_02255C80
    // cmp r0, #0
    // beq _022548CE
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // add r0, r4, #0
    // bl ov03_02255A70
    // b _022548D2
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // nop
    // _022548D8: .word ov03_02255280
    // _022548DC: .word ov03_022598A0
    // TODO: decompile
}



void ov03_022548E0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02254984 ; =ov03_022598A0
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02254980
    // add r0, r4, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02254936
    // ldr r0, _02254984 ; =ov03_022598A0
    // ldr r2, _02254988 ; =_0225912C
    // ldr r1, [r0]
    // add r1, #0x9c
    // str r2, [r1]
    // ldr r1, [r0]
    // mov r2, #1
    // add r1, #0xa0
    // strb r2, [r1]
    // ldr r1, [r0]
    // ldr r2, _0225498C ; =0x0000FFFF
    // add r1, #0xa2
    // strh r2, [r1]
    // ldr r1, [r0]
    // mov r2, #0
    // add r1, #0xa1
    // strb r2, [r1]
    // ldr r2, [r0]
    // mov r1, #7
    // ldr r0, [r2, #0x68]
    // add r2, #0x9c
    // bl ov01_021F6A9C
    // mov r0, #1
    // add r4, #0xa8
    // str r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x68]
    // bl ov01_021F6B10
    // cmp r0, #1
    // bne _02254980
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_022547D8
    // cmp r0, #0
    // beq _02254954
    // mov r0, #2
    // add r4, #0xa1
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r0, _02254990 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // bne _02254968
    // add r0, r4, #0
    // add r0, #0xa2
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _02254980
    // ldr r0, _02254994 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0
    // add r4, #0xa8
    // mov r0, #3
    // str r1, [r4]
    // bl ov03_02253E20
    // ldr r0, _02254998 ; =ov03_0225499C
    // bl ov03_02254B4C
    // pop {r3, r4, r5, pc}
    // nop
    // _02254984: .word ov03_022598A0
    // _02254988: .word _0225912C
    // _0225498C: .word 0x0000FFFF
    // _02254990: .word gSystem
    // _02254994: .word 0x000005DC
    // _02254998: .word ov03_0225499C
    // TODO: decompile
}



void ov03_0225499C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl ov03_022547D8
    // cmp r0, #0
    // beq _022549B0
    // mov r0, #2
    // add r4, #0xa1
    // strb r0, [r4]
    // pop {r4, pc}
    // ldr r0, _022549D0 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _022549CC
    // add r0, r4, #0
    // bl ov03_02255C84
    // ldr r0, _022549D4 ; =ov03_022549D8
    // bl ov03_02254B4C
    // pop {r4, pc}
    // nop
    // _022549D0: .word ov03_022598A0
    // _022549D4: .word ov03_022549D8
    // TODO: decompile
}



void ov03_022549D8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _022549FA
    // add r0, r4, #0
    // bl ov03_02255CA0
    // cmp r0, #1
    // bne _02254A4E
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0xa8
    // str r1, [r0]
    // add r0, r4, #0
    // bl ov03_02255CD0
    // cmp r0, #0
    // beq _02254A4E
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_022547D8
    // cmp r0, #0
    // beq _02254A18
    // add r0, r4, #0
    // bl ov03_02255CE4
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x68]
    // bl ov01_021F6AEC
    // cmp r0, #6
    // bne _02254A4E
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02254A44
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // mov r0, #6
    // mov r1, #0
    // bl ov03_02253E20
    // add r0, r4, #0
    // bl ov03_02255ADC
    // pop {r3, r4, r5, pc}
    // cmp r0, #1
    // bne _02254A4E
    // ldr r0, _02254A50 ; =ov03_022546B0
    // bl ov03_02254B4C
    // pop {r3, r4, r5, pc}
    // _02254A50: .word ov03_022546B0
    // TODO: decompile
}



void ov03_02254A54(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r2, #0
    // mov r2, #0
    // add r0, sp, #0xc
    // strh r2, [r0]
    // ldr r0, _02254B28 ; =ov03_022598A0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x5c]
    // cmp r0, #0
    // beq _02254A70
    // add r1, sp, #0xc
    // bl ListMenuGetScrollAndRow
    // add r0, sp, #0xc
    // ldrh r1, [r0]
    // add r1, r1, r4
    // strh r1, [r0]
    // ldrh r0, [r0]
    // bl sub_02034818
    // cmp r0, #0
    // beq _02254B22
    // add r0, sp, #0xc
    // ldrh r0, [r0]
    // bl sub_02034818
    // add r2, r0, #0
    // ldr r0, _02254B28 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x50]
    // bl BufferPlayersName
    // ldr r0, _02254B28 ; =ov03_022598A0
    // mov r1, #0x4f
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #4]
    // bl ReadMsgDataIntoString
    // ldr r0, _02254B28 ; =ov03_022598A0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x50]
    // ldmia r2!, {r1, r2}
    // bl StringExpandPlaceholders
    // ldr r0, _02254B28 ; =ov03_022598A0
    // lsl r4, r4, #4
    // ldr r2, [r0]
    // mov r1, #0
    // str r4, [sp]
    // str r1, [sp, #4]
    // add r0, r2, #0
    // str r1, [sp, #8]
    // ldr r2, [r2]
    // add r0, #0x20
    // mov r3, #8
    // bl AddTextPrinterParameterized
    // add r0, sp, #0xc
    // ldrh r0, [r0]
    // bl sub_02034818
    // bl PlayerProfile_GetTrainerID_VisibleHalf
    // mov r1, #2
    // add r2, r0, #0
    // str r1, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _02254B28 ; =ov03_022598A0
    // mov r3, #5
    // ldr r0, [r0]
    // ldr r0, [r0, #0x50]
    // bl BufferIntegerAsString
    // ldr r0, _02254B28 ; =ov03_022598A0
    // mov r1, #0x4e
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #0xc]
    // bl ReadMsgDataIntoString
    // ldr r0, _02254B28 ; =ov03_022598A0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x50]
    // ldr r1, [r2, #8]
    // ldr r2, [r2, #0xc]
    // bl StringExpandPlaceholders
    // ldr r0, _02254B28 ; =ov03_022598A0
    // mov r1, #0
    // ldr r2, [r0]
    // mov r3, #0x48
    // str r4, [sp]
    // str r1, [sp, #4]
    // add r0, r2, #0
    // str r1, [sp, #8]
    // ldr r2, [r2, #8]
    // add r0, #0x20
    // bl AddTextPrinterParameterized
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _02254B28: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02254B2C(void) {
}



void ov03_02254B44(void) {
}



void ov03_02254B4C(void) {
    // ldr r1, _02254B54 ; =ov03_022598A0
    // ldr r1, [r1]
    // str r0, [r1, #0x6c]
    // bx lr
    // _02254B54: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02254B58(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // ldr r0, _02254BDC ; =ov03_02254D64
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // bl ov03_02254BEC
    // ldr r0, _02254BE0 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x30
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _02254BA0
    // ldr r0, _02254BE0 ; =ov03_022598A0
    // mov r2, #3
    // ldr r1, [r0]
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0xcd
    // str r0, [sp, #0x10]
    // ldr r0, [r1, #0x68]
    // add r1, #0x30
    // ldr r0, [r0, #8]
    // mov r3, #0x16
    // bl AddWindowParameterized
    // ldr r0, _02254BE0 ; =ov03_022598A0
    // ldr r2, _02254BE4 ; =0x000003D9
    // ldr r0, [r0]
    // mov r1, #1
    // add r0, #0x30
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // ldr r0, _02254BE0 ; =ov03_022598A0
    // mov r1, #0xf
    // ldr r0, [r0]
    // add r0, #0x30
    // bl FillWindowPixelBuffer
    // ldr r0, _02254BE0 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x30
    // bl CopyWindowToVram
    // mov r0, #1
    // add r4, #0x97
    // strb r0, [r4]
    // mov r0, #0
    // bl sub_0203476C
    // ldr r0, _02254BE8 ; =ov03_02254D78
    // bl ov03_02254B4C
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _02254BDC: .word ov03_02254D64
    // _02254BE0: .word ov03_022598A0
    // _02254BE4: .word 0x000003D9
    // _02254BE8: .word ov03_02254D78
    // TODO: decompile
}



void ov03_02254BEC(void) {
    // push {lr}
    // sub sp, #0x54
    // ldr r3, _02254C94 ; =ov03_0225931E
    // add r2, sp, #0
    // mov r1, #0x29
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _02254BF6
    // ldr r0, _02254C98 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x91
    // ldrb r0, [r0]
    // cmp r0, #0x29
    // blo _02254C12
    // bl GF_AssertFail
    // ldr r0, _02254C98 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x91
    // ldrb r0, [r0]
    // cmp r0, #8
    // bne _02254C4E
    // bl sub_020347A0
    // cmp r0, #1
    // ble _02254C3A
    // ldr r0, _02254C98 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0x92
    // ldrb r0, [r0]
    // add r0, #0x7f
    // bl ov03_02253E20
    // add sp, #0x54
    // pop {pc}
    // ldr r0, _02254C98 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0x92
    // ldrb r0, [r0]
    // add r0, #0x75
    // bl ov03_02253E20
    // add sp, #0x54
    // pop {pc}
    // cmp r0, #0x28
    // bne _02254C82
    // bl sub_020347A0
    // cmp r0, #1
    // ble _02254C6E
    // ldr r0, _02254C98 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0x92
    // ldrb r0, [r0]
    // add r0, #0x9a
    // bl ov03_02253E20
    // add sp, #0x54
    // pop {pc}
    // ldr r0, _02254C98 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0x92
    // ldrb r0, [r0]
    // add r0, #0x8e
    // bl ov03_02253E20
    // add sp, #0x54
    // pop {pc}
    // lsl r1, r0, #1
    // add r0, sp, #0
    // ldrh r0, [r0, r1]
    // mov r1, #0
    // bl ov03_02253E20
    // add sp, #0x54
    // pop {pc}
    // nop
    // _02254C94: .word ov03_0225931E
    // _02254C98: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02254C9C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // bl sub_020347A0
    // add r4, r0, #0
    // bl ov03_02255B70
    // cmp r4, r0
    // blt _02254CB8
    // bl sub_020347A0
    // add r2, r0, #0
    // mov r4, #0x51
    // b _02254CC6
    // bl ov03_02255B70
    // add r4, r0, #0
    // bl sub_020347A0
    // sub r2, r4, r0
    // mov r4, #0x50
    // mov r0, #5
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _02254D20 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // mov r3, #2
    // ldr r0, [r0, #0x54]
    // bl BufferIntegerAsString
    // ldr r0, _02254D20 ; =ov03_022598A0
    // mov r1, #0xf
    // ldr r0, [r0]
    // add r0, #0x30
    // bl FillWindowPixelBuffer
    // ldr r0, _02254D20 ; =ov03_022598A0
    // add r1, r4, #0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x74]
    // ldr r2, [r2, #0x1c]
    // bl ReadMsgDataIntoString
    // ldr r0, _02254D20 ; =ov03_022598A0
    // ldr r2, [r0]
    // ldr r0, [r2, #0x54]
    // ldr r1, [r2, #0x18]
    // ldr r2, [r2, #0x1c]
    // bl StringExpandPlaceholders
    // ldr r0, _02254D20 ; =ov03_022598A0
    // mov r3, #2
    // ldr r2, [r0]
    // mov r1, #0
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r0, r2, #0
    // str r1, [sp, #8]
    // ldr r2, [r2, #0x18]
    // add r0, #0x30
    // bl AddTextPrinterParameterized
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _02254D20: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02254D24(void) {
    // push {r4, r5, lr}
    // sub sp, #0x54
    // ldr r5, _02254D60 ; =ov03_02259370
    // add r4, r1, #0
    // add r3, sp, #0
    // mov r2, #0x29
    // ldrh r1, [r5]
    // add r5, r5, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _02254D30
    // bl sub_02034818
    // add r2, r0, #0
    // beq _02254D4C
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // bl BufferPlayersName
    // add r4, #0x91
    // ldrb r0, [r4]
    // lsl r1, r0, #1
    // add r0, sp, #0
    // ldrh r0, [r0, r1]
    // mov r1, #1
    // bl ov03_02253E20
    // add sp, #0x54
    // pop {r4, r5, pc}
    // _02254D60: .word ov03_02259370
    // TODO: decompile
}



void ov03_02254D64(void) {
    // push {r3, lr}
    // ldr r2, _02254D74 ; =ov03_022598A0
    // ldr r2, [r2]
    // ldr r2, [r2, #0x6c]
    // cmp r2, #0
    // beq _02254D72
    // blx r2
    // pop {r3, pc}
    // _02254D74: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02254D78(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r0, r1, #0
    // bl ov03_02254C9C
    // ldr r0, _02254E58 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02254E52
    // mov r0, #5
    // mov r1, #4
    // bl ListMenuItems_New
    // ldr r4, _02254E58 ; =ov03_022598A0
    // mov r5, #0
    // ldr r1, [r4]
    // mov r6, #0x52
    // str r0, [r1, #0x64]
    // add r7, r5, #0
    // ldr r1, [r4]
    // add r2, r6, #0
    // ldr r0, [r1, #0x64]
    // ldr r1, [r1, #0x74]
    // add r3, r7, #0
    // bl ListMenuItems_AppendFromMsgData
    // add r5, r5, #1
    // cmp r5, #5
    // blt _02254DA6
    // ldr r1, _02254E58 ; =ov03_022598A0
    // mov r2, #1
    // ldr r0, [r1]
    // mov r3, #0
    // add r0, #0x98
    // strb r2, [r0]
    // add r2, r3, #0
    // ldr r0, [r1]
    // add r0, r0, r3
    // add r0, #0x80
    // add r3, r3, #1
    // strb r2, [r0]
    // cmp r3, #8
    // blt _02254DC8
    // mov r1, #1
    // str r1, [sp, #0x10]
    // mov r0, #2
    // str r0, [sp, #0x14]
    // mov r0, #0x11
    // str r0, [sp, #0x18]
    // mov r0, #0xc
    // mov r4, sp
    // str r0, [sp, #0x1c]
    // sub r4, #0x10
    // ldr r3, _02254E5C ; =ov03_02259144
    // str r1, [sp, #0x20]
    // add r2, r4, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r4!, {r0, r1, r2, r3}
    // bl ov03_02253ED0
    // ldr r0, _02254E60 ; =ov03_02254E70
    // bl ov03_02254B4C
    // bl ov03_02255B84
    // cmp r0, #2
    // ble _02254E22
    // ldr r0, _02254E58 ; =ov03_022598A0
    // ldr r2, _02254E64 ; =ov03_0225913C
    // ldr r1, [r0]
    // add r1, #0x9c
    // str r2, [r1]
    // mov r1, #2
    // b _02254E2E
    // ldr r0, _02254E58 ; =ov03_022598A0
    // ldr r2, _02254E68 ; =ov03_02259130
    // ldr r1, [r0]
    // add r1, #0x9c
    // str r2, [r1]
    // mov r1, #1
    // ldr r0, [r0]
    // ldr r2, _02254E6C ; =0x0000FFFF
    // add r0, #0xa0
    // strb r1, [r0]
    // ldr r0, _02254E58 ; =ov03_022598A0
    // ldr r1, [r0]
    // add r1, #0xa2
    // strh r2, [r1]
    // ldr r1, [r0]
    // mov r2, #0
    // add r1, #0xa1
    // strb r2, [r1]
    // ldr r2, [r0]
    // mov r1, #7
    // ldr r0, [r2, #0x68]
    // add r2, #0x9c
    // bl ov01_021F6A9C
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02254E58: .word ov03_022598A0
    // _02254E5C: .word ov03_02259144
    // _02254E60: .word ov03_02254E70
    // _02254E64: .word ov03_0225913C
    // _02254E68: .word ov03_02259130
    // _02254E6C: .word 0x0000FFFF
    // TODO: decompile
}



void ov03_02254E70(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x5c
    // str r0, [sp]
    // ldr r0, [r1, #0x68]
    // str r1, [sp, #4]
    // bl ov01_021F6B10
    // cmp r0, #1
    // beq _02254E84
    // b _02255058
    // ldr r0, [sp, #4]
    // bl ov03_02254C9C
    // mov r7, #1
    // ldr r4, _0225505C ; =ov03_022598A0
    // mov r5, #0
    // add r6, r7, #0
    // add r0, r5, #0
    // bl sub_02034714
    // cmp r0, #0
    // beq _02254EB0
    // cmp r5, #0
    // beq _02254EB0
    // ldr r0, [r4]
    // add r0, r0, r5
    // add r0, #0x80
    // strb r6, [r0]
    // ldr r0, [r4]
    // add r0, #0x98
    // strb r6, [r0]
    // b _02254EFA
    // add r0, r5, #0
    // bl sub_02034818
    // cmp r0, #0
    // beq _02254ED4
    // ldr r1, [r4]
    // add r0, r1, r5
    // add r0, #0x80
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02254ED4
    // add r0, r1, r5
    // add r0, #0x80
    // strb r7, [r0]
    // ldr r0, [r4]
    // add r0, #0x98
    // strb r7, [r0]
    // b _02254EFA
    // add r0, r5, #0
    // bl sub_02034818
    // cmp r0, #0
    // bne _02254EFA
    // ldr r1, [r4]
    // add r0, r1, r5
    // add r0, #0x80
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02254EFA
    // add r1, r1, r5
    // add r1, #0x80
    // mov r0, #0
    // strb r0, [r1]
    // ldr r1, [r4]
    // mov r0, #1
    // add r1, #0x98
    // strb r0, [r1]
    // add r5, r5, #1
    // cmp r5, #8
    // blt _02254E92
    // ldr r1, _0225505C ; =ov03_022598A0
    // ldr r2, [r1]
    // add r0, r2, #0
    // add r0, #0x98
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02254F52
    // mov r0, #0
    // add r2, #0x98
    // strb r0, [r2]
    // ldr r0, [r1]
    // ldr r0, [r0, #0x5c]
    // bl RedrawListMenu
    // ldr r0, _0225505C ; =ov03_022598A0
    // mov r1, #3
    // ldr r0, [r0]
    // mov r5, #0
    // ldr r0, [r0, #0x5c]
    // bl ListMenuGetTemplateField
    // cmp r0, #0
    // bls _02254F52
    // ldr r4, _0225505C ; =ov03_022598A0
    // add r6, r5, #0
    // mov r7, #3
    // ldr r0, [r4]
    // lsl r2, r5, #0x18
    // ldr r0, [r0, #0x5c]
    // add r1, r6, #0
    // lsr r2, r2, #0x18
    // bl ov03_02254A54
    // ldr r0, [r4]
    // add r1, r7, #0
    // ldr r0, [r0, #0x5c]
    // add r5, r5, #1
    // bl ListMenuGetTemplateField
    // cmp r5, r0
    // blo _02254F34
    // ldr r0, [sp, #4]
    // ldr r0, [r0, #0x5c]
    // bl ListMenu_ProcessInput
    // add r4, r0, #0
    // bl sub_02034780
    // cmp r0, #0xff
    // beq _02254F92
    // bl sub_02034780
    // ldr r1, [sp, #4]
    // add r1, #0x95
    // strb r0, [r1]
    // ldr r0, _02255060 ; =0x0000060C
    // bl PlaySE
    // ldr r0, [sp, #4]
    // mov r1, #1
    // add r0, #0xa1
    // strb r1, [r0]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, #0x95
    // ldrb r0, [r0]
    // bl ov03_02254D24
    // ldr r0, _02255064 ; =ov03_02255714
    // bl ov03_02254B4C
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // bl sub_02037700
    // cmp r0, #0
    // beq _02254FB4
    // bl ov03_02254B44
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // bl ov03_0225574C
    // ldr r0, _0225505C ; =ov03_022598A0
    // mov r1, #3
    // ldr r0, [r0]
    // add sp, #0x5c
    // add r0, #0x88
    // str r1, [r0]
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _02254FEE
    // bl ov03_02255B84
    // cmp r0, #2
    // ble _02254FDE
    // ldr r0, _0225505C ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0xa2
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _02254FD4
    // mov r4, #0
    // b _02254FEE
    // cmp r0, #1
    // bne _02254FEE
    // mov r4, #1
    // mvn r4, r4
    // b _02254FEE
    // ldr r0, _0225505C ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0xa2
    // ldrh r0, [r0]
    // cmp r0, #0
    // bne _02254FEE
    // mov r4, #1
    // mvn r4, r4
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _02254FFE
    // add r0, r0, #1
    // cmp r4, r0
    // beq _02255058
    // b _0225500E
    // ldr r0, _02255068 ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0225506C ; =ov03_0225558C
    // bl ov03_02254B4C
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // bl ov03_02255B70
    // add r4, r0, #0
    // bl sub_020347A0
    // cmp r4, r0
    // bgt _02255058
    // ldr r3, _02255070 ; =ov03_02259184
    // add r2, sp, #8
    // mov r1, #0x29
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _02255022
    // ldr r0, _02255068 ; =0x000005DC
    // bl PlaySE
    // bl sub_020347A0
    // ldr r1, [sp, #4]
    // add r1, #0x90
    // strb r0, [r1]
    // ldr r0, [sp, #4]
    // add r0, #0x91
    // str r0, [sp, #4]
    // ldrb r0, [r0]
    // lsl r1, r0, #1
    // add r0, sp, #8
    // ldrh r0, [r0, r1]
    // mov r1, #0
    // bl ov03_02253E20
    // ldr r0, _02255074 ; =ov03_022553C8
    // bl ov03_02254B4C
    // add sp, #0x5c
    // pop {r4, r5, r6, r7, pc}
    // _0225505C: .word ov03_022598A0
    // _02255060: .word 0x0000060C
    // _02255064: .word ov03_02255714
    // _02255068: .word 0x000005DC
    // _0225506C: .word ov03_0225558C
    // _02255070: .word ov03_02259184
    // _02255074: .word ov03_022553C8
    // TODO: decompile
}



void ov03_02255078(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov03_02254C9C
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _022550A0
    // add r0, r5, #0
    // bl ov03_02255CA0
    // cmp r0, #1
    // bne _022550AA
    // add r0, r5, #0
    // mov r1, #1
    // add r0, #0xa8
    // str r1, [r0]
    // add r0, r5, #0
    // bl ov03_02255CD0
    // cmp r0, #0
    // bne _022550AC
    // b _0225526E
    // add r0, r5, #0
    // add r0, #0x95
    // ldrb r0, [r0]
    // bl sub_020373B4
    // cmp r0, #0
    // bne _02255128
    // add r0, r5, #0
    // bl ov03_02255CE4
    // add r0, r5, #0
    // add r0, #0x91
    // ldrb r0, [r0]
    // cmp r0, #8
    // beq _022550CE
    // cmp r0, #0x28
    // bne _02255110
    // mov r5, #1
    // bl ov03_02255B84
    // cmp r0, #1
    // ble _02255100
    // mov r4, #5
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #0
    // beq _022550F6
    // add r0, r5, #0
    // bl sub_020346E8
    // lsl r1, r5, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl sub_02037B8C
    // add r5, r5, #1
    // bl ov03_02255B84
    // cmp r5, r0
    // blt _022550DA
    // mov r0, #0
    // add r1, r0, #0
    // bl ov03_02253E20
    // ldr r0, _02255270 ; =ov03_022552C8
    // bl ov03_02254B4C
    // pop {r4, r5, r6, pc}
    // add r5, #0x95
    // ldrb r0, [r5]
    // bl sub_020346E8
    // mov r0, #0
    // add r1, r0, #0
    // bl ov03_02253E20
    // ldr r0, _02255270 ; =ov03_022552C8
    // bl ov03_02254B4C
    // pop {r4, r5, r6, pc}
    // bl sub_02037700
    // cmp r0, #0
    // bne _02255138
    // bl ov03_02255C80
    // cmp r0, #0
    // beq _02255156
    // add r0, r5, #0
    // bl ov03_02255CE4
    // add r5, #0x95
    // ldrb r0, [r5]
    // bl sub_020346E8
    // mov r0, #0
    // add r1, r0, #0
    // bl ov03_02253E20
    // ldr r0, _02255270 ; =ov03_022552C8
    // bl ov03_02254B4C
    // pop {r4, r5, r6, pc}
    // ldr r0, [r5, #0x68]
    // bl ov01_021F6AEC
    // cmp r0, #6
    // beq _02255162
    // b _0225526E
    // add r0, r5, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02255200
    // add r0, r5, #0
    // add r0, #0x91
    // ldrb r0, [r0]
    // cmp r0, #1
    // beq _02255184
    // cmp r0, #2
    // beq _02255184
    // add r0, #0xdb
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _022551A6
    // bl sub_020348F0
    // cmp r0, #0
    // bne _022551A6
    // mov r0, #0x74
    // mov r1, #0
    // bl ov03_02253E20
    // ldr r0, _02255274 ; =ov03_02255280
    // bl ov03_02254B4C
    // add r5, #0x95
    // ldrb r1, [r5]
    // mov r0, #4
    // bl sub_02037B8C
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r0, #0x95
    // ldrb r0, [r0]
    // bl sub_0203476C
    // add r1, r5, #0
    // add r1, #0x95
    // ldrb r1, [r1]
    // mov r0, #2
    // bl sub_02037B8C
    // bl ov03_02255B84
    // add r4, r0, #0
    // bl sub_020347A0
    // cmp r4, r0
    // bne _022551F4
    // bl sub_020347A0
    // add r1, r5, #0
    // add r1, #0x90
    // strb r0, [r1]
    // bl ov03_02255B84
    // cmp r0, #2
    // ble _022551E4
    // ldr r0, _02255278 ; =ov03_02255388
    // bl ov03_02254B4C
    // pop {r4, r5, r6, pc}
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov03_0225574C
    // add r0, r5, #0
    // bl ov03_022557CC
    // pop {r4, r5, r6, pc}
    // bl ov03_02254BEC
    // ldr r0, _0225527C ; =ov03_0225530C
    // bl ov03_02254B4C
    // pop {r4, r5, r6, pc}
    // cmp r0, #1
    // bne _0225526E
    // add r0, r5, #0
    // add r0, #0x91
    // ldrb r0, [r0]
    // cmp r0, #8
    // beq _02255212
    // cmp r0, #0x28
    // bne _02255250
    // mov r5, #1
    // bl ov03_02255B84
    // cmp r0, #1
    // ble _02255244
    // mov r4, #5
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #0
    // beq _0225523A
    // add r0, r5, #0
    // bl sub_020346E8
    // lsl r1, r5, #0x18
    // add r0, r4, #0
    // lsr r1, r1, #0x18
    // bl sub_02037B8C
    // add r5, r5, #1
    // bl ov03_02255B84
    // cmp r5, r0
    // blt _0225521E
    // bl ov03_02254BEC
    // ldr r0, _0225527C ; =ov03_0225530C
    // bl ov03_02254B4C
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r0, #0x95
    // ldrb r0, [r0]
    // bl sub_020346E8
    // add r5, #0x95
    // ldrb r1, [r5]
    // mov r0, #3
    // bl sub_02037B8C
    // bl ov03_02254BEC
    // ldr r0, _0225527C ; =ov03_0225530C
    // bl ov03_02254B4C
    // pop {r4, r5, r6, pc}
    // _02255270: .word ov03_022552C8
    // _02255274: .word ov03_02255280
    // _02255278: .word ov03_02255388
    // _0225527C: .word ov03_0225530C
    // TODO: decompile
}



void ov03_02255280(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _022552C0 ; =ov03_022598A0
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _022552BE
    // ldr r0, _022552C4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _022552A8
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _022552BE
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // bl ov03_02254B44
    // ldr r0, _022552C0 ; =ov03_022598A0
    // mov r1, #4
    // ldr r0, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // pop {r3, r4, r5, pc}
    // _022552C0: .word ov03_022598A0
    // _022552C4: .word gSystem
    // TODO: decompile
}



void ov03_022552C8(void) {
    // push {r3, lr}
    // add r0, r1, #0
    // bl ov03_02254C9C
    // ldr r0, _02255300 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _022552FC
    // ldr r0, _02255304 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _022552F2
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _022552FC
    // bl ov03_02254BEC
    // ldr r0, _02255308 ; =ov03_0225530C
    // bl ov03_02254B4C
    // pop {r3, pc}
    // nop
    // _02255300: .word ov03_022598A0
    // _02255304: .word gSystem
    // _02255308: .word ov03_0225530C
    // TODO: decompile
}



void ov03_0225530C(void) {
    // push {r3, lr}
    // add r0, r1, #0
    // bl ov03_02254C9C
    // ldr r0, _02255374 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02255370
    // ldr r0, _02255378 ; =ov03_02254E70
    // bl ov03_02254B4C
    // bl ov03_02255B84
    // cmp r0, #2
    // ble _02255340
    // ldr r0, _02255374 ; =ov03_022598A0
    // ldr r2, _0225537C ; =ov03_0225913C
    // ldr r1, [r0]
    // add r1, #0x9c
    // str r2, [r1]
    // mov r1, #2
    // b _0225534C
    // ldr r0, _02255374 ; =ov03_022598A0
    // ldr r2, _02255380 ; =ov03_02259130
    // ldr r1, [r0]
    // add r1, #0x9c
    // str r2, [r1]
    // mov r1, #1
    // ldr r0, [r0]
    // ldr r2, _02255384 ; =0x0000FFFF
    // add r0, #0xa0
    // strb r1, [r0]
    // ldr r0, _02255374 ; =ov03_022598A0
    // ldr r1, [r0]
    // add r1, #0xa2
    // strh r2, [r1]
    // ldr r1, [r0]
    // mov r2, #0
    // add r1, #0xa1
    // strb r2, [r1]
    // ldr r2, [r0]
    // mov r1, #7
    // ldr r0, [r2, #0x68]
    // add r2, #0x9c
    // bl ov01_021F6A9C
    // pop {r3, pc}
    // nop
    // _02255374: .word ov03_022598A0
    // _02255378: .word ov03_02254E70
    // _0225537C: .word ov03_0225913C
    // _02255380: .word ov03_02259130
    // _02255384: .word 0x0000FFFF
    // TODO: decompile
}



void ov03_02255388(void) {
    // push {r3, r4, lr}
    // sub sp, #0x54
    // ldr r3, _022553C0 ; =ov03_022591D6
    // add r4, r1, #0
    // add r2, sp, #0
    // mov r1, #0x29
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _02255394
    // add r0, r4, #0
    // bl ov03_02254C9C
    // add r4, #0x91
    // ldrb r0, [r4]
    // lsl r1, r0, #1
    // add r0, sp, #0
    // ldrh r0, [r0, r1]
    // mov r1, #0
    // bl ov03_02253E20
    // ldr r0, _022553C4 ; =ov03_022553C8
    // bl ov03_02254B4C
    // add sp, #0x54
    // pop {r3, r4, pc}
    // _022553C0: .word ov03_022591D6
    // _022553C4: .word ov03_022553C8
    // TODO: decompile
}



void ov03_022553C8(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // bl ov03_02254C9C
    // mov r0, #0
    // bl sub_02037EC0
    // ldr r0, [r4, #0x5c]
    // bl ListMenu_ProcessInput
    // ldr r0, _022553FC ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _022553FA
    // add r0, r4, #0
    // bl ov03_02255C84
    // ldr r0, _02255400 ; =ov03_02255404
    // bl ov03_02254B4C
    // pop {r4, pc}
    // _022553FC: .word ov03_022598A0
    // _02255400: .word ov03_02255404
    // TODO: decompile
}



void ov03_02255404(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov03_02254C9C
    // add r0, r4, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0225542C
    // add r0, r4, #0
    // bl ov03_02255CA0
    // cmp r0, #1
    // bne _022554D0
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0xa8
    // str r1, [r0]
    // add r0, r4, #0
    // bl ov03_02255CD0
    // cmp r0, #0
    // beq _022554D0
    // bl sub_02037700
    // cmp r0, #0
    // bne _0225544C
    // bl sub_02037454
    // add r1, r4, #0
    // add r1, #0x90
    // ldrb r1, [r1]
    // cmp r1, r0
    // beq _0225545A
    // add r0, r4, #0
    // bl ov03_02255CE4
    // ldr r0, _022554D4 ; =ov03_022554E0
    // bl ov03_02254B4C
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x68]
    // bl ov01_021F6AEC
    // cmp r0, #6
    // bne _022554D0
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _022554B0
    // add r4, #0x91
    // ldrb r0, [r4]
    // cmp r0, #8
    // beq _0225547A
    // cmp r0, #0x28
    // bne _022554A2
    // mov r4, #1
    // bl sub_02037454
    // cmp r0, #1
    // ble _022554A2
    // lsl r0, r4, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #0
    // bne _02255498
    // ldr r0, _022554D4 ; =ov03_022554E0
    // bl ov03_02254B4C
    // pop {r3, r4, r5, pc}
    // add r4, r4, #1
    // bl sub_02037454
    // cmp r4, r0
    // blt _02255484
    // mov r0, #0xa
    // bl sub_02037AC0
    // ldr r0, _022554D8 ; =ov03_022556BC
    // bl ov03_02254B4C
    // pop {r3, r4, r5, pc}
    // cmp r0, #1
    // bne _022554D0
    // mov r0, #1
    // bl sub_02037EC0
    // bl ov03_02254B44
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // ldr r0, _022554DC ; =ov03_022598A0
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _022554D4: .word ov03_022554E0
    // _022554D8: .word ov03_022556BC
    // _022554DC: .word ov03_022598A0
    // TODO: decompile
}



void ov03_022554E0(void) {
    // push {r4, r5, lr}
    // sub sp, #0x54
    // ldr r5, _02255540 ; =ov03_022592CC
    // add r4, r1, #0
    // add r3, sp, #0
    // mov r2, #0x29
    // ldrh r1, [r5]
    // add r5, r5, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _022554EC
    // add r1, r4, #0
    // bl ov03_0225574C
    // ldr r0, _02255544 ; =ov03_022598A0
    // ldr r1, [r0]
    // add r0, r1, #0
    // add r0, #0x91
    // ldrb r0, [r0]
    // cmp r0, #8
    // bne _0225551A
    // add r1, #0x92
    // ldrb r0, [r1]
    // mov r1, #0
    // add r0, #0x89
    // bl ov03_02253E20
    // b _0225552C
    // add r0, r4, #0
    // add r0, #0x91
    // ldrb r0, [r0]
    // lsl r1, r0, #1
    // add r0, sp, #0
    // ldrh r0, [r0, r1]
    // mov r1, #0
    // bl ov03_02253E20
    // bl sub_02058284
    // ldr r0, _02255548 ; =ov03_0225554C
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // add sp, #0x54
    // pop {r4, r5, pc}
    // nop
    // _02255540: .word ov03_022592CC
    // _02255544: .word ov03_022598A0
    // _02255548: .word ov03_0225554C
    // TODO: decompile
}



void ov03_0225554C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02255584 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02255582
    // ldr r0, _02255588 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _02255572
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _02255582
    // ldr r0, _02255584 ; =ov03_022598A0
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // add r0, r4, #0
    // bl SysTask_Destroy
    // pop {r4, pc}
    // _02255584: .word ov03_022598A0
    // _02255588: .word gSystem
    // TODO: decompile
}



void ov03_0225558C(void) {
    // push {r4, r5, lr}
    // sub sp, #0x54
    // ldr r3, _022555E8 ; =ov03_022593C2
    // add r4, r1, #0
    // add r5, r0, #0
    // add r2, sp, #0
    // mov r1, #0x29
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _0225559A
    // add r0, r4, #0
    // bl ov03_02254C9C
    // bl sub_020347A0
    // cmp r0, #1
    // ble _022555CE
    // add r4, #0x91
    // ldrb r0, [r4]
    // lsl r1, r0, #1
    // add r0, sp, #0
    // ldrh r0, [r0, r1]
    // mov r1, #0
    // bl ov03_02253E20
    // ldr r0, _022555EC ; =ov03_022555F4
    // bl ov03_02254B4C
    // add sp, #0x54
    // pop {r4, r5, pc}
    // bl ov03_02254B44
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // ldr r0, _022555F0 ; =ov03_022598A0
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // add sp, #0x54
    // pop {r4, r5, pc}
    // _022555E8: .word ov03_022593C2
    // _022555EC: .word ov03_022555F4
    // _022555F0: .word ov03_022598A0
    // TODO: decompile
}



void ov03_022555F4(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // bl ov03_02254C9C
    // ldr r0, [r4, #0x5c]
    // bl ListMenu_ProcessInput
    // ldr r0, _02255624 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02255620
    // add r0, r4, #0
    // bl ov03_02255C84
    // ldr r0, _02255628 ; =ov03_0225562C
    // bl ov03_02254B4C
    // pop {r4, pc}
    // nop
    // _02255624: .word ov03_022598A0
    // _02255628: .word ov03_0225562C
    // TODO: decompile
}



void ov03_0225562C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov03_02254C9C
    // add r0, r4, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02255654
    // add r0, r4, #0
    // bl ov03_02255CA0
    // cmp r0, #1
    // bne _022556B2
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0xa8
    // str r1, [r0]
    // add r0, r4, #0
    // bl ov03_02255CD0
    // cmp r0, #0
    // beq _022556B2
    // bl sub_02037700
    // cmp r0, #0
    // beq _02255678
    // add r0, r4, #0
    // bl ov03_02255CE4
    // bl ov03_02254BEC
    // ldr r0, _022556B4 ; =ov03_0225530C
    // bl ov03_02254B4C
    // pop {r3, r4, r5, pc}
    // ldr r0, [r4, #0x68]
    // bl ov01_021F6AEC
    // cmp r0, #6
    // bne _022556B2
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _022556A4
    // bl ov03_02254B44
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // ldr r0, _022556B8 ; =ov03_022598A0
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // pop {r3, r4, r5, pc}
    // cmp r0, #1
    // bne _022556B2
    // bl ov03_02254BEC
    // ldr r0, _022556B4 ; =ov03_0225530C
    // bl ov03_02254B4C
    // pop {r3, r4, r5, pc}
    // _022556B4: .word ov03_0225530C
    // _022556B8: .word ov03_022598A0
    // TODO: decompile
}



void ov03_022556BC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02037700
    // cmp r0, #0
    // bne _022556D8
    // bl sub_02037454
    // add r1, r4, #0
    // add r1, #0x90
    // ldrb r1, [r1]
    // cmp r1, r0
    // beq _022556E0
    // ldr r0, _02255710 ; =ov03_022554E0
    // bl ov03_02254B4C
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov03_02254C9C
    // ldr r0, [r4, #0x5c]
    // bl ListMenu_ProcessInput
    // mov r0, #0xa
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0225570C
    // bl sub_02037A10
    // cmp r0, #0
    // beq _0225570C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225574C
    // add r0, r4, #0
    // bl ov03_02255B44
    // pop {r3, r4, r5, pc}
    // nop
    // _02255710: .word ov03_022554E0
    // TODO: decompile
}



void ov03_02255714(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // bl ov03_02254C9C
    // ldr r0, [r4, #0x5c]
    // bl ListMenu_ProcessInput
    // ldr r0, _02255744 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02255740
    // add r0, r4, #0
    // bl ov03_02255C84
    // ldr r0, _02255748 ; =ov03_02255078
    // bl ov03_02254B4C
    // pop {r4, pc}
    // nop
    // _02255744: .word ov03_022598A0
    // _02255748: .word ov03_02255078
    // TODO: decompile
}



void ov03_0225574C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _022557C8 ; =ov03_022598A0
    // add r4, r1, #0
    // ldr r0, [r0]
    // mov r1, #0xf
    // add r0, #0x40
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0x20
    // mov r1, #0
    // bl sub_0200E5D4
    // ldr r0, [r4, #0x64]
    // bl ListMenuItems_Delete
    // mov r1, #0
    // ldr r0, [r4, #0x5c]
    // add r2, r1, #0
    // bl DestroyListMenu
    // mov r0, #0
    // str r0, [r4, #0x5c]
    // add r0, r4, #0
    // add r0, #0x20
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r4, #0
    // add r0, #0x20
    // bl RemoveWindow
    // add r0, r4, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _022557BC
    // ldr r0, _022557C8 ; =ov03_022598A0
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0x30
    // bl sub_0200E5D4
    // ldr r0, _022557C8 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x30
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _022557C8 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x30
    // bl RemoveWindow
    // mov r0, #0
    // add r4, #0x97
    // strb r0, [r4]
    // cmp r5, #0
    // beq _022557C6
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // _022557C8: .word ov03_022598A0
    // TODO: decompile
}



void ov03_022557CC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #1
    // bl sub_02034818
    // add r2, r0, #0
    // ldr r0, [r4, #0x58]
    // mov r1, #1
    // bl BufferPlayersName
    // mov r0, #0x45
    // mov r1, #1
    // bl ov03_02253E20
    // ldr r0, _022557FC ; =ov03_02254D64
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, _02255800 ; =ov03_02255860
    // bl ov03_02254B4C
    // pop {r4, pc}
    // nop
    // _022557FC: .word ov03_02254D64
    // _02255800: .word ov03_02255860
    // TODO: decompile
}



void ov03_02255804(void) {
    // push {r4, lr}
    // ldr r1, _02255854 ; =ov03_022598A0
    // add r4, r0, #0
    // add r0, #0x8e
    // ldr r1, [r1]
    // ldrh r0, [r0]
    // ldr r1, [r1, #0x7c]
    // bl sub_020351DC
    // ldr r2, _02255854 ; =ov03_022598A0
    // ldr r0, [r4, #0x58]
    // ldr r2, [r2]
    // mov r1, #1
    // ldr r2, [r2, #0x7c]
    // bl BufferPlayersName
    // mov r0, #4
    // mov r1, #1
    // bl ov03_02253E20
    // bl sub_02037454
    // add r1, r4, #0
    // add r1, #0x90
    // strb r0, [r1]
    // ldr r0, _02255858 ; =ov03_02254D64
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r0, _0225585C ; =ov03_02255860
    // bl ov03_02254B4C
    // ldr r0, _02255854 ; =ov03_022598A0
    // mov r1, #0x5a
    // ldr r0, [r0]
    // add r0, #0x96
    // strb r1, [r0]
    // pop {r4, pc}
    // nop
    // _02255854: .word ov03_022598A0
    // _02255858: .word ov03_02254D64
    // _0225585C: .word ov03_02255860
    // TODO: decompile
}



void ov03_02255860(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02255880
    // bl sub_02037454
    // add r4, #0x90
    // ldrb r1, [r4]
    // cmp r1, r0
    // beq _02255880
    // ldr r0, _022558B8 ; =ov03_02255A00
    // bl ov03_02254B4C
    // pop {r4, pc}
    // bl ov03_02255C80
    // cmp r0, #0
    // bne _02255890
    // bl sub_02037700
    // cmp r0, #0
    // beq _02255898
    // ldr r0, _022558B8 ; =ov03_02255A00
    // bl ov03_02254B4C
    // pop {r4, pc}
    // ldr r0, _022558BC ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _022558B4
    // mov r0, #0xa
    // bl sub_02037AC0
    // ldr r0, _022558C0 ; =ov03_022558C4
    // bl ov03_02254B4C
    // pop {r4, pc}
    // nop
    // _022558B8: .word ov03_02255A00
    // _022558BC: .word ov03_022598A0
    // _022558C0: .word ov03_022558C4
    // TODO: decompile
}



void ov03_022558C4(void) {
    // push {r4, r5, lr}
    // sub sp, #0x54
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_0203769C
    // cmp r0, #0
    // bne _022558EA
    // bl sub_02037454
    // add r1, r4, #0
    // add r1, #0x90
    // ldrb r1, [r1]
    // cmp r1, r0
    // beq _022558EA
    // ldr r0, _022559F4 ; =ov03_02255A00
    // bl ov03_02254B4C
    // b _0225597A
    // bl ov03_02255C80
    // cmp r0, #0
    // bne _022558FA
    // bl sub_02037700
    // cmp r0, #0
    // beq _02255904
    // ldr r0, _022559F4 ; =ov03_02255A00
    // bl ov03_02254B4C
    // add sp, #0x54
    // pop {r4, r5, pc}
    // mov r0, #0
    // bl sub_020373B4
    // cmp r0, #0
    // bne _02255918
    // ldr r0, _022559F4 ; =ov03_02255A00
    // bl ov03_02254B4C
    // add sp, #0x54
    // pop {r4, r5, pc}
    // mov r0, #0
    // mov r1, #5
    // bl sub_02037BA0
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _02255932
    // ldr r0, _022559F4 ; =ov03_02255A00
    // bl ov03_02254B4C
    // add sp, #0x54
    // pop {r4, r5, pc}
    // mov r0, #0xa
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0225597A
    // bl sub_02037A10
    // cmp r0, #0
    // beq _0225597A
    // ldr r0, _022559F8 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // bne _02255960
    // ldr r0, _022559F8 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl RemoveTextPrinter
    // bl sub_02037454
    // add r1, r4, #0
    // add r1, #0x90
    // strb r0, [r1]
    // add r0, r4, #0
    // bl ov03_02255B44
    // add r0, r5, #0
    // bl SysTask_Destroy
    // add sp, #0x54
    // pop {r4, r5, pc}
    // ldr r2, _022559F8 ; =ov03_022598A0
    // ldr r0, [r2]
    // add r1, r0, #0
    // add r1, #0x96
    // ldrb r1, [r1]
    // cmp r1, #0
    // beq _022559F0
    // add r1, r0, #0
    // add r1, #0x96
    // ldrb r1, [r1]
    // add r0, #0x96
    // sub r1, r1, #1
    // strb r1, [r0]
    // ldr r0, [r2]
    // add r1, r0, #0
    // add r1, #0x96
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _022559F0
    // ldr r5, _022559FC ; =ov03_02259228
    // add r3, sp, #0
    // mov r2, #0x29
    // ldrh r1, [r5]
    // add r5, r5, #2
    // strh r1, [r3]
    // add r3, r3, #2
    // sub r2, r2, #1
    // bne _022559A6
    // add r1, r0, #0
    // add r1, #0x91
    // ldrb r1, [r1]
    // cmp r1, #8
    // bne _022559CC
    // add r0, #0x92
    // ldrb r0, [r0]
    // mov r1, #0
    // add r0, #0x84
    // bl ov03_02253E20
    // add sp, #0x54
    // pop {r4, r5, pc}
    // cmp r1, #0x28
    // bne _022559E0
    // add r0, #0x92
    // ldrb r0, [r0]
    // mov r1, #0
    // add r0, #0xa0
    // bl ov03_02253E20
    // add sp, #0x54
    // pop {r4, r5, pc}
    // add r4, #0x91
    // ldrb r0, [r4]
    // lsl r1, r0, #1
    // add r0, sp, #0
    // ldrh r0, [r0, r1]
    // mov r1, #0
    // bl ov03_02253E20
    // add sp, #0x54
    // pop {r4, r5, pc}
    // _022559F4: .word ov03_02255A00
    // _022559F8: .word ov03_022598A0
    // _022559FC: .word ov03_02259228
    // TODO: decompile
}



void ov03_02255A00(void) {
    // push {r3, lr}
    // ldr r0, _02255A24 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02255A20
    // mov r0, #0
    // add r1, r0, #0
    // bl ov03_02253E20
    // ldr r0, _02255A28 ; =ov03_02255A2C
    // bl ov03_02254B4C
    // pop {r3, pc}
    // nop
    // _02255A24: .word ov03_022598A0
    // _02255A28: .word ov03_02255A2C
    // TODO: decompile
}



void ov03_02255A2C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02255A68 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02255A66
    // ldr r0, _02255A6C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _02255A52
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _02255A66
    // add r0, r4, #0
    // bl SysTask_Destroy
    // bl ov03_02254B44
    // ldr r0, _02255A68 ; =ov03_022598A0
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // pop {r4, pc}
    // _02255A68: .word ov03_022598A0
    // _02255A6C: .word gSystem
    // TODO: decompile
}



void ov03_02255A70(void) {
    // push {r4, lr}
    // ldr r1, _02255AA8 ; =ov03_022598A0
    // add r4, r0, #0
    // add r0, #0x8e
    // ldr r1, [r1]
    // ldrh r0, [r0]
    // ldr r1, [r1, #0x7c]
    // bl sub_020351DC
    // ldr r2, _02255AA8 ; =ov03_022598A0
    // ldr r0, [r4, #0x58]
    // ldr r2, [r2]
    // mov r1, #1
    // ldr r2, [r2, #0x7c]
    // bl BufferPlayersName
    // mov r0, #5
    // mov r1, #1
    // bl ov03_02253E20
    // bl sub_02058180
    // ldr r0, _02255AAC ; =ov03_02255AB0
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r4, pc}
    // _02255AA8: .word ov03_022598A0
    // _02255AAC: .word ov03_02255AB0
    // TODO: decompile
}



void ov03_02255AB0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02255AD8 ; =ov03_022598A0
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02255AD6
    // bl sub_02058180
    // add r0, r4, #0
    // bl ov03_022542C8
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // _02255AD8: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02255ADC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_02058180
    // mov r4, #0
    // add r0, r4, #0
    // bl sub_020346E8
    // add r4, r4, #1
    // cmp r4, #8
    // blt _02255AE6
    // ldr r0, _02255B00 ; =ov03_02255B04
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, pc}
    // nop
    // _02255B00: .word ov03_02255B04
    // TODO: decompile
}



void ov03_02255B04(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02255B3C ; =ov03_022598A0
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r0, #0x94
    // ldrb r0, [r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _02255B38
    // ldr r0, _02255B40 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _02255B2C
    // bl System_GetTouchNew
    // cmp r0, #1
    // bne _02255B38
    // add r0, r4, #0
    // bl ov03_022542C8
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // nop
    // _02255B3C: .word ov03_022598A0
    // _02255B40: .word gSystem
    // TODO: decompile
}



void ov03_02255B44(void) {
    // push {r3, lr}
    // mov r0, #0
    // bl sub_02037EC0
    // ldr r0, _02255B6C ; =ov03_022598A0
    // mov r1, #2
    // ldr r0, [r0]
    // add r0, #0x88
    // str r1, [r0]
    // mov r0, #1
    // add r1, r0, #0
    // bl sub_020398D4
    // bl sub_02034434
    // mov r0, #1
    // bl sub_020356C0
    // pop {r3, pc}
    // nop
    // _02255B6C: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02255B70(void) {
    // ldr r0, _02255B7C ; =ov03_022598A0
    // ldr r3, _02255B80 ; =sub_0203775C
    // ldr r0, [r0]
    // add r0, #0x91
    // ldrb r0, [r0]
    // bx r3
    // _02255B7C: .word ov03_022598A0
    // _02255B80: .word sub_0203775C
    // TODO: decompile
}



void ov03_02255B84(void) {
    // ldr r0, _02255B90 ; =ov03_022598A0
    // ldr r3, _02255B94 ; =sub_0203774C
    // ldr r0, [r0]
    // add r0, #0x91
    // ldrb r0, [r0]
    // bx r3
    // _02255B90: .word ov03_022598A0
    // _02255B94: .word sub_0203774C
    // TODO: decompile
}



void ov03_02255B98(void) {
    // ldr r0, _02255BAC ; =ov03_022598A0
    // ldr r2, [r0]
    // add r0, r2, #0
    // add r0, #0x92
    // add r2, #0x93
    // ldrb r1, [r0]
    // ldrb r0, [r2]
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bx lr
    // _02255BAC: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02255BB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov03_02253F74
    // ldr r0, _02255BE8 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x91
    // strb r4, [r0]
    // sub r0, r4, #3
    // cmp r0, #1
    // bhi _02255BD2
    // mov r0, #0
    // add r5, #0xa4
    // str r0, [r5]
    // ldr r0, _02255BE8 ; =ov03_022598A0
    // ldr r1, [r0]
    // add r1, #0x92
    // strb r6, [r1]
    // ldr r1, [r0]
    // add r1, #0x93
    // strb r7, [r1]
    // ldr r0, [r0]
    // bl ov03_022540E8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02255BE8: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02255BEC(void) {
    // ldr r0, _02255BF4 ; =ov03_022598A0
    // ldr r3, _02255BF8 ; =ov03_022542C8
    // ldr r0, [r0]
    // bx r3
    // _02255BF4: .word ov03_022598A0
    // _02255BF8: .word ov03_022542C8
    // TODO: decompile
}



void ov03_02255BFC(void) {
}



void ov03_02255C18(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov03_02253F74
    // ldr r0, _02255C50 ; =ov03_022598A0
    // ldr r0, [r0]
    // add r0, #0x91
    // strb r4, [r0]
    // sub r0, r4, #3
    // cmp r0, #1
    // bhi _02255C3A
    // mov r0, #0
    // add r5, #0xa4
    // str r0, [r5]
    // ldr r0, _02255C50 ; =ov03_022598A0
    // ldr r1, [r0]
    // add r1, #0x92
    // strb r6, [r1]
    // ldr r1, [r0]
    // add r1, #0x93
    // strb r7, [r1]
    // ldr r0, [r0]
    // bl ov03_02254B2C
    // pop {r3, r4, r5, r6, r7, pc}
    // _02255C50: .word ov03_022598A0
    // TODO: decompile
}



void ov03_02255C54(void) {
    // ldr r0, _02255C5C ; =ov03_022598A0
    // ldr r3, _02255C60 ; =ov03_02254B58
    // ldr r0, [r0]
    // bx r3
    // _02255C5C: .word ov03_022598A0
    // _02255C60: .word ov03_02254B58
    // TODO: decompile
}



void ov03_02255C64(void) {
}



u8 ov03_02255C80(void) {
}



void ov03_02255C84(void) {
}



void ov03_02255CA0(void) {
    ov01_021F6B00(*((u32*)(r0 + 0x68)));
    ov01_021F6B10(*((u32*)(r5 + 0x68)));
    // add r5, #0xa4
    ov01_021F6ABC(*((u32*)(r5 + 0x68)), 3, 3, r5);
}



void ov03_02255CD0(void) {
}



void ov03_02255CE4(void) {
}



void ov03_02255CF8(void) {
    // add r0, #0x54
    WindowIsInUse();
    // add r0, #0x54
    InitWindow(r5);
    // add r1, #0x54
    sub_0205B514(*((u32*)(*((u32*)(r5 + 0x10)) + 8)), r5, 3);
    Save_PlayerData_GetOptionsAddr(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)));
    // add r0, #0x54
    sub_0205B564(r5, r0);
    // add r0, #0x54
    sub_0205B5A8(r5);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x68)), r4, *((u32*)(r5 + 0x14)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x64)), *((u32*)(r5 + 0x18)), *((u32*)(r5 + 0x14)));
    Save_PlayerData_GetOptionsAddr(*((u32*)(*((u32*)(r5 + 0x10)) + 0xc)));
    // add r0, #0x54
    sub_0205B5B4(r5, *((u32*)(r5 + 0x18)), r0, 1);
    *((u32*)(r5 + 0x74)) = r0;
}



void ov03_02255D68(void) {
    // add r0, #0x54
    ClearFrameAndWindow2(0);
    // add r0, #0x54
    ClearWindowTilemapAndCopyToVram(r4);
    // add r4, #0x54
    RemoveWindow(r4);
}



void ov03_02255D8C(void) {
    sub_0202921C(*((u32*)(*((u32*)(r0 + 0x10)) + 0xc)), *((u32*)(r0 + 0x1c)), 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferString(*((u32*)(r4 + 0x64)), 0, *((u32*)(r4 + 0x1c)), 0);
}



void ov03_02255DB8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // add r4, r5, #0
    // ldr r0, [r0, #0xc]
    // mov r1, #0
    // add r4, #0x34
    // bl Save_LinkBattleRuleset_GetByIndex
    // mov r6, #5
    // cmp r0, #0
    // beq _02255DD4
    // add r6, r6, #1
    // add r0, r4, #0
    // bl WindowIsInUse
    // cmp r0, #0
    // bne _02255E66
    // add r0, r6, #2
    // mov r1, #4
    // bl ListMenuItems_New
    // str r0, [r5, #8]
    // mov r3, #1
    // str r3, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // add r0, r6, #2
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // str r3, [sp, #0x10]
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // ldr r0, [r0, #8]
    // mov r2, #3
    // bl AddWindowParameterized
    // add r0, r5, #0
    // ldr r2, _02255EB4 ; =0x000003D9
    // add r0, #0x34
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #0x68]
    // mov r2, #0x8a
    // mov r3, #0xc
    // bl ListMenuItems_AppendFromMsgData
    // mov r4, #0
    // cmp r6, #0
    // ble _02255E58
    // mov r7, #0x80
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_02255D8C
    // ldr r0, [r5, #0x68]
    // ldr r2, [r5, #0x1c]
    // add r1, r7, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [r5, #0x64]
    // ldr r1, [r5, #0x20]
    // ldr r2, [r5, #0x1c]
    // bl StringExpandPlaceholders
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #0x20]
    // add r2, r4, #0
    // bl ListMenuItems_AddItem
    // add r4, r4, #1
    // cmp r4, r6
    // blt _02255E2C
    // mov r2, #0x81
    // add r3, r2, #0
    // ldr r0, [r5, #8]
    // ldr r1, [r5, #0x68]
    // sub r3, #0x83
    // bl ListMenuItems_AppendFromMsgData
    // ldr r4, _02255EB8 ; =ov03_0225943C
    // add r3, sp, #0x14
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r6, #2
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // add r0, sp, #0x14
    // strh r1, [r0, #0x10]
    // strh r1, [r0, #0x12]
    // ldr r0, [r5, #8]
    // mov r1, #0
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r0, #0x34
    // str r0, [sp, #0x20]
    // add r0, r2, #0
    // add r2, r5, #0
    // str r5, [sp, #0x30]
    // add r2, #0x78
    // ldrh r2, [r2]
    // mov r3, #4
    // bl ListMenuInit
    // str r0, [r5]
    // add r5, #0x34
    // add r0, r5, #0
    // bl CopyWindowToVram
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02255EB4: .word 0x000003D9
    // _02255EB8: .word ov03_0225943C
    // TODO: decompile
}



void ov03_02255EBC(void) {
    DestroyListMenu(*((u32*)r0), 0, 0);
    // add r0, #0x34
    sub_0200E5D4(r4, 1);
    // add r1, #0x38
    // ldrb r1, [r1]
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0x34)), r4);
    // add r0, #0x34
    RemoveWindow(r4);
    ListMenuItems_Delete(*((u32*)(r4 + 8)));
    // str r0, [r4]
}



void ov03_02255EF8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // bl ListMenu_ProcessInput
    // add r4, r0, #0
    // add r2, r5, #0
    // ldr r0, [r5]
    // mov r1, #0
    // add r2, #0x78
    // bl ListMenuGetScrollAndRow
    // add r0, r5, #0
    // add r0, #0x80
    // ldrh r6, [r0]
    // add r1, r5, #0
    // ldr r0, [r5]
    // add r1, #0x80
    // bl ListMenuGetCurrentItemArrayId
    // add r0, r5, #0
    // add r0, #0x80
    // ldrh r0, [r0]
    // cmp r6, r0
    // beq _02255F30
    // ldr r0, _02255F94 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _02255F60
    // add r0, r0, #1
    // cmp r4, r0
    // beq _02255F44
    // cmp r4, #0xc
    // beq _02255F48
    // b _02255F7A
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, _02255F94 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // add r0, #0xa4
    // str r1, [r0]
    // add r0, r5, #0
    // bl ov03_02255EBC
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // ldr r0, _02255F94 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // add r0, #0xa4
    // str r1, [r0]
    // add r0, r5, #0
    // bl ov03_02255EBC
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // ldr r0, _02255F94 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // ldr r0, [r0, #0xc]
    // bl sub_020291E8
    // ldr r1, [r5, #0x10]
    // add r1, #0xa4
    // str r0, [r1]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _02255F94: .word 0x000005DC
    // TODO: decompile
}



void ov03_02255F98(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // mov r0, #3
    // mov r1, #4
    // ldr r4, _0225603C ; =ov03_02259838
    // bl ListMenuItems_New
    // str r0, [r5, #0xc]
    // mov r0, #0xa
    // str r0, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // mov r0, #6
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // ldr r0, _02256040 ; =0x00000201
    // add r1, r5, #0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x10]
    // add r1, #0x44
    // ldr r0, [r0, #8]
    // mov r2, #3
    // mov r3, #0x16
    // bl AddWindowParameterized
    // add r0, r5, #0
    // ldr r2, _02256044 ; =0x000003D9
    // add r0, #0x44
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // mov r6, #0
    // ldr r0, [r5, #0xc]
    // ldr r1, [r5, #0x68]
    // ldr r2, [r4]
    // ldr r3, [r4, #4]
    // bl ListMenuItems_AppendFromMsgData
    // add r6, r6, #1
    // add r4, #8
    // cmp r6, #3
    // blt _02255FDE
    // ldr r4, _02256048 ; =ov03_0225943C
    // add r3, sp, #0x14
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #3
    // add r0, sp, #0x14
    // strh r1, [r0, #0x10]
    // strh r1, [r0, #0x12]
    // ldr r0, [r5, #0xc]
    // mov r1, #0
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r0, #0x44
    // str r0, [sp, #0x20]
    // add r0, r2, #0
    // add r2, r5, #0
    // str r5, [sp, #0x30]
    // add r2, #0x7a
    // ldrh r2, [r2]
    // mov r3, #4
    // bl ListMenuInit
    // str r0, [r5, #4]
    // add r5, #0x44
    // add r0, r5, #0
    // bl CopyWindowToVram
    // add sp, #0x34
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0225603C: .word ov03_02259838
    // _02256040: .word 0x00000201
    // _02256044: .word 0x000003D9
    // _02256048: .word ov03_0225943C
    // TODO: decompile
}



void ov03_0225604C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #4]
    // bl ListMenu_ProcessInput
    // add r4, r0, #0
    // add r2, r5, #0
    // ldr r0, [r5, #4]
    // mov r1, #0
    // add r2, #0x7a
    // bl ListMenuGetScrollAndRow
    // add r0, r5, #0
    // add r0, #0x82
    // ldrh r6, [r0]
    // add r1, r5, #0
    // ldr r0, [r5, #4]
    // add r1, #0x82
    // bl ListMenuGetCurrentItemArrayId
    // add r0, r5, #0
    // add r0, #0x82
    // ldrh r0, [r0]
    // cmp r6, r0
    // beq _02256084
    // ldr r0, _022560E8 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _02256096
    // add r0, r0, #1
    // cmp r4, r0
    // bne _022560A2
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, _022560E8 ; =0x000005DC
    // bl PlaySE
    // mov r4, #0
    // mvn r4, r4
    // b _022560AE
    // ldr r0, _022560E8 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // bl ov03_02255EBC
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _022560E4
    // mov r1, #0
    // add r2, r1, #0
    // bl DestroyListMenu
    // add r0, r5, #0
    // add r0, #0x44
    // mov r1, #1
    // bl sub_0200E5D4
    // add r1, r5, #0
    // add r1, #0x48
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x44]
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r5, #0
    // add r0, #0x44
    // bl RemoveWindow
    // ldr r0, [r5, #0xc]
    // bl ListMenuItems_Delete
    // mov r0, #0
    // str r0, [r5, #4]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _022560E8: .word 0x000005DC
    // TODO: decompile
}



void ov03_022560EC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // str r0, [sp, #0x14]
    // ldr r6, [r0, #0x64]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xb6
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x30]
    // mov r0, #0xb4
    // mov r1, #4
    // bl String_New
    // str r0, [sp, #0x2c]
    // mov r0, #0xb4
    // mov r1, #4
    // bl String_New
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #0x14]
    // mov r2, #3
    // str r0, [sp, #0x24]
    // add r0, #0x24
    // str r0, [sp, #0x24]
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x13
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // ldr r0, [r0, #0x10]
    // mov r3, #4
    // ldr r0, [r0, #8]
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x24]
    // ldr r2, _022563B8 ; =0x000003D9
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // ldr r0, [sp, #0x24]
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // add r1, r0, #0
    // add r1, #0x78
    // ldrh r1, [r1]
    // sub r1, r1, #1
    // bl ov03_02255D8C
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x2c]
    // mov r1, #0x71
    // bl ReadMsgDataIntoString
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x2c]
    // add r0, r6, #0
    // bl StringExpandPlaceholders
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    // mov r3, #0x39
    // str r1, [sp, #8]
    // bl AddTextPrinterParameterized
    // mov r5, #0
    // mov r4, #0x10
    // mov r7, #0xff
    // add r1, r5, #0
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x2c]
    // add r1, #0x5d
    // bl ReadMsgDataIntoString
    // str r4, [sp]
    // str r7, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x2c]
    // mov r1, #0
    // mov r3, #2
    // bl AddTextPrinterParameterized
    // add r5, r5, #1
    // add r4, #0xf
    // cmp r5, #9
    // blt _02256192
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, _022563BC ; =ov03_0225982C
    // ldr r7, _022563C0 ; =ov03_02259820
    // str r0, [sp, #0x20]
    // mov r0, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x14]
    // ldrb r1, [r7]
    // ldr r0, [r0, #0x10]
    // add r0, #0xa4
    // ldr r0, [r0]
    // bl LinkBattleRuleset_GetRuleValue
    // add r4, r0, #0
    // ldr r0, [sp, #0x20]
    // ldrb r5, [r0]
    // ldrb r0, [r7]
    // cmp r0, #0xb
    // bls _022561E4
    // b _02256348
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022561F0: ; jump table
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #1
    // bl BufferIntegerAsString
    // b _02256348
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // b _02256348
    // cmp r4, #0
    // bne _0225623A
    // mov r5, #0x72
    // b _02256348
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // b _02256348
    // cmp r4, #0
    // ldr r0, _022563C4 ; =0x00002710
    // blt _0225626A
    // mul r0, r4
    // mov r1, #0xfe
    // bl _s32_div_f
    // add r0, r0, #5
    // mov r1, #0xa
    // bl _s32_div_f
    // add r4, r0, #0
    // b _0225627E
    // neg r1, r4
    // mul r0, r1
    // mov r1, #0xfe
    // bl _s32_div_f
    // add r0, r0, #5
    // mov r1, #0xa
    // bl _s32_div_f
    // neg r4, r0
    // add r0, r4, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // bl abs
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // mov r3, #2
    // bl BufferIntegerAsString
    // add r0, r4, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // add r0, r1, #0
    // bl abs
    // add r2, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #1
    // mov r3, #2
    // bl BufferIntegerAsString
    // cmp r4, #0
    // bne _022562C8
    // mov r5, #0x72
    // b _02256348
    // ble _02256348
    // add r5, r5, #1
    // b _02256348
    // cmp r4, #0
    // ldr r0, _022563C8 ; =0x00035D2E
    // blt _022562E6
    // add r1, r4, #0
    // mul r1, r0
    // ldr r0, _022563CC ; =0x0000C350
    // add r0, r1, r0
    // ldr r1, _022563D0 ; =0x000186A0
    // bl _s32_div_f
    // add r4, r0, #0
    // b _022562F8
    // neg r1, r4
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, _022563CC ; =0x0000C350
    // ldr r1, _022563D0 ; =0x000186A0
    // add r0, r2, r0
    // bl _s32_div_f
    // neg r4, r0
    // add r0, r4, #0
    // bl abs
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // cmp r4, #0
    // bne _0225631A
    // mov r5, #0x72
    // b _02256348
    // ble _02256348
    // add r5, r5, #1
    // b _02256348
    // ldr r0, [sp, #0x14]
    // mov r1, #0xd
    // ldr r0, [r0, #0x10]
    // add r0, #0xa4
    // ldr r0, [r0]
    // bl LinkBattleRuleset_GetRuleValue
    // mov r1, #2
    // lsl r1, r1, #0xe
    // cmp r0, r1
    // bne _0225633A
    // mov r5, #0x73
    // b _02256348
    // cmp r4, #0
    // bne _02256348
    // add r5, r5, #1
    // b _02256348
    // cmp r4, #0
    // bne _02256348
    // add r5, r5, #1
    // ldr r0, [sp, #0x30]
    // ldr r2, [sp, #0x2c]
    // add r1, r5, #0
    // bl ReadMsgDataIntoString
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x2c]
    // add r0, r6, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // ldr r1, [sp, #0x28]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r4, r0, #0
    // ldr r0, [sp, #0x1c]
    // mov r3, #0xbf
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    // mov r1, #0
    // sub r3, r3, r4
    // bl AddTextPrinterParameterized
    // ldr r0, [sp, #0x20]
    // add r7, r7, #1
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x1c]
    // add r0, #0xf
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #0x18]
    // cmp r0, #9
    // bge _0225639C
    // b _022561C8
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // ldr r0, [sp, #0x28]
    // bl String_Delete
    // ldr r0, [sp, #0x30]
    // bl DestroyMsgData
    // ldr r0, [sp, #0x24]
    // bl CopyWindowToVram
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // _022563B8: .word 0x000003D9
    // _022563BC: .word ov03_0225982C
    // _022563C0: .word ov03_02259820
    // _022563C4: .word 0x00002710
    // _022563C8: .word 0x00035D2E
    // _022563CC: .word 0x0000C350
    // _022563D0: .word 0x000186A0
    // TODO: decompile
}



void ov03_022563D4(void) {
}



void ov03_022563F8(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // ldr r0, [r0, #0xc]
    // bl SaveArray_Party_Get
    // add r1, r0, #0
    // ldr r0, [r4, #0x10]
    // ldr r2, [r4, #0x6c]
    // add r0, #0xa4
    // ldr r0, [r0]
    // bl sub_02074CD0
    // cmp r0, #0
    // beq _02256422
    // cmp r0, #1
    // beq _02256462
    // cmp r0, #4
    // beq _02256428
    // b _02256462
    // add sp, #8
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, _022564A4 ; =0x000005F3
    // bl PlaySE
    // add r1, r4, #0
    // add r1, #0x78
    // ldrh r1, [r1]
    // add r0, r4, #0
    // sub r1, r1, #1
    // bl ov03_02255D8C
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // add r0, #0xa4
    // ldr r0, [r0]
    // bl LinkBattleRuleset_GetRuleValue
    // mov r1, #1
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r2, r0, #0
    // ldr r0, [r4, #0x64]
    // add r3, r1, #0
    // bl BufferIntegerAsString
    // add r0, r4, #0
    // mov r1, #0x7a
    // bl ov03_02255CF8
    // b _0225649C
    // ldr r0, _022564A4 ; =0x000005F3
    // bl PlaySE
    // add r1, r4, #0
    // add r1, #0x78
    // ldrh r1, [r1]
    // add r0, r4, #0
    // sub r1, r1, #1
    // bl ov03_02255D8C
    // ldr r0, [r4, #0x10]
    // mov r1, #3
    // add r0, #0xa4
    // ldr r0, [r0]
    // bl LinkBattleRuleset_GetRuleValue
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // ldr r0, [r4, #0x64]
    // mov r3, #3
    // bl BufferIntegerAsString
    // add r0, r4, #0
    // mov r1, #0x88
    // bl ov03_02255CF8
    // mov r0, #0
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _022564A4: .word 0x000005F3
    // TODO: decompile
}



void ov03_022564A8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r0, r4, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r1, [r4, #0x7c]
    // cmp r1, #0xb
    // bls _022564C0
    // b _02256636
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022564CC: ; jump table
    // mov r1, #0x78
    // bl ov03_02255CF8
    // ldr r0, [r4, #0x7c]
    // add r0, r0, #1
    // str r0, [r4, #0x7c]
    // b _0225663A
    // ldr r0, [r4, #0x74]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl IsPrintFinished
    // cmp r0, #0
    // bne _02256502
    // b _0225663A
    // add r0, r4, #0
    // bl ov03_02255DB8
    // ldr r0, [r4, #0x7c]
    // add r0, r0, #1
    // str r0, [r4, #0x7c]
    // b _0225663A
    // bl ov03_02255EF8
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02256528
    // ldr r0, [r4, #0x70]
    // mov r1, #2
    // strh r1, [r0]
    // mov r0, #0xb
    // str r0, [r4, #0x7c]
    // b _0225663A
    // cmp r0, #2
    // bne _02256538
    // ldr r0, [r4, #0x70]
    // mov r1, #3
    // strh r1, [r0]
    // mov r0, #0xb
    // str r0, [r4, #0x7c]
    // b _0225663A
    // cmp r0, #1
    // bne _0225663A
    // mov r0, #3
    // str r0, [r4, #0x7c]
    // b _0225663A
    // bl ov03_02255F98
    // ldr r0, [r4, #0x7c]
    // add r0, r0, #1
    // str r0, [r4, #0x7c]
    // b _0225663A
    // bl ov03_0225604C
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // bne _02256560
    // mov r0, #2
    // str r0, [r4, #0x7c]
    // b _0225663A
    // cmp r0, #1
    // bne _0225656A
    // mov r0, #5
    // str r0, [r4, #0x7c]
    // b _0225663A
    // cmp r0, #2
    // bne _0225663A
    // mov r0, #7
    // str r0, [r4, #0x7c]
    // b _0225663A
    // bl ov03_022563F8
    // cmp r0, #0
    // beq _02256588
    // ldr r0, [r4, #0x70]
    // mov r1, #1
    // strh r1, [r0]
    // mov r0, #0xb
    // str r0, [r4, #0x7c]
    // b _0225663A
    // mov r0, #6
    // str r0, [r4, #0x7c]
    // b _0225663A
    // ldr r0, [r4, #0x74]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _0225663A
    // ldr r0, _02256640 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _0225663A
    // mov r0, #0
    // str r0, [r4, #0x7c]
    // b _0225663A
    // mov r1, #1
    // bl ov03_02255D68
    // add r0, r4, #0
    // bl ov03_022560EC
    // ldr r0, [r4, #0x7c]
    // add r0, r0, #1
    // str r0, [r4, #0x7c]
    // b _0225663A
    // ldr r1, _02256640 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #3
    // tst r1, r2
    // beq _0225663A
    // bl ov03_022563D4
    // add r0, r4, #0
    // mov r1, #0x78
    // bl ov03_02255CF8
    // add r0, r4, #0
    // bl ov03_02255DB8
    // mov r0, #9
    // str r0, [r4, #0x7c]
    // b _0225663A
    // ldr r0, [r4, #0x74]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl IsPrintFinished
    // cmp r0, #0
    // beq _0225663A
    // mov r0, #3
    // str r0, [r4, #0x7c]
    // b _0225663A
    // bl ov03_02255EBC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_02255D68
    // ldr r0, [r4, #0x64]
    // bl MessageFormat_Delete
    // ldr r0, [r4, #0x68]
    // bl DestroyMsgData
    // ldr r0, [r4, #0x14]
    // bl String_Delete
    // ldr r0, [r4, #0x18]
    // bl String_Delete
    // ldr r0, [r4, #0x1c]
    // bl String_Delete
    // ldr r0, [r4, #0x20]
    // bl String_Delete
    // ldr r0, [r4, #0x6c]
    // bl PokedexData_UnloadAndDelete
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02256640: .word gSystem
    // TODO: decompile
}



void ov03_02256644(void) {
    Heap_AllocAtEnd(0xb, 0x84);
    MI_CpuFill8(0, 0x84);
    *((u32*)(r4 + 0x7c)) = 0;
    *((u32*)(r4 + 0x10)) = r5;
    // add r5, #0xa4
    // str r0, [r5]
    MessageFormat_New(4);
    *((u32*)(r4 + 0x64)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0x2e, 4);
    *((u32*)(r4 + 0x68)) = r0;
    String_New(0xb4, 4);
    *((u32*)(r4 + 0x14)) = r0;
    String_New(0xb4, 4);
    *((u32*)(r4 + 0x18)) = r0;
    String_New(0xb4, 4);
    *((u32*)(r4 + 0x1c)) = r0;
    String_New(0xb4, 4);
    *((u32*)(r4 + 0x20)) = r0;
    PokedexData_CreateAndLoad(0xb);
    *((u32*)(r4 + 0x6c)) = r0;
}



void ov03_022566B0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl TaskManager_GetFieldSystem
    // bl ov03_02256644
    // add r2, r0, #0
    // ldr r1, _022566CC ; =ov03_022564A8
    // add r0, r5, #0
    // str r4, [r2, #0x70]
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // _022566CC: .word ov03_022564A8
    // TODO: decompile
}



void ov03_022566D0(void) {
    String_New(0xb4, 4);
    sub_0202921C(*((u32*)(r5 + 0xc)), r7, r0, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    BufferString(r6, 0, r4, 0);
    String_Delete(r4);
}



void ov03_02256710(void) {
}



void ov03_02256730(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // str r0, [sp, #0x14]
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x13
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // add r4, r2, #0
    // ldr r0, [r0, #8]
    // mov r2, #3
    // mov r3, #4
    // str r1, [sp, #0x18]
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x14]
    // ldr r2, _02256A10 ; =0x000003D9
    // ldr r0, [r0, #8]
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // ldr r0, [sp, #0x18]
    // ldr r2, _02256A10 ; =0x000003D9
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // ldr r0, [sp, #0x18]
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xb6
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x30]
    // mov r0, #4
    // bl MessageFormat_New
    // add r6, r0, #0
    // mov r0, #0xb4
    // mov r1, #4
    // bl String_New
    // add r7, r0, #0
    // mov r0, #0xb4
    // mov r1, #4
    // bl String_New
    // str r0, [sp, #0x2c]
    // ldr r0, [sp, #0x14]
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov03_022566D0
    // ldr r0, [sp, #0x30]
    // mov r1, #0x71
    // add r2, r7, #0
    // bl ReadMsgDataIntoString
    // ldr r1, [sp, #0x2c]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // mov r3, #0x39
    // str r1, [sp, #8]
    // bl AddTextPrinterParameterized
    // mov r0, #0
    // str r0, [sp, #0x28]
    // mov r0, #0x10
    // str r0, [sp, #0x1c]
    // ldr r0, _02256A14 ; =ov03_02259820
    // str r0, [sp, #0x24]
    // ldr r0, _02256A18 ; =ov03_0225982C
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x28]
    // ldr r0, [sp, #0x30]
    // add r1, #0x5d
    // add r2, r7, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [sp, #0x1c]
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // add r2, r7, #0
    // mov r3, #2
    // bl AddTextPrinterParameterized
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // add r0, #0xa4
    // ldrb r1, [r1]
    // ldr r0, [r0]
    // bl LinkBattleRuleset_GetRuleValue
    // add r4, r0, #0
    // ldr r0, [sp, #0x20]
    // ldrb r5, [r0]
    // ldr r0, [sp, #0x24]
    // ldrb r0, [r0]
    // cmp r0, #0xb
    // bls _02256832
    // b _02256994
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0225683E: ; jump table
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #1
    // bl BufferIntegerAsString
    // b _02256994
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // b _02256994
    // cmp r4, #0
    // bne _02256888
    // mov r5, #0x72
    // b _02256994
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // add r2, r4, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // b _02256994
    // cmp r4, #0
    // ldr r0, _02256A1C ; =0x00002710
    // blt _022568B8
    // mul r0, r4
    // mov r1, #0xfe
    // bl _s32_div_f
    // add r0, r0, #5
    // mov r1, #0xa
    // bl _s32_div_f
    // add r4, r0, #0
    // b _022568CC
    // neg r1, r4
    // mul r0, r1
    // mov r1, #0xfe
    // bl _s32_div_f
    // add r0, r0, #5
    // mov r1, #0xa
    // bl _s32_div_f
    // neg r4, r0
    // add r0, r4, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // bl abs
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // mov r3, #2
    // bl BufferIntegerAsString
    // add r0, r4, #0
    // mov r1, #0xc
    // bl _s32_div_f
    // add r0, r1, #0
    // bl abs
    // add r2, r0, #0
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #1
    // mov r3, #2
    // bl BufferIntegerAsString
    // cmp r4, #0
    // bne _02256916
    // mov r5, #0x72
    // b _02256994
    // ble _02256994
    // add r5, r5, #1
    // b _02256994
    // cmp r4, #0
    // ldr r0, _02256A20 ; =0x00035D2E
    // blt _02256934
    // add r1, r4, #0
    // mul r1, r0
    // ldr r0, _02256A24 ; =0x0000C350
    // add r0, r1, r0
    // ldr r1, _02256A28 ; =0x000186A0
    // bl _s32_div_f
    // add r4, r0, #0
    // b _02256946
    // neg r1, r4
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, _02256A24 ; =0x0000C350
    // ldr r1, _02256A28 ; =0x000186A0
    // add r0, r2, r0
    // bl _s32_div_f
    // neg r4, r0
    // add r0, r4, #0
    // bl abs
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // cmp r4, #0
    // bne _02256968
    // mov r5, #0x72
    // b _02256994
    // ble _02256994
    // add r5, r5, #1
    // b _02256994
    // ldr r0, [sp, #0x14]
    // mov r1, #0xd
    // add r0, #0xa4
    // ldr r0, [r0]
    // bl LinkBattleRuleset_GetRuleValue
    // mov r1, #2
    // lsl r1, r1, #0xe
    // cmp r0, r1
    // bne _02256986
    // mov r5, #0x73
    // b _02256994
    // cmp r4, #0
    // bne _02256994
    // add r5, r5, #1
    // b _02256994
    // cmp r4, #0
    // bne _02256994
    // add r5, r5, #1
    // ldr r0, [sp, #0x30]
    // add r1, r5, #0
    // add r2, r7, #0
    // bl ReadMsgDataIntoString
    // ldr r1, [sp, #0x2c]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // ldr r1, [sp, #0x2c]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // add r4, r0, #0
    // ldr r0, [sp, #0x1c]
    // mov r3, #0xbf
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x18]
    // ldr r2, [sp, #0x2c]
    // mov r1, #0
    // sub r3, r3, r4
    // bl AddTextPrinterParameterized
    // ldr r0, [sp, #0x1c]
    // add r0, #0xf
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x24]
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // add r0, r0, #1
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #9
    // bge _022569EC
    // b _022567F0
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // ldr r0, [sp, #0x30]
    // bl DestroyMsgData
    // ldr r0, [sp, #0x18]
    // bl CopyWindowToVram
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02256A10: .word 0x000003D9
    // _02256A14: .word ov03_02259820
    // _02256A18: .word ov03_0225982C
    // _02256A1C: .word 0x00002710
    // _02256A20: .word 0x00035D2E
    // _02256A24: .word 0x0000C350
    // _02256A28: .word 0x000186A0
    // TODO: decompile
}



u16 ov03_02256A2C(void) {
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    SaveArray_Party_Get(*((u32*)(r0 + 0xc)));
    PokedexData_CreateAndLoad(0xb);
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    Party_GetCount(r6);
    Party_GetMonByIndex(r6, 0);
    GetMonData(0x4c, 0);
    // ldr r0, [sp, #8]
    // ldr r2, [sp, #0x14]
    // add r0, #0xa4
    sub_02074CD0(*((u32*)r0), r6);
    // ldr r0, [sp, #0x14]
    PokedexData_UnloadAndDelete();
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02256AAA: ; jump table
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    ov03_022566D0(0);
    // ldr r0, [sp, #8]
    // add r0, #0xa4
    // str r0, [sp, #8]
    LinkBattleRuleset_GetRuleValue(*((u32*)r0), 1);
    // str r1, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    BufferIntegerAsString(1, r0, 1);
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    ov03_022566D0(1);
    // str r1, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    BufferIntegerAsString(1, 2, 1);
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    ov03_022566D0(1);
    // ldr r0, [sp, #8]
    // add r0, #0xa4
    // str r0, [sp, #8]
    LinkBattleRuleset_GetRuleValue(*((u32*)r0), 3);
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #4]
    BufferIntegerAsString(0, 1, r0, 3);
}



u32 ov03_02256B40(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02256B50: ; jump table
    // mvn r0, r0
}



void ScrCmd_710(void) {
}



void ov03_02256BA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // ldr r0, _02256BE8 ; =ov03_0225945C
    // lsl r1, r6, #1
    // ldrh r4, [r0, r1]
    // add r0, r5, #0
    // add r0, #0xc0
    // ldr r0, [r0]
    // add r1, r4, #0
    // bl Field3dObjectList_GetRenderObjectByID
    // add r7, r0, #0
    // bne _02256BCA
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // add r1, r6, #0
    // bl sub_020669B4
    // add r1, r0, #0
    // ldr r0, [r5, #0x54]
    // mov r2, #1
    // str r0, [sp]
    // add r0, r4, #0
    // add r3, r7, #0
    // bl ov01_021E8970
    // pop {r3, r4, r5, r6, r7, pc}
    // _02256BE8: .word ov03_0225945C
    // TODO: decompile
}



void ov03_02256BEC(void) {
    // push {r3, r4}
    // sub r2, r2, #3
    // cmp r2, #1
    // ldr r3, _02256C28 ; =0x0000FFFF
    // bhi _02256C0C
    // mov r0, #1
    // mov r2, #0
    // lsl r0, r0, #8
    // ldrh r4, [r1]
    // cmp r4, r3
    // beq _02256C20
    // add r2, r2, #1
    // add r1, r1, #4
    // cmp r2, r0
    // blt _02256BFC
    // b _02256C20
    // mov r1, #1
    // mov r2, #0
    // lsl r1, r1, #8
    // ldrh r4, [r0]
    // cmp r4, r3
    // beq _02256C20
    // add r2, r2, #1
    // add r0, r0, #2
    // cmp r2, r1
    // blt _02256C12
    // add r0, r2, #0
    // pop {r3, r4}
    // bx lr
    // nop
    // _02256C28: .word 0x0000FFFF
    // TODO: decompile
}



void ov03_02256C2C(void) {
    // ldrb r7, [r4, r0]
    // mov ip, r2
    // mov r2, ip
    // ldrh r6, [r3]
    // ldrb r2, [r4, r2]
    // strb r5, [r4, r2]
    // ldr r5, [r4, r2]
    // strh r6, [r5, r2]
    // ldr r5, [r4, r2]
    // strh r6, [r5, r2]
}



void ov03_02256C84(void) {
    // ldrb r3, [r0, r3]
    // add r5, #8
    // ldrh r7, [r1]
    // ldr r6, [r0, r4]
    // strh r7, [r6, r3]
    // ldrb r6, [r0, r5]
}



void ov03_02256CB4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r2, #0
    // ldr r2, _02256D14 ; =0x00000283
    // add r5, r0, #0
    // add r4, r1, #0
    // add r7, r3, #0
    // ldrb r2, [r5, r2]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov03_02256BEC
    // mov r1, #0x27
    // lsl r1, r1, #4
    // strb r0, [r5, r1]
    // ldrb r0, [r5, r1]
    // cmp r0, #0xff
    // blo _02256CDA
    // bl GF_AssertFail
    // mov r1, #0x27
    // lsl r1, r1, #4
    // ldrb r1, [r5, r1]
    // mov r0, #0xb
    // lsl r1, r1, #1
    // bl Heap_Alloc
    // mov r1, #0x9a
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r1, #0x1b
    // ldrb r0, [r5, r1]
    // add r0, #0xfd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02256D06
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov03_02256C84
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov03_02256C2C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02256D14: .word 0x00000283
    // TODO: decompile
}



void ov03_02256D18(void) {
    Heap_Alloc(0xb, (0xa9 << 2));
    memset(0, (0xa9 << 2));
}



void InitMartUI(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r7, r0, #0
    // str r2, [sp]
    // add r6, r3, #0
    // bl ov03_02256D18
    // add r4, r0, #0
    // ldr r0, [r5, #8]
    // mov r1, #0xb
    // str r0, [r4]
    // mov r0, #0x60
    // bl String_New
    // mov r1, #0x9d
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r5, #0xc]
    // bl Save_PlayerData_GetProfile
    // mov r1, #0x92
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r5, #0xc]
    // bl Save_PlayerData_GetOptionsAddr
    // mov r1, #0x25
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r5, #0xc]
    // bl Save_GameStats_Get
    // mov r1, #0x97
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // mov r1, #0x26
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r5, #0xc]
    // bl Save_ApricornBox_Get
    // mov r1, #0x96
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r2, [sp, #0x1c]
    // add r0, #0xc
    // str r2, [r4, r0]
    // add r0, r1, #0
    // add r0, #0x2b
    // add r2, r1, #0
    // strb r6, [r4, r0]
    // mov r0, #0
    // add r2, #0x19
    // strb r0, [r4, r2]
    // add r2, r1, #0
    // add r2, #0x38
    // str r0, [r4, r2]
    // add r2, r1, #0
    // sub r3, r0, #1
    // add r2, #0x3c
    // str r3, [r4, r2]
    // add r1, #0x40
    // str r0, [r4, r1]
    // ldr r0, [r5, #0xc]
    // bl Save_Pokeathlon_Get
    // mov r1, #0x95
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r2, [sp, #0x20]
    // add r0, #0x18
    // str r2, [r4, r0]
    // add r0, sp, #8
    // ldrb r2, [r0, #0x10]
    // add r0, r1, #0
    // add r0, #0x1f
    // add r1, #0x2f
    // strb r2, [r4, r0]
    // ldrb r0, [r4, r1]
    // cmp r0, #0
    // beq _02256DEA
    // add r0, #0xfd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02256DF8
    // ldr r0, [r5, #0xc]
    // bl Save_Bag_Get
    // mov r1, #0x93
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // b _02256E04
    // ldr r0, [r5, #0xc]
    // bl Save_SealCase_Get
    // mov r1, #0x93
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x26
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl CheckFlag09A
    // add r2, r0, #0
    // ldr r1, [sp]
    // ldr r3, [sp, #0x20]
    // add r0, r4, #0
    // bl ov03_02256CB4
    // ldr r1, _02256E28 ; =ov03_02256E2C
    // add r0, r7, #0
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02256E28: .word ov03_02256E2C
    // TODO: decompile
}



void ov03_02256E2C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r6, #0
    // bl TaskManager_GetEnvironment
    // ldr r1, _02257064 ; =0x00000272
    // add r4, r0, #0
    // ldrb r2, [r4, r1]
    // cmp r2, #0x1b
    // bhi _02256F08
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _02256E52: ; jump table
    // bl ov03_0225706C
    // ldr r0, _02257068 ; =0x00000273
    // ldrb r1, [r4, r0]
    // cmp r1, #0
    // bne _02256E9E
    // mov r1, #1
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // b _02257036
    // mov r1, #0x16
    // sub r0, r0, #1
    // strb r1, [r4, r0]
    // b _02257036
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_022570D4
    // add r0, r5, #0
    // mov r1, #2
    // add r2, r4, #0
    // bl ov01_021F6A9C
    // ldr r0, _02257064 ; =0x00000272
    // mov r1, #2
    // strb r1, [r4, r0]
    // b _02257036
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_02257334
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // add r1, #0x22
    // mov r2, #0
    // ldr r1, [r4, r1]
    // mvn r2, r2
    // cmp r1, r2
    // bne _02256EE4
    // bl ov03_02257510
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_0225761C
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // mov r0, #0
    // mvn r0, r0
    // add r1, #0x22
    // str r0, [r4, r1]
    // b _02257036
    // mov r0, #3
    // strb r0, [r4, r1]
    // b _02257036
    // sub r1, #0x52
    // ldr r0, [r4, r1]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // beq _02256F0A
    // b _02257036
    // mov r3, #0x9a
    // lsl r3, r3, #2
    // add r2, r3, #0
    // ldr r1, [r4, r3]
    // add r2, #0x28
    // add r3, #9
    // ldr r5, [r4, r2]
    // ldrb r2, [r4, r3]
    // add r0, r4, #0
    // add r2, r5, r2
    // lsl r2, r2, #1
    // ldrh r1, [r1, r2]
    // bl ov03_02257874
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_02257944
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // add r1, #0x22
    // mov r2, #0
    // ldr r1, [r4, r1]
    // mvn r2, r2
    // cmp r1, r2
    // bne _02256F4C
    // bl ov03_02257ADC
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_02257B4C
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // mov r0, #0
    // mvn r0, r0
    // add r1, #0x22
    // str r0, [r4, r1]
    // b _02257036
    // bl ov03_022579E0
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_02257A70
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_02257D6C
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // add r1, #0x22
    // mov r2, #0
    // ldr r1, [r4, r1]
    // mvn r2, r2
    // cmp r1, r2
    // beq _02257036
    // bl ov03_02257D90
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // mov r0, #0
    // mvn r0, r0
    // add r1, #0x22
    // str r0, [r4, r1]
    // b _02257036
    // bl ov03_02257E6C
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_02257F24
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_02257FF8
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_02258078
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_022577D0
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_022572EC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_02258164
    // ldr r0, _02257064 ; =0x00000272
    // mov r1, #0x12
    // strb r1, [r4, r0]
    // b _02257036
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_02258170
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_022576F8
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_02257728
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // bl ov03_022586E0
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225874C
    // b _02257036
    // add r0, r6, #0
    // bl ov03_02258764
    // b _02257036
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_022587D4
    // ldr r1, _02257064 ; =0x00000272
    // strb r0, [r4, r1]
    // b _02257036
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_0225709C
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r7, #0x7e
    // mov r6, #0
    // add r5, r4, #0
    // lsl r7, r7, #2
    // ldr r0, [r5, r7]
    // cmp r0, #0
    // beq _0225704C
    // mov r1, #1
    // lsl r1, r1, #0xc
    // bl Sprite_UpdateAnim
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, #0x13
    // blt _0225703E
    // add r4, #0x94
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _02257060
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02257064: .word 0x00000272
    // _02257068: .word 0x00000273
    // TODO: decompile
}



void ov03_0225706C(void) {
}



void ov03_02257074(void) {
    // push {r4, lr}
    // ldr r2, _02257098 ; =0x000001B3
    // add r4, r0, #0
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0xb
    // bl NewMsgDataFromNarc
    // add r1, r4, #0
    // add r1, #0x88
    // str r0, [r1]
    // mov r0, #0xb
    // bl MessageFormat_New
    // add r4, #0x8c
    // str r0, [r4]
    // pop {r4, pc}
    // nop
    // _02257098: .word 0x000001B3
    // TODO: decompile
}



void ov03_0225709C(void) {
    // add r0, #0x88
    DestroyMsgData(*((u32*)r1));
    // add r0, #0x8c
    MessageFormat_Delete(*((u32*)r4));
    // ldr r0, [r4, r0]
    String_Delete((0x9d << 2));
    // ldr r0, [r4, r0]
    Heap_Free((0x9a << 2));
    Heap_Free(r4);
}



void ov03_022570D4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0x12
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #6
    // mov r2, #0
    // str r0, [sp, #8]
    // add r4, r1, #0
    // str r2, [sp, #0xc]
    // ldr r0, [r4]
    // mov r1, #3
    // add r3, r2, #0
    // bl FillBgTilemapRect
    // ldr r0, [r4]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r4, #0
    // bl ov03_02257134
    // mov r0, #0xb
    // bl Camera_New
    // add r1, r4, #0
    // add r1, #0x90
    // str r0, [r1]
    // add r1, r4, #0
    // add r1, #0x90
    // ldr r0, [r5, #0x24]
    // ldr r1, [r1]
    // bl Camera_Copy
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl Camera_SetStaticPtr
    // ldr r0, _02257130 ; =0x00000281
    // mov r1, #0
    // strb r1, [r4, r0]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02257130: .word 0x00000281
    // TODO: decompile
}



void ov03_02257134(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r5, #0
    // ldr r7, _02257178 ; =ov03_022594C6
    // mov r6, #0
    // add r4, #8
    // ldr r0, _0225717C ; =0x00000283
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // beq _02257160
    // cmp r0, #3
    // beq _02257160
    // cmp r0, #4
    // beq _02257160
    // cmp r6, #1
    // bne _02257160
    // ldr r0, [r5]
    // ldr r2, _02257180 ; =ov03_02259464
    // add r1, r4, #0
    // bl AddWindow
    // b _0225716A
    // ldr r0, [r5]
    // add r1, r4, #0
    // add r2, r7, #0
    // bl AddWindow
    // add r6, r6, #1
    // add r4, #0x10
    // add r7, #8
    // cmp r6, #6
    // blo _02257140
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02257178: .word ov03_022594C6
    // _0225717C: .word 0x00000283
    // _02257180: .word ov03_02259464
    // TODO: decompile
}



void ov03_02257184(void) {
    // add r0, #0x28
    sub_0200E5D4(1);
    // add r5, #8
    ClearWindowTilemapAndScheduleTransfer(r5);
    RemoveWindow(r5);
    // add r5, #0x10
}



void ov03_022571AC(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r4, r0, #0
    // str r1, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r2, [r4]
    // mov r0, #0x3c
    // mov r3, #1
    // bl GfGfxLoader_LoadCharData
    // ldr r0, _02257258 ; =0x00000283
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _022571DA
    // add r0, #0xfd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _022571F4
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r2, [r4]
    // mov r0, #0x3c
    // mov r1, #2
    // mov r3, #1
    // bl GfGfxLoader_LoadScrnData
    // b _0225720C
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xb
    // str r0, [sp, #0xc]
    // ldr r2, [r4]
    // mov r0, #0x3c
    // mov r1, #3
    // mov r3, #1
    // bl GfGfxLoader_LoadScrnData
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0xb
    // mov r2, #0
    // str r0, [sp, #4]
    // mov r0, #0x3c
    // mov r1, #1
    // add r3, r2, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #0xb
    // str r3, [sp, #4]
    // ldr r0, [r4]
    // mov r1, #3
    // mov r2, #0x1f
    // bl LoadUserFrameGfx1
    // mov r0, #0x25
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // mov r1, #3
    // mov r2, #1
    // mov r3, #0xa
    // bl LoadUserFrameGfx2
    // add sp, #0x10
    // pop {r4, pc}
    // nop
    // _02257258: .word 0x00000283
    // TODO: decompile
}



void ov03_0225725C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl GfGfx_EngineAGetPlanes
    // mov r1, #0x9f
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // ldr r0, [r4]
    // mov r1, #0
    // bl GetBgPriority
    // mov r1, #0x9e
    // lsl r1, r1, #2
    // strb r0, [r4, r1]
    // ldr r0, [r4]
    // mov r1, #1
    // bl GetBgPriority
    // ldr r1, _022572E0 ; =0x00000279
    // strb r0, [r4, r1]
    // ldr r0, [r4]
    // mov r1, #2
    // bl GetBgPriority
    // ldr r1, _022572E4 ; =0x0000027A
    // strb r0, [r4, r1]
    // ldr r0, [r4]
    // mov r1, #3
    // bl GetBgPriority
    // ldr r1, _022572E8 ; =0x0000027B
    // strb r0, [r4, r1]
    // mov r0, #0
    // mov r1, #3
    // bl SetBgPriority
    // mov r0, #1
    // mov r1, #2
    // bl SetBgPriority
    // mov r0, #2
    // mov r1, #1
    // bl SetBgPriority
    // mov r0, #3
    // mov r1, #0
    // bl SetBgPriority
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // pop {r4, pc}
    // nop
    // _022572E0: .word 0x00000279
    // _022572E4: .word 0x0000027A
    // _022572E8: .word 0x0000027B
    // TODO: decompile
}



void ov03_022572EC(void) {
    // push {r4, lr}
    // mov r1, #0x9e
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldrb r1, [r4, r1]
    // mov r0, #0
    // bl SetBgPriority
    // ldr r1, _02257328 ; =0x00000279
    // mov r0, #1
    // ldrb r1, [r4, r1]
    // bl SetBgPriority
    // ldr r1, _0225732C ; =0x0000027A
    // mov r0, #2
    // ldrb r1, [r4, r1]
    // bl SetBgPriority
    // ldr r1, _02257330 ; =0x0000027B
    // mov r0, #3
    // ldrb r1, [r4, r1]
    // bl SetBgPriority
    // mov r0, #0x9f
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl GfGfx_EngineASetPlanes
    // pop {r4, pc}
    // nop
    // _02257328: .word 0x00000279
    // _0225732C: .word 0x0000027A
    // _02257330: .word 0x0000027B
    // TODO: decompile
}



void ov03_02257334(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl ov01_021F6B10
    // cmp r0, #1
    // beq _02257344
    // mov r0, #2
    // pop {r4, pc}
    // ldr r0, _02257374 ; =0x00000281
    // mov r1, #0
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // bl ov03_022571AC
    // add r0, r4, #0
    // bl ov03_0225725C
    // mov r1, #0x29
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov03_022573D4
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _02257374: .word 0x00000281
    // TODO: decompile
}



void ov03_02257378(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // add r5, r1, #0
    // cmp r2, #0
    // beq _0225738A
    // cmp r2, #1
    // beq _022573C0
    // cmp r2, #2
    // pop {r3, r4, r5, pc}
    // mov r1, #0x22
    // lsl r1, r1, #4
    // ldr r0, [r4, r1]
    // add r1, #0x70
    // ldr r1, [r4, r1]
    // lsl r2, r1, #2
    // ldr r1, _022573C4 ; =ov03_022594A0
    // ldrb r1, [r1, r2]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r1, _022573C8 ; =ov03_022594A1
    // lsl r5, r5, #2
    // ldrb r1, [r1, r5]
    // ldr r0, [r4, r0]
    // bl thunk_Sprite_SetPaletteOverride
    // ldr r1, _022573CC ; =ov03_0225949E
    // ldr r2, _022573D0 ; =ov03_0225949F
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldrb r1, [r1, r5]
    // ldrb r2, [r2, r5]
    // ldr r0, [r4, r0]
    // bl Sprite_SetPositionXY
    // pop {r3, r4, r5, pc}
    // nop
    // _022573C4: .word ov03_022594A0
    // _022573C8: .word ov03_022594A1
    // _022573CC: .word ov03_0225949E
    // _022573D0: .word ov03_0225949F
    // TODO: decompile
}



void ov03_022573D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r3, #0x9a
    // lsl r3, r3, #2
    // add r4, r0, #0
    // add r2, r3, #0
    // ldr r0, [r4, r3]
    // add r2, #0x28
    // add r3, #9
    // ldr r5, [r4, r2]
    // ldrb r2, [r4, r3]
    // add r2, r5, r2
    // lsl r2, r2, #1
    // ldrh r5, [r0, r2]
    // cmp r1, #8
    // bls _022573F6
    // b _02257504
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02257402: ; jump table
    // add r0, r4, #0
    // add r0, #0x18
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // mov r2, #0x29
    // lsl r2, r2, #4
    // add r0, r2, #0
    // sub r0, #0x1f
    // ldrb r0, [r4, r0]
    // ldr r1, [r4, r2]
    // add r1, r1, r0
    // add r0, r2, #0
    // sub r0, #0x20
    // ldrb r0, [r4, r0]
    // cmp r1, r0
    // bge _022574D4
    // add r0, r2, #0
    // sub r0, #0xd
    // ldrb r1, [r4, r0]
    // cmp r1, #0
    // beq _0225744C
    // add r0, r1, #0
    // add r0, #0xfd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02257460
    // mov r0, #0x82
    // mov r1, #0xb
    // bl String_New
    // add r1, r5, #0
    // mov r2, #0xb
    // add r6, r0, #0
    // bl GetItemDescIntoString
    // b _022574AA
    // cmp r1, #1
    // bne _02257484
    // mov r0, #0
    // mov r1, #0x1b
    // add r2, #0x51
    // mov r3, #0xb
    // bl NewMsgDataFromNarc
    // add r1, r5, #0
    // add r7, r0, #0
    // add r1, #0x8a
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r7, #0
    // bl DestroyMsgData
    // b _022574AA
    // mov r0, #0
    // mov r1, #0x1b
    // sub r2, #0xde
    // mov r3, #0xb
    // bl NewMsgDataFromNarc
    // add r7, r0, #0
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // bl sub_020910B8
    // add r1, r0, #0
    // add r0, r7, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r7, #0
    // bl DestroyMsgData
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02257508 ; =0x000F0E00
    // add r2, r6, #0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r0, #0x18
    // add r3, r1, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov03_022585A4
    // b _022574DE
    // sub r2, #0x8c
    // ldr r0, [r4, r2]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r4, #0x18
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // add r0, #0x18
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _0225750C ; =0x0000FFFF
    // add r0, r4, #0
    // bl ov03_022585A4
    // add r4, #0x18
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02257508: .word 0x000F0E00
    // _0225750C: .word 0x0000FFFF
    // TODO: decompile
}



void ov03_02257510(void) {
    // push {r4, r5, r6, lr}
    // ldr r1, _02257604 ; =gSystem
    // mov r2, #0x40
    // ldr r1, [r1, #0x48]
    // add r5, r0, #0
    // mov r4, #0
    // tst r2, r1
    // beq _02257538
    // mov r0, #0x29
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // lsl r2, r1, #2
    // ldr r1, _02257608 ; =ov03_0225947A
    // ldrb r1, [r1, r2]
    // str r1, [r5, r0]
    // ldr r0, _0225760C ; =0x000005DC
    // bl PlaySE
    // add r4, r4, #1
    // b _022575B0
    // mov r2, #0x80
    // tst r2, r1
    // beq _02257556
    // mov r0, #0x29
    // lsl r0, r0, #4
    // ldr r1, [r5, r0]
    // lsl r2, r1, #2
    // ldr r1, _02257610 ; =ov03_0225947B
    // ldrb r1, [r1, r2]
    // str r1, [r5, r0]
    // ldr r0, _0225760C ; =0x000005DC
    // bl PlaySE
    // add r4, r4, #1
    // b _022575B0
    // mov r2, #0x20
    // tst r2, r1
    // beq _02257584
    // mov r2, #0x29
    // lsl r2, r2, #4
    // ldr r1, [r5, r2]
    // ldr r3, _02257614 ; =ov03_0225947C
    // lsl r6, r1, #2
    // ldrb r3, [r3, r6]
    // cmp r3, #6
    // bne _02257574
    // mov r1, #6
    // bl ov03_0225761C
    // pop {r4, r5, r6, pc}
    // cmp r1, #8
    // beq _022575B0
    // ldr r0, _0225760C ; =0x000005DC
    // str r3, [r5, r2]
    // bl PlaySE
    // add r4, r4, #1
    // b _022575B0
    // mov r2, #0x10
    // tst r1, r2
    // beq _022575B0
    // mov r2, #0x29
    // lsl r2, r2, #4
    // ldr r1, [r5, r2]
    // ldr r3, _02257618 ; =ov03_0225947D
    // lsl r6, r1, #2
    // ldrb r3, [r3, r6]
    // cmp r3, #7
    // bne _022575A2
    // mov r1, #7
    // bl ov03_0225761C
    // pop {r4, r5, r6, pc}
    // cmp r1, #8
    // beq _022575B0
    // ldr r0, _0225760C ; =0x000005DC
    // str r3, [r5, r2]
    // bl PlaySE
    // add r4, r4, #1
    // cmp r4, #0
    // beq _022575CE
    // mov r1, #0x29
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // mov r2, #0
    // bl ov03_02257378
    // mov r1, #0x29
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov03_022573D4
    // ldr r0, _02257604 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _022575EC
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r5, #0
    // mov r1, #0xd
    // mov r2, #0x10
    // bl ov03_022586CC
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // tst r0, r1
    // beq _02257600
    // mov r1, #0x29
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov03_0225761C
    // pop {r4, r5, r6, pc}
    // mov r0, #3
    // pop {r4, r5, r6, pc}
    // _02257604: .word gSystem
    // _02257608: .word ov03_0225947A
    // _0225760C: .word 0x000005DC
    // _02257610: .word ov03_0225947B
    // _02257614: .word ov03_0225947C
    // _02257618: .word ov03_0225947D
    // TODO: decompile
}



void ov03_0225761C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // cmp r1, #8
    // bhi _022576EA
    // add r2, r1, r1
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _02257630: ; jump table
    // ldr r3, _022576F0 ; =0x00000271
    // ldrb r2, [r4, r3]
    // add r5, r1, r2
    // sub r2, r3, #1
    // ldrb r2, [r4, r2]
    // cmp r5, r2
    // bhs _022576EA
    // add r2, r3, #0
    // add r2, #0x1f
    // str r1, [r4, r2]
    // add r3, #0x1f
    // ldr r1, [r4, r3]
    // mov r2, #0
    // bl ov03_02257378
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0x13
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _022576F4 ; =0x000005DC
    // bl PlaySE
    // mov r1, #0x29
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov03_022573D4
    // mov r0, #6
    // pop {r3, r4, r5, pc}
    // ldr r0, _022576F0 ; =0x00000271
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _022576EA
    // ldr r0, _022576F4 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #0x13
    // bl ov03_022586CC
    // pop {r3, r4, r5, pc}
    // ldr r0, _022576F0 ; =0x00000271
    // ldrb r1, [r4, r0]
    // sub r0, r0, #1
    // ldrb r0, [r4, r0]
    // add r1, r1, #6
    // cmp r1, r0
    // bge _022576EA
    // ldr r0, _022576F4 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0x14
    // bl ov03_022586CC
    // pop {r3, r4, r5, pc}
    // mov r2, #0
    // bl ov03_02257378
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #7
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #8
    // bl ov03_022573D4
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #0x10
    // bl ov03_022586CC
    // pop {r3, r4, r5, pc}
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // nop
    // _022576F0: .word 0x00000271
    // _022576F4: .word 0x000005DC
    // TODO: decompile
}



void ov03_022576F8(void) {
    // push {r4, lr}
    // ldr r2, _02257724 ; =0x00000271
    // add r4, r0, #0
    // ldrb r1, [r4, r2]
    // sub r1, r1, #6
    // strb r1, [r4, r2]
    // ldrb r1, [r4, r2]
    // sub r2, r2, #1
    // ldrb r2, [r4, r2]
    // bl ov03_02257758
    // mov r1, #0xa6
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // sub r1, #8
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov03_022573D4
    // mov r0, #3
    // pop {r4, pc}
    // _02257724: .word 0x00000271
    // TODO: decompile
}



void ov03_02257728(void) {
    // push {r4, lr}
    // ldr r2, _02257754 ; =0x00000271
    // add r4, r0, #0
    // ldrb r1, [r4, r2]
    // add r1, r1, #6
    // strb r1, [r4, r2]
    // ldrb r1, [r4, r2]
    // sub r2, r2, #1
    // ldrb r2, [r4, r2]
    // bl ov03_02257758
    // mov r1, #0xa6
    // mov r0, #1
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // sub r1, #8
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // bl ov03_022573D4
    // mov r0, #3
    // pop {r4, pc}
    // _02257754: .word 0x00000271
    // TODO: decompile
}



void ov03_02257758(void) {
    // str r0, [sp]
    // str r4, [sp, #8]
    // sub r7, r2, r1
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r6, [r6, r3]
    // ldr r3, [sp, #4]
    // add r6, r3, r6
    // ldr r3, [sp, #8]
    // ldrh r3, [r3, r6]
    ov03_02258648(r7, (0 + 3), (0 + 2), (0x9a << 2));
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0x82 << 2), 1);
    // ldr r0, [r5, r0]
    Sprite_SetDrawFlag((0x82 << 2), 0);
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
    // ldr r0, [sp]
    ov03_022582C0((r0 + 2), 0);
}



void ov03_022577D0(void) {
    ov03_02257184();
    BgFillTilemapBufferAndSchedule(*((u32*)r4), 1, 0);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x81 << 2), 0);
}



void ov03_022577F4(void) {
    // ldr r0, [r0, r1]
    PokeathlonSave_GetAthletePoints((0x95 << 2));
    // ldr r0, [r0, r1]
    PlayerProfile_GetMoney((0x92 << 2));
}



void ov03_02257814(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, _02257870 ; =0x00000283
    // add r5, r0, #0
    // ldrb r0, [r5, r1]
    // cmp r0, #3
    // bne _02257840
    // add r0, r1, #0
    // add r2, r1, #0
    // sub r1, #0x12
    // add r2, #0xd
    // sub r0, #0x2f
    // ldrb r1, [r5, r1]
    // ldr r2, [r5, r2]
    // ldr r0, [r5, r0]
    // add r1, r2, r1
    // bl PokeathlonSave_GetUnkB7C_AtIndex
    // cmp r0, #0
    // beq _0225785E
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // cmp r0, #4
    // bne _0225785E
    // add r2, r1, #1
    // add r0, r1, #0
    // sub r0, #0x2f
    // ldrh r2, [r5, r2]
    // sub r1, #0x8a
    // ldr r0, [r5, r0]
    // sub r1, r2, r1
    // bl PokeathlonSave_GetUnkB78_AtIndex
    // cmp r0, #0
    // beq _0225785E
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // mov r0, #0xa3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // cmp r4, r0
    // bhs _0225786C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _02257870: .word 0x00000283
    // TODO: decompile
}



void ov03_02257874(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r4, r1, #0
    // bl Sprite_GetDrawFlag
    // mov r1, #0x91
    // lsl r1, r1, #2
    // strh r0, [r5, r1]
    // sub r1, #0x48
    // ldr r0, [r5, r1]
    // bl Sprite_GetDrawFlag
    // ldr r1, _0225793C ; =0x00000246
    // strh r0, [r5, r1]
    // sub r1, #0x4e
    // ldr r0, [r5, r1]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x7f
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r5, #0
    // mov r1, #1
    // bl ov03_022586BC
    // mov r1, #0xa1
    // lsl r1, r1, #2
    // strh r4, [r5, r1]
    // mov r2, #1
    // add r0, r1, #2
    // strh r2, [r5, r0]
    // ldrh r1, [r5, r1]
    // add r0, r5, #0
    // bl ov03_02258120
    // mov r1, #0xa3
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // sub r1, #9
    // ldrb r1, [r5, r1]
    // add r0, r5, #0
    // bl ov03_022577F4
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov03_02257814
    // cmp r0, #0
    // beq _022578F2
    // mov r0, #0xa6
    // mov r1, #0xa
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // mov r0, #0xe
    // pop {r3, r4, r5, pc}
    // mov r1, #0xa3
    // lsl r1, r1, #2
    // ldr r1, [r5, r1]
    // add r0, r4, #0
    // bl _u32_div_f
    // mov r1, #0xa2
    // lsl r1, r1, #2
    // strh r0, [r5, r1]
    // ldrh r0, [r5, r1]
    // cmp r0, #0x63
    // bls _0225790E
    // mov r0, #0x63
    // strh r0, [r5, r1]
    // ldr r0, _02257940 ; =0x00000283
    // ldrb r0, [r5, r0]
    // cmp r0, #1
    // beq _02257920
    // add r0, #0xfd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02257928
    // add r0, r5, #0
    // bl ov03_02257CA0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #1
    // bl ov03_022582C0
    // mov r0, #0xa6
    // mov r1, #2
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // mov r0, #5
    // pop {r3, r4, r5, pc}
    // _0225793C: .word 0x00000246
    // _02257940: .word 0x00000283
    // TODO: decompile
}



void ov03_02257944(void) {
    // ldrb r0, [r4, r0]
    IsPrintFinished((0xa << 6));
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x7e << 2), 0);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x7f << 2), 0);
}



void ov03_02257978(void) {
    // push {r4, lr}
    // ldr r3, _022579D8 ; =0x00000283
    // add r2, r0, #0
    // ldrb r4, [r2, r3]
    // cmp r4, #0
    // beq _02257994
    // cmp r4, #1
    // beq _02257994
    // add r0, r4, #0
    // add r0, #0xfd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _022579C0
    // ldr r3, _022579DC ; =0x000001E5
    // cmp r1, r3
    // blt _022579AE
    // add r0, r3, #6
    // cmp r1, r0
    // bgt _022579AE
    // add r0, r3, #0
    // add r0, #0x73
    // ldr r0, [r2, r0]
    // sub r1, r1, r3
    // bl ApricornBox_CountApricorn
    // pop {r4, pc}
    // mov r1, #0x93
    // lsl r1, r1, #2
    // ldr r0, [r2, r1]
    // add r1, #0x38
    // ldrh r1, [r2, r1]
    // mov r2, #0xb
    // bl Bag_GetQuantity
    // pop {r4, pc}
    // cmp r4, #2
    // bne _022579D4
    // add r0, r3, #0
    // add r1, r3, #1
    // sub r0, #0x37
    // ldrh r1, [r2, r1]
    // ldr r0, [r2, r0]
    // bl SealCase_CountSealOccurrenceAnywhere
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _022579D8: .word 0x00000283
    // _022579DC: .word 0x000001E5
    // TODO: decompile
}



void ov03_022579E0(void) {
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x7e << 2), 0);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x7f << 2), 0);
    // add r0, #0x48
    sub_0200E5D4(r4, 1);
    // add r0, #0x38
    sub_0200E5D4(r4, 1);
    // add r0, #0x58
    FillWindowPixelBuffer(r4, 0xf);
    // str r1, [r4, r0]
    // sub r0, #0x58
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0xa6 << 2), 0);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x8b << 2), 0);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x23 << 4), 0);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x8d << 2), 0);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x8e << 2), 0);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0x8f << 2), 0);
    ov03_02257CA0(r4);
}



void ov03_02257A70(void) {
    // add r0, #0x48
    sub_0200E5D4(1);
    // add r0, #0x38
    sub_0200E5D4(r4, 1);
    // add r0, #0x58
    ClearFrameAndWindow2(r4, 0);
    ov03_02258560(r4, 0);
    // ldr r0, [r4, r1]
    // add r1, #0x4c
    // ldrh r1, [r4, r1]
    Sprite_SetDrawFlag((0x7e << 2));
    // ldr r0, [r4, r1]
    // add r1, #0x4a
    // ldrh r1, [r4, r1]
    Sprite_SetDrawFlag((0x7f << 2));
    ov03_022586BC(r4, 0);
    ov03_022582C0(r4, 0);
    // str r1, [r4, r0]
    // sub r0, #0x6c
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0xa6 << 2), 1);
}



void ov03_02257ADC(void) {
    // push {r4, lr}
    // ldr r1, _02257B3C ; =0x00000286
    // add r4, r0, #0
    // add r0, r4, r1
    // add r1, r1, #2
    // ldrh r1, [r4, r1]
    // bl sub_020881C0
    // cmp r0, #0
    // beq _02257B02
    // ldr r0, _02257B40 ; =0x00000637
    // bl PlaySE
    // mov r0, #0xa6
    // mov r1, #6
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #7
    // pop {r4, pc}
    // ldr r0, _02257B44 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _02257B1E
    // ldr r0, _02257B48 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x12
    // mov r2, #8
    // bl ov03_022586CC
    // pop {r4, pc}
    // mov r0, #2
    // tst r0, r1
    // beq _02257B38
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #9
    // bl ov03_022586CC
    // pop {r4, pc}
    // mov r0, #7
    // pop {r4, pc}
    // _02257B3C: .word 0x00000286
    // _02257B40: .word 0x00000637
    // _02257B44: .word gSystem
    // _02257B48: .word 0x000005DC
    // TODO: decompile
}



void ov03_02257B4C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #5
    // bhi _02257B76
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02257B60: ; jump table
    // mov r0, #0xa2
    // lsl r0, r0, #2
    // ldrh r1, [r4, r0]
    // cmp r1, #0xa
    // bhs _02257B78
    // b _02257C90
    // sub r0, r0, #2
    // ldrsh r0, [r4, r0]
    // mov r2, #0xa
    // bl ov03_022587E8
    // ldr r1, _02257C94 ; =0x00000286
    // strh r0, [r4, r1]
    // sub r1, #0x56
    // ldr r0, [r4, r1]
    // mov r1, #0
    // bl Sprite_SetAnimationFrame
    // mov r0, #0x23
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0xd
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _02257C98 ; =0x00000637
    // bl PlaySE
    // mov r0, #0xa6
    // mov r1, #6
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // b _02257C90
    // mov r0, #0xa2
    // lsl r0, r0, #2
    // ldrh r1, [r4, r0]
    // cmp r1, #1
    // beq _02257C90
    // sub r0, r0, #2
    // ldrsh r0, [r4, r0]
    // mov r2, #1
    // bl ov03_022587E8
    // ldr r1, _02257C94 ; =0x00000286
    // strh r0, [r4, r1]
    // sub r1, #0x52
    // ldr r0, [r4, r1]
    // mov r1, #0
    // bl Sprite_SetAnimationFrame
    // mov r0, #0x8d
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0xd
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _02257C98 ; =0x00000637
    // bl PlaySE
    // mov r0, #0xa6
    // mov r1, #6
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // b _02257C90
    // mov r0, #0xa2
    // lsl r0, r0, #2
    // ldrh r1, [r4, r0]
    // cmp r1, #0xa
    // blo _02257C90
    // sub r0, r0, #2
    // ldrsh r0, [r4, r0]
    // mov r2, #9
    // mvn r2, r2
    // bl ov03_022587E8
    // ldr r1, _02257C94 ; =0x00000286
    // strh r0, [r4, r1]
    // sub r1, #0x4e
    // ldr r0, [r4, r1]
    // mov r1, #0
    // bl Sprite_SetAnimationFrame
    // mov r0, #0x8e
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0xf
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _02257C98 ; =0x00000637
    // bl PlaySE
    // mov r0, #0xa6
    // mov r1, #6
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // b _02257C90
    // mov r0, #0xa2
    // lsl r0, r0, #2
    // ldrh r1, [r4, r0]
    // cmp r1, #1
    // beq _02257C90
    // sub r0, r0, #2
    // ldrsh r0, [r4, r0]
    // mov r2, #0
    // mvn r2, r2
    // bl ov03_022587E8
    // ldr r1, _02257C94 ; =0x00000286
    // strh r0, [r4, r1]
    // sub r1, #0x4a
    // ldr r0, [r4, r1]
    // mov r1, #0
    // bl Sprite_SetAnimationFrame
    // mov r0, #0x8f
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0xf
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _02257C98 ; =0x00000637
    // bl PlaySE
    // mov r0, #0xa6
    // mov r1, #6
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // b _02257C90
    // ldr r0, _02257C9C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x12
    // mov r2, #8
    // bl ov03_022586CC
    // pop {r4, pc}
    // mov r0, #0x25
    // lsl r0, r0, #6
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #9
    // bl ov03_022586CC
    // pop {r4, pc}
    // mov r0, #7
    // pop {r4, pc}
    // _02257C94: .word 0x00000286
    // _02257C98: .word 0x00000637
    // _02257C9C: .word 0x000005DC
    // TODO: decompile
}



void ov03_02257CA0(void) {
    // push {r4, lr}
    // ldr r2, _02257D64 ; =0x00000283
    // add r4, r0, #0
    // ldrb r0, [r4, r2]
    // cmp r0, #0
    // bne _02257CC2
    // add r0, r2, #0
    // add r1, r2, #1
    // add r2, r2, #3
    // sub r0, #0x37
    // ldrh r1, [r4, r1]
    // ldrh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // mov r3, #0xb
    // bl Bag_HasSpaceForItem
    // b _02257D4C
    // cmp r0, #1
    // bne _02257CCA
    // mov r0, #0
    // b _02257D4C
    // add r0, #0xfd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02257D3A
    // add r0, r2, #1
    // ldrh r1, [r4, r0]
    // add r0, r2, #0
    // sub r0, #0x9e
    // cmp r1, r0
    // blo _02257D06
    // add r0, r2, #0
    // sub r0, #0x98
    // cmp r1, r0
    // bhi _02257D06
    // add r0, r2, #0
    // sub r0, #0x2b
    // sub r2, #0x9e
    // ldr r0, [r4, r0]
    // sub r1, r1, r2
    // bl ApricornBox_CountApricorn
    // cmp r0, #0x63
    // bne _02257D26
    // mov r0, #0xa6
    // mov r1, #0xc
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #0xe
    // pop {r4, pc}
    // mov r2, #0x93
    // lsl r2, r2, #2
    // ldr r0, [r4, r2]
    // add r2, #0x3a
    // ldrh r2, [r4, r2]
    // mov r3, #0xb
    // bl Bag_HasSpaceForItem
    // cmp r0, #0
    // bne _02257D26
    // mov r0, #0xa6
    // mov r1, #0xc
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #0xe
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #2
    // bl ov03_022582C0
    // mov r0, #0xa6
    // mov r1, #3
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #0xa
    // pop {r4, pc}
    // add r0, r2, #0
    // add r1, r2, #1
    // add r2, r2, #3
    // sub r0, #0x37
    // ldrh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // bl SealCase_CheckSealQuantity
    // cmp r0, #0
    // bne _02257D60
    // ldr r0, _02257D68 ; =0x00000286
    // mov r1, #0
    // strh r1, [r4, r0]
    // mov r1, #0xb
    // add r0, #0x12
    // str r1, [r4, r0]
    // mov r0, #0xd
    // pop {r4, pc}
    // mov r0, #0xa
    // pop {r4, pc}
    // _02257D64: .word 0x00000283
    // _02257D68: .word 0x00000286
    // TODO: decompile
}



void ov03_02257D6C(void) {
    // ldrb r0, [r4, r0]
    IsPrintFinished((0xa << 6));
    // str r1, [r4, r0]
}



void ov03_02257D90(void) {
    // str r1, [r4, r0]
    // add r0, #0x58
    ClearFrameAndWindow2(0xc, 0);
    ov03_02258560(r4, 0);
    // ldr r0, [r4, r1]
    // add r1, #0x4c
    // ldrh r1, [r4, r1]
    Sprite_SetDrawFlag((0x7e << 2));
    // ldr r0, [r4, r1]
    // add r1, #0x4a
    // ldrh r1, [r4, r1]
    Sprite_SetDrawFlag((0x7f << 2));
    ov03_022586BC(r4, 0);
    ov03_022582C0(r4, 0);
    // str r1, [r4, r0]
}



void ov03_02257DF8(void) {
    // push {r4, lr}
    // ldr r3, _02257E30 ; =0x00000283
    // add r2, r0, #0
    // ldrb r0, [r2, r3]
    // add r0, #0xfd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _02257E18
    // sub r3, #0x2f
    // lsl r1, r1, #0x10
    // ldr r0, [r2, r3]
    // lsr r1, r1, #0x10
    // bl PokeathlonSave_SubAthletePoints
    // pop {r4, pc}
    // add r1, r3, #0
    // add r1, #9
    // ldr r4, [r2, r1]
    // add r1, r3, #3
    // add r0, r3, #0
    // ldrsh r1, [r2, r1]
    // sub r0, #0x3b
    // ldr r0, [r2, r0]
    // mul r1, r4
    // bl PlayerProfile_SubMoney
    // pop {r4, pc}
    // _02257E30: .word 0x00000283
    // TODO: decompile
}



void ov03_02257E34(void) {
    // push {r3, lr}
    // ldr r2, _02257E68 ; =0x000001E5
    // add r3, r0, #0
    // cmp r1, r2
    // blt _02257E54
    // add r0, r2, #6
    // cmp r1, r0
    // bgt _02257E54
    // add r0, r2, #0
    // add r0, #0x73
    // ldr r0, [r3, r0]
    // sub r1, r1, r2
    // mov r2, #1
    // bl ApricornBox_GiveApricorn
    // pop {r3, pc}
    // mov r1, #0x93
    // lsl r1, r1, #2
    // ldr r0, [r3, r1]
    // add r1, #0x38
    // ldrh r1, [r3, r1]
    // mov r2, #1
    // mov r3, #0xb
    // bl Bag_AddItem
    // pop {r3, pc}
    // _02257E68: .word 0x000001E5
    // TODO: decompile
}



void ov03_02257E6C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mov r0, #0xa
    // lsl r0, r0, #6
    // ldrb r0, [r4, r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // bne _02257E82
    // mov r0, #0xc
    // pop {r3, r4, r5, pc}
    // ldr r2, _02257F20 ; =0x00000283
    // ldrb r0, [r4, r2]
    // cmp r0, #0
    // bne _02257EA0
    // add r0, r2, #0
    // add r1, r2, #1
    // add r2, r2, #3
    // sub r0, #0x37
    // ldrh r1, [r4, r1]
    // ldrh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // mov r3, #0xb
    // bl Bag_AddItem
    // b _02257EF0
    // cmp r0, #3
    // bne _02257EC6
    // add r1, r2, #1
    // ldrh r1, [r4, r1]
    // add r0, r4, #0
    // bl ov03_02257E34
    // mov r2, #0x95
    // lsl r2, r2, #2
    // add r1, r2, #0
    // ldr r0, [r4, r2]
    // add r1, #0x3c
    // add r2, #0x1d
    // ldr r3, [r4, r1]
    // ldrb r1, [r4, r2]
    // add r1, r3, r1
    // bl PokeathlonSave_SetUnkB7C_AtIndex
    // b _02257EF0
    // cmp r0, #4
    // bne _02257EDE
    // add r1, r2, #1
    // add r0, r2, #0
    // sub r0, #0x2f
    // ldrh r1, [r4, r1]
    // sub r2, #0x8a
    // ldr r0, [r4, r0]
    // sub r1, r1, r2
    // bl PokeathlonSave_SetUnkB78_AtIndex
    // b _02257EF0
    // add r0, r2, #0
    // add r1, r2, #1
    // add r2, r2, #3
    // sub r0, #0x37
    // ldrh r1, [r4, r1]
    // ldrsh r2, [r4, r2]
    // ldr r0, [r4, r0]
    // bl GiveOrTakeSeal
    // mov r1, #0xa3
    // lsl r1, r1, #2
    // ldr r2, [r4, r1]
    // sub r1, r1, #6
    // ldrsh r1, [r4, r1]
    // add r0, r4, #0
    // mul r1, r2
    // bl ov03_02257DF8
    // mov r3, #0x97
    // lsl r3, r3, #2
    // add r2, r3, #0
    // ldr r0, [r4, r3]
    // add r2, #0x30
    // add r3, #0x2a
    // ldr r5, [r4, r2]
    // ldrsh r2, [r4, r3]
    // mov r1, #0x24
    // mul r2, r5
    // bl GameStats_Add
    // mov r0, #0xd
    // pop {r3, r4, r5, pc}
    // nop
    // _02257F20: .word 0x00000283
    // TODO: decompile
}



void ov03_02257F24(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xa
    // lsl r0, r0, #6
    // ldrb r0, [r4, r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // bne _02257F3A
    // mov r0, #0xd
    // pop {r4, pc}
    // ldr r0, _02257FEC ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _02257F4C
    // ldr r0, _02257FF0 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _02257FE6
    // mov r0, #0x99
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // cmp r1, #1
    // bne _02257F5E
    // sub r0, r0, #4
    // ldr r0, [r4, r0]
    // bl sub_02066D80
    // ldr r1, _02257FF4 ; =0x00000283
    // ldrb r0, [r4, r1]
    // cmp r0, #0
    // bne _02257F9E
    // add r0, r1, #1
    // ldrh r0, [r4, r0]
    // cmp r0, #4
    // bne _02257F9E
    // add r0, r1, #3
    // ldrsh r0, [r4, r0]
    // cmp r0, #0xa
    // blt _02257F9E
    // sub r1, #0x37
    // ldr r0, [r4, r1]
    // mov r1, #0xc
    // mov r2, #1
    // mov r3, #0xb
    // bl Bag_AddItem
    // cmp r0, #1
    // bne _02257F9E
    // mov r0, #0xa6
    // mov r1, #0xd
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // sub r0, #0x3c
    // ldr r0, [r4, r0]
    // mov r1, #0x33
    // bl GameStats_Inc
    // mov r0, #0xf
    // pop {r4, pc}
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_02258560
    // mov r1, #0x7e
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, #0x4c
    // ldrh r1, [r4, r1]
    // bl Sprite_SetDrawFlag
    // mov r1, #0x7f
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, #0x4a
    // ldrh r1, [r4, r1]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_022586BC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_022582C0
    // mov r1, #0xa6
    // mov r0, #4
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // pop {r4, pc}
    // mov r0, #0xd
    // pop {r4, pc}
    // nop
    // _02257FEC: .word gSystem
    // _02257FF0: .word gSystem + 0x40
    // _02257FF4: .word 0x00000283
    // TODO: decompile
}



void ov03_02257FF8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xa
    // lsl r0, r0, #6
    // ldrb r0, [r4, r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // bne _0225800E
    // mov r0, #0xe
    // pop {r4, pc}
    // ldr r0, _02258070 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _02258020
    // ldr r0, _02258074 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _0225806A
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_02258560
    // mov r1, #0x7e
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, #0x4c
    // ldrh r1, [r4, r1]
    // bl Sprite_SetDrawFlag
    // mov r1, #0x7f
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, #0x4a
    // ldrh r1, [r4, r1]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_022586BC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_022582C0
    // mov r0, #0xa6
    // mov r1, #5
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #4
    // pop {r4, pc}
    // mov r0, #0xe
    // pop {r4, pc}
    // nop
    // _02258070: .word gSystem
    // _02258074: .word gSystem + 0x40
    // TODO: decompile
}



void ov03_02258078(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xa
    // lsl r0, r0, #6
    // ldrb r0, [r4, r0]
    // bl IsPrintFinished
    // cmp r0, #0
    // bne _0225808E
    // mov r0, #0xf
    // pop {r4, pc}
    // ldr r0, _022580F0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // bne _022580A0
    // ldr r0, _022580F4 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _022580EA
    // add r0, r4, #0
    // add r0, #0x58
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_02258560
    // mov r1, #0x7e
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, #0x4c
    // ldrh r1, [r4, r1]
    // bl Sprite_SetDrawFlag
    // mov r1, #0x7f
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, #0x4a
    // ldrh r1, [r4, r1]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_022586BC
    // add r0, r4, #0
    // mov r1, #0
    // bl ov03_022582C0
    // mov r0, #0xa6
    // mov r1, #4
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #3
    // pop {r4, pc}
    // mov r0, #0xf
    // pop {r4, pc}
    // nop
    // _022580F0: .word gSystem
    // _022580F4: .word gSystem + 0x40
    // TODO: decompile
}



void ov03_022580F8(void) {
    // ldrh r3, [r5]
    // add r0, r1, r0
    GF_AssertFail(*((u16*)((0 << 2) + 2)));
}



void ov03_02258120(void) {
    // push {r3, lr}
    // ldr r3, _02258160 ; =0x00000283
    // add r2, r0, #0
    // ldrb r0, [r2, r3]
    // cmp r0, #0
    // bne _02258138
    // add r0, r1, #0
    // mov r1, #0
    // mov r2, #0xb
    // bl GetItemAttr
    // pop {r3, pc}
    // cmp r0, #1
    // bne _02258140
    // mov r0, #0x64
    // pop {r3, pc}
    // add r0, #0xfd
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // cmp r0, #1
    // bhi _0225815C
    // add r0, r1, #0
    // add r1, r3, #0
    // sub r1, #0x17
    // sub r3, #0x13
    // ldr r1, [r2, r1]
    // ldrb r2, [r2, r3]
    // bl ov03_022580F8
    // pop {r3, pc}
    // mov r0, #0x64
    // pop {r3, pc}
    // _02258160: .word 0x00000283
    // TODO: decompile
}



void ov03_02258164(void) {
}



void ov03_02258170(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F6B10
    // cmp r0, #0
    // bne _0225818C
    // add r0, r5, #0
    // bl ov01_021F6B00
    // cmp r0, #1
    // beq _0225818C
    // mov r0, #0x12
    // pop {r3, r4, r5, pc}
    // ldr r0, _022581B8 ; =0x00000281
    // mov r1, #0
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // ldr r1, [r5, #0x24]
    // bl Camera_Copy
    // add r0, r4, #0
    // add r0, #0x90
    // ldr r0, [r0]
    // bl Camera_Delete
    // ldr r0, [r5, #0x24]
    // bl Camera_SetStaticPtr
    // add r0, r4, #0
    // bl ov03_02258288
    // mov r0, #0x1b
    // pop {r3, r4, r5, pc}
    // _022581B8: .word 0x00000281
    // TODO: decompile
}



void ov03_022581BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r1, _0225827C ; =ov03_0225946C
    // add r7, r0, #0
    // add r0, #0x94
    // mov r2, #0x13
    // mov r3, #0xb
    // bl UnkFieldSpriteRenderer_ov01_021E7FDC_Init
    // add r0, r7, #0
    // str r0, [sp]
    // add r0, #0x94
    // ldr r4, _02258280 ; =ov03_022594F8
    // mov r6, #0
    // add r5, r7, #0
    // str r0, [sp]
    // ldr r0, [sp]
    // add r1, r4, #0
    // bl ov01_021E81F0
    // mov r1, #0x7e
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r6, r6, #1
    // add r4, #0x28
    // add r5, r5, #4
    // cmp r6, #0x13
    // blo _022581DA
    // add r0, r1, #0
    // add r0, #0x34
    // ldr r0, [r7, r0]
    // mov r1, #1
    // bl Sprite_SetPriority
    // mov r0, #9
    // lsl r0, r0, #6
    // ldr r0, [r7, r0]
    // mov r1, #1
    // bl Sprite_SetPriority
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r7, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #2
    // lsl r0, r0, #8
    // ldr r0, [r7, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x7f
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r7, #0
    // mov r1, #0
    // bl ov03_022582C0
    // mov r1, #0x29
    // lsl r1, r1, #4
    // ldr r1, [r7, r1]
    // add r0, r7, #0
    // mov r2, #0
    // bl ov03_02257378
    // ldr r2, _02258284 ; =0x00000271
    // add r0, r7, #0
    // ldrb r1, [r7, r2]
    // sub r2, r2, #1
    // ldrb r2, [r7, r2]
    // bl ov03_02257758
    // pop {r3, r4, r5, r6, r7, pc}
    // _0225827C: .word ov03_0225946C
    // _02258280: .word ov03_022594F8
    // _02258284: .word 0x00000271
    // TODO: decompile
}



void ov03_02258288(void) {
    // str r0, [sp]
    // ldr r0, [r5, r0]
    Sprite_Delete((0x7e << 2));
    // str r6, [r5, r7]
    // ldr r0, [sp]
    // add r0, #0x94
    UnkFieldSpriteRenderer_ov01_021E7FDC_Release();
    // ldr r0, [sp]
    // add r0, #0x94
    // str r0, [sp]
    // str r1, [r0]
}



void ov03_022582C0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // cmp r1, #0
    // beq _022582DA
    // cmp r1, #1
    // bne _022582D0
    // b _022583F4
    // cmp r1, #2
    // bne _022582D6
    // b _022584F2
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // ldr r4, _02258554 ; =ov03_022594F8
    // mov r7, #0
    // add r6, r5, #0
    // mov r0, #0xa4
    // ldrsh r0, [r4, r0]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x18]
    // mov r0, #0xa6
    // ldrsh r0, [r4, r0]
    // lsl r1, r0, #0xc
    // mov r0, #3
    // lsl r0, r0, #0x12
    // add r0, r1, r0
    // str r0, [sp, #0x1c]
    // mov r0, #0xa8
    // ldrsh r0, [r4, r0]
    // add r1, sp, #0x18
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x20]
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl Sprite_SetMatrix
    // add r7, r7, #1
    // add r4, #0x28
    // add r6, r6, #4
    // cmp r7, #6
    // blt _022582E0
    // mov r7, #0x27
    // ldr r4, _02258558 ; =ov03_02259850
    // mov r6, #0
    // lsl r7, r7, #4
    // ldrb r1, [r4, #1]
    // cmp r1, #4
    // bne _02258354
    // ldr r0, _0225855C ; =0x00000271
    // ldrb r0, [r5, r0]
    // add r1, r0, #6
    // ldrb r0, [r5, r7]
    // cmp r1, r0
    // ldrb r0, [r4]
    // bge _02258342
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _022583D0
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // b _022583D0
    // cmp r1, #3
    // bne _02258386
    // ldr r0, _0225855C ; =0x00000271
    // ldrb r0, [r5, r0]
    // cmp r0, #0
    // ldrb r0, [r4]
    // bne _02258374
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // b _022583D0
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _022583D0
    // cmp r1, #5
    // bne _022583C0
    // ldr r0, _0225855C ; =0x00000271
    // ldrb r0, [r5, r0]
    // add r1, r0, r6
    // mov r0, #0x27
    // lsl r0, r0, #4
    // ldrb r0, [r5, r0]
    // cmp r1, r0
    // ldrb r0, [r4]
    // bge _022583AE
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _022583D0
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // b _022583D0
    // ldrb r0, [r4]
    // lsl r0, r0, #2
    // add r2, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // bl Sprite_SetDrawFlag
    // add r6, r6, #1
    // add r4, r4, #3
    // cmp r6, #0xf
    // blo _0225831C
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetAnimationFrame
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // mov r7, #0x56
    // ldr r4, _02258558 ; =ov03_02259850
    // mov r6, #0
    // lsl r7, r7, #0xc
    // ldrb r1, [r4, #2]
    // cmp r1, #2
    // bne _02258452
    // mov r0, #0x29
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, r6
    // bne _0225843E
    // mov r0, #0x43
    // lsl r0, r0, #0xe
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldrb r0, [r4]
    // str r7, [sp, #0xc]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #0xc
    // bl Sprite_SetMatrix
    // ldrb r0, [r4]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _022584CE
    // ldrb r0, [r4]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // b _022584CE
    // ldrb r0, [r4]
    // cmp r0, #0xe
    // beq _0225845C
    // cmp r0, #0x10
    // bne _0225848A
    // mov r1, #0xa2
    // lsl r1, r1, #2
    // ldrh r1, [r5, r1]
    // cmp r1, #0xa
    // bhs _02258478
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // b _022584CE
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _022584CE
    // cmp r0, #0xf
    // beq _02258492
    // cmp r0, #0x11
    // bne _022584C0
    // mov r1, #0xa2
    // lsl r1, r1, #2
    // ldrh r1, [r5, r1]
    // cmp r1, #1
    // bne _022584AE
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // b _022584CE
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _022584CE
    // lsl r0, r0, #2
    // add r2, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // bl Sprite_SetDrawFlag
    // add r6, r6, #1
    // add r4, r4, #3
    // cmp r6, #0xf
    // blo _022583FC
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetAnimationFrame
    // mov r0, #0x8b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0x1a
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // mov r7, #0x56
    // ldr r4, _02258558 ; =ov03_02259850
    // mov r6, #0
    // lsl r7, r7, #0xc
    // mov r0, #0x29
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // cmp r0, r6
    // bne _02258536
    // mov r0, #0x43
    // lsl r0, r0, #0xe
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldrb r0, [r4]
    // str r7, [sp]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r1, sp, #0
    // bl Sprite_SetMatrix
    // ldrb r0, [r4]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _02258548
    // ldrb r0, [r4]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x7e
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r6, r6, #1
    // add r4, r4, #3
    // cmp r6, #0xf
    // blo _022584FA
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _02258554: .word ov03_022594F8
    // _02258558: .word ov03_02259850
    // _0225855C: .word 0x00000271
    // TODO: decompile
}



void ov03_02258560(void) {
    // ldr r0, [r4, r0]
    Sprite_SetPositionXY((0x7e << 2), 0xb1, 8);
    // ldr r0, [r4, r0]
    Sprite_SetPositionXY((0x7f << 2), 0xb1, 0x84);
    // ldr r0, [r4, r0]
    Sprite_SetPositionXY((0x7e << 2), 0xa2, 0x6c);
    // ldr r0, [r4, r0]
    Sprite_SetPositionXY((0x7f << 2), 0xa2, 0x84);
}



void ov03_022585A4(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, _02258644 ; =0x00000283
    // add r6, r1, #0
    // ldrb r1, [r4, r0]
    // cmp r1, #0
    // beq _022585CA
    // cmp r1, #3
    // beq _022585CA
    // cmp r1, #4
    // beq _022585CA
    // sub r0, #0x7f
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #2
    // bl SpriteResourceCollection_Find
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #1
    // bl GetItemIndexMapping
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // mov r2, #0x12
    // bl ReplaceCharResObjFromNarc
    // add r0, r5, #0
    // bl sub_0200AE8C
    // mov r0, #0x72
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl SpriteResourceCollection_Find
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #2
    // bl GetItemIndexMapping
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r0, #0x72
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // mov r2, #0x12
    // bl ReplacePlttResObjFromNarc
    // add r0, r5, #0
    // bl sub_0200B084
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _02258644: .word 0x00000283
    // TODO: decompile
}



void ov03_02258648(void) {
    // ldr r0, [r4, r0]
    SpriteResourceCollection_Find((0x71 << 2));
    GetItemIndexMapping(r6, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4, r0]
    ReplaceCharResObjFromNarc((0x71 << 2), r5, 0x12, r0);
    sub_0200AE8C(r5);
    // ldr r0, [r4, r0]
    SpriteResourceCollection_Find((0x72 << 2), r7);
    GetItemIndexMapping(r6, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r4, r0]
    ReplacePlttResObjFromNarc((0x72 << 2), r5, 0x12, r0);
    sub_0200B084(r5);
}



void ov03_022586BC(void) {
    // mov r2, #2
    // lsl r2, r2, #8
    // ldr r3, _022586C8 ; =thunk_Sprite_SetPaletteOverride
    // ldr r0, [r0, r2]
    // bx r3
    // nop
    // _022586C8: .word thunk_Sprite_SetPaletteOverride
    // TODO: decompile
}



void ov03_022586CC(void) {
    // add r3, r0, r3
    // strb r1, [r3]
    *((u8*)((0xa7 << 2) + 1)) = 0;
    *((u8*)((0xa7 << 2) + 2)) = 0;
    *((u8*)((0xa7 << 2) + 3)) = r2;
}



void ov03_022586E0(void) {
    // add r4, r0, r1
    // ldrb r2, [r4]
    // sub r1, #0xa4
    // add r0, r0, r2
    // ldr r0, [r0, r1]
    thunk_Sprite_SetPaletteOverride(7, (*((u8*)(r4 + 1)) << 2));
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
    // ldrb r2, [r4]
    // sub r1, #0xa4
    // add r0, r0, r2
    // ldr r0, [r0, r1]
    thunk_Sprite_SetPaletteOverride((*((u8*)(r4 + 1)) + 1), 6, (*((u8*)(r4 + 2)) << 2));
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 1)) = (*((u8*)(r4 + 1)) + 1);
    *((u8*)(r4 + 2)) = (*((u8*)(r4 + 2)) + 1);
}



void ov03_0225874C(void) {
}



void ov03_02258764(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r6, r0, #0
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _022587C2
    // add r0, r6, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r6, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Save_Bag_Get
    // ldr r1, _022587C8 ; =ov03_022597F0
    // mov r2, #0xb
    // bl Bag_CreateView
    // str r0, [r4, #4]
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // str r0, [sp]
    // add r3, r5, #0
    // add r3, #0x94
    // ldr r0, [r4, #4]
    // ldr r1, [r5, #0xc]
    // ldr r3, [r3]
    // mov r2, #2
    // bl sub_0207789C
    // ldr r1, [r4, #4]
    // add r0, r5, #0
    // bl Bag_LaunchApp
    // ldr r1, _022587CC ; =sub_02092B04
    // add r0, r6, #0
    // add r2, r4, #0
    // bl TaskManager_Jump
    // ldr r0, _022587D0 ; =0x00000272
    // mov r1, #0x18
    // strb r1, [r4, r0]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _022587C8: .word ov03_022597F0
    // _022587CC: .word sub_02092B04
    // _022587D0: .word 0x00000272
    // TODO: decompile
}



void ov03_022587D4(void) {
}



void ov03_022587E8(void) {
    // add r0, r0, r2
    // add r0, r0, r2
}



void ov03_02258810(void) {
}



void ov03_02258814(void) {
    // ldr r3, _02258820 ; =sub_0203410C
    // add r2, r0, #0
    // ldr r0, _02258824 ; =ov03_022597FC
    // mov r1, #1
    // bx r3
    // nop
    // _02258820: .word sub_0203410C
    // _02258824: .word ov03_022597FC
    // TODO: decompile
}



void ov03_02258828(void) {
}



void ov03_02258830(void) {
}



void ov03_0225884C(void) {
    sub_0203769C();
    SafariZone_SetAreaSet(*((u32*)(r4 + 4)), 1, r6);
    sub_02034818(r5);
    SafariZone_SetLinkLeaderFromProfile(*((u32*)(r4 + 4)), r0, 0xb);
}



void ov03_02258878(void) {
    // push {r4, lr}
    // ldr r1, _02258890 ; =0x000005D8
    // mov r0, #0xb
    // bl Heap_AllocAtEnd
    // ldr r2, _02258890 ; =0x000005D8
    // mov r1, #0
    // add r4, r0, #0
    // bl MI_CpuFill8
    // add r0, r4, #0
    // pop {r4, pc}
    // _02258890: .word 0x000005D8
    // TODO: decompile
}



void ov03_02258894(void) {
    TaskManager_GetEnvironment();
    Heap_Free(*((u32*)r0));
    // blx r1
}



void ov03_022588B0(void) {
    sub_02037B38(0xd);
    sub_0203769C();
    // sub r0, r1, r0
    sub_02034818(1);
    ov03_02258810(0, r4);
}



void ov03_022588D4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xc
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0225890A
    // mov r0, #1
    // bl sub_02034818
    // cmp r0, #0
    // beq _0225890A
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl SafariZone_GetAreaSet
    // add r1, r0, #0
    // mov r0, #0x16
    // bl sub_020376D4
    // mov r0, #0xd
    // bl sub_02037AC0
    // ldr r0, _0225890C ; =ov03_022588B0
    // add r1, r4, #0
    // bl ov03_02258810
    // pop {r4, pc}
    // _0225890C: .word ov03_022588B0
    // TODO: decompile
}



void ov03_02258910(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov03_02258878
    // add r4, r0, #0
    // ldr r0, [r5, #0xc]
    // bl Save_SafariZone_Get
    // str r0, [r4, #4]
    // add r0, r4, #0
    // bl ov03_02258814
    // mov r0, #0xc
    // bl sub_02037AC0
    // ldr r0, _02258944 ; =ov03_022588D4
    // add r1, r4, #0
    // bl ov03_02258810
    // ldr r0, [r5, #0x10]
    // ldr r1, _02258948 ; =ov03_02258894
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // nop
    // _02258944: .word ov03_022588D4
    // _02258948: .word ov03_02258894
    // TODO: decompile
}



void ScrCmd_716(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // mov r1, #0x14
    // bl FieldSysGetAttrAddr
    // add r4, r0, #0
    // add r0, r5, #0
    // add r0, #0x80
    // ldr r0, [r0]
    // bl SafariAreaCustomizer_LaunchApp
    // str r0, [r4]
    // ldr r1, _02258974 ; =ScrNative_WaitApplication_DestroyTaskData
    // add r0, r5, #0
    // bl SetupNativeScript
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _02258974: .word ScrNative_WaitApplication_DestroyTaskData
    // TODO: decompile
}



u32 ScrCmd_717(void) {
}



void ScrCmd_718(void) {
    // add r0, #0x80
    FieldSysGetAttrAddr(*((u32*)r0), 0x10);
    *((u32*)(r5 + 8)) = (*((u32*)(r5 + 8)) + 1);
    // ldrb r4, [r1]
    ScriptReadHalfword(r5, *((u32*)(r5 + 8)));
    // add r5, #0x80
    FieldSystem_VarGet(*((u32*)r5), r0);
    BufferSafariZoneObjectName(*((u32*)r6), r4, ((r0 << 0x18) >> 0x18));
}



u32 ScrCmd_719(void) {
}



void ScrCmd_720(void) {
    // add r0, #0x80
    FieldSysGetAttrAddr(*((u32*)r0), 0x10);
    ScriptReadHalfword(r4);
    // add r4, #0x80
    FieldSystem_VarGet(*((u32*)r4), r0);
    // str r0, [sp]
    PlayerAvatar_GetFacingDirection(*((u32*)(r5 + 0x40)));
    PlayerAvatar_GetXCoord(*((u32*)(r5 + 0x40)));
    GetDeltaXByFacingDirection(r4);
    PlayerAvatar_GetZCoord(*((u32*)(r5 + 0x40)));
    // str r0, [sp, #0x14]
    GetDeltaYByFacingDirection(r4);
    // add r2, r6, r7
    // sub r2, #0x20
    // asr r1, r2, #4
    // add r1, r2, r1
    // ldr r2, [sp, #0x14]
    // asr r1, r1, #5
    // add r2, r2, r0
    // sub r2, #0x20
    // asr r0, r2, #4
    // add r0, r2, r0
    // asr r2, r0, #5
    // add r0, r2, r0
    // add r0, r1, r0
    // str r0, [sp, #0x10]
    Save_SafariZone_Get(*((u32*)(r5 + 0xc)), (r1 >> 0x1b));
    SafariZone_GetAreaSet(0);
    // str r0, [sp, #0xc]
    ov01_021F6320(*((u32*)(r5 + 0x2c)));
    // add r2, sp, #0x20
    ov01_021F630C(((r0 << 0x18) >> 0x18), *((u32*)(r5 + 0x2c)));
    ov01_021F65E4(*((u32*)(r5 + 0x2c)), ((r4 << 0x18) >> 0x18));
    // str r0, [sp, #8]
    ov01_021F65F0(*((u32*)(r5 + 0x2c)), ((r4 << 0x18) >> 0x18));
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // mul r1, r0
    // ldr r0, [sp, #0xc]
    // add r0, r0, r1
    // ldr r0, [sp]
    // add r4, r1, r0
    Save_PlayerData_GetProfile(*((u32*)(r5 + 0xc)), (r0 + 2));
    PlayerProfile_GetTrainerGender();
    // ldrb r1, [r4]
    // add r0, sp, #0x1c
    GetSafariObjectConfig(((r0 << 0x18) >> 0x18));
    // mov ip, r0
    // add r0, sp, #0x1c
    // mov r0, ip
    // sub r1, r0, r1
    // mov r0, ip
    // mov r0, ip
    // add r7, sp, #0x1c
    // add r0, r1, r0
    // ldr r0, [sp, #4]
    // add r0, r0, r6
    // add r2, r0, r1
    // ldr r0, [sp, #8]
    // add r3, r0, r3
    // add r3, r3, r0
    // ldrb r0, [r2]
    // strh r0, [r3]
    // add r0, r0, r5
    // add r1, sp, #0x1c
    // mov r0, ip
    // mov ip, r0
    // sub r6, #0x20
    // sub r1, r0, r1
    // mov r0, ip
    // ldr r0, [sp, #0x20]
    ov01_021F3B44(*((u8*)(r4 + 3)), ((0 << 0x18) >> 0x18), (r2 + 1), ((((*((u8*)(*((u8*)(r4 + 3)) + 1)) << 0x19) << 5) << 1) + 2));
    // str r0, [sp, #0x18]
    ov01_021F3B30();
    // ldr r1, [sp, #0x18]
    // add r0, sp, #0x24
    ov01_021F3B0C();
    // ldr r0, [sp, #0x2c]
    // asr r1, r0, #0xc
    // add r1, #0xf8
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r3, r0, #0x10
    // ldr r0, [sp, #0x24]
    // asr r1, r0, #0xc
    // add r1, #0xf8
    // asr r0, r1, #3
    // add r0, r1, r0
    // asr r1, r0, #0x10
    // add r6, sp, #0x1c
    // add r2, r2, r6
    // sub r0, r0, r1
    // ldr r0, [sp, #0x18]
    ov01_021F3B2C(*((u8*)(r4 + 3)), 1, *((u8*)(r4 + 1)));
    // ldr r2, [sp]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    SafariZone_RemoveObjectFromArea(((r2 << 0x18) >> 0x18));
}



u32 ScrCmd_721(void) {
}



void ScrCmd_791(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r2, _02258CD4 ; =ov03_02259808
    // add r1, sp, #0x14
    // ldrh r3, [r2]
    // ldrh r2, [r2, #2]
    // add r5, r0, #0
    // strh r3, [r1]
    // strh r2, [r1, #2]
    // add r1, r5, #0
    // add r1, #0x80
    // ldr r2, [r5, #8]
    // ldr r4, [r1]
    // add r1, r2, #1
    // str r1, [r5, #8]
    // ldrb r1, [r2]
    // str r1, [sp, #8]
    // bl ScriptReadHalfword
    // add r5, #0x80
    // add r1, r0, #0
    // ldr r0, [r5]
    // bl GetVarPointer
    // str r0, [sp]
    // ldr r0, [r4, #0xc]
    // bl SaveArray_Party_Get
    // str r0, [sp, #4]
    // bl Party_GetCount
    // add r6, r0, #0
    // ldr r0, [r4, #0xc]
    // bl Save_PlayerData_GetProfile
    // bl PlayerProfile_GetTrainerID
    // str r0, [sp, #0xc]
    // ldr r0, _02258CD8 ; =0x00000165
    // bl MapHeader_GetMapSec
    // lsl r0, r0, #0x10
    // lsr r7, r0, #0x10
    // mov r5, #0
    // cmp r6, #0
    // ble _02258CCA
    // ldr r0, [sp, #8]
    // lsl r0, r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #4]
    // add r1, r5, #0
    // bl Party_GetMonByIndex
    // mov r1, #0x4c
    // mov r2, #0
    // add r4, r0, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02258CC4
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0xc]
    // cmp r1, r0
    // bne _02258CC4
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0x10]
    // add r2, sp, #0x14
    // ldrh r1, [r2, r1]
    // cmp r1, r0
    // bne _02258CC4
    // add r0, r4, #0
    // mov r1, #0x98
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02258CC4
    // add r0, r4, #0
    // mov r1, #0x99
    // mov r2, #0
    // bl GetMonData
    // cmp r7, r0
    // bne _02258CC4
    // ldr r0, [sp]
    // mov r1, #1
    // strh r1, [r0]
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r5, r5, #1
    // cmp r5, r6
    // blt _02258C62
    // ldr r1, [sp]
    // mov r0, #0
    // strh r0, [r1]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _02258CD4: .word ov03_02259808
    // _02258CD8: .word 0x00000165
    // TODO: decompile
}



u32 ScrCmd_792(void) {
}



void ov03_02258CFC(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // mov r0, #0xb
    // mov r1, #0x40
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4]
    // str r6, [r4, #4]
    // ldr r0, [r5, #8]
    // str r0, [r4, #0xc]
    // str r5, [r4, #8]
    // ldr r0, [r5, #0xc]
    // bl Save_Pokeathlon_Get
    // str r0, [r4, #0x20]
    // bl PokeathlonSave_GetUnkB00
    // str r0, [r4, #0x24]
    // ldr r0, [r5, #0x10]
    // ldr r1, _02258D38 ; =ov03_02258D3C
    // add r2, r4, #0
    // bl TaskManager_Call
    // pop {r4, r5, r6, pc}
    // nop
    // _02258D38: .word ov03_02258D3C
    // TODO: decompile
}



void ov03_02258D3C(void) {
    TaskManager_GetFieldSystem();
    TaskManager_GetEnvironment(r4);
    ov03_02258DE8(*((u32*)r0));
    ov03_02258EE8(r4, *((u32*)(r4 + 4)));
    // str r0, [r4]
    ov03_02258D88((*((u32*)r4) + 1));
    ov03_02258E88(r4);
    Heap_Free(r4);
}



void ov03_02258D88(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl System_GetTouchNew
    // cmp r0, #0
    // beq _02258DAC
    // ldr r0, _02258DDC ; =0x000005DD
    // bl PlaySE
    // mov r0, #0x43
    // ldr r1, [r4, #8]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // mov r1, #1
    // bl MenuInputStateMgr_SetState
    // mov r0, #1
    // pop {r4, pc}
    // ldr r0, _02258DE0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // ldr r0, _02258DE4 ; =0x00000CF3
    // tst r0, r1
    // beq _02258DC4
    // mov r0, #0x43
    // ldr r1, [r4, #8]
    // lsl r0, r0, #2
    // add r0, r1, r0
    // mov r1, #0
    // bl MenuInputStateMgr_SetState
    // ldr r0, _02258DE0 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #3
    // tst r0, r1
    // beq _02258DD8
    // ldr r0, _02258DDC ; =0x000005DD
    // bl PlaySE
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _02258DDC: .word 0x000005DD
    // _02258DE0: .word gSystem
    // _02258DE4: .word 0x00000CF3
    // TODO: decompile
}



void ov03_02258DE8(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // mov r1, #1
    // add r4, r0, #0
    // str r1, [sp]
    // mov r0, #0x1c
    // str r0, [sp, #4]
    // mov r0, #0x16
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, r4, #0
    // ldr r0, [r4, #0xc]
    // add r1, #0x10
    // mov r2, #3
    // mov r3, #2
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r4, #0xc]
    // ldr r2, _02258E84 ; =0x000003D9
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // add r0, r4, #0
    // ldr r2, _02258E84 ; =0x000003D9
    // add r0, #0x10
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // add r0, r4, #0
    // add r0, #0x10
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r1, #0x1b
    // add r2, r1, #0
    // mov r0, #0
    // add r2, #0xfa
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // str r0, [r4, #0x28]
    // mov r0, #3
    // mov r1, #0x10
    // mov r2, #4
    // bl MessageFormat_New_Custom
    // str r0, [r4, #0x2c]
    // mov r0, #0x80
    // mov r1, #4
    // bl String_New
    // str r0, [r4, #0x30]
    // mov r0, #0x80
    // mov r1, #4
    // bl String_New
    // str r0, [r4, #0x34]
    // ldr r0, [r4, #0x28]
    // mov r1, #1
    // bl NewString_ReadMsgData
    // str r0, [r4, #0x38]
    // ldr r0, [r4, #0x28]
    // mov r1, #3
    // bl NewString_ReadMsgData
    // str r0, [r4, #0x3c]
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _02258E84: .word 0x000003D9
    // TODO: decompile
}



void ov03_02258E88(void) {
    String_Delete(*((u32*)(r0 + 0x3c)));
    String_Delete(*((u32*)(r4 + 0x38)));
    String_Delete(*((u32*)(r4 + 0x34)));
    String_Delete(*((u32*)(r4 + 0x30)));
    MessageFormat_Delete(*((u32*)(r4 + 0x2c)));
    DestroyMsgData(*((u32*)(r4 + 0x28)));
    // add r0, #0x10
    sub_0200E5D4(r4, 1);
    // add r0, #0x10
    RemoveWindow(r4);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r4 + 0xc)), 3);
}



void ov03_02258ECC(void) {
}



void ov03_02258EE8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r2, _02258F44 ; =ov03_0225980C
    // add r6, r0, #0
    // lsl r0, r1, #2
    // str r0, [sp]
    // ldr r0, [r2, r0]
    // mov r7, #0
    // cmp r0, #0
    // ble _02258F32
    // mov r0, #0xa
    // add r4, r1, #0
    // mul r4, r0
    // mov r5, #8
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov03_02258ECC
    // cmp r0, #0
    // beq _02258F1A
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // bl ov03_02258F8C
    // b _02258F22
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov03_02258F48
    // ldr r1, _02258F44 ; =ov03_0225980C
    // ldr r0, [sp]
    // add r7, r7, #1
    // ldr r0, [r1, r0]
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r7, r0
    // blt _02258F02
    // add r0, r6, #0
    // add r0, #0x10
    // bl ScheduleWindowCopyToVram
    // ldr r0, [r6, #0xc]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // pop {r3, r4, r5, r6, r7, pc}
    // _02258F44: .word ov03_0225980C
    // TODO: decompile
}



void ov03_02258F48(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r5, r0, #0
    // str r4, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02258F88 ; =0x0001020F
    // mov r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x3c]
    // add r0, #0x10
    // mov r3, #8
    // bl AddTextPrinterParameterizedWithColor
    // str r4, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02258F88 ; =0x0001020F
    // mov r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x38]
    // add r0, #0x10
    // mov r3, #8
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _02258F88: .word 0x0001020F
    // TODO: decompile
}



void ov03_02258F8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r6, r2, #0
    // add r4, r1, #0
    // ldr r0, [r5, #0x28]
    // ldr r2, [r5, #0x34]
    // add r1, r6, #4
    // bl ReadMsgDataIntoString
    // str r4, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02259064 ; =0x0001020F
    // mov r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x34]
    // add r0, #0x10
    // mov r3, #8
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [r5, #0x24]
    // add r1, r6, #0
    // bl ov03_02259070
    // add r7, r0, #0
    // ldr r0, _02259068 ; =0x0098967F
    // cmp r7, r0
    // blo _02258FCC
    // add r7, r0, #0
    // cmp r6, #9
    // bne _02259028
    // ldr r0, [r5, #0x28]
    // ldr r2, [r5, #0x30]
    // mov r1, #2
    // bl ReadMsgDataIntoString
    // add r0, r7, #0
    // mov r1, #0x3c
    // bl _u32_div_f
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r0, r7, #0
    // mov r1, #0x3c
    // bl _u32_div_f
    // lsl r0, r1, #0x10
    // lsr r7, r0, #0x10
    // ldr r0, _0225906C ; =0x000003E7
    // cmp r6, r0
    // bls _02258FFA
    // add r6, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x2c]
    // mov r1, #0
    // add r2, r6, #0
    // mov r3, #3
    // bl BufferIntegerAsString
    // mov r3, #2
    // str r3, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // ldr r0, [r5, #0x2c]
    // add r2, r7, #0
    // bl BufferIntegerAsString
    // ldr r0, [r5, #0x2c]
    // ldr r1, [r5, #0x34]
    // ldr r2, [r5, #0x30]
    // bl StringExpandPlaceholders
    // b _02259036
    // mov r3, #1
    // str r3, [sp]
    // ldr r0, [r5, #0x34]
    // add r1, r7, #0
    // mov r2, #7
    // bl String16_FormatInteger
    // mov r0, #0
    // ldr r1, [r5, #0x34]
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov r1, #0xe0
    // sub r3, r1, r0
    // str r4, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02259064 ; =0x0001020F
    // mov r1, #0
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r2, [r5, #0x34]
    // add r0, #0x10
    // sub r3, #8
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02259064: .word 0x0001020F
    // _02259068: .word 0x0098967F
    // _0225906C: .word 0x000003E7
    // TODO: decompile
}



void ov03_02259070(void) {
    // sub r1, #0xa
    // add r0, r0, r1
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02259092: ; jump table
    // add r3, r3, r1
}


