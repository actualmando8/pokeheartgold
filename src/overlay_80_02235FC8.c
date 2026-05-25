/* Decompiled from asm/overlay_80_02235FC8.s */
#include "global.h"

void ov80_02235FC8(void) {
    Heap_Alloc(0xb, 0xb4);
    // str r0, [r1]
    MI_CpuFill8(0, 0xb4);
    // str r4, [r0]
}




void ov80_02235FEC(void) {
}




void ov80_02235FF8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223600A: ; jump table
}




void ov80_02236040(void) {
    // add r3, #0x98
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _02236058: ; jump table
}




void ov80_0223608C(void) {
    Heap_Alloc(0xb, 0x44);
    // add r1, #0xa8
    // str r0, [r1]
    // add r1, #0xa8
    MIi_CpuClearFast(0, *((u32*)r5), 0x44);
    SaveArray_Party_Get(*((u32*)r5));
    // add r1, #0xa8
    // str r0, [r1]
    Save_Bag_Get(*((u32*)r5), *((u32*)r5));
    // add r1, #0xa8
    *((u32*)(*((u32*)r5) + 4)) = r0;
    Save_Mailbox_Get(*((u32*)r5), *((u32*)r5));
    // add r1, #0xa8
    *((u32*)(*((u32*)r5) + 8)) = r0;
    Save_PlayerData_GetOptionsAddr(*((u32*)r5), *((u32*)r5));
    // add r1, #0xa8
    *((u32*)(*((u32*)r5) + 0xc)) = r0;
    // add r0, #0xa8
    // add r0, #0x25
    // strb r1, [r0]
    // add r0, #0xa0
    // add r0, #0xa8
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, #0xa8
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, #0xa8
    // add r0, #0x24
    // strb r1, [r0]
    // add r0, #0xa8
    // add r0, #0x24
    // strb r1, [r0]
    GF_AssertFail(*((u32*)r5), 0x17);
    // add r0, #0xa8
    *((u32*)(*((u32*)r5) + 0x1c)) = r4;
    // add r0, #0x9f
    // add r0, #0xa8
    // add r0, #0x26
    // strb r1, [r0]
    // add r0, r5, r1
    // add r2, #0xa8
    // add r0, #0xa1
    // add r2, r2, r1
    // add r2, #0x30
    // strb r0, [r2]
    // add r0, #0xa0
    // add r0, #0xa8
    // add r1, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0xa8
    // add r1, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0xa8
    // add r0, #0x37
    // strb r1, [r0]
    // add r0, #0xa8
    // add r1, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0xa8
    // add r1, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0xa8
    // add r0, #0x37
    // strb r1, [r0]
    // add r0, #0xa8
    // add r1, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0xa8
    // add r1, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0xa8
    // add r0, #0x37
    // strb r1, [r0]
    // add r0, #0xa8
    // add r1, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0xa8
    // add r1, #0x36
    // add r0, #0x36
    // strb r1, [r0]
    // add r0, #0xa8
    // add r0, #0x37
    // strb r1, [r0]
    GF_AssertFail(*((u32*)r5), 0x64, (*((u8*)*((u32*)r5)) & ~(0xf0)));
    // add r1, r4, r0
    // add r0, #0xa8
    *((u32*)(*((u32*)r5) + 0x20)) = r1;
    // str r3, [sp]
    // add r5, #0xa8
    Frontier_LaunchApplication(r6, gOverlayTemplate_PartyMenu, *((u32*)r5), 0);
}




void ov80_022362B8(void) {
    // add r0, #0xa8
    // add r1, #0x26
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
    // add r0, #0xa8
    // add r0, #0x26
    // add r0, #0x9f
    // strb r1, [r0]
    // add r0, #0xa8
    // add r0, #0xa8
    // str r1, [r0]
    // add r0, #0xb0
    // strh r1, [r0]
    // add r4, #0x9d
    // strb r1, [r4]
}




void ov80_02236330(void) {
    Heap_AllocAtEnd(r3, 0x3c);
    // add r1, #0xac
    // str r0, [r1]
    // add r0, #0xac
    MI_CpuFill8(*((u32*)r4), 0, 0x3c);
    Save_PlayerData_GetOptionsAddr(*((u32*)r4));
    // add r1, #0xac
    *((u32*)(*((u32*)r4) + 4)) = r0;
    SaveArray_Party_Get(*((u32*)r4), *((u32*)r4));
    // add r1, #0xac
    // str r0, [r1]
    SaveArray_IsNatDexEnabled(*((u32*)r4), *((u32*)r4));
    // add r1, #0xac
    *((u32*)(*((u32*)r4) + 0x1c)) = r0;
    sub_02088288(*((u32*)r4), *((u32*)r4));
    // add r1, #0xac
    *((u32*)(*((u32*)r4) + 0x2c)) = r0;
    // add r0, #0xac
    *((u8*)(*((u32*)r4) + 0x11)) = 1;
    // add r0, #0x9f
    // add r0, #0xac
    *((u8*)(*((u32*)r4) + 0x14)) = *((u8*)r4);
    // add r0, #0xac
    Party_GetCount(*((u32*)*((u32*)r4)), *((u8*)r4));
    // add r1, #0xac
    *((u8*)(*((u32*)r4) + 0x13)) = r0;
    // add r0, #0xac
    *((u16*)(*((u32*)r4) + 0x18)) = 0;
    // add r0, #0xac
    *((u8*)(*((u32*)r4) + 0x12)) = 0;
    Save_SpecialRibbons_Get(*((u32*)r4), 0);
    // add r1, #0xac
    *((u32*)(*((u32*)r4) + 0x20)) = r0;
    sub_0208828C(*((u32*)r4), *((u32*)r4));
    // add r1, #0xac
    *((u32*)(*((u32*)r4) + 0x34)) = r0;
    // add r0, #0xac
    sub_02089D40(*((u32*)r4), ov80_0223C040);
    Save_PlayerData_GetProfile(*((u32*)r4));
    // add r0, #0xac
    sub_0208AD34(*((u32*)r4), r0);
    // str r3, [sp]
    // add r4, #0xac
    Frontier_LaunchApplication(r5, gOverlayTemplate_PokemonSummary, *((u32*)r4), 0);
}




void ov80_0223641C(void) {
}



