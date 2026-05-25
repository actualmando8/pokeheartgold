/* Decompiled from asm/overlay_01_021EAF00.s */
#include "global.h"

void ov01_021EAF00(void) {
    /* Original at 0x021EAF00 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r4, [r0, #0x18]\n    cmp r4, #0\n    bne _021EAF0C\n    bl GF_AssertFail\n    cmp r4, #7\n    blt _021EAF14\n    bl GF_AssertFail\n    sub r0, r4, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov01_021EAF18(void) {
    ov01_021EAF00();
}

void ov01_021EAF34(void) {
    ov01_021EAF00(1);
}

void ov01_021EAF54(void) {
    ov01_021EAF00();
}

void ov01_021EAF70(void) {
    ov01_021EAF00();
}

void ov01_021EAF8C(void) {
    /* Original at 0x021EAF8C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021EAF90(void) {
    /* Original at 0x021EAF90 */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov01_021EAF94(void) {
    /* Original at 0x021EAF94 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #1\n    bx lr"
    );
    #endif
}

void ov01_021EAF98(void) {
    /* Original at 0x021EAF98 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _021EAFB0 ; =FS_OVERLAY_ID(OVY_19)\n    mov r1, #2\n    bl HandleLoadOverlay\n    add r0, r4, #0\n    bl FieldSystem_CreateViewPhotoTask\n    add r4, #0xd8\n    str r0, [r4]\n    pop {r4, pc}\n    _021EAFB0: .word FS_OVERLAY_ID(OVY_19)"
    );
    #endif
}

void ov01_021EAFB4(void) {
    /* Original at 0x021EAFB4 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl FieldSystem_DestroyViewPhotoTask\n    mov r0, #0\n    add r4, #0xd8\n    str r0, [r4]\n    ldr r0, _021EAFCC ; =FS_OVERLAY_ID(OVY_19)\n    bl UnloadOverlayByID\n    pop {r4, pc}\n    nop\n    _021EAFCC: .word FS_OVERLAY_ID(OVY_19)"
    );
    #endif
}

void ov01_021EAFD0(void) {
    /* Original at 0x021EAFD0 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #1\n    bx lr"
    );
    #endif
}
