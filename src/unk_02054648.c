/* Decompiled from asm/unk_02054648.s */
#include "global.h"

void sub_02054648(void) {
    // sub r0, r0, r1
    // sub r0, r1, r0
}



void sub_02054654(void) {
    // ldr r0, [sp, #0x50]
    // str r6, [sp, #0x30]
    // str r4, [sp, #0x34]
    // str r0, [sp, #0x38]
    // str r1, [sp, #8]
    // str r0, [sp, #0x10]
    // str r2, [sp, #0xc]
    MapMatrix_GetWidth(*((u32*)(r0 + 0x30)));
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x14]
    // asr r0, r6, #0xf
    // add r0, r6, r0
    // add r2, #0x98
    // ldr r1, [sp, #0x50]
    // asr r7, r0, #0x10
    // asr r0, r1, #0xf
    // add r0, r1, r0
    // asr r0, r0, #0x10
    // str r0, [sp, #0x20]
    // ldr r1, [sp, #0x20]
    // add r3, sp, #0x2c
    ov01_021FB42C(r7, *((u32*)r5));
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x50]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // add r0, #0x10
    // sub r0, r6, r0
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x18]
    // add r0, #0x10
    // sub r0, r1, r0
    // str r0, [sp, #0x38]
    // ldr r1, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // mul r0, r1
    // ldr r1, [sp, #0x14]
    // add r0, r7, r0
    ov01_021F6328(((((((r7 >> 5) >> 5) << 5) << 0x10) << 5) << 0x10));
    // ldr r2, [sp, #0x18]
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #0x10]
    // mul r3, r0
    // ldr r0, [sp, #0x1c]
    // add r0, r0, r3
    ov01_021F635C(r0, r2);
    // ldr r0, [sp, #0x10]
    ov01_021F65D0(((r0 << 0x18) >> 0x18));
    // str r0, [sp]
    // add r0, sp, #0x34
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x38]
    ov01_021FAE50();
    // ldr r0, [sp, #0x24]
    // add r0, sp, #0x2c
    // add r5, #0x98
    // ldrb r0, [r0]
    ov01_021FB474(*((u32*)r5));
    // ldr r4, [sp, #0x34]
    // ldr r1, [sp, #0xc]
    sub_02054648(r4, 1);
    // ldr r1, [sp, #0xc]
    sub_02054648(r5);
    // ldr r4, [sp, #0x34]
    // ldr r4, [sp, #0x34]
    // ldr r0, [sp, #0x54]
    // strb r1, [r0]
}



void sub_02054774(void) {
}



void sub_02054790(void) {
}



void sub_020547A4(void) {
    // asr r1, r2, #0xf
    // add r1, r2, r1
    // asr r2, r3, #0xf
    // add r2, r3, r2
    // asr r1, r1, #0x10
    // asr r2, r2, #0x10
    ov01_021F654C(*((u32*)(r0 + 0x2c)), (r1 >> 0x10), (r2 >> 0x10), 0);
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #8]
    // strb r1, [r0]
}



void sub_020547D8(void) {
    // add r3, sp, #0
    ov01_021F654C(*((u32*)(r0 + 0x2c)));
    // strh r0, [r4]
    // add r1, sp, #0
    // ldrb r1, [r1]
    ov01_021F65E4(r7);
    // sub r1, r1, r2
    // ror r1, r3
    // add r1, r2, r1
    // sub r2, r2, r5
    // ror r2, r3
    // add r2, r5, r2
    // add r1, r1, r2
    // ldrh r0, [r0, r1]
    // strh r0, [r4]
}



void sub_02054824(void) {
    MapMatrix_GetWidth(*((u32*)(r0 + 0x30)));
    // asr r2, r4, #4
    // asr r1, r5, #4
    // add r2, r4, r2
    // add r1, r5, r1
    // asr r2, r2, #5
    // asr r1, r1, #5
    // mul r0, r2
    // add r0, r1, r0
    TerrainAttributes_Get(*((u32*)(r6 + 0x5c)), (r2 >> 0x1b));
    // sub r1, r1, r2
    // ror r1, r3
    // add r1, r2, r1
    // sub r2, r2, r5
    // ror r2, r3
    // add r2, r5, r2
    // add r1, r1, r2
    // ldrh r0, [r0, r1]
    // strh r0, [r7]
}



void sub_02054874(void) {
    // add r3, sp, #0
    ov01_021F654C(*((u32*)(r0 + 0x2c)));
    // add r1, sp, #0
    // ldrb r1, [r1]
    ov01_021F6600(r4);
}



void sub_0205489C(void) {
}



void sub_020548C0(void) {
    // add r3, sp, #0
    // blx r4
    // add r0, sp, #0
    // ldrh r0, [r0]
    // asr r0, r0, #0xf
    // and r1, r0
}



void sub_020548EC(void) {
    // add r3, sp, #0
    // blx r4
    // add r0, sp, #0
    // ldrh r0, [r0]
    // asr r0, r0, #8
    // and r0, r1
}



u8 GetMetatileBehavior(void) {
    // add r3, sp, #0
    // blx r4
    // add r0, sp, #0
    // ldrh r0, [r0]
}



void sub_02054940(void) {
    // ldr r4, [sp, #0x10]
    // str r4, [sp]
    // blx r4
}



void sub_02054954(void) {
    // ldr r1, [sp, #0x10]
    // str r1, [sp]
    // add r2, r2, r5
    // add r3, r3, r5
    sub_02054940(*((u32*)(r1 + 4)), (r2 << 0x10), (r3 << 0x10));
    // mvn r4, r4
    // sub r1, r2, r0
    GF_AssertFail((5 << 0xe), *((u32*)(r4 + 4)), r0);
}



BOOL sub_020549A8(void) {
    // add r6, sp, #4
    // str r6, [sp]
    sub_02054954();
    // ldr r1, [sp, #0x20]
    // strb r0, [r1]
    sub_020548C0(r5, r4, r7);
    // add r0, sp, #4
    // ldrb r0, [r0]
    GetMetatileBehavior(r5, r4, r7);
}



u32 sub_020549F4(void) {
    // add r6, sp, #8
    // str r1, [sp, #4]
    // str r6, [sp]
    sub_02054954();
    // ldr r1, [sp, #0x28]
    // strb r0, [r1]
    // add r0, sp, #0xc
    // str r0, [sp]
    // ldr r3, [sp, #4]
    sub_02064938(r5, r4, r7, *((u32*)(r3 + 4)));
    sub_020548C0(r5, r4, r7);
    // str r0, [sp, #0xc]
    // add r0, sp, #8
    // ldrb r0, [r0]
    GetMetatileBehavior(r5, r4, r7);
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
}



void sub_02054A60(void) {
    // add r6, r0, r2
    // ldr r0, [sp, #0x18]
    // add r4, r1, r3
    // add r0, r6, r0
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // ldr r5, [sp, #0x20]
    // add r7, r4, r0
    // ldr r0, [sp]
    GF_AssertFail();
    // str r0, [r5]
    *((u32*)(r5 + 4)) = (r4 << 0x10);
    // ldr r0, [sp]
    *((u32*)(r5 + 8)) = ((r4 << 0x10) << 0x10);
    *((u32*)(r5 + 0xc)) = (r7 << 0x10);
}



void sub_02054A9C(void) {
    // add r0, sp, #0
    ov01_021F3B0C(r0, r0);
    // ldr r1, [sp]
    // ldr r2, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp]
    // add r2, r2, r1
    // str r2, [sp, #8]
}



void sub_02054AE4(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r2, sp, #0xc
    ov01_021F630C(0, *((u32*)(r1 + 0x2c)));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    ov01_021F652C(*((u32*)(r0 + 0x2c)));
    // ldr r0, [sp]
    MapMatrix_GetWidth(*((u32*)(r0 + 0x30)));
    // add r2, sp, #0x10
    sub_02054DC8(r4, r0);
    // ldr r0, [sp, #0xc]
    ov01_021F3B44(0);
    // add r2, sp, #0x10
    sub_02054A9C(r7);
    ov01_021F3B34(r4);
    // ldr r0, [sp, #4]
    // str r4, [r0]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}



void sub_02054B74(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r2, sp, #0xc
    ov01_021F630C(0, *((u32*)(r1 + 0x2c)));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r1, [sp, #8]
    ov01_021F652C(*((u32*)(r0 + 0x2c)));
    // ldr r0, [sp]
    MapMatrix_GetWidth(*((u32*)(r0 + 0x30)));
    // add r2, sp, #0x10
    sub_02054DC8(r6, r0);
    // ldr r0, [sp, #0xc]
    ov01_021F3B44(0);
    // ldr r1, [sp, #4]
    // add r2, sp, #0x10
    sub_02054A9C();
    ov01_021F3B34(r7);
    // ldr r2, [r5, r2]
    // ldr r1, [sp, #0x30]
    // str r7, [r1]
    // ldr r1, [sp, #0x34]
    // str r0, [r1]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}



void sub_02054C20(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r1, [sp]
    // add r2, sp, #0xc
    ov01_021F630C(0, *((u32*)(r1 + 0x2c)));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    ov01_021F3B44(0);
    ov01_021F3B34();
    // ldr r0, [sp, #4]
    // str r6, [r0]
    // ldr r0, [sp, #8]
    // ldr r0, [sp]
    ov01_021F652C(*((u32*)(r0 + 0x2c)), r7);
    // ldr r1, [sp, #8]
    // str r0, [r1]
}



void sub_02054C90(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // add r2, sp, #0xc
    ov01_021F630C(0, *((u32*)(r1 + 0x2c)));
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    ov01_021F3B44(0);
    ov01_021F3B34();
    // ldr r2, [r5, r2]
    // ldr r1, [sp, #4]
    // str r7, [r1]
    // ldr r1, [sp, #0x28]
    // str r0, [r1]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}



void sub_02054D10(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    Heap_AllocAtEnd(r1, (r2 << 2));
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // ldr r2, [sp, #0x38]
    // stmia r1!, {r2}
    // str r4, [sp, #0xc]
    // ldr r1, [sp]
    // ldr r0, [sp, #0xc]
    // add r2, sp, #0x10
    ov01_021F630C((0 + 1), *((u32*)(r1 + 0x2c)));
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp]
    // ldr r1, [sp, #0xc]
    ov01_021F652C(*((u32*)(r0 + 0x2c)));
    // ldr r0, [sp]
    MapMatrix_GetWidth(*((u32*)(r0 + 0x30)));
    // add r2, sp, #0x14
    sub_02054DC8(r5, r0);
    // ldr r0, [sp, #0x10]
    ov01_021F3B44(0);
    // ldr r1, [sp, #4]
    // add r2, sp, #0x14
    sub_02054A9C();
    ov01_021F3B34(r6);
    GF_AssertFail();
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #8]
    // str r0, [r1, r2]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
}



void sub_02054DC8(void) {
    // str r2, [r4]
    *((u32*)(r2 + 8)) = (1 << 0x14);
    _s32_div_f((1 << 0x14));
    // add r0, r0, r1
    // str r0, [r4]
    _s32_div_f(r5, r6);
    // add r0, r1, r0
    *((u32*)(r4 + 8)) = (((r0 << 0x10) >> 0x10) << 0x15);
}



void sub_02054E00(void) {
    // ldr r3, _02054E1C ; =_020FC60C
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r0, r1
    // bne _02054E0E
    // mov r0, #1
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #4
    // blt _02054E04
    // mov r0, #0
    // bx lr
    // nop
    // _02054E1C: .word _020FC60C
    // TODO: decompile
}



void sub_02054E20(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02054E00
    // cmp r0, #0
    // bne _02054E30
    // mov r0, #0
    // pop {r4, pc}
    // ldr r2, _02054E4C ; =_020FC5FC
    // mov r1, #0
    // ldrh r0, [r2]
    // cmp r4, r0
    // bne _02054E3E
    // mov r0, #1
    // pop {r4, pc}
    // add r1, r1, #1
    // add r2, r2, #2
    // cmp r1, #3
    // blt _02054E34
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02054E4C: .word _020FC5FC
    // TODO: decompile
}


