/* Decompiled from asm/frontier.s */
#include "global.h"

void Frontier_Init(void) {
    /* Original at 0x020965A4 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl Frontier_LoadOverlays\n    ldr r1, _02096604 ; =0x00000A54\n    add r0, r5, #0\n    mov r2, #0xb\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _02096604 ; =0x00000A54\n    add r4, r0, #0\n    mov r1, #0\n    bl MI_CpuFill8\n    add r0, r4, #0\n    bl sub_02096780\n    add r0, r4, #0\n    bl sub_02096884\n    add r0, r5, #0\n    bl OverlayManager_GetArgs\n    str r0, [r4]\n    cmp r0, #0\n    bne _020965DC\n    bl GF_AssertFail\n    ldr r2, [r4]\n    add r0, r4, #0\n    add r2, #0x20\n    ldrb r2, [r2]\n    mov r1, #0xb\n    bl FrontierSystem_Create\n    str r0, [r4, #0x14]\n    ldr r1, [r4]\n    mov r2, #0\n    add r1, #0x20\n    ldrb r1, [r1]\n    bl FrontierSystem_AddTask\n    add r0, r4, #0\n    bl Frontier_CreateMap\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    nop\n    _02096604: .word 0x00000A54"
    );
    #endif
}

void Frontier_Main(void) {
    /* Original at 0x02096608 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    ldr r1, [r5]\n    add r4, r0, #0\n    cmp r1, #6\n    bls _0209661A\n    b _02096734\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02096626: ; jump table\n    mov r0, #1\n    str r0, [r5]\n    b _02096734\n    add r0, #0x22\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02096648\n    mov r0, #2\n    str r0, [r5]\n    b _02096734\n    ldrb r0, [r4, #0x1d]\n    cmp r0, #0\n    beq _02096734\n    ldrb r0, [r4, #0x1e]\n    cmp r0, #1\n    bne _0209665A\n    mov r0, #5\n    str r0, [r5]\n    b _02096734\n    ldr r0, [r4, #0x14]\n    bl FrontierSystem_Main\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _02096734\n    mov r0, #3\n    str r0, [r5]\n    b _02096734\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #0x18]\n    bl ov80_022389C4\n    add r0, r4, #0\n    bl Frontier_FreeMap\n    bl Frontier_UnloadOverlays\n    mov r0, #4\n    str r0, [r5]\n    b _02096734\n    ldr r0, [r4, #4]\n    bl OverlayManager_Run\n    cmp r0, #1\n    bne _02096734\n    ldr r0, [r4, #4]\n    bl OverlayManager_Delete\n    bl Frontier_LoadOverlays\n    ldr r1, [r4, #0xc]\n    cmp r1, #0\n    beq _020966A4\n    ldr r0, [r4, #8]\n    blx r1\n    ldr r0, [r4, #8]\n    cmp r0, #0\n    beq _020966B4\n    ldrb r1, [r4, #0x10]\n    cmp r1, #1\n    bne _020966B4\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4, #4]\n    str r0, [r4, #0xc]\n    str r0, [r4, #8]\n    add r0, r4, #0\n    bl Frontier_CreateMap\n    ldr r0, [r4, #0x18]\n    bl ov80_02238A18\n    mov r0, #1\n    str r0, [r5]\n    b _02096734\n    bl Frontier_FreeMap\n    add r0, r4, #0\n    bl sub_02096780\n    mov r0, #6\n    str r0, [r5]\n    b _02096734\n    bl Frontier_CreateMap\n    ldrh r1, [r4, #0x20]\n    ldr r0, _02096738 ; =0x0000FFFF\n    cmp r1, r0\n    ldr r0, [r4, #0x14]\n    bne _020966FA\n    ldr r1, [r4]\n    mov r2, #0xb\n    add r1, #0x20\n    ldrb r1, [r1]\n    bl ov80_0222AA7C\n    b _0209672C\n    mov r1, #0xb\n    bl ov80_0222AAD8\n    add r6, r0, #0\n    ldr r0, [r4, #0x14]\n    bl ov80_0222A920\n    ldr r2, [r4]\n    add r0, r4, #0\n    add r2, #0x20\n    ldrb r2, [r2]\n    mov r1, #0xb\n    bl FrontierSystem_Create\n    str r0, [r4, #0x14]\n    ldr r1, [r4]\n    ldrh r2, [r4, #0x20]\n    add r1, #0x20\n    ldrb r1, [r1]\n    bl FrontierSystem_AddTask\n    ldr r0, [r4, #0x14]\n    add r1, r6, #0\n    bl ov80_0222AAF8\n    mov r0, #0\n    strb r0, [r4, #0x1e]\n    mov r0, #1\n    str r0, [r5]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _02096738: .word 0x0000FFFF"
    );
    #endif
}

void Frontier_Exit(void) {
    /* Original at 0x0209673C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r4, #0x14]\n    bl ov80_0222A920\n    add r0, r4, #0\n    bl Frontier_FreeMap\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    bl Frontier_UnloadOverlays\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void Frontier_CreateMap(void) {
    FrontierMap_Init();
}

void Frontier_FreeMap(void) {
    FrontierMap_Free();
}

void sub_02096780(void) {
    /* Original at 0x02096780 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _020967B8 ; =0x0000FFFF\n    mov r1, #0\n    add r2, r4, #0\n    add r1, r1, #1\n    strh r0, [r2, #0x24]\n    add r2, r2, #4\n    cmp r1, #0x18\n    blt _0209678A\n    add r0, r4, #0\n    mov r2, #0x1e\n    add r0, #0x84\n    mov r1, #0\n    lsl r2, r2, #6\n    bl MI_CpuFill8\n    ldr r1, _020967B8 ; =0x0000FFFF\n    mov r2, #0\n    add r0, r4, #0\n    add r0, #0x90\n    add r2, r2, #1\n    add r4, #0x3c\n    strh r1, [r0]\n    cmp r2, #0x20\n    blt _020967A6\n    pop {r4, pc}\n    nop\n    _020967B8: .word 0x0000FFFF"
    );
    #endif
}

void Frontier_LoadOverlays(void) {
    /* Original at 0x020967BC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020967D8 ; =FS_OVERLAY_ID(OVY_80)\n    mov r1, #2\n    bl HandleLoadOverlay\n    ldr r0, _020967DC ; =FS_OVERLAY_ID(OVY_81)\n    mov r1, #2\n    bl HandleLoadOverlay\n    ldr r0, _020967E0 ; =FS_OVERLAY_ID(OVY_42)\n    mov r1, #2\n    bl HandleLoadOverlay\n    pop {r3, pc}\n    _020967D8: .word FS_OVERLAY_ID(OVY_80)\n    _020967DC: .word FS_OVERLAY_ID(OVY_81)\n    _020967E0: .word FS_OVERLAY_ID(OVY_42)"
    );
    #endif
}

void Frontier_UnloadOverlays(void) {
    /* Original at 0x020967E4 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _020967FC ; =FS_OVERLAY_ID(OVY_80)\n    bl UnloadOverlayByID\n    ldr r0, _02096800 ; =FS_OVERLAY_ID(OVY_81)\n    bl UnloadOverlayByID\n    ldr r0, _02096804 ; =FS_OVERLAY_ID(OVY_42)\n    bl UnloadOverlayByID\n    pop {r3, pc}\n    nop\n    _020967FC: .word FS_OVERLAY_ID(OVY_80)\n    _02096800: .word FS_OVERLAY_ID(OVY_81)\n    _02096804: .word FS_OVERLAY_ID(OVY_42)"
    );
    #endif
}

void Frontier_GetLaunchArgs(void) {
    /* Original at 0x02096808 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void sub_0209680C(void) {
    /* Original at 0x0209680C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void Frontier_GetData(void) {
    /* Original at 0x02096810 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    ldr r0, [r0]\n    bx lr"
    );
    #endif
}

void Frontier_SetData(void) {
    /* Original at 0x02096818 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void Frontier_LaunchApplication(void) {
    /* Original at 0x02096820 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r0, [r5, #4]\n    add r7, r1, #0\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r0, #0\n    beq _02096834\n    bl GF_AssertFail\n    add r0, r7, #0\n    add r1, r4, #0\n    mov r2, #0xb\n    bl OverlayManager_New\n    str r0, [r5, #4]\n    str r4, [r5, #8]\n    ldr r0, [sp, #0x18]\n    strb r6, [r5, #0x10]\n    str r0, [r5, #0xc]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0209684C(void) {
    /* Original at 0x0209684C */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #1\n    add r0, #0x22\n    strb r1, [r0]\n    bx lr"
    );
    #endif
}

void sub_02096854(void) {
    /* Original at 0x02096854 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, [r0]\n    add r3, #0x20\n    strb r1, [r3]\n    mov r1, #1\n    strb r1, [r0, #0x1e]\n    strh r2, [r0, #0x20]\n    bx lr"
    );
    #endif
}

void sub_02096864(void) {
    /* Original at 0x02096864 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x24\n    bx lr"
    );
    #endif
}

void sub_02096868(void) {
    /* Original at 0x02096868 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "add r0, #0x84\n    bx lr"
    );
    #endif
}

void sub_0209686C(void) {
    /* Original at 0x0209686C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x3c\n    add r0, #0x84\n    mul r2, r1\n    add r0, r0, r2\n    bx lr"
    );
    #endif
}

void sub_02096878(void) {
    /* Original at 0x02096878 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02096880 ; =0x00000A04\n    add r0, r0, r1\n    bx lr\n    nop\n    _02096880: .word 0x00000A04"
    );
    #endif
}

void sub_02096884(void) {
    /* Original at 0x02096884 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _020968A8 ; =0x00000A04\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #8\n    bl MI_CpuFill8\n    ldr r1, _020968AC ; =0x0000FFFF\n    ldr r0, _020968A8 ; =0x00000A04\n    mov r2, #0\n    add r2, r2, #1\n    strh r1, [r4, r0]\n    add r4, r4, #2\n    cmp r2, #8\n    blt _0209689A\n    pop {r4, pc}\n    nop\n    _020968A8: .word 0x00000A04\n    _020968AC: .word 0x0000FFFF"
    );
    #endif
}
