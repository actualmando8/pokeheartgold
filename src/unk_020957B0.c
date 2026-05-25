/* Decompiled from asm/unk_020957B0.s */
#include "global.h"

void sub_020957B0(void) {
    /* Original at 0x020957B0 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r5, sp, #0x10
    mov r4, #0x10
    ldrsb r4, [r5, r4]
    add r7, r0, #0
    add r6, r1, #0
    str r4, [sp]
    bl sub_02095BF0
    str r0, [sp, #4]
    cmp r0, #4
    bhi _02095834
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _020957D6: ; jump table
    mov r0, #1
    ldrsb r1, [r6, r0]
    add r0, sp, #4
    add r2, sp, #4
    strb r1, [r0, #4]
    add r0, r7, #0
    mov r1, #3
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    mov r0, #1
    ldrsb r1, [r6, r0]
    add r0, sp, #4
    add r2, sp, #4
    strb r1, [r0, #4]
    add r0, r7, #0
    mov r1, #3
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    mov r0, #0
    ldrsb r1, [r6, r0]
    add r0, sp, #4
    add r2, sp, #4
    strb r1, [r0, #4]
    add r0, r7, #0
    mov r1, #5
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    mov r0, #0
    ldrsb r1, [r6, r0]
    add r0, sp, #4
    add r2, sp, #4
    strb r1, [r0, #4]
    add r0, r7, #0
    mov r1, #5
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095838(void) {
    /* Original at 0x02095838 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}
    ldr r0, [r3]
    cmp r0, #4
    bhi _020958BA
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _0209584C: ; jump table
    mov r0, #2
    strb r0, [r1]
    mov r0, #0
    strb r0, [r1, #1]
    ldrsb r4, [r1, r0]
    mov r0, #1
    ldrsb r3, [r1, r0]
    ldrb r0, [r2]
    mul r0, r3
    add r0, r4, r0
    strb r0, [r1, #2]
    pop {r3, r4}
    bx lr
    mov r0, #2
    strb r0, [r1]
    mov r0, #4
    strb r0, [r1, #1]
    mov r0, #0
    ldrsb r4, [r1, r0]
    mov r0, #1
    ldrsb r3, [r1, r0]
    ldrb r0, [r2]
    mul r0, r3
    add r0, r4, r0
    strb r0, [r1, #2]
    pop {r3, r4}
    bx lr
    mov r0, #5
    strb r0, [r1]
    ldrb r0, [r3, #4]
    strb r0, [r1, #1]
    mov r0, #0
    ldrsb r4, [r1, r0]
    mov r0, #1
    ldrsb r3, [r1, r0]
    ldrb r0, [r2]
    mul r0, r3
    add r0, r4, r0
    strb r0, [r1, #2]
    pop {r3, r4}
    bx lr
    mov r0, #0
    strb r0, [r1]
    ldrb r0, [r3, #4]
    strb r0, [r1, #1]
    mov r0, #1
    ldrsb r3, [r1, r0]
    ldrb r0, [r2]
    mul r0, r3
    strb r0, [r1, #2]
    pop {r3, r4}
    bx lr"
    );
    #endif
}

void sub_020958C0(void) {
    /* Original at 0x020958C0 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r6, sp, #0x10
    mov r5, #0x10
    ldrsb r5, [r6, r5]
    add r4, r0, #0
    add r7, r1, #0
    str r5, [sp]
    bl sub_02095BF0
    mov r2, #0
    str r0, [sp, #4]
    ldrsb r3, [r7, r2]
    add r1, sp, #4
    cmp r0, #1
    strb r3, [r1, #4]
    beq _020958F6
    cmp r0, #3
    bne _0209591C
    strb r2, [r1, #4]
    add r0, r4, #0
    mov r1, #3
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    ldr r0, [r4, #4]
    ldrb r0, [r0]
    cmp r0, #0x12
    bne _0209590E
    strb r2, [r1, #4]
    add r0, r4, #0
    mov r1, #6
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    mov r0, #4
    strb r0, [r1, #4]
    add r0, r4, #0
    mov r1, #2
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095920(void) {
    /* Original at 0x02095920 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0
    strb r0, [r1]
    strb r0, [r1, #1]
    strb r0, [r1, #2]
    bx lr"
    );
    #endif
}

void sub_0209592C(void) {
    /* Original at 0x0209592C */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r6, sp, #0x10
    mov r5, #0x10
    ldrsb r5, [r6, r5]
    add r4, r0, #0
    add r7, r1, #0
    str r5, [sp]
    bl sub_02095BF0
    str r0, [sp, #4]
    mov r1, #1
    ldrsb r1, [r7, r1]
    cmp r1, #0
    bne _02095952
    mov r2, #0
    add r1, sp, #4
    strb r2, [r1, #4]
    b _02095962
    cmp r1, #1
    add r1, sp, #4
    bne _0209595E
    mov r2, #2
    strb r2, [r1, #4]
    b _02095962
    mov r2, #3
    strb r2, [r1, #4]
    cmp r0, #1
    beq _02095972
    cmp r0, #2
    beq _0209599A
    cmp r0, #4
    beq _020959C2
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    ldr r0, [r4, #4]
    add r2, sp, #4
    ldrb r0, [r0]
    cmp r0, #0x12
    bne _0209598E
    mov r1, #0
    add r0, sp, #4
    strb r1, [r0, #4]
    add r0, r4, #0
    mov r1, #6
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    add r0, r4, #0
    mov r1, #2
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    ldr r0, [r4, #4]
    add r2, sp, #4
    ldrb r0, [r0]
    cmp r0, #0x12
    bne _020959B6
    mov r1, #0
    add r0, sp, #4
    strb r1, [r0, #4]
    add r0, r4, #0
    mov r1, #6
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    add r0, r4, #0
    mov r1, #2
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    ldrb r0, [r4, #2]
    cmp r0, #0
    beq _020959D2
    add r0, r4, #0
    mov r1, #1
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020959D8(void) {
    /* Original at 0x020959D8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    ldr r0, [r3]
    add r5, r1, #0
    add r4, r2, #0
    cmp r0, #1
    beq _02095A12
    cmp r0, #2
    beq _02095A12
    cmp r0, #3
    bne _02095A32
    ldrb r6, [r4]
    ldrb r0, [r4, #2]
    add r1, r6, #0
    sub r0, r0, #1
    bl _s32_div_f
    mul r0, r6
    strb r0, [r5, #2]
    ldrb r0, [r5, #2]
    ldrb r1, [r4]
    bl _s32_div_f
    strb r1, [r5]
    ldrb r0, [r5, #2]
    ldrb r1, [r4]
    bl _s32_div_f
    strb r0, [r5, #1]
    pop {r4, r5, r6, pc}
    ldrb r0, [r3, #4]
    cmp r0, #2
    bhs _02095A1E
    mov r0, #0
    strb r0, [r5, #2]
    b _02095A2A
    bls _02095A26
    mov r0, #2
    strb r0, [r5, #2]
    b _02095A2A
    mov r0, #1
    strb r0, [r5, #2]
    mov r0, #0
    strb r0, [r5]
    ldrb r0, [r5, #2]
    strb r0, [r5, #1]
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02095A34(void) {
    /* Original at 0x02095A34 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}
    sub sp, #0xc
    add r6, sp, #0x10
    mov r5, #0x10
    ldrsb r5, [r6, r5]
    add r4, r0, #0
    str r5, [sp]
    bl sub_02095BF0
    mov r2, #0
    str r0, [sp, #4]
    add r1, sp, #4
    strb r2, [r1, #4]
    cmp r0, #3
    beq _02095A5A
    cmp r0, #4
    beq _02095A68
    add sp, #0xc
    pop {r3, r4, r5, r6, pc}
    add r0, r4, #0
    mov r1, #4
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r3, r4, r5, r6, pc}
    add r0, r4, #0
    mov r1, #4
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_02095A78(void) {
    /* Original at 0x02095A78 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02095A7C(void) {
    /* Original at 0x02095A7C */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r5, sp, #0x10
    mov r4, #0x10
    ldrsb r4, [r5, r4]
    add r6, r0, #0
    add r7, r1, #0
    str r4, [sp]
    bl sub_02095BF0
    mov r1, #0
    str r0, [sp, #4]
    ldrsb r2, [r7, r1]
    add r1, sp, #4
    cmp r0, #4
    strb r2, [r1, #4]
    bhi _02095AF4
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _02095AAA: ; jump table
    ldr r0, [r6, #4]
    add r2, sp, #4
    ldrb r0, [r0]
    cmp r0, #0x12
    bne _02095ACA
    add r0, r6, #0
    mov r1, #6
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    add r0, r6, #0
    mov r1, #2
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    ldr r0, [r6, #4]
    add r2, sp, #4
    ldrb r0, [r0]
    cmp r0, #0x12
    bne _02095AEC
    add r0, r6, #0
    mov r1, #6
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    add r0, r6, #0
    mov r1, #2
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095AF8(void) {
    /* Original at 0x02095AF8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0
    strb r0, [r1]
    strb r0, [r1, #1]
    strb r0, [r1, #2]
    bx lr"
    );
    #endif
}

void sub_02095B04(void) {
    /* Original at 0x02095B04 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r5, sp, #0x10
    mov r4, #0x10
    ldrsb r4, [r5, r4]
    add r7, r0, #0
    add r6, r1, #0
    str r4, [sp]
    bl sub_02095BF0
    mov r1, #0
    str r0, [sp, #4]
    ldrsb r3, [r6, r1]
    add r2, sp, #4
    cmp r0, #4
    strb r3, [r2, #4]
    bhi _02095B84
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _02095B32: ; jump table
    mov r0, #1
    ldrsb r0, [r6, r0]
    mov r1, #3
    strb r0, [r2, #4]
    add r0, r7, #0
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    mov r0, #1
    ldrsb r0, [r6, r0]
    mov r1, #3
    strb r0, [r2, #4]
    add r0, r7, #0
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    ldrsb r0, [r6, r1]
    mov r1, #5
    strb r0, [r2, #4]
    add r0, r7, #0
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}
    ldrsb r0, [r6, r1]
    mov r1, #5
    strb r0, [r2, #4]
    add r0, r7, #0
    add r2, sp, #4
    bl sub_02095CB8
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095B88(void) {
    /* Original at 0x02095B88 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}
    ldr r0, [r3]
    cmp r0, #4
    bhi _02095BEA
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _02095B9C: ; jump table
    mov r0, #2
    strb r0, [r1]
    mov r0, #0
    strb r0, [r1, #1]
    ldrsb r4, [r1, r0]
    mov r0, #1
    ldrsb r3, [r1, r0]
    ldrb r0, [r2]
    mul r0, r3
    add r0, r4, r0
    strb r0, [r1, #2]
    pop {r3, r4}
    bx lr
    mov r0, #5
    strb r0, [r1]
    mov r0, #0
    strb r0, [r1, #1]
    ldrsb r4, [r1, r0]
    mov r0, #1
    ldrsb r3, [r1, r0]
    ldrb r0, [r2]
    mul r0, r3
    add r0, r4, r0
    strb r0, [r1, #2]
    pop {r3, r4}
    bx lr
    mov r0, #0
    strb r0, [r1]
    strb r0, [r1, #1]
    mov r0, #1
    ldrsb r3, [r1, r0]
    ldrb r0, [r2]
    mul r0, r3
    strb r0, [r1, #2]
    pop {r3, r4}
    bx lr"
    );
    #endif
}

void sub_02095BF0(void) {
    /* Original at 0x02095BF0 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}
    add r7, r2, #0
    ldrb r2, [r7, #1]
    add r4, r1, #0
    mov r0, #0
    ldrb r1, [r7]
    mov ip, r2
    cmp r3, #0
    beq _02095C3C
    ldrsb r2, [r4, r0]
    add r2, r2, r3
    lsl r2, r2, #0x18
    asr r5, r2, #0x18
    ldr r2, _02095C8C ; =FS_OVERLAY_ID(field)
    ldrsb r6, [r4, r2]
    bpl _02095C14
    add r0, r2, #0
    b _02095C2E
    cmp r5, r1
    blt _02095C1C
    mov r0, #2
    b _02095C2E
    add r2, r6, #0
    mul r2, r1
    add r2, r5, r2
    lsl r2, r2, #0x18
    lsr r3, r2, #0x18
    ldrb r2, [r7, #2]
    cmp r3, r2
    blo _02095C2E
    mov r0, #2
    cmp r0, #0
    bne _02095C86
    add r2, r6, #0
    mul r2, r1
    strb r5, [r4]
    add r2, r5, r2
    strb r2, [r4, #2]
    add r3, sp, #0
    mov r2, #0x10
    ldrsb r2, [r3, r2]
    cmp r2, #0
    beq _02095C84
    mov r5, #1
    ldrsb r5, [r4, r5]
    mov r3, #0
    ldrsb r3, [r4, r3]
    add r2, r5, r2
    lsl r2, r2, #0x18
    asr r2, r2, #0x18
    bpl _02095C5A
    mov r0, #3
    b _02095C76
    mov r5, ip
    cmp r2, r5
    blt _02095C64
    mov r0, #4
    b _02095C76
    add r5, r2, #0
    mul r5, r1
    add r5, r3, r5
    lsl r5, r5, #0x18
    lsr r6, r5, #0x18
    ldrb r5, [r7, #2]
    cmp r6, r5
    blo _02095C76
    mov r0, #4
    cmp r0, #0
    bne _02095C86
    add r0, r2, #0
    mul r0, r1
    strb r2, [r4, #1]
    add r0, r3, r0
    strb r0, [r4, #2]
    mov r0, #0
    pop {r4, r5, r6, r7}
    bx lr
    nop
    _02095C8C: .word FS_OVERLAY_ID(field)"
    );
    #endif
}

void sub_02095C90(void) {
    /* Original at 0x02095C90 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}
    ldrb r5, [r0, #1]
    mov r3, #0
    cmp r5, #0
    ble _02095CB2
    ldr r4, [r0, #8]
    ldr r2, [r4]
    ldrb r2, [r2, #3]
    cmp r1, r2
    bne _02095CAA
    strb r3, [r0]
    pop {r4, r5}
    bx lr
    add r3, r3, #1
    add r4, #0xc
    cmp r3, r5
    blt _02095C9C
    pop {r4, r5}
    bx lr"
    );
    #endif
}

void sub_02095CB8(void) {
    /* Original at 0x02095CB8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}
    add r4, r0, #0
    add r7, r2, #0
    bl sub_02095C90
    ldrb r1, [r4]
    mov r0, #0xc
    ldr r5, [r4, #8]
    add r6, r1, #0
    mul r6, r0
    ldr r2, [r4, #0xc]
    add r0, r4, #0
    lsl r1, r1, #2
    add r4, r5, r6
    add r1, r2, r1
    ldr r2, [r5, r6]
    ldr r4, [r4, #8]
    add r3, r7, #0
    blx r4
    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095CE0(void) {
    /* Original at 0x02095CE0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r5, r1, #0
    mov r1, #0x10
    add r6, r0, #0
    bl Heap_Alloc
    add r4, r0, #0
    add r2, r4, #0
    mov r1, #0x10
    mov r0, #0
    strb r0, [r2]
    add r2, r2, #1
    sub r1, r1, #1
    bne _02095CF4
    mov r0, #6
    strb r0, [r4, #1]
    ldrb r1, [r4, #1]
    add r0, r6, #0
    lsl r1, r1, #2
    bl Heap_Alloc
    str r0, [r4, #0xc]
    ldrb r2, [r4, #1]
    mov r1, #0
    lsl r2, r2, #2
    bl memset
    str r5, [r4, #4]
    add r0, r4, #0
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02095D1C(void) {
    /* Original at 0x02095D1C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0
    strb r2, [r0]
    ldr r2, _02095D28 ; =_02108434
    str r2, [r0, #8]
    strb r1, [r0, #2]
    bx lr
    _02095D28: .word _02108434"
    );
    #endif
}

void sub_02095D2C(void) {
    /* Original at 0x02095D2C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, [r4, #0xc]
    bl Heap_Free
    add r0, r4, #0
    bl Heap_Free
    pop {r4, pc}"
    );
    #endif
}

void sub_02095D40(void) {
    /* Original at 0x02095D40 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r5, r0, #0
    add r6, r2, #0
    bl sub_02095C90
    ldrb r0, [r5]
    ldr r2, [r5, #0xc]
    lsl r1, r0, #2
    add r4, r2, r1
    mov r1, #0xc
    ldr r2, [r5, #8]
    mul r1, r0
    ldr r5, [r2, r1]
    ldrb r0, [r5, #2]
    cmp r6, r0
    blo _02095D64
    bl GF_AssertFail
    strb r6, [r4, #2]
    ldrb r1, [r4, #2]
    ldrb r0, [r5, #2]
    cmp r1, r0
    blo _02095D72
    mov r0, #0
    strb r0, [r4, #2]
    ldrb r0, [r4, #2]
    ldrb r1, [r5]
    bl _s32_div_f
    strb r1, [r4]
    ldrb r0, [r4, #2]
    ldrb r1, [r5]
    bl _s32_div_f
    strb r0, [r4, #1]
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02095D88(void) {
    /* Original at 0x02095D88 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}
    sub sp, #0xc
    add r4, r0, #0
    str r2, [sp, #8]
    ldrb r7, [r4]
    ldr r2, [r4, #0xc]
    mov ip, r1
    lsl r1, r7, #2
    add r5, r2, r1
    mov r1, #0xc
    add r3, r7, #0
    mul r3, r1
    ldr r2, [r4, #8]
    ldrb r1, [r5, #2]
    add r6, r2, r3
    str r1, [sp, #4]
    ldr r1, [sp, #8]
    str r1, [sp]
    ldr r2, [r2, r3]
    ldr r6, [r6, #4]
    add r1, r5, #0
    mov r3, ip
    blx r6
    ldrb r0, [r4]
    cmp r7, r0
    beq _02095DC2
    add sp, #0xc
    mov r0, #1
    pop {r4, r5, r6, r7, pc}
    ldrb r1, [r5, #2]
    ldr r0, [sp, #4]
    cmp r0, r1
    beq _02095DD0
    add sp, #0xc
    mov r0, #1
    pop {r4, r5, r6, r7, pc}
    mov r0, #0
    add sp, #0xc
    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02095DD8(void) {
    /* Original at 0x02095DD8 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0]
    ldr r2, [r0, #8]
    mov r0, #0xc
    mul r0, r1
    ldr r0, [r2, r0]
    ldrb r0, [r0, #3]
    bx lr"
    );
    #endif
}

void sub_02095DE8(void) {
    /* Original at 0x02095DE8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0xc]
    ldrb r0, [r0]
    lsl r0, r0, #2
    add r0, r1, r0
    ldrb r0, [r0, #2]
    bx lr"
    );
    #endif
}
