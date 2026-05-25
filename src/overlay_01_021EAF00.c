/* Decompiled from asm/overlay_01_021EAF00.s */
#include "global.h"

void ov01_021EAF00(void) {
    GF_AssertFail();
    GF_AssertFail();
}



void ov01_021EAF18(void) {
}



void ov01_021EAF34(void) {
}



void ov01_021EAF54(void) {
}



void ov01_021EAF70(void) {
}



void ov01_021EAF8C(void) {
    // bx lr
    // TODO: decompile
}



void ov01_021EAF90(void) {
    // bx lr
    // TODO: decompile
}



u8 ov01_021EAF94(void) {
}



void ov01_021EAF98(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _021EAFB0 ; =FS_OVERLAY_ID(OVY_19)
    // mov r1, #2
    // bl HandleLoadOverlay
    // add r0, r4, #0
    // bl FieldSystem_CreateViewPhotoTask
    // add r4, #0xd8
    // str r0, [r4]
    // pop {r4, pc}
    // _021EAFB0: .word FS_OVERLAY_ID(OVY_19)
    // TODO: decompile
}



void ov01_021EAFB4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl FieldSystem_DestroyViewPhotoTask
    // mov r0, #0
    // add r4, #0xd8
    // str r0, [r4]
    // ldr r0, _021EAFCC ; =FS_OVERLAY_ID(OVY_19)
    // bl UnloadOverlayByID
    // pop {r4, pc}
    // nop
    // _021EAFCC: .word FS_OVERLAY_ID(OVY_19)
    // TODO: decompile
}



u8 ov01_021EAFD0(void) {
}


