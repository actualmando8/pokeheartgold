/* Decompiled from asm/unk_0201010C.s */
#include "global.h"

void FadeFunc_00(void) {
    /* Original at 0x0201010C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #0xc]\n    cmp r1, #0\n    bne _02010122\n    mov r1, #1\n    str r1, [r0, #0x28]\n    str r1, [r0, #0x2c]\n    bl sub_02010B14\n    mov r0, #0\n    pop {r3, pc}\n    bl sub_02010BB4\n    pop {r3, pc}"
    );
    #endif
}

void FadeFunc_01(void) {
    /* Original at 0x02010128 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #0xc]\n    cmp r1, #0\n    bne _02010140\n    mov r1, #0\n    str r1, [r0, #0x28]\n    mov r2, #1\n    str r2, [r0, #0x2c]\n    bl sub_02010B14\n    mov r0, #0\n    pop {r3, pc}\n    bl sub_02010BB4\n    pop {r3, pc}"
    );
    #endif
}

void FadeFunc_02(void) {
    /* Original at 0x02010148 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010170\n    ldr r1, _02010178 ; =_020F5D60\n    ldr r0, _0201017C ; =_0210F64C\n    str r1, [r0]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010180 ; =_0210F64C\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    nop\n    _02010178: .word _020F5D60\n    _0201017C: .word _0210F64C\n    _02010180: .word _0210F64C"
    );
    #endif
}

void FadeFunc_03(void) {
    /* Original at 0x02010184 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020101AA\n    ldr r1, _020101B0 ; =_020F5D5C\n    ldr r0, _020101B4 ; =_0210F64C\n    str r1, [r0, #0x10]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020101B8 ; =_0210F65C\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    _020101B0: .word _020F5D5C\n    _020101B4: .word _0210F64C\n    _020101B8: .word _0210F65C"
    );
    #endif
}

void FadeFunc_04(void) {
    /* Original at 0x020101BC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020101E4\n    ldr r1, _020101EC ; =_020F5D64\n    ldr r0, _020101F0 ; =_0210F64C\n    str r1, [r0, #0x20]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020101F4 ; =_0210F66C\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    nop\n    _020101EC: .word _020F5D64\n    _020101F0: .word _0210F64C\n    _020101F4: .word _0210F66C"
    );
    #endif
}

void FadeFunc_05(void) {
    /* Original at 0x020101F8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _0201021E\n    ldr r1, _02010224 ; =_020F5D58\n    ldr r0, _02010228 ; =_0210F64C\n    str r1, [r0, #0x28]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _0201022C ; =_0210F674\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    _02010224: .word _020F5D58\n    _02010228: .word _0210F64C\n    _0201022C: .word _0210F674"
    );
    #endif
}

void FadeFunc_06(void) {
    /* Original at 0x02010230 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010252\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010258 ; =_020F5E2C\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    _02010258: .word _020F5E2C"
    );
    #endif
}

void FadeFunc_07(void) {
    /* Original at 0x0201025C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _0201027C\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010284 ; =_020F5E38\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    nop\n    _02010284: .word _020F5E38"
    );
    #endif
}

void FadeFunc_08(void) {
    /* Original at 0x02010288 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020102B0\n    ldr r1, _020102B8 ; =_020F5D90\n    ldr r0, _020102BC ; =_0210F64C\n    str r1, [r0, #8]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020102C0 ; =_0210F654\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    nop\n    _020102B8: .word _020F5D90\n    _020102BC: .word _0210F64C\n    _020102C0: .word _0210F654"
    );
    #endif
}

void FadeFunc_09(void) {
    /* Original at 0x020102C4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020102EA\n    ldr r1, _020102F0 ; =_020F5D68\n    ldr r0, _020102F4 ; =_0210F64C\n    str r1, [r0, #0x38]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020102F8 ; =_0210F684\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    _020102F0: .word _020F5D68\n    _020102F4: .word _0210F64C\n    _020102F8: .word _0210F684"
    );
    #endif
}

void FadeFunc_10(void) {
    /* Original at 0x020102FC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010324\n    ldr r1, _0201032C ; =_020F5D80\n    ldr r0, _02010330 ; =_0210F64C\n    str r1, [r0, #0x48]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010334 ; =_0210F694\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    nop\n    _0201032C: .word _020F5D80\n    _02010330: .word _0210F64C\n    _02010334: .word _0210F694"
    );
    #endif
}

void FadeFunc_11(void) {
    /* Original at 0x02010338 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _0201035E\n    ldr r1, _02010364 ; =_020F5DB8\n    ldr r0, _02010368 ; =_0210F64C\n    str r1, [r0, #0x40]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _0201036C ; =_0210F68C\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    _02010364: .word _020F5DB8\n    _02010368: .word _0210F64C\n    _0201036C: .word _0210F68C"
    );
    #endif
}

void FadeFunc_12(void) {
    /* Original at 0x02010370 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010392\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010398 ; =_020F5E5C\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    _02010398: .word _020F5E5C"
    );
    #endif
}

void FadeFunc_13(void) {
    /* Original at 0x0201039C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020103BC\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020103C4 ; =_020F5E68\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    nop\n    _020103C4: .word _020F5E68"
    );
    #endif
}

void FadeFunc_14(void) {
    /* Original at 0x020103C8 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020103EC\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020103F4 ; =_020F5E80\n    ldr r2, _020103F8 ; =_020F5E8C\n    add r0, r4, #0\n    bl sub_020116EC\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02011744\n    pop {r4, pc}\n    nop\n    _020103F4: .word _020F5E80\n    _020103F8: .word _020F5E8C"
    );
    #endif
}

void FadeFunc_15(void) {
    /* Original at 0x020103FC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _0201041E\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010424 ; =_020F5EA4\n    ldr r2, _02010428 ; =_020F5EB0\n    add r0, r4, #0\n    bl sub_020116EC\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02011744\n    pop {r4, pc}\n    _02010424: .word _020F5EA4\n    _02010428: .word _020F5EB0"
    );
    #endif
}

void FadeFunc_16(void) {
    /* Original at 0x0201042C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _0201044E\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010454 ; =_020F5EC8\n    add r0, r4, #0\n    bl sub_02011884\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020118BC\n    pop {r4, pc}\n    _02010454: .word _020F5EC8"
    );
    #endif
}

void FadeFunc_17(void) {
    /* Original at 0x02010458 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010478\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010480 ; =_020F5ED4\n    add r0, r4, #0\n    bl sub_02011884\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020118BC\n    pop {r4, pc}\n    nop\n    _02010480: .word _020F5ED4"
    );
    #endif
}

void FadeFunc_18(void) {
    /* Original at 0x02010484 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020104A6\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020104AC ; =_020F5DD8\n    add r0, r4, #0\n    bl sub_02011884\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020118BC\n    pop {r4, pc}\n    _020104AC: .word _020F5DD8"
    );
    #endif
}

void FadeFunc_19(void) {
    /* Original at 0x020104B0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020104D0\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020104D8 ; =_020F5DE4\n    add r0, r4, #0\n    bl sub_02011884\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020118BC\n    pop {r4, pc}\n    nop\n    _020104D8: .word _020F5DE4"
    );
    #endif
}

void FadeFunc_20(void) {
    /* Original at 0x020104DC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020104FE\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010504 ; =_020F5DD0\n    add r0, r4, #0\n    bl sub_02011B5C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02011B94\n    pop {r4, pc}\n    _02010504: .word _020F5DD0"
    );
    #endif
}

void FadeFunc_21(void) {
    /* Original at 0x02010508 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010528\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010530 ; =_020F5DC8\n    add r0, r4, #0\n    bl sub_02011B5C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02011B94\n    pop {r4, pc}\n    nop\n    _02010530: .word _020F5DC8"
    );
    #endif
}

void FadeFunc_22(void) {
    /* Original at 0x02010534 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010556\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _0201055C ; =_020F5E08\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    _0201055C: .word _020F5E08"
    );
    #endif
}

void FadeFunc_23(void) {
    /* Original at 0x02010560 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010580\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010588 ; =_020F5E14\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    nop\n    _02010588: .word _020F5E14"
    );
    #endif
}

void FadeFunc_24(void) {
    /* Original at 0x0201058C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020105AE\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020105B4 ; =_020F5E20\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    _020105B4: .word _020F5E20"
    );
    #endif
}

void FadeFunc_25(void) {
    /* Original at 0x020105B8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020105D8\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020105E0 ; =_020F5E44\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    nop\n    _020105E0: .word _020F5E44"
    );
    #endif
}

void FadeFunc_26(void) {
    /* Original at 0x020105E4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010606\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _0201060C ; =_020F5DA8\n    add r0, r4, #0\n    bl sub_02011D60\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02011D98\n    pop {r4, pc}\n    _0201060C: .word _020F5DA8"
    );
    #endif
}

void FadeFunc_27(void) {
    /* Original at 0x02010610 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010630\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010638 ; =_020F5DA0\n    add r0, r4, #0\n    bl sub_02011D60\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02011D98\n    pop {r4, pc}\n    nop\n    _02010638: .word _020F5DA0"
    );
    #endif
}

void FadeFunc_28(void) {
    /* Original at 0x0201063C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010680\n    ldr r0, _02010688 ; =_020F5EEC\n    mov r1, #4\n    str r0, [sp]\n    ldr r0, _0201068C ; =_020F5EFC\n    str r0, [sp, #4]\n    add r0, sp, #0\n    strh r1, [r0, #8]\n    mov r1, #0\n    strh r1, [r0, #0xa]\n    mov r1, #0x3f\n    strb r1, [r0, #0xc]\n    mov r1, #0x20\n    strb r1, [r0, #0xd]\n    mov r1, #1\n    strh r1, [r0, #0xe]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02011FF8\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    add sp, #0x10\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02012030\n    add sp, #0x10\n    pop {r4, pc}\n    _02010688: .word _020F5EEC\n    _0201068C: .word _020F5EFC"
    );
    #endif
}

void FadeFunc_29(void) {
    /* Original at 0x02010690 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020106D0\n    ldr r0, _020106D8 ; =_020F5F0C\n    mov r1, #4\n    str r0, [sp]\n    ldr r0, _020106DC ; =_020F5F1C\n    mov r2, #0\n    str r0, [sp, #4]\n    add r0, sp, #0\n    strh r1, [r0, #8]\n    strh r2, [r0, #0xa]\n    mov r1, #0x3f\n    strb r1, [r0, #0xc]\n    mov r1, #0x20\n    strb r1, [r0, #0xd]\n    strh r2, [r0, #0xe]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_02011FF8\n    mov r0, #0\n    str r0, [r4, #0x28]\n    add sp, #0x10\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02012030\n    add sp, #0x10\n    pop {r4, pc}\n    _020106D8: .word _020F5F0C\n    _020106DC: .word _020F5F1C"
    );
    #endif
}

void FadeFunc_30(void) {
    /* Original at 0x020106E0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010708\n    ldr r1, _02010710 ; =_020F5EBC\n    ldr r0, _02010714 ; =_0210F64C\n    str r1, [r0, #0x30]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010718 ; =_0210F67C\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    nop\n    _02010710: .word _020F5EBC\n    _02010714: .word _0210F64C\n    _02010718: .word _0210F67C"
    );
    #endif
}

void FadeFunc_31(void) {
    /* Original at 0x0201071C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010742\n    ldr r1, _02010748 ; =_020F5DF0\n    ldr r0, _0201074C ; =_0210F64C\n    str r1, [r0, #0x18]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010750 ; =_0210F664\n    add r0, r4, #0\n    bl sub_0201289C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020128E0\n    pop {r4, pc}\n    _02010748: .word _020F5DF0\n    _0201074C: .word _0210F64C\n    _02010750: .word _0210F664"
    );
    #endif
}

void FadeFunc_32(void) {
    /* Original at 0x02010754 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _0201078E\n    ldr r1, _02010798 ; =_020F5D58\n    add r0, sp, #0\n    ldrh r2, [r1, #0x30]\n    strh r2, [r0]\n    ldrh r2, [r1, #0x32]\n    strh r2, [r0, #2]\n    ldrh r2, [r1, #0x34]\n    ldrh r1, [r1, #0x36]\n    strh r2, [r0, #4]\n    strh r1, [r0, #6]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_020122B8\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    add sp, #8\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020122F8\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02010798: .word _020F5D58"
    );
    #endif
}

void FadeFunc_33(void) {
    /* Original at 0x0201079C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020107D4\n    ldr r1, _020107DC ; =_020F5D98\n    add r0, sp, #0\n    ldrh r2, [r1, #0x28]\n    strh r2, [r0]\n    ldrh r2, [r1, #0x2a]\n    strh r2, [r0, #2]\n    ldrh r2, [r1, #0x2c]\n    ldrh r1, [r1, #0x2e]\n    strh r2, [r0, #4]\n    strh r1, [r0, #6]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_020122B8\n    mov r0, #0\n    str r0, [r4, #0x28]\n    add sp, #8\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020122F8\n    add sp, #8\n    pop {r4, pc}\n    _020107DC: .word _020F5D98"
    );
    #endif
}

void FadeFunc_34(void) {
    /* Original at 0x020107E0 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _0201081A\n    ldr r1, _02010824 ; =_020F5D58\n    add r0, sp, #0\n    ldrh r2, [r1, #0x20]\n    strh r2, [r0]\n    ldrh r2, [r1, #0x22]\n    strh r2, [r0, #2]\n    ldrh r2, [r1, #0x24]\n    ldrh r1, [r1, #0x26]\n    strh r2, [r0, #4]\n    strh r1, [r0, #6]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_020125EC\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    add sp, #8\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201262C\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _02010824: .word _020F5D58"
    );
    #endif
}

void FadeFunc_35(void) {
    /* Original at 0x02010828 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010860\n    ldr r1, _02010868 ; =_020F5D58\n    add r0, sp, #0\n    ldrh r2, [r1, #0x18]\n    strh r2, [r0]\n    ldrh r2, [r1, #0x1a]\n    strh r2, [r0, #2]\n    ldrh r2, [r1, #0x1c]\n    ldrh r1, [r1, #0x1e]\n    strh r2, [r0, #4]\n    strh r1, [r0, #6]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    add r0, r4, #0\n    add r1, sp, #0\n    bl sub_020125EC\n    mov r0, #0\n    str r0, [r4, #0x28]\n    add sp, #8\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201262C\n    add sp, #8\n    pop {r4, pc}\n    _02010868: .word _020F5D58"
    );
    #endif
}

void FadeFunc_36(void) {
    /* Original at 0x0201086C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _0201088E\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010894 ; =_020F5E98\n    add r0, r4, #0\n    bl sub_02011884\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020118BC\n    pop {r4, pc}\n    _02010894: .word _020F5E98"
    );
    #endif
}

void FadeFunc_37(void) {
    /* Original at 0x02010898 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020108B8\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020108C0 ; =_020F5EE0\n    add r0, r4, #0\n    bl sub_02011884\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_020118BC\n    pop {r4, pc}\n    nop\n    _020108C0: .word _020F5EE0"
    );
    #endif
}

void FadeFunc_38(void) {
    /* Original at 0x020108C4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020108E6\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020108EC ; =_020F5DFC\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    _020108EC: .word _020F5DFC"
    );
    #endif
}

void FadeFunc_39(void) {
    /* Original at 0x020108F0 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010910\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010918 ; =_020F5E50\n    add r0, r4, #0\n    bl sub_0201164C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_0201169C\n    pop {r4, pc}\n    nop\n    _02010918: .word _020F5E50"
    );
    #endif
}

void FadeFunc_40(void) {
    /* Original at 0x0201091C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _02010944\n    ldr r1, _0201094C ; =_020F5D98\n    ldr r0, _02010950 ; =_0210F64C\n    str r1, [r0, #0x5c]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _02010954 ; =_0210F69C\n    add r0, r4, #0\n    bl sub_02012B1C\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02012B80\n    pop {r4, pc}\n    nop\n    _0201094C: .word _020F5D98\n    _02010950: .word _0210F64C\n    _02010954: .word _0210F69C"
    );
    #endif
}

void FadeFunc_41(void) {
    /* Original at 0x02010958 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _0201097E\n    ldr r1, _02010984 ; =_020F5DB0\n    ldr r0, _02010988 ; =_0210F64C\n    str r1, [r0, #0x74]\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _0201098C ; =_0210F6B4\n    add r0, r4, #0\n    bl sub_02012B1C\n    mov r0, #0\n    str r0, [r4, #0x28]\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02012B80\n    pop {r4, pc}\n    _02010984: .word _020F5DB0\n    _02010988: .word _0210F64C\n    _0201098C: .word _0210F6B4"
    );
    #endif
}

void FadeFunc_42(void) {
    /* Original at 0x02010990 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    bne _020109B2\n    ldrh r0, [r4, #0x24]\n    bl sub_0200FCDC\n    ldr r1, _020109B8 ; =_020F5E74\n    add r0, r4, #0\n    bl sub_02012DD8\n    mov r0, #1\n    str r0, [r4, #0x28]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    bl sub_02012E10\n    pop {r4, pc}\n    _020109B8: .word _020F5E74"
    );
    #endif
}

void sub_020109BC(void) {
    /* Original at 0x020109BC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "asr r0, r0, #4\n    lsl r1, r0, #1\n    lsl r0, r1, #1\n    ldr r2, _020109D0 ; =FX_SinCosTable_\n    add r1, r1, #1\n    lsl r1, r1, #1\n    ldr r3, _020109D4 ; =FX_Div\n    ldrsh r0, [r2, r0]\n    ldrsh r1, [r2, r1]\n    bx r3\n    _020109D0: .word FX_SinCosTable_\n    _020109D4: .word FX_Div"
    );
    #endif
}

void sub_020109D8(void) {
    /* Original at 0x020109D8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_020109BC\n    lsl r2, r4, #0xc\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    asr r0, r1, #0xc\n    pop {r4, pc}"
    );
    #endif
}

void sub_02010A00(void) {
    /* Original at 0x02010A00 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r7, r2, #0\n    add r6, r3, #0\n    bl sub_020109BC\n    cmp r6, r7\n    bge _02010A4A\n    lsl r1, r6, #2\n    str r0, [sp]\n    asr r0, r0, #0x1f\n    lsl r4, r6, #0xc\n    add r5, r5, r1\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    ldr r1, [sp, #4]\n    asr r3, r4, #0x1f\n    add r2, r4, #0\n    bl _ll_mul\n    mov r2, #2\n    lsl r2, r2, #0xa\n    add r0, r0, r2\n    ldr r2, _02010A50 ; =0x00000000\n    adc r1, r2\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    asr r0, r0, #0xc\n    stmia r5!, {r0}\n    mov r0, #1\n    lsl r0, r0, #0xc\n    add r6, r6, #1\n    add r4, r4, r0\n    cmp r6, r7\n    blt _02010A1E\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02010A50: .word 0x00000000"
    );
    #endif
}

void sub_02010A54(void) {
    /* Original at 0x02010A54 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_020109BC\n    add r1, r0, #0\n    lsr r0, r4, #0x1f\n    add r0, r4, r0\n    asr r0, r0, #1\n    lsl r0, r0, #0xc\n    bl FX_Div\n    pop {r4, pc}"
    );
    #endif
}

void sub_02010A6C(void) {
    /* Original at 0x02010A6C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02010A78 ; =_s32_div_f\n    sub r0, r1, r0\n    lsl r0, r0, #7\n    add r1, r2, #0\n    bx r3\n    nop\n    _02010A78: .word _s32_div_f"
    );
    #endif
}

void sub_02010A7C(void) {
    /* Original at 0x02010A7C */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r0, r1\n    bpl _02010A82\n    mov r0, #0\n    cmp r0, #0xff\n    ble _02010A88\n    mov r0, #0xff\n    bx lr"
    );
    #endif
}

void sub_02010A8C(void) {
    /* Original at 0x02010A8C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0]\n    ldr r2, [r1]\n    add r2, r3, r2\n    str r2, [r0]\n    ldr r3, [r0, #4]\n    ldr r2, [r1, #4]\n    add r2, r3, r2\n    str r2, [r0, #4]\n    ldr r3, [r0, #8]\n    ldr r2, [r1, #8]\n    add r2, r3, r2\n    str r2, [r0, #8]\n    ldr r2, [r0, #0xc]\n    ldr r1, [r1, #0xc]\n    add r1, r2, r1\n    str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void sub_02010AB0(void) {
    /* Original at 0x02010AB0 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r3, #0\n    add r6, r2, #0\n    ldrb r2, [r5]\n    ldr r4, [sp, #0x18]\n    ldr r7, [sp, #0x1c]\n    lsl r2, r2, #7\n    str r2, [r0]\n    ldrb r2, [r5, #1]\n    lsl r2, r2, #7\n    str r2, [r0, #4]\n    ldrb r2, [r5, #2]\n    lsl r2, r2, #7\n    str r2, [r0, #8]\n    ldrb r2, [r5, #3]\n    lsl r2, r2, #7\n    str r2, [r0, #0xc]\n    ldrb r0, [r4]\n    add r2, r7, #0\n    str r0, [r1]\n    ldrb r0, [r4, #1]\n    str r0, [r1, #4]\n    ldrb r0, [r4, #2]\n    str r0, [r1, #8]\n    ldrb r0, [r4, #3]\n    str r0, [r1, #0xc]\n    ldrb r0, [r5]\n    ldrb r1, [r4]\n    bl sub_02010A6C\n    str r0, [r6]\n    ldrb r0, [r5, #1]\n    ldrb r1, [r4, #1]\n    add r2, r7, #0\n    bl sub_02010A6C\n    str r0, [r6, #4]\n    ldrb r0, [r5, #2]\n    ldrb r1, [r4, #2]\n    add r2, r7, #0\n    bl sub_02010A6C\n    str r0, [r6, #8]\n    ldrb r0, [r5, #3]\n    ldrb r1, [r4, #3]\n    add r2, r7, #0\n    bl sub_02010A6C\n    str r0, [r6, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02010B14(void) {
    /* Original at 0x02010B14 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r6, r1, #0\n    mov r1, #0x1c\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    mov r2, #0x1c\n    mov r1, #0\n    strb r1, [r0]\n    add r0, r0, #1\n    sub r2, r2, #1\n    bne _02010B28\n    ldr r4, [r5, #0x14]\n    cmp r6, #0\n    ldrh r1, [r5, #0x24]\n    ldr r0, _02010BB0 ; =0x00007FFF\n    bne _02010B5C\n    cmp r1, r0\n    bne _02010B44\n    mov r7, #0x10\n    mov r6, #0\n    b _02010B7C\n    cmp r1, #0\n    bne _02010B50\n    mov r7, #0xf\n    mvn r7, r7\n    mov r6, #0\n    b _02010B7C\n    mov r7, #0xf\n    mvn r7, r7\n    mov r6, #0\n    bl GF_AssertFail\n    b _02010B7C\n    cmp r1, r0\n    bne _02010B66\n    mov r7, #0\n    mov r6, #0x10\n    b _02010B7C\n    cmp r1, #0\n    bne _02010B72\n    mov r7, #0\n    add r6, r7, #0\n    sub r6, #0x10\n    b _02010B7C\n    mov r7, #0\n    add r6, r7, #0\n    sub r6, #0x10\n    bl GF_AssertFail\n    ldr r0, [r5, #0x10]\n    add r1, r7, #0\n    bl SetMasterBrightness\n    ldr r0, [r5, #4]\n    add r1, r6, #0\n    str r0, [r4]\n    ldr r0, [r5, #8]\n    str r0, [r4, #4]\n    mov r0, #0\n    str r0, [r4, #8]\n    lsl r0, r7, #7\n    str r0, [r4, #0xc]\n    lsl r0, r6, #7\n    str r0, [r4, #0x10]\n    ldr r2, [r5, #4]\n    add r0, r7, #0\n    bl sub_02010A6C\n    str r0, [r4, #0x14]\n    ldr r0, [r5, #0x10]\n    str r0, [r4, #0x18]\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}\n    _02010BB0: .word 0x00007FFF"
    );
    #endif
}

void sub_02010BB4(void) {
    /* Original at 0x02010BB4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r1, [r5, #0xc]\n    mov r4, #0\n    ldr r0, [r5, #0x14]\n    cmp r1, #1\n    beq _02010BCC\n    cmp r1, #2\n    beq _02010BDC\n    cmp r1, #3\n    beq _02010BEE\n    b _02010BF0\n    bl sub_02010BF4\n    cmp r0, #1\n    bne _02010BF0\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02010BF0\n    bl Heap_Free\n    add r0, r4, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r4, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02010BF0\n    mov r4, #1\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02010BF4(void) {
    /* Original at 0x02010BF4 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r1, r0, #0\n    ldr r0, [r1, #8]\n    mov r4, #0\n    add r2, r0, #1\n    str r2, [r1, #8]\n    ldr r0, [r1, #4]\n    cmp r2, r0\n    blt _02010C32\n    str r4, [r1, #8]\n    ldr r0, [r1]\n    sub r0, r0, #1\n    cmp r0, #0\n    ble _02010C1C\n    str r0, [r1]\n    ldr r2, [r1, #0xc]\n    ldr r0, [r1, #0x14]\n    add r0, r2, r0\n    str r0, [r1, #0xc]\n    b _02010C22\n    ldr r0, [r1, #0x10]\n    mov r4, #1\n    str r0, [r1, #0xc]\n    ldr r2, [r1, #0xc]\n    ldr r0, [r1, #0x18]\n    asr r1, r2, #6\n    lsr r1, r1, #0x19\n    add r1, r2, r1\n    asr r1, r1, #7\n    bl SetMasterBrightness\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02010C38(void) {
    /* Original at 0x02010C38 */
    /* Requires manual decompilation - 270 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    bne _02010C42\n    bl GF_AssertFail\n    ldr r0, _02010E54 ; =0x04000006\n    ldrh r0, [r0]\n    cmp r0, #0xc0\n    bge _02010CE8\n    add r5, r0, #1\n    cmp r5, #0xbf\n    ble _02010C52\n    sub r5, #0xc0\n    ldr r0, [r4, #4]\n    cmp r0, #1\n    bne _02010D02\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02010EE0\n    ldr r3, [r4, #8]\n    lsl r5, r5, #1\n    mov r4, #6\n    add r1, r0, r5\n    lsl r4, r4, #6\n    ldrsh r2, [r1, r4]\n    lsl r4, r4, #2\n    ldrsh r1, [r0, r5]\n    ldr r0, [r0, r4]\n    cmp r0, #0\n    ldr r0, _02010E58 ; =0x04000004\n    bne _02010CBC\n    cmp r3, #0\n    bne _02010C9C\n    ldrh r4, [r0]\n    mov r3, #2\n    tst r3, r4\n    beq _02010CE8\n    lsl r3, r1, #8\n    mov r1, #0xff\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    orr r1, r3\n    strh r1, [r0, #0x3c]\n    mov r1, #0xc0\n    add r0, #0x40\n    strh r1, [r0]\n    pop {r4, r5, r6, pc}\n    ldrh r3, [r0]\n    mov r0, #2\n    tst r0, r3\n    beq _02010CE8\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r1, r0\n    lsl r0, r2, #0x18\n    lsr r0, r0, #0x18\n    orr r0, r1\n    ldr r1, _02010E5C ; =0x04001040\n    strh r0, [r1]\n    mov r0, #0xc0\n    strh r0, [r1, #4]\n    pop {r4, r5, r6, pc}\n    cmp r3, #0\n    bne _02010CE0\n    ldrh r4, [r0]\n    mov r3, #2\n    tst r3, r4\n    beq _02010CE8\n    lsl r3, r1, #8\n    mov r1, #0xff\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    orr r1, r3\n    strh r1, [r0, #0x3e]\n    mov r1, #0xc0\n    add r0, #0x42\n    strh r1, [r0]\n    pop {r4, r5, r6, pc}\n    ldrh r3, [r0]\n    mov r0, #2\n    tst r0, r3\n    bne _02010CEA\n    b _02010E50\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r1, r0\n    lsl r0, r2, #0x18\n    lsr r0, r0, #0x18\n    orr r0, r1\n    ldr r1, _02010E60 ; =0x04001042\n    strh r0, [r1]\n    mov r0, #0xc0\n    strh r0, [r1, #4]\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    mov r1, #0\n    bl sub_02010EE0\n    add r3, r0, #0\n    lsl r5, r5, #1\n    mov r6, #6\n    add r1, r3, r5\n    lsl r6, r6, #6\n    ldrsh r2, [r1, r6]\n    lsl r6, r6, #2\n    ldrsh r1, [r3, r5]\n    ldr r3, [r3, r6]\n    ldr r0, [r4, #8]\n    cmp r3, #0\n    bne _02010D68\n    cmp r0, #0\n    ldr r0, _02010E58 ; =0x04000004\n    bne _02010D48\n    ldrh r6, [r0]\n    mov r3, #2\n    tst r3, r6\n    beq _02010DAC\n    lsl r3, r1, #8\n    mov r1, #0xff\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    orr r1, r3\n    strh r1, [r0, #0x3c]\n    mov r1, #0xc0\n    add r0, #0x40\n    strh r1, [r0]\n    b _02010DAC\n    ldrh r3, [r0]\n    mov r0, #2\n    tst r0, r3\n    beq _02010DAC\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r1, r0\n    lsl r0, r2, #0x18\n    lsr r0, r0, #0x18\n    orr r0, r1\n    ldr r1, _02010E5C ; =0x04001040\n    strh r0, [r1]\n    mov r0, #0xc0\n    strh r0, [r1, #4]\n    b _02010DAC\n    cmp r0, #0\n    ldr r0, _02010E58 ; =0x04000004\n    bne _02010D8E\n    ldrh r6, [r0]\n    mov r3, #2\n    tst r3, r6\n    beq _02010DAC\n    lsl r3, r1, #8\n    mov r1, #0xff\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    orr r1, r3\n    strh r1, [r0, #0x3e]\n    mov r1, #0xc0\n    add r0, #0x42\n    strh r1, [r0]\n    b _02010DAC\n    ldrh r3, [r0]\n    mov r0, #2\n    tst r0, r3\n    beq _02010DAC\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r1, r0\n    lsl r0, r2, #0x18\n    lsr r0, r0, #0x18\n    orr r0, r1\n    ldr r1, _02010E60 ; =0x04001042\n    strh r0, [r1]\n    mov r0, #0xc0\n    strh r0, [r1, #4]\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_02010EE0\n    ldr r3, [r4, #8]\n    mov r4, #6\n    add r1, r0, r5\n    lsl r4, r4, #6\n    ldrsh r2, [r1, r4]\n    lsl r4, r4, #2\n    ldrsh r1, [r0, r5]\n    ldr r0, [r0, r4]\n    cmp r0, #0\n    ldr r0, _02010E58 ; =0x04000004\n    bne _02010E0E\n    cmp r3, #0\n    bne _02010DEE\n    ldrh r4, [r0]\n    mov r3, #2\n    tst r3, r4\n    beq _02010E50\n    lsl r3, r1, #8\n    mov r1, #0xff\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    orr r1, r3\n    strh r1, [r0, #0x3c]\n    mov r1, #0xc0\n    add r0, #0x40\n    strh r1, [r0]\n    pop {r4, r5, r6, pc}\n    ldrh r3, [r0]\n    mov r0, #2\n    tst r0, r3\n    beq _02010E50\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r1, r0\n    lsl r0, r2, #0x18\n    lsr r0, r0, #0x18\n    orr r0, r1\n    ldr r1, _02010E5C ; =0x04001040\n    strh r0, [r1]\n    mov r0, #0xc0\n    strh r0, [r1, #4]\n    pop {r4, r5, r6, pc}\n    cmp r3, #0\n    bne _02010E32\n    ldrh r4, [r0]\n    mov r3, #2\n    tst r3, r4\n    beq _02010E50\n    lsl r3, r1, #8\n    mov r1, #0xff\n    lsl r1, r1, #8\n    and r3, r1\n    lsl r1, r2, #0x18\n    lsr r1, r1, #0x18\n    orr r1, r3\n    strh r1, [r0, #0x3e]\n    mov r1, #0xc0\n    add r0, #0x42\n    strh r1, [r0]\n    pop {r4, r5, r6, pc}\n    ldrh r3, [r0]\n    mov r0, #2\n    tst r0, r3\n    beq _02010E50\n    mov r0, #0xff\n    lsl r1, r1, #8\n    lsl r0, r0, #8\n    and r1, r0\n    lsl r0, r2, #0x18\n    lsr r0, r0, #0x18\n    orr r0, r1\n    ldr r1, _02010E60 ; =0x04001042\n    strh r0, [r1]\n    mov r0, #0xc0\n    strh r0, [r1, #4]\n    pop {r4, r5, r6, pc}\n    nop\n    _02010E54: .word 0x04000006\n    _02010E58: .word 0x04000004\n    _02010E5C: .word 0x04001040\n    _02010E60: .word 0x04001042"
    );
    #endif
}

void sub_02010E64(void) {
    /* Original at 0x02010E64 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r6, r2, #0\n    cmp r4, #0\n    beq _02010E7A\n    cmp r4, #1\n    beq _02010E7A\n    cmp r4, #2\n    beq _02010E94\n    pop {r4, r5, r6, pc}\n    ldr r1, _02010EC0 ; =0x00000604\n    add r0, r3, #0\n    bl Heap_Alloc\n    str r0, [r5]\n    mov r0, #1\n    str r0, [r5, #4]\n    str r6, [r5, #8]\n    mov r0, #6\n    ldr r1, [r5]\n    lsl r0, r0, #8\n    str r4, [r1, r0]\n    pop {r4, r5, r6, pc}\n    ldr r1, _02010EC4 ; =0x00000C08\n    add r0, r3, #0\n    bl Heap_Alloc\n    str r0, [r5]\n    mov r0, #2\n    str r0, [r5, #4]\n    mov r0, #6\n    mov r3, #0\n    lsl r0, r0, #8\n    str r6, [r5, #8]\n    add r4, r3, #0\n    add r1, r0, #4\n    ldr r2, [r5]\n    add r2, r2, r4\n    str r3, [r2, r0]\n    add r3, r3, #1\n    add r4, r4, r1\n    cmp r3, #2\n    blt _02010EAE\n    pop {r4, r5, r6, pc}\n    nop\n    _02010EC0: .word 0x00000604\n    _02010EC4: .word 0x00000C08"
    );
    #endif
}

void sub_02010EC8(void) {
    sub_02010ED0();
}

void sub_02010ED0(void) {
    Heap_Free();
}

void sub_02010EE0(void) {
    GF_AssertFail();
}

void sub_02010F00(void) {
    /* Original at 0x02010F00 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r0, [sp]\n    ldr r0, [r5, #4]\n    mov r4, #0\n    cmp r0, #0\n    ble _02010F2C\n    mov r7, #3\n    lsl r7, r7, #8\n    add r6, r7, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02010EE0\n    add r1, r0, r6\n    add r2, r7, #0\n    bl memcpy\n    ldr r0, [r5, #4]\n    add r4, r4, #1\n    cmp r4, r0\n    blt _02010F14\n    ldr r0, [sp]\n    bl SysTask_Destroy\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02010F34(void) {
    /* Original at 0x02010F34 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r0, #0\n    bne _02010F4C\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02013424\n    add sp, #0xc\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02013424\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #0x3f\n    add r3, r2, #0\n    str r4, [sp]\n    bl sub_02013440\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    str r4, [sp, #8]\n    bl sub_02013488\n    add r0, r5, #0\n    mov r1, #0x20\n    mov r2, #0\n    add r3, r4, #0\n    bl sub_02013468\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void sub_02010F84(void) {
    /* Original at 0x02010F84 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r7, r2, #0\n    ldr r2, [sp, #0x34]\n    add r6, r0, #0\n    add r5, r3, #0\n    ldr r4, [sp, #0x20]\n    cmp r2, #0\n    bne _02010FC0\n    add r0, r1, #0\n    mov r1, #0\n    add r2, r5, #0\n    add r3, r4, #0\n    bl sub_02013220\n    add r0, r7, #0\n    mov r1, #0\n    add r2, r4, #0\n    bl sub_020132A8\n    str r5, [sp]\n    ldr r0, [sp, #0x24]\n    ldr r1, [sp, #0x28]\n    ldr r2, [sp, #0x2c]\n    ldr r3, [sp, #0x30]\n    str r4, [sp, #4]\n    bl sub_02013364\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    mov r2, #0\n    str r4, [sp]\n    bl sub_02013440\n    add r0, r6, #0\n    add r1, r7, #0\n    mov r2, #0\n    add r3, r4, #0\n    bl sub_02013468\n    ldr r0, [sp, #0x30]\n    ldr r1, [sp, #0x24]\n    str r0, [sp]\n    str r5, [sp, #4]\n    ldr r2, [sp, #0x28]\n    ldr r3, [sp, #0x2c]\n    add r0, r6, #0\n    str r4, [sp, #8]\n    bl sub_02013488\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02010FEC(void) {
    /* Original at 0x02010FEC */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r4, r2, #0\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    add r7, r3, #0\n    bl sub_020132E8\n    add r1, sp, #4\n    strb r0, [r1, #1]\n    ldrb r0, [r1, #1]\n    strb r0, [r1, #3]\n    add r0, r4, #0\n    bl sub_0201333C\n    add r1, sp, #4\n    strb r0, [r1]\n    ldrb r0, [r1]\n    cmp r7, #0\n    strb r0, [r1, #2]\n    bne _0201103E\n    ldrb r0, [r1, #2]\n    mov r1, #0\n    add r2, r5, #0\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1b\n    add r3, r4, #0\n    bl sub_02013220\n    add r0, sp, #4\n    ldrb r0, [r0, #3]\n    mov r1, #0\n    add r2, r4, #0\n    lsl r0, r0, #0x1b\n    lsr r0, r0, #0x1b\n    bl sub_020132A8\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    str r4, [sp]\n    ldrb r1, [r1, #2]\n    add r0, r6, #0\n    mov r2, #0\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1b\n    add r3, r5, #0\n    bl sub_02013440\n    add r1, sp, #4\n    ldrb r1, [r1, #3]\n    add r0, r6, #0\n    mov r2, #0\n    lsl r1, r1, #0x1b\n    lsr r1, r1, #0x1b\n    add r3, r4, #0\n    bl sub_02013468\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02011068(void) {
    /* Original at 0x02011068 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r3, #0\n    bne _02011078\n    add r0, r1, #0\n    add r1, r2, #0\n    bl sub_020131F4\n    pop {r3, pc}\n    bl sub_02013424\n    pop {r3, pc}"
    );
    #endif
}

void sub_02011080(void) {
    /* Original at 0x02011080 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    mov r2, #0xc3\n    add r6, r1, #0\n    mov r1, #0\n    lsl r2, r2, #2\n    add r5, r0, #0\n    add r7, r3, #0\n    bl memset\n    cmp r4, #1\n    bne _020110AA\n    mov r0, #6\n    lsl r0, r0, #6\n    str r7, [r5, r0]\n    mov r0, #0xc2\n    lsl r0, r0, #2\n    strb r4, [r5, r0]\n    add r0, r0, #1\n    strb r6, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #6\n    lsl r0, r0, #6\n    str r7, [r5, r0]\n    mov r0, #0xc1\n    ldr r1, [sp, #0x18]\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r1, r0, #4\n    strb r4, [r5, r1]\n    add r0, r0, #5\n    strb r6, [r5, r0]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020110C4(void) {
    /* Original at 0x020110C4 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _020110D0 ; =SysTask_CreateOnVWaitQueue\n    add r1, r0, #0\n    ldr r0, _020110D4 ; =sub_02011104\n    ldr r2, _020110D8 ; =0x000003FF\n    bx r3\n    nop\n    _020110D0: .word SysTask_CreateOnVWaitQueue\n    _020110D4: .word sub_02011104\n    _020110D8: .word 0x000003FF"
    );
    #endif
}

void sub_020110DC(void) {
    sub_0200FF88();
}

void sub_020110F4(void) {
    /* Original at 0x020110F4 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _020110FC ; =0x00000309\n    ldrb r1, [r1, r3]\n    ldr r3, _02011100 ; =sub_0200FFB4\n    bx r3\n    _020110FC: .word 0x00000309\n    _02011100: .word sub_0200FFB4"
    );
    #endif
}

void sub_02011104(void) {
    /* Original at 0x02011104 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r7, #0xc0\n    add r6, r7, #0\n    str r0, [sp]\n    add r5, r1, #0\n    mov r4, #0\n    add r6, #0xc4\n    add r0, r5, #0\n    add r0, #0xc0\n    add r1, r5, #0\n    add r2, r7, #0\n    bl memcpy\n    add r4, r4, #1\n    add r5, r5, r6\n    cmp r4, #2\n    blt _02011112\n    ldr r0, [sp]\n    bl SysTask_Destroy\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02011130(void) {
    /* Original at 0x02011130 */
    /* Requires manual decompilation - 642 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bne _0201113A\n    bl GF_AssertFail\n    ldr r0, _02011428 ; =0x04000006\n    ldrh r0, [r0]\n    cmp r0, #0xc0\n    bge _020111BC\n    add r0, r0, #1\n    cmp r0, #0xbf\n    ble _0201114A\n    sub r0, #0xc0\n    mov r2, #0xc2\n    lsl r2, r2, #2\n    ldrb r1, [r4, r2]\n    cmp r1, #1\n    beq _02011156\n    b _020112F0\n    add r0, r4, r0\n    add r0, #0xc0\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _02011226\n    add r0, r2, #1\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    ldr r0, _0201142C ; =0x04000004\n    bne _02011186\n    ldrh r2, [r0]\n    mov r1, #2\n    tst r1, r2\n    beq _020111A0\n    add r0, #0x46\n    ldrh r2, [r0]\n    mov r1, #0x3f\n    bic r2, r1\n    mov r1, #0x3f\n    orr r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    b _020111A0\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _020111A0\n    ldr r1, _02011430 ; =0x0400104A\n    mov r0, #0x3f\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #0x3f\n    orr r2, r0\n    mov r0, #0x20\n    orr r0, r2\n    strh r0, [r1]\n    ldr r0, _02011434 ; =0x00000309\n    ldrb r1, [r4, r0]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _020111EC\n    cmp r1, #0\n    bne _020111D0\n    ldr r2, _0201142C ; =0x04000004\n    mov r0, #2\n    ldrh r1, [r2]\n    tst r0, r1\n    bne _020111BE\n    b _02011634\n    add r2, #0x44\n    ldrh r1, [r2]\n    mov r0, #0x3f\n    bic r1, r0\n    mov r0, #0x20\n    orr r1, r0\n    orr r0, r1\n    strh r0, [r2]\n    pop {r3, r4, r5, pc}\n    ldr r0, _0201142C ; =0x04000004\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _020112D8\n    ldr r1, _02011438 ; =0x04001048\n    mov r0, #0x3f\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #0x20\n    orr r2, r0\n    orr r0, r2\n    strh r0, [r1]\n    pop {r3, r4, r5, pc}\n    cmp r1, #0\n    ldr r0, _0201142C ; =0x04000004\n    bne _0201120C\n    ldrh r1, [r0]\n    mov r2, #2\n    tst r1, r2\n    beq _020112D8\n    add r0, #0x44\n    ldrh r3, [r0]\n    ldr r1, _0201143C ; =0xFFFFC0FF\n    and r3, r1\n    lsl r1, r2, #0xc\n    orr r3, r1\n    orr r1, r3\n    strh r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _020112D8\n    ldr r2, _02011438 ; =0x04001048\n    ldr r0, _0201143C ; =0xFFFFC0FF\n    ldrh r1, [r2]\n    and r1, r0\n    lsr r0, r2, #0xd\n    orr r1, r0\n    orr r0, r1\n    strh r0, [r2]\n    pop {r3, r4, r5, pc}\n    add r0, r2, #1\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    ldr r0, _0201142C ; =0x04000004\n    bne _0201124A\n    ldrh r2, [r0]\n    mov r1, #2\n    tst r1, r2\n    beq _02011262\n    add r0, #0x46\n    ldrh r2, [r0]\n    mov r1, #0x3f\n    bic r2, r1\n    mov r1, #0x20\n    orr r2, r1\n    orr r1, r2\n    strh r1, [r0]\n    b _02011262\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _02011262\n    ldr r1, _02011430 ; =0x0400104A\n    mov r0, #0x3f\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #0x20\n    orr r2, r0\n    orr r0, r2\n    strh r0, [r1]\n    ldr r0, _02011434 ; =0x00000309\n    ldrb r1, [r4, r0]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    ldr r0, _0201142C ; =0x04000004\n    bne _020112AE\n    cmp r1, #0\n    bne _02011292\n    ldrh r2, [r0]\n    mov r1, #2\n    tst r1, r2\n    beq _020112D8\n    add r0, #0x44\n    ldrh r2, [r0]\n    mov r1, #0x3f\n    bic r2, r1\n    mov r1, #0x3f\n    orr r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _020112D8\n    ldr r1, _02011438 ; =0x04001048\n    mov r0, #0x3f\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #0x3f\n    orr r2, r0\n    mov r0, #0x20\n    orr r0, r2\n    strh r0, [r1]\n    pop {r3, r4, r5, pc}\n    cmp r1, #0\n    bne _020112D0\n    ldrh r1, [r0]\n    mov r2, #2\n    tst r1, r2\n    beq _020112D8\n    add r0, #0x44\n    ldrh r3, [r0]\n    ldr r1, _0201143C ; =0xFFFFC0FF\n    and r3, r1\n    mov r1, #0x3f\n    lsl r1, r1, #8\n    orr r3, r1\n    lsl r1, r2, #0xc\n    orr r1, r3\n    strh r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    bne _020112DA\n    b _02011634\n    ldr r2, _02011438 ; =0x04001048\n    ldr r0, _0201143C ; =0xFFFFC0FF\n    ldrh r1, [r2]\n    and r1, r0\n    mov r0, #0x3f\n    lsl r0, r0, #8\n    orr r1, r0\n    lsr r0, r2, #0xd\n    orr r0, r1\n    strh r0, [r2]\n    pop {r3, r4, r5, pc}\n    add r1, r4, r0\n    add r1, #0xc0\n    ldrb r1, [r1]\n    cmp r1, #0\n    bne _020113BC\n    add r1, r2, #1\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    ldr r1, _0201142C ; =0x04000004\n    bne _02011320\n    ldrh r3, [r1]\n    mov r2, #2\n    tst r2, r3\n    beq _0201133A\n    add r1, #0x46\n    ldrh r3, [r1]\n    mov r2, #0x3f\n    bic r3, r2\n    mov r2, #0x3f\n    orr r3, r2\n    mov r2, #0x20\n    orr r2, r3\n    strh r2, [r1]\n    b _0201133A\n    ldrh r2, [r1]\n    mov r1, #2\n    tst r1, r2\n    beq _0201133A\n    ldr r2, _02011430 ; =0x0400104A\n    mov r1, #0x3f\n    ldrh r3, [r2]\n    bic r3, r1\n    mov r1, #0x3f\n    orr r3, r1\n    mov r1, #0x20\n    orr r1, r3\n    strh r1, [r2]\n    ldr r1, _02011434 ; =0x00000309\n    ldrb r2, [r4, r1]\n    mov r1, #6\n    lsl r1, r1, #6\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    ldr r1, _0201142C ; =0x04000004\n    bne _02011382\n    cmp r2, #0\n    bne _02011368\n    ldrh r3, [r1]\n    mov r2, #2\n    tst r2, r3\n    beq _0201138E\n    add r1, #0x44\n    ldrh r3, [r1]\n    mov r2, #0x3f\n    bic r3, r2\n    mov r2, #0x20\n    orr r3, r2\n    orr r2, r3\n    strh r2, [r1]\n    b _0201149A\n    ldrh r2, [r1]\n    mov r1, #2\n    tst r1, r2\n    beq _0201138E\n    ldr r2, _02011438 ; =0x04001048\n    mov r1, #0x3f\n    ldrh r3, [r2]\n    bic r3, r1\n    mov r1, #0x20\n    orr r3, r1\n    orr r1, r3\n    strh r1, [r2]\n    b _0201149A\n    cmp r2, #0\n    bne _020113A2\n    ldrh r2, [r1]\n    mov r3, #2\n    tst r2, r3\n    bne _02011390\n    b _0201149A\n    add r1, #0x44\n    ldrh r5, [r1]\n    ldr r2, _0201143C ; =0xFFFFC0FF\n    and r5, r2\n    lsl r2, r3, #0xc\n    orr r5, r2\n    orr r2, r5\n    strh r2, [r1]\n    b _0201149A\n    ldrh r2, [r1]\n    mov r1, #2\n    tst r1, r2\n    beq _0201149A\n    ldr r3, _02011438 ; =0x04001048\n    ldr r1, _0201143C ; =0xFFFFC0FF\n    ldrh r2, [r3]\n    and r2, r1\n    lsr r1, r3, #0xd\n    orr r2, r1\n    orr r1, r2\n    strh r1, [r3]\n    b _0201149A\n    add r1, r2, #1\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    ldr r1, _0201142C ; =0x04000004\n    bne _020113E0\n    ldrh r3, [r1]\n    mov r2, #2\n    tst r2, r3\n    beq _020113F8\n    add r1, #0x46\n    ldrh r3, [r1]\n    mov r2, #0x3f\n    bic r3, r2\n    mov r2, #0x20\n    orr r3, r2\n    orr r2, r3\n    strh r2, [r1]\n    b _020113F8\n    ldrh r2, [r1]\n    mov r1, #2\n    tst r1, r2\n    beq _020113F8\n    ldr r2, _02011430 ; =0x0400104A\n    mov r1, #0x3f\n    ldrh r3, [r2]\n    bic r3, r1\n    mov r1, #0x20\n    orr r3, r1\n    orr r1, r3\n    strh r1, [r2]\n    ldr r1, _02011434 ; =0x00000309\n    ldrb r2, [r4, r1]\n    mov r1, #6\n    lsl r1, r1, #6\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    ldr r1, _0201142C ; =0x04000004\n    bne _0201145C\n    cmp r2, #0\n    bne _02011440\n    ldrh r3, [r1]\n    mov r2, #2\n    tst r2, r3\n    beq _0201149A\n    add r1, #0x44\n    ldrh r3, [r1]\n    mov r2, #0x3f\n    bic r3, r2\n    mov r2, #0x3f\n    orr r3, r2\n    mov r2, #0x20\n    orr r2, r3\n    strh r2, [r1]\n    b _0201149A\n    _02011428: .word 0x04000006\n    _0201142C: .word 0x04000004\n    _02011430: .word 0x0400104A\n    _02011434: .word 0x00000309\n    _02011438: .word 0x04001048\n    _0201143C: .word 0xFFFFC0FF\n    ldrh r2, [r1]\n    mov r1, #2\n    tst r1, r2\n    beq _0201149A\n    ldr r2, _02011638 ; =0x04001048\n    mov r1, #0x3f\n    ldrh r3, [r2]\n    bic r3, r1\n    mov r1, #0x3f\n    orr r3, r1\n    mov r1, #0x20\n    orr r1, r3\n    strh r1, [r2]\n    b _0201149A\n    cmp r2, #0\n    bne _0201147E\n    ldrh r2, [r1]\n    mov r3, #2\n    tst r2, r3\n    beq _0201149A\n    add r1, #0x44\n    ldrh r5, [r1]\n    ldr r2, _0201163C ; =0xFFFFC0FF\n    and r5, r2\n    mov r2, #0x3f\n    lsl r2, r2, #8\n    orr r5, r2\n    lsl r2, r3, #0xc\n    orr r2, r5\n    strh r2, [r1]\n    b _0201149A\n    ldrh r2, [r1]\n    mov r1, #2\n    tst r1, r2\n    beq _0201149A\n    ldr r3, _02011638 ; =0x04001048\n    ldr r1, _0201163C ; =0xFFFFC0FF\n    ldrh r2, [r3]\n    and r2, r1\n    mov r1, #0x3f\n    lsl r1, r1, #8\n    orr r2, r1\n    lsr r1, r3, #0xd\n    orr r1, r2\n    strh r1, [r3]\n    mov r1, #0x61\n    lsl r1, r1, #2\n    add r1, r4, r1\n    add r0, r1, r0\n    add r0, #0xc0\n    ldrb r0, [r0]\n    cmp r0, #0\n    ldr r0, _02011640 ; =0x00000309\n    bne _02011570\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    ldr r0, _02011644 ; =0x04000004\n    bne _020114D0\n    ldrh r3, [r0]\n    mov r2, #2\n    tst r2, r3\n    beq _020114EA\n    add r0, #0x46\n    ldrh r3, [r0]\n    mov r2, #0x3f\n    bic r3, r2\n    mov r2, #0x3f\n    orr r3, r2\n    mov r2, #0x20\n    orr r2, r3\n    strh r2, [r0]\n    b _020114EA\n    ldrh r2, [r0]\n    mov r0, #2\n    tst r0, r2\n    beq _020114EA\n    ldr r2, _02011648 ; =0x0400104A\n    mov r0, #0x3f\n    ldrh r3, [r2]\n    bic r3, r0\n    mov r0, #0x3f\n    orr r3, r0\n    mov r0, #0x20\n    orr r0, r3\n    strh r0, [r2]\n    ldr r0, _02011640 ; =0x00000309\n    ldrb r2, [r4, r0]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _02011536\n    cmp r2, #0\n    bne _02011518\n    ldr r2, _02011644 ; =0x04000004\n    mov r0, #2\n    ldrh r1, [r2]\n    tst r0, r1\n    beq _02011522\n    add r2, #0x44\n    ldrh r1, [r2]\n    mov r0, #0x3f\n    bic r1, r0\n    mov r0, #0x20\n    orr r1, r0\n    orr r0, r1\n    strh r0, [r2]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02011644 ; =0x04000004\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    bne _02011524\n    b _02011634\n    ldr r1, _02011638 ; =0x04001048\n    mov r0, #0x3f\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #0x20\n    orr r2, r0\n    orr r0, r2\n    strh r0, [r1]\n    pop {r3, r4, r5, pc}\n    cmp r2, #0\n    ldr r0, _02011644 ; =0x04000004\n    bne _02011556\n    ldrh r1, [r0]\n    mov r2, #2\n    tst r1, r2\n    beq _02011634\n    add r0, #0x44\n    ldrh r3, [r0]\n    ldr r1, _0201163C ; =0xFFFFC0FF\n    and r3, r1\n    lsl r1, r2, #0xc\n    orr r3, r1\n    orr r1, r3\n    strh r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _02011634\n    ldr r2, _02011638 ; =0x04001048\n    ldr r0, _0201163C ; =0xFFFFC0FF\n    ldrh r1, [r2]\n    and r1, r0\n    lsr r0, r2, #0xd\n    orr r1, r0\n    orr r0, r1\n    strh r0, [r2]\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    ldr r0, _02011644 ; =0x04000004\n    bne _02011592\n    ldrh r3, [r0]\n    mov r2, #2\n    tst r2, r3\n    beq _020115AA\n    add r0, #0x46\n    ldrh r3, [r0]\n    mov r2, #0x3f\n    bic r3, r2\n    mov r2, #0x20\n    orr r3, r2\n    orr r2, r3\n    strh r2, [r0]\n    b _020115AA\n    ldrh r2, [r0]\n    mov r0, #2\n    tst r0, r2\n    beq _020115AA\n    ldr r2, _02011648 ; =0x0400104A\n    mov r0, #0x3f\n    ldrh r3, [r2]\n    bic r3, r0\n    mov r0, #0x20\n    orr r3, r0\n    orr r0, r3\n    strh r0, [r2]\n    ldr r0, _02011640 ; =0x00000309\n    ldrb r2, [r4, r0]\n    mov r0, #6\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    ldr r0, _02011644 ; =0x04000004\n    bne _020115F6\n    cmp r2, #0\n    bne _020115DA\n    ldrh r2, [r0]\n    mov r1, #2\n    tst r1, r2\n    beq _02011634\n    add r0, #0x44\n    ldrh r2, [r0]\n    mov r1, #0x3f\n    bic r2, r1\n    mov r1, #0x3f\n    orr r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _02011634\n    ldr r1, _02011638 ; =0x04001048\n    mov r0, #0x3f\n    ldrh r2, [r1]\n    bic r2, r0\n    mov r0, #0x3f\n    orr r2, r0\n    mov r0, #0x20\n    orr r0, r2\n    strh r0, [r1]\n    pop {r3, r4, r5, pc}\n    cmp r2, #0\n    bne _02011618\n    ldrh r1, [r0]\n    mov r2, #2\n    tst r1, r2\n    beq _02011634\n    add r0, #0x44\n    ldrh r3, [r0]\n    ldr r1, _0201163C ; =0xFFFFC0FF\n    and r3, r1\n    mov r1, #0x3f\n    lsl r1, r1, #8\n    orr r3, r1\n    lsl r1, r2, #0xc\n    orr r1, r3\n    strh r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldrh r1, [r0]\n    mov r0, #2\n    tst r0, r1\n    beq _02011634\n    ldr r2, _02011638 ; =0x04001048\n    ldr r0, _0201163C ; =0xFFFFC0FF\n    ldrh r1, [r2]\n    and r1, r0\n    mov r0, #0x3f\n    lsl r0, r0, #8\n    orr r1, r0\n    lsr r0, r2, #0xd\n    orr r0, r1\n    strh r0, [r2]\n    pop {r3, r4, r5, pc}\n    nop\n    _02011638: .word 0x04001048\n    _0201163C: .word 0xFFFFC0FF\n    _02011640: .word 0x00000309\n    _02011644: .word 0x04000004\n    _02011648: .word 0x0400104A"
    );
    #endif
}

void sub_0201164C(void) {
    /* Original at 0x0201164C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r6, r1, #0\n    mov r1, #0x4c\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    add r4, r0, #0\n    ldr r0, [r5, #0x10]\n    add r1, r6, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    add r0, r4, #0\n    bl sub_020117A0\n    ldrb r0, [r6, #8]\n    cmp r0, #0\n    ldr r0, [r5, #0x18]\n    bne _02011688\n    ldr r2, [r4, #0x30]\n    ldr r3, [r4, #0x44]\n    mov r1, #1\n    bl sub_02011068\n    b _02011692\n    ldr r2, [r4, #0x30]\n    ldr r3, [r4, #0x44]\n    mov r1, #2\n    bl sub_02011068\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0201169C(void) {
    /* Original at 0x0201169C */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    ldr r4, [r5, #0x14]\n    cmp r0, #1\n    beq _020116B4\n    cmp r0, #2\n    beq _020116D0\n    cmp r0, #3\n    beq _020116E4\n    b _020116E6\n    add r0, r4, #0\n    bl sub_020117FC\n    cmp r0, #1\n    bne _020116E6\n    ldr r0, [r4, #0x44]\n    ldr r1, [r5, #0x18]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _020116E6\n    add r0, r4, #0\n    bl Heap_Free\n    add r0, r6, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r6, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _020116E6\n    mov r6, #1\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020116EC(void) {
    /* Original at 0x020116EC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r6, r1, #0\n    mov r1, #0x98\n    add r7, r2, #0\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    add r4, r0, #0\n    ldr r0, [r5, #0x10]\n    add r1, r6, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    add r0, r4, #0\n    bl sub_020117A0\n    ldr r0, [r5, #0x10]\n    add r1, r7, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    add r0, r4, #0\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    add r0, #0x4c\n    bl sub_020117A0\n    ldr r0, [r5, #0x18]\n    ldr r2, [r5, #0x10]\n    ldr r3, [r4, #0x44]\n    mov r1, #3\n    bl sub_02011068\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02011744(void) {
    /* Original at 0x02011744 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r7, #0\n    ldr r6, [r5, #0x14]\n    cmp r0, #1\n    beq _0201175C\n    cmp r0, #2\n    beq _02011784\n    cmp r0, #3\n    beq _02011798\n    b _0201179A\n    add r0, r6, #0\n    bl sub_020117FC\n    add r4, r0, #0\n    add r0, r6, #0\n    add r0, #0x4c\n    bl sub_020117FC\n    add r0, r4, r0\n    cmp r0, #2\n    bne _0201179A\n    ldr r0, [r6, #0x44]\n    ldr r1, [r5, #0x18]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _0201179A\n    add r0, r6, #0\n    bl Heap_Free\n    add r0, r7, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r7, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _0201179A\n    mov r7, #1\n    add r0, r7, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020117A0(void) {
    /* Original at 0x020117A0 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r4, r1, #0\n    add r1, r4, #4\n    add r5, r0, #0\n    add r6, r2, #0\n    str r1, [sp]\n    add r1, r5, #0\n    add r2, r5, #0\n    add r7, r3, #0\n    add r1, #0x20\n    add r2, #0x10\n    add r3, r4, #0\n    str r6, [sp, #4]\n    bl sub_02010AB0\n    ldr r1, [sp, #0x30]\n    str r1, [r5, #0x30]\n    ldrb r0, [r4, #8]\n    str r0, [r5, #0x34]\n    str r6, [r5, #0x38]\n    str r7, [r5, #0x3c]\n    mov r0, #0\n    str r0, [r5, #0x40]\n    ldr r0, [sp, #0x34]\n    str r0, [r5, #0x48]\n    ldrb r2, [r4, #0xb]\n    str r2, [r5, #0x44]\n    str r1, [sp]\n    ldrb r1, [r4]\n    str r1, [sp, #4]\n    ldrb r1, [r4, #1]\n    str r1, [sp, #8]\n    ldrb r1, [r4, #2]\n    str r1, [sp, #0xc]\n    ldrb r1, [r4, #3]\n    str r1, [sp, #0x10]\n    ldr r1, [r5, #0x44]\n    str r1, [sp, #0x14]\n    ldrb r1, [r4, #9]\n    ldrb r2, [r4, #0xa]\n    ldrb r3, [r4, #8]\n    bl sub_02010F84\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_020117FC(void) {
    /* Original at 0x020117FC */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r1, [r4, #0x40]\n    add r2, r1, #1\n    str r2, [r4, #0x40]\n    ldr r1, [r4, #0x3c]\n    cmp r2, r1\n    blt _0201187C\n    mov r1, #0\n    str r1, [r4, #0x40]\n    ldr r1, [r4, #0x38]\n    sub r1, r1, #1\n    cmp r1, #0\n    ble _02011826\n    str r1, [r4, #0x38]\n    add r1, r4, #0\n    add r1, #0x10\n    bl sub_02010A8C\n    b _02011844\n    ldr r0, [r4, #0x2c]\n    str r0, [sp]\n    ldr r0, [r4, #0x34]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x30]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x48]\n    ldr r1, [r4, #0x20]\n    ldr r2, [r4, #0x24]\n    ldr r3, [r4, #0x28]\n    bl sub_02013488\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    ldr r1, [r4, #0xc]\n    asr r0, r1, #6\n    lsr r0, r0, #0x19\n    add r0, r1, r0\n    asr r0, r0, #7\n    str r0, [sp]\n    ldr r0, [r4, #0x34]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x30]\n    str r0, [sp, #8]\n    ldr r2, [r4]\n    ldr r3, [r4, #4]\n    asr r1, r2, #6\n    lsr r1, r1, #0x19\n    add r1, r2, r1\n    ldr r0, [r4, #0x48]\n    asr r2, r3, #6\n    lsr r2, r2, #0x19\n    add r2, r3, r2\n    ldr r4, [r4, #8]\n    asr r1, r1, #7\n    asr r3, r4, #6\n    lsr r3, r3, #0x19\n    add r3, r4, r3\n    asr r2, r2, #7\n    asr r3, r3, #7\n    bl sub_02013488\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_02011884(void) {
    /* Original at 0x02011884 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r4, r1, #0\n    mov r1, #0x38\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    bl sub_02011918\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020118BC(void) {
    /* Original at 0x020118BC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    ldr r4, [r5, #0x14]\n    cmp r0, #1\n    beq _020118D4\n    cmp r0, #2\n    beq _020118F0\n    cmp r0, #3\n    beq _0201190A\n    b _0201190E\n    add r0, r4, #0\n    bl sub_020119F4\n    cmp r0, #1\n    bne _02011912\n    ldr r0, [r4, #0x2c]\n    ldr r1, [r4, #0x30]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02011912\n    add r0, r4, #0\n    bl sub_02010EC8\n    ldr r0, [r5, #0x14]\n    bl Heap_Free\n    add r0, r6, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r6, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02011912\n    mov r6, #1\n    b _02011912\n    bl GF_AssertFail\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02011918(void) {
    /* Original at 0x02011918 */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0\n    mov r1, #2\n    ldrsh r0, [r4, r0]\n    ldrsh r1, [r4, r1]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    ldr r6, [sp, #0x38]\n    ldr r7, [sp, #0x3c]\n    bl sub_02010A6C\n    str r0, [sp, #0x20]\n    ldrb r1, [r4, #8]\n    ldr r3, [sp, #0x44]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl sub_02010E64\n    mov r0, #0\n    ldrsh r1, [r4, r0]\n    lsl r1, r1, #7\n    str r1, [r5, #0xc]\n    mov r1, #4\n    ldrsh r1, [r4, r1]\n    str r1, [r5, #0x10]\n    mov r1, #6\n    ldrsh r1, [r4, r1]\n    str r1, [r5, #0x14]\n    ldr r1, [sp, #0x20]\n    str r1, [r5, #0x18]\n    ldr r1, [sp, #0x18]\n    str r1, [r5, #0x1c]\n    ldr r1, [sp, #0x1c]\n    str r1, [r5, #0x20]\n    str r0, [r5, #0x24]\n    ldr r0, [sp, #0x40]\n    str r7, [r5, #0x30]\n    str r0, [r5, #0x34]\n    ldr r0, [sp, #0x44]\n    str r0, [r5, #0x28]\n    ldrb r0, [r4, #0xb]\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    bl sub_02011AD8\n    ldr r0, _020119E8 ; =sub_02010F00\n    ldr r2, _020119EC ; =0x000003FF\n    add r1, r5, #0\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02010EE0\n    mov r1, #3\n    str r6, [sp]\n    lsl r1, r1, #8\n    ldrsh r1, [r0, r1]\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #0x12\n    lsl r1, r1, #6\n    ldrsh r0, [r0, r1]\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x2c]\n    str r0, [sp, #0x14]\n    ldrb r1, [r4, #9]\n    ldrb r2, [r4, #0xa]\n    ldrb r3, [r4, #8]\n    add r0, r7, #0\n    bl sub_02010F84\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    bne _020119C8\n    ldr r3, [r5, #0x2c]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, r6, #0\n    bl sub_02011068\n    b _020119D4\n    ldr r3, [r5, #0x2c]\n    add r0, r7, #0\n    mov r1, #2\n    add r2, r6, #0\n    bl sub_02011068\n    ldr r0, [sp, #0x44]\n    ldr r2, _020119F0 ; =sub_02010C38\n    str r0, [sp]\n    ldr r0, [r5, #0x34]\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_0200FF88\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _020119E8: .word sub_02010F00\n    _020119EC: .word 0x000003FF\n    _020119F0: .word sub_02010C38"
    );
    #endif
}

void sub_020119F4(void) {
    /* Original at 0x020119F4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x24]\n    add r2, r1, #1\n    str r2, [r4, #0x24]\n    ldr r1, [r4, #0x20]\n    cmp r2, r1\n    blt _02011A38\n    mov r1, #0\n    str r1, [r4, #0x24]\n    ldr r1, [r4, #0x1c]\n    sub r1, r1, #1\n    cmp r1, #0\n    ble _02011A2A\n    str r1, [r4, #0x1c]\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #0x18]\n    add r1, r2, r1\n    str r1, [r4, #0xc]\n    bl sub_02011AD8\n    ldr r0, _02011A3C ; =sub_02010F00\n    ldr r2, _02011A40 ; =0x000003FF\n    add r1, r4, #0\n    bl SysTask_CreateOnVWaitQueue\n    b _02011A38\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0x28]\n    bl sub_0200FFB4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _02011A3C: .word sub_02010F00\n    _02011A40: .word 0x000003FF"
    );
    #endif
}

void sub_02011A44(void) {
    /* Original at 0x02011A44 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r1, [sp]\n    asr r1, r0, #6\n    lsr r1, r1, #0x19\n    add r1, r0, r1\n    asr r1, r1, #7\n    ldr r5, [sp, #0x20]\n    ldr r4, [sp, #0x24]\n    sub r0, r3, r2\n    bpl _02011A5C\n    neg r0, r0\n    cmp r0, r1\n    blt _02011A6A\n    mov r0, #0\n    str r0, [r5]\n    add sp, #0xc\n    str r0, [r4]\n    pop {r4, r5, r6, r7, pc}\n    lsl r0, r0, #0xc\n    str r0, [sp, #4]\n    asr r7, r0, #0x1f\n    lsl r0, r1, #0xc\n    asr r1, r0, #0x1f\n    add r2, r0, #0\n    add r3, r1, #0\n    bl _ll_mul\n    str r0, [sp, #8]\n    ldr r0, [sp, #4]\n    add r6, r1, #0\n    add r1, r7, #0\n    add r2, r0, #0\n    add r3, r7, #0\n    bl _ll_mul\n    add r2, r0, #0\n    add r3, r1, #0\n    mov r0, #2\n    ldr r1, [sp, #8]\n    mov r7, #0\n    lsl r0, r0, #0xa\n    add r0, r1, r0\n    adc r6, r7\n    lsl r1, r6, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    mov r1, #2\n    lsl r1, r1, #0xa\n    add r2, r2, r1\n    adc r3, r7\n    lsl r1, r3, #0x14\n    lsr r2, r2, #0xc\n    orr r2, r1\n    sub r0, r0, r2\n    bl FX_Sqrt\n    asr r2, r0, #0xc\n    ldr r0, [sp]\n    sub r0, r0, r2\n    str r0, [r5]\n    bpl _02011AC4\n    add r0, r7, #0\n    str r0, [r5]\n    ldr r1, [r5]\n    lsl r0, r2, #1\n    add r0, r1, r0\n    str r0, [r4]\n    cmp r0, #0xff\n    ble _02011AD4\n    mov r0, #0xff\n    str r0, [r4]\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02011AD8(void) {
    /* Original at 0x02011AD8 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    mov r1, #0\n    add r5, r0, #0\n    bl sub_02010EE0\n    add r7, r0, #0\n    mov r4, #0\n    add r6, r7, #0\n    ldr r2, [r5, #0x14]\n    cmp r4, r2\n    bgt _02011B04\n    add r0, sp, #0xc\n    str r0, [sp]\n    add r0, sp, #8\n    str r0, [sp, #4]\n    ldr r0, [r5, #0xc]\n    ldr r1, [r5, #0x10]\n    add r3, r4, #0\n    bl sub_02011A44\n    b _02011B3E\n    lsl r0, r2, #1\n    cmp r4, r0\n    bgt _02011B2C\n    sub r0, r0, r4\n    lsl r0, r0, #1\n    add r1, r7, r0\n    mov r0, #3\n    lsl r0, r0, #8\n    ldrsh r0, [r1, r0]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    lsl r0, r0, #1\n    sub r0, r0, r4\n    lsl r0, r0, #1\n    add r1, r7, r0\n    mov r0, #0x12\n    lsl r0, r0, #6\n    ldrsh r0, [r1, r0]\n    str r0, [sp, #8]\n    b _02011B3E\n    add r0, sp, #0xc\n    str r0, [sp]\n    add r0, sp, #8\n    str r0, [sp, #4]\n    ldr r0, [r5, #0xc]\n    ldr r1, [r5, #0x10]\n    add r3, r4, #0\n    bl sub_02011A44\n    mov r0, #3\n    ldr r1, [sp, #0xc]\n    lsl r0, r0, #8\n    strh r1, [r6, r0]\n    mov r0, #0x12\n    ldr r1, [sp, #8]\n    lsl r0, r0, #6\n    strh r1, [r6, r0]\n    add r4, r4, #1\n    add r6, r6, #2\n    cmp r4, #0xc0\n    blt _02011AEA\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02011B5C(void) {
    /* Original at 0x02011B5C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r4, r1, #0\n    mov r1, #0x30\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    bl sub_02011BF0\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02011B94(void) {
    /* Original at 0x02011B94 */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    ldr r4, [r5, #0x14]\n    cmp r0, #1\n    beq _02011BAC\n    cmp r0, #2\n    beq _02011BC8\n    cmp r0, #3\n    beq _02011BE2\n    b _02011BE6\n    add r0, r4, #0\n    bl sub_02011CB8\n    cmp r0, #1\n    bne _02011BEA\n    ldr r0, [r4, #0x20]\n    ldr r1, [r4, #0x24]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02011BEA\n    add r0, r4, #0\n    bl sub_02010EC8\n    ldr r0, [r5, #0x14]\n    bl Heap_Free\n    add r0, r6, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r6, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02011BEA\n    mov r6, #1\n    b _02011BEA\n    bl GF_AssertFail\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02011BF0(void) {
    /* Original at 0x02011BF0 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrh r0, [r4]\n    ldrh r1, [r4, #2]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    ldr r6, [sp, #0x38]\n    ldr r7, [sp, #0x3c]\n    bl sub_02010A6C\n    str r0, [r5, #0x10]\n    ldrb r1, [r4, #4]\n    ldr r3, [sp, #0x44]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl sub_02010E64\n    ldrh r0, [r4]\n    lsl r0, r0, #7\n    str r0, [r5, #0xc]\n    ldr r0, [sp, #0x18]\n    str r0, [r5, #0x14]\n    ldr r0, [sp, #0x1c]\n    str r0, [r5, #0x18]\n    mov r0, #0\n    str r0, [r5, #0x1c]\n    ldr r0, [sp, #0x40]\n    str r7, [r5, #0x24]\n    str r0, [r5, #0x28]\n    ldr r0, [sp, #0x44]\n    str r0, [r5, #0x2c]\n    ldrb r0, [r4, #7]\n    str r0, [r5, #0x20]\n    add r0, r5, #0\n    bl sub_02011D08\n    ldr r0, _02011CAC ; =sub_02010F00\n    ldr r2, _02011CB0 ; =0x000003FF\n    add r1, r5, #0\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02010EE0\n    mov r1, #3\n    str r6, [sp]\n    lsl r1, r1, #8\n    ldrsh r1, [r0, r1]\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #0x12\n    lsl r1, r1, #6\n    ldrsh r0, [r0, r1]\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0x14]\n    ldrb r1, [r4, #5]\n    ldrb r2, [r4, #6]\n    ldrb r3, [r4, #4]\n    add r0, r7, #0\n    bl sub_02010F84\n    ldrb r0, [r4, #4]\n    cmp r0, #0\n    bne _02011C8C\n    ldr r3, [r5, #0x20]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, r6, #0\n    bl sub_02011068\n    b _02011C98\n    ldr r3, [r5, #0x20]\n    add r0, r7, #0\n    mov r1, #2\n    add r2, r6, #0\n    bl sub_02011068\n    ldr r0, [sp, #0x44]\n    ldr r2, _02011CB4 ; =sub_02010C38\n    str r0, [sp]\n    ldr r0, [r5, #0x28]\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_0200FF88\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02011CAC: .word sub_02010F00\n    _02011CB0: .word 0x000003FF\n    _02011CB4: .word sub_02010C38"
    );
    #endif
}

void sub_02011CB8(void) {
    /* Original at 0x02011CB8 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x1c]\n    add r2, r1, #1\n    str r2, [r4, #0x1c]\n    ldr r1, [r4, #0x18]\n    cmp r2, r1\n    blt _02011CFC\n    mov r1, #0\n    str r1, [r4, #0x1c]\n    ldr r1, [r4, #0x14]\n    sub r1, r1, #1\n    cmp r1, #0\n    ble _02011CEE\n    str r1, [r4, #0x14]\n    ldr r2, [r4, #0xc]\n    ldr r1, [r4, #0x10]\n    add r1, r2, r1\n    str r1, [r4, #0xc]\n    bl sub_02011D08\n    ldr r0, _02011D00 ; =sub_02010F00\n    ldr r2, _02011D04 ; =0x000003FF\n    add r1, r4, #0\n    bl SysTask_CreateOnVWaitQueue\n    b _02011CFC\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0x2c]\n    bl sub_0200FFB4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _02011D00: .word sub_02010F00\n    _02011D04: .word 0x000003FF"
    );
    #endif
}

void sub_02011D08(void) {
    /* Original at 0x02011D08 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0x104\n    add r4, r0, #0\n    mov r1, #0\n    bl sub_02010EE0\n    ldr r1, [r4, #0xc]\n    add r5, r0, #0\n    asr r0, r1, #6\n    lsr r0, r0, #0x19\n    add r0, r1, r0\n    asr r0, r0, #7\n    add r1, sp, #0\n    mov r2, #0xc0\n    mov r3, #0\n    bl sub_02010A00\n    mov r7, #0x12\n    mov r6, #0\n    add r4, sp, #0\n    lsl r7, r7, #6\n    ldr r1, [r4]\n    mov r0, #0x80\n    neg r1, r1\n    bl sub_02010A7C\n    mov r1, #3\n    lsl r1, r1, #8\n    strh r0, [r5, r1]\n    ldr r1, [r4]\n    mov r0, #0x80\n    bl sub_02010A7C\n    strh r0, [r5, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #2\n    cmp r6, #0xc0\n    blt _02011D34\n    add sp, #0x1fc\n    add sp, #0x104\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02011D60(void) {
    /* Original at 0x02011D60 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r4, r1, #0\n    mov r1, #0x34\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    bl sub_02011DEC\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02011D98(void) {
    /* Original at 0x02011D98 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    ldr r4, [r5, #0x14]\n    cmp r0, #1\n    beq _02011DB0\n    cmp r0, #2\n    beq _02011DCC\n    cmp r0, #3\n    beq _02011DE6\n    b _02011DE8\n    add r0, r4, #0\n    bl sub_02011EC0\n    cmp r0, #1\n    bne _02011DE8\n    ldr r0, [r4, #0x24]\n    ldr r1, [r4, #0x28]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02011DE8\n    add r0, r4, #0\n    bl sub_02010EC8\n    ldr r0, [r5, #0x14]\n    bl Heap_Free\n    add r0, r6, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r6, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02011DE8\n    mov r6, #1\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02011DEC(void) {
    /* Original at 0x02011DEC */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r1, #0\n    add r5, r0, #0\n    ldrh r1, [r4, #2]\n    ldrh r0, [r4]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    sub r0, r1, r0\n    add r1, r2, #0\n    ldr r6, [sp, #0x38]\n    ldr r7, [sp, #0x3c]\n    bl _s32_div_f\n    str r0, [sp, #0x20]\n    ldrb r1, [r4, #4]\n    ldr r3, [sp, #0x44]\n    add r0, r5, #0\n    add r2, r6, #0\n    bl sub_02010E64\n    mov r0, #2\n    lsl r0, r0, #0x12\n    str r0, [r5, #0xc]\n    ldrh r0, [r4]\n    str r0, [r5, #0x10]\n    ldr r0, [sp, #0x20]\n    str r0, [r5, #0x14]\n    ldr r0, [sp, #0x18]\n    str r0, [r5, #0x18]\n    ldr r0, [sp, #0x1c]\n    str r0, [r5, #0x1c]\n    mov r0, #0\n    str r0, [r5, #0x20]\n    ldr r0, [sp, #0x40]\n    str r7, [r5, #0x28]\n    str r0, [r5, #0x2c]\n    ldr r0, [sp, #0x44]\n    str r0, [r5, #0x30]\n    ldrb r0, [r4, #7]\n    str r0, [r5, #0x24]\n    add r0, r5, #0\n    bl sub_02011F10\n    ldr r0, _02011EB4 ; =sub_02010F00\n    ldr r2, _02011EB8 ; =0x000003FF\n    add r1, r5, #0\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02010EE0\n    mov r1, #0xf\n    str r6, [sp]\n    lsl r1, r1, #6\n    ldrsh r1, [r0, r1]\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #0x15\n    lsl r1, r1, #6\n    ldrsh r0, [r0, r1]\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x24]\n    str r0, [sp, #0x14]\n    ldrb r1, [r4, #5]\n    ldrb r2, [r4, #6]\n    ldrb r3, [r4, #4]\n    add r0, r7, #0\n    bl sub_02010F84\n    ldrb r0, [r4, #4]\n    cmp r0, #0\n    bne _02011E94\n    ldr r3, [r5, #0x24]\n    add r0, r7, #0\n    mov r1, #1\n    add r2, r6, #0\n    bl sub_02011068\n    b _02011EA0\n    ldr r3, [r5, #0x24]\n    add r0, r7, #0\n    mov r1, #2\n    add r2, r6, #0\n    bl sub_02011068\n    ldr r0, [sp, #0x44]\n    ldr r2, _02011EBC ; =sub_02010C38\n    str r0, [sp]\n    ldr r0, [r5, #0x2c]\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_0200FF88\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _02011EB4: .word sub_02010F00\n    _02011EB8: .word 0x000003FF\n    _02011EBC: .word sub_02010C38"
    );
    #endif
}

void sub_02011EC0(void) {
    /* Original at 0x02011EC0 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x20]\n    add r2, r1, #1\n    str r2, [r4, #0x20]\n    ldr r1, [r4, #0x1c]\n    cmp r2, r1\n    blt _02011F04\n    mov r1, #0\n    str r1, [r4, #0x20]\n    ldr r1, [r4, #0x18]\n    sub r1, r1, #1\n    cmp r1, #0\n    ble _02011EF6\n    str r1, [r4, #0x18]\n    ldr r2, [r4, #0x10]\n    ldr r1, [r4, #0x14]\n    add r1, r2, r1\n    str r1, [r4, #0x10]\n    bl sub_02011F10\n    ldr r0, _02011F08 ; =sub_02010F00\n    ldr r2, _02011F0C ; =0x000003FF\n    add r1, r4, #0\n    bl SysTask_CreateOnVWaitQueue\n    b _02011F04\n    ldr r0, [r4, #0x2c]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0x30]\n    bl sub_0200FFB4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _02011F08: .word sub_02010F00\n    _02011F0C: .word 0x000003FF"
    );
    #endif
}

void sub_02011F10(void) {
    /* Original at 0x02011F10 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1fc\n    sub sp, #0x110\n    add r4, r0, #0\n    mov r1, #0\n    bl sub_02010EE0\n    str r0, [sp]\n    ldr r0, [r4, #0x10]\n    ldr r2, [r4, #0xc]\n    asr r0, r0, #4\n    lsl r1, r0, #2\n    ldr r0, _02011FF0 ; =FX_SinCosTable_\n    asr r3, r2, #0x1f\n    ldrsh r0, [r0, r1]\n    asr r1, r0, #0x1f\n    bl _ll_mul\n    mov r2, #2\n    mov r3, #0\n    lsl r2, r2, #0xa\n    add r2, r0, r2\n    adc r1, r3\n    lsl r0, r1, #0x14\n    lsr r1, r2, #0xc\n    orr r1, r0\n    asr r7, r1, #0xc\n    lsl r0, r7, #1\n    mov r1, #0x15\n    bl _s32_div_f\n    add r0, r0, #1\n    lsl r0, r0, #1\n    mov r1, #0xb4\n    sub r2, r1, r0\n    ldr r0, _02011FF4 ; =0x0000FFFF\n    add r1, #0xb4\n    mul r0, r2\n    bl _s32_div_f\n    lsr r1, r0, #0x1f\n    add r1, r0, r1\n    asr r4, r1, #1\n    mov r1, #1\n    add r0, r4, #0\n    lsl r1, r1, #8\n    bl sub_02010A54\n    asr r0, r0, #0xc\n    str r0, [sp, #4]\n    cmp r0, #0xc0\n    blt _02011F7C\n    bl GF_AssertFail\n    ldr r2, [sp, #4]\n    add r0, r4, #0\n    add r1, sp, #0xc\n    mov r3, #0\n    bl sub_02010A00\n    ldr r5, [sp]\n    mov r4, #0\n    ldr r0, [sp, #4]\n    add r1, r4, #1\n    sub r0, r0, r1\n    add r6, r7, #0\n    cmp r0, #0\n    ble _02011FA4\n    lsl r1, r0, #2\n    add r0, sp, #0xc\n    ldr r0, [r0, r1]\n    cmp r0, r7\n    ble _02011FA4\n    add r6, r0, #0\n    mov r0, #0x80\n    neg r1, r6\n    bl sub_02010A7C\n    str r0, [sp, #8]\n    mov r0, #0x80\n    add r1, r6, #0\n    bl sub_02010A7C\n    ldr r1, [sp, #8]\n    lsl r0, r0, #0x10\n    lsl r1, r1, #0x10\n    asr r2, r1, #0x10\n    mov r1, #3\n    lsl r1, r1, #8\n    strh r2, [r5, r1]\n    asr r1, r0, #0x10\n    mov r0, #0x12\n    lsl r0, r0, #6\n    strh r1, [r5, r0]\n    mov r0, #0xbf\n    sub r0, r0, r4\n    lsl r3, r0, #1\n    ldr r0, [sp]\n    add r4, r4, #1\n    add r0, r0, r3\n    mov r3, #3\n    lsl r3, r3, #8\n    strh r2, [r0, r3]\n    mov r2, #0x12\n    lsl r2, r2, #6\n    add r5, r5, #2\n    strh r1, [r0, r2]\n    cmp r4, #0x60\n    blt _02011F8C\n    add sp, #0x1fc\n    add sp, #0x110\n    pop {r4, r5, r6, r7, pc}\n    _02011FF0: .word FX_SinCosTable_\n    _02011FF4: .word 0x0000FFFF"
    );
    #endif
}

void sub_02011FF8(void) {
    /* Original at 0x02011FF8 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r4, r1, #0\n    mov r1, #0x30\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    bl sub_02012090\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02012030(void) {
    /* Original at 0x02012030 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    ldr r4, [r5, #0x14]\n    cmp r0, #1\n    beq _02012048\n    cmp r0, #2\n    beq _02012064\n    cmp r0, #3\n    beq _02012084\n    b _02012088\n    add r0, r4, #0\n    bl sub_020121A4\n    cmp r0, #1\n    bne _0201208C\n    ldr r0, [r4, #0x20]\n    ldr r1, [r4, #0x24]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _0201208C\n    add r0, r4, #0\n    bl sub_020121F4\n    add r0, r4, #0\n    bl sub_02010EC8\n    ldr r0, [r5, #0x14]\n    bl Heap_Free\n    add r0, r6, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r6, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _0201208C\n    mov r6, #1\n    b _0201208C\n    bl GF_AssertFail\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02012090(void) {
    /* Original at 0x02012090 */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r5, r1, #0\n    add r6, r0, #0\n    str r2, [sp, #0x18]\n    ldr r0, [sp, #0x38]\n    ldrh r2, [r5, #8]\n    str r0, [sp, #0x38]\n    ldr r0, [sp, #0x44]\n    mov r1, #0x30\n    mul r1, r2\n    str r3, [sp, #0x1c]\n    str r0, [sp, #0x44]\n    bl Heap_Alloc\n    str r0, [r6, #0xc]\n    cmp r0, #0\n    bne _020120B8\n    bl GF_AssertFail\n    ldrh r0, [r5, #8]\n    str r0, [r6, #0x10]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    ldrh r0, [r5, #8]\n    cmp r0, #0\n    ble _020120F8\n    ldr r4, [sp, #0x20]\n    add r7, r4, #0\n    ldr r0, [r5, #4]\n    ldr r2, [r6, #0xc]\n    add r0, r0, r4\n    str r0, [sp]\n    ldr r0, [sp, #0x18]\n    str r0, [sp, #4]\n    add r0, r2, r7\n    ldr r3, [r5]\n    add r1, r0, #0\n    add r2, r2, r7\n    add r1, #0x20\n    add r2, #0x10\n    add r3, r3, r4\n    bl sub_02010AB0\n    ldr r0, [sp, #0x20]\n    ldrh r1, [r5, #8]\n    add r0, r0, #1\n    add r4, r4, #4\n    add r7, #0x30\n    str r0, [sp, #0x20]\n    cmp r0, r1\n    blt _020120CA\n    ldrh r1, [r5, #0xa]\n    ldr r2, [sp, #0x38]\n    ldr r3, [sp, #0x44]\n    add r0, r6, #0\n    bl sub_02010E64\n    ldr r0, [sp, #0x18]\n    str r0, [r6, #0x14]\n    ldr r0, [sp, #0x1c]\n    str r0, [r6, #0x18]\n    mov r0, #0\n    str r0, [r6, #0x1c]\n    ldr r0, [sp, #0x3c]\n    str r0, [r6, #0x24]\n    ldr r0, [sp, #0x40]\n    str r0, [r6, #0x28]\n    ldr r0, [sp, #0x44]\n    str r0, [r6, #0x2c]\n    ldrh r0, [r5, #0xe]\n    str r0, [r6, #0x20]\n    add r0, r6, #0\n    bl sub_02012204\n    ldr r0, _02012198 ; =sub_02010F00\n    ldr r2, _0201219C ; =0x000003FF\n    add r1, r6, #0\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r6, #0\n    mov r1, #0\n    bl sub_02010EE0\n    ldr r1, [sp, #0x38]\n    str r1, [sp]\n    mov r1, #3\n    lsl r1, r1, #8\n    ldrsh r1, [r0, r1]\n    str r1, [sp, #4]\n    mov r1, #0\n    str r1, [sp, #8]\n    mov r1, #0x12\n    lsl r1, r1, #6\n    ldrsh r0, [r0, r1]\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #0x20]\n    str r0, [sp, #0x14]\n    ldrb r1, [r5, #0xc]\n    ldrb r2, [r5, #0xd]\n    ldrh r3, [r5, #0xa]\n    ldr r0, [sp, #0x3c]\n    bl sub_02010F84\n    ldrh r0, [r5, #0xa]\n    cmp r0, #0\n    ldr r0, [r6, #0x24]\n    bne _02012178\n    ldr r2, [sp, #0x38]\n    ldr r3, [r6, #0x20]\n    mov r1, #1\n    bl sub_02011068\n    b _02012182\n    ldr r2, [sp, #0x38]\n    ldr r3, [r6, #0x20]\n    mov r1, #2\n    bl sub_02011068\n    ldr r0, [sp, #0x44]\n    ldr r2, _020121A0 ; =sub_02010C38\n    str r0, [sp]\n    ldr r0, [r6, #0x28]\n    ldr r3, [sp, #0x38]\n    add r1, r6, #0\n    bl sub_0200FF88\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02012198: .word sub_02010F00\n    _0201219C: .word 0x000003FF\n    _020121A0: .word sub_02010C38"
    );
    #endif
}

void sub_020121A4(void) {
    /* Original at 0x020121A4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x1c]\n    add r2, r1, #1\n    str r2, [r4, #0x1c]\n    ldr r1, [r4, #0x18]\n    cmp r2, r1\n    blt _020121E6\n    mov r1, #0\n    str r1, [r4, #0x1c]\n    ldr r1, [r4, #0x14]\n    sub r1, r1, #1\n    cmp r1, #0\n    ble _020121D8\n    str r1, [r4, #0x14]\n    bl sub_02012290\n    add r0, r4, #0\n    bl sub_02012204\n    ldr r0, _020121EC ; =sub_02010F00\n    ldr r2, _020121F0 ; =0x000003FF\n    add r1, r4, #0\n    bl SysTask_CreateOnVWaitQueue\n    b _020121E6\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0x2c]\n    bl sub_0200FFB4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _020121EC: .word sub_02010F00\n    _020121F0: .word 0x000003FF"
    );
    #endif
}

void sub_020121F4(void) {
    Heap_Free();
}

void sub_02012204(void) {
    /* Original at 0x02012204 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r1, #0\n    add r6, r0, #0\n    bl sub_02010EE0\n    mov r2, #3\n    lsl r2, r2, #8\n    add r0, r0, r2\n    mov r1, #0\n    bl memset\n    ldr r0, [r6, #0x10]\n    sub r4, r0, #1\n    bmi _02012236\n    mov r0, #0x30\n    add r5, r4, #0\n    mul r5, r0\n    ldr r1, [r6, #0xc]\n    add r0, r6, #0\n    add r1, r1, r5\n    bl sub_02012238\n    sub r5, #0x30\n    sub r4, r4, #1\n    bpl _02012226\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02012238(void) {
    /* Original at 0x02012238 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    mov r1, #0\n    bl sub_02010EE0\n    ldr r2, [r4]\n    ldr r3, [r4, #8]\n    asr r1, r2, #6\n    lsr r1, r1, #0x19\n    add r1, r2, r1\n    asr r2, r1, #7\n    asr r1, r3, #6\n    ldr r5, [r4, #0xc]\n    lsr r1, r1, #0x19\n    add r1, r3, r1\n    asr r3, r5, #6\n    lsr r3, r3, #0x19\n    add r3, r5, r3\n    ldr r4, [r4, #4]\n    asr r5, r3, #7\n    asr r3, r4, #6\n    lsr r3, r3, #0x19\n    add r3, r4, r3\n    asr r3, r3, #7\n    asr r1, r1, #7\n    cmp r3, r5\n    bge _0201228E\n    lsl r4, r3, #1\n    lsl r1, r1, #0x10\n    add r4, r0, r4\n    lsl r0, r2, #0x10\n    asr r6, r1, #0x10\n    mov r1, #3\n    mov r2, #0x12\n    asr r0, r0, #0x10\n    lsl r1, r1, #8\n    lsl r2, r2, #6\n    strh r0, [r4, r1]\n    strh r6, [r4, r2]\n    add r3, r3, #1\n    add r4, r4, #2\n    cmp r3, r5\n    blt _02012282\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02012290(void) {
    /* Original at 0x02012290 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0x10]\n    mov r6, #0\n    cmp r0, #0\n    ble _020122B4\n    add r4, r6, #0\n    ldr r1, [r5, #0xc]\n    add r0, r1, r4\n    add r1, r1, r4\n    add r1, #0x10\n    bl sub_02010A8C\n    ldr r0, [r5, #0x10]\n    add r6, r6, #1\n    add r4, #0x30\n    cmp r6, r0\n    blt _0201229E\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020122B8(void) {
    /* Original at 0x020122B8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r4, r1, #0\n    mov r1, #0x38\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    mov r1, #0\n    mov r2, #0x38\n    bl memset\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    bl sub_02012358\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020122F8(void) {
    /* Original at 0x020122F8 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    ldr r4, [r5, #0x14]\n    cmp r0, #1\n    beq _02012310\n    cmp r0, #2\n    beq _0201232C\n    cmp r0, #3\n    beq _0201234C\n    b _02012350\n    add r0, r4, #0\n    bl sub_02012454\n    cmp r0, #1\n    bne _02012354\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #0x30]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02012354\n    add r0, r4, #0\n    bl sub_020124AC\n    add r0, r4, #0\n    bl sub_02010EC8\n    ldr r0, [r5, #0x14]\n    bl Heap_Free\n    add r0, r6, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r6, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02012354\n    mov r6, #1\n    b _02012354\n    bl GF_AssertFail\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02012358(void) {
    /* Original at 0x02012358 */
    /* Requires manual decompilation - 113 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #0\n    str r1, [r5, #0xc]\n    ldrh r1, [r4]\n    str r2, [sp, #0x18]\n    str r3, [sp, #0x1c]\n    str r1, [r5, #0x10]\n    ldrh r2, [r4, #2]\n    ldrh r1, [r4]\n    ldr r6, [sp, #0x40]\n    ldr r3, [sp, #0x4c]\n    sub r1, r2, r1\n    str r1, [r5, #0x14]\n    mov r1, #2\n    add r2, r6, #0\n    ldr r7, [sp, #0x44]\n    bl sub_02010E64\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    str r0, [r5, #0x18]\n    ldr r0, [sp, #0x1c]\n    str r1, [r5, #0x1c]\n    str r0, [r5, #0x20]\n    str r1, [r5, #0x24]\n    ldr r0, [sp, #0x48]\n    str r7, [r5, #0x30]\n    str r0, [r5, #0x34]\n    ldr r0, [sp, #0x4c]\n    str r0, [r5, #0x2c]\n    ldrh r0, [r4, #6]\n    str r0, [r5, #0x28]\n    add r0, r5, #0\n    ldr r1, [r5, #0x1c]\n    ldr r2, [r5, #0x18]\n    add r0, #0xc\n    bl sub_020125D4\n    add r0, r5, #0\n    bl sub_020124B0\n    ldr r0, _02012448 ; =sub_02010F00\n    ldr r2, _0201244C ; =0x000003FF\n    add r1, r5, #0\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02010EE0\n    str r0, [sp, #0x20]\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02010EE0\n    str r0, [sp, #0x24]\n    mov r1, #3\n    ldr r0, [sp, #0x20]\n    str r6, [sp]\n    lsl r1, r1, #8\n    ldrsh r0, [r0, r1]\n    mov r1, #0x12\n    mov r3, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x20]\n    str r3, [sp, #8]\n    lsl r1, r1, #6\n    ldrsh r0, [r0, r1]\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x28]\n    str r0, [sp, #0x14]\n    ldrb r1, [r4, #4]\n    ldrb r2, [r4, #5]\n    add r0, r7, #0\n    bl sub_02010F84\n    mov r1, #3\n    ldr r0, [sp, #0x24]\n    str r6, [sp]\n    lsl r1, r1, #8\n    ldrsh r0, [r0, r1]\n    mov r1, #0x12\n    lsl r1, r1, #6\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x24]\n    mov r3, #1\n    ldrsh r0, [r0, r1]\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x28]\n    str r0, [sp, #0x14]\n    ldrb r1, [r4, #4]\n    ldrb r2, [r4, #5]\n    add r0, r7, #0\n    bl sub_02010F84\n    ldr r3, [r5, #0x28]\n    add r0, r7, #0\n    mov r1, #3\n    add r2, r6, #0\n    bl sub_02011068\n    ldr r0, [sp, #0x4c]\n    ldr r2, _02012450 ; =sub_02010C38\n    str r0, [sp]\n    ldr r0, [r5, #0x34]\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_0200FF88\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _02012448: .word sub_02010F00\n    _0201244C: .word 0x000003FF\n    _02012450: .word sub_02010C38"
    );
    #endif
}

void sub_02012454(void) {
    /* Original at 0x02012454 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x24]\n    add r1, r0, #1\n    str r1, [r4, #0x24]\n    ldr r0, [r4, #0x20]\n    cmp r1, r0\n    blt _0201249E\n    mov r0, #0\n    str r0, [r4, #0x24]\n    ldr r0, [r4, #0x1c]\n    add r1, r0, #1\n    ldr r0, [r4, #0x18]\n    cmp r1, r0\n    bgt _02012490\n    str r1, [r4, #0x1c]\n    add r0, r4, #0\n    ldr r2, [r4, #0x18]\n    add r0, #0xc\n    bl sub_020125D4\n    add r0, r4, #0\n    bl sub_020124B0\n    ldr r0, _020124A4 ; =sub_02010F00\n    ldr r2, _020124A8 ; =0x000003FF\n    add r1, r4, #0\n    bl SysTask_CreateOnVWaitQueue\n    b _0201249E\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0x2c]\n    bl sub_0200FFB4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _020124A4: .word sub_02010F00\n    _020124A8: .word 0x000003FF"
    );
    #endif
}

void sub_020124AC(void) {
    /* Original at 0x020124AC */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_020124B0(void) {
    /* Original at 0x020124B0 */
    /* Requires manual decompilation - 140 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    ldr r0, [r0, #0xc]\n    ldr r1, _020125D0 ; =0x00003FFF\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    mov r1, #0\n    bl sub_02010EE0\n    add r7, r0, #0\n    ldr r0, [sp]\n    mov r1, #1\n    bl sub_02010EE0\n    add r4, r0, #0\n    mov r6, #0\n    add r5, r4, #0\n    ldr r0, [sp]\n    ldr r1, [r0, #0xc]\n    ldr r0, _020125D0 ; =0x00003FFF\n    cmp r1, r0\n    bge _02012520\n    mov r1, #0x60\n    ldr r0, [sp, #4]\n    sub r1, r1, r6\n    bl sub_020109D8\n    cmp r0, #0x7f\n    ble _020124F6\n    mov r0, #0x7f\n    mov r1, #0xbf\n    sub r1, r1, r6\n    lsl r1, r1, #1\n    add r3, r7, r1\n    mov r1, #0x80\n    sub r2, r1, r0\n    mov r1, #3\n    lsl r1, r1, #8\n    strh r2, [r3, r1]\n    mov r1, #0x12\n    mov r2, #0x80\n    lsl r1, r1, #6\n    strh r2, [r3, r1]\n    mov r1, #3\n    lsl r1, r1, #8\n    strh r2, [r5, r1]\n    mov r1, #0x12\n    add r0, #0x80\n    lsl r1, r1, #6\n    strh r0, [r5, r1]\n    b _02012548\n    mov r0, #0xbf\n    sub r0, r0, r6\n    lsl r0, r0, #1\n    mov r1, #3\n    add r0, r7, r0\n    mov r2, #0\n    lsl r1, r1, #8\n    strh r2, [r0, r1]\n    mov r1, #0x12\n    mov r2, #0x80\n    lsl r1, r1, #6\n    strh r2, [r0, r1]\n    mov r0, #3\n    add r1, r2, #0\n    lsl r0, r0, #8\n    strh r1, [r5, r0]\n    mov r0, #0x12\n    mov r1, #0xff\n    lsl r0, r0, #6\n    strh r1, [r5, r0]\n    add r6, r6, #1\n    add r5, r5, #2\n    cmp r6, #0x60\n    blt _020124DC\n    ldr r1, _020125D0 ; =0x00003FFF\n    ldr r0, [sp, #4]\n    mov r5, #0x60\n    add r4, #0xc0\n    sub r6, r1, r0\n    ldr r0, [sp]\n    ldr r1, [r0, #0xc]\n    ldr r0, _020125D0 ; =0x00003FFF\n    cmp r1, r0\n    bge _0201258A\n    mov r0, #0xbf\n    sub r0, r0, r5\n    lsl r0, r0, #1\n    mov r1, #3\n    add r0, r7, r0\n    mov r2, #0x80\n    lsl r1, r1, #8\n    strh r2, [r0, r1]\n    mov r1, #0x12\n    lsl r1, r1, #6\n    strh r2, [r0, r1]\n    mov r0, #3\n    add r1, r2, #0\n    lsl r0, r0, #8\n    strh r1, [r4, r0]\n    mov r0, #0x12\n    lsl r0, r0, #6\n    strh r1, [r4, r0]\n    b _020125C4\n    add r1, r5, #0\n    add r0, r6, #0\n    sub r1, #0x60\n    bl sub_020109D8\n    add r1, r0, #0\n    cmp r1, #0x7f\n    ble _0201259C\n    mov r1, #0x7f\n    mov r0, #0xbf\n    sub r0, r0, r5\n    lsl r0, r0, #1\n    mov r2, #3\n    add r0, r7, r0\n    mov r3, #0\n    lsl r2, r2, #8\n    strh r3, [r0, r2]\n    mov r2, #0x80\n    sub r3, r2, r1\n    mov r2, #0x12\n    lsl r2, r2, #6\n    strh r3, [r0, r2]\n    mov r0, #3\n    add r1, #0x80\n    lsl r0, r0, #8\n    strh r1, [r4, r0]\n    mov r1, #0xff\n    add r0, r2, #0\n    strh r1, [r4, r0]\n    add r5, r5, #1\n    add r4, r4, #2\n    cmp r5, #0xc0\n    blt _0201255A\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _020125D0: .word 0x00003FFF"
    );
    #endif
}

void sub_020125D4(void) {
    _s32_div_f();
}

void sub_020125EC(void) {
    /* Original at 0x020125EC */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r0, [r5, #0x20]\n    add r4, r1, #0\n    mov r1, #0x38\n    bl Heap_Alloc\n    str r0, [r5, #0x14]\n    mov r1, #0\n    mov r2, #0x38\n    bl memset\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    bl sub_0201268C\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_0201262C(void) {
    /* Original at 0x0201262C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    ldr r4, [r5, #0x14]\n    cmp r0, #1\n    beq _02012644\n    cmp r0, #2\n    beq _02012660\n    cmp r0, #3\n    beq _02012680\n    b _02012684\n    add r0, r4, #0\n    bl sub_0201275C\n    cmp r0, #1\n    bne _02012688\n    ldr r0, [r4, #0x28]\n    ldr r1, [r4, #0x30]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02012688\n    add r0, r4, #0\n    bl sub_020127B4\n    add r0, r4, #0\n    bl sub_02010EC8\n    ldr r0, [r5, #0x14]\n    bl Heap_Free\n    add r0, r6, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r6, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02012688\n    mov r6, #1\n    b _02012688\n    bl GF_AssertFail\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_0201268C(void) {
    /* Original at 0x0201268C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r4, r1, #0\n    ldrh r1, [r4]\n    add r5, r0, #0\n    str r3, [sp, #0x1c]\n    str r1, [r5, #0xc]\n    ldrh r1, [r4]\n    str r2, [sp, #0x18]\n    ldr r6, [sp, #0x38]\n    str r1, [r5, #0x10]\n    ldrh r2, [r4, #2]\n    ldrh r1, [r4]\n    ldr r3, [sp, #0x44]\n    ldr r7, [sp, #0x3c]\n    sub r1, r2, r1\n    str r1, [r5, #0x14]\n    mov r1, #2\n    add r2, r6, #0\n    bl sub_02010E64\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    str r0, [r5, #0x18]\n    ldr r0, [sp, #0x1c]\n    str r1, [r5, #0x1c]\n    str r0, [r5, #0x20]\n    str r1, [r5, #0x24]\n    ldr r0, [sp, #0x40]\n    str r7, [r5, #0x30]\n    str r0, [r5, #0x34]\n    ldr r0, [sp, #0x44]\n    str r0, [r5, #0x2c]\n    ldrh r0, [r4, #6]\n    str r0, [r5, #0x28]\n    add r0, r5, #0\n    bl sub_020127B8\n    ldr r0, _02012750 ; =sub_02010F00\n    ldr r2, _02012754 ; =0x000003FF\n    add r1, r5, #0\n    bl SysTask_CreateOnVWaitQueue\n    add r0, r5, #0\n    mov r1, #0\n    bl sub_02010EE0\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02010EE0\n    str r6, [sp]\n    mov r3, #0\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #0xff\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x28]\n    str r0, [sp, #0x14]\n    ldrb r1, [r4, #4]\n    ldrb r2, [r4, #5]\n    add r0, r7, #0\n    bl sub_02010F84\n    str r6, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0xff\n    str r0, [sp, #0xc]\n    mov r0, #0xc0\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #0x28]\n    mov r3, #1\n    str r0, [sp, #0x14]\n    ldrb r1, [r4, #4]\n    ldrb r2, [r4, #5]\n    add r0, r7, #0\n    bl sub_02010F84\n    ldr r3, [r5, #0x28]\n    add r0, r7, #0\n    mov r1, #3\n    add r2, r6, #0\n    bl sub_02011068\n    ldr r0, [sp, #0x44]\n    ldr r2, _02012758 ; =sub_02010C38\n    str r0, [sp]\n    ldr r0, [r5, #0x34]\n    add r1, r5, #0\n    add r3, r6, #0\n    bl sub_0200FF88\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    _02012750: .word sub_02010F00\n    _02012754: .word 0x000003FF\n    _02012758: .word sub_02010C38"
    );
    #endif
}

void sub_0201275C(void) {
    /* Original at 0x0201275C */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x24]\n    add r1, r0, #1\n    str r1, [r4, #0x24]\n    ldr r0, [r4, #0x20]\n    cmp r1, r0\n    blt _020127A6\n    mov r0, #0\n    str r0, [r4, #0x24]\n    ldr r0, [r4, #0x1c]\n    add r1, r0, #1\n    ldr r0, [r4, #0x18]\n    cmp r1, r0\n    bgt _02012798\n    str r1, [r4, #0x1c]\n    add r0, r4, #0\n    ldr r2, [r4, #0x18]\n    add r0, #0xc\n    bl sub_02012884\n    add r0, r4, #0\n    bl sub_020127B8\n    ldr r0, _020127AC ; =sub_02010F00\n    ldr r2, _020127B0 ; =0x000003FF\n    add r1, r4, #0\n    bl SysTask_CreateOnVWaitQueue\n    b _020127A6\n    ldr r0, [r4, #0x34]\n    ldr r1, [r4, #8]\n    ldr r2, [r4, #0x2c]\n    bl sub_0200FFB4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _020127AC: .word sub_02010F00\n    _020127B0: .word 0x000003FF"
    );
    #endif
}

void sub_020127B4(void) {
    /* Original at 0x020127B4 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_020127B8(void) {
    /* Original at 0x020127B8 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r4, r0, #0\n    ldr r1, [r4, #0xc]\n    lsl r1, r1, #0x10\n    lsr r1, r1, #0x10\n    str r1, [sp, #8]\n    mov r1, #0\n    bl sub_02010EE0\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    mov r1, #1\n    bl sub_02010EE0\n    str r0, [sp, #0xc]\n    add r5, r0, #0\n    ldr r1, _02012880 ; =0x00003FFF\n    ldr r0, [sp, #8]\n    ldr r6, [sp, #0x10]\n    sub r0, r1, r0\n    mov r7, #0\n    str r0, [sp, #4]\n    mov r0, #0x60\n    sub r0, r0, r7\n    str r0, [sp]\n    ldr r0, [sp, #8]\n    ldr r1, [sp]\n    bl sub_020109D8\n    add r4, r0, #0\n    ldr r0, [sp, #4]\n    ldr r1, [sp]\n    bl sub_020109D8\n    cmp r4, #0x7f\n    ble _02012804\n    mov r4, #0x7f\n    cmp r0, #0x7f\n    ble _0201280A\n    mov r0, #0x7f\n    mov r1, #0x80\n    sub r1, r1, r0\n    lsl r1, r1, #0x10\n    mov r2, #3\n    asr r1, r1, #0x10\n    lsl r2, r2, #8\n    str r1, [sp, #0x14]\n    strh r1, [r6, r2]\n    mov r1, #0x80\n    sub r1, r1, r4\n    lsl r1, r1, #0x10\n    asr r2, r1, #0x10\n    mov r1, #0x12\n    lsl r1, r1, #6\n    strh r2, [r6, r1]\n    mov r1, #0xbf\n    sub r1, r1, r7\n    mov ip, r2\n    lsl r1, r1, #1\n    ldr r2, [sp, #0x10]\n    add r0, #0x80\n    add r3, r2, r1\n    str r1, [sp, #0x18]\n    mov r2, #3\n    ldr r1, [sp, #0x14]\n    lsl r2, r2, #8\n    strh r1, [r3, r2]\n    mov r1, #0x12\n    mov r2, ip\n    lsl r1, r1, #6\n    strh r2, [r3, r1]\n    add r4, #0x80\n    lsl r1, r4, #0x10\n    asr r2, r1, #0x10\n    mov r1, #3\n    lsl r1, r1, #8\n    lsl r0, r0, #0x10\n    strh r2, [r5, r1]\n    asr r1, r0, #0x10\n    mov r0, #0x12\n    lsl r0, r0, #6\n    strh r1, [r5, r0]\n    ldr r3, [sp, #0xc]\n    ldr r0, [sp, #0x18]\n    add r7, r7, #1\n    add r0, r3, r0\n    mov r3, #3\n    lsl r3, r3, #8\n    strh r2, [r0, r3]\n    mov r2, #0x12\n    lsl r2, r2, #6\n    strh r1, [r0, r2]\n    add r6, r6, #2\n    add r5, r5, #2\n    cmp r7, #0x60\n    blt _020127E6\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02012880: .word 0x00003FFF"
    );
    #endif
}

void sub_02012884(void) {
    _s32_div_f();
}

void sub_0201289C(void) {
    /* Original at 0x0201289C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r1, #0xcd\n    ldr r0, [r5, #0x20]\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0xcd\n    str r0, [r5, #0x14]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    ldr r0, [r5, #0x10]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [r5, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [r5, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, [r5, #0x20]\n    str r0, [sp, #0xc]\n    ldr r0, [r5, #0x14]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    bl sub_02012940\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020128E0(void) {
    /* Original at 0x020128E0 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #0xc]\n    mov r6, #0\n    ldr r4, [r5, #0x14]\n    cmp r0, #1\n    beq _020128F8\n    cmp r0, #2\n    beq _0201291A\n    cmp r0, #3\n    beq _02012934\n    b _02012938\n    add r0, r4, #0\n    bl sub_02012A2C\n    cmp r0, #1\n    bne _0201293C\n    mov r1, #0xc9\n    lsl r1, r1, #2\n    ldr r0, [r4, r1]\n    add r1, #8\n    ldr r1, [r4, r1]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _0201293C\n    add r0, r4, #0\n    bl sub_02012A8C\n    ldr r0, [r5, #0x14]\n    bl Heap_Free\n    add r0, r6, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r6, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _0201293C\n    mov r6, #1\n    b _0201293C\n    bl GF_AssertFail\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02012940(void) {
    /* Original at 0x02012940 */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    ldr r7, [sp, #0x38]\n    str r3, [sp, #0x1c]\n    mov r3, #0\n    add r4, r1, #0\n    str r2, [sp, #0x18]\n    str r3, [sp]\n    add r1, r7, #0\n    mov r2, #1\n    add r5, r0, #0\n    ldr r6, [sp, #0x3c]\n    bl sub_02011080\n    ldrh r0, [r4, #6]\n    cmp r0, #0\n    bne _0201297A\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0xc0\n    bl memset\n    add r0, r5, #0\n    add r0, #0xc0\n    mov r1, #1\n    mov r2, #0xc0\n    bl memset\n    b _02012990\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #0xc0\n    bl memset\n    add r0, r5, #0\n    add r0, #0xc0\n    mov r1, #0\n    mov r2, #0xc0\n    bl memset\n    mov r1, #0xc3\n    ldr r0, [r4]\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    ldrh r2, [r4, #4]\n    add r0, r1, #4\n    ldr r3, [sp, #0x44]\n    str r2, [r5, r0]\n    add r0, r1, #0\n    ldrh r2, [r4, #6]\n    add r0, #0x18\n    str r2, [r5, r0]\n    add r0, r1, #0\n    add r0, #0x1c\n    str r3, [r5, r0]\n    add r2, r1, #0\n    ldr r0, [sp, #0x18]\n    add r2, #8\n    str r0, [r5, r2]\n    add r2, r1, #0\n    add r2, #0xc\n    mov r0, #0\n    str r0, [r5, r2]\n    add r2, r1, #0\n    ldr r0, [sp, #0x1c]\n    add r2, #0x10\n    str r0, [r5, r2]\n    add r2, r1, #0\n    add r2, #0x14\n    mov r0, #0\n    str r0, [r5, r2]\n    add r0, r1, #0\n    add r0, #0x20\n    str r6, [r5, r0]\n    ldr r0, [sp, #0x40]\n    add r1, #0x24\n    str r0, [r5, r1]\n    add r1, r5, #0\n    add r2, r3, #0\n    bl sub_020110DC\n    ldrh r0, [r4, #6]\n    cmp r0, #1\n    str r7, [sp]\n    bne _02012A02\n    mov r3, #0\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    mov r1, #0x20\n    mov r2, #0x3f\n    bl sub_02010F84\n    b _02012A18\n    mov r3, #0\n    str r3, [sp, #4]\n    str r3, [sp, #8]\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    str r0, [sp, #0x14]\n    add r0, r6, #0\n    mov r1, #0x3f\n    mov r2, #0x20\n    bl sub_02010F84\n    mov r3, #0xc9\n    lsl r3, r3, #2\n    ldr r3, [r5, r3]\n    add r0, r6, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02011068\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02012A2C(void) {
    /* Original at 0x02012A2C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x32\n    add r4, r0, #0\n    lsl r2, r2, #4\n    ldr r1, [r4, r2]\n    add r1, r1, #1\n    str r1, [r4, r2]\n    sub r1, r2, #4\n    ldr r3, [r4, r2]\n    ldr r1, [r4, r1]\n    cmp r3, r1\n    blt _02012A86\n    mov r1, #0\n    str r1, [r4, r2]\n    add r1, r2, #0\n    sub r1, #8\n    ldr r1, [r4, r1]\n    add r3, r1, #1\n    add r1, r2, #0\n    sub r1, #0xc\n    ldr r1, [r4, r1]\n    cmp r3, r1\n    bgt _02012A72\n    add r1, r2, #0\n    sub r1, #8\n    ldr r1, [r4, r1]\n    sub r2, #8\n    add r1, r1, #1\n    str r1, [r4, r2]\n    bl sub_02012A90\n    add r0, r4, #0\n    bl sub_020110C4\n    b _02012A86\n    add r0, r2, #0\n    add r0, #0x10\n    add r2, #8\n    ldr r0, [r4, r0]\n    ldr r2, [r4, r2]\n    add r1, r4, #0\n    bl sub_020110F4\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02012A8C(void) {
    /* Original at 0x02012A8C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void sub_02012A90(void) {
    /* Original at 0x02012A90 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x31\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r6, #0\n    cmp r0, #0\n    ble _02012ACA\n    mov r7, #0x31\n    add r4, r6, #0\n    lsl r7, r7, #4\n    mov r0, #0xc3\n    lsl r0, r0, #2\n    mov r2, #0xc6\n    mov r3, #0xc5\n    ldr r0, [r5, r0]\n    lsl r2, r2, #2\n    lsl r3, r3, #2\n    ldr r2, [r5, r2]\n    ldr r3, [r5, r3]\n    add r0, r0, r4\n    add r1, r5, #0\n    bl sub_02012ACC\n    ldr r0, [r5, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, r0\n    blt _02012AA6\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02012ACC(void) {
    /* Original at 0x02012ACC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldrb r6, [r7]\n    ldrb r4, [r7, #1]\n    add r5, r1, #0\n    add r1, r3, #0\n    sub r0, r4, r6\n    mul r0, r2\n    bl _s32_div_f\n    add r0, r0, r6\n    cmp r6, r4\n    bhi _02012AEC\n    add r1, r6, #0\n    ldrh r6, [r7, #2]\n    b _02012AFC\n    ldrh r2, [r7, #2]\n    add r1, r4, #0\n    add r4, r6, #0\n    cmp r2, #0\n    bne _02012AFA\n    mov r6, #1\n    b _02012AFC\n    mov r6, #0\n    cmp r1, r4\n    bge _02012B1A\n    mov r2, #0\n    mov r3, #1\n    cmp r1, r0\n    bne _02012B12\n    cmp r6, #0\n    bne _02012B10\n    add r6, r3, #0\n    b _02012B12\n    add r6, r2, #0\n    strb r6, [r5, r1]\n    add r1, r1, #1\n    cmp r1, r4\n    blt _02012B04\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02012B1C(void) {
    /* Original at 0x02012B1C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r1, #0xe2\n    ldr r0, [r5, #0x20]\n    lsl r1, r1, #2\n    bl Heap_Alloc\n    mov r2, #0xe2\n    str r0, [r5, #0x14]\n    mov r1, #0\n    lsl r2, r2, #2\n    bl memset\n    ldrb r1, [r4, #0xb]\n    ldr r0, [r5, #0x14]\n    cmp r1, #0\n    ldr r1, [r5, #0x10]\n    bne _02012B5E\n    str r1, [sp]\n    ldr r1, [r5, #0x18]\n    str r1, [sp, #4]\n    ldr r1, [r5, #0x1c]\n    str r1, [sp, #8]\n    ldr r1, [r5, #0x20]\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    add r1, r4, #0\n    bl sub_02012BE8\n    b _02012B76\n    str r1, [sp]\n    ldr r1, [r5, #0x18]\n    str r1, [sp, #4]\n    ldr r1, [r5, #0x1c]\n    str r1, [sp, #8]\n    ldr r1, [r5, #0x20]\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #4]\n    ldr r3, [r5, #8]\n    add r1, r4, #0\n    bl sub_02012CDC\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02012B80(void) {
    /* Original at 0x02012B80 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r1, [r5, #0xc]\n    mov r4, #0\n    ldr r0, [r5, #0x14]\n    cmp r1, #1\n    beq _02012B98\n    cmp r1, #2\n    beq _02012BC4\n    cmp r1, #3\n    beq _02012BD6\n    b _02012BDA\n    ldr r1, _02012BE4 ; =0x00000386\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    bne _02012BA8\n    add r1, r5, #0\n    bl sub_02012C68\n    b _02012BAE\n    add r1, r5, #0\n    bl sub_02012D4C\n    cmp r0, #1\n    bne _02012BDE\n    ldr r0, [r5, #0x28]\n    ldr r1, [r5, #0x18]\n    ldr r2, [r5, #0x10]\n    bl sub_02010F34\n    ldr r0, [r5, #0xc]\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02012BDE\n    bl Heap_Free\n    add r0, r4, #0\n    str r0, [r5, #0x14]\n    ldr r0, [r5, #0xc]\n    mov r4, #1\n    add r0, r0, #1\n    str r0, [r5, #0xc]\n    b _02012BDE\n    mov r4, #1\n    b _02012BDE\n    bl GF_AssertFail\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02012BE4: .word 0x00000386"
    );
    #endif
}

void sub_02012BE8(void) {
    /* Original at 0x02012BE8 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r6, r2, #0\n    add r5, r0, #0\n    lsl r0, r6, #0xc\n    ldr r2, [r4, #0x14]\n    add r7, r3, #0\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    asr r2, r0, #0xc\n    mov r0, #0xe1\n    sub r1, r6, r2\n    lsl r0, r0, #2\n    strb r1, [r5, r0]\n    sub r1, r0, #4\n    str r4, [r5, r1]\n    ldrb r1, [r4, #0xb]\n    add r0, r0, #2\n    add r3, r7, #0\n    strb r1, [r5, r0]\n    ldr r0, [sp, #0x20]\n    add r1, r4, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x24]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    bl sub_020117A0\n    ldrb r0, [r4, #8]\n    cmp r0, #0\n    bne _02012C4C\n    ldrb r3, [r4, #0xb]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x20]\n    mov r1, #1\n    bl sub_02011068\n    b _02012C58\n    ldrb r3, [r4, #0xb]\n    ldr r0, [sp, #0x24]\n    ldr r2, [sp, #0x20]\n    mov r1, #2\n    bl sub_02011068\n    ldr r0, _02012C64 ; =0x00000385\n    mov r1, #0\n    strb r1, [r5, r0]\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02012C64: .word 0x00000385"
    );
    #endif
}

void sub_02012C68(void) {
    /* Original at 0x02012C68 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    ldr r1, _02012CD8 ; =0x00000385\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    mov r6, #0\n    cmp r1, #0\n    beq _02012C84\n    cmp r1, #1\n    beq _02012CBA\n    cmp r1, #2\n    beq _02012CD0\n    b _02012CD2\n    bl sub_020117FC\n    cmp r0, #1\n    bne _02012CD2\n    ldr r2, _02012CD8 ; =0x00000385\n    ldrb r0, [r5, r2]\n    sub r1, r2, #5\n    add r0, r0, #1\n    strb r0, [r5, r2]\n    ldr r0, [r4, #0x10]\n    sub r2, r2, #1\n    str r0, [sp]\n    ldr r0, [r4, #0x18]\n    str r0, [sp, #4]\n    ldr r0, [r4, #0x1c]\n    str r0, [sp, #8]\n    ldr r0, [r4, #0x20]\n    str r0, [sp, #0xc]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    ldrb r2, [r5, r2]\n    ldr r3, [r4, #8]\n    add r0, #0x4c\n    add r1, #0xc\n    bl sub_02012940\n    b _02012CD2\n    add r0, #0x4c\n    bl sub_02012A2C\n    cmp r0, #1\n    bne _02012CD2\n    ldr r0, _02012CD8 ; =0x00000385\n    mov r6, #1\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    b _02012CD2\n    mov r6, #1\n    add r0, r6, #0\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _02012CD8: .word 0x00000385"
    );
    #endif
}

void sub_02012CDC(void) {
    /* Original at 0x02012CDC */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    add r6, r2, #0\n    add r5, r0, #0\n    lsl r0, r6, #0xc\n    ldr r2, [r4, #0x14]\n    add r7, r3, #0\n    asr r1, r0, #0x1f\n    asr r3, r2, #0x1f\n    bl _ll_mul\n    add r2, r0, #0\n    mov r0, #2\n    mov r3, #0\n    lsl r0, r0, #0xa\n    add r0, r2, r0\n    adc r1, r3\n    lsl r1, r1, #0x14\n    lsr r0, r0, #0xc\n    orr r0, r1\n    mov r1, #0xe1\n    asr r0, r0, #0xc\n    lsl r1, r1, #2\n    strb r0, [r5, r1]\n    ldrb r0, [r5, r1]\n    sub r2, r6, r0\n    sub r0, r1, #4\n    str r4, [r5, r0]\n    add r0, r1, #2\n    ldrb r3, [r4, #0xb]\n    sub r1, r1, #4\n    strb r3, [r5, r0]\n    ldr r0, [sp, #0x28]\n    add r3, r7, #0\n    str r0, [sp]\n    ldr r0, [sp, #0x2c]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x30]\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x34]\n    str r0, [sp, #0xc]\n    ldr r1, [r5, r1]\n    add r0, r5, #0\n    add r0, #0x4c\n    add r1, #0xc\n    bl sub_02012940\n    ldr r0, _02012D48 ; =0x00000385\n    mov r1, #0\n    strb r1, [r5, r0]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02012D48: .word 0x00000385"
    );
    #endif
}

void sub_02012D4C(void) {
    /* Original at 0x02012D4C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    ldr r1, _02012DD4 ; =0x00000385\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    mov r6, #0\n    cmp r1, #0\n    beq _02012D68\n    cmp r1, #1\n    beq _02012DB8\n    cmp r1, #2\n    beq _02012DCC\n    b _02012DCE\n    add r0, #0x4c\n    bl sub_02012A2C\n    cmp r0, #1\n    bne _02012DCE\n    ldr r2, _02012DD4 ; =0x00000385\n    ldrb r0, [r5, r2]\n    sub r1, r2, #5\n    add r0, r0, #1\n    strb r0, [r5, r2]\n    ldr r0, [r4, #0x10]\n    sub r2, r2, #1\n    str r0, [sp]\n    ldr r0, [r4, #0x18]\n    str r0, [sp, #4]\n    ldrb r2, [r5, r2]\n    ldr r1, [r5, r1]\n    ldr r3, [r4, #8]\n    add r0, r5, #0\n    bl sub_020117A0\n    mov r0, #0xe\n    lsl r0, r0, #6\n    ldr r3, [r5, r0]\n    ldrb r0, [r3, #8]\n    cmp r0, #0\n    ldr r0, [r4, #0x18]\n    bne _02012DAC\n    ldrb r3, [r3, #0xb]\n    ldr r2, [r4, #0x10]\n    mov r1, #1\n    bl sub_02011068\n    b _02012DCE\n    ldrb r3, [r3, #0xb]\n    ldr r2, [r4, #0x10]\n    mov r1, #2\n    bl sub_02011068\n    b _02012DCE\n    bl sub_020117FC\n    cmp r0, #1\n    bne _02012DCE\n    ldr r0, _02012DD4 ; =0x00000385\n    mov r6, #1\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    b _02012DCE\n    mov r6, #1\n    add r0, r6, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _02012DD4: .word 0x00000385"
    );
    #endif
}
