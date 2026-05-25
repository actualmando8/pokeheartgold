/* Decompiled from asm/overlay_01_021EA6C4.s */
#include "global.h"

void ov01_021EA724(void) {
    /* Original at 0x021EA724 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    mov r0, #4
    mov r1, #8
    bl Heap_Alloc
    add r4, r0, #0
    bne _021EA736
    bl GF_AssertFail
    add r0, r4, #0
    pop {r4, pc}"
    );
    #endif
}

void ov01_021EA73C(void) {
    /* Original at 0x021EA73C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}
    sub sp, #0x4c
    add r4, r0, #0
    add r0, sp, #4
    add r5, r1, #0
    bl FS_InitFile
    add r0, sp, #4
    add r1, r4, #0
    bl FS_OpenFile
    cmp r0, #0
    beq _021EA7D8
    add r1, sp, #0
    add r0, sp, #4
    add r1, #2
    mov r2, #2
    bl FS_ReadFile
    cmp r0, #0
    bge _021EA76A
    bl GF_AssertFail
    add r0, sp, #4
    add r1, sp, #0
    mov r2, #2
    bl FS_ReadFile
    cmp r0, #0
    bge _021EA77C
    bl GF_AssertFail
    add r0, sp, #0
    ldrh r1, [r0, #2]
    ldrh r0, [r0]
    lsl r6, r1, #2
    lsl r4, r0, #2
    mov r0, #4
    add r1, r6, #0
    bl Heap_Alloc
    str r0, [r5]
    cmp r0, #0
    bne _021EA798
    bl GF_AssertFail
    mov r0, #4
    add r1, r4, #0
    bl Heap_Alloc
    str r0, [r5, #4]
    cmp r0, #0
    bne _021EA7AA
    bl GF_AssertFail
    ldr r1, [r5]
    add r0, sp, #4
    add r2, r6, #0
    bl FS_ReadFile
    cmp r0, #0
    bge _021EA7BC
    bl GF_AssertFail
    ldr r1, [r5, #4]
    add r0, sp, #4
    add r2, r4, #0
    bl FS_ReadFile
    cmp r0, #0
    bge _021EA7CE
    bl GF_AssertFail
    add r0, sp, #4
    bl FS_CloseFile
    add sp, #0x4c
    pop {r3, r4, r5, r6, pc}
    bl GF_AssertFail
    add sp, #0x4c
    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021EA7E0(void) {
    /* Original at 0x021EA7E0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, [r4, #4]
    bl Heap_Free
    ldr r0, [r4]
    bl Heap_Free
    add r0, r4, #0
    bl Heap_Free
    pop {r4, pc}"
    );
    #endif
}

void ov01_021EA7F8(void) {
    /* Original at 0x021EA7F8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r1]
    lsl r0, r0, #2
    ldrh r0, [r1, r0]
    strh r0, [r2]
    bx lr"
    );
    #endif
}

void ov01_021EA804(void) {
    /* Original at 0x021EA804 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}
    lsl r4, r0, #2
    ldr r0, [r1]
    ldrh r0, [r0, r4]
    strh r0, [r2]
    ldr r0, [r1]
    add r0, r0, r4
    ldrh r0, [r0, #2]
    strh r0, [r3]
    pop {r3, r4}
    bx lr"
    );
    #endif
}

void ov01_021EA81C(void) {
    /* Original at 0x021EA81C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r1, #4]
    lsl r0, r0, #2
    add r0, r1, r0
    bx lr"
    );
    #endif
}
