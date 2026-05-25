/* Decompiled from asm/overlay_01_02204004.s */
#include "global.h"

void ov01_02204004(void) {
    /* Original at 0x02204004 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r1, #0\n    mov r1, #0x1c\n    add r7, r0, #0\n    add r5, r2, #0\n    str r3, [sp]\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [r4, #0x10]\n    str r6, [r4, #0x14]\n    ldr r0, [sp]\n    str r5, [r4, #0x18]\n    str r0, [r4, #4]\n    add r0, r7, #0\n    add r1, r6, #0\n    bl Heap_Alloc\n    mov r2, #0\n    str r0, [r4]\n    cmp r6, #0\n    ble _0220403E\n    mov r1, #0xff\n    ldr r0, [r4]\n    strb r1, [r0, r2]\n    add r2, r2, #1\n    cmp r2, r6\n    blt _02204034\n    mov r0, #0x5c\n    add r6, r5, #0\n    mul r6, r0\n    add r0, r7, #0\n    add r1, r6, #0\n    bl Heap_Alloc\n    str r0, [r4, #8]\n    ldr r1, [r4, #8]\n    mov r0, #0\n    add r2, r6, #0\n    bl MIi_CpuClearFast\n    add r0, r7, #0\n    lsl r1, r5, #2\n    bl Heap_Alloc\n    mov r6, #0\n    str r0, [r4, #0xc]\n    cmp r5, #0\n    ble _0220407E\n    add r2, r6, #0\n    add r3, r6, #0\n    ldr r0, [r4, #8]\n    add r6, r6, #1\n    add r1, r0, r2\n    ldr r0, [r4, #0xc]\n    add r2, #0x5c\n    str r1, [r0, r3]\n    add r3, r3, #4\n    cmp r6, r5\n    blt _0220406C\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_02204084(void) {
    /* Original at 0x02204084 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    bl Heap_Free\n    ldr r0, [r4, #8]\n    bl Heap_Free\n    ldr r0, [r4, #0xc]\n    bl Heap_Free\n    add r0, r4, #0\n    bl Heap_Free\n    pop {r4, pc}"
    );
    #endif
}

void ov01_022040A4(void) {
    ov01_02204168();
}

void ov01_022040C0(void) {
    /* Original at 0x022040C0 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #0x10]\n    sub r3, r2, #1\n    str r3, [r0, #0x10]\n    ldr r2, [r0, #0xc]\n    lsl r0, r3, #2\n    str r1, [r2, r0]\n    bx lr"
    );
    #endif
}

void Field3dObjectList_GetRenderObjectByID(void) {
    /* Original at 0x022040D0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0]\n    ldrb r2, [r2, r1]\n    cmp r2, #0xff\n    beq _022040E0\n    ldr r1, [r0, #0xc]\n    lsl r0, r2, #2\n    ldr r0, [r1, r0]\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_022040E4(void) {
    ov01_02204168();
}

void ov01_022040F8(void) {
    /* Original at 0x022040F8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov01_02204144\n    cmp r0, #0\n    beq _02204110\n    add r0, r5, #0\n    add r1, r4, #0\n    bl Field3dObjectList_GetRenderObjectByID\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_022040E4\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_0220411C(void) {
    /* Original at 0x0220411C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bne _02204128\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    ldr r1, [r4, #0x58]\n    bl ov01_02204144\n    cmp r0, #0\n    bne _0220413E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov01_022040C0\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_02204144(void) {
    /* Original at 0x02204144 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0]\n    ldrb r0, [r0, r1]\n    cmp r0, #0xff\n    beq _02204150\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_02204154(void) {
    /* Original at 0x02204154 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r2, [r0, #4]\n    lsl r0, r1, #2\n    ldr r0, [r2, r0]\n    cmp r0, #0\n    beq _02204162\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_02204168(void) {
    /* Original at 0x02204168 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r1]\n    add r4, r2, #0\n    bl NNS_G3dGetMdlSet\n    cmp r0, #0\n    beq _02204198\n    add r2, r0, #0\n    add r2, #8\n    beq _0220418C\n    ldrb r1, [r0, #9]\n    cmp r1, #0\n    bls _0220418C\n    ldrh r1, [r0, #0xe]\n    add r1, r2, r1\n    add r1, r1, #4\n    b _0220418E\n    mov r1, #0\n    cmp r1, #0\n    beq _02204198\n    ldr r1, [r1]\n    add r2, r0, r1\n    b _0220419A\n    mov r2, #0\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    str r2, [r0, #0x54]\n    ldr r0, [r5, #0x10]\n    ldr r1, [r5, #0xc]\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    ldr r1, [r0, #0x54]\n    bl NNS_G3dRenderObjInit\n    ldr r1, [r5, #0x10]\n    ldr r2, [r5, #0xc]\n    lsl r0, r1, #2\n    ldr r0, [r2, r0]\n    add r1, r1, #1\n    str r1, [r5, #0x10]\n    str r4, [r0, #0x58]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_022041C4(void) {
    Heap_Alloc(0, 0x10);
}

void ov01_022041D8(void) {
    /* Original at 0x022041D8 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r1, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x24\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r1, #0\n    strh r1, [r4, #0x22]\n    strh r7, [r4, #0x20]\n    str r1, [r4, #0x1c]\n    add r1, r5, #0\n    mov r2, #4\n    bl HeapExp_FndInitAllocator\n    lsl r6, r7, #5\n    add r0, r5, #0\n    add r1, r6, #0\n    bl Heap_Alloc\n    str r0, [r4, #0x10]\n    ldr r1, [r4, #0x10]\n    mov r0, #0\n    add r2, r6, #0\n    bl MIi_CpuClearFast\n    add r0, r5, #0\n    lsl r1, r7, #2\n    bl Heap_Alloc\n    mov r3, #0\n    str r0, [r4, #0x14]\n    cmp r7, #0\n    ble _02204248\n    add r5, r3, #0\n    add r6, r3, #0\n    add r2, r3, #0\n    ldr r0, [r4, #0x10]\n    add r3, r3, #1\n    add r0, r0, r5\n    str r2, [r0, #0x14]\n    ldr r0, [r4, #0x10]\n    add r0, r0, r5\n    str r2, [r0, #4]\n    ldr r0, [r4, #0x10]\n    str r2, [r0, r5]\n    ldr r0, [r4, #0x10]\n    add r1, r0, r5\n    ldr r0, [r4, #0x14]\n    add r5, #0x20\n    str r1, [r0, r6]\n    add r6, r6, #4\n    cmp r3, r7\n    blt _02204226\n    mov r0, #0\n    str r0, [r4, #0x18]\n    ldr r0, [sp]\n    ldr r0, [r0, #4]\n    cmp r0, #0\n    bne _0220425E\n    ldr r0, [sp]\n    str r4, [r0, #4]\n    str r4, [r0, #8]\n    str r4, [r0]\n    b _02204268\n    ldr r0, [sp]\n    ldr r0, [r0, #8]\n    str r4, [r0, #0x18]\n    ldr r0, [sp]\n    str r4, [r0, #8]\n    ldr r0, [sp]\n    ldr r0, [r0, #0xc]\n    add r1, r0, #1\n    ldr r0, [sp]\n    str r1, [r0, #0xc]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_02204278(void) {
    /* Original at 0x02204278 */
    /* Requires manual decompilation - 58 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    cmp r0, #0\n    beq _022042F6\n    add r1, r0, #0\n    ldr r4, [r1, #4]\n    cmp r4, #0\n    bne _02204292\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    ldr r0, [r0, #0xc]\n    cmp r0, #0\n    ble _022042F0\n    ldrh r0, [r4, #0x20]\n    mov r7, #0\n    cmp r0, #0\n    ble _022042CC\n    add r5, r7, #0\n    ldr r0, [r4, #0x10]\n    add r6, r0, r5\n    ldr r0, [r6, #0x14]\n    cmp r0, #1\n    bne _022042C2\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov01_02204500\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov01_0220431C\n    ldrh r0, [r4, #0x20]\n    add r7, r7, #1\n    add r5, #0x20\n    cmp r7, r0\n    blt _022042A8\n    ldr r0, [r4, #0x10]\n    bl Heap_Free\n    ldr r0, [r4, #0x14]\n    bl Heap_Free\n    add r0, r4, #0\n    ldr r4, [r4, #0x18]\n    bl Heap_Free\n    ldr r0, [sp, #4]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    ldr r1, [r0, #0xc]\n    ldr r0, [sp, #4]\n    cmp r0, r1\n    blt _0220429E\n    ldr r0, [sp]\n    bl Heap_Free\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_022042FC(void) {
    GF_AssertFail(0);
}

void ov01_0220431C(void) {
    /* Original at 0x0220431C */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldrh r0, [r5, #0x22]\n    add r4, r1, #0\n    cmp r0, #0\n    bne _0220432E\n    bl GF_AssertFail\n    pop {r3, r4, r5, pc}\n    sub r0, r0, #1\n    strh r0, [r5, #0x22]\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _0220433C\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4]\n    str r0, [r4, #0x14]\n    ldrh r0, [r5, #0x22]\n    ldr r1, [r5, #0x14]\n    lsl r0, r0, #2\n    str r4, [r1, r0]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_0220434C(void) {
    /* Original at 0x0220434C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r0, [r0, #0x22]\n    bx lr"
    );
    #endif
}

void ov01_02204350(void) {
    /* Original at 0x02204350 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    str r0, [sp]\n    cmp r0, #0\n    beq _022043D4\n    ldr r6, [r0, #4]\n    cmp r6, #0\n    beq _022043D4\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    ldr r0, [r0, #0xc]\n    cmp r0, #0\n    ble _022043D4\n    ldrh r0, [r6, #0x20]\n    mov r7, #0\n    cmp r0, #0\n    ble _022043C2\n    add r5, r7, #0\n    ldr r0, [r6, #0x10]\n    add r4, r0, r5\n    ldr r0, [r4, #0x14]\n    cmp r0, #1\n    bne _022043B8\n    ldr r0, [r4, #0xc]\n    cmp r0, #1\n    beq _022043B8\n    ldr r0, [r4, #0x1c]\n    cmp r0, #0\n    beq _022043B8\n    add r0, r4, #0\n    bl ov01_02204594\n    mov r0, #0\n    ldr r1, [r4, #8]\n    mvn r0, r0\n    cmp r1, r0\n    beq _022043B8\n    add r0, r4, #0\n    bl ov01_022045DC\n    cmp r0, #0\n    beq _022043B8\n    ldr r0, [r4, #0x18]\n    add r1, r0, #1\n    ldr r0, [r4, #8]\n    cmp r1, r0\n    blt _022043B6\n    mov r0, #0\n    str r0, [r4, #0x1c]\n    b _022043B8\n    str r1, [r4, #0x18]\n    ldrh r0, [r6, #0x20]\n    add r7, r7, #1\n    add r5, #0x20\n    cmp r7, r0\n    blt _02204376\n    ldr r0, [sp, #4]\n    ldr r6, [r6, #0x18]\n    add r0, r0, #1\n    str r0, [sp, #4]\n    ldr r0, [sp]\n    ldr r1, [r0, #0xc]\n    ldr r0, [sp, #4]\n    cmp r0, r1\n    blt _0220436C\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_022043D8(void) {
    /* Original at 0x022043D8 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    cmp r0, #0\n    beq _0220441E\n    ldr r5, [r0, #4]\n    cmp r5, #0\n    beq _0220441E\n    ldr r1, [r0, #0xc]\n    mov r3, #0\n    cmp r1, #0\n    ble _0220441E\n    mov r1, #1\n    ldrh r2, [r5, #0x20]\n    mov r4, #0\n    cmp r2, #0\n    ble _02204414\n    add r6, r4, #0\n    ldr r2, [r5, #0x10]\n    add r2, r2, r6\n    ldr r7, [r2, #0x14]\n    cmp r7, #1\n    bne _0220440A\n    ldr r7, [r2, #0x1c]\n    cmp r7, #0\n    beq _0220440A\n    str r1, [r2, #0xc]\n    ldrh r2, [r5, #0x20]\n    add r4, r4, #1\n    add r6, #0x20\n    cmp r4, r2\n    blt _022043F8\n    ldr r2, [r0, #0xc]\n    add r3, r3, #1\n    ldr r5, [r5, #0x18]\n    cmp r3, r2\n    blt _022043EE\n    pop {r4, r5, r6, r7}\n    bx lr"
    );
    #endif
}

void ov01_02204424(void) {
    /* Original at 0x02204424 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    str r0, [sp]\n    cmp r0, #0\n    beq _0220446E\n    ldr r4, [r0, #4]\n    cmp r4, #0\n    beq _0220446E\n    ldr r0, [r0, #0xc]\n    mov r7, #0\n    cmp r0, #0\n    ble _0220446E\n    ldrh r0, [r4, #0x20]\n    mov r6, #0\n    cmp r0, #0\n    ble _02204462\n    add r5, r6, #0\n    ldr r0, [r4, #0x10]\n    add r0, r0, r5\n    ldr r1, [r0, #0x14]\n    cmp r1, #1\n    bne _02204458\n    ldr r1, [r0, #0x1c]\n    cmp r1, #0\n    beq _02204458\n    bl ov01_022044E0\n    ldrh r0, [r4, #0x20]\n    add r6, r6, #1\n    add r5, #0x20\n    cmp r6, r0\n    blt _02204444\n    ldr r0, [sp]\n    add r7, r7, #1\n    ldr r0, [r0, #0xc]\n    ldr r4, [r4, #0x18]\n    cmp r7, r0\n    blt _0220443A\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_02204470(void) {
    /* Original at 0x02204470 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r2, #0\n    str r0, [sp]\n    add r5, r1, #0\n    add r0, r4, #0\n    mov r1, #0\n    add r6, r3, #0\n    bl NNS_G3dGetAnmByIdx\n    add r7, r0, #0\n    bne _0220448A\n    bl GF_AssertFail\n    ldr r0, [sp]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl NNS_G3dAllocAnmObj\n    str r0, [r5]\n    cmp r0, #0\n    bne _0220449E\n    bl GF_AssertFail\n    ldr r0, [r5]\n    ldr r3, [sp, #0x18]\n    add r1, r7, #0\n    add r2, r6, #0\n    bl NNS_G3dAnmObjInit\n    str r4, [r5, #4]\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_022044B0(void) {
    /* Original at 0x022044B0 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r6, [r0, #0x1c]\n    add r5, r1, #0\n    add r4, r2, #0\n    cmp r6, #0\n    beq _022044C0\n    blx r6\n    str r4, [r5, #4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_022044C4(void) {
    /* Original at 0x022044C4 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0x1c]\n    bx lr"
    );
    #endif
}

void ov01_022044C8(void) {
    /* Original at 0x022044C8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #0\n    str r4, [r0, #0x18]\n    mov r4, #1\n    str r4, [r0, #0x1c]\n    str r4, [r0, #0x14]\n    str r1, [r0, #8]\n    str r2, [r0, #0xc]\n    str r3, [r0, #0x10]\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov01_022044E0(void) {
    /* Original at 0x022044E0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    cmp r1, #0\n    bne _022044EE\n    ldr r0, [r0]\n    mov r1, #0\n    str r1, [r0]\n    bx lr\n    ldr r2, [r0]\n    ldr r0, [r2, #8]\n    ldrh r0, [r0, #4]\n    lsl r1, r0, #0xc\n    mov r0, #1\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [r2]\n    bx lr"
    );
    #endif
}

void ov01_02204500(void) {
    NNS_G3dFreeAnmObj();
}

void ov01_0220450C(void) {
    NNS_G3dRenderObjAddAnmObj();
}

void ov01_02204518(void) {
    /* Original at 0x02204518 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #0\n    bne _02204522\n    mov r0, #0\n    pop {r3, pc}\n    ldr r1, [r1]\n    cmp r1, #0\n    bne _0220452C\n    mov r0, #0\n    pop {r3, pc}\n    cmp r0, #0\n    bne _02204534\n    mov r0, #0\n    pop {r3, pc}\n    ldr r2, [r0, #8]\n    cmp r2, #0\n    bne _0220454A\n    ldr r2, [r0, #0x10]\n    cmp r2, #0\n    bne _0220454A\n    ldr r2, [r0, #0x18]\n    cmp r2, #0\n    bne _0220454A\n    mov r0, #0\n    pop {r3, pc}\n    bl NNS_G3dRenderObjRemoveAnmObj\n    mov r0, #1\n    pop {r3, pc}"
    );
    #endif
}

void ov01_02204554(void) {
    /* Original at 0x02204554 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #8]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bx lr"
    );
    #endif
}

void ov01_0220455C(void) {
    /* Original at 0x0220455C */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #0xc]\n    bx lr"
    );
    #endif
}

void ov01_02204560(void) {
    /* Original at 0x02204560 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, [r0, #0x1c]\n    cmp r0, #0\n    bne _0220456A\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_02204570(void) {
    /* Original at 0x02204570 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    cmp r1, #0\n    bne _02204588\n    ldr r2, [r0]\n    ldr r0, [r2, #8]\n    ldrh r0, [r0, #4]\n    lsl r1, r0, #0xc\n    mov r0, #1\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    str r0, [r2]\n    bx lr\n    ldr r0, [r0]\n    mov r1, #0\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_02204590(void) {
    /* Original at 0x02204590 */
    /* Requires manual decompilation - 2 instructions */
    #ifdef MWERKS
    asm(
        "str r1, [r0, #8]\n    bx lr"
    );
    #endif
}

void ov01_02204594(void) {
    /* Original at 0x02204594 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    cmp r1, #0\n    bne _022045BA\n    ldr r3, [r0]\n    mov r1, #1\n    ldr r2, [r3]\n    lsl r1, r1, #0xc\n    add r1, r2, r1\n    str r1, [r3]\n    ldr r2, [r0]\n    ldr r0, [r2, #8]\n    ldr r1, [r2]\n    ldrh r0, [r0, #4]\n    lsl r0, r0, #0xc\n    cmp r1, r0\n    bne _022045DA\n    mov r0, #0\n    str r0, [r2]\n    bx lr\n    ldr r0, [r0]\n    ldr r2, [r0]\n    cmp r2, #0\n    bgt _022045D2\n    ldr r1, [r0, #8]\n    ldrh r1, [r1, #4]\n    lsl r2, r1, #0xc\n    mov r1, #1\n    lsl r1, r1, #0xc\n    sub r1, r2, r1\n    str r1, [r0]\n    bx lr\n    mov r1, #1\n    lsl r1, r1, #0xc\n    sub r1, r2, r1\n    str r1, [r0]\n    bx lr"
    );
    #endif
}

void ov01_022045DC(void) {
    /* Original at 0x022045DC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x10]\n    ldr r0, [r0]\n    cmp r1, #0\n    bne _022045FE\n    ldr r2, [r0]\n    ldr r0, [r0, #8]\n    ldrh r0, [r0, #4]\n    lsl r1, r0, #0xc\n    mov r0, #1\n    lsl r0, r0, #0xc\n    sub r0, r1, r0\n    cmp r2, r0\n    blt _022045FA\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    ldr r0, [r0]\n    cmp r0, #0\n    bne _02204608\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov01_0220460C(void) {
    /* Original at 0x0220460C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #4\n    mov r1, #8\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov01_022041D8\n    ldr r1, _02204630 ; =ov01_022046A4\n    str r0, [r4]\n    bl ov01_022044C4\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _02204630: .word ov01_022046A4"
    );
    #endif
}

void ov01_02204634(void) {
    Heap_Free();
}

void ov01_0220463C(void) {
    /* Original at 0x0220463C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r6, r1, #0\n    bl ov01_022042FC\n    add r4, r0, #0\n    bne _02204650\n    bl GF_AssertFail\n    mov r1, #0\n    mov r2, #0\n    add r0, r4, #0\n    mvn r1, r1\n    add r3, r2, #0\n    bl ov01_022044C8\n    mov r0, #0x8c\n    add r1, r6, #0\n    mov r2, #4\n    bl AllocAndReadWholeNarcMemberByIdPair\n    add r2, r0, #0\n    ldr r0, [r5]\n    add r1, r4, #0\n    mov r3, #0\n    bl ov01_022044B0\n    str r4, [r5, #4]\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_02204678(void) {
    /* Original at 0x02204678 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02204684 ; =ov01_0220450C\n    add r2, r0, #0\n    add r0, r1, #0\n    ldr r1, [r2, #4]\n    bx r3\n    nop\n    _02204684: .word ov01_0220450C"
    );
    #endif
}

void ov01_02204688(void) {
    /* Original at 0x02204688 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02204694 ; =ov01_02204518\n    add r2, r0, #0\n    add r0, r1, #0\n    ldr r1, [r2, #4]\n    bx r3\n    nop\n    _02204694: .word ov01_02204518"
    );
    #endif
}

void ov01_02204698(void) {
    ov01_0220434C();
}

void ov01_022046A4(void) {
    /* Original at 0x022046A4 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r0, r2, #0\n    mov r1, #0\n    bl NNS_G3dGetAnmByIdx\n    add r4, r0, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov01_022046D4\n    add r1, r4, #0\n    str r0, [r5]\n    bl ov01_02204728\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_022046C8(void) {
    /* Original at 0x022046C8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldrb r0, [r0, #9]\n    mov r1, #3\n    lsl r0, r0, #1\n    add r0, #0x1c\n    bic r0, r1\n    bx lr"
    );
    #endif
}

void ov01_022046D4(void) {
    ov01_022046C8(r1);
    NNS_FndAllocFromAllocator(r4, r0);
}

void ov01_022046E8(void) {
    /* Original at 0x022046E8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _02204724 ; =_02110A0C\n    add r4, r1, #0\n    ldr r0, [r0]\n    add r1, r5, #0\n    str r0, [r5, #0xc]\n    ldrb r2, [r4, #9]\n    mov r0, #0\n    add r1, #0x1a\n    strb r2, [r5, #0x19]\n    lsl r2, r2, #1\n    bl MIi_CpuClear16\n    ldrb r0, [r4, #9]\n    mov r2, #0\n    cmp r0, #0\n    bls _02204720\n    mov r0, #1\n    lsl r0, r0, #8\n    add r1, r2, #0\n    orr r1, r0\n    strh r1, [r5, #0x1a]\n    ldrb r1, [r4, #9]\n    add r2, r2, #1\n    add r5, r5, #2\n    cmp r2, r1\n    blo _02204710\n    pop {r3, r4, r5, pc}\n    nop\n    _02204724: .word _02110A0C"
    );
    #endif
}

void ov01_02204728(void) {
    /* Original at 0x02204728 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "mov r3, #0\n    str r3, [r0]\n    str r1, [r0, #8]\n    str r3, [r0, #0x10]\n    mov r2, #0x7f\n    strb r2, [r0, #0x18]\n    mov r2, #1\n    lsl r2, r2, #0xc\n    str r2, [r0, #4]\n    str r3, [r0, #0x14]\n    ldr r3, _02204740 ; =ov01_022046E8\n    bx r3\n    _02204740: .word ov01_022046E8"
    );
    #endif
}

void ov01_02204744(void) {
    /* Original at 0x02204744 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #0x78\n    bl Heap_Alloc\n    add r4, r0, #0\n    mov r0, #0\n    add r1, r4, #0\n    mov r2, #0x78\n    bl MIi_CpuClearFast\n    bl GF_RTC_GetTimeOfDay\n    str r0, [r4]\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov01_02204764(void) {
    Heap_Free();
}

void ov01_0220476C(void) {
    /* Original at 0x0220476C */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r1, #0\n    ldr r1, [r5, #4]\n    add r4, r2, #0\n    add r6, r3, #0\n    cmp r1, #4\n    bge _022047D4\n    mov r0, #0x1c\n    mul r0, r1\n    add r0, r5, r0\n    ldr r0, [r0, #8]\n    cmp r0, #0\n    beq _0220478C\n    bl GF_AssertFail\n    cmp r6, #4\n    ble _02204794\n    bl GF_AssertFail\n    ldr r2, [r5, #4]\n    add r1, r5, #0\n    mov r0, #0x1c\n    add r1, #8\n    mul r0, r2\n    mov r3, #1\n    add r2, r1, r0\n    str r3, [r1, r0]\n    str r6, [r2, #4]\n    cmp r6, #4\n    ble _022047AE\n    mov r0, #4\n    str r0, [r2, #4]\n    ldr r1, [r2, #4]\n    mov r0, #0\n    cmp r1, #0\n    ble _022047CA\n    lsl r1, r0, #2\n    ldr r3, [r4, r1]\n    add r1, r2, r1\n    add r0, r0, #1\n    str r3, [r1, #8]\n    lsl r0, r0, #0x18\n    ldr r1, [r2, #4]\n    lsr r0, r0, #0x18\n    cmp r0, r1\n    blt _022047B6\n    str r7, [r2, #0x18]\n    ldr r0, [r5, #4]\n    add r0, r0, #1\n    str r0, [r5, #4]\n    pop {r3, r4, r5, r6, r7, pc}\n    bl GF_AssertFail\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov01_022047DC(void) {
    /* Original at 0x022047DC */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl GF_RTC_GetTimeOfDay\n    lsl r0, r0, #0x18\n    lsr r7, r0, #0x18\n    ldr r0, [r5]\n    cmp r0, r7\n    beq _0220482E\n    lsl r0, r0, #0x18\n    add r4, r5, #0\n    lsr r0, r0, #0x18\n    str r7, [r5]\n    mov r6, #0\n    add r4, #8\n    str r0, [sp]\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _02204824\n    ldr r2, _02204830 ; =ov01_022095EC\n    ldr r1, [sp]\n    ldr r0, [r4, #0x18]\n    ldrb r1, [r2, r1]\n    lsl r1, r1, #2\n    add r1, r1, r4\n    ldr r1, [r1, #8]\n    bl ov01_02204518\n    ldr r1, _02204830 ; =ov01_022095EC\n    ldr r0, [r4, #0x18]\n    ldrb r1, [r1, r7]\n    lsl r1, r1, #2\n    add r1, r1, r4\n    ldr r1, [r1, #8]\n    bl ov01_0220450C\n    add r6, r6, #1\n    add r5, #0x1c\n    add r4, #0x1c\n    cmp r6, #4\n    blt _022047FC\n    pop {r3, r4, r5, r6, r7, pc}\n    _02204830: .word ov01_022095EC"
    );
    #endif
}

void ov01_02204834(void) {
    /* Original at 0x02204834 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0]\n    ldr r0, _0220483C ; =ov01_022095EC\n    ldrb r0, [r0, r1]\n    bx lr\n    _0220483C: .word ov01_022095EC"
    );
    #endif
}
