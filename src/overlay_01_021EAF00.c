/* Decompiled from asm/overlay_01_021EAF00.s */
#include "global.h"

void ov01_021EAF00(void) {
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
    HandleLoadOverlay(FS_OVERLAY_ID, 2);
    FieldSystem_CreateViewPhotoTask(r4);
    // add r4, #0xd8
    // str r0, [r4]
}




void ov01_021EAFB4(void) {
    FieldSystem_DestroyViewPhotoTask();
    // add r4, #0xd8
    // str r0, [r4]
    UnloadOverlayByID(FS_OVERLAY_ID);
}




u8 ov01_021EAFD0(void) {
}



