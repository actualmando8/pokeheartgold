/* Decompiled from asm/unk_02078834.s */
#include "global.h"

void sub_02078834(void) {
    /* Original at 0x02078834 */
    /* Requires manual decompilation - 301 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    bl TaskManager_GetFieldSystem\n    add r5, r0, #0\n    add r0, r6, #0\n    bl TaskManager_GetEnvironment\n    add r4, r0, #0\n    ldr r1, [r4, #4]\n    cmp r1, #0x19\n    bls _0207884E\n    b _02078B1C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0207885A: ; jump table\n    ldr r1, [r5, #0xc]\n    ldr r0, [r4]\n    str r1, [r0]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    ldr r0, [r4]\n    ldr r0, [r0, #4]\n    cmp r0, #1\n    bne _020788E6\n    ldr r0, [r5, #0xc]\n    bl sub_0203A05C\n    cmp r0, #0\n    beq _020788E6\n    mov r0, #0xa\n    str r0, [r4, #4]\n    ldr r0, [r4, #8]\n    mov r1, #0\n    strh r1, [r0]\n    b _02078B20\n    ldr r1, _02078B24 ; =_02101290\n    ldr r2, [r4]\n    add r0, r6, #0\n    bl CallApplicationAsTask\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    ldr r0, [r5, #0xc]\n    bl sub_0203A05C\n    cmp r0, #0\n    beq _020788DE\n    ldr r0, [r5, #0xc]\n    bl Save_VarsFlags_Get\n    bl SetFlag970\n    ldr r0, [r4]\n    ldr r0, [r0, #4]\n    cmp r0, #0xf\n    bls _020788E8\n    b _02078B20\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020788F4: ; jump table\n    mov r0, #0\n    strb r0, [r4, #0xc]\n    strb r0, [r4, #0xd]\n    mov r0, #4\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #0x32\n    strb r0, [r4, #0xc]\n    mov r0, #0\n    strb r0, [r4, #0xd]\n    mov r0, #4\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #0x64\n    strb r0, [r4, #0xc]\n    mov r0, #0\n    strb r0, [r4, #0xd]\n    mov r0, #4\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #0\n    strb r0, [r4, #0xc]\n    mov r0, #1\n    strb r0, [r4, #0xd]\n    mov r0, #4\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #0x32\n    strb r0, [r4, #0xc]\n    mov r0, #1\n    strb r0, [r4, #0xd]\n    mov r0, #4\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #0x64\n    strb r0, [r4, #0xc]\n    mov r0, #1\n    strb r0, [r4, #0xd]\n    mov r0, #4\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #6\n    str r0, [r4, #4]\n    b _02078B20\n    ldr r0, [r4, #8]\n    mov r1, #1\n    strh r1, [r0]\n    mov r0, #0xb\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #9\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #0xc\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #0xe\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #0x12\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #0x16\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #8\n    str r0, [r4, #4]\n    b _02078B20\n    ldr r1, [r4]\n    ldrb r2, [r4, #0xc]\n    ldrb r3, [r4, #0xd]\n    ldr r1, [r1, #8]\n    add r0, r6, #0\n    bl CallTask_02050960\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #2\n    str r0, [r4, #4]\n    b _02078B20\n    add r0, r6, #0\n    bl CallTask_WirelessTrade\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    mov r0, #2\n    str r0, [r4, #4]\n    b _02078B20\n    ldr r2, _02078B28 ; =0x00040100\n    mov r0, #3\n    mov r1, #0x35\n    bl Heap_Create\n    bl LoadOVY13\n    mov r0, #0x35\n    bl ov13_0221BA00\n    mov r0, #0\n    bl OS_ResetSystem\n    b _02078B20\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    bl sub_020378E4\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_020968B0\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    add r0, r5, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02078B20\n    ldr r0, [r4, #0x10]\n    bl Heap_Free\n    mov r0, #2\n    str r0, [r4, #4]\n    b _02078B20\n    add r1, r5, #0\n    mov r2, #0xb\n    mov r3, #1\n    bl sub_02078B9C\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    add r0, r5, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02078B20\n    add r0, r4, #0\n    bl sub_02078BD8\n    str r0, [r4, #4]\n    b _02078B20\n    ldr r2, [r4, #0x14]\n    add r0, r5, #0\n    mov r1, #0xb\n    bl sub_02078C18\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    add r0, r5, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02078B20\n    mov r0, #2\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x10]\n    bl sub_02078C60\n    b _02078B20\n    add r1, r5, #0\n    mov r2, #0xb\n    mov r3, #2\n    bl sub_02078B9C\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    add r0, r5, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02078B20\n    add r0, r4, #0\n    bl sub_02078BD8\n    str r0, [r4, #4]\n    b _02078B20\n    ldr r2, [r4, #0x14]\n    add r0, r5, #0\n    mov r1, #0xb\n    bl sub_02078C74\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    add r0, r5, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02078B20\n    mov r0, #2\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x10]\n    bl sub_02078CB4\n    b _02078B20\n    add r1, r5, #0\n    mov r2, #0xb\n    mov r3, #3\n    bl sub_02078B9C\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    add r0, r5, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02078B20\n    add r0, r4, #0\n    bl sub_02078BD8\n    str r0, [r4, #4]\n    b _02078B20\n    ldr r2, [r4, #0x14]\n    add r0, r5, #0\n    mov r1, #0xb\n    bl sub_02078CC8\n    str r0, [r4, #0x10]\n    ldr r0, [r4, #4]\n    add r0, r0, #1\n    str r0, [r4, #4]\n    b _02078B20\n    add r0, r5, #0\n    bl FieldSystem_ApplicationIsRunning\n    cmp r0, #0\n    bne _02078B20\n    mov r0, #2\n    str r0, [r4, #4]\n    ldr r0, [r4, #0x10]\n    bl sub_02078D10\n    b _02078B20\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02078B24: .word _02101290\n    _02078B28: .word 0x00040100"
    );
    #endif
}

void sub_02078B2C(void) {
    Heap_AllocAtEnd(0xb, 0x18);
    MI_CpuFill8(0, 0x18);
    Heap_AllocAtEnd(0xb, 0xc);
    MI_CpuFill8(0, 0xc);
}

void sub_02078B58(void) {
    /* Original at 0x02078B58 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02078B2C\n    add r2, r0, #0\n    ldr r0, [r2]\n    mov r1, #2\n    str r1, [r0, #4]\n    ldr r1, _02078B74 ; =sub_02078834\n    add r0, r4, #0\n    bl TaskManager_Call\n    pop {r4, pc}\n    nop\n    _02078B74: .word sub_02078834"
    );
    #endif
}

void sub_02078B78(void) {
    /* Original at 0x02078B78 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02078B2C\n    add r2, r0, #0\n    ldr r0, [r2]\n    mov r1, #1\n    str r1, [r0, #4]\n    ldr r1, _02078B98 ; =sub_02078834\n    add r0, r5, #0\n    str r4, [r2, #8]\n    bl TaskManager_Call\n    pop {r3, r4, r5, pc}\n    nop\n    _02078B98: .word sub_02078834"
    );
    #endif
}

void sub_02078B9C(void) {
    /* Original at 0x02078B9C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r0, r2, #0\n    mov r1, #0xc\n    add r4, r3, #0\n    bl Heap_Alloc\n    add r2, r0, #0\n    strb r4, [r2]\n    mov r0, #2\n    strb r0, [r2, #1]\n    ldr r0, _02078BD0 ; =_0210125C\n    ldr r1, _02078BD4 ; =_02101280\n    ldrb r0, [r0, r4]\n    strb r0, [r2, #2]\n    mov r0, #0\n    strb r0, [r2, #3]\n    strb r0, [r2, #4]\n    ldr r0, [r5, #0xc]\n    str r0, [r2, #8]\n    add r0, r5, #0\n    str r2, [r6, #0x10]\n    bl FieldSystem_LaunchApplication\n    pop {r4, r5, r6, pc}\n    _02078BD0: .word _0210125C\n    _02078BD4: .word _02101280"
    );
    #endif
}

void sub_02078BD8(void) {
    /* Original at 0x02078BD8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    ldrb r1, [r0, #3]\n    cmp r1, #1\n    bne _02078C04\n    ldrb r1, [r0]\n    cmp r1, #1\n    beq _02078BF2\n    cmp r1, #2\n    beq _02078BF8\n    cmp r1, #3\n    b _02078BFE\n    mov r1, #0x10\n    str r1, [r4, #4]\n    b _02078C08\n    mov r1, #0x14\n    str r1, [r4, #4]\n    b _02078C08\n    mov r1, #0x18\n    str r1, [r4, #4]\n    b _02078C08\n    mov r1, #1\n    str r1, [r4, #4]\n    ldrb r0, [r0, #4]\n    str r0, [r4, #0x14]\n    ldr r0, [r4, #0x10]\n    bl Heap_Free\n    ldr r0, [r4, #4]\n    pop {r4, pc}"
    );
    #endif
}

void sub_02078C18(void) {
    /* Original at 0x02078C18 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0x3c\n    add r6, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x3c\n    bl memset\n    add r0, r4, #0\n    add r0, #0x38\n    strb r6, [r0]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x39\n    strb r1, [r0]\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    str r0, [r4, #0x34]\n    ldr r0, _02078C58 ; =FS_OVERLAY_ID(OVY_90)\n    bl HandleLoadOverlay\n    ldr r1, _02078C5C ; =_02101260\n    add r0, r5, #0\n    add r2, r4, #0\n    bl FieldSystem_LaunchApplication\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _02078C58: .word FS_OVERLAY_ID(OVY_90)\n    _02078C5C: .word _02101260"
    );
    #endif
}

void sub_02078C60(void) {
    /* Original at 0x02078C60 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl Heap_Free\n    ldr r0, _02078C70 ; =FS_OVERLAY_ID(OVY_90)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    nop\n    _02078C70: .word FS_OVERLAY_ID(OVY_90)"
    );
    #endif
}

void sub_02078C74(void) {
    /* Original at 0x02078C74 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0x40\n    add r6, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x40\n    bl memset\n    str r6, [r4, #0x3c]\n    mov r0, #0\n    str r0, [r4, #0x38]\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    str r0, [r4, #0x34]\n    ldr r0, _02078CAC ; =FS_OVERLAY_ID(OVY_90)\n    bl HandleLoadOverlay\n    ldr r1, _02078CB0 ; =_02101270\n    add r0, r5, #0\n    add r2, r4, #0\n    bl FieldSystem_LaunchApplication\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _02078CAC: .word FS_OVERLAY_ID(OVY_90)\n    _02078CB0: .word _02101270"
    );
    #endif
}

void sub_02078CB4(void) {
    /* Original at 0x02078CB4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl Heap_Free\n    ldr r0, _02078CC4 ; =FS_OVERLAY_ID(OVY_90)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    nop\n    _02078CC4: .word FS_OVERLAY_ID(OVY_90)"
    );
    #endif
}

void sub_02078CC8(void) {
    /* Original at 0x02078CC8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r0, r1, #0\n    mov r1, #0x3c\n    add r6, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    mov r2, #0x3c\n    bl MI_CpuFill8\n    add r0, r4, #0\n    add r0, #0x38\n    strb r6, [r0]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x39\n    strb r1, [r0]\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    str r0, [r4, #0x34]\n    ldr r0, _02078D08 ; =FS_OVERLAY_ID(OVY_90)\n    bl HandleLoadOverlay\n    ldr r1, _02078D0C ; =_021012A0\n    add r0, r5, #0\n    add r2, r4, #0\n    bl FieldSystem_LaunchApplication\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _02078D08: .word FS_OVERLAY_ID(OVY_90)\n    _02078D0C: .word _021012A0"
    );
    #endif
}

void sub_02078D10(void) {
    /* Original at 0x02078D10 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl Heap_Free\n    ldr r0, _02078D20 ; =FS_OVERLAY_ID(OVY_90)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    nop\n    _02078D20: .word FS_OVERLAY_ID(OVY_90)"
    );
    #endif
}

void sub_02078D24(void) {
    /* Original at 0x02078D24 */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_020398C8\n    mov r1, #0x24\n    ldrb r2, [r0, #0x1b]\n    mul r1, r4\n    add r0, r0, r1\n    add r0, #0x3f\n    ldrb r0, [r0]\n    cmp r2, #0xc\n    bne _02078D44\n    cmp r0, #5\n    bne _02078D44\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0xd\n    bne _02078D50\n    cmp r0, #6\n    bne _02078D50\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0xe\n    bne _02078D5C\n    cmp r0, #7\n    bne _02078D5C\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #9\n    bne _02078D68\n    cmp r0, #2\n    bne _02078D68\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0xa\n    bne _02078D74\n    cmp r0, #3\n    bne _02078D74\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0xb\n    bne _02078D80\n    cmp r0, #4\n    bne _02078D80\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0xf\n    bne _02078D8C\n    cmp r0, #8\n    bne _02078D8C\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0x13\n    bne _02078D98\n    cmp r0, #0x12\n    bne _02078D98\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0x15\n    bne _02078DA4\n    cmp r0, #0x14\n    bne _02078DA4\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0x17\n    bne _02078DB0\n    cmp r0, #0x16\n    bne _02078DB0\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0x19\n    bne _02078DBC\n    cmp r0, #0x18\n    bne _02078DBC\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0x1b\n    bne _02078DC8\n    cmp r0, #0x1a\n    bne _02078DC8\n    mov r0, #1\n    pop {r4, pc}\n    cmp r2, #0x10\n    bne _02078DD4\n    cmp r0, #1\n    bne _02078DD4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}
