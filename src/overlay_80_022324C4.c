/* Decompiled from asm/overlay_80_022324C4.s */
#include "global.h"

void ov80_022324C4(void) {
    /* Original at 0x022324C4 */
    /* Requires manual decompilation - 363 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r1, #0\n    add r5, r0, #0\n    ldr r1, _02232818 ; =0x00000A28\n    mov r0, #0xb\n    add r6, r2, #0\n    str r3, [sp, #4]\n    bl Heap_Alloc\n    ldr r1, _0223281C ; =ov80_0223DD48\n    ldr r2, _02232818 ; =0x00000A28\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r4, [r0]\n    add r0, r5, #0\n    bl sub_02030CC8\n    str r0, [r4, #8]\n    ldr r1, _0223281C ; =ov80_0223DD48\n    str r5, [r4, #4]\n    mov r0, #0xb\n    str r0, [r4]\n    ldr r4, [r1]\n    bl SaveArray_Party_Alloc\n    str r0, [r4, #0x28]\n    mov r0, #0xb\n    bl SaveArray_Party_Alloc\n    str r0, [r4, #0x2c]\n    mov r0, #0xa2\n    ldr r1, [sp, #0x38]\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r5, #0\n    ldr r4, [r4, #8]\n    bl sub_02030E08\n    add r5, r0, #0\n    cmp r7, #0\n    beq _02232520\n    b _022326BA\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r1, [r0]\n    mov r0, #0\n    strb r6, [r1, #0x10]\n    strb r0, [r1, #0x11]\n    add r0, r4, #0\n    bl sub_02030CBC\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldrb r2, [r0, #0x10]\n    cmp r2, #3\n    bne _02232546\n    ldr r0, [r0, #4]\n    bl Save_VarsFlags_Get\n    bl Save_VarsFlags_GetVar4052\n    b _02232552\n    mov r3, #0\n    add r0, r5, #0\n    mov r1, #9\n    str r3, [sp]\n    bl sub_02030E58\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bne _02232592\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl Save_Frontier_GetStatic\n    add r5, r0, #0\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl sub_0205C1A0\n    add r4, r0, #0\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl sub_0205C1A0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl FrontierSave_GetStat\n    ldr r1, _0223281C ; =ov80_0223DD48\n    ldr r1, [r1]\n    strh r0, [r1, #0x14]\n    b _02232630\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r4, [r0]\n    mov r0, #0\n    strh r0, [r4, #0x14]\n    ldr r0, [r4, #4]\n    bl Save_Frontier_GetStatic\n    add r5, r0, #0\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl sub_0205C1F0\n    add r7, r0, #0\n    ldrb r0, [r4, #0x10]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    mov r3, #0\n    bl sub_02031108\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    add r0, r6, #0\n    bl sub_0205C218\n    add r5, r0, #0\n    add r0, r6, #0\n    bl sub_0205C218\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r3, #0\n    bl sub_02031108\n    ldr r4, _0223281C ; =ov80_0223DD48\n    mov r5, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #4]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    ldr r0, [r4]\n    lsl r1, r5, #0x18\n    ldrb r0, [r0, #0x10]\n    lsr r1, r1, #0x18\n    bl sub_0205C174\n    add r7, r0, #0\n    ldr r0, [r4]\n    lsl r1, r5, #0x18\n    ldrb r0, [r0, #0x10]\n    lsr r1, r1, #0x18\n    bl sub_0205C174\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r3, #1\n    bl sub_02031108\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #3\n    blo _022325F2\n    ldr r0, _0223281C ; =ov80_0223DD48\n    mov r1, #7\n    ldr r5, [r0]\n    ldrh r0, [r5, #0x14]\n    bl _s32_div_f\n    strh r0, [r5, #0x16]\n    mov r0, #0\n    str r0, [r5, #0x18]\n    add r1, r5, #0\n    ldr r0, [sp, #4]\n    add r1, #0x24\n    strb r0, [r1]\n    add r1, sp, #0x20\n    add r0, r5, #0\n    ldrh r2, [r1, #0x10]\n    add r0, #0x25\n    strb r2, [r0]\n    add r0, r5, #0\n    ldrh r1, [r1, #0x14]\n    add r0, #0x26\n    strb r1, [r0]\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl sub_0205C1F0\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    strh r0, [r5, #0x20]\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl sub_0205C1F0\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    mov r3, #0xa\n    bl sub_02031228\n    b _0223273E\n    ldr r0, _0223281C ; =ov80_0223DD48\n    mov r1, #0\n    ldr r5, [r0]\n    str r1, [sp]\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_02030D84\n    strb r0, [r5, #0x10]\n    mov r2, #0\n    str r2, [sp]\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl sub_02030D84\n    strb r0, [r5, #0x11]\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r6, [r0]\n    ldr r0, [r6, #4]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl sub_0205C1A0\n    str r0, [sp, #0xc]\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1A0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r1, [sp, #0xc]\n    add r0, r7, #0\n    bl FrontierSave_GetStat\n    strh r0, [r6, #0x14]\n    ldrh r0, [r6, #0x14]\n    mov r1, #7\n    bl _s32_div_f\n    mov r5, #0\n    strh r0, [r6, #0x16]\n    ldr r7, _0223281C ; =ov80_0223DD48\n    add r6, r5, #0\n    lsl r2, r5, #0x18\n    add r0, r4, #0\n    mov r1, #7\n    lsr r2, r2, #0x18\n    add r3, r6, #0\n    str r6, [sp]\n    bl sub_02030D84\n    ldr r1, [r7]\n    add r1, r1, r5\n    add r1, #0x24\n    strb r0, [r1]\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #3\n    blo _0223271C\n    ldr r6, _0223281C ; =ov80_0223DD48\n    ldr r7, _02232820 ; =0x0000036A\n    mov r4, #0\n    ldr r5, [r6]\n    ldr r0, [r5, #4]\n    bl SaveArray_Party_Get\n    add r1, r5, r4\n    add r1, #0x24\n    ldrb r1, [r1]\n    bl Party_GetMonByIndex\n    ldr r5, [r6]\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    lsl r1, r4, #1\n    add r1, r5, r1\n    strh r0, [r1, r7]\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #3\n    blo _02232744\n    ldr r0, [r5, #4]\n    bl SaveArray_Party_Get\n    str r0, [sp, #8]\n    ldr r0, _0223281C ; =ov80_0223DD48\n    mov r1, #0\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl ov80_02237B24\n    add r7, r0, #0\n    mov r5, #0\n    cmp r7, #0\n    ble _022327F8\n    ldr r6, _0223281C ; =ov80_0223DD48\n    ldr r1, [r6]\n    ldr r0, [sp, #8]\n    add r1, r1, r5\n    add r1, #0x24\n    ldrb r1, [r1]\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    ldr r0, [r6]\n    ldr r0, [r0, #0x28]\n    bl Party_AddMon\n    ldr r0, [r6]\n    add r1, r5, #0\n    ldr r0, [r0, #0x28]\n    bl Party_GetMonByIndex\n    mov r1, #0\n    str r1, [sp, #0x14]\n    add r4, r0, #0\n    mov r1, #6\n    add r2, sp, #0x14\n    bl SetMonData\n    add r0, r4, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0x32\n    bls _022327EE\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x32\n    bl GetMonExpBySpeciesAndLevel\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    mov r1, #8\n    add r2, sp, #0x10\n    bl SetMonData\n    add r0, r4, #0\n    bl CalcMonLevelAndStats\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, r7\n    blt _0223278E\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldrb r0, [r0, #0x10]\n    bl ov80_02237D8C\n    cmp r0, #1\n    bne _02232810\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    ldr r0, [r0, #4]\n    bl ov80_0222A840\n    ldr r0, _0223281C ; =ov80_0223DD48\n    ldr r0, [r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _02232818: .word 0x00000A28\n    _0223281C: .word ov80_0223DD48\n    _02232820: .word 0x0000036A"
    );
    #endif
}

void ov80_02232824(void) {
    /* Original at 0x02232824 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _02232830\n    bl ov80_02232838\n    pop {r3, pc}\n    bl ov80_02232908\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02232838(void) {
    /* Original at 0x02232838 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    ldr r0, [r7, #0x28]\n    bl Party_GetCount\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r6, #0\n    str r0, [sp, #0x10]\n    cmp r0, #0\n    ble _022328A0\n    add r5, r7, #0\n    ldr r0, [r7, #0x28]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #0x3a\n    mov r2, #0\n    add r4, r0, #0\n    bl GetMonData\n    mov r1, #0xe5\n    lsl r1, r1, #2\n    strh r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0x3b\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02232900 ; =0x00000396\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0x3c\n    bl GetMonData\n    mov r1, #0xe6\n    lsl r1, r1, #2\n    strh r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0x3d\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02232904 ; =0x0000039A\n    add r6, r6, #1\n    strh r0, [r5, r1]\n    ldr r0, [sp, #0x10]\n    add r5, #8\n    cmp r6, r0\n    blt _02232852\n    add r0, r7, #0\n    bl ov80_02237ED8\n    add r1, r0, #0\n    add r2, r7, #0\n    ldrb r0, [r7, #0x10]\n    add r2, #0x30\n    mov r3, #0xe\n    bl ov80_02237ADC\n    ldrb r0, [r7, #0x10]\n    mov r1, #1\n    ldrb r4, [r7, #0x11]\n    bl ov80_02237B58\n    add r5, r0, #0\n    ldrb r0, [r7, #0x10]\n    bl ov80_02237D8C\n    mov r3, #0xa2\n    lsl r3, r3, #2\n    add r1, r7, r3\n    str r1, [sp]\n    add r1, r3, #0\n    sub r1, #0x14\n    add r1, r7, r1\n    str r1, [sp, #4]\n    add r1, r3, #0\n    sub r1, #0x10\n    add r1, r7, r1\n    lsl r0, r0, #0x18\n    add r2, r4, #7\n    str r1, [sp, #8]\n    lsr r0, r0, #0x18\n    lsl r1, r4, #1\n    lsl r2, r2, #1\n    str r0, [sp, #0xc]\n    add r1, r7, r1\n    add r2, r7, r2\n    sub r3, #0x1c\n    ldrh r1, [r1, #0x30]\n    ldrh r2, [r2, #0x30]\n    add r0, r5, #0\n    add r3, r7, r3\n    bl ov80_0222A6B8\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02232900: .word 0x00000396\n    _02232904: .word 0x0000039A"
    );
    #endif
}

void ov80_02232908(void) {
    /* Original at 0x02232908 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x18c\n    add r5, r0, #0\n    bl ov80_022329B4\n    mov r4, #0\n    add r6, r5, #0\n    add r7, r4, #0\n    str r7, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #6\n    lsr r2, r2, #0x18\n    add r3, r7, #0\n    bl sub_02030D84\n    strh r0, [r6, #0x30]\n    add r4, r4, #1\n    add r6, r6, #2\n    cmp r4, #0xe\n    blt _02232918\n    mov r6, #0\n    add r4, sp, #0x30\n    add r7, r5, #0\n    mov r0, #0\n    str r0, [sp]\n    lsl r2, r6, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #8\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030D84\n    strh r0, [r4]\n    ldrh r1, [r4]\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    strh r1, [r7, r0]\n    add r6, r6, #1\n    add r4, r4, #2\n    add r7, r7, #2\n    cmp r6, #4\n    blt _02232938\n    add r0, sp, #0x18\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    mov r0, #0xb\n    str r0, [sp, #8]\n    mov r0, #0xcd\n    str r0, [sp, #0xc]\n    add r0, sp, #0x3c\n    add r1, sp, #0x30\n    add r2, sp, #0x10\n    mov r3, #0\n    bl ov80_0222A52C\n    mov r0, #0xb\n    bl AllocMonZeroed\n    add r6, r0, #0\n    mov r7, #0\n    add r4, sp, #0x3c\n    add r0, r5, #0\n    bl ov80_02237D88\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov80_0222A140\n    ldr r1, [r5, #0x2c]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl ov80_02237E18\n    add r7, r7, #1\n    add r4, #0x38\n    cmp r7, #4\n    blt _02232986\n    add r0, r6, #0\n    bl Heap_Free\n    add sp, #0x18c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_022329B4(void) {
    /* Original at 0x022329B4 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x28]\n    bl Party_GetCount\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    mov r4, #0\n    str r0, [sp, #4]\n    cmp r0, #0\n    ble _02232AB6\n    add r7, sp, #8\n    ldr r0, [r5, #0x28]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #2\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030D84\n    add r2, sp, #8\n    strh r0, [r7, #2]\n    add r0, r6, #0\n    mov r1, #0xa3\n    add r2, #2\n    bl SetMonData\n    mov r0, #0\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030D84\n    strb r0, [r7]\n    add r0, r6, #0\n    mov r1, #0x3a\n    add r2, sp, #8\n    bl SetMonData\n    mov r0, #0\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    mov r3, #1\n    bl sub_02030D84\n    strb r0, [r7]\n    add r0, r6, #0\n    mov r1, #0x3b\n    add r2, sp, #8\n    bl SetMonData\n    mov r0, #0\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    mov r3, #2\n    bl sub_02030D84\n    strb r0, [r7]\n    add r0, r6, #0\n    mov r1, #0x3c\n    add r2, sp, #8\n    bl SetMonData\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #3\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    lsr r2, r2, #0x18\n    add r3, r1, #0\n    bl sub_02030D84\n    strb r0, [r7]\n    add r0, r6, #0\n    mov r1, #0x3d\n    add r2, sp, #8\n    bl SetMonData\n    mov r0, #0\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #4\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030D84\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0xa0\n    add r2, sp, #0xc\n    bl SetMonData\n    mov r0, #0\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #5\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030D84\n    add r2, sp, #8\n    strh r0, [r7, #2]\n    add r0, r6, #0\n    mov r1, #6\n    add r2, #2\n    bl SetMonData\n    ldr r0, [sp, #4]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _022329CE\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02232ABC(void) {
    /* Original at 0x02232ABC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    beq _02232AE6\n    ldr r0, [r4, #0x28]\n    cmp r0, #0\n    beq _02232ACC\n    bl Heap_Free\n    ldr r0, [r4, #0x2c]\n    cmp r0, #0\n    beq _02232AD6\n    bl Heap_Free\n    ldr r2, _02232AE8 ; =0x00000A28\n    add r0, r4, #0\n    mov r1, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}\n    _02232AE8: .word 0x00000A28"
    );
    #endif
}

void ov80_02232AEC(void) {
    /* Original at 0x02232AEC */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    mov r4, #0\n    add r5, r7, #0\n    lsl r1, r4, #0x18\n    add r0, r6, #0\n    lsr r1, r1, #0x18\n    bl ov80_02232B44\n    mov r1, #0xe\n    lsl r1, r1, #6\n    strh r0, [r5, r1]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, #6\n    blt _02232AF6\n    mov r3, #0\n    sub r0, r1, #4\n    add r2, r6, r3\n    ldrb r5, [r2, #8]\n    mov r4, #0x37\n    add r1, r7, r3\n    lsl r4, r4, #4\n    strb r5, [r1, r4]\n    ldrb r5, [r2, #0xc]\n    add r4, r4, #4\n    add r3, r3, #1\n    strb r5, [r1, r4]\n    mov r4, #0xde\n    lsl r4, r4, #2\n    ldrb r5, [r2, #0x10]\n    cmp r3, #4\n    strb r5, [r1, r4]\n    ldrb r2, [r2, #0x14]\n    strb r2, [r1, r0]\n    blt _02232B12\n    ldrh r1, [r6, #0x28]\n    ldr r0, _02232B40 ; =0x00000A1C\n    strh r1, [r7, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02232B40: .word 0x00000A1C"
    );
    #endif
}

void ov80_02232B44(void) {
    GF_AssertFail();
}

void ov80_02232B58(void) {
    /* Original at 0x02232B58 */
    /* Requires manual decompilation - 325 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r6, r1, #0\n    bl sub_02030E08\n    str r0, [sp, #4]\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r4, r0, #0\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    bl ov80_02237B58\n    ldrb r1, [r5, #0x10]\n    add r0, sp, #0x10\n    strb r1, [r0, #8]\n    mov r1, #0\n    add r0, sp, #0x18\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_02030CF4\n    ldr r0, [r5, #8]\n    mov r1, #1\n    bl sub_02030CE0\n    mov r2, #0\n    ldrb r1, [r5, #0x11]\n    add r0, sp, #0x10\n    add r3, r2, #0\n    strb r1, [r0, #8]\n    add r0, sp, #0x18\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    mov r1, #1\n    bl sub_02030CF4\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1A0\n    add r7, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1A0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #0x14]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_02031108\n    cmp r6, #2\n    beq _02232CCA\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1C8\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1C8\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    bl FrontierSave_GetStat\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1C8\n    add r7, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1C8\n    bl sub_0205C268\n    add r2, r0, #0\n    ldrh r3, [r5, #0x14]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl sub_0203126C\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1C8\n    add r7, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1C8\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    str r0, [sp, #0xc]\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    add r7, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    add r7, r0, #0\n    ldrh r0, [r5, #0x14]\n    cmp r0, r6\n    bne _02232C6E\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C240\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C240\n    bl sub_0205C268\n    lsl r3, r7, #0x10\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    lsr r3, r3, #0x10\n    bl sub_0203126C\n    b _02232C94\n    ldr r0, [sp, #0xc]\n    cmp r6, r0\n    bhs _02232C94\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C240\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C240\n    bl sub_0205C268\n    lsl r3, r7, #0x10\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r6, #0\n    lsr r3, r3, #0x10\n    bl sub_02031108\n    add r0, r5, #0\n    add r0, #0x27\n    ldrb r1, [r0]\n    add r0, sp, #0x10\n    mov r3, #0\n    strb r1, [r0, #8]\n    add r0, sp, #0x18\n    str r0, [sp]\n    ldrb r2, [r5, #0x10]\n    ldr r0, [sp, #4]\n    mov r1, #9\n    bl sub_02030E18\n    ldrb r0, [r5, #0x10]\n    cmp r0, #3\n    bne _02232CCA\n    mov r0, #0x6c\n    bl sub_0205C268\n    add r3, r5, #0\n    add r3, #0x27\n    add r2, r0, #0\n    ldrb r3, [r3]\n    add r0, r4, #0\n    mov r1, #0x6c\n    bl sub_02031108\n    mov r4, #0\n    add r6, sp, #0x10\n    add r7, sp, #0x10\n    lsl r0, r4, #1\n    add r0, r5, r0\n    ldrh r0, [r0, #0x30]\n    lsl r2, r4, #0x18\n    mov r1, #6\n    strh r0, [r7]\n    str r6, [sp]\n    ldr r0, [r5, #8]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030CF4\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0xe\n    blo _02232CD0\n    mov r4, #0\n    add r6, sp, #0x18\n    add r7, sp, #0x10\n    add r0, r5, r4\n    add r0, #0x24\n    ldrb r0, [r0]\n    lsl r2, r4, #0x18\n    mov r1, #7\n    strb r0, [r7, #8]\n    str r6, [sp]\n    ldr r0, [r5, #8]\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030CF4\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #3\n    blo _02232CF8\n    ldr r0, [r5, #0x28]\n    bl Party_GetCount\n    mov r4, #0\n    str r0, [sp, #8]\n    cmp r0, #0\n    bls _02232E10\n    add r7, sp, #0x10\n    ldr r0, [r5, #0x28]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #0xa3\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    strh r0, [r7]\n    add r0, sp, #0x10\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #2\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030CF4\n    add r0, r6, #0\n    mov r1, #0x3a\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r7, #8]\n    add r0, sp, #0x18\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030CF4\n    add r0, r6, #0\n    mov r1, #0x3b\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r7, #8]\n    add r0, sp, #0x18\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    mov r3, #1\n    bl sub_02030CF4\n    add r0, r6, #0\n    mov r1, #0x3c\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r7, #8]\n    add r0, sp, #0x18\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #3\n    lsr r2, r2, #0x18\n    mov r3, #2\n    bl sub_02030CF4\n    add r0, r6, #0\n    mov r1, #0x3d\n    mov r2, #0\n    bl GetMonData\n    strb r0, [r7, #8]\n    add r0, sp, #0x18\n    str r0, [sp]\n    mov r1, #3\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    lsr r2, r2, #0x18\n    add r3, r1, #0\n    bl sub_02030CF4\n    add r0, r6, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x1c]\n    add r0, sp, #0x1c\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #4\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030CF4\n    add r0, r6, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    strh r0, [r7]\n    add r0, sp, #0x10\n    str r0, [sp]\n    lsl r2, r4, #0x18\n    ldr r0, [r5, #8]\n    mov r1, #5\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030CF4\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [sp, #8]\n    cmp r4, r0\n    blo _02232D2A\n    ldr r0, [r5, #0x2c]\n    bl Party_GetCount\n    add r6, r0, #0\n    ldr r4, _02232E54 ; =0x00000000\n    beq _02232E4E\n    add r7, sp, #0x10\n    ldr r0, [r5, #0x2c]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    lsl r0, r4, #1\n    add r1, r5, r0\n    mov r0, #0x9b\n    lsl r0, r0, #2\n    ldrh r1, [r1, r0]\n    add r0, sp, #0x10\n    lsl r2, r4, #0x18\n    strh r1, [r0]\n    str r7, [sp]\n    ldr r0, [r5, #8]\n    mov r1, #8\n    lsr r2, r2, #0x18\n    mov r3, #0\n    bl sub_02030CF4\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, r6\n    blo _02232E1E\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02232E54: .word 0x00000000"
    );
    #endif
}

void ov80_02232E58(void) {
    /* Original at 0x02232E58 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r1, [r0, #0x11]\n    add r1, r1, #1\n    strb r1, [r0, #0x11]\n    ldrb r0, [r0, #0x11]\n    bx lr"
    );
    #endif
}

void ov80_02232E64(void) {
    /* Original at 0x02232E64 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #0x11]\n    bx lr"
    );
    #endif
}

void ov80_02232E68(void) {
    /* Original at 0x02232E68 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x30\n    add r2, r0, #0\n    ldrb r4, [r2, #0x11]\n    mov r3, #7\n    mul r3, r1\n    add r1, r4, r3\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x17\n    add r1, r2, r1\n    ldrh r1, [r1, #0x30]\n    add r0, sp, #0\n    mov r2, #0xb\n    mov r3, #0xcc\n    bl ov80_02229F04\n    bl Heap_Free\n    add r0, sp, #0\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl ov80_0222A30C\n    add sp, #0x30\n    pop {r4, pc}"
    );
    #endif
}

void ov80_02232E9C(void) {
    /* Original at 0x02232E9C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r4, #0\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    lsl r1, r4, #0x18\n    ldrb r0, [r5, #0x10]\n    lsr r1, r1, #0x18\n    bl sub_0205C174\n    add r7, r0, #0\n    lsl r1, r4, #0x18\n    ldrb r0, [r5, #0x10]\n    lsr r1, r1, #0x18\n    bl sub_0205C174\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r3, #1\n    bl sub_02031108\n    add r4, r4, #1\n    cmp r4, #3\n    blt _02232EA2\n    add r0, r5, #0\n    mov r1, #1\n    bl ov80_02232B58\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02232EE0(void) {
    /* Original at 0x02232EE0 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    mov r2, #1\n    add r1, #0x27\n    strb r2, [r1]\n    ldrh r1, [r0, #0x16]\n    cmp r1, #8\n    bhs _02232EF2\n    add r1, r1, #1\n    strh r1, [r0, #0x16]\n    ldr r3, _02232EFC ; =ov80_02232B58\n    mov r1, #0\n    strb r1, [r0, #0x11]\n    bx r3\n    nop\n    _02232EFC: .word ov80_02232B58"
    );
    #endif
}

void ov80_02232F00(void) {
    ov80_02237E30();
}

void ov80_02232F08(void) {
    /* Original at 0x02232F08 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldrb r0, [r5, #0x10]\n    mov r1, #1\n    ldrb r4, [r5, #0x11]\n    bl ov80_02237B58\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl ov80_02237D8C\n    mov r3, #0xa2\n    lsl r3, r3, #2\n    add r1, r5, r3\n    str r1, [sp]\n    add r1, r3, #0\n    sub r1, #0x14\n    add r1, r5, r1\n    str r1, [sp, #4]\n    add r1, r3, #0\n    sub r1, #0x10\n    add r1, r5, r1\n    lsl r0, r0, #0x18\n    add r2, r4, #7\n    str r1, [sp, #8]\n    lsr r0, r0, #0x18\n    lsl r1, r4, #1\n    lsl r2, r2, #1\n    str r0, [sp, #0xc]\n    add r1, r5, r1\n    add r2, r5, r2\n    sub r3, #0x1c\n    ldrh r1, [r1, #0x30]\n    ldrh r2, [r2, #0x30]\n    add r0, r6, #0\n    add r3, r5, r3\n    bl ov80_0222A6B8\n    add r0, r5, #0\n    bl ov80_02237E30\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_02232F60(void) {
    /* Original at 0x02232F60 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r6, r0, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02232F74\n    mov r0, #0\n    str r0, [sp]\n    b _02232F78\n    mov r0, #2\n    str r0, [sp]\n    ldrb r0, [r6, #0x10]\n    mov r1, #0\n    bl ov80_02237B24\n    add r5, r0, #0\n    ldr r0, [r6, #0x28]\n    bl Party_GetCount\n    ldr r4, [sp]\n    add r0, r4, #0\n    add r0, r5, r0\n    add r1, r4, #0\n    str r0, [sp, #4]\n    cmp r1, r0\n    bge _02232FEA\n    ldr r0, [r6, #0x28]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    ldr r1, [sp]\n    mov r2, #0\n    sub r1, r4, r1\n    lsl r1, r1, #3\n    add r5, r6, r1\n    mov r1, #0x3a\n    add r7, r0, #0\n    bl GetMonData\n    mov r1, #0xe5\n    lsl r1, r1, #2\n    strh r0, [r5, r1]\n    add r0, r7, #0\n    mov r1, #0x3b\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02233018 ; =0x00000396\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r7, #0\n    mov r1, #0x3c\n    bl GetMonData\n    mov r1, #0xe6\n    lsl r1, r1, #2\n    strh r0, [r5, r1]\n    add r0, r7, #0\n    mov r1, #0x3d\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0223301C ; =0x0000039A\n    add r4, r4, #1\n    strh r0, [r5, r1]\n    ldr r0, [sp, #4]\n    cmp r4, r0\n    blt _02232F96\n    ldr r0, [r6, #0x28]\n    bl ov80_02237D9C\n    mov r0, #0x37\n    lsl r0, r0, #4\n    mov r7, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    add r4, r7, #0\n    add r1, r0, #4\n    add r2, #8\n    add r3, #0xc\n    add r5, r6, r7\n    strb r4, [r5, r0]\n    strb r4, [r5, r1]\n    strb r4, [r5, r2]\n    add r7, r7, #1\n    strb r4, [r5, r3]\n    cmp r7, #4\n    blt _02233002\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02233018: .word 0x00000396\n    _0223301C: .word 0x0000039A"
    );
    #endif
}

void ov80_02233020(void) {
    /* Original at 0x02233020 */
    /* Requires manual decompilation - 215 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r6, r0, #0\n    mov r0, #0\n    str r0, [sp, #0x10]\n    add r1, sp, #0x18\n    add r4, r0, #0\n    add r0, r0, #1\n    strb r4, [r1]\n    add r1, r1, #1\n    cmp r0, #0x14\n    blt _0223302E\n    strb r4, [r6, #0x12]\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02233048\n    mov r0, #0\n    str r0, [sp]\n    b _0223304C\n    mov r0, #2\n    str r0, [sp]\n    ldrb r0, [r6, #0x10]\n    mov r1, #0\n    bl ov80_02237B24\n    str r0, [sp, #8]\n    ldrb r0, [r6, #0x10]\n    mov r1, #1\n    bl ov80_02237B58\n    str r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r0, [sp]\n    add r0, r1, r0\n    ldr r1, [sp]\n    str r0, [sp, #0xc]\n    cmp r1, r0\n    bge _02233122\n    add r7, sp, #0x18\n    ldr r0, [r6, #0x28]\n    ldr r1, [sp]\n    bl Party_GetMonByIndex\n    mov r1, #0xac\n    mov r2, #0\n    add r5, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _02233116\n    add r0, r5, #0\n    mov r1, #0xa3\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    mov r1, #0xa4\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0x14]\n    cmp r1, #0\n    beq _022330E2\n    ldrb r1, [r7]\n    add r1, r1, #1\n    strb r1, [r7]\n    ldr r1, [sp, #0x14]\n    cmp r1, r0\n    bne _022330B6\n    ldrb r0, [r7, #1]\n    add r0, r0, #1\n    strb r0, [r7, #1]\n    b _022330CC\n    lsr r1, r0, #1\n    ldr r0, [sp, #0x14]\n    cmp r0, r1\n    blo _022330C6\n    ldrb r0, [r7, #2]\n    add r0, r0, #1\n    strb r0, [r7, #2]\n    b _022330CC\n    ldrb r0, [r7, #3]\n    add r0, r0, #1\n    strb r0, [r7, #3]\n    add r0, r5, #0\n    mov r1, #0xa0\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _022330E6\n    ldrb r0, [r7, #4]\n    add r0, r0, #1\n    strb r0, [r7, #4]\n    b _022330E6\n    mov r0, #1\n    strb r0, [r6, #0x12]\n    add r0, r5, #0\n    mov r1, #0x3a\n    mov r2, #0\n    bl GetMonData\n    add r4, r4, r0\n    add r0, r5, #0\n    mov r1, #0x3b\n    mov r2, #0\n    bl GetMonData\n    add r4, r4, r0\n    add r0, r5, #0\n    mov r1, #0x3c\n    mov r2, #0\n    bl GetMonData\n    add r4, r4, r0\n    add r0, r5, #0\n    mov r1, #0x3d\n    mov r2, #0\n    bl GetMonData\n    add r4, r4, r0\n    ldr r0, [sp]\n    add r1, r0, #1\n    ldr r0, [sp, #0xc]\n    str r1, [sp]\n    cmp r1, r0\n    blt _02233070\n    ldr r1, [sp, #4]\n    mov r0, #0\n    cmp r1, #0\n    ble _02233146\n    mov r2, #0xdd\n    add r3, sp, #0x18\n    lsl r2, r2, #2\n    add r1, r6, r0\n    ldrb r1, [r1, r2]\n    cmp r1, #1\n    bne _0223313E\n    ldrb r1, [r3, #8]\n    add r1, r1, #1\n    strb r1, [r3, #8]\n    ldr r1, [sp, #4]\n    add r0, r0, #1\n    cmp r0, r1\n    blt _02233130\n    ldr r0, [sp, #8]\n    mov r3, #0\n    add r7, r3, #0\n    cmp r0, #0\n    ble _0223316E\n    mov r0, #0xe5\n    lsl r0, r0, #2\n    mov r2, #0\n    add r5, r6, #0\n    ldrh r1, [r5, r0]\n    add r2, r2, #1\n    add r5, r5, #2\n    add r3, r3, r1\n    cmp r2, #4\n    blt _02233158\n    ldr r1, [sp, #8]\n    add r7, r7, #1\n    add r6, #8\n    cmp r7, r1\n    blt _02233154\n    sub r0, r3, r4\n    cmp r0, #5\n    bgt _0223317E\n    add r0, sp, #0x18\n    ldrb r1, [r0, #5]\n    add r1, r1, #1\n    strb r1, [r0, #5]\n    b _02233198\n    cmp r0, #0xa\n    bgt _0223318C\n    add r0, sp, #0x18\n    ldrb r1, [r0, #6]\n    add r1, r1, #1\n    strb r1, [r0, #6]\n    b _02233198\n    cmp r0, #0xf\n    bgt _02233198\n    add r0, sp, #0x18\n    ldrb r1, [r0, #7]\n    add r1, r1, #1\n    strb r1, [r0, #7]\n    add r1, sp, #0x18\n    ldrb r2, [r1]\n    lsl r0, r2, #1\n    add r2, r2, r0\n    ldr r0, [sp, #0x10]\n    add r3, r0, r2\n    ldrb r2, [r1, #1]\n    lsl r0, r2, #1\n    add r0, r2, r0\n    add r2, r3, r0\n    ldrb r0, [r1, #2]\n    lsl r0, r0, #1\n    add r2, r2, r0\n    ldrb r0, [r1, #3]\n    add r2, r2, r0\n    ldrb r0, [r1, #4]\n    add r2, r2, r0\n    ldrb r0, [r1, #5]\n    lsl r0, r0, #3\n    add r3, r2, r0\n    ldrb r2, [r1, #6]\n    mov r0, #6\n    mul r0, r2\n    add r2, r3, r0\n    ldrb r0, [r1, #7]\n    ldrb r1, [r1, #8]\n    lsl r0, r0, #2\n    add r2, r2, r0\n    mov r0, #7\n    mul r0, r1\n    add r0, r2, r0\n    str r0, [sp, #0x10]\n    cmp r0, #0\n    bgt _022331E0\n    mov r0, #1\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x10]\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_022331E8(void) {
    /* Original at 0x022331E8 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r6, r0, #0\n    add r4, r2, #0\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_0205C1F0\n    str r0, [sp]\n    add r0, r5, #0\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl FrontierSave_GetStat\n    add r1, r0, r4\n    ldr r0, _0223327C ; =0x0000270F\n    cmp r1, r0\n    ble _02233244\n    add r0, r6, #0\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_0205C1F0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r1, [sp, #4]\n    ldr r3, _0223327C ; =0x0000270F\n    add r0, r7, #0\n    bl sub_02031108\n    b _0223326A\n    add r0, r6, #0\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    add r0, r5, #0\n    bl sub_0205C1F0\n    str r0, [sp, #8]\n    add r0, r5, #0\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r1, [sp, #8]\n    add r0, r7, #0\n    add r3, r4, #0\n    bl sub_02031228\n    add r0, r6, #0\n    bl Save_GameStats_Get\n    mov r1, #0x42\n    add r2, r4, #0\n    bl GameStats_Add\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0223327C: .word 0x0000270F"
    );
    #endif
}

void ov80_02233280(void) {
    /* Original at 0x02233280 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #6\n    bhi _022332CC\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02233292: ; jump table\n    bl ov80_0222B5C8\n    pop {r3, pc}\n    bl ov80_0222B65C\n    pop {r3, pc}\n    bl ov80_0222B6C8\n    pop {r3, pc}\n    bl ov80_0222B7E4\n    pop {r3, pc}\n    add r1, r2, #0\n    bl ov80_0222B8D8\n    pop {r3, pc}\n    add r1, r2, #0\n    bl ov80_0222B920\n    pop {r3, pc}\n    bl ov80_0222B968\n    pop {r3, pc}"
    );
    #endif
}

void ov80_022332D0(void) {
    /* Original at 0x022332D0 */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    add r6, r1, #0\n    bl FrontierSystem_GetFrontierMap\n    add r4, r0, #0\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _022332EC\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _022332FA\n    bl GF_AssertFail\n    ldrb r0, [r6, #0x10]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02233342\n    mov r0, #0xb\n    mov r1, #1\n    bl AllocWindows\n    add r1, r5, #0\n    add r1, #0xa8\n    str r0, [r1]\n    mov r2, #1\n    add r1, r5, #0\n    str r2, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    ldr r0, _022333C8 ; =0x00000253\n    add r1, #0xa8\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    ldr r1, [r1]\n    add r3, r2, #0\n    bl AddWindowParameterized\n    add r1, r5, #0\n    add r1, #0xa8\n    ldr r0, [r4]\n    ldr r1, [r1]\n    bl ov80_022333D0\n    b _022333BA\n    mov r0, #0xb\n    mov r1, #1\n    bl AllocWindows\n    add r1, r5, #0\n    add r1, #0xa8\n    str r0, [r1]\n    mov r0, #0xb\n    mov r1, #1\n    bl AllocWindows\n    add r1, r5, #0\n    add r1, #0xac\n    str r0, [r1]\n    mov r2, #1\n    add r1, r5, #0\n    str r2, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    ldr r0, _022333C8 ; =0x00000253\n    add r1, #0xa8\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    ldr r1, [r1]\n    add r3, r2, #0\n    bl AddWindowParameterized\n    mov r2, #1\n    add r1, r5, #0\n    str r2, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xe\n    str r0, [sp, #0xc]\n    ldr r0, _022333CC ; =0x0000022B\n    add r1, #0xac\n    str r0, [sp, #0x10]\n    ldr r0, [r4]\n    ldr r1, [r1]\n    mov r3, #0x15\n    bl AddWindowParameterized\n    add r1, r5, #0\n    add r1, #0xa8\n    ldr r0, [r4]\n    ldr r1, [r1]\n    bl ov80_022333D0\n    add r1, r5, #0\n    add r1, #0xac\n    ldr r0, [r4]\n    ldr r1, [r1]\n    bl ov80_022333D0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov80_02233490\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _022333C8: .word 0x00000253\n    _022333CC: .word 0x0000022B"
    );
    #endif
}

void ov80_022333D0(void) {
    /* Original at 0x022333D0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r2, _022333EC ; =0x000003D9\n    add r0, r4, #0\n    mov r1, #1\n    mov r3, #0xc\n    bl DrawFrameAndWindow1\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    pop {r4, pc}\n    nop\n    _022333EC: .word 0x000003D9"
    );
    #endif
}

void ov80_022333F0(void) {
    /* Original at 0x022333F0 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldrb r0, [r1, #0x10]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _02233424\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0223340C\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r4, [r0]\n    mov r1, #0\n    add r0, r4, #0\n    bl sub_0200E5D4\n    add r0, r4, #0\n    mov r1, #1\n    bl WindowArray_Delete\n    b _02233480\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02233432\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02233440\n    bl GF_AssertFail\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02233454\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r4, [r0]\n    add r0, r5, #0\n    add r0, #0xac\n    b _0223345E\n    add r0, r5, #0\n    add r0, #0xac\n    ldr r4, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r6, [r0]\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r4, #0\n    mov r1, #1\n    bl WindowArray_Delete\n    add r0, r6, #0\n    mov r1, #0\n    bl sub_0200E5D4\n    add r0, r6, #0\n    mov r1, #1\n    bl WindowArray_Delete\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0xa8\n    str r1, [r0]\n    add r5, #0xac\n    str r1, [r5]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov80_02233490(void) {
    /* Original at 0x02233490 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    add r4, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl ov80_02237D8C\n    cmp r0, #0\n    bne _022334EA\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _022334AE\n    bl GF_AssertFail\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    add r7, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    add r6, r0, #0\n    ldr r0, [r5, #4]\n    bl Save_PlayerData_GetProfile\n    add r2, r0, #0\n    add r0, r4, #0\n    add r4, #0xa8\n    ldr r1, [r4]\n    add r3, r6, #0\n    bl ov80_02233594\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _022334F8\n    bl GF_AssertFail\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02233506\n    bl GF_AssertFail\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0223353A\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r6, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    add r7, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    add r0, r6, #0\n    add r1, r7, #0\n    bl FrontierSave_GetStat\n    add r6, r0, #0\n    ldr r0, _02233590 ; =0x00000A1C\n    ldrh r5, [r5, r0]\n    b _02233564\n    ldr r0, _02233590 ; =0x00000A1C\n    ldrh r6, [r5, r0]\n    ldr r0, [r5, #4]\n    bl Save_Frontier_GetStatic\n    add r7, r0, #0\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    str r0, [sp]\n    ldrb r0, [r5, #0x10]\n    bl sub_0205C1F0\n    bl sub_0205C268\n    add r2, r0, #0\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl FrontierSave_GetStat\n    add r5, r0, #0\n    mov r0, #0\n    bl sub_02034818\n    add r1, r4, #0\n    add r1, #0xa8\n    add r2, r0, #0\n    ldr r1, [r1]\n    add r0, r4, #0\n    add r3, r6, #0\n    bl ov80_02233594\n    mov r0, #1\n    bl sub_02034818\n    add r2, r0, #0\n    add r0, r4, #0\n    add r4, #0xac\n    ldr r1, [r4]\n    add r3, r5, #0\n    bl ov80_02233594\n    pop {r3, r4, r5, r6, r7, pc}\n    _02233590: .word 0x00000A1C"
    );
    #endif
}

void ov80_02233594(void) {
    /* Original at 0x02233594 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    str r3, [sp, #0x14]\n    str r1, [sp, #0xc]\n    ldr r1, [r5, #0x34]\n    mov r0, #0x14\n    str r2, [sp, #0x10]\n    bl String_New\n    add r4, r0, #0\n    ldr r1, [r5, #0x34]\n    mov r0, #0x14\n    bl String_New\n    add r6, r0, #0\n    mov r0, #0\n    mov r1, #0x1b\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl NewMsgDataFromNarc\n    add r7, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x44]\n    ldr r2, [sp, #0x14]\n    mov r1, #0\n    mov r3, #4\n    bl BufferIntegerAsString\n    add r0, r7, #0\n    mov r1, #2\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x44]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    mov r3, #0x10\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r1, #0\n    ldr r0, [sp, #0xc]\n    str r1, [sp, #8]\n    add r2, r6, #0\n    bl AddTextPrinterParameterized\n    ldr r0, [r5, #0x44]\n    ldr r2, [sp, #0x10]\n    mov r1, #0\n    bl BufferPlayersName\n    add r0, r7, #0\n    mov r1, #0\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    ldr r0, [r5, #0x44]\n    add r1, r6, #0\n    add r2, r4, #0\n    bl StringExpandPlaceholders\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r2, r6, #0\n    add r3, r1, #0\n    str r1, [sp, #8]\n    bl AddTextPrinterParameterized\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl DestroyMsgData\n    ldr r0, [sp, #0xc]\n    bl CopyWindowToVram\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov80_02233648(void) {
    /* Original at 0x02233648 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r3, [r0, #0x10]\n    ldrh r2, [r0, #0x16]\n    cmp r3, #1\n    bhi _0223365E\n    cmp r2, #8\n    blo _02233658\n    mov r1, #7\n    b _0223366A\n    ldr r1, _02233680 ; =ov80_0223BE54\n    ldrb r1, [r1, r2]\n    b _0223366A\n    cmp r2, #8\n    blo _02233666\n    mov r1, #0x12\n    b _0223366A\n    ldr r1, _02233684 ; =ov80_0223BE60\n    ldrb r1, [r1, r2]\n    cmp r3, #0\n    bne _0223367A\n    ldrh r0, [r0, #0x14]\n    cmp r0, #0x15\n    beq _02233678\n    cmp r0, #0x31\n    bne _0223367A\n    mov r1, #0x14\n    add r0, r1, #0\n    bx lr\n    nop\n    _02233680: .word ov80_0223BE54\n    _02233684: .word ov80_0223BE60"
    );
    #endif
}
