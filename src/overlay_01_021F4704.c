/* Decompiled from asm/overlay_01_021F4704.s */
#include "global.h"

void ov01_021F4704(void) {
    // push {r4, r5, r6, lr}
    // add r6, r2, #0
    // add r5, r1, #0
    // add r1, r6, #0
    // bl _s32_div_f
    // add r4, r1, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl _s32_div_f
    // cmp r4, r1
    // bne _021F4722
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F4728(void) {
    // push {r4, r5, r6, lr}
    // add r6, r2, #0
    // add r5, r1, #0
    // add r1, r6, #0
    // bl _s32_div_f
    // add r4, r0, #0
    // add r0, r5, #0
    // add r1, r6, #0
    // bl _s32_div_f
    // cmp r4, r0
    // bne _021F4746
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F474C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x30
    // add r4, r1, #0
    // mul r4, r0
    // add r1, r5, r4
    // ldr r0, [r1, #0x14]
    // cmp r0, #0
    // beq _021F4764
    // ldr r0, [r1, #0xc]
    // bl ov01_021F6614
    // add r1, r5, r4
    // ldr r0, [r1, #0x18]
    // cmp r0, #0
    // beq _021F4772
    // ldr r0, [r1, #0x10]
    // bl ov01_021FB354
    // mov r1, #1
    // add r0, r5, r4
    // str r1, [r0, #0x28]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F477C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // cmp r0, #0
    // beq _021F478C
    // ldr r0, [r4, #8]
    // bl ov01_021F6614
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _021F4798
    // ldr r0, [r4, #0xc]
    // bl ov01_021FB354
    // mov r0, #0
    // str r0, [r4, #0x10]
    // str r0, [r4, #0x14]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F47A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r2, #0
    // asr r2, r0, #4
    // lsr r2, r2, #0x1b
    // add r2, r0, r2
    // asr r7, r2, #5
    // asr r2, r1, #4
    // lsr r2, r2, #0x1b
    // add r2, r1, r2
    // asr r6, r2, #5
    // ldr r2, [sp, #0x18]
    // str r3, [sp]
    // ldr r4, [sp, #0x1c]
    // bl ov01_021F5A28
    // ldr r1, [sp, #0x18]
    // bl ov01_021F6328
    // add r1, r6, #0
    // mul r1, r5
    // add r1, r7, r1
    // cmp r0, #3
    // bhi _021F4886
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F47DA: ; jump table
    // sub r2, r1, r5
    // str r1, [r4, #0xc]
    // sub r0, r2, #1
    // str r0, [r4]
    // str r2, [r4, #4]
    // sub r0, r1, #1
    // str r0, [r4, #8]
    // sub r0, r7, #1
    // bpl _021F47FC
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4]
    // str r0, [r4, #8]
    // sub r0, r6, #1
    // bpl _021F488A
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // str r1, [r4, #8]
    // sub r0, r1, r5
    // str r0, [r4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // add r0, r1, #1
    // str r0, [r4, #0xc]
    // add r0, r7, #1
    // cmp r0, r5
    // blt _021F4824
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4, #4]
    // str r0, [r4, #0xc]
    // sub r0, r6, #1
    // bpl _021F488A
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // str r1, [r4, #4]
    // sub r0, r1, #1
    // add r1, r1, r5
    // str r0, [r4]
    // sub r0, r1, #1
    // str r0, [r4, #8]
    // str r1, [r4, #0xc]
    // sub r0, r7, #1
    // bpl _021F484A
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4]
    // str r0, [r4, #8]
    // ldr r0, [sp]
    // add r1, r6, #1
    // cmp r1, r0
    // ble _021F488A
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // str r1, [r4]
    // add r0, r1, #1
    // str r0, [r4, #4]
    // add r0, r1, r5
    // str r0, [r4, #8]
    // add r0, r0, #1
    // str r0, [r4, #0xc]
    // add r0, r7, #1
    // cmp r0, r5
    // blt _021F4876
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4, #4]
    // str r0, [r4, #0xc]
    // ldr r0, [sp]
    // add r1, r6, #1
    // cmp r1, r0
    // ble _021F488A
    // mov r0, #0
    // mvn r0, r0
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F488C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // str r1, [sp]
    // mov r6, #0
    // ldr r1, _021F4964 ; =0x00000A74
    // mov r0, #4
    // bl Heap_Alloc
    // ldr r2, _021F4964 ; =0x00000A74
    // mov r1, #0
    // add r7, r0, #0
    // bl MI_CpuFill8
    // lsl r4, r6, #2
    // add r0, r5, r4
    // add r0, #0x90
    // str r7, [r0]
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r2, [r0]
    // ldr r0, _021F4968 ; =0x00000864
    // mov r1, #0
    // str r1, [r2, r0]
    // add r2, r5, r4
    // add r2, #0x90
    // ldr r3, [r2]
    // ldr r2, _021F496C ; =0x00000854
    // ldr r1, [r5]
    // add r0, r6, #0
    // add r2, r3, r2
    // bl ov01_021FACE4
    // add r2, r5, r4
    // add r2, #0x90
    // ldr r3, [r2]
    // ldr r2, _021F4970 ; =0x00000858
    // ldr r1, [r5]
    // add r0, r6, #0
    // add r2, r3, r2
    // bl ov01_021FACEC
    // add r1, r5, #0
    // add r1, #0xbc
    // ldr r1, [r1]
    // mov r0, #4
    // bl ov01_021F3638
    // add r1, r5, r4
    // add r1, #0x90
    // ldr r2, [r1]
    // ldr r1, _021F4974 ; =0x00000868
    // str r0, [r2, r1]
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r2, [r0]
    // mov r1, #0
    // mov r0, #0x86
    // mvn r1, r1
    // lsl r0, r0, #4
    // str r1, [r2, r0]
    // add r0, r1, #0
    // add r1, r5, r4
    // add r1, #0x90
    // mov r2, #2
    // ldr r1, [r1]
    // lsl r2, r2, #0xa
    // bl MIi_CpuClearFast
    // ldr r0, [sp]
    // cmp r0, #0
    // beq _021F4944
    // mov r0, #4
    // lsl r1, r0, #8
    // bl Heap_Alloc
    // add r1, r5, r4
    // add r1, #0x90
    // ldr r2, [r1]
    // mov r1, #0xa7
    // lsl r1, r1, #4
    // str r0, [r2, r1]
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r1, [r0]
    // mov r0, #0xa7
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r2, #1
    // mov r1, #0xff
    // lsl r2, r2, #0xa
    // bl MI_CpuFill8
    // add r1, r5, r4
    // add r1, #0x90
    // ldr r2, [r1]
    // ldr r1, _021F4978 ; =0x0000086C
    // mov r0, #0
    // add r1, r2, r1
    // mov r2, #0x81
    // lsl r2, r2, #2
    // bl MIi_CpuClear32
    // add r0, r6, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // cmp r6, #4
    // blo _021F4894
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F4964: .word 0x00000A74
    // _021F4968: .word 0x00000864
    // _021F496C: .word 0x00000854
    // _021F4970: .word 0x00000858
    // _021F4974: .word 0x00000868
    // _021F4978: .word 0x0000086C
    // TODO: decompile
}


void ov01_021F497C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r6, #0
    // ldr r1, _021F49EC ; =0x00000A74
    // mov r0, #4
    // bl Heap_Alloc
    // ldr r2, _021F49EC ; =0x00000A74
    // mov r1, #0
    // add r7, r0, #0
    // bl MI_CpuFill8
    // lsl r4, r6, #2
    // add r0, r5, r4
    // add r0, #0x90
    // str r7, [r0]
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r2, [r0]
    // ldr r0, _021F49F0 ; =0x00000864
    // mov r1, #0
    // str r1, [r2, r0]
    // add r2, r5, r4
    // add r2, #0x90
    // ldr r3, [r2]
    // ldr r2, _021F49F4 ; =0x00000854
    // ldr r1, [r5]
    // add r0, r6, #0
    // add r2, r3, r2
    // bl ov01_021FACE4
    // add r1, r5, #0
    // add r1, #0xbc
    // ldr r1, [r1]
    // mov r0, #4
    // bl ov01_021F3638
    // add r1, r5, r4
    // add r1, #0x90
    // ldr r2, [r1]
    // ldr r1, _021F49F8 ; =0x00000868
    // str r0, [r2, r1]
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r2, [r0]
    // mov r1, #0
    // mov r0, #0x86
    // mvn r1, r1
    // lsl r0, r0, #4
    // str r1, [r2, r0]
    // add r0, r6, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // cmp r6, #4
    // blo _021F4982
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F49EC: .word 0x00000A74
    // _021F49F0: .word 0x00000864
    // _021F49F4: .word 0x00000854
    // _021F49F8: .word 0x00000868
    // TODO: decompile
}


void ov01_021F49FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r7, r1, #0
    // add r5, r2, #0
    // cmp r6, #0
    // beq _021F4A22
    // mov r0, #4
    // mov r1, #0x10
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // mov r2, #0
    // mov r3, #0x10
    // str r4, [sp]
    // bl NARC_ReadFromMember
    // b _021F4A38
    // bl GF_AssertFail
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0x41
    // add r1, r7, #0
    // mov r2, #4
    // mov r3, #0
    // bl AllocAtEndAndReadFromNarcMemberByIdPair
    // add r4, r0, #0
    // ldr r0, [r4]
    // str r0, [r5]
    // ldr r0, [r4, #4]
    // str r0, [r5, #0xc]
    // ldr r0, [r4, #8]
    // str r0, [r5, #4]
    // ldr r0, [r4, #0xc]
    // str r0, [r5, #8]
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F4A50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r0, [sp, #0x20]
    // add r5, r1, #0
    // add r6, r2, #0
    // add r4, r3, #0
    // cmp r0, #0
    // beq _021F4A72
    // ldr r0, _021F4AA4 ; =0x00000808
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _021F4A6C
    // bl GF_AssertFail
    // ldr r0, _021F4AA4 ; =0x00000808
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // blt _021F4A7E
    // ldr r1, [sp, #0x1c]
    // cmp r0, r1
    // blt _021F4A82
    // ldr r0, _021F4AA8 ; =0x0000FFFF
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r6, #0
    // bl GetMapModelNo
    // add r4, r0, #0
    // ldr r0, _021F4AA8 ; =0x0000FFFF
    // cmp r4, r0
    // beq _021F4A9E
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r0, [r5, r0]
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov01_021F49FC
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F4AA4: .word 0x00000808
    // _021F4AA8: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F4AAC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // add r4, r1, #0
    // ldr r2, _021F4AE0 ; =0x0000086C
    // ldr r0, [r5, r0]
    // mov r1, #4
    // add r2, r4, r2
    // bl NARC_ReadFile
    // ldr r2, _021F4AE0 ; =0x0000086C
    // ldr r0, [r4, r2]
    // asr r0, r0, #0x10
    // lsl r0, r0, #0x10
    // lsr r1, r0, #0x10
    // beq _021F4ADC
    // mov r0, #1
    // lsl r0, r0, #8
    // add r2, r2, #4
    // ldr r0, [r5, r0]
    // add r2, r4, r2
    // bl NARC_ReadFile
    // pop {r3, r4, r5, pc}
    // nop
    // _021F4AE0: .word 0x0000086C
    // TODO: decompile
}


void ov01_021F4AE4(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // mov r1, #1
    // lsl r1, r1, #8
    // ldr r0, [r0, r1]
    // add r1, r2, #0
    // add r2, r4, #0
    // bl NARC_ReadFile
    // mov r0, #0xa7
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _021F4B1A
    // mov r0, #0xa7
    // mov r1, #1
    // mov r5, #0
    // add r6, r4, #0
    // lsl r0, r0, #4
    // lsl r1, r1, #0xa
    // ldrh r3, [r6]
    // ldr r2, [r4, r0]
    // add r6, r6, #2
    // strb r3, [r2, r5]
    // add r5, r5, #1
    // cmp r5, r1
    // blt _021F4B0C
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F4B1C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // add r7, r1, #0
    // str r0, [sp, #0xc]
    // add r4, r3, #0
    // ldr r1, [sp, #0xc]
    // add r0, r4, #0
    // str r2, [sp, #8]
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // lsr r6, r0, #0x10
    // ldr r1, [sp, #0xc]
    // add r0, r4, #0
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r6, #1
    // blo _021F4B56
    // cmp r6, #3
    // bhi _021F4B56
    // cmp r4, #1
    // blo _021F4B56
    // cmp r4, #2
    // bls _021F4B70
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r1, [sp, #8]
    // ldr r2, _021F4BE4 ; =0x00000868
    // ldr r0, [r5, r0]
    // add r5, #0xf4
    // ldr r1, [r1, #0xc]
    // ldr r2, [r7, r2]
    // ldr r3, [r5]
    // bl ov01_021F3744
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Save_SafariZone_Get
    // str r0, [sp, #0x14]
    // bl sub_0202F620
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // bl SafariZone_GetAreaSet
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // bne _021F4BA6
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Save_PlayerData_GetProfile
    // bl PlayerProfile_GetTrainerGender
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // b _021F4BAC
    // ldr r0, [sp, #0x14]
    // bl SafariZone_GetLinkLeaderGender
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // lsl r0, r0, #8
    // sub r4, r4, #1
    // ldr r0, [r5, r0]
    // add r5, #0xf4
    // sub r3, r6, #1
    // lsl r3, r3, #0x10
    // ldr r1, _021F4BE4 ; =0x00000868
    // lsl r4, r4, #0x10
    // ldr r2, [r5]
    // lsr r5, r4, #0x10
    // lsl r4, r5, #1
    // lsr r3, r3, #0x10
    // add r4, r5, r4
    // add r4, r3, r4
    // mov r3, #0x7a
    // add r5, r4, #0
    // mul r5, r3
    // ldr r3, [sp, #0x10]
    // ldr r1, [r7, r1]
    // add r3, r3, r5
    // bl ov01_021F3834
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F4BE4: .word 0x00000868
    // TODO: decompile
}


void ov01_021F4BE8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // ldr r4, [sp, #0x28]
    // add r6, r0, #0
    // ldr r0, [r4, #0x10]
    // add r5, r1, #0
    // add r0, r0, #1
    // str r0, [r4, #0x10]
    // add r0, r3, #0
    // add r7, r2, #0
    // bl ov01_021FB9CC
    // ldr r1, _021F4C64 ; =0x00000854
    // mov r3, #1
    // add r2, r5, r1
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // add r1, #0x10
    // str r0, [sp, #8]
    // add r0, r5, r1
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // add r0, #0x10
    // str r0, [sp, #0x10]
    // lsl r3, r3, #8
    // ldr r0, [r6, r3]
    // lsl r3, r3, #3
    // ldr r1, [sp, #0x2c]
    // ldr r2, [r7, #4]
    // add r3, r5, r3
    // bl ov01_021F676C
    // str r0, [r4, #8]
    // ldr r0, [sp, #0x30]
    // cmp r0, #0
    // beq _021F4C5E
    // ldr r0, [r4, #0x14]
    // ldr r2, _021F4C68 ; =0x00000858
    // add r0, r0, #1
    // str r0, [r4, #0x14]
    // add r0, r5, r2
    // str r0, [sp]
    // add r0, r4, #0
    // add r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #1
    // lsl r0, r0, #8
    // add r2, r2, #4
    // add r3, r4, #0
    // ldr r0, [r6, r0]
    // ldr r1, [r7, #8]
    // ldr r2, [r5, r2]
    // add r3, #0x14
    // bl ov01_021FB308
    // str r0, [r4, #0xc]
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F4C64: .word 0x00000854
    // _021F4C68: .word 0x00000858
    // TODO: decompile
}


void ov01_021F4C6C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r0, r3, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl ov01_021FB9CC
    // mov r2, #1
    // str r0, [sp]
    // lsl r2, r2, #8
    // ldr r3, _021F4D04 ; =0x00000854
    // ldr r0, [r5, r2]
    // lsl r2, r2, #3
    // ldr r1, [r6, #4]
    // add r2, r4, r2
    // add r3, r4, r3
    // bl ov01_021F67B4
    // ldr r1, [sp, #0x20]
    // cmp r1, #0
    // beq _021F4C9C
    // bl ov01_021EA3B0
    // ldr r3, _021F4D08 ; =0x00000864
    // mov r0, #1
    // ldr r2, [sp, #0x1c]
    // str r0, [r4, r3]
    // sub r1, r3, #4
    // str r2, [r4, r1]
    // ldr r1, [sp, #0x24]
    // cmp r1, #0
    // beq _021F4CFE
    // add r2, r3, #0
    // add r0, #0xff
    // sub r2, #8
    // sub r3, #0xc
    // ldr r0, [r5, r0]
    // ldr r1, [r6, #8]
    // ldr r2, [r4, r2]
    // ldr r3, [r4, r3]
    // bl ov01_021FB270
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // cmp r3, #0
    // beq _021F4CD8
    // ldr r2, _021F4D0C ; =0x00000868
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x1c]
    // ldr r2, [r4, r2]
    // blx r3
    // add r0, r5, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl ov01_02204698
    // cmp r0, #0
    // beq _021F4CFE
    // ldr r0, [sp, #0x18]
    // bl sub_02054E20
    // cmp r0, #0
    // bne _021F4CFE
    // add r5, #0xf8
    // mov r1, #2
    // lsl r1, r1, #0xa
    // ldr r0, [r5]
    // add r1, r4, r1
    // bl ov01_02204678
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _021F4D04: .word 0x00000854
    // _021F4D08: .word 0x00000864
    // _021F4D0C: .word 0x00000868
    // TODO: decompile
}


void ov01_021F4D10(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // ldr r5, [sp, #0x40]
    // lsl r4, r0, #2
    // add r0, r5, r4
    // ldr r0, [r0, #0x18]
    // ldr r6, [sp, #0x3c]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r1, [sp, #0xc]
    // mul r0, r3
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r3, [r5, r4]
    // add r0, sp, #0x10
    // add r1, r6, #0
    // bl ov01_021F4A50
    // add r7, r0, #0
    // ldr r0, _021F4D80 ; =0x0000FFFF
    // cmp r7, r0
    // beq _021F4D7C
    // ldr r1, [r5, r4]
    // add r0, r6, #0
    // bl ov01_021F4AAC
    // ldr r1, [r5, r4]
    // ldr r2, [sp, #0x10]
    // add r0, r6, #0
    // bl ov01_021F4AE4
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r3, [r5, r4]
    // ldr r2, _021F4D84 ; =0x00000868
    // ldr r0, [r6, r0]
    // ldr r2, [r3, r2]
    // add r3, r6, #0
    // add r3, #0xf4
    // ldr r1, [sp, #0x1c]
    // ldr r3, [r3]
    // bl ov01_021F3744
    // str r5, [sp]
    // str r7, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r1, [r5, r4]
    // ldr r3, [sp, #0xc]
    // add r0, r6, #0
    // add r2, sp, #0x10
    // bl ov01_021F4BE8
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F4D80: .word 0x0000FFFF
    // _021F4D84: .word 0x00000868
    // TODO: decompile
}


void ov01_021F4D88(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x30
    // str r1, [sp, #0xc]
    // ldr r1, _021F4E10 ; =0x00000828
    // lsl r6, r0, #2
    // add r1, sp
    // ldr r4, [r1, #0x18]
    // ldr r5, [r1, #0x14]
    // add r0, r4, r6
    // ldr r0, [r0, #0x18]
    // str r0, [sp]
    // ldr r0, [r1, #0x10]
    // add r1, r5, #0
    // mul r0, r3
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r3, [r4, r6]
    // add r0, sp, #0x10
    // bl ov01_021F4A50
    // add r7, r0, #0
    // ldr r0, _021F4E14 ; =0x0000FFFF
    // cmp r7, r0
    // beq _021F4E04
    // ldr r1, [r4, r6]
    // add r0, r5, #0
    // bl ov01_021F4AAC
    // mov r1, #1
    // lsl r1, r1, #8
    // ldr r0, [r5, r1]
    // lsl r1, r1, #3
    // add r2, sp, #0x20
    // bl NARC_ReadFile
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r3, [r4, r6]
    // ldr r2, _021F4E18 ; =0x00000868
    // ldr r0, [r5, r0]
    // ldr r2, [r3, r2]
    // add r3, r5, #0
    // add r3, #0xf4
    // ldr r1, [sp, #0x1c]
    // ldr r3, [r3]
    // bl ov01_021F3744
    // str r4, [sp]
    // str r7, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r1, [r4, r6]
    // ldr r3, [sp, #0xc]
    // add r0, r5, #0
    // add r2, sp, #0x10
    // bl ov01_021F4BE8
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F4E10: .word 0x00000828
    // _021F4E14: .word 0x0000FFFF
    // _021F4E18: .word 0x00000868
    // TODO: decompile
}


void ov01_021F4E1C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // ldr r5, [sp, #0x40]
    // lsl r4, r0, #2
    // add r7, r5, #0
    // add r7, #0x18
    // ldr r0, [r7, r4]
    // ldr r6, [sp, #0x3c]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r1, [sp, #0xc]
    // mul r0, r3
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r3, [r5, r4]
    // add r0, sp, #0x14
    // add r1, r6, #0
    // bl ov01_021F4A50
    // ldr r1, _021F4E84 ; =0x0000FFFF
    // str r0, [sp, #0x10]
    // cmp r0, r1
    // beq _021F4E80
    // ldr r1, [r5, r4]
    // add r0, r6, #0
    // bl ov01_021F4AAC
    // ldr r1, [r5, r4]
    // ldr r2, [sp, #0x14]
    // add r0, r6, #0
    // bl ov01_021F4AE4
    // ldr r1, [r5, r4]
    // ldr r3, [r7, r4]
    // add r0, r6, #0
    // add r2, sp, #0x14
    // bl ov01_021F4B1C
    // ldr r0, [sp, #0x10]
    // str r5, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r1, [r5, r4]
    // ldr r3, [sp, #0xc]
    // add r0, r6, #0
    // add r2, sp, #0x14
    // bl ov01_021F4BE8
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _021F4E84: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F4E88(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r7, r0, #0
    // lsl r5, r1, #2
    // ldr r6, [sp, #0x4c]
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x44]
    // add r4, r6, #0
    // mul r0, r1
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r2, [sp, #0x10]
    // add r4, #0x90
    // add r2, r3, #0
    // ldr r3, [r4, r5]
    // add r0, sp, #0x18
    // add r1, r6, #0
    // bl ov01_021F4A50
    // ldr r1, _021F4F04 ; =0x0000FFFF
    // str r0, [sp, #0x14]
    // cmp r0, r1
    // beq _021F4EFE
    // ldr r1, [r4, r5]
    // add r0, r6, #0
    // bl ov01_021F4AAC
    // ldr r1, [r4, r5]
    // ldr r2, [sp, #0x18]
    // add r0, r6, #0
    // bl ov01_021F4AE4
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r3, [r4, r5]
    // ldr r2, _021F4F08 ; =0x00000868
    // ldr r0, [r6, r0]
    // ldr r2, [r3, r2]
    // add r3, r6, #0
    // add r3, #0xf4
    // ldr r1, [sp, #0x24]
    // ldr r3, [r3]
    // bl ov01_021F3744
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x48]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r5]
    // add r0, r6, #0
    // add r2, sp, #0x18
    // bl ov01_021F4C6C
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F4F04: .word 0x0000FFFF
    // _021F4F08: .word 0x00000868
    // TODO: decompile
}


void ov01_021F4F0C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x1fc
    // sub sp, #0x38
    // add r7, r0, #0
    // ldr r0, _021F4FA4 ; =0x00000830
    // str r2, [sp, #0x10]
    // add r0, sp
    // ldr r5, [r0, #0x1c]
    // lsl r4, r1, #2
    // ldr r1, [r0, #0x10]
    // ldr r0, [r0, #0x14]
    // add r6, r5, #0
    // mul r0, r1
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // add r6, #0x90
    // add r2, r3, #0
    // ldr r3, [r6, r4]
    // add r0, sp, #0x18
    // add r1, r5, #0
    // bl ov01_021F4A50
    // ldr r1, _021F4FA8 ; =0x0000FFFF
    // str r0, [sp, #0x14]
    // cmp r0, r1
    // beq _021F4F96
    // ldr r1, [r6, r4]
    // add r0, r5, #0
    // bl ov01_021F4AAC
    // mov r1, #1
    // lsl r1, r1, #8
    // ldr r0, [r5, r1]
    // lsl r1, r1, #3
    // add r2, sp, #0x28
    // bl NARC_ReadFile
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r3, [r6, r4]
    // ldr r2, _021F4FAC ; =0x00000868
    // ldr r0, [r5, r0]
    // ldr r2, [r3, r2]
    // add r3, r5, #0
    // add r3, #0xf4
    // ldr r1, [sp, #0x24]
    // ldr r3, [r3]
    // bl ov01_021F3744
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, _021F4FA4 ; =0x00000830
    // str r7, [sp, #4]
    // add r0, sp
    // ldr r0, [r0, #0x18]
    // add r2, sp, #0x18
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r1, [r6, r4]
    // add r0, r5, #0
    // bl ov01_021F4C6C
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x1fc
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F4FA4: .word 0x00000830
    // _021F4FA8: .word 0x0000FFFF
    // _021F4FAC: .word 0x00000868
    // TODO: decompile
}


void ov01_021F4FB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r7, r0, #0
    // lsl r5, r1, #2
    // ldr r6, [sp, #0x4c]
    // ldr r1, [sp, #0x40]
    // ldr r0, [sp, #0x44]
    // add r4, r6, #0
    // mul r0, r1
    // str r7, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r2, [sp, #0x10]
    // add r4, #0x90
    // add r2, r3, #0
    // ldr r3, [r4, r5]
    // add r0, sp, #0x18
    // add r1, r6, #0
    // bl ov01_021F4A50
    // ldr r1, _021F5020 ; =0x0000FFFF
    // str r0, [sp, #0x14]
    // cmp r0, r1
    // beq _021F501A
    // ldr r1, [r4, r5]
    // add r0, r6, #0
    // bl ov01_021F4AAC
    // ldr r1, [r4, r5]
    // ldr r2, [sp, #0x18]
    // add r0, r6, #0
    // bl ov01_021F4AE4
    // ldr r1, [r4, r5]
    // add r0, r6, #0
    // add r2, sp, #0x18
    // add r3, r7, #0
    // bl ov01_021F4B1C
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x48]
    // str r7, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r1, [r4, r5]
    // add r0, r6, #0
    // add r2, sp, #0x18
    // bl ov01_021F4C6C
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F5020: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F5024(void) {
    // ldr r1, [r0]
    // cmp r1, #0
    // bne _021F5034
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _021F5034
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021F5038(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // str r3, [sp]
    // add r0, sp, #0x10
    // add r7, r1, #0
    // ldrb r1, [r0, #0x14]
    // mov r0, #0x30
    // str r2, [sp, #8]
    // add r5, r1, #0
    // mul r5, r0
    // add r0, r4, #0
    // str r0, [sp, #4]
    // add r0, #0x2c
    // str r0, [sp, #4]
    // ldr r0, [r0, r5]
    // cmp r0, #0
    // beq _021F5060
    // bl GF_AssertFail
    // ldr r0, [sp, #4]
    // mov r1, #1
    // str r1, [r0, r5]
    // add r6, r4, r5
    // add r0, sp, #0x10
    // add r1, r6, #0
    // ldrb r2, [r0, #0x18]
    // add r1, #0x30
    // add r5, r4, #0
    // strb r2, [r1]
    // add r2, r6, #0
    // ldr r1, [sp, #8]
    // str r7, [r6, #0x1c]
    // str r1, [r6, #0x20]
    // ldr r1, [sp]
    // add r2, #0x24
    // strb r1, [r2]
    // ldrb r0, [r0, #0x10]
    // add r1, r6, #0
    // add r1, #0x25
    // strb r0, [r1]
    // ldr r1, [sp]
    // add r5, #0x90
    // lsl r3, r1, #2
    // ldr r1, [r5, r3]
    // lsl r2, r0, #2
    // str r1, [r6, #4]
    // ldr r0, [r5, r2]
    // add r1, r6, #0
    // str r0, [r6, #8]
    // add r1, #0x26
    // mov r0, #0
    // strb r0, [r1]
    // str r0, [r6, #0x28]
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021F50B6
    // add r1, r4, #0
    // add r1, #0xb4
    // mov r0, #0
    // str r0, [r1]
    // mov r1, #0x86
    // ldr r0, [r5, r3]
    // lsl r1, r1, #4
    // str r7, [r0, r1]
    // ldr r2, [r5, r2]
    // ldr r0, [sp, #8]
    // str r0, [r2, r1]
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xa1
    // ldrb r0, [r0]
    // add r4, #0xa1
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r4]
    // mov r0, #1
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F50F0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r0, #0xa2
    // ldrb r1, [r0]
    // mov r0, #0x30
    // add r4, r5, #0
    // add r2, r5, #4
    // mul r0, r1
    // add r4, #0xd0
    // add r6, r2, r0
    // ldr r0, [r4, #0x20]
    // cmp r0, #1
    // bne _021F513A
    // ldr r2, [r4, #0xc]
    // cmp r2, #0
    // beq _021F513A
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // beq _021F5198
    // ldr r0, [r4, #0x14]
    // ldr r1, [r0]
    // ldr r0, [r4, #0x10]
    // ldr r0, [r0]
    // cmp r1, r0
    // ble _021F5128
    // bl GF_AssertFail
    // ldr r0, [r4, #0x10]
    // ldr r1, [r0]
    // ldr r0, [r4, #0x14]
    // ldr r0, [r0]
    // sub r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0x10
    // cmp r1, r0
    // bge _021F513C
    // b _021F5276
    // ldr r1, [r4, #0xc]
    // add r2, sp, #0x10
    // ldr r0, [r1]
    // ldr r1, [r1, #8]
    // add r3, sp, #0xc
    // bl ov01_021F61DC
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r2, r5, #0
    // bl ov01_021F5F64
    // ldr r2, [r4, #0xc]
    // add r3, r4, #0
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // str r0, [r3]
    // ldr r0, [r4, #8]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x11
    // sub r1, r1, r2
    // mov r0, #0x11
    // ror r1, r0
    // add r0, r2, r1
    // beq _021F517A
    // mov r0, #1
    // bl sub_02039AD8
    // cmp r0, #0
    // bne _021F5258
    // ldr r0, [r4, #8]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x11
    // sub r1, r1, r2
    // mov r0, #0x11
    // ror r1, r0
    // add r0, r2, r1
    // beq _021F518E
    // bl GF_AssertFail
    // mov r0, #0
    // str r0, [r4, #0x18]
    // str r0, [r4, #0x10]
    // str r0, [r4, #0x14]
    // b _021F5276
    // ldr r7, [r2]
    // ldr r3, [r4]
    // cmp r3, r7
    // beq _021F51AE
    // ldr r1, [r4, #8]
    // ldr r0, [r2, #8]
    // cmp r1, r0
    // beq _021F51AE
    // bl GF_AssertFail
    // b _021F5276
    // cmp r3, r7
    // bne _021F51BA
    // ldr r1, [r4, #8]
    // ldr r0, [r2, #8]
    // cmp r1, r0
    // beq _021F5276
    // mov r3, #1
    // str r3, [r4, #0x18]
    // ldr r2, [r4, #0xc]
    // ldr r0, [r4]
    // ldr r1, [r2]
    // cmp r0, r1
    // beq _021F520E
    // cmp r0, r1
    // ble _021F51D8
    // str r4, [r4, #0x10]
    // ldr r0, [r4, #0xc]
    // str r0, [r4, #0x14]
    // mov r0, #3
    // strb r0, [r4, #0x1c]
    // b _021F51DE
    // str r2, [r4, #0x10]
    // str r4, [r4, #0x14]
    // strb r3, [r4, #0x1c]
    // ldr r0, [r4]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x11
    // sub r1, r1, r2
    // mov r0, #0x11
    // ror r1, r0
    // add r0, r2, r1
    // beq _021F51F8
    // mov r0, #1
    // bl sub_02039AD8
    // cmp r0, #0
    // bne _021F5258
    // ldr r0, [r4]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x11
    // sub r1, r1, r2
    // mov r0, #0x11
    // ror r1, r0
    // add r0, r2, r1
    // beq _021F526E
    // bl GF_AssertFail
    // b _021F526E
    // add r1, r5, #0
    // add r1, #0xdc
    // add r0, r5, #0
    // ldr r1, [r1]
    // add r0, #0xd8
    // ldr r0, [r0]
    // ldr r1, [r1, #8]
    // cmp r0, r1
    // ble _021F5230
    // add r0, r4, #0
    // add r0, #8
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #0xc]
    // add r0, #8
    // str r0, [r4, #0x14]
    // mov r0, #4
    // b _021F523C
    // add r2, #8
    // add r0, r4, #0
    // str r2, [r4, #0x10]
    // add r0, #8
    // str r0, [r4, #0x14]
    // mov r0, #2
    // strb r0, [r4, #0x1c]
    // ldr r0, [r4, #8]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x11
    // sub r1, r1, r2
    // mov r0, #0x11
    // ror r1, r0
    // add r0, r2, r1
    // beq _021F525A
    // mov r0, #1
    // bl sub_02039AD8
    // cmp r0, #0
    // beq _021F525A
    // b _021F54A4
    // ldr r0, [r4, #8]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x11
    // sub r1, r1, r2
    // mov r0, #0x11
    // ror r1, r0
    // add r0, r2, r1
    // beq _021F526E
    // bl GF_AssertFail
    // ldrb r0, [r4, #0x1c]
    // add r1, r5, #0
    // bl ov01_021F613C
    // add r0, r5, #0
    // add r0, #0xb4
    // ldr r0, [r0]
    // cmp r0, #3
    // bls _021F5282
    // b _021F53FA
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F528E: ; jump table
    // add r0, r6, #0
    // add r0, #0x22
    // ldrb r0, [r0]
    // add r1, r6, r0
    // add r1, #0x20
    // ldrb r1, [r1]
    // lsl r1, r1, #2
    // add r1, r5, r1
    // add r1, #0x80
    // ldr r1, [r1]
    // cmp r1, #1
    // beq _021F52D6
    // add r1, r5, #0
    // add r1, #0xc8
    // ldr r1, [r1]
    // add r4, r5, #0
    // str r1, [sp]
    // str r5, [sp, #4]
    // str r6, [sp, #8]
    // add r4, #0xfc
    // add r1, r5, #0
    // add r2, r5, #0
    // add r3, r5, #0
    // ldr r4, [r4]
    // add r1, #0xb8
    // add r2, #0xc0
    // add r3, #0xc4
    // ldr r1, [r1]
    // ldr r2, [r2]
    // ldr r3, [r3]
    // ldr r4, [r4, #4]
    // blx r4
    // add r0, r6, #0
    // add r0, #0x22
    // ldrb r0, [r0]
    // add r6, #0x22
    // mov r1, #1
    // add r0, r0, #1
    // strb r0, [r6]
    // add r0, r5, #0
    // add r0, #0xb4
    // str r1, [r0]
    // b _021F53FA
    // add r0, r6, #0
    // add r0, #0x22
    // ldrb r0, [r0]
    // sub r0, r0, #1
    // add r0, r6, r0
    // add r0, #0x20
    // ldrb r0, [r0]
    // lsl r0, r0, #2
    // add r0, r5, r0
    // add r0, #0x80
    // ldr r0, [r0]
    // cmp r0, #1
    // bne _021F5324
    // add r0, r6, #0
    // bl ov01_021F477C
    // add r1, r6, #0
    // add r1, #0x22
    // ldrb r1, [r1]
    // mov r0, #0
    // sub r1, r1, #1
    // add r1, r6, r1
    // add r1, #0x20
    // ldrb r1, [r1]
    // lsl r1, r1, #2
    // add r1, r5, r1
    // add r1, #0x80
    // str r0, [r1]
    // add r0, r6, #0
    // add r0, #0x22
    // ldrb r0, [r0]
    // cmp r0, #2
    // bhi _021F53FA
    // add r0, r6, #0
    // add r0, #0x10
    // bl ov01_021F5024
    // cmp r0, #1
    // bne _021F53FA
    // add r0, r6, #0
    // add r0, #0x22
    // ldrb r0, [r0]
    // cmp r0, #2
    // blo _021F534A
    // mov r0, #1
    // str r0, [r6, #0x24]
    // b _021F5352
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xb4
    // str r1, [r0]
    // add r0, r6, #0
    // add r0, #0x22
    // ldrb r0, [r0]
    // sub r0, r0, #1
    // lsl r0, r0, #2
    // ldr r2, [r6, r0]
    // ldr r0, _021F54A8 ; =0x00000864
    // ldr r1, [r2, r0]
    // cmp r1, #1
    // bne _021F53A8
    // sub r0, #0x10
    // ldr r0, [r2, r0]
    // bl NNS_G3dGetMdlSet
    // cmp r0, #0
    // beq _021F5392
    // add r2, r0, #0
    // add r2, #8
    // beq _021F5386
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _021F5386
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _021F5388
    // mov r1, #0
    // cmp r1, #0
    // beq _021F5392
    // ldr r1, [r1]
    // add r4, r0, r1
    // b _021F5394
    // mov r4, #0
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // bl ov01_021FBA00
    // cmp r0, #1
    // bne _021F53A8
    // add r0, r4, #0
    // bl ov01_021EA3B0
    // mov r0, #0x42
    // lsl r0, r0, #2
    // ldr r3, [r5, r0]
    // cmp r3, #0
    // beq _021F53FA
    // add r0, r6, #0
    // add r0, #0x22
    // ldrb r0, [r0]
    // mov r2, #0x86
    // lsl r2, r2, #4
    // sub r0, r0, #1
    // lsl r0, r0, #2
    // ldr r4, [r6, r0]
    // ldr r1, [r4, r2]
    // cmp r1, #0
    // blt _021F53FA
    // add r0, r5, #0
    // add r6, r5, #0
    // add r0, #0xc4
    // add r6, #0xc8
    // ldr r0, [r0]
    // ldr r6, [r6]
    // mul r6, r0
    // cmp r1, r6
    // bge _021F53FA
    // lsr r0, r2, #3
    // add r2, #8
    // ldr r0, [r5, r0]
    // ldr r2, [r4, r2]
    // blx r3
    // b _021F53FA
    // add r6, #0x10
    // add r0, r6, #0
    // bl ov01_021F5024
    // cmp r0, #1
    // bne _021F53FA
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021F541C
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa1
    // strb r1, [r0]
    // mov r0, #2
    // add r5, #0xb4
    // add sp, #0x14
    // str r0, [r5]
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov01_021F5D10
    // cmp r0, #1
    // bne _021F54A4
    // add r0, r5, #0
    // add r0, #0xa2
    // ldrb r1, [r0]
    // mov r0, #0x30
    // mov r2, #0
    // mul r0, r1
    // add r0, r5, r0
    // str r2, [r0, #0x2c]
    // add r0, r5, #0
    // bl ov01_021F5D20
    // add r0, r5, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // sub r1, r0, #1
    // add r0, r5, #0
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa2
    // ldrb r0, [r0]
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r5, #0
    // add r1, r2, r1
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021F5472
    // mov r1, #0
    // b _021F5482
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xa2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa1
    // strb r1, [r0]
    // mov r1, #2
    // add r0, r5, #0
    // add r0, #0xb4
    // str r1, [r0]
    // ldr r0, [r5, #0x6c]
    // cmp r0, #1
    // bne _021F54A4
    // mov r0, #0
    // str r0, [r5, #0x6c]
    // add r0, r5, #0
    // add r0, #0x70
    // ldrb r0, [r0]
    // add r1, r5, #0
    // bl ov01_021F5D38
    // add r0, r5, #0
    // bl ov01_021F5CB4
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _021F54A8: .word 0x00000864
    // TODO: decompile
}


void ov01_021F54AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r4, [sp, #0x34]
    // str r2, [sp, #0x10]
    // add r7, r0, #0
    // ldr r0, [r4, #0x6c]
    // add r5, r3, #0
    // str r1, [sp, #0xc]
    // ldr r6, [sp, #0x30]
    // cmp r0, #1
    // bne _021F54C6
    // bl GF_AssertFail
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, sp, #0x14
    // bl ov01_021F5BBC
    // cmp r0, #1
    // bne _021F5544
    // add r1, sp, #0x14
    // ldrb r1, [r1]
    // add r0, r4, #0
    // bl ov01_021F474C
    // add r0, r4, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #2
    // blo _021F5528
    // mov r0, #1
    // str r0, [r4, #0x6c]
    // ldr r0, [sp, #0xc]
    // str r7, [r4, #0x74]
    // str r0, [r4, #0x78]
    // add r1, r4, #0
    // ldr r0, [sp, #0x10]
    // add r1, #0x7c
    // strb r0, [r1]
    // add r0, r4, #0
    // add r0, #0x7d
    // strb r5, [r0]
    // ldr r0, [sp, #0x10]
    // add r2, r4, #0
    // add r2, #0x90
    // lsl r1, r0, #2
    // ldr r0, [r2, r1]
    // str r0, [r4, #0x64]
    // lsl r0, r5, #2
    // ldr r3, [r2, r0]
    // str r3, [r4, #0x68]
    // add r4, #0x70
    // strb r6, [r4]
    // ldr r3, [r2, r1]
    // mov r1, #0x86
    // lsl r1, r1, #4
    // str r7, [r3, r1]
    // ldr r2, [r2, r0]
    // ldr r0, [sp, #0xc]
    // add sp, #0x18
    // str r0, [r2, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // str r5, [sp]
    // add r0, #0xa1
    // ldrb r0, [r0]
    // ldr r2, [sp, #0xc]
    // add r1, r7, #0
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r3, [sp, #0x10]
    // add r0, r4, #0
    // bl ov01_021F5038
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // str r5, [sp]
    // add r0, #0xa1
    // ldrb r0, [r0]
    // ldr r2, [sp, #0xc]
    // add r1, r7, #0
    // str r0, [sp, #4]
    // str r6, [sp, #8]
    // ldr r3, [sp, #0x10]
    // add r0, r4, #0
    // bl ov01_021F5038
    // cmp r0, #1
    // beq _021F5564
    // bl GF_AssertFail
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F5568(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r4, r6, #0
    // lsl r5, r0, #2
    // add r4, #0x90
    // ldr r1, [r4, r5]
    // ldr r0, _021F55E4 ; =0x00000864
    // mov r2, #0
    // str r2, [r1, r0]
    // ldr r1, [r4, r5]
    // sub r0, #8
    // ldr r0, [r1, r0]
    // bl ov01_021FB2F4
    // ldr r1, [r4, r5]
    // ldr r0, _021F55E8 ; =0x00000868
    // ldr r0, [r1, r0]
    // bl ov01_021F36AC
    // mov r0, #0
    // mov r2, #0x86
    // ldr r1, [r4, r5]
    // mvn r0, r0
    // lsl r2, r2, #4
    // str r0, [r1, r2]
    // ldr r1, [r4, r5]
    // sub r2, #0x60
    // bl MIi_CpuClearFast
    // ldr r2, [r4, r5]
    // ldr r1, _021F55EC ; =0x0000086C
    // mov r0, #0
    // add r1, r2, r1
    // mov r2, #0x81
    // lsl r2, r2, #2
    // bl MIi_CpuClear32
    // add r0, r6, r5
    // mov r1, #1
    // add r0, #0x80
    // str r1, [r0]
    // add r0, r6, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl ov01_02204698
    // cmp r0, #0
    // beq _021F55D8
    // add r6, #0xf8
    // mov r1, #2
    // ldr r2, [r4, r5]
    // lsl r1, r1, #0xa
    // ldr r0, [r6]
    // add r1, r2, r1
    // bl ov01_02204688
    // ldr r1, [r4, r5]
    // ldr r0, _021F55F0 ; =0x00000808
    // mov r2, #0
    // str r2, [r1, r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _021F55E4: .word 0x00000864
    // _021F55E8: .word 0x00000868
    // _021F55EC: .word 0x0000086C
    // _021F55F0: .word 0x00000808
    // TODO: decompile
}


void ov01_021F55F4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r4, [sp, #0x18]
    // add r5, r1, #0
    // add r1, r4, #0
    // add r6, r0, #0
    // add r7, r2, #0
    // str r3, [sp]
    // bl ov01_021F5568
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F5568
    // add r4, #0x90
    // lsl r1, r6, #2
    // lsl r5, r5, #2
    // lsl r2, r7, #2
    // ldr r0, [r4, r1]
    // ldr r3, [r4, r5]
    // ldr r6, [r4, r2]
    // str r6, [r4, r1]
    // ldr r1, [sp]
    // lsl r6, r1, #2
    // ldr r1, [r4, r6]
    // str r1, [r4, r5]
    // str r0, [r4, r2]
    // str r3, [r4, r6]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F562C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r1, [sp, #8]
    // add r7, r0, #0
    // ldr r0, [sp, #8]
    // add r6, r2, #0
    // cmp r0, #4
    // bls _021F563E
    // b _021F5952
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F564A: ; jump table
    // mov r0, #2
    // mov r1, #3
    // mov r2, #0
    // mov r3, #1
    // str r6, [sp]
    // bl ov01_021F55F4
    // add r0, r6, #0
    // add r0, #0xad
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _021F569E
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // mov r0, #1
    // sub r5, r7, r2
    // str r0, [sp, #0x10]
    // mov r0, #0
    // sub r4, r5, #1
    // str r0, [sp, #0xc]
    // cmp r5, #0
    // bge _021F5688
    // sub r5, r0, #1
    // add r4, r5, #0
    // b _021F56D4
    // cmp r4, #0
    // blt _021F5698
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F56D4
    // mov r4, #0
    // mvn r4, r4
    // b _021F56D4
    // cmp r0, #3
    // bne _021F56D0
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // mov r0, #0
    // sub r5, r7, r2
    // str r0, [sp, #0x10]
    // mov r0, #1
    // add r4, r5, #1
    // str r0, [sp, #0xc]
    // cmp r5, #0
    // bge _021F56BE
    // sub r5, r0, #2
    // add r4, r5, #0
    // b _021F56D4
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F56D4
    // mov r4, #0
    // mvn r4, r4
    // b _021F56D4
    // bl GF_AssertFail
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #8]
    // lsl r2, r2, #0x18
    // str r0, [sp]
    // lsl r3, r3, #0x18
    // add r0, r5, #0
    // add r1, r4, #0
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // str r6, [sp, #4]
    // bl ov01_021F54AC
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #1
    // mov r1, #3
    // mov r2, #0
    // mov r3, #2
    // str r6, [sp]
    // bl ov01_021F55F4
    // add r0, r6, #0
    // add r0, #0xad
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _021F5750
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // sub r5, r7, #1
    // sub r0, r7, r2
    // sub r4, r0, #1
    // mov r0, #2
    // str r0, [sp, #0x10]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // cmp r5, #0
    // blt _021F572E
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F5734
    // mov r5, #0
    // mvn r5, r5
    // add r4, r5, #0
    // cmp r4, #0
    // blt _021F574A
    // add r2, r6, #0
    // add r2, #0xc4
    // ldr r2, [r2]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F4704
    // cmp r0, #0
    // bne _021F57A6
    // mov r4, #0
    // mvn r4, r4
    // b _021F57A6
    // cmp r0, #3
    // bne _021F57A2
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // sub r5, r7, #1
    // add r0, r7, r2
    // sub r4, r0, #1
    // mov r0, #0
    // str r0, [sp, #0x10]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // cmp r5, #0
    // blt _021F5778
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F577E
    // mov r5, #0
    // mvn r5, r5
    // add r4, r5, #0
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // add r0, r6, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // mul r0, r2
    // cmp r0, r4
    // ble _021F579C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F4704
    // cmp r0, #0
    // bne _021F57A6
    // mov r4, #0
    // mvn r4, r4
    // b _021F57A6
    // bl GF_AssertFail
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #8]
    // lsl r2, r2, #0x18
    // str r0, [sp]
    // lsl r3, r3, #0x18
    // add r0, r5, #0
    // add r1, r4, #0
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // str r6, [sp, #4]
    // bl ov01_021F54AC
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // mov r1, #2
    // mov r2, #1
    // mov r3, #3
    // str r6, [sp]
    // bl ov01_021F55F4
    // add r0, r6, #0
    // add r0, #0xad
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021F5832
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // add r5, r7, #1
    // sub r0, r7, r2
    // add r4, r0, #1
    // mov r0, #3
    // str r0, [sp, #0x10]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // mul r0, r2
    // cmp r0, r5
    // ble _021F5808
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F580E
    // mov r5, #0
    // mvn r5, r5
    // add r4, r5, #0
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // add r0, r6, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // mul r0, r2
    // cmp r0, r4
    // ble _021F582C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F4704
    // cmp r0, #0
    // bne _021F5882
    // mov r4, #0
    // mvn r4, r4
    // b _021F5882
    // cmp r0, #2
    // bne _021F5882
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // add r5, r7, #1
    // add r0, r7, r2
    // add r4, r0, #1
    // mov r0, #1
    // str r0, [sp, #0x10]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // mul r0, r2
    // cmp r0, r5
    // ble _021F5862
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F5868
    // mov r5, #0
    // mvn r5, r5
    // add r4, r5, #0
    // cmp r4, #0
    // blt _021F587E
    // add r2, r6, #0
    // add r2, #0xc4
    // ldr r2, [r2]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F4704
    // cmp r0, #0
    // bne _021F5882
    // mov r4, #0
    // mvn r4, r4
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #8]
    // lsl r2, r2, #0x18
    // str r0, [sp]
    // lsl r3, r3, #0x18
    // add r0, r5, #0
    // add r1, r4, #0
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // str r6, [sp, #4]
    // bl ov01_021F54AC
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // mov r1, #1
    // mov r2, #2
    // mov r3, #3
    // str r6, [sp]
    // bl ov01_021F55F4
    // add r0, r6, #0
    // add r0, #0xad
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021F58F0
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // mov r0, #3
    // str r0, [sp, #0x10]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // add r5, r7, r2
    // mul r0, r2
    // sub r4, r5, #1
    // cmp r0, r5
    // bgt _021F58DE
    // ldr r0, [sp, #0xc]
    // sub r5, r0, #3
    // add r4, r5, #0
    // b _021F5934
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F5934
    // mov r4, #0
    // mvn r4, r4
    // b _021F5934
    // cmp r0, #1
    // bne _021F5930
    // add r0, r6, #0
    // add r0, #0xc4
    // ldr r2, [r0]
    // mov r0, #2
    // str r0, [sp, #0x10]
    // mov r0, #3
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // add r5, r7, r2
    // mul r0, r2
    // add r4, r5, #1
    // cmp r0, r5
    // bgt _021F591A
    // ldr r0, [sp, #0xc]
    // sub r5, r0, #4
    // add r4, r5, #0
    // b _021F5934
    // cmp r0, r4
    // ble _021F592A
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F5934
    // mov r4, #0
    // mvn r4, r4
    // b _021F5934
    // bl GF_AssertFail
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #8]
    // lsl r2, r2, #0x18
    // str r0, [sp]
    // lsl r3, r3, #0x18
    // add r0, r5, #0
    // add r1, r4, #0
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // str r6, [sp, #4]
    // bl ov01_021F54AC
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F595C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x44
    // add r5, r1, #0
    // add r4, r5, #0
    // lsl r6, r0, #2
    // mov r0, #0x86
    // add r3, sp, #0x38
    // mov r1, #0
    // str r1, [r3]
    // str r1, [r3, #4]
    // str r2, [sp, #4]
    // add r2, r5, #0
    // add r4, #0x90
    // str r1, [r3, #8]
    // add r2, #0xc0
    // ldr r1, [r4, r6]
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // add r1, r5, #0
    // add r1, #0xc4
    // ldr r1, [r1]
    // ldr r2, [r2]
    // bl ov01_021F5FB8
    // ldr r1, [r4, r6]
    // ldr r0, _021F59F4 ; =0x00000864
    // ldr r0, [r1, r0]
    // cmp r0, #1
    // bne _021F59C6
    // ldr r3, _021F59F8 ; =ov01_02206BD8
    // add r2, sp, #0x2c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // ldr r3, _021F59FC ; =ov01_02206BE4
    // str r0, [r2]
    // add r2, sp, #8
    // mov r7, #4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // sub r7, r7, #1
    // bne _021F59A8
    // ldr r0, [r3]
    // add r3, sp, #0x2c
    // str r0, [r2]
    // mov r0, #2
    // ldr r1, [r4, r6]
    // lsl r0, r0, #0xa
    // add r0, r1, r0
    // add r1, sp, #0x38
    // add r2, sp, #8
    // bl GF3dRender_DrawModel
    // ldr r4, [r4, r6]
    // ldr r0, _021F59F4 ; =0x00000864
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _021F59EE
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // bl ov01_021FBA00
    // add r2, r0, #0
    // ldr r0, _021F5A00 ; =0x00000868
    // add r5, #0xb8
    // ldr r0, [r4, r0]
    // ldr r3, [sp, #4]
    // str r0, [sp]
    // ldr r1, [r5]
    // add r0, sp, #0x38
    // bl ov01_021F3A3C
    // add sp, #0x44
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021F59F4: .word 0x00000864
    // _021F59F8: .word ov01_02206BD8
    // _021F59FC: .word ov01_02206BE4
    // _021F5A00: .word 0x00000868
    // TODO: decompile
}


void ov01_021F5A04(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r2, #0
    // add r5, r1, #0
    // add r6, r0, #0
    // add r1, r7, #0
    // bl _u32_div_f
    // add r4, r1, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // bl _u32_div_f
    // lsr r0, r0, #5
    // add r1, r0, #0
    // lsr r2, r4, #5
    // mul r1, r5
    // add r0, r2, r1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F5A28(void) {
    // mul r2, r1
    // add r0, r0, r2
    // bx lr
    // TODO: decompile
}


void ov01_021F5A30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r2, #0
    // add r5, r1, #0
    // add r6, r0, #0
    // add r1, r7, #0
    // bl _u32_div_f
    // add r4, r1, #0
    // add r0, r6, #0
    // add r1, r7, #0
    // bl _u32_div_f
    // lsr r0, r0, #5
    // add r1, r0, #0
    // lsr r2, r4, #5
    // mul r1, r5
    // add r0, r2, r1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F5A54(void) {
    // push {r3, lr}
    // cmp r0, #0
    // bne _021F5A5E
    // mov r0, #3
    // pop {r3, pc}
    // cmp r0, #1
    // bne _021F5A66
    // mov r0, #2
    // pop {r3, pc}
    // cmp r0, #2
    // bne _021F5A6E
    // mov r0, #1
    // pop {r3, pc}
    // cmp r0, #3
    // bne _021F5A76
    // mov r0, #0
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_021F5A80(void) {
    // push {r3, r4, r5, lr}
    // add r5, r2, #0
    // add r4, r3, #0
    // cmp r0, #4
    // bhi _021F5AE0
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F5A96: ; jump table
    // add r0, r4, #0
    // add r1, r5, #0
    // bl _s32_div_f
    // add r0, r1, #1
    // cmp r0, r5
    // blt _021F5AB2
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #1
    // pop {r3, r4, r5, pc}
    // lsl r1, r1, #5
    // add r0, r4, r5
    // mul r1, r5
    // cmp r0, r1
    // blt _021F5AE6
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r1, r5, #0
    // bl _s32_div_f
    // sub r0, r1, #1
    // bpl _021F5AD4
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // sub r0, r4, #1
    // pop {r3, r4, r5, pc}
    // sub r0, r4, r5
    // bpl _021F5AE6
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F5AE8(void) {
    // cmp r0, #4
    // bhi _021F5B20
    // add r2, r0, r0
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _021F5AF8: ; jump table
    // sub r0, r1, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx lr
    // add r0, r1, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx lr
    // sub r0, r1, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx lr
    // add r0, r1, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx lr
    // TODO: decompile
}


void ov01_021F5B24(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl ov01_021F5AE8
    // cmp r5, r0
    // bge _021F5B56
    // sub r0, r0, r5
    // cmp r0, #1
    // bne _021F5B42
    // ldrb r0, [r4]
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // b _021F5B82
    // cmp r0, #2
    // bne _021F5B50
    // ldrb r0, [r4]
    // sub r0, r0, #2
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // b _021F5B82
    // bl GF_AssertFail
    // b _021F5B82
    // cmp r5, r0
    // ble _021F5B7E
    // sub r0, r5, r0
    // cmp r0, #1
    // bne _021F5B6A
    // ldrb r0, [r4]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // b _021F5B82
    // cmp r0, #2
    // bne _021F5B78
    // ldrb r0, [r4]
    // add r0, r0, #2
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // b _021F5B82
    // bl GF_AssertFail
    // b _021F5B82
    // bl GF_AssertFail
    // strb r6, [r4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F5B88(void) {
    // push {r3, lr}
    // cmp r0, #4
    // bhi _021F5BB4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F5B9A: ; jump table
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #4
    // pop {r3, pc}
    // mov r0, #3
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_021F5BBC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r7, r2, #0
    // mov r4, #0
    // ldr r0, [r5, #0x2c]
    // cmp r0, #1
    // bne _021F5BE2
    // add r0, r6, #0
    // bl ov01_021F5B88
    // add r1, r5, #0
    // add r1, #0x30
    // ldrb r1, [r1]
    // cmp r1, r0
    // bne _021F5BE2
    // strb r4, [r7]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // add r5, #0x30
    // cmp r4, #2
    // blt _021F5BC6
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F5BF0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, #0xa1
    // ldrb r1, [r0]
    // mov r0, #0x30
    // add r4, r5, #0
    // mul r0, r1
    // add r0, r5, r0
    // ldr r0, [r0, #0x2c]
    // add r4, #0x64
    // cmp r0, #0
    // beq _021F5C0C
    // bl GF_AssertFail
    // add r1, r5, #0
    // add r1, #0xa1
    // ldrb r2, [r1]
    // mov r1, #0x30
    // mov r0, #1
    // add r3, r2, #0
    // mul r3, r1
    // add r2, r5, r3
    // add r3, r5, #0
    // str r0, [r2, #0x2c]
    // add r3, #0xa1
    // ldrb r3, [r3]
    // ldrb r2, [r4, #0xc]
    // add r6, r3, #0
    // mul r6, r1
    // add r3, r5, r6
    // add r3, #0x30
    // strb r2, [r3]
    // add r3, r5, #0
    // add r3, #0xa1
    // ldrb r3, [r3]
    // ldr r2, [r4, #0x10]
    // add r6, r3, #0
    // mul r6, r1
    // add r3, r5, r6
    // str r2, [r3, #0x1c]
    // add r3, r5, #0
    // add r3, #0xa1
    // ldrb r3, [r3]
    // ldr r2, [r4, #0x14]
    // add r6, r3, #0
    // mul r6, r1
    // add r3, r5, r6
    // str r2, [r3, #0x20]
    // add r3, r5, #0
    // add r3, #0xa1
    // ldrb r3, [r3]
    // ldrb r2, [r4, #0x18]
    // add r6, r3, #0
    // mul r6, r1
    // add r3, r5, r6
    // add r3, #0x24
    // strb r2, [r3]
    // add r3, r5, #0
    // add r3, #0xa1
    // ldrb r3, [r3]
    // ldrb r2, [r4, #0x19]
    // add r6, r3, #0
    // mul r6, r1
    // add r3, r5, r6
    // add r3, #0x25
    // strb r2, [r3]
    // add r3, r5, #0
    // add r3, #0xa1
    // ldrb r3, [r3]
    // ldr r2, [r4]
    // add r6, r3, #0
    // mul r6, r1
    // add r3, r5, r6
    // str r2, [r3, #4]
    // add r2, r5, #0
    // add r2, #0xa1
    // ldrb r2, [r2]
    // ldr r4, [r4, #4]
    // add r3, r2, #0
    // mul r3, r1
    // add r2, r5, r3
    // add r3, r5, #0
    // str r4, [r2, #8]
    // add r3, #0xa1
    // ldrb r3, [r3]
    // mov r2, #0
    // add r4, r3, #0
    // mul r4, r1
    // add r3, r5, r4
    // add r3, #0x26
    // strb r2, [r3]
    // add r3, r5, #0
    // add r3, #0xa1
    // ldrb r3, [r3]
    // mul r1, r3
    // add r1, r5, r1
    // str r2, [r1, #0x28]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F5CB4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // add r4, r5, #0
    // add r4, #0x64
    // cmp r0, #2
    // blo _021F5CC8
    // bl GF_AssertFail
    // add r0, r5, #0
    // bl ov01_021F5BF0
    // cmp r0, #1
    // beq _021F5CD6
    // bl GF_AssertFail
    // mov r0, #0x86
    // ldr r2, [r4, #0x10]
    // ldr r1, [r4]
    // lsl r0, r0, #4
    // str r2, [r1, r0]
    // ldr r2, [r4, #0x14]
    // ldr r1, [r4, #4]
    // str r2, [r1, r0]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0xa0
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa1
    // ldrb r0, [r0]
    // add r5, #0xa1
    // add r0, r0, #1
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // strb r0, [r5]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F5D10(void) {
    // add r1, r0, #0
    // add r1, #0xa2
    // ldrb r2, [r1]
    // mov r1, #0x30
    // mul r1, r2
    // add r0, r0, r1
    // ldr r0, [r0, #0x28]
    // bx lr
    // TODO: decompile
}


void ov01_021F5D20(void) {
    // mov r3, #0
    // add r2, r3, #0
    // lsl r1, r3, #2
    // add r1, r0, r1
    // add r1, #0x80
    // str r2, [r1]
    // add r1, r3, #1
    // lsl r1, r1, #0x18
    // lsr r3, r1, #0x18
    // cmp r3, #4
    // blo _021F5D24
    // bx lr
    // TODO: decompile
}


void ov01_021F5D38(void) {
    // cmp r0, #4
    // bhi _021F5D88
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F5D48: ; jump table
    // add r0, r1, #0
    // mov r2, #1
    // add r0, #0x88
    // str r2, [r0]
    // add r1, #0x8c
    // str r2, [r1]
    // bx lr
    // add r0, r1, #0
    // mov r2, #1
    // add r0, #0x80
    // str r2, [r0]
    // add r1, #0x88
    // str r2, [r1]
    // bx lr
    // add r0, r1, #0
    // mov r2, #1
    // add r0, #0x80
    // str r2, [r0]
    // add r1, #0x84
    // str r2, [r1]
    // bx lr
    // add r0, r1, #0
    // mov r2, #1
    // add r0, #0x84
    // str r2, [r0]
    // add r1, #0x8c
    // str r2, [r1]
    // bx lr
    // TODO: decompile
}


void ov01_021F5D8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r6, r1, #0
    // add r5, r0, #0
    // add r4, r3, #0
    // mov r1, #0
    // add r7, r2, #0
    // bl ov01_021F488C
    // add r2, r5, #0
    // add r3, r5, #0
    // str r4, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r2, #0xc4
    // add r3, #0xc8
    // ldr r2, [r2]
    // ldr r3, [r3]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov01_021F47A0
    // mov r4, #0
    // add r7, sp, #0x10
    // lsl r6, r4, #2
    // bl ov01_021FB254
    // add r1, r5, r6
    // add r1, #0x90
    // ldr r2, [r1]
    // ldr r1, _021F5E1C ; =0x0000085C
    // str r0, [r2, r1]
    // add r0, r5, r6
    // add r0, #0x90
    // ldr r1, [r0]
    // ldr r0, _021F5E1C ; =0x0000085C
    // ldr r0, [r1, r0]
    // bl ov01_021FB360
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // bl ov01_021FBA00
    // add r1, r5, #0
    // add r1, #0xc4
    // ldr r1, [r1]
    // add r2, r5, #0
    // str r1, [sp]
    // add r1, r5, #0
    // add r1, #0xc8
    // ldr r1, [r1]
    // add r3, r5, #0
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // add r2, #0xb8
    // add r3, #0xc0
    // ldr r0, [r7, r6]
    // ldr r2, [r2]
    // ldr r3, [r3]
    // add r1, r4, #0
    // bl ov01_021F4E88
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _021F5DBC
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F5E1C: .word 0x0000085C
    // TODO: decompile
}


void ov01_021F5E20(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // add r4, r3, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // bl ov01_021F497C
    // add r2, r5, #0
    // add r3, r5, #0
    // str r4, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r2, #0xc4
    // add r3, #0xc8
    // ldr r2, [r2]
    // ldr r3, [r3]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov01_021F47A0
    // mov r4, #0
    // add r7, r4, #0
    // lsl r6, r4, #2
    // add r0, r5, r6
    // add r0, #0x90
    // ldr r1, [r0]
    // ldr r0, _021F5E9C ; =0x0000085C
    // str r7, [r1, r0]
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // bl ov01_021FBA00
    // add r1, r5, #0
    // add r1, #0xc4
    // ldr r1, [r1]
    // add r2, r5, #0
    // str r1, [sp]
    // add r1, r5, #0
    // add r1, #0xc8
    // ldr r1, [r1]
    // add r3, r5, #0
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // add r0, sp, #0x10
    // add r2, #0xb8
    // add r3, #0xc0
    // ldr r0, [r0, r6]
    // ldr r2, [r2]
    // ldr r3, [r3]
    // add r1, r4, #0
    // bl ov01_021F4F0C
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _021F5E4E
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F5E9C: .word 0x0000085C
    // TODO: decompile
}


void ov01_021F5EA0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r6, r1, #0
    // add r5, r0, #0
    // add r4, r3, #0
    // mov r1, #1
    // add r7, r2, #0
    // bl ov01_021F488C
    // add r2, r5, #0
    // add r3, r5, #0
    // str r4, [sp]
    // add r0, sp, #0x10
    // str r0, [sp, #4]
    // add r2, #0xc4
    // add r3, #0xc8
    // ldr r2, [r2]
    // ldr r3, [r3]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov01_021F47A0
    // mov r4, #0
    // add r7, sp, #0x10
    // lsl r6, r4, #2
    // bl ov01_021FB254
    // add r1, r5, r6
    // add r1, #0x90
    // ldr r2, [r1]
    // ldr r1, _021F5F30 ; =0x0000085C
    // str r0, [r2, r1]
    // add r0, r5, r6
    // add r0, #0x90
    // ldr r1, [r0]
    // ldr r0, _021F5F30 ; =0x0000085C
    // ldr r0, [r1, r0]
    // bl ov01_021FB360
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // bl ov01_021FBA00
    // add r1, r5, #0
    // add r1, #0xc4
    // ldr r1, [r1]
    // add r2, r5, #0
    // str r1, [sp]
    // add r1, r5, #0
    // add r1, #0xc8
    // ldr r1, [r1]
    // add r3, r5, #0
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r5, [sp, #0xc]
    // add r2, #0xb8
    // add r3, #0xc0
    // ldr r0, [r7, r6]
    // ldr r2, [r2]
    // ldr r3, [r3]
    // add r1, r4, #0
    // bl ov01_021F4FB0
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _021F5ED0
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F5F30: .word 0x0000085C
    // TODO: decompile
}


void ov01_021F5F34(void) {
    // push {r4, lr}
    // add r1, r0, #0
    // mov r3, #0
    // add r1, #0xa2
    // strb r3, [r1]
    // add r1, r0, #0
    // add r1, #0xa1
    // strb r3, [r1]
    // add r1, r0, #0
    // add r1, #0xa0
    // strb r3, [r1]
    // add r4, r0, #0
    // add r2, r3, #0
    // mov r1, #1
    // str r2, [r4, #0x2c]
    // str r1, [r4, #0x28]
    // add r3, r3, #1
    // add r4, #0x30
    // cmp r3, #2
    // blt _021F5F50
    // bl ov01_021F5D20
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F5F64(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // add r2, #0xcc
    // ldr r2, [r2]
    // bl ov01_021F5A28
    // add r1, r4, #0
    // add r1, #0xa8
    // str r0, [r1]
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0xa8
    // add r1, #0xcc
    // ldr r0, [r0]
    // ldr r1, [r1]
    // bl ov01_021F6328
    // add r1, r4, #0
    // add r1, #0xad
    // strb r0, [r1]
    // add r0, r4, #0
    // add r0, #0xad
    // ldrb r0, [r0]
    // bl ov01_021F5A54
    // add r1, r4, #0
    // add r1, #0xac
    // strb r0, [r1]
    // add r0, r4, #0
    // add r1, r4, #0
    // add r2, r4, #0
    // add r0, #0xa8
    // add r1, #0xc4
    // add r2, #0xcc
    // ldr r0, [r0]
    // ldr r1, [r1]
    // ldr r2, [r2]
    // bl ov01_021F5A30
    // add r4, #0xa4
    // str r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F5FB8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r2, #0
    // mov r2, #1
    // add r5, r3, #0
    // lsl r2, r2, #0x14
    // str r2, [r5]
    // str r2, [r5, #8]
    // mov r2, #0
    // add r4, r0, #0
    // mvn r2, r2
    // str r1, [sp, #4]
    // cmp r4, r2
    // beq _021F601A
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // lsr r6, r0, #0x10
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl _s32_div_f
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // add r0, r7, #0
    // bl MapMatrix_GetWidth
    // str r0, [sp, #8]
    // add r0, r7, #0
    // bl MapMatrix_GetMatrixId
    // add r1, r0, #0
    // ldr r0, [sp, #8]
    // add r2, r6, #0
    // str r0, [sp]
    // add r0, r7, #0
    // add r3, r4, #0
    // bl MapMatrix_GetMapAltitude
    // lsl r0, r0, #0xf
    // str r0, [r5, #4]
    // ldr r1, [r5]
    // lsl r0, r6, #0x15
    // add r0, r1, r0
    // str r0, [r5]
    // ldr r1, [r5, #8]
    // lsl r0, r4, #0x15
    // add r0, r1, r0
    // str r0, [r5, #8]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F6020(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r1, #0
    // mov r1, #0x11
    // add r5, r0, #0
    // mov r0, #4
    // lsl r1, r1, #4
    // str r2, [sp]
    // str r3, [sp, #4]
    // bl Heap_Alloc
    // mov r2, #0x11
    // mov r1, #0
    // lsl r2, r2, #4
    // add r4, r0, #0
    // bl MI_CpuFill8
    // ldr r0, [sp, #0x24]
    // cmp r0, #0
    // bne _021F6054
    // add r0, r4, #0
    // ldr r1, _021F610C ; =ov01_02206BC0
    // add r0, #0xfc
    // str r1, [r0]
    // mov r6, #1
    // b _021F6078
    // cmp r0, #1
    // bne _021F6064
    // add r0, r4, #0
    // ldr r1, _021F6110 ; =ov01_02206BD0
    // add r0, #0xfc
    // str r1, [r0]
    // mov r6, #0
    // b _021F6078
    // cmp r0, #2
    // bne _021F6074
    // add r0, r4, #0
    // ldr r1, _021F6114 ; =ov01_02206BC8
    // add r0, #0xfc
    // str r1, [r0]
    // mov r6, #1
    // b _021F6078
    // bl GF_AssertFail
    // mov r0, #0x41
    // ldr r1, [sp, #0x28]
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r6, #0
    // bl ov01_021FAC44
    // str r0, [r4]
    // add r0, r4, #0
    // add r0, #0xb8
    // str r7, [r0]
    // add r0, r4, #0
    // add r0, #0xc0
    // str r5, [r0]
    // add r1, r4, #0
    // ldr r0, [sp]
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, r5, #0
    // bl MapMatrix_GetWidth
    // add r1, r4, #0
    // add r1, #0xc4
    // str r0, [r1]
    // add r0, r5, #0
    // bl MapMatrix_GetHeight
    // add r1, r4, #0
    // add r1, #0xc8
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xc4
    // ldr r0, [r0]
    // lsl r1, r0, #5
    // add r0, r4, #0
    // add r0, #0xcc
    // str r1, [r0]
    // add r1, r4, #0
    // ldr r0, [sp, #4]
    // add r1, #0xf4
    // str r0, [r1]
    // add r0, r4, #0
    // ldr r1, [sp, #0x20]
    // add r0, #0xf8
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #1
    // add r0, #0xf0
    // str r1, [r0]
    // add r0, r4, #0
    // bl ov01_021F5F34
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xb0
    // str r1, [r0]
    // add r0, r4, #0
    // mov r1, #2
    // add r0, #0xb4
    // str r1, [r0]
    // mov r0, #0x41
    // mov r1, #4
    // bl NARC_New
    // mov r1, #1
    // lsl r1, r1, #8
    // str r0, [r4, r1]
    // mov r0, #0
    // add r1, #8
    // str r0, [r4, r1]
    // add r0, r4, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F610C: .word ov01_02206BC0
    // _021F6110: .word ov01_02206BD0
    // _021F6114: .word ov01_02206BC8
    // TODO: decompile
}


void ov01_021F6118(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r5, #0
    // add r6, #0xfc
    // add r3, r5, #0
    // ldr r6, [r6]
    // add r3, #0xcc
    // ldr r3, [r3]
    // ldr r6, [r6]
    // add r4, r1, #0
    // add r7, r2, #0
    // blx r6
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl ov01_021F5F64
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F613C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r2, r5, #0
    // add r3, r5, #0
    // add r1, #0xc8
    // add r2, #0xcc
    // add r3, #0xa8
    // ldr r1, [r1]
    // ldr r2, [r2]
    // ldr r3, [r3]
    // add r6, r0, #0
    // bl ov01_021F5A80
    // add r1, r5, #0
    // add r2, r5, #0
    // add r1, #0xc4
    // add r2, #0xcc
    // ldr r1, [r1]
    // ldr r2, [r2]
    // add r7, r0, #0
    // bl ov01_021F5A04
    // add r1, r5, #0
    // add r1, #0xcc
    // add r4, r0, #0
    // ldr r1, [r1]
    // add r0, r7, #0
    // bl ov01_021F6328
    // add r1, r5, #0
    // add r1, #0xa4
    // ldr r1, [r1]
    // cmp r1, r4
    // bne _021F61A4
    // add r1, r5, #0
    // add r1, #0xad
    // ldrb r1, [r1]
    // cmp r1, r0
    // beq _021F61A4
    // add r0, r4, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov01_021F562C
    // add r1, r5, #0
    // add r1, #0xad
    // add r5, #0xac
    // ldrb r1, [r1]
    // add r0, r6, #0
    // add r2, r5, #0
    // bl ov01_021F5B24
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F61A8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r4, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // sub r7, r4, #1
    // lsl r0, r4, #2
    // add r0, r5, r0
    // add r0, #0x90
    // ldr r1, [r0]
    // mov r0, #0x86
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // cmp r0, r7
    // beq _021F61CE
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov01_021F595C
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _021F61B2
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F61DC(void) {
    // push {r3, r4}
    // asr r4, r0, #0xf
    // lsr r4, r4, #0x10
    // add r4, r0, r4
    // asr r0, r4, #0x10
    // str r0, [r2]
    // asr r0, r1, #0xf
    // lsr r0, r0, #0x10
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [r3]
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov01_021F61F8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl sub_0201A430
    // bl NNS_GfdResetLnkTexVramState
    // bl NNS_GfdResetLnkPlttVramState
    // mov r4, #0
    // add r6, r5, #4
    // mov r7, #0x30
    // add r0, r4, #0
    // mul r0, r7
    // add r0, r6, r0
    // bl ov01_021F477C
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #2
    // blo _021F620E
    // mov r6, #0
    // add r7, r6, #0
    // lsl r4, r6, #2
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r2, [r0]
    // ldr r0, _021F62A4 ; =0x00000864
    // mov r1, #0
    // str r1, [r2, r0]
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r1, [r0]
    // ldr r0, _021F62A8 ; =0x0000085C
    // ldr r0, [r1, r0]
    // bl ov01_021FB2E8
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r1, [r0]
    // ldr r0, _021F62AC ; =0x00000868
    // ldr r0, [r1, r0]
    // bl ov01_021F3660
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r1, [r0]
    // mov r0, #0xa7
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // beq _021F6272
    // bl Heap_Free
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r2, [r0]
    // mov r0, #0xa7
    // mov r1, #0
    // lsl r0, r0, #4
    // str r1, [r2, r0]
    // add r0, r5, r4
    // add r0, #0x90
    // ldr r0, [r0]
    // bl Heap_Free
    // add r0, r5, r4
    // add r0, #0x90
    // str r7, [r0]
    // add r0, r6, #1
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // cmp r6, #4
    // blo _021F6226
    // add r0, r5, #0
    // mov r1, #3
    // add r0, #0xb4
    // str r1, [r0]
    // add r0, r5, #0
    // mov r1, #1
    // add r0, #0xb0
    // str r1, [r0]
    // add r5, #0xf0
    // str r7, [r5]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F62A4: .word 0x00000864
    // _021F62A8: .word 0x0000085C
    // _021F62AC: .word 0x00000868
    // TODO: decompile
}


void ov01_021F62B0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r0, [r4, r0]
    // bl NARC_Delete
    // ldr r0, [r4]
    // bl ov01_021FACB4
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F62CC(void) {
    // add r1, r0, #0
    // add r1, #0xb0
    // ldr r1, [r1]
    // cmp r1, #1
    // bne _021F62E2
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _021F62E2
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021F62E8(void) {
    // push {r4, r5}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r2, r4, #0
    // add r3, r5, #0
    // ldmia r3!, {r0, r1}
    // add r2, #0xd0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r4, #0xdc
    // str r0, [r2]
    // str r5, [r4]
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov01_021F6304(void) {
    // mov r1, #0
    // add r0, #0xdc
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021F630C(void) {
    // lsl r0, r0, #2
    // add r0, r1, r0
    // add r0, #0x90
    // ldr r1, [r0]
    // ldr r0, _021F631C ; =0x00000868
    // ldr r0, [r1, r0]
    // str r0, [r2]
    // bx lr
    // _021F631C: .word 0x00000868
    // TODO: decompile
}


void ov01_021F6320(void) {
    // add r0, #0xac
    // ldrb r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021F6328(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl _u32_div_f
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1b
    // sub r1, r1, r2
    // mov r0, #0x1b
    // ror r1, r0
    // mov r0, #0x1f
    // and r0, r4
    // add r1, r2, r1
    // cmp r0, #0x10
    // bge _021F6350
    // cmp r1, #0x10
    // bge _021F634C
    // mov r0, #0
    // pop {r4, pc}
    // mov r0, #2
    // pop {r4, pc}
    // cmp r1, #0x10
    // bge _021F6358
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #3
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F635C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r2, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // cmp r0, r5
    // bne _021F6372
    // add r4, #0xac
    // ldrb r0, [r4]
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // mvn r0, r0
    // cmp r5, r0
    // bne _021F637E
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r0, #0xac
    // ldrb r1, [r0]
    // cmp r1, #3
    // bls _021F638A
    // b _021F6528
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F6396: ; jump table
    // add r0, r4, #0
    // add r0, #0xa4
    // add r2, r4, #0
    // ldr r0, [r0]
    // add r2, #0xc4
    // ldr r2, [r2]
    // sub r3, r5, r0
    // cmp r2, r3
    // bne _021F63B8
    // add r0, r1, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // cmp r3, #1
    // bne _021F63D2
    // add r1, r5, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // beq _021F63D2
    // add r4, #0xac
    // ldrb r0, [r4]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0xa4
    // add r1, #0xc4
    // ldr r2, [r1]
    // ldr r0, [r0]
    // add r3, r2, #1
    // sub r1, r5, r0
    // cmp r3, r1
    // bne _021F63FC
    // add r1, r5, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F63FC
    // add r4, #0xac
    // ldrb r0, [r4]
    // add r0, r0, #3
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0xa4
    // add r2, r4, #0
    // ldr r0, [r0]
    // add r2, #0xc4
    // ldr r2, [r2]
    // sub r3, r5, r0
    // cmp r2, r3
    // bne _021F641A
    // add r0, r1, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // sub r1, r0, r5
    // cmp r1, #1
    // bne _021F6436
    // add r1, r5, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // beq _021F6436
    // add r4, #0xac
    // ldrb r0, [r4]
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r1, r4, #0
    // add r0, #0xa4
    // add r1, #0xc4
    // ldr r2, [r1]
    // ldr r0, [r0]
    // sub r3, r2, #1
    // sub r1, r5, r0
    // cmp r3, r1
    // bne _021F6460
    // add r1, r5, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F6460
    // add r4, #0xac
    // ldrb r0, [r4]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0xa4
    // add r2, r4, #0
    // ldr r0, [r0]
    // add r2, #0xc4
    // ldr r2, [r2]
    // sub r3, r0, r5
    // cmp r2, r3
    // bne _021F647E
    // sub r0, r1, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // sub r1, r2, #1
    // cmp r1, r3
    // bne _021F649A
    // add r1, r5, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F649A
    // add r4, #0xac
    // ldrb r0, [r4]
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // sub r1, r5, r0
    // cmp r1, #1
    // bne _021F64C2
    // add r2, r4, #0
    // add r2, #0xc4
    // ldr r2, [r2]
    // add r1, r5, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // beq _021F64C2
    // add r4, #0xac
    // ldrb r0, [r4]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0xa4
    // add r2, r4, #0
    // ldr r0, [r0]
    // add r2, #0xc4
    // ldr r2, [r2]
    // sub r3, r0, r5
    // cmp r2, r3
    // bne _021F64E0
    // sub r0, r1, #2
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // add r1, r2, #1
    // cmp r1, r3
    // bne _021F64FC
    // add r1, r5, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // bne _021F64FC
    // add r4, #0xac
    // ldrb r0, [r4]
    // sub r0, r0, #3
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // sub r1, r0, r5
    // cmp r1, #1
    // bne _021F6524
    // add r2, r4, #0
    // add r2, #0xc4
    // ldr r2, [r2]
    // add r1, r5, #0
    // bl ov01_021F4728
    // cmp r0, #0
    // beq _021F6524
    // add r4, #0xac
    // ldrb r0, [r4]
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // pop {r3, r4, r5, pc}
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // mov r0, #4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F652C(void) {
    GF_AssertFail(0x86);
}


void ov01_021F654C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r2, #0
    // asr r2, r6, #4
    // add r5, r0, #0
    // lsr r2, r2, #0x1b
    // add r2, r6, r2
    // add r4, r1, #0
    // add r0, #0xc4
    // ldr r1, [r0]
    // asr r0, r4, #4
    // lsr r0, r0, #0x1b
    // add r0, r4, r0
    // asr r2, r2, #5
    // str r3, [sp]
    // add r3, r2, #0
    // asr r0, r0, #5
    // mul r3, r1
    // add r7, r0, r3
    // add r0, r5, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // mul r0, r1
    // cmp r7, r0
    // blo _021F658A
    // mov r0, #1
    // bl sub_02039AD8
    // cmp r0, #0
    // beq _021F658A
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r0, #0xc4
    // ldr r1, [r0]
    // add r0, r5, #0
    // add r0, #0xc8
    // ldr r0, [r0]
    // mul r0, r1
    // cmp r7, r0
    // blo _021F65A0
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0xcc
    // ldr r1, [r0]
    // add r0, r6, #0
    // mul r0, r1
    // add r0, r4, r0
    // bl ov01_021F6328
    // add r1, r0, #0
    // add r0, r7, #0
    // add r2, r5, #0
    // bl ov01_021F635C
    // ldr r1, [sp]
    // cmp r1, #0
    // beq _021F65C2
    // strb r0, [r1]
    // cmp r0, #3
    // bls _021F65CA
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F65D0(void) {
    // lsl r1, r1, #2
    // add r0, r0, r1
    // add r0, #0x90
    // ldr r1, [r0]
    // ldr r0, _021F65E0 ; =0x0000085C
    // ldr r0, [r1, r0]
    // bx lr
    // nop
    // _021F65E0: .word 0x0000085C
    // TODO: decompile
}


void ov01_021F65E4(void) {
    // lsl r1, r1, #2
    // add r0, r0, r1
    // add r0, #0x90
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021F65F0(void) {
    // lsl r1, r1, #2
    // add r0, r0, r1
    // add r0, #0x90
    // ldr r1, [r0]
    // mov r0, #0xa7
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bx lr
    // TODO: decompile
}


void ov01_021F6600(void) {
    // lsl r1, r1, #2
    // add r0, r0, r1
    // add r0, #0x90
    // ldr r1, [r0]
    // ldr r0, _021F6610 ; =0x0000086C
    // add r0, r1, r0
    // bx lr
    // nop
    // _021F6610: .word 0x0000086C
    // TODO: decompile
}


void ov01_021F6614(void) {
    SysTask_GetData();
}


void ov01_021F6620(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4, #0x20]
    // cmp r0, #1
    // bne _021F6630
    // mov r0, #5
    // strb r0, [r4, #0x18]
    // ldrb r0, [r4, #0x18]
    // cmp r0, #5
    // bls _021F6638
    // b _021F676A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _021F6644: ; jump table
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #0xe
    // ldr r5, [r4, #8]
    // lsl r0, r0, #0xc
    // cmp r5, r0
    // bgt _021F6662
    // mov r0, #2
    // b _021F6666
    // add r5, r0, #0
    // mov r0, #1
    // strb r0, [r4, #0x18]
    // ldr r2, [r4, #0x10]
    // ldr r0, [r4]
    // ldr r3, [r2]
    // ldr r2, [r4, #0x2c]
    // add r1, r5, #0
    // add r2, r3, r2
    // bl NARC_ReadFile
    // ldr r0, [r4, #0x2c]
    // add r0, r0, r5
    // str r0, [r4, #0x2c]
    // pop {r4, r5, r6, pc}
    // ldr r2, [r4, #0x2c]
    // ldr r0, [r4, #8]
    // sub r5, r0, r2
    // mov r0, #0xe
    // lsl r0, r0, #0xc
    // cmp r5, r0
    // ble _021F6694
    // add r5, r0, #0
    // mov r6, #0
    // b _021F6696
    // mov r6, #1
    // ldr r3, [r4, #0x10]
    // ldr r0, [r4]
    // ldr r3, [r3]
    // add r1, r5, #0
    // add r2, r3, r2
    // bl NARC_ReadFile
    // cmp r6, #0
    // beq _021F66AE
    // mov r0, #2
    // strb r0, [r4, #0x18]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x2c]
    // add r0, r0, r5
    // str r0, [r4, #0x2c]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // beq _021F66CE
    // bl GF3dRender_ResTexIsLoaded
    // cmp r0, #1
    // bne _021F66CE
    // ldr r0, [r4, #0x10]
    // ldr r1, [r4, #0x14]
    // ldr r0, [r0]
    // bl GF3dRender_BindModelSet
    // mov r0, #3
    // strb r0, [r4, #0x18]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x10]
    // ldr r0, [r0]
    // bl NNS_G3dGetMdlSet
    // add r5, r0, #0
    // ldrb r0, [r5, #9]
    // cmp r0, #1
    // beq _021F66E8
    // bl GF_AssertFail
    // cmp r5, #0
    // beq _021F670C
    // add r1, r5, #0
    // add r1, #8
    // beq _021F6700
    // ldrb r0, [r5, #9]
    // cmp r0, #0
    // bls _021F6700
    // ldrh r0, [r5, #0xe]
    // add r0, r1, r0
    // add r0, r0, #4
    // b _021F6702
    // mov r0, #0
    // cmp r0, #0
    // beq _021F670C
    // ldr r0, [r0]
    // add r5, r5, r0
    // b _021F670E
    // mov r5, #0
    // cmp r5, #0
    // bne _021F6716
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // add r1, r5, #0
    // bl NNS_G3dRenderObjInit
    // ldr r0, [r4, #0xc]
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _021F672A
    // bl GF_AssertFail
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // str r1, [r0, #8]
    // ldr r0, [r4, #0x28]
    // bl ov01_02204698
    // cmp r0, #0
    // beq _021F674C
    // ldr r0, [r4, #4]
    // bl sub_02054E20
    // cmp r0, #0
    // bne _021F674C
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #0xc]
    // bl ov01_02204678
    // ldr r0, [r4, #0x1c]
    // mov r1, #1
    // str r1, [r0]
    // mov r0, #5
    // strb r0, [r4, #0x18]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // str r1, [r0]
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F676C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #4
    // mov r1, #0x30
    // add r6, r2, #0
    // add r7, r3, #0
    // bl Heap_AllocAtEnd
    // add r1, r0, #0
    // str r5, [r1]
    // str r4, [r1, #4]
    // str r6, [r1, #8]
    // ldr r0, [sp, #0x18]
    // str r7, [r1, #0xc]
    // str r0, [r1, #0x10]
    // ldr r0, [sp, #0x1c]
    // mov r2, #0
    // str r0, [r1, #0x14]
    // ldr r0, [sp, #0x20]
    // str r0, [r1, #0x28]
    // ldr r0, [sp, #0x24]
    // strb r2, [r1, #0x18]
    // str r0, [r1, #0x1c]
    // str r2, [r0]
    // ldr r0, [sp, #0x28]
    // str r0, [r1, #0x24]
    // str r2, [r1, #0x20]
    // ldr r0, _021F67B0 ; =ov01_021F6620
    // mov r2, #1
    // bl SysTask_CreateOnMainQueue
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F67B0: .word ov01_021F6620
    // TODO: decompile
}


void ov01_021F67B4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r3, #0
    // add r5, r2, #0
    // ldr r2, [r4]
    // bl NARC_ReadFile
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // beq _021F67DE
    // bl GF3dRender_ResTexIsLoaded
    // cmp r0, #1
    // bne _021F67DE
    // ldr r0, [r4]
    // ldr r1, [sp, #0x10]
    // bl GF3dRender_BindModelSet
    // cmp r0, #0
    // bne _021F67DE
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl NNS_G3dGetMdlSet
    // ldrb r0, [r0, #9]
    // cmp r0, #1
    // beq _021F67EE
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl NNS_G3dGetMdlSet
    // cmp r0, #0
    // beq _021F6818
    // add r2, r0, #0
    // add r2, #8
    // beq _021F680C
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _021F680C
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _021F680E
    // mov r1, #0
    // cmp r1, #0
    // beq _021F6818
    // ldr r1, [r1]
    // add r4, r0, r1
    // b _021F681A
    // mov r4, #0
    // cmp r4, #0
    // bne _021F6822
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r4, #0
    // bl NNS_G3dRenderObjInit
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}

