/* Decompiled from asm/overlay_80_02235FC8.s */
#include "global.h"

void ov80_02235FC8(void) {
    /* Original at 0x02235FC8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb\n    mov r1, #0xb4\n    bl Heap_Alloc\n    ldr r1, _02235FE8 ; =ov80_0223DD50\n    mov r2, #0xb4\n    str r0, [r1]\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, _02235FE8 ; =ov80_0223DD50\n    ldr r0, [r0]\n    str r4, [r0]\n    pop {r4, pc}\n    _02235FE8: .word ov80_0223DD50"
    );
    #endif
}

void ov80_02235FEC(void) {
    Heap_Free();
}

void ov80_02235FF8(void) {
    /* Original at 0x02235FF8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #5\n    bhi _0223603C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223600A: ; jump table\n    bl sub_02096A34\n    pop {r3, pc}\n    add r1, r2, #0\n    bl sub_02096AAC\n    pop {r3, pc}\n    add r1, r2, #0\n    add r2, r3, #0\n    bl sub_02096AF4\n    pop {r3, pc}\n    add r1, r2, #0\n    bl sub_02096BF8\n    pop {r3, pc}\n    add r1, r2, #0\n    bl sub_02096C40\n    pop {r3, pc}"
    );
    #endif
}

void ov80_02236040(void) {
    /* Original at 0x02236040 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r3, r1, #0\n    add r3, #0x98\n    ldr r3, [r3]\n    cmp r2, #4\n    bhi _02236088\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02236058: ; jump table\n    add r2, r3, #0\n    mov r3, #0xb\n    bl ov80_0223608C\n    pop {r3, pc}\n    add r2, r3, #0\n    mov r3, #0xb\n    bl ov80_022362B8\n    pop {r3, pc}\n    add r2, r3, #0\n    mov r3, #0xb\n    bl ov80_02236330\n    pop {r3, pc}\n    add r2, r3, #0\n    mov r3, #0xb\n    bl ov80_0223641C\n    pop {r3, pc}"
    );
    #endif
}

void ov80_0223608C(void) {
    /* Original at 0x0223608C */
    /* Requires manual decompilation - 268 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r6, r0, #0\n    add r5, r1, #0\n    mov r0, #0xb\n    mov r1, #0x44\n    add r4, r2, #0\n    bl Heap_Alloc\n    add r1, r5, #0\n    add r1, #0xa8\n    str r0, [r1]\n    add r1, r5, #0\n    add r1, #0xa8\n    ldr r1, [r1]\n    mov r0, #0\n    mov r2, #0x44\n    bl MIi_CpuClearFast\n    ldr r0, [r5]\n    bl SaveArray_Party_Get\n    add r1, r5, #0\n    add r1, #0xa8\n    ldr r1, [r1]\n    str r0, [r1]\n    ldr r0, [r5]\n    bl Save_Bag_Get\n    add r1, r5, #0\n    add r1, #0xa8\n    ldr r1, [r1]\n    str r0, [r1, #4]\n    ldr r0, [r5]\n    bl Save_Mailbox_Get\n    add r1, r5, #0\n    add r1, #0xa8\n    ldr r1, [r1]\n    str r0, [r1, #8]\n    ldr r0, [r5]\n    bl Save_PlayerData_GetOptionsAddr\n    add r1, r5, #0\n    add r1, #0xa8\n    ldr r1, [r1]\n    str r0, [r1, #0xc]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0\n    add r0, #0x25\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0223610E\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0x11\n    add r0, #0x24\n    strb r1, [r0]\n    b _02236148\n    cmp r0, #5\n    bne _02236120\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0x16\n    add r0, #0x24\n    strb r1, [r0]\n    b _02236148\n    cmp r0, #4\n    bne _02236132\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0x17\n    add r0, #0x24\n    strb r1, [r0]\n    b _02236148\n    cmp r0, #6\n    bne _02236144\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0x17\n    add r0, #0x24\n    strb r1, [r0]\n    b _02236148\n    bl GF_AssertFail\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    str r4, [r0, #0x1c]\n    add r0, r5, #0\n    add r0, #0x9f\n    ldrb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r0, #0x26\n    strb r1, [r0]\n    mov r1, #0\n    add r2, r5, #0\n    add r0, r5, r1\n    add r2, #0xa8\n    add r0, #0xa1\n    ldr r2, [r2]\n    ldrb r0, [r0]\n    add r2, r2, r1\n    add r2, #0x30\n    strb r0, [r2]\n    add r0, r1, #1\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    cmp r1, #2\n    blo _02236162\n    add r0, r5, #0\n    add r0, #0xa0\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _022361C6\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r1, r0, #0\n    add r1, #0x36\n    ldrb r2, [r1]\n    mov r1, #0xf\n    add r0, #0x36\n    bic r2, r1\n    mov r1, #2\n    orr r1, r2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r1, r0, #0\n    add r1, #0x36\n    ldrb r2, [r1]\n    mov r1, #0xf0\n    add r0, #0x36\n    bic r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0x64\n    add r0, #0x37\n    strb r1, [r0]\n    b _02236290\n    cmp r0, #5\n    bne _02236208\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r1, r0, #0\n    add r1, #0x36\n    ldrb r2, [r1]\n    mov r1, #0xf\n    add r0, #0x36\n    bic r2, r1\n    mov r1, #1\n    orr r1, r2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r1, r0, #0\n    add r1, #0x36\n    ldrb r2, [r1]\n    mov r1, #0xf0\n    add r0, #0x36\n    bic r2, r1\n    mov r1, #0x10\n    orr r1, r2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0x1e\n    add r0, #0x37\n    strb r1, [r0]\n    b _02236290\n    cmp r0, #4\n    bne _0223624A\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r1, r0, #0\n    add r1, #0x36\n    ldrb r2, [r1]\n    mov r1, #0xf\n    add r0, #0x36\n    bic r2, r1\n    mov r1, #2\n    orr r1, r2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r1, r0, #0\n    add r1, #0x36\n    ldrb r2, [r1]\n    mov r1, #0xf0\n    add r0, #0x36\n    bic r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0x64\n    add r0, #0x37\n    strb r1, [r0]\n    b _02236290\n    cmp r0, #6\n    bne _0223628C\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r1, r0, #0\n    add r1, #0x36\n    ldrb r2, [r1]\n    mov r1, #0xf\n    add r0, #0x36\n    bic r2, r1\n    mov r1, #2\n    orr r1, r2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r1, r0, #0\n    add r1, #0x36\n    ldrb r2, [r1]\n    mov r1, #0xf0\n    add r0, #0x36\n    bic r2, r1\n    mov r1, #0x20\n    orr r1, r2\n    strb r1, [r0]\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r1, #0x64\n    add r0, #0x37\n    strb r1, [r0]\n    b _02236290\n    bl GF_AssertFail\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r1, r4, r0\n    add r0, r5, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    mov r3, #0\n    str r1, [r0, #0x20]\n    str r3, [sp]\n    add r5, #0xa8\n    ldr r1, _022362B4 ; =gOverlayTemplate_PartyMenu\n    ldr r2, [r5]\n    add r0, r6, #0\n    bl Frontier_LaunchApplication\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _022362B4: .word gOverlayTemplate_PartyMenu"
    );
    #endif
}

void ov80_022362B8(void) {
    /* Original at 0x022362B8 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r1, r0, #0\n    add r1, #0x26\n    ldrb r1, [r1]\n    cmp r1, #6\n    beq _022362E0\n    cmp r1, #7\n    bne _022362F0\n    add r0, r4, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    mov r1, #4\n    strh r1, [r0]\n    add r4, #0x9d\n    strb r1, [r4]\n    pop {r4, pc}\n    add r0, r4, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    mov r1, #4\n    strh r1, [r0]\n    add r4, #0x9d\n    strb r1, [r4]\n    pop {r4, pc}\n    add r1, r4, #0\n    add r0, #0x30\n    add r1, #0xa1\n    mov r2, #2\n    bl MI_CpuCopy8\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    add r0, #0x26\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x9f\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xa8\n    ldr r0, [r0]\n    bl Heap_Free\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xa8\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    mov r1, #2\n    strh r1, [r0]\n    add r4, #0x9d\n    strb r1, [r4]\n    pop {r4, pc}"
    );
    #endif
}

void ov80_02236330(void) {
    /* Original at 0x02236330 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, r3, #0\n    mov r1, #0x3c\n    bl Heap_AllocAtEnd\n    add r1, r4, #0\n    add r1, #0xac\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    mov r1, #0\n    mov r2, #0x3c\n    bl MI_CpuFill8\n    ldr r0, [r4]\n    bl Save_PlayerData_GetOptionsAddr\n    add r1, r4, #0\n    add r1, #0xac\n    ldr r1, [r1]\n    str r0, [r1, #4]\n    ldr r0, [r4]\n    bl SaveArray_Party_Get\n    add r1, r4, #0\n    add r1, #0xac\n    ldr r1, [r1]\n    str r0, [r1]\n    ldr r0, [r4]\n    bl SaveArray_IsNatDexEnabled\n    add r1, r4, #0\n    add r1, #0xac\n    ldr r1, [r1]\n    str r0, [r1, #0x1c]\n    ldr r0, [r4]\n    bl sub_02088288\n    add r1, r4, #0\n    add r1, #0xac\n    ldr r1, [r1]\n    str r0, [r1, #0x2c]\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    mov r1, #1\n    strb r1, [r0, #0x11]\n    add r0, r4, #0\n    add r0, #0x9f\n    ldrb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    strb r1, [r0, #0x14]\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    ldr r0, [r0]\n    bl Party_GetCount\n    add r1, r4, #0\n    add r1, #0xac\n    ldr r1, [r1]\n    strb r0, [r1, #0x13]\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    mov r1, #0\n    strh r1, [r0, #0x18]\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    strb r1, [r0, #0x12]\n    ldr r0, [r4]\n    bl Save_SpecialRibbons_Get\n    add r1, r4, #0\n    add r1, #0xac\n    ldr r1, [r1]\n    str r0, [r1, #0x20]\n    ldr r0, [r4]\n    bl sub_0208828C\n    add r1, r4, #0\n    add r1, #0xac\n    ldr r1, [r1]\n    str r0, [r1, #0x34]\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    ldr r1, _02236414 ; =ov80_0223C040\n    bl sub_02089D40\n    ldr r0, [r4]\n    bl Save_PlayerData_GetProfile\n    add r1, r0, #0\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    bl sub_0208AD34\n    mov r3, #0\n    str r3, [sp]\n    add r4, #0xac\n    ldr r1, _02236418 ; =gOverlayTemplate_PokemonSummary\n    ldr r2, [r4]\n    add r0, r5, #0\n    bl Frontier_LaunchApplication\n    pop {r3, r4, r5, pc}\n    _02236414: .word ov80_0223C040\n    _02236418: .word gOverlayTemplate_PokemonSummary"
    );
    #endif
}

void ov80_0223641C(void) {
    /* Original at 0x0223641C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    ldrb r1, [r0, #0x14]\n    add r0, r4, #0\n    add r0, #0x9f\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xac\n    ldr r0, [r0]\n    bl Heap_Free\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xac\n    str r1, [r0]\n    add r0, r4, #0\n    add r0, #0xb0\n    ldr r0, [r0]\n    add r4, #0x9d\n    strh r1, [r0]\n    strb r1, [r4]\n    pop {r4, pc}"
    );
    #endif
}
