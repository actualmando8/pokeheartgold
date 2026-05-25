/* Decompiled from asm/unk_0202FBCC.s */
#include "global.h"

void sub_0202FBCC(void) {
    /* Original at 0x0202FBCC */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0202FBD0 ; =0x00001D50\n    bx lr\n    _0202FBD0: .word 0x00001D50"
    );
    #endif
}

void sub_0202FBD4(void) {
    MIi_CpuClear32(0, 0);
}

void sub_0202FBF0(void) {
    /* Original at 0x0202FBF0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0202FC20 ; =_021D2AF8\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r6, r2, #0\n    cmp r0, #0\n    beq _0202FC0A\n    bl Heap_Free\n    ldr r0, _0202FC20 ; =_021D2AF8\n    mov r1, #0\n    str r1, [r0]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #0\n    bl sub_0202711C\n    ldr r1, _0202FC20 ; =_021D2AF8\n    str r0, [r1]\n    bl sub_0202FBD4\n    pop {r4, r5, r6, pc}\n    _0202FC20: .word _021D2AF8"
    );
    #endif
}

void sub_0202FC24(void) {
    /* Original at 0x0202FC24 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0202FC44 ; =_021D2AF8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0202FC32\n    bl GF_AssertFail\n    ldr r0, _0202FC44 ; =_021D2AF8\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _0202FC44 ; =_021D2AF8\n    mov r1, #0\n    str r1, [r0]\n    pop {r3, pc}\n    nop\n    _0202FC44: .word _021D2AF8"
    );
    #endif
}

void sub_0202FC48(void) {
    /* Original at 0x0202FC48 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0202FC58 ; =_021D2AF8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0202FC54\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0202FC58: .word _021D2AF8"
    );
    #endif
}

void sub_0202FC5C(void) {
    GF_AssertFail();
}

void sub_0202FC74(void) {
    GF_AssertFail();
}

void sub_0202FC90(void) {
    /* Original at 0x0202FC90 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0202FD1C ; =_021D2AF8\n    add r7, r1, #0\n    ldr r0, [r0]\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #0\n    beq _0202FCAC\n    bl Heap_Free\n    ldr r0, _0202FD1C ; =_021D2AF8\n    mov r1, #0\n    str r1, [r0]\n    ldr r3, [sp, #0x18]\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, r4, #0\n    bl sub_0202711C\n    ldr r1, _0202FD1C ; =_021D2AF8\n    str r0, [r1]\n    ldr r1, [r4]\n    cmp r1, #1\n    beq _0202FCCA\n    mov r0, #3\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _0202FD20 ; =0x00001C64\n    add r0, #0xe8\n    ldrh r2, [r0, r1]\n    ldr r3, _0202FD24 ; =0x0000FFFF\n    eor r3, r2\n    lsl r3, r3, #0x10\n    add r2, r2, r3\n    bl sub_02030258\n    ldr r1, _0202FD1C ; =_021D2AF8\n    add r0, r5, #0\n    ldr r1, [r1]\n    bl sub_02030154\n    cmp r0, #1\n    bne _0202FCF2\n    mov r0, #0\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, _0202FD1C ; =_021D2AF8\n    add r0, r5, #0\n    ldr r1, [r1]\n    bl sub_0203018C\n    cmp r0, #0\n    bne _0202FD08\n    mov r0, #2\n    str r0, [r4]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    cmp r6, #0\n    beq _0202FD14\n    add r0, r6, #0\n    add r1, r5, #0\n    bl sub_020304F0\n    mov r0, #1\n    str r0, [r4]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0202FD1C: .word _021D2AF8\n    _0202FD20: .word 0x00001C64\n    _0202FD24: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202FD28(void) {
    /* Original at 0x0202FD28 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r2, #0\n    add r6, r0, #0\n    bl sub_0202711C\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #1\n    beq _0202FD46\n    mov r1, #3\n    str r1, [r5]\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    ldr r1, _0202FD9C ; =0x00001C64\n    add r0, #0xe8\n    ldrh r2, [r0, r1]\n    ldr r3, _0202FDA0 ; =0x0000FFFF\n    eor r3, r2\n    lsl r3, r3, #0x10\n    add r2, r2, r3\n    bl sub_02030258\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_02030154\n    cmp r0, #1\n    bne _0202FD72\n    mov r0, #0\n    str r0, [r5]\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    add r0, r6, #0\n    add r1, r4, #0\n    bl sub_0203018C\n    cmp r0, #0\n    bne _0202FD8C\n    mov r0, #2\n    str r0, [r5]\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #1\n    str r0, [r5]\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    nop\n    _0202FD9C: .word 0x00001C64\n    _0202FDA0: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202FDA4(void) {
    /* Original at 0x0202FDA4 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r3, #0\n    add r6, r1, #0\n    ldrh r1, [r4]\n    add r5, r0, #0\n    add r7, r2, #0\n    cmp r1, #0\n    beq _0202FDBA\n    cmp r1, #1\n    beq _0202FDF2\n    b _0202FE10\n    mov r0, #8\n    bl sub_0201A728\n    mov r0, #0xb\n    bl sub_0201A748\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r7, #0\n    bl sub_02027134\n    add r6, r0, #0\n    cmp r6, #2\n    bne _0202FDE8\n    add r0, r5, #0\n    mov r1, #2\n    bl Save_PrepareForAsyncWrite\n    ldrh r0, [r4]\n    add r0, r0, #1\n    strh r0, [r4]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #8\n    bl sub_0201A738\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    bl Save_WriteFileAsync\n    add r5, r0, #0\n    sub r0, r5, #2\n    cmp r0, #1\n    bhi _0202FE0C\n    mov r0, #0\n    strh r0, [r4]\n    bl sub_0201A774\n    mov r0, #8\n    bl sub_0201A738\n    add r0, r5, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0202FE14(void) {
    /* Original at 0x0202FE14 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r6, [sp, #0x18]\n    mov ip, r1\n    add r1, r2, #0\n    ldrh r2, [r6]\n    add r7, r0, #0\n    cmp r2, #0\n    beq _0202FE2A\n    cmp r2, #1\n    beq _0202FE90\n    b _0202FE9E\n    ldr r2, _0202FEA4 ; =_021D2AF8\n    ldr r4, [r2]\n    cmp r4, #0\n    bne _0202FE36\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    add r5, r4, #0\n    add r4, #0xe8\n    add r5, #0x84\n    str r1, [sp]\n    add r1, r5, #0\n    add r2, r4, #0\n    mov r3, ip\n    bl sub_0202FF08\n    add r0, r5, #0\n    ldr r1, _0202FEA8 ; =0x0000E281\n    add r0, #0x48\n    strh r1, [r0]\n    add r0, r7, #0\n    add r1, r5, #0\n    mov r2, #0x58\n    bl SaveArray_CalcCRC16\n    add r5, #0x60\n    strh r0, [r5]\n    ldr r0, _0202FEA8 ; =0x0000E281\n    ldr r2, _0202FEAC ; =0x00001C62\n    add r1, r4, #0\n    strh r0, [r4, r2]\n    add r0, r7, #0\n    add r2, r2, #2\n    bl SaveArray_CalcCRC16\n    ldr r1, _0202FEB0 ; =0x00001C64\n    ldr r3, _0202FEB4 ; =0x0000FFFF\n    strh r0, [r4, r1]\n    ldrh r2, [r4, r1]\n    add r0, r4, #0\n    eor r3, r2\n    lsl r3, r3, #0x10\n    add r2, r2, r3\n    bl sub_02030250\n    ldr r0, [sp, #0x1c]\n    mov r1, #0\n    strh r1, [r0]\n    ldrh r0, [r6]\n    add r0, r0, #1\n    strh r0, [r6]\n    b _0202FE9E\n    ldr r1, _0202FEA4 ; =_021D2AF8\n    add r2, r3, #0\n    ldr r1, [r1]\n    ldr r3, [sp, #0x1c]\n    bl sub_0202FDA4\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0202FEA4: .word _021D2AF8\n    _0202FEA8: .word 0x0000E281\n    _0202FEAC: .word 0x00001C62\n    _0202FEB0: .word 0x00001C64\n    _0202FEB4: .word 0x0000FFFF"
    );
    #endif
}

void sub_0202FEB8(void) {
    /* Original at 0x0202FEB8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x1a\n    bgt _0202FEE6\n    bge _0202FEF2\n    add r3, r0, #0\n    sub r3, #0xe\n    cmp r3, #9\n    bhi _0202FEFC\n    add r3, r3, r3\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _0202FED2: ; jump table\n    cmp r0, #0x1d\n    bgt _0202FEEE\n    beq _0202FEF2\n    b _0202FEFC\n    cmp r0, #0x20\n    bne _0202FEFC\n    mov r0, #4\n    str r0, [r1]\n    mov r0, #3\n    str r0, [r2]\n    bx lr\n    mov r0, #2\n    str r0, [r1]\n    mov r0, #6\n    str r0, [r2]\n    bx lr"
    );
    #endif
}

void sub_0202FF08(void) {
    /* Original at 0x0202FF08 */
    /* Requires manual decompilation - 269 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    str r3, [sp, #8]\n    add r7, r1, #0\n    str r2, [sp, #4]\n    ldr r3, _02030148 ; =_020F68C8\n    str r0, [sp]\n    add r2, sp, #0x1c\n    mov r1, #8\n    ldrb r0, [r3]\n    add r3, r3, #1\n    strb r0, [r2]\n    add r2, r2, #1\n    sub r1, r1, #1\n    bne _0202FF1A\n    ldr r1, _0203014C ; =_020F68C4\n    add r0, sp, #0x18\n    ldrb r2, [r1]\n    strb r2, [r0]\n    ldrb r2, [r1, #1]\n    strb r2, [r0, #1]\n    ldrb r2, [r1, #2]\n    ldrb r1, [r1, #3]\n    strb r2, [r0, #2]\n    strb r1, [r0, #3]\n    add r0, r7, #0\n    mov r1, #0\n    mov r2, #0x64\n    bl MI_CpuFill8\n    ldr r0, [sp, #8]\n    add r1, sp, #0x28\n    add r2, sp, #0x24\n    bl sub_0202FEB8\n    ldr r0, [sp, #4]\n    mov r2, #0\n    ldr r3, [r0]\n    mov r0, #4\n    tst r0, r3\n    beq _0202FF74\n    mov r1, #0x80\n    add r0, r3, #0\n    tst r0, r1\n    beq _0202FF6C\n    ldr r0, [sp, #4]\n    add r1, #0xc4\n    ldrh r0, [r0, r1]\n    lsl r4, r0, #1\n    b _0202FF76\n    ldr r0, [sp, #4]\n    add r1, #0xc4\n    ldrh r4, [r0, r1]\n    b _0202FF76\n    add r4, r2, #0\n    ldr r5, [sp, #0x28]\n    mov r0, #0\n    mov ip, r0\n    cmp r5, #0\n    ble _0203004E\n    add r0, sp, #0x18\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #4]\n    lsl r1, r4, #2\n    add r0, r0, r1\n    str r0, [sp, #0x10]\n    mov r0, #1\n    and r0, r4\n    add r3, r7, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #4]\n    mov r1, #8\n    ldr r0, [r0]\n    add r6, r0, #0\n    and r6, r1\n    beq _0202FFD6\n    mov r4, #0x80\n    add r1, r0, #0\n    tst r1, r4\n    bne _0202FFD6\n    mov r6, #0\n    cmp r5, #0\n    ble _0202FFF6\n    ldr r1, [sp, #0x10]\n    add r4, #0xb4\n    ldr r1, [r1, r4]\n    ldr r0, [sp, #4]\n    lsl r1, r1, #0x1f\n    lsr r4, r1, #0x1d\n    add r1, sp, #0x1c\n    add r4, r1, r4\n    mov r1, ip\n    ldrb r1, [r1, r4]\n    mov r4, #0x4d\n    lsl r4, r4, #2\n    ldr r4, [r0, r4]\n    cmp r4, r1\n    beq _0202FFF6\n    add r6, r6, #1\n    add r0, r0, #4\n    cmp r6, r5\n    blt _0202FFC2\n    b _0202FFF6\n    cmp r6, #0\n    beq _0202FFE6\n    mov r1, #0x80\n    tst r0, r1\n    beq _0202FFE6\n    ldr r0, [sp, #0x14]\n    ldrb r6, [r0]\n    b _0202FFF6\n    ldr r0, [sp, #0xc]\n    mov r6, ip\n    cmp r0, #0\n    beq _0202FFF6\n    mov r0, ip\n    mov r1, #1\n    add r6, r0, #0\n    eor r6, r1\n    ldr r0, [sp, #0x24]\n    mov r5, #0\n    cmp r0, #0\n    ble _0203003C\n    ldr r1, _02030150 ; =0x00001154\n    ldr r0, [sp, #4]\n    add r1, r0, r1\n    mov r0, #0xa9\n    lsl r0, r0, #2\n    mul r0, r6\n    add r4, r1, r0\n    ldr r0, [r4, #0x2c]\n    lsl r0, r0, #1\n    lsr r0, r0, #0x1f\n    bne _0203002E\n    ldrh r0, [r4, #4]\n    lsl r0, r0, #0x1d\n    lsr r0, r0, #0x1f\n    bne _0203002E\n    ldrh r0, [r4, #6]\n    strh r0, [r3]\n    add r0, r4, #0\n    add r0, #0x30\n    ldrb r0, [r0]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x1b\n    add r0, r7, r2\n    strb r1, [r0, #0x18]\n    ldr r0, [sp, #0x24]\n    add r5, r5, #1\n    add r3, r3, #2\n    add r2, r2, #1\n    add r4, #0x70\n    cmp r5, r0\n    blt _0203000C\n    ldr r0, [sp, #0x14]\n    ldr r5, [sp, #0x28]\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    mov r0, ip\n    add r0, r0, #1\n    mov ip, r0\n    cmp r0, r5\n    blt _0202FF94\n    ldr r0, [sp, #8]\n    cmp r0, #0xd\n    bhi _02030124\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02030060: ; jump table\n    ldr r0, [sp]\n    mov r1, #0\n    bl sub_020291E8\n    add r3, r7, #0\n    add r3, #0x28\n    mov r2, #0x10\n    ldrh r1, [r0]\n    add r0, r0, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _0203008A\n    b _0203013A\n    ldr r0, [sp]\n    mov r1, #1\n    bl sub_020291E8\n    add r3, r7, #0\n    add r3, #0x28\n    mov r2, #0x10\n    ldrh r1, [r0]\n    add r0, r0, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _020300A6\n    b _0203013A\n    ldr r0, [sp]\n    mov r1, #2\n    bl sub_020291E8\n    add r3, r7, #0\n    add r3, #0x28\n    mov r2, #0x10\n    ldrh r1, [r0]\n    add r0, r0, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _020300C2\n    b _0203013A\n    ldr r0, [sp]\n    mov r1, #3\n    bl sub_020291E8\n    add r3, r7, #0\n    add r3, #0x28\n    mov r2, #0x10\n    ldrh r1, [r0]\n    add r0, r0, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _020300DE\n    b _0203013A\n    ldr r0, [sp]\n    mov r1, #4\n    bl sub_020291E8\n    add r3, r7, #0\n    add r3, #0x28\n    mov r2, #0x10\n    ldrh r1, [r0]\n    add r0, r0, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _020300FA\n    b _0203013A\n    ldr r0, [sp]\n    mov r1, #5\n    bl sub_020291E8\n    add r3, r7, #0\n    add r3, #0x28\n    mov r2, #0x10\n    ldrh r1, [r0]\n    add r0, r0, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _02030116\n    b _0203013A\n    bl sub_0202925C\n    add r3, r7, #0\n    add r3, #0x28\n    mov r2, #0x10\n    ldrh r1, [r0]\n    add r0, r0, #2\n    strh r1, [r3]\n    add r3, r3, #2\n    sub r2, r2, #1\n    bne _0203012E\n    ldr r0, [sp, #0x40]\n    strh r0, [r7, #0x24]\n    ldr r0, [sp, #8]\n    add r7, #0x26\n    strb r0, [r7]\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _02030148: .word _020F68C8\n    _0203014C: .word _020F68C4\n    _02030150: .word 0x00001154"
    );
    #endif
}

void sub_02030154(void) {
    /* Original at 0x02030154 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r1, #0\n    add r4, #0xe8\n    add r5, #0x84\n    bl Save_CheckExtraChunksExist\n    cmp r0, #0\n    bne _0203016A\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r0, _02030184 ; =0x00001C62\n    ldrh r1, [r4, r0]\n    ldr r0, _02030188 ; =0x0000E281\n    cmp r1, r0\n    bne _0203017C\n    add r5, #0x48\n    ldrh r1, [r5]\n    cmp r1, r0\n    beq _02030180\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _02030184: .word 0x00001C62\n    _02030188: .word 0x0000E281"
    );
    #endif
}

void sub_0203018C(void) {
    /* Original at 0x0203018C */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r1, #0\n    add r5, r1, #0\n    ldr r1, _0203023C ; =0x00001C62\n    add r4, #0xe8\n    ldrh r1, [r4, r1]\n    ldr r2, _02030240 ; =0x0000E281\n    add r6, r0, #0\n    add r5, #0x84\n    cmp r1, r2\n    bne _020301AC\n    add r1, r5, #0\n    add r1, #0x48\n    ldrh r1, [r1]\n    cmp r1, r2\n    beq _020301B0\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r1, r5, #0\n    mov r2, #0x58\n    bl SaveArray_CalcCRC16\n    add r5, #0x60\n    ldrh r1, [r5]\n    cmp r0, r1\n    beq _020301C4\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r2, _02030244 ; =0x00001C64\n    add r0, r6, #0\n    add r1, r4, #0\n    bl SaveArray_CalcCRC16\n    ldr r1, _02030244 ; =0x00001C64\n    ldrh r1, [r4, r1]\n    cmp r0, r1\n    beq _020301DA\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mov ip, r0\n    ldr r0, _02030248 ; =0x00001154\n    add r0, r4, r0\n    str r0, [sp]\n    ldr r0, _0203024C ; =0x000001D3\n    add r7, r0, #0\n    add r6, r0, #0\n    add r7, #0x45\n    add r6, #0x1c\n    ldr r4, [sp]\n    mov r2, #0\n    ldrh r1, [r4, #6]\n    cmp r1, r6\n    bls _020301FC\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldrh r1, [r4, #8]\n    cmp r1, r7\n    bls _02030206\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r3, #0\n    add r5, r4, #0\n    ldrh r1, [r5, #0x1c]\n    cmp r1, r0\n    bls _02030214\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r3, r3, #1\n    add r5, r5, #2\n    cmp r3, #4\n    blt _0203020A\n    add r2, r2, #1\n    add r4, #0x70\n    cmp r2, #6\n    blt _020301F2\n    mov r1, #0xa9\n    ldr r2, [sp]\n    lsl r1, r1, #2\n    add r1, r2, r1\n    str r1, [sp]\n    mov r1, ip\n    add r1, r1, #1\n    mov ip, r1\n    cmp r1, #4\n    blt _020301EE\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    _0203023C: .word 0x00001C62\n    _02030240: .word 0x0000E281\n    _02030244: .word 0x00001C64\n    _02030248: .word 0x00001154\n    _0203024C: .word 0x000001D3"
    );
    #endif
}

void sub_02030250(void) {
    _MonEncryptSegment();
}

void sub_02030258(void) {
    _MonDecryptSegment();
}

void sub_02030260(void) {
    /* Original at 0x02030260 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02030278 ; =_021D2AF8\n    ldr r3, [r3]\n    cmp r3, #0\n    beq _02030274\n    lsl r0, r0, #0xa\n    add r0, r3, r0\n    add r1, r0, r1\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    strb r2, [r1, r0]\n    bx lr\n    nop\n    _02030278: .word _021D2AF8"
    );
    #endif
}

void sub_0203027C(void) {
    /* Original at 0x0203027C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _020302A0 ; =_021D2AF8\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0203028E\n    bl GF_AssertFail\n    ldr r0, _020302A0 ; =_021D2AF8\n    ldr r1, [r0]\n    lsl r0, r5, #0xa\n    add r0, r1, r0\n    add r1, r0, r4\n    mov r0, #0x8e\n    lsl r0, r0, #2\n    ldrb r0, [r1, r0]\n    pop {r3, r4, r5, pc}\n    _020302A0: .word _021D2AF8"
    );
    #endif
}

void sub_020302A4(void) {
    /* Original at 0x020302A4 */
    /* Requires manual decompilation - 244 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldr r0, _0203048C ; =_021D2AF8\n    ldr r1, [r0]\n    cmp r1, #0\n    bne _020302B4\n    b _02030488\n    ldr r0, [sp]\n    add r7, r1, #0\n    ldr r0, [r0]\n    add r1, #0xe8\n    str r0, [r1]\n    ldr r0, [sp]\n    add r7, #0xe8\n    ldr r0, [r0, #0x14]\n    ldr r1, [sp]\n    str r0, [r7, #4]\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldr r2, [r1, r0]\n    add r1, r7, #0\n    add r1, #0xe8\n    str r2, [r1]\n    ldr r1, [sp]\n    add r2, r0, #4\n    ldr r2, [r1, r2]\n    add r1, r7, #0\n    add r1, #0xec\n    str r2, [r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #8\n    ldr r2, [r1, r2]\n    add r1, r7, #0\n    add r1, #0xf0\n    str r2, [r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0xc\n    ldr r2, [r1, r2]\n    add r1, r7, #0\n    add r1, #0xf4\n    str r2, [r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x10\n    ldr r2, [r1, r2]\n    add r1, r7, #0\n    add r1, #0xf8\n    str r2, [r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x14\n    ldr r2, [r1, r2]\n    add r1, r7, #0\n    add r1, #0xfc\n    str r2, [r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x18\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #0x4c\n    str r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x1c\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #0x48\n    str r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x24\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #0x44\n    str r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x28\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #0x40\n    str r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x2c\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #0x3c\n    str r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x40\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #0x28\n    str r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x44\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #0x24\n    str r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x48\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #0x20\n    str r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x50\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #0x1c\n    str r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x64\n    ldrh r2, [r1, r2]\n    add r1, r0, #0\n    sub r1, #8\n    strh r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x67\n    ldrb r2, [r1, r2]\n    sub r1, r0, #6\n    ldr r4, [sp]\n    strh r2, [r7, r1]\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r2, #0x68\n    ldr r1, [r1, r2]\n    sub r0, r0, #4\n    str r1, [r7, r0]\n    add r0, r4, #0\n    mov r3, #0\n    add r5, r7, #0\n    str r0, [sp, #8]\n    str r7, [sp, #4]\n    ldr r0, [r4, #0x18]\n    ldr r2, [sp, #8]\n    ldr r6, [sp, #4]\n    str r0, [r5, #8]\n    mov r0, #6\n    add r2, #0x28\n    add r6, #0x18\n    mov ip, r0\n    ldmia r2!, {r0, r1}\n    stmia r6!, {r0, r1}\n    mov r0, ip\n    sub r0, r0, #1\n    mov ip, r0\n    bne _020303D8\n    ldr r0, [r2]\n    mov r1, #0x5f\n    lsl r1, r1, #2\n    str r0, [r6]\n    ldr r0, [r4, r1]\n    cmp r0, #0\n    bne _020303FA\n    mov r0, #5\n    sub r1, #0x68\n    lsl r0, r0, #6\n    b _020303FC\n    sub r1, #0x68\n    str r0, [r5, r1]\n    mov r0, #0x1a\n    lsl r0, r0, #4\n    ldr r2, [r4, r0]\n    add r1, r0, #0\n    sub r1, #0x6c\n    str r2, [r5, r1]\n    ldr r1, [sp]\n    add r4, r4, #4\n    add r2, r1, r3\n    add r1, r0, #0\n    add r1, #0x1c\n    ldrb r2, [r2, r1]\n    add r1, r7, r3\n    sub r0, #0x54\n    strb r2, [r1, r0]\n    ldr r0, [sp, #8]\n    add r3, r3, #1\n    add r0, #0x34\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r5, r5, #4\n    add r0, #0x34\n    str r0, [sp, #4]\n    cmp r3, #4\n    blt _020303C8\n    ldr r0, _02030490 ; =0x00001150\n    ldr r4, [sp]\n    add r0, r7, r0\n    str r0, [sp, #0xc]\n    ldr r0, _02030494 ; =0x00001BE0\n    mov r5, #0\n    add r6, r7, r0\n    ldr r0, [r4, #4]\n    ldr r1, [sp, #0xc]\n    bl sub_020306DC\n    add r0, r4, #0\n    add r0, #0xf8\n    ldr r0, [r0]\n    add r1, r6, #0\n    bl PlayerProfile_Copy\n    mov r0, #0x46\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl sub_02006EFC\n    mov r1, #0x53\n    add r2, r7, r5\n    lsl r1, r1, #2\n    strb r0, [r2, r1]\n    mov r0, #0xa9\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #2\n    add r0, r1, r0\n    add r5, r5, #1\n    str r0, [sp, #0xc]\n    add r4, r4, #4\n    add r6, #0x20\n    cmp r5, #4\n    blt _0203043E\n    mov r1, #0x13\n    ldr r0, [sp]\n    lsl r1, r1, #4\n    ldr r0, [r0, r1]\n    ldr r1, _02030498 ; =0x00001C60\n    add r1, r7, r1\n    bl Options_Copy\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0203048C: .word _021D2AF8\n    _02030490: .word 0x00001150\n    _02030494: .word 0x00001BE0\n    _02030498: .word 0x00001C60"
    );
    #endif
}

void sub_0203049C(void) {
    /* Original at 0x0203049C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _020304B0 ; =_021D2AF8\n    ldr r2, [r2]\n    cmp r2, #0\n    beq _020304AE\n    lsl r0, r0, #2\n    add r2, r2, r0\n    mov r0, #0x7f\n    lsl r0, r0, #2\n    str r1, [r2, r0]\n    bx lr\n    _020304B0: .word _021D2AF8"
    );
    #endif
}

void sub_020304B4(void) {
    /* Original at 0x020304B4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r0, _020304EC ; =_021D2AF8\n    ldr r4, [r0]\n    cmp r4, #0\n    bne _020304C4\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    mov r0, #0x45\n    lsl r0, r0, #2\n    add r1, r0, #0\n    mov r3, #0\n    add r4, #0xe8\n    add r1, #0x2c\n    ldr r2, [r4, r0]\n    cmp r2, r1\n    bls _020304DC\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    add r3, r3, #1\n    add r4, r4, #4\n    cmp r3, #4\n    blt _020304D0\n    mov r0, #1\n    pop {r3, r4}\n    bx lr\n    nop\n    _020304EC: .word _021D2AF8"
    );
    #endif
}

void sub_020304F0(void) {
    /* Original at 0x020304F0 */
    /* Requires manual decompilation - 235 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r6, r0, #0\n    ldr r0, _020306C8 ; =_021D2AF8\n    str r1, [sp]\n    ldr r1, [r0]\n    add r0, r1, #0\n    str r0, [sp, #0x14]\n    add r0, #0xe8\n    add r1, #0xe8\n    str r0, [sp, #0x14]\n    ldr r0, [r1]\n    str r0, [r6]\n    ldr r0, [sp, #0x14]\n    add r0, #0xe8\n    ldr r1, [r0]\n    mov r0, #0x53\n    lsl r0, r0, #2\n    str r1, [r6, r0]\n    ldr r1, [sp, #0x14]\n    add r1, #0xec\n    ldr r2, [r1]\n    add r1, r0, #4\n    str r2, [r6, r1]\n    ldr r1, [sp, #0x14]\n    add r1, #0xf0\n    ldr r2, [r1]\n    add r1, r0, #0\n    add r1, #8\n    str r2, [r6, r1]\n    ldr r1, [sp, #0x14]\n    add r1, #0xf4\n    ldr r2, [r1]\n    add r1, r0, #0\n    add r1, #0xc\n    str r2, [r6, r1]\n    ldr r1, [sp, #0x14]\n    add r1, #0xf8\n    ldr r2, [r1]\n    add r1, r0, #0\n    add r1, #0x10\n    str r2, [r6, r1]\n    ldr r1, [sp, #0x14]\n    add r1, #0xfc\n    ldr r2, [r1]\n    add r1, r0, #0\n    add r1, #0x14\n    str r2, [r6, r1]\n    add r2, r0, #0\n    ldr r1, [sp, #0x14]\n    sub r2, #0x4c\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    add r1, #0x18\n    str r2, [r6, r1]\n    add r2, r0, #0\n    ldr r1, [sp, #0x14]\n    sub r2, #0x48\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    add r1, #0x1c\n    str r2, [r6, r1]\n    add r2, r0, #0\n    ldr r1, [sp, #0x14]\n    sub r2, #0x44\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    add r1, #0x24\n    str r2, [r6, r1]\n    add r2, r0, #0\n    ldr r1, [sp, #0x14]\n    sub r2, #0x40\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    add r1, #0x28\n    str r2, [r6, r1]\n    add r2, r0, #0\n    ldr r1, [sp, #0x14]\n    sub r2, #0x28\n    ldr r2, [r1, r2]\n    mov r1, #0x10\n    orr r2, r1\n    add r1, r0, #0\n    add r1, #0x40\n    str r2, [r6, r1]\n    add r2, r0, #0\n    ldr r1, [sp, #0x14]\n    sub r2, #0x24\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    add r1, #0x44\n    str r2, [r6, r1]\n    add r2, r0, #0\n    ldr r1, [sp, #0x14]\n    sub r2, #0x20\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    add r1, #0x48\n    str r2, [r6, r1]\n    add r2, r0, #0\n    ldr r1, [sp, #0x14]\n    sub r2, #0x1c\n    ldr r2, [r1, r2]\n    add r1, r0, #0\n    add r1, #0x50\n    str r2, [r6, r1]\n    add r2, r0, #0\n    ldr r1, [sp, #0x14]\n    sub r2, #8\n    ldrh r2, [r1, r2]\n    add r1, r0, #0\n    add r1, #0x64\n    strh r2, [r6, r1]\n    mov r1, #0\n    str r1, [r6, #0x14]\n    add r0, #0x2c\n    str r1, [r6, r0]\n    ldr r0, [sp]\n    bl Save_Pokedex_Get\n    mov r1, #0x11\n    lsl r1, r1, #4\n    ldr r1, [r6, r1]\n    bl Pokedex_Copy\n    ldr r5, [sp, #0x14]\n    ldr r1, _020306CC ; =0x00001150\n    add r0, r5, #0\n    str r0, [sp, #0x10]\n    add r0, r0, r1\n    str r0, [sp, #8]\n    ldr r1, _020306D0 ; =0x00001BE0\n    add r0, r5, #0\n    add r0, r0, r1\n    mov r7, #0\n    add r4, r6, #0\n    str r6, [sp, #0xc]\n    str r0, [sp, #4]\n    ldr r0, [r5, #8]\n    ldr r3, [sp, #0x10]\n    ldr r2, [sp, #0xc]\n    str r0, [r4, #0x18]\n    mov r0, #6\n    add r3, #0x18\n    add r2, #0x28\n    mov ip, r0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    mov r0, ip\n    sub r0, r0, #1\n    mov ip, r0\n    bne _02030614\n    ldr r0, [r3]\n    mov r1, #0x45\n    lsl r1, r1, #2\n    str r0, [r2]\n    add r0, r1, #0\n    ldr r2, [r5, r1]\n    add r0, #0x68\n    str r2, [r4, r0]\n    add r0, r1, #0\n    add r0, #0x20\n    ldr r0, [r5, r0]\n    add r1, #0x8c\n    str r0, [r4, r1]\n    ldr r0, [sp, #8]\n    ldr r1, [r4, #4]\n    bl sub_02030724\n    add r1, r4, #0\n    add r1, #0xf8\n    ldr r0, [sp, #4]\n    ldr r1, [r1]\n    bl PlayerProfile_Copy\n    ldr r0, [sp, #0x14]\n    add r5, r5, #4\n    add r1, r0, r7\n    mov r0, #0x53\n    lsl r0, r0, #2\n    ldrb r2, [r1, r0]\n    add r1, r6, r7\n    add r0, #0x70\n    strb r2, [r1, r0]\n    ldr r0, [sp, #0x10]\n    mov r1, #0xa9\n    add r0, #0x34\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    lsl r1, r1, #2\n    add r0, #0x34\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    add r0, r0, r1\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r4, r4, #4\n    add r0, #0x20\n    str r0, [sp, #4]\n    cmp r7, #4\n    blt _02030604\n    ldr r0, [sp]\n    bl Save_PlayerData_GetOptionsAddr\n    mov r1, #0x13\n    lsl r1, r1, #4\n    ldr r1, [r6, r1]\n    bl Options_Copy\n    mov r5, #0x13\n    lsl r5, r5, #4\n    ldr r1, [r6, r5]\n    ldr r4, _020306D4 ; =0x00001C60\n    ldr r2, [sp, #0x14]\n    ldrh r0, [r1]\n    ldrh r2, [r2, r4]\n    ldr r3, _020306D8 ; =0xFFFF83FF\n    lsl r2, r2, #0x11\n    lsr r2, r2, #0x1b\n    lsl r2, r2, #0x1b\n    and r0, r3\n    lsr r2, r2, #0x11\n    orr r0, r2\n    strh r0, [r1]\n    ldr r2, [r6, r5]\n    ldrh r0, [r2]\n    lsl r1, r0, #0x11\n    lsr r1, r1, #0x1b\n    cmp r1, #0x14\n    blo _020306C2\n    and r0, r3\n    strh r0, [r2]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _020306C8: .word _021D2AF8\n    _020306CC: .word 0x00001150\n    _020306D0: .word 0x00001BE0\n    _020306D4: .word 0x00001C60\n    _020306D8: .word 0xFFFF83FF"
    );
    #endif
}

void sub_020306DC(void) {
    /* Original at 0x020306DC */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r2, #0xa9\n    add r7, r0, #0\n    add r0, r6, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    bl MI_CpuFill8\n    add r0, r7, #0\n    bl Party_GetMaxCount\n    strh r0, [r6]\n    add r0, r7, #0\n    bl Party_GetCount\n    strh r0, [r6, #2]\n    ldrh r0, [r6, #2]\n    mov r4, #0\n    cmp r0, #0\n    ble _02030720\n    add r5, r6, #4\n    add r0, r7, #0\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    add r1, r5, #0\n    bl sub_02072A98\n    ldrh r0, [r6, #2]\n    add r4, r4, #1\n    add r5, #0x70\n    cmp r4, r0\n    blt _02030708\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02030724(void) {
    /* Original at 0x02030724 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    str r1, [sp]\n    mov r1, #0\n    add r0, sp, #4\n    strb r1, [r0]\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r4, r0, #0\n    ldrh r1, [r7]\n    ldr r0, [sp]\n    bl Party_InitWithMaxSize\n    ldrh r0, [r7, #2]\n    mov r6, #0\n    cmp r0, #0\n    ble _02030770\n    add r5, r7, #4\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02072D64\n    add r0, r4, #0\n    mov r1, #0xa2\n    add r2, sp, #4\n    bl SetMonData\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl Party_AddMon\n    ldrh r0, [r7, #2]\n    add r6, r6, #1\n    add r5, #0x70\n    cmp r6, r0\n    blt _0203074C\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0203077C(void) {
    /* Original at 0x0203077C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _020307A8 ; =_021D2AF8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0203078C\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0x64\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r0, _020307A8 ; =_021D2AF8\n    add r1, r4, #0\n    ldr r0, [r0]\n    mov r2, #0x64\n    add r0, #0x84\n    bl MIi_CpuCopy32\n    add r0, r4, #0\n    pop {r4, pc}\n    _020307A8: .word _021D2AF8"
    );
    #endif
}

void sub_020307AC(void) {
    /* Original at 0x020307AC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _020307D8 ; =_021D2AF8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _020307BC\n    bl GF_AssertFail\n    add r0, r4, #0\n    mov r1, #0x80\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r0, _020307D8 ; =_021D2AF8\n    add r1, r4, #0\n    ldr r0, [r0]\n    mov r2, #0x80\n    add r0, r0, #4\n    bl MIi_CpuCopy32\n    add r0, r4, #0\n    pop {r4, pc}\n    _020307D8: .word _021D2AF8"
    );
    #endif
}

void sub_020307DC(void) {
    GF_AssertFail();
}

void sub_020307F8(void) {
    GF_AssertFail();
}

void sub_02030814(void) {
    /* Original at 0x02030814 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, _0203087C ; =_021D2AF8\n    add r6, r1, #0\n    ldr r0, [r0]\n    add r7, r2, #0\n    add r4, r3, #0\n    cmp r0, #0\n    bne _0203082A\n    bl GF_AssertFail\n    ldr r1, _0203087C ; =_021D2AF8\n    add r0, r6, #0\n    ldr r1, [r1]\n    mov r2, #0x64\n    add r1, #0x84\n    bl MI_CpuCopy8\n    ldr r1, _0203087C ; =_021D2AF8\n    ldr r2, _02030880 ; =0x00001C68\n    ldr r1, [r1]\n    add r0, r7, #0\n    add r1, #0xe8\n    bl MI_CpuCopy8\n    ldr r1, _0203087C ; =_021D2AF8\n    add r0, r5, #0\n    ldr r1, [r1]\n    mov r2, #0x80\n    add r1, r1, #4\n    bl MI_CpuCopy8\n    ldr r0, _0203087C ; =_021D2AF8\n    ldr r1, _02030884 ; =0x00001D4C\n    ldr r0, [r0]\n    ldr r2, _02030888 ; =0x0000FFFF\n    ldrh r3, [r0, r1]\n    add r0, #0xe8\n    sub r1, #0xe8\n    eor r2, r3\n    lsl r2, r2, #0x10\n    add r2, r3, r2\n    bl sub_02030258\n    cmp r4, #0\n    beq _02030878\n    ldr r1, [sp, #0x18]\n    add r0, r4, #0\n    bl sub_020304F0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0203087C: .word _021D2AF8\n    _02030880: .word 0x00001C68\n    _02030884: .word 0x00001D4C\n    _02030888: .word 0x0000FFFF"
    );
    #endif
}

void sub_0203088C(void) {
    /* Original at 0x0203088C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r5, r2, #0\n    cmp r1, #5\n    bhi _0203090C\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020308A2: ; jump table\n    cmp r5, #0xc\n    blt _020308B6\n    bl GF_AssertFail\n    lsl r0, r5, #1\n    ldrh r0, [r4, r0]\n    ldr r1, _02030918 ; =0x000001ED\n    cmp r0, r1\n    bls _020308C6\n    mov r0, #0\n    add r1, r0, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    pop {r3, r4, r5, pc}\n    cmp r5, #0xc\n    blt _020308D2\n    bl GF_AssertFail\n    add r0, r4, r5\n    ldrb r0, [r0, #0x18]\n    mov r1, #0\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r4, #0x24]\n    ldr r0, _0203091C ; =0x0000270F\n    cmp r1, r0\n    bls _020308E6\n    mov r1, #0\n    pop {r3, r4, r5, pc}\n    add r0, r1, #0\n    mov r1, #0\n    pop {r3, r4, r5, pc}\n    add r4, #0x26\n    ldrb r0, [r4]\n    cmp r0, #0x21\n    blo _020308FA\n    mov r0, #0\n    add r1, r0, #0\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, [r4, #0x58]\n    ldr r1, [r4, #0x5c]\n    pop {r3, r4, r5, pc}\n    add r4, #0x27\n    ldrb r0, [r4]\n    mov r1, #0\n    pop {r3, r4, r5, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    add r1, r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02030918: .word 0x000001ED\n    _0203091C: .word 0x0000270F"
    );
    #endif
}

void sub_02030920(void) {
    Heap_Alloc(0x64);
    MI_CpuFill8(0, 0x64);
}

void sub_02030938(void) {
    Heap_Free();
}

void sub_02030940(void) {
    MI_CpuFill8();
}

void sub_0203094C(void) {
    Save_Frontier_GetStatic();
}

void sub_0203095C(void) {
    /* Original at 0x0203095C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0]\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1f\n    bx lr"
    );
    #endif
}

void sub_02030964(void) {
    /* Original at 0x02030964 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    lsl r1, r1, #0x1f\n    ldrb r3, [r0]\n    mov r2, #0x10\n    lsr r1, r1, #0x1b\n    bic r3, r2\n    orr r1, r3\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02030978(void) {
    /* Original at 0x02030978 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    cmp r1, #9\n    bhi _02030A1E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0203098A: ; jump table\n    ldrb r4, [r0]\n    ldrb r2, [r3]\n    mov r1, #1\n    bic r4, r1\n    mov r1, #1\n    and r1, r2\n    orr r1, r4\n    strb r1, [r0]\n    pop {r3, r4}\n    bx lr\n    ldrb r2, [r0]\n    mov r1, #0xe\n    bic r2, r1\n    ldrb r1, [r3]\n    lsl r1, r1, #0x1d\n    lsr r1, r1, #0x1c\n    orr r1, r2\n    strb r1, [r0]\n    pop {r3, r4}\n    bx lr\n    ldrb r1, [r3]\n    strb r1, [r0, #1]\n    pop {r3, r4}\n    bx lr\n    ldrh r3, [r3]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #4]\n    pop {r3, r4}\n    bx lr\n    ldrh r3, [r3]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #0x20]\n    pop {r3, r4}\n    bx lr\n    ldrb r1, [r3]\n    add r0, r0, r2\n    add r0, #0x28\n    strb r1, [r0]\n    pop {r3, r4}\n    bx lr\n    lsl r1, r2, #2\n    ldr r3, [r3]\n    add r0, r0, r1\n    str r3, [r0, #0x2c]\n    pop {r3, r4}\n    bx lr\n    ldrh r3, [r3]\n    lsl r1, r2, #1\n    add r0, r0, r1\n    strh r3, [r0, #0x3c]\n    pop {r3, r4}\n    bx lr\n    ldrb r1, [r3]\n    add r0, r0, r2\n    add r0, #0x44\n    strb r1, [r0]\n    pop {r3, r4}\n    bx lr\n    lsl r1, r2, #2\n    ldr r3, [r3]\n    add r0, r0, r1\n    str r3, [r0, #0x48]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void sub_02030A24(void) {
    /* Original at 0x02030A24 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #9\n    bhi _02030A94\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02030A34: ; jump table\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1c\n    lsr r0, r0, #0x1d\n    bx lr\n    ldrb r0, [r0]\n    lsl r0, r0, #0x1f\n    lsr r0, r0, #0x1f\n    bx lr\n    ldrb r0, [r0, #1]\n    bx lr\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #4]\n    bx lr\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x20]\n    bx lr\n    add r0, r0, r2\n    add r0, #0x28\n    ldrb r0, [r0]\n    bx lr\n    lsl r1, r2, #2\n    add r0, r0, r1\n    ldr r0, [r0, #0x2c]\n    bx lr\n    lsl r1, r2, #1\n    add r0, r0, r1\n    ldrh r0, [r0, #0x3c]\n    bx lr\n    add r0, r0, r2\n    add r0, #0x44\n    ldrb r0, [r0]\n    bx lr\n    lsl r1, r2, #2\n    add r0, r0, r1\n    ldr r0, [r0, #0x48]\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}
