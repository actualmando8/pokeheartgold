/* Decompiled from asm/unk_02091880.s */
#include "global.h"

void sub_02091880(void) {
    Heap_Alloc(0x0000195C);
    // str r5, [r4]
    EasyChatManager_New(r6);
    *((u32*)(r4 + 4)) = r0;
    // add r1, r4, r3
    // strb r2, [r1, r0]
    sub_020918D4(r4, 0, (0 + 1));
    sub_02091B44(r4);
}




void sub_020918C0(void) {
}




void sub_020918D4(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // add r0, #0x68
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // ldr r3, [sp, #8]
    *((u32*)(r0 + 0x38)) = 0;
    // add r3, r3, r6
    // ldr r0, [sp]
    // blx r6
    *((u32*)(r0 + 8)) = r0;
    // add r4, r4, r0
    // ldr r0, [sp, #4]
    // add r5, #0xc
    // str r0, [sp, #4]
}




void ECMenuBuild_Pokemon(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    sub_02090D7C(*((u32*)r0));
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #8]
    Pokedex_CheckMonSeenFlag(*((u16*)r5));
    // ldr r0, [sp]
    // add r1, r0, r1
    // and r3, r2
    // lsl r2, r3
    // strb r2, [r1, r0]
    // strh r0, [r4]
    // ldr r0, [sp, #4]
}




void ECMenuBuild_Move(void) {
    // str r0, [sp]
    sub_02090D84(*((u32*)r0));
    // ldr r0, [sp]
    // add r1, r0, r1
    // and r6, r3
    // lsl r3, r6
    // strb r3, [r1, r0]
    // strh r0, [r4]
}




void ECMenuBuild_TrendySayings(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    sub_02090D80(*((u32*)r0));
    // str r0, [sp, #0xc]
    GetECWordIndexByPair(0x00000122, 0);
    // str r0, [sp, #8]
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0xc]
    // sub r1, r2, r1
    Save_EasyChat_GetTrendySayingFlag(*((u16*)r5));
    // ldr r0, [sp]
    // add r1, r0, r1
    // and r3, r2
    // lsl r2, r3
    // strb r2, [r1, r0]
    // strh r0, [r4]
    // ldr r0, [sp, #4]
}




void ECMenuBuild_Greetings(void) {
    // str r0, [sp]
    // str r2, [sp, #4]
    sub_02090D80(*((u32*)r0));
    // str r0, [sp, #0x10]
    GetECWordIndexByPair(0x0000011F, 0);
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    // str r7, [sp, #8]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // sub r1, r1, r6
    Save_EasyChat_GetGreetingsFlag((((r0 + 5) << 0x10) >> 0x10), *((u16*)r5));
    // ldr r0, [sp]
    // add r1, r0, r1
    // and r3, r2
    // lsl r2, r3
    // strb r2, [r1, r0]
    // strh r0, [r4]
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #4]
    // str r1, [sp, #8]
}




void ECMenuBuild_Generic(void) {
    // mov lr, r2
    // mov ip, r0
    // mov r0, lr
    // strh r0, [r7]
    // add r1, r6, r0
    // and r5, r3
    // lsl r3, r5
    // strb r3, [r1, r0]
    // add r0, r6, r0
    // and r1, r2
    // lsl r2, r1
    // strb r2, [r0, r1]
    // strh r0, [r7]
    // mov r0, ip
    // mov r0, lr
    // mov ip, r1
    // mov r0, lr
}




void sub_02091B44(void) {
    // str r4, [sp]
    // str r4, [r5, r0]
    // add r2, r7, r2
    sub_02091B8C(r0, *((u32*)_02106C9C), (0xcf << 4), 0);
    // str r0, [r5, r1]
    // add r4, r4, r0
    // ldr r0, [sp]
    // str r0, [sp]
}




void sub_02091B8C(void) {
    // str r2, [sp]
    // mov ip, r0
    // mov lr, r3
    // and r0, r2
    // lsl r1, r0
    // add r2, r6, r0
    // tst r0, r1
    // mov r0, lr
    // mov r0, lr
    // mov lr, r0
    // ldr r0, [sp]
    // strh r1, [r0, r2]
    // mov r0, ip
    // mov ip, r0
    // add r7, r7, r0
    // and r0, r2
    // lsl r3, r0
    // add r1, r6, r0
    // tst r0, r3
    // mov r1, lr
    // mov r0, lr
    // mov lr, r1
    // ldr r1, [sp]
    // strh r2, [r1, r0]
    // mov r0, ip
    // mov ip, r0
    // mov r0, ip
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
}




void sub_02091C74(void) {
    // add r1, r0, r1
}




void sub_02091C84(void) {
    // add r6, r5, r3
    sub_02091CAC(*((u32*)(r6 + 0x00000C18)));
    EasyChatManager_ReadWordIntoString(*((u32*)(r5 + 4)), r0, r4);
}




void sub_02091CAC(void) {
    // add r4, r0, r1
    // add r1, #0x6c
    // add r3, #0xd8
    // add r1, r2, r1
    // add r0, r0, r1
}



