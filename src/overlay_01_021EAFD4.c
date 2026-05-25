/* Decompiled from asm/overlay_01_021EAFD4.s */
#include "global.h"

void ov01_021EAFD4(void) {
    // push {r4, lr}
    // mov r1, #0x63
    // mov r0, #4
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _021EAFE8
    // bl GF_AssertFail
    // mov r0, #0
    // add r2, r4, #0
    // add r1, r0, #0
    // strh r1, [r2, #0x1c]
    // strh r1, [r2, #0x1e]
    // str r1, [r2, #8]
    // str r1, [r2, #0x10]
    // str r1, [r2, #0x18]
    // str r1, [r2, #0x14]
    // add r0, r0, #1
    // add r2, #0x18
    // cmp r0, #0x10
    // blt _021EAFEE
    // mov r0, #0x62
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021EB00C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // str r1, [sp]
    // mov r6, #0
    // mov r0, #0x8b
    // mov r1, #4
    // bl NARC_New
    // add r1, r6, #0
    // mov r2, #4
    // add r7, r0, #0
    // bl NARC_AllocAndReadWholeMember
    // str r0, [r5]
    // str r0, [r5, #4]
    // ldr r0, [r0]
    // add r4, r6, #0
    // cmp r0, #0
    // bls _021EB04E
    // ldr r1, [sp]
    // add r0, r5, #0
    // add r2, r4, #0
    // add r3, r7, #0
    // bl ov01_021EB058
    // cmp r0, #0
    // blt _021EB044
    // add r6, r6, #1
    // ldr r0, [r5, #4]
    // add r4, r4, #1
    // ldr r0, [r0]
    // cmp r4, r0
    // blo _021EB032
    // add r0, r7, #0
    // bl NARC_Delete
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EB058(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r5, r0, #0
    // str r1, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // bne _021EB06E
    // mov r0, #0
    // add sp, #0x38
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r4, #0
    // add r1, r5, #0
    // ldr r0, [r1, #0x14]
    // cmp r0, #0
    // beq _021EB080
    // add r4, r4, #1
    // add r1, #0x18
    // cmp r4, #0x10
    // blt _021EB072
    // cmp r4, #0x10
    // beq _021EB08A
    // ldr r0, [sp]
    // cmp r0, #0
    // bne _021EB092
    // mov r0, #0
    // add sp, #0x38
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x18
    // add r6, r4, #0
    // mul r6, r0
    // add r0, r5, #0
    // str r0, [sp, #0xc]
    // add r0, #8
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // mov r1, #0x34
    // add r7, r0, #0
    // mul r7, r1
    // ldr r1, [r5, #4]
    // ldr r0, [sp]
    // add r1, r1, #4
    // add r1, r1, r7
    // bl sub_020208DC
    // ldr r1, [sp, #0xc]
    // str r0, [r1, r6]
    // add r0, r1, #0
    // ldr r0, [r0, r6]
    // cmp r0, #0
    // bne _021EB0C8
    // mov r0, #0
    // add sp, #0x38
    // mvn r0, r0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [r5, #4]
    // ldr r0, [sp]
    // add r1, r1, #4
    // add r1, r1, r7
    // bl sub_020209E0
    // add r1, r5, r6
    // str r0, [r1, #0xc]
    // ldr r1, _021EB110 ; =ov01_02209898
    // ldr r2, [sp, #4]
    // add r0, sp, #0x10
    // bl sprintf ; result never used
    // ldr r0, [r5, #4]
    // mov r2, #4
    // add r0, r0, #4
    // add r1, r0, r7
    // add r0, r5, r6
    // str r1, [r0, #0x18]
    // ldr r1, [sp, #4]
    // add r7, r5, #0
    // ldr r0, [sp, #8]
    // add r7, #0x14
    // add r1, r1, #1
    // bl NARC_AllocAndReadWholeMember
    // str r0, [r7, r6]
    // ldr r0, [r7, r6]
    // bl NNS_G3dGetTex
    // add r1, r5, r6
    // str r0, [r1, #0x10]
    // add r0, r4, #0
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EB110: .word ov01_02209898
    // TODO: decompile
}


void ov01_021EB114(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // cmp r0, #0
    // beq _021EB18A
    // mov r1, #0x62
    // lsl r1, r1, #2
    // ldr r1, [r0, r1]
    // cmp r1, #0
    // bne _021EB18A
    // mov r4, #0
    // add r5, r0, #0
    // add r5, #8
    // add r7, r4, #0
    // mov r6, #1
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // beq _021EB182
    // ldr r1, [r5, #0x10]
    // cmp r1, #0
    // beq _021EB182
    // ldrh r0, [r5, #0x14]
    // lsl r0, r0, #1
    // add r0, r1, r0
    // ldrb r1, [r0, #0x11]
    // ldrh r0, [r5, #0x16]
    // cmp r1, r0
    // bgt _021EB17E
    // strh r6, [r5, #0x16]
    // ldrh r0, [r5, #0x14]
    // add r0, r0, #1
    // strh r0, [r5, #0x14]
    // ldrh r0, [r5, #0x14]
    // ldr r1, [r5, #0x10]
    // lsl r0, r0, #1
    // add r0, r1, r0
    // ldrb r0, [r0, #0x10]
    // cmp r0, #0xff
    // bne _021EB160
    // strh r7, [r5, #0x14]
    // ldrh r2, [r5, #0x14]
    // ldr r1, [r5, #0x10]
    // ldr r0, [r5, #8]
    // lsl r2, r2, #1
    // add r1, r1, r2
    // ldrb r1, [r1, #0x10]
    // bl sub_02020838
    // add r2, r0, #0
    // ldr r1, [r5]
    // ldr r3, [r5, #4]
    // mov r0, #0
    // bl GF_CreateNewVramTransferTask
    // b _021EB182
    // add r0, r0, #1
    // strh r0, [r5, #0x16]
    // add r4, r4, #1
    // add r5, #0x18
    // cmp r4, #0x10
    // blt _021EB12E
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021EB18C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // beq _021EB1BA
    // mov r0, #0x18
    // add r4, r1, #0
    // mul r4, r0
    // add r0, r5, r4
    // ldr r0, [r0, #0x14]
    // cmp r0, #0
    // beq _021EB1A4
    // bl Heap_Free
    // add r1, r5, #0
    // add r1, #0x18
    // ldr r0, [r1, r4]
    // cmp r0, #0
    // beq _021EB1B2
    // mov r0, #0
    // str r0, [r1, r4]
    // mov r1, #0
    // add r0, r5, r4
    // strh r1, [r0, #0x1c]
    // strh r1, [r0, #0x1e]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EB1BC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // beq _021EB1D8
    // mov r4, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021EB18C
    // add r4, r4, #1
    // cmp r4, #0x10
    // blt _021EB1C4
    // ldr r0, [r5]
    // bl Heap_Free
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021EB1DC(void) {
    Heap_Free();
}

