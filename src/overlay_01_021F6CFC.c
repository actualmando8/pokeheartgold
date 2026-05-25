/* Decompiled from asm/overlay_01_021F6CFC.s */
#include "global.h"

void ov01_021F6CFC(void) {
    /* Original at 0x021F6CFC */
    /* Requires manual decompilation - 53 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    sub sp, #8
    add r4, r0, #0
    ldr r0, [r4, #0x34]
    bl sub_0202C6F4
    mov r1, #0
    bl sub_0202C23C
    add r1, r4, #0
    ldr r0, [r4, #0x34]
    add r1, #0x48
    mov r2, #4
    bl sub_0203A1C4
    cmp r0, #0
    bne _021F6D24
    add sp, #8
    mov r0, #1
    pop {r4, pc}
    add r0, r4, #0
    mov r1, #0
    add r0, #0x88
    str r1, [r0]
    ldr r0, [r4, #0x34]
    bl Save_PlayerData_GetOptionsAddr
    bl Options_GetFrame
    lsl r0, r0, #0x18
    lsr r0, r0, #0x18
    str r0, [sp]
    mov r0, #4
    str r0, [sp, #4]
    ldr r0, [r4, #0x30]
    ldr r2, _021F6D70 ; =0x000001E2
    ldr r0, [r0, #8]
    mov r1, #3
    mov r3, #0xa
    bl LoadUserFrameGfx2
    mov r0, #0
    str r0, [sp]
    mov r0, #4
    str r0, [sp, #4]
    ldr r0, [r4, #0x30]
    ldr r2, _021F6D74 ; =0x000003D9
    ldr r0, [r0, #8]
    mov r1, #3
    mov r3, #0xb
    bl LoadUserFrameGfx1
    mov r0, #1
    str r0, [r4, #0x44]
    mov r0, #0
    add sp, #8
    pop {r4, pc}
    nop
    _021F6D70: .word 0x000001E2
    _021F6D74: .word 0x000003D9"
    );
    #endif
}

void ov01_021F6D78(void) {
    /* Original at 0x021F6D78 */
    /* Requires manual decompilation - 91 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}
    sub sp, #4
    mov r1, #0
    add r6, r0, #0
    mvn r1, r1
    add r0, #0x88
    str r1, [r0]
    mov r4, #0
    bl sub_02037454
    cmp r0, #0
    ble _021F6DB4
    add r5, r6, #0
    ldr r0, [r5, #0x48]
    cmp r0, #2
    bne _021F6DA8
    add r0, r6, #0
    add r0, #0x88
    str r4, [r0]
    lsl r0, r4, #2
    mov r1, #0
    add r0, r6, r0
    str r1, [r0, #0x48]
    b _021F6DB4
    add r5, r5, #4
    add r4, r4, #1
    bl sub_02037454
    cmp r4, r0
    blt _021F6D92
    add r0, r6, #0
    add r0, #0x88
    ldr r1, [r0]
    mov r0, #0
    mvn r0, r0
    cmp r1, r0
    bne _021F6DC8
    add sp, #4
    mov r0, #1
    pop {r3, r4, r5, r6, pc}
    ldr r0, [r6, #0x34]
    bl Save_Bag_Get
    ldr r1, _021F6E40 ; =0x000001B5
    mov r2, #1
    mov r3, #4
    bl Bag_HasItem
    cmp r0, #1
    bne _021F6E02
    add r0, r6, #0
    add r0, #0x88
    ldr r0, [r0]
    bl sub_02034818
    add r2, r0, #0
    ldr r0, [r6, #0x38]
    mov r1, #0
    bl BufferPlayersName
    add r0, r6, #0
    mov r1, #0x3e
    bl ov01_021F71C4
    mov r0, #2
    str r0, [r6, #0x44]
    add sp, #4
    mov r0, #0
    pop {r3, r4, r5, r6, pc}
    ldr r0, [r6, #0x34]
    bl sub_0202C6F4
    add r4, r0, #0
    mov r5, #0
    add r0, r4, #0
    add r1, r5, #0
    bl sub_0202C2DC
    cmp r0, #0
    bne _021F6E2E
    mov r0, #0
    add r1, r6, #0
    str r0, [sp]
    add r1, #0x88
    ldr r0, [r6, #0x34]
    ldr r1, [r1]
    add r2, r5, #0
    mov r3, #4
    bl sub_0203A280
    b _021F6E34
    add r5, r5, #1
    cmp r5, #0x20
    blt _021F6E0C
    mov r0, #1
    str r0, [r6, #0x44]
    mov r0, #0
    add sp, #4
    pop {r3, r4, r5, r6, pc}
    nop
    _021F6E40: .word 0x000001B5"
    );
    #endif
}

void ov01_021F6E44(void) {
    /* Original at 0x021F6E44 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, [r4, #0x40]
    lsl r0, r0, #0x18
    lsr r0, r0, #0x18
    bl TextPrinterCheckActive
    cmp r0, #0
    bne _021F6E62
    add r0, r4, #0
    mov r1, #0
    add r0, #0x98
    strh r1, [r0]
    mov r0, #3
    str r0, [r4, #0x44]
    mov r0, #0
    pop {r4, pc}"
    );
    #endif
}

void ov01_021F6E68(void) {
    /* Original at 0x021F6E68 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}
    sub sp, #4
    add r6, r0, #0
    bl ov01_021F6CA0
    cmp r0, #0
    bne _021F6ED2
    add r0, r6, #0
    add r0, #0x90
    ldr r0, [r0]
    cmp r0, #0
    bne _021F6EC8
    ldr r0, [r6, #0x34]
    bl sub_0202C6F4
    add r5, r0, #0
    mov r4, #0
    add r0, r5, #0
    add r1, r4, #0
    bl sub_0202C2DC
    cmp r0, #0
    bne _021F6EAC
    mov r0, #0
    add r1, r6, #0
    str r0, [sp]
    add r1, #0x88
    ldr r0, [r6, #0x34]
    ldr r1, [r1]
    add r2, r4, #0
    mov r3, #4
    bl sub_0203A280
    b _021F6EB2
    add r4, r4, #1
    cmp r4, #0x20
    blt _021F6E8A
    cmp r4, #0x20
    bne _021F6EC8
    add r0, r6, #0
    mov r1, #0x3f
    bl ov01_021F71C4
    mov r0, #4
    str r0, [r6, #0x44]
    add sp, #4
    mov r0, #0
    pop {r3, r4, r5, r6, pc}
    mov r0, #1
    str r0, [r6, #0x44]
    add sp, #4
    mov r0, #0
    pop {r3, r4, r5, r6, pc}
    mov r0, #0
    add sp, #4
    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F6ED8(void) {
    /* Original at 0x021F6ED8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, [r4, #0x40]
    lsl r0, r0, #0x18
    lsr r0, r0, #0x18
    bl TextPrinterCheckActive
    cmp r0, #0
    bne _021F6EF6
    add r0, r4, #0
    mov r1, #0
    add r0, #0x98
    strh r1, [r0]
    mov r0, #5
    str r0, [r4, #0x44]
    mov r0, #0
    pop {r4, pc}"
    );
    #endif
}

void ov01_021F6EFC(void) {
    /* Original at 0x021F6EFC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    bl ov01_021F6CA0
    cmp r0, #0
    bne _021F6F40
    add r0, r4, #0
    add r0, #0x90
    ldr r0, [r0]
    cmp r0, #0
    bne _021F6F20
    add r0, r4, #0
    mov r1, #0
    add r0, #0x9a
    strh r1, [r0]
    mov r0, #8
    str r0, [r4, #0x44]
    b _021F6F40
    add r0, r4, #0
    add r0, #0x88
    ldr r0, [r0]
    bl sub_02034818
    add r2, r0, #0
    ldr r0, [r4, #0x38]
    mov r1, #0
    bl BufferPlayersName
    add r0, r4, #0
    mov r1, #0x40
    bl ov01_021F71C4
    mov r0, #6
    str r0, [r4, #0x44]
    mov r0, #0
    pop {r4, pc}"
    );
    #endif
}

void ov01_021F6F44(void) {
    /* Original at 0x021F6F44 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, [r4, #0x40]
    lsl r0, r0, #0x18
    lsr r0, r0, #0x18
    bl TextPrinterCheckActive
    cmp r0, #0
    bne _021F6F62
    add r0, r4, #0
    mov r1, #0
    add r0, #0x98
    strh r1, [r0]
    mov r0, #7
    str r0, [r4, #0x44]
    mov r0, #0
    pop {r4, pc}"
    );
    #endif
}

void ov01_021F6F68(void) {
    /* Original at 0x021F6F68 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    bl ov01_021F6CA0
    cmp r0, #0
    bne _021F6F90
    add r0, r4, #0
    add r0, #0x90
    ldr r0, [r0]
    cmp r0, #0
    bne _021F6F84
    mov r0, #0xc
    str r0, [r4, #0x44]
    b _021F6F90
    add r0, r4, #0
    mov r1, #0x3f
    bl ov01_021F71C4
    mov r0, #4
    str r0, [r4, #0x44]
    mov r0, #0
    pop {r4, pc}"
    );
    #endif
}

void ov01_021F6F94(void) {
    /* Original at 0x021F6F94 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    add r1, r4, #0
    add r1, #0x9a
    ldrh r1, [r1]
    cmp r1, #0
    beq _021F6FA8
    cmp r1, #1
    beq _021F6FC2
    b _021F6FD6
    add r2, r4, #0
    ldr r0, [r4, #0x30]
    mov r1, #6
    add r2, #0x94
    bl ov01_021F6A9C
    add r0, r4, #0
    add r0, #0x9a
    ldrh r0, [r0]
    add r4, #0x9a
    add r0, r0, #1
    strh r0, [r4]
    b _021F6FD6
    bl ov01_021F6C28
    cmp r0, #1
    bne _021F6FD6
    add r0, r4, #0
    mov r1, #0
    add r0, #0x9a
    strh r1, [r0]
    mov r0, #9
    str r0, [r4, #0x44]
    mov r0, #0
    pop {r4, pc}"
    );
    #endif
}

void ov01_021F6FDC(void) {
    /* Original at 0x021F6FDC */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r5, r0, #0
    add r0, #0x94
    ldr r1, [r0]
    mov r0, #1
    mvn r0, r0
    cmp r1, r0
    beq _021F6FF4
    add r0, r0, #1
    cmp r1, r0
    beq _021F705C
    b _021F7016
    add r0, r5, #0
    add r0, #0x88
    ldr r0, [r0]
    bl sub_02034818
    add r2, r0, #0
    ldr r0, [r5, #0x38]
    mov r1, #0
    bl BufferPlayersName
    add r0, r5, #0
    mov r1, #0x40
    bl ov01_021F71C4
    mov r0, #6
    str r0, [r5, #0x44]
    b _021F705C
    add r0, r5, #0
    add r0, #0x8c
    str r1, [r0]
    ldr r0, [r5, #0x34]
    bl sub_0202C6F4
    add r6, r0, #0
    mov r0, #4
    bl PlayerProfile_New
    add r1, r5, #0
    add r1, #0x8c
    add r4, r0, #0
    ldr r1, [r1]
    add r0, r6, #0
    bl sub_0202C254
    add r1, r0, #0
    add r0, r4, #0
    bl Save_Profile_PlayerName_Set
    ldr r0, [r5, #0x38]
    mov r1, #0
    add r2, r4, #0
    bl BufferPlayersName
    add r0, r4, #0
    bl Heap_Free
    add r0, r5, #0
    mov r1, #0x41
    bl ov01_021F71C4
    mov r0, #0xa
    str r0, [r5, #0x44]
    mov r0, #0
    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov01_021F7060(void) {
    /* Original at 0x021F7060 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, [r4, #0x40]
    lsl r0, r0, #0x18
    lsr r0, r0, #0x18
    bl TextPrinterCheckActive
    cmp r0, #0
    bne _021F707E
    add r0, r4, #0
    mov r1, #0
    add r0, #0x98
    strh r1, [r0]
    mov r0, #0xb
    str r0, [r4, #0x44]
    mov r0, #0
    pop {r4, pc}"
    );
    #endif
}

void ov01_021F7084(void) {
    /* Original at 0x021F7084 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r5, r0, #0
    ldr r0, [r5, #0x34]
    bl sub_0202C6F4
    add r4, r0, #0
    add r0, r5, #0
    bl ov01_021F6CA0
    cmp r0, #0
    bne _021F70FA
    add r0, r5, #0
    add r0, #0x90
    ldr r0, [r0]
    cmp r0, #0
    bne _021F70DA
    ldr r0, [r5, #0x34]
    bl Save_Frontier_GetStatic
    add r1, r5, #0
    add r1, #0x8c
    ldr r1, [r1]
    bl sub_020311AC
    add r1, r5, #0
    add r1, #0x8c
    ldr r1, [r1]
    add r0, r4, #0
    bl sub_0202C338
    mov r0, #0
    add r1, r5, #0
    str r0, [sp]
    add r1, #0x88
    ldr r0, [r5, #0x34]
    ldr r1, [r1]
    mov r2, #0x1f
    mov r3, #4
    bl sub_0203A280
    mov r0, #1
    str r0, [r5, #0x44]
    b _021F70FA
    add r0, r5, #0
    add r0, #0x88
    ldr r0, [r0]
    bl sub_02034818
    add r2, r0, #0
    ldr r0, [r5, #0x38]
    mov r1, #0
    bl BufferPlayersName
    add r0, r5, #0
    mov r1, #0x40
    bl ov01_021F71C4
    mov r0, #6
    str r0, [r5, #0x44]
    mov r0, #0
    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F7100(void) {
    /* Original at 0x021F7100 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r5, r0, #0
    bl TaskManager_GetEnvironment
    add r4, r0, #0
    add r0, r5, #0
    bl TaskManager_GetFieldSystem
    ldr r0, [r4, #0x44]
    cmp r0, #0xc
    bhi _021F71C0
    add r0, r0, r0
    add r0, pc
    ldrh r0, [r0, #6]
    lsl r0, r0, #0x10
    asr r0, r0, #0x10
    add pc, r0
    _021F7122: ; jump table
    add r0, r4, #0
    bl ov01_021F6CFC
    cmp r0, #0
    beq _021F71C0
    mov r0, #0xc
    str r0, [r4, #0x44]
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F6D78
    cmp r0, #0
    beq _021F71C0
    mov r0, #0xc
    str r0, [r4, #0x44]
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F6E44
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F6E68
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F6ED8
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F6EFC
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F6F44
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F6F68
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F6F94
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F6FDC
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F7060
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F7084
    b _021F71C0
    add r0, r4, #0
    bl ov01_021F7268
    add r0, r4, #0
    bl Heap_Free
    bl sub_0203E30C
    mov r0, #1
    pop {r3, r4, r5, pc}
    mov r0, #0
    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F71C4(void) {
    /* Original at 0x021F71C4 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}
    add r4, r0, #0
    add r0, #0x10
    add r5, r1, #0
    bl WindowIsInUse
    cmp r0, #0
    beq _021F71DC
    add r0, r4, #0
    add r0, #0x10
    bl RemoveWindow
    ldr r0, [r4, #0x3c]
    ldr r2, [r4, #8]
    add r1, r5, #0
    bl ReadMsgDataIntoString
    ldr r0, [r4, #0x38]
    ldr r1, [r4, #0xc]
    ldr r2, [r4, #8]
    bl StringExpandPlaceholders
    ldr r0, [r4, #0x30]
    add r1, r4, #0
    ldr r0, [r0, #8]
    add r1, #0x10
    mov r2, #3
    bl sub_0205B514
    ldr r0, [r4, #0x30]
    ldr r0, [r0, #0xc]
    bl Save_PlayerData_GetOptionsAddr
    add r1, r0, #0
    add r0, r4, #0
    add r0, #0x10
    bl sub_0205B564
    ldr r0, [r4, #0x30]
    ldr r0, [r0, #0xc]
    bl Save_PlayerData_GetOptionsAddr
    add r2, r0, #0
    add r0, r4, #0
    ldr r1, [r4, #0xc]
    add r0, #0x10
    mov r3, #1
    bl sub_0205B5B4
    str r0, [r4, #0x40]
    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov01_021F722C(void) {
    /* Original at 0x021F722C */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    mov r1, #0
    mov r2, #0x9c
    add r4, r0, #0
    bl MI_CpuFill8
    mov r0, #4
    bl MessageFormat_New
    str r0, [r4, #0x38]
    ldr r2, _021F7264 ; =0x0000030B
    mov r0, #0
    mov r1, #0x1b
    mov r3, #4
    bl NewMsgDataFromNarc
    str r0, [r4, #0x3c]
    mov r0, #0x6e
    mov r1, #4
    bl String_New
    str r0, [r4, #0xc]
    mov r0, #0x6e
    mov r1, #4
    bl String_New
    str r0, [r4, #8]
    pop {r4, pc}
    _021F7264: .word 0x0000030B"
    );
    #endif
}

void ov01_021F7268(void) {
    /* Original at 0x021F7268 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}
    add r4, r0, #0
    ldr r0, [r4, #0x3c]
    bl DestroyMsgData
    ldr r0, [r4, #0x38]
    bl MessageFormat_Delete
    ldr r0, [r4, #0xc]
    bl String_Delete
    ldr r0, [r4, #8]
    bl String_Delete
    add r0, r4, #0
    add r0, #0x10
    bl WindowIsInUse
    cmp r0, #0
    beq _021F7298
    add r4, #0x10
    add r0, r4, #0
    bl RemoveWindow
    pop {r4, pc}"
    );
    #endif
}

void ov01_021F729C(void) {
    /* Original at 0x021F729C */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}
    add r6, r0, #0
    ldr r5, [r6, #0x10]
    mov r0, #0xb
    mov r1, #0x9c
    bl Heap_AllocAtEnd
    add r4, r0, #0
    bl ov01_021F722C
    str r6, [r4, #0x30]
    ldr r0, [r6, #0xc]
    str r0, [r4, #0x34]
    mov r0, #0
    str r0, [r4, #0x44]
    cmp r5, #0
    bne _021F72CA
    ldr r1, _021F72D8 ; =ov01_021F7100
    add r0, r6, #0
    add r2, r4, #0
    bl FieldSystem_CreateTask
    pop {r4, r5, r6, pc}
    ldr r1, _021F72D8 ; =ov01_021F7100
    add r0, r5, #0
    add r2, r4, #0
    bl TaskManager_Call
    pop {r4, r5, r6, pc}
    nop
    _021F72D8: .word ov01_021F7100"
    );
    #endif
}
