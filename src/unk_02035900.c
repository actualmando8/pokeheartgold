/* Decompiled from asm/unk_02035900.s */
#include "global.h"

void sub_02035900(void) {
    /* Original at 0x02035900 */
    /* Requires manual decompilation - 210 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    mov r4, #0\n    ldr r1, _02035AB8 ; =_021D4140\n    cmp r0, #0\n    strb r4, [r1, #1]\n    bne _02035910\n    b _02035A58\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r6, r0, #1\n    ldr r0, _02035AB8 ; =_021D4140\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _0203592A\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0xf\n    bl sub_020379A0\n    mov r1, #0x6e\n    mov r0, #0xf\n    lsl r1, r1, #4\n    bl Heap_Alloc\n    ldr r2, _02035AB8 ; =_021D4140\n    mov r1, #0x1f\n    add r3, r0, #0\n    and r3, r1\n    mov r1, #0x20\n    sub r1, r1, r3\n    str r0, [r2, #4]\n    add r0, r1, r0\n    str r0, [r2, #8]\n    mov r2, #0x1b\n    add r1, r4, #0\n    lsl r2, r2, #6\n    bl MI_CpuFill8\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _02035972\n    ldr r0, _02035AB8 ; =_021D4140\n    lsl r2, r5, #1\n    ldr r1, [r0, #8]\n    mov r0, #0x69\n    add r2, #0x40\n    lsl r0, r0, #4\n    str r2, [r1, r0]\n    b _0203597E\n    ldr r0, _02035AB8 ; =_021D4140\n    add r5, #0x40\n    ldr r1, [r0, #8]\n    mov r0, #0x69\n    lsl r0, r0, #4\n    str r5, [r1, r0]\n    ldr r2, _02035AB8 ; =_021D4140\n    mov r1, #0x69\n    ldr r0, [r2, #8]\n    lsl r1, r1, #4\n    ldr r3, [r0, r1]\n    add r5, r3, #0\n    mul r5, r6\n    sub r3, r1, #4\n    str r5, [r0, r3]\n    add r0, r1, #0\n    ldr r3, [r2, #8]\n    mov r5, #0\n    add r0, #0x1d\n    strb r5, [r3, r0]\n    add r0, r1, #0\n    ldr r3, [r2, #8]\n    mov r5, #0x2a\n    add r0, #0x1e\n    strb r5, [r3, r0]\n    ldr r2, [r2, #8]\n    mov r0, #0xf\n    ldr r1, [r2, r1]\n    lsl r1, r1, #1\n    bl Heap_Alloc\n    ldr r2, _02035AB8 ; =_021D4140\n    mov r1, #0x49\n    ldr r3, [r2, #8]\n    lsl r1, r1, #4\n    str r0, [r3, r1]\n    mov r1, #0x69\n    ldr r2, [r2, #8]\n    lsl r1, r1, #4\n    ldr r1, [r2, r1]\n    mov r0, #0xf\n    bl Heap_Alloc\n    ldr r2, _02035AB8 ; =_021D4140\n    ldr r1, _02035ABC ; =0x00000494\n    ldr r3, [r2, #8]\n    str r0, [r3, r1]\n    ldr r2, [r2, #8]\n    ldr r1, _02035AC0 ; =0x0000068C\n    mov r0, #0xf\n    ldr r1, [r2, r1]\n    bl Heap_Alloc\n    ldr r2, _02035AB8 ; =_021D4140\n    ldr r1, _02035AC4 ; =0x0000048C\n    ldr r3, [r2, #8]\n    str r0, [r3, r1]\n    ldr r2, [r2, #8]\n    ldr r1, _02035AC0 ; =0x0000068C\n    mov r0, #0xf\n    ldr r1, [r2, r1]\n    bl Heap_Alloc\n    ldr r1, _02035AB8 ; =_021D4140\n    ldr r2, [r1, #8]\n    ldr r1, _02035AC8 ; =0x00000488\n    str r0, [r2, r1]\n    bl sub_0203993C\n    cmp r0, #0xa\n    bne _02035A2C\n    ldr r0, _02035AB8 ; =_021D4140\n    mov r2, #0x16\n    ldr r3, [r0, #8]\n    lsl r2, r2, #6\n    add r0, r3, r2\n    sub r2, #0xe8\n    mov r1, #0x64\n    add r2, r3, r2\n    bl sub_02033F44\n    ldr r0, _02035AB8 ; =_021D4140\n    mov r2, #0x5a\n    mov r1, #0x32\n    ldr r3, [r0, #8]\n    lsl r2, r2, #4\n    add r0, r3, r2\n    sub r2, #0x90\n    lsl r1, r1, #4\n    add r2, r3, r2\n    bl sub_02033F44\n    b _02035A64\n    ldr r0, _02035AB8 ; =_021D4140\n    mov r2, #0x16\n    ldr r3, [r0, #8]\n    lsl r2, r2, #6\n    add r0, r3, r2\n    sub r2, #0xe8\n    mov r1, #0x14\n    add r2, r3, r2\n    bl sub_02033F44\n    ldr r0, _02035AB8 ; =_021D4140\n    mov r2, #0x5a\n    add r1, r5, #0\n    ldr r3, [r0, #8]\n    lsl r2, r2, #4\n    add r0, r3, r2\n    sub r2, #0x90\n    add r1, #0xee\n    add r2, r3, r2\n    bl sub_02033F44\n    b _02035A64\n    ldr r0, [r1, #8]\n    mov r4, #1\n    cmp r0, #0\n    bne _02035A64\n    bl GF_AssertFail\n    ldr r2, _02035AB8 ; =_021D4140\n    ldr r1, _02035ACC ; =0x00000694\n    ldr r3, [r2, #8]\n    mov r0, #0\n    strh r0, [r3, r1]\n    mov r5, #0xff\n    add r1, #0x12\n    ldr r3, [r2, #8]\n    add r3, r3, r0\n    add r0, r0, #1\n    strb r5, [r3, r1]\n    cmp r0, #4\n    blt _02035A72\n    cmp r4, #0\n    bne _02035A86\n    bl sub_02035DA4\n    ldr r0, _02035AB8 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02035AD0 ; =0x0000062C\n    add r0, r1, r0\n    bl sub_0203778C\n    cmp r4, #0\n    bne _02035AA8\n    mov r1, #0\n    ldr r0, _02035AD4 ; =sub_020360EC\n    add r2, r1, #0\n    bl SysTask_CreateOnVBlankQueue\n    ldr r1, _02035AB8 ; =_021D4140\n    ldr r2, [r1, #8]\n    ldr r1, _02035AD8 ; =0x0000057C\n    str r0, [r2, r1]\n    ldr r0, _02035AB8 ; =_021D4140\n    mov r2, #0\n    ldr r1, [r0, #8]\n    ldr r0, _02035ADC ; =0x000006B6\n    strb r2, [r1, r0]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _02035AB8: .word _021D4140\n    _02035ABC: .word 0x00000494\n    _02035AC0: .word 0x0000068C\n    _02035AC4: .word 0x0000048C\n    _02035AC8: .word 0x00000488\n    _02035ACC: .word 0x00000694\n    _02035AD0: .word 0x0000062C\n    _02035AD4: .word sub_020360EC\n    _02035AD8: .word 0x0000057C\n    _02035ADC: .word 0x000006B6"
    );
    #endif
}

void sub_02035AE0(void) {
    /* Original at 0x02035AE0 */
    /* Requires manual decompilation - 315 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    mov r2, #0x66\n    ldr r3, _02035D5C ; =_021D4140\n    add r7, r0, #1\n    ldr r0, [r3, #8]\n    mov r1, #0\n    lsl r2, r2, #4\n    strb r1, [r0, r2]\n    add r0, r2, #1\n    ldr r4, [r3, #8]\n    add r2, #0x2c\n    strb r1, [r4, r0]\n    ldr r3, [r3, #8]\n    ldr r0, _02035D60 ; =0x0000048C\n    ldr r2, [r3, r2]\n    ldr r0, [r3, r0]\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    mov r2, #0x60\n    ldr r1, [r0, #8]\n    ldr r0, _02035D64 ; =0x0000051C\n    add r0, r1, r0\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02035D68 ; =0x0000068C\n    ldr r0, [r1, r0]\n    add r1, r7, #0\n    bl _s32_div_f\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp, #4]\n    cmp r7, #0\n    ble _02035B62\n    add r6, r0, #0\n    add r5, r0, #0\n    ldr r0, _02035D5C ; =_021D4140\n    ldr r2, _02035D60 ; =0x0000048C\n    ldr r1, [r0, #8]\n    ldr r0, _02035D64 ; =0x0000051C\n    add r0, r1, r0\n    ldr r1, [r1, r2]\n    add r0, r0, r5\n    add r1, r1, r6\n    add r2, r4, #0\n    bl sub_02033AE0\n    ldr r0, [sp, #4]\n    add r6, r6, r4\n    add r0, r0, #1\n    add r5, #0xc\n    str r0, [sp, #4]\n    cmp r0, r7\n    blt _02035B3E\n    ldr r0, _02035D5C ; =_021D4140\n    ldr r2, _02035D68 ; =0x0000068C\n    ldr r3, [r0, #8]\n    ldr r0, _02035D6C ; =0x00000488\n    ldr r2, [r3, r2]\n    ldr r0, [r3, r0]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    mov r2, #0x60\n    ldr r1, [r0, #8]\n    mov r0, #0x4b\n    lsl r0, r0, #4\n    add r0, r1, r0\n    mov r1, #0\n    bl MI_CpuFill8\n    mov r0, #0\n    str r0, [sp]\n    cmp r7, #0\n    ble _02035BB8\n    add r6, r0, #0\n    add r5, r0, #0\n    ldr r0, _02035D5C ; =_021D4140\n    ldr r2, _02035D6C ; =0x00000488\n    ldr r1, [r0, #8]\n    mov r0, #0x4b\n    lsl r0, r0, #4\n    add r0, r1, r0\n    ldr r1, [r1, r2]\n    add r0, r0, r5\n    add r1, r1, r6\n    add r2, r4, #0\n    bl sub_02033AE0\n    ldr r0, [sp]\n    add r6, r6, r4\n    add r0, r0, #1\n    add r5, #0xc\n    str r0, [sp]\n    cmp r0, r7\n    blt _02035B92\n    ldr r0, _02035D5C ; =_021D4140\n    mov r2, #6\n    ldr r1, [r0, #8]\n    mov r0, #0xc2\n    lsl r0, r0, #2\n    add r0, r1, r0\n    mov r1, #0\n    lsl r2, r2, #6\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    mov r1, #0xc2\n    ldr r2, [r0, #8]\n    mov r0, #0x51\n    lsl r0, r0, #4\n    lsl r1, r1, #2\n    add r0, r2, r0\n    add r1, r2, r1\n    mov r2, #6\n    lsl r2, r2, #6\n    bl sub_02033AE0\n    ldr r0, _02035D5C ; =_021D4140\n    mov r1, #0xee\n    ldr r0, [r0, #8]\n    add r2, r1, #0\n    add r0, #0x80\n    add r2, #0x92\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    ldr r1, [r0, #8]\n    mov r0, #5\n    lsl r0, r0, #6\n    add r0, r1, r0\n    mov r1, #0xee\n    add r2, r1, #0\n    add r2, #0x92\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    mov r2, #2\n    ldr r0, [r0, #8]\n    lsl r2, r2, #8\n    add r0, r0, r2\n    mov r1, #0\n    sub r2, #0xf8\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    mov r2, #2\n    ldr r1, [r0, #8]\n    ldr r0, _02035D70 ; =0x00000498\n    lsl r2, r2, #8\n    add r0, r1, r0\n    add r1, r1, r2\n    sub r2, #0xf8\n    bl sub_02033AE0\n    ldr r0, _02035D5C ; =_021D4140\n    mov r1, #0xee\n    ldr r0, [r0, #8]\n    mov r2, #0x26\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    mov r1, #0xee\n    ldr r0, [r0, #8]\n    mov r2, #0x26\n    add r0, #0x40\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    mov r2, #0xff\n    ldr r1, [r0, #8]\n    strb r2, [r1]\n    ldr r1, [r0, #8]\n    add r1, #0x40\n    strb r2, [r1]\n    ldr r3, [r0, #8]\n    mov r2, #0x69\n    mov r0, #0x49\n    lsl r2, r2, #4\n    lsl r0, r0, #4\n    ldr r2, [r3, r2]\n    ldr r0, [r3, r0]\n    mov r1, #0\n    lsl r2, r2, #1\n    bl MI_CpuFill8\n    ldr r0, _02035D5C ; =_021D4140\n    mov r2, #0x69\n    ldr r3, [r0, #8]\n    ldr r1, _02035D74 ; =0x000004A4\n    lsl r2, r2, #4\n    add r0, r3, r1\n    sub r1, #0x14\n    ldr r2, [r3, r2]\n    ldr r1, [r3, r1]\n    lsl r2, r2, #1\n    bl sub_02033AE0\n    ldr r0, _02035D5C ; =_021D4140\n    mov r2, #0\n    ldr r3, [r0, #8]\n    ldr r1, _02035D78 ; =0x000006B4\n    mov ip, r2\n    strb r2, [r3, r1]\n    ldr r3, [r0, #8]\n    add r1, r1, #1\n    strb r2, [r3, r1]\n    add r1, r2, #0\n    add r7, r2, #0\n    add r6, r2, #0\n    ldr r3, [r0, #8]\n    add r4, r3, r2\n    ldr r3, _02035D7C ; =0x00000696\n    strb r6, [r4, r3]\n    ldr r3, [r0, #8]\n    ldr r4, _02035D80 ; =0x0000069E\n    add r5, r3, r2\n    mov r3, #1\n    strb r3, [r5, r4]\n    ldr r4, [r0, #8]\n    mov r3, ip\n    add r4, r4, r3\n    ldr r3, _02035D84 ; =0x00000644\n    add r2, r2, #1\n    strh r6, [r4, r3]\n    ldr r3, [r0, #8]\n    mov r4, #0xee\n    add r5, r3, r1\n    ldr r3, _02035D88 ; =0x000005CA\n    strb r4, [r5, r3]\n    ldr r3, [r0, #8]\n    ldr r4, _02035D8C ; =0x0000FFFF\n    add r5, r3, r1\n    ldr r3, _02035D90 ; =0x000005C8\n    strh r4, [r5, r3]\n    ldr r3, [r0, #8]\n    add r4, r3, r1\n    ldr r3, _02035D94 ; =0x000005C4\n    str r6, [r4, r3]\n    ldr r3, [r0, #8]\n    add r4, r3, r1\n    mov r3, #0x17\n    lsl r3, r3, #6\n    str r6, [r4, r3]\n    ldr r3, [r0, #8]\n    add r1, #0xc\n    add r4, r3, r7\n    ldr r3, _02035D98 ; =0x0000066C\n    add r7, r7, #4\n    str r6, [r4, r3]\n    mov r3, ip\n    add r3, r3, #2\n    mov ip, r3\n    cmp r2, #8\n    blt _02035C9C\n    ldr r1, _02035D5C ; =_021D4140\n    ldr r0, _02035D9C ; =0x00000668\n    ldr r2, [r1, #8]\n    add r3, r0, #0\n    str r6, [r2, r0]\n    ldr r4, [r1, #8]\n    sub r3, #0x3e\n    mov r2, #0xee\n    strb r2, [r4, r3]\n    add r3, r0, #0\n    ldr r4, [r1, #8]\n    ldr r2, _02035D8C ; =0x0000FFFF\n    sub r3, #0x40\n    strh r2, [r4, r3]\n    add r2, r0, #0\n    ldr r3, [r1, #8]\n    sub r2, #0x44\n    str r6, [r3, r2]\n    add r2, r0, #0\n    ldr r3, [r1, #8]\n    sub r2, #0x48\n    str r6, [r3, r2]\n    add r3, r0, #0\n    ldr r4, [r1, #8]\n    add r3, #0x4a\n    mov r2, #1\n    strb r2, [r4, r3]\n    add r3, r0, #0\n    ldr r4, [r1, #8]\n    add r3, #0x4b\n    strb r2, [r4, r3]\n    strb r6, [r1]\n    ldr r1, [r1, #8]\n    sub r0, #0xe8\n    add r0, r1, r0\n    bl sub_02033F70\n    ldr r0, _02035D5C ; =_021D4140\n    ldr r1, [r0, #8]\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl sub_02033F70\n    ldr r0, _02035D5C ; =_021D4140\n    mov r2, #0\n    ldr r1, [r0, #8]\n    ldr r0, _02035DA0 ; =0x000006B7\n    strb r2, [r1, r0]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02035D5C: .word _021D4140\n    _02035D60: .word 0x0000048C\n    _02035D64: .word 0x0000051C\n    _02035D68: .word 0x0000068C\n    _02035D6C: .word 0x00000488\n    _02035D70: .word 0x00000498\n    _02035D74: .word 0x000004A4\n    _02035D78: .word 0x000006B4\n    _02035D7C: .word 0x00000696\n    _02035D80: .word 0x0000069E\n    _02035D84: .word 0x00000644\n    _02035D88: .word 0x000005CA\n    _02035D8C: .word 0x0000FFFF\n    _02035D90: .word 0x000005C8\n    _02035D94: .word 0x000005C4\n    _02035D98: .word 0x0000066C\n    _02035D9C: .word 0x00000668\n    _02035DA0: .word 0x000006B7"
    );
    #endif
}

void sub_02035DA4(void) {
    /* Original at 0x02035DA4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _02035DCC ; =_021D4140\n    ldr r1, _02035DD0 ; =0x000006AF\n    ldr r0, [r2, #8]\n    mov r4, #0\n    strb r4, [r0, r1]\n    ldr r3, [r2, #8]\n    add r0, r1, #1\n    strb r4, [r3, r0]\n    ldr r0, [r2, #8]\n    mov r3, #1\n    sub r1, #0x4b\n    str r3, [r0, r1]\n    bl sub_02035AE0\n    ldr r0, _02035DD4 ; =_0210F900\n    mov r1, #4\n    strb r1, [r0]\n    strb r1, [r0, #1]\n    pop {r4, pc}\n    _02035DCC: .word _021D4140\n    _02035DD0: .word 0x000006AF\n    _02035DD4: .word _0210F900"
    );
    #endif
}

void sub_02035DD8(void) {
    sub_02035AE0();
}

void sub_02035DE0(void) {
    /* Original at 0x02035DE0 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r4, _02035E84 ; =_021D4140\n    add r5, r0, #0\n    ldr r0, [r4, #8]\n    ldr r3, _02035E88 ; =0x00000696\n    mov r1, #0\n    add r0, r0, r5\n    strb r1, [r0, r3]\n    ldr r2, [r4, #8]\n    mov r0, #1\n    add r6, r2, r5\n    add r2, r3, #0\n    add r2, #8\n    strb r0, [r6, r2]\n    ldr r2, [r4, #8]\n    lsl r0, r5, #2\n    add r0, r2, r0\n    sub r3, #0x2a\n    str r1, [r0, r3]\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r1, r0, #0\n    add r0, r4, #0\n    ldr r6, [r0, #8]\n    ldr r0, _02035E8C ; =0x0000068C\n    add r1, r1, #1\n    ldr r0, [r6, r0]\n    bl _s32_div_f\n    add r7, r5, #0\n    mov r1, #0x4b\n    str r0, [sp]\n    mul r7, r0\n    mov r0, #0xc\n    add r4, r5, #0\n    lsl r1, r1, #4\n    mul r4, r0\n    add r0, r6, r1\n    sub r1, #0x28\n    ldr r1, [r6, r1]\n    ldr r2, [sp]\n    add r0, r0, r4\n    add r1, r1, r7\n    bl sub_02033AE0\n    ldr r0, _02035E84 ; =_021D4140\n    ldr r1, _02035E90 ; =0x0000051C\n    ldr r2, [r0, #8]\n    add r0, r2, r1\n    sub r1, #0x90\n    ldr r1, [r2, r1]\n    ldr r2, [sp]\n    add r0, r0, r4\n    add r1, r1, r7\n    bl sub_02033AE0\n    ldr r3, _02035E84 ; =_021D4140\n    ldr r2, _02035E94 ; =0x000005CA\n    ldr r0, [r3, #8]\n    mov r1, #0xee\n    add r0, r0, r4\n    strb r1, [r0, r2]\n    ldr r0, [r3, #8]\n    ldr r5, _02035E98 ; =0x0000FFFF\n    add r1, r0, r4\n    sub r0, r2, #2\n    strh r5, [r1, r0]\n    ldr r1, [r3, #8]\n    mov r0, #0\n    add r5, r1, r4\n    sub r1, r2, #6\n    str r0, [r5, r1]\n    ldr r1, [r3, #8]\n    sub r2, #0xa\n    add r1, r1, r4\n    str r0, [r1, r2]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02035E84: .word _021D4140\n    _02035E88: .word 0x00000696\n    _02035E8C: .word 0x0000068C\n    _02035E90: .word 0x0000051C\n    _02035E94: .word 0x000005CA\n    _02035E98: .word 0x0000FFFF"
    );
    #endif
}

void sub_02035E9C(void) {
    /* Original at 0x02035E9C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r4, _02035EC8 ; =_021D4140\n    ldr r6, _02035ECC ; =0x0000069E\n    mov r5, #1\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    bne _02035EC0\n    ldr r0, [r4, #8]\n    add r0, r0, r5\n    ldrb r0, [r0, r6]\n    cmp r0, #0\n    bne _02035EC0\n    add r0, r5, #0\n    bl sub_02035DE0\n    add r5, r5, #1\n    cmp r5, #8\n    blt _02035EA4\n    pop {r4, r5, r6, pc}\n    _02035EC8: .word _021D4140\n    _02035ECC: .word 0x0000069E"
    );
    #endif
}

void sub_02035ED0(void) {
    sub_02035DE0();
}

void sub_02035ED8(void) {
    /* Original at 0x02035ED8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    str r3, [sp]\n    mov r4, #1\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    bne _02035F02\n    ldr r2, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02034EF0\n    add r4, r0, #0\n    ldr r0, _02035F10 ; =sub_02035ED0\n    bl sub_02033A90\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_02035900\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02035F10: .word sub_02035ED0"
    );
    #endif
}

void sub_02035F14(void) {
    /* Original at 0x02035F14 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    add r7, r2, #0\n    mov r4, #1\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    bne _02035F34\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02034F64\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl sub_02035900\n    ldr r0, _02035F48 ; =_0210F900\n    mov r1, #4\n    strb r1, [r0, #1]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02035F48: .word _0210F900"
    );
    #endif
}

void sub_02035F4C(void) {
    /* Original at 0x02035F4C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r4, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02035F62\n    ldr r0, _02035F9C ; =_0210F900\n    ldrb r0, [r0]\n    cmp r0, #4\n    beq _02035F6A\n    pop {r4, pc}\n    ldr r0, _02035F9C ; =_0210F900\n    ldrb r0, [r0, #1]\n    cmp r0, #4\n    bne _02035F98\n    ldr r0, _02035FA0 ; =_021D4140\n    ldr r2, [r0, #8]\n    ldr r0, _02035FA4 ; =0x000006AD\n    ldrb r1, [r2, r0]\n    cmp r1, #2\n    bne _02035F7C\n    mov r1, #0\n    strb r1, [r2, r0]\n    mov r4, #1\n    ldr r0, _02035FA0 ; =_021D4140\n    ldr r2, [r0, #8]\n    ldr r0, _02035FA4 ; =0x000006AD\n    ldrb r1, [r2, r0]\n    cmp r1, #3\n    bne _02035F8C\n    mov r4, #1\n    strb r4, [r2, r0]\n    cmp r4, #0\n    beq _02035F94\n    bl sub_02035DD8\n    bl sub_02037594\n    pop {r4, pc}\n    nop\n    _02035F9C: .word _0210F900\n    _02035FA0: .word _021D4140\n    _02035FA4: .word 0x000006AD"
    );
    #endif
}

void sub_02035FA8(void) {
    /* Original at 0x02035FA8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02035FD0 ; =_021D4140\n    ldr r3, [r1, #8]\n    ldr r1, _02035FD4 ; =0x000006AD\n    ldrb r2, [r3, r1]\n    cmp r2, #0\n    bne _02035FBE\n    cmp r0, #1\n    bne _02035FBE\n    mov r0, #3\n    strb r0, [r3, r1]\n    bx lr\n    cmp r2, #1\n    bne _02035FCC\n    cmp r0, #0\n    bne _02035FCC\n    ldr r0, _02035FD4 ; =0x000006AD\n    mov r1, #2\n    strb r1, [r3, r0]\n    bx lr\n    nop\n    _02035FD0: .word _021D4140\n    _02035FD4: .word 0x000006AD"
    );
    #endif
}

void sub_02035FD8(void) {
    sub_02035FA8();
}

void sub_02035FE4(void) {
    sub_02035FA8();
}

void sub_02035FF0(void) {
    /* Original at 0x02035FF0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02036008 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _0203600C ; =0x000006AD\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _02036000\n    mov r0, #1\n    bx lr\n    cmp r0, #3\n    bne _02036006\n    mov r0, #0\n    bx lr\n    _02036008: .word _021D4140\n    _0203600C: .word 0x000006AD"
    );
    #endif
}

void sub_02036010(void) {
    sub_02035FF0();
}

void sub_02036024(void) {
    /* Original at 0x02036024 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _020360D0 ; =_021D4140\n    mov r4, #0\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _0203604E\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _02036044\n    bl ov00_021E6CB8\n    mov r4, #1\n    b _0203604E\n    bl sub_0203507C\n    cmp r0, #0\n    beq _0203604E\n    mov r4, #1\n    cmp r4, #0\n    beq _020360CE\n    bl sub_020379F8\n    bl sub_020343E4\n    ldr r0, _020360D0 ; =_021D4140\n    mov r1, #0\n    strb r1, [r0, #1]\n    ldr r1, [r0, #8]\n    ldr r0, _020360D4 ; =0x0000057C\n    ldr r0, [r1, r0]\n    bl SysTask_Destroy\n    ldr r1, _020360D0 ; =_021D4140\n    ldr r0, _020360D4 ; =0x0000057C\n    ldr r2, [r1, #8]\n    mov r3, #0\n    str r3, [r2, r0]\n    ldr r1, [r1, #8]\n    sub r0, #0xec\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, _020360D0 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _020360D8 ; =0x00000494\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, _020360D0 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _020360DC ; =0x0000048C\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, _020360D0 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _020360E0 ; =0x00000488\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, _020360D0 ; =_021D4140\n    ldr r1, [r0, #8]\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bl sub_02033F90\n    ldr r0, _020360D0 ; =_021D4140\n    ldr r1, [r0, #8]\n    mov r0, #0x16\n    lsl r0, r0, #6\n    add r0, r1, r0\n    bl sub_02033F90\n    ldr r0, _020360D0 ; =_021D4140\n    ldr r0, [r0, #4]\n    bl Heap_Free\n    ldr r0, _020360D0 ; =_021D4140\n    mov r1, #0\n    str r1, [r0, #8]\n    str r1, [r0, #4]\n    pop {r4, pc}\n    _020360D0: .word _021D4140\n    _020360D4: .word 0x0000057C\n    _020360D8: .word 0x00000494\n    _020360DC: .word 0x0000048C\n    _020360E0: .word 0x00000488"
    );
    #endif
}

void sub_020360E4(void) {
    sub_02035218();
}

void sub_020360EC(void) {
    /* Original at 0x020360EC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02036118 ; =_021D4140\n    ldrb r0, [r0, #1]\n    cmp r0, #0\n    beq _02036116\n    bl sub_02036AD8\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02036110\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02036110\n    bl sub_02036508\n    ldr r0, _02036118 ; =_021D4140\n    mov r1, #0\n    strb r1, [r0, #1]\n    pop {r3, pc}\n    _02036118: .word _021D4140"
    );
    #endif
}

void sub_0203611C(void) {
    /* Original at 0x0203611C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_020357FC\n    cmp r0, #0\n    beq _02036140\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0203613C\n    bl sub_0203567C\n    cmp r0, #0\n    bne _02036140\n    bl sub_02036024\n    pop {r3, pc}\n    bl sub_02036024\n    pop {r3, pc}"
    );
    #endif
}

void sub_02036144(void) {
    /* Original at 0x02036144 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0203817C\n    ldr r3, _02036214 ; =_021D4140\n    ldr r0, [r3, #8]\n    cmp r0, #0\n    beq _020361FE\n    ldr r2, _02036218 ; =0x000006B9\n    ldrb r1, [r0, r2]\n    cmp r1, #0\n    bne _020361E0\n    add r1, r2, #3\n    ldrb r1, [r0, r1]\n    add r4, r1, #1\n    add r1, r2, #3\n    strb r4, [r0, r1]\n    mov r0, #0\n    strb r0, [r3, #1]\n    bl sub_02035F4C\n    ldr r0, _02036214 ; =_021D4140\n    ldr r1, _0203621C ; =gSystem\n    ldr r0, [r0, #8]\n    ldr r2, _02036220 ; =0x0000065C\n    ldr r3, [r1, #0x44]\n    ldr r1, _02036224 ; =0x00007FFF\n    ldrh r4, [r0, r2]\n    and r1, r3\n    orr r1, r4\n    strh r1, [r0, r2]\n    bl sub_02036BE4\n    bl sub_02036298\n    ldr r0, _02036214 ; =_021D4140\n    ldr r1, _02036220 ; =0x0000065C\n    ldr r3, [r0, #8]\n    mov r0, #2\n    ldrh r2, [r3, r1]\n    lsl r0, r0, #0xe\n    and r0, r2\n    strh r0, [r3, r1]\n    bl sub_02035FF0\n    cmp r0, #0\n    bne _020361A4\n    bl sub_020372E4\n    bl sub_0203769C\n    cmp r0, #0\n    bne _020361C6\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    beq _020361C6\n    bl sub_0203993C\n    bl sub_02034084\n    cmp r0, #0\n    bne _020361C6\n    bl sub_0203667C\n    bl sub_0203769C\n    cmp r0, #0\n    beq _020361D6\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _020361DA\n    bl sub_02037334\n    ldr r0, _02036214 ; =_021D4140\n    mov r1, #1\n    strb r1, [r0, #1]\n    ldr r0, _02036214 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02036228 ; =0x00000694\n    ldrh r0, [r1, r0]\n    bl sub_020355C8\n    bl sub_0203769C\n    cmp r0, #0\n    bne _020361F8\n    bl sub_02035E9C\n    bl sub_0203611C\n    b _02036204\n    mov r0, #0\n    bl sub_020355C8\n    mov r0, #0\n    bl sub_02039A00\n    bl sub_02037ADC\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _02036214: .word _021D4140\n    _02036218: .word 0x000006B9\n    _0203621C: .word gSystem\n    _02036220: .word 0x0000065C\n    _02036224: .word 0x00007FFF\n    _02036228: .word 0x00000694"
    );
    #endif
}

void sub_0203622C(void) {
    sub_02035DA4(0);
}

void sub_0203624C(void) {
    /* Original at 0x0203624C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _0203626C ; =_021D4140\n    mov r1, #0\n    ldrb r4, [r0, #1]\n    strb r1, [r0, #1]\n    ldr r2, [r0, #8]\n    cmp r2, #0\n    beq _02036266\n    ldr r0, _02036270 ; =0x000006AD\n    mov r1, #1\n    strb r1, [r2, r0]\n    bl sub_02035DA4\n    ldr r0, _0203626C ; =_021D4140\n    strb r4, [r0, #1]\n    pop {r4, pc}\n    _0203626C: .word _021D4140\n    _02036270: .word 0x000006AD"
    );
    #endif
}

void sub_02036274(void) {
    /* Original at 0x02036274 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _02036294 ; =_021D4140\n    mov r1, #0\n    ldrb r4, [r0, #1]\n    strb r1, [r0, #1]\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _0203628C\n    bl sub_02035DA4\n    bl sub_02034E2C\n    ldr r0, _02036294 ; =_021D4140\n    strb r4, [r0, #1]\n    pop {r4, pc}\n    nop\n    _02036294: .word _021D4140"
    );
    #endif
}

void sub_02036298(void) {
    /* Original at 0x02036298 */
    /* Requires manual decompilation - 180 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl sub_0203993C\n    bl sub_02034084\n    cmp r0, #0\n    beq _0203634C\n    ldr r0, _02036420 ; =_021D4140\n    ldr r1, _02036424 ; =0x000006B6\n    ldr r0, [r0, #8]\n    ldrb r2, [r0, r1]\n    cmp r2, #0\n    beq _02036308\n    sub r1, #0x52\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    beq _020362DA\n    bl sub_02036630\n    cmp r0, #0\n    beq _020362F8\n    ldr r0, _02036428 ; =_0210F900\n    ldrb r0, [r0, #1]\n    cmp r0, #4\n    bne _020362F0\n    ldr r0, _02036420 ; =_021D4140\n    ldr r0, [r0, #8]\n    bl sub_02036E60\n    ldr r0, _02036428 ; =_0210F900\n    mov r1, #2\n    strb r1, [r0, #1]\n    b _020362F0\n    ldr r1, _02036428 ; =_0210F900\n    ldrb r1, [r1, #1]\n    cmp r1, #4\n    bne _020362F0\n    bl sub_02036E60\n    cmp r0, #0\n    beq _020362F8\n    ldr r0, _02036428 ; =_0210F900\n    mov r1, #2\n    strb r1, [r0, #1]\n    bl sub_02036FA8\n    cmp r0, #0\n    beq _020362FA\n    b _0203641C\n    ldr r0, _02036420 ; =_021D4140\n    mov r1, #0x26\n    ldr r0, [r0, #8]\n    bl ov00_021E60E8\n    cmp r0, #0\n    bne _0203630A\n    b _0203641C\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r6, r0, #1\n    mov r4, #0\n    cmp r6, #0\n    ble _02036344\n    ldr r7, _02036420 ; =_021D4140\n    add r5, r4, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _0203633C\n    ldr r0, [r7, #8]\n    ldr r1, _0203642C ; =0x0000066C\n    add r0, r0, r5\n    ldr r1, [r0, r1]\n    add r2, r1, #1\n    ldr r1, _0203642C ; =0x0000066C\n    str r2, [r0, r1]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r6\n    blt _02036322\n    ldr r0, _02036428 ; =_0210F900\n    mov r1, #4\n    strb r1, [r0, #1]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _020363CA\n    ldr r0, _02036420 ; =_021D4140\n    ldr r2, _02036424 ; =0x000006B6\n    ldr r0, [r0, #8]\n    ldrb r1, [r0, r2]\n    cmp r1, #0\n    beq _0203641C\n    add r1, r2, #0\n    sub r1, #0x52\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    beq _0203638A\n    sub r2, #0x4e\n    ldr r1, [r0, r2]\n    cmp r1, #3\n    bgt _0203641C\n    ldr r1, _02036428 ; =_0210F900\n    ldrb r1, [r1, #1]\n    cmp r1, #4\n    bne _020363A0\n    bl sub_02036E60\n    ldr r0, _02036428 ; =_0210F900\n    mov r1, #2\n    strb r1, [r0, #1]\n    b _020363A0\n    ldr r1, _02036428 ; =_0210F900\n    ldrb r1, [r1, #1]\n    cmp r1, #4\n    bne _020363A0\n    bl sub_02036E60\n    cmp r0, #0\n    beq _0203641C\n    ldr r0, _02036428 ; =_0210F900\n    mov r1, #2\n    strb r1, [r0, #1]\n    bl sub_02036FA8\n    cmp r0, #0\n    bne _0203641C\n    ldr r0, _02036420 ; =_021D4140\n    mov r1, #0x26\n    ldr r0, [r0, #8]\n    bl ov00_021E5F84\n    cmp r0, #0\n    beq _0203641C\n    ldr r0, _02036428 ; =_0210F900\n    mov r1, #4\n    strb r1, [r0, #1]\n    ldr r0, _02036420 ; =_021D4140\n    ldr r2, [r0, #8]\n    ldr r0, _02036430 ; =0x00000668\n    ldr r1, [r2, r0]\n    add r1, r1, #1\n    str r1, [r2, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_02033298\n    cmp r0, #4\n    bne _0203641C\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    beq _0203641C\n    ldr r0, _02036428 ; =_0210F900\n    ldrb r0, [r0, #1]\n    cmp r0, #4\n    bne _02036418\n    ldr r0, _02036420 ; =_021D4140\n    ldr r2, [r0, #8]\n    ldr r0, _02036430 ; =0x00000668\n    ldr r1, [r2, r0]\n    cmp r1, #3\n    bgt _02036418\n    add r0, #0x47\n    ldrb r0, [r2, r0]\n    lsl r0, r0, #6\n    add r0, r2, r0\n    bl sub_02036E60\n    ldr r0, _02036420 ; =_021D4140\n    ldr r2, [r0, #8]\n    ldr r0, _02036434 ; =0x000006AF\n    ldrb r1, [r2, r0]\n    mov r0, #1\n    sub r0, r0, r1\n    lsl r0, r0, #6\n    add r0, r2, r0\n    bl sub_02036E60\n    ldr r0, _02036428 ; =_0210F900\n    mov r1, #0\n    strb r1, [r0, #1]\n    bl sub_02036AD8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02036420: .word _021D4140\n    _02036424: .word 0x000006B6\n    _02036428: .word _0210F900\n    _0203642C: .word 0x0000066C\n    _02036430: .word 0x00000668\n    _02036434: .word 0x000006AF"
    );
    #endif
}

void sub_02036438(void) {
    /* Original at 0x02036438 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    mov r7, #0\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_0203772C\n    str r0, [sp, #0xc]\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r0, r0, #1\n    str r0, [sp, #8]\n    add r0, r7, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    cmp r0, #0\n    ble _020364F0\n    ldr r0, [sp]\n    ldr r6, [sp, #4]\n    mov r1, #0xc0\n    add r5, r0, #0\n    add r4, r6, #0\n    mul r5, r1\n    ldr r0, _02036504 ; =_021D4140\n    ldr r1, [r0, #8]\n    mov r0, #0x4b\n    lsl r0, r0, #4\n    add r0, r1, r0\n    add r0, r0, r6\n    bl sub_02033C28\n    ldr r0, [sp, #4]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _020364A2\n    ldr r0, _02036504 ; =_021D4140\n    ldr r0, [r0, #8]\n    add r0, r5, r0\n    add r1, r4, r0\n    add r1, #0x80\n    mov r0, #0xe\n    strb r0, [r1]\n    b _020364B4\n    ldr r0, _02036504 ; =_021D4140\n    add r7, r7, #1\n    ldr r0, [r0, #8]\n    add r0, r5, r0\n    add r1, r4, r0\n    add r1, #0x80\n    mov r0, #0xff\n    strb r0, [r1]\n    b _020364DE\n    ldr r0, _02036504 ; =_021D4140\n    ldr r2, [sp, #0xc]\n    ldr r1, [r0, #8]\n    mov r0, #0x4b\n    lsl r0, r0, #4\n    add r0, r1, r0\n    add r1, #0x80\n    add r1, r1, r5\n    add r0, r0, r6\n    add r1, r1, r4\n    bl sub_02033B4C\n    ldr r0, _02036504 ; =_021D4140\n    ldr r0, [r0, #8]\n    add r0, r5, r0\n    add r0, r4, r0\n    add r0, #0x80\n    ldrb r0, [r0]\n    cmp r0, #0xe\n    bne _020364DE\n    add r7, r7, #1\n    ldr r0, [sp, #0xc]\n    add r6, #0xc\n    add r4, r4, r0\n    ldr r0, [sp, #4]\n    add r1, r0, #1\n    ldr r0, [sp, #8]\n    str r1, [sp, #4]\n    cmp r1, r0\n    blt _02036474\n    ldr r0, [sp, #8]\n    cmp r7, r0\n    bne _020364FC\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02036504: .word _021D4140"
    );
    #endif
}

void sub_02036508(void) {
    /* Original at 0x02036508 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _02036620 ; =_021D4140\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _02036514\n    b _0203661C\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    bne _0203661C\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_0203772C\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r6, r0, #1\n    ldr r0, _02036624 ; =_0210F900\n    ldrb r1, [r0]\n    cmp r1, #2\n    beq _02036548\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0203661C\n    ldr r0, _02036624 ; =_0210F900\n    ldrb r1, [r0]\n    add r1, r1, #1\n    strb r1, [r0]\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _02036572\n    ldr r0, _02036620 ; =_021D4140\n    ldrb r1, [r0]\n    cmp r1, #0\n    bne _02036572\n    ldr r1, [r0, #8]\n    mov r0, #0x6b\n    lsl r0, r0, #4\n    ldrb r0, [r1, r0]\n    bl sub_02036438\n    ldr r0, _02036620 ; =_021D4140\n    mov r1, #1\n    strb r1, [r0]\n    bl sub_02033298\n    cmp r0, #4\n    bne _020365A4\n    ldr r0, _02036620 ; =_021D4140\n    ldr r1, [r0, #8]\n    mov r0, #0x6b\n    lsl r0, r0, #4\n    ldrb r0, [r1, r0]\n    add r3, r1, #0\n    mov r1, #0xc0\n    add r2, r0, #0\n    add r3, #0x80\n    mul r2, r1\n    add r0, r3, r2\n    ldr r3, _02036628 ; =sub_02036ABC\n    mov r2, #0xe\n    bl sub_02033800\n    cmp r0, #0\n    bne _020365A4\n    ldr r0, _02036624 ; =_0210F900\n    ldrb r1, [r0]\n    sub r1, r1, #1\n    strb r1, [r0]\n    ldr r0, _02036624 ; =_0210F900\n    ldrb r1, [r0]\n    cmp r1, #1\n    beq _020365B2\n    ldrb r0, [r0]\n    cmp r0, #3\n    bne _0203660C\n    ldr r7, _02036620 ; =_021D4140\n    mov r4, #0\n    strb r4, [r7]\n    cmp r6, #0\n    ble _020365E0\n    add r5, r4, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _020365D8\n    ldr r0, [r7, #8]\n    ldr r1, _0203662C ; =0x0000066C\n    add r0, r0, r5\n    ldr r1, [r0, r1]\n    add r2, r1, #1\n    ldr r1, _0203662C ; =0x0000066C\n    str r2, [r0, r1]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r6\n    blt _020365BE\n    ldr r0, _02036620 ; =_021D4140\n    mov r1, #0x6b\n    ldr r2, [r0, #8]\n    lsl r1, r1, #4\n    ldrb r1, [r2, r1]\n    add r4, r2, #0\n    mov r2, #0xc0\n    add r3, r1, #0\n    add r4, #0x80\n    mul r3, r2\n    mov r0, #0\n    add r1, r4, r3\n    bl sub_020367B0\n    ldr r0, _02036620 ; =_021D4140\n    mov r1, #0x6b\n    ldr r3, [r0, #8]\n    lsl r1, r1, #4\n    ldrb r2, [r3, r1]\n    mov r0, #1\n    sub r0, r0, r2\n    strb r0, [r3, r1]\n    bl sub_02033298\n    cmp r0, #4\n    beq _0203661C\n    ldr r0, _02036624 ; =_0210F900\n    ldrb r1, [r0]\n    add r1, r1, #1\n    strb r1, [r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02036620: .word _021D4140\n    _02036624: .word _0210F900\n    _02036628: .word sub_02036ABC\n    _0203662C: .word 0x0000066C"
    );
    #endif
}

void sub_02036630(void) {
    /* Original at 0x02036630 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r6, r0, #1\n    mov r4, #1\n    cmp r6, #1\n    ble _0203666E\n    ldr r7, _02036674 ; =_021D4140\n    mov r5, #4\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02036666\n    ldr r0, [r7, #8]\n    add r1, r0, r5\n    ldr r0, _02036678 ; =0x0000066C\n    ldr r0, [r1, r0]\n    cmp r0, #3\n    ble _02036666\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r6\n    blt _0203664A\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02036674: .word _021D4140\n    _02036678: .word 0x0000066C"
    );
    #endif
}

void sub_0203667C(void) {
    /* Original at 0x0203667C */
    /* Requires manual decompilation - 128 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r6, r0, #1\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _02036738\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02036796\n    ldr r0, _02036798 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _0203679C ; =0x00000664\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _020366D4\n    bl sub_02036630\n    cmp r0, #0\n    beq _02036796\n    ldr r0, _020367A0 ; =_0210F900\n    ldrb r0, [r0]\n    cmp r0, #4\n    bne _020366F4\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _020366CC\n    mov r0, #0\n    bl sub_02036438\n    ldr r0, _020367A0 ; =_0210F900\n    mov r1, #2\n    strb r1, [r0]\n    b _020366F4\n    ldr r0, _020367A0 ; =_0210F900\n    ldrb r0, [r0]\n    cmp r0, #4\n    bne _020366EE\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _020366EE\n    mov r0, #0\n    bl sub_02036438\n    cmp r0, #0\n    beq _02036796\n    ldr r0, _020367A0 ; =_0210F900\n    mov r1, #2\n    strb r1, [r0]\n    ldr r0, _02036798 ; =_021D4140\n    mov r1, #0xc0\n    ldr r0, [r0, #8]\n    add r0, #0x80\n    bl ov00_021E602C\n    cmp r0, #0\n    beq _02036796\n    ldr r0, _020367A0 ; =_0210F900\n    mov r1, #4\n    mov r4, #0\n    strb r1, [r0]\n    cmp r6, #0\n    ble _02036796\n    ldr r7, _02036798 ; =_021D4140\n    add r5, r4, #0\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0x10\n    bl sub_020373B4\n    cmp r0, #0\n    beq _0203672E\n    ldr r0, [r7, #8]\n    ldr r1, _020367A4 ; =0x0000066C\n    add r0, r0, r5\n    ldr r1, [r0, r1]\n    add r2, r1, #1\n    ldr r1, _020367A4 ; =0x0000066C\n    str r2, [r0, r1]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r6\n    blt _02036714\n    pop {r3, r4, r5, r6, r7, pc}\n    bl sub_02033298\n    cmp r0, #4\n    bne _02036796\n    ldr r0, _020367A0 ; =_0210F900\n    ldrb r0, [r0]\n    cmp r0, #4\n    bne _02036796\n    bl sub_02036630\n    cmp r0, #0\n    beq _02036796\n    bl sub_02035FF0\n    cmp r0, #0\n    bne _0203678C\n    ldr r0, _02036798 ; =_021D4140\n    ldr r1, [r0, #8]\n    mov r0, #0x6b\n    add r2, r1, #0\n    lsl r0, r0, #4\n    ldrb r1, [r1, r0]\n    mov r0, #0xc0\n    add r2, #0x80\n    mul r0, r1\n    add r0, r2, r0\n    bl sub_02036F30\n    ldr r0, _02036798 ; =_021D4140\n    ldr r1, [r0, #8]\n    mov r0, #0x6b\n    add r2, r1, #0\n    lsl r0, r0, #4\n    ldrb r1, [r1, r0]\n    mov r0, #1\n    add r2, #0x80\n    sub r1, r0, r1\n    mov r0, #0xc0\n    mul r0, r1\n    add r0, r2, r0\n    bl sub_02036F30\n    ldr r0, _020367A0 ; =_0210F900\n    mov r1, #0\n    strb r1, [r0]\n    bl sub_02036508\n    pop {r3, r4, r5, r6, r7, pc}\n    _02036798: .word _021D4140\n    _0203679C: .word 0x00000664\n    _020367A0: .word _0210F900\n    _020367A4: .word 0x0000066C"
    );
    #endif
}

void sub_020367A8(void) {
    sub_020367B0();
}

void sub_020367B0(void) {
    /* Original at 0x020367B0 */
    /* Requires manual decompilation - 153 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    ldr r0, _020368E4 ; =_021D4140\n    add r5, r1, #0\n    ldr r2, [r0, #8]\n    ldr r0, _020368E8 ; =0x00000668\n    ldr r1, [r2, r0]\n    sub r1, r1, #1\n    str r1, [r2, r0]\n    cmp r5, #0\n    beq _020367D4\n    ldrb r0, [r5]\n    cmp r0, #0xb\n    bne _020367DA\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _020367D6\n    b _020368E0\n    add r5, r5, #1\n    b _020367E2\n    bl sub_02035FF0\n    cmp r0, #0\n    beq _020368E0\n    ldr r0, _020368E4 ; =_021D4140\n    ldr r1, _020368EC ; =0x000006B2\n    ldr r0, [r0, #8]\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    beq _020367F6\n    ldrb r2, [r5]\n    mov r1, #1\n    tst r1, r2\n    bne _020368E0\n    ldr r1, _020368EC ; =0x000006B2\n    mov r2, #0\n    strb r2, [r0, r1]\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _020368B4\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_0203772C\n    add r6, r0, #0\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r0, r0, #1\n    mov r4, #0\n    str r0, [sp, #4]\n    cmp r0, #0\n    ble _020368E0\n    sub r0, r6, #1\n    add r7, r4, #0\n    str r0, [sp]\n    ldrb r0, [r5]\n    cmp r0, #0xff\n    bne _02036846\n    ldr r0, _020368E4 ; =_021D4140\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _020368F0 ; =0x00000694\n    lsl r2, r4\n    ldrh r0, [r1, r0]\n    mvn r2, r2\n    and r2, r0\n    b _02036854\n    ldr r0, _020368E4 ; =_021D4140\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _020368F0 ; =0x00000694\n    lsl r2, r4\n    ldrh r0, [r1, r0]\n    orr r2, r0\n    ldr r0, _020368F0 ; =0x00000694\n    strh r2, [r1, r0]\n    ldrb r2, [r5]\n    cmp r2, #0xff\n    bne _02036862\n    add r5, r5, r6\n    b _020368A6\n    cmp r2, #0xe\n    bne _0203686A\n    add r5, r5, r6\n    b _020368A6\n    ldr r0, _020368E4 ; =_021D4140\n    ldr r3, [r0, #8]\n    ldr r0, _020368F4 ; =0x0000069E\n    add r1, r3, r4\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _02036882\n    mov r0, #1\n    tst r0, r2\n    beq _02036882\n    add r5, r5, r6\n    b _020368A6\n    ldr r0, _020368F8 ; =0x0000051C\n    add r5, r5, #1\n    add r0, r3, r0\n    ldr r3, _020368FC ; =0x0000054C\n    ldr r2, [sp]\n    add r0, r0, r7\n    add r1, r5, #0\n    add r3, r4, r3\n    bl sub_02033AF0\n    ldr r0, [sp]\n    mov r1, #0\n    add r5, r5, r0\n    ldr r0, _020368E4 ; =_021D4140\n    ldr r0, [r0, #8]\n    add r2, r0, r4\n    ldr r0, _020368F4 ; =0x0000069E\n    strb r1, [r2, r0]\n    ldr r0, [sp, #4]\n    add r4, r4, #1\n    add r7, #0xc\n    cmp r4, r0\n    blt _0203682E\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _020368E4 ; =_021D4140\n    ldrb r3, [r5, #1]\n    ldr r2, [r1, #8]\n    ldr r0, _020368F0 ; =0x00000694\n    strh r3, [r2, r0]\n    ldr r3, [r1, #8]\n    ldrh r2, [r3, r0]\n    lsl r2, r2, #8\n    strh r2, [r3, r0]\n    ldr r4, [r1, #8]\n    ldrb r2, [r5, #2]\n    ldrh r3, [r4, r0]\n    add r2, r3, r2\n    strh r2, [r4, r0]\n    ldr r0, [r1, #8]\n    ldr r3, _02036900 ; =0x000004A4\n    ldrb r2, [r5, #3]\n    add r0, r0, r3\n    add r1, r5, #4\n    add r3, #0xbc\n    bl sub_02033AF0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _020368E4: .word _021D4140\n    _020368E8: .word 0x00000668\n    _020368EC: .word 0x000006B2\n    _020368F0: .word 0x00000694\n    _020368F4: .word 0x0000069E\n    _020368F8: .word 0x0000051C\n    _020368FC: .word 0x0000054C\n    _02036900: .word 0x000004A4"
    );
    #endif
}

void sub_02036904(void) {
    sub_0203690C();
}

void sub_0203690C(void) {
    /* Original at 0x0203690C */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r3, _020369BC ; =_021D4140\n    add r5, r0, #0\n    ldr r0, [r3, #8]\n    ldr r2, _020369C0 ; =0x0000066C\n    add r4, r1, #0\n    add r1, r0, r2\n    lsl r0, r5, #2\n    ldr r6, [r1, r0]\n    sub r6, r6, #1\n    str r6, [r1, r0]\n    cmp r4, #0\n    beq _020369BA\n    ldr r0, [r3, #8]\n    add r2, #0x32\n    add r0, r0, r2\n    ldrb r1, [r0, r5]\n    cmp r1, #0\n    beq _0203693A\n    ldrb r2, [r4]\n    mov r1, #1\n    tst r1, r2\n    bne _020369BA\n    mov r1, #0\n    strb r1, [r0, r5]\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _02036992\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_0203772C\n    add r6, r0, #0\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    ldrb r1, [r4]\n    mov r0, #2\n    tst r0, r1\n    bne _02036982\n    ldr r0, _020369BC ; =_021D4140\n    mov r3, #0x4b\n    ldr r0, [r0, #8]\n    lsl r3, r3, #4\n    add r1, r0, r3\n    mov r0, #0xc\n    mul r0, r5\n    add r0, r1, r0\n    add r1, r4, #0\n    add r2, r6, #0\n    add r3, #0xf5\n    bl sub_02033AF0\n    ldr r0, _020369BC ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _020369C4 ; =0x00000696\n    add r1, r1, r0\n    ldrb r0, [r1, r5]\n    add r0, r0, #1\n    strb r0, [r1, r5]\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_02036D14\n    ldrb r1, [r4]\n    mov r0, #2\n    tst r0, r1\n    bne _020369BA\n    ldr r0, _020369BC ; =_021D4140\n    ldr r3, _020369C8 ; =0x0000051C\n    ldr r0, [r0, #8]\n    mov r2, #0xb\n    add r1, r0, r3\n    mov r0, #0xc\n    mul r0, r5\n    add r0, r1, r0\n    add r1, r4, #1\n    add r3, #0x92\n    bl sub_02033AF0\n    pop {r4, r5, r6, pc}\n    _020369BC: .word _021D4140\n    _020369C0: .word 0x0000066C\n    _020369C4: .word 0x00000696\n    _020369C8: .word 0x0000051C"
    );
    #endif
}

void sub_020369CC(void) {
    /* Original at 0x020369CC */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r3, _02036A8C ; =_021D4140\n    add r5, r0, #0\n    ldr r0, [r3, #8]\n    ldr r2, _02036A90 ; =0x0000066C\n    add r4, r1, #0\n    add r1, r0, r2\n    lsl r0, r5, #2\n    ldr r6, [r1, r0]\n    sub r6, r6, #1\n    str r6, [r1, r0]\n    cmp r4, #0\n    beq _02036A88\n    ldr r0, [r3, #8]\n    add r2, #0x32\n    add r0, r0, r2\n    ldrb r1, [r0, r5]\n    cmp r1, #0\n    beq _020369FA\n    ldrb r2, [r4]\n    mov r1, #1\n    tst r1, r2\n    bne _02036A88\n    mov r1, #0\n    strb r1, [r0, r5]\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _02036A88\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_0203772C\n    add r6, r0, #0\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    ldrb r0, [r4]\n    ldr r2, _02036A94 ; =0x00000694\n    cmp r0, #0xff\n    bne _02036A38\n    ldr r0, _02036A8C ; =_021D4140\n    mov r3, #1\n    ldr r1, [r0, #8]\n    lsl r3, r5\n    ldrh r0, [r1, r2]\n    mvn r3, r3\n    and r0, r3\n    b _02036A44\n    ldr r0, _02036A8C ; =_021D4140\n    mov r3, #1\n    ldr r1, [r0, #8]\n    lsl r3, r5\n    ldrh r0, [r1, r2]\n    orr r0, r3\n    strh r0, [r1, r2]\n    ldrb r0, [r4]\n    cmp r0, #0xff\n    beq _02036A88\n    cmp r0, #2\n    beq _02036A88\n    cmp r0, #0xe\n    beq _02036A88\n    ldr r1, _02036A8C ; =_021D4140\n    ldr r2, _02036A98 ; =0x0000069E\n    ldr r1, [r1, #8]\n    add r3, r1, r5\n    ldrb r2, [r3, r2]\n    cmp r2, #0\n    beq _02036A68\n    mov r2, #1\n    tst r0, r2\n    bne _02036A88\n    ldr r3, _02036A9C ; =0x0000051C\n    mov r0, #0xc\n    add r1, r1, r3\n    mul r0, r5\n    add r0, r1, r0\n    add r1, r4, #1\n    sub r2, r6, #1\n    add r3, #0xcb\n    bl sub_02033AF0\n    ldr r0, _02036A8C ; =_021D4140\n    mov r2, #0\n    ldr r0, [r0, #8]\n    add r1, r0, r5\n    ldr r0, _02036A98 ; =0x0000069E\n    strb r2, [r1, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _02036A8C: .word _021D4140\n    _02036A90: .word 0x0000066C\n    _02036A94: .word 0x00000694\n    _02036A98: .word 0x0000069E\n    _02036A9C: .word 0x0000051C"
    );
    #endif
}

void sub_02036AA0(void) {
    GF_AssertFail();
}

void sub_02036ABC(void) {
    GF_AssertFail();
}

void sub_02036AD8(void) {
    /* Original at 0x02036AD8 */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _02036BD0 ; =_021D4140\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _02036BCE\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    bne _02036BCE\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_0203772C\n    add r4, r0, #0\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    bl sub_02033298\n    cmp r0, #4\n    bne _02036BCE\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    bne _02036B22\n    bl sub_0203769C\n    pop {r4, pc}\n    ldr r0, _02036BD4 ; =_0210F900\n    ldrb r1, [r0, #1]\n    cmp r1, #2\n    beq _02036B30\n    ldrb r0, [r0, #1]\n    cmp r0, #0\n    bne _02036BCE\n    bl sub_0203769C\n    cmp r0, #0\n    beq _02036B84\n    ldr r0, _02036BD4 ; =_0210F900\n    ldr r3, _02036BD8 ; =sub_02036AA0\n    ldrb r1, [r0, #1]\n    mov r2, #0xe\n    add r1, r1, #1\n    strb r1, [r0, #1]\n    ldr r0, _02036BD0 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02036BDC ; =0x000006AF\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    lsl r1, r4, #0x10\n    lsr r1, r1, #0x10\n    bl sub_02033800\n    cmp r0, #0\n    bne _02036B66\n    ldr r0, _02036BD4 ; =_0210F900\n    ldrb r1, [r0, #1]\n    sub r1, r1, #1\n    strb r1, [r0, #1]\n    pop {r4, pc}\n    ldr r2, _02036BD0 ; =_021D4140\n    ldr r1, _02036BDC ; =0x000006AF\n    ldr r4, [r2, #8]\n    mov r0, #1\n    ldrb r3, [r4, r1]\n    sub r0, r0, r3\n    strb r0, [r4, r1]\n    add r0, r1, #0\n    ldr r2, [r2, #8]\n    sub r0, #0x47\n    ldr r0, [r2, r0]\n    sub r1, #0x47\n    add r0, r0, #1\n    str r0, [r2, r1]\n    pop {r4, pc}\n    bl sub_02033250\n    ldr r1, _02036BE0 ; =0x0000FFFE\n    tst r0, r1\n    beq _02036BCE\n    ldr r0, _02036BD4 ; =_0210F900\n    ldrb r1, [r0, #1]\n    add r1, r1, #1\n    strb r1, [r0, #1]\n    mov r0, #1\n    bl sub_02036AA0\n    ldr r0, _02036BD0 ; =_021D4140\n    ldr r1, _02036BDC ; =0x000006AF\n    ldr r2, [r0, #8]\n    mov r0, #0\n    ldrb r1, [r2, r1]\n    lsl r1, r1, #6\n    add r1, r2, r1\n    lsl r2, r4, #0x10\n    lsr r2, r2, #0x10\n    bl sub_0203690C\n    ldr r2, _02036BD0 ; =_021D4140\n    ldr r1, _02036BDC ; =0x000006AF\n    ldr r4, [r2, #8]\n    mov r0, #1\n    ldrb r3, [r4, r1]\n    sub r0, r0, r3\n    strb r0, [r4, r1]\n    add r0, r1, #0\n    ldr r2, [r2, #8]\n    sub r0, #0x47\n    ldr r0, [r2, r0]\n    sub r1, #0x47\n    add r0, r0, #1\n    str r0, [r2, r1]\n    pop {r4, pc}\n    _02036BD0: .word _021D4140\n    _02036BD4: .word _0210F900\n    _02036BD8: .word sub_02036AA0\n    _02036BDC: .word 0x000006AF\n    _02036BE0: .word 0x0000FFFE"
    );
    #endif
}

void sub_02036BE4(void) {
    /* Original at 0x02036BE4 */
    /* Requires manual decompilation - 144 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _02036D08 ; =_021D4140\n    mov r2, #0x66\n    ldr r5, [r7, #8]\n    lsl r2, r2, #4\n    ldrb r0, [r5, r2]\n    mov r6, #0\n    add r4, r6, #0\n    cmp r0, #0\n    beq _02036C02\n    sub r1, r2, #4\n    ldrh r1, [r5, r1]\n    mov r3, #0xf0\n    tst r3, r1\n    bne _02036C04\n    b _02036D06\n    cmp r0, #2\n    bne _02036C42\n    mov r0, #0x20\n    tst r0, r1\n    beq _02036C16\n    mov r0, #0x10\n    orr r0, r6\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    mov r0, #0x10\n    tst r0, r1\n    beq _02036C24\n    mov r0, #0x20\n    orr r0, r4\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    mov r0, #0x40\n    tst r0, r1\n    beq _02036C32\n    mov r0, #0x80\n    orr r0, r4\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    mov r0, #0x80\n    tst r0, r1\n    beq _02036CF0\n    mov r0, #0x40\n    orr r0, r4\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    b _02036CF0\n    add r0, r2, #2\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _02036C64\n    add r4, r0, #0\n    add r0, r2, #1\n    ldrsb r0, [r5, r0]\n    sub r1, r0, #1\n    add r0, r2, #1\n    strb r1, [r5, r0]\n    ldr r1, [r7, #8]\n    ldrsb r0, [r1, r0]\n    cmp r0, #0\n    bge _02036CF0\n    add r0, r2, #2\n    strh r6, [r1, r0]\n    b _02036CF0\n    add r0, r2, #0\n    sub r0, #0x34\n    add r6, r5, r0\n    sub r2, #0x34\n    ldr r0, [r6, #8]\n    ldr r1, [r6, #0xc]\n    ldr r2, [r5, r2]\n    ldr r3, [r6, #4]\n    bl _ll_mul\n    add r3, r0, #0\n    add r2, r1, #0\n    ldr r0, [r6, #0x10]\n    ldr r1, [r6, #0x14]\n    add r0, r0, r3\n    adc r1, r2\n    ldr r2, _02036D0C ; =0x0000062C\n    str r0, [r5, r2]\n    mov r2, #0\n    str r1, [r6, #4]\n    lsr r0, r1, #0x1e\n    lsl r1, r2, #2\n    orr r1, r0\n    cmp r1, #3\n    bhi _02036CB8\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02036CA2: ; jump table\n    mov r4, #0x20\n    b _02036CB8\n    mov r4, #0x10\n    b _02036CB8\n    mov r4, #0x40\n    b _02036CB8\n    mov r4, #0x80\n    ldr r0, _02036D08 ; =_021D4140\n    ldr r5, [r0, #8]\n    ldr r0, _02036D0C ; =0x0000062C\n    add r6, r5, r0\n    ldr r0, [r6, #8]\n    ldr r1, [r6, #0xc]\n    ldr r2, [r6]\n    ldr r3, [r6, #4]\n    bl _ll_mul\n    ldr r3, [r6, #0x10]\n    ldr r2, [r6, #0x14]\n    add r0, r3, r0\n    adc r2, r1\n    ldr r1, _02036D0C ; =0x0000062C\n    mov r3, #0\n    str r0, [r5, r1]\n    str r2, [r6, #4]\n    lsr r0, r2, #0x1c\n    lsl r2, r3, #4\n    orr r2, r0\n    add r0, r1, #0\n    add r0, #0x35\n    strb r2, [r5, r0]\n    ldr r0, _02036D08 ; =_021D4140\n    add r1, #0x36\n    ldr r0, [r0, #8]\n    strh r4, [r0, r1]\n    ldr r2, _02036D08 ; =_021D4140\n    ldr r1, _02036D10 ; =0x0000065C\n    ldr r5, [r2, #8]\n    mov r0, #0xf0\n    ldrh r3, [r5, r1]\n    bic r3, r0\n    strh r3, [r5, r1]\n    ldr r2, [r2, #8]\n    ldrh r0, [r2, r1]\n    add r0, r0, r4\n    strh r0, [r2, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02036D08: .word _021D4140\n    _02036D0C: .word 0x0000062C\n    _02036D10: .word 0x0000065C"
    );
    #endif
}

void sub_02036D14(void) {
    /* Original at 0x02036D14 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    ldr r4, _02036D94 ; =_021D4140\n    lsl r6, r1, #1\n    ldr r2, [r4, #8]\n    mov r5, #0\n    add r3, r2, r6\n    ldr r2, _02036D98 ; =0x00000644\n    strh r5, [r3, r2]\n    ldrb r5, [r0]\n    mov r3, #0x10\n    add r7, r5, #0\n    and r7, r3\n    cmp r7, #0x10\n    bne _02036D8C\n    mov r7, #0xc\n    and r5, r7\n    lsl r5, r5, #0x18\n    lsr r5, r5, #0x18\n    bne _02036D48\n    ldr r3, [r4, #8]\n    add r4, r3, r2\n    ldrh r3, [r4, r6]\n    mov r2, #0x40\n    orr r2, r3\n    strh r2, [r4, r6]\n    b _02036D7A\n    cmp r5, #4\n    bne _02036D5A\n    ldr r3, [r4, #8]\n    add r4, r3, r2\n    ldrh r3, [r4, r6]\n    mov r2, #0x80\n    orr r2, r3\n    strh r2, [r4, r6]\n    b _02036D7A\n    cmp r5, #8\n    bne _02036D6C\n    ldr r3, [r4, #8]\n    add r4, r3, r2\n    ldrh r3, [r4, r6]\n    mov r2, #0x20\n    orr r2, r3\n    strh r2, [r4, r6]\n    b _02036D7A\n    cmp r5, #0xc\n    bne _02036D7A\n    ldr r4, [r4, #8]\n    add r4, r4, r2\n    ldrh r2, [r4, r6]\n    orr r2, r3\n    strh r2, [r4, r6]\n    ldrb r0, [r0]\n    asr r2, r0, #5\n    mov r0, #7\n    and r2, r0\n    ldr r0, _02036D94 ; =_021D4140\n    ldr r0, [r0, #8]\n    add r1, r0, r1\n    ldr r0, _02036D9C ; =0x00000654\n    strb r2, [r1, r0]\n    mov r0, #1\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _02036D94: .word _021D4140\n    _02036D98: .word 0x00000644\n    _02036D9C: .word 0x00000654"
    );
    #endif
}

void sub_02036DA0(void) {
    /* Original at 0x02036DA0 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02036E4C ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02036E50 ; =0x0000065E\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _02036DB4\n    mov r0, #0\n    pop {r4, pc}\n    bl sub_0203751C\n    cmp r0, #0\n    bne _02036DC0\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _02036E4C ; =_021D4140\n    ldr r2, [r0, #8]\n    ldr r0, _02036E54 ; =0x000006B1\n    ldrb r1, [r2, r0]\n    cmp r1, #0\n    beq _02036DD0\n    sub r1, r1, #1\n    strb r1, [r2, r0]\n    ldr r1, _02036E4C ; =_021D4140\n    ldr r0, _02036E58 ; =0x0000065C\n    ldr r2, [r1, #8]\n    mov r3, #0x40\n    ldrh r2, [r2, r0]\n    tst r3, r2\n    beq _02036DF0\n    ldrb r3, [r4]\n    mov r2, #0x10\n    add r0, #0x55\n    orr r2, r3\n    strb r2, [r4]\n    ldr r1, [r1, #8]\n    mov r2, #8\n    strb r2, [r1, r0]\n    b _02036E36\n    mov r3, #0x80\n    tst r3, r2\n    beq _02036E08\n    ldrb r3, [r4]\n    mov r2, #0x14\n    add r0, #0x55\n    orr r2, r3\n    strb r2, [r4]\n    ldr r1, [r1, #8]\n    mov r2, #8\n    strb r2, [r1, r0]\n    b _02036E36\n    mov r3, #0x20\n    tst r3, r2\n    beq _02036E20\n    ldrb r3, [r4]\n    mov r2, #0x18\n    add r0, #0x55\n    orr r2, r3\n    strb r2, [r4]\n    ldr r1, [r1, #8]\n    mov r2, #8\n    strb r2, [r1, r0]\n    b _02036E36\n    mov r3, #0x10\n    tst r2, r3\n    beq _02036E36\n    ldrb r3, [r4]\n    mov r2, #0x1c\n    add r0, #0x55\n    orr r2, r3\n    strb r2, [r4]\n    ldr r1, [r1, #8]\n    mov r2, #8\n    strb r2, [r1, r0]\n    ldr r0, _02036E4C ; =_021D4140\n    ldrb r2, [r4]\n    ldr r1, [r0, #8]\n    ldr r0, _02036E5C ; =0x0000065F\n    ldrb r0, [r1, r0]\n    lsl r0, r0, #5\n    orr r0, r2\n    strb r0, [r4]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02036E4C: .word _021D4140\n    _02036E50: .word 0x0000065E\n    _02036E54: .word 0x000006B1\n    _02036E58: .word 0x0000065C\n    _02036E5C: .word 0x0000065F"
    );
    #endif
}

void sub_02036E60(void) {
    /* Original at 0x02036E60 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_0203772C\n    add r5, r0, #0\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    ldr r0, _02036F24 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02036F28 ; =0x000006B4\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _02036E90\n    mov r0, #0\n    b _02036E92\n    mov r0, #1\n    strb r0, [r4]\n    bl sub_02035FF0\n    cmp r0, #0\n    bne _02036EA2\n    add r0, r4, #0\n    bl sub_02036DA0\n    ldr r1, _02036F24 ; =_021D4140\n    ldr r0, _02036F28 ; =0x000006B4\n    ldr r2, [r1, #8]\n    mov r3, #0\n    strb r3, [r2, r0]\n    mov r0, #0x16\n    ldr r1, [r1, #8]\n    lsl r0, r0, #6\n    add r0, r1, r0\n    bl sub_02033C50\n    cmp r0, #0\n    beq _02036ED0\n    ldrb r1, [r4]\n    mov r0, #2\n    orr r0, r1\n    strb r0, [r4]\n    ldrb r0, [r4]\n    cmp r0, #2\n    bne _02036F1C\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    sub r0, r5, #1\n    str r0, [sp, #4]\n    add r0, r4, #1\n    str r0, [sp]\n    ldr r0, _02036F24 ; =_021D4140\n    mov r2, #1\n    ldr r1, [r0, #8]\n    mov r0, #0x16\n    lsl r0, r0, #6\n    add r0, r1, r0\n    add r1, sp, #0\n    bl sub_02033ECC\n    cmp r0, #0\n    bne _02036EF8\n    ldr r0, _02036F24 ; =_021D4140\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _02036F28 ; =0x000006B4\n    strb r2, [r1, r0]\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _02036F1C\n    ldr r2, _02036F24 ; =_021D4140\n    ldr r1, _02036F2C ; =0x000006AA\n    ldr r3, [r2, #8]\n    ldrb r0, [r3, r1]\n    add r0, r0, #1\n    strb r0, [r3, r1]\n    ldr r2, [r2, #8]\n    ldrb r0, [r4]\n    ldrb r1, [r2, r1]\n    lsl r2, r1, #4\n    mov r1, #0xf0\n    and r1, r2\n    orr r0, r1\n    strb r0, [r4]\n    mov r0, #1\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02036F24: .word _021D4140\n    _02036F28: .word 0x000006B4\n    _02036F2C: .word 0x000006AA"
    );
    #endif
}

void sub_02036F30(void) {
    /* Original at 0x02036F30 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0xb\n    strb r0, [r4]\n    ldr r0, _02036FA0 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02036FA4 ; =0x000006B5\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _02036F4A\n    mov r0, #0\n    b _02036F4C\n    mov r0, #1\n    strb r0, [r4, #1]\n    bl sub_02033250\n    asr r1, r0, #8\n    strb r1, [r4, #2]\n    strb r0, [r4, #3]\n    mov r0, #0xbb\n    str r0, [sp, #4]\n    add r0, r4, #5\n    str r0, [sp]\n    ldr r0, _02036FA0 ; =_021D4140\n    mov r2, #0\n    ldr r1, [r0, #8]\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    add r1, sp, #0\n    bl sub_02033ECC\n    cmp r0, #0\n    beq _02036F8C\n    ldr r0, _02036FA0 ; =_021D4140\n    mov r2, #0\n    ldr r1, [r0, #8]\n    ldr r0, _02036FA4 ; =0x000006B5\n    strb r2, [r1, r0]\n    ldr r1, [sp, #4]\n    mov r0, #0xbb\n    sub r0, r0, r1\n    add sp, #8\n    strb r0, [r4, #4]\n    pop {r4, pc}\n    ldr r0, _02036FA0 ; =_021D4140\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _02036FA4 ; =0x000006B5\n    strb r2, [r1, r0]\n    mov r0, #0xbb\n    strb r0, [r4, #4]\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02036FA0: .word _021D4140\n    _02036FA4: .word 0x000006B5"
    );
    #endif
}

void sub_02036FA8(void) {
    /* Original at 0x02036FA8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02036FD0 ; =_021D4140\n    ldr r2, [r0, #8]\n    ldr r0, _02036FD4 ; =0x000006BB\n    ldrb r1, [r2, r0]\n    cmp r1, #0\n    bne _02036FBA\n    mov r0, #0\n    pop {r3, pc}\n    add r0, r0, #1\n    ldrb r0, [r2, r0]\n    bl _s32_div_f\n    cmp r1, #0\n    bne _02036FCA\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _02036FD0: .word _021D4140\n    _02036FD4: .word 0x000006BB"
    );
    #endif
}

void sub_02036FD8(void) {
    /* Original at 0x02036FD8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    bne _02036FF4\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _0203702C ; =_021D4140\n    add r2, r4, #0\n    ldr r1, [r0, #8]\n    mov r0, #0x16\n    lsl r0, r0, #6\n    add r0, r1, r0\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_02033DF0\n    cmp r0, #0\n    beq _0203701A\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl sub_0203993C\n    cmp r0, #0xa\n    bne _02037026\n    bl sub_02037974\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0203702C: .word _021D4140"
    );
    #endif
}

void sub_02037030(void) {
    /* Original at 0x02037030 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    bne _0203704C\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02037084 ; =_021D4140\n    add r2, r4, #0\n    ldr r1, [r0, #8]\n    mov r0, #0x16\n    lsl r0, r0, #6\n    add r0, r1, r0\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_02033DF0\n    cmp r0, #0\n    beq _02037070\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl sub_0203993C\n    cmp r0, #0xa\n    bne _0203707C\n    bl sub_02037974\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _02037084: .word _021D4140"
    );
    #endif
}

void sub_02037088(void) {
    /* Original at 0x02037088 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _020370A4\n    bl GF_AssertFail\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    bne _020370B4\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _020370CA\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_02036FD8\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _02037104 ; =_021D4140\n    add r2, r4, #0\n    ldr r1, [r0, #8]\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_02033DF0\n    cmp r0, #0\n    beq _020370F0\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl sub_0203993C\n    cmp r0, #0xa\n    bne _020370FC\n    bl sub_02037974\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _02037104: .word _021D4140"
    );
    #endif
}

void sub_02037108(void) {
    /* Original at 0x02037108 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _02037124\n    bl sub_02037974\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    bl sub_020373B4\n    cmp r0, #0\n    bne _02037134\n    add sp, #8\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _0203714A\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_02037030\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02037180 ; =_021D4140\n    add r2, r4, #0\n    ldr r1, [r0, #8]\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_02033DF0\n    cmp r0, #0\n    beq _0203716E\n    add sp, #8\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    bl sub_0203993C\n    cmp r0, #0xa\n    bne _0203717A\n    bl sub_02037974\n    mov r0, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _02037180: .word _021D4140"
    );
    #endif
}

void sub_02037184(void) {
    sub_02037108();
}

void sub_02037190(void) {
    /* Original at 0x02037190 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0203719C ; =_021D4140\n    ldr r3, _020371A0 ; =sub_02033BE4\n    ldr r1, [r0, #8]\n    ldr r0, _020371A4 ; =0x00000498\n    add r0, r1, r0\n    bx r3\n    _0203719C: .word _021D4140\n    _020371A0: .word sub_02033BE4\n    _020371A4: .word 0x00000498"
    );
    #endif
}

void sub_020371A8(void) {
    sub_02034170(0, 0xee);
}

void sub_020371C4(void) {
    /* Original at 0x020371C4 */
    /* Requires manual decompilation - 126 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    add r4, r3, #0\n    bl sub_02033BC4\n    cmp r0, #0\n    beq _020372D4\n    ldrb r7, [r4, #0xa]\n    cmp r7, #0xee\n    bne _020371EA\n    add r0, r5, #0\n    bl sub_02033B68\n    add r7, r0, #0\n    cmp r7, #0xee\n    beq _020372CA\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    strb r7, [r4, #0xa]\n    ldrh r6, [r4, #8]\n    str r0, [sp, #0x10]\n    ldr r0, _020372D8 ; =0x0000FFFF\n    cmp r6, r0\n    bne _0203723E\n    add r0, r7, #0\n    bl sub_020341DC\n    add r6, r0, #0\n    ldr r0, _020372DC ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _020372E0 ; =0x000006B8\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _020372D4\n    ldr r0, _020372D8 ; =0x0000FFFF\n    cmp r6, r0\n    bne _0203723C\n    add r0, r5, #0\n    bl sub_02033BC4\n    cmp r0, #1\n    bge _02037226\n    ldr r0, [sp, #0x10]\n    add sp, #0x14\n    strh r0, [r5, #4]\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl sub_02033B68\n    lsl r6, r0, #8\n    add r0, r5, #0\n    bl sub_02033B68\n    add r6, r6, r0\n    mov r0, #4\n    ldrsh r0, [r5, r0]\n    str r0, [sp, #0x10]\n    strh r6, [r4, #8]\n    add r0, r7, #0\n    bl sub_02034244\n    cmp r0, #0\n    beq _0203729A\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    bne _0203725A\n    ldrh r2, [r4, #8]\n    ldr r1, [sp, #4]\n    add r0, r7, #0\n    bl sub_02034280\n    str r0, [r4, #4]\n    ldr r2, [r4]\n    ldr r1, [sp, #8]\n    add r0, r5, #0\n    sub r2, r6, r2\n    bl sub_02033B4C\n    ldr r2, [r4, #4]\n    str r0, [sp, #0xc]\n    cmp r2, #0\n    beq _0203727A\n    ldr r1, [r4]\n    ldr r0, [sp, #8]\n    add r1, r2, r1\n    ldr r2, [sp, #0xc]\n    bl MI_CpuCopy8\n    ldr r1, [r4]\n    ldr r0, [sp, #0xc]\n    add r0, r1, r0\n    str r0, [r4]\n    cmp r0, r6\n    blt _020372CA\n    str r4, [sp]\n    ldr r0, [sp, #4]\n    ldr r3, [r4, #4]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl sub_020371A8\n    cmp r7, #0x11\n    beq _020372D4\n    b _020372CA\n    add r0, r5, #0\n    bl sub_02033BC4\n    cmp r0, r6\n    blt _020372C2\n    ldr r1, [sp, #8]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl sub_02033B4C\n    ldr r0, [sp, #4]\n    ldr r3, [sp, #8]\n    add r1, r7, #0\n    add r2, r6, #0\n    str r4, [sp]\n    bl sub_020371A8\n    cmp r7, #0x11\n    beq _020372D4\n    b _020372CA\n    ldr r0, [sp, #0x10]\n    add sp, #0x14\n    strh r0, [r5, #4]\n    pop {r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl sub_02033BC4\n    cmp r0, #0\n    bne _020371D8\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _020372D8: .word 0x0000FFFF\n    _020372DC: .word _021D4140\n    _020372E0: .word 0x000006B8"
    );
    #endif
}

void sub_020372E4(void) {
    /* Original at 0x020372E4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _02037328 ; =_021D4140\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _02037326\n    ldr r0, _0203732C ; =0x000006BA\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _02037326\n    ldr r0, _02037330 ; =0x000004A4\n    add r0, r1, r0\n    bl sub_02033C28\n    ldr r0, _02037328 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02037330 ; =0x000004A4\n    add r0, r1, r0\n    bl sub_02033BC4\n    cmp r0, #0\n    ble _02037326\n    ldr r0, _02037328 ; =_021D4140\n    mov r3, #0x62\n    ldr r4, [r0, #8]\n    ldr r2, _02037330 ; =0x000004A4\n    lsl r3, r3, #4\n    add r0, r4, r2\n    sub r2, #0x10\n    ldr r2, [r4, r2]\n    mov r1, #0\n    add r3, r4, r3\n    bl sub_020371C4\n    pop {r4, pc}\n    _02037328: .word _021D4140\n    _0203732C: .word 0x000006BA\n    _02037330: .word 0x000004A4"
    );
    #endif
}

void sub_02037334(void) {
    /* Original at 0x02037334 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r0, _020373A4 ; =_021D4140\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _020373A0\n    ldr r0, _020373A8 ; =0x000006BA\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _020373A0\n    bl sub_0203993C\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02033FC4\n    add r0, r0, #1\n    mov r4, #0\n    str r0, [sp]\n    cmp r0, #0\n    ble _020373A0\n    ldr r7, _020373A4 ; =_021D4140\n    add r5, r4, #0\n    ldr r1, [r7, #8]\n    ldr r0, _020373AC ; =0x0000051C\n    add r0, r1, r0\n    add r0, r0, r5\n    bl sub_02033C28\n    ldr r1, [r7, #8]\n    ldr r0, _020373AC ; =0x0000051C\n    add r0, r1, r0\n    add r0, r0, r5\n    bl sub_02033BC4\n    cmp r0, #0\n    ble _02037396\n    mov r3, #0x17\n    ldr r6, [r7, #8]\n    ldr r0, _020373AC ; =0x0000051C\n    ldr r2, _020373B0 ; =0x00000494\n    lsl r3, r3, #6\n    add r0, r6, r0\n    add r3, r6, r3\n    ldr r2, [r6, r2]\n    add r0, r0, r5\n    add r1, r4, #0\n    add r3, r3, r5\n    bl sub_020371C4\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, r0\n    blt _02037360\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020373A4: .word _021D4140\n    _020373A8: .word 0x000006BA\n    _020373AC: .word 0x0000051C\n    _020373B0: .word 0x00000494"
    );
    #endif
}

void sub_020373B4(void) {
    /* Original at 0x020373B4 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02037448 ; =_021D4140\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    bne _020373C4\n    mov r0, #0\n    pop {r4, pc}\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _020373F2\n    ldr r0, _02037448 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _0203744C ; =0x000006B6\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _020373EE\n    bl ov00_021EE4FC\n    lsl r0, r0, #0x10\n    lsr r2, r0, #0x10\n    mov r0, #1\n    add r1, r0, #0\n    lsl r1, r4\n    tst r1, r2\n    bne _02037444\n    mov r0, #0\n    pop {r4, pc}\n    bl sub_02037474\n    cmp r0, #0\n    bne _020373FE\n    mov r0, #0\n    pop {r4, pc}\n    bl sub_02033298\n    cmp r0, #4\n    beq _0203740A\n    mov r0, #0\n    pop {r4, pc}\n    bl sub_0203769C\n    cmp r4, r0\n    bne _02037416\n    mov r0, #1\n    pop {r4, pc}\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02037430\n    bl sub_02033250\n    mov r1, #1\n    add r2, r1, #0\n    lsl r2, r4\n    tst r0, r2\n    beq _02037442\n    add r0, r1, #0\n    pop {r4, pc}\n    ldr r0, _02037448 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02037450 ; =0x00000694\n    ldrh r2, [r1, r0]\n    mov r0, #1\n    add r1, r0, #0\n    lsl r1, r4\n    tst r1, r2\n    bne _02037444\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02037448: .word _021D4140\n    _0203744C: .word 0x000006B6\n    _02037450: .word 0x00000694"
    );
    #endif
}

void sub_02037454(void) {
    sub_020373B4(0);
}

void sub_02037474(void) {
    /* Original at 0x02037474 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02037494 ; =_021D4140\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _0203748E\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _0203748E\n    mov r0, #1\n    pop {r3, pc}\n    bl sub_02035650\n    pop {r3, pc}\n    _02037494: .word _021D4140"
    );
    #endif
}

void sub_02037498(void) {
    /* Original at 0x02037498 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020374A4 ; =_021D4140\n    ldr r2, [r1, #8]\n    ldr r1, _020374A8 ; =0x0000065F\n    strb r0, [r2, r1]\n    bx lr\n    nop\n    _020374A4: .word _021D4140\n    _020374A8: .word 0x0000065F"
    );
    #endif
}

void sub_020374AC(void) {
    /* Original at 0x020374AC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020374B8 ; =_021D4140\n    ldr r1, [r1, #8]\n    add r1, r1, r0\n    ldr r0, _020374BC ; =0x00000654\n    ldrb r0, [r1, r0]\n    bx lr\n    _020374B8: .word _021D4140\n    _020374BC: .word 0x00000654"
    );
    #endif
}

void sub_020374C0(void) {
    /* Original at 0x020374C0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020374DC ; =_021D4140\n    ldr r2, [r1, #8]\n    cmp r2, #0\n    bne _020374CC\n    mov r0, #0\n    bx lr\n    ldr r1, _020374E0 ; =0x00000644\n    add r3, r2, r1\n    lsl r2, r0, #1\n    ldrh r0, [r3, r2]\n    mov r1, #0\n    strh r1, [r3, r2]\n    bx lr\n    nop\n    _020374DC: .word _021D4140\n    _020374E0: .word 0x00000644"
    );
    #endif
}

void sub_020374E4(void) {
    /* Original at 0x020374E4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020374FC ; =_021D4140\n    ldr r3, [r0, #8]\n    cmp r3, #0\n    beq _020374F8\n    ldr r1, _02037500 ; =0x0000065C\n    mov r0, #2\n    ldrh r2, [r3, r1]\n    lsl r0, r0, #0xe\n    orr r0, r2\n    strh r0, [r3, r1]\n    bx lr\n    nop\n    _020374FC: .word _021D4140\n    _02037500: .word 0x0000065C"
    );
    #endif
}

void sub_02037504(void) {
    /* Original at 0x02037504 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037514 ; =_021D4140\n    ldr r2, [r0, #8]\n    cmp r2, #0\n    beq _02037512\n    ldr r0, _02037518 ; =0x0000065C\n    mov r1, #0\n    strh r1, [r2, r0]\n    bx lr\n    _02037514: .word _021D4140\n    _02037518: .word 0x0000065C"
    );
    #endif
}

void sub_0203751C(void) {
    /* Original at 0x0203751C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037534 ; =_021D4140\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _02037530\n    ldr r0, _02037538 ; =0x0000065C\n    ldrh r1, [r1, r0]\n    mov r0, #2\n    lsl r0, r0, #0xe\n    and r0, r1\n    bx lr\n    mov r0, #1\n    bx lr\n    _02037534: .word _021D4140\n    _02037538: .word 0x0000065C"
    );
    #endif
}

void sub_0203753C(void) {
    /* Original at 0x0203753C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _0203756E\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _02037590 ; =_021D4140\n    add r2, r4, #0\n    ldr r1, [r0, #8]\n    mov r0, #0x16\n    lsl r0, r0, #6\n    add r0, r1, r0\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_02033DF0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, _02037590 ; =_021D4140\n    add r2, r4, #0\n    ldr r1, [r0, #8]\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_02033DF0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    nop\n    _02037590: .word _021D4140"
    );
    #endif
}

void sub_02037594(void) {
    /* Original at 0x02037594 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0203760C ; =_021D4140\n    ldr r2, [r0, #8]\n    cmp r2, #0\n    beq _02037608\n    ldr r1, _02037610 ; =0x000006AB\n    ldrb r0, [r2, r1]\n    cmp r0, #1\n    beq _020375AC\n    cmp r0, #3\n    beq _020375E4\n    pop {r3, pc}\n    bl sub_02035FF0\n    cmp r0, #1\n    bne _020375C4\n    ldr r1, _0203760C ; =_021D4140\n    mov r0, #0xb\n    ldr r2, [r1, #8]\n    ldr r1, _02037614 ; =0x000006AC\n    add r1, r2, r1\n    bl sub_020376E0\n    b _020375D4\n    ldr r1, _0203760C ; =_021D4140\n    mov r0, #0xb\n    ldr r2, [r1, #8]\n    ldr r1, _02037614 ; =0x000006AC\n    add r1, r2, r1\n    mov r2, #1\n    bl sub_02037108\n    cmp r0, #0\n    beq _02037608\n    ldr r0, _0203760C ; =_021D4140\n    mov r2, #2\n    ldr r1, [r0, #8]\n    ldr r0, _02037610 ; =0x000006AB\n    strb r2, [r1, r0]\n    pop {r3, pc}\n    add r1, r1, #1\n    mov r0, #0xc\n    add r1, r2, r1\n    bl sub_020376E0\n    cmp r0, #0\n    beq _02037608\n    ldr r0, _0203760C ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02037614 ; =0x000006AC\n    ldrb r0, [r1, r0]\n    bl sub_02035FA8\n    ldr r0, _0203760C ; =_021D4140\n    mov r2, #0\n    ldr r1, [r0, #8]\n    ldr r0, _02037610 ; =0x000006AB\n    strb r2, [r1, r0]\n    pop {r3, pc}\n    nop\n    _0203760C: .word _021D4140\n    _02037610: .word 0x000006AB\n    _02037614: .word 0x000006AC"
    );
    #endif
}

void sub_02037618(void) {
    /* Original at 0x02037618 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02037636\n    ldr r1, _02037638 ; =_021D4140\n    ldr r0, _0203763C ; =0x000006AB\n    ldr r2, [r1, #8]\n    mov r3, #1\n    strb r3, [r2, r0]\n    ldrb r2, [r4]\n    ldr r1, [r1, #8]\n    add r0, r0, #1\n    strb r2, [r1, r0]\n    pop {r4, pc}\n    _02037638: .word _021D4140\n    _0203763C: .word 0x000006AB"
    );
    #endif
}

void sub_02037640(void) {
    /* Original at 0x02037640 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0203765E\n    ldr r1, _02037660 ; =_021D4140\n    ldrb r3, [r4]\n    ldr r2, [r1, #8]\n    ldr r0, _02037664 ; =0x000006AC\n    strb r3, [r2, r0]\n    ldr r1, [r1, #8]\n    mov r2, #3\n    sub r0, r0, #1\n    strb r2, [r1, r0]\n    pop {r4, pc}\n    _02037660: .word _021D4140\n    _02037664: .word 0x000006AC"
    );
    #endif
}

void sub_02037668(void) {
    /* Original at 0x02037668 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02037690\n    ldr r0, _02037694 ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02037698 ; =0x000006AB\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _02037690\n    ldrb r0, [r4]\n    bl sub_02035FA8\n    ldr r0, _02037694 ; =_021D4140\n    mov r2, #0\n    ldr r1, [r0, #8]\n    ldr r0, _02037698 ; =0x000006AB\n    strb r2, [r1, r0]\n    pop {r4, pc}\n    nop\n    _02037694: .word _021D4140\n    _02037698: .word 0x000006AB"
    );
    #endif
}

void sub_0203769C(void) {
    /* Original at 0x0203769C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020376D0 ; =_021D4140\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _020376CA\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _020376C4\n    bl ov00_021E6964\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _020376CA\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    pop {r3, pc}\n    bl sub_020338F4\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _020376D0: .word _021D4140"
    );
    #endif
}

void sub_020376D4(void) {
    sub_02036FD8();
}

void sub_020376E0(void) {
    sub_02037030();
}

void sub_020376EC(void) {
    sub_02037030();
}

void sub_020376F8(void) {
    sub_0203567C();
}

void sub_02037700(void) {
    /* Original at 0x02037700 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02037724 ; =_021D4140\n    ldr r1, [r0, #8]\n    cmp r1, #0\n    beq _0203771E\n    ldr r0, _02037728 ; =0x000006B8\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _0203771E\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    mov r0, #1\n    pop {r3, pc}\n    bl sub_0203569C\n    pop {r3, pc}\n    _02037724: .word _021D4140\n    _02037728: .word 0x000006B8"
    );
    #endif
}

void sub_0203772C(void) {
    /* Original at 0x0203772C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02033FC4\n    cmp r0, #5\n    blo _0203773A\n    mov r0, #0xc\n    pop {r3, pc}\n    bl sub_02035FF0\n    cmp r0, #0\n    bne _02037746\n    mov r0, #0xc\n    pop {r3, pc}\n    mov r0, #0x26\n    pop {r3, pc}"
    );
    #endif
}

void sub_0203774C(void) {
    sub_02033FC4();
}

void sub_0203775C(void) {
    sub_02033FF0();
}

void sub_0203776C(void) {
    /* Original at 0x0203776C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_020357FC\n    cmp r0, #0\n    bne _02037786\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02037786\n    mov r0, #2\n    add r1, sp, #0\n    bl sub_02037184\n    bl sub_0203581C\n    pop {r3, pc}"
    );
    #endif
}

void sub_0203778C(void) {
    /* Original at 0x0203778C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r4, r0, #0\n    add r0, sp, #0x10\n    add r1, sp, #4\n    bl GF_RTC_CopyDateTime\n    ldr r0, _02037810 ; =gSystem\n    ldr r6, [sp, #0x10]\n    mov r5, #0\n    lsr r7, r6, #0x1c\n    lsl r5, r5, #4\n    ldr r1, [sp, #0xc]\n    ldr r0, [r0, #0x2c]\n    lsl r6, r6, #4\n    add r3, r1, r0\n    ldr r0, [sp, #0x18]\n    orr r5, r7\n    str r0, [sp]\n    ldr r0, [sp, #0x14]\n    ldr r1, [sp, #4]\n    add r6, r0, r6\n    ldr r0, _02037814 ; =0x00000000\n    ldr r2, [sp, #8]\n    adc r0, r5\n    lsr r5, r6, #0x1b\n    lsl r0, r0, #5\n    orr r0, r5\n    ldr r5, [sp]\n    lsl r6, r6, #5\n    add r6, r5, r6\n    ldr r5, _02037814 ; =0x00000000\n    adc r5, r0\n    lsr r0, r6, #0x1b\n    lsl r5, r5, #5\n    orr r5, r0\n    lsl r0, r6, #5\n    add r6, r1, r0\n    ldr r1, _02037814 ; =0x00000000\n    adc r1, r5\n    lsr r0, r6, #0x1a\n    lsl r1, r1, #6\n    orr r1, r0\n    lsl r0, r6, #6\n    add r5, r2, r0\n    ldr r2, _02037814 ; =0x00000000\n    adc r2, r1\n    lsr r0, r5, #0x1a\n    lsl r1, r2, #6\n    orr r1, r0\n    lsl r0, r5, #6\n    add r2, r3, r0\n    ldr r0, _02037814 ; =0x00000000\n    str r2, [r4]\n    adc r0, r1\n    str r0, [r4, #4]\n    ldr r1, _02037818 ; =0x6C078965\n    ldr r0, _0203781C ; =0x5D588B65\n    str r1, [r4, #8]\n    str r0, [r4, #0xc]\n    ldr r0, _02037820 ; =0x00269EC3\n    str r0, [r4, #0x10]\n    mov r0, #0\n    str r0, [r4, #0x14]\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02037810: .word gSystem\n    _02037814: .word 0x00000000\n    _02037818: .word 0x6C078965\n    _0203781C: .word 0x5D588B65\n    _02037820: .word 0x00269EC3"
    );
    #endif
}

void sub_02037824(void) {
    /* Original at 0x02037824 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _02037834 ; =_021D4140\n    ldr r3, _02037838 ; =sub_02033F9C\n    ldr r2, [r0, #8]\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    add r0, r2, r0\n    bx r3\n    _02037834: .word _021D4140\n    _02037838: .word sub_02033F9C"
    );
    #endif
}

void sub_0203783C(void) {
    /* Original at 0x0203783C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0203784C ; =_021D4140\n    ldr r3, _02037850 ; =sub_02033C50\n    ldr r1, [r0, #8]\n    mov r0, #0x5a\n    lsl r0, r0, #4\n    add r0, r1, r0\n    bx r3\n    nop\n    _0203784C: .word _021D4140\n    _02037850: .word sub_02033C50"
    );
    #endif
}

void sub_02037854(void) {
    /* Original at 0x02037854 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037864 ; =_021D4140\n    ldr r3, _02037868 ; =sub_02033C50\n    ldr r1, [r0, #8]\n    mov r0, #0x16\n    lsl r0, r0, #6\n    add r0, r1, r0\n    bx r3\n    nop\n    _02037864: .word _021D4140\n    _02037868: .word sub_02033C50"
    );
    #endif
}

void sub_0203786C(void) {
    /* Original at 0x0203786C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02037878 ; =_021D4140\n    ldr r2, [r1, #8]\n    ldr r1, _0203787C ; =0x000006B6\n    strb r0, [r2, r1]\n    bx lr\n    nop\n    _02037878: .word _021D4140\n    _0203787C: .word 0x000006B6"
    );
    #endif
}

void sub_02037880(void) {
    /* Original at 0x02037880 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0203788C ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02037890 ; =0x000006B6\n    ldrb r0, [r1, r0]\n    bx lr\n    nop\n    _0203788C: .word _021D4140\n    _02037890: .word 0x000006B6"
    );
    #endif
}

void sub_02037894(void) {
    /* Original at 0x02037894 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _020378A4 ; =_021D4140\n    ldr r2, [r2, #8]\n    cmp r2, #0\n    beq _020378A2\n    add r2, r2, r1\n    ldr r1, _020378A8 ; =0x000006A6\n    strb r0, [r2, r1]\n    bx lr\n    _020378A4: .word _021D4140\n    _020378A8: .word 0x000006A6"
    );
    #endif
}

void sub_020378AC(void) {
    /* Original at 0x020378AC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020378C4 ; =_021D4140\n    ldr r1, [r1, #8]\n    cmp r1, #0\n    beq _020378C0\n    add r2, r1, r0\n    ldr r1, _020378C8 ; =0x000006A6\n    ldrb r1, [r2, r1]\n    cmp r1, #0xff\n    beq _020378C0\n    add r0, r1, #0\n    bx lr\n    nop\n    _020378C4: .word _021D4140\n    _020378C8: .word 0x000006A6"
    );
    #endif
}

void sub_020378CC(void) {
    /* Original at 0x020378CC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _020378E0\n    bl ov00_021E7080\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_020378E4(void) {
    /* Original at 0x020378E4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _02037922\n    ldr r2, _02037924 ; =_021D4140\n    ldr r1, _02037928 ; =0x00000664\n    ldr r3, [r2, #8]\n    ldr r0, [r3, r1]\n    cmp r0, r4\n    beq _02037922\n    str r4, [r3, r1]\n    cmp r4, #0\n    beq _02037922\n    ldr r3, [r2, #8]\n    mov r0, #0\n    add r1, r1, #4\n    str r0, [r3, r1]\n    ldr r1, _0203792C ; =0x0000066C\n    add r5, r0, #0\n    add r4, r0, #0\n    ldr r3, [r2, #8]\n    add r0, r0, #1\n    add r3, r3, r5\n    add r5, r5, #4\n    str r4, [r3, r1]\n    cmp r0, #8\n    blt _02037914\n    pop {r3, r4, r5, pc}\n    _02037924: .word _021D4140\n    _02037928: .word 0x00000664\n    _0203792C: .word 0x0000066C"
    );
    #endif
}

void sub_02037930(void) {
    /* Original at 0x02037930 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_020378E4\n    bl sub_0203993C\n    bl sub_02034044\n    cmp r0, #0\n    beq _02037956\n    cmp r4, #0\n    beq _02037950\n    mov r0, #0\n    bl ov00_021E70CC\n    pop {r4, pc}\n    mov r0, #1\n    bl ov00_021E70CC\n    pop {r4, pc}"
    );
    #endif
}

void sub_02037958(void) {
    /* Original at 0x02037958 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0203796C ; =_021D4140\n    ldr r1, [r0, #8]\n    ldr r0, _02037970 ; =0x000006B1\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _02037968\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0203796C: .word _021D4140\n    _02037970: .word 0x000006B1"
    );
    #endif
}

void sub_02037974(void) {
    /* Original at 0x02037974 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037980 ; =_021D4140\n    mov r2, #1\n    ldr r1, [r0, #8]\n    ldr r0, _02037984 ; =0x000006B8\n    strb r2, [r1, r0]\n    bx lr\n    _02037980: .word _021D4140\n    _02037984: .word 0x000006B8"
    );
    #endif
}

void sub_02037988(void) {
    /* Original at 0x02037988 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037998 ; =_021D4140\n    ldr r2, [r0, #8]\n    cmp r2, #0\n    beq _02037996\n    ldr r0, _0203799C ; =0x000006B9\n    mov r1, #1\n    strb r1, [r2, r0]\n    bx lr\n    _02037998: .word _021D4140\n    _0203799C: .word 0x000006B9"
    );
    #endif
}
