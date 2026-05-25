/* Decompiled from asm/unk_02087E70.s */
#include "global.h"

void sub_02087E70(void) {
    /* Original at 0x02087E70 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0\n    add r5, r2, #0\n    bl sub_0200616C\n    mov r2, #0x55\n    mov r0, #3\n    mov r1, #0x6d\n    lsl r2, r2, #0xc\n    bl Heap_Create\n    add r0, r4, #0\n    bl sub_02087A78\n    add r4, r0, #0\n    bl ov40_0222C480\n    mov r0, #1\n    mov r1, #0x2a\n    bl GF_SndHandleSetPlayerVolume\n    mov r0, #7\n    mov r1, #0x2a\n    bl GF_SndHandleSetPlayerVolume\n    cmp r5, #0\n    beq _02087EB0\n    ldr r1, _02087EF0 ; =0x00000482\n    mov r0, #0\n    bl sub_02055198\n    cmp r5, #0\n    bne _02087EE2\n    mov r0, #0x83\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Save_Misc_Get\n    add r1, r4, #0\n    add r1, #0x5c\n    bl sub_0202AC0C\n    add r0, r4, #0\n    add r0, #0x5c\n    ldrb r0, [r0]\n    cmp r0, #7\n    blo _02087ED8\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x5c\n    strb r1, [r0]\n    add r0, r4, #0\n    bl ov40_0222DAC0\n    str r0, [r4, #0x58]\n    b _02087EE6\n    ldr r0, _02087EF4 ; =0x00007FDD\n    str r0, [r4, #0x58]\n    add r0, r4, #0\n    bl ov40_0222B6E0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02087EF0: .word 0x00000482\n    _02087EF4: .word 0x00007FDD"
    );
    #endif
}

void sub_02087EF8(void) {
    sub_02087E70();
}

void sub_02087F04(void) {
    sub_02087E70();
}

void sub_02087F10(void) {
    /* Original at 0x02087F10 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl sub_02087A78\n    add r1, r4, #0\n    str r4, [r0, #0x10]\n    bl ov40_0222BD30\n    cmp r0, #0\n    beq _02087F28\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02087F2C(void) {
    /* Original at 0x02087F2C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    bl sub_02087A78\n    ldr r1, [r4]\n    add r5, r0, #0\n    cmp r1, #3\n    bhi _02087F9E\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02087F48: ; jump table\n    bl ov40_0222CABC\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02087FC2\n    bl ov40_0222CA8C\n    add r0, r5, #0\n    bl ov40_0222CF94\n    add r0, r5, #0\n    bl ov40_0222D55C\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02087FC2\n    mov r0, #0x6f\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_02087988\n    cmp r0, #0\n    bne _02087FC2\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02087FC2\n    ldr r0, _02087FC8 ; =0x000006F4\n    ldr r0, [r5, r0]\n    bl sub_02087988\n    cmp r0, #0\n    bne _02087FC2\n    ldr r0, [r4]\n    add r0, r0, #1\n    str r0, [r4]\n    b _02087FC2\n    add r0, r5, #0\n    bl ov40_0222B934\n    mov r0, #0x6d\n    bl Heap_Destroy\n    ldr r0, _02087FCC ; =FS_OVERLAY_ID(OVY_40)\n    bl UnloadOverlayByID\n    ldr r0, _02087FD0 ; =gSystem + 0x60\n    mov r1, #0\n    strb r1, [r0, #9]\n    bl GfGfx_SwapDisplay\n    bl sub_0203E354\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _02087FC8: .word 0x000006F4\n    _02087FCC: .word FS_OVERLAY_ID(OVY_40)\n    _02087FD0: .word gSystem + 0x60"
    );
    #endif
}
