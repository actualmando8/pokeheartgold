/* Decompiled from asm/unk_020915B0.s */
#include "global.h"

void LoadDwcOverlay(void) {
    // ldr r3, _020915B8 ; =HandleLoadOverlay
    // ldr r0, _020915BC ; =FS_OVERLAY_ID(OVY_0)
    // mov r1, #2
    // bx r3
    // _020915B8: .word HandleLoadOverlay
    // _020915BC: .word FS_OVERLAY_ID(OVY_0)
    // TODO: decompile
}



void UnloadDwcOverlay(void) {
    // ldr r3, _020915C8 ; =UnloadOverlayByID
    // ldr r0, _020915CC ; =FS_OVERLAY_ID(OVY_0)
    // bx r3
    // nop
    // _020915C8: .word UnloadOverlayByID
    // _020915CC: .word FS_OVERLAY_ID(OVY_0)
    // TODO: decompile
}



void LoadOVY13(void) {
    // ldr r3, _020915D8 ; =HandleLoadOverlay
    // ldr r0, _020915DC ; =FS_OVERLAY_ID(OVY_13)
    // mov r1, #2
    // bx r3
    // _020915D8: .word HandleLoadOverlay
    // _020915DC: .word FS_OVERLAY_ID(OVY_13)
    // TODO: decompile
}



void UnloadOVY13(void) {
    // ldr r3, _020915E8 ; =UnloadOverlayByID
    // ldr r0, _020915EC ; =FS_OVERLAY_ID(OVY_13)
    // bx r3
    // nop
    // _020915E8: .word UnloadOverlayByID
    // _020915EC: .word FS_OVERLAY_ID(OVY_13)
    // TODO: decompile
}



void sub_020915F0(void) {
}



void LoadOVY38(void) {
    // ldr r3, _0209161C ; =HandleLoadOverlay
    // ldr r0, _02091620 ; =FS_OVERLAY_ID(OVY_38)
    // mov r1, #2
    // bx r3
    // _0209161C: .word HandleLoadOverlay
    // _02091620: .word FS_OVERLAY_ID(OVY_38)
    // TODO: decompile
}



void UnloadOVY38(void) {
    // ldr r3, _0209162C ; =UnloadOverlayByID
    // ldr r0, _02091630 ; =FS_OVERLAY_ID(OVY_38)
    // bx r3
    // nop
    // _0209162C: .word UnloadOverlayByID
    // _02091630: .word FS_OVERLAY_ID(OVY_38)
    // TODO: decompile
}



void * sub_02091634(void) {
    Heap_Create(3, 0x30, (0x41 << 0xc));
    OverlayManager_GetArgs(r4);
    sub_020915F0(*((u32*)(r0 + 8)), 0x30);
    Heap_Destroy(0x30);
    OS_ResetSystem(0);
}


