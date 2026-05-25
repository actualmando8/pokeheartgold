/* Decompiled from asm/unk_020915B0.s */
#include "global.h"

void LoadDwcOverlay(void) {
    // bx r3
    // _020915B8: .word HandleLoadOverlay
    // _020915BC: .word FS_OVERLAY_ID(OVY_0)
}



void UnloadDwcOverlay(void) {
    // bx r3
    // nop
    // _020915C8: .word UnloadOverlayByID
    // _020915CC: .word FS_OVERLAY_ID(OVY_0)
}



void LoadOVY13(void) {
    // bx r3
    // _020915D8: .word HandleLoadOverlay
    // _020915DC: .word FS_OVERLAY_ID(OVY_13)
}



void UnloadOVY13(void) {
    // bx r3
    // nop
    // _020915E8: .word UnloadOverlayByID
    // _020915EC: .word FS_OVERLAY_ID(OVY_13)
}



void sub_020915F0(void) {
}



void LoadOVY38(void) {
    // bx r3
    // _0209161C: .word HandleLoadOverlay
    // _02091620: .word FS_OVERLAY_ID(OVY_38)
}



void UnloadOVY38(void) {
    // bx r3
    // nop
    // _0209162C: .word UnloadOverlayByID
    // _02091630: .word FS_OVERLAY_ID(OVY_38)
}



void * sub_02091634(void) {
    Heap_Create(3, 0x30, (0x41 << 0xc));
    OverlayManager_GetArgs(r4);
    sub_020915F0(*((u32*)(r0 + 8)), 0x30);
    Heap_Destroy(0x30);
    OS_ResetSystem(0);
}


