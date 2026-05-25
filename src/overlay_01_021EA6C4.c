/* Decompiled from asm/overlay_01_021EA6C4.s */
#include "global.h"

void ov01_021EA724(void) {
    /* Original at 0x021EA724 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #4\n    mov r1, #8\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _021EA736\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EA73C(void) {
    /* Original at 0x021EA73C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x4c\n    add r4, r0, #0\n    add r0, sp, #4\n    add r5, r1, #0\n    bl FS_InitFile\n    add r0, sp, #4\n    add r1, r4, #0\n    bl FS_OpenFile\n    cmp r0, #0\n    beq _021EA7D8\n    add r1, sp, #0\n    add r0, sp, #4\n    add r1, #2\n    mov r2, #2\n    bl FS_ReadFile\n    cmp r0, #0\n    bge _021EA76A\n    bl GF_AssertFail\n    add r0, sp, #4\n    add r1, sp, #0\n    mov r2, #2\n    bl FS_ReadFile\n    cmp r0, #0\n    bge _021EA77C\n    bl GF_AssertFail\n    add r0, sp, #0\n    ldrh r1, [r0, #2]\n    ldrh r0, [r0]\n    lsl r6, r1, #2\n    lsl r4, r0, #2\n    mov r0, #4\n    add r1, r6, #0\n    bl Heap_Alloc\n    str r0, [r5]\n    cmp r0, #0\n    bne _021EA798\n    bl GF_AssertFail\n    mov r0, #4\n    add r1, r4, #0\n    bl Heap_Alloc\n    str r0, [r5, #4]\n    cmp r0, #0\n    bne _021EA7AA\n    bl GF_AssertFail\n    ldr r1, [r5]\n    add r0, sp, #4\n    add r2, r6, #0\n    bl FS_ReadFile\n    cmp r0, #0\n    bge _021EA7BC\n    bl GF_AssertFail\n    ldr r1, [r5, #4]\n    add r0, sp, #4\n    add r2, r4, #0\n    bl FS_ReadFile\n    cmp r0, #0\n    bge _021EA7CE\n    bl GF_AssertFail\n    add r0, sp, #4\n    bl FS_CloseFile\n    add sp, #0x4c\n    pop {r3, r4, r5, r6, pc}\n    bl GF_AssertFail\n    add sp, #0x4c\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021EA7E0(void) {
    Heap_Free(*((u32*)(r0 + 4)));
    Heap_Free();
    Heap_Free(r4);
}

void ov01_021EA7F8(void) {
    /* Original at 0x021EA7F8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r1]\n    lsl r0, r0, #2\n    ldrh r0, [r1, r0]\n    strh r0, [r2]\n    bx lr"
    );
    #endif
}

void ov01_021EA804(void) {
    /* Original at 0x021EA804 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    lsl r4, r0, #2\n    ldr r0, [r1]\n    ldrh r0, [r0, r4]\n    strh r0, [r2]\n    ldr r0, [r1]\n    add r0, r0, r4\n    ldrh r0, [r0, #2]\n    strh r0, [r3]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_021EA81C(void) {
    /* Original at 0x021EA81C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r1, #4]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    bx lr"
    );
    #endif
}
