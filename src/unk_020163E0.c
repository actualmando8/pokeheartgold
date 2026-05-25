/* Decompiled from asm/unk_020163E0.s */
#include "global.h"

void sub_020163E0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // ldr r0, _02016488 ; =sub_020164D0
    // mov r1, #0x50
    // mov r2, #0
    // bl CreateSysTaskAndEnvironment
    // str r0, [sp, #4]
    // bl SysTask_GetData
    // add r4, r0, #0
    // cmp r5, #0
    // beq _02016424
    // cmp r6, #0
    // bne _02016414
    // add r0, r5, #0
    // mov r1, #0
    // bl PaletteData_GetUnfadedBuf
    // str r0, [sp]
    // ldr r0, _0201648C ; =sub_020165D4
    // str r0, [r4, #4]
    // b _0201643E
    // add r0, r5, #0
    // mov r1, #1
    // bl PaletteData_GetUnfadedBuf
    // str r0, [sp]
    // ldr r0, _02016490 ; =sub_020165F0
    // str r0, [r4, #4]
    // b _0201643E
    // cmp r6, #0
    // bne _02016434
    // bl GetMainBgPlttAddr
    // str r0, [sp]
    // ldr r0, _02016494 ; =sub_020165A4
    // str r0, [r4, #4]
    // b _0201643E
    // bl GetSubBgPlttAddr
    // str r0, [sp]
    // ldr r0, _02016498 ; =sub_020165BC
    // str r0, [r4, #4]
    // ldr r1, [sp]
    // lsl r0, r7, #5
    // str r0, [sp, #8]
    // add r0, r1, r0
    // add r1, r4, #0
    // add r1, #0xc
    // mov r2, #0x20
    // bl MIi_CpuCopy16
    // ldr r1, [sp]
    // ldr r0, [sp, #8]
    // mov r2, #0x20
    // add r0, r1, r0
    // add r1, r4, #0
    // add r1, #0x2c
    // bl MIi_CpuCopy16
    // ldr r0, [sp, #4]
    // mov r1, #1
    // str r0, [r4]
    // add r0, r4, #0
    // str r5, [r4, #8]
    // add r0, #0x4c
    // strb r6, [r0]
    // add r0, r4, #0
    // add r0, #0x4d
    // strb r7, [r0]
    // add r0, r4, #0
    // add r0, #0x4e
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02016488: .word sub_020164D0
    // _0201648C: .word sub_020165D4
    // _02016490: .word sub_020165F0
    // _02016494: .word sub_020165A4
    // _02016498: .word sub_020165BC
    // TODO: decompile
}



void sub_0201649C(void) {
    // add r0, #0x4e
    // strb r1, [r0]
    // add r0, #0x4e
    // strb r1, [r0]
    // add r0, #0x4e
    // strb r1, [r0]
}



void sub_020164C4(void) {
}



void sub_020164D0(void) {
    // add r0, #0x4e
    // ldrb r0, [r0]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020164EC: ; jump table
    // add r0, #0x4f
    // strb r1, [r0]
    // add r4, #0x4e
    // strb r0, [r4]
    sub_02016548(r1, 0);
    // add r1, #0x2c
    // blx r2
    // add r0, #0x4f
    // ldrb r0, [r0]
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, #0x4f
    // ldrb r0, [r0]
    // add r4, #0x4f
    // strb r0, [r4]
    // add r1, #0xc
    // blx r2
    DestroySysTaskAndEnvironment(r5, (r4 + 1), *((u32*)(r4 + 4)));
}



u32 sub_02016548(void) {
    // add r1, #0x4f
    // ldrb r1, [r1]
    // lsl r2, r4
    // tst r2, r1
    *((u16*)(r0 + 0x2c)) = *((u16*)(r0 + 0xc));
    // lsl r2, r5
    // tst r2, r1
    *((u16*)(1 + 0x2c)) = *((u16*)(1 + 0x2a));
}



void sub_020165A4(void) {
}



void sub_020165BC(void) {
}



void sub_020165D4(void) {
}



void sub_020165F0(void) {
}


