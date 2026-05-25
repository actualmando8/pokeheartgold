/* Decompiled from asm/unk_0201010C.s */
#include "global.h"

void FadeFunc_00(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0xc]
    // cmp r1, #0
    // bne _02010122
    // mov r1, #1
    // str r1, [r0, #0x28]
    // str r1, [r0, #0x2c]
    // bl sub_02010B14
    // mov r0, #0
    // pop {r3, pc}
    // bl sub_02010BB4
    // pop {r3, pc}
    // TODO: decompile
}


void FadeFunc_01(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0xc]
    // cmp r1, #0
    // bne _02010140
    // mov r1, #0
    // str r1, [r0, #0x28]
    // mov r2, #1
    // str r2, [r0, #0x2c]
    // bl sub_02010B14
    // mov r0, #0
    // pop {r3, pc}
    // bl sub_02010BB4
    // pop {r3, pc}
    // TODO: decompile
}


void FadeFunc_02(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010170
    // ldr r1, _02010178 ; =_020F5D60
    // ldr r0, _0201017C ; =_0210F64C
    // str r1, [r0]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010180 ; =_0210F64C
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // nop
    // _02010178: .word _020F5D60
    // _0201017C: .word _0210F64C
    // _02010180: .word _0210F64C
    // TODO: decompile
}


void FadeFunc_03(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020101AA
    // ldr r1, _020101B0 ; =_020F5D5C
    // ldr r0, _020101B4 ; =_0210F64C
    // str r1, [r0, #0x10]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020101B8 ; =_0210F65C
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // _020101B0: .word _020F5D5C
    // _020101B4: .word _0210F64C
    // _020101B8: .word _0210F65C
    // TODO: decompile
}


void FadeFunc_04(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020101E4
    // ldr r1, _020101EC ; =_020F5D64
    // ldr r0, _020101F0 ; =_0210F64C
    // str r1, [r0, #0x20]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020101F4 ; =_0210F66C
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // nop
    // _020101EC: .word _020F5D64
    // _020101F0: .word _0210F64C
    // _020101F4: .word _0210F66C
    // TODO: decompile
}


void FadeFunc_05(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _0201021E
    // ldr r1, _02010224 ; =_020F5D58
    // ldr r0, _02010228 ; =_0210F64C
    // str r1, [r0, #0x28]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _0201022C ; =_0210F674
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // _02010224: .word _020F5D58
    // _02010228: .word _0210F64C
    // _0201022C: .word _0210F674
    // TODO: decompile
}


void FadeFunc_06(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010252
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010258 ; =_020F5E2C
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // _02010258: .word _020F5E2C
    // TODO: decompile
}


void FadeFunc_07(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _0201027C
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010284 ; =_020F5E38
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // nop
    // _02010284: .word _020F5E38
    // TODO: decompile
}


void FadeFunc_08(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020102B0
    // ldr r1, _020102B8 ; =_020F5D90
    // ldr r0, _020102BC ; =_0210F64C
    // str r1, [r0, #8]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020102C0 ; =_0210F654
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // nop
    // _020102B8: .word _020F5D90
    // _020102BC: .word _0210F64C
    // _020102C0: .word _0210F654
    // TODO: decompile
}


void FadeFunc_09(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020102EA
    // ldr r1, _020102F0 ; =_020F5D68
    // ldr r0, _020102F4 ; =_0210F64C
    // str r1, [r0, #0x38]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020102F8 ; =_0210F684
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // _020102F0: .word _020F5D68
    // _020102F4: .word _0210F64C
    // _020102F8: .word _0210F684
    // TODO: decompile
}


void FadeFunc_10(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010324
    // ldr r1, _0201032C ; =_020F5D80
    // ldr r0, _02010330 ; =_0210F64C
    // str r1, [r0, #0x48]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010334 ; =_0210F694
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // nop
    // _0201032C: .word _020F5D80
    // _02010330: .word _0210F64C
    // _02010334: .word _0210F694
    // TODO: decompile
}


void FadeFunc_11(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _0201035E
    // ldr r1, _02010364 ; =_020F5DB8
    // ldr r0, _02010368 ; =_0210F64C
    // str r1, [r0, #0x40]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _0201036C ; =_0210F68C
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // _02010364: .word _020F5DB8
    // _02010368: .word _0210F64C
    // _0201036C: .word _0210F68C
    // TODO: decompile
}


void FadeFunc_12(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010392
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010398 ; =_020F5E5C
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // _02010398: .word _020F5E5C
    // TODO: decompile
}


void FadeFunc_13(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020103BC
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020103C4 ; =_020F5E68
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // nop
    // _020103C4: .word _020F5E68
    // TODO: decompile
}


void FadeFunc_14(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020103EC
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020103F4 ; =_020F5E80
    // ldr r2, _020103F8 ; =_020F5E8C
    // add r0, r4, #0
    // bl sub_020116EC
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02011744
    // pop {r4, pc}
    // nop
    // _020103F4: .word _020F5E80
    // _020103F8: .word _020F5E8C
    // TODO: decompile
}


void FadeFunc_15(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _0201041E
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010424 ; =_020F5EA4
    // ldr r2, _02010428 ; =_020F5EB0
    // add r0, r4, #0
    // bl sub_020116EC
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02011744
    // pop {r4, pc}
    // _02010424: .word _020F5EA4
    // _02010428: .word _020F5EB0
    // TODO: decompile
}


void FadeFunc_16(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _0201044E
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010454 ; =_020F5EC8
    // add r0, r4, #0
    // bl sub_02011884
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020118BC
    // pop {r4, pc}
    // _02010454: .word _020F5EC8
    // TODO: decompile
}


void FadeFunc_17(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010478
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010480 ; =_020F5ED4
    // add r0, r4, #0
    // bl sub_02011884
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020118BC
    // pop {r4, pc}
    // nop
    // _02010480: .word _020F5ED4
    // TODO: decompile
}


void FadeFunc_18(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020104A6
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020104AC ; =_020F5DD8
    // add r0, r4, #0
    // bl sub_02011884
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020118BC
    // pop {r4, pc}
    // _020104AC: .word _020F5DD8
    // TODO: decompile
}


void FadeFunc_19(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020104D0
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020104D8 ; =_020F5DE4
    // add r0, r4, #0
    // bl sub_02011884
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020118BC
    // pop {r4, pc}
    // nop
    // _020104D8: .word _020F5DE4
    // TODO: decompile
}


void FadeFunc_20(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020104FE
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010504 ; =_020F5DD0
    // add r0, r4, #0
    // bl sub_02011B5C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02011B94
    // pop {r4, pc}
    // _02010504: .word _020F5DD0
    // TODO: decompile
}


void FadeFunc_21(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010528
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010530 ; =_020F5DC8
    // add r0, r4, #0
    // bl sub_02011B5C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02011B94
    // pop {r4, pc}
    // nop
    // _02010530: .word _020F5DC8
    // TODO: decompile
}


void FadeFunc_22(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010556
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _0201055C ; =_020F5E08
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // _0201055C: .word _020F5E08
    // TODO: decompile
}


void FadeFunc_23(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010580
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010588 ; =_020F5E14
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // nop
    // _02010588: .word _020F5E14
    // TODO: decompile
}


void FadeFunc_24(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020105AE
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020105B4 ; =_020F5E20
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // _020105B4: .word _020F5E20
    // TODO: decompile
}


void FadeFunc_25(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020105D8
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020105E0 ; =_020F5E44
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // nop
    // _020105E0: .word _020F5E44
    // TODO: decompile
}


void FadeFunc_26(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010606
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _0201060C ; =_020F5DA8
    // add r0, r4, #0
    // bl sub_02011D60
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02011D98
    // pop {r4, pc}
    // _0201060C: .word _020F5DA8
    // TODO: decompile
}


void FadeFunc_27(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010630
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010638 ; =_020F5DA0
    // add r0, r4, #0
    // bl sub_02011D60
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02011D98
    // pop {r4, pc}
    // nop
    // _02010638: .word _020F5DA0
    // TODO: decompile
}


void FadeFunc_28(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010680
    // ldr r0, _02010688 ; =_020F5EEC
    // mov r1, #4
    // str r0, [sp]
    // ldr r0, _0201068C ; =_020F5EFC
    // str r0, [sp, #4]
    // add r0, sp, #0
    // strh r1, [r0, #8]
    // mov r1, #0
    // strh r1, [r0, #0xa]
    // mov r1, #0x3f
    // strb r1, [r0, #0xc]
    // mov r1, #0x20
    // strb r1, [r0, #0xd]
    // mov r1, #1
    // strh r1, [r0, #0xe]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_02011FF8
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // add sp, #0x10
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02012030
    // add sp, #0x10
    // pop {r4, pc}
    // _02010688: .word _020F5EEC
    // _0201068C: .word _020F5EFC
    // TODO: decompile
}


void FadeFunc_29(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020106D0
    // ldr r0, _020106D8 ; =_020F5F0C
    // mov r1, #4
    // str r0, [sp]
    // ldr r0, _020106DC ; =_020F5F1C
    // mov r2, #0
    // str r0, [sp, #4]
    // add r0, sp, #0
    // strh r1, [r0, #8]
    // strh r2, [r0, #0xa]
    // mov r1, #0x3f
    // strb r1, [r0, #0xc]
    // mov r1, #0x20
    // strb r1, [r0, #0xd]
    // strh r2, [r0, #0xe]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_02011FF8
    // mov r0, #0
    // str r0, [r4, #0x28]
    // add sp, #0x10
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02012030
    // add sp, #0x10
    // pop {r4, pc}
    // _020106D8: .word _020F5F0C
    // _020106DC: .word _020F5F1C
    // TODO: decompile
}


void FadeFunc_30(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010708
    // ldr r1, _02010710 ; =_020F5EBC
    // ldr r0, _02010714 ; =_0210F64C
    // str r1, [r0, #0x30]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010718 ; =_0210F67C
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // nop
    // _02010710: .word _020F5EBC
    // _02010714: .word _0210F64C
    // _02010718: .word _0210F67C
    // TODO: decompile
}


void FadeFunc_31(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010742
    // ldr r1, _02010748 ; =_020F5DF0
    // ldr r0, _0201074C ; =_0210F64C
    // str r1, [r0, #0x18]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010750 ; =_0210F664
    // add r0, r4, #0
    // bl sub_0201289C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020128E0
    // pop {r4, pc}
    // _02010748: .word _020F5DF0
    // _0201074C: .word _0210F64C
    // _02010750: .word _0210F664
    // TODO: decompile
}


void FadeFunc_32(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _0201078E
    // ldr r1, _02010798 ; =_020F5D58
    // add r0, sp, #0
    // ldrh r2, [r1, #0x30]
    // strh r2, [r0]
    // ldrh r2, [r1, #0x32]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #0x34]
    // ldrh r1, [r1, #0x36]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_020122B8
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // add sp, #8
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020122F8
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _02010798: .word _020F5D58
    // TODO: decompile
}


void FadeFunc_33(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020107D4
    // ldr r1, _020107DC ; =_020F5D98
    // add r0, sp, #0
    // ldrh r2, [r1, #0x28]
    // strh r2, [r0]
    // ldrh r2, [r1, #0x2a]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #0x2c]
    // ldrh r1, [r1, #0x2e]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_020122B8
    // mov r0, #0
    // str r0, [r4, #0x28]
    // add sp, #8
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020122F8
    // add sp, #8
    // pop {r4, pc}
    // _020107DC: .word _020F5D98
    // TODO: decompile
}


void FadeFunc_34(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _0201081A
    // ldr r1, _02010824 ; =_020F5D58
    // add r0, sp, #0
    // ldrh r2, [r1, #0x20]
    // strh r2, [r0]
    // ldrh r2, [r1, #0x22]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #0x24]
    // ldrh r1, [r1, #0x26]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_020125EC
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // add sp, #8
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201262C
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _02010824: .word _020F5D58
    // TODO: decompile
}


void FadeFunc_35(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010860
    // ldr r1, _02010868 ; =_020F5D58
    // add r0, sp, #0
    // ldrh r2, [r1, #0x18]
    // strh r2, [r0]
    // ldrh r2, [r1, #0x1a]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #0x1c]
    // ldrh r1, [r1, #0x1e]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_020125EC
    // mov r0, #0
    // str r0, [r4, #0x28]
    // add sp, #8
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201262C
    // add sp, #8
    // pop {r4, pc}
    // _02010868: .word _020F5D58
    // TODO: decompile
}


void FadeFunc_36(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _0201088E
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010894 ; =_020F5E98
    // add r0, r4, #0
    // bl sub_02011884
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020118BC
    // pop {r4, pc}
    // _02010894: .word _020F5E98
    // TODO: decompile
}


void FadeFunc_37(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020108B8
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020108C0 ; =_020F5EE0
    // add r0, r4, #0
    // bl sub_02011884
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_020118BC
    // pop {r4, pc}
    // nop
    // _020108C0: .word _020F5EE0
    // TODO: decompile
}


void FadeFunc_38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020108E6
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020108EC ; =_020F5DFC
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // _020108EC: .word _020F5DFC
    // TODO: decompile
}


void FadeFunc_39(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010910
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010918 ; =_020F5E50
    // add r0, r4, #0
    // bl sub_0201164C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_0201169C
    // pop {r4, pc}
    // nop
    // _02010918: .word _020F5E50
    // TODO: decompile
}


void FadeFunc_40(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _02010944
    // ldr r1, _0201094C ; =_020F5D98
    // ldr r0, _02010950 ; =_0210F64C
    // str r1, [r0, #0x5c]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _02010954 ; =_0210F69C
    // add r0, r4, #0
    // bl sub_02012B1C
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02012B80
    // pop {r4, pc}
    // nop
    // _0201094C: .word _020F5D98
    // _02010950: .word _0210F64C
    // _02010954: .word _0210F69C
    // TODO: decompile
}


void FadeFunc_41(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _0201097E
    // ldr r1, _02010984 ; =_020F5DB0
    // ldr r0, _02010988 ; =_0210F64C
    // str r1, [r0, #0x74]
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _0201098C ; =_0210F6B4
    // add r0, r4, #0
    // bl sub_02012B1C
    // mov r0, #0
    // str r0, [r4, #0x28]
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02012B80
    // pop {r4, pc}
    // _02010984: .word _020F5DB0
    // _02010988: .word _0210F64C
    // _0201098C: .word _0210F6B4
    // TODO: decompile
}


void FadeFunc_42(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // cmp r1, #0
    // bne _020109B2
    // ldrh r0, [r4, #0x24]
    // bl sub_0200FCDC
    // ldr r1, _020109B8 ; =_020F5E74
    // add r0, r4, #0
    // bl sub_02012DD8
    // mov r0, #1
    // str r0, [r4, #0x28]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // bl sub_02012E10
    // pop {r4, pc}
    // _020109B8: .word _020F5E74
    // TODO: decompile
}


void sub_020109BC(void) {
    // asr r0, r0, #4
    // lsl r1, r0, #1
    // lsl r0, r1, #1
    // ldr r2, _020109D0 ; =FX_SinCosTable_
    // add r1, r1, #1
    // lsl r1, r1, #1
    // ldr r3, _020109D4 ; =FX_Div
    // ldrsh r0, [r2, r0]
    // ldrsh r1, [r2, r1]
    // bx r3
    // _020109D0: .word FX_SinCosTable_
    // _020109D4: .word FX_Div
    // TODO: decompile
}


void sub_020109D8(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl sub_020109BC
    // lsl r2, r4, #0xc
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // asr r0, r1, #0xc
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02010A00(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r7, r2, #0
    // add r6, r3, #0
    // bl sub_020109BC
    // cmp r6, r7
    // bge _02010A4A
    // lsl r1, r6, #2
    // str r0, [sp]
    // asr r0, r0, #0x1f
    // lsl r4, r6, #0xc
    // add r5, r5, r1
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [sp, #4]
    // asr r3, r4, #0x1f
    // add r2, r4, #0
    // bl _ll_mul
    // mov r2, #2
    // lsl r2, r2, #0xa
    // add r0, r0, r2
    // ldr r2, _02010A50 ; =0x00000000
    // adc r1, r2
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // asr r0, r0, #0xc
    // stmia r5!, {r0}
    // mov r0, #1
    // lsl r0, r0, #0xc
    // add r6, r6, #1
    // add r4, r4, r0
    // cmp r6, r7
    // blt _02010A1E
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02010A50: .word 0x00000000
    // TODO: decompile
}


void sub_02010A54(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // bl sub_020109BC
    // add r1, r0, #0
    // lsr r0, r4, #0x1f
    // add r0, r4, r0
    // asr r0, r0, #1
    // lsl r0, r0, #0xc
    // bl FX_Div
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02010A6C(void) {
    // ldr r3, _02010A78 ; =_s32_div_f
    // sub r0, r1, r0
    // lsl r0, r0, #7
    // add r1, r2, #0
    // bx r3
    // nop
    // _02010A78: .word _s32_div_f
    // TODO: decompile
}


void sub_02010A7C(void) {
    // add r0, r0, r1
    // bpl _02010A82
    // mov r0, #0
    // cmp r0, #0xff
    // ble _02010A88
    // mov r0, #0xff
    // bx lr
    // TODO: decompile
}


void sub_02010A8C(void) {
    // ldr r3, [r0]
    // ldr r2, [r1]
    // add r2, r3, r2
    // str r2, [r0]
    // ldr r3, [r0, #4]
    // ldr r2, [r1, #4]
    // add r2, r3, r2
    // str r2, [r0, #4]
    // ldr r3, [r0, #8]
    // ldr r2, [r1, #8]
    // add r2, r3, r2
    // str r2, [r0, #8]
    // ldr r2, [r0, #0xc]
    // ldr r1, [r1, #0xc]
    // add r1, r2, r1
    // str r1, [r0, #0xc]
    // bx lr
    // TODO: decompile
}


void sub_02010AB0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r3, #0
    // add r6, r2, #0
    // ldrb r2, [r5]
    // ldr r4, [sp, #0x18]
    // ldr r7, [sp, #0x1c]
    // lsl r2, r2, #7
    // str r2, [r0]
    // ldrb r2, [r5, #1]
    // lsl r2, r2, #7
    // str r2, [r0, #4]
    // ldrb r2, [r5, #2]
    // lsl r2, r2, #7
    // str r2, [r0, #8]
    // ldrb r2, [r5, #3]
    // lsl r2, r2, #7
    // str r2, [r0, #0xc]
    // ldrb r0, [r4]
    // add r2, r7, #0
    // str r0, [r1]
    // ldrb r0, [r4, #1]
    // str r0, [r1, #4]
    // ldrb r0, [r4, #2]
    // str r0, [r1, #8]
    // ldrb r0, [r4, #3]
    // str r0, [r1, #0xc]
    // ldrb r0, [r5]
    // ldrb r1, [r4]
    // bl sub_02010A6C
    // str r0, [r6]
    // ldrb r0, [r5, #1]
    // ldrb r1, [r4, #1]
    // add r2, r7, #0
    // bl sub_02010A6C
    // str r0, [r6, #4]
    // ldrb r0, [r5, #2]
    // ldrb r1, [r4, #2]
    // add r2, r7, #0
    // bl sub_02010A6C
    // str r0, [r6, #8]
    // ldrb r0, [r5, #3]
    // ldrb r1, [r4, #3]
    // add r2, r7, #0
    // bl sub_02010A6C
    // str r0, [r6, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02010B14(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // add r6, r1, #0
    // mov r1, #0x1c
    // bl Heap_Alloc
    // str r0, [r5, #0x14]
    // mov r2, #0x1c
    // mov r1, #0
    // strb r1, [r0]
    // add r0, r0, #1
    // sub r2, r2, #1
    // bne _02010B28
    // ldr r4, [r5, #0x14]
    // cmp r6, #0
    // ldrh r1, [r5, #0x24]
    // ldr r0, _02010BB0 ; =0x00007FFF
    // bne _02010B5C
    // cmp r1, r0
    // bne _02010B44
    // mov r7, #0x10
    // mov r6, #0
    // b _02010B7C
    // cmp r1, #0
    // bne _02010B50
    // mov r7, #0xf
    // mvn r7, r7
    // mov r6, #0
    // b _02010B7C
    // mov r7, #0xf
    // mvn r7, r7
    // mov r6, #0
    // bl GF_AssertFail
    // b _02010B7C
    // cmp r1, r0
    // bne _02010B66
    // mov r7, #0
    // mov r6, #0x10
    // b _02010B7C
    // cmp r1, #0
    // bne _02010B72
    // mov r7, #0
    // add r6, r7, #0
    // sub r6, #0x10
    // b _02010B7C
    // mov r7, #0
    // add r6, r7, #0
    // sub r6, #0x10
    // bl GF_AssertFail
    // ldr r0, [r5, #0x10]
    // add r1, r7, #0
    // bl SetMasterBrightness
    // ldr r0, [r5, #4]
    // add r1, r6, #0
    // str r0, [r4]
    // ldr r0, [r5, #8]
    // str r0, [r4, #4]
    // mov r0, #0
    // str r0, [r4, #8]
    // lsl r0, r7, #7
    // str r0, [r4, #0xc]
    // lsl r0, r6, #7
    // str r0, [r4, #0x10]
    // ldr r2, [r5, #4]
    // add r0, r7, #0
    // bl sub_02010A6C
    // str r0, [r4, #0x14]
    // ldr r0, [r5, #0x10]
    // str r0, [r4, #0x18]
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // pop {r3, r4, r5, r6, r7, pc}
    // _02010BB0: .word 0x00007FFF
    // TODO: decompile
}


void sub_02010BB4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r1, [r5, #0xc]
    // mov r4, #0
    // ldr r0, [r5, #0x14]
    // cmp r1, #1
    // beq _02010BCC
    // cmp r1, #2
    // beq _02010BDC
    // cmp r1, #3
    // beq _02010BEE
    // b _02010BF0
    // bl sub_02010BF4
    // cmp r0, #1
    // bne _02010BF0
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02010BF0
    // bl Heap_Free
    // add r0, r4, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r4, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02010BF0
    // mov r4, #1
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02010BF4(void) {
    // push {r4, lr}
    // add r1, r0, #0
    // ldr r0, [r1, #8]
    // mov r4, #0
    // add r2, r0, #1
    // str r2, [r1, #8]
    // ldr r0, [r1, #4]
    // cmp r2, r0
    // blt _02010C32
    // str r4, [r1, #8]
    // ldr r0, [r1]
    // sub r0, r0, #1
    // cmp r0, #0
    // ble _02010C1C
    // str r0, [r1]
    // ldr r2, [r1, #0xc]
    // ldr r0, [r1, #0x14]
    // add r0, r2, r0
    // str r0, [r1, #0xc]
    // b _02010C22
    // ldr r0, [r1, #0x10]
    // mov r4, #1
    // str r0, [r1, #0xc]
    // ldr r2, [r1, #0xc]
    // ldr r0, [r1, #0x18]
    // asr r1, r2, #6
    // lsr r1, r1, #0x19
    // add r1, r2, r1
    // asr r1, r1, #7
    // bl SetMasterBrightness
    // add r0, r4, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02010C38(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // bne _02010C42
    // bl GF_AssertFail
    // ldr r0, _02010E54 ; =0x04000006
    // ldrh r0, [r0]
    // cmp r0, #0xc0
    // bge _02010CE8
    // add r5, r0, #1
    // cmp r5, #0xbf
    // ble _02010C52
    // sub r5, #0xc0
    // ldr r0, [r4, #4]
    // cmp r0, #1
    // bne _02010D02
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02010EE0
    // ldr r3, [r4, #8]
    // lsl r5, r5, #1
    // mov r4, #6
    // add r1, r0, r5
    // lsl r4, r4, #6
    // ldrsh r2, [r1, r4]
    // lsl r4, r4, #2
    // ldrsh r1, [r0, r5]
    // ldr r0, [r0, r4]
    // cmp r0, #0
    // ldr r0, _02010E58 ; =0x04000004
    // bne _02010CBC
    // cmp r3, #0
    // bne _02010C9C
    // ldrh r4, [r0]
    // mov r3, #2
    // tst r3, r4
    // beq _02010CE8
    // lsl r3, r1, #8
    // mov r1, #0xff
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // orr r1, r3
    // strh r1, [r0, #0x3c]
    // mov r1, #0xc0
    // add r0, #0x40
    // strh r1, [r0]
    // pop {r4, r5, r6, pc}
    // ldrh r3, [r0]
    // mov r0, #2
    // tst r0, r3
    // beq _02010CE8
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r1, r0
    // lsl r0, r2, #0x18
    // lsr r0, r0, #0x18
    // orr r0, r1
    // ldr r1, _02010E5C ; =0x04001040
    // strh r0, [r1]
    // mov r0, #0xc0
    // strh r0, [r1, #4]
    // pop {r4, r5, r6, pc}
    // cmp r3, #0
    // bne _02010CE0
    // ldrh r4, [r0]
    // mov r3, #2
    // tst r3, r4
    // beq _02010CE8
    // lsl r3, r1, #8
    // mov r1, #0xff
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // orr r1, r3
    // strh r1, [r0, #0x3e]
    // mov r1, #0xc0
    // add r0, #0x42
    // strh r1, [r0]
    // pop {r4, r5, r6, pc}
    // ldrh r3, [r0]
    // mov r0, #2
    // tst r0, r3
    // bne _02010CEA
    // b _02010E50
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r1, r0
    // lsl r0, r2, #0x18
    // lsr r0, r0, #0x18
    // orr r0, r1
    // ldr r1, _02010E60 ; =0x04001042
    // strh r0, [r1]
    // mov r0, #0xc0
    // strh r0, [r1, #4]
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02010EE0
    // add r3, r0, #0
    // lsl r5, r5, #1
    // mov r6, #6
    // add r1, r3, r5
    // lsl r6, r6, #6
    // ldrsh r2, [r1, r6]
    // lsl r6, r6, #2
    // ldrsh r1, [r3, r5]
    // ldr r3, [r3, r6]
    // ldr r0, [r4, #8]
    // cmp r3, #0
    // bne _02010D68
    // cmp r0, #0
    // ldr r0, _02010E58 ; =0x04000004
    // bne _02010D48
    // ldrh r6, [r0]
    // mov r3, #2
    // tst r3, r6
    // beq _02010DAC
    // lsl r3, r1, #8
    // mov r1, #0xff
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // orr r1, r3
    // strh r1, [r0, #0x3c]
    // mov r1, #0xc0
    // add r0, #0x40
    // strh r1, [r0]
    // b _02010DAC
    // ldrh r3, [r0]
    // mov r0, #2
    // tst r0, r3
    // beq _02010DAC
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r1, r0
    // lsl r0, r2, #0x18
    // lsr r0, r0, #0x18
    // orr r0, r1
    // ldr r1, _02010E5C ; =0x04001040
    // strh r0, [r1]
    // mov r0, #0xc0
    // strh r0, [r1, #4]
    // b _02010DAC
    // cmp r0, #0
    // ldr r0, _02010E58 ; =0x04000004
    // bne _02010D8E
    // ldrh r6, [r0]
    // mov r3, #2
    // tst r3, r6
    // beq _02010DAC
    // lsl r3, r1, #8
    // mov r1, #0xff
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // orr r1, r3
    // strh r1, [r0, #0x3e]
    // mov r1, #0xc0
    // add r0, #0x42
    // strh r1, [r0]
    // b _02010DAC
    // ldrh r3, [r0]
    // mov r0, #2
    // tst r0, r3
    // beq _02010DAC
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r1, r0
    // lsl r0, r2, #0x18
    // lsr r0, r0, #0x18
    // orr r0, r1
    // ldr r1, _02010E60 ; =0x04001042
    // strh r0, [r1]
    // mov r0, #0xc0
    // strh r0, [r1, #4]
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_02010EE0
    // ldr r3, [r4, #8]
    // mov r4, #6
    // add r1, r0, r5
    // lsl r4, r4, #6
    // ldrsh r2, [r1, r4]
    // lsl r4, r4, #2
    // ldrsh r1, [r0, r5]
    // ldr r0, [r0, r4]
    // cmp r0, #0
    // ldr r0, _02010E58 ; =0x04000004
    // bne _02010E0E
    // cmp r3, #0
    // bne _02010DEE
    // ldrh r4, [r0]
    // mov r3, #2
    // tst r3, r4
    // beq _02010E50
    // lsl r3, r1, #8
    // mov r1, #0xff
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // orr r1, r3
    // strh r1, [r0, #0x3c]
    // mov r1, #0xc0
    // add r0, #0x40
    // strh r1, [r0]
    // pop {r4, r5, r6, pc}
    // ldrh r3, [r0]
    // mov r0, #2
    // tst r0, r3
    // beq _02010E50
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r1, r0
    // lsl r0, r2, #0x18
    // lsr r0, r0, #0x18
    // orr r0, r1
    // ldr r1, _02010E5C ; =0x04001040
    // strh r0, [r1]
    // mov r0, #0xc0
    // strh r0, [r1, #4]
    // pop {r4, r5, r6, pc}
    // cmp r3, #0
    // bne _02010E32
    // ldrh r4, [r0]
    // mov r3, #2
    // tst r3, r4
    // beq _02010E50
    // lsl r3, r1, #8
    // mov r1, #0xff
    // lsl r1, r1, #8
    // and r3, r1
    // lsl r1, r2, #0x18
    // lsr r1, r1, #0x18
    // orr r1, r3
    // strh r1, [r0, #0x3e]
    // mov r1, #0xc0
    // add r0, #0x42
    // strh r1, [r0]
    // pop {r4, r5, r6, pc}
    // ldrh r3, [r0]
    // mov r0, #2
    // tst r0, r3
    // beq _02010E50
    // mov r0, #0xff
    // lsl r1, r1, #8
    // lsl r0, r0, #8
    // and r1, r0
    // lsl r0, r2, #0x18
    // lsr r0, r0, #0x18
    // orr r0, r1
    // ldr r1, _02010E60 ; =0x04001042
    // strh r0, [r1]
    // mov r0, #0xc0
    // strh r0, [r1, #4]
    // pop {r4, r5, r6, pc}
    // nop
    // _02010E54: .word 0x04000006
    // _02010E58: .word 0x04000004
    // _02010E5C: .word 0x04001040
    // _02010E60: .word 0x04001042
    // TODO: decompile
}


void sub_02010E64(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // cmp r4, #0
    // beq _02010E7A
    // cmp r4, #1
    // beq _02010E7A
    // cmp r4, #2
    // beq _02010E94
    // pop {r4, r5, r6, pc}
    // ldr r1, _02010EC0 ; =0x00000604
    // add r0, r3, #0
    // bl Heap_Alloc
    // str r0, [r5]
    // mov r0, #1
    // str r0, [r5, #4]
    // str r6, [r5, #8]
    // mov r0, #6
    // ldr r1, [r5]
    // lsl r0, r0, #8
    // str r4, [r1, r0]
    // pop {r4, r5, r6, pc}
    // ldr r1, _02010EC4 ; =0x00000C08
    // add r0, r3, #0
    // bl Heap_Alloc
    // str r0, [r5]
    // mov r0, #2
    // str r0, [r5, #4]
    // mov r0, #6
    // mov r3, #0
    // lsl r0, r0, #8
    // str r6, [r5, #8]
    // add r4, r3, #0
    // add r1, r0, #4
    // ldr r2, [r5]
    // add r2, r2, r4
    // str r3, [r2, r0]
    // add r3, r3, #1
    // add r4, r4, r1
    // cmp r3, #2
    // blt _02010EAE
    // pop {r4, r5, r6, pc}
    // nop
    // _02010EC0: .word 0x00000604
    // _02010EC4: .word 0x00000C08
    // TODO: decompile
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
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // str r0, [sp]
    // ldr r0, [r5, #4]
    // mov r4, #0
    // cmp r0, #0
    // ble _02010F2C
    // mov r7, #3
    // lsl r7, r7, #8
    // add r6, r7, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02010EE0
    // add r1, r0, r6
    // add r2, r7, #0
    // bl memcpy
    // ldr r0, [r5, #4]
    // add r4, r4, #1
    // cmp r4, r0
    // blt _02010F14
    // ldr r0, [sp]
    // bl SysTask_Destroy
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02010F34(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r0, #0
    // bne _02010F4C
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02013424
    // add sp, #0xc
    // pop {r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02013424
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #0x3f
    // add r3, r2, #0
    // str r4, [sp]
    // bl sub_02013440
    // mov r1, #0
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r0, r5, #0
    // add r2, r1, #0
    // add r3, r1, #0
    // str r4, [sp, #8]
    // bl sub_02013488
    // add r0, r5, #0
    // mov r1, #0x20
    // mov r2, #0
    // add r3, r4, #0
    // bl sub_02013468
    // add sp, #0xc
    // pop {r4, r5, pc}
    // TODO: decompile
}


void sub_02010F84(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r2, #0
    // ldr r2, [sp, #0x34]
    // add r6, r0, #0
    // add r5, r3, #0
    // ldr r4, [sp, #0x20]
    // cmp r2, #0
    // bne _02010FC0
    // add r0, r1, #0
    // mov r1, #0
    // add r2, r5, #0
    // add r3, r4, #0
    // bl sub_02013220
    // add r0, r7, #0
    // mov r1, #0
    // add r2, r4, #0
    // bl sub_020132A8
    // str r5, [sp]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x2c]
    // ldr r3, [sp, #0x30]
    // str r4, [sp, #4]
    // bl sub_02013364
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // mov r2, #0
    // str r4, [sp]
    // bl sub_02013440
    // add r0, r6, #0
    // add r1, r7, #0
    // mov r2, #0
    // add r3, r4, #0
    // bl sub_02013468
    // ldr r0, [sp, #0x30]
    // ldr r1, [sp, #0x24]
    // str r0, [sp]
    // str r5, [sp, #4]
    // ldr r2, [sp, #0x28]
    // ldr r3, [sp, #0x2c]
    // add r0, r6, #0
    // str r4, [sp, #8]
    // bl sub_02013488
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02010FEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // add r7, r3, #0
    // bl sub_020132E8
    // add r1, sp, #4
    // strb r0, [r1, #1]
    // ldrb r0, [r1, #1]
    // strb r0, [r1, #3]
    // add r0, r4, #0
    // bl sub_0201333C
    // add r1, sp, #4
    // strb r0, [r1]
    // ldrb r0, [r1]
    // cmp r7, #0
    // strb r0, [r1, #2]
    // bne _0201103E
    // ldrb r0, [r1, #2]
    // mov r1, #0
    // add r2, r5, #0
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1b
    // add r3, r4, #0
    // bl sub_02013220
    // add r0, sp, #4
    // ldrb r0, [r0, #3]
    // mov r1, #0
    // add r2, r4, #0
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1b
    // bl sub_020132A8
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // str r4, [sp]
    // ldrb r1, [r1, #2]
    // add r0, r6, #0
    // mov r2, #0
    // lsl r1, r1, #0x1b
    // lsr r1, r1, #0x1b
    // add r3, r5, #0
    // bl sub_02013440
    // add r1, sp, #4
    // ldrb r1, [r1, #3]
    // add r0, r6, #0
    // mov r2, #0
    // lsl r1, r1, #0x1b
    // lsr r1, r1, #0x1b
    // add r3, r4, #0
    // bl sub_02013468
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02011068(void) {
    // push {r3, lr}
    // cmp r3, #0
    // bne _02011078
    // add r0, r1, #0
    // add r1, r2, #0
    // bl sub_020131F4
    // pop {r3, pc}
    // bl sub_02013424
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02011080(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r2, #0
    // mov r2, #0xc3
    // add r6, r1, #0
    // mov r1, #0
    // lsl r2, r2, #2
    // add r5, r0, #0
    // add r7, r3, #0
    // bl memset
    // cmp r4, #1
    // bne _020110AA
    // mov r0, #6
    // lsl r0, r0, #6
    // str r7, [r5, r0]
    // mov r0, #0xc2
    // lsl r0, r0, #2
    // strb r4, [r5, r0]
    // add r0, r0, #1
    // strb r6, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #6
    // lsl r0, r0, #6
    // str r7, [r5, r0]
    // mov r0, #0xc1
    // ldr r1, [sp, #0x18]
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // add r1, r0, #4
    // strb r4, [r5, r1]
    // add r0, r0, #5
    // strb r6, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020110C4(void) {
    // ldr r3, _020110D0 ; =SysTask_CreateOnVWaitQueue
    // add r1, r0, #0
    // ldr r0, _020110D4 ; =sub_02011104
    // ldr r2, _020110D8 ; =0x000003FF
    // bx r3
    // nop
    // _020110D0: .word SysTask_CreateOnVWaitQueue
    // _020110D4: .word sub_02011104
    // _020110D8: .word 0x000003FF
    // TODO: decompile
}


void sub_020110DC(void) {
    sub_0200FF88();
}


void sub_020110F4(void) {
    // ldr r3, _020110FC ; =0x00000309
    // ldrb r1, [r1, r3]
    // ldr r3, _02011100 ; =sub_0200FFB4
    // bx r3
    // _020110FC: .word 0x00000309
    // _02011100: .word sub_0200FFB4
    // TODO: decompile
}


void sub_02011104(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r7, #0xc0
    // add r6, r7, #0
    // str r0, [sp]
    // add r5, r1, #0
    // mov r4, #0
    // add r6, #0xc4
    // add r0, r5, #0
    // add r0, #0xc0
    // add r1, r5, #0
    // add r2, r7, #0
    // bl memcpy
    // add r4, r4, #1
    // add r5, r5, r6
    // cmp r4, #2
    // blt _02011112
    // ldr r0, [sp]
    // bl SysTask_Destroy
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02011130(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bne _0201113A
    // bl GF_AssertFail
    // ldr r0, _02011428 ; =0x04000006
    // ldrh r0, [r0]
    // cmp r0, #0xc0
    // bge _020111BC
    // add r0, r0, #1
    // cmp r0, #0xbf
    // ble _0201114A
    // sub r0, #0xc0
    // mov r2, #0xc2
    // lsl r2, r2, #2
    // ldrb r1, [r4, r2]
    // cmp r1, #1
    // beq _02011156
    // b _020112F0
    // add r0, r4, r0
    // add r0, #0xc0
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02011226
    // add r0, r2, #1
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // ldr r0, _0201142C ; =0x04000004
    // bne _02011186
    // ldrh r2, [r0]
    // mov r1, #2
    // tst r1, r2
    // beq _020111A0
    // add r0, #0x46
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // mov r1, #0x3f
    // orr r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // b _020111A0
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _020111A0
    // ldr r1, _02011430 ; =0x0400104A
    // mov r0, #0x3f
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #0x3f
    // orr r2, r0
    // mov r0, #0x20
    // orr r0, r2
    // strh r0, [r1]
    // ldr r0, _02011434 ; =0x00000309
    // ldrb r1, [r4, r0]
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _020111EC
    // cmp r1, #0
    // bne _020111D0
    // ldr r2, _0201142C ; =0x04000004
    // mov r0, #2
    // ldrh r1, [r2]
    // tst r0, r1
    // bne _020111BE
    // b _02011634
    // add r2, #0x44
    // ldrh r1, [r2]
    // mov r0, #0x3f
    // bic r1, r0
    // mov r0, #0x20
    // orr r1, r0
    // orr r0, r1
    // strh r0, [r2]
    // pop {r3, r4, r5, pc}
    // ldr r0, _0201142C ; =0x04000004
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _020112D8
    // ldr r1, _02011438 ; =0x04001048
    // mov r0, #0x3f
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #0x20
    // orr r2, r0
    // orr r0, r2
    // strh r0, [r1]
    // pop {r3, r4, r5, pc}
    // cmp r1, #0
    // ldr r0, _0201142C ; =0x04000004
    // bne _0201120C
    // ldrh r1, [r0]
    // mov r2, #2
    // tst r1, r2
    // beq _020112D8
    // add r0, #0x44
    // ldrh r3, [r0]
    // ldr r1, _0201143C ; =0xFFFFC0FF
    // and r3, r1
    // lsl r1, r2, #0xc
    // orr r3, r1
    // orr r1, r3
    // strh r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _020112D8
    // ldr r2, _02011438 ; =0x04001048
    // ldr r0, _0201143C ; =0xFFFFC0FF
    // ldrh r1, [r2]
    // and r1, r0
    // lsr r0, r2, #0xd
    // orr r1, r0
    // orr r0, r1
    // strh r0, [r2]
    // pop {r3, r4, r5, pc}
    // add r0, r2, #1
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // ldr r0, _0201142C ; =0x04000004
    // bne _0201124A
    // ldrh r2, [r0]
    // mov r1, #2
    // tst r1, r2
    // beq _02011262
    // add r0, #0x46
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // mov r1, #0x20
    // orr r2, r1
    // orr r1, r2
    // strh r1, [r0]
    // b _02011262
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _02011262
    // ldr r1, _02011430 ; =0x0400104A
    // mov r0, #0x3f
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #0x20
    // orr r2, r0
    // orr r0, r2
    // strh r0, [r1]
    // ldr r0, _02011434 ; =0x00000309
    // ldrb r1, [r4, r0]
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // ldr r0, _0201142C ; =0x04000004
    // bne _020112AE
    // cmp r1, #0
    // bne _02011292
    // ldrh r2, [r0]
    // mov r1, #2
    // tst r1, r2
    // beq _020112D8
    // add r0, #0x44
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // mov r1, #0x3f
    // orr r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _020112D8
    // ldr r1, _02011438 ; =0x04001048
    // mov r0, #0x3f
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #0x3f
    // orr r2, r0
    // mov r0, #0x20
    // orr r0, r2
    // strh r0, [r1]
    // pop {r3, r4, r5, pc}
    // cmp r1, #0
    // bne _020112D0
    // ldrh r1, [r0]
    // mov r2, #2
    // tst r1, r2
    // beq _020112D8
    // add r0, #0x44
    // ldrh r3, [r0]
    // ldr r1, _0201143C ; =0xFFFFC0FF
    // and r3, r1
    // mov r1, #0x3f
    // lsl r1, r1, #8
    // orr r3, r1
    // lsl r1, r2, #0xc
    // orr r1, r3
    // strh r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // bne _020112DA
    // b _02011634
    // ldr r2, _02011438 ; =0x04001048
    // ldr r0, _0201143C ; =0xFFFFC0FF
    // ldrh r1, [r2]
    // and r1, r0
    // mov r0, #0x3f
    // lsl r0, r0, #8
    // orr r1, r0
    // lsr r0, r2, #0xd
    // orr r0, r1
    // strh r0, [r2]
    // pop {r3, r4, r5, pc}
    // add r1, r4, r0
    // add r1, #0xc0
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _020113BC
    // add r1, r2, #1
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // ldr r1, _0201142C ; =0x04000004
    // bne _02011320
    // ldrh r3, [r1]
    // mov r2, #2
    // tst r2, r3
    // beq _0201133A
    // add r1, #0x46
    // ldrh r3, [r1]
    // mov r2, #0x3f
    // bic r3, r2
    // mov r2, #0x3f
    // orr r3, r2
    // mov r2, #0x20
    // orr r2, r3
    // strh r2, [r1]
    // b _0201133A
    // ldrh r2, [r1]
    // mov r1, #2
    // tst r1, r2
    // beq _0201133A
    // ldr r2, _02011430 ; =0x0400104A
    // mov r1, #0x3f
    // ldrh r3, [r2]
    // bic r3, r1
    // mov r1, #0x3f
    // orr r3, r1
    // mov r1, #0x20
    // orr r1, r3
    // strh r1, [r2]
    // ldr r1, _02011434 ; =0x00000309
    // ldrb r2, [r4, r1]
    // mov r1, #6
    // lsl r1, r1, #6
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // ldr r1, _0201142C ; =0x04000004
    // bne _02011382
    // cmp r2, #0
    // bne _02011368
    // ldrh r3, [r1]
    // mov r2, #2
    // tst r2, r3
    // beq _0201138E
    // add r1, #0x44
    // ldrh r3, [r1]
    // mov r2, #0x3f
    // bic r3, r2
    // mov r2, #0x20
    // orr r3, r2
    // orr r2, r3
    // strh r2, [r1]
    // b _0201149A
    // ldrh r2, [r1]
    // mov r1, #2
    // tst r1, r2
    // beq _0201138E
    // ldr r2, _02011438 ; =0x04001048
    // mov r1, #0x3f
    // ldrh r3, [r2]
    // bic r3, r1
    // mov r1, #0x20
    // orr r3, r1
    // orr r1, r3
    // strh r1, [r2]
    // b _0201149A
    // cmp r2, #0
    // bne _020113A2
    // ldrh r2, [r1]
    // mov r3, #2
    // tst r2, r3
    // bne _02011390
    // b _0201149A
    // add r1, #0x44
    // ldrh r5, [r1]
    // ldr r2, _0201143C ; =0xFFFFC0FF
    // and r5, r2
    // lsl r2, r3, #0xc
    // orr r5, r2
    // orr r2, r5
    // strh r2, [r1]
    // b _0201149A
    // ldrh r2, [r1]
    // mov r1, #2
    // tst r1, r2
    // beq _0201149A
    // ldr r3, _02011438 ; =0x04001048
    // ldr r1, _0201143C ; =0xFFFFC0FF
    // ldrh r2, [r3]
    // and r2, r1
    // lsr r1, r3, #0xd
    // orr r2, r1
    // orr r1, r2
    // strh r1, [r3]
    // b _0201149A
    // add r1, r2, #1
    // ldrb r1, [r4, r1]
    // cmp r1, #0
    // ldr r1, _0201142C ; =0x04000004
    // bne _020113E0
    // ldrh r3, [r1]
    // mov r2, #2
    // tst r2, r3
    // beq _020113F8
    // add r1, #0x46
    // ldrh r3, [r1]
    // mov r2, #0x3f
    // bic r3, r2
    // mov r2, #0x20
    // orr r3, r2
    // orr r2, r3
    // strh r2, [r1]
    // b _020113F8
    // ldrh r2, [r1]
    // mov r1, #2
    // tst r1, r2
    // beq _020113F8
    // ldr r2, _02011430 ; =0x0400104A
    // mov r1, #0x3f
    // ldrh r3, [r2]
    // bic r3, r1
    // mov r1, #0x20
    // orr r3, r1
    // orr r1, r3
    // strh r1, [r2]
    // ldr r1, _02011434 ; =0x00000309
    // ldrb r2, [r4, r1]
    // mov r1, #6
    // lsl r1, r1, #6
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // ldr r1, _0201142C ; =0x04000004
    // bne _0201145C
    // cmp r2, #0
    // bne _02011440
    // ldrh r3, [r1]
    // mov r2, #2
    // tst r2, r3
    // beq _0201149A
    // add r1, #0x44
    // ldrh r3, [r1]
    // mov r2, #0x3f
    // bic r3, r2
    // mov r2, #0x3f
    // orr r3, r2
    // mov r2, #0x20
    // orr r2, r3
    // strh r2, [r1]
    // b _0201149A
    // _02011428: .word 0x04000006
    // _0201142C: .word 0x04000004
    // _02011430: .word 0x0400104A
    // _02011434: .word 0x00000309
    // _02011438: .word 0x04001048
    // _0201143C: .word 0xFFFFC0FF
    // ldrh r2, [r1]
    // mov r1, #2
    // tst r1, r2
    // beq _0201149A
    // ldr r2, _02011638 ; =0x04001048
    // mov r1, #0x3f
    // ldrh r3, [r2]
    // bic r3, r1
    // mov r1, #0x3f
    // orr r3, r1
    // mov r1, #0x20
    // orr r1, r3
    // strh r1, [r2]
    // b _0201149A
    // cmp r2, #0
    // bne _0201147E
    // ldrh r2, [r1]
    // mov r3, #2
    // tst r2, r3
    // beq _0201149A
    // add r1, #0x44
    // ldrh r5, [r1]
    // ldr r2, _0201163C ; =0xFFFFC0FF
    // and r5, r2
    // mov r2, #0x3f
    // lsl r2, r2, #8
    // orr r5, r2
    // lsl r2, r3, #0xc
    // orr r2, r5
    // strh r2, [r1]
    // b _0201149A
    // ldrh r2, [r1]
    // mov r1, #2
    // tst r1, r2
    // beq _0201149A
    // ldr r3, _02011638 ; =0x04001048
    // ldr r1, _0201163C ; =0xFFFFC0FF
    // ldrh r2, [r3]
    // and r2, r1
    // mov r1, #0x3f
    // lsl r1, r1, #8
    // orr r2, r1
    // lsr r1, r3, #0xd
    // orr r1, r2
    // strh r1, [r3]
    // mov r1, #0x61
    // lsl r1, r1, #2
    // add r1, r4, r1
    // add r0, r1, r0
    // add r0, #0xc0
    // ldrb r0, [r0]
    // cmp r0, #0
    // ldr r0, _02011640 ; =0x00000309
    // bne _02011570
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // ldr r0, _02011644 ; =0x04000004
    // bne _020114D0
    // ldrh r3, [r0]
    // mov r2, #2
    // tst r2, r3
    // beq _020114EA
    // add r0, #0x46
    // ldrh r3, [r0]
    // mov r2, #0x3f
    // bic r3, r2
    // mov r2, #0x3f
    // orr r3, r2
    // mov r2, #0x20
    // orr r2, r3
    // strh r2, [r0]
    // b _020114EA
    // ldrh r2, [r0]
    // mov r0, #2
    // tst r0, r2
    // beq _020114EA
    // ldr r2, _02011648 ; =0x0400104A
    // mov r0, #0x3f
    // ldrh r3, [r2]
    // bic r3, r0
    // mov r0, #0x3f
    // orr r3, r0
    // mov r0, #0x20
    // orr r0, r3
    // strh r0, [r2]
    // ldr r0, _02011640 ; =0x00000309
    // ldrb r2, [r4, r0]
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // bne _02011536
    // cmp r2, #0
    // bne _02011518
    // ldr r2, _02011644 ; =0x04000004
    // mov r0, #2
    // ldrh r1, [r2]
    // tst r0, r1
    // beq _02011522
    // add r2, #0x44
    // ldrh r1, [r2]
    // mov r0, #0x3f
    // bic r1, r0
    // mov r0, #0x20
    // orr r1, r0
    // orr r0, r1
    // strh r0, [r2]
    // pop {r3, r4, r5, pc}
    // ldr r0, _02011644 ; =0x04000004
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // bne _02011524
    // b _02011634
    // ldr r1, _02011638 ; =0x04001048
    // mov r0, #0x3f
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #0x20
    // orr r2, r0
    // orr r0, r2
    // strh r0, [r1]
    // pop {r3, r4, r5, pc}
    // cmp r2, #0
    // ldr r0, _02011644 ; =0x04000004
    // bne _02011556
    // ldrh r1, [r0]
    // mov r2, #2
    // tst r1, r2
    // beq _02011634
    // add r0, #0x44
    // ldrh r3, [r0]
    // ldr r1, _0201163C ; =0xFFFFC0FF
    // and r3, r1
    // lsl r1, r2, #0xc
    // orr r3, r1
    // orr r1, r3
    // strh r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _02011634
    // ldr r2, _02011638 ; =0x04001048
    // ldr r0, _0201163C ; =0xFFFFC0FF
    // ldrh r1, [r2]
    // and r1, r0
    // lsr r0, r2, #0xd
    // orr r1, r0
    // orr r0, r1
    // strh r0, [r2]
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // ldr r0, _02011644 ; =0x04000004
    // bne _02011592
    // ldrh r3, [r0]
    // mov r2, #2
    // tst r2, r3
    // beq _020115AA
    // add r0, #0x46
    // ldrh r3, [r0]
    // mov r2, #0x3f
    // bic r3, r2
    // mov r2, #0x20
    // orr r3, r2
    // orr r2, r3
    // strh r2, [r0]
    // b _020115AA
    // ldrh r2, [r0]
    // mov r0, #2
    // tst r0, r2
    // beq _020115AA
    // ldr r2, _02011648 ; =0x0400104A
    // mov r0, #0x3f
    // ldrh r3, [r2]
    // bic r3, r0
    // mov r0, #0x20
    // orr r3, r0
    // orr r0, r3
    // strh r0, [r2]
    // ldr r0, _02011640 ; =0x00000309
    // ldrb r2, [r4, r0]
    // mov r0, #6
    // lsl r0, r0, #6
    // ldr r0, [r1, r0]
    // cmp r0, #0
    // ldr r0, _02011644 ; =0x04000004
    // bne _020115F6
    // cmp r2, #0
    // bne _020115DA
    // ldrh r2, [r0]
    // mov r1, #2
    // tst r1, r2
    // beq _02011634
    // add r0, #0x44
    // ldrh r2, [r0]
    // mov r1, #0x3f
    // bic r2, r1
    // mov r1, #0x3f
    // orr r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _02011634
    // ldr r1, _02011638 ; =0x04001048
    // mov r0, #0x3f
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #0x3f
    // orr r2, r0
    // mov r0, #0x20
    // orr r0, r2
    // strh r0, [r1]
    // pop {r3, r4, r5, pc}
    // cmp r2, #0
    // bne _02011618
    // ldrh r1, [r0]
    // mov r2, #2
    // tst r1, r2
    // beq _02011634
    // add r0, #0x44
    // ldrh r3, [r0]
    // ldr r1, _0201163C ; =0xFFFFC0FF
    // and r3, r1
    // mov r1, #0x3f
    // lsl r1, r1, #8
    // orr r3, r1
    // lsl r1, r2, #0xc
    // orr r1, r3
    // strh r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldrh r1, [r0]
    // mov r0, #2
    // tst r0, r1
    // beq _02011634
    // ldr r2, _02011638 ; =0x04001048
    // ldr r0, _0201163C ; =0xFFFFC0FF
    // ldrh r1, [r2]
    // and r1, r0
    // mov r0, #0x3f
    // lsl r0, r0, #8
    // orr r1, r0
    // lsr r0, r2, #0xd
    // orr r0, r1
    // strh r0, [r2]
    // pop {r3, r4, r5, pc}
    // nop
    // _02011638: .word 0x04001048
    // _0201163C: .word 0xFFFFC0FF
    // _02011640: .word 0x00000309
    // _02011644: .word 0x04000004
    // _02011648: .word 0x0400104A
    // TODO: decompile
}


void sub_0201164C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // add r6, r1, #0
    // mov r1, #0x4c
    // bl Heap_Alloc
    // str r0, [r5, #0x14]
    // add r4, r0, #0
    // ldr r0, [r5, #0x10]
    // add r1, r6, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // add r0, r4, #0
    // bl sub_020117A0
    // ldrb r0, [r6, #8]
    // cmp r0, #0
    // ldr r0, [r5, #0x18]
    // bne _02011688
    // ldr r2, [r4, #0x30]
    // ldr r3, [r4, #0x44]
    // mov r1, #1
    // bl sub_02011068
    // b _02011692
    // ldr r2, [r4, #0x30]
    // ldr r3, [r4, #0x44]
    // mov r1, #2
    // bl sub_02011068
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_0201169C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // ldr r4, [r5, #0x14]
    // cmp r0, #1
    // beq _020116B4
    // cmp r0, #2
    // beq _020116D0
    // cmp r0, #3
    // beq _020116E4
    // b _020116E6
    // add r0, r4, #0
    // bl sub_020117FC
    // cmp r0, #1
    // bne _020116E6
    // ldr r0, [r4, #0x44]
    // ldr r1, [r5, #0x18]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _020116E6
    // add r0, r4, #0
    // bl Heap_Free
    // add r0, r6, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r6, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _020116E6
    // mov r6, #1
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_020116EC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // add r6, r1, #0
    // mov r1, #0x98
    // add r7, r2, #0
    // bl Heap_Alloc
    // str r0, [r5, #0x14]
    // add r4, r0, #0
    // ldr r0, [r5, #0x10]
    // add r1, r6, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // add r0, r4, #0
    // bl sub_020117A0
    // ldr r0, [r5, #0x10]
    // add r1, r7, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // add r0, r4, #0
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // add r0, #0x4c
    // bl sub_020117A0
    // ldr r0, [r5, #0x18]
    // ldr r2, [r5, #0x10]
    // ldr r3, [r4, #0x44]
    // mov r1, #3
    // bl sub_02011068
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02011744(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r7, #0
    // ldr r6, [r5, #0x14]
    // cmp r0, #1
    // beq _0201175C
    // cmp r0, #2
    // beq _02011784
    // cmp r0, #3
    // beq _02011798
    // b _0201179A
    // add r0, r6, #0
    // bl sub_020117FC
    // add r4, r0, #0
    // add r0, r6, #0
    // add r0, #0x4c
    // bl sub_020117FC
    // add r0, r4, r0
    // cmp r0, #2
    // bne _0201179A
    // ldr r0, [r6, #0x44]
    // ldr r1, [r5, #0x18]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _0201179A
    // add r0, r6, #0
    // bl Heap_Free
    // add r0, r7, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r7, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _0201179A
    // mov r7, #1
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020117A0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r4, r1, #0
    // add r1, r4, #4
    // add r5, r0, #0
    // add r6, r2, #0
    // str r1, [sp]
    // add r1, r5, #0
    // add r2, r5, #0
    // add r7, r3, #0
    // add r1, #0x20
    // add r2, #0x10
    // add r3, r4, #0
    // str r6, [sp, #4]
    // bl sub_02010AB0
    // ldr r1, [sp, #0x30]
    // str r1, [r5, #0x30]
    // ldrb r0, [r4, #8]
    // str r0, [r5, #0x34]
    // str r6, [r5, #0x38]
    // str r7, [r5, #0x3c]
    // mov r0, #0
    // str r0, [r5, #0x40]
    // ldr r0, [sp, #0x34]
    // str r0, [r5, #0x48]
    // ldrb r2, [r4, #0xb]
    // str r2, [r5, #0x44]
    // str r1, [sp]
    // ldrb r1, [r4]
    // str r1, [sp, #4]
    // ldrb r1, [r4, #1]
    // str r1, [sp, #8]
    // ldrb r1, [r4, #2]
    // str r1, [sp, #0xc]
    // ldrb r1, [r4, #3]
    // str r1, [sp, #0x10]
    // ldr r1, [r5, #0x44]
    // str r1, [sp, #0x14]
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #0xa]
    // ldrb r3, [r4, #8]
    // bl sub_02010F84
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_020117FC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r1, [r4, #0x40]
    // add r2, r1, #1
    // str r2, [r4, #0x40]
    // ldr r1, [r4, #0x3c]
    // cmp r2, r1
    // blt _0201187C
    // mov r1, #0
    // str r1, [r4, #0x40]
    // ldr r1, [r4, #0x38]
    // sub r1, r1, #1
    // cmp r1, #0
    // ble _02011826
    // str r1, [r4, #0x38]
    // add r1, r4, #0
    // add r1, #0x10
    // bl sub_02010A8C
    // b _02011844
    // ldr r0, [r4, #0x2c]
    // str r0, [sp]
    // ldr r0, [r4, #0x34]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x30]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x48]
    // ldr r1, [r4, #0x20]
    // ldr r2, [r4, #0x24]
    // ldr r3, [r4, #0x28]
    // bl sub_02013488
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, pc}
    // ldr r1, [r4, #0xc]
    // asr r0, r1, #6
    // lsr r0, r0, #0x19
    // add r0, r1, r0
    // asr r0, r0, #7
    // str r0, [sp]
    // ldr r0, [r4, #0x34]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x30]
    // str r0, [sp, #8]
    // ldr r2, [r4]
    // ldr r3, [r4, #4]
    // asr r1, r2, #6
    // lsr r1, r1, #0x19
    // add r1, r2, r1
    // ldr r0, [r4, #0x48]
    // asr r2, r3, #6
    // lsr r2, r2, #0x19
    // add r2, r3, r2
    // ldr r4, [r4, #8]
    // asr r1, r1, #7
    // asr r3, r4, #6
    // lsr r3, r3, #0x19
    // add r3, r4, r3
    // asr r2, r2, #7
    // asr r3, r3, #7
    // bl sub_02013488
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void sub_02011884(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // add r4, r1, #0
    // mov r1, #0x38
    // bl Heap_Alloc
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // bl sub_02011918
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020118BC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // ldr r4, [r5, #0x14]
    // cmp r0, #1
    // beq _020118D4
    // cmp r0, #2
    // beq _020118F0
    // cmp r0, #3
    // beq _0201190A
    // b _0201190E
    // add r0, r4, #0
    // bl sub_020119F4
    // cmp r0, #1
    // bne _02011912
    // ldr r0, [r4, #0x2c]
    // ldr r1, [r4, #0x30]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02011912
    // add r0, r4, #0
    // bl sub_02010EC8
    // ldr r0, [r5, #0x14]
    // bl Heap_Free
    // add r0, r6, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r6, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02011912
    // mov r6, #1
    // b _02011912
    // bl GF_AssertFail
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02011918(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0
    // mov r1, #2
    // ldrsh r0, [r4, r0]
    // ldrsh r1, [r4, r1]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r6, [sp, #0x38]
    // ldr r7, [sp, #0x3c]
    // bl sub_02010A6C
    // str r0, [sp, #0x20]
    // ldrb r1, [r4, #8]
    // ldr r3, [sp, #0x44]
    // add r0, r5, #0
    // add r2, r6, #0
    // bl sub_02010E64
    // mov r0, #0
    // ldrsh r1, [r4, r0]
    // lsl r1, r1, #7
    // str r1, [r5, #0xc]
    // mov r1, #4
    // ldrsh r1, [r4, r1]
    // str r1, [r5, #0x10]
    // mov r1, #6
    // ldrsh r1, [r4, r1]
    // str r1, [r5, #0x14]
    // ldr r1, [sp, #0x20]
    // str r1, [r5, #0x18]
    // ldr r1, [sp, #0x18]
    // str r1, [r5, #0x1c]
    // ldr r1, [sp, #0x1c]
    // str r1, [r5, #0x20]
    // str r0, [r5, #0x24]
    // ldr r0, [sp, #0x40]
    // str r7, [r5, #0x30]
    // str r0, [r5, #0x34]
    // ldr r0, [sp, #0x44]
    // str r0, [r5, #0x28]
    // ldrb r0, [r4, #0xb]
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // bl sub_02011AD8
    // ldr r0, _020119E8 ; =sub_02010F00
    // ldr r2, _020119EC ; =0x000003FF
    // add r1, r5, #0
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02010EE0
    // mov r1, #3
    // str r6, [sp]
    // lsl r1, r1, #8
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #0x12
    // lsl r1, r1, #6
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x2c]
    // str r0, [sp, #0x14]
    // ldrb r1, [r4, #9]
    // ldrb r2, [r4, #0xa]
    // ldrb r3, [r4, #8]
    // add r0, r7, #0
    // bl sub_02010F84
    // ldrb r0, [r4, #8]
    // cmp r0, #0
    // bne _020119C8
    // ldr r3, [r5, #0x2c]
    // add r0, r7, #0
    // mov r1, #1
    // add r2, r6, #0
    // bl sub_02011068
    // b _020119D4
    // ldr r3, [r5, #0x2c]
    // add r0, r7, #0
    // mov r1, #2
    // add r2, r6, #0
    // bl sub_02011068
    // ldr r0, [sp, #0x44]
    // ldr r2, _020119F0 ; =sub_02010C38
    // str r0, [sp]
    // ldr r0, [r5, #0x34]
    // add r1, r5, #0
    // add r3, r6, #0
    // bl sub_0200FF88
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _020119E8: .word sub_02010F00
    // _020119EC: .word 0x000003FF
    // _020119F0: .word sub_02010C38
    // TODO: decompile
}


void sub_020119F4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x24]
    // add r2, r1, #1
    // str r2, [r4, #0x24]
    // ldr r1, [r4, #0x20]
    // cmp r2, r1
    // blt _02011A38
    // mov r1, #0
    // str r1, [r4, #0x24]
    // ldr r1, [r4, #0x1c]
    // sub r1, r1, #1
    // cmp r1, #0
    // ble _02011A2A
    // str r1, [r4, #0x1c]
    // ldr r2, [r4, #0xc]
    // ldr r1, [r4, #0x18]
    // add r1, r2, r1
    // str r1, [r4, #0xc]
    // bl sub_02011AD8
    // ldr r0, _02011A3C ; =sub_02010F00
    // ldr r2, _02011A40 ; =0x000003FF
    // add r1, r4, #0
    // bl SysTask_CreateOnVWaitQueue
    // b _02011A38
    // ldr r0, [r4, #0x34]
    // ldr r1, [r4, #8]
    // ldr r2, [r4, #0x28]
    // bl sub_0200FFB4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _02011A3C: .word sub_02010F00
    // _02011A40: .word 0x000003FF
    // TODO: decompile
}


void sub_02011A44(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r1, [sp]
    // asr r1, r0, #6
    // lsr r1, r1, #0x19
    // add r1, r0, r1
    // asr r1, r1, #7
    // ldr r5, [sp, #0x20]
    // ldr r4, [sp, #0x24]
    // sub r0, r3, r2
    // bpl _02011A5C
    // neg r0, r0
    // cmp r0, r1
    // blt _02011A6A
    // mov r0, #0
    // str r0, [r5]
    // add sp, #0xc
    // str r0, [r4]
    // pop {r4, r5, r6, r7, pc}
    // lsl r0, r0, #0xc
    // str r0, [sp, #4]
    // asr r7, r0, #0x1f
    // lsl r0, r1, #0xc
    // asr r1, r0, #0x1f
    // add r2, r0, #0
    // add r3, r1, #0
    // bl _ll_mul
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r6, r1, #0
    // add r1, r7, #0
    // add r2, r0, #0
    // add r3, r7, #0
    // bl _ll_mul
    // add r2, r0, #0
    // add r3, r1, #0
    // mov r0, #2
    // ldr r1, [sp, #8]
    // mov r7, #0
    // lsl r0, r0, #0xa
    // add r0, r1, r0
    // adc r6, r7
    // lsl r1, r6, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // mov r1, #2
    // lsl r1, r1, #0xa
    // add r2, r2, r1
    // adc r3, r7
    // lsl r1, r3, #0x14
    // lsr r2, r2, #0xc
    // orr r2, r1
    // sub r0, r0, r2
    // bl FX_Sqrt
    // asr r2, r0, #0xc
    // ldr r0, [sp]
    // sub r0, r0, r2
    // str r0, [r5]
    // bpl _02011AC4
    // add r0, r7, #0
    // str r0, [r5]
    // ldr r1, [r5]
    // lsl r0, r2, #1
    // add r0, r1, r0
    // str r0, [r4]
    // cmp r0, #0xff
    // ble _02011AD4
    // mov r0, #0xff
    // str r0, [r4]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02011AD8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // mov r1, #0
    // add r5, r0, #0
    // bl sub_02010EE0
    // add r7, r0, #0
    // mov r4, #0
    // add r6, r7, #0
    // ldr r2, [r5, #0x14]
    // cmp r4, r2
    // bgt _02011B04
    // add r0, sp, #0xc
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // ldr r1, [r5, #0x10]
    // add r3, r4, #0
    // bl sub_02011A44
    // b _02011B3E
    // lsl r0, r2, #1
    // cmp r4, r0
    // bgt _02011B2C
    // sub r0, r0, r4
    // lsl r0, r0, #1
    // add r1, r7, r0
    // mov r0, #3
    // lsl r0, r0, #8
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // lsl r0, r0, #1
    // sub r0, r0, r4
    // lsl r0, r0, #1
    // add r1, r7, r0
    // mov r0, #0x12
    // lsl r0, r0, #6
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #8]
    // b _02011B3E
    // add r0, sp, #0xc
    // str r0, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // ldr r0, [r5, #0xc]
    // ldr r1, [r5, #0x10]
    // add r3, r4, #0
    // bl sub_02011A44
    // mov r0, #3
    // ldr r1, [sp, #0xc]
    // lsl r0, r0, #8
    // strh r1, [r6, r0]
    // mov r0, #0x12
    // ldr r1, [sp, #8]
    // lsl r0, r0, #6
    // strh r1, [r6, r0]
    // add r4, r4, #1
    // add r6, r6, #2
    // cmp r4, #0xc0
    // blt _02011AEA
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02011B5C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // add r4, r1, #0
    // mov r1, #0x30
    // bl Heap_Alloc
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // bl sub_02011BF0
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02011B94(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // ldr r4, [r5, #0x14]
    // cmp r0, #1
    // beq _02011BAC
    // cmp r0, #2
    // beq _02011BC8
    // cmp r0, #3
    // beq _02011BE2
    // b _02011BE6
    // add r0, r4, #0
    // bl sub_02011CB8
    // cmp r0, #1
    // bne _02011BEA
    // ldr r0, [r4, #0x20]
    // ldr r1, [r4, #0x24]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02011BEA
    // add r0, r4, #0
    // bl sub_02010EC8
    // ldr r0, [r5, #0x14]
    // bl Heap_Free
    // add r0, r6, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r6, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02011BEA
    // mov r6, #1
    // b _02011BEA
    // bl GF_AssertFail
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02011BF0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrh r0, [r4]
    // ldrh r1, [r4, #2]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // ldr r6, [sp, #0x38]
    // ldr r7, [sp, #0x3c]
    // bl sub_02010A6C
    // str r0, [r5, #0x10]
    // ldrb r1, [r4, #4]
    // ldr r3, [sp, #0x44]
    // add r0, r5, #0
    // add r2, r6, #0
    // bl sub_02010E64
    // ldrh r0, [r4]
    // lsl r0, r0, #7
    // str r0, [r5, #0xc]
    // ldr r0, [sp, #0x18]
    // str r0, [r5, #0x14]
    // ldr r0, [sp, #0x1c]
    // str r0, [r5, #0x18]
    // mov r0, #0
    // str r0, [r5, #0x1c]
    // ldr r0, [sp, #0x40]
    // str r7, [r5, #0x24]
    // str r0, [r5, #0x28]
    // ldr r0, [sp, #0x44]
    // str r0, [r5, #0x2c]
    // ldrb r0, [r4, #7]
    // str r0, [r5, #0x20]
    // add r0, r5, #0
    // bl sub_02011D08
    // ldr r0, _02011CAC ; =sub_02010F00
    // ldr r2, _02011CB0 ; =0x000003FF
    // add r1, r5, #0
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02010EE0
    // mov r1, #3
    // str r6, [sp]
    // lsl r1, r1, #8
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #0x12
    // lsl r1, r1, #6
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0x14]
    // ldrb r1, [r4, #5]
    // ldrb r2, [r4, #6]
    // ldrb r3, [r4, #4]
    // add r0, r7, #0
    // bl sub_02010F84
    // ldrb r0, [r4, #4]
    // cmp r0, #0
    // bne _02011C8C
    // ldr r3, [r5, #0x20]
    // add r0, r7, #0
    // mov r1, #1
    // add r2, r6, #0
    // bl sub_02011068
    // b _02011C98
    // ldr r3, [r5, #0x20]
    // add r0, r7, #0
    // mov r1, #2
    // add r2, r6, #0
    // bl sub_02011068
    // ldr r0, [sp, #0x44]
    // ldr r2, _02011CB4 ; =sub_02010C38
    // str r0, [sp]
    // ldr r0, [r5, #0x28]
    // add r1, r5, #0
    // add r3, r6, #0
    // bl sub_0200FF88
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02011CAC: .word sub_02010F00
    // _02011CB0: .word 0x000003FF
    // _02011CB4: .word sub_02010C38
    // TODO: decompile
}


void sub_02011CB8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x1c]
    // add r2, r1, #1
    // str r2, [r4, #0x1c]
    // ldr r1, [r4, #0x18]
    // cmp r2, r1
    // blt _02011CFC
    // mov r1, #0
    // str r1, [r4, #0x1c]
    // ldr r1, [r4, #0x14]
    // sub r1, r1, #1
    // cmp r1, #0
    // ble _02011CEE
    // str r1, [r4, #0x14]
    // ldr r2, [r4, #0xc]
    // ldr r1, [r4, #0x10]
    // add r1, r2, r1
    // str r1, [r4, #0xc]
    // bl sub_02011D08
    // ldr r0, _02011D00 ; =sub_02010F00
    // ldr r2, _02011D04 ; =0x000003FF
    // add r1, r4, #0
    // bl SysTask_CreateOnVWaitQueue
    // b _02011CFC
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #8]
    // ldr r2, [r4, #0x2c]
    // bl sub_0200FFB4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _02011D00: .word sub_02010F00
    // _02011D04: .word 0x000003FF
    // TODO: decompile
}


void sub_02011D08(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x104
    // add r4, r0, #0
    // mov r1, #0
    // bl sub_02010EE0
    // ldr r1, [r4, #0xc]
    // add r5, r0, #0
    // asr r0, r1, #6
    // lsr r0, r0, #0x19
    // add r0, r1, r0
    // asr r0, r0, #7
    // add r1, sp, #0
    // mov r2, #0xc0
    // mov r3, #0
    // bl sub_02010A00
    // mov r7, #0x12
    // mov r6, #0
    // add r4, sp, #0
    // lsl r7, r7, #6
    // ldr r1, [r4]
    // mov r0, #0x80
    // neg r1, r1
    // bl sub_02010A7C
    // mov r1, #3
    // lsl r1, r1, #8
    // strh r0, [r5, r1]
    // ldr r1, [r4]
    // mov r0, #0x80
    // bl sub_02010A7C
    // strh r0, [r5, r7]
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #2
    // cmp r6, #0xc0
    // blt _02011D34
    // add sp, #0x1fc
    // add sp, #0x104
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02011D60(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // add r4, r1, #0
    // mov r1, #0x34
    // bl Heap_Alloc
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // bl sub_02011DEC
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02011D98(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // ldr r4, [r5, #0x14]
    // cmp r0, #1
    // beq _02011DB0
    // cmp r0, #2
    // beq _02011DCC
    // cmp r0, #3
    // beq _02011DE6
    // b _02011DE8
    // add r0, r4, #0
    // bl sub_02011EC0
    // cmp r0, #1
    // bne _02011DE8
    // ldr r0, [r4, #0x24]
    // ldr r1, [r4, #0x28]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02011DE8
    // add r0, r4, #0
    // bl sub_02010EC8
    // ldr r0, [r5, #0x14]
    // bl Heap_Free
    // add r0, r6, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r6, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02011DE8
    // mov r6, #1
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02011DEC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r4, r1, #0
    // add r5, r0, #0
    // ldrh r1, [r4, #2]
    // ldrh r0, [r4]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // sub r0, r1, r0
    // add r1, r2, #0
    // ldr r6, [sp, #0x38]
    // ldr r7, [sp, #0x3c]
    // bl _s32_div_f
    // str r0, [sp, #0x20]
    // ldrb r1, [r4, #4]
    // ldr r3, [sp, #0x44]
    // add r0, r5, #0
    // add r2, r6, #0
    // bl sub_02010E64
    // mov r0, #2
    // lsl r0, r0, #0x12
    // str r0, [r5, #0xc]
    // ldrh r0, [r4]
    // str r0, [r5, #0x10]
    // ldr r0, [sp, #0x20]
    // str r0, [r5, #0x14]
    // ldr r0, [sp, #0x18]
    // str r0, [r5, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r0, [r5, #0x1c]
    // mov r0, #0
    // str r0, [r5, #0x20]
    // ldr r0, [sp, #0x40]
    // str r7, [r5, #0x28]
    // str r0, [r5, #0x2c]
    // ldr r0, [sp, #0x44]
    // str r0, [r5, #0x30]
    // ldrb r0, [r4, #7]
    // str r0, [r5, #0x24]
    // add r0, r5, #0
    // bl sub_02011F10
    // ldr r0, _02011EB4 ; =sub_02010F00
    // ldr r2, _02011EB8 ; =0x000003FF
    // add r1, r5, #0
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02010EE0
    // mov r1, #0xf
    // str r6, [sp]
    // lsl r1, r1, #6
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #0x15
    // lsl r1, r1, #6
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x24]
    // str r0, [sp, #0x14]
    // ldrb r1, [r4, #5]
    // ldrb r2, [r4, #6]
    // ldrb r3, [r4, #4]
    // add r0, r7, #0
    // bl sub_02010F84
    // ldrb r0, [r4, #4]
    // cmp r0, #0
    // bne _02011E94
    // ldr r3, [r5, #0x24]
    // add r0, r7, #0
    // mov r1, #1
    // add r2, r6, #0
    // bl sub_02011068
    // b _02011EA0
    // ldr r3, [r5, #0x24]
    // add r0, r7, #0
    // mov r1, #2
    // add r2, r6, #0
    // bl sub_02011068
    // ldr r0, [sp, #0x44]
    // ldr r2, _02011EBC ; =sub_02010C38
    // str r0, [sp]
    // ldr r0, [r5, #0x2c]
    // add r1, r5, #0
    // add r3, r6, #0
    // bl sub_0200FF88
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _02011EB4: .word sub_02010F00
    // _02011EB8: .word 0x000003FF
    // _02011EBC: .word sub_02010C38
    // TODO: decompile
}


void sub_02011EC0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x20]
    // add r2, r1, #1
    // str r2, [r4, #0x20]
    // ldr r1, [r4, #0x1c]
    // cmp r2, r1
    // blt _02011F04
    // mov r1, #0
    // str r1, [r4, #0x20]
    // ldr r1, [r4, #0x18]
    // sub r1, r1, #1
    // cmp r1, #0
    // ble _02011EF6
    // str r1, [r4, #0x18]
    // ldr r2, [r4, #0x10]
    // ldr r1, [r4, #0x14]
    // add r1, r2, r1
    // str r1, [r4, #0x10]
    // bl sub_02011F10
    // ldr r0, _02011F08 ; =sub_02010F00
    // ldr r2, _02011F0C ; =0x000003FF
    // add r1, r4, #0
    // bl SysTask_CreateOnVWaitQueue
    // b _02011F04
    // ldr r0, [r4, #0x2c]
    // ldr r1, [r4, #8]
    // ldr r2, [r4, #0x30]
    // bl sub_0200FFB4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _02011F08: .word sub_02010F00
    // _02011F0C: .word 0x000003FF
    // TODO: decompile
}


void sub_02011F10(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1fc
    // sub sp, #0x110
    // add r4, r0, #0
    // mov r1, #0
    // bl sub_02010EE0
    // str r0, [sp]
    // ldr r0, [r4, #0x10]
    // ldr r2, [r4, #0xc]
    // asr r0, r0, #4
    // lsl r1, r0, #2
    // ldr r0, _02011FF0 ; =FX_SinCosTable_
    // asr r3, r2, #0x1f
    // ldrsh r0, [r0, r1]
    // asr r1, r0, #0x1f
    // bl _ll_mul
    // mov r2, #2
    // mov r3, #0
    // lsl r2, r2, #0xa
    // add r2, r0, r2
    // adc r1, r3
    // lsl r0, r1, #0x14
    // lsr r1, r2, #0xc
    // orr r1, r0
    // asr r7, r1, #0xc
    // lsl r0, r7, #1
    // mov r1, #0x15
    // bl _s32_div_f
    // add r0, r0, #1
    // lsl r0, r0, #1
    // mov r1, #0xb4
    // sub r2, r1, r0
    // ldr r0, _02011FF4 ; =0x0000FFFF
    // add r1, #0xb4
    // mul r0, r2
    // bl _s32_div_f
    // lsr r1, r0, #0x1f
    // add r1, r0, r1
    // asr r4, r1, #1
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #8
    // bl sub_02010A54
    // asr r0, r0, #0xc
    // str r0, [sp, #4]
    // cmp r0, #0xc0
    // blt _02011F7C
    // bl GF_AssertFail
    // ldr r2, [sp, #4]
    // add r0, r4, #0
    // add r1, sp, #0xc
    // mov r3, #0
    // bl sub_02010A00
    // ldr r5, [sp]
    // mov r4, #0
    // ldr r0, [sp, #4]
    // add r1, r4, #1
    // sub r0, r0, r1
    // add r6, r7, #0
    // cmp r0, #0
    // ble _02011FA4
    // lsl r1, r0, #2
    // add r0, sp, #0xc
    // ldr r0, [r0, r1]
    // cmp r0, r7
    // ble _02011FA4
    // add r6, r0, #0
    // mov r0, #0x80
    // neg r1, r6
    // bl sub_02010A7C
    // str r0, [sp, #8]
    // mov r0, #0x80
    // add r1, r6, #0
    // bl sub_02010A7C
    // ldr r1, [sp, #8]
    // lsl r0, r0, #0x10
    // lsl r1, r1, #0x10
    // asr r2, r1, #0x10
    // mov r1, #3
    // lsl r1, r1, #8
    // strh r2, [r5, r1]
    // asr r1, r0, #0x10
    // mov r0, #0x12
    // lsl r0, r0, #6
    // strh r1, [r5, r0]
    // mov r0, #0xbf
    // sub r0, r0, r4
    // lsl r3, r0, #1
    // ldr r0, [sp]
    // add r4, r4, #1
    // add r0, r0, r3
    // mov r3, #3
    // lsl r3, r3, #8
    // strh r2, [r0, r3]
    // mov r2, #0x12
    // lsl r2, r2, #6
    // add r5, r5, #2
    // strh r1, [r0, r2]
    // cmp r4, #0x60
    // blt _02011F8C
    // add sp, #0x1fc
    // add sp, #0x110
    // pop {r4, r5, r6, r7, pc}
    // _02011FF0: .word FX_SinCosTable_
    // _02011FF4: .word 0x0000FFFF
    // TODO: decompile
}


void sub_02011FF8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // add r4, r1, #0
    // mov r1, #0x30
    // bl Heap_Alloc
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // bl sub_02012090
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02012030(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // ldr r4, [r5, #0x14]
    // cmp r0, #1
    // beq _02012048
    // cmp r0, #2
    // beq _02012064
    // cmp r0, #3
    // beq _02012084
    // b _02012088
    // add r0, r4, #0
    // bl sub_020121A4
    // cmp r0, #1
    // bne _0201208C
    // ldr r0, [r4, #0x20]
    // ldr r1, [r4, #0x24]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _0201208C
    // add r0, r4, #0
    // bl sub_020121F4
    // add r0, r4, #0
    // bl sub_02010EC8
    // ldr r0, [r5, #0x14]
    // bl Heap_Free
    // add r0, r6, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r6, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _0201208C
    // mov r6, #1
    // b _0201208C
    // bl GF_AssertFail
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02012090(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r1, #0
    // add r6, r0, #0
    // str r2, [sp, #0x18]
    // ldr r0, [sp, #0x38]
    // ldrh r2, [r5, #8]
    // str r0, [sp, #0x38]
    // ldr r0, [sp, #0x44]
    // mov r1, #0x30
    // mul r1, r2
    // str r3, [sp, #0x1c]
    // str r0, [sp, #0x44]
    // bl Heap_Alloc
    // str r0, [r6, #0xc]
    // cmp r0, #0
    // bne _020120B8
    // bl GF_AssertFail
    // ldrh r0, [r5, #8]
    // str r0, [r6, #0x10]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // ldrh r0, [r5, #8]
    // cmp r0, #0
    // ble _020120F8
    // ldr r4, [sp, #0x20]
    // add r7, r4, #0
    // ldr r0, [r5, #4]
    // ldr r2, [r6, #0xc]
    // add r0, r0, r4
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    // add r0, r2, r7
    // ldr r3, [r5]
    // add r1, r0, #0
    // add r2, r2, r7
    // add r1, #0x20
    // add r2, #0x10
    // add r3, r3, r4
    // bl sub_02010AB0
    // ldr r0, [sp, #0x20]
    // ldrh r1, [r5, #8]
    // add r0, r0, #1
    // add r4, r4, #4
    // add r7, #0x30
    // str r0, [sp, #0x20]
    // cmp r0, r1
    // blt _020120CA
    // ldrh r1, [r5, #0xa]
    // ldr r2, [sp, #0x38]
    // ldr r3, [sp, #0x44]
    // add r0, r6, #0
    // bl sub_02010E64
    // ldr r0, [sp, #0x18]
    // str r0, [r6, #0x14]
    // ldr r0, [sp, #0x1c]
    // str r0, [r6, #0x18]
    // mov r0, #0
    // str r0, [r6, #0x1c]
    // ldr r0, [sp, #0x3c]
    // str r0, [r6, #0x24]
    // ldr r0, [sp, #0x40]
    // str r0, [r6, #0x28]
    // ldr r0, [sp, #0x44]
    // str r0, [r6, #0x2c]
    // ldrh r0, [r5, #0xe]
    // str r0, [r6, #0x20]
    // add r0, r6, #0
    // bl sub_02012204
    // ldr r0, _02012198 ; =sub_02010F00
    // ldr r2, _0201219C ; =0x000003FF
    // add r1, r6, #0
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r6, #0
    // mov r1, #0
    // bl sub_02010EE0
    // ldr r1, [sp, #0x38]
    // str r1, [sp]
    // mov r1, #3
    // lsl r1, r1, #8
    // ldrsh r1, [r0, r1]
    // str r1, [sp, #4]
    // mov r1, #0
    // str r1, [sp, #8]
    // mov r1, #0x12
    // lsl r1, r1, #6
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // str r0, [sp, #0x10]
    // ldr r0, [r6, #0x20]
    // str r0, [sp, #0x14]
    // ldrb r1, [r5, #0xc]
    // ldrb r2, [r5, #0xd]
    // ldrh r3, [r5, #0xa]
    // ldr r0, [sp, #0x3c]
    // bl sub_02010F84
    // ldrh r0, [r5, #0xa]
    // cmp r0, #0
    // ldr r0, [r6, #0x24]
    // bne _02012178
    // ldr r2, [sp, #0x38]
    // ldr r3, [r6, #0x20]
    // mov r1, #1
    // bl sub_02011068
    // b _02012182
    // ldr r2, [sp, #0x38]
    // ldr r3, [r6, #0x20]
    // mov r1, #2
    // bl sub_02011068
    // ldr r0, [sp, #0x44]
    // ldr r2, _020121A0 ; =sub_02010C38
    // str r0, [sp]
    // ldr r0, [r6, #0x28]
    // ldr r3, [sp, #0x38]
    // add r1, r6, #0
    // bl sub_0200FF88
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02012198: .word sub_02010F00
    // _0201219C: .word 0x000003FF
    // _020121A0: .word sub_02010C38
    // TODO: decompile
}


void sub_020121A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r1, [r4, #0x1c]
    // add r2, r1, #1
    // str r2, [r4, #0x1c]
    // ldr r1, [r4, #0x18]
    // cmp r2, r1
    // blt _020121E6
    // mov r1, #0
    // str r1, [r4, #0x1c]
    // ldr r1, [r4, #0x14]
    // sub r1, r1, #1
    // cmp r1, #0
    // ble _020121D8
    // str r1, [r4, #0x14]
    // bl sub_02012290
    // add r0, r4, #0
    // bl sub_02012204
    // ldr r0, _020121EC ; =sub_02010F00
    // ldr r2, _020121F0 ; =0x000003FF
    // add r1, r4, #0
    // bl SysTask_CreateOnVWaitQueue
    // b _020121E6
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #8]
    // ldr r2, [r4, #0x2c]
    // bl sub_0200FFB4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _020121EC: .word sub_02010F00
    // _020121F0: .word 0x000003FF
    // TODO: decompile
}


void sub_020121F4(void) {
    Heap_Free();
}


void sub_02012204(void) {
    // push {r4, r5, r6, lr}
    // mov r1, #0
    // add r6, r0, #0
    // bl sub_02010EE0
    // mov r2, #3
    // lsl r2, r2, #8
    // add r0, r0, r2
    // mov r1, #0
    // bl memset
    // ldr r0, [r6, #0x10]
    // sub r4, r0, #1
    // bmi _02012236
    // mov r0, #0x30
    // add r5, r4, #0
    // mul r5, r0
    // ldr r1, [r6, #0xc]
    // add r0, r6, #0
    // add r1, r1, r5
    // bl sub_02012238
    // sub r5, #0x30
    // sub r4, r4, #1
    // bpl _02012226
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02012238(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // mov r1, #0
    // bl sub_02010EE0
    // ldr r2, [r4]
    // ldr r3, [r4, #8]
    // asr r1, r2, #6
    // lsr r1, r1, #0x19
    // add r1, r2, r1
    // asr r2, r1, #7
    // asr r1, r3, #6
    // ldr r5, [r4, #0xc]
    // lsr r1, r1, #0x19
    // add r1, r3, r1
    // asr r3, r5, #6
    // lsr r3, r3, #0x19
    // add r3, r5, r3
    // ldr r4, [r4, #4]
    // asr r5, r3, #7
    // asr r3, r4, #6
    // lsr r3, r3, #0x19
    // add r3, r4, r3
    // asr r3, r3, #7
    // asr r1, r1, #7
    // cmp r3, r5
    // bge _0201228E
    // lsl r4, r3, #1
    // lsl r1, r1, #0x10
    // add r4, r0, r4
    // lsl r0, r2, #0x10
    // asr r6, r1, #0x10
    // mov r1, #3
    // mov r2, #0x12
    // asr r0, r0, #0x10
    // lsl r1, r1, #8
    // lsl r2, r2, #6
    // strh r0, [r4, r1]
    // strh r6, [r4, r2]
    // add r3, r3, #1
    // add r4, r4, #2
    // cmp r3, r5
    // blt _02012282
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02012290(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0x10]
    // mov r6, #0
    // cmp r0, #0
    // ble _020122B4
    // add r4, r6, #0
    // ldr r1, [r5, #0xc]
    // add r0, r1, r4
    // add r1, r1, r4
    // add r1, #0x10
    // bl sub_02010A8C
    // ldr r0, [r5, #0x10]
    // add r6, r6, #1
    // add r4, #0x30
    // cmp r6, r0
    // blt _0201229E
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_020122B8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // add r4, r1, #0
    // mov r1, #0x38
    // bl Heap_Alloc
    // str r0, [r5, #0x14]
    // mov r1, #0
    // mov r2, #0x38
    // bl memset
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // bl sub_02012358
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020122F8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // ldr r4, [r5, #0x14]
    // cmp r0, #1
    // beq _02012310
    // cmp r0, #2
    // beq _0201232C
    // cmp r0, #3
    // beq _0201234C
    // b _02012350
    // add r0, r4, #0
    // bl sub_02012454
    // cmp r0, #1
    // bne _02012354
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #0x30]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02012354
    // add r0, r4, #0
    // bl sub_020124AC
    // add r0, r4, #0
    // bl sub_02010EC8
    // ldr r0, [r5, #0x14]
    // bl Heap_Free
    // add r0, r6, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r6, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02012354
    // mov r6, #1
    // b _02012354
    // bl GF_AssertFail
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02012358(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #0
    // str r1, [r5, #0xc]
    // ldrh r1, [r4]
    // str r2, [sp, #0x18]
    // str r3, [sp, #0x1c]
    // str r1, [r5, #0x10]
    // ldrh r2, [r4, #2]
    // ldrh r1, [r4]
    // ldr r6, [sp, #0x40]
    // ldr r3, [sp, #0x4c]
    // sub r1, r2, r1
    // str r1, [r5, #0x14]
    // mov r1, #2
    // add r2, r6, #0
    // ldr r7, [sp, #0x44]
    // bl sub_02010E64
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // str r0, [r5, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r1, [r5, #0x1c]
    // str r0, [r5, #0x20]
    // str r1, [r5, #0x24]
    // ldr r0, [sp, #0x48]
    // str r7, [r5, #0x30]
    // str r0, [r5, #0x34]
    // ldr r0, [sp, #0x4c]
    // str r0, [r5, #0x2c]
    // ldrh r0, [r4, #6]
    // str r0, [r5, #0x28]
    // add r0, r5, #0
    // ldr r1, [r5, #0x1c]
    // ldr r2, [r5, #0x18]
    // add r0, #0xc
    // bl sub_020125D4
    // add r0, r5, #0
    // bl sub_020124B0
    // ldr r0, _02012448 ; =sub_02010F00
    // ldr r2, _0201244C ; =0x000003FF
    // add r1, r5, #0
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02010EE0
    // str r0, [sp, #0x20]
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02010EE0
    // str r0, [sp, #0x24]
    // mov r1, #3
    // ldr r0, [sp, #0x20]
    // str r6, [sp]
    // lsl r1, r1, #8
    // ldrsh r0, [r0, r1]
    // mov r1, #0x12
    // mov r3, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r3, [sp, #8]
    // lsl r1, r1, #6
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x28]
    // str r0, [sp, #0x14]
    // ldrb r1, [r4, #4]
    // ldrb r2, [r4, #5]
    // add r0, r7, #0
    // bl sub_02010F84
    // mov r1, #3
    // ldr r0, [sp, #0x24]
    // str r6, [sp]
    // lsl r1, r1, #8
    // ldrsh r0, [r0, r1]
    // mov r1, #0x12
    // lsl r1, r1, #6
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x24]
    // mov r3, #1
    // ldrsh r0, [r0, r1]
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x28]
    // str r0, [sp, #0x14]
    // ldrb r1, [r4, #4]
    // ldrb r2, [r4, #5]
    // add r0, r7, #0
    // bl sub_02010F84
    // ldr r3, [r5, #0x28]
    // add r0, r7, #0
    // mov r1, #3
    // add r2, r6, #0
    // bl sub_02011068
    // ldr r0, [sp, #0x4c]
    // ldr r2, _02012450 ; =sub_02010C38
    // str r0, [sp]
    // ldr r0, [r5, #0x34]
    // add r1, r5, #0
    // add r3, r6, #0
    // bl sub_0200FF88
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _02012448: .word sub_02010F00
    // _0201244C: .word 0x000003FF
    // _02012450: .word sub_02010C38
    // TODO: decompile
}


void sub_02012454(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x24]
    // add r1, r0, #1
    // str r1, [r4, #0x24]
    // ldr r0, [r4, #0x20]
    // cmp r1, r0
    // blt _0201249E
    // mov r0, #0
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x1c]
    // add r1, r0, #1
    // ldr r0, [r4, #0x18]
    // cmp r1, r0
    // bgt _02012490
    // str r1, [r4, #0x1c]
    // add r0, r4, #0
    // ldr r2, [r4, #0x18]
    // add r0, #0xc
    // bl sub_020125D4
    // add r0, r4, #0
    // bl sub_020124B0
    // ldr r0, _020124A4 ; =sub_02010F00
    // ldr r2, _020124A8 ; =0x000003FF
    // add r1, r4, #0
    // bl SysTask_CreateOnVWaitQueue
    // b _0201249E
    // ldr r0, [r4, #0x34]
    // ldr r1, [r4, #8]
    // ldr r2, [r4, #0x2c]
    // bl sub_0200FFB4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _020124A4: .word sub_02010F00
    // _020124A8: .word 0x000003FF
    // TODO: decompile
}


void sub_020124AC(void) {
    // bx lr
    // TODO: decompile
}


void sub_020124B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // ldr r0, [r0, #0xc]
    // ldr r1, _020125D0 ; =0x00003FFF
    // bl _s32_div_f
    // lsl r0, r1, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // mov r1, #0
    // bl sub_02010EE0
    // add r7, r0, #0
    // ldr r0, [sp]
    // mov r1, #1
    // bl sub_02010EE0
    // add r4, r0, #0
    // mov r6, #0
    // add r5, r4, #0
    // ldr r0, [sp]
    // ldr r1, [r0, #0xc]
    // ldr r0, _020125D0 ; =0x00003FFF
    // cmp r1, r0
    // bge _02012520
    // mov r1, #0x60
    // ldr r0, [sp, #4]
    // sub r1, r1, r6
    // bl sub_020109D8
    // cmp r0, #0x7f
    // ble _020124F6
    // mov r0, #0x7f
    // mov r1, #0xbf
    // sub r1, r1, r6
    // lsl r1, r1, #1
    // add r3, r7, r1
    // mov r1, #0x80
    // sub r2, r1, r0
    // mov r1, #3
    // lsl r1, r1, #8
    // strh r2, [r3, r1]
    // mov r1, #0x12
    // mov r2, #0x80
    // lsl r1, r1, #6
    // strh r2, [r3, r1]
    // mov r1, #3
    // lsl r1, r1, #8
    // strh r2, [r5, r1]
    // mov r1, #0x12
    // add r0, #0x80
    // lsl r1, r1, #6
    // strh r0, [r5, r1]
    // b _02012548
    // mov r0, #0xbf
    // sub r0, r0, r6
    // lsl r0, r0, #1
    // mov r1, #3
    // add r0, r7, r0
    // mov r2, #0
    // lsl r1, r1, #8
    // strh r2, [r0, r1]
    // mov r1, #0x12
    // mov r2, #0x80
    // lsl r1, r1, #6
    // strh r2, [r0, r1]
    // mov r0, #3
    // add r1, r2, #0
    // lsl r0, r0, #8
    // strh r1, [r5, r0]
    // mov r0, #0x12
    // mov r1, #0xff
    // lsl r0, r0, #6
    // strh r1, [r5, r0]
    // add r6, r6, #1
    // add r5, r5, #2
    // cmp r6, #0x60
    // blt _020124DC
    // ldr r1, _020125D0 ; =0x00003FFF
    // ldr r0, [sp, #4]
    // mov r5, #0x60
    // add r4, #0xc0
    // sub r6, r1, r0
    // ldr r0, [sp]
    // ldr r1, [r0, #0xc]
    // ldr r0, _020125D0 ; =0x00003FFF
    // cmp r1, r0
    // bge _0201258A
    // mov r0, #0xbf
    // sub r0, r0, r5
    // lsl r0, r0, #1
    // mov r1, #3
    // add r0, r7, r0
    // mov r2, #0x80
    // lsl r1, r1, #8
    // strh r2, [r0, r1]
    // mov r1, #0x12
    // lsl r1, r1, #6
    // strh r2, [r0, r1]
    // mov r0, #3
    // add r1, r2, #0
    // lsl r0, r0, #8
    // strh r1, [r4, r0]
    // mov r0, #0x12
    // lsl r0, r0, #6
    // strh r1, [r4, r0]
    // b _020125C4
    // add r1, r5, #0
    // add r0, r6, #0
    // sub r1, #0x60
    // bl sub_020109D8
    // add r1, r0, #0
    // cmp r1, #0x7f
    // ble _0201259C
    // mov r1, #0x7f
    // mov r0, #0xbf
    // sub r0, r0, r5
    // lsl r0, r0, #1
    // mov r2, #3
    // add r0, r7, r0
    // mov r3, #0
    // lsl r2, r2, #8
    // strh r3, [r0, r2]
    // mov r2, #0x80
    // sub r3, r2, r1
    // mov r2, #0x12
    // lsl r2, r2, #6
    // strh r3, [r0, r2]
    // mov r0, #3
    // add r1, #0x80
    // lsl r0, r0, #8
    // strh r1, [r4, r0]
    // mov r1, #0xff
    // add r0, r2, #0
    // strh r1, [r4, r0]
    // add r5, r5, #1
    // add r4, r4, #2
    // cmp r5, #0xc0
    // blt _0201255A
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _020125D0: .word 0x00003FFF
    // TODO: decompile
}


void sub_020125D4(void) {
    _s32_div_f();
}


void sub_020125EC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, [r5, #0x20]
    // add r4, r1, #0
    // mov r1, #0x38
    // bl Heap_Alloc
    // str r0, [r5, #0x14]
    // mov r1, #0
    // mov r2, #0x38
    // bl memset
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // bl sub_0201268C
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_0201262C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // ldr r4, [r5, #0x14]
    // cmp r0, #1
    // beq _02012644
    // cmp r0, #2
    // beq _02012660
    // cmp r0, #3
    // beq _02012680
    // b _02012684
    // add r0, r4, #0
    // bl sub_0201275C
    // cmp r0, #1
    // bne _02012688
    // ldr r0, [r4, #0x28]
    // ldr r1, [r4, #0x30]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02012688
    // add r0, r4, #0
    // bl sub_020127B4
    // add r0, r4, #0
    // bl sub_02010EC8
    // ldr r0, [r5, #0x14]
    // bl Heap_Free
    // add r0, r6, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r6, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02012688
    // mov r6, #1
    // b _02012688
    // bl GF_AssertFail
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_0201268C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r4, r1, #0
    // ldrh r1, [r4]
    // add r5, r0, #0
    // str r3, [sp, #0x1c]
    // str r1, [r5, #0xc]
    // ldrh r1, [r4]
    // str r2, [sp, #0x18]
    // ldr r6, [sp, #0x38]
    // str r1, [r5, #0x10]
    // ldrh r2, [r4, #2]
    // ldrh r1, [r4]
    // ldr r3, [sp, #0x44]
    // ldr r7, [sp, #0x3c]
    // sub r1, r2, r1
    // str r1, [r5, #0x14]
    // mov r1, #2
    // add r2, r6, #0
    // bl sub_02010E64
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // str r0, [r5, #0x18]
    // ldr r0, [sp, #0x1c]
    // str r1, [r5, #0x1c]
    // str r0, [r5, #0x20]
    // str r1, [r5, #0x24]
    // ldr r0, [sp, #0x40]
    // str r7, [r5, #0x30]
    // str r0, [r5, #0x34]
    // ldr r0, [sp, #0x44]
    // str r0, [r5, #0x2c]
    // ldrh r0, [r4, #6]
    // str r0, [r5, #0x28]
    // add r0, r5, #0
    // bl sub_020127B8
    // ldr r0, _02012750 ; =sub_02010F00
    // ldr r2, _02012754 ; =0x000003FF
    // add r1, r5, #0
    // bl SysTask_CreateOnVWaitQueue
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_02010EE0
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02010EE0
    // str r6, [sp]
    // mov r3, #0
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x28]
    // str r0, [sp, #0x14]
    // ldrb r1, [r4, #4]
    // ldrb r2, [r4, #5]
    // add r0, r7, #0
    // bl sub_02010F84
    // str r6, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0xff
    // str r0, [sp, #0xc]
    // mov r0, #0xc0
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #0x28]
    // mov r3, #1
    // str r0, [sp, #0x14]
    // ldrb r1, [r4, #4]
    // ldrb r2, [r4, #5]
    // add r0, r7, #0
    // bl sub_02010F84
    // ldr r3, [r5, #0x28]
    // add r0, r7, #0
    // mov r1, #3
    // add r2, r6, #0
    // bl sub_02011068
    // ldr r0, [sp, #0x44]
    // ldr r2, _02012758 ; =sub_02010C38
    // str r0, [sp]
    // ldr r0, [r5, #0x34]
    // add r1, r5, #0
    // add r3, r6, #0
    // bl sub_0200FF88
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // _02012750: .word sub_02010F00
    // _02012754: .word 0x000003FF
    // _02012758: .word sub_02010C38
    // TODO: decompile
}


void sub_0201275C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x24]
    // add r1, r0, #1
    // str r1, [r4, #0x24]
    // ldr r0, [r4, #0x20]
    // cmp r1, r0
    // blt _020127A6
    // mov r0, #0
    // str r0, [r4, #0x24]
    // ldr r0, [r4, #0x1c]
    // add r1, r0, #1
    // ldr r0, [r4, #0x18]
    // cmp r1, r0
    // bgt _02012798
    // str r1, [r4, #0x1c]
    // add r0, r4, #0
    // ldr r2, [r4, #0x18]
    // add r0, #0xc
    // bl sub_02012884
    // add r0, r4, #0
    // bl sub_020127B8
    // ldr r0, _020127AC ; =sub_02010F00
    // ldr r2, _020127B0 ; =0x000003FF
    // add r1, r4, #0
    // bl SysTask_CreateOnVWaitQueue
    // b _020127A6
    // ldr r0, [r4, #0x34]
    // ldr r1, [r4, #8]
    // ldr r2, [r4, #0x2c]
    // bl sub_0200FFB4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _020127AC: .word sub_02010F00
    // _020127B0: .word 0x000003FF
    // TODO: decompile
}


void sub_020127B4(void) {
    // bx lr
    // TODO: decompile
}


void sub_020127B8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r4, r0, #0
    // ldr r1, [r4, #0xc]
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // str r1, [sp, #8]
    // mov r1, #0
    // bl sub_02010EE0
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // mov r1, #1
    // bl sub_02010EE0
    // str r0, [sp, #0xc]
    // add r5, r0, #0
    // ldr r1, _02012880 ; =0x00003FFF
    // ldr r0, [sp, #8]
    // ldr r6, [sp, #0x10]
    // sub r0, r1, r0
    // mov r7, #0
    // str r0, [sp, #4]
    // mov r0, #0x60
    // sub r0, r0, r7
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // bl sub_020109D8
    // add r4, r0, #0
    // ldr r0, [sp, #4]
    // ldr r1, [sp]
    // bl sub_020109D8
    // cmp r4, #0x7f
    // ble _02012804
    // mov r4, #0x7f
    // cmp r0, #0x7f
    // ble _0201280A
    // mov r0, #0x7f
    // mov r1, #0x80
    // sub r1, r1, r0
    // lsl r1, r1, #0x10
    // mov r2, #3
    // asr r1, r1, #0x10
    // lsl r2, r2, #8
    // str r1, [sp, #0x14]
    // strh r1, [r6, r2]
    // mov r1, #0x80
    // sub r1, r1, r4
    // lsl r1, r1, #0x10
    // asr r2, r1, #0x10
    // mov r1, #0x12
    // lsl r1, r1, #6
    // strh r2, [r6, r1]
    // mov r1, #0xbf
    // sub r1, r1, r7
    // mov ip, r2
    // lsl r1, r1, #1
    // ldr r2, [sp, #0x10]
    // add r0, #0x80
    // add r3, r2, r1
    // str r1, [sp, #0x18]
    // mov r2, #3
    // ldr r1, [sp, #0x14]
    // lsl r2, r2, #8
    // strh r1, [r3, r2]
    // mov r1, #0x12
    // mov r2, ip
    // lsl r1, r1, #6
    // strh r2, [r3, r1]
    // add r4, #0x80
    // lsl r1, r4, #0x10
    // asr r2, r1, #0x10
    // mov r1, #3
    // lsl r1, r1, #8
    // lsl r0, r0, #0x10
    // strh r2, [r5, r1]
    // asr r1, r0, #0x10
    // mov r0, #0x12
    // lsl r0, r0, #6
    // strh r1, [r5, r0]
    // ldr r3, [sp, #0xc]
    // ldr r0, [sp, #0x18]
    // add r7, r7, #1
    // add r0, r3, r0
    // mov r3, #3
    // lsl r3, r3, #8
    // strh r2, [r0, r3]
    // mov r2, #0x12
    // lsl r2, r2, #6
    // strh r1, [r0, r2]
    // add r6, r6, #2
    // add r5, r5, #2
    // cmp r7, #0x60
    // blt _020127E6
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02012880: .word 0x00003FFF
    // TODO: decompile
}


void sub_02012884(void) {
    _s32_div_f();
}


void sub_0201289C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r1, #0xcd
    // ldr r0, [r5, #0x20]
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0xcd
    // str r0, [r5, #0x14]
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [r5, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, [r5, #0x20]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x14]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // bl sub_02012940
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020128E0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5, #0xc]
    // mov r6, #0
    // ldr r4, [r5, #0x14]
    // cmp r0, #1
    // beq _020128F8
    // cmp r0, #2
    // beq _0201291A
    // cmp r0, #3
    // beq _02012934
    // b _02012938
    // add r0, r4, #0
    // bl sub_02012A2C
    // cmp r0, #1
    // bne _0201293C
    // mov r1, #0xc9
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, #8
    // ldr r1, [r4, r1]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _0201293C
    // add r0, r4, #0
    // bl sub_02012A8C
    // ldr r0, [r5, #0x14]
    // bl Heap_Free
    // add r0, r6, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r6, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _0201293C
    // mov r6, #1
    // b _0201293C
    // bl GF_AssertFail
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void sub_02012940(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // ldr r7, [sp, #0x38]
    // str r3, [sp, #0x1c]
    // mov r3, #0
    // add r4, r1, #0
    // str r2, [sp, #0x18]
    // str r3, [sp]
    // add r1, r7, #0
    // mov r2, #1
    // add r5, r0, #0
    // ldr r6, [sp, #0x3c]
    // bl sub_02011080
    // ldrh r0, [r4, #6]
    // cmp r0, #0
    // bne _0201297A
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0xc0
    // bl memset
    // add r0, r5, #0
    // add r0, #0xc0
    // mov r1, #1
    // mov r2, #0xc0
    // bl memset
    // b _02012990
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0xc0
    // bl memset
    // add r0, r5, #0
    // add r0, #0xc0
    // mov r1, #0
    // mov r2, #0xc0
    // bl memset
    // mov r1, #0xc3
    // ldr r0, [r4]
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldrh r2, [r4, #4]
    // add r0, r1, #4
    // ldr r3, [sp, #0x44]
    // str r2, [r5, r0]
    // add r0, r1, #0
    // ldrh r2, [r4, #6]
    // add r0, #0x18
    // str r2, [r5, r0]
    // add r0, r1, #0
    // add r0, #0x1c
    // str r3, [r5, r0]
    // add r2, r1, #0
    // ldr r0, [sp, #0x18]
    // add r2, #8
    // str r0, [r5, r2]
    // add r2, r1, #0
    // add r2, #0xc
    // mov r0, #0
    // str r0, [r5, r2]
    // add r2, r1, #0
    // ldr r0, [sp, #0x1c]
    // add r2, #0x10
    // str r0, [r5, r2]
    // add r2, r1, #0
    // add r2, #0x14
    // mov r0, #0
    // str r0, [r5, r2]
    // add r0, r1, #0
    // add r0, #0x20
    // str r6, [r5, r0]
    // ldr r0, [sp, #0x40]
    // add r1, #0x24
    // str r0, [r5, r1]
    // add r1, r5, #0
    // add r2, r3, #0
    // bl sub_020110DC
    // ldrh r0, [r4, #6]
    // cmp r0, #1
    // str r7, [sp]
    // bne _02012A02
    // mov r3, #0
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r6, #0
    // mov r1, #0x20
    // mov r2, #0x3f
    // bl sub_02010F84
    // b _02012A18
    // mov r3, #0
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, r6, #0
    // mov r1, #0x3f
    // mov r2, #0x20
    // bl sub_02010F84
    // mov r3, #0xc9
    // lsl r3, r3, #2
    // ldr r3, [r5, r3]
    // add r0, r6, #0
    // mov r1, #1
    // add r2, r7, #0
    // bl sub_02011068
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02012A2C(void) {
    // push {r4, lr}
    // mov r2, #0x32
    // add r4, r0, #0
    // lsl r2, r2, #4
    // ldr r1, [r4, r2]
    // add r1, r1, #1
    // str r1, [r4, r2]
    // sub r1, r2, #4
    // ldr r3, [r4, r2]
    // ldr r1, [r4, r1]
    // cmp r3, r1
    // blt _02012A86
    // mov r1, #0
    // str r1, [r4, r2]
    // add r1, r2, #0
    // sub r1, #8
    // ldr r1, [r4, r1]
    // add r3, r1, #1
    // add r1, r2, #0
    // sub r1, #0xc
    // ldr r1, [r4, r1]
    // cmp r3, r1
    // bgt _02012A72
    // add r1, r2, #0
    // sub r1, #8
    // ldr r1, [r4, r1]
    // sub r2, #8
    // add r1, r1, #1
    // str r1, [r4, r2]
    // bl sub_02012A90
    // add r0, r4, #0
    // bl sub_020110C4
    // b _02012A86
    // add r0, r2, #0
    // add r0, #0x10
    // add r2, #8
    // ldr r0, [r4, r0]
    // ldr r2, [r4, r2]
    // add r1, r4, #0
    // bl sub_020110F4
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02012A8C(void) {
    // bx lr
    // TODO: decompile
}


void sub_02012A90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0x31
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r6, #0
    // cmp r0, #0
    // ble _02012ACA
    // mov r7, #0x31
    // add r4, r6, #0
    // lsl r7, r7, #4
    // mov r0, #0xc3
    // lsl r0, r0, #2
    // mov r2, #0xc6
    // mov r3, #0xc5
    // ldr r0, [r5, r0]
    // lsl r2, r2, #2
    // lsl r3, r3, #2
    // ldr r2, [r5, r2]
    // ldr r3, [r5, r3]
    // add r0, r0, r4
    // add r1, r5, #0
    // bl sub_02012ACC
    // ldr r0, [r5, r7]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r0
    // blt _02012AA6
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02012ACC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldrb r6, [r7]
    // ldrb r4, [r7, #1]
    // add r5, r1, #0
    // add r1, r3, #0
    // sub r0, r4, r6
    // mul r0, r2
    // bl _s32_div_f
    // add r0, r0, r6
    // cmp r6, r4
    // bhi _02012AEC
    // add r1, r6, #0
    // ldrh r6, [r7, #2]
    // b _02012AFC
    // ldrh r2, [r7, #2]
    // add r1, r4, #0
    // add r4, r6, #0
    // cmp r2, #0
    // bne _02012AFA
    // mov r6, #1
    // b _02012AFC
    // mov r6, #0
    // cmp r1, r4
    // bge _02012B1A
    // mov r2, #0
    // mov r3, #1
    // cmp r1, r0
    // bne _02012B12
    // cmp r6, #0
    // bne _02012B10
    // add r6, r3, #0
    // b _02012B12
    // add r6, r2, #0
    // strb r6, [r5, r1]
    // add r1, r1, #1
    // cmp r1, r4
    // blt _02012B04
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02012B1C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r1, #0xe2
    // ldr r0, [r5, #0x20]
    // lsl r1, r1, #2
    // bl Heap_Alloc
    // mov r2, #0xe2
    // str r0, [r5, #0x14]
    // mov r1, #0
    // lsl r2, r2, #2
    // bl memset
    // ldrb r1, [r4, #0xb]
    // ldr r0, [r5, #0x14]
    // cmp r1, #0
    // ldr r1, [r5, #0x10]
    // bne _02012B5E
    // str r1, [sp]
    // ldr r1, [r5, #0x18]
    // str r1, [sp, #4]
    // ldr r1, [r5, #0x1c]
    // str r1, [sp, #8]
    // ldr r1, [r5, #0x20]
    // str r1, [sp, #0xc]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // add r1, r4, #0
    // bl sub_02012BE8
    // b _02012B76
    // str r1, [sp]
    // ldr r1, [r5, #0x18]
    // str r1, [sp, #4]
    // ldr r1, [r5, #0x1c]
    // str r1, [sp, #8]
    // ldr r1, [r5, #0x20]
    // str r1, [sp, #0xc]
    // ldr r2, [r5, #4]
    // ldr r3, [r5, #8]
    // add r1, r4, #0
    // bl sub_02012CDC
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_02012B80(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r1, [r5, #0xc]
    // mov r4, #0
    // ldr r0, [r5, #0x14]
    // cmp r1, #1
    // beq _02012B98
    // cmp r1, #2
    // beq _02012BC4
    // cmp r1, #3
    // beq _02012BD6
    // b _02012BDA
    // ldr r1, _02012BE4 ; =0x00000386
    // ldrb r1, [r0, r1]
    // cmp r1, #0
    // bne _02012BA8
    // add r1, r5, #0
    // bl sub_02012C68
    // b _02012BAE
    // add r1, r5, #0
    // bl sub_02012D4C
    // cmp r0, #1
    // bne _02012BDE
    // ldr r0, [r5, #0x28]
    // ldr r1, [r5, #0x18]
    // ldr r2, [r5, #0x10]
    // bl sub_02010F34
    // ldr r0, [r5, #0xc]
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02012BDE
    // bl Heap_Free
    // add r0, r4, #0
    // str r0, [r5, #0x14]
    // ldr r0, [r5, #0xc]
    // mov r4, #1
    // add r0, r0, #1
    // str r0, [r5, #0xc]
    // b _02012BDE
    // mov r4, #1
    // b _02012BDE
    // bl GF_AssertFail
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // nop
    // _02012BE4: .word 0x00000386
    // TODO: decompile
}


void sub_02012BE8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r6, r2, #0
    // add r5, r0, #0
    // lsl r0, r6, #0xc
    // ldr r2, [r4, #0x14]
    // add r7, r3, #0
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r2, r0, #0
    // mov r0, #2
    // mov r3, #0
    // lsl r0, r0, #0xa
    // add r0, r2, r0
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // asr r2, r0, #0xc
    // mov r0, #0xe1
    // sub r1, r6, r2
    // lsl r0, r0, #2
    // strb r1, [r5, r0]
    // sub r1, r0, #4
    // str r4, [r5, r1]
    // ldrb r1, [r4, #0xb]
    // add r0, r0, #2
    // add r3, r7, #0
    // strb r1, [r5, r0]
    // ldr r0, [sp, #0x20]
    // add r1, r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl sub_020117A0
    // ldrb r0, [r4, #8]
    // cmp r0, #0
    // bne _02012C4C
    // ldrb r3, [r4, #0xb]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // mov r1, #1
    // bl sub_02011068
    // b _02012C58
    // ldrb r3, [r4, #0xb]
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #0x20]
    // mov r1, #2
    // bl sub_02011068
    // ldr r0, _02012C64 ; =0x00000385
    // mov r1, #0
    // strb r1, [r5, r0]
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02012C64: .word 0x00000385
    // TODO: decompile
}


void sub_02012C68(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // ldr r1, _02012CD8 ; =0x00000385
    // add r5, r0, #0
    // ldrb r1, [r5, r1]
    // mov r6, #0
    // cmp r1, #0
    // beq _02012C84
    // cmp r1, #1
    // beq _02012CBA
    // cmp r1, #2
    // beq _02012CD0
    // b _02012CD2
    // bl sub_020117FC
    // cmp r0, #1
    // bne _02012CD2
    // ldr r2, _02012CD8 ; =0x00000385
    // ldrb r0, [r5, r2]
    // sub r1, r2, #5
    // add r0, r0, #1
    // strb r0, [r5, r2]
    // ldr r0, [r4, #0x10]
    // sub r2, r2, #1
    // str r0, [sp]
    // ldr r0, [r4, #0x18]
    // str r0, [sp, #4]
    // ldr r0, [r4, #0x1c]
    // str r0, [sp, #8]
    // ldr r0, [r4, #0x20]
    // str r0, [sp, #0xc]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // ldrb r2, [r5, r2]
    // ldr r3, [r4, #8]
    // add r0, #0x4c
    // add r1, #0xc
    // bl sub_02012940
    // b _02012CD2
    // add r0, #0x4c
    // bl sub_02012A2C
    // cmp r0, #1
    // bne _02012CD2
    // ldr r0, _02012CD8 ; =0x00000385
    // mov r6, #1
    // ldrb r1, [r5, r0]
    // add r1, r1, #1
    // strb r1, [r5, r0]
    // b _02012CD2
    // mov r6, #1
    // add r0, r6, #0
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _02012CD8: .word 0x00000385
    // TODO: decompile
}


void sub_02012CDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r6, r2, #0
    // add r5, r0, #0
    // lsl r0, r6, #0xc
    // ldr r2, [r4, #0x14]
    // add r7, r3, #0
    // asr r1, r0, #0x1f
    // asr r3, r2, #0x1f
    // bl _ll_mul
    // add r2, r0, #0
    // mov r0, #2
    // mov r3, #0
    // lsl r0, r0, #0xa
    // add r0, r2, r0
    // adc r1, r3
    // lsl r1, r1, #0x14
    // lsr r0, r0, #0xc
    // orr r0, r1
    // mov r1, #0xe1
    // asr r0, r0, #0xc
    // lsl r1, r1, #2
    // strb r0, [r5, r1]
    // ldrb r0, [r5, r1]
    // sub r2, r6, r0
    // sub r0, r1, #4
    // str r4, [r5, r0]
    // add r0, r1, #2
    // ldrb r3, [r4, #0xb]
    // sub r1, r1, #4
    // strb r3, [r5, r0]
    // ldr r0, [sp, #0x28]
    // add r3, r7, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #0xc]
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // add r0, #0x4c
    // add r1, #0xc
    // bl sub_02012940
    // ldr r0, _02012D48 ; =0x00000385
    // mov r1, #0
    // strb r1, [r5, r0]
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02012D48: .word 0x00000385
    // TODO: decompile
}


void sub_02012D4C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r1, #0
    // ldr r1, _02012DD4 ; =0x00000385
    // add r5, r0, #0
    // ldrb r1, [r5, r1]
    // mov r6, #0
    // cmp r1, #0
    // beq _02012D68
    // cmp r1, #1
    // beq _02012DB8
    // cmp r1, #2
    // beq _02012DCC
    // b _02012DCE
    // add r0, #0x4c
    // bl sub_02012A2C
    // cmp r0, #1
    // bne _02012DCE
    // ldr r2, _02012DD4 ; =0x00000385
    // ldrb r0, [r5, r2]
    // sub r1, r2, #5
    // add r0, r0, #1
    // strb r0, [r5, r2]
    // ldr r0, [r4, #0x10]
    // sub r2, r2, #1
    // str r0, [sp]
    // ldr r0, [r4, #0x18]
    // str r0, [sp, #4]
    // ldrb r2, [r5, r2]
    // ldr r1, [r5, r1]
    // ldr r3, [r4, #8]
    // add r0, r5, #0
    // bl sub_020117A0
    // mov r0, #0xe
    // lsl r0, r0, #6
    // ldr r3, [r5, r0]
    // ldrb r0, [r3, #8]
    // cmp r0, #0
    // ldr r0, [r4, #0x18]
    // bne _02012DAC
    // ldrb r3, [r3, #0xb]
    // ldr r2, [r4, #0x10]
    // mov r1, #1
    // bl sub_02011068
    // b _02012DCE
    // ldrb r3, [r3, #0xb]
    // ldr r2, [r4, #0x10]
    // mov r1, #2
    // bl sub_02011068
    // b _02012DCE
    // bl sub_020117FC
    // cmp r0, #1
    // bne _02012DCE
    // ldr r0, _02012DD4 ; =0x00000385
    // mov r6, #1
    // ldrb r1, [r5, r0]
    // add r1, r1, #1
    // strb r1, [r5, r0]
    // b _02012DCE
    // mov r6, #1
    // add r0, r6, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _02012DD4: .word 0x00000385
    // TODO: decompile
}

