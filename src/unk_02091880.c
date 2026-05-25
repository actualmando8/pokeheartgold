/* Decompiled from asm/unk_02091880.s */
#include "global.h"

void sub_02091880(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // ldr r1, _020918B8 ; =0x0000195C
    // add r6, r0, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r0, r6, #0
    // str r5, [r4]
    // bl EasyChatManager_New
    // str r0, [r4, #4]
    // mov r3, #0
    // ldr r0, _020918BC ; =0x0000189E
    // add r2, r3, #0
    // add r1, r4, r3
    // add r3, r3, #1
    // strb r2, [r1, r0]
    // cmp r3, #0xbb
    // blt _0209189E
    // add r0, r4, #0
    // bl sub_020918D4
    // add r0, r4, #0
    // bl sub_02091B44
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _020918B8: .word 0x0000195C
    // _020918BC: .word 0x0000189E
    // TODO: decompile
}



void sub_020918C0(void) {
    EasyChatManager_Delete(*((u32*)(r0 + 4)));
    Heap_Free(r4);
}



void sub_020918D4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // mov r4, #0
    // str r0, [sp]
    // add r7, r0, #0
    // str r0, [sp, #8]
    // add r0, #0x68
    // ldr r5, _02091910 ; =sECMenuSpecs
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #8]
    // str r4, [r7, #0x38]
    // lsl r6, r4, #1
    // add r3, r3, r6
    // ldr r0, [sp]
    // ldr r1, [r5, #4]
    // ldr r2, [r5, #8]
    // ldr r6, [r5]
    // blx r6
    // str r0, [r7, #8]
    // add r4, r4, r0
    // ldr r0, [sp, #4]
    // add r7, r7, #4
    // add r0, r0, #1
    // add r5, #0xc
    // str r0, [sp, #4]
    // cmp r0, #0xc
    // blt _020918E8
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02091910: .word sECMenuSpecs
    // TODO: decompile
}



void ECMenuBuild_Pokemon(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // str r0, [sp]
    // ldr r0, [r0]
    // str r2, [sp, #4]
    // add r5, r1, #0
    // add r4, r3, #0
    // mov r6, #0
    // bl sub_02090D7C
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // add r7, r6, #0
    // cmp r0, #0
    // bls _0209196A
    // ldrh r1, [r5]
    // ldr r0, [sp, #8]
    // bl Pokedex_CheckMonSeenFlag
    // cmp r0, #0
    // beq _02091960
    // ldrh r3, [r5]
    // ldr r0, [sp]
    // mov r2, #7
    // lsr r1, r3, #3
    // add r1, r0, r1
    // ldr r0, _02091970 ; =0x0000189E
    // and r3, r2
    // mov r2, #1
    // ldrb r0, [r1, r0]
    // lsl r2, r3
    // orr r2, r0
    // ldr r0, _02091970 ; =0x0000189E
    // add r6, r6, #1
    // strb r2, [r1, r0]
    // ldrh r0, [r5]
    // strh r0, [r4]
    // add r4, r4, #2
    // ldr r0, [sp, #4]
    // add r7, r7, #1
    // add r5, r5, #2
    // cmp r7, r0
    // blo _02091932
    // add r0, r6, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02091970: .word 0x0000189E
    // TODO: decompile
}



void ECMenuBuild_Move(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // ldr r0, [r0]
    // add r5, r1, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // bl sub_02090D84
    // cmp r0, #0
    // beq _020919BA
    // mov r2, #0
    // cmp r7, #0
    // bls _020919B6
    // ldrh r6, [r5]
    // ldr r0, [sp]
    // mov r3, #7
    // lsr r1, r6, #3
    // add r1, r0, r1
    // ldr r0, _020919C0 ; =0x0000189E
    // and r6, r3
    // mov r3, #1
    // ldrb r0, [r1, r0]
    // lsl r3, r6
    // orr r3, r0
    // ldr r0, _020919C0 ; =0x0000189E
    // add r2, r2, #1
    // strb r3, [r1, r0]
    // ldrh r0, [r5]
    // add r5, r5, #2
    // strh r0, [r4]
    // add r4, r4, #2
    // cmp r2, r7
    // blo _0209198E
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020919C0: .word 0x0000189E
    // TODO: decompile
}



void ECMenuBuild_TrendySayings(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // str r0, [sp]
    // ldr r0, [r0]
    // add r5, r1, #0
    // str r2, [sp, #4]
    // add r4, r3, #0
    // bl sub_02090D80
    // str r0, [sp, #0xc]
    // ldr r0, _02091A30 ; =0x00000122 ; NARC_msg_msg_0290_bin
    // mov r1, #0
    // bl GetECWordIndexByPair ; EARTH TONES
    // str r0, [sp, #8]
    // mov r7, #0
    // ldr r0, [sp, #4]
    // add r6, r7, #0
    // cmp r0, #0
    // bls _02091A28
    // ldrh r2, [r5]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // sub r1, r2, r1
    // bl Save_EasyChat_GetTrendySayingFlag
    // cmp r0, #0
    // beq _02091A1E
    // ldrh r3, [r5]
    // ldr r0, [sp]
    // mov r2, #7
    // lsr r1, r3, #3
    // add r1, r0, r1
    // ldr r0, _02091A34 ; =0x0000189E
    // and r3, r2
    // mov r2, #1
    // ldrb r0, [r1, r0]
    // lsl r2, r3
    // orr r2, r0
    // ldr r0, _02091A34 ; =0x0000189E
    // add r6, r6, #1
    // strb r2, [r1, r0]
    // ldrh r0, [r5]
    // strh r0, [r4]
    // add r4, r4, #2
    // ldr r0, [sp, #4]
    // add r7, r7, #1
    // add r5, r5, #2
    // cmp r7, r0
    // blo _020919EC
    // add r0, r6, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02091A30: .word 0x00000122 ; NARC_msg_msg_0290_bin
    // _02091A34: .word 0x0000189E
    // TODO: decompile
}



void ECMenuBuild_Greetings(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r0, [sp]
    // ldr r0, [r0]
    // add r5, r1, #0
    // str r2, [sp, #4]
    // add r4, r3, #0
    // bl sub_02090D80
    // str r0, [sp, #0x10]
    // ldr r0, _02091AB8 ; =0x0000011F ; NARC_msg_msg_0289_bin
    // mov r1, #0
    // bl GetECWordIndexByPair ; BEAUTY
    // add r6, r0, #0
    // add r0, r6, #5
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0xc]
    // mov r7, #0
    // ldr r0, [sp, #4]
    // str r7, [sp, #8]
    // cmp r0, #0
    // bls _02091AB0
    // ldrh r1, [r5]
    // cmp r1, r6
    // blo _02091A80
    // ldr r0, [sp, #0xc]
    // cmp r1, r0
    // bhi _02091A80
    // ldr r0, [sp, #0x10]
    // sub r1, r1, r6
    // bl Save_EasyChat_GetGreetingsFlag
    // cmp r0, #0
    // beq _02091AA2
    // ldrh r3, [r5]
    // ldr r0, [sp]
    // mov r2, #7
    // lsr r1, r3, #3
    // add r1, r0, r1
    // ldr r0, _02091ABC ; =0x0000189E
    // and r3, r2
    // mov r2, #1
    // ldrb r0, [r1, r0]
    // lsl r2, r3
    // orr r2, r0
    // ldr r0, _02091ABC ; =0x0000189E
    // add r7, r7, #1
    // strb r2, [r1, r0]
    // ldrh r0, [r5]
    // strh r0, [r4]
    // add r4, r4, #2
    // ldr r0, [sp, #8]
    // add r5, r5, #2
    // add r1, r0, #1
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
    // cmp r1, r0
    // blo _02091A68
    // add r0, r7, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02091AB8: .word 0x0000011F ; NARC_msg_msg_0289_bin
    // _02091ABC: .word 0x0000189E
    // TODO: decompile
}



void ECMenuBuild_Generic(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // mov r0, #0
    // mov lr, r2
    // mov ip, r0
    // mov r0, lr
    // add r4, r1, #0
    // add r7, r3, #0
    // cmp r0, #0
    // bls _02091B36
    // ldrh r2, [r4]
    // ldr r0, _02091B3C ; =0x0000FFFE
    // cmp r2, r0
    // bne _02091B0A
    // add r0, r4, #2
    // add r4, r4, #4
    // ldrh r2, [r0]
    // ldrh r0, [r4]
    // cmp r2, #0
    // strh r0, [r7]
    // beq _02091B2A
    // ldrh r5, [r4]
    // mov r3, #7
    // add r4, r4, #2
    // lsr r0, r5, #3
    // add r1, r6, r0
    // ldr r0, _02091B40 ; =0x0000189E
    // and r5, r3
    // mov r3, #1
    // ldrb r0, [r1, r0]
    // lsl r3, r5
    // orr r3, r0
    // ldr r0, _02091B40 ; =0x0000189E
    // sub r2, r2, #1
    // strb r3, [r1, r0]
    // bne _02091AEA
    // b _02091B2A
    // lsr r0, r2, #3
    // ldr r1, _02091B40 ; =0x0000189E
    // add r0, r6, r0
    // ldrb r3, [r0, r1]
    // mov r1, #7
    // mov r5, #1
    // and r1, r2
    // add r2, r5, #0
    // lsl r2, r1
    // ldr r1, _02091B40 ; =0x0000189E
    // orr r2, r3
    // strb r2, [r0, r1]
    // ldrh r0, [r4]
    // add r4, r4, #2
    // strh r0, [r7]
    // add r7, r7, #2
    // mov r0, ip
    // add r1, r0, #1
    // mov r0, lr
    // mov ip, r1
    // cmp r1, r0
    // blo _02091AD4
    // mov r0, lr
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02091B3C: .word 0x0000FFFE
    // _02091B40: .word 0x0000189E
    // TODO: decompile
}



void sub_02091B44(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r4, #0
    // ldr r6, _02091B80 ; =_02106C9C
    // str r4, [sp]
    // add r5, r7, #0
    // ldr r0, _02091B84 ; =0x00000C84
    // mov r2, #0xcf
    // str r4, [r5, r0]
    // lsl r2, r2, #4
    // ldr r1, [r6]
    // add r0, r7, #0
    // add r2, r7, r2
    // add r3, r4, #0
    // bl sub_02091B8C
    // ldr r1, _02091B88 ; =0x00000C18
    // add r6, r6, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // add r5, r5, #4
    // add r4, r4, r0
    // ldr r0, [sp]
    // add r0, r0, #1
    // str r0, [sp]
    // cmp r0, #0x1b
    // blo _02091B50
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02091B80: .word _02106C9C
    // _02091B84: .word 0x00000C84
    // _02091B88: .word 0x00000C18
    // TODO: decompile
}



void sub_02091B8C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r1, #0
    // add r6, r0, #0
    // str r2, [sp]
    // mov r0, #0
    // mov ip, r0
    // ldrh r2, [r7]
    // ldr r0, _02091C2C ; =0x0000FFFF
    // mov lr, r3
    // cmp r2, r0
    // beq _02091C28
    // ldr r0, _02091C30 ; =0x0000FFFE
    // cmp r2, r0
    // bne _02091BF4
    // add r0, r7, #2
    // ldrh r5, [r0]
    // add r7, r7, #4
    // mov r3, #0
    // cmp r5, #0
    // bls _02091BEE
    // add r4, r7, #0
    // ldrh r2, [r4]
    // mov r0, #7
    // mov r1, #1
    // and r0, r2
    // lsl r1, r0
    // lsr r0, r2, #3
    // add r2, r6, r0
    // ldr r0, _02091C34 ; =0x0000189E
    // ldrb r0, [r2, r0]
    // tst r0, r1
    // beq _02091BE6
    // lsl r0, r3, #1
    // ldrh r1, [r7, r0]
    // mov r0, lr
    // lsl r2, r0, #1
    // mov r0, lr
    // add r0, r0, #1
    // mov lr, r0
    // ldr r0, [sp]
    // strh r1, [r0, r2]
    // mov r0, ip
    // add r0, r0, #1
    // mov ip, r0
    // b _02091BEE
    // add r3, r3, #1
    // add r4, r4, #2
    // cmp r3, r5
    // blo _02091BB6
    // lsl r0, r5, #1
    // add r7, r7, r0
    // b _02091C20
    // mov r1, #1
    // mov r0, #7
    // and r0, r2
    // add r3, r1, #0
    // lsl r3, r0
    // lsr r0, r2, #3
    // add r1, r6, r0
    // ldr r0, _02091C34 ; =0x0000189E
    // ldrb r0, [r1, r0]
    // tst r0, r3
    // beq _02091C1E
    // mov r1, lr
    // add r1, r1, #1
    // mov r0, lr
    // mov lr, r1
    // ldr r1, [sp]
    // lsl r0, r0, #1
    // strh r2, [r1, r0]
    // mov r0, ip
    // add r0, r0, #1
    // mov ip, r0
    // add r7, r7, #2
    // ldrh r2, [r7]
    // ldr r0, _02091C2C ; =0x0000FFFF
    // cmp r2, r0
    // bne _02091BA2
    // mov r0, ip
    // pop {r3, r4, r5, r6, r7, pc}
    // _02091C2C: .word 0x0000FFFF
    // _02091C30: .word 0x0000FFFE
    // _02091C34: .word 0x0000189E
    // TODO: decompile
}



void sub_02091C38(void) {
    // add r0, r0, r1
}



void sub_02091C40(void) {
}



void sub_02091C60(void) {
    // add r1, r0, r1
    // add r1, r1, r2
    // add r0, r0, r1
    // add r0, #0x68
    // ldrh r0, [r0]
}



void sub_02091C74(void) {
    // lsl r1, r1, #2
    // add r1, r0, r1
    // ldr r0, _02091C80 ; =0x00000C18
    // ldr r0, [r1, r0]
    // bx lr
    // nop
    // _02091C80: .word 0x00000C18
    // TODO: decompile
}



void sub_02091C84(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // lsl r3, r1, #2
    // add r6, r5, r3
    // ldr r3, _02091CA8 ; =0x00000C18
    // ldr r3, [r6, r3]
    // cmp r3, #0
    // beq _02091CA4
    // bl sub_02091CAC
    // add r1, r0, #0
    // ldr r0, [r5, #4]
    // add r2, r4, #0
    // bl EasyChatManager_ReadWordIntoString
    // pop {r4, r5, r6, pc}
    // nop
    // _02091CA8: .word 0x00000C18
    // TODO: decompile
}



void sub_02091CAC(void) {
    // push {r3, r4}
    // lsl r1, r1, #2
    // ldr r3, _02091CD4 ; =0x00000C18
    // add r4, r0, r1
    // ldr r1, [r4, r3]
    // cmp r1, #0
    // beq _02091CCE
    // add r1, r3, #0
    // add r1, #0x6c
    // ldr r1, [r4, r1]
    // add r3, #0xd8
    // add r1, r2, r1
    // lsl r1, r1, #1
    // add r0, r0, r1
    // ldrh r0, [r0, r3]
    // pop {r3, r4}
    // bx lr
    // ldr r0, _02091CD8 ; =0x0000FFFF
    // pop {r3, r4}
    // bx lr
    // _02091CD4: .word 0x00000C18
    // _02091CD8: .word 0x0000FFFF
    // TODO: decompile
}


