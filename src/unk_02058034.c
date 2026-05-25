/* Decompiled from asm/unk_02058034.s */
#include "global.h"

void sub_02058034(void) {
    /* Original at 0x02058034 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02058038(void) {
    /* Original at 0x02058038 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02058090 ; =_021D41C8\n    add r4, r0, #0\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _0205808C\n    bl sub_02091574\n    mov r0, #0xf\n    mov r1, #0x44\n    bl Heap_Alloc\n    ldr r1, _02058090 ; =_021D41C8\n    mov r2, #0x44\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _02058090 ; =_021D41C8\n    mov r1, #0x32\n    ldr r0, [r0]\n    mov r2, #0xa\n    strh r1, [r0, #0x38]\n    ldr r0, _02058094 ; =sub_020582CC\n    mov r1, #0\n    bl SysTask_CreateOnMainQueue\n    ldr r1, _02058090 ; =_021D41C8\n    ldr r2, [r1]\n    str r0, [r2, #0x34]\n    ldr r0, [r1]\n    mov r2, #0\n    str r4, [r0, #0x14]\n    ldr r0, [r1]\n    str r2, [r0, #0x40]\n    bl sub_02058034\n    ldr r0, _02058090 ; =_021D41C8\n    ldr r0, [r0]\n    add r0, #0x18\n    bl sub_0203778C\n    pop {r4, pc}\n    nop\n    _02058090: .word _021D41C8\n    _02058094: .word sub_020582CC"
    );
    #endif
}

void sub_02058098(void) {
    /* Original at 0x02058098 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r0, _020580E0 ; =_021D41C8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _020580DE\n    ldr r0, [r0, #0x34]\n    bl SysTask_Destroy\n    mov r4, #0\n    ldr r6, _020580E0 ; =_021D41C8\n    add r5, r4, #0\n    ldr r0, [r6]\n    ldr r0, [r0, r5]\n    cmp r0, #0\n    beq _020580BA\n    bl Heap_Free\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _020580AE\n    ldr r0, _020580E0 ; =_021D41C8\n    ldr r0, [r0]\n    ldr r0, [r0, #0x40]\n    cmp r0, #0\n    beq _020580D0\n    bl Heap_Free\n    ldr r0, _020580E0 ; =_021D41C8\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _020580E0 ; =_021D41C8\n    mov r1, #0\n    str r1, [r0]\n    pop {r4, r5, r6, pc}\n    _020580E0: .word _021D41C8"
    );
    #endif
}

void sub_020580E4(void) {
    /* Original at 0x020580E4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _0205811C\n    add r0, r5, #0\n    bl FieldSystem_GetSaveData\n    mov r1, #0\n    add r3, r5, #0\n    str r1, [sp]\n    add r3, #0xa4\n    ldr r3, [r3]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_02037D8C\n    add r0, r5, #0\n    bl sub_02058038\n    ldr r0, _02058120 ; =sub_02058304\n    mov r1, #0\n    bl sub_020582F4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _02058120: .word sub_02058304"
    );
    #endif
}

void sub_02058124(void) {
    /* Original at 0x02058124 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _0205815C\n    add r0, r5, #0\n    bl FieldSystem_GetSaveData\n    mov r1, #0\n    add r3, r5, #0\n    str r1, [sp]\n    add r3, #0xa4\n    ldr r3, [r3]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_02037DD4\n    add r0, r5, #0\n    bl sub_02058038\n    ldr r0, _02058160 ; =sub_0205832C\n    mov r1, #0\n    bl sub_020582F4\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _02058160: .word sub_0205832C"
    );
    #endif
}

void sub_02058164(void) {
    /* Original at 0x02058164 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02058174 ; =_021D41C8\n    ldr r3, _02058178 ; =sub_020582F4\n    ldr r1, [r1]\n    add r1, #0x3a\n    strb r0, [r1]\n    ldr r0, _0205817C ; =sub_0205834C\n    mov r1, #0\n    bx r3\n    _02058174: .word _021D41C8\n    _02058178: .word sub_020582F4\n    _0205817C: .word sub_0205834C"
    );
    #endif
}

void sub_02058180(void) {
    /* Original at 0x02058180 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02058188 ; =sub_020582F4\n    ldr r0, _0205818C ; =sub_020588A0\n    mov r1, #0\n    bx r3\n    _02058188: .word sub_020582F4\n    _0205818C: .word sub_020588A0"
    );
    #endif
}

void sub_02058190(void) {
    /* Original at 0x02058190 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_0200FC60\n    mov r0, #1\n    mov r1, #0\n    bl sub_0200FC60\n    mov r0, #1\n    add r1, r0, #0\n    bl sub_020398D4\n    bl sub_02037D78\n    cmp r0, #0\n    beq _02058248\n    ldr r0, _0205824C ; =_021D41C8\n    ldr r1, [r0]\n    cmp r1, #0\n    bne _020581D0\n    add r0, r4, #0\n    bl sub_02058038\n    ldr r0, _0205824C ; =_021D41C8\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x3e\n    strb r1, [r0]\n    b _020581D6\n    mov r0, #0\n    add r1, #0x3e\n    strb r0, [r1]\n    ldr r0, _0205824C ; =_021D41C8\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x3f\n    strb r1, [r0]\n    bl sub_0203769C\n    str r0, [sp, #8]\n    bl sub_0203769C\n    bl sub_02034818\n    mov r4, #0\n    bl sub_02037454\n    cmp r0, #0\n    ble _0205821E\n    ldr r6, _0205824C ; =_021D41C8\n    add r5, r4, #0\n    add r7, r4, #0\n    ldr r0, [r6]\n    ldr r0, [r0, r5]\n    cmp r0, #0\n    bne _02058212\n    ldr r1, _02058250 ; =0x0000066C\n    add r0, r7, #0\n    bl Heap_Alloc\n    ldr r1, [r6]\n    str r0, [r1, r5]\n    add r5, r5, #4\n    add r4, r4, #1\n    bl sub_02037454\n    cmp r4, r0\n    blt _020581FE\n    ldr r0, _0205824C ; =_021D41C8\n    mov r3, #0xff\n    ldr r1, [r0]\n    ldr r0, [r1, #0x14]\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    str r0, [sp, #4]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl sub_02068FC8\n    mov r0, #0x5f\n    bl sub_02037AC0\n    ldr r0, _02058254 ; =sub_020588F8\n    mov r1, #0\n    bl sub_020582F4\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0205824C: .word _021D41C8\n    _02058250: .word 0x0000066C\n    _02058254: .word sub_020588F8"
    );
    #endif
}

void sub_02058258(void) {
    /* Original at 0x02058258 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02058278 ; =_021D41C8\n    ldr r0, [r0]\n    ldr r1, [r0, #0x30]\n    ldr r0, _0205827C ; =sub_020588F8\n    cmp r1, r0\n    bne _02058268\n    mov r0, #0\n    bx lr\n    ldr r0, _02058280 ; =sub_02058930\n    cmp r1, r0\n    beq _02058272\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02058278: .word _021D41C8\n    _0205827C: .word sub_020588F8\n    _02058280: .word sub_02058930"
    );
    #endif
}

void sub_02058284(void) {
    /* Original at 0x02058284 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020582A0 ; =_021D41C8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0205829E\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    ldr r0, _020582A4 ; =sub_02058A60\n    mov r1, #5\n    bl sub_020582F4\n    pop {r3, pc}\n    _020582A0: .word _021D41C8\n    _020582A4: .word sub_02058A60"
    );
    #endif
}

void sub_020582A8(void) {
    /* Original at 0x020582A8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020582C4 ; =_021D41C8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _020582C0\n    mov r0, #0x5b\n    bl sub_02037AC0\n    ldr r0, _020582C8 ; =sub_02058A38\n    mov r1, #5\n    bl sub_020582F4\n    pop {r3, pc}\n    nop\n    _020582C4: .word _021D41C8\n    _020582C8: .word sub_02058A38"
    );
    #endif
}

void sub_020582CC(void) {
    /* Original at 0x020582CC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _020582F0 ; =_021D41C8\n    ldr r2, [r1]\n    cmp r2, #0\n    bne _020582DC\n    bl SysTask_Destroy\n    pop {r3, pc}\n    ldr r1, [r2, #0x30]\n    cmp r1, #0\n    beq _020582EC\n    add r2, #0x3c\n    ldrb r0, [r2]\n    cmp r0, #0\n    bne _020582EC\n    blx r1\n    pop {r3, pc}\n    nop\n    _020582F0: .word _021D41C8"
    );
    #endif
}

void sub_020582F4(void) {
    /* Original at 0x020582F4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02058300 ; =_021D41C8\n    ldr r3, [r2]\n    str r0, [r3, #0x30]\n    ldr r0, [r2]\n    strh r1, [r0, #0x38]\n    bx lr\n    _02058300: .word _021D41C8"
    );
    #endif
}

void sub_02058304(void) {
    /* Original at 0x02058304 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02058322\n    bl ov03_02255C54\n    bl sub_02034434\n    ldr r0, _02058324 ; =sub_02058328\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    _02058324: .word sub_02058328"
    );
    #endif
}

void sub_02058328(void) {
    /* Original at 0x02058328 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0205832C(void) {
    /* Original at 0x0205832C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02058342\n    bl ov03_02255BEC\n    ldr r0, _02058344 ; =sub_02058348\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    _02058344: .word sub_02058348"
    );
    #endif
}

void sub_02058348(void) {
    /* Original at 0x02058348 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0205834C(void) {
    /* Original at 0x0205834C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02058364 ; =_021D41C8\n    ldr r0, [r0]\n    add r0, #0x3a\n    ldrb r0, [r0]\n    bl sub_02037E1C\n    ldr r0, _02058368 ; =sub_0205836C\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    _02058364: .word _021D41C8\n    _02058368: .word sub_0205836C"
    );
    #endif
}

void sub_0205836C(void) {
    /* Original at 0x0205836C */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037EC8\n    cmp r0, #0\n    beq _02058382\n    bl sub_02034434\n    ldr r0, _02058384 ; =sub_02058388\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    _02058384: .word sub_02058388"
    );
    #endif
}

void sub_02058388(void) {
    /* Original at 0x02058388 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_0205838C(void) {
    /* Original at 0x0205838C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0x62\n    bl sub_02037B38\n    cmp r0, #0\n    beq _020583C8\n    bl sub_02057180\n    add r1, r0, #0\n    mov r0, #0xf\n    bl Heap_Alloc\n    ldr r1, _020583E4 ; =_021D41C8\n    mov r2, #0\n    ldr r1, [r1]\n    ldr r1, [r1, #0x14]\n    bl sub_02056D7C\n    bl sub_02057F80\n    bl sub_02037504\n    mov r0, #0x5c\n    bl sub_02037AC0\n    ldr r0, _020583E8 ; =sub_020583EC\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    ldr r0, _020583E4 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _020583D8\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    mov r0, #0x1e\n    strh r0, [r1, #0x38]\n    mov r0, #0x62\n    bl sub_02037AC0\n    pop {r3, pc}\n    _020583E4: .word _021D41C8\n    _020583E8: .word sub_020583EC"
    );
    #endif
}

void sub_020583EC(void) {
    /* Original at 0x020583EC */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0xc\n    bl sub_0203769C\n    cmp r0, #0\n    bne _020583FC\n    bl sub_02034638\n    mov r0, #0x5c\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0205843A\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    bl sub_02056E60\n    mov r0, #0\n    bl sub_0205701C\n    ldr r0, _02058440 ; =sub_02058478\n    mov r1, #1\n    bl sub_020582F4\n    add sp, #0xc\n    pop {pc}\n    nop\n    _02058440: .word sub_02058478"
    );
    #endif
}

void sub_02058444(void) {
    /* Original at 0x02058444 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02058470 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _02058456\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    mov r0, #0x1e\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0205846C\n    bl sub_020374E4\n    ldr r0, _02058474 ; =sub_02058608\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    nop\n    _02058470: .word _021D41C8\n    _02058474: .word sub_02058608"
    );
    #endif
}

void sub_02058478(void) {
    /* Original at 0x02058478 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020584B4 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _0205848A\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    bl sub_0203769C\n    cmp r0, #0\n    bne _020584A2\n    bl sub_02057E50\n    cmp r0, #0\n    beq _020584B0\n    mov r0, #0x1e\n    bl sub_02037AC0\n    b _020584A8\n    mov r0, #0x1e\n    bl sub_02037AC0\n    ldr r0, _020584B8 ; =sub_02058444\n    mov r1, #0x14\n    bl sub_020582F4\n    pop {r3, pc}\n    nop\n    _020584B4: .word _021D41C8\n    _020584B8: .word sub_02058444"
    );
    #endif
}

void sub_020584BC(void) {
    /* Original at 0x020584BC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0x62\n    bl sub_02037B38\n    cmp r0, #0\n    beq _020584F4\n    bl sub_02057180\n    add r1, r0, #0\n    mov r0, #0xf\n    bl Heap_Alloc\n    ldr r1, _02058510 ; =_021D41C8\n    mov r2, #0\n    ldr r1, [r1]\n    ldr r1, [r1, #0x14]\n    bl sub_02056D7C\n    bl sub_02057F80\n    mov r0, #0x5c\n    bl sub_02037AC0\n    ldr r0, _02058514 ; =sub_02058518\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    ldr r0, _02058510 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _02058504\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    mov r0, #0x1e\n    strh r0, [r1, #0x38]\n    mov r0, #0x62\n    bl sub_02037AC0\n    pop {r3, pc}\n    _02058510: .word _021D41C8\n    _02058514: .word sub_02058518"
    );
    #endif
}

void sub_02058518(void) {
    /* Original at 0x02058518 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #0x10\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02058528\n    bl sub_02034638\n    mov r0, #0x5c\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02058574\n    bl sub_02056E60\n    mov r0, #0\n    bl sub_0205701C\n    mov r1, #1\n    add r0, sp, #0xc\n    strb r1, [r0]\n    mov r0, #0x5e\n    add r1, sp, #0xc\n    bl sub_020376E0\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    bl sub_0200FBDC\n    mov r0, #1\n    bl sub_0200FBDC\n    ldr r0, _02058578 ; =sub_020586EC\n    mov r1, #0\n    bl sub_020582F4\n    add sp, #0x10\n    pop {r3, pc}\n    _02058578: .word sub_020586EC"
    );
    #endif
}

void sub_0205857C(void) {
    /* Original at 0x0205857C */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r0, #0\n    str r0, [sp]\n    bl sub_02037454\n    cmp r0, #0\n    ble _020585F0\n    mov r7, #0\n    bl sub_0203769C\n    ldr r1, [sp]\n    cmp r1, r0\n    beq _020585E0\n    add r0, r1, #0\n    bl sub_02037B5C\n    cmp r0, #0x5e\n    bne _020585E0\n    ldr r6, _02058600 ; =_021D41C8\n    ldr r0, [r6]\n    ldr r1, [r0, #0x14]\n    ldr r0, [r1, #0x10]\n    cmp r0, #0\n    bne _020585E0\n    add r1, #0xd2\n    ldrb r0, [r1]\n    lsl r0, r0, #0x1a\n    lsr r0, r0, #0x1a\n    bne _020585E0\n    mov r4, #0\n    add r5, r4, #0\n    ldr r0, [r6]\n    ldr r0, [r0, r5]\n    cmp r0, #0\n    beq _020585CA\n    bl Heap_Free\n    ldr r0, [r6]\n    str r7, [r0, r5]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _020585BA\n    ldr r0, _02058600 ; =_021D41C8\n    ldr r1, _02058604 ; =0x0000238E\n    ldr r0, [r0]\n    mov r2, #0\n    ldr r0, [r0, #0x14]\n    bl StartMapSceneScript\n    ldr r0, [sp]\n    add r0, r0, #1\n    str r0, [sp]\n    bl sub_02037454\n    ldr r1, [sp]\n    cmp r1, r0\n    blt _0205858C\n    ldr r1, _02058600 ; =_021D41C8\n    mov r0, #4\n    ldr r1, [r1]\n    ldr r1, [r1, #0x14]\n    ldr r1, [r1, #8]\n    bl sub_020399FC\n    pop {r3, r4, r5, r6, r7, pc}\n    _02058600: .word _021D41C8\n    _02058604: .word 0x0000238E"
    );
    #endif
}

void sub_02058608(void) {
    /* Original at 0x02058608 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02057C94\n    cmp r0, #0\n    bne _02058632\n    ldr r0, _02058638 ; =_021D41C8\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x3f\n    strb r1, [r0]\n    mov r1, #1\n    add r0, sp, #0\n    strb r1, [r0]\n    mov r0, #0x5e\n    add r1, sp, #0\n    bl sub_020376E0\n    ldr r0, _0205863C ; =sub_020586EC\n    mov r1, #0\n    bl sub_020582F4\n    bl sub_0205857C\n    pop {r3, pc}\n    _02058638: .word _021D41C8\n    _0205863C: .word sub_020586EC"
    );
    #endif
}

void sub_02058640(void) {
    /* Original at 0x02058640 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    beq _0205865E\n    mov r0, #0xb\n    bl SaveArray_Party_Alloc\n    ldr r1, _02058684 ; =_021D41C8\n    ldr r2, [r1]\n    str r0, [r2, #0x40]\n    ldr r1, [r1]\n    add r0, r4, #0\n    ldr r1, [r1, #0x40]\n    bl Party_Copy\n    cmp r5, #0\n    beq _0205866C\n    ldr r0, _02058688 ; =sub_02058870\n    mov r1, #3\n    bl sub_020582F4\n    pop {r3, r4, r5, pc}\n    mov r1, #3\n    add r0, sp, #0\n    strb r1, [r0]\n    mov r0, #0x5e\n    add r1, sp, #0\n    bl sub_020376E0\n    ldr r0, _0205868C ; =sub_02058608\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, r4, r5, pc}\n    _02058684: .word _021D41C8\n    _02058688: .word sub_02058870\n    _0205868C: .word sub_02058608"
    );
    #endif
}

void sub_02058690(void) {
    /* Original at 0x02058690 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02058698 ; =sub_020582F4\n    ldr r0, _0205869C ; =sub_02058608\n    mov r1, #0\n    bx r3\n    _02058698: .word sub_020582F4\n    _0205869C: .word sub_02058608"
    );
    #endif
}

void sub_020586A0(void) {
    /* Original at 0x020586A0 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037958\n    cmp r0, #0\n    bne _020586DE\n    bl sub_0203769C\n    bl sub_02057F18\n    cmp r0, #0\n    bne _020586DE\n    ldr r0, _020586E0 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _020586C6\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    bl sub_02057F58\n    ldr r0, _020586E0 ; =_021D41C8\n    ldr r1, _020586E4 ; =sub_02058640\n    ldr r0, [r0]\n    ldr r0, [r0, #0x14]\n    bl sub_02059538\n    ldr r0, _020586E8 ; =sub_02058690\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    _020586E0: .word _021D41C8\n    _020586E4: .word sub_02058640\n    _020586E8: .word sub_02058690"
    );
    #endif
}

void sub_020586EC(void) {
    /* Original at 0x020586EC */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02058718 ; =_021D41C8\n    ldr r0, [r0]\n    add r0, #0x3f\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02058710\n    ldr r0, _0205871C ; =sub_020586A0\n    mov r1, #5\n    bl sub_020582F4\n    mov r1, #0\n    add r0, sp, #0\n    strb r1, [r0]\n    mov r0, #0x5e\n    add r1, sp, #0\n    bl sub_020376E0\n    bl sub_0205857C\n    pop {r3, pc}\n    nop\n    _02058718: .word _021D41C8\n    _0205871C: .word sub_020586A0"
    );
    #endif
}

void sub_02058720(void) {
    sub_0203769C(1);
}

void sub_02058740(void) {
    /* Original at 0x02058740 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02058760 ; =_021D41C8\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0205875A\n    ldr r1, [r0, #0x30]\n    ldr r0, _02058764 ; =sub_020586EC\n    cmp r1, r0\n    beq _02058756\n    ldr r0, _02058768 ; =sub_02058608\n    cmp r1, r0\n    bne _0205875A\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02058760: .word _021D41C8\n    _02058764: .word sub_020586EC\n    _02058768: .word sub_02058608"
    );
    #endif
}

void sub_0205876C(void) {
    /* Original at 0x0205876C */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r0, _020587E4 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _02058782\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    add sp, #8\n    pop {r4, pc}\n    mov r4, #5\n    bl sub_0203993C\n    cmp r0, #5\n    bgt _0205879C\n    cmp r0, #2\n    blt _020587A8\n    beq _020587A6\n    cmp r0, #4\n    beq _020587A2\n    cmp r0, #5\n    beq _020587A2\n    b _020587A8\n    cmp r0, #0x26\n    beq _020587A6\n    b _020587A8\n    mov r4, #0xf\n    b _020587A8\n    mov r4, #7\n    add r0, sp, #0\n    bl sub_02039980\n    ldr r0, _020587E4 ; =_021D41C8\n    ldr r0, [r0]\n    ldr r1, [r0, #0x40]\n    ldr r0, [r0, #0x14]\n    cmp r1, #0\n    bne _020587C4\n    add r1, sp, #0\n    add r2, r4, #0\n    bl sub_02051598\n    b _020587DC\n    add r2, r4, #0\n    bl sub_020515FC\n    ldr r0, _020587E4 ; =_021D41C8\n    ldr r0, [r0]\n    ldr r0, [r0, #0x40]\n    bl Heap_Free\n    ldr r0, _020587E4 ; =_021D41C8\n    mov r1, #0\n    ldr r0, [r0]\n    str r1, [r0, #0x40]\n    bl sub_02058098\n    add sp, #8\n    pop {r4, pc}\n    _020587E4: .word _021D41C8"
    );
    #endif
}

void sub_020587E8(void) {
    /* Original at 0x020587E8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02036010\n    cmp r0, #0\n    beq _02058822\n    ldr r0, _02058824 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _02058800\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    ldr r0, _02058824 ; =_021D41C8\n    ldr r0, [r0]\n    ldrh r0, [r0, #0x38]\n    cmp r0, #0x5a\n    bne _02058810\n    mov r0, #4\n    bl sub_02037AC0\n    mov r0, #4\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02058822\n    ldr r0, _02058828 ; =sub_0205876C\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    _02058824: .word _021D41C8\n    _02058828: .word sub_0205876C"
    );
    #endif
}

void sub_0205882C(void) {
    /* Original at 0x0205882C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0205884C ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _0205883E\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    bl sub_02035FD8\n    ldr r0, _02058850 ; =sub_020587E8\n    mov r1, #0x78\n    bl sub_020582F4\n    pop {r3, pc}\n    _0205884C: .word _021D41C8\n    _02058850: .word sub_020587E8"
    );
    #endif
}

void sub_02058854(void) {
    /* Original at 0x02058854 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #3\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02058868\n    ldr r0, _0205886C ; =sub_0205882C\n    mov r1, #2\n    bl sub_020582F4\n    pop {r3, pc}\n    nop\n    _0205886C: .word sub_0205882C"
    );
    #endif
}

void sub_02058870(void) {
    /* Original at 0x02058870 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02058898 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _02058882\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    mov r0, #0\n    bl sub_02056EA0\n    mov r0, #3\n    bl sub_02037AC0\n    ldr r0, _0205889C ; =sub_02058854\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    _02058898: .word _021D41C8\n    _0205889C: .word sub_02058854"
    );
    #endif
}

void sub_020588A0(void) {
    /* Original at 0x020588A0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037E38\n    ldr r0, _020588B0 ; =sub_020588B4\n    mov r1, #2\n    bl sub_020582F4\n    pop {r3, pc}\n    _020588B0: .word sub_020588B4"
    );
    #endif
}

void sub_020588B4(void) {
    /* Original at 0x020588B4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02035664\n    cmp r0, #0\n    beq _020588C6\n    ldr r0, _020588C8 ; =sub_0205836C\n    mov r1, #0xa\n    bl sub_020582F4\n    pop {r3, pc}\n    _020588C8: .word sub_0205836C"
    );
    #endif
}

void sub_020588CC(void) {
    /* Original at 0x020588CC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020588D8 ; =_021D41C8\n    mov r2, #1\n    ldr r1, [r1]\n    add r0, r1, r0\n    strb r2, [r0, #0x10]\n    bx lr\n    _020588D8: .word _021D41C8"
    );
    #endif
}

void sub_020588DC(void) {
    GF_AssertFail();
}

void sub_020588F8(void) {
    /* Original at 0x020588F8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0203769C\n    add r4, r0, #0\n    mov r0, #0x5f\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02058922\n    ldr r1, _02058924 ; =_021D41C8\n    mov r0, #0x58\n    ldr r2, [r1]\n    lsl r1, r4, #2\n    ldr r1, [r2, r1]\n    ldr r2, _02058928 ; =0x0000066C\n    bl sub_02036FD8\n    ldr r0, _0205892C ; =sub_02058930\n    mov r1, #0\n    bl sub_020582F4\n    pop {r4, pc}\n    _02058924: .word _021D41C8\n    _02058928: .word 0x0000066C\n    _0205892C: .word sub_02058930"
    );
    #endif
}

void sub_02058930(void) {
    /* Original at 0x02058930 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r4, #0\n    bl sub_02037454\n    cmp r0, #0\n    ble _02058952\n    ldr r5, _02058964 ; =_021D41C8\n    ldr r0, [r5]\n    add r0, r0, r4\n    ldrb r0, [r0, #0x10]\n    cmp r0, #0\n    beq _02058960\n    add r4, r4, #1\n    bl sub_02037454\n    cmp r4, r0\n    blt _0205893E\n    mov r0, #0x61\n    bl sub_02037AC0\n    ldr r0, _02058968 ; =sub_020589D8\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, r4, r5, pc}\n    nop\n    _02058964: .word _021D41C8\n    _02058968: .word sub_020589D8"
    );
    #endif
}

void sub_0205896C(void) {
    /* Original at 0x0205896C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02036010\n    cmp r0, #0\n    bne _020589A6\n    ldr r0, _020589A8 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _02058984\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    ldr r0, _020589A8 ; =_021D41C8\n    ldr r0, [r0]\n    ldrh r0, [r0, #0x38]\n    cmp r0, #0x5a\n    bne _02058994\n    mov r0, #5\n    bl sub_02037AC0\n    mov r0, #5\n    bl sub_02037B38\n    cmp r0, #0\n    beq _020589A6\n    ldr r0, _020589AC ; =sub_020589F4\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    _020589A8: .word _021D41C8\n    _020589AC: .word sub_020589F4"
    );
    #endif
}

void sub_020589B0(void) {
    /* Original at 0x020589B0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020589D0 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _020589C2\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    bl sub_02035FE4\n    ldr r0, _020589D4 ; =sub_0205896C\n    mov r1, #0x78\n    bl sub_020582F4\n    pop {r3, pc}\n    _020589D0: .word _021D41C8\n    _020589D4: .word sub_0205896C"
    );
    #endif
}

void sub_020589D8(void) {
    /* Original at 0x020589D8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0x61\n    bl sub_02037B38\n    cmp r0, #0\n    beq _020589EC\n    ldr r0, _020589F0 ; =sub_020589B0\n    mov r1, #2\n    bl sub_020582F4\n    pop {r3, pc}\n    nop\n    _020589F0: .word sub_020589B0"
    );
    #endif
}

void sub_020589F4(void) {
    /* Original at 0x020589F4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02058A2C ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _02058A06\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    mov r0, #0x62\n    bl sub_02037AC0\n    ldr r0, _02058A2C ; =_021D41C8\n    ldr r0, [r0]\n    add r0, #0x3e\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02058A22\n    ldr r0, _02058A30 ; =sub_0205838C\n    mov r1, #0x1e\n    bl sub_020582F4\n    pop {r3, pc}\n    ldr r0, _02058A34 ; =sub_020584BC\n    mov r1, #0x1e\n    bl sub_020582F4\n    pop {r3, pc}\n    _02058A2C: .word _021D41C8\n    _02058A30: .word sub_0205838C\n    _02058A34: .word sub_020584BC"
    );
    #endif
}

void sub_02058A38(void) {
    /* Original at 0x02058A38 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0x5b\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02058A5A\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    mov r0, #1\n    bl sub_02056EA0\n    ldr r0, _02058A5C ; =sub_02058A78\n    mov r1, #5\n    bl sub_020582F4\n    pop {r3, pc}\n    _02058A5C: .word sub_02058A78"
    );
    #endif
}

void sub_02058A60(void) {
    /* Original at 0x02058A60 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    bl sub_02056EA0\n    ldr r0, _02058A74 ; =sub_02058A78\n    mov r1, #5\n    bl sub_020582F4\n    pop {r3, pc}\n    nop\n    _02058A74: .word sub_02058A78"
    );
    #endif
}

void sub_02058A78(void) {
    /* Original at 0x02058A78 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02058A98 ; =_021D41C8\n    ldr r1, [r0]\n    ldrh r0, [r1, #0x38]\n    cmp r0, #0\n    beq _02058A8A\n    sub r0, r0, #1\n    strh r0, [r1, #0x38]\n    pop {r3, pc}\n    bl sub_02037E9C\n    ldr r0, _02058A9C ; =sub_02058098\n    mov r1, #0\n    bl sub_020582F4\n    pop {r3, pc}\n    _02058A98: .word _021D41C8\n    _02058A9C: .word sub_02058098"
    );
    #endif
}

void sub_02058AA0(void) {
    /* Original at 0x02058AA0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02058AD4 ; =_021D41C8\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02058AAC\n    mov r0, #0\n    bx lr\n    ldr r1, [r0, #0x30]\n    ldr r0, _02058AD8 ; =sub_02058870\n    cmp r1, r0\n    beq _02058ACC\n    ldr r0, _02058ADC ; =sub_02058854\n    cmp r1, r0\n    beq _02058ACC\n    ldr r0, _02058AE0 ; =sub_0205882C\n    cmp r1, r0\n    beq _02058ACC\n    ldr r0, _02058AE4 ; =sub_020587E8\n    cmp r1, r0\n    beq _02058ACC\n    ldr r0, _02058AE8 ; =sub_0205876C\n    cmp r1, r0\n    bne _02058AD0\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02058AD4: .word _021D41C8\n    _02058AD8: .word sub_02058870\n    _02058ADC: .word sub_02058854\n    _02058AE0: .word sub_0205882C\n    _02058AE4: .word sub_020587E8\n    _02058AE8: .word sub_0205876C"
    );
    #endif
}
