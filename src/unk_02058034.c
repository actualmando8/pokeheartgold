/* Decompiled from asm/unk_02058034.s */
#include "global.h"

void sub_02058034(void) {
    // bx lr
    // TODO: decompile
}


void sub_02058038(void) {
    // push {r4, lr}
    // ldr r1, _02058090 ; =_021D41C8
    // add r4, r0, #0
    // ldr r1, [r1]
    // cmp r1, #0
    // bne _0205808C
    // bl sub_02091574
    // mov r0, #0xf
    // mov r1, #0x44
    // bl Heap_Alloc
    // ldr r1, _02058090 ; =_021D41C8
    // mov r2, #0x44
    // str r0, [r1]
    // mov r1, #0
    // bl MI_CpuFill8
    // ldr r0, _02058090 ; =_021D41C8
    // mov r1, #0x32
    // ldr r0, [r0]
    // mov r2, #0xa
    // strh r1, [r0, #0x38]
    // ldr r0, _02058094 ; =sub_020582CC
    // mov r1, #0
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _02058090 ; =_021D41C8
    // ldr r2, [r1]
    // str r0, [r2, #0x34]
    // ldr r0, [r1]
    // mov r2, #0
    // str r4, [r0, #0x14]
    // ldr r0, [r1]
    // str r2, [r0, #0x40]
    // bl sub_02058034
    // ldr r0, _02058090 ; =_021D41C8
    // ldr r0, [r0]
    // add r0, #0x18
    // bl sub_0203778C
    // pop {r4, pc}
    // nop
    // _02058090: .word _021D41C8
    // _02058094: .word sub_020582CC
    // TODO: decompile
}


void sub_02058098(void) {
    // push {r4, r5, r6, lr}
    // ldr r0, _020580E0 ; =_021D41C8
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _020580DE
    // ldr r0, [r0, #0x34]
    // bl SysTask_Destroy
    // mov r4, #0
    // ldr r6, _020580E0 ; =_021D41C8
    // add r5, r4, #0
    // ldr r0, [r6]
    // ldr r0, [r0, r5]
    // cmp r0, #0
    // beq _020580BA
    // bl Heap_Free
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _020580AE
    // ldr r0, _020580E0 ; =_021D41C8
    // ldr r0, [r0]
    // ldr r0, [r0, #0x40]
    // cmp r0, #0
    // beq _020580D0
    // bl Heap_Free
    // ldr r0, _020580E0 ; =_021D41C8
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, _020580E0 ; =_021D41C8
    // mov r1, #0
    // str r1, [r0]
    // pop {r4, r5, r6, pc}
    // _020580E0: .word _021D41C8
    // TODO: decompile
}


void sub_020580E4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl sub_02037474
    // cmp r0, #0
    // bne _0205811C
    // add r0, r5, #0
    // bl FieldSystem_GetSaveData
    // mov r1, #0
    // add r3, r5, #0
    // str r1, [sp]
    // add r3, #0xa4
    // ldr r3, [r3]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_02037D8C
    // add r0, r5, #0
    // bl sub_02058038
    // ldr r0, _02058120 ; =sub_02058304
    // mov r1, #0
    // bl sub_020582F4
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _02058120: .word sub_02058304
    // TODO: decompile
}


void sub_02058124(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl sub_02037474
    // cmp r0, #0
    // bne _0205815C
    // add r0, r5, #0
    // bl FieldSystem_GetSaveData
    // mov r1, #0
    // add r3, r5, #0
    // str r1, [sp]
    // add r3, #0xa4
    // ldr r3, [r3]
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_02037DD4
    // add r0, r5, #0
    // bl sub_02058038
    // ldr r0, _02058160 ; =sub_0205832C
    // mov r1, #0
    // bl sub_020582F4
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _02058160: .word sub_0205832C
    // TODO: decompile
}


void sub_02058164(void) {
    // ldr r1, _02058174 ; =_021D41C8
    // ldr r3, _02058178 ; =sub_020582F4
    // ldr r1, [r1]
    // add r1, #0x3a
    // strb r0, [r1]
    // ldr r0, _0205817C ; =sub_0205834C
    // mov r1, #0
    // bx r3
    // _02058174: .word _021D41C8
    // _02058178: .word sub_020582F4
    // _0205817C: .word sub_0205834C
    // TODO: decompile
}


void sub_02058180(void) {
    // ldr r3, _02058188 ; =sub_020582F4
    // ldr r0, _0205818C ; =sub_020588A0
    // mov r1, #0
    // bx r3
    // _02058188: .word sub_020582F4
    // _0205818C: .word sub_020588A0
    // TODO: decompile
}


void sub_02058190(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_0200FC60
    // mov r0, #1
    // mov r1, #0
    // bl sub_0200FC60
    // mov r0, #1
    // add r1, r0, #0
    // bl sub_020398D4
    // bl sub_02037D78
    // cmp r0, #0
    // beq _02058248
    // ldr r0, _0205824C ; =_021D41C8
    // ldr r1, [r0]
    // cmp r1, #0
    // bne _020581D0
    // add r0, r4, #0
    // bl sub_02058038
    // ldr r0, _0205824C ; =_021D41C8
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0x3e
    // strb r1, [r0]
    // b _020581D6
    // mov r0, #0
    // add r1, #0x3e
    // strb r0, [r1]
    // ldr r0, _0205824C ; =_021D41C8
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0x3f
    // strb r1, [r0]
    // bl sub_0203769C
    // str r0, [sp, #8]
    // bl sub_0203769C
    // bl sub_02034818
    // mov r4, #0
    // bl sub_02037454
    // cmp r0, #0
    // ble _0205821E
    // ldr r6, _0205824C ; =_021D41C8
    // add r5, r4, #0
    // add r7, r4, #0
    // ldr r0, [r6]
    // ldr r0, [r0, r5]
    // cmp r0, #0
    // bne _02058212
    // ldr r1, _02058250 ; =0x0000066C
    // add r0, r7, #0
    // bl Heap_Alloc
    // ldr r1, [r6]
    // str r0, [r1, r5]
    // add r5, r5, #4
    // add r4, r4, #1
    // bl sub_02037454
    // cmp r4, r0
    // blt _020581FE
    // ldr r0, _0205824C ; =_021D41C8
    // mov r3, #0xff
    // ldr r1, [r0]
    // ldr r0, [r1, #0x14]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // str r0, [sp, #4]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // bl sub_02068FC8
    // mov r0, #0x5f
    // bl sub_02037AC0
    // ldr r0, _02058254 ; =sub_020588F8
    // mov r1, #0
    // bl sub_020582F4
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0205824C: .word _021D41C8
    // _02058250: .word 0x0000066C
    // _02058254: .word sub_020588F8
    // TODO: decompile
}


void sub_02058258(void) {
    // ldr r0, _02058278 ; =_021D41C8
    // ldr r0, [r0]
    // ldr r1, [r0, #0x30]
    // ldr r0, _0205827C ; =sub_020588F8
    // cmp r1, r0
    // bne _02058268
    // mov r0, #0
    // bx lr
    // ldr r0, _02058280 ; =sub_02058930
    // cmp r1, r0
    // beq _02058272
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _02058278: .word _021D41C8
    // _0205827C: .word sub_020588F8
    // _02058280: .word sub_02058930
    // TODO: decompile
}


void sub_02058284(void) {
    // push {r3, lr}
    // ldr r0, _020582A0 ; =_021D41C8
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0205829E
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_020398D4
    // ldr r0, _020582A4 ; =sub_02058A60
    // mov r1, #5
    // bl sub_020582F4
    // pop {r3, pc}
    // _020582A0: .word _021D41C8
    // _020582A4: .word sub_02058A60
    // TODO: decompile
}


void sub_020582A8(void) {
    // push {r3, lr}
    // ldr r0, _020582C4 ; =_021D41C8
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _020582C0
    // mov r0, #0x5b
    // bl sub_02037AC0
    // ldr r0, _020582C8 ; =sub_02058A38
    // mov r1, #5
    // bl sub_020582F4
    // pop {r3, pc}
    // nop
    // _020582C4: .word _021D41C8
    // _020582C8: .word sub_02058A38
    // TODO: decompile
}


void sub_020582CC(void) {
    // push {r3, lr}
    // ldr r1, _020582F0 ; =_021D41C8
    // ldr r2, [r1]
    // cmp r2, #0
    // bne _020582DC
    // bl SysTask_Destroy
    // pop {r3, pc}
    // ldr r1, [r2, #0x30]
    // cmp r1, #0
    // beq _020582EC
    // add r2, #0x3c
    // ldrb r0, [r2]
    // cmp r0, #0
    // bne _020582EC
    // blx r1
    // pop {r3, pc}
    // nop
    // _020582F0: .word _021D41C8
    // TODO: decompile
}


void sub_020582F4(void) {
    // ldr r2, _02058300 ; =_021D41C8
    // ldr r3, [r2]
    // str r0, [r3, #0x30]
    // ldr r0, [r2]
    // strh r1, [r0, #0x38]
    // bx lr
    // _02058300: .word _021D41C8
    // TODO: decompile
}


void sub_02058304(void) {
    // push {r3, lr}
    // bl sub_0203769C
    // bl sub_020373B4
    // cmp r0, #0
    // beq _02058322
    // bl ov03_02255C54
    // bl sub_02034434
    // ldr r0, _02058324 ; =sub_02058328
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // _02058324: .word sub_02058328
    // TODO: decompile
}


void sub_02058328(void) {
    // bx lr
    // TODO: decompile
}


void sub_0205832C(void) {
    // push {r3, lr}
    // bl sub_02034DB8
    // cmp r0, #0
    // beq _02058342
    // bl ov03_02255BEC
    // ldr r0, _02058344 ; =sub_02058348
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // _02058344: .word sub_02058348
    // TODO: decompile
}


void sub_02058348(void) {
    // bx lr
    // TODO: decompile
}


void sub_0205834C(void) {
    // push {r3, lr}
    // ldr r0, _02058364 ; =_021D41C8
    // ldr r0, [r0]
    // add r0, #0x3a
    // ldrb r0, [r0]
    // bl sub_02037E1C
    // ldr r0, _02058368 ; =sub_0205836C
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // _02058364: .word _021D41C8
    // _02058368: .word sub_0205836C
    // TODO: decompile
}


void sub_0205836C(void) {
    // push {r3, lr}
    // bl sub_02037EC8
    // cmp r0, #0
    // beq _02058382
    // bl sub_02034434
    // ldr r0, _02058384 ; =sub_02058388
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // _02058384: .word sub_02058388
    // TODO: decompile
}


void sub_02058388(void) {
    // bx lr
    // TODO: decompile
}


void sub_0205838C(void) {
    // push {r3, lr}
    // mov r0, #0x62
    // bl sub_02037B38
    // cmp r0, #0
    // beq _020583C8
    // bl sub_02057180
    // add r1, r0, #0
    // mov r0, #0xf
    // bl Heap_Alloc
    // ldr r1, _020583E4 ; =_021D41C8
    // mov r2, #0
    // ldr r1, [r1]
    // ldr r1, [r1, #0x14]
    // bl sub_02056D7C
    // bl sub_02057F80
    // bl sub_02037504
    // mov r0, #0x5c
    // bl sub_02037AC0
    // ldr r0, _020583E8 ; =sub_020583EC
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // ldr r0, _020583E4 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _020583D8
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // mov r0, #0x1e
    // strh r0, [r1, #0x38]
    // mov r0, #0x62
    // bl sub_02037AC0
    // pop {r3, pc}
    // _020583E4: .word _021D41C8
    // _020583E8: .word sub_020583EC
    // TODO: decompile
}


void sub_020583EC(void) {
    // push {lr}
    // sub sp, #0xc
    // bl sub_0203769C
    // cmp r0, #0
    // bne _020583FC
    // bl sub_02034638
    // mov r0, #0x5c
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0205843A
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // bl sub_0200FBDC
    // mov r0, #1
    // bl sub_0200FBDC
    // bl sub_02056E60
    // mov r0, #0
    // bl sub_0205701C
    // ldr r0, _02058440 ; =sub_02058478
    // mov r1, #1
    // bl sub_020582F4
    // add sp, #0xc
    // pop {pc}
    // nop
    // _02058440: .word sub_02058478
    // TODO: decompile
}


void sub_02058444(void) {
    // push {r3, lr}
    // ldr r0, _02058470 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _02058456
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // mov r0, #0x1e
    // bl sub_02037B38
    // cmp r0, #0
    // beq _0205846C
    // bl sub_020374E4
    // ldr r0, _02058474 ; =sub_02058608
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // nop
    // _02058470: .word _021D41C8
    // _02058474: .word sub_02058608
    // TODO: decompile
}


void sub_02058478(void) {
    // push {r3, lr}
    // ldr r0, _020584B4 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _0205848A
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // bl sub_0203769C
    // cmp r0, #0
    // bne _020584A2
    // bl sub_02057E50
    // cmp r0, #0
    // beq _020584B0
    // mov r0, #0x1e
    // bl sub_02037AC0
    // b _020584A8
    // mov r0, #0x1e
    // bl sub_02037AC0
    // ldr r0, _020584B8 ; =sub_02058444
    // mov r1, #0x14
    // bl sub_020582F4
    // pop {r3, pc}
    // nop
    // _020584B4: .word _021D41C8
    // _020584B8: .word sub_02058444
    // TODO: decompile
}


void sub_020584BC(void) {
    // push {r3, lr}
    // mov r0, #0x62
    // bl sub_02037B38
    // cmp r0, #0
    // beq _020584F4
    // bl sub_02057180
    // add r1, r0, #0
    // mov r0, #0xf
    // bl Heap_Alloc
    // ldr r1, _02058510 ; =_021D41C8
    // mov r2, #0
    // ldr r1, [r1]
    // ldr r1, [r1, #0x14]
    // bl sub_02056D7C
    // bl sub_02057F80
    // mov r0, #0x5c
    // bl sub_02037AC0
    // ldr r0, _02058514 ; =sub_02058518
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // ldr r0, _02058510 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _02058504
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // mov r0, #0x1e
    // strh r0, [r1, #0x38]
    // mov r0, #0x62
    // bl sub_02037AC0
    // pop {r3, pc}
    // _02058510: .word _021D41C8
    // _02058514: .word sub_02058518
    // TODO: decompile
}


void sub_02058518(void) {
    // push {r3, lr}
    // sub sp, #0x10
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02058528
    // bl sub_02034638
    // mov r0, #0x5c
    // bl sub_02037B38
    // cmp r0, #0
    // beq _02058574
    // bl sub_02056E60
    // mov r0, #0
    // bl sub_0205701C
    // mov r1, #1
    // add r0, sp, #0xc
    // strb r1, [r0]
    // mov r0, #0x5e
    // add r1, sp, #0xc
    // bl sub_020376E0
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // bl sub_0200FBDC
    // mov r0, #1
    // bl sub_0200FBDC
    // ldr r0, _02058578 ; =sub_020586EC
    // mov r1, #0
    // bl sub_020582F4
    // add sp, #0x10
    // pop {r3, pc}
    // _02058578: .word sub_020586EC
    // TODO: decompile
}


void sub_0205857C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r0, #0
    // str r0, [sp]
    // bl sub_02037454
    // cmp r0, #0
    // ble _020585F0
    // mov r7, #0
    // bl sub_0203769C
    // ldr r1, [sp]
    // cmp r1, r0
    // beq _020585E0
    // add r0, r1, #0
    // bl sub_02037B5C
    // cmp r0, #0x5e
    // bne _020585E0
    // ldr r6, _02058600 ; =_021D41C8
    // ldr r0, [r6]
    // ldr r1, [r0, #0x14]
    // ldr r0, [r1, #0x10]
    // cmp r0, #0
    // bne _020585E0
    // add r1, #0xd2
    // ldrb r0, [r1]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1a
    // bne _020585E0
    // mov r4, #0
    // add r5, r4, #0
    // ldr r0, [r6]
    // ldr r0, [r0, r5]
    // cmp r0, #0
    // beq _020585CA
    // bl Heap_Free
    // ldr r0, [r6]
    // str r7, [r0, r5]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _020585BA
    // ldr r0, _02058600 ; =_021D41C8
    // ldr r1, _02058604 ; =0x0000238E
    // ldr r0, [r0]
    // mov r2, #0
    // ldr r0, [r0, #0x14]
    // bl StartMapSceneScript
    // ldr r0, [sp]
    // add r0, r0, #1
    // str r0, [sp]
    // bl sub_02037454
    // ldr r1, [sp]
    // cmp r1, r0
    // blt _0205858C
    // ldr r1, _02058600 ; =_021D41C8
    // mov r0, #4
    // ldr r1, [r1]
    // ldr r1, [r1, #0x14]
    // ldr r1, [r1, #8]
    // bl sub_020399FC
    // pop {r3, r4, r5, r6, r7, pc}
    // _02058600: .word _021D41C8
    // _02058604: .word 0x0000238E
    // TODO: decompile
}


void sub_02058608(void) {
    // push {r3, lr}
    // bl sub_02057C94
    // cmp r0, #0
    // bne _02058632
    // ldr r0, _02058638 ; =_021D41C8
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0x3f
    // strb r1, [r0]
    // mov r1, #1
    // add r0, sp, #0
    // strb r1, [r0]
    // mov r0, #0x5e
    // add r1, sp, #0
    // bl sub_020376E0
    // ldr r0, _0205863C ; =sub_020586EC
    // mov r1, #0
    // bl sub_020582F4
    // bl sub_0205857C
    // pop {r3, pc}
    // _02058638: .word _021D41C8
    // _0205863C: .word sub_020586EC
    // TODO: decompile
}


void sub_02058640(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // beq _0205865E
    // mov r0, #0xb
    // bl SaveArray_Party_Alloc
    // ldr r1, _02058684 ; =_021D41C8
    // ldr r2, [r1]
    // str r0, [r2, #0x40]
    // ldr r1, [r1]
    // add r0, r4, #0
    // ldr r1, [r1, #0x40]
    // bl Party_Copy
    // cmp r5, #0
    // beq _0205866C
    // ldr r0, _02058688 ; =sub_02058870
    // mov r1, #3
    // bl sub_020582F4
    // pop {r3, r4, r5, pc}
    // mov r1, #3
    // add r0, sp, #0
    // strb r1, [r0]
    // mov r0, #0x5e
    // add r1, sp, #0
    // bl sub_020376E0
    // ldr r0, _0205868C ; =sub_02058608
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, r4, r5, pc}
    // _02058684: .word _021D41C8
    // _02058688: .word sub_02058870
    // _0205868C: .word sub_02058608
    // TODO: decompile
}


void sub_02058690(void) {
    // ldr r3, _02058698 ; =sub_020582F4
    // ldr r0, _0205869C ; =sub_02058608
    // mov r1, #0
    // bx r3
    // _02058698: .word sub_020582F4
    // _0205869C: .word sub_02058608
    // TODO: decompile
}


void sub_020586A0(void) {
    // push {r3, lr}
    // bl sub_02037958
    // cmp r0, #0
    // bne _020586DE
    // bl sub_0203769C
    // bl sub_02057F18
    // cmp r0, #0
    // bne _020586DE
    // ldr r0, _020586E0 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _020586C6
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // bl sub_02057F58
    // ldr r0, _020586E0 ; =_021D41C8
    // ldr r1, _020586E4 ; =sub_02058640
    // ldr r0, [r0]
    // ldr r0, [r0, #0x14]
    // bl sub_02059538
    // ldr r0, _020586E8 ; =sub_02058690
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // _020586E0: .word _021D41C8
    // _020586E4: .word sub_02058640
    // _020586E8: .word sub_02058690
    // TODO: decompile
}


void sub_020586EC(void) {
    // push {r3, lr}
    // ldr r0, _02058718 ; =_021D41C8
    // ldr r0, [r0]
    // add r0, #0x3f
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02058710
    // ldr r0, _0205871C ; =sub_020586A0
    // mov r1, #5
    // bl sub_020582F4
    // mov r1, #0
    // add r0, sp, #0
    // strb r1, [r0]
    // mov r0, #0x5e
    // add r1, sp, #0
    // bl sub_020376E0
    // bl sub_0205857C
    // pop {r3, pc}
    // nop
    // _02058718: .word _021D41C8
    // _0205871C: .word sub_020586A0
    // TODO: decompile
}


void sub_02058720(void) {
    sub_0203769C(1);
}


void sub_02058740(void) {
    // ldr r0, _02058760 ; =_021D41C8
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0205875A
    // ldr r1, [r0, #0x30]
    // ldr r0, _02058764 ; =sub_020586EC
    // cmp r1, r0
    // beq _02058756
    // ldr r0, _02058768 ; =sub_02058608
    // cmp r1, r0
    // bne _0205875A
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _02058760: .word _021D41C8
    // _02058764: .word sub_020586EC
    // _02058768: .word sub_02058608
    // TODO: decompile
}


void sub_0205876C(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r0, _020587E4 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _02058782
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // add sp, #8
    // pop {r4, pc}
    // mov r4, #5
    // bl sub_0203993C
    // cmp r0, #5
    // bgt _0205879C
    // cmp r0, #2
    // blt _020587A8
    // beq _020587A6
    // cmp r0, #4
    // beq _020587A2
    // cmp r0, #5
    // beq _020587A2
    // b _020587A8
    // cmp r0, #0x26
    // beq _020587A6
    // b _020587A8
    // mov r4, #0xf
    // b _020587A8
    // mov r4, #7
    // add r0, sp, #0
    // bl sub_02039980
    // ldr r0, _020587E4 ; =_021D41C8
    // ldr r0, [r0]
    // ldr r1, [r0, #0x40]
    // ldr r0, [r0, #0x14]
    // cmp r1, #0
    // bne _020587C4
    // add r1, sp, #0
    // add r2, r4, #0
    // bl sub_02051598
    // b _020587DC
    // add r2, r4, #0
    // bl sub_020515FC
    // ldr r0, _020587E4 ; =_021D41C8
    // ldr r0, [r0]
    // ldr r0, [r0, #0x40]
    // bl Heap_Free
    // ldr r0, _020587E4 ; =_021D41C8
    // mov r1, #0
    // ldr r0, [r0]
    // str r1, [r0, #0x40]
    // bl sub_02058098
    // add sp, #8
    // pop {r4, pc}
    // _020587E4: .word _021D41C8
    // TODO: decompile
}


void sub_020587E8(void) {
    // push {r3, lr}
    // bl sub_02036010
    // cmp r0, #0
    // beq _02058822
    // ldr r0, _02058824 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _02058800
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // ldr r0, _02058824 ; =_021D41C8
    // ldr r0, [r0]
    // ldrh r0, [r0, #0x38]
    // cmp r0, #0x5a
    // bne _02058810
    // mov r0, #4
    // bl sub_02037AC0
    // mov r0, #4
    // bl sub_02037B38
    // cmp r0, #0
    // beq _02058822
    // ldr r0, _02058828 ; =sub_0205876C
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // _02058824: .word _021D41C8
    // _02058828: .word sub_0205876C
    // TODO: decompile
}


void sub_0205882C(void) {
    // push {r3, lr}
    // ldr r0, _0205884C ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _0205883E
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // bl sub_02035FD8
    // ldr r0, _02058850 ; =sub_020587E8
    // mov r1, #0x78
    // bl sub_020582F4
    // pop {r3, pc}
    // _0205884C: .word _021D41C8
    // _02058850: .word sub_020587E8
    // TODO: decompile
}


void sub_02058854(void) {
    // push {r3, lr}
    // mov r0, #3
    // bl sub_02037B38
    // cmp r0, #0
    // beq _02058868
    // ldr r0, _0205886C ; =sub_0205882C
    // mov r1, #2
    // bl sub_020582F4
    // pop {r3, pc}
    // nop
    // _0205886C: .word sub_0205882C
    // TODO: decompile
}


void sub_02058870(void) {
    // push {r3, lr}
    // ldr r0, _02058898 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _02058882
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // mov r0, #0
    // bl sub_02056EA0
    // mov r0, #3
    // bl sub_02037AC0
    // ldr r0, _0205889C ; =sub_02058854
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // _02058898: .word _021D41C8
    // _0205889C: .word sub_02058854
    // TODO: decompile
}


void sub_020588A0(void) {
    // push {r3, lr}
    // bl sub_02037E38
    // ldr r0, _020588B0 ; =sub_020588B4
    // mov r1, #2
    // bl sub_020582F4
    // pop {r3, pc}
    // _020588B0: .word sub_020588B4
    // TODO: decompile
}


void sub_020588B4(void) {
    // push {r3, lr}
    // bl sub_02035664
    // cmp r0, #0
    // beq _020588C6
    // ldr r0, _020588C8 ; =sub_0205836C
    // mov r1, #0xa
    // bl sub_020582F4
    // pop {r3, pc}
    // _020588C8: .word sub_0205836C
    // TODO: decompile
}


void sub_020588CC(void) {
    // ldr r1, _020588D8 ; =_021D41C8
    // mov r2, #1
    // ldr r1, [r1]
    // add r0, r1, r0
    // strb r2, [r0, #0x10]
    // bx lr
    // _020588D8: .word _021D41C8
    // TODO: decompile
}


void sub_020588DC(void) {
    GF_AssertFail();
}


void sub_020588F8(void) {
    // push {r4, lr}
    // bl sub_0203769C
    // add r4, r0, #0
    // mov r0, #0x5f
    // bl sub_02037B38
    // cmp r0, #0
    // beq _02058922
    // ldr r1, _02058924 ; =_021D41C8
    // mov r0, #0x58
    // ldr r2, [r1]
    // lsl r1, r4, #2
    // ldr r1, [r2, r1]
    // ldr r2, _02058928 ; =0x0000066C
    // bl sub_02036FD8
    // ldr r0, _0205892C ; =sub_02058930
    // mov r1, #0
    // bl sub_020582F4
    // pop {r4, pc}
    // _02058924: .word _021D41C8
    // _02058928: .word 0x0000066C
    // _0205892C: .word sub_02058930
    // TODO: decompile
}


void sub_02058930(void) {
    // push {r3, r4, r5, lr}
    // mov r4, #0
    // bl sub_02037454
    // cmp r0, #0
    // ble _02058952
    // ldr r5, _02058964 ; =_021D41C8
    // ldr r0, [r5]
    // add r0, r0, r4
    // ldrb r0, [r0, #0x10]
    // cmp r0, #0
    // beq _02058960
    // add r4, r4, #1
    // bl sub_02037454
    // cmp r4, r0
    // blt _0205893E
    // mov r0, #0x61
    // bl sub_02037AC0
    // ldr r0, _02058968 ; =sub_020589D8
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, r4, r5, pc}
    // nop
    // _02058964: .word _021D41C8
    // _02058968: .word sub_020589D8
    // TODO: decompile
}


void sub_0205896C(void) {
    // push {r3, lr}
    // bl sub_02036010
    // cmp r0, #0
    // bne _020589A6
    // ldr r0, _020589A8 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _02058984
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // ldr r0, _020589A8 ; =_021D41C8
    // ldr r0, [r0]
    // ldrh r0, [r0, #0x38]
    // cmp r0, #0x5a
    // bne _02058994
    // mov r0, #5
    // bl sub_02037AC0
    // mov r0, #5
    // bl sub_02037B38
    // cmp r0, #0
    // beq _020589A6
    // ldr r0, _020589AC ; =sub_020589F4
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // _020589A8: .word _021D41C8
    // _020589AC: .word sub_020589F4
    // TODO: decompile
}


void sub_020589B0(void) {
    // push {r3, lr}
    // ldr r0, _020589D0 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _020589C2
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // bl sub_02035FE4
    // ldr r0, _020589D4 ; =sub_0205896C
    // mov r1, #0x78
    // bl sub_020582F4
    // pop {r3, pc}
    // _020589D0: .word _021D41C8
    // _020589D4: .word sub_0205896C
    // TODO: decompile
}


void sub_020589D8(void) {
    // push {r3, lr}
    // mov r0, #0x61
    // bl sub_02037B38
    // cmp r0, #0
    // beq _020589EC
    // ldr r0, _020589F0 ; =sub_020589B0
    // mov r1, #2
    // bl sub_020582F4
    // pop {r3, pc}
    // nop
    // _020589F0: .word sub_020589B0
    // TODO: decompile
}


void sub_020589F4(void) {
    // push {r3, lr}
    // ldr r0, _02058A2C ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _02058A06
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // mov r0, #0x62
    // bl sub_02037AC0
    // ldr r0, _02058A2C ; =_021D41C8
    // ldr r0, [r0]
    // add r0, #0x3e
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02058A22
    // ldr r0, _02058A30 ; =sub_0205838C
    // mov r1, #0x1e
    // bl sub_020582F4
    // pop {r3, pc}
    // ldr r0, _02058A34 ; =sub_020584BC
    // mov r1, #0x1e
    // bl sub_020582F4
    // pop {r3, pc}
    // _02058A2C: .word _021D41C8
    // _02058A30: .word sub_0205838C
    // _02058A34: .word sub_020584BC
    // TODO: decompile
}


void sub_02058A38(void) {
    // push {r3, lr}
    // mov r0, #0x5b
    // bl sub_02037B38
    // cmp r0, #0
    // beq _02058A5A
    // mov r0, #0
    // add r1, r0, #0
    // bl sub_020398D4
    // mov r0, #1
    // bl sub_02056EA0
    // ldr r0, _02058A5C ; =sub_02058A78
    // mov r1, #5
    // bl sub_020582F4
    // pop {r3, pc}
    // _02058A5C: .word sub_02058A78
    // TODO: decompile
}


void sub_02058A60(void) {
    // push {r3, lr}
    // mov r0, #1
    // bl sub_02056EA0
    // ldr r0, _02058A74 ; =sub_02058A78
    // mov r1, #5
    // bl sub_020582F4
    // pop {r3, pc}
    // nop
    // _02058A74: .word sub_02058A78
    // TODO: decompile
}


void sub_02058A78(void) {
    // push {r3, lr}
    // ldr r0, _02058A98 ; =_021D41C8
    // ldr r1, [r0]
    // ldrh r0, [r1, #0x38]
    // cmp r0, #0
    // beq _02058A8A
    // sub r0, r0, #1
    // strh r0, [r1, #0x38]
    // pop {r3, pc}
    // bl sub_02037E9C
    // ldr r0, _02058A9C ; =sub_02058098
    // mov r1, #0
    // bl sub_020582F4
    // pop {r3, pc}
    // _02058A98: .word _021D41C8
    // _02058A9C: .word sub_02058098
    // TODO: decompile
}


void sub_02058AA0(void) {
    // ldr r0, _02058AD4 ; =_021D41C8
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02058AAC
    // mov r0, #0
    // bx lr
    // ldr r1, [r0, #0x30]
    // ldr r0, _02058AD8 ; =sub_02058870
    // cmp r1, r0
    // beq _02058ACC
    // ldr r0, _02058ADC ; =sub_02058854
    // cmp r1, r0
    // beq _02058ACC
    // ldr r0, _02058AE0 ; =sub_0205882C
    // cmp r1, r0
    // beq _02058ACC
    // ldr r0, _02058AE4 ; =sub_020587E8
    // cmp r1, r0
    // beq _02058ACC
    // ldr r0, _02058AE8 ; =sub_0205876C
    // cmp r1, r0
    // bne _02058AD0
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02058AD4: .word _021D41C8
    // _02058AD8: .word sub_02058870
    // _02058ADC: .word sub_02058854
    // _02058AE0: .word sub_0205882C
    // _02058AE4: .word sub_020587E8
    // _02058AE8: .word sub_0205876C
    // TODO: decompile
}

