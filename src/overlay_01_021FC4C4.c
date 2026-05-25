/* Decompiled from asm/overlay_01_021FC4C4.s */
#include "global.h"

void ov01_021FC4C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r2, #0
    // lsl r2, r3, #3
    // add r6, r5, r2
    // add r6, #0x18
    // str r2, [sp, #8]
    // add r2, r6, #0
    // str r0, [sp]
    // add r7, r1, #0
    // str r3, [sp, #4]
    // bl Heap_Create
    // cmp r0, #1
    // beq _021FC4E6
    // bl GF_AssertFail
    // sub r5, r6, r5
    // add r0, r7, #0
    // add r1, r5, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _021FC4F8
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r5, #0
    // bl memset
    // ldr r0, [sp]
    // str r0, [r4]
    // ldr r0, [sp, #4]
    // str r7, [r4, #4]
    // str r0, [r4, #8]
    // ldr r0, [sp, #8]
    // str r6, [r4, #0xc]
    // str r0, [r4, #0x10]
    // add r0, r4, #0
    // add r0, #0x18
    // str r0, [r4, #0x14]
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FC520(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r4, [r6, #8]
    // ldr r5, [r6, #0x14]
    // cmp r4, #0
    // beq _021FC542
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _021FC53A
    // ldr r1, [r5, #4]
    // add r0, r6, #0
    // bl ov01_021FC588
    // sub r4, r4, #1
    // add r5, #8
    // cmp r4, #0
    // bne _021FC52C
    // ldr r4, [r6, #4]
    // add r0, r6, #0
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Destroy
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FC554(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl ov01_021FC644
    // str r0, [sp]
    // cmp r0, #0
    // bne _021FC56C
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl ov01_021FC5FC
    // add r5, r0, #0
    // ldr r0, [sp]
    // add r1, r4, #0
    // add r2, r5, #0
    // bl ov01_021FC65C
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FC588(void) {
    // push {r4, lr}
    // bl ov01_021FC624
    // add r4, r0, #0
    // bne _021FC596
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl ov01_021FC61C
    // add r0, r4, #0
    // bl ov01_021FC664
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FC5A4(void) {
    // push {r4, lr}
    // bl ov01_021FC624
    // add r4, r0, #0
    // bne _021FC5B2
    // bl GF_AssertFail
    // ldr r0, [r4]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FC5B8(void) {
    ov01_021FC624();
}


void ov01_021FC5CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r2, #0
    // add r5, r0, #0
    // add r7, r3, #0
    // add r6, r1, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // bl NARC_GetMemberSize
    // add r2, r0, #0
    // ldr r3, [sp, #0x18]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov01_021FC554
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r7, #0
    // add r2, r5, #0
    // bl NARC_ReadWholeMember
    // add r0, r5, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FC5FC(void) {
    // push {r4, lr}
    // cmp r2, #0
    // ldr r0, [r0, #4]
    // bne _021FC60A
    // bl Heap_Alloc
    // b _021FC60E
    // bl Heap_AllocAtEnd
    // add r4, r0, #0
    // cmp r4, #0
    // bne _021FC618
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FC61C(void) {
    Heap_Free();
}


void ov01_021FC624(void) {
    // ldr r3, [r0, #8]
    // ldr r0, [r0, #0x14]
    // cmp r3, #0
    // beq _021FC63E
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _021FC638
    // ldr r2, [r0, #4]
    // cmp r2, r1
    // beq _021FC640
    // add r0, #8
    // sub r3, r3, #1
    // bne _021FC62C
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021FC644(void) {
    // ldr r2, [r0, #8]
    // ldr r0, [r0, #0x14]
    // cmp r2, #0
    // beq _021FC658
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _021FC65A
    // add r0, #8
    // sub r2, r2, #1
    // bne _021FC64C
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021FC65C(void) {
    *(u32*)r0 = r2;
    ((u32*)r0)[4] = r1;
}


void ov01_021FC664(void) {
    *(u32*)r0 = 0;
    ((u32*)r0)[4] = 0;
}

