/* Decompiled from asm/unk_020915B0.s */
#include "global.h"

void LoadDwcOverlay(void) {
    /* Original at 0x020915B0 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _020915B8 ; =HandleLoadOverlay\n    ldr r0, _020915BC ; =FS_OVERLAY_ID(OVY_0)\n    mov r1, #2\n    bx r3\n    _020915B8: .word HandleLoadOverlay\n    _020915BC: .word FS_OVERLAY_ID(OVY_0)"
    );
    #endif
}

void UnloadDwcOverlay(void) {
    /* Original at 0x020915C0 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _020915C8 ; =UnloadOverlayByID\n    ldr r0, _020915CC ; =FS_OVERLAY_ID(OVY_0)\n    bx r3\n    nop\n    _020915C8: .word UnloadOverlayByID\n    _020915CC: .word FS_OVERLAY_ID(OVY_0)"
    );
    #endif
}

void LoadOVY13(void) {
    /* Original at 0x020915D0 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _020915D8 ; =HandleLoadOverlay\n    ldr r0, _020915DC ; =FS_OVERLAY_ID(OVY_13)\n    mov r1, #2\n    bx r3\n    _020915D8: .word HandleLoadOverlay\n    _020915DC: .word FS_OVERLAY_ID(OVY_13)"
    );
    #endif
}

void UnloadOVY13(void) {
    /* Original at 0x020915E0 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _020915E8 ; =UnloadOverlayByID\n    ldr r0, _020915EC ; =FS_OVERLAY_ID(OVY_13)\n    bx r3\n    nop\n    _020915E8: .word UnloadOverlayByID\n    _020915EC: .word FS_OVERLAY_ID(OVY_13)"
    );
    #endif
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
    /* Original at 0x02091614 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0209161C ; =HandleLoadOverlay\n    ldr r0, _02091620 ; =FS_OVERLAY_ID(OVY_38)\n    mov r1, #2\n    bx r3\n    _0209161C: .word HandleLoadOverlay\n    _02091620: .word FS_OVERLAY_ID(OVY_38)"
    );
    #endif
}

void UnloadOVY38(void) {
    /* Original at 0x02091624 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0209162C ; =UnloadOverlayByID\n    ldr r0, _02091630 ; =FS_OVERLAY_ID(OVY_38)\n    bx r3\n    nop\n    _0209162C: .word UnloadOverlayByID\n    _02091630: .word FS_OVERLAY_ID(OVY_38)"
    );
    #endif
}

void sub_02091634(void) {
    /* Original at 0x02091634 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r2, #0x41\n    add r4, r0, #0\n    mov r0, #3\n    mov r1, #0x30\n    lsl r2, r2, #0xc\n    bl Heap_Create\n    add r0, r4, #0\n    bl OverlayManager_GetArgs\n    ldr r0, [r0, #8]\n    mov r1, #0x30\n    bl sub_020915F0\n    mov r0, #0x30\n    bl Heap_Destroy\n    mov r0, #0\n    bl OS_ResetSystem\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}
