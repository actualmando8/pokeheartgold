/* Decompiled from asm/overlay_00_thumb.s */
#include "global.h"

void ov00_021E5900(void) {
    /* Original at 0x021E5900 */
    /* Requires manual decompilation - 223 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp, #4]\n    ldr r0, _021E5AC4 ; =_0221A680\n    add r5, r1, #0\n    ldr r0, [r0]\n    add r4, r2, #0\n    str r3, [sp]\n    cmp r0, #0\n    beq _021E5918\n    bl GF_AssertFail\n    ldr r1, _021E5AC8 ; =0x00001108\n    add r0, r5, #0\n    bl Heap_Alloc\n    ldr r2, _021E5AC8 ; =0x00001108\n    add r6, r0, #0\n    mov r1, #0\n    bl MI_CpuFill8\n    add r2, r6, #0\n    add r2, #0x1f\n    mov r0, #0x1f\n    bic r2, r0\n    ldr r1, _021E5AC4 ; =_0221A680\n    ldr r0, _021E5ACC ; =0x00000F7C\n    str r2, [r1]\n    str r6, [r2, r0]\n    ldr r6, [r1]\n    ldr r2, [sp, #4]\n    sub r3, r0, #4\n    str r2, [r6, r3]\n    add r3, r0, #0\n    ldr r6, [r1]\n    mov r2, #0\n    add r3, #0x28\n    str r2, [r6, r3]\n    add r3, r0, #0\n    ldr r6, [r1]\n    add r3, #0x2c\n    str r2, [r6, r3]\n    add r3, r0, #0\n    ldr r6, [r1]\n    add r3, #0x44\n    str r2, [r6, r3]\n    ldr r3, [r1]\n    add r0, #0xf4\n    str r2, [r3, r0]\n    ldr r0, [r1]\n    ldr r2, _021E5AD0 ; =0x00001084\n    str r5, [r0, r2]\n    add r0, r2, #4\n    ldr r3, [r1]\n    add r2, #8\n    str r5, [r3, r0]\n    ldr r0, [r1]\n    ldr r1, _021E5AD4 ; =0x00003020\n    str r4, [r0, r2]\n    add r0, r5, #0\n    add r1, r4, r1\n    bl Heap_Alloc\n    ldr r3, _021E5AC4 ; =_0221A680\n    mov r1, #0xf9\n    ldr r2, [r3]\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    add r0, r1, #0\n    ldr r5, [r3]\n    mov r2, #0\n    add r0, #8\n    str r2, [r5, r0]\n    ldr r0, [r3]\n    ldr r0, [r0, r1]\n    mov r1, #0x1f\n    add r0, #0x1f\n    bic r0, r1\n    add r1, r4, #0\n    bl NNS_FndCreateExpHeapEx\n    ldr r4, _021E5AC4 ; =_0221A680\n    mov r6, #0\n    ldr r2, [r4]\n    ldr r1, _021E5AD8 ; =0x00000F94\n    sub r7, r6, #1\n    str r0, [r2, r1]\n    add r0, r1, #0\n    ldr r2, [r4]\n    add r0, #8\n    str r6, [r2, r0]\n    ldr r0, [r4]\n    ldr r2, _021E5ADC ; =0x000010A4\n    str r6, [r0, r2]\n    add r0, r2, #0\n    ldr r3, [r4]\n    sub r0, #0x10\n    str r7, [r3, r0]\n    add r0, r2, #0\n    ldr r3, [r4]\n    sub r0, #0x38\n    str r6, [r3, r0]\n    add r3, r2, #0\n    ldr r5, [r4]\n    ldr r0, [sp]\n    sub r3, #0x28\n    str r0, [r5, r3]\n    add r0, r2, #0\n    ldr r3, [r4]\n    sub r0, #0x24\n    str r6, [r3, r0]\n    add r0, r2, #0\n    ldr r3, [r4]\n    add r0, #0x34\n    str r6, [r3, r0]\n    add r0, r2, #0\n    ldr r3, [r4]\n    sub r0, #0xc\n    str r7, [r3, r0]\n    add r3, r2, #0\n    ldr r5, [r4]\n    mov r0, #1\n    sub r3, #8\n    str r0, [r5, r3]\n    add r3, r2, #0\n    ldr r5, [r4]\n    add r3, #0x3a\n    strb r6, [r5, r3]\n    add r3, r2, #0\n    ldr r5, [r4]\n    add r3, #0x28\n    str r6, [r5, r3]\n    add r3, r2, #0\n    ldr r5, [r4]\n    add r3, #0x38\n    strb r6, [r5, r3]\n    add r3, r2, #0\n    ldr r5, [r4]\n    add r3, #0x39\n    strb r6, [r5, r3]\n    add r3, r2, #0\n    ldr r5, [r4]\n    add r3, #0x30\n    strh r0, [r5, r3]\n    add r3, r2, #0\n    ldr r5, [r4]\n    add r3, #0x2c\n    str r0, [r5, r3]\n    ldr r3, [r4]\n    add r2, #0x32\n    strh r0, [r3, r2]\n    ldr r0, [sp, #4]\n    cmp r0, #0\n    beq _021E5A66\n    ldr r0, [r4]\n    sub r1, #0x1c\n    ldr r0, [r0, r1]\n    bl sub_0202C6F4\n    bl sub_0202C08C\n    add r2, r4, #0\n    mov r1, #0xf1\n    ldr r3, [r2]\n    lsl r1, r1, #4\n    str r0, [r3, r1]\n    ldr r0, [r2]\n    add r1, #0x68\n    ldr r0, [r0, r1]\n    bl sub_0202C6F4\n    add r1, r6, #0\n    bl sub_0202C23C\n    add r1, r4, #0\n    ldr r2, [r1]\n    mov r1, #1\n    lsl r1, r1, #8\n    str r0, [r2, r1]\n    ldr r2, _021E5AC4 ; =_0221A680\n    ldr r1, _021E5AE0 ; =0x000010E5\n    ldr r0, [r2]\n    mov r3, #1\n    strb r3, [r0, r1]\n    mov r0, #0\n    ldr r3, [r2]\n    sub r1, #0x81\n    str r0, [r3, r1]\n    ldr r1, _021E5AE4 ; =0x00001044\n    add r4, r0, #0\n    ldr r3, [r2]\n    add r3, r3, r0\n    add r0, r0, #1\n    strb r4, [r3, r1]\n    cmp r0, #0x20\n    blt _021E5A7C\n    bl ov00_021E700C\n    ldr r0, _021E5AC4 ; =_0221A680\n    ldr r1, [r0]\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl DWC_CheckHasProfile\n    cmp r0, #0\n    bne _021E5AA4\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E5AC4 ; =_0221A680\n    ldr r1, [r0]\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl DWC_CheckValidConsole\n    cmp r0, #0\n    beq _021E5ABC\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E5AC4: .word _0221A680\n    _021E5AC8: .word 0x00001108\n    _021E5ACC: .word 0x00000F7C\n    _021E5AD0: .word 0x00001084\n    _021E5AD4: .word 0x00003020\n    _021E5AD8: .word 0x00000F94\n    _021E5ADC: .word 0x000010A4\n    _021E5AE0: .word 0x000010E5\n    _021E5AE4: .word 0x00001044"
    );
    #endif
}

void ov00_021E5AE8(void) {
    /* Original at 0x021E5AE8 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E5B58 ; =_0221A680\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _021E5B52\n    bl ov00_021E7300\n    ldr r0, _021E5B58 ; =_0221A680\n    ldr r2, [r0]\n    ldr r0, _021E5B5C ; =0x00000F98\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    beq _021E5B20\n    add r0, r0, #4\n    ldr r0, [r2, r0]\n    bl NNS_FndDestroyExpHeap\n    ldr r0, _021E5B58 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E5B5C ; =0x00000F98\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, _021E5B58 ; =_0221A680\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _021E5B5C ; =0x00000F98\n    str r2, [r1, r0]\n    ldr r0, _021E5B58 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E5B60 ; =0x00000F94\n    ldr r0, [r1, r0]\n    bl NNS_FndDestroyExpHeap\n    ldr r0, _021E5B58 ; =_0221A680\n    ldr r1, _021E5B64 ; =0x00001084\n    ldr r2, [r0]\n    ldr r0, [r2, r1]\n    sub r1, #0xf4\n    ldr r1, [r2, r1]\n    bl Heap_FreeExplicit\n    ldr r0, _021E5B58 ; =_0221A680\n    ldr r1, _021E5B68 ; =0x00000F7C\n    ldr r2, [r0]\n    ldr r0, _021E5B64 ; =0x00001084\n    ldr r1, [r2, r1]\n    ldr r0, [r2, r0]\n    bl Heap_FreeExplicit\n    ldr r0, _021E5B58 ; =_0221A680\n    mov r1, #0\n    str r1, [r0]\n    bl ov00_021EC210\n    pop {r3, pc}\n    _021E5B58: .word _0221A680\n    _021E5B5C: .word 0x00000F98\n    _021E5B60: .word 0x00000F94\n    _021E5B64: .word 0x00001084\n    _021E5B68: .word 0x00000F7C"
    );
    #endif
}

void ov00_021E5B6C(void) {
    /* Original at 0x021E5B6C */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x68\n    ldr r0, _021E5C60 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E5C64 ; =0x00001070\n    ldr r0, [r1, r0]\n    cmp r0, #4\n    bhi _021E5C56\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E5B88: ; jump table\n    ldr r0, _021E5C68 ; =ov00_021E65D4\n    ldr r1, _021E5C6C ; =ov00_021E6638\n    bl ov00_021EC294\n    ldr r0, _021E5C60 ; =_0221A680\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _021E5C70 ; =0x00000F14\n    mov r3, #0x14\n    add r0, r1, r0\n    mov r1, #2\n    bl ov00_021EC3F0\n    mov r0, #2\n    bl ov00_021EC454\n    bl ov00_021EC4A4\n    ldr r1, _021E5C60 ; =_0221A680\n    ldr r0, _021E5C64 ; =0x00001070\n    ldr r2, [r1]\n    mov r3, #1\n    str r3, [r2, r0]\n    ldr r1, [r1]\n    mov r2, #0\n    add r0, #0x20\n    str r2, [r1, r0]\n    bl ov00_021EC5B4\n    cmp r0, #0\n    beq _021E5BF0\n    bl ov00_021EC724\n    cmp r0, #4\n    bne _021E5BE4\n    ldr r0, _021E5C60 ; =_0221A680\n    mov r2, #2\n    ldr r1, [r0]\n    ldr r0, _021E5C64 ; =0x00001070\n    str r2, [r1, r0]\n    b _021E5BF6\n    ldr r0, _021E5C60 ; =_0221A680\n    mov r2, #0xc\n    ldr r1, [r0]\n    ldr r0, _021E5C64 ; =0x00001070\n    str r2, [r1, r0]\n    b _021E5BF6\n    bl ov00_021EC60C\n    b _021E5C56\n    bl ov00_021E6690\n    cmp r0, #0\n    bne _021E5C5A\n    ldr r0, _021E5C60 ; =_0221A680\n    mov r2, #0xf1\n    ldr r1, [r0]\n    ldr r0, _021E5C74 ; =_0221640C\n    lsl r2, r2, #4\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r0, [r1, r0]\n    ldr r3, _021E5C78 ; =_02216400\n    str r0, [sp, #0xc]\n    mov r0, #0x20\n    str r0, [sp, #0x10]\n    add r0, #0xe4\n    add r0, r1, r0\n    ldr r1, [r1, r2]\n    ldr r2, _021E5C7C ; =0x000029E7\n    bl ov00_021ED730\n    add r0, sp, #0x14\n    bl OS_GetOwnerInfo\n    mov r1, #0\n    ldr r2, _021E5C80 ; =ov00_021E61A8\n    add r0, sp, #0x18\n    add r3, r1, #0\n    bl ov00_021EDD6C\n    ldr r0, _021E5C60 ; =_0221A680\n    mov r2, #3\n    ldr r1, [r0]\n    ldr r0, _021E5C64 ; =0x00001070\n    str r2, [r1, r0]\n    bl ov00_021EDB1C\n    b _021E5C56\n    bl ov00_021EDB1C\n    add sp, #0x68\n    mov r0, #0x1b\n    pop {r3, pc}\n    bl ov00_021E6690\n    add sp, #0x68\n    pop {r3, pc}\n    nop\n    _021E5C60: .word _0221A680\n    _021E5C64: .word 0x00001070\n    _021E5C68: .word ov00_021E65D4\n    _021E5C6C: .word ov00_021E6638\n    _021E5C70: .word 0x00000F14\n    _021E5C74: .word _0221640C\n    _021E5C78: .word _02216400\n    _021E5C7C: .word 0x000029E7\n    _021E5C80: .word ov00_021E61A8"
    );
    #endif
}

void ov00_021E5C84(void) {
    /* Original at 0x021E5C84 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _021E5C98 ; =_0221A680\n    ldr r2, _021E5C9C ; =0x00000FA4\n    ldr r4, [r3]\n    str r0, [r4, r2]\n    ldr r3, [r3]\n    add r0, r2, #4\n    str r1, [r3, r0]\n    pop {r3, r4}\n    bx lr\n    _021E5C98: .word _0221A680\n    _021E5C9C: .word 0x00000FA4"
    );
    #endif
}

void ov00_021E5CA0(void) {
    /* Original at 0x021E5CA0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _021E5CB4 ; =_0221A680\n    ldr r2, _021E5CB8 ; =0x00000FAC\n    ldr r4, [r3]\n    str r0, [r4, r2]\n    ldr r3, [r3]\n    add r0, r2, #4\n    str r1, [r3, r0]\n    pop {r3, r4}\n    bx lr\n    _021E5CB4: .word _0221A680\n    _021E5CB8: .word 0x00000FAC"
    );
    #endif
}

void ov00_021E5CBC(void) {
    /* Original at 0x021E5CBC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E5CC8 ; =_0221A680\n    ldr r2, [r1]\n    ldr r1, _021E5CCC ; =0x00000FBC\n    str r0, [r2, r1]\n    bx lr\n    nop\n    _021E5CC8: .word _0221A680\n    _021E5CCC: .word 0x00000FBC"
    );
    #endif
}

void ov00_021E5CD0(void) {
    /* Original at 0x021E5CD0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _021E5CE4 ; =_0221A680\n    ldr r2, _021E5CE8 ; =0x00000FB4\n    ldr r4, [r3]\n    str r0, [r4, r2]\n    ldr r3, [r3]\n    add r0, r2, #4\n    str r1, [r3, r0]\n    pop {r3, r4}\n    bx lr\n    _021E5CE4: .word _0221A680\n    _021E5CE8: .word 0x00000FB4"
    );
    #endif
}

void ov00_021E5CEC(void) {
    /* Original at 0x021E5CEC */
    /* Requires manual decompilation - 134 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, _021E5DFC ; =_0221A680\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r6, r2, #0\n    add r7, r3, #0\n    cmp r0, #0\n    bne _021E5D04\n    bl GF_AssertFail\n    ldr r0, _021E5DFC ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E5E00 ; =0x00001070\n    ldr r0, [r1, r0]\n    cmp r0, #4\n    beq _021E5D16\n    add sp, #0x10\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov00_021E7300\n    ldr r2, _021E5E04 ; =_0221602C\n    add r1, sp, #8\n    ldmia r2!, {r0, r2}\n    str r0, [sp, #8]\n    mov r0, #0xfa\n    lsl r0, r0, #2\n    str r2, [sp, #0xc]\n    mul r0, r7\n    str r0, [sp, #0xc]\n    mov r0, #0\n    mov r2, #8\n    bl ov00_021F14D4\n    cmp r0, #0\n    beq _021E5D3C\n    bl GF_AssertFail\n    ldr r1, _021E5E08 ; =_02216414\n    mov r0, #0\n    add r2, r5, #0\n    bl ov00_021F13A4\n    cmp r0, #0\n    bne _021E5D4E\n    bl GF_AssertFail\n    ldr r0, _021E5DFC ; =_0221A680\n    mov r2, #0x80\n    ldr r1, [r0]\n    ldr r0, _021E5E0C ; =0x00000FC4\n    add r0, r1, r0\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _021E5DFC ; =_0221A680\n    ldr r2, _021E5E08 ; =_02216414\n    ldr r1, [r0]\n    ldr r0, _021E5E0C ; =0x00000FC4\n    add r3, r5, #0\n    add r0, r1, r0\n    ldr r1, _021E5E10 ; =_02216034\n    bl sprintf\n    ldr r0, _021E5DFC ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E5E0C ; =0x00000FC4\n    add r0, r1, r0\n    bl strlen\n    cmp r0, #0x80\n    blo _021E5D84\n    bl GF_AssertFail\n    cmp r6, #0\n    beq _021E5D98\n    ldr r0, _021E5DFC ; =_0221A680\n    ldr r2, _021E5E0C ; =0x00000FC4\n    ldr r3, [r0]\n    mov r0, #1\n    add r1, r3, r2\n    add r2, r3, r2\n    bl ov00_021F13A4\n    ldr r2, _021E5DFC ; =_0221A680\n    ldr r1, _021E5E00 ; =0x00001070\n    ldr r0, [r2]\n    mov r3, #5\n    str r3, [r0, r1]\n    add r0, r1, #0\n    ldr r3, [r2]\n    add r0, #0xc\n    str r4, [r3, r0]\n    ldr r0, _021E5E14 ; =ov00_021E6424\n    mov r3, #0\n    str r0, [sp]\n    str r3, [sp, #4]\n    lsl r0, r4, #0x18\n    ldr r2, [r2]\n    sub r1, #0xac\n    add r1, r2, r1\n    ldr r2, _021E5E18 ; =ov00_021E63CC\n    lsr r0, r0, #0x18\n    bl ov00_021EDF1C\n    ldr r0, _021E5DFC ; =_0221A680\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _021E5E1C ; =0x00001074\n    str r2, [r1, r0]\n    ldr r0, _021E5E20 ; =ov00_021E6428\n    bl ov00_021F989C\n    ldr r0, _021E5E24 ; =ov00_021E6484\n    bl ov00_021F98BC\n    ldr r0, _021E5E28 ; =ov00_021E6554\n    mov r1, #0\n    bl ov00_021EE24C\n    ldr r0, _021E5E2C ; =ov00_021E6240\n    bl ov00_021F98DC\n    ldr r2, _021E5DFC ; =_0221A680\n    ldr r1, _021E5E30 ; =0x00001078\n    ldr r0, [r2]\n    mov r3, #0\n    str r3, [r0, r1]\n    ldr r2, [r2]\n    mov r0, #1\n    add r1, #0x6d\n    strb r0, [r2, r1]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E5DFC: .word _0221A680\n    _021E5E00: .word 0x00001070\n    _021E5E04: .word _0221602C\n    _021E5E08: .word _02216414\n    _021E5E0C: .word 0x00000FC4\n    _021E5E10: .word _02216034\n    _021E5E14: .word ov00_021E6424\n    _021E5E18: .word ov00_021E63CC\n    _021E5E1C: .word 0x00001074\n    _021E5E20: .word ov00_021E6428\n    _021E5E24: .word ov00_021E6484\n    _021E5E28: .word ov00_021E6554\n    _021E5E2C: .word ov00_021E6240\n    _021E5E30: .word 0x00001078"
    );
    #endif
}

void ov00_021E5E34(void) {
    /* Original at 0x021E5E34 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E5E4C ; =_0221A680\n    ldr r2, [r0]\n    ldr r0, _021E5E50 ; =0x00001070\n    ldr r1, [r2, r0]\n    cmp r1, #0xa\n    bne _021E5E46\n    mov r1, #0xb\n    str r1, [r2, r0]\n    bx lr\n    mov r1, #9\n    str r1, [r2, r0]\n    bx lr\n    _021E5E4C: .word _0221A680\n    _021E5E50: .word 0x00001070"
    );
    #endif
}

void ov00_021E5E54(void) {
    /* Original at 0x021E5E54 */
    /* Requires manual decompilation - 122 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _021E5F70 ; =_0221A680\n    ldr r1, _021E5F74 ; =0x00001070\n    ldr r3, [r2]\n    ldr r4, [r3, r1]\n    cmp r4, #0x10\n    bls _021E5E64\n    b _021E5F68\n    add r4, r4, r4\n    add r4, pc\n    ldrh r4, [r4, #6]\n    lsl r4, r4, #0x10\n    asr r4, r4, #0x10\n    add pc, r4\n    _021E5E70: ; jump table\n    cmp r0, #0\n    beq _021E5E9A\n    mov r0, #6\n    str r0, [r3, r1]\n    ldr r0, _021E5F70 ; =_0221A680\n    ldr r2, _021E5F78 ; =0x00001074\n    ldr r0, [r0]\n    ldr r1, [r0, r2]\n    cmp r1, #2\n    bne _021E5F68\n    add r1, r2, #0\n    add r1, #0x20\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    blt _021E5F68\n    add r3, r0, r1\n    add r1, r2, #0\n    sub r1, #0x30\n    ldrb r1, [r3, r1]\n    cmp r1, #6\n    beq _021E5F68\n    mov r3, #0xa\n    sub r1, r2, #4\n    str r3, [r0, r1]\n    b _021E5F68\n    add r0, r1, #4\n    ldr r0, [r3, r0]\n    cmp r0, #0\n    bne _021E5ED2\n    bl ov00_021F1284\n    b _021E5F68\n    bl ov00_021EE278\n    bl ov00_021E5E34\n    b _021E5F68\n    bl sub_0203993C\n    bl sub_02034084\n    cmp r0, #0\n    bne _021E5EF4\n    ldr r0, _021E5F70 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E5F7C ; =0x00001084\n    ldr r0, [r1, r0]\n    bl ov00_021E69A8\n    ldr r0, _021E5F70 ; =_0221A680\n    ldr r2, [r0]\n    ldr r0, _021E5F80 ; =0x0000109C\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    beq _021E5F04\n    mov r1, #1\n    b _021E5F06\n    mov r1, #0\n    add r0, #0x38\n    strh r1, [r2, r0]\n    ldr r0, _021E5F70 ; =_0221A680\n    mov r2, #8\n    ldr r1, [r0]\n    ldr r0, _021E5F74 ; =0x00001070\n    str r2, [r1, r0]\n    mov r0, #0x14\n    pop {r4, pc}\n    mov r0, #4\n    str r0, [r3, r1]\n    add r0, r1, #0\n    ldr r3, [r2]\n    mov r4, #0\n    add r0, #8\n    str r4, [r3, r0]\n    ldr r0, [r2]\n    sub r3, r4, #1\n    add r1, #0x28\n    str r3, [r0, r1]\n    mov r0, #0x15\n    pop {r4, pc}\n    mov r0, #4\n    str r0, [r3, r1]\n    add r0, r1, #0\n    ldr r3, [r2]\n    mov r4, #0\n    add r0, #8\n    str r4, [r3, r0]\n    ldr r0, [r2]\n    sub r3, r4, #1\n    add r1, #0x28\n    str r3, [r0, r1]\n    mov r0, #0x16\n    pop {r4, pc}\n    bl ov00_021E6690\n    pop {r4, pc}\n    add r1, #0x20\n    ldr r0, [r3, r1]\n    cmp r0, #0\n    bne _021E5F68\n    bl ov00_021EE278\n    ldr r0, _021E5F70 ; =_0221A680\n    mov r2, #0x11\n    ldr r1, [r0]\n    ldr r0, _021E5F74 ; =0x00001070\n    str r2, [r1, r0]\n    bl ov00_021E6850\n    pop {r4, pc}\n    nop\n    _021E5F70: .word _0221A680\n    _021E5F74: .word 0x00001070\n    _021E5F78: .word 0x00001074\n    _021E5F7C: .word 0x00001084\n    _021E5F80: .word 0x0000109C"
    );
    #endif
}

void ov00_021E5F84(void) {
    /* Original at 0x021E5F84 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #1\n    add r4, r1, #0\n    lsl r0, r0, #8\n    cmp r4, r0\n    blt _021E5F96\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    bl ov00_021EE490\n    cmp r0, #0\n    bne _021E5FB8\n    ldr r0, _021E601C ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E6020 ; =0x00000FA4\n    ldr r3, [r1, r0]\n    cmp r3, #0\n    beq _021E5FB4\n    lsl r2, r4, #0x10\n    mov r0, #0\n    add r1, r5, #0\n    lsr r2, r2, #0x10\n    blx r3\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E601C ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E6024 ; =0x00001078\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _021E5FCC\n    bl ov00_021E6790\n    cmp r0, #0\n    bne _021E5FD0\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E601C ; =_0221A680\n    ldr r0, _021E6028 ; =0x000010D4\n    ldr r2, [r1]\n    ldrh r3, [r2, r0]\n    lsl r6, r3, #8\n    mov r3, #1\n    orr r3, r6\n    str r3, [r2]\n    add r3, r0, #0\n    ldr r2, [r1]\n    add r3, #8\n    ldrb r3, [r2, r3]\n    add r6, r3, #1\n    add r3, r0, #0\n    add r3, #8\n    strb r6, [r2, r3]\n    ldr r2, [r1]\n    add r0, #8\n    ldrb r0, [r2, r0]\n    strb r0, [r2, #2]\n    ldr r1, [r1]\n    add r0, r5, #0\n    add r1, r1, #4\n    add r2, r4, #0\n    bl MI_CpuCopy8\n    ldr r2, _021E601C ; =_0221A680\n    ldr r1, _021E6024 ; =0x00001078\n    ldr r3, [r2]\n    mov r0, #1\n    str r0, [r3, r1]\n    ldr r1, [r2]\n    add r2, r4, #4\n    bl ov00_021F9750\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _021E601C: .word _0221A680\n    _021E6020: .word 0x00000FA4\n    _021E6024: .word 0x00001078\n    _021E6028: .word 0x000010D4"
    );
    #endif
}

void ov00_021E602C(void) {
    /* Original at 0x021E602C */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #1\n    add r4, r1, #0\n    lsl r0, r0, #8\n    cmp r4, r0\n    blt _021E603E\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    bl ov00_021EE490\n    cmp r0, #0\n    beq _021E604A\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E60D8 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E60DC ; =0x00001078\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _021E605E\n    bl ov00_021E6790\n    cmp r0, #0\n    bne _021E6062\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E60D8 ; =_0221A680\n    ldr r0, _021E60E0 ; =0x000010D4\n    ldr r2, [r1]\n    ldrh r3, [r2, r0]\n    lsl r6, r3, #8\n    mov r3, #1\n    orr r3, r6\n    str r3, [r2]\n    add r3, r0, #0\n    ldr r2, [r1]\n    add r3, #8\n    ldrb r3, [r2, r3]\n    add r6, r3, #1\n    add r3, r0, #0\n    add r3, #8\n    strb r6, [r2, r3]\n    ldr r2, [r1]\n    add r0, #8\n    ldrb r0, [r2, r0]\n    strb r0, [r2, #2]\n    ldr r1, [r1]\n    add r0, r5, #0\n    add r1, r1, #4\n    add r2, r4, #0\n    bl MI_CpuCopy8\n    ldr r0, _021E60D8 ; =_0221A680\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _021E60DC ; =0x00001078\n    str r2, [r1, r0]\n    bl ov00_021EE4FC\n    ldr r1, _021E60D8 ; =_0221A680\n    add r2, r4, #4\n    ldr r1, [r1]\n    bl ov00_021F9750\n    cmp r0, #0\n    bne _021E60BE\n    ldr r1, _021E60D8 ; =_0221A680\n    mov r0, #0\n    ldr r2, [r1]\n    ldr r1, _021E60DC ; =0x00001078\n    str r0, [r2, r1]\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E60D8 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E60E4 ; =0x00000FA8\n    ldr r3, [r1, r0]\n    cmp r3, #0\n    beq _021E60D4\n    lsl r2, r4, #0x10\n    mov r0, #0\n    add r1, r5, #0\n    lsr r2, r2, #0x10\n    blx r3\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _021E60D8: .word _0221A680\n    _021E60DC: .word 0x00001078\n    _021E60E0: .word 0x000010D4\n    _021E60E4: .word 0x00000FA8"
    );
    #endif
}

void ov00_021E60E8(void) {
    /* Original at 0x021E60E8 */
    /* Requires manual decompilation - 87 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #1\n    add r4, r1, #0\n    lsl r0, r0, #8\n    cmp r4, r0\n    blt _021E60FA\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E6198 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E619C ; =0x00001078\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _021E610E\n    bl ov00_021E6790\n    cmp r0, #0\n    bne _021E6112\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E6198 ; =_0221A680\n    ldr r0, _021E61A0 ; =0x000010D4\n    ldr r2, [r1]\n    ldrh r3, [r2, r0]\n    lsl r6, r3, #8\n    mov r3, #1\n    orr r3, r6\n    str r3, [r2]\n    add r3, r0, #0\n    ldr r2, [r1]\n    add r3, #8\n    ldrb r3, [r2, r3]\n    add r6, r3, #1\n    add r3, r0, #0\n    add r3, #8\n    strb r6, [r2, r3]\n    ldr r2, [r1]\n    add r0, #8\n    ldrb r0, [r2, r0]\n    strb r0, [r2, #2]\n    ldr r1, [r1]\n    add r0, r5, #0\n    add r1, r1, #4\n    add r2, r4, #0\n    bl MI_CpuCopy8\n    ldr r0, _021E6198 ; =_0221A680\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _021E619C ; =0x00001078\n    str r2, [r1, r0]\n    bl ov00_021EE4FC\n    ldr r1, _021E6198 ; =_0221A680\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    ldr r1, [r1]\n    add r0, r6, #0\n    add r2, r4, #4\n    bl ov00_021F9750\n    cmp r6, r0\n    beq _021E6174\n    ldr r1, _021E6198 ; =_0221A680\n    mov r0, #0\n    ldr r2, [r1]\n    ldr r1, _021E619C ; =0x00001078\n    str r0, [r2, r1]\n    pop {r4, r5, r6, pc}\n    ldr r0, _021E6198 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E61A4 ; =0x00000FA8\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021E6194\n    bl ov00_021EE490\n    lsl r2, r4, #0x10\n    ldr r3, _021E6198 ; =_0221A680\n    add r1, r5, #0\n    ldr r4, [r3]\n    ldr r3, _021E61A4 ; =0x00000FA8\n    lsr r2, r2, #0x10\n    ldr r3, [r4, r3]\n    blx r3\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    _021E6198: .word _0221A680\n    _021E619C: .word 0x00001078\n    _021E61A0: .word 0x000010D4\n    _021E61A4: .word 0x00000FA8"
    );
    #endif
}

void ov00_021E61A8(void) {
    /* Original at 0x021E61A8 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _021E6224 ; =_0221A680\n    add r4, r2, #0\n    ldr r1, [r0]\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl DWC_CheckDirtyFlag\n    cmp r0, #0\n    beq _021E61DA\n    ldr r0, _021E6224 ; =_0221A680\n    ldr r1, [r0]\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl DWC_ClearDirtyFlag\n    ldr r0, _021E6224 ; =_0221A680\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _021E6228 ; =0x000010E6\n    strb r2, [r1, r0]\n    cmp r5, #0\n    bne _021E6214\n    ldr r0, _021E622C ; =ov00_021E629C\n    str r4, [sp]\n    str r0, [sp, #4]\n    ldr r2, _021E6224 ; =_0221A680\n    str r4, [sp, #8]\n    ldr r3, [r2]\n    mov r2, #0xf1\n    lsl r2, r2, #4\n    ldr r2, [r3, r2]\n    ldr r1, _021E6230 ; =ov00_021E6274\n    ldr r3, _021E6234 ; =ov00_021E6298\n    mov r0, #0\n    bl ov00_021EDE74\n    cmp r0, #0\n    bne _021E6208\n    mov r0, #1\n    bl sub_02039AD8\n    add sp, #0xc\n    pop {r4, r5, pc}\n    ldr r0, _021E6238 ; =ov00_021E62D4\n    mov r1, #0\n    bl ov00_021EFF04\n    add sp, #0xc\n    pop {r4, r5, pc}\n    ldr r0, _021E6224 ; =_0221A680\n    mov r2, #0xc\n    ldr r1, [r0]\n    ldr r0, _021E623C ; =0x00001070\n    str r2, [r1, r0]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _021E6224: .word _0221A680\n    _021E6228: .word 0x000010E6\n    _021E622C: .word ov00_021E629C\n    _021E6230: .word ov00_021E6274\n    _021E6234: .word ov00_021E6298\n    _021E6238: .word ov00_021E62D4\n    _021E623C: .word 0x00001070"
    );
    #endif
}

void ov00_021E6240(void) {
    /* Original at 0x021E6240 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E6268 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E626C ; =0x000010A8\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021E6266\n    bl ov00_021EE278\n    ldr r1, _021E6268 ; =_0221A680\n    mov r3, #0\n    ldr r2, [r1]\n    ldr r0, _021E6270 ; =0x00001098\n    mvn r3, r3\n    str r3, [r2, r0]\n    ldr r1, [r1]\n    mov r2, #0x12\n    sub r0, #0x28\n    str r2, [r1, r0]\n    pop {r3, pc}\n    _021E6268: .word _0221A680\n    _021E626C: .word 0x000010A8\n    _021E6270: .word 0x00001098"
    );
    #endif
}

void ov00_021E6274(void) {
    /* Original at 0x021E6274 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0\n    bne _021E6284\n    ldr r0, _021E6290 ; =_0221A680\n    mov r2, #4\n    ldr r1, [r0]\n    ldr r0, _021E6294 ; =0x00001070\n    str r2, [r1, r0]\n    bx lr\n    ldr r0, _021E6290 ; =_0221A680\n    mov r2, #0xc\n    ldr r1, [r0]\n    ldr r0, _021E6294 ; =0x00001070\n    str r2, [r1, r0]\n    bx lr\n    _021E6290: .word _0221A680\n    _021E6294: .word 0x00001070"
    );
    #endif
}

void ov00_021E6298(void) {
    /* Original at 0x021E6298 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov00_021E629C(void) {
    /* Original at 0x021E629C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _021E62CC ; =_0221A680\n    add r4, r1, #0\n    ldr r1, [r0]\n    ldr r0, _021E62D0 ; =0x00000F78\n    ldr r0, [r1, r0]\n    bl sub_0202C6F4\n    add r1, r5, #0\n    add r2, r4, #0\n    bl sub_0202C5E4\n    ldr r0, _021E62CC ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E62D0 ; =0x00000F78\n    ldr r0, [r1, r0]\n    bl Save_Frontier_GetStatic\n    add r1, r5, #0\n    add r2, r4, #0\n    bl sub_02031214\n    pop {r3, r4, r5, pc}\n    _021E62CC: .word _0221A680\n    _021E62D0: .word 0x00000F78"
    );
    #endif
}

void ov00_021E62D4(void) {
    /* Original at 0x021E62D4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov00_021E62D8(void) {
    /* Original at 0x021E62D8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E62E8 ; =_0221A680\n    ldr r3, _021E62EC ; =MI_CpuFill8\n    ldr r1, [r0]\n    ldr r0, _021E62F0 ; =0x000010AC\n    mov r2, #0x20\n    add r0, r1, r0\n    mov r1, #0\n    bx r3\n    _021E62E8: .word _0221A680\n    _021E62EC: .word MI_CpuFill8\n    _021E62F0: .word 0x000010AC"
    );
    #endif
}

void ov00_021E62F4(void) {
    /* Original at 0x021E62F4 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r5, #0\n    add r4, r5, #0\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    add r1, r4, #0\n    bl ov00_021F9988\n    add r5, r5, #1\n    cmp r5, #4\n    blt _021E62FA\n    bl ov00_021EE490\n    cmp r0, #0\n    bne _021E6356\n    ldr r6, _021E6378 ; =_0221A680\n    ldr r0, _021E637C ; =0x0000107C\n    ldr r1, [r6]\n    mov r5, #0\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    ble _021E6366\n    ldr r7, _021E637C ; =0x0000107C\n    mov r4, #1\n    bl ov00_021EE490\n    cmp r5, r0\n    beq _021E634A\n    bl ov00_021EE4FC\n    add r1, r4, #0\n    lsl r1, r5\n    tst r0, r1\n    beq _021E634A\n    lsl r0, r5, #0x18\n    ldr r1, _021E6380 ; =0x00002710\n    lsr r0, r0, #0x18\n    bl ov00_021F9988\n    cmp r0, #0\n    bne _021E634A\n    bl GF_AssertFail\n    ldr r0, [r6]\n    add r5, r5, #1\n    ldr r0, [r0, r7]\n    cmp r5, r0\n    blt _021E6324\n    b _021E6366\n    ldr r1, _021E6380 ; =0x00002710\n    mov r0, #0\n    bl ov00_021F9988\n    cmp r0, #0\n    bne _021E6366\n    bl GF_AssertFail\n    ldr r0, _021E6378 ; =_0221A680\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _021E6384 ; =0x000010A8\n    str r2, [r1, r0]\n    bl ov00_021E62D8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E6378: .word _0221A680\n    _021E637C: .word 0x0000107C\n    _021E6380: .word 0x00002710\n    _021E6384: .word 0x000010A8"
    );
    #endif
}

void ov00_021E6388(void) {
    /* Original at 0x021E6388 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r4, _021E63C0 ; =_0221A680\n    ldr r0, _021E63C4 ; =0x00001070\n    ldr r1, [r4]\n    mov r2, #7\n    str r2, [r1, r0]\n    ldr r1, [r4]\n    add r0, #0xc\n    ldr r0, [r1, r0]\n    mov r5, #0\n    cmp r0, #0\n    ble _021E63BA\n    ldr r6, _021E63C8 ; =0x0000107C\n    bl ov00_021EE490\n    cmp r5, r0\n    beq _021E63B0\n    add r0, r5, #0\n    bl ov00_021E727C\n    ldr r0, [r4]\n    add r5, r5, #1\n    ldr r0, [r0, r6]\n    cmp r5, r0\n    blt _021E63A2\n    bl ov00_021E62F4\n    pop {r4, r5, r6, pc}\n    _021E63C0: .word _0221A680\n    _021E63C4: .word 0x00001070\n    _021E63C8: .word 0x0000107C"
    );
    #endif
}

void ov00_021E63CC(void) {
    /* Original at 0x021E63CC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    cmp r0, #0\n    bne _021E63EA\n    cmp r1, #0\n    bne _021E63E4\n    bl ov00_021EE490\n    mov r1, #1\n    sub r0, r1, r0\n    bl ov00_021E6388\n    b _021E63F4\n    bl ov00_021E5E34\n    b _021E63F4\n    ldr r0, _021E6414 ; =_0221A680\n    mov r2, #0xc\n    ldr r1, [r0]\n    ldr r0, _021E6418 ; =0x00001070\n    str r2, [r1, r0]\n    ldr r0, _021E6414 ; =_0221A680\n    ldr r4, [r0]\n    ldr r0, _021E641C ; =0x00000FB4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _021E6412\n    bl ov00_021EE490\n    ldr r3, _021E6414 ; =_0221A680\n    ldr r2, _021E6420 ; =0x00000FB8\n    ldr r3, [r3]\n    ldr r1, [r4, r2]\n    sub r2, r2, #4\n    ldr r2, [r3, r2]\n    blx r2\n    pop {r4, pc}\n    _021E6414: .word _0221A680\n    _021E6418: .word 0x00001070\n    _021E641C: .word 0x00000FB4\n    _021E6420: .word 0x00000FB8"
    );
    #endif
}

u8 ov00_021E6424(void) {
    return 1;
}

void ov00_021E6428(void) {
    /* Original at 0x021E6428 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r2, _021E6444 ; =_0221A680\n    ldr r0, _021E6448 ; =0x00001078\n    ldr r3, [r2]\n    mov r4, #0\n    str r4, [r3, r0]\n    ldr r2, [r2]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    add r0, #0x34\n    str r4, [r1, r0]\n    pop {r3, r4}\n    bx lr\n    nop\n    _021E6444: .word _0221A680\n    _021E6448: .word 0x00001078"
    );
    #endif
}

void ov00_021E644C(void) {
    /* Original at 0x021E644C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0203993C\n    bl sub_02034084\n    cmp r0, #0\n    bne _021E647A\n    mov r0, #1\n    lsl r0, r0, #8\n    tst r0, r4\n    beq _021E6470\n    ldr r0, _021E647C ; =_0221A680\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _021E6480 ; =0x000010D0\n    str r2, [r1, r0]\n    pop {r4, pc}\n    ldr r0, _021E647C ; =_0221A680\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _021E6480 ; =0x000010D0\n    str r2, [r1, r0]\n    pop {r4, pc}\n    _021E647C: .word _0221A680\n    _021E6480: .word 0x000010D0"
    );
    #endif
}

void ov00_021E6484(void) {
    /* Original at 0x021E6484 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    add r4, r1, #0\n    ldrb r3, [r4, #1]\n    ldrb r6, [r4]\n    add r7, r2, #0\n    lsl r3, r3, #8\n    mov ip, r3\n    ldrb r3, [r4, #3]\n    lsl r5, r3, #0x18\n    ldrb r3, [r4, #2]\n    lsl r3, r3, #0x10\n    orr r3, r5\n    mov r5, ip\n    orr r3, r5\n    orr r3, r6\n    str r3, [sp, #4]\n    ldr r3, _021E6544 ; =_0221A680\n    ldr r5, _021E6548 ; =0x000010A8\n    ldr r6, [r3]\n    mov r3, #1\n    str r3, [r6, r5]\n    ldr r3, [sp, #4]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    cmp r3, #1\n    bne _021E64D0\n    ldr r0, [sp, #4]\n    bl ov00_021E644C\n    ldr r0, _021E6544 ; =_0221A680\n    ldrb r2, [r4, #2]\n    ldr r1, [r0]\n    add r0, r5, #0\n    add r0, #0x35\n    strb r2, [r1, r0]\n    b _021E64E2\n    bl ov00_021E77A4\n    cmp r0, #0\n    bne _021E6540\n    ldr r0, [sp, #4]\n    bl ov00_021E644C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r6, r7, #4\n    mov r0, #0\n    add r1, r6, #0\n    mov r2, #4\n    bl ov00_021E65D4\n    add r5, r0, #0\n    beq _021E6540\n    add r0, r4, #4\n    add r1, r5, #0\n    add r2, r6, #0\n    bl MI_CpuCopy8\n    bl ov00_021EE490\n    cmp r0, #0\n    bne _021E651E\n    ldr r0, _021E6544 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E654C ; =0x00000FA4\n    ldr r3, [r1, r0]\n    cmp r3, #0\n    beq _021E6536\n    add r2, r6, #0\n    lsl r2, r2, #0x10\n    ldr r0, [sp]\n    add r1, r5, #0\n    lsr r2, r2, #0x10\n    blx r3\n    b _021E6536\n    ldr r0, _021E6544 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E6550 ; =0x00000FA8\n    ldr r3, [r1, r0]\n    cmp r3, #0\n    beq _021E6536\n    add r2, r6, #0\n    lsl r2, r2, #0x10\n    ldr r0, [sp]\n    add r1, r5, #0\n    lsr r2, r2, #0x10\n    blx r3\n    mov r0, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl ov00_021E6638\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E6544: .word _0221A680\n    _021E6548: .word 0x000010A8\n    _021E654C: .word 0x00000FA4\n    _021E6550: .word 0x00000FA8"
    );
    #endif
}

void ov00_021E6554(void) {
    /* Original at 0x021E6554 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r5, _021E65C0 ; =_0221A680\n    add r4, r3, #0\n    ldr r3, [r5]\n    ldr r2, _021E65C4 ; =0x00001078\n    mov r1, #0\n    str r1, [r3, r2]\n    add r3, r2, #0\n    ldr r6, [r5]\n    add r3, #0x54\n    str r1, [r6, r3]\n    add r3, r2, #0\n    add r3, #0x28\n    ldr r6, [r5]\n    cmp r0, #0\n    str r1, [r6, r3]\n    bne _021E65A8\n    ldr r0, [r5]\n    add r2, #0x6d\n    ldrb r0, [r0, r2]\n    cmp r0, #1\n    bne _021E65A8\n    bl ov00_021EE448\n    cmp r0, #1\n    bne _021E65A8\n    add r0, r5, #0\n    ldr r2, [r0]\n    ldr r0, _021E65C8 ; =0x00001070\n    ldr r1, [r2, r0]\n    cmp r1, #6\n    beq _021E6598\n    mov r1, #0x10\n    str r1, [r2, r0]\n    ldr r0, _021E65C0 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E65CC ; =0x00001090\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021E65A8\n    bl ov00_021E6A4C\n    ldr r0, _021E65C0 ; =_0221A680\n    ldr r1, _021E65D0 ; =0x00000FAC\n    ldr r3, [r0]\n    ldr r2, [r3, r1]\n    cmp r2, #0\n    beq _021E65BC\n    add r1, r1, #4\n    ldr r1, [r3, r1]\n    add r0, r4, #0\n    blx r2\n    pop {r4, r5, r6, pc}\n    nop\n    _021E65C0: .word _0221A680\n    _021E65C4: .word 0x00001078\n    _021E65C8: .word 0x00001070\n    _021E65CC: .word 0x00001090\n    _021E65D0: .word 0x00000FAC"
    );
    #endif
}

void ov00_021E65D4(void) {
    /* Original at 0x021E65D4 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r6, r2, #0\n    bl OS_DisableInterrupts\n    add r7, r0, #0\n    ldr r0, _021E662C ; =_0221A680\n    add r2, r6, #0\n    ldr r1, [r0]\n    ldr r0, _021E6630 ; =0x00000F94\n    ldr r0, [r1, r0]\n    add r1, r5, #0\n    bl NNS_FndAllocFromExpHeapEx\n    add r4, r0, #0\n    bne _021E660E\n    ldr r0, _021E662C ; =_0221A680\n    ldr r1, _021E6634 ; =0x00000F98\n    ldr r0, [r0]\n    ldr r2, [r0, r1]\n    cmp r2, #0\n    beq _021E660E\n    add r1, r1, #4\n    ldr r0, [r0, r1]\n    add r1, r5, #0\n    add r2, r6, #0\n    bl NNS_FndAllocFromExpHeapEx\n    add r4, r0, #0\n    cmp r4, #0\n    bne _021E6622\n    mov r0, #1\n    bl sub_02039AD8\n    add r0, r7, #0\n    bl OS_RestoreInterrupts\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    bl OS_RestoreInterrupts\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E662C: .word _0221A680\n    _021E6630: .word 0x00000F94\n    _021E6634: .word 0x00000F98"
    );
    #endif
}

void ov00_021E6638(void) {
    /* Original at 0x021E6638 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    beq _021E6682\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    add r0, r5, #0\n    bl NNS_FndGetGroupIDForMBlockExpHeap\n    cmp r0, #0x10\n    bne _021E666E\n    ldr r0, _021E6684 ; =_0221A680\n    ldr r2, [r0]\n    ldr r0, _021E6688 ; =0x00000F98\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    bne _021E6662\n    mov r0, #1\n    bl sub_02039AD8\n    pop {r3, r4, r5, pc}\n    add r0, r0, #4\n    ldr r0, [r2, r0]\n    add r1, r5, #0\n    bl NNS_FndFreeToExpHeap\n    b _021E667C\n    ldr r0, _021E6684 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E668C ; =0x00000F94\n    ldr r0, [r1, r0]\n    add r1, r5, #0\n    bl NNS_FndFreeToExpHeap\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    pop {r3, r4, r5, pc}\n    _021E6684: .word _0221A680\n    _021E6688: .word 0x00000F98\n    _021E668C: .word 0x00000F94"
    );
    #endif
}

void ov00_021E6690(void) {
    /* Original at 0x021E6690 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r0, sp, #4\n    add r1, sp, #0\n    mov r4, #0\n    bl ov00_021EC11C\n    add r5, r0, #0\n    beq _021E6762\n    ldr r4, [sp, #4]\n    cmp r4, #0\n    beq _021E66AE\n    ldr r0, [sp]\n    cmp r0, #1\n    bne _021E66B0\n    add r4, r5, #0\n    ldr r0, [sp]\n    cmp r0, #7\n    bhi _021E6762\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E66C2: ; jump table\n    bl ov00_021EC210\n    b _021E6762\n    bl ov00_021EC210\n    b _021E6762\n    ldr r0, _021E6784 ; =_0221A680\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _021E6734\n    ldr r0, _021E6788 ; =0x00001070\n    ldr r0, [r1, r0]\n    cmp r0, #0x12\n    bhi _021E6730\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E66FA: ; jump table\n    bl ov00_021ED9B4\n    bl sub_0203993C\n    cmp r0, #0x21\n    beq _021E6730\n    bl ov00_021EC8D8\n    bl ov00_021EC210\n    ldr r0, _021E6784 ; =_0221A680\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _021E6762\n    ldr r0, _021E6788 ; =0x00001070\n    mov r1, #0xe\n    str r1, [r2, r0]\n    b _021E6762\n    ldr r1, _021E6784 ; =_0221A680\n    ldr r3, [r1]\n    cmp r3, #0\n    beq _021E6762\n    ldr r0, _021E6788 ; =0x00001070\n    mov r2, #0xf\n    str r2, [r3, r0]\n    ldr r1, [r1]\n    sub r0, #0xb0\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _021E6762\n    ldr r0, [sp, #4]\n    neg r0, r0\n    blx r1\n    ldr r0, _021E6784 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E678C ; =0x000010DE\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _021E6770\n    mov r4, #0x1a\n    cmp r5, #0\n    beq _021E677E\n    ldr r0, [sp, #4]\n    ldr r1, [sp]\n    add r2, r5, #0\n    bl sub_02038F74\n    add r0, r4, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _021E6784: .word _0221A680\n    _021E6788: .word 0x00001070\n    _021E678C: .word 0x000010DE"
    );
    #endif
}

void ov00_021E6790(void) {
    /* Original at 0x021E6790 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r6, _021E67D8 ; =_0221A680\n    mov r5, #0\n    ldr r1, [r6]\n    ldr r0, _021E67DC ; =0x0000107C\n    add r4, r5, #0\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    ble _021E67D4\n    ldr r7, _021E67DC ; =0x0000107C\n    bl ov00_021EE490\n    cmp r4, r0\n    beq _021E67CA\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl ov00_021EE530\n    cmp r0, #0\n    beq _021E67CA\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    mov r5, #1\n    bl ov00_021F9580\n    cmp r0, #0\n    bne _021E67CA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r6]\n    add r4, r4, #1\n    ldr r0, [r0, r7]\n    cmp r4, r0\n    blt _021E67A4\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E67D8: .word _0221A680\n    _021E67DC: .word 0x0000107C"
    );
    #endif
}

void ov00_021E67E0(void) {
    /* Original at 0x021E67E0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021E6840 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E6844 ; =0x00001078\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _021E683A\n    bl ov00_021E6790\n    cmp r0, #0\n    beq _021E683A\n    bl ov00_021EE4FC\n    ldr r1, _021E6848 ; =0x0000FFFE\n    tst r0, r1\n    beq _021E683A\n    ldr r1, _021E6840 ; =_0221A680\n    ldr r0, _021E6844 ; =0x00001078\n    ldr r2, [r1]\n    mov r3, #1\n    str r3, [r2, r0]\n    ldr r2, [r1]\n    add r0, #0x5c\n    ldrh r0, [r2, r0]\n    lsl r1, r0, #8\n    mov r0, #2\n    orr r0, r1\n    str r0, [r2]\n    bl ov00_021EE4FC\n    ldr r1, _021E6840 ; =_0221A680\n    mov r2, #4\n    ldr r1, [r1]\n    bl ov00_021F9750\n    ldr r0, _021E6840 ; =_0221A680\n    mov r2, #0\n    ldr r1, [r0]\n    lsl r0, r4, #2\n    add r1, r1, r0\n    ldr r0, _021E684C ; =0x000010AC\n    str r2, [r1, r0]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _021E6840: .word _0221A680\n    _021E6844: .word 0x00001078\n    _021E6848: .word 0x0000FFFE\n    _021E684C: .word 0x000010AC"
    );
    #endif
}

void ov00_021E6850(void) {
    /* Original at 0x021E6850 */
    /* Requires manual decompilation - 118 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    bl ov00_021EDB1C\n    bl ov00_021E6CE8\n    ldr r0, _021E694C ; =_0221A680\n    ldr r1, _021E6950 ; =0x00001090\n    ldr r2, [r0]\n    ldr r0, [r2, r1]\n    cmp r0, #0\n    beq _021E68D8\n    add r0, r1, #0\n    add r0, #0x44\n    ldrh r0, [r2, r0]\n    cmp r0, #1\n    bne _021E6888\n    add r0, r1, #0\n    add r0, #0x40\n    ldr r0, [r2, r0]\n    cmp r0, #1\n    bne _021E6888\n    add r1, #0x46\n    ldrh r0, [r2, r1]\n    cmp r0, #1\n    bne _021E6888\n    bl ov00_021E7AE0\n    b _021E688C\n    bl ov00_021E7ACC\n    bl ov00_021E765C\n    ldr r0, _021E694C ; =_0221A680\n    ldr r4, [r0]\n    bl ov00_021EE4FC\n    mov r1, #0x42\n    lsl r1, r1, #6\n    ldr r2, [r4, r1]\n    cmp r2, r0\n    beq _021E68D8\n    add r0, r1, #0\n    add r0, #0x5f\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _021E68D8\n    add r1, #0x1c\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    beq _021E68D8\n    bl ov00_021EE4FC\n    add r4, r0, #0\n    bl ov00_021EE490\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov00_021E7AF4\n    cmp r0, #0\n    beq _021E68D8\n    bl ov00_021EE4FC\n    ldr r1, _021E694C ; =_0221A680\n    ldr r2, [r1]\n    mov r1, #0x42\n    lsl r1, r1, #6\n    str r0, [r2, r1]\n    ldr r6, _021E694C ; =_0221A680\n    ldr r1, _021E6954 ; =0x00001070\n    ldr r0, [r6]\n    ldr r2, [r0, r1]\n    cmp r2, #0x12\n    bne _021E68F0\n    bl ov00_021E6690\n    cmp r0, #0\n    bne _021E694A\n    mov r0, #0x17\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r2, #0x11\n    bne _021E68F8\n    mov r0, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    sub r2, r2, #7\n    cmp r2, #1\n    bhi _021E6946\n    add r1, #0xc\n    ldr r1, [r0, r1]\n    mov r4, #0\n    cmp r1, #0\n    ble _021E6946\n    ldr r7, _021E6958 ; =0x000010AC\n    add r5, r4, #0\n    ldr r2, _021E6958 ; =0x000010AC\n    add r1, r0, r5\n    ldr r0, _021E6958 ; =0x000010AC\n    ldr r2, [r1, r2]\n    ldr r0, [r1, r0]\n    add r2, r2, #1\n    str r2, [r1, r7]\n    cmp r0, #0x78\n    blt _021E6938\n    ldr r1, [r6]\n    ldr r0, _021E695C ; =0x00001078\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _021E6938\n    add r0, r4, #0\n    bl ov00_021E67E0\n    cmp r0, #0\n    beq _021E6938\n    bl ov00_021E62D8\n    b _021E6946\n    ldr r0, [r6]\n    ldr r1, _021E6960 ; =0x0000107C\n    add r4, r4, #1\n    ldr r1, [r0, r1]\n    add r5, r5, #4\n    cmp r4, r1\n    blt _021E690C\n    bl ov00_021E6690\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E694C: .word _0221A680\n    _021E6950: .word 0x00001090\n    _021E6954: .word 0x00001070\n    _021E6958: .word 0x000010AC\n    _021E695C: .word 0x00001078\n    _021E6960: .word 0x0000107C"
    );
    #endif
}

void ov00_021E6964(void) {
    /* Original at 0x021E6964 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E698C ; =_0221A680\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _021E6984\n    ldr r0, _021E6990 ; =0x00001070\n    ldr r0, [r1, r0]\n    cmp r0, #7\n    beq _021E697E\n    cmp r0, #8\n    beq _021E697E\n    cmp r0, #0x10\n    bne _021E6984\n    bl ov00_021EE490\n    pop {r3, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, pc}\n    nop\n    _021E698C: .word _0221A680\n    _021E6990: .word 0x00001070"
    );
    #endif
}

void ov00_021E6994(void) {
    /* Original at 0x021E6994 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E69A0 ; =_0221A680\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _021E69A4 ; =0x00001090\n    str r2, [r1, r0]\n    bx lr\n    _021E69A0: .word _0221A680\n    _021E69A4: .word 0x00001090"
    );
    #endif
}

void ov00_021E69A8(void) {
    /* Original at 0x021E69A8 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r4, #1\n    bl sub_0203993C\n    bl sub_02034084\n    add r5, r0, #0\n    beq _021E69DC\n    bl sub_02037454\n    sub r4, r0, #1\n    cmp r4, #1\n    bge _021E69C6\n    mov r4, #1\n    ldr r1, _021E6A3C ; =_0221A680\n    ldr r6, _021E6A40 ; =0x000010D4\n    ldr r0, [r1]\n    mov r3, #1\n    strh r3, [r0, r6]\n    ldr r2, [r1]\n    sub r0, r6, #4\n    str r3, [r2, r0]\n    ldr r0, [r1]\n    add r1, r6, #2\n    strh r3, [r0, r1]\n    ldr r0, _021E6A3C ; =_0221A680\n    ldr r2, [r0]\n    ldr r0, _021E6A44 ; =0x00001090\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    bne _021E6A3A\n    add r0, #0x14\n    ldr r0, [r2, r0]\n    cmp r0, #5\n    bhi _021E6A18\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E69FC: ; jump table\n    mov r1, #1\n    b _021E6A22\n    mov r1, #2\n    b _021E6A22\n    mov r1, #3\n    b _021E6A22\n    mov r1, #4\n    b _021E6A22\n    cmp r5, #0\n    bne _021E6A20\n    mov r1, #4\n    b _021E6A22\n    mov r1, #3\n    add r0, r7, #0\n    add r2, r4, #0\n    bl ov00_021E77F4\n    ldr r0, _021E6A48 ; =ov00_021E6994\n    bl ov00_021E7A1C\n    ldr r0, _021E6A3C ; =_0221A680\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _021E6A44 ; =0x00001090\n    str r2, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E6A3C: .word _0221A680\n    _021E6A40: .word 0x000010D4\n    _021E6A44: .word 0x00001090\n    _021E6A48: .word ov00_021E6994"
    );
    #endif
}

void ov00_021E6A4C(void) {
    /* Original at 0x021E6A4C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov00_021E7A30\n    ldr r1, _021E6A68 ; =_0221A680\n    ldr r3, [r1]\n    cmp r3, #0\n    beq _021E6A66\n    ldr r0, _021E6A6C ; =0x00001090\n    mov r2, #0\n    str r2, [r3, r0]\n    ldr r1, [r1]\n    sub r0, #0x10\n    str r2, [r1, r0]\n    pop {r3, pc}\n    _021E6A68: .word _0221A680\n    _021E6A6C: .word 0x00001090"
    );
    #endif
}

void ov00_021E6A70(void) {
    /* Original at 0x021E6A70 */
    /* Requires manual decompilation - 169 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    mov r1, #0x64\n    add r4, r0, #0\n    bl _s32_div_f\n    mov r1, #0xfa\n    add r5, r0, #0\n    add r0, r4, #0\n    lsl r1, r1, #2\n    bl _s32_div_f\n    ldr r2, _021E6BC8 ; =0x00004E85\n    cmp r4, r2\n    bne _021E6A92\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x17\n    bne _021E6A9A\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r1, r2, #7\n    cmp r4, r1\n    bne _021E6AA4\n    mov r0, #2\n    pop {r4, r5, r6, pc}\n    add r2, #9\n    cmp r4, r2\n    bne _021E6AAE\n    mov r0, #3\n    pop {r4, r5, r6, pc}\n    mov r1, #2\n    lsl r1, r1, #8\n    cmp r5, r1\n    bne _021E6ABA\n    mov r0, #4\n    pop {r4, r5, r6, pc}\n    add r2, r1, #0\n    sub r2, #0xc\n    cmp r5, r2\n    bne _021E6AC6\n    mov r0, #5\n    pop {r4, r5, r6, pc}\n    ldr r2, _021E6BCC ; =0x0000C79F\n    cmp r4, r2\n    bne _021E6AD0\n    mov r0, #7\n    pop {r4, r5, r6, pc}\n    sub r2, r1, #2\n    cmp r5, r2\n    bne _021E6ADA\n    mov r0, #6\n    pop {r4, r5, r6, pc}\n    sub r2, r1, #1\n    cmp r5, r2\n    bne _021E6AE4\n    mov r0, #6\n    pop {r4, r5, r6, pc}\n    add r1, r1, #1\n    cmp r5, r1\n    bne _021E6AEE\n    mov r0, #6\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E6BD0 ; =0x0000CB20\n    cmp r4, r1\n    blt _021E6AFE\n    add r1, r1, #3\n    cmp r4, r1\n    bgt _021E6AFE\n    mov r0, #8\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E6BD4 ; =0x0000CB84\n    cmp r4, r1\n    blt _021E6B0E\n    add r1, r1, #3\n    cmp r4, r1\n    bgt _021E6B0E\n    mov r0, #8\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E6BD8 ; =0x0000CBE8\n    cmp r4, r1\n    blt _021E6B1E\n    add r1, r1, #3\n    cmp r4, r1\n    bgt _021E6B1E\n    mov r0, #8\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E6BDC ; =0x00013A2E\n    cmp r4, r1\n    bne _021E6B28\n    mov r0, #9\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x14\n    bne _021E6B30\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r1, #0x82\n    lsl r1, r1, #2\n    cmp r5, r1\n    bne _021E6B3C\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r2, r1, #1\n    cmp r5, r2\n    bne _021E6B46\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r2, r1, #2\n    cmp r5, r2\n    bne _021E6B50\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r2, r1, #3\n    cmp r5, r2\n    bne _021E6B5A\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r2, r1, #0\n    add r2, #0xa\n    cmp r5, r2\n    bne _021E6B66\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r2, r1, #0\n    add r2, #0xb\n    cmp r5, r2\n    bne _021E6B72\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r1, #0xc\n    cmp r5, r1\n    bne _021E6B7C\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r1, _021E6BE0 ; =0x00002710\n    cmp r4, r1\n    bge _021E6B86\n    mov r0, #0xe\n    pop {r4, r5, r6, pc}\n    cmp r0, #0x1f\n    bne _021E6B8E\n    mov r0, #0xc\n    pop {r4, r5, r6, pc}\n    cmp r6, #7\n    bhi _021E6BB6\n    add r0, r6, r6\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E6B9E: ; jump table\n    mov r0, #0xb\n    pop {r4, r5, r6, pc}\n    mov r0, #0xa\n    pop {r4, r5, r6, pc}\n    bl GF_AssertFail\n    b _021E6BC0\n    mov r0, #0xf\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    nop\n    _021E6BC8: .word 0x00004E85\n    _021E6BCC: .word 0x0000C79F\n    _021E6BD0: .word 0x0000CB20\n    _021E6BD4: .word 0x0000CB84\n    _021E6BD8: .word 0x0000CBE8\n    _021E6BDC: .word 0x00013A2E\n    _021E6BE0: .word 0x00002710"
    );
    #endif
}

void ov00_021E6BE4(void) {
    /* Original at 0x021E6BE4 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    bne _021E6C44\n    ldr r0, _021E6C60 ; =_0221A680\n    ldr r2, _021E6C64 ; =0x00001070\n    ldr r0, [r0]\n    ldr r1, [r0, r2]\n    cmp r1, #0x12\n    bhi _021E6C5C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _021E6C02: ; jump table\n    add r2, #0x20\n    ldr r0, [r0, r2]\n    cmp r0, #0\n    beq _021E6C34\n    bl ov00_021E79CC\n    ldr r0, _021E6C60 ; =_0221A680\n    mov r2, #0x10\n    ldr r1, [r0]\n    ldr r0, _021E6C64 ; =0x00001070\n    str r2, [r1, r0]\n    b _021E6C5C\n    mov r0, #1\n    pop {r3, pc}\n    ldr r0, _021E6C60 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E6C64 ; =0x00001070\n    ldr r0, [r1, r0]\n    cmp r0, #4\n    beq _021E6C58\n    cmp r0, #0x11\n    beq _021E6C58\n    cmp r0, #0x12\n    bne _021E6C5C\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    _021E6C60: .word _0221A680\n    _021E6C64: .word 0x00001070"
    );
    #endif
}

void ov00_021E6C68(void) {
    /* Original at 0x021E6C68 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E6C9C ; =_0221A680\n    ldr r2, [r0]\n    ldr r0, _021E6CA0 ; =0x00001070\n    ldr r0, [r2, r0]\n    cmp r0, #0x11\n    beq _021E6C7E\n    cmp r0, #0x12\n    beq _021E6C7E\n    cmp r0, #4\n    bne _021E6C96\n    ldr r0, _021E6CA0 ; =0x00001070\n    mov r1, #4\n    str r1, [r2, r0]\n    sub r2, r1, #5\n    ldr r1, _021E6C9C ; =_0221A680\n    add r0, #0x28\n    ldr r1, [r1]\n    str r2, [r1, r0]\n    bl ov00_021E7130\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021E6C9C: .word _0221A680\n    _021E6CA0: .word 0x00001070"
    );
    #endif
}

void ov00_021E6CA4(void) {
    /* Original at 0x021E6CA4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E6CB4 ; =_0221A680\n    ldr r2, [r1]\n    cmp r2, #0\n    beq _021E6CB2\n    mov r1, #0x3f\n    lsl r1, r1, #6\n    str r0, [r2, r1]\n    bx lr\n    _021E6CB4: .word _0221A680"
    );
    #endif
}

void ov00_021E6CB8(void) {
    ov00_021ED9B4();
    ov00_021EC8D8();
    ov00_021E6A4C();
    ov00_021E5AE8();
}

void ov00_021E6CCC(void) {
    /* Original at 0x021E6CCC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _021E6CE0 ; =_0221A680\n    ldr r2, _021E6CE4 ; =0x00001064\n    ldr r4, [r3]\n    str r0, [r4, r2]\n    ldr r3, [r3]\n    add r0, r2, #4\n    str r1, [r3, r0]\n    pop {r3, r4}\n    bx lr\n    _021E6CE0: .word _0221A680\n    _021E6CE4: .word 0x00001064"
    );
    #endif
}

void ov00_021E6CE8(void) {
    /* Original at 0x021E6CE8 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r0, _021E6D50 ; =_0221A680\n    ldr r1, _021E6D54 ; =0x00001064\n    ldr r0, [r0]\n    ldr r2, [r0, r1]\n    cmp r2, #0\n    beq _021E6D4E\n    add r1, #8\n    ldr r2, [r0, r1]\n    mov r1, #0x1f\n    add r5, r2, #0\n    and r5, r1\n    mov r1, #0xc\n    add r4, r5, #0\n    mul r4, r1\n    add r1, #0xf4\n    ldr r0, [r0, r1]\n    add r0, r0, r4\n    bl DWC_IsBuddyFriendData\n    cmp r0, #0\n    beq _021E6D3E\n    ldr r0, _021E6D50 ; =_0221A680\n    ldr r3, _021E6D54 ; =0x00001064\n    ldr r2, [r0]\n    mov r0, #1\n    lsl r0, r0, #8\n    ldr r1, [r2, r3]\n    ldr r0, [r2, r0]\n    add r3, r3, #4\n    ldr r2, [r2, r3]\n    add r0, r0, r4\n    add r3, r2, #0\n    mul r3, r5\n    add r1, r1, r3\n    add r2, sp, #0\n    bl ov00_021EFDCC\n    ldr r1, _021E6D50 ; =_0221A680\n    ldr r1, [r1]\n    add r2, r1, r5\n    ldr r1, _021E6D58 ; =0x00001044\n    strb r0, [r2, r1]\n    ldr r0, _021E6D50 ; =_0221A680\n    ldr r1, _021E6D5C ; =0x0000106C\n    ldr r3, [r0]\n    ldr r0, [r3, r1]\n    add r2, r0, #1\n    mov r0, #0x1f\n    and r0, r2\n    str r0, [r3, r1]\n    pop {r3, r4, r5, pc}\n    _021E6D50: .word _0221A680\n    _021E6D54: .word 0x00001064\n    _021E6D58: .word 0x00001044\n    _021E6D5C: .word 0x0000106C"
    );
    #endif
}

void ov00_021E6D60(void) {
    ov00_021EFE78();
}

void ov00_021E6D68(void) {
    /* Original at 0x021E6D68 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E6D74 ; =_0221A680\n    ldr r1, [r1]\n    add r1, r1, r0\n    ldr r0, _021E6D78 ; =0x00001044\n    ldrb r0, [r1, r0]\n    bx lr\n    _021E6D74: .word _0221A680\n    _021E6D78: .word 0x00001044"
    );
    #endif
}

void ov00_021E6D7C(void) {
    /* Original at 0x021E6D7C */
    /* Requires manual decompilation - 138 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r7, r2, #0\n    bl ov00_021E7314\n    cmp r0, #0\n    beq _021E6D92\n    mov r0, #3\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E6E84 ; =_0221A680\n    ldr r0, _021E6E88 ; =0x00001070\n    ldr r2, [r1]\n    ldr r3, [r2, r0]\n    cmp r3, #4\n    beq _021E6DC2\n    add r3, r0, #0\n    add r3, #0x5c\n    ldr r3, [r2, r3]\n    add r4, r3, #1\n    add r3, r0, #0\n    add r3, #0x5c\n    str r4, [r2, r3]\n    ldr r1, [r1]\n    add r0, #0x5c\n    ldr r0, [r1, r0]\n    cmp r0, #0x78\n    ble _021E6DBC\n    mov r0, #2\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl ov00_021E7300\n    ldr r2, _021E6E84 ; =_0221A680\n    ldr r1, _021E6E8C ; =0x000010D8\n    ldr r0, [r2]\n    mov r3, #0\n    str r3, [r0, r1]\n    add r0, r1, #0\n    ldr r3, [r2]\n    mov r6, #1\n    add r0, #0xd\n    strb r6, [r3, r0]\n    add r0, r1, #0\n    ldr r3, [r2]\n    sub r0, #0x44\n    str r5, [r3, r0]\n    sub r1, #0x5c\n    ldr r0, [r2]\n    cmp r7, #0\n    str r4, [r0, r1]\n    beq _021E6DEE\n    mov r4, #2\n    ldr r0, _021E6E84 ; =_0221A680\n    mov r2, #1\n    ldr r1, [r0]\n    ldr r0, _021E6E90 ; =0x000010A0\n    cmp r5, #0\n    str r2, [r1, r0]\n    bge _021E6E12\n    lsl r0, r4, #0x18\n    mov r2, #0\n    ldr r1, _021E6E94 ; =ov00_021E6ED8\n    ldr r3, _021E6E98 ; =ov00_021E6FE0\n    lsr r0, r0, #0x18\n    str r2, [sp]\n    bl ov00_021EDFBC\n    mov r3, #1\n    ldr r1, _021E6E84 ; =_0221A680\n    b _021E6E24\n    ldr r1, _021E6E9C ; =ov00_021E6FBC\n    mov r2, #0\n    ldr r3, _021E6E98 ; =ov00_021E6FE0\n    add r0, r5, #0\n    str r2, [sp]\n    bl ov00_021EE054\n    ldr r1, _021E6E84 ; =_0221A680\n    mov r3, #2\n    ldr r2, [r1]\n    ldr r1, _021E6EA0 ; =0x00001074\n    cmp r0, #0\n    str r3, [r2, r1]\n    ldr r0, _021E6EA4 ; =0x000010CC\n    bne _021E6E4E\n    ldr r1, _021E6E84 ; =_0221A680\n    ldr r3, [r1]\n    ldr r2, [r3, r0]\n    add r2, r2, #1\n    str r2, [r3, r0]\n    ldr r1, [r1]\n    ldr r0, [r1, r0]\n    cmp r0, #0x78\n    ble _021E6E48\n    mov r0, #2\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _021E6E84 ; =_0221A680\n    mov r3, #0\n    ldr r2, [r1]\n    str r3, [r2, r0]\n    ldr r1, [r1]\n    mov r2, #5\n    sub r0, #0x5c\n    str r2, [r1, r0]\n    ldr r0, _021E6EA8 ; =ov00_021E6428\n    bl ov00_021F989C\n    ldr r0, _021E6EAC ; =ov00_021E6484\n    bl ov00_021F98BC\n    ldr r0, _021E6EB0 ; =ov00_021E6554\n    mov r1, #0\n    bl ov00_021EE24C\n    ldr r0, _021E6EB4 ; =ov00_021E6240\n    bl ov00_021F98DC\n    ldr r1, _021E6E84 ; =_0221A680\n    mov r0, #0\n    ldr r2, [r1]\n    ldr r1, _021E6EB8 ; =0x00001078\n    str r0, [r2, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E6E84: .word _0221A680\n    _021E6E88: .word 0x00001070\n    _021E6E8C: .word 0x000010D8\n    _021E6E90: .word 0x000010A0\n    _021E6E94: .word ov00_021E6ED8\n    _021E6E98: .word ov00_021E6FE0\n    _021E6E9C: .word ov00_021E6FBC\n    _021E6EA0: .word 0x00001074\n    _021E6EA4: .word 0x000010CC\n    _021E6EA8: .word ov00_021E6428\n    _021E6EAC: .word ov00_021E6484\n    _021E6EB0: .word ov00_021E6554\n    _021E6EB4: .word ov00_021E6240\n    _021E6EB8: .word 0x00001078"
    );
    #endif
}

void ov00_021E6EBC(void) {
    /* Original at 0x021E6EBC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E6ED0 ; =_0221A680\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _021E6ECA\n    ldr r0, _021E6ED4 ; =0x00001094\n    ldr r0, [r1, r0]\n    bx lr\n    mov r0, #0\n    mvn r0, r0\n    bx lr\n    _021E6ED0: .word _0221A680\n    _021E6ED4: .word 0x00001094"
    );
    #endif
}

void ov00_021E6ED8(void) {
    /* Original at 0x021E6ED8 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _021E6FA0 ; =_0221A680\n    add r3, r0, #0\n    add r0, r1, #0\n    add r6, r2, #0\n    mov r4, #0\n    ldr r2, [r7]\n    ldr r1, _021E6FA4 ; =0x000010A0\n    ldr r5, [sp, #0x18]\n    str r4, [r2, r1]\n    cmp r3, #0\n    bne _021E6F9E\n    cmp r0, #0\n    bne _021E6F92\n    bl sub_0203993C\n    bl sub_02034098\n    cmp r0, #0\n    beq _021E6F08\n    sub r0, r4, #1\n    cmp r5, r0\n    bne _021E6F08\n    mov r4, #1\n    ldr r0, _021E6FA0 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E6FA8 ; =0x00000FBC\n    ldr r1, [r1, r0]\n    cmp r1, #0\n    beq _021E6F1E\n    add r0, r5, #0\n    blx r1\n    cmp r0, #0\n    bne _021E6F1E\n    mov r4, #1\n    ldr r0, _021E6FA0 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E6FAC ; =0x000010E0\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    bne _021E6F2E\n    cmp r4, #0\n    beq _021E6F66\n    bl ov00_021EE4FC\n    ldr r1, _021E6FA0 ; =_0221A680\n    ldr r2, [r1]\n    ldr r1, _021E6FB0 ; =0x000010D8\n    ldr r1, [r2, r1]\n    mvn r1, r1\n    and r0, r1\n    str r0, [sp]\n    bl ov00_021EE4FC\n    add r4, r0, #0\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _021E6F66\n    add r0, sp, #0\n    bl ov00_021EE384\n    ldr r0, [sp]\n    eor r0, r4\n    cmp r0, #1\n    bne _021E6F9E\n    ldr r0, _021E6FA0 ; =_0221A680\n    mov r2, #6\n    ldr r1, [r0]\n    ldr r0, _021E6FB4 ; =0x00001070\n    str r2, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E6FA0 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E6FB8 ; =0x00001094\n    str r5, [r1, r0]\n    bl ov00_021EE4FC\n    ldr r2, _021E6FA0 ; =_0221A680\n    ldr r1, _021E6FB0 ; =0x000010D8\n    ldr r3, [r2]\n    str r0, [r3, r1]\n    ldr r2, [r2]\n    ldr r0, [r2, r1]\n    cmp r0, #1\n    bne _021E6F8A\n    mov r0, #6\n    sub r1, #0x68\n    str r0, [r2, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    bl ov00_021E6388\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, #0\n    bne _021E6F9E\n    ldr r0, [r7]\n    sub r2, r4, #1\n    sub r1, #8\n    str r2, [r0, r1]\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E6FA0: .word _0221A680\n    _021E6FA4: .word 0x000010A0\n    _021E6FA8: .word 0x00000FBC\n    _021E6FAC: .word 0x000010E0\n    _021E6FB0: .word 0x000010D8\n    _021E6FB4: .word 0x00001070\n    _021E6FB8: .word 0x00001094"
    );
    #endif
}

void ov00_021E6FBC(void) {
    /* Original at 0x021E6FBC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r2, _021E6FD8 ; =_0221A680\n    mov r4, #0\n    ldr r3, [r2]\n    ldr r2, _021E6FDC ; =0x000010A0\n    cmp r0, #0\n    str r4, [r3, r2]\n    bne _021E6FD6\n    cmp r1, #0\n    bne _021E6FD6\n    ldr r0, [sp, #8]\n    bl ov00_021E6388\n    pop {r4, pc}\n    _021E6FD8: .word _0221A680\n    _021E6FDC: .word 0x000010A0"
    );
    #endif
}

void ov00_021E6FE0(void) {
    /* Original at 0x021E6FE0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r2, _021E7004 ; =_0221A680\n    ldr r1, _021E7008 ; =0x00001098\n    ldr r3, [r2]\n    str r0, [r3, r1]\n    ldr r3, [r2]\n    add r2, r1, #0\n    sub r2, #0xe4\n    ldr r2, [r3, r2]\n    cmp r2, #0\n    beq _021E7000\n    sub r1, #0xe0\n    lsl r0, r0, #0x10\n    ldr r1, [r3, r1]\n    lsr r0, r0, #0x10\n    blx r2\n    pop {r3, pc}\n    nop\n    _021E7004: .word _0221A680\n    _021E7008: .word 0x00001098"
    );
    #endif
}

void ov00_021E700C(void) {
    /* Original at 0x021E700C */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r0, _021E7074 ; =_0221A680\n    ldr r1, [r0]\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl DWC_CheckHasProfile\n    cmp r0, #0\n    bne _021E7034\n    ldr r0, _021E7074 ; =_0221A680\n    ldr r1, [r0]\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0xc\n    bl DWC_CreateExchangeToken\n    b _021E7044\n    ldr r0, _021E7074 ; =_0221A680\n    ldr r1, [r0]\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    add r1, sp, #0\n    bl DWC_CreateExchangeToken\n    mov r4, #0\n    mov r7, #1\n    ldr r6, _021E7074 ; =_0221A680\n    add r5, r4, #0\n    lsl r7, r7, #8\n    mov r0, #1\n    ldr r1, [r6]\n    lsl r0, r0, #8\n    ldr r0, [r1, r0]\n    add r0, r0, r5\n    bl DWC_GetFriendDataType\n    ldr r0, [r6]\n    ldr r0, [r0, r7]\n    add r0, r0, r5\n    bl DWC_IsBuddyFriendData\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, #0x20\n    blt _021E704E\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _021E7074: .word _0221A680"
    );
    #endif
}

void ov00_021E7078(void) {
    ov00_021E7AA4();
}

void ov00_021E7080(void) {
    /* Original at 0x021E7080 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E7094 ; =_0221A680\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _021E708E\n    ldr r0, _021E7098 ; =0x0000109C\n    ldr r0, [r1, r0]\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _021E7094: .word _0221A680\n    _021E7098: .word 0x0000109C"
    );
    #endif
}

void ov00_021E709C(void) {
    /* Original at 0x021E709C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E70B0 ; =_0221A680\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _021E70AA\n    ldr r0, _021E70B4 ; =0x00001098\n    ldr r0, [r1, r0]\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _021E70B0: .word _0221A680\n    _021E70B4: .word 0x00001098"
    );
    #endif
}

void ov00_021E70B8(void) {
    /* Original at 0x021E70B8 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E70C4 ; =_0221A680\n    ldr r2, [r1]\n    ldr r1, _021E70C8 ; =0x0000109C\n    str r0, [r2, r1]\n    bx lr\n    nop\n    _021E70C4: .word _0221A680\n    _021E70C8: .word 0x0000109C"
    );
    #endif
}

void ov00_021E70CC(void) {
    /* Original at 0x021E70CC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E70D8 ; =_0221A680\n    ldr r2, [r1]\n    ldr r1, _021E70DC ; =0x000010D6\n    strh r0, [r2, r1]\n    bx lr\n    nop\n    _021E70D8: .word _0221A680\n    _021E70DC: .word 0x000010D6"
    );
    #endif
}

void ov00_021E70E0(void) {
    /* Original at 0x021E70E0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E70EC ; =_0221A680\n    mov r2, #2\n    ldr r1, [r0]\n    ldr r0, _021E70F0 ; =0x000010E0\n    strb r2, [r1, r0]\n    bx lr\n    _021E70EC: .word _0221A680\n    _021E70F0: .word 0x000010E0"
    );
    #endif
}

void ov00_021E70F4(void) {
    /* Original at 0x021E70F4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E7124 ; =_0221A680\n    ldr r2, [r0]\n    ldr r0, _021E7128 ; =0x000010E0\n    ldrb r1, [r2, r0]\n    cmp r1, #0\n    bne _021E710E\n    mov r1, #1\n    strb r1, [r2, r0]\n    ldr r0, _021E712C ; =ov00_021E70E0\n    mov r1, #0\n    bl ov00_021F12F0\n    ldr r0, _021E7124 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E7128 ; =0x000010E0\n    ldrb r0, [r1, r0]\n    cmp r0, #2\n    bne _021E711E\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021E7124: .word _0221A680\n    _021E7128: .word 0x000010E0\n    _021E712C: .word ov00_021E70E0"
    );
    #endif
}

void ov00_021E7130(void) {
    /* Original at 0x021E7130 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E713C ; =_0221A680\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _021E7140 ; =0x000010E0\n    strb r2, [r1, r0]\n    bx lr\n    _021E713C: .word _0221A680\n    _021E7140: .word 0x000010E0"
    );
    #endif
}

void ov00_021E7144(void) {
    ov00_021EE448();
}

void ov00_021E714C(void) {
    /* Original at 0x021E714C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    cmp r0, #0\n    beq _021E71B4\n    ldr r2, _021E7208 ; =_0221A680\n    ldr r0, _021E720C ; =0x00001088\n    ldr r3, [r2]\n    mov r4, #0xb\n    str r4, [r3, r0]\n    ldr r2, [r2]\n    sub r0, #0xf0\n    ldr r0, [r2, r0]\n    cmp r0, #0\n    bne _021E7204\n    add r0, r1, #0\n    ldr r1, _021E7210 ; =0x0000F020\n    bl Heap_Alloc\n    ldr r2, _021E7208 ; =_0221A680\n    ldr r1, _021E7214 ; =0x00000F98\n    ldr r3, [r2]\n    str r0, [r3, r1]\n    ldr r0, [r2]\n    mov r2, #0\n    ldr r0, [r0, r1]\n    mov r1, #0x1f\n    add r0, #0x1f\n    bic r0, r1\n    mov r1, #0xf\n    lsl r1, r1, #0xc\n    bl NNS_FndCreateExpHeapEx\n    ldr r2, _021E7208 ; =_0221A680\n    ldr r1, _021E7218 ; =0x00000F9C\n    ldr r3, [r2]\n    str r0, [r3, r1]\n    ldr r0, [r2]\n    ldr r0, [r0, r1]\n    mov r1, #0x10\n    bl NNS_FndSetGroupIDForExpHeap\n    ldr r0, _021E7208 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E7218 ; =0x00000F9C\n    ldr r0, [r1, r0]\n    bl NNS_FndGetTotalFreeSizeForExpHeap\n    ldr r1, _021E7208 ; =_0221A680\n    ldr r2, [r1]\n    mov r1, #0xfa\n    lsl r1, r1, #4\n    str r0, [r2, r1]\n    pop {r4, pc}\n    ldr r2, _021E7208 ; =_0221A680\n    ldr r0, _021E721C ; =0x00001084\n    ldr r4, [r2]\n    add r1, r0, #4\n    ldr r3, [r4, r0]\n    str r3, [r4, r1]\n    add r1, r0, #0\n    ldr r4, [r2]\n    sub r1, #0xec\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    beq _021E7204\n    sub r0, #0xe8\n    ldr r0, [r4, r0]\n    bl NNS_FndGetTotalFreeSizeForExpHeap\n    mov r1, #0xfa\n    lsl r1, r1, #4\n    ldr r2, [r4, r1]\n    cmp r2, r0\n    beq _021E71E6\n    mov r0, #1\n    bl sub_02039AD8\n    pop {r4, pc}\n    sub r0, r1, #4\n    ldr r0, [r4, r0]\n    bl NNS_FndDestroyExpHeap\n    ldr r0, _021E7208 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E7214 ; =0x00000F98\n    ldr r0, [r1, r0]\n    bl Heap_Free\n    ldr r0, _021E7208 ; =_0221A680\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _021E7214 ; =0x00000F98\n    str r2, [r1, r0]\n    pop {r4, pc}\n    nop\n    _021E7208: .word _0221A680\n    _021E720C: .word 0x00001088\n    _021E7210: .word 0x0000F020\n    _021E7214: .word 0x00000F98\n    _021E7218: .word 0x00000F9C\n    _021E721C: .word 0x00001084"
    );
    #endif
}

void ov00_021E7220(void) {
    /* Original at 0x021E7220 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E722C ; =_0221A680\n    ldr r2, [r1]\n    ldr r1, _021E7230 ; =0x000010E5\n    strb r0, [r2, r1]\n    bx lr\n    nop\n    _021E722C: .word _0221A680\n    _021E7230: .word 0x000010E5"
    );
    #endif
}

void ov00_021E7234(void) {
    /* Original at 0x021E7234 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021E7274 ; =_0221A680\n    lsl r4, r0, #2\n    ldr r3, [r1]\n    mov r1, #0x3e\n    add r2, r3, r4\n    lsl r1, r1, #6\n    ldr r1, [r2, r1]\n    cmp r1, #0\n    beq _021E7270\n    add r2, r3, r0\n    ldr r0, _021E7278 ; =0x000010E1\n    ldrb r0, [r2, r0]\n    cmp r0, #1\n    bne _021E725A\n    add r0, r1, #0\n    bl Heap_Free\n    b _021E7262\n    mov r0, #0\n    add r2, r0, #0\n    bl ov00_021E6638\n    ldr r0, _021E7274 ; =_0221A680\n    mov r2, #0\n    ldr r0, [r0]\n    add r1, r0, r4\n    mov r0, #0x3e\n    lsl r0, r0, #6\n    str r2, [r1, r0]\n    pop {r4, pc}\n    nop\n    _021E7274: .word _0221A680\n    _021E7278: .word 0x000010E1"
    );
    #endif
}

void ov00_021E727C(void) {
    /* Original at 0x021E727C */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov00_021E7234\n    ldr r0, _021E72F4 ; =_0221A680\n    lsl r4, r5, #2\n    ldr r2, [r0]\n    mov r0, #0x3e\n    add r1, r2, r4\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _021E72F0\n    ldr r1, _021E72F8 ; =0x00001088\n    ldr r0, [r2, r1]\n    cmp r0, #0xb\n    bne _021E72B4\n    sub r1, #0x68\n    bl Heap_Alloc\n    ldr r2, _021E72F4 ; =_0221A680\n    ldr r1, [r2]\n    add r3, r1, r4\n    mov r1, #0x3e\n    lsl r1, r1, #6\n    str r0, [r3, r1]\n    mov r3, #1\n    b _021E72CC\n    mov r0, #0\n    sub r1, #0x88\n    mov r2, #0x20\n    bl ov00_021E65D4\n    ldr r2, _021E72F4 ; =_0221A680\n    ldr r1, [r2]\n    add r3, r1, r4\n    mov r1, #0x3e\n    lsl r1, r1, #6\n    str r0, [r3, r1]\n    mov r3, #0\n    ldr r0, [r2]\n    mov r2, #0x3e\n    add r1, r0, r5\n    ldr r0, _021E72FC ; =0x000010E1\n    lsl r2, r2, #6\n    strb r3, [r1, r0]\n    ldr r1, _021E72F4 ; =_0221A680\n    lsl r0, r5, #0x18\n    ldr r1, [r1]\n    mov r3, #0x1f\n    add r1, r1, r4\n    ldr r1, [r1, r2]\n    lsr r0, r0, #0x18\n    add r1, #0x1f\n    bic r1, r3\n    add r2, #0x80\n    bl ov00_021F9850\n    pop {r3, r4, r5, pc}\n    nop\n    _021E72F4: .word _0221A680\n    _021E72F8: .word 0x00001088\n    _021E72FC: .word 0x000010E1"
    );
    #endif
}

void ov00_021E7300(void) {
    ov00_021E7234(0);
}

void ov00_021E7314(void) {
    /* Original at 0x021E7314 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E7320 ; =_0221A680\n    ldr r1, [r0]\n    ldr r0, _021E7324 ; =0x000010E6\n    ldrb r0, [r1, r0]\n    bx lr\n    nop\n    _021E7320: .word _0221A680\n    _021E7324: .word 0x000010E6"
    );
    #endif
}

void ov00_021E7328(void) {
    /* Original at 0x021E7328 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E7334 ; =_0221A680\n    mov r2, #0\n    ldr r1, [r0]\n    ldr r0, _021E7338 ; =0x000010E6\n    strb r2, [r1, r0]\n    bx lr\n    _021E7334: .word _0221A680\n    _021E7338: .word 0x000010E6"
    );
    #endif
}

void ov00_021E733C(void) {
    /* Original at 0x021E733C */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl MIC_Init\n    bl PM_Init\n    mov r0, #1\n    bl PM_SetAmp\n    mov r0, #3\n    bl PM_SetAmpGain\n    ldr r0, _021E73CC ; =_0221A684\n    mov r2, #0\n    ldr r1, [r0, #4]\n    ldr r3, _021E73D0 ; =0x00001A78\n    add r5, r2, #0\n    str r2, [r1, r3]\n    add r1, r3, #0\n    ldr r4, [r0, #4]\n    add r1, #0xc\n    str r2, [r4, r1]\n    ldr r4, [r0, #4]\n    add r1, r3, #4\n    str r2, [r4, r1]\n    add r1, r3, #0\n    ldr r4, [r0, #4]\n    add r1, #8\n    str r2, [r4, r1]\n    ldr r1, [r0, #4]\n    add r3, #0x10\n    str r2, [r1, r3]\n    ldr r3, _021E73D4 ; =0x00001A8C\n    add r1, r2, #0\n    ldr r4, [r0, #4]\n    add r2, r2, #1\n    add r4, r4, r5\n    add r5, r5, #2\n    strh r1, [r4, r3]\n    cmp r2, #0x10\n    blt _021E737E\n    ldr r0, _021E73CC ; =_0221A684\n    ldr r2, [r0, #4]\n    ldr r0, _021E73D8 ; =0x00001AAC\n    str r1, [r2, r0]\n    mov r0, #1\n    bl VCT_EnableVAD\n    bl NNS_SndInit\n    ldr r0, _021E73CC ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E73DC ; =0x000019F8\n    add r0, r1, r0\n    bl NNS_SndStrmInit\n    ldr r1, _021E73CC ; =_0221A684\n    mov r0, #0\n    ldr r2, [r1, #4]\n    ldr r1, _021E73E0 ; =0x0000110C\n    add r1, r2, r1\n    mov r2, #0x22\n    lsl r2, r2, #6\n    bl MIi_CpuClearFast\n    ldr r0, _021E73CC ; =_0221A684\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #1\n    bl VCT_EnableEchoCancel\n    pop {r3, r4, r5, pc}\n    nop\n    _021E73CC: .word _0221A684\n    _021E73D0: .word 0x00001A78\n    _021E73D4: .word 0x00001A8C\n    _021E73D8: .word 0x00001AAC\n    _021E73DC: .word 0x000019F8\n    _021E73E0: .word 0x0000110C"
    );
    #endif
}

void ov00_021E73E4(void) {
    /* Original at 0x021E73E4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov00_021E73E8(void) {
    /* Original at 0x021E73E8 */
    /* Requires manual decompilation - 84 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    ldr r7, [sp, #0x1c]\n    cmp r0, #0\n    bne _021E7410\n    mov r7, #0\n    cmp r5, #0\n    bls _021E748A\n    ldr r0, [r4]\n    mov r1, #0\n    add r2, r6, #0\n    bl MI_CpuFill8\n    add r7, r7, #1\n    add r4, r4, #4\n    cmp r7, r5\n    blo _021E73FC\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E748C ; =_0221A684\n    ldr r1, _021E7490 ; =0x00001A59\n    ldr r0, [r0, #4]\n    ldrb r2, [r0, r1]\n    cmp r2, #0\n    beq _021E7432\n    add r1, r1, #3\n    add r0, r0, r1\n    ldr r1, _021E7494 ; =ov00_021E73E4\n    mov r2, #0\n    bl MIC_StartAutoSamplingAsync\n    ldr r1, _021E748C ; =_0221A684\n    mov r0, #0\n    ldr r2, [r1, #4]\n    ldr r1, _021E7490 ; =0x00001A59\n    strb r0, [r2, r1]\n    bl MIC_GetLastSamplingAddress\n    sub r0, r0, r7\n    cmp r0, r6\n    bhs _021E743E\n    add r7, r7, r6\n    ldr r0, _021E7498 ; =0x027FFFA8\n    ldrh r1, [r0]\n    mov r0, #2\n    lsl r0, r0, #0xe\n    and r0, r1\n    asr r0, r0, #0xf\n    beq _021E7454\n    ldr r0, _021E748C ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E749C ; =0x0000110C\n    add r7, r1, r0\n    ldr r0, _021E748C ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E74A0 ; =0x000019F0\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _021E7468\n    add r0, r7, #0\n    add r1, r6, #0\n    bl VCT_SendAudio\n    mov r7, #0\n    cmp r5, #0\n    bls _021E7480\n    ldr r0, [r4]\n    add r1, r6, #0\n    mov r2, #0\n    bl VCT_ReceiveAudio\n    add r7, r7, #1\n    add r4, r4, #4\n    cmp r7, r5\n    blo _021E746E\n    ldr r0, _021E748C ; =_0221A684\n    mov r2, #2\n    ldr r1, [r0, #4]\n    ldr r0, _021E74A4 ; =0x00001A58\n    strb r2, [r1, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E748C: .word _0221A684\n    _021E7490: .word 0x00001A59\n    _021E7494: .word ov00_021E73E4\n    _021E7498: .word 0x027FFFA8\n    _021E749C: .word 0x0000110C\n    _021E74A0: .word 0x000019F0\n    _021E74A4: .word 0x00001A58"
    );
    #endif
}

void ov00_021E74A8(void) {
    /* Original at 0x021E74A8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _021E74F4 ; =_0221A684\n    ldr r2, [r1, #4]\n    ldr r1, _021E74F8 ; =0x00001A54\n    ldr r4, [r2, r1]\n    cmp r4, #0\n    bne _021E74CA\n    bl VCT_CreateSession\n    add r4, r0, #0\n    bne _021E74C2\n    mov r0, #0\n    pop {r4, pc}\n    mov r1, #0\n    bl VCT_Request\n    b _021E74D2\n    add r0, r4, #0\n    mov r1, #0\n    bl VCT_Request\n    cmp r0, #0\n    beq _021E74E8\n    add r0, r4, #0\n    bl VCT_DeleteSession\n    ldr r1, _021E74F4 ; =_0221A684\n    mov r0, #0\n    ldr r2, [r1, #4]\n    ldr r1, _021E74F8 ; =0x00001A54\n    str r0, [r2, r1]\n    pop {r4, pc}\n    ldr r0, _021E74F4 ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E74F8 ; =0x00001A54\n    str r4, [r1, r0]\n    mov r0, #1\n    pop {r4, pc}\n    _021E74F4: .word _0221A684\n    _021E74F8: .word 0x00001A54"
    );
    #endif
}

void ov00_021E74FC(void) {
    /* Original at 0x021E74FC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E753C ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E7540 ; =0x00001A54\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _021E7536\n    ldr r1, [r0, #0xc]\n    cmp r1, #4\n    bne _021E7536\n    mov r1, #0\n    bl VCT_Response\n    cmp r0, #0\n    beq _021E751E\n    mov r0, #0\n    pop {r3, pc}\n    ldr r0, _021E753C ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E7540 ; =0x00001A54\n    ldr r0, [r1, r0]\n    bl VCT_StartStreaming\n    cmp r0, #0\n    beq _021E7532\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021E753C: .word _0221A684\n    _021E7540: .word 0x00001A54"
    );
    #endif
}

void ov00_021E7544(void) {
    /* Original at 0x021E7544 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #7\n    beq _021E755C\n    cmp r1, #9\n    beq _021E7554\n    cmp r1, #0xc\n    beq _021E7564\n    pop {r3, pc}\n    add r0, r2, #0\n    bl ov00_021E7638\n    pop {r3, pc}\n    add r0, r2, #0\n    bl VCT_StartStreaming\n    pop {r3, pc}\n    add r0, r2, #0\n    bl ov00_021E7638\n    pop {r3, pc}"
    );
    #endif
}

void ov00_021E756C(void) {
    /* Original at 0x021E756C */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r2, #0\n    cmp r1, #0xc\n    bhi _021E7624\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E7580: ; jump table\n    ldr r0, _021E7628 ; =_0221A684\n    ldr r2, [r0, #4]\n    ldr r0, _021E762C ; =0x00001A54\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    beq _021E75B6\n    add r0, r4, #0\n    mov r1, #3\n    bl VCT_Response\n    add r0, r4, #0\n    bl VCT_DeleteSession\n    pop {r4, pc}\n    str r4, [r2, r0]\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl VCT_Response\n    add r0, r4, #0\n    bl ov00_021E7638\n    bl ov00_021E6A4C\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov00_021E7638\n    bl ov00_021E6A4C\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #4\n    bl VCT_Response\n    add r0, r4, #0\n    bl ov00_021E7638\n    pop {r4, pc}\n    ldr r0, _021E7628 ; =_0221A684\n    ldr r2, [r4]\n    ldr r1, [r0, #4]\n    ldr r0, _021E7630 ; =0x000019E8\n    ldr r0, [r1, r0]\n    cmp r2, r0\n    beq _021E7600\n    add r0, r4, #0\n    bl ov00_021E7638\n    pop {r4, pc}\n    add r0, r4, #0\n    bl VCT_StartStreaming\n    cmp r0, #0\n    beq _021E7624\n    ldr r0, _021E7628 ; =_0221A684\n    mov r2, #2\n    ldr r1, [r0, #4]\n    ldr r0, _021E7634 ; =0x000019EC\n    str r2, [r1, r0]\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov00_021E7638\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov00_021E7638\n    pop {r4, pc}\n    nop\n    _021E7628: .word _0221A684\n    _021E762C: .word 0x00001A54\n    _021E7630: .word 0x000019E8\n    _021E7634: .word 0x000019EC"
    );
    #endif
}

void ov00_021E7638(void) {
    /* Original at 0x021E7638 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl VCT_StopStreaming\n    add r0, r4, #0\n    bl VCT_DeleteSession\n    ldr r0, _021E7654 ; =_0221A684\n    mov r2, #0\n    ldr r1, [r0, #4]\n    ldr r0, _021E7658 ; =0x00001A54\n    str r2, [r1, r0]\n    pop {r4, pc}\n    nop\n    _021E7654: .word _0221A684\n    _021E7658: .word 0x00001A54"
    );
    #endif
}

void ov00_021E765C(void) {
    /* Original at 0x021E765C */
    /* Requires manual decompilation - 143 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    bl OS_GetTick\n    add r4, r0, #0\n    ldr r0, _021E778C ; =_0221A684\n    add r5, r1, #0\n    ldr r0, [r0, #8]\n    sub r1, r4, r0\n    mov r0, #0xfa\n    lsl r0, r0, #8\n    mul r0, r1\n    ldr r1, _021E7790 ; =0x000082EA\n    bl _u32_div_f\n    ldr r1, _021E778C ; =_0221A684\n    ldr r3, _021E7794 ; =0x0000411A\n    ldr r2, [r1]\n    sub r0, r0, r3\n    add r2, r2, r0\n    ldr r0, _021E7798 ; =0xFFFFD8F0\n    str r2, [r1]\n    cmp r2, r0\n    bge _021E768E\n    mov r0, #0\n    str r0, [r1]\n    ldr r0, _021E778C ; =_0221A684\n    str r4, [r0, #8]\n    str r5, [r0, #0xc]\n    bl VCT_Main\n    ldr r4, _021E778C ; =_0221A684\n    ldr r0, _021E7794 ; =0x0000411A\n    ldr r1, [r4]\n    cmp r1, r0\n    blt _021E76B4\n    add r6, r0, #0\n    add r5, r0, #0\n    bl VCT_Main\n    ldr r0, [r4]\n    sub r0, r0, r6\n    str r0, [r4]\n    cmp r0, r5\n    bge _021E76A6\n    ldr r0, _021E778C ; =_0221A684\n    ldr r2, [r0, #4]\n    mov r0, #0x6a\n    lsl r0, r0, #6\n    ldr r1, [r2, r0]\n    cmp r1, #0\n    beq _021E7708\n    sub r0, r0, #4\n    ldr r0, [r2, r0]\n    cmp r0, #3\n    bhi _021E76FC\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _021E76D6: ; jump table\n    mov r0, #3\n    bl PM_SetAmpGain\n    b _021E76FC\n    mov r0, #2\n    bl PM_SetAmpGain\n    b _021E76FC\n    mov r0, #1\n    bl PM_SetAmpGain\n    b _021E76FC\n    mov r0, #0\n    bl PM_SetAmpGain\n    ldr r0, _021E778C ; =_0221A684\n    mov r2, #0\n    ldr r1, [r0, #4]\n    mov r0, #0x6a\n    lsl r0, r0, #6\n    str r2, [r1, r0]\n    ldr r3, _021E778C ; =_0221A684\n    ldr r2, _021E779C ; =0x000019E8\n    ldr r0, [r3, #4]\n    ldr r1, [r0, r2]\n    cmp r1, #3\n    beq _021E7788\n    add r1, r2, #4\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    beq _021E7724\n    cmp r1, #1\n    beq _021E7768\n    cmp r1, #2\n    pop {r4, r5, r6, pc}\n    bl ov00_021E6964\n    cmp r0, #0\n    bne _021E774A\n    mov r0, #1\n    bl ov00_021E74A8\n    cmp r0, #0\n    beq _021E7788\n    ldr r1, _021E778C ; =_0221A684\n    ldr r0, _021E77A0 ; =0x000019EC\n    ldr r2, [r1, #4]\n    mov r3, #1\n    str r3, [r2, r0]\n    ldr r1, [r1, #4]\n    mov r2, #0x3c\n    add r0, #0x6e\n    strh r2, [r1, r0]\n    pop {r4, r5, r6, pc}\n    bl ov00_021E6964\n    cmp r0, #1\n    bne _021E7788\n    mov r0, #0\n    bl ov00_021E74FC\n    cmp r0, #0\n    beq _021E7788\n    ldr r0, _021E778C ; =_0221A684\n    mov r2, #2\n    ldr r1, [r0, #4]\n    ldr r0, _021E77A0 ; =0x000019EC\n    str r2, [r1, r0]\n    pop {r4, r5, r6, pc}\n    add r1, r2, #0\n    add r1, #0x72\n    ldrh r1, [r0, r1]\n    sub r4, r1, #1\n    add r1, r2, #0\n    add r1, #0x72\n    strh r4, [r0, r1]\n    add r0, r2, #0\n    ldr r3, [r3, #4]\n    add r0, #0x72\n    ldrh r0, [r3, r0]\n    cmp r0, #0\n    bne _021E7788\n    mov r1, #0\n    add r0, r2, #4\n    str r1, [r3, r0]\n    pop {r4, r5, r6, pc}\n    nop\n    _021E778C: .word _0221A684\n    _021E7790: .word 0x000082EA\n    _021E7794: .word 0x0000411A\n    _021E7798: .word 0xFFFFD8F0\n    _021E779C: .word 0x000019E8\n    _021E77A0: .word 0x000019EC"
    );
    #endif
}

void ov00_021E77A4(void) {
    /* Original at 0x021E77A4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r3, _021E77C8 ; =_0221A684\n    ldr r3, [r3, #4]\n    cmp r3, #0\n    bne _021E77B2\n    mov r0, #0\n    pop {r3, pc}\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl VCT_HandleData\n    cmp r0, #0\n    beq _021E77C2\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _021E77C8: .word _0221A684"
    );
    #endif
}

void ov00_021E77CC(void) {
    /* Original at 0x021E77CC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r4, #0x20\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, r3, #0\n    add r1, r4, #0\n    bl Heap_Alloc\n    str r0, [r5]\n    mov r1, #0\n    add r2, r4, #0\n    bl MI_CpuFill8\n    ldr r1, [r5]\n    mov r0, #0x1f\n    add r1, #0x1f\n    bic r1, r0\n    str r1, [r6]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov00_021E77F4(void) {
    /* Original at 0x021E77F4 */
    /* Requires manual decompilation - 196 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    add r6, r1, #0\n    add r0, sp, #0x14\n    mov r1, #0\n    strb r1, [r0]\n    strb r1, [r0, #1]\n    strb r1, [r0, #2]\n    ldr r0, _021E797C ; =_0221A684\n    add r4, r2, #0\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _021E7858\n    str r1, [sp, #0x10]\n    ldr r1, _021E7980 ; =_0221A688\n    ldr r2, _021E7984 ; =0x00001AB0\n    add r0, sp, #0x10\n    add r3, r5, #0\n    bl ov00_021E77CC\n    ldr r0, _021E797C ; =_0221A684\n    mov r2, #0x22\n    ldr r3, [sp, #0x10]\n    ldr r1, [r0, #4]\n    lsl r2, r2, #6\n    str r3, [r1, r2]\n    ldr r1, [r0, #4]\n    add r0, r2, #0\n    add r0, #8\n    add r2, r2, #4\n    add r0, r1, r0\n    add r1, r1, r2\n    mov r2, #0x8f\n    lsl r2, r2, #6\n    mul r2, r4\n    add r2, #0x20\n    add r3, r5, #0\n    bl ov00_021E77CC\n    ldr r1, _021E797C ; =_0221A684\n    ldr r0, _021E7988 ; =0x000019F4\n    ldr r2, [r1, #4]\n    str r5, [r2, r0]\n    ldr r1, [r1, #4]\n    mov r2, #0\n    sub r0, #0x68\n    str r2, [r1, r0]\n    bl ov00_021E733C\n    ldr r3, _021E797C ; =_0221A684\n    mov r5, #0x22\n    ldr r0, [r3, #4]\n    ldr r2, _021E798C ; =0x00001A5C\n    mov r1, #3\n    str r1, [r0, r2]\n    ldr r1, [r3, #4]\n    add r0, r2, #4\n    str r1, [r1, r0]\n    add r0, r2, #0\n    ldr r1, [r3, #4]\n    lsl r5, r5, #6\n    add r0, #8\n    str r5, [r1, r0]\n    mov r5, #0x41\n    add r0, r2, #0\n    ldr r1, [r3, #4]\n    lsl r5, r5, #6\n    add r0, #0xc\n    str r5, [r1, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    mov r1, #1\n    add r0, #0x10\n    str r1, [r5, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    mov r7, #0\n    add r0, #0x14\n    str r7, [r5, r0]\n    add r0, r2, #0\n    ldr r5, [r3, #4]\n    add r0, #0x18\n    str r7, [r5, r0]\n    sub r0, r2, #3\n    ldr r5, [r3, #4]\n    sub r2, #0x64\n    strb r1, [r5, r0]\n    ldr r0, [r3, #4]\n    add r0, r0, r2\n    add r2, sp, #0x14\n    bl NNS_SndStrmAllocChannel\n    ldr r0, _021E797C ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E7990 ; =0x000019F8\n    add r0, r1, r0\n    add r1, r7, #0\n    bl NNS_SndStrmSetVolume\n    ldr r0, _021E797C ; =_0221A684\n    ldr r3, _021E7994 ; =0x0000088C\n    ldr r2, [r0, #4]\n    mov r0, #0x41\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    ldr r0, _021E7998 ; =ov00_021E73E8\n    mov r1, #1\n    str r0, [sp, #8]\n    ldr r0, _021E7990 ; =0x000019F8\n    str r2, [sp, #0xc]\n    add r0, r2, r0\n    add r2, r2, r3\n    sub r3, #0xc\n    bl NNS_SndStrmSetup\n    ldr r1, _021E797C ; =_0221A684\n    ldr r0, _021E799C ; =0x000019EC\n    ldr r2, [r1, #4]\n    add r3, r7, #0\n    str r3, [r2, r0]\n    ldr r1, [r1, #4]\n    add r0, #0x68\n    str r3, [r1, r0]\n    bl sub_0203993C\n    bl sub_02034084\n    cmp r0, #0\n    bne _021E7900\n    mov r0, #1\n    str r0, [sp, #0x20]\n    b _021E7904\n    mov r0, #3\n    str r0, [sp, #0x20]\n    ldr r1, _021E797C ; =_0221A684\n    ldr r3, [sp, #0x20]\n    ldr r2, [r1, #4]\n    ldr r0, _021E79A0 ; =0x000019E8\n    str r3, [r2, r0]\n    ldr r1, [r1, #4]\n    sub r0, #0x58\n    add r0, r1, r0\n    str r0, [sp, #0x18]\n    str r4, [sp, #0x1c]\n    bl ov00_021EE490\n    add r1, sp, #0x10\n    strb r0, [r1, #0x14]\n    mov r0, #0\n    ldrb r1, [r1, #0x14]\n    mvn r0, r0\n    cmp r1, r0\n    bne _021E792E\n    bl GF_AssertFail\n    ldr r0, _021E797C ; =_0221A684\n    ldr r1, _021E79A0 ; =0x000019E8\n    ldr r0, [r0, #4]\n    ldr r1, [r0, r1]\n    cmp r1, #3\n    bne _021E7940\n    ldr r1, _021E79A4 ; =ov00_021E7544\n    str r1, [sp, #0x30]\n    b _021E7944\n    ldr r1, _021E79A8 ; =ov00_021E756C\n    str r1, [sp, #0x30]\n    mov r1, #0\n    str r1, [sp, #0x34]\n    ldr r1, _021E79AC ; =0x00000884\n    ldr r0, [r0, r1]\n    str r0, [sp, #0x28]\n    mov r0, #0x8f\n    lsl r0, r0, #6\n    mul r0, r4\n    add r0, #0x20\n    str r0, [sp, #0x2c]\n    add r0, sp, #0x18\n    bl VCT_Init\n    ldr r0, _021E797C ; =_0221A684\n    mov r2, #0\n    ldr r1, [r0, #4]\n    ldr r0, _021E79B0 ; =0x000019F0\n    str r2, [r1, r0]\n    add r0, r6, #0\n    bl VCT_SetCodec\n    bl ov00_021E79B4\n    mov r0, #1\n    bl VCT_EnableEchoCancel\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E797C: .word _0221A684\n    _021E7980: .word _0221A688\n    _021E7984: .word 0x00001AB0\n    _021E7988: .word 0x000019F4\n    _021E798C: .word 0x00001A5C\n    _021E7990: .word 0x000019F8\n    _021E7994: .word 0x0000088C\n    _021E7998: .word ov00_021E73E8\n    _021E799C: .word 0x000019EC\n    _021E79A0: .word 0x000019E8\n    _021E79A4: .word ov00_021E7544\n    _021E79A8: .word ov00_021E756C\n    _021E79AC: .word 0x00000884\n    _021E79B0: .word 0x000019F0"
    );
    #endif
}

void ov00_021E79B4(void) {
    /* Original at 0x021E79B4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E79C0 ; =_0221A684\n    ldr r3, _021E79C4 ; =NNS_SndStrmStart\n    ldr r1, [r0, #4]\n    ldr r0, _021E79C8 ; =0x000019F8\n    add r0, r1, r0\n    bx r3\n    _021E79C0: .word _0221A684\n    _021E79C4: .word NNS_SndStrmStart\n    _021E79C8: .word 0x000019F8"
    );
    #endif
}

void ov00_021E79CC(void) {
    /* Original at 0x021E79CC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _021E7A14 ; =_0221A684\n    ldr r1, _021E7A18 ; =0x00001A54\n    ldr r2, [r0, #4]\n    ldr r0, [r2, r1]\n    cmp r0, #0\n    beq _021E79E2\n    sub r1, #0x68\n    ldr r1, [r2, r1]\n    cmp r1, #0\n    bne _021E79E8\n    bl ov00_021E6A4C\n    pop {r3, pc}\n    cmp r1, #1\n    bne _021E79FC\n    mov r1, #2\n    bl VCT_Request\n    cmp r0, #0\n    beq _021E79FC\n    bl ov00_021E6A4C\n    pop {r3, pc}\n    ldr r0, _021E7A14 ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E7A18 ; =0x00001A54\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl VCT_Request\n    cmp r0, #0\n    beq _021E7A12\n    bl ov00_021E6A4C\n    pop {r3, pc}\n    _021E7A14: .word _0221A684\n    _021E7A18: .word 0x00001A54"
    );
    #endif
}

void ov00_021E7A1C(void) {
    /* Original at 0x021E7A1C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _021E7A28 ; =_0221A684\n    ldr r2, [r1, #4]\n    ldr r1, _021E7A2C ; =0x0000198C\n    str r0, [r2, r1]\n    bx lr\n    nop\n    _021E7A28: .word _0221A684\n    _021E7A2C: .word 0x0000198C"
    );
    #endif
}

void ov00_021E7A30(void) {
    /* Original at 0x021E7A30 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r0, _021E7A90 ; =_0221A684\n    ldr r1, [r0, #4]\n    cmp r1, #0\n    beq _021E7A8C\n    ldr r0, _021E7A94 ; =0x0000198C\n    ldr r4, [r1, r0]\n    bl MIC_StopAutoSampling\n    ldr r0, _021E7A90 ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E7A98 ; =0x000019F8\n    add r0, r1, r0\n    bl NNS_SndStrmStop\n    ldr r0, _021E7A90 ; =_0221A684\n    ldr r1, [r0, #4]\n    ldr r0, _021E7A98 ; =0x000019F8\n    add r0, r1, r0\n    bl NNS_SndStrmFreeChannel\n    bl VCT_Cleanup\n    ldr r0, _021E7A90 ; =_0221A684\n    ldr r1, _021E7A9C ; =0x00000888\n    ldr r2, [r0, #4]\n    ldr r0, _021E7AA0 ; =0x000019F4\n    ldr r1, [r2, r1]\n    ldr r0, [r2, r0]\n    bl Heap_FreeExplicit\n    ldr r0, _021E7A90 ; =_0221A684\n    mov r1, #0x22\n    ldr r2, [r0, #4]\n    ldr r0, _021E7AA0 ; =0x000019F4\n    lsl r1, r1, #6\n    ldr r0, [r2, r0]\n    ldr r1, [r2, r1]\n    bl Heap_FreeExplicit\n    mov r1, #0\n    ldr r0, _021E7A90 ; =_0221A684\n    cmp r4, #0\n    str r1, [r0, #4]\n    beq _021E7A8C\n    blx r4\n    pop {r4, pc}\n    nop\n    _021E7A90: .word _0221A684\n    _021E7A94: .word 0x0000198C\n    _021E7A98: .word 0x000019F8\n    _021E7A9C: .word 0x00000888\n    _021E7AA0: .word 0x000019F4"
    );
    #endif
}

void ov00_021E7AA4(void) {
    VCT_GetVADInfo(0);
}

void ov00_021E7ACC(void) {
    /* Original at 0x021E7ACC */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E7AD8 ; =_0221A684\n    mov r2, #1\n    ldr r1, [r0, #4]\n    ldr r0, _021E7ADC ; =0x000019F0\n    str r2, [r1, r0]\n    bx lr\n    _021E7AD8: .word _0221A684\n    _021E7ADC: .word 0x000019F0"
    );
    #endif
}

void ov00_021E7AE0(void) {
    /* Original at 0x021E7AE0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _021E7AEC ; =_0221A684\n    mov r2, #0\n    ldr r1, [r0, #4]\n    ldr r0, _021E7AF0 ; =0x000019F0\n    str r2, [r1, r0]\n    bx lr\n    _021E7AEC: .word _0221A684\n    _021E7AF0: .word 0x000019F0"
    );
    #endif
}

void ov00_021E7AF4(void) {
    /* Original at 0x021E7AF4 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r0, _021E7B54 ; =_0221A684\n    add r7, r1, #0\n    ldr r1, [r0, #4]\n    cmp r1, #0\n    beq _021E7B0A\n    ldr r0, _021E7B58 ; =0x000019E8\n    ldr r0, [r1, r0]\n    cmp r0, #3\n    beq _021E7B0E\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r4, #0\n    add r5, r4, #0\n    cmp r4, r7\n    beq _021E7B48\n    mov r0, #1\n    lsl r0, r4\n    tst r0, r6\n    beq _021E7B48\n    ldr r0, _021E7B54 ; =_0221A684\n    ldr r0, [r0, #4]\n    add r1, r0, r5\n    ldr r0, _021E7B5C ; =0x000019D8\n    ldr r0, [r1, r0]\n    cmp r0, #1\n    beq _021E7B48\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    bl VCT_AddConferenceClient\n    cmp r0, #0\n    beq _021E7B3C\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, _021E7B54 ; =_0221A684\n    mov r1, #1\n    ldr r0, [r0, #4]\n    add r2, r0, r5\n    ldr r0, _021E7B5C ; =0x000019D8\n    str r1, [r2, r0]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _021E7B12\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _021E7B54: .word _0221A684\n    _021E7B58: .word 0x000019E8\n    _021E7B5C: .word 0x000019D8"
    );
    #endif
}
