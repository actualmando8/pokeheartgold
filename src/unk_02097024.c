/* Decompiled from asm/unk_02097024.s */
#include "global.h"

void sub_02097024(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // mov r1, #0x3c
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x3c
    // bl memset
    // add r2, r4, #0
    // ldmia r5!, {r0, r1}
    // add r2, #0x14
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r5]
    // add r1, r6, #0
    // str r0, [r2]
    // add r0, r4, #0
    // bl sub_02096C88
    // str r0, [r4, #0x30]
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02097060(void) {
    sub_02096CF4(*((u32*)(r0 + 0x30)));
    sub_02096CC8(*((u32*)(r4 + 0x30)));
    Heap_Free(r4);
}


void sub_02097078(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}


void sub_0209707C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0xb
    // mov r1, #0x34
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x34
    // bl memset
    // str r5, [r4, #0x28]
    // ldr r0, [r5, #0xc]
    // str r0, [r4, #0x10]
    // add r0, r5, #0
    // add r0, #0x84
    // ldr r0, [r0]
    // str r0, [r4, #0x14]
    // ldr r0, [r5, #0xc]
    // bl Save_PlayerData_GetOptionsAddr
    // str r0, [r4, #0x18]
    // ldr r0, [r5, #0xc]
    // bl Save_GameStats_Get
    // str r0, [r4, #0x1c]
    // ldr r0, [r4, #0x18]
    // bl Options_GetFrame
    // str r0, [r4, #0xc]
    // str r5, [r4, #0x20]
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020970C0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4]
    // lsl r2, r1, #2
    // ldr r1, _020970E0 ; =_02108EC0
    // ldr r1, [r1, r2]
    // blx r1
    // cmp r0, #1
    // bne _020970DC
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _020970E0: .word _02108EC0
    // TODO: decompile
}


void sub_020970E4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, #8
    // mov r1, #0xb
    // bl sub_02097024
    // str r0, [r4, #0x24]
    // mov r0, #1
    // str r0, [r4]
    // ldr r0, [r4, #0x28]
    // ldr r1, _02097104 ; =_02108EA0
    // ldr r2, [r4, #0x24]
    // bl FieldSystem_LaunchApplication
    // mov r0, #0
    // pop {r4, pc}
    // _02097104: .word _02108EA0
    // TODO: decompile
}


void sub_02097108(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x28]
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _02097142
    // ldr r0, [r4, #0x24]
    // bl sub_02097078
    // cmp r0, #0
    // bne _02097126
    // mov r0, #5
    // str r0, [r4]
    // b _02097142
    // mov r0, #1
    // add r1, r0, #0
    // bl sub_020398D4
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #4]
    // bl PartyMenu_LaunchApp_Unk5
    // str r0, [r4, #0x2c]
    // ldr r0, [r4, #0x24]
    // mov r1, #1
    // str r1, [r0]
    // mov r0, #2
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02097148(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x28]
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _020971A4
    // ldr r0, [r5, #0x2c]
    // add r1, r0, #0
    // add r1, #0x26
    // ldrb r4, [r1]
    // bl Heap_Free
    // ldr r0, [r5, #0x2c]
    // add r0, #0x27
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0209718C
    // ldr r0, [r5, #0x28]
    // mov r1, #3
    // mov r2, #0
    // bl PokemonSummary_CreateArgs
    // str r0, [r5, #0x30]
    // str r4, [r5, #4]
    // ldr r0, [r5, #0x30]
    // strb r4, [r0, #0x14]
    // ldr r0, [r5, #0x28]
    // ldr r1, [r5, #0x30]
    // bl PokemonSummary_LearnForget_LaunchApp
    // mov r0, #3
    // str r0, [r5]
    // b _020971A4
    // ldr r0, [r5, #0x24]
    // ldr r1, _020971A8 ; =_02108EB0
    // str r4, [r0, #4]
    // ldr r0, [r5, #0x28]
    // ldr r2, [r5, #0x24]
    // bl FieldSystem_LaunchApplication
    // ldr r0, [r5, #0x24]
    // mov r1, #3
    // str r1, [r0]
    // mov r0, #4
    // str r0, [r5]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _020971A8: .word _02108EB0
    // TODO: decompile
}


void sub_020971AC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x28]
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _020971CE
    // ldr r0, [r4, #0x30]
    // bl Heap_Free
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #4]
    // bl PartyMenu_LaunchApp_Unk5
    // str r0, [r4, #0x2c]
    // mov r0, #2
    // str r0, [r4]
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020971D4(void) {
    FieldSystem_ApplicationIsRunning(0, 5);
}


void sub_020971EC(void) {
    sub_02097060();
}

