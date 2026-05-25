/* Decompiled from asm/unk_02037C94.s */
#include "global.h"

u8 sub_02037C94(void) {
    return 0x46;
}

void sub_02037C98(void) {
    /* Original at 0x02037C98 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02037D28 ; =_021D4150\n    add r4, r1, #0\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02037D24\n    cmp r5, #0\n    bne _02037CAE\n    bl GF_AssertFail\n    bl sub_02034D8C\n    mov r0, #0xf\n    mov r1, #0x68\n    bl Heap_Alloc\n    ldr r1, _02037D28 ; =_021D4150\n    mov r2, #0x68\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _02037D28 ; =_021D4150\n    mov r2, #0x32\n    ldr r1, [r0]\n    str r2, [r1, #0x44]\n    ldr r1, [r0]\n    mov r2, #1\n    add r1, #0x52\n    strb r2, [r1]\n    ldr r0, [r0]\n    str r5, [r0, #0x28]\n    add r0, r5, #0\n    bl Save_PlayerData_GetProfile\n    ldr r1, _02037D28 ; =_021D4150\n    ldr r2, [r1]\n    str r0, [r2, #0x2c]\n    ldr r0, [r1]\n    mov r2, #2\n    add r0, #0x4a\n    strb r2, [r0]\n    ldr r0, [r1]\n    mov r2, #0\n    add r0, #0x4c\n    strb r2, [r0]\n    ldr r0, [r1]\n    add r0, #0x57\n    strb r2, [r0]\n    ldr r0, [r1]\n    add r0, #0x4e\n    strb r4, [r0]\n    ldr r0, [r1]\n    add r0, #0xc\n    bl sub_0203778C\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl sub_0203410C\n    cmp r4, #9\n    beq _02037D24\n    cmp r4, #0x11\n    beq _02037D24\n    cmp r4, #0xf\n    beq _02037D24\n    bl sub_0203A880\n    pop {r3, r4, r5, pc}\n    nop\n    _02037D28: .word _021D4150"
    );
    #endif
}

void sub_02037D2C(void) {
    /* Original at 0x02037D2C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02037D74 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02037D72\n    bl sub_02034154\n    ldr r0, _02037D74 ; =_021D4150\n    ldr r0, [r0]\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02037D48\n    bl Heap_Free\n    bl sub_02039998\n    cmp r0, #0\n    beq _02037D56\n    mov r0, #0x30\n    bl Heap_Destroy\n    bl sub_0203A914\n    bl sub_02034DE0\n    ldr r0, _02037D74 ; =_021D4150\n    ldr r0, [r0]\n    bl Heap_Free\n    mov r0, #0xf\n    bl Heap_Destroy\n    ldr r0, _02037D74 ; =_021D4150\n    mov r1, #0\n    str r1, [r0]\n    pop {r3, pc}\n    _02037D74: .word _021D4150"
    );
    #endif
}

void sub_02037D78(void) {
    /* Original at 0x02037D78 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037D88 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02037D84\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02037D88: .word _021D4150"
    );
    #endif
}

void sub_02037D8C(void) {
    /* Original at 0x02037D8C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _02037DC4\n    ldr r2, _02037DC8 ; =0x00007080\n    mov r0, #3\n    mov r1, #0xf\n    bl Heap_CreateAtEnd\n    add r0, r6, #0\n    add r1, r7, #0\n    bl sub_02037C98\n    ldr r0, _02037DCC ; =_021D4150\n    ldr r1, [r0]\n    add r1, #0x4f\n    strb r5, [r1]\n    ldr r0, [r0]\n    mov r1, #0\n    str r4, [r0, #0x30]\n    ldr r0, _02037DD0 ; =sub_02038218\n    bl sub_020381C0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02037DC8: .word 0x00007080\n    _02037DCC: .word _021D4150\n    _02037DD0: .word sub_02038218"
    );
    #endif
}

void sub_02037DD4(void) {
    /* Original at 0x02037DD4 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r7, r1, #0\n    add r5, r2, #0\n    add r4, r3, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _02037E0C\n    ldr r2, _02037E10 ; =0x00007080\n    mov r0, #3\n    mov r1, #0xf\n    bl Heap_CreateAtEnd\n    add r0, r6, #0\n    add r1, r7, #0\n    bl sub_02037C98\n    ldr r0, _02037E14 ; =_021D4150\n    ldr r1, [r0]\n    add r1, #0x4f\n    strb r5, [r1]\n    ldr r0, [r0]\n    mov r1, #0\n    str r4, [r0, #0x30]\n    ldr r0, _02037E18 ; =sub_02038294\n    bl sub_020381C0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02037E10: .word 0x00007080\n    _02037E14: .word _021D4150\n    _02037E18: .word sub_02038294"
    );
    #endif
}

void sub_02037E1C(void) {
    /* Original at 0x02037E1C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02037E2C ; =_021D4150\n    ldr r3, _02037E30 ; =sub_020381C0\n    ldr r1, [r1]\n    add r1, #0x4d\n    strb r0, [r1]\n    ldr r0, _02037E34 ; =sub_020382E4\n    mov r1, #0\n    bx r3\n    _02037E2C: .word _021D4150\n    _02037E30: .word sub_020381C0\n    _02037E34: .word sub_020382E4"
    );
    #endif
}

void sub_02037E38(void) {
    /* Original at 0x02037E38 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02036274\n    ldr r0, _02037E48 ; =sub_020383B0\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02037E48: .word sub_020383B0"
    );
    #endif
}

void sub_02037E4C(void) {
    /* Original at 0x02037E4C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02037E94 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x40]\n    cmp r0, #0\n    ble _02037E5E\n    sub r0, r0, #1\n    str r0, [r1, #0x40]\n    b _02037E64\n    bne _02037E64\n    bl sub_020399EC\n    ldr r0, _02037E94 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _02037E72\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _02037E90\n    ldr r0, _02037E94 ; =_021D4150\n    ldr r0, [r0]\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    bne _02037E90\n    bl sub_02036024\n    ldr r0, _02037E98 ; =sub_02038408\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02037E94: .word _021D4150\n    _02037E98: .word sub_02038408"
    );
    #endif
}

void sub_02037E9C(void) {
    sub_020381C0(5);
}

void sub_02037EC0(void) {
    sub_02033A0C();
}

void sub_02037EC8(void) {
    /* Original at 0x02037EC8 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4}\n    sub sp, #0xc\n    ldr r4, _02037F10 ; =_020F6A90\n    add r3, sp, #0\n    ldmia r4!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    str r0, [r3]\n    ldr r0, _02037F14 ; =_021D4150\n    ldr r0, [r0]\n    ldr r1, [r0, #0x24]\n    cmp r0, #0\n    bne _02037EEC\n    add sp, #0xc\n    mov r0, #0\n    pop {r4}\n    bx lr\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _02037F08\n    ldr r0, [r2]\n    cmp r1, r0\n    bne _02037F00\n    add sp, #0xc\n    mov r0, #1\n    pop {r4}\n    bx lr\n    add r2, r2, #4\n    ldr r0, [r2]\n    cmp r0, #0\n    bne _02037EF2\n    mov r0, #0\n    add sp, #0xc\n    pop {r4}\n    bx lr\n    _02037F10: .word _020F6A90\n    _02037F14: .word _021D4150"
    );
    #endif
}

void sub_02037F18(void) {
    /* Original at 0x02037F18 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02037F58 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02037F56\n    ldr r2, _02037F5C ; =0x00007080\n    mov r0, #3\n    mov r1, #0xf\n    bl Heap_CreateAtEnd\n    cmp r0, #0\n    bne _02037F36\n    bl sub_020399EC\n    add r0, r4, #0\n    mov r1, #9\n    bl sub_02037C98\n    ldr r0, _02037F58 ; =_021D4150\n    mov r2, #9\n    ldr r1, [r0]\n    add r1, #0x4e\n    strb r2, [r1]\n    ldr r0, [r0]\n    mov r1, #0\n    add r0, #0x4f\n    strb r1, [r0]\n    ldr r0, _02037F60 ; =sub_020384B4\n    bl sub_020381C0\n    pop {r4, pc}\n    _02037F58: .word _021D4150\n    _02037F5C: .word 0x00007080\n    _02037F60: .word sub_020384B4"
    );
    #endif
}

void sub_02037F64(void) {
    /* Original at 0x02037F64 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02037F8C ; =_021D4150\n    ldr r2, [r1]\n    add r2, #0x4d\n    strb r0, [r2]\n    ldr r0, [r1]\n    mov r2, #3\n    add r0, #0x48\n    strh r2, [r0]\n    mov r0, #1\n    bl sub_02033AA4\n    bl sub_0203A880\n    ldr r0, _02037F90 ; =sub_02038668\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02037F8C: .word _021D4150\n    _02037F90: .word sub_02038668"
    );
    #endif
}

void sub_02037F94(void) {
    /* Original at 0x02037F94 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037FC0 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02037FA2\n    mov r0, #0\n    mvn r0, r0\n    bx lr\n    ldr r1, [r0, #0x24]\n    ldr r0, _02037FC4 ; =sub_020387E8\n    cmp r1, r0\n    bne _02037FAE\n    mov r0, #1\n    bx lr\n    ldr r0, _02037FC8 ; =sub_02038800\n    cmp r1, r0\n    bne _02037FB8\n    mov r0, #1\n    b _02037FBA\n    mov r0, #0\n    neg r0, r0\n    bx lr\n    nop\n    _02037FC0: .word _021D4150\n    _02037FC4: .word sub_020387E8\n    _02037FC8: .word sub_02038800"
    );
    #endif
}

void sub_02037FCC(void) {
    /* Original at 0x02037FCC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02037FE8 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02037FD8\n    mov r0, #0\n    bx lr\n    ldr r1, [r0, #0x24]\n    ldr r0, _02037FEC ; =sub_02038854\n    cmp r1, r0\n    bne _02037FE4\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02037FE8: .word _021D4150\n    _02037FEC: .word sub_02038854"
    );
    #endif
}

void sub_02037FF0(void) {
    /* Original at 0x02037FF0 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl sub_02033AA4\n    ldr r0, _02038064 ; =_021D4150\n    ldr r1, [r0]\n    add r0, r1, #0\n    add r0, #0x53\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02038018\n    add r0, r1, #0\n    add r0, #0x54\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02038018\n    add r1, #0x4e\n    ldrb r0, [r1]\n    cmp r0, #9\n    bne _02038020\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    bl sub_0203A914\n    ldr r0, _02038064 ; =_021D4150\n    mov r2, #9\n    ldr r1, [r0]\n    add r1, #0x4e\n    strb r2, [r1]\n    ldr r1, [r0]\n    mov r2, #0\n    add r1, #0x57\n    strb r2, [r1]\n    ldr r0, [r0]\n    add r0, #0x4a\n    ldrb r0, [r0]\n    bl sub_02033908\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02038058\n    mov r0, #1\n    bl sub_02033ACC\n    ldr r0, _02038068 ; =sub_02038418\n    mov r1, #0xf\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _0203806C ; =sub_02038460\n    mov r1, #5\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038064: .word _021D4150\n    _02038068: .word sub_02038418\n    _0203806C: .word sub_02038460"
    );
    #endif
}

void sub_02038070(void) {
    /* Original at 0x02038070 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _0203808C ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0203807C\n    mov r0, #1\n    bx lr\n    ldr r1, [r0, #0x24]\n    ldr r0, _02038090 ; =sub_02038538\n    cmp r1, r0\n    beq _02038088\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _0203808C: .word _021D4150\n    _02038090: .word sub_02038538"
    );
    #endif
}

void sub_02038094(void) {
    sub_020381C0(5);
}

void sub_020380B0(void) {
    sub_02033AA4(1);
}

void sub_020380CC(void) {
    /* Original at 0x020380CC */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020380EC ; =_021D4150\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _020380E8\n    mov r0, #1\n    add r1, #0x57\n    strb r0, [r1]\n    bl sub_02033AA4\n    ldr r0, _020380F0 ; =sub_020388A8\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _020380EC: .word _021D4150\n    _020380F0: .word sub_020388A8"
    );
    #endif
}

void sub_020380F4(void) {
    /* Original at 0x020380F4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02038100 ; =_021D4150\n    mov r1, #0x12\n    ldr r0, [r0]\n    add r0, #0x4e\n    strb r1, [r0]\n    bx lr\n    _02038100: .word _021D4150"
    );
    #endif
}

void sub_02038104(void) {
    /* Original at 0x02038104 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02038110 ; =_021D4150\n    mov r1, #9\n    ldr r0, [r0]\n    add r0, #0x4e\n    strb r1, [r0]\n    bx lr\n    _02038110: .word _021D4150"
    );
    #endif
}

void sub_02038114(void) {
    /* Original at 0x02038114 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _0203813C\n    ldr r2, _02038140 ; =0x00007080\n    mov r0, #3\n    mov r1, #0xf\n    bl Heap_CreateAtEnd\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02037C98\n    ldr r0, _02038144 ; =sub_02038E00\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, r4, r5, pc}\n    nop\n    _02038140: .word 0x00007080\n    _02038144: .word sub_02038E00"
    );
    #endif
}

void sub_02038148(void) {
    /* Original at 0x02038148 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _02038170\n    ldr r2, _02038174 ; =0x00007080\n    mov r0, #3\n    mov r1, #0xf\n    bl Heap_CreateAtEnd\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02037C98\n    ldr r0, _02038178 ; =sub_02038E48\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, r4, r5, pc}\n    nop\n    _02038174: .word 0x00007080\n    _02038178: .word sub_02038E48"
    );
    #endif
}

void sub_0203817C(void) {
    /* Original at 0x0203817C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020381BC ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0203818E\n    ldr r0, [r0, #0x24]\n    cmp r0, #0\n    beq _0203818E\n    blx r0\n    bl sub_02039998\n    cmp r0, #0\n    beq _020381A4\n    bl ov00_021EC9D4\n    mov r1, #3\n    sub r0, r1, r0\n    bl sub_0203A930\n    pop {r3, pc}\n    bl sub_02035650\n    cmp r0, #0\n    beq _020381B8\n    bl WM_GetLinkLevel\n    mov r1, #3\n    sub r0, r1, r0\n    bl sub_0203A930\n    pop {r3, pc}\n    nop\n    _020381BC: .word _021D4150"
    );
    #endif
}

void sub_020381C0(void) {
    /* Original at 0x020381C0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _020381CC ; =_021D4150\n    ldr r3, [r2]\n    str r0, [r3, #0x24]\n    ldr r0, [r2]\n    str r1, [r0, #0x44]\n    bx lr\n    _020381CC: .word _021D4150"
    );
    #endif
}

void sub_020381D0(void) {
    /* Original at 0x020381D0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02039998\n    cmp r0, #0\n    bne _020381EC\n    bl sub_02035664\n    cmp r0, #0\n    beq _020381F4\n    bl sub_020374E4\n    mov r0, #1\n    bl sub_020350A8\n    ldr r0, _020381F8 ; =sub_02038404\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _020381F8: .word sub_02038404"
    );
    #endif
}

void sub_020381FC(void) {
    /* Original at 0x020381FC */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _02038212\n    bl sub_0203622C\n    ldr r0, _02038214 ; =sub_020381D0\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038214: .word sub_020381D0"
    );
    #endif
}

void sub_02038218(void) {
    /* Original at 0x02038218 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02038256\n    ldr r0, _02038258 ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r0, [r0, #0x2c]\n    bl sub_02034B0C\n    ldr r0, _02038258 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x28]\n    ldr r1, [r1, #0x30]\n    bl sub_02034354\n    mov r0, #1\n    add r1, r0, #0\n    lsl r2, r0, #9\n    add r3, r0, #0\n    bl sub_02035ED8\n    cmp r0, #0\n    beq _02038256\n    bl sub_02035FD8\n    ldr r0, _0203825C ; =sub_02038260\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038258: .word _021D4150\n    _0203825C: .word sub_02038260"
    );
    #endif
}

void sub_02038260(void) {
    /* Original at 0x02038260 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02038276\n    ldr r0, _02038278 ; =sub_0203827C\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038278: .word sub_0203827C"
    );
    #endif
}

void sub_0203827C(void) {
    /* Original at 0x0203827C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037474\n    cmp r0, #0\n    bne _0203828E\n    ldr r0, _02038290 ; =sub_02038408\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038290: .word sub_02038408"
    );
    #endif
}

void sub_02038294(void) {
    /* Original at 0x02038294 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _020382D0\n    ldr r0, _020382D4 ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r0, [r0, #0x2c]\n    bl sub_02034B0C\n    ldr r0, _020382D4 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x28]\n    ldr r1, [r1, #0x30]\n    bl sub_02034354\n    mov r0, #1\n    add r1, r0, #0\n    lsl r2, r0, #9\n    bl sub_02035F14\n    cmp r0, #0\n    beq _020382D0\n    bl sub_02035FD8\n    ldr r0, _020382D8 ; =sub_020382DC\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _020382D4: .word _021D4150\n    _020382D8: .word sub_020382DC"
    );
    #endif
}

void sub_020382DC(void) {
    sub_0203528C();
}

void sub_020382E4(void) {
    /* Original at 0x020382E4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0203528C\n    ldr r0, _02038304 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4d\n    ldrb r0, [r0]\n    bl sub_020360E4\n    cmp r0, #0\n    beq _02038302\n    ldr r0, _02038308 ; =sub_0203830C\n    mov r1, #0xa\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038304: .word _021D4150\n    _02038308: .word sub_0203830C"
    );
    #endif
}

void sub_0203830C(void) {
    /* Original at 0x0203830C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037700\n    cmp r0, #0\n    beq _0203831E\n    ldr r0, _0203833C ; =sub_02038344\n    mov r1, #0\n    bl sub_020381C0\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    beq _0203833A\n    bl sub_0203769C\n    cmp r0, #0\n    beq _0203833A\n    ldr r0, _02038340 ; =sub_02038398\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _0203833C: .word sub_02038344\n    _02038340: .word sub_02038398"
    );
    #endif
}

void sub_02038344(void) {
    /* Original at 0x02038344 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034FE8\n    ldr r0, _02038354 ; =sub_02038358\n    mov r1, #2\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038354: .word sub_02038358"
    );
    #endif
}

void sub_02038358(void) {
    /* Original at 0x02038358 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02038390 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _0203836A\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    bl sub_02035664\n    cmp r0, #0\n    beq _0203838C\n    mov r1, #1\n    mov r0, #0\n    lsl r2, r1, #9\n    bl sub_02035F14\n    cmp r0, #0\n    beq _0203838C\n    bl sub_02035FD8\n    ldr r0, _02038394 ; =sub_020382E4\n    mov r1, #0xa\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038390: .word _021D4150\n    _02038394: .word sub_020382E4"
    );
    #endif
}

void sub_02038398(void) {
    /* Original at 0x02038398 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037474\n    cmp r0, #0\n    bne _020383AA\n    ldr r0, _020383AC ; =sub_02038408\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _020383AC: .word sub_02038408"
    );
    #endif
}

void sub_020383B0(void) {
    /* Original at 0x020383B0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034FE8\n    ldr r0, _020383C0 ; =sub_020383C4\n    mov r1, #2\n    bl sub_020381C0\n    pop {r3, pc}\n    _020383C0: .word sub_020383C4"
    );
    #endif
}

void sub_020383C4(void) {
    /* Original at 0x020383C4 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020383FC ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _020383D6\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    bl sub_02035664\n    cmp r0, #0\n    beq _020383F8\n    mov r1, #1\n    mov r0, #0\n    lsl r2, r1, #9\n    bl sub_02035F14\n    cmp r0, #0\n    beq _020383F8\n    bl sub_02035FD8\n    ldr r0, _02038400 ; =sub_020382DC\n    mov r1, #0xa\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _020383FC: .word _021D4150\n    _02038400: .word sub_020382DC"
    );
    #endif
}

void sub_02038404(void) {
    /* Original at 0x02038404 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02038408(void) {
    /* Original at 0x02038408 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037474\n    cmp r0, #0\n    bne _02038416\n    bl sub_02037D2C\n    pop {r3, pc}"
    );
    #endif
}

void sub_02038418(void) {
    /* Original at 0x02038418 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037454\n    cmp r0, #1\n    bgt _02038434\n    mov r0, #0\n    bl sub_02033ACC\n    bl sub_0203624C\n    ldr r0, _02038458 ; =sub_02038538\n    mov r1, #0\n    bl sub_020381C0\n    ldr r0, _0203845C ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _02038444\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    mov r0, #0\n    bl sub_02033ACC\n    bl sub_0203624C\n    ldr r0, _02038458 ; =sub_02038538\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038458: .word sub_02038538\n    _0203845C: .word _021D4150"
    );
    #endif
}

void sub_02038460(void) {
    /* Original at 0x02038460 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _02038476\n    bl sub_0203622C\n    ldr r0, _02038478 ; =sub_02038538\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038478: .word sub_02038538"
    );
    #endif
}

void sub_0203847C(void) {
    /* Original at 0x0203847C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020384AC ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _0203848C\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _020384AA\n    ldr r0, _020384AC ; =_021D4150\n    ldr r0, [r0]\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    bne _020384AA\n    bl sub_02036024\n    ldr r0, _020384B0 ; =sub_02038408\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _020384AC: .word _021D4150\n    _020384B0: .word sub_02038408"
    );
    #endif
}

void sub_020384B4(void) {
    /* Original at 0x020384B4 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _020384FC\n    ldr r0, _02038500 ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r0, [r0, #0x2c]\n    bl sub_02034B0C\n    ldr r0, _02038500 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4a\n    ldrb r0, [r0]\n    bl sub_02033908\n    ldr r0, _02038500 ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x28]\n    bl sub_02034354\n    mov r0, #1\n    add r1, r0, #0\n    lsl r2, r0, #9\n    bl sub_02035F14\n    cmp r0, #0\n    beq _020384FC\n    bl sub_02035FD8\n    ldr r0, _02038504 ; =sub_02038508\n    mov r1, #0x40\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038500: .word _021D4150\n    _02038504: .word sub_02038508"
    );
    #endif
}

void sub_02038508(void) {
    /* Original at 0x02038508 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0203528C\n    ldr r0, _02038530 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _0203851E\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _0203852E\n    ldr r0, _02038534 ; =sub_02038550\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038530: .word _021D4150\n    _02038534: .word sub_02038550"
    );
    #endif
}

void sub_02038538(void) {
    /* Original at 0x02038538 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _0203854A\n    ldr r0, _0203854C ; =sub_02038550\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _0203854C: .word sub_02038550"
    );
    #endif
}

void sub_02038550(void) {
    /* Original at 0x02038550 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl sub_02035664\n    cmp r0, #0\n    beq _020385A8\n    ldr r1, _020385AC ; =_021D4150\n    mov r2, #2\n    ldr r1, [r1]\n    mov r0, #0\n    add r1, #0x52\n    ldrb r1, [r1]\n    lsl r2, r2, #8\n    mov r3, #1\n    bl sub_02035ED8\n    cmp r0, #0\n    beq _020385A8\n    ldr r0, _020385AC ; =_021D4150\n    ldr r4, [r0]\n    add r5, r4, #0\n    add r5, #0xc\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #0xc]\n    ldr r2, [r4, #0xc]\n    ldr r3, [r5, #4]\n    bl _ll_mul\n    ldr r2, [r5, #0x10]\n    ldr r3, [r5, #0x14]\n    add r0, r2, r0\n    adc r3, r1\n    str r0, [r4, #0xc]\n    str r3, [r5, #4]\n    bl sub_02035FD8\n    ldr r0, _020385AC ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x52\n    strb r1, [r0]\n    ldr r0, _020385B0 ; =sub_020385B8\n    ldr r1, _020385B4 ; =0x00002710\n    bl sub_020381C0\n    pop {r3, r4, r5, pc}\n    nop\n    _020385AC: .word _021D4150\n    _020385B0: .word sub_020385B8\n    _020385B4: .word 0x00002710"
    );
    #endif
}

void sub_020385B8(void) {
    /* Original at 0x020385B8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_020358B0\n    cmp r0, #0\n    bne _020385F2\n    bl sub_020376F8\n    cmp r0, #0\n    beq _020385E2\n    ldr r0, _02038604 ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x52\n    strb r1, [r0]\n    bl sub_0203A880\n    ldr r0, _02038608 ; =sub_02038854\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02038604 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _020385F2\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _02038602\n    ldr r0, _0203860C ; =sub_02038610\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038604: .word _021D4150\n    _02038608: .word sub_02038854\n    _0203860C: .word sub_02038610"
    );
    #endif
}

void sub_02038610(void) {
    /* Original at 0x02038610 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    bl sub_02035664\n    cmp r0, #0\n    beq _0203865C\n    mov r0, #0\n    mov r2, #2\n    add r1, r0, #0\n    lsl r2, r2, #8\n    bl sub_02035F14\n    cmp r0, #0\n    beq _0203865C\n    bl sub_02035FD8\n    ldr r0, _02038660 ; =_021D4150\n    ldr r4, [r0]\n    add r5, r4, #0\n    add r5, #0xc\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #0xc]\n    ldr r2, [r4, #0xc]\n    ldr r3, [r5, #4]\n    bl _ll_mul\n    ldr r2, [r5, #0x10]\n    ldr r3, [r5, #0x14]\n    add r0, r2, r0\n    adc r3, r1\n    str r0, [r4, #0xc]\n    mov r1, #0\n    ldr r0, _02038664 ; =sub_02038508\n    lsr r2, r3, #0x1b\n    lsl r1, r1, #5\n    orr r1, r2\n    str r3, [r5, #4]\n    bl sub_020381C0\n    pop {r3, r4, r5, pc}\n    nop\n    _02038660: .word _021D4150\n    _02038664: .word sub_02038508"
    );
    #endif
}

void sub_02038668(void) {
    /* Original at 0x02038668 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _0203867A\n    ldr r0, _0203867C ; =sub_02038680\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _0203867C: .word sub_02038680"
    );
    #endif
}

void sub_02038680(void) {
    /* Original at 0x02038680 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02035664\n    cmp r0, #0\n    beq _020386A6\n    mov r0, #0\n    mov r2, #2\n    add r1, r0, #0\n    lsl r2, r2, #8\n    bl sub_02035F14\n    cmp r0, #0\n    beq _020386A6\n    bl sub_02035FD8\n    ldr r0, _020386A8 ; =sub_020386AC\n    mov r1, #0x64\n    bl sub_020381C0\n    pop {r3, pc}\n    _020386A8: .word sub_020386AC"
    );
    #endif
}

void sub_020386AC(void) {
    /* Original at 0x020386AC */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02038704 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4d\n    ldrb r0, [r0]\n    bl sub_020351AC\n    cmp r0, #0\n    beq _020386D8\n    ldr r0, _02038704 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4d\n    ldrb r0, [r0]\n    bl sub_020360E4\n    cmp r0, #0\n    beq _020386D8\n    ldr r0, _02038708 ; =sub_02038710\n    mov r1, #0x64\n    bl sub_020381C0\n    pop {r3, pc}\n    bl sub_02037700\n    cmp r0, #0\n    beq _020386EA\n    ldr r0, _0203870C ; =sub_02038804\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02038704 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _020386FA\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    ldr r0, _0203870C ; =sub_02038804\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038704: .word _021D4150\n    _02038708: .word sub_02038710\n    _0203870C: .word sub_02038804"
    );
    #endif
}

void sub_02038710(void) {
    /* Original at 0x02038710 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037700\n    cmp r0, #0\n    beq _02038724\n    ldr r0, _02038760 ; =sub_02038804\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02038744\n    ldr r0, _02038764 ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x4c\n    strb r1, [r0]\n    ldr r0, _02038768 ; =sub_0203876C\n    mov r1, #0x78\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02038764 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _02038754\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    ldr r0, _02038760 ; =sub_02038804\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038760: .word sub_02038804\n    _02038764: .word _021D4150\n    _02038768: .word sub_0203876C"
    );
    #endif
}

void sub_0203876C(void) {
    /* Original at 0x0203876C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037700\n    cmp r0, #0\n    beq _02038780\n    ldr r0, _020387D4 ; =sub_02038804\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _020387D8 ; =_021D4150\n    ldr r1, [r0]\n    add r0, r1, #0\n    add r0, #0x4c\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _02038798\n    ldr r0, _020387DC ; =sub_02038800\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    cmp r0, #1\n    bne _020387AA\n    bl sub_02034434\n    ldr r0, _020387E0 ; =sub_020387E8\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, [r1, #0x44]\n    cmp r0, #0x6e\n    ble _020387B8\n    ldr r1, _020387E4 ; =_0210F90C\n    mov r0, #6\n    bl sub_020376E0\n    ldr r0, _020387D8 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    beq _020387C8\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    ldr r0, _020387D4 ; =sub_02038804\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _020387D4: .word sub_02038804\n    _020387D8: .word _021D4150\n    _020387DC: .word sub_02038800\n    _020387E0: .word sub_020387E8\n    _020387E4: .word _0210F90C"
    );
    #endif
}

void sub_020387E8(void) {
    /* Original at 0x020387E8 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037700\n    cmp r0, #0\n    beq _020387FA\n    ldr r0, _020387FC ; =sub_02038804\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _020387FC: .word sub_02038804"
    );
    #endif
}

void sub_02038800(void) {
    /* Original at 0x02038800 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02038804(void) {
    /* Original at 0x02038804 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02038848 ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x4c\n    strb r1, [r0]\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _02038844\n    ldr r0, _02038848 ; =_021D4150\n    ldr r1, [r0]\n    add r0, r1, #0\n    add r0, #0x48\n    ldrh r0, [r0]\n    cmp r0, #0\n    beq _0203883C\n    add r0, r1, #0\n    add r0, #0x48\n    ldrh r0, [r0]\n    add r1, #0x48\n    sub r0, r0, #1\n    strh r0, [r1]\n    ldr r0, _0203884C ; =sub_02038680\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02038850 ; =sub_02038800\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038848: .word _021D4150\n    _0203884C: .word sub_02038680\n    _02038850: .word sub_02038800"
    );
    #endif
}

void sub_02038854(void) {
    /* Original at 0x02038854 */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_020376F8\n    cmp r0, #0\n    bne _02038878\n    bl sub_02039918\n    cmp r0, #0\n    bne _02038884\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _02038884\n    ldr r0, _020388A0 ; =sub_02038610\n    mov r1, #0\n    bl sub_020381C0\n    b _02038884\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02038884\n    bl sub_02034638\n    bl sub_02037700\n    cmp r0, #0\n    beq _0203889C\n    bl sub_02039918\n    cmp r0, #0\n    bne _0203889C\n    ldr r0, _020388A4 ; =sub_02038804\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _020388A0: .word sub_02038610\n    _020388A4: .word sub_02038804"
    );
    #endif
}

void sub_020388A8(void) {
    /* Original at 0x020388A8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02035664\n    cmp r0, #0\n    beq _020388D6\n    ldr r1, _020388D8 ; =_021D4150\n    mov r0, #0\n    ldr r1, [r1]\n    mov r2, #2\n    add r1, #0x52\n    ldrb r1, [r1]\n    lsl r2, r2, #8\n    add r3, r0, #0\n    bl sub_02035ED8\n    cmp r0, #0\n    beq _020388D6\n    bl sub_02035FD8\n    ldr r0, _020388DC ; =sub_02038404\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _020388D8: .word _021D4150\n    _020388DC: .word sub_02038404"
    );
    #endif
}

void sub_020388E0(void) {
    /* Original at 0x020388E0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02038914 ; =_021D4150\n    mov r1, #0xd\n    ldr r0, [r0]\n    add r0, #0x4e\n    strb r1, [r0]\n    bl sub_0203769C\n    cmp r0, #0\n    add r0, sp, #0\n    bne _02038906\n    mov r1, #0\n    strb r1, [r0, #1]\n    add r1, sp, #0\n    mov r0, #0xa\n    add r1, #1\n    bl sub_020376E0\n    pop {r3, pc}\n    mov r1, #0\n    strb r1, [r0]\n    mov r0, #0xa\n    add r1, sp, #0\n    bl sub_020376E0\n    pop {r3, pc}\n    _02038914: .word _021D4150"
    );
    #endif
}

void sub_02038918(void) {
    /* Original at 0x02038918 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02038930 ; =_021D4150\n    ldr r3, _02038934 ; =sub_020381C0\n    ldr r2, [r1]\n    add r2, #0x4d\n    strb r0, [r2]\n    ldr r0, [r1]\n    mov r2, #3\n    add r0, #0x48\n    strh r2, [r0]\n    ldr r0, _02038938 ; =sub_020389BC\n    mov r1, #0\n    bx r3\n    _02038930: .word _021D4150\n    _02038934: .word sub_020381C0\n    _02038938: .word sub_020389BC"
    );
    #endif
}

void sub_0203893C(void) {
    /* Original at 0x0203893C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02038948 ; =_021D4150\n    mov r1, #7\n    ldr r0, [r0]\n    add r0, #0x4e\n    strb r1, [r0]\n    bx lr\n    _02038948: .word _021D4150"
    );
    #endif
}

void sub_0203894C(void) {
    /* Original at 0x0203894C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02038974 ; =_021D4150\n    ldr r2, [r1]\n    add r2, #0x4d\n    strb r0, [r2]\n    ldr r0, [r1]\n    mov r2, #7\n    add r0, #0x4e\n    strb r2, [r0]\n    ldr r0, [r1]\n    mov r2, #3\n    add r0, #0x48\n    strh r2, [r0]\n    bl sub_0203A880\n    ldr r0, _02038978 ; =sub_02038668\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038974: .word _021D4150\n    _02038978: .word sub_02038668"
    );
    #endif
}

void sub_0203897C(void) {
    /* Original at 0x0203897C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02038988 ; =_021D4150\n    mov r1, #0x1a\n    ldr r0, [r0]\n    add r0, #0x4e\n    strb r1, [r0]\n    bx lr\n    _02038988: .word _021D4150"
    );
    #endif
}

void sub_0203898C(void) {
    /* Original at 0x0203898C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _020389B4 ; =_021D4150\n    ldr r2, [r1]\n    add r2, #0x4d\n    strb r0, [r2]\n    ldr r0, [r1]\n    mov r2, #0x1a\n    add r0, #0x4e\n    strb r2, [r0]\n    ldr r0, [r1]\n    mov r2, #3\n    add r0, #0x48\n    strh r2, [r0]\n    bl sub_0203A880\n    ldr r0, _020389B8 ; =sub_02038668\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _020389B4: .word _021D4150\n    _020389B8: .word sub_02038668"
    );
    #endif
}

void sub_020389BC(void) {
    /* Original at 0x020389BC */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034FE8\n    cmp r0, #0\n    beq _020389CE\n    ldr r0, _020389D0 ; =sub_020389D4\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _020389D0: .word sub_020389D4"
    );
    #endif
}

void sub_020389D4(void) {
    /* Original at 0x020389D4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02035664\n    cmp r0, #0\n    beq _02038A04\n    ldr r0, _02038A08 ; =_021D4150\n    mov r2, #2\n    ldr r0, [r0]\n    mov r1, #0xd\n    add r0, #0x4e\n    strb r1, [r0]\n    mov r0, #0\n    add r1, r0, #0\n    lsl r2, r2, #8\n    bl sub_02035F14\n    cmp r0, #0\n    beq _02038A04\n    bl sub_02035FE4\n    ldr r0, _02038A0C ; =sub_02038A10\n    mov r1, #0x64\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038A08: .word _021D4150\n    _02038A0C: .word sub_02038A10"
    );
    #endif
}

void sub_02038A10(void) {
    /* Original at 0x02038A10 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02038A84 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4d\n    ldrb r0, [r0]\n    bl sub_020351AC\n    cmp r0, #0\n    beq _02038A3C\n    ldr r0, _02038A84 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4d\n    ldrb r0, [r0]\n    bl sub_020360E4\n    cmp r0, #0\n    beq _02038A3C\n    ldr r0, _02038A88 ; =sub_02038A94\n    mov r1, #0x64\n    bl sub_020381C0\n    pop {r3, pc}\n    bl sub_02037700\n    cmp r0, #0\n    bne _02038A4E\n    ldr r0, _02038A84 ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0\n    bne _02038A7C\n    ldr r1, _02038A84 ; =_021D4150\n    ldr r2, [r1]\n    add r0, r2, #0\n    add r0, #0x48\n    ldrh r0, [r0]\n    add r2, #0x48\n    sub r0, r0, #1\n    strh r0, [r2]\n    ldr r0, [r1]\n    add r0, #0x48\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _02038A72\n    ldr r0, _02038A8C ; =sub_02038800\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02038A90 ; =sub_020389BC\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    beq _02038A82\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    _02038A84: .word _021D4150\n    _02038A88: .word sub_02038A94\n    _02038A8C: .word sub_02038800\n    _02038A90: .word sub_020389BC"
    );
    #endif
}

void sub_02038A94(void) {
    /* Original at 0x02038A94 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02038B2C ; =_021D4150\n    ldr r1, [r0]\n    ldr r0, [r1, #0x44]\n    cmp r0, #0x5a\n    ble _02038AA6\n    sub r0, r0, #1\n    str r0, [r1, #0x44]\n    pop {r3, pc}\n    bl sub_02037700\n    cmp r0, #0\n    beq _02038ADC\n    ldr r1, _02038B2C ; =_021D4150\n    ldr r2, [r1]\n    add r0, r2, #0\n    add r0, #0x48\n    ldrh r0, [r0]\n    add r2, #0x48\n    sub r0, r0, #1\n    strh r0, [r2]\n    ldr r0, [r1]\n    add r0, #0x48\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _02038AD2\n    ldr r0, _02038B30 ; =sub_02038800\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02038B34 ; =sub_020389BC\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    bl sub_0203769C\n    bl sub_020373B4\n    cmp r0, #0\n    beq _02038AF2\n    ldr r0, _02038B38 ; =sub_020387E8\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r1, _02038B2C ; =_021D4150\n    ldr r2, [r1]\n    ldr r0, [r2, #0x44]\n    cmp r0, #0\n    beq _02038B02\n    sub r0, r0, #1\n    str r0, [r2, #0x44]\n    pop {r3, pc}\n    add r0, r2, #0\n    add r0, #0x48\n    ldrh r0, [r0]\n    add r2, #0x48\n    sub r0, r0, #1\n    strh r0, [r2]\n    ldr r0, [r1]\n    add r0, #0x48\n    ldrh r0, [r0]\n    cmp r0, #0\n    bne _02038B22\n    ldr r0, _02038B30 ; =sub_02038800\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02038B34 ; =sub_020389BC\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038B2C: .word _021D4150\n    _02038B30: .word sub_02038800\n    _02038B34: .word sub_020389BC\n    _02038B38: .word sub_020387E8"
    );
    #endif
}

void sub_02038B3C(void) {
    /* Original at 0x02038B3C */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r2, #0\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02038B8A\n    ldr r6, _02038B8C ; =_0210F90C\n    mov r3, #1\n    mov r2, #0\n    ldrb r1, [r6]\n    ldrb r0, [r4, r2]\n    cmp r1, r0\n    beq _02038B5C\n    mov r3, #0\n    b _02038B64\n    add r2, r2, #1\n    add r6, r6, #1\n    cmp r2, #6\n    blo _02038B50\n    cmp r3, #0\n    beq _02038B80\n    ldr r0, _02038B90 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x57\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02038B80\n    ldr r1, _02038B94 ; =_0210F904\n    mov r0, #7\n    strb r5, [r1]\n    bl sub_02037184\n    pop {r4, r5, r6, pc}\n    ldr r1, _02038B98 ; =_0210F914\n    mov r0, #7\n    strb r5, [r1]\n    bl sub_02037184\n    pop {r4, r5, r6, pc}\n    _02038B8C: .word _0210F90C\n    _02038B90: .word _021D4150\n    _02038B94: .word _0210F904\n    _02038B98: .word _0210F914"
    );
    #endif
}

void sub_02038B9C(void) {
    /* Original at 0x02038B9C */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r4, #1\n    ldr r5, _02038C0C ; =_0210F904 + 1\n    add r3, r4, #0\n    ldrb r1, [r5]\n    ldrb r0, [r2, r3]\n    cmp r1, r0\n    beq _02038BB0\n    mov r4, #0\n    b _02038BB8\n    add r3, r3, #1\n    add r5, r5, #1\n    cmp r3, #6\n    blo _02038BA4\n    cmp r4, #0\n    beq _02038BD2\n    ldrb r4, [r2]\n    bl sub_0203769C\n    cmp r4, r0\n    bne _02038C08\n    ldr r0, _02038C10 ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x4c\n    strb r1, [r0]\n    pop {r3, r4, r5, pc}\n    mov r4, #1\n    ldr r3, _02038C14 ; =_0210F914 + 1\n    add r5, r4, #0\n    ldrb r1, [r3]\n    ldrb r0, [r2, r5]\n    cmp r1, r0\n    beq _02038BE4\n    mov r4, #0\n    b _02038BEC\n    add r5, r5, #1\n    add r3, r3, #1\n    cmp r5, #6\n    blo _02038BD8\n    cmp r4, #0\n    beq _02038C08\n    ldrb r4, [r2]\n    bl sub_0203769C\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r4, r0\n    bne _02038C08\n    ldr r0, _02038C10 ; =_021D4150\n    mov r1, #2\n    ldr r0, [r0]\n    add r0, #0x4c\n    strb r1, [r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _02038C0C: .word _0210F904 + 1\n    _02038C10: .word _021D4150\n    _02038C14: .word _0210F914 + 1"
    );
    #endif
}

u8 sub_02038C18(void) {
    return 6;
}

void sub_02038C1C(void) {
    sub_02033908();
}

void sub_02038C34(void) {
    sub_0203528C();
}

void sub_02038C3C(void) {
    /* Original at 0x02038C3C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, _02038CB4 ; =0x00400131\n    cmp r0, r2\n    bhi _02038C4C\n    bhs _02038C8A\n    ldr r2, _02038CB8 ; =0x00000333\n    cmp r0, r2\n    beq _02038C5E\n    bx lr\n    ldr r1, _02038CBC ; =0x00400286\n    cmp r0, r1\n    bhi _02038C56\n    beq _02038C9E\n    bx lr\n    add r1, #0x92\n    cmp r0, r1\n    beq _02038C76\n    bx lr\n    cmp r1, #0xf\n    bne _02038CB0\n    ldr r0, _02038CC0 ; =_021D4150\n    ldr r2, [r0]\n    add r0, r2, #0\n    add r0, #0x58\n    ldrb r1, [r0]\n    mov r0, #1\n    add r2, #0x58\n    orr r0, r1\n    strb r0, [r2]\n    bx lr\n    ldr r0, _02038CC0 ; =_021D4150\n    ldr r2, [r0]\n    add r0, r2, #0\n    add r0, #0x58\n    ldrb r1, [r0]\n    mov r0, #1\n    add r2, #0x58\n    orr r0, r1\n    strb r0, [r2]\n    bx lr\n    ldr r0, _02038CC0 ; =_021D4150\n    ldr r2, [r0]\n    add r0, r2, #0\n    add r0, #0x58\n    ldrb r1, [r0]\n    mov r0, #2\n    add r2, #0x58\n    orr r0, r1\n    strb r0, [r2]\n    bx lr\n    ldr r0, _02038CC0 ; =_021D4150\n    ldr r2, [r0]\n    add r0, r2, #0\n    add r0, #0x58\n    ldrb r1, [r0]\n    mov r0, #4\n    add r2, #0x58\n    orr r0, r1\n    strb r0, [r2]\n    bx lr\n    nop\n    _02038CB4: .word 0x00400131\n    _02038CB8: .word 0x00000333\n    _02038CBC: .word 0x00400286\n    _02038CC0: .word _021D4150"
    );
    #endif
}

void sub_02038CC4(void) {
    /* Original at 0x02038CC4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    add r1, r0, #0\n    mov r2, #0x20\n    bl sub_02035F14\n    cmp r0, #0\n    beq _02038CE0\n    bl sub_02035FD8\n    ldr r0, _02038CE4 ; =sub_02038C34\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038CE4: .word sub_02038C34"
    );
    #endif
}

void sub_02038CE8(void) {
    /* Original at 0x02038CE8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02038D18\n    ldr r0, _02038D1C ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x2c]\n    bl sub_02034B0C\n    ldr r0, _02038D1C ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x28]\n    bl sub_02034354\n    ldr r0, _02038D20 ; =sub_02038C3C\n    bl sub_02033A7C\n    ldr r0, _02038D24 ; =sub_02038CC4\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038D1C: .word _021D4150\n    _02038D20: .word sub_02038C3C\n    _02038D24: .word sub_02038CC4"
    );
    #endif
}

void sub_02038D28(void) {
    /* Original at 0x02038D28 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_02037474\n    cmp r0, #0\n    bne _02038D58\n    mov r2, #7\n    mov r0, #3\n    mov r1, #0xf\n    lsl r2, r2, #0xc\n    bl Heap_CreateAtEnd\n    add r0, r4, #0\n    mov r1, #0x11\n    bl sub_02037C98\n    ldr r0, _02038D5C ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x4f\n    strb r1, [r0]\n    ldr r0, _02038D60 ; =sub_02038CE8\n    bl sub_020381C0\n    pop {r4, pc}\n    nop\n    _02038D5C: .word _021D4150\n    _02038D60: .word sub_02038CE8"
    );
    #endif
}

void sub_02038D64(void) {
    sub_020381C0(5);
}

void sub_02038D80(void) {
    /* Original at 0x02038D80 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02038D8C ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x58\n    ldrb r0, [r0]\n    bx lr\n    nop\n    _02038D8C: .word _021D4150"
    );
    #endif
}

void sub_02038D90(void) {
    /* Original at 0x02038D90 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02037988\n    ldr r0, _02038DF0 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02038DA2\n    mov r0, #1\n    pop {r3, pc}\n    add r0, #0x4e\n    ldrb r0, [r0]\n    cmp r0, #0x18\n    beq _02038DB2\n    cmp r0, #0x19\n    beq _02038DB2\n    cmp r0, #0x24\n    bne _02038DBA\n    bl ov00_021E6CB8\n    mov r0, #1\n    pop {r3, pc}\n    bl sub_02039998\n    cmp r0, #0\n    beq _02038DE2\n    ldr r0, _02038DF0 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4e\n    ldrb r0, [r0]\n    cmp r0, #0x21\n    bne _02038DD8\n    ldr r0, _02038DF4 ; =sub_02039D78\n    mov r1, #0\n    bl sub_020381C0\n    b _02038DEA\n    ldr r0, _02038DF8 ; =sub_020392F4\n    mov r1, #0\n    bl sub_020381C0\n    b _02038DEA\n    ldr r0, _02038DFC ; =sub_020381FC\n    mov r1, #0\n    bl sub_020381C0\n    mov r0, #0\n    pop {r3, pc}\n    nop\n    _02038DF0: .word _021D4150\n    _02038DF4: .word sub_02039D78\n    _02038DF8: .word sub_020392F4\n    _02038DFC: .word sub_020381FC"
    );
    #endif
}

void sub_02038E00(void) {
    /* Original at 0x02038E00 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02038E3E\n    ldr r0, _02038E40 ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r0, [r0, #0x2c]\n    bl sub_02034B0C\n    ldr r0, _02038E40 ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x28]\n    bl sub_02034354\n    mov r0, #1\n    add r1, r0, #0\n    lsl r2, r0, #9\n    add r3, r0, #0\n    bl sub_02035ED8\n    cmp r0, #0\n    beq _02038E3E\n    bl sub_02035FD8\n    ldr r0, _02038E44 ; =sub_02038260\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038E40: .word _021D4150\n    _02038E44: .word sub_02038260"
    );
    #endif
}

void sub_02038E48(void) {
    /* Original at 0x02038E48 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02038E84\n    ldr r0, _02038E88 ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    ldr r0, [r0, #0x2c]\n    bl sub_02034B0C\n    ldr r0, _02038E88 ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    ldr r0, [r0, #0x28]\n    bl sub_02034354\n    mov r0, #1\n    add r1, r0, #0\n    lsl r2, r0, #9\n    bl sub_02035F14\n    cmp r0, #0\n    beq _02038E84\n    bl sub_02035FD8\n    ldr r0, _02038E8C ; =sub_020382DC\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038E88: .word _021D4150\n    _02038E8C: .word sub_020382DC"
    );
    #endif
}

void sub_02038E90(void) {
    /* Original at 0x02038E90 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02038E94(void) {
    /* Original at 0x02038E94 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl ov00_021E5E54\n    cmp r0, #0\n    bge _02038EA8\n    ldr r0, _02038EAC ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02038EAC: .word sub_02038E90"
    );
    #endif
}

void sub_02038EB0(void) {
    /* Original at 0x02038EB0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02038EB4(void) {
    /* Original at 0x02038EB4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02038EB8(void) {
    /* Original at 0x02038EB8 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    bl sub_0203786C\n    mov r0, #0\n    bl ov00_021E5E54\n    cmp r0, #0xa\n    blt _02038ED8\n    cmp r0, #0x14\n    bge _02038ED8\n    ldr r0, _02038F60 ; =sub_02038EB4\n    mov r1, #0\n    bl sub_020381C0\n    b _02038F3A\n    cmp r0, #0\n    bge _02038EE6\n    ldr r0, _02038F64 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    b _02038F3A\n    cmp r0, #0x17\n    bne _02038EF4\n    ldr r0, _02038F68 ; =sub_02038E94\n    mov r1, #0\n    bl sub_020381C0\n    b _02038F3A\n    cmp r0, #0x18\n    bne _02038F18\n    ldr r0, _02038F6C ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x53\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02038F0E\n    ldr r0, _02038F64 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    b _02038F3A\n    ldr r0, _02038F70 ; =sub_02038EB0\n    mov r1, #0\n    bl sub_020381C0\n    b _02038F3A\n    cmp r0, #0x15\n    bne _02038F3A\n    ldr r0, _02038F6C ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x53\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02038F32\n    ldr r0, _02038F64 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    b _02038F3A\n    ldr r0, _02038F70 ; =sub_02038EB0\n    mov r1, #0\n    bl sub_020381C0\n    ldr r0, _02038F6C ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x53\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02038F5E\n    bl sub_02037454\n    ldr r1, _02038F6C ; =_021D4150\n    ldr r1, [r1]\n    add r1, #0x4b\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _02038F5E\n    ldr r0, _02038F64 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038F60: .word sub_02038EB4\n    _02038F64: .word sub_02038E90\n    _02038F68: .word sub_02038E94\n    _02038F6C: .word _021D4150\n    _02038F70: .word sub_02038EB0"
    );
    #endif
}

void sub_02038F74(void) {
    /* Original at 0x02038F74 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _02038F98 ; =_021D4150\n    ldr r4, [r3]\n    cmp r4, #0\n    beq _02038F94\n    add r3, r0, #0\n    sub r3, #0x19\n    cmp r3, #1\n    bls _02038F88\n    neg r0, r0\n    str r0, [r4, #0x34]\n    ldr r0, _02038F98 ; =_021D4150\n    ldr r3, [r0]\n    str r1, [r3, #0x38]\n    ldr r0, [r0]\n    str r2, [r0, #0x3c]\n    pop {r3, r4}\n    bx lr\n    _02038F98: .word _021D4150"
    );
    #endif
}

void sub_02038F9C(void) {
    /* Original at 0x02038F9C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl ov00_021E5E54\n    cmp r0, #0xa\n    blt _02038FB6\n    cmp r0, #0x14\n    bge _02038FB6\n    ldr r0, _02038FFC ; =sub_02038EB4\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    cmp r0, #0\n    bge _02038FC4\n    ldr r0, _02039000 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    cmp r0, #0x14\n    bne _02038FD2\n    ldr r0, _02039004 ; =sub_02038EB8\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    cmp r0, #0x15\n    bne _02038FE0\n    ldr r0, _02039008 ; =sub_02038EB0\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    cmp r0, #0x16\n    bne _02038FEE\n    ldr r0, _02038FFC ; =sub_02038EB4\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    cmp r0, #0x18\n    bne _02038FFA\n    ldr r0, _02039008 ; =sub_02038EB0\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02038FFC: .word sub_02038EB4\n    _02039000: .word sub_02038E90\n    _02039004: .word sub_02038EB8\n    _02039008: .word sub_02038EB0"
    );
    #endif
}

void sub_0203900C(void) {
    /* Original at 0x0203900C */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    bl ov00_021E5E54\n    cmp r0, #0\n    bge _02039022\n    ldr r0, _02039074 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02039078 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4e\n    ldrb r0, [r0]\n    bl sub_02033FC4\n    add r2, r0, #0\n    ldr r0, _02039078 ; =_021D4150\n    ldr r1, [r0]\n    mov r0, #0x51\n    ldrsb r0, [r1, r0]\n    add r1, r2, #1\n    mov r2, #0\n    bl ov00_021E6D7C\n    add r0, r0, #3\n    cmp r0, #3\n    bhi _02039070\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02039052: ; jump table\n    bl sub_0203622C\n    ldr r0, _0203907C ; =sub_02038F9C\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02039074 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02039074: .word sub_02038E90\n    _02039078: .word _021D4150\n    _0203907C: .word sub_02038F9C"
    );
    #endif
}

void sub_02039080(void) {
    /* Original at 0x02039080 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _020390B0 ; =_021D4150\n    ldr r0, [r0]\n    ldr r1, [r0, #0x24]\n    ldr r0, _020390B4 ; =sub_02038F9C\n    cmp r1, r0\n    beq _02039094\n    mov r0, #0\n    pop {r4, pc}\n    ldr r0, _020390B8 ; =sub_02036904\n    ldr r1, _020390BC ; =sub_020367A8\n    bl ov00_021E5C84\n    ldr r0, _020390B0 ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x51\n    strb r4, [r0]\n    ldr r0, _020390C0 ; =sub_0203900C\n    bl sub_020381C0\n    mov r0, #1\n    pop {r4, pc}\n    _020390B0: .word _021D4150\n    _020390B4: .word sub_02038F9C\n    _020390B8: .word sub_02036904\n    _020390BC: .word sub_020367A8\n    _020390C0: .word sub_0203900C"
    );
    #endif
}

void sub_020390C4(void) {
    /* Original at 0x020390C4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039120 ; =_021D4150\n    ldr r1, _02039124 ; =sub_02038F9C\n    ldr r0, [r0]\n    ldr r0, [r0, #0x24]\n    cmp r0, r1\n    bne _020390D4\n    mov r0, #0\n    bx lr\n    ldr r1, _02039128 ; =sub_02038EB8\n    cmp r0, r1\n    bne _020390DE\n    mov r0, #1\n    bx lr\n    ldr r1, _0203912C ; =sub_02038E94\n    cmp r0, r1\n    bne _020390E8\n    mov r0, #3\n    bx lr\n    ldr r1, _02039130 ; =sub_02038EB0\n    cmp r0, r1\n    bne _020390F2\n    mov r0, #4\n    bx lr\n    ldr r1, _02039134 ; =sub_02038EB4\n    cmp r0, r1\n    bne _020390FC\n    mov r0, #5\n    bx lr\n    ldr r1, _02039138 ; =sub_02039DE4\n    cmp r0, r1\n    bne _02039106\n    mov r0, #0\n    bx lr\n    ldr r1, _0203913C ; =sub_02039DC4\n    cmp r0, r1\n    bne _02039110\n    mov r0, #1\n    bx lr\n    ldr r1, _02039140 ; =sub_02039E7C\n    cmp r0, r1\n    bne _0203911A\n    mov r0, #3\n    bx lr\n    mov r0, #2\n    bx lr\n    nop\n    _02039120: .word _021D4150\n    _02039124: .word sub_02038F9C\n    _02039128: .word sub_02038EB8\n    _0203912C: .word sub_02038E94\n    _02039130: .word sub_02038EB0\n    _02039134: .word sub_02038EB4\n    _02039138: .word sub_02039DE4\n    _0203913C: .word sub_02039DC4\n    _02039140: .word sub_02039E7C"
    );
    #endif
}

void sub_02039144(void) {
    /* Original at 0x02039144 */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020391BC ; =sub_02036904\n    ldr r1, _020391C0 ; =sub_020367A8\n    bl ov00_021E5C84\n    mov r0, #0\n    mvn r0, r0\n    mov r1, #4\n    mov r2, #1\n    bl ov00_021E6D7C\n    add r0, r0, #4\n    cmp r0, #4\n    bhi _0203919A\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0203916C: ; jump table\n    ldr r0, _020391C4 ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x5c\n    strb r1, [r0]\n    bl sub_0203622C\n    ldr r0, _020391C8 ; =sub_02038F9C\n    mov r1, #0\n    bl sub_020381C0\n    b _0203919A\n    ldr r0, _020391CC ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    b _0203919A\n    pop {r3, pc}\n    bl ov00_021E6690\n    cmp r0, #0\n    bge _020391AC\n    ldr r0, _020391CC ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    cmp r0, #0x1a\n    bne _020391B8\n    ldr r0, _020391CC ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _020391BC: .word sub_02036904\n    _020391C0: .word sub_020367A8\n    _020391C4: .word _021D4150\n    _020391C8: .word sub_02038F9C\n    _020391CC: .word sub_02038E90"
    );
    #endif
}

void sub_020391D0(void) {
    /* Original at 0x020391D0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl sub_0203786C\n    ldr r0, _02039214 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x50\n    ldrb r0, [r0]\n    bl ov00_021E6BE4\n    cmp r0, #0\n    beq _020391FE\n    bl ov00_021E6C68\n    cmp r0, #0\n    beq _020391FE\n    bl sub_020343E4\n    ldr r0, _02039218 ; =sub_02039144\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    mov r0, #0\n    bl ov00_021E5E54\n    cmp r0, #0\n    bge _02039210\n    ldr r0, _0203921C ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02039214: .word _021D4150\n    _02039218: .word sub_02039144\n    _0203921C: .word sub_02038E90"
    );
    #endif
}

void sub_02039220(void) {
    /* Original at 0x02039220 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0203769C\n    cmp r0, #0\n    bne _0203923C\n    ldr r0, _0203925C ; =_021D4150\n    mov r1, #0\n    ldr r0, [r0]\n    add r0, #0x50\n    strb r1, [r0]\n    ldr r0, _02039260 ; =sub_020391D0\n    bl sub_020381C0\n    b _0203924E\n    ldr r0, _0203925C ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x50\n    strb r1, [r0]\n    ldr r0, _02039260 ; =sub_020391D0\n    mov r1, #0\n    bl sub_020381C0\n    ldr r0, _0203925C ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x5c\n    strb r1, [r0]\n    pop {r3, pc}\n    nop\n    _0203925C: .word _021D4150\n    _02039260: .word sub_020391D0"
    );
    #endif
}

void sub_02039264(void) {
    /* Original at 0x02039264 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039270 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x5c\n    ldrb r0, [r0]\n    bx lr\n    nop\n    _02039270: .word _021D4150"
    );
    #endif
}

void sub_02039274(void) {
    /* Original at 0x02039274 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039294 ; =_021D4150\n    ldr r0, [r0]\n    ldr r1, [r0, #0x24]\n    ldr r0, _02039298 ; =sub_02039144\n    cmp r1, r0\n    bne _02039284\n    mov r0, #1\n    bx lr\n    ldr r0, _0203929C ; =sub_02039C60\n    cmp r1, r0\n    bne _0203928E\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02039294: .word _021D4150\n    _02039298: .word sub_02039144\n    _0203929C: .word sub_02039C60"
    );
    #endif
}

void sub_020392A0(void) {
    /* Original at 0x020392A0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020392C8 ; =_021D4150\n    ldr r0, [r0]\n    ldr r1, [r0, #0x24]\n    ldr r0, _020392CC ; =sub_02038F9C\n    cmp r1, r0\n    bne _020392B0\n    mov r0, #1\n    bx lr\n    ldr r0, _020392D0 ; =sub_02039144\n    cmp r1, r0\n    bne _020392BA\n    mov r0, #1\n    bx lr\n    ldr r0, _020392D4 ; =sub_02039C60\n    cmp r1, r0\n    bne _020392C4\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _020392C8: .word _021D4150\n    _020392CC: .word sub_02038F9C\n    _020392D0: .word sub_02039144\n    _020392D4: .word sub_02039C60"
    );
    #endif
}

void sub_020392D8(void) {
    GF_AssertFail();
}

void sub_020392F4(void) {
    /* Original at 0x020392F4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl sub_0203786C\n    mov r0, #0\n    bl ov00_021E6BE4\n    cmp r0, #0\n    beq _02039312\n    bl ov00_021E6C68\n    ldr r0, _02039328 ; =sub_0203847C\n    mov r1, #0\n    bl sub_020381C0\n    mov r0, #0\n    bl ov00_021E5E54\n    cmp r0, #0\n    bge _02039324\n    ldr r0, _0203932C ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02039328: .word sub_0203847C\n    _0203932C: .word sub_02038E90"
    );
    #endif
}

void sub_02039330(void) {
    /* Original at 0x02039330 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02039350 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0203934C\n    mov r0, #1\n    bl sub_0201A738\n    bl sub_020343E4\n    ldr r0, _02039354 ; =sub_0203847C\n    mov r1, #5\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02039350: .word _021D4150\n    _02039354: .word sub_0203847C"
    );
    #endif
}

void sub_02039358(void) {
    sub_020381C0(0);
}

void sub_02039378(void) {
    /* Original at 0x02039378 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020393AC ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _020393AA\n    mov r0, #0\n    mov r1, #1\n    bl sub_020398D4\n    bl sub_0203769C\n    cmp r0, #0\n    bne _02039398\n    mov r1, #0\n    ldr r0, _020393AC ; =_021D4150\n    b _0203939C\n    ldr r0, _020393AC ; =_021D4150\n    mov r1, #1\n    ldr r0, [r0]\n    add r0, #0x50\n    strb r1, [r0]\n    ldr r0, _020393B0 ; =sub_020391D0\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _020393AC: .word _021D4150\n    _020393B0: .word sub_020391D0"
    );
    #endif
}

void sub_020393B4(void) {
    sub_0203769C();
    sub_020376E0(0x15);
}

void sub_020393C8(void) {
    /* Original at 0x020393C8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039408 ; =_021D4150\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02039402\n    ldr r1, [r2, #0x24]\n    ldr r0, _0203940C ; =sub_02038E90\n    cmp r1, r0\n    bne _020393DC\n    mov r0, #1\n    bx lr\n    ldr r0, _02039410 ; =sub_02038E94\n    cmp r1, r0\n    bne _020393F0\n    add r0, r2, #0\n    add r0, #0x53\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _020393F0\n    mov r0, #1\n    bx lr\n    ldr r0, _02039414 ; =sub_02039E7C\n    cmp r1, r0\n    bne _02039402\n    add r2, #0x53\n    ldrb r0, [r2]\n    cmp r0, #0\n    beq _02039402\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02039408: .word _021D4150\n    _0203940C: .word sub_02038E90\n    _02039410: .word sub_02038E94\n    _02039414: .word sub_02039E7C"
    );
    #endif
}

void sub_02039418(void) {
    /* Original at 0x02039418 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02039468 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02039466\n    mov r1, #0xf\n    add r2, r1, #0\n    mov r0, #3\n    add r2, #0xf1\n    bl Heap_CreateAtEnd\n    mov r0, #0xf\n    mov r1, #0x68\n    bl Heap_Alloc\n    ldr r1, _02039468 ; =_021D4150\n    mov r2, #0x68\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _02039468 ; =_021D4150\n    mov r2, #0x18\n    ldr r1, [r0]\n    add r1, #0x4e\n    strb r2, [r1]\n    ldr r2, [r0]\n    mov r1, #1\n    add r2, #0x55\n    strb r1, [r2]\n    ldr r0, [r0]\n    str r4, [r0, #0x28]\n    mov r0, #0\n    bl sub_020398D4\n    mov r0, #1\n    bl sub_0201A728\n    pop {r4, pc}\n    _02039468: .word _021D4150"
    );
    #endif
}

void sub_0203946C(void) {
    /* Original at 0x0203946C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _0203949C ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02039498\n    mov r0, #1\n    bl sub_0201A738\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    ldr r0, _0203949C ; =_021D4150\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _0203949C ; =_021D4150\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #0xf\n    bl Heap_Destroy\n    pop {r3, pc}\n    nop\n    _0203949C: .word _021D4150"
    );
    #endif
}

void sub_020394A0(void) {
    /* Original at 0x020394A0 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _020394F0 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _020394EE\n    mov r1, #0xf\n    add r2, r1, #0\n    mov r0, #3\n    add r2, #0xf1\n    bl Heap_CreateAtEnd\n    mov r0, #0xf\n    mov r1, #0x68\n    bl Heap_Alloc\n    ldr r1, _020394F0 ; =_021D4150\n    mov r2, #0x68\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _020394F0 ; =_021D4150\n    mov r2, #0x19\n    ldr r1, [r0]\n    add r1, #0x4e\n    strb r2, [r1]\n    ldr r2, [r0]\n    mov r1, #1\n    add r2, #0x55\n    strb r1, [r2]\n    ldr r0, [r0]\n    str r4, [r0, #0x28]\n    mov r0, #0\n    bl sub_020398D4\n    mov r0, #1\n    bl sub_0201A728\n    pop {r4, pc}\n    _020394F0: .word _021D4150"
    );
    #endif
}

void sub_020394F4(void) {
    /* Original at 0x020394F4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02039524 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02039520\n    mov r0, #1\n    bl sub_0201A738\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    ldr r0, _02039524 ; =_021D4150\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _02039524 ; =_021D4150\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #0xf\n    bl Heap_Destroy\n    pop {r3, pc}\n    nop\n    _02039524: .word _021D4150"
    );
    #endif
}

void sub_02039528(void) {
    /* Original at 0x02039528 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02039578 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02039576\n    mov r1, #0xf\n    add r2, r1, #0\n    mov r0, #3\n    add r2, #0xf1\n    bl Heap_CreateAtEnd\n    mov r0, #0xf\n    mov r1, #0x68\n    bl Heap_Alloc\n    ldr r1, _02039578 ; =_021D4150\n    mov r2, #0x68\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _02039578 ; =_021D4150\n    mov r2, #0x24\n    ldr r1, [r0]\n    add r1, #0x4e\n    strb r2, [r1]\n    ldr r2, [r0]\n    mov r1, #1\n    add r2, #0x55\n    strb r1, [r2]\n    ldr r0, [r0]\n    str r4, [r0, #0x28]\n    mov r0, #0\n    bl sub_020398D4\n    mov r0, #1\n    bl sub_0201A728\n    pop {r4, pc}\n    _02039578: .word _021D4150"
    );
    #endif
}

void sub_0203957C(void) {
    /* Original at 0x0203957C */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020395AC ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _020395A8\n    mov r0, #1\n    bl sub_0201A738\n    mov r0, #0\n    add r1, r0, #0\n    bl sub_020398D4\n    ldr r0, _020395AC ; =_021D4150\n    ldr r0, [r0]\n    bl Heap_Free\n    ldr r0, _020395AC ; =_021D4150\n    mov r1, #0\n    str r1, [r0]\n    mov r0, #0xf\n    bl Heap_Destroy\n    pop {r3, pc}\n    nop\n    _020395AC: .word _021D4150"
    );
    #endif
}

void sub_020395B0(void) {
    /* Original at 0x020395B0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    sub sp, #8\n    ldr r0, _02039608 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _020395C2\n    add sp, #8\n    mov r0, #0\n    pop {r3, pc}\n    add r0, #0x4e\n    ldrb r0, [r0]\n    cmp r0, #0x18\n    beq _020395CE\n    cmp r0, #0x24\n    bne _020395E4\n    add r0, sp, #4\n    add r1, sp, #0\n    bl ov00_021EC11C\n    cmp r0, #0\n    beq _02039600\n    bl ov00_021EC210\n    add sp, #8\n    mov r0, #1\n    pop {r3, pc}\n    cmp r0, #0x19\n    bne _02039600\n    add r0, sp, #4\n    add r1, sp, #0\n    bl ov00_021EC11C\n    cmp r0, #0\n    beq _02039600\n    ldr r0, [sp]\n    cmp r0, #7\n    bne _02039600\n    add sp, #8\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, pc}\n    nop\n    _02039608: .word _021D4150"
    );
    #endif
}

void sub_0203960C(void) {
    /* Original at 0x0203960C */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov00_021E5B6C\n    ldr r1, _02039680 ; =_021D4150\n    ldr r3, [r1]\n    ldr r2, [r3, #0x44]\n    sub r2, r2, #1\n    str r2, [r3, #0x44]\n    cmp r0, #0x1b\n    bne _02039660\n    ldr r1, [r1]\n    add r0, r1, #0\n    add r0, #0x4e\n    ldrb r0, [r0]\n    cmp r0, #0x21\n    bne _02039656\n    ldr r0, [r1, #0x60]\n    bl ov45_0222E804\n    cmp r0, #1\n    bne _0203964C\n    ldr r1, _02039680 ; =_021D4150\n    mov r2, #1\n    ldr r0, [r1]\n    add r0, #0x64\n    strb r2, [r0]\n    ldr r1, [r1]\n    ldr r0, _02039684 ; =sub_02039C14\n    ldr r1, [r1, #0x44]\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _02039688 ; =sub_02039DC0\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    ldr r0, _0203968C ; =sub_02039144\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    cmp r0, #0\n    beq _0203966C\n    ldr r0, _02039690 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    ldr r0, _02039680 ; =_021D4150\n    ldr r0, [r0]\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    bgt _0203967E\n    ldr r0, _02039690 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02039680: .word _021D4150\n    _02039684: .word sub_02039C14\n    _02039688: .word sub_02039DC0\n    _0203968C: .word sub_02039144\n    _02039690: .word sub_02038E90"
    );
    #endif
}

void sub_02039694(void) {
    /* Original at 0x02039694 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _020396EE\n    mov r2, #0xd5\n    mov r0, #3\n    mov r1, #0x30\n    lsl r2, r2, #0xa\n    bl Heap_CreateAtEnd\n    mov r0, #1\n    add r1, r0, #0\n    lsl r2, r0, #9\n    add r3, r0, #0\n    bl sub_02035ED8\n    cmp r0, #0\n    beq _020396EE\n    ldr r0, _020396F0 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4e\n    ldrb r0, [r0]\n    bl sub_02033FC4\n    add r3, r0, #0\n    ldr r0, _020396F0 ; =_021D4150\n    mov r2, #0xb1\n    ldr r0, [r0]\n    mov r1, #0x30\n    ldr r0, [r0, #0x28]\n    lsl r2, r2, #0xa\n    add r3, r3, #1\n    bl ov00_021E5900\n    ldr r0, _020396F4 ; =sub_020399DC\n    bl ov00_021E6CA4\n    bl sub_02035FD8\n    mov r1, #0xe1\n    ldr r0, _020396F8 ; =sub_0203960C\n    lsl r1, r1, #4\n    bl sub_020381C0\n    pop {r3, pc}\n    _020396F0: .word _021D4150\n    _020396F4: .word sub_020399DC\n    _020396F8: .word sub_0203960C"
    );
    #endif
}

void sub_020396FC(void) {
    /* Original at 0x020396FC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl Save_PlayerData_GetProfile\n    bl sub_02037474\n    cmp r0, #0\n    beq _02039712\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #1\n    bl sub_0201A728\n    ldr r2, _02039760 ; =0x00007080\n    mov r0, #3\n    mov r1, #0xf\n    bl Heap_CreateAtEnd\n    add r0, r5, #0\n    mov r1, #0x17\n    bl sub_02037C98\n    mov r0, #0xf\n    add r1, r4, #0\n    bl Heap_Alloc\n    ldr r1, _02039764 ; =_021D4150\n    ldr r2, [r1]\n    str r0, [r2]\n    ldr r0, [r1]\n    mov r1, #0\n    ldr r0, [r0]\n    add r2, r4, #0\n    bl MI_CpuFill8\n    ldr r0, _02039764 ; =_021D4150\n    mov r1, #0\n    ldr r2, [r0]\n    add r2, #0x4f\n    strb r1, [r2]\n    ldr r0, [r0]\n    str r5, [r0, #0x28]\n    ldr r0, _02039768 ; =sub_02039694\n    bl sub_020381C0\n    ldr r0, _02039764 ; =_021D4150\n    ldr r0, [r0]\n    ldr r0, [r0]\n    pop {r3, r4, r5, pc}\n    _02039760: .word 0x00007080\n    _02039764: .word _021D4150\n    _02039768: .word sub_02039694"
    );
    #endif
}

void sub_0203976C(void) {
    /* Original at 0x0203976C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl Save_PlayerData_GetProfile\n    bl sub_02037474\n    cmp r0, #0\n    bne _020397B8\n    mov r0, #1\n    bl sub_0201A728\n    ldr r2, _020397BC ; =0x00007080\n    mov r0, #3\n    mov r1, #0xf\n    bl Heap_CreateAtEnd\n    add r0, r5, #0\n    mov r1, #0x21\n    bl sub_02037C98\n    ldr r0, _020397C0 ; =_021D4150\n    mov r1, #0\n    ldr r2, [r0]\n    str r1, [r2]\n    ldr r2, [r0]\n    str r4, [r2, #0x60]\n    ldr r2, [r0]\n    add r2, #0x64\n    strb r1, [r2]\n    ldr r2, [r0]\n    add r2, #0x4f\n    strb r1, [r2]\n    ldr r0, [r0]\n    str r5, [r0, #0x28]\n    ldr r0, _020397C4 ; =sub_02039BA0\n    bl sub_020381C0\n    pop {r3, r4, r5, pc}\n    nop\n    _020397BC: .word 0x00007080\n    _020397C0: .word _021D4150\n    _020397C4: .word sub_02039BA0"
    );
    #endif
}

void sub_020397C8(void) {
    sub_020381C0(0);
}

void sub_020397E4(void) {
    /* Original at 0x020397E4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020397F8 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _020397F0\n    mov r0, #0\n    bx lr\n    add r0, #0x64\n    ldrb r0, [r0]\n    bx lr\n    nop\n    _020397F8: .word _021D4150"
    );
    #endif
}

void sub_020397FC(void) {
    /* Original at 0x020397FC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039814 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02039810\n    ldr r1, [r0, #0x24]\n    ldr r0, _02039818 ; =sub_02039DC0\n    cmp r1, r0\n    bne _02039810\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    _02039814: .word _021D4150\n    _02039818: .word sub_02039DC0"
    );
    #endif
}

void sub_0203981C(void) {
    /* Original at 0x0203981C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02039864 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _0203982C\n    bl GF_AssertFail\n    bl sub_020392A0\n    cmp r0, #1\n    beq _02039838\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov45_0222F274\n    cmp r0, #0\n    bne _02039854\n    add r0, r4, #0\n    mov r1, #4\n    bl ov45_0222F028\n    ldr r0, _02039868 ; =sub_02039DE4\n    mov r1, #0\n    bl sub_020381C0\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov45_0222F350\n    ldr r0, _02039868 ; =sub_02039DE4\n    mov r1, #0\n    bl sub_020381C0\n    pop {r4, pc}\n    _02039864: .word _021D4150\n    _02039868: .word sub_02039DE4"
    );
    #endif
}

void sub_0203986C(void) {
    /* Original at 0x0203986C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov45_0222F464\n    cmp r0, #1\n    bne _0203987A\n    bl ov45_0222F154\n    bl ov45_0222F70C\n    ldr r0, _02039888 ; =sub_02039E30\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02039888: .word sub_02039E30"
    );
    #endif
}

void sub_0203988C(void) {
    /* Original at 0x0203988C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020398B8 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _020398B4\n    ldr r1, [r0, #0x24]\n    ldr r0, _020398BC ; =sub_02039DC4\n    cmp r1, r0\n    bne _020398A0\n    mov r0, #2\n    bx lr\n    ldr r0, _020398C0 ; =sub_02039DE4\n    cmp r1, r0\n    bne _020398AA\n    mov r0, #1\n    bx lr\n    ldr r0, _020398C4 ; =sub_02039E30\n    cmp r1, r0\n    bne _020398B4\n    mov r0, #3\n    bx lr\n    mov r0, #0\n    bx lr\n    _020398B8: .word _021D4150\n    _020398BC: .word sub_02039DC4\n    _020398C0: .word sub_02039DE4\n    _020398C4: .word sub_02039E30"
    );
    #endif
}

void sub_020398C8(void) {
    /* Original at 0x020398C8 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _020398D0 ; =_021D4150\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bx lr\n    _020398D0: .word _021D4150"
    );
    #endif
}

void sub_020398D4(void) {
    /* Original at 0x020398D4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02039914 ; =_021D4150\n    ldr r2, [r0]\n    cmp r2, #0\n    beq _02039904\n    add r2, #0x53\n    strb r4, [r2]\n    ldr r2, [r0]\n    add r2, #0x54\n    strb r1, [r2]\n    cmp r4, #0\n    beq _020398FC\n    bl sub_02037454\n    ldr r1, _02039914 ; =_021D4150\n    ldr r1, [r1]\n    add r1, #0x4b\n    strb r0, [r1]\n    b _02039904\n    ldr r0, [r0]\n    mov r1, #0\n    add r0, #0x4b\n    strb r1, [r0]\n    add r0, r4, #0\n    bl sub_020356C0\n    add r0, r4, #0\n    bl sub_020356EC\n    pop {r4, pc}\n    nop\n    _02039914: .word _021D4150"
    );
    #endif
}

void sub_02039918(void) {
    /* Original at 0x02039918 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039938 ; =_021D4150\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _02039934\n    add r0, r1, #0\n    add r0, #0x5d\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0203992E\n    mov r0, #1\n    bx lr\n    add r1, #0x54\n    ldrb r0, [r1]\n    bx lr\n    mov r0, #0\n    bx lr\n    _02039938: .word _021D4150"
    );
    #endif
}

void sub_0203993C(void) {
    /* Original at 0x0203993C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039950 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _0203994A\n    add r0, #0x4e\n    ldrb r0, [r0]\n    bx lr\n    mov r0, #1\n    bx lr\n    nop\n    _02039950: .word _021D4150"
    );
    #endif
}

void sub_02039954(void) {
    /* Original at 0x02039954 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039968 ; =_021D4150\n    ldr r0, [r0]\n    cmp r0, #0\n    beq _02039962\n    add r0, #0x4f\n    ldrb r0, [r0]\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02039968: .word _021D4150"
    );
    #endif
}

void sub_0203996C(void) {
    /* Original at 0x0203996C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02039978 ; =_021D4150\n    ldr r3, _0203997C ; =MI_CpuCopy8\n    ldr r1, [r1]\n    mov r2, #6\n    add r1, r1, #4\n    bx r3\n    _02039978: .word _021D4150\n    _0203997C: .word MI_CpuCopy8"
    );
    #endif
}

void sub_02039980(void) {
    /* Original at 0x02039980 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "add r1, r0, #0\n    ldr r0, _02039990 ; =_021D4150\n    ldr r3, _02039994 ; =MI_CpuCopy8\n    ldr r0, [r0]\n    mov r2, #6\n    add r0, r0, #4\n    bx r3\n    nop\n    _02039990: .word _021D4150\n    _02039994: .word MI_CpuCopy8"
    );
    #endif
}

void sub_02039998(void) {
    sub_0203993C();
    sub_02034044();
}

void sub_020399A4(void) {
    /* Original at 0x020399A4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _020399B4 ; =_021D4150\n    ldr r1, [r1]\n    cmp r1, #0\n    beq _020399B0\n    add r1, #0x56\n    strb r0, [r1]\n    bx lr\n    nop\n    _020399B4: .word _021D4150"
    );
    #endif
}

void sub_020399B8(void) {
    sub_0201A79C(0, 0);
}

void sub_020399DC(void) {
    ShowCommunicationError();
}

void sub_020399EC(void) {
    ShowCommunicationError();
}

void sub_020399FC(void) {
    /* Original at 0x020399FC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02039A00(void) {
    /* Original at 0x02039A00 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02039918\n    cmp r0, #0\n    beq _02039A98\n    bl sub_02037700\n    cmp r0, #0\n    bne _02039A36\n    bl sub_020393C8\n    cmp r0, #0\n    bne _02039A36\n    bl sub_020395B0\n    cmp r0, #0\n    bne _02039A36\n    ldr r0, _02039A9C ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x5d\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02039A36\n    bl sub_020397FC\n    cmp r0, #0\n    beq _02039A98\n    bl sub_0201A79C\n    cmp r0, #0\n    bne _02039A98\n    bl sub_020399B8\n    cmp r0, #0\n    bne _02039A98\n    bl Sound_Stop\n    ldr r0, _02039A9C ; =_021D4150\n    ldr r0, [r0]\n    ldr r0, [r0, #0x28]\n    bl Save_Cancel\n    ldr r1, _02039AA0 ; =gSystem + 0x60\n    mov r0, #1\n    strb r0, [r1, #8]\n    ldr r1, _02039A9C ; =_021D4150\n    ldr r2, [r1]\n    add r1, r2, #0\n    add r1, #0x5d\n    ldrb r1, [r1]\n    cmp r1, #3\n    bne _02039A70\n    mov r0, #3\n    bl sub_020399A4\n    pop {r3, pc}\n    cmp r1, #5\n    bne _02039A7C\n    mov r0, #5\n    bl sub_020399A4\n    pop {r3, pc}\n    add r2, #0x4e\n    ldrb r1, [r2]\n    cmp r1, #0x19\n    beq _02039A8C\n    cmp r1, #0xf\n    beq _02039A8C\n    cmp r1, #0x24\n    bne _02039A94\n    mov r0, #2\n    bl sub_020399A4\n    pop {r3, pc}\n    bl sub_020399A4\n    pop {r3, pc}\n    nop\n    _02039A9C: .word _021D4150\n    _02039AA0: .word gSystem + 0x60"
    );
    #endif
}

void sub_02039AA4(void) {
    /* Original at 0x02039AA4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02035630\n    cmp r0, #0\n    bne _02039AB6\n    bl sub_02037D78\n    cmp r0, #0\n    bne _02039ABA\n    mov r0, #1\n    pop {r3, pc}\n    bl sub_02034BE4\n    cmp r0, #0\n    bne _02039AC6\n    mov r0, #1\n    pop {r3, pc}\n    bl sub_02033974\n    cmp r0, #0\n    beq _02039AD2\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_02039AD8(void) {
    sub_02037988(0, 1);
}

void sub_02039AF8(void) {
    /* Original at 0x02039AF8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039B0C ; =_021D4150\n    mov r1, #0x1d\n    ldr r0, [r0]\n    ldr r3, _02039B10 ; =ov00_021E5C84\n    add r0, #0x4e\n    strb r1, [r0]\n    ldr r0, _02039B14 ; =sub_020369CC\n    add r1, r0, #0\n    bx r3\n    nop\n    _02039B0C: .word _021D4150\n    _02039B10: .word ov00_021E5C84\n    _02039B14: .word sub_020369CC"
    );
    #endif
}

void sub_02039B18(void) {
    /* Original at 0x02039B18 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039B2C ; =_021D4150\n    mov r1, #0x23\n    ldr r0, [r0]\n    ldr r3, _02039B30 ; =ov00_021E5C84\n    add r0, #0x4e\n    strb r1, [r0]\n    ldr r0, _02039B34 ; =sub_020369CC\n    add r1, r0, #0\n    bx r3\n    nop\n    _02039B2C: .word _021D4150\n    _02039B30: .word ov00_021E5C84\n    _02039B34: .word sub_020369CC"
    );
    #endif
}

void sub_02039B38(void) {
    /* Original at 0x02039B38 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039B4C ; =_021D4150\n    mov r1, #0x21\n    ldr r0, [r0]\n    ldr r3, _02039B50 ; =ov00_021E5C84\n    add r0, #0x4e\n    strb r1, [r0]\n    ldr r0, _02039B54 ; =sub_020369CC\n    add r1, r0, #0\n    bx r3\n    nop\n    _02039B4C: .word _021D4150\n    _02039B50: .word ov00_021E5C84\n    _02039B54: .word sub_020369CC"
    );
    #endif
}

void sub_02039B58(void) {
    /* Original at 0x02039B58 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039B6C ; =_021D4150\n    ldr r3, _02039B70 ; =ov00_021E5C84\n    ldr r0, [r0]\n    mov r1, #0x17\n    add r0, #0x4e\n    strb r1, [r0]\n    ldr r0, _02039B74 ; =sub_02036904\n    ldr r1, _02039B78 ; =sub_020367A8\n    bx r3\n    nop\n    _02039B6C: .word _021D4150\n    _02039B70: .word ov00_021E5C84\n    _02039B74: .word sub_02036904\n    _02039B78: .word sub_020367A8"
    );
    #endif
}

void sub_02039B7C(void) {
    /* Original at 0x02039B7C */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039B90 ; =_021D4150\n    ldr r3, _02039B94 ; =ov00_021E5C84\n    ldr r0, [r0]\n    mov r1, #0x13\n    add r0, #0x4e\n    strb r1, [r0]\n    ldr r0, _02039B98 ; =sub_02036904\n    ldr r1, _02039B9C ; =sub_020367A8\n    bx r3\n    nop\n    _02039B90: .word _021D4150\n    _02039B94: .word ov00_021E5C84\n    _02039B98: .word sub_02036904\n    _02039B9C: .word sub_020367A8"
    );
    #endif
}

void sub_02039BA0(void) {
    /* Original at 0x02039BA0 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _02039C04\n    mov r1, #0x30\n    mov r0, #3\n    lsl r2, r1, #0xd\n    bl Heap_CreateAtEnd\n    mov r0, #1\n    add r1, r0, #0\n    lsl r2, r0, #9\n    add r3, r0, #0\n    bl sub_02035ED8\n    cmp r0, #0\n    beq _02039C04\n    ldr r0, _02039C08 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x4e\n    ldrb r0, [r0]\n    bl sub_02033FC4\n    add r3, r0, #0\n    ldr r0, _02039C08 ; =_021D4150\n    mov r2, #0x16\n    ldr r0, [r0]\n    mov r1, #0x30\n    ldr r0, [r0, #0x28]\n    lsl r2, r2, #0xe\n    add r3, r3, #1\n    bl ov00_021E5900\n    ldr r0, _02039C0C ; =sub_020399DC\n    bl ov00_021E6CA4\n    bl sub_02035FD8\n    mov r0, #0\n    bl ov00_021E70B8\n    mov r0, #0\n    bl sub_020378E4\n    mov r1, #0xe1\n    ldr r0, _02039C10 ; =sub_0203960C\n    lsl r1, r1, #4\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02039C08: .word _021D4150\n    _02039C0C: .word sub_020399DC\n    _02039C10: .word sub_0203960C"
    );
    #endif
}

void sub_02039C14(void) {
    /* Original at 0x02039C14 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02039C54 ; =_021D4150\n    ldr r2, [r0]\n    ldr r1, [r2, #0x44]\n    sub r1, r1, #1\n    str r1, [r2, #0x44]\n    ldr r0, [r0]\n    ldr r0, [r0, #0x44]\n    cmp r0, #0\n    bgt _02039C32\n    ldr r0, _02039C58 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    mov r0, #1\n    bl sub_0203786C\n    bl sub_02039D3C\n    cmp r0, #0\n    beq _02039C50\n    bl ov45_0222E8F4\n    cmp r0, #0\n    beq _02039C50\n    ldr r0, _02039C5C ; =sub_02039C60\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    nop\n    _02039C54: .word _021D4150\n    _02039C58: .word sub_02038E90\n    _02039C5C: .word sub_02039C60"
    );
    #endif
}

void sub_02039C60(void) {
    sub_02039D3C();
}

void sub_02039C6C(void) {
    /* Original at 0x02039C6C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r4, #1\n    cmp r0, #0xa\n    blt _02039C84\n    cmp r0, #0x14\n    bge _02039C84\n    ldr r0, _02039CF4 ; =sub_02038EB4\n    mov r1, #0\n    bl sub_020381C0\n    mov r4, #0\n    b _02039CC8\n    cmp r0, #0\n    bge _02039C94\n    ldr r0, _02039CF8 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    mov r4, #0\n    b _02039CC8\n    cmp r0, #0x17\n    bne _02039CA4\n    ldr r0, _02039CFC ; =sub_02039E7C\n    mov r1, #0\n    bl sub_020381C0\n    mov r4, #0\n    b _02039CC8\n    cmp r0, #0x18\n    bne _02039CC8\n    ldr r0, _02039D00 ; =_021D4150\n    mov r4, #0\n    ldr r0, [r0]\n    add r0, #0x53\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02039CC0\n    ldr r0, _02039CF8 ; =sub_02038E90\n    add r1, r4, #0\n    bl sub_020381C0\n    b _02039CC8\n    ldr r0, _02039D04 ; =sub_02038EB0\n    add r1, r4, #0\n    bl sub_020381C0\n    ldr r0, _02039D00 ; =_021D4150\n    ldr r0, [r0]\n    add r0, #0x53\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _02039CEE\n    bl sub_02037454\n    ldr r1, _02039D00 ; =_021D4150\n    ldr r1, [r1]\n    add r1, #0x4b\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _02039CEE\n    ldr r0, _02039CF8 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    mov r4, #0\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _02039CF4: .word sub_02038EB4\n    _02039CF8: .word sub_02038E90\n    _02039CFC: .word sub_02039E7C\n    _02039D00: .word _021D4150\n    _02039D04: .word sub_02038EB0"
    );
    #endif
}

void sub_02039D08(void) {
    /* Original at 0x02039D08 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r4, #1\n    bl ov45_0222E6C8\n    cmp r0, #4\n    bhi _02039D34\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02039D20: ; jump table\n    ldr r0, _02039D38 ; =sub_02039DC0\n    mov r1, #0\n    bl sub_020381C0\n    mov r4, #0\n    add r0, r4, #0\n    pop {r4, pc}\n    _02039D38: .word sub_02039DC0"
    );
    #endif
}

void sub_02039D3C(void) {
    /* Original at 0x02039D3C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl ov00_021E5E54\n    bl sub_02039C6C\n    cmp r0, #0\n    beq _02039D50\n    bl sub_02039D08\n    pop {r3, pc}"
    );
    #endif
}

void sub_02039D54(void) {
    /* Original at 0x02039D54 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0\n    bl ov00_021E5E54\n    cmp r0, #0x14\n    blt _02039D66\n    str r0, [r4]\n    b _02039D72\n    mov r1, #0\n    str r1, [r4]\n    bl sub_02039C6C\n    cmp r0, #0\n    beq _02039D76\n    bl sub_02039D08\n    pop {r4, pc}"
    );
    #endif
}

void sub_02039D78(void) {
    /* Original at 0x02039D78 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov45_0222E91C\n    ldr r0, _02039D88 ; =sub_02039D8C\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02039D88: .word sub_02039D8C"
    );
    #endif
}

void sub_02039D8C(void) {
    /* Original at 0x02039D8C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl ov00_021E5E54\n    bl sub_02039D08\n    bl ov45_0222E944\n    cmp r0, #0\n    beq _02039DB8\n    mov r0, #1\n    bl sub_0201A738\n    bl sub_020343E4\n    ldr r0, _02039DBC ; =sub_0203847C\n    mov r1, #5\n    bl sub_020381C0\n    mov r0, #0\n    bl sub_0203786C\n    pop {r3, pc}\n    nop\n    _02039DBC: .word sub_0203847C"
    );
    #endif
}

void sub_02039DC0(void) {
    /* Original at 0x02039DC0 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02039DC4(void) {
    /* Original at 0x02039DC4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_02039D3C\n    bl ov45_0222F254\n    cmp r0, #1\n    bne _02039DDE\n    bl ov45_0222F70C\n    ldr r0, _02039DE0 ; =sub_02039E30\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02039DE0: .word sub_02039E30"
    );
    #endif
}

void sub_02039DE4(void) {
    /* Original at 0x02039DE4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov45_0222F254\n    cmp r0, #1\n    bne _02039DFC\n    bl ov45_0222F70C\n    ldr r0, _02039E24 ; =sub_02039E30\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    add r0, sp, #0\n    bl sub_02039D54\n    ldr r0, [sp]\n    cmp r0, #0\n    beq _02039E22\n    cmp r0, #0x14\n    bne _02039E16\n    ldr r0, _02039E28 ; =sub_02039DC4\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    bl ov45_0222F70C\n    ldr r0, _02039E2C ; =sub_02039C60\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02039E24: .word sub_02039E30\n    _02039E28: .word sub_02039DC4\n    _02039E2C: .word sub_02039C60"
    );
    #endif
}

void sub_02039E30(void) {
    /* Original at 0x02039E30 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #1\n    bl ov00_021E5E54\n    cmp r0, #0\n    bge _02039E46\n    ldr r0, _02039E74 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    bl sub_02039D08\n    cmp r0, #0\n    beq _02039E72\n    mov r0, #0\n    bl ov00_021E6BE4\n    cmp r0, #0\n    beq _02039E72\n    bl ov00_021E6C68\n    cmp r0, #0\n    beq _02039E72\n    bl sub_0203622C\n    mov r0, #0\n    bl sub_020378E4\n    ldr r0, _02039E78 ; =sub_02039C60\n    mov r1, #0\n    bl sub_020381C0\n    pop {r3, pc}\n    _02039E74: .word sub_02038E90\n    _02039E78: .word sub_02039C60"
    );
    #endif
}

void sub_02039E7C(void) {
    /* Original at 0x02039E7C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl ov00_021E5E54\n    cmp r0, #0\n    bge _02039E90\n    ldr r0, _02039E98 ; =sub_02038E90\n    mov r1, #0\n    bl sub_020381C0\n    bl sub_02039D08\n    pop {r3, pc}\n    nop\n    _02039E98: .word sub_02038E90"
    );
    #endif
}

void sub_02039E9C(void) {
    /* Original at 0x02039E9C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02039EA8 ; =_021D4150\n    mov r1, #0x22\n    ldr r0, [r0]\n    add r0, #0x4e\n    strb r1, [r0]\n    bx lr\n    _02039EA8: .word _021D4150"
    );
    #endif
}

void sub_02039EAC(void) {
    *(u32*)r0 = 0;
}

void sub_02039EB4(void) {
    /* Original at 0x02039EB4 */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r2, #0\n    add r6, r1, #0\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #6\n    bhi _02039F64\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02039ECE: ; jump table\n    mov r0, #0x6f\n    bl sub_02037AC0\n    mov r0, #1\n    str r0, [r4]\n    b _02039F64\n    mov r0, #0x6f\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02039F64\n    add r0, r5, #0\n    add r1, r6, #0\n    bl Save_PrepareForAsyncWrite\n    mov r0, #2\n    str r0, [r4]\n    b _02039F64\n    bl Save_WriteFileAsync\n    add r5, r0, #0\n    cmp r5, #2\n    bne _02039F0E\n    bl GF_AssertFail\n    cmp r5, #1\n    bne _02039F1E\n    mov r0, #3\n    str r0, [r4]\n    mov r0, #0x70\n    bl sub_02037AC0\n    b _02039F64\n    cmp r5, #3\n    bne _02039F64\n    mov r0, #7\n    str r0, [r4]\n    b _02039F64\n    mov r0, #0x70\n    bl sub_02037B38\n    cmp r0, #0\n    beq _02039F64\n    mov r0, #4\n    str r0, [r4]\n    b _02039F64\n    bl Save_WriteFileAsync\n    add r5, r0, #0\n    cmp r5, #1\n    bne _02039F46\n    bl GF_AssertFail\n    cmp r5, #2\n    bne _02039F50\n    mov r0, #5\n    str r0, [r4]\n    b _02039F64\n    cmp r5, #3\n    bne _02039F64\n    mov r0, #7\n    str r0, [r4]\n    b _02039F64\n    mov r0, #6\n    str r0, [r4]\n    b _02039F64\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02039F68(void) {
    /* Original at 0x02039F68 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    bl sub_02037454\n    add r7, r0, #0\n    mov r0, #0\n    bl sub_02034818\n    cmp r0, #0\n    beq _02039FB6\n    mov r5, #0\n    cmp r7, #0\n    ble _02039FB6\n    bl sub_0203769C\n    cmp r5, r0\n    beq _02039FB0\n    add r0, r5, #0\n    bl sub_020348A8\n    add r4, r0, #0\n    add r0, r5, #0\n    bl sub_020348CC\n    add r6, r0, #0\n    add r0, r5, #0\n    bl sub_02034818\n    bl PlayerProfile_GetLanguage\n    add r3, r0, #0\n    ldr r0, [sp]\n    add r1, r4, #0\n    add r2, r6, #0\n    bl sub_02039FB8\n    add r5, r5, #1\n    cmp r5, r7\n    blt _02039F82\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02039FB8(void) {
    /* Original at 0x02039FB8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r6, r2, #0\n    bl WiFiHistory_GetLocationSeenState\n    cmp r0, #0\n    bne _02039FD4\n    add r0, r5, #0\n    add r1, r4, #0\n    add r2, r6, #0\n    mov r3, #1\n    bl WiFiHistory_SetLocationSeenState\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02039FD8(void) {
    /* Original at 0x02039FD8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r1, #0x72\n    lsl r1, r1, #4\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r0, #0x1f\n    mov r1, #0x1f\n    bic r0, r1\n    bl DWC_Init\n    add r5, r0, #0\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02039FFC(void) {
    LoadDwcOverlay();
    LoadOVY38();
    sub_02039FD8(r4);
    UnloadDwcOverlay();
    UnloadOVY38();
}

void sub_0203A01C(void) {
    /* Original at 0x0203A01C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0202C08C\n    add r4, r0, #0\n    bl DWC_CheckUserData\n    cmp r0, #0\n    bne _0203A03A\n    ldr r1, _0203A03C ; =0x4144414A\n    add r0, r4, #0\n    bl DWC_CreateUserData\n    add r0, r4, #0\n    bl DWC_ClearDirtyFlag\n    pop {r4, pc}\n    _0203A03C: .word 0x4144414A"
    );
    #endif
}

void sub_0203A040(void) {
    sub_0202C08C();
    DWC_CreateExchangeToken();
    DWC_GetGsProfileId(r4);
}

void sub_0203A05C(void) {
    /* Original at 0x0203A05C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl sub_0202C6F4\n    bl sub_0202C08C\n    add r4, r0, #0\n    bl DWC_CheckHasProfile\n    cmp r0, #0\n    beq _0203A07E\n    add r0, r4, #0\n    bl DWC_CheckValidConsole\n    cmp r0, #0\n    beq _0203A07E\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_0203A084(void) {
    /* Original at 0x0203A084 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r0, #0\n    add r5, r1, #0\n    str r2, [sp]\n    bl sub_0202C6F4\n    bl sub_0202C08C\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_0202C6F4\n    mov r1, #0\n    bl sub_0202C23C\n    add r4, r0, #0\n    mov r1, #0\n    ldr r0, [sp]\n    mvn r1, r1\n    str r1, [r0]\n    add r0, r5, #0\n    bl DWC_IsValidFriendData\n    cmp r0, #0\n    bne _0203A0BE\n    add sp, #8\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r7, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl DWC_IsEqualFriendData\n    cmp r0, #0\n    beq _0203A0D6\n    ldr r0, [sp]\n    add sp, #8\n    str r7, [r0]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r6, #0\n    add r1, r5, #0\n    bl DWC_GetGsProfileId\n    cmp r0, #0\n    ble _0203A104\n    add r0, r6, #0\n    add r1, r5, #0\n    bl DWC_GetGsProfileId\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl DWC_GetGsProfileId\n    ldr r1, [sp, #4]\n    cmp r1, r0\n    bne _0203A104\n    ldr r0, [sp]\n    add sp, #8\n    str r7, [r0]\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp]\n    ldr r0, [r0]\n    cmp r0, #0\n    bge _0203A11A\n    add r0, r4, #0\n    bl DWC_IsValidFriendData\n    cmp r0, #0\n    bne _0203A11A\n    ldr r0, [sp]\n    str r7, [r0]\n    add r7, r7, #1\n    add r4, #0xc\n    cmp r7, #0x20\n    blt _0203A0C0\n    mov r0, #2\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0203A128(void) {
    /* Original at 0x0203A128 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r0, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    add r6, r3, #0\n    bl sub_0202C6F4\n    bl sub_0202C08C\n    add r7, r0, #0\n    add r0, r4, #0\n    bl sub_0202C6F4\n    mov r1, #0\n    bl sub_0202C23C\n    add r5, r0, #0\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, r7, #0\n    bl DWC_CheckFriendKey\n    cmp r0, #0\n    bne _0203A160\n    add sp, #0x18\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp]\n    ldr r2, [sp, #4]\n    add r0, sp, #0xc\n    bl DWC_CreateFriendKeyToken\n    add r0, r7, #0\n    add r1, sp, #0xc\n    bl DWC_GetGsProfileId\n    cmp r0, #0\n    bgt _0203A17C\n    add sp, #0x18\n    mov r0, #3\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    mvn r0, r0\n    str r0, [r6]\n    mov r4, #0\n    add r0, r7, #0\n    add r1, sp, #0xc\n    bl DWC_GetGsProfileId\n    str r0, [sp, #8]\n    add r0, r7, #0\n    add r1, r5, #0\n    bl DWC_GetGsProfileId\n    ldr r1, [sp, #8]\n    cmp r1, r0\n    bne _0203A1A4\n    add sp, #0x18\n    str r4, [r6]\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r6]\n    cmp r0, #0\n    bge _0203A1B6\n    add r0, r5, #0\n    bl DWC_IsValidFriendData\n    cmp r0, #0\n    bne _0203A1B6\n    str r4, [r6]\n    add r4, r4, #1\n    add r5, #0xc\n    cmp r4, #0x20\n    blt _0203A184\n    mov r0, #2\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0203A1C4(void) {
    /* Original at 0x0203A1C4 */
    /* Requires manual decompilation - 79 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r1, #0\n    mov r1, #0\n    add r5, r0, #0\n    str r2, [sp, #4]\n    str r1, [sp, #0xc]\n    bl sub_0202C6F4\n    mov r1, #0\n    bl sub_0202C23C\n    str r0, [sp, #8]\n    mov r4, #0\n    bl sub_02037454\n    cmp r0, #0\n    ble _0203A278\n    bl sub_0203769C\n    cmp r4, r0\n    beq _0203A26C\n    add r0, r4, #0\n    bl sub_0203484C\n    add r7, r0, #0\n    beq _0203A26C\n    add r0, r5, #0\n    add r1, r7, #0\n    add r2, sp, #0x10\n    bl sub_0203A084\n    str r0, [r6]\n    cmp r0, #3\n    bne _0203A20E\n    bl GF_AssertFail\n    ldr r0, [r6]\n    cmp r0, #0\n    bne _0203A22C\n    mov r0, #2\n    str r0, [sp]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0203A280\n    add r0, r5, #0\n    bl sub_02034A20\n    b _0203A26C\n    cmp r0, #1\n    bne _0203A264\n    bl sub_02039998\n    cmp r0, #0\n    bne _0203A26C\n    mov r0, #1\n    str r0, [sp]\n    ldr r2, [sp, #0x10]\n    ldr r3, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0203A280\n    ldr r2, [sp, #0x10]\n    mov r1, #0xc\n    add r3, r2, #0\n    mul r3, r1\n    ldr r1, [sp, #8]\n    add r0, r7, #0\n    add r1, r1, r3\n    mov r2, #0xc\n    bl MI_CpuCopy8\n    add r0, r5, #0\n    bl sub_02034A20\n    b _0203A26C\n    cmp r0, #2\n    bne _0203A26C\n    mov r0, #1\n    str r0, [sp, #0xc]\n    add r6, r6, #4\n    add r4, r4, #1\n    bl sub_02037454\n    cmp r4, r0\n    blt _0203A1E8\n    ldr r0, [sp, #0xc]\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0203A280(void) {
    /* Original at 0x0203A280 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r5, r2, #0\n    str r0, [sp]\n    add r7, r1, #0\n    str r3, [sp, #4]\n    bl sub_0202C6F4\n    add r1, r5, #0\n    add r4, r0, #0\n    bl sub_0202C23C\n    str r0, [sp, #8]\n    add r0, r7, #0\n    bl sub_02034818\n    add r6, r0, #0\n    ldr r0, [sp, #0x28]\n    cmp r0, #2\n    beq _0203A2B6\n    add r0, r7, #0\n    bl sub_0203484C\n    ldr r1, [sp, #8]\n    mov r2, #0xc\n    bl MI_CpuCopy8\n    ldr r0, [sp, #0x28]\n    cmp r0, #0\n    bne _0203A2FC\n    ldr r1, [sp, #4]\n    add r0, r6, #0\n    bl PlayerProfile_GetPlayerName_NewString\n    str r0, [sp, #0xc]\n    ldr r2, [sp, #0xc]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_0202C270\n    ldr r0, [sp, #0xc]\n    bl String_Delete\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerGender\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #8\n    bl sub_0202C190\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerID\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl sub_0202C190\n    b _0203A334\n    sub r0, r0, #1\n    cmp r0, #1\n    bhi _0203A334\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #8\n    bl sub_0202C090\n    cmp r0, #2\n    bne _0203A334\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerGender\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #8\n    bl sub_0202C190\n    add r0, r6, #0\n    bl PlayerProfile_GetTrainerID\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #0\n    bl sub_0202C190\n    ldr r1, [sp, #4]\n    mov r0, #0x78\n    bl String_New\n    str r0, [sp, #0x10]\n    add r0, r7, #0\n    bl sub_02034884\n    add r1, r0, #0\n    ldr r0, [sp, #0x10]\n    bl CopyU16ArrayToString\n    ldr r2, [sp, #0x10]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_0202C2B4\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r6, #0\n    bl PlayerProfile_GetAvatar\n    add r3, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #7\n    bl sub_0202C190\n    ldr r0, [sp]\n    bl sub_02034A20\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0203A378(void) {
    /* Original at 0x0203A378 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl sub_0203484C\n    add r6, r0, #0\n    add r0, r4, #0\n    bl sub_0202C6F4\n    add r5, r0, #0\n    mov r4, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_0202C23C\n    add r1, r0, #0\n    add r0, r6, #0\n    bl DWC_IsEqualFriendData\n    cmp r0, #0\n    beq _0203A3A6\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    add r4, r4, #1\n    cmp r4, #0x20\n    blt _0203A38E\n    mov r0, #0x20\n    pop {r4, r5, r6, pc}"
    );
    #endif
}
