/* Decompiled from asm/unk_02087E70.s */
#include "global.h"

void sub_02087E70(void) {
    sub_0200616C(0);
    Heap_Create(3, 0x6d, (0x55 << 0xc));
    sub_02087A78(r4);
    ov40_0222C480();
    GF_SndHandleSetPlayerVolume(1, 0x2a);
    GF_SndHandleSetPlayerVolume(7, 0x2a);
    sub_02055198(0, 0x00000482);
    Save_Misc_Get(*((u32*)(r4 + (0x83 << 4))));
    // add r1, #0x5c
    sub_0202AC0C(r4);
    // add r0, #0x5c
    // add r0, #0x5c
    // strb r1, [r0]
    ov40_0222DAC0(r4, 0);
    *((u32*)(r4 + 0x58)) = r0;
    *((u32*)(r4 + 0x58)) = 0x00007FDD;
    ov40_0222B6E0(r4);
}




void sub_02087EF8(void) {
}




void sub_02087F04(void) {
}




void sub_02087F10(void) {
}




void sub_02087F2C(void) {
    sub_02087A78();
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02087F48: ; jump table
    ov40_0222CABC((*((u16*)(*((u32*)r4) + 6)) << 0x10));
    // str r0, [r4]
    ov40_0222CA8C((*((u32*)r4) + 1));
    ov40_0222CF94(r5);
    ov40_0222D55C(r5);
    // str r0, [r4]
    sub_02087988(*((u32*)(r5 + (0x6f << 4))));
    // str r0, [r4]
    sub_02087988(*((u32*)(r5 + 0x000006F4)));
    // str r0, [r4]
    ov40_0222B934(r5);
    Heap_Destroy(0x6d);
    UnloadOverlayByID(FS_OVERLAY_ID);
    *((u8*)(gSystem + 9)) = 0;
    GfGfx_SwapDisplay(gSystem, 0);
    sub_0203E354();
}



