/* Decompiled from asm/overlay_01_021EDAFC.s */
#include "global.h"

void ov01_021EDAFC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // ldr r1, [sp, #0x2c]
    // add r4, r0, #0
    // add r5, r2, #0
    // add r7, r3, #0
    // cmp r1, #0
    // bne _021EDB2A
    // mov r0, #1
    // mov r1, #0x1b ; msgdata/msg.narc
    // mov r2, #0xbf ; msg_0191.gmm
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // add r1, r6, #0
    // add r1, #0x8c
    // str r0, [r1]
    // add r0, r6, #0
    // add r0, #0x97
    // ldrb r1, [r0]
    // mov r0, #2
    // orr r1, r0
    // b _021EDB3A
    // add r0, r6, #0
    // add r0, #0x8c
    // str r1, [r0]
    // add r0, r6, #0
    // add r0, #0x97
    // ldrb r1, [r0]
    // mov r0, #2
    // bic r1, r0
    // add r0, r6, #0
    // add r0, #0x97
    // strb r1, [r0]
    // add r0, r6, #0
    // ldr r1, [sp, #0x24]
    // add r0, #0x90
    // str r1, [r0]
    // add r0, r6, #0
    // str r4, [r6]
    // ldr r1, [sp, #0x20]
    // add r0, #0xa0
    // str r1, [r0]
    // add r1, r6, #0
    // mov r0, #0
    // add r1, #0xa4
    // str r0, [r1]
    // add r1, r6, #0
    // add r1, #0xa8
    // str r0, [r1]
    // add r1, r6, #0
    // add r1, #0x97
    // ldrb r3, [r1]
    // add r4, sp, #8
    // mov r1, #1
    // bic r3, r1
    // ldrb r2, [r4, #0x14]
    // mov r1, #1
    // and r1, r2
    // add r2, r3, #0
    // orr r2, r1
    // add r1, r6, #0
    // add r1, #0x97
    // strb r2, [r1]
    // add r1, r6, #0
    // ldrb r2, [r4, #0x10]
    // add r1, #0x96
    // mov r3, #0x40
    // strb r2, [r1]
    // add r1, r6, #0
    // add r1, #0x97
    // ldrb r1, [r1]
    // bic r1, r3
    // add r3, r6, #0
    // add r3, #0x97
    // strb r1, [r3]
    // add r1, r6, #0
    // add r1, #0x97
    // ldrb r1, [r1]
    // mov r3, #0x80
    // bic r1, r3
    // add r3, r6, #0
    // add r3, #0x97
    // strb r1, [r3]
    // add r1, r6, #0
    // add r1, #0x98
    // strb r5, [r1]
    // add r1, r6, #0
    // add r1, #0x99
    // strb r7, [r1]
    // add r1, r6, #0
    // add r1, #0x9b
    // strb r0, [r1]
    // ldr r1, [sp, #0x28]
    // mov r3, #3
    // str r1, [r6, #0x18]
    // add r1, r6, #0
    // add r1, #0x94
    // strb r3, [r1]
    // mov r1, #0xb7
    // lsl r1, r1, #2
    // strh r2, [r6, r1]
    // add r2, r6, #0
    // add r3, r0, #0
    // add r1, r2, #0
    // add r1, #0xbc
    // str r3, [r1]
    // add r1, r2, #0
    // add r1, #0xc0
    // add r0, r0, #1
    // add r2, #8
    // str r3, [r1]
    // cmp r0, #0x1c
    // blt _021EDBCC
    // mov r7, #0xa9
    // add r1, r6, #0
    // add r2, r6, #0
    // mov r5, #0
    // mov r0, #0xff
    // lsl r7, r7, #2
    // mov r4, #0x71
    // lsl r4, r4, #2
    // str r5, [r1, r4]
    // add r4, r4, #4
    // str r5, [r1, r4]
    // strh r0, [r2, r7]
    // add r3, r3, #1
    // add r1, #8
    // add r2, r2, #2
    // cmp r3, #0x1c
    // blt _021EDBEC
    // add r4, r6, #0
    // mov r7, #0x50
    // add r0, r7, #0
    // mov r1, #4
    // bl String_New
    // str r0, [r4, #0x1c]
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, #0x1c
    // blt _021EDC06
    // add r6, #0xa0
    // ldr r1, _021EDC24 ; =0x0000EEEE
    // ldr r0, [r6]
    // strh r1, [r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EDC24: .word 0x0000EEEE
    // TODO: decompile
}



void ov01_021EDC28(void) {
    // str r2, [sp, #0x18]
    Heap_Alloc(4, (0x2e << 4));
    memset(0, 0, (0x2e << 4));
    // str r5, [sp]
    // add r0, sp, #0x20
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x34]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x3c]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x40]
    // str r0, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    ov01_021EDAFC(r6, r4, r7);
}



void ov01_021EDC7C(void) {
}



void ov01_021EDC84(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // bl ov01_021EDDD8
    // mov r1, #7
    // tst r1, r0
    // bne _021EDC98
    // lsr r0, r0, #3
    // b _021EDC9C
    // lsr r0, r0, #3
    // add r0, r0, #1
    // add r1, r4, #0
    // add r1, #0x97
    // ldrb r1, [r1]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1f
    // beq _021EDCB6
    // add r1, r4, #0
    // add r1, #0x98
    // ldrb r1, [r1]
    // sub r2, r1, r0
    // add r1, r4, #0
    // add r1, #0x98
    // strb r2, [r1]
    // add r1, r4, #0
    // add r1, #0x97
    // ldrb r1, [r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x1f
    // beq _021EDCD8
    // add r1, r4, #0
    // add r1, #0x99
    // ldrb r2, [r1]
    // add r1, r4, #0
    // add r1, #0x9b
    // ldrb r1, [r1]
    // lsl r1, r1, #1
    // sub r2, r2, r1
    // add r1, r4, #0
    // add r1, #0x99
    // strb r2, [r1]
    // add r1, r4, #0
    // add r1, #0x99
    // ldrb r1, [r1]
    // lsl r0, r0, #0x18
    // add r3, r4, #0
    // str r1, [sp]
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r1, r4, #0
    // add r3, #0x98
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x3d
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // ldrb r3, [r3]
    // ldr r0, [r0, #8]
    // add r1, #8
    // mov r2, #3
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r2, _021EDD60 ; =0x000003D9
    // ldr r0, [r0, #8]
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // add r0, r4, #0
    // ldr r2, _021EDD60 ; =0x000003D9
    // add r0, #8
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // add r0, r4, #0
    // bl ov01_021EDE18
    // add r1, r4, #0
    // add r1, #0x96
    // add r0, r4, #0
    // ldrb r1, [r1]
    // add r0, #0xac
    // mov r2, #4
    // bl Create2dMenu
    // add r1, r4, #0
    // add r1, #0xb8
    // str r0, [r1]
    // ldr r0, _021EDD64 ; =ov01_021EDE8C
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #4]
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _021EDD60: .word 0x000003D9
    // _021EDD64: .word ov01_021EDE8C
    // TODO: decompile
}



void ov01_021EDD68(void) {
    String_New(0x50, 4);
    // add r0, #0x8c
    ReadMsgDataIntoString(*((u32*)r5), r7, r0);
    // add r1, #0x9b
    // ldrb r1, [r1]
    // add r0, #0x90
    // add r1, r5, r1
    StringExpandPlaceholders(*((u32*)r5), *((u32*)((r5 << 2) + 0x1c)), r4);
    // add r0, #0x9b
    // ldrb r2, [r0]
    // add r0, r5, r0
    // add r0, r5, r0
    // add r0, #0xbc
    // str r1, [r0]
    String_Delete(r4, *((u32*)((r2 << 2) + 0x1c)));
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r0, r5, r0
    // add r0, #0xc0
    // str r6, [r0]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r5, #0x9b
    // strb r0, [r5]
}



void ov01_021EDDD8(void) {
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r0, #0xbc
    FontID_String_GetWidth(0, *((u32*)r0), 0);
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r5, #8
    // add r6, #0xc
}



void ov01_021EDE18(void) {
    // add r2, #0xbc
    // add r1, #0xac
    // str r2, [r1]
    // add r2, #8
    // add r1, #0xb0
    // str r2, [r1]
    // add r1, #0xb4
    // strb r2, [r1]
    // add r1, #0xb5
    // strb r2, [r1]
    // add r1, #0x9b
    // ldrb r2, [r1]
    // add r1, #0xb6
    // strb r2, [r1]
    // add r2, #0xb7
    // ldrb r3, [r2]
    // bic r3, r2
    // add r2, #0xb7
    // strb r3, [r2]
    // add r2, #0xb7
    // ldrb r3, [r2]
    // add r1, #0xb7
    // bic r3, r2
    // add r2, #0xb7
    // strb r3, [r2]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // ldrb r2, [r1]
    // bic r2, r0
    // orr r0, r2
    // strb r0, [r1]
    // bic r2, r0
    // strb r2, [r1]
}



void ov01_021EDE8C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // add r0, r4, #0
    // add r0, #0x94
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021EDEA8
    // add r0, r4, #0
    // add r0, #0x94
    // ldrb r0, [r0]
    // add r4, #0x94
    // sub r0, r0, #1
    // strb r0, [r4]
    // pop {r4, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021EDEF8
    // add r0, r4, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // bl Handle2dMenuInput
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // beq _021EDECA
    // add r1, r1, #1
    // cmp r0, r1
    // beq _021EDEF8
    // b _021EDEEA
    // add r0, r4, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021EDEF8
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r1, _021EDEFC ; =0x0000FFFE
    // ldr r0, [r0]
    // strh r1, [r0]
    // add r0, r4, #0
    // bl ov01_021EDF38
    // pop {r4, pc}
    // add r1, r4, #0
    // add r1, #0xa0
    // ldr r1, [r1]
    // strh r0, [r1]
    // add r0, r4, #0
    // bl ov01_021EDF38
    // pop {r4, pc}
    // nop
    // _021EDEFC: .word 0x0000FFFE
    // TODO: decompile
}



void ov01_021EDF00(void) {
    String_Delete(*((u32*)(r0 + 0x1c)));
    // add r0, #0x97
    // ldrb r0, [r0]
    // add r0, #0x8c
    DestroyMsgData(*((u32*)r6));
    Heap_Free(r6);
}



void ov01_021EDF38(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021EDF74 ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r0, r4, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // mov r1, #0
    // bl Delete2dMenu
    // add r0, r4, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // mov r1, #0
    // bl sub_0200E5D4
    // add r0, r4, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // bl RemoveWindow
    // ldr r0, [r4, #4]
    // bl SysTask_Destroy
    // add r0, r4, #0
    // bl ov01_021EDF00
    // pop {r4, pc}
    // nop
    // _021EDF74: .word SEQ_SE_DP_SELECT
    // TODO: decompile
}



void ov01_021EDF78(void) {
}



void MoveTutorMenu_SetListItem(void) {
}



void ov01_021EDFA4(void) {
    ov01_021EE2E4();
    // tst r1, r0
    // add r0, #0x97
    // ldrb r0, [r0]
    // add r0, #0x98
    // ldrb r0, [r0]
    // sub r2, r0, r1
    // add r0, #0x98
    // strb r2, [r0]
    // add r0, #0x97
    // ldrb r0, [r0]
    // add r0, #0x9b
    // ldrb r3, [r0]
    // add r0, #0x99
    // ldrb r2, [r0]
    // add r0, #0x99
    // sub r2, #0x10
    // strb r2, [r0]
    // add r0, #0x99
    // ldrb r2, [r0]
    // sub r2, r2, r0
    // add r0, #0x99
    // strb r2, [r0]
    ov01_021EE01C(r4, ((r0 >> 3) + 1));
}



void ov01_021EE014(void) {
}



void ov01_021EE01C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // add r0, #0x9b
    // ldrb r2, [r0]
    // cmp r2, #8
    // bls _021EE05A
    // add r0, r4, #0
    // add r0, #0x99
    // ldrb r0, [r0]
    // add r3, r4, #0
    // add r3, #0x98
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x3d
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, r4, #0
    // ldrb r3, [r3]
    // ldr r0, [r0, #8]
    // add r1, #8
    // mov r2, #3
    // bl AddWindowParameterized
    // b _021EE08A
    // add r0, r4, #0
    // add r0, #0x99
    // ldrb r0, [r0]
    // add r3, r4, #0
    // add r3, #0x98
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // lsl r0, r2, #0x19
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x3d
    // str r0, [sp, #0x10]
    // ldr r0, [r4]
    // add r1, r4, #0
    // ldrb r3, [r3]
    // ldr r0, [r0, #8]
    // add r1, #8
    // mov r2, #3
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r2, _021EE0E4 ; =0x000003D9
    // ldr r0, [r0, #8]
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // add r0, r4, #0
    // ldr r2, _021EE0E4 ; =0x000003D9
    // add r0, #8
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // add r0, r4, #0
    // bl ov01_021EE324
    // add r2, r4, #0
    // add r2, #0x96
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldrb r2, [r2]
    // add r0, r4, r0
    // mov r1, #0
    // mov r3, #4
    // bl ListMenuInit
    // mov r1, #0x6f
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov01_021EE634
    // ldr r0, _021EE0E8 ; =ov01_021EE49C
    // add r1, r4, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #4]
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _021EE0E4: .word 0x000003D9
    // _021EE0E8: .word ov01_021EE49C
    // TODO: decompile
}



void ov01_021EE0EC(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r4, r1, #0
    // add r6, r2, #0
    // bl ov01_021EE2E4
    // mov r1, #7
    // tst r1, r0
    // bne _021EE104
    // lsr r1, r0, #3
    // b _021EE108
    // lsr r0, r0, #3
    // add r1, r0, #1
    // add r0, r5, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x19
    // lsr r0, r0, #0x1f
    // beq _021EE122
    // add r0, r5, #0
    // add r0, #0x98
    // ldrb r0, [r0]
    // sub r2, r0, r1
    // add r0, r5, #0
    // add r0, #0x98
    // strb r2, [r0]
    // add r0, r5, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x1f
    // beq _021EE158
    // add r0, r5, #0
    // add r0, #0x9b
    // ldrb r3, [r0]
    // cmp r3, #8
    // bls _021EE148
    // add r0, r5, #0
    // add r0, #0x99
    // ldrb r2, [r0]
    // add r0, r5, #0
    // add r0, #0x99
    // sub r2, #0x10
    // strb r2, [r0]
    // b _021EE158
    // add r0, r5, #0
    // add r0, #0x99
    // ldrb r2, [r0]
    // lsl r0, r3, #1
    // sub r2, r2, r0
    // add r0, r5, #0
    // add r0, #0x99
    // strb r2, [r0]
    // add r0, r5, #0
    // add r0, #0x9b
    // ldrb r0, [r0]
    // cmp r0, #8
    // bls _021EE192
    // add r0, r5, #0
    // add r0, #0x99
    // ldrb r0, [r0]
    // add r3, r5, #0
    // add r3, #0x98
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x3d
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r1, r5, #0
    // ldrb r3, [r3]
    // ldr r0, [r0, #8]
    // add r1, #8
    // mov r2, #3
    // bl AddWindowParameterized
    // b _021EE1C2
    // add r2, r5, #0
    // add r2, #0x99
    // ldrb r2, [r2]
    // lsl r1, r1, #0x18
    // lsl r0, r0, #0x19
    // str r2, [sp]
    // lsr r1, r1, #0x18
    // str r1, [sp, #4]
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x3d
    // add r3, r5, #0
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r3, #0x98
    // add r1, r5, #0
    // ldrb r3, [r3]
    // ldr r0, [r0, #8]
    // add r1, #8
    // mov r2, #3
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // ldr r2, _021EE23C ; =0x000003D9
    // ldr r0, [r0, #8]
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // add r0, r5, #0
    // ldr r2, _021EE23C ; =0x000003D9
    // add r0, #8
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // add r0, r5, #0
    // bl ov01_021EE324
    // add r0, r5, #0
    // add r0, #0xa4
    // str r4, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // str r6, [r0]
    // add r0, r5, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // mov r3, #4
    // ldrh r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // ldrh r0, [r0]
    // add r1, r1, r0
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // strh r1, [r5, r0]
    // mov r0, #0x67
    // lsl r0, r0, #2
    // ldrh r1, [r4]
    // ldrh r2, [r6]
    // add r0, r5, r0
    // bl ListMenuInit
    // mov r1, #0x6f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov01_021EE634
    // ldr r0, _021EE240 ; =ov01_021EE49C
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #4]
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // _021EE23C: .word 0x000003D9
    // _021EE240: .word ov01_021EE49C
    // TODO: decompile
}



void MoveTutorMenu_SetListItem_Internal(void) {
    // str r1, [sp]
    String_New(0x50, 4);
    // add r0, #0x8c
    // ldr r1, [sp]
    ReadMsgDataIntoString(*((u32*)r5), r0);
    // add r1, #0x9b
    // ldrb r1, [r1]
    // add r0, #0x90
    // add r1, r5, r1
    StringExpandPlaceholders(*((u32*)r5), *((u32*)((r5 << 2) + 0x1c)), r6);
    // add r0, #0x9b
    // ldrb r1, [r0]
    // add r0, r5, r0
    // add r2, r5, r1
    // str r0, [r2, r1]
    String_Delete(r6, (0x71 << 2));
    // add r0, #0x9b
    // ldrb r0, [r0]
    // mvn r2, r2
    // add r1, r5, r0
    // str r2, [r1, r0]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r1, r5, r0
    // str r4, [r1, r0]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r1, r5, r0
    // strh r7, [r1, r0]
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r5, #0x9b
    // strb r0, [r5]
}



void ov01_021EE2E4(void) {
    // add r0, #0x9b
    // ldrb r0, [r0]
    // ldr r1, [r5, r0]
    FontID_String_GetWidth(0, 0);
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r5, #8
    // add r6, #0xc
}



void ov01_021EE324(void) {
    // push {r4, r5}
    // mov r3, #0x71
    // lsl r3, r3, #2
    // add r1, r3, #0
    // add r2, r0, r3
    // sub r1, #0x28
    // str r2, [r0, r1]
    // add r1, r3, #0
    // ldr r2, _021EE420 ; =ov01_021EE458
    // sub r1, #0x24
    // str r2, [r0, r1]
    // add r1, r3, #0
    // ldr r2, _021EE424 ; =ov01_021EE434
    // sub r1, #0x20
    // str r2, [r0, r1]
    // add r2, r0, #0
    // add r1, r3, #0
    // add r2, #8
    // sub r1, #0x1c
    // str r2, [r0, r1]
    // add r1, r0, #0
    // add r1, #0x9b
    // ldrb r2, [r1]
    // add r1, r3, #0
    // sub r1, #0x18
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // mov r2, #8
    // sub r1, #0x16
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // mov r2, #1
    // sub r1, #0x14
    // strb r2, [r0, r1]
    // add r1, r3, #0
    // mov r4, #0xc
    // sub r1, #0x13
    // strb r4, [r0, r1]
    // add r1, r3, #0
    // mov r4, #2
    // sub r1, #0x12
    // strb r4, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0x11
    // ldrb r4, [r0, r1]
    // mov r1, #0xf
    // bic r4, r1
    // orr r4, r2
    // add r2, r3, #0
    // sub r2, #0x11
    // strb r4, [r0, r2]
    // add r2, r3, #0
    // sub r2, #0x11
    // ldrb r5, [r0, r2]
    // mov r2, #0xf0
    // mov r4, #0x10
    // bic r5, r2
    // orr r5, r4
    // add r4, r3, #0
    // sub r4, #0x11
    // strb r5, [r0, r4]
    // add r4, r3, #0
    // sub r4, #0x10
    // ldrb r4, [r0, r4]
    // bic r4, r1
    // mov r1, #0xf
    // orr r4, r1
    // add r1, r3, #0
    // sub r1, #0x10
    // strb r4, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0x10
    // ldrb r4, [r0, r1]
    // mov r1, #0x20
    // bic r4, r2
    // add r2, r4, #0
    // orr r2, r1
    // add r1, r3, #0
    // sub r1, #0x10
    // strb r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // mov r1, #7
    // bic r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // mov r1, #0x78
    // bic r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // ldr r1, _021EE428 ; =0xFFFFFE7F
    // and r2, r1
    // mov r1, #0x80
    // orr r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // ldr r1, _021EE42C ; =0xFFFF81FF
    // and r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // add r1, r3, #0
    // sub r1, #0xe
    // ldrh r2, [r0, r1]
    // ldr r1, _021EE430 ; =0xFFFF7FFF
    // and r2, r1
    // add r1, r3, #0
    // sub r1, #0xe
    // strh r2, [r0, r1]
    // sub r3, #0xc
    // str r0, [r0, r3]
    // pop {r4, r5}
    // bx lr
    // _021EE420: .word ov01_021EE458
    // _021EE424: .word ov01_021EE434
    // _021EE428: .word 0xFFFFFE7F
    // _021EE42C: .word 0xFFFF81FF
    // _021EE430: .word 0xFFFF7FFF
    // TODO: decompile
}



void ov01_021EE434(void) {
    // mvn r2, r2
    ListMenuOverrideSetColors(3, 0xf, 4);
    ListMenuOverrideSetColors(1, 0xf, 2);
}



void ov01_021EE458(void) {
    // add r1, sp, #0
    *((u16*)(r1 + 2)) = 0;
    // strh r2, [r1]
    ListMenuGetTemplateField(0x13, 0);
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    ListMenuGetScrollAndRow(r5);
    // add r0, #0xa4
    // add r0, #0xa8
    // add r0, sp, #0
    // add r4, #0xa8
    // strh r1, [r2]
    // ldrh r1, [r0]
    // strh r1, [r0]
}



void ov01_021EE49C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r0, r5, #0
    // add r0, #0x94
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _021EE4B8
    // add r0, r5, #0
    // add r0, #0x94
    // ldrb r0, [r0]
    // add r5, #0x94
    // sub r0, r0, #1
    // strb r0, [r5]
    // pop {r4, r5, r6, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _021EE55A
    // mov r0, #0x6f
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ListMenu_ProcessInput
    // add r4, r0, #0
    // mov r0, #0x6f
    // mov r1, #0xb7
    // lsl r0, r0, #2
    // lsl r1, r1, #2
    // ldrh r6, [r5, r1]
    // ldr r0, [r5, r0]
    // add r1, r5, r1
    // bl ListMenuGetCurrentItemArrayId
    // mov r0, #0xb7
    // lsl r0, r0, #2
    // ldrh r0, [r5, r0]
    // cmp r6, r0
    // beq _021EE4EE
    // ldr r0, _021EE55C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // ldr r0, _021EE560 ; =gSystem
    // mov r1, #0x40
    // ldr r0, [r0, #0x4c]
    // tst r1, r0
    // bne _021EE50A
    // mov r1, #0x80
    // tst r1, r0
    // bne _021EE50A
    // mov r1, #0x20
    // tst r1, r0
    // bne _021EE50A
    // mov r1, #0x10
    // tst r0, r1
    // beq _021EE510
    // add r0, r5, #0
    // bl ov01_021EE634
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _021EE520
    // add r0, r0, #1
    // cmp r4, r0
    // beq _021EE55A
    // b _021EE546
    // add r0, r5, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021EE55A
    // ldr r0, _021EE55C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r1, _021EE564 ; =0x0000FFFE
    // ldr r0, [r0]
    // strh r1, [r0]
    // add r0, r5, #0
    // bl ov01_021EE568
    // pop {r4, r5, r6, pc}
    // ldr r0, _021EE55C ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // strh r4, [r0]
    // add r0, r5, #0
    // bl ov01_021EE568
    // pop {r4, r5, r6, pc}
    // _021EE55C: .word SEQ_SE_DP_SELECT
    // _021EE560: .word gSystem
    // _021EE564: .word 0x0000FFFE
    // TODO: decompile
}



void ov01_021EE568(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _021EE5CC ; =SEQ_SE_DP_SELECT
    // bl PlaySE
    // mov r0, #0x6f
    // lsl r0, r0, #2
    // mov r1, #0
    // ldr r0, [r6, r0]
    // add r2, r1, #0
    // bl DestroyListMenu
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl sub_0200E5D4
    // add r0, r6, #0
    // add r0, #8
    // bl RemoveWindow
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #0x1c]
    // bl String_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x1c
    // blt _021EE598
    // add r0, r6, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021EE5BE
    // add r0, r6, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl DestroyMsgData
    // ldr r0, [r6, #4]
    // bl SysTask_Destroy
    // add r0, r6, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // _021EE5CC: .word SEQ_SE_DP_SELECT
    // TODO: decompile
}



void ov01_021EE5D0(void) {
    // str r1, [sp, #0xc]
    String_New(0x5a, 4);
    String_New(0x5a, 4);
    FillWindowPixelBuffer(*((u32*)(r5 + 0x18)), 0xf);
    // add r0, #0x8c
    // ldr r1, [sp, #0xc]
    ReadMsgDataIntoString(*((u32*)r5), r4);
    // add r0, #0x90
    StringExpandPlaceholders(*((u32*)r5), r6, r4);
    // str r3, [sp]
    // str r7, [sp, #4]
    // str r3, [sp, #8]
    AddTextPrinterParameterized(*((u32*)(r5 + 0x18)), 1, r6, 0);
    String_Delete(r4);
    String_Delete(r6);
}



void ov01_021EE634(void) {
    // push {r4, lr}
    // mov r1, #0x6f
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r4, r1]
    // add r1, r1, #6
    // add r1, r4, r1
    // bl ListMenuGetCurrentItemArrayId
    // ldr r0, _021EE660 ; =0x000001C2
    // ldrh r1, [r4, r0]
    // add r0, #0xe2
    // lsl r1, r1, #1
    // add r1, r4, r1
    // ldrh r1, [r1, r0]
    // cmp r1, #0xff
    // beq _021EE65E
    // add r0, r4, #0
    // mov r2, #0
    // bl ov01_021EE5D0
    // pop {r4, pc}
    // _021EE660: .word 0x000001C2
    // TODO: decompile
}



void PrintCurFloorInNewWindow(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x18
    // mov r4, #0
    // str r4, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x28]
    // add r6, r0, #0
    // str r3, [sp, #8]
    // str r4, [sp, #0xc]
    // add r3, r4, #0
    // str r4, [sp, #0x10]
    // bl ov01_021EDC28
    // add r5, r0, #0
    // add r0, r4, #0
    // add r1, r0, #0
    // bl GetFontAttribute
    // lsl r1, r0, #3
    // mov r0, #7
    // tst r0, r1
    // bne _021EE694
    // lsr r4, r1, #3
    // b _021EE698
    // lsr r0, r1, #3
    // add r4, r0, #1
    // add r0, r5, #0
    // add r0, #0x99
    // ldrb r0, [r0]
    // add r3, r5, #0
    // add r1, r5, #0
    // str r0, [sp]
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0xdd
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r3, #0x98
    // ldrb r3, [r3]
    // ldr r0, [r0, #8]
    // add r1, #8
    // mov r2, #3
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // ldr r2, _021EE74C ; =0x000003D9
    // ldr r0, [r0, #8]
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // add r0, r5, #0
    // ldr r2, _021EE74C ; =0x000003D9
    // add r0, #8
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // lsl r0, r4, #0x13
    // lsr r0, r0, #0x10
    // str r0, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // add r0, r5, #0
    // mov r2, #0
    // add r0, #8
    // mov r1, #0xf
    // add r3, r2, #0
    // bl FillWindowPixelRect
    // mov r2, #0
    // add r0, r5, #0
    // mov r1, #0x10
    // add r3, r2, #0
    // bl ov01_021EE754
    // ldr r0, [r6, #0x20]
    // add r1, sp, #0x18
    // ldrh r1, [r1, #0x14]
    // ldr r0, [r0]
    // add r2, sp, #0x14
    // bl ov01_021EE934
    // add r1, r0, #0
    // add r2, sp, #0x14
    // lsl r1, r1, #0x10
    // ldrb r2, [r2]
    // add r0, r5, #0
    // lsr r1, r1, #0x10
    // mov r3, #0x10
    // bl ov01_021EE754
    // add r0, r5, #0
    // add r1, r5, #0
    // add r0, #8
    // add r1, #0xb0
    // str r0, [r1]
    // bl CopyWindowToVram
    // ldr r0, _021EE750 ; =ov01_021EE7B8
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #4]
    // add sp, #0x18
    // pop {r4, r5, r6, pc}
    // _021EE74C: .word 0x000003D9
    // _021EE750: .word ov01_021EE7B8
    // TODO: decompile
}



void ov01_021EE754(void) {
    // str r1, [sp, #0xc]
    // str r2, [sp, #0x10]
    String_New(0x5a, 4);
    String_New(0x5a, 4);
    // add r0, #0x8c
    // ldr r1, [sp, #0xc]
    ReadMsgDataIntoString(*((u32*)r5), r4);
    // add r0, #0x90
    StringExpandPlaceholders(*((u32*)r5), r6, r4);
    // str r7, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r5, #8
    // ldr r3, [sp, #0x10]
    AddTextPrinterParameterized(r5, 0, r6);
    String_Delete(r4);
    String_Delete(r6);
}



void ov01_021EE7B8(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r0, r6, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // ldrh r1, [r0]
    // ldr r0, _021EE818 ; =0x0000FFFF
    // cmp r1, r0
    // bne _021EE816
    // add r0, r6, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // mov r1, #0
    // bl sub_0200E5D4
    // add r0, r6, #0
    // add r0, #0xb0
    // ldr r0, [r0]
    // bl RemoveWindow
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #0x1c]
    // bl String_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0x1c
    // blt _021EE7E4
    // add r0, r6, #0
    // add r0, #0x97
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _021EE80A
    // add r0, r6, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl DestroyMsgData
    // ldr r0, [r6, #4]
    // bl SysTask_Destroy
    // add r0, r6, #0
    // bl Heap_Free
    // pop {r4, r5, r6, pc}
    // _021EE818: .word 0x0000FFFF
    // TODO: decompile
}



void MapNumToFloorNo(void) {
    // push {r3, lr}
    // ldr r1, _021EE92C ; =MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r1
    // bgt _021EE878
    // bge _021EE906
    // cmp r0, #MAP_OLIVINE_LIGHTHOUSE_LIGHT_ROOM
    // bgt _021EE860
    // bge _021EE8D2
    // cmp r0, #MAP_OLIVINE_LIGHTHOUSE_1F
    // bgt _021EE834
    // beq _021EE8CE
    // b _021EE922
    // add r1, r0, #0
    // sub r1, #MAP_GOLDENROD_RADIO_TOWER_5F
    // cmp r1, #0xb
    // bhi _021EE922
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EE848: ; jump table
    // ldr r1, _021EE930 ; =MAP_CELADON_DEPARTMENT_STORE_2F
    // cmp r0, r1
    // bgt _021EE870
    // bge _021EE8FE
    // sub r1, r1, #MAP_CELADON_DEPARTMENT_STORE_2F-MAP_CELADON_DEPARTMENT_STORE_1F
    // cmp r0, r1
    // beq _021EE8FA
    // b _021EE922
    // add r1, r1, #MAP_CELADON_DEPARTMENT_STORE_3F-MAP_CELADON_DEPARTMENT_STORE_2F
    // cmp r0, r1
    // beq _021EE902
    // b _021EE922
    // add r2, r1, #MAP_CELADON_CONDOMINIUMS_2F-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r2
    // bgt _021EE898
    // bge _021EE916
    // add r2, r1, #MAP_CELADON_DEPARTMENT_STORE_ROOF-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r2
    // bgt _021EE890
    // bge _021EE90E
    // add r1, r1, #MAP_CELADON_DEPARTMENT_STORE_5F-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r1
    // beq _021EE90A
    // b _021EE922
    // add r1, r1, #MAP_CELADON_CONDOMINIUMS_1F-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r1
    // beq _021EE912
    // b _021EE922
    // add r2, r1, #0
    // add r2, #MAP_SAFFRON_SILPH_CO_HQ-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r2
    // bgt _021EE8BE
    // add r2, r1, #0
    // add r2, #MAP_SAFFRON_SILPH_CO_HQ-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r2
    // bge _021EE8D6
    // add r2, r1, #MAP_CELADON_CONDOMINIUMS_ROOF-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r2
    // bgt _021EE922
    // add r2, r1, #MAP_CELADON_CONDOMINIUMS_3F-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r2
    // blt _021EE922
    // beq _021EE91A
    // add r1, r1, #MAP_CELADON_CONDOMINIUMS_ROOF-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r1
    // beq _021EE91E
    // b _021EE922
    // add r1, #MAP_SAFFRON_SILPH_CO_ROTOM_ROOM-MAP_CELADON_DEPARTMENT_STORE_4F
    // cmp r0, r1
    // beq _021EE8DA
    // b _021EE922
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #3
    // pop {r3, pc}
    // mov r0, #4
    // pop {r3, pc}
    // mov r0, #5
    // pop {r3, pc}
    // mov r0, #6
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #3
    // pop {r3, pc}
    // mov r0, #4
    // pop {r3, pc}
    // mov r0, #5
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #2
    // pop {r3, pc}
    // mov r0, #3
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _021EE92C: .word MAP_CELADON_DEPARTMENT_STORE_4F
    // _021EE930: .word MAP_CELADON_DEPARTMENT_STORE_2F
    // TODO: decompile
}



void ov01_021EE934(void) {
    // push {r3, r4}
    // ldr r4, _021EE970 ; =0x000001B9
    // cmp r0, r4
    // beq _021EE94A
    // add r3, r4, #2
    // cmp r0, r3
    // beq _021EE958
    // add r3, r4, #3
    // cmp r0, r3
    // beq _021EE958
    // b _021EE966
    // cmp r1, #0
    // bne _021EE966
    // mov r0, #0x20
    // strb r0, [r2]
    // mov r0, #0x7a
    // pop {r3, r4}
    // bx lr
    // cmp r1, #3
    // bne _021EE966
    // mov r0, #0x10
    // strb r0, [r2]
    // mov r0, #0x7d
    // pop {r3, r4}
    // bx lr
    // mov r0, #0x20
    // strb r0, [r2]
    // mov r0, #0x11
    // pop {r3, r4}
    // bx lr
    // _021EE970: .word 0x000001B9
    // TODO: decompile
}



void ov01_021EE974(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r6, r1, #0
    // bl ov01_021EDDD8
    // mov r1, #7
    // tst r1, r0
    // bne _021EE98A
    // lsr r7, r0, #3
    // b _021EE98E
    // lsr r0, r0, #3
    // add r7, r0, #1
    // add r0, r5, #0
    // add r0, #0x9b
    // ldrb r0, [r0]
    // add r1, r6, #0
    // str r0, [sp, #0x14]
    // bl _s32_div_f
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // ldr r0, [sp, #0x14]
    // add r1, r6, #0
    // bl _s32_div_f
    // cmp r1, #0
    // beq _021EE9B2
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // add r0, #0x99
    // ldrb r0, [r0]
    // add r3, r5, #0
    // add r1, r5, #0
    // str r0, [sp]
    // add r0, r7, #0
    // mul r0, r6
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // lsl r0, r4, #0x19
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x3d
    // str r0, [sp, #0x10]
    // ldr r0, [r5]
    // add r3, #0x98
    // ldrb r3, [r3]
    // ldr r0, [r0, #8]
    // add r1, #8
    // mov r2, #3
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // ldr r2, _021EEA3C ; =0x000003D9
    // ldr r0, [r0, #8]
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // add r0, r5, #0
    // ldr r2, _021EEA3C ; =0x000003D9
    // add r0, #8
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov01_021EEA44
    // add r1, r5, #0
    // add r1, #0x96
    // add r0, r5, #0
    // ldrb r1, [r1]
    // add r0, #0xac
    // mov r2, #4
    // bl Create2dMenu
    // add r1, r5, #0
    // add r1, #0xb8
    // str r0, [r1]
    // ldr r0, _021EEA40 ; =ov01_021EDE8C
    // add r1, r5, #0
    // mov r2, #0
    // bl SysTask_CreateOnMainQueue
    // str r0, [r5, #4]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021EEA3C: .word 0x000003D9
    // _021EEA40: .word ov01_021EDE8C
    // TODO: decompile
}



void ov01_021EEA44(void) {
    // add r4, #0xbc
    // add r3, #0xac
    // str r4, [r3]
    // add r4, #8
    // add r3, #0xb0
    // str r4, [r3]
    // add r3, #0xb4
    // strb r4, [r3]
    // add r3, #0xb5
    // strb r1, [r3]
    // add r1, #0xb6
    // strb r2, [r1]
    // add r1, #0xb7
    // ldrb r2, [r1]
    // bic r2, r1
    // add r1, #0xb7
    // strb r2, [r1]
    // add r1, #0xb7
    // ldrb r2, [r1]
    // add r0, #0xb7
    // bic r2, r1
    // strb r2, [r0]
}



void FieldSystem_ShowMoneyBox(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r2, #0
    // mov r0, #4
    // mov r1, #1
    // bl AllocWindows
    // add r4, r0, #0
    // str r6, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #8]
    // add r1, r4, #0
    // mov r2, #3
    // add r3, r7, #0
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, #8]
    // ldr r2, _021EEB30 ; =0x000003D9
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // ldr r2, _021EEB30 ; =0x000003D9
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r2, _021EEB34 ; =0x000001B3
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // mov r1, #0x1e
    // add r7, r0, #0
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // add r3, r1, #0
    // str r1, [sp, #8]
    // bl AddTextPrinterParameterized
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, #0
    // add r1, r4, #0
    // bl MoneyBoxSys_Update
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021EEB30: .word 0x000003D9
    // _021EEB34: .word 0x000001B3
    // TODO: decompile
}



void MoneyBoxSys_Delete(void) {
}



void MoneyBoxSys_Update(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // add r5, r1, #0
    // mov r0, #0x50
    // str r0, [sp]
    // mov r3, #0x10
    // add r0, r5, #0
    // mov r1, #0xf
    // mov r2, #0
    // str r3, [sp, #4]
    // bl FillWindowPixelRect
    // ldr r2, _021EEBFC ; =0x000001B3
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0xc]
    // mov r0, #4
    // bl MessageFormat_New
    // add r6, r0, #0
    // mov r0, #0x10
    // mov r1, #4
    // bl String_New
    // add r4, r0, #0
    // ldr r0, [sp, #0xc]
    // mov r1, #0x1f
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x10]
    // ldr r0, [r7, #0xc]
    // bl Save_PlayerData_GetProfile
    // bl PlayerProfile_GetMoney
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r1, #0
    // mov r3, #6
    // bl BufferIntegerAsString
    // ldr r2, [sp, #0x10]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl StringExpandPlaceholders
    // mov r0, #0
    // add r1, r4, #0
    // add r2, r0, #0
    // bl FontID_String_GetWidth
    // mov r1, #0x50
    // sub r3, r1, r0
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r1, #0
    // add r0, r5, #0
    // add r2, r4, #0
    // str r1, [sp, #8]
    // bl AddTextPrinterParameterized
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl MessageFormat_Delete
    // ldr r0, [sp, #0xc]
    // bl DestroyMsgData
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021EEBFC: .word 0x000001B3
    // TODO: decompile
}



void ov01_021EEC00(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r7, r1, #0
    // str r2, [sp, #0x14]
    // add r6, r3, #0
    // mov r0, #4
    // mov r1, #1
    // bl AllocWindows
    // add r4, r0, #0
    // str r6, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x29
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #8]
    // ldr r3, [sp, #0x14]
    // add r1, r4, #0
    // mov r2, #3
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, #8]
    // ldr r2, _021EEC64 ; =0x000003D9
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // ldr r2, _021EEC64 ; =0x000003D9
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // bl ov01_021EEC7C
    // add r0, r4, #0
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _021EEC64: .word 0x000003D9
    // TODO: decompile
}



void ov01_021EEC68(void) {
}



void ov01_021EEC7C(void) {
    // str r1, [sp, #0xc]
    FillWindowPixelBuffer(r1, 0xf);
    NewMsgDataFromNarc(0, 0x1b, 0xbf, 4);
    MessageFormat_New(4);
    // str r0, [sp, #0x10]
    String_New(0x10, 4);
    NewString_ReadMsgData(r7, 0xc1);
    Save_PlayerData_GetCoinsAddr(*((u32*)(r5 + 0xc)));
    Coins_GetValue();
    NewString_ReadMsgData(r7, 0xdc, r0);
    Save_FrontierData_Get(*((u32*)(r5 + 0xc)));
    FrontierData_BattlePointAction(0, 0);
    NewString_ReadMsgData(r7, 0xdf, r0);
    Save_Pokeathlon_Get(*((u32*)(r5 + 0xc)));
    PokeathlonSave_GetAthletePoints();
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    BufferIntegerAsString(1, 0, r0, 5);
    // ldr r0, [sp, #0x10]
    StringExpandPlaceholders(r6, r4);
    FontID_String_GetWidth(0, r6, 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(0xff, 0, r6);
    String_Delete(r4);
    String_Delete(r6);
    // ldr r0, [sp, #0x10]
    MessageFormat_Delete();
    DestroyMsgData(r7);
    // ldr r0, [sp, #0xc]
    ScheduleWindowCopyToVram();
}



void ov01_021EED60(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r2, #0
    // mov r0, #4
    // mov r1, #1
    // bl AllocWindows
    // add r4, r0, #0
    // str r6, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #8]
    // add r1, r4, #0
    // mov r2, #3
    // add r3, r7, #0
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, [r5, #8]
    // ldr r2, _021EEE24 ; =0x000003D9
    // mov r1, #3
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // ldr r2, _021EEE24 ; =0x000003D9
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // mov r1, #0x1b
    // mov r2, #0xbf
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // ldr r1, _021EEE28 ; =0x0000014A
    // add r7, r0, #0
    // bl NewString_ReadMsgData
    // mov r1, #0
    // add r6, r0, #0
    // str r1, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // add r3, r1, #0
    // str r1, [sp, #8]
    // bl AddTextPrinterParameterized
    // add r0, r6, #0
    // bl String_Delete
    // ldr r1, _021EEE2C ; =0x0000014B
    // add r0, r7, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0xff
    // mov r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // add r2, r6, #0
    // add r3, r1, #0
    // str r1, [sp, #8]
    // bl AddTextPrinterParameterized
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021EEE44
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _021EEE24: .word 0x000003D9
    // _021EEE28: .word 0x0000014A
    // _021EEE2C: .word 0x0000014B
    // TODO: decompile
}



void ov01_021EEE30(void) {
}



void ov01_021EEE44(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r1, 0xf, 0, 0x80);
    // str r0, [sp]
    // str r0, [sp, #4]
    FillWindowPixelRect(r5, 0xf, 0, (6 << 6));
    NewMsgDataFromNarc(0, 0x1b, 0xbf, 4);
    // str r0, [sp, #0xc]
    MessageFormat_New(4);
    String_New(0x10, 4);
    // ldr r0, [sp, #0xc]
    NewString_ReadMsgData((0x53 << 2));
    // str r0, [sp, #0x10]
    SaveData_GetPhoneCallPersistentState(*((u32*)(r7 + 0xc)));
    PhoneCallPersistentState_MomSavings_BalanceAction(0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 6);
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(r6, r4);
    FontID_String_GetWidth(0, r4, 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(r5, 0, r4);
    Save_PlayerData_GetProfile(*((u32*)(r7 + 0xc)));
    PlayerProfile_GetMoney();
    // str r1, [sp]
    // str r0, [sp, #4]
    BufferIntegerAsString(r6, 0, r0, 6);
    // ldr r2, [sp, #0x10]
    StringExpandPlaceholders(r6, r4);
    FontID_String_GetWidth(0, r4, 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    AddTextPrinterParameterized(r5, 0, r4);
    // ldr r0, [sp, #0x10]
    String_Delete();
    String_Delete(r4);
    MessageFormat_Delete(r6);
    // ldr r0, [sp, #0xc]
    DestroyMsgData();
    ScheduleWindowCopyToVram(r5);
}



void ov01_021EEF58(void) {
    // add r0, r0, r1
}



void ov01_021EEF60(void) {
    // add r0, #0x9b
    // ldrb r0, [r0]
}



void ov01_021EEF68(void) {
}



void ov01_021EEF88(void) {
}



void ov01_021EEF9C(void) {
    // add r4, r5, r0
    // ldrh r0, [r4, r6]
    String_New(0x5a, 4);
    String_New(0x5a, 4);
    // str r0, [sp, #0xc]
    FillWindowPixelBuffer(*((u32*)(r5 + 0x18)), 0xf);
    // add r0, #0x8c
    // ldrh r1, [r4, r6]
    ReadMsgDataIntoString(*((u32*)r5), r7);
    // add r0, #0x90
    // ldr r1, [sp, #0xc]
    StringExpandPlaceholders(*((u32*)r5), r7);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // ldr r2, [sp, #0xc]
    AddTextPrinterParameterized(*((u32*)(r5 + 0x18)), 1, 0);
    String_Delete(r7);
    // ldr r0, [sp, #0xc]
    String_Delete();
}



void ov01_021EF00C(void) {
    // add r0, #0x97
    // ldrb r0, [r0]
}



void ov01_021EF018(void) {
    // add r2, #0x97
    // ldrb r3, [r2]
    // bic r3, r2
    // orr r1, r3
    // add r0, #0x97
    // strb r1, [r0]
}



void ov01_021EF034(void) {
    // add r2, #0x97
    // ldrb r3, [r2]
    // bic r3, r2
    // orr r1, r3
    // add r0, #0x97
    // strb r1, [r0]
}


