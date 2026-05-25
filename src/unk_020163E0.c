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
    // cmp r1, #0
    // beq _020164AA
    // cmp r1, #1
    // beq _020164B2
    // cmp r1, #2
    // beq _020164BA
    // bx lr
    // mov r1, #0
    // add r0, #0x4e
    // strb r1, [r0]
    // bx lr
    // mov r1, #2
    // add r0, #0x4e
    // strb r1, [r0]
    // bx lr
    // mov r1, #3
    // add r0, #0x4e
    // strb r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_020164C4(void) {
    DestroySysTaskAndEnvironment();
}


void sub_020164D0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // add r0, #0x4e
    // ldrb r0, [r0]
    // cmp r0, #3
    // bhi _02016546
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _020164EC: ; jump table
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // mov r0, #1
    // add r4, #0x4e
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl sub_02016548
    // cmp r0, #1
    // bne _02016518
    // add r1, r4, #0
    // ldr r2, [r4, #4]
    // add r0, r4, #0
    // add r1, #0x2c
    // blx r2
    // add r0, r4, #0
    // add r0, #0x4f
    // ldrb r0, [r0]
    // add r1, r0, #1
    // add r0, r4, #0
    // add r0, #0x4f
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0x4f
    // ldrb r0, [r0]
    // cmp r0, #0x20
    // bne _02016546
    // mov r0, #0
    // add r4, #0x4f
    // strb r0, [r4]
    // pop {r3, r4, r5, pc}
    // ldr r2, [r4, #4]
    // add r0, r4, #0
    // add r1, #0xc
    // blx r2
    // add r0, r5, #0
    // bl DestroySysTaskAndEnvironment
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02016548(void) {
    // push {r4, r5}
    // add r1, r0, #0
    // add r1, #0x4f
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _02016576
    // mov r1, #0x1e
    // mov r4, #0
    // mov r3, #1
    // lsl r1, r1, #0xa
    // add r2, r3, #0
    // lsl r2, r4
    // tst r2, r1
    // beq _02016568
    // ldrh r2, [r0, #0xc]
    // strh r2, [r0, #0x2c]
    // add r4, r4, #1
    // add r0, r0, #2
    // cmp r4, #0x10
    // blo _0201655C
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // cmp r1, #0x18
    // bne _0201659E
    // mov r1, #0x1e
    // mov r5, #0
    // add r4, r0, #0
    // mov r3, #1
    // lsl r1, r1, #0xa
    // add r2, r3, #0
    // lsl r2, r5
    // tst r2, r1
    // beq _02016590
    // ldrh r2, [r0, #0x2a]
    // strh r2, [r4, #0x2c]
    // add r5, r5, #1
    // add r4, r4, #2
    // cmp r5, #0x10
    // blo _02016584
    // mov r0, #1
    // pop {r4, r5}
    // bx lr
    // mov r0, #0
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void sub_020165A4(void) {
    BG_LoadPlttData(0, 0x20);
}


void sub_020165BC(void) {
    BG_LoadPlttData(4, 0x20);
}


void sub_020165D4(void) {
    PaletteData_LoadPalette(0x20, 0);
}


void sub_020165F0(void) {
    PaletteData_LoadPalette(0x20, 1);
}

