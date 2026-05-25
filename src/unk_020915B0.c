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
    LoadDwcOverlay();
    LoadOVY13();
    ov13_0221BA00(r4);
    UnloadOVY13();
    UnloadDwcOverlay();
    OS_ResetSystem(0);
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


void sub_02091634(void) {
    // push {r4, lr}
    // mov r2, #0x41
    // add r4, r0, #0
    // mov r0, #3
    // mov r1, #0x30
    // lsl r2, r2, #0xc
    // bl Heap_Create
    // add r0, r4, #0
    // bl OverlayManager_GetArgs
    // ldr r0, [r0, #8]
    // mov r1, #0x30
    // bl sub_020915F0
    // mov r0, #0x30
    // bl Heap_Destroy
    // mov r0, #0
    // bl OS_ResetSystem
    // mov r0, #1
    // pop {r4, pc}
    // TODO: decompile
}

