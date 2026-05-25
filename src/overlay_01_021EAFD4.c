/* Decompiled from asm/overlay_01_021EAFD4.s */
#include "global.h"

void * ov01_021EAFD4(void) {
    Heap_Alloc(4, (0x63 << 2));
    GF_AssertFail();
    *((u16*)(r4 + 0x1c)) = 0;
    *((u16*)(r4 + 0x1e)) = 0;
    *((u32*)(r4 + 8)) = 0;
    *((u32*)(r4 + 0x10)) = 0;
    *((u32*)(r4 + 0x18)) = 0;
    *((u32*)(r4 + 0x14)) = 0;
    // add r2, #0x18
    // str r1, [r4, r0]
}



u32 ov01_021EB00C(void) {
    // str r1, [sp]
    NARC_New(0x8b, 4);
    NARC_AllocAndReadWholeMember(r6, 4);
    // str r0, [r5]
    *((u32*)(r5 + 4)) = r0;
    // ldr r1, [sp]
    ov01_021EB058(r5, r6, r7);
    NARC_Delete(r7);
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
    // ldr r1, [r0, r1]
    // add r5, #8
    // add r0, r1, r0
    *((u16*)(r0 + 0x16)) = 1;
    *((u16*)(r0 + 0x14)) = (*((u16*)(r0 + 0x14)) + 1);
    // add r0, r1, r0
    *((u16*)(r0 + 0x14)) = 0;
    // add r1, r1, r2
    sub_02020838(*((u32*)(r0 + 8)), *((u8*)(*((u32*)(r0 + 0x10)) + 0x10)), (*((u16*)(r0 + 0x14)) << 1));
    GF_CreateNewVramTransferTask(0, *((u32*)r5), r0, *((u32*)(r5 + 4)));
    *((u16*)(r5 + 0x16)) = (r0 + 1);
    // add r5, #0x18
}



void ov01_021EB18C(void) {
    // mul r4, r0
    // add r0, r5, r4
    Heap_Free(*((u32*)(0x18 + 0x14)));
    // add r1, #0x18
    // ldr r0, [r1, r4]
    // str r0, [r1, r4]
    // add r0, r5, r4
    *((u16*)(0 + 0x1c)) = 0;
    *((u16*)(0 + 0x1e)) = 0;
}



void ov01_021EB1BC(void) {
    ov01_021EB18C(r0, 0);
    Heap_Free(*((u32*)r5));
}



void ov01_021EB1DC(void) {
}


