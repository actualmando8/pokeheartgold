/* Decompiled from asm/overlay_80_02235FC8.s */
#include "global.h"

void ov80_02235FC8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb
    // mov r1, #0xb4
    // bl Heap_Alloc
    // ldr r1, _02235FE8 ; =ov80_0223DD50
    // mov r2, #0xb4
    // str r0, [r1]
    // mov r1, #0
    // bl MI_CpuFill8
    // ldr r0, _02235FE8 ; =ov80_0223DD50
    // ldr r0, [r0]
    // str r4, [r0]
    // pop {r4, pc}
    // _02235FE8: .word ov80_0223DD50
    // TODO: decompile
}



void ov80_02235FEC(void) {
}



void ov80_02235FF8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223600A: ; jump table
    sub_02096A34((*((u16*)(r1 + 6)) << 0x10));
    sub_02096AAC(r2);
    sub_02096AF4(r2, r3);
    sub_02096BF8(r2);
    sub_02096C40(r2);
}



void ov80_02236040(void) {
    // add r3, #0x98
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02236058: ; jump table
    ov80_0223608C(*((u32*)r1), 0xb);
    ov80_022362B8(r3, 0xb);
    ov80_02236330(r3, 0xb);
    ov80_0223641C(r3, 0xb);
}



void ov80_0223608C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r6, r0, #0
    // add r5, r1, #0
    // mov r0, #0xb
    // mov r1, #0x44
    // add r4, r2, #0
    // bl Heap_Alloc
    // add r1, r5, #0
    // add r1, #0xa8
    // str r0, [r1]
    // add r1, r5, #0
    // add r1, #0xa8
    // ldr r1, [r1]
    // mov r0, #0
    // mov r2, #0x44
    // bl MIi_CpuClearFast
    // ldr r0, [r5]
    // bl SaveArray_Party_Get
    // add r1, r5, #0
    // add r1, #0xa8
    // ldr r1, [r1]
    // str r0, [r1]
    // ldr r0, [r5]
    // bl Save_Bag_Get
    // add r1, r5, #0
    // add r1, #0xa8
    // ldr r1, [r1]
    // str r0, [r1, #4]
    // ldr r0, [r5]
    // bl Save_Mailbox_Get
    // add r1, r5, #0
    // add r1, #0xa8
    // ldr r1, [r1]
    // str r0, [r1, #8]
    // ldr r0, [r5]
    // bl Save_PlayerData_GetOptionsAddr
    // add r1, r5, #0
    // add r1, #0xa8
    // ldr r1, [r1]
    // str r0, [r1, #0xc]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _0223610E
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0x11
    // add r0, #0x24
    // strb r1, [r0]
    // b _02236148
    // cmp r0, #5
    // bne _02236120
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0x16
    // add r0, #0x24
    // strb r1, [r0]
    // b _02236148
    // cmp r0, #4
    // bne _02236132
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0x17
    // add r0, #0x24
    // strb r1, [r0]
    // b _02236148
    // cmp r0, #6
    // bne _02236144
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0x17
    // add r0, #0x24
    // strb r1, [r0]
    // b _02236148
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // str r4, [r0, #0x1c]
    // add r0, r5, #0
    // add r0, #0x9f
    // ldrb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r0, #0x26
    // strb r1, [r0]
    // mov r1, #0
    // add r2, r5, #0
    // add r0, r5, r1
    // add r2, #0xa8
    // add r0, #0xa1
    // ldr r2, [r2]
    // ldrb r0, [r0]
    // add r2, r2, r1
    // add r2, #0x30
    // strb r0, [r2]
    // add r0, r1, #1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // cmp r1, #2
    // blo _02236162
    // add r0, r5, #0
    // add r0, #0xa0
    // ldrb r0, [r0]
    // cmp r0, #1
    // bne _022361C6
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r1, r0, #0
    // add r1, #0x36
    // ldrb r2, [r1]
    // mov r1, #0xf
    // add r0, #0x36
    // bic r2, r1
    // mov r1, #2
    // orr r1, r2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r1, r0, #0
    // add r1, #0x36
    // ldrb r2, [r1]
    // mov r1, #0xf0
    // add r0, #0x36
    // bic r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0x64
    // add r0, #0x37
    // strb r1, [r0]
    // b _02236290
    // cmp r0, #5
    // bne _02236208
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r1, r0, #0
    // add r1, #0x36
    // ldrb r2, [r1]
    // mov r1, #0xf
    // add r0, #0x36
    // bic r2, r1
    // mov r1, #1
    // orr r1, r2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r1, r0, #0
    // add r1, #0x36
    // ldrb r2, [r1]
    // mov r1, #0xf0
    // add r0, #0x36
    // bic r2, r1
    // mov r1, #0x10
    // orr r1, r2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0x1e
    // add r0, #0x37
    // strb r1, [r0]
    // b _02236290
    // cmp r0, #4
    // bne _0223624A
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r1, r0, #0
    // add r1, #0x36
    // ldrb r2, [r1]
    // mov r1, #0xf
    // add r0, #0x36
    // bic r2, r1
    // mov r1, #2
    // orr r1, r2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r1, r0, #0
    // add r1, #0x36
    // ldrb r2, [r1]
    // mov r1, #0xf0
    // add r0, #0x36
    // bic r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0x64
    // add r0, #0x37
    // strb r1, [r0]
    // b _02236290
    // cmp r0, #6
    // bne _0223628C
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r1, r0, #0
    // add r1, #0x36
    // ldrb r2, [r1]
    // mov r1, #0xf
    // add r0, #0x36
    // bic r2, r1
    // mov r1, #2
    // orr r1, r2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // add r1, r0, #0
    // add r1, #0x36
    // ldrb r2, [r1]
    // mov r1, #0xf0
    // add r0, #0x36
    // bic r2, r1
    // mov r1, #0x20
    // orr r1, r2
    // strb r1, [r0]
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r1, #0x64
    // add r0, #0x37
    // strb r1, [r0]
    // b _02236290
    // bl GF_AssertFail
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r1, r4, r0
    // add r0, r5, #0
    // add r0, #0xa8
    // ldr r0, [r0]
    // mov r3, #0
    // str r1, [r0, #0x20]
    // str r3, [sp]
    // add r5, #0xa8
    // ldr r1, _022362B4 ; =gOverlayTemplate_PartyMenu
    // ldr r2, [r5]
    // add r0, r6, #0
    // bl Frontier_LaunchApplication
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _022362B4: .word gOverlayTemplate_PartyMenu
    // TODO: decompile
}



void ov80_022362B8(void) {
    // add r0, #0xa8
    // add r1, #0x26
    // ldrb r1, [r1]
    // add r0, #0xb0
    // strh r1, [r0]
    // add r4, #0x9d
    // strb r1, [r4]
    // add r0, #0xb0
    // strh r1, [r0]
    // add r4, #0x9d
    // strb r1, [r4]
    // add r0, #0x30
    // add r1, #0xa1
    MI_CpuCopy8(*((u32*)r1), r1, 2);
    // add r0, #0xa8
    // add r0, #0x26
    // ldrb r1, [r0]
    // add r0, #0x9f
    // strb r1, [r0]
    // add r0, #0xa8
    Heap_Free(*((u32*)r4));
    // add r0, #0xa8
    // str r1, [r0]
    // add r0, #0xb0
    // strh r1, [r0]
    // add r4, #0x9d
    // strb r1, [r4]
}



void ov80_02236330(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // add r0, r3, #0
    // mov r1, #0x3c
    // bl Heap_AllocAtEnd
    // add r1, r4, #0
    // add r1, #0xac
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // mov r1, #0
    // mov r2, #0x3c
    // bl MI_CpuFill8
    // ldr r0, [r4]
    // bl Save_PlayerData_GetOptionsAddr
    // add r1, r4, #0
    // add r1, #0xac
    // ldr r1, [r1]
    // str r0, [r1, #4]
    // ldr r0, [r4]
    // bl SaveArray_Party_Get
    // add r1, r4, #0
    // add r1, #0xac
    // ldr r1, [r1]
    // str r0, [r1]
    // ldr r0, [r4]
    // bl SaveArray_IsNatDexEnabled
    // add r1, r4, #0
    // add r1, #0xac
    // ldr r1, [r1]
    // str r0, [r1, #0x1c]
    // ldr r0, [r4]
    // bl sub_02088288
    // add r1, r4, #0
    // add r1, #0xac
    // ldr r1, [r1]
    // str r0, [r1, #0x2c]
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // mov r1, #1
    // strb r1, [r0, #0x11]
    // add r0, r4, #0
    // add r0, #0x9f
    // ldrb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // strb r1, [r0, #0x14]
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bl Party_GetCount
    // add r1, r4, #0
    // add r1, #0xac
    // ldr r1, [r1]
    // strb r0, [r1, #0x13]
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // mov r1, #0
    // strh r1, [r0, #0x18]
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // strb r1, [r0, #0x12]
    // ldr r0, [r4]
    // bl Save_SpecialRibbons_Get
    // add r1, r4, #0
    // add r1, #0xac
    // ldr r1, [r1]
    // str r0, [r1, #0x20]
    // ldr r0, [r4]
    // bl sub_0208828C
    // add r1, r4, #0
    // add r1, #0xac
    // ldr r1, [r1]
    // str r0, [r1, #0x34]
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // ldr r1, _02236414 ; =ov80_0223C040
    // bl sub_02089D40
    // ldr r0, [r4]
    // bl Save_PlayerData_GetProfile
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xac
    // ldr r0, [r0]
    // bl sub_0208AD34
    // mov r3, #0
    // str r3, [sp]
    // add r4, #0xac
    // ldr r1, _02236418 ; =gOverlayTemplate_PokemonSummary
    // ldr r2, [r4]
    // add r0, r5, #0
    // bl Frontier_LaunchApplication
    // pop {r3, r4, r5, pc}
    // _02236414: .word ov80_0223C040
    // _02236418: .word gOverlayTemplate_PokemonSummary
    // TODO: decompile
}



void ov80_0223641C(void) {
}


