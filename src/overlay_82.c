/* Decompiled from asm/overlay_82.s */
#include "global.h"

void ov82_0223DD60(void) {
    // push {r4, r5, r6, lr}
    // add r4, r0, #0
    // add r6, r1, #0
    // ldr r0, _0223DE1C ; =FS_OVERLAY_ID(OVY_80)
    // mov r1, #2
    // bl HandleLoadOverlay
    // bl ov82_0223E9B0
    // mov r2, #2
    // mov r0, #3
    // mov r1, #0x69
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // mov r1, #0xa1
    // add r0, r4, #0
    // lsl r1, r1, #2
    // mov r2, #0x69
    // bl OverlayManager_CreateAndGetData
    // mov r2, #0xa1
    // mov r1, #0
    // lsl r2, r2, #2
    // add r5, r0, #0
    // bl memset
    // mov r0, #0x69
    // bl BgConfig_Alloc
    // str r0, [r5, #0x48]
    // add r0, r4, #0
    // str r4, [r5]
    // bl OverlayManager_GetArgs
    // add r4, r0, #0
    // add r0, r5, #0
    // ldr r1, [r4]
    // add r0, #0xa0
    // str r1, [r0]
    // ldrb r0, [r4, #4]
    // add r1, r4, #6
    // strb r0, [r5, #9]
    // mov r0, #0x21
    // lsl r0, r0, #4
    // str r1, [r5, r0]
    // add r0, r5, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl Save_PlayerData_GetOptionsAddr
    // add r1, r5, #0
    // add r1, #0x9c
    // str r0, [r1]
    // mov r1, #0x85
    // ldr r0, [r4, #0xc]
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // ldr r2, [r4, #8]
    // add r0, r1, #4
    // str r2, [r5, r0]
    // add r0, r1, #0
    // ldr r2, [r4, #0x14]
    // add r0, #8
    // str r2, [r5, r0]
    // ldrh r0, [r4, #0x18]
    // add r1, #0x68
    // add r0, r0, #1
    // strh r0, [r5, #0x1c]
    // ldrb r0, [r4, #5]
    // strb r0, [r5, #0xd]
    // mov r0, #0xff
    // strb r0, [r5, r1]
    // strb r0, [r5, #0x18]
    // mov r0, #0x75
    // strb r0, [r5, #0x1f]
    // add r0, r5, #0
    // bl ov82_0223E9E8
    // ldrb r0, [r5, #9]
    // bl ov80_0223792C
    // cmp r0, #1
    // bne _0223DE0E
    // add r0, r5, #0
    // bl sub_02096910
    // mov r0, #0
    // str r0, [r6]
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // _0223DE1C: .word FS_OVERLAY_ID(OVY_80)
    // TODO: decompile
}


void ov82_0223DE20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldrb r1, [r4, #0x18]
    // cmp r1, #0xff
    // beq _0223DE4A
    // ldr r1, [r5]
    // cmp r1, #2
    // bne _0223DE4A
    // ldrh r1, [r4, #0x10]
    // cmp r1, #0
    // bne _0223DE4A
    // bl ov82_0223F834
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl ov82_0223F2F8
    // ldr r0, [r5]
    // cmp r0, #6
    // bls _0223DE52
    // b _0223DF68
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223DE5E: ; jump table
    // add r0, r4, #0
    // bl ov82_0223E2A4
    // cmp r0, #1
    // bne _0223DE82
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0
    // bl ov82_0223F2F8
    // b _0223DE86
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov82_0223DFBC
    // cmp r0, #1
    // bne _0223DF68
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl ov82_0223F2F8
    // b _0223DF68
    // add r0, r4, #0
    // bl ov82_0223E2EC
    // cmp r0, #1
    // bne _0223DF68
    // ldrb r0, [r4, #0x17]
    // cmp r0, #1
    // bne _0223DEB8
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl ov82_0223F2F8
    // b _0223DF68
    // ldrb r0, [r4, #0xb]
    // cmp r0, #1
    // bne _0223DECC
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov82_0223F2F8
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #9]
    // bl ov80_0223792C
    // cmp r0, #1
    // bne _0223DEE2
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #4
    // bl ov82_0223F2F8
    // b _0223DF68
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #5
    // bl ov82_0223F2F8
    // b _0223DF68
    // add r0, r4, #0
    // bl ov82_0223E5D4
    // cmp r0, #1
    // bne _0223DF68
    // ldrb r0, [r4, #0x19]
    // cmp r0, #1
    // bne _0223DF0E
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl ov82_0223F2F8
    // b _0223DF68
    // ldrb r0, [r4, #9]
    // bl ov80_0223792C
    // cmp r0, #1
    // bne _0223DF24
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #4
    // bl ov82_0223F2F8
    // b _0223DF68
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #5
    // bl ov82_0223F2F8
    // b _0223DF68
    // add r0, r4, #0
    // bl ov82_0223E7E8
    // cmp r0, #1
    // bne _0223DF68
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #5
    // bl ov82_0223F2F8
    // b _0223DF68
    // add r0, r4, #0
    // bl ov82_0223E820
    // cmp r0, #1
    // bne _0223DF68
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov82_0223E888
    // cmp r0, #1
    // bne _0223DF68
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #4
    // bl ov82_0223F2F8
    // add r4, #0xa8
    // ldr r0, [r4]
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov82_0223DF74(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl OverlayManager_GetData
    // mov r1, #0x21
    // lsl r1, r1, #4
    // ldrb r2, [r0, #0xd]
    // ldr r1, [r0, r1]
    // strh r2, [r1]
    // bl ov82_0223E8C4
    // add r0, r4, #0
    // bl OverlayManager_FreeData
    // ldr r2, _0223DFB4 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x69
    // bl Heap_Destroy
    // ldr r0, _0223DFB8 ; =FS_OVERLAY_ID(OVY_80)
    // bl UnloadOverlayByID
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0223DFB4: .word 0x04000304
    // _0223DFB8: .word FS_OVERLAY_ID(OVY_80)
    // TODO: decompile
}


void ov82_0223DFBC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #3
    // bhi _0223E068
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223DFD4: ; jump table
    // ldrh r0, [r4, #0x12]
    // cmp r0, #0
    // bne _0223DFF6
    // ldrb r0, [r4, #9]
    // bl ov80_0223792C
    // cmp r0, #1
    // bne _0223DFF6
    // bl sub_02037BEC
    // mov r0, #0x70
    // bl sub_02037AC0
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E068
    // ldrh r0, [r4, #0x12]
    // cmp r0, #0
    // bne _0223E028
    // ldrb r0, [r4, #9]
    // bl ov80_0223792C
    // cmp r0, #1
    // bne _0223E028
    // mov r0, #0x70
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0223E068
    // bl sub_02037BEC
    // mov r0, #1
    // strh r0, [r4, #0x12]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E068
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E068
    // bl ov82_0223E070
    // add r0, r4, #0
    // bl ov82_0223E0B0
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r1, #1
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E068
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223E068
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov82_0223E070(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // mov r1, #0
    // str r1, [sp]
    // add r4, r0, #0
    // str r1, [sp, #4]
    // add r1, r4, #0
    // add r1, #0x6c
    // mov r2, #1
    // mov r3, #2
    // bl ov82_0223F040
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0x6c
    // bl ov82_0223F134
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r2, #0
    // add r0, r4, #0
    // add r4, #0x5c
    // str r2, [sp, #8]
    // add r1, r4, #0
    // add r3, r2, #0
    // str r2, [sp, #0xc]
    // bl ov82_0223EFCC
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223E0B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // add r0, #0x7c
    // bl GetWindowX
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // add r0, #0x7c
    // bl GetWindowY
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // add r0, r5, #0
    // add r0, #0x7c
    // bl GetWindowWidth
    // add r0, r0, #2
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // add r0, r5, #0
    // add r0, #0x7c
    // bl GetWindowHeight
    // add r0, r0, #2
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r5, #0
    // add r0, #0x7c
    // bl GetWindowBgId
    // str r0, [sp, #0x14]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0xf
    // mov r2, #0
    // str r0, [sp, #8]
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x7c
    // add r3, r2, #0
    // str r2, [sp, #0xc]
    // bl ov82_0223F1AC
    // add r0, r5, #0
    // mov r1, #4
    // bl ov82_0223EECC
    // str r6, [sp]
    // str r4, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, #0x48]
    // ldr r1, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // add r3, r7, #0
    // bl ov82_0223E140
    // ldr r0, [r5, #0x48]
    // ldr r1, [sp, #0x14]
    // bl ScheduleBgTilemapBufferTransfer
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223E140(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // str r1, [sp, #0x14]
    // str r2, [sp, #0x18]
    // ldr r5, [sp, #0x4c]
    // add r6, r3, #0
    // str r6, [sp]
    // mov r2, #1
    // str r2, [sp, #4]
    // str r2, [sp, #8]
    // lsl r2, r5, #0x18
    // lsr r2, r2, #0x18
    // str r2, [sp, #0xc]
    // add r2, sp, #0x30
    // ldrh r2, [r2, #0x18]
    // ldr r3, [sp, #0x18]
    // str r0, [sp, #0x10]
    // bl FillBgTilemapRect
    // add r1, sp, #0x30
    // ldrh r4, [r1, #0x18]
    // ldrb r7, [r1, #0x10]
    // ldr r0, [sp, #0x18]
    // add r2, r4, #2
    // add r0, r0, r7
    // sub r0, r0, #1
    // str r0, [sp, #0x20]
    // ldr r3, [sp, #0x20]
    // lsl r2, r2, #0x10
    // lsl r3, r3, #0x18
    // str r6, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // add r0, sp, #0x30
    // ldrb r0, [r0, #0x14]
    // add r2, r4, #6
    // lsl r2, r2, #0x10
    // str r0, [sp, #0x28]
    // add r0, r6, r0
    // sub r0, r0, #1
    // str r0, [sp, #0x24]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // lsr r2, r2, #0x10
    // bl FillBgTilemapRect
    // ldr r0, [sp, #0x24]
    // add r2, r4, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x20]
    // add r2, #8
    // lsl r2, r2, #0x10
    // lsl r3, r3, #0x18
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // sub r0, r7, #2
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r2, r4, #1
    // add r7, r0, #1
    // ldr r0, [sp, #0x1c]
    // lsl r2, r2, #0x10
    // lsl r0, r0, #0x18
    // lsl r3, r7, #0x18
    // str r6, [sp]
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r0, [sp, #0x24]
    // add r2, r4, #7
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // lsl r2, r2, #0x10
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // lsl r3, r7, #0x18
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // ldr r0, [sp, #0x28]
    // add r6, r6, #1
    // sub r7, r0, #2
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // add r2, r4, #3
    // lsl r2, r2, #0x10
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // ldr r3, [sp, #0x18]
    // lsr r2, r2, #0x10
    // bl FillBgTilemapRect
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x20]
    // add r2, r4, #5
    // lsl r2, r2, #0x10
    // lsl r3, r3, #0x18
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    // lsr r2, r2, #0x10
    // lsr r3, r3, #0x18
    // bl FillBgTilemapRect
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223E2A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #8]
    // cmp r0, #0
    // bne _0223E2E8
    // ldr r0, [r4, #4]
    // bl OverlayManager_Run
    // cmp r0, #1
    // bne _0223E2E8
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // ldrb r1, [r0, #0x14]
    // mov r0, #0x83
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4, #4]
    // add r0, r4, #0
    // bl ov82_0223E974
    // mov r0, #0
    // strh r0, [r4, #0x10]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223E2EC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #7
    // bhi _0223E33A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E304: ; jump table
    // mov r0, #0
    // strb r0, [r4, #0xb]
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223E5B6
    // ldr r1, _0223E5BC ; =gSystem
    // ldr r1, [r1, #0x48]
    // bl ov82_0223F300
    // add r0, r4, #0
    // bl ov82_0223F53C
    // cmp r0, #0
    // bne _0223E33C
    // add r0, r4, #0
    // bl ov82_0223F488
    // cmp r0, #0
    // bne _0223E33C
    // b _0223E5B6
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223E36E
    // ldr r0, _0223E5C0 ; =0x000005DD
    // bl PlaySE
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #1
    // strh r0, [r4, #0x10]
    // mov r0, #7
    // strb r0, [r4, #8]
    // b _0223E5B6
    // add r0, r4, #0
    // bl ov82_0223F6E4
    // cmp r0, #1
    // ldrb r0, [r4, #0xd]
    // bne _0223E38E
    // bl ov80_02237920
    // cmp r0, #9
    // beq _0223E3C2
    // ldr r0, _0223E5C4 ; =0x000005F3
    // bl PlaySE
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // bl ov82_0223F6C4
    // mov r1, #0x86
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // bl sub_02030BD0
    // cmp r0, #0xa
    // blo _0223E3AC
    // ldr r0, _0223E5C4 ; =0x000005F3
    // bl PlaySE
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #9
    // bne _0223E3C2
    // ldr r0, _0223E5C4 ; =0x000005F3
    // bl PlaySE
    // add sp, #0x18
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223E5C0 ; =0x000005DD
    // bl PlaySE
    // ldrb r0, [r4, #9]
    // bl ov80_0223792C
    // cmp r0, #0
    // bne _0223E3E4
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4, #0x48]
    // mov r2, #1
    // bl ov82_0223F5E0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0
    // strh r0, [r4, #0x14]
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223E5B6
    // mov r0, #0x14
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, #0x14]
    // ldrsh r0, [r4, r0]
    // neg r0, r0
    // bl ov82_0223F948
    // mov r0, #0x14
    // ldrsh r0, [r4, r0]
    // cmp r0, #8
    // bne _0223E45C
    // ldrb r0, [r4, #9]
    // bl ov80_0223792C
    // cmp r0, #0
    // bne _0223E41C
    // add r0, r4, #0
    // bl ov82_0223F84C
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0223E5B6
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0x4c
    // bl ov82_0223FD78
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // bl ov82_0223EF7C
    // strb r0, [r4, #0xa]
    // ldrb r0, [r4, #0xd]
    // add sp, #0x18
    // strb r0, [r4, #0x1a]
    // mov r0, #1
    // strb r0, [r4, #0x17]
    // pop {r3, r4, r5, pc}
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl ov82_0223FE18
    // cmp r0, #0
    // beq _0223E45C
    // cmp r0, #1
    // beq _0223E45E
    // cmp r0, #2
    // beq _0223E49E
    // b _0223E5B6
    // add r0, r4, #0
    // bl ov82_0223F834
    // add r0, r4, #0
    // bl ov82_0223F6CC
    // cmp r0, #1
    // bne _0223E482
    // add r0, r4, #0
    // bl ov82_0223F6E4
    // cmp r0, #0
    // bne _0223E482
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0x1f]
    // mov r0, #5
    // strb r0, [r4, #8]
    // b _0223E5B6
    // ldr r0, _0223E5C8 ; =0x000005DC
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0223E5CC ; =0x00000623
    // bl PlaySE
    // ldrb r0, [r4, #0x1f]
    // cmp r0, #0x75
    // beq _0223E498
    // strb r0, [r4, #0xd]
    // add sp, #0x18
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov82_0223F834
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223E5B6
    // mov r0, #0x14
    // ldrsh r1, [r4, r0]
    // sub r1, r1, #1
    // strh r1, [r4, #0x14]
    // ldrsh r0, [r4, r0]
    // neg r0, r0
    // bl ov82_0223F948
    // mov r0, #0x14
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // bgt _0223E5B6
    // add r0, r4, #0
    // bl ov82_0223F8E4
    // ldrb r0, [r4, #0x1e]
    // cmp r0, #1
    // bne _0223E4D4
    // mov r0, #0
    // strb r0, [r4, #8]
    // b _0223E5B6
    // cmp r0, #0
    // bne _0223E4DE
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223E5B6
    // bl GF_AssertFail
    // b _0223E5B6
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0x4c
    // bl ov82_0223FD78
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl Save_PlayerData_GetOptionsAddr
    // bl Options_GetTextFrameDelay
    // mov r3, #1
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r1, r4, #0
    // str r3, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0xf
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r0, r4, #0
    // add r1, #0x4c
    // mov r2, #0x20
    // bl ov82_0223EF1C
    // strb r0, [r4, #0xa]
    // add r0, r4, #0
    // add r0, #0x4c
    // bl CopyWindowToVram
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _0223E5B6
    // ldrb r0, [r4, #0xa]
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _0223E5B6
    // mov r0, #1
    // strb r0, [r4, #0x1e]
    // add r0, r4, #0
    // bl ov82_0223F90C
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov82_0223FCFC
    // ldr r0, [r4, #0x48]
    // mov r1, #0x13
    // mov r2, #0
    // bl ov82_0223F5E0
    // ldr r1, [r4, #0x48]
    // add r0, r4, #0
    // bl ov82_0223F580
    // mov r0, #0x13
    // strb r0, [r4, #0xd]
    // add r0, r4, #0
    // bl ov82_0223F558
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov82_0223F570
    // add r2, r0, #0
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // bl ov82_0223FCBC
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223E5B6
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223E5B6
    // add r0, r4, #0
    // bl ov82_0223F224
    // add r0, r4, #0
    // bl ov82_0223E8C4
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r0, _0223E5D0 ; =gOverlayTemplate_PokemonSummary
    // ldr r1, [r1]
    // mov r2, #0x69
    // bl OverlayManager_New
    // str r0, [r4, #4]
    // mov r0, #1
    // add sp, #0x18
    // strb r0, [r4, #0xb]
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // _0223E5BC: .word gSystem
    // _0223E5C0: .word 0x000005DD
    // _0223E5C4: .word 0x000005F3
    // _0223E5C8: .word 0x000005DC
    // _0223E5CC: .word 0x00000623
    // _0223E5D0: .word gOverlayTemplate_PokemonSummary
    // TODO: decompile
}


void ov82_0223E5D4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #9
    // bhi _0223E632
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E5EA: ; jump table
    // ldrb r0, [r4, #0x1a]
    // bl ov82_0223F6C4
    // add r2, r0, #0
    // add r0, r4, #0
    // mov r1, #5
    // bl ov82_0223F6E8
    // cmp r0, #1
    // bne _0223E632
    // mov r0, #0
    // strb r0, [r4, #0x1b]
    // strb r0, [r4, #0x1a]
    // strb r0, [r4, #0x17]
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223E7D6
    // ldrb r0, [r4, #0x1b]
    // cmp r0, #0
    // beq _0223E62C
    // sub r0, r0, #1
    // strb r0, [r4, #0x1b]
    // b _0223E7D6
    // ldrb r0, [r4, #0x16]
    // cmp r0, #2
    // bhs _0223E634
    // b _0223E7D6
    // mov r0, #0
    // strb r0, [r4, #0x16]
    // ldrb r0, [r4, #0x18]
    // cmp r0, #0x14
    // bhs _0223E652
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0223E64C
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0223E7D6
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0223E660
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r0, #0
    // bl ov82_0223F948
    // mov r1, #0
    // mov r0, #0x82
    // strh r1, [r4, #0x14]
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov82_0223FCB0
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0x4c
    // bl ov82_0223FD78
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl ov80_0222A7CC
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #1
    // bl ov82_0223EF7C
    // strb r0, [r4, #0xa]
    // mov r0, #0xa
    // mov r1, #0x9f
    // strb r0, [r4, #0x1b]
    // lsl r1, r1, #2
    // ldrb r1, [r4, r1]
    // ldr r0, [r4, #0x48]
    // mov r2, #2
    // bl ov82_0223F5E0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223E7D6
    // ldr r1, _0223E7DC ; =0x0000027D
    // ldrb r2, [r4, r1]
    // cmp r2, #0
    // beq _0223E73A
    // cmp r2, #1
    // bne _0223E6D8
    // sub r0, r1, #1
    // ldrb r0, [r4, r0]
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // pop {r4, pc}
    // bl ov82_0223F90C
    // mov r1, #0x9f
    // lsl r1, r1, #2
    // ldrb r1, [r4, r1]
    // ldr r0, [r4, #0x48]
    // mov r2, #0
    // bl ov82_0223F5E0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0x9f
    // mov r2, #0xff
    // lsl r0, r0, #2
    // strb r2, [r4, r0]
    // mov r1, #0
    // add r0, r0, #1
    // strb r1, [r4, r0]
    // strb r2, [r4, #0x18]
    // mov r0, #1
    // strb r0, [r4, #0x19]
    // pop {r4, pc}
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4, #0x48]
    // mov r2, #1
    // bl ov82_0223F5E0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // add r0, r4, #0
    // bl ov82_0223F84C
    // mov r0, #5
    // strb r0, [r4, #8]
    // b _0223E7D6
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl ov82_0223FE18
    // cmp r0, #0
    // beq _0223E7D6
    // cmp r0, #1
    // beq _0223E73C
    // cmp r0, #2
    // beq _0223E756
    // b _0223E7D6
    // ldr r0, _0223E7E0 ; =0x000005DC
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0223E7E4 ; =0x00000623
    // bl PlaySE
    // add r0, r4, #0
    // bl ov82_0223F834
    // mov r0, #6
    // strb r0, [r4, #8]
    // b _0223E7D6
    // add r0, r4, #0
    // bl ov82_0223F834
    // mov r0, #7
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r1, #6
    // mov r2, #1
    // bl ov82_0223F6E8
    // cmp r0, #1
    // bne _0223E7D6
    // mov r0, #1
    // pop {r4, pc}
    // mov r1, #0x14
    // ldrsh r2, [r4, r1]
    // cmp r2, #0
    // ble _0223E788
    // sub r0, r2, #1
    // strh r0, [r4, #0x14]
    // ldrsh r0, [r4, r1]
    // neg r0, r0
    // bl ov82_0223F948
    // b _0223E7D6
    // mov r1, #6
    // mov r2, #2
    // bl ov82_0223F6E8
    // cmp r0, #1
    // bne _0223E7D6
    // add r0, r4, #0
    // bl ov82_0223F8E4
    // mov r0, #0x9f
    // mov r1, #0xff
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // strb r1, [r4, #0x18]
    // mov r0, #1
    // strb r0, [r4, #0x19]
    // pop {r4, pc}
    // bl sub_02037BEC
    // mov r0, #0x68
    // bl sub_02037AC0
    // mov r0, #9
    // strb r0, [r4, #8]
    // b _0223E7D6
    // mov r0, #0x68
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0223E7D6
    // bl sub_02037BEC
    // mov r0, #0x69
    // bl sub_020379A0
    // mov r0, #0xff
    // strb r0, [r4, #0x18]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0223E7DC: .word 0x0000027D
    // _0223E7E0: .word 0x000005DC
    // _0223E7E4: .word 0x00000623
    // TODO: decompile
}


void ov82_0223E7E8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #8]
    // cmp r0, #0
    // beq _0223E7F8
    // cmp r0, #1
    // beq _0223E80A
    // b _0223E81C
    // bl sub_02037BEC
    // mov r0, #0x68
    // bl sub_02037AC0
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E81C
    // mov r0, #0x68
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0223E81C
    // bl sub_02037BEC
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223E820(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #0
    // beq _0223E836
    // cmp r1, #1
    // beq _0223E842
    // cmp r1, #2
    // beq _0223E872
    // b _0223E880
    // mov r0, #0xa
    // strb r0, [r4, #0x1b]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E880
    // ldrb r1, [r4, #0x1b]
    // sub r1, r1, #1
    // strb r1, [r4, #0x1b]
    // ldrb r1, [r4, #0x1b]
    // cmp r1, #0
    // bne _0223E880
    // bl ov82_0223F90C
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E880
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223E880
    // add sp, #0xc
    // mov r0, #1
    // pop {r3, r4, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov82_0223E888(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #0
    // beq _0223E898
    // cmp r1, #1
    // beq _0223E8BA
    // b _0223E8BE
    // bl ov82_0223F834
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov82_0223FCB0
    // add r0, r4, #0
    // add r0, #0x4c
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E8BE
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223E8C4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _0223E8D6
    // bl ov82_0223FC9C
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // beq _0223E8E4
    // bl ov82_0223FC9C
    // add r0, r6, #0
    // add r0, #0x8c
    // ldr r0, [r0]
    // bl ov82_0223FDC0
    // bl sub_0203A914
    // add r0, r6, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // mov r1, #2
    // bl PaletteData_FreeBuffers
    // add r0, r6, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // mov r1, #0
    // bl PaletteData_FreeBuffers
    // add r0, r6, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // bl PaletteData_Free
    // add r0, r6, #0
    // mov r1, #0
    // add r0, #0x94
    // str r1, [r0]
    // add r0, r6, #0
    // add r0, #0xa8
    // bl ov82_0223FBBC
    // ldr r0, [r6, #0x20]
    // bl DestroyMsgData
    // ldr r0, [r6, #0x24]
    // bl MessageFormat_Delete
    // ldr r0, [r6, #0x28]
    // bl String_Delete
    // ldr r0, [r6, #0x2c]
    // bl String_Delete
    // add r0, r6, #0
    // add r0, #0x98
    // ldr r0, [r0]
    // bl MessagePrinter_Delete
    // mov r4, #0
    // add r5, r6, #0
    // ldr r0, [r5, #0x30]
    // bl String_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #2
    // blt _0223E94A
    // add r0, r6, #0
    // add r0, #0x4c
    // bl ov82_0223FD5C
    // ldr r0, [r6, #0x48]
    // bl ov82_0223EBB8
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // bl NARC_Delete
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov82_0223E974(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov82_0223E9B0
    // mov r0, #0x69
    // bl BgConfig_Alloc
    // str r0, [r4, #0x48]
    // add r0, r4, #0
    // bl ov82_0223E9E8
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223E9AE
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #2
    // bl ov82_0223FCFC
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x80
    // mov r2, #0xa8
    // bl ov82_0223FCBC
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223E9B0(void) {
    // push {r3, lr}
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetHBlankIntrCB
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _0223E9E0 ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _0223E9E4 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // pop {r3, pc}
    // _0223E9E0: .word 0xFFFFE0FF
    // _0223E9E4: .word 0x04001000
    // TODO: decompile
}


void ov82_0223E9E8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0xb7
    // mov r1, #0x69
    // bl NARC_New
    // mov r1, #0x22
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov82_0223EB3C
    // add r0, r5, #0
    // bl ov82_0223EB9C
    // ldr r2, _0223EB2C ; =0x000001B9
    // mov r0, #1
    // mov r1, #0x1b
    // mov r3, #0x69
    // bl NewMsgDataFromNarc
    // str r0, [r5, #0x20]
    // mov r0, #0x69
    // bl MessageFormat_New
    // str r0, [r5, #0x24]
    // mov r0, #0x96
    // lsl r0, r0, #2
    // mov r1, #0x69
    // bl String_New
    // str r0, [r5, #0x28]
    // mov r0, #0x96
    // lsl r0, r0, #2
    // mov r1, #0x69
    // bl String_New
    // str r0, [r5, #0x2c]
    // mov r6, #0
    // add r4, r5, #0
    // mov r7, #0x20
    // add r0, r7, #0
    // mov r1, #0x69
    // bl String_New
    // str r0, [r4, #0x30]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #2
    // blt _0223EA3C
    // mov r1, #0x1a
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x69
    // bl LoadFontPal0
    // mov r1, #6
    // mov r0, #0
    // lsl r1, r1, #6
    // mov r2, #0x69
    // bl LoadFontPal1
    // mov r0, #4
    // mov r1, #0x40
    // mov r2, #0x69
    // bl LoadFontPal0
    // mov r0, #0xf
    // mov r1, #0xe
    // mov r2, #0
    // mov r3, #0x69
    // bl MessagePrinter_New
    // add r1, r5, #0
    // add r1, #0x98
    // str r0, [r1]
    // add r1, r5, #0
    // ldr r0, [r5, #0x48]
    // add r1, #0x4c
    // bl ov82_0223FD2C
    // ldr r1, [r5, #0x48]
    // add r0, r5, #0
    // bl ov82_0223F580
    // ldr r2, _0223EB30 ; =0x04000304
    // ldr r0, _0223EB34 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // bl GfGfx_BothDispOn
    // add r0, r5, #0
    // bl ov82_0223F558
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov82_0223F570
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0
    // add r0, #0xa8
    // mov r2, #1
    // add r3, r4, #0
    // str r1, [sp, #4]
    // bl ov82_0223FC48
    // mov r1, #0x81
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r3, #0xa0
    // mov r1, #1
    // str r3, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0xa8
    // add r2, r1, #0
    // bl ov82_0223FC48
    // mov r1, #0x82
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r1, #0xc
    // ldr r0, [r5, r1]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // add r1, r0, #0
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ov82_0223FD18
    // bl sub_02037474
    // cmp r0, #0
    // beq _0223EB12
    // mov r0, #1
    // mov r1, #0x10
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // bl sub_0203A880
    // mov r0, #0x69
    // bl ov82_0223FDB8
    // add r1, r5, #0
    // add r1, #0x8c
    // str r0, [r1]
    // ldr r0, _0223EB38 ; =ov82_0223EC0C
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223EB2C: .word 0x000001B9
    // _0223EB30: .word 0x04000304
    // _0223EB34: .word 0xFFFF7FFF
    // _0223EB38: .word ov82_0223EC0C
    // TODO: decompile
}


void ov82_0223EB3C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov82_0223EC48
    // ldr r0, [r4, #0x48]
    // bl ov82_0223EC68
    // add r0, r4, #0
    // bl ov82_0223ED94
    // mov r0, #0x69
    // bl PaletteData_Init
    // add r1, r4, #0
    // add r1, #0x94
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0x94
    // mov r1, #2
    // ldr r0, [r0]
    // lsl r2, r1, #8
    // mov r3, #0x69
    // bl PaletteData_AllocBuffers
    // add r0, r4, #0
    // add r0, #0x94
    // mov r2, #2
    // ldr r0, [r0]
    // mov r1, #0
    // lsl r2, r2, #8
    // mov r3, #0x69
    // bl PaletteData_AllocBuffers
    // add r0, r4, #0
    // mov r1, #3
    // bl ov82_0223EDF0
    // bl ov82_0223EE38
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // mov r1, #5
    // bl ov82_0223EE6C
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223EB9C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x85
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // add r4, #0xa8
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov82_0223F95C
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223EBB8(void) {
    // push {r4, lr}
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // add r4, r0, #0
    // ldr r1, [r2]
    // ldr r0, _0223EC08 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // mov r0, #0x1f
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x1f
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // mov r1, #3
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #1
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #0
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #5
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // mov r1, #4
    // bl FreeBgTilemapBuffer
    // add r0, r4, #0
    // bl Heap_Free
    // pop {r4, pc}
    // _0223EC08: .word 0xFFFF1FFF
    // TODO: decompile
}


void ov82_0223EC0C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _0223EC3E
    // add r0, r4, #0
    // add r0, #0x94
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0223EC24
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #0x48]
    // bl DoScheduledBgGpuUpdates
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // ldr r3, _0223EC40 ; =0x027E0000
    // ldr r1, _0223EC44 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _0223EC40: .word 0x027E0000
    // _0223EC44: .word 0x00003FF8
    // TODO: decompile
}


void ov82_0223EC48(void) {
    GfGfx_SetBanks(5);
}


void ov82_0223EC68(void) {
    // push {r4, r5, lr}
    // sub sp, #0x9c
    // ldr r5, _0223ED78 ; =ov82_0223FE28
    // add r3, sp, #0x8c
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _0223ED7C ; =ov82_0223FE54
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x69
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223ED80 ; =ov82_0223FE70
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x69
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223ED84 ; =ov82_0223FE8C
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223ED88 ; =ov82_0223FEA8
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // str r0, [r3]
    // add r0, r4, #0
    // mov r1, #5
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223ED8C ; =ov82_0223FE38
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r1, _0223ED90 ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #1
    // strh r2, [r1]
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x9c
    // pop {r4, r5, pc}
    // _0223ED78: .word ov82_0223FE28
    // _0223ED7C: .word ov82_0223FE54
    // _0223ED80: .word ov82_0223FE70
    // _0223ED84: .word ov82_0223FE8C
    // _0223ED88: .word ov82_0223FEA8
    // _0223ED8C: .word ov82_0223FE38
    // _0223ED90: .word 0x04000008
    // TODO: decompile
}


void ov82_0223ED94(void) {
    // push {r3, r4, r5, lr}
    // ldrb r0, [r0, #9]
    // bl ov80_0223792C
    // cmp r0, #0
    // beq _0223EDEA
    // mov r0, #1
    // lsl r0, r0, #0x1a
    // ldr r1, [r0]
    // ldr r3, _0223EDEC ; =0xFFFF1FFF
    // add r4, r0, #0
    // and r1, r3
    // str r1, [r0]
    // add r4, #0x48
    // ldrh r5, [r4]
    // mov r1, #0x3f
    // mov r2, #0x1f
    // bic r5, r1
    // orr r5, r2
    // strh r5, [r4]
    // add r4, r0, #0
    // add r4, #0x4a
    // ldrh r5, [r4]
    // bic r5, r1
    // orr r2, r5
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r4]
    // mov r2, #0xf
    // add r1, r0, #0
    // lsl r2, r2, #0xc
    // add r1, #0x40
    // strh r2, [r1]
    // add r1, r0, #0
    // mov r4, #0x10
    // add r1, #0x44
    // strh r4, [r1]
    // ldr r1, [r0]
    // add r2, r1, #0
    // and r2, r3
    // lsl r1, r4, #9
    // orr r1, r2
    // str r1, [r0]
    // pop {r3, r4, r5, pc}
    // _0223EDEC: .word 0xFFFF1FFF
    // TODO: decompile
}


void ov82_0223EDF0(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r4, r1, #0
    // mov r0, #0x69
    // str r0, [sp, #0xc]
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r2, [r5, #0x48]
    // mov r1, #0x17
    // add r3, r4, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x69
    // str r0, [sp, #0xc]
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r2, [r5, #0x48]
    // mov r1, #0x18
    // add r3, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov82_0223EE38(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r0, #0xb7
    // mov r1, #0x99
    // add r2, sp, #0
    // mov r3, #0x69
    // bl GfGfxLoader_GetPlttData
    // add r4, r0, #0
    // ldr r0, [sp]
    // mov r1, #0xc0
    // ldr r0, [r0, #0xc]
    // bl DC_FlushRange
    // ldr r0, [sp]
    // mov r1, #0
    // ldr r0, [r0, #0xc]
    // mov r2, #0xc0
    // bl GX_LoadBGPltt
    // add r0, r4, #0
    // bl Heap_Free
    // add sp, #4
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov82_0223EE6C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // add r4, r1, #0
    // mov r0, #0x69
    // str r0, [sp, #0xc]
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r2, [r5, #0x48]
    // mov r1, #0x81
    // add r3, r4, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x69
    // str r0, [sp, #0xc]
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r2, [r5, #0x48]
    // mov r1, #0x82
    // add r3, r4, #0
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0x20
    // str r0, [sp]
    // mov r0, #0x69
    // str r0, [sp, #4]
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0xbe
    // mov r2, #4
    // mov r3, #0
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov82_0223EECC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r5, r0, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x69
    // bl BG_ClearCharDataRange
    // mov r1, #1
    // str r1, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0x69
    // str r0, [sp, #0xc]
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r2, [r5, #0x48]
    // mov r1, #0x85
    // add r3, r4, #0
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r3, #0x20
    // str r3, [sp]
    // mov r0, #0x69
    // str r0, [sp, #4]
    // mov r0, #0x22
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0xc0
    // mov r2, #4
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov82_0223EF1C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r4, r1, #0
    // add r1, sp, #0x38
    // ldrb r1, [r1]
    // add r5, r0, #0
    // add r0, r4, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [r5, #0x20]
    // ldr r2, [r5, #0x2c]
    // add r1, r6, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [r5, #0x24]
    // ldr r1, [r5, #0x28]
    // ldr r2, [r5, #0x2c]
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x28]
    // add r2, sp, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // add r3, r7, #0
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // ldrb r1, [r0]
    // ldrb r0, [r2, #0x18]
    // ldrb r2, [r2, #0x1c]
    // lsl r0, r0, #0x18
    // lsl r2, r2, #0x18
    // lsr r0, r0, #8
    // lsr r2, r2, #0x10
    // orr r0, r2
    // orr r0, r1
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r1, sp, #0x3c
    // ldrb r1, [r1]
    // ldr r2, [r5, #0x28]
    // add r0, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223EF7C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x18
    // mov r3, #1
    // add r4, r1, #0
    // str r3, [sp]
    // mov r1, #0
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // mov r1, #2
    // str r1, [sp, #0xc]
    // mov r1, #0xf
    // str r1, [sp, #0x10]
    // add r5, r0, #0
    // add r1, r5, #0
    // str r2, [sp, #0x14]
    // add r1, #0x4c
    // add r2, r4, #0
    // bl ov82_0223EF1C
    // add r5, #0x4c
    // add r4, r0, #0
    // add r0, r5, #0
    // bl CopyWindowToVram
    // add r0, r4, #0
    // add sp, #0x18
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov82_0223EFB4(void) {
    BufferIntegerAsString(0, 1, 2);
}


void ov82_0223EFCC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r5, r1, #0
    // mov r1, #0x85
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xb3
    // add r2, sp, #0x10
    // bl GetMonData
    // add r1, sp, #0x30
    // ldrb r1, [r1, #0x18]
    // add r0, r5, #0
    // bl FillWindowPixelBuffer
    // mov r0, #0xb
    // mov r1, #0x69
    // bl String_New
    // add r1, sp, #0x10
    // add r6, r0, #0
    // bl CopyU16ArrayToString
    // str r4, [sp]
    // mov r4, #0
    // str r4, [sp, #4]
    // add r2, sp, #0x30
    // ldrb r0, [r2, #0x10]
    // ldrb r3, [r2, #0x14]
    // ldrb r1, [r2, #0x18]
    // lsl r0, r0, #0x18
    // lsl r3, r3, #0x18
    // lsr r0, r0, #8
    // lsr r3, r3, #0x10
    // orr r0, r3
    // orr r0, r1
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldrb r1, [r2, #0x1c]
    // add r0, r5, #0
    // add r2, r6, #0
    // add r3, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl CopyWindowToVram
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223F040(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // str r1, [sp, #0x10]
    // add r0, r1, #0
    // add r1, sp, #0x30
    // ldrb r1, [r1, #0x10]
    // add r4, r2, #0
    // add r6, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r2, _0223F108 ; =0x000002DF
    // mov r0, #1
    // mov r1, #0x1b
    // mov r3, #0x69
    // bl NewMsgDataFromNarc
    // str r0, [sp, #0x24]
    // mov r0, #0xb
    // mov r1, #0x69
    // bl String_New
    // add r5, r0, #0
    // mov r0, #0
    // lsl r2, r4, #0x18
    // lsr r3, r2, #8
    // lsl r2, r6, #0x18
    // lsr r2, r2, #0x10
    // str r0, [sp, #0x28]
    // str r0, [sp, #0x20]
    // mov r0, #0x10
    // add r1, sp, #0x30
    // str r0, [sp, #0x14]
    // ldrb r0, [r1, #0x10]
    // orr r2, r3
    // orr r0, r2
    // str r0, [sp, #0x1c]
    // ldrb r0, [r1, #0x14]
    // str r0, [sp, #0x18]
    // mov r4, #0
    // mov r6, #1
    // ldr r0, [sp, #0x20]
    // add r7, r4, r0
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F0D4
    // add r0, r5, #0
    // bl String_SetEmpty
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // bl ov80_02237920
    // add r1, r0, #0
    // ldr r0, [sp, #0x24]
    // add r2, r5, #0
    // bl ReadMsgDataIntoString
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x18]
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // add r2, r5, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // add r3, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r4, r4, #1
    // add r6, #0x40
    // cmp r4, #4
    // blt _0223F090
    // ldr r0, [sp, #0x20]
    // add r0, r0, #4
    // str r0, [sp, #0x20]
    // ldr r0, [sp, #0x14]
    // add r0, #0x24
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #5
    // blt _0223F08C
    // add r0, r5, #0
    // bl String_Delete
    // ldr r0, [sp, #0x24]
    // bl DestroyMsgData
    // ldr r0, [sp, #0x10]
    // bl CopyWindowToVram
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _0223F108: .word 0x000002DF
    // TODO: decompile
}


void ov82_0223F10C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // str r4, [sp]
    // str r3, [sp, #4]
    // ldr r1, [sp, #0x18]
    // add r0, #0x98
    // str r1, [sp, #8]
    // add r1, r2, #0
    // ldr r0, [r0]
    // mov r2, #2
    // mov r3, #0
    // bl PrintUIntOnWindow
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov82_0223F134(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // mov r0, #4
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r4, #0
    // mov r5, #0x12
    // ldr r0, [sp, #0xc]
    // add r7, r4, r0
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F18A
    // cmp r0, #9
    // beq _0223F18A
    // lsl r0, r7, #0x18
    // lsr r0, r0, #0x18
    // bl ov82_0223F6C4
    // mov r1, #0x86
    // lsl r1, r1, #2
    // ldr r1, [r6, r1]
    // bl sub_02030BD0
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r2, #0xa
    // bls _0223F17C
    // mov r2, #0xa
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // add r0, r6, #0
    // add r3, r5, #0
    // bl ov82_0223F10C
    // add r4, r4, #1
    // add r5, #0x40
    // cmp r4, #4
    // blt _0223F14A
    // ldr r0, [sp, #0xc]
    // add r0, r0, #4
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r0, #0x24
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // add r0, r0, #1
    // str r0, [sp, #0x10]
    // cmp r0, #5
    // blt _0223F146
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223F1AC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r1, #0
    // add r1, sp, #0x18
    // ldrb r1, [r1, #0x18]
    // add r0, r5, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r2, _0223F220 ; =0x000001B9
    // mov r0, #1
    // mov r1, #0x1b
    // mov r3, #0x69
    // bl NewMsgDataFromNarc
    // mov r1, #0x25
    // str r0, [sp, #0x10]
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // add r0, r5, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // str r4, [sp]
    // mov r4, #0
    // str r4, [sp, #4]
    // add r2, sp, #0x18
    // ldrb r0, [r2, #0x10]
    // ldrb r3, [r2, #0x14]
    // ldrb r1, [r2, #0x18]
    // lsl r0, r0, #0x18
    // lsl r3, r3, #0x18
    // lsr r0, r0, #8
    // lsr r3, r3, #0x10
    // orr r0, r3
    // orr r0, r1
    // str r0, [sp, #8]
    // str r4, [sp, #0xc]
    // ldrb r1, [r2, #0x1c]
    // add r0, r5, #0
    // add r2, r6, #0
    // add r3, r7, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, [sp, #0x10]
    // bl DestroyMsgData
    // add r0, r5, #0
    // bl CopyWindowToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223F220: .word 0x000001B9
    // TODO: decompile
}


void ov82_0223F224(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x69
    // mov r1, #0x3c
    // bl Heap_Alloc
    // add r1, r4, #0
    // add r1, #0xa4
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // mov r1, #0
    // mov r2, #0x3c
    // bl memset
    // mov r0, #0x85
    // add r1, r4, #0
    // lsl r0, r0, #2
    // add r1, #0xa4
    // ldr r2, [r4, r0]
    // ldr r1, [r1]
    // str r2, [r1]
    // add r2, r4, #0
    // add r2, #0xa4
    // ldr r2, [r2]
    // mov r1, #1
    // strb r1, [r2, #0x11]
    // add r2, r4, #0
    // add r2, #0x9c
    // ldr r3, [r2]
    // add r2, r4, #0
    // add r2, #0xa4
    // ldr r2, [r2]
    // str r3, [r2, #4]
    // add r2, r4, #0
    // add r2, #0xa4
    // ldr r2, [r2]
    // strb r1, [r2, #0x12]
    // ldr r0, [r4, r0]
    // bl Party_GetCount
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r1, [r1]
    // strb r0, [r1, #0x13]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // mov r1, #0
    // strb r1, [r0, #0x14]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // strh r1, [r0, #0x18]
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl SaveArray_IsNatDexEnabled
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r1, [r1]
    // str r0, [r1, #0x1c]
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl sub_02088288
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r1, [r1]
    // str r0, [r1, #0x2c]
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl Save_SpecialRibbons_Get
    // add r1, r4, #0
    // add r1, #0xa4
    // ldr r1, [r1]
    // str r0, [r1, #0x20]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // mov r1, #0
    // str r1, [r0, #0x34]
    // add r0, r4, #0
    // add r0, #0xa4
    // ldr r0, [r0]
    // ldr r1, _0223F2F4 ; =_0223FE20
    // bl sub_02089D40
    // add r0, r4, #0
    // add r0, #0xa0
    // ldr r0, [r0]
    // bl Save_PlayerData_GetProfile
    // add r4, #0xa4
    // add r1, r0, #0
    // ldr r0, [r4]
    // bl sub_0208AD34
    // pop {r4, pc}
    // _0223F2F4: .word _0223FE20
    // TODO: decompile
}


void ov82_0223F2F8(void) {
    ((u8*)r0)[8] = 0;
    *(u32*)r1 = r2;
}


void ov82_0223F300(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _0223F480 ; =gSystem
    // add r4, r0, #0
    // ldr r2, [r1, #0x48]
    // mov r1, #0x20
    // mov r0, #0
    // tst r1, r2
    // beq _0223F34A
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F31E
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4, #0xd]
    // mov r1, #0x1e
    // lsr r3, r0, #0x1f
    // lsl r2, r0, #0x1e
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // bne _0223F334
    // add r0, r0, #3
    // strb r0, [r4, #0xd]
    // b _0223F348
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F342
    // mov r0, #0x10
    // strb r0, [r4, #0xd]
    // b _0223F348
    // ldrb r0, [r4, #0xd]
    // sub r0, r0, #1
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // ldr r1, _0223F480 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0x10
    // tst r1, r2
    // beq _0223F390
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F362
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4, #0xd]
    // mov r1, #0x1e
    // lsr r3, r0, #0x1f
    // lsl r2, r0, #0x1e
    // sub r2, r2, r3
    // ror r2, r1
    // add r1, r3, r2
    // cmp r1, #3
    // bne _0223F37A
    // sub r0, r0, #3
    // strb r0, [r4, #0xd]
    // b _0223F38E
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F388
    // mov r0, #0x13
    // strb r0, [r4, #0xd]
    // b _0223F38E
    // ldrb r0, [r4, #0xd]
    // add r0, r0, #1
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // ldr r1, _0223F480 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0x40
    // tst r1, r2
    // beq _0223F3FC
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F3A8
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4, #0xd]
    // cmp r0, #4
    // bhs _0223F3B4
    // add r0, #0x10
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F3F4
    // ldrb r0, [r4, #0xc]
    // cmp r0, #0x10
    // bne _0223F3C8
    // mov r0, #0xd
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // cmp r0, #0x13
    // bne _0223F3D2
    // mov r0, #0xe
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // cmp r0, #0xd
    // beq _0223F3DA
    // cmp r0, #1
    // bne _0223F3E0
    // mov r0, #0xd
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // cmp r0, #0xe
    // beq _0223F3E8
    // cmp r0, #2
    // bne _0223F3EE
    // mov r0, #0xe
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // mov r0, #0xd
    // strb r0, [r4, #0xd]
    // b _0223F3FA
    // ldrb r0, [r4, #0xd]
    // sub r0, r0, #4
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // ldr r1, _0223F480 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #0x80
    // tst r1, r2
    // beq _0223F424
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // beq _0223F414
    // ldrb r0, [r4, #0xd]
    // strb r0, [r4, #0xc]
    // ldrb r0, [r4, #0xd]
    // cmp r0, #0x10
    // blo _0223F41E
    // sub r0, #0x10
    // b _0223F420
    // add r0, r0, #4
    // strb r0, [r4, #0xd]
    // mov r0, #1
    // cmp r0, #1
    // bne _0223F44A
    // ldr r0, _0223F484 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov82_0223F558
    // add r5, r0, #0
    // add r0, r4, #0
    // bl ov82_0223F570
    // add r2, r0, #0
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // bl ov82_0223FCBC
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F470
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #2
    // bl ov82_0223FCFC
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0x80
    // mov r2, #0xa8
    // bl ov82_0223FCBC
    // pop {r3, r4, r5, pc}
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov82_0223FCFC
    // pop {r3, r4, r5, pc}
    // nop
    // _0223F480: .word gSystem
    // _0223F484: .word 0x000005DC
    // TODO: decompile
}


void ov82_0223F488(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // ldr r0, _0223F538 ; =gSystem + 0x40
    // ldrh r1, [r0, #0x24]
    // cmp r1, #0
    // beq _0223F532
    // ldrh r4, [r0, #0x20]
    // ldrh r5, [r0, #0x22]
    // mov r7, #0
    // mov r3, #3
    // add r2, r3, #0
    // add r2, #0x23
    // mov r1, #0
    // mov r6, #1
    // add r0, r6, #0
    // add r0, #0x3f
    // cmp r6, r4
    // bgt _0223F522
    // cmp r4, r0
    // bgt _0223F522
    // cmp r3, r5
    // bgt _0223F522
    // cmp r5, r2
    // bgt _0223F522
    // lsl r0, r7, #2
    // add r1, r1, r0
    // ldr r0, [sp]
    // strb r1, [r0, #0xd]
    // bl ov82_0223F558
    // add r4, r0, #0
    // ldr r0, [sp]
    // bl ov82_0223F570
    // add r2, r0, #0
    // mov r1, #0x81
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // add r1, r4, #0
    // bl ov82_0223FCBC
    // ldr r0, [sp]
    // ldrb r0, [r0, #0xd]
    // bl ov80_02237920
    // cmp r0, #0xfe
    // bne _0223F508
    // mov r1, #0x81
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #2
    // bl ov82_0223FCFC
    // mov r1, #0x81
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #0x80
    // mov r2, #0xa8
    // bl ov82_0223FCBC
    // b _0223F516
    // mov r1, #0x81
    // ldr r0, [sp]
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // mov r1, #1
    // bl ov82_0223FCFC
    // ldr r1, [sp]
    // mov r0, #1
    // add r1, #0x90
    // strb r0, [r1]
    // str r1, [sp]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r1, r1, #1
    // add r6, #0x40
    // cmp r1, #4
    // blt _0223F4A4
    // add r7, r7, #1
    // add r3, #0x24
    // cmp r7, #5
    // blt _0223F49C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223F538: .word gSystem + 0x40
    // TODO: decompile
}


void ov82_0223F53C(void) {
    // ldr r1, _0223F554 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #1
    // tst r2, r1
    // beq _0223F550
    // mov r2, #0
    // add r0, #0x90
    // strb r2, [r0]
    // add r0, r1, #0
    // bx lr
    // mov r0, #0
    // bx lr
    // _0223F554: .word gSystem
    // TODO: decompile
}


void ov82_0223F558(void) {
    // ldrb r0, [r0, #0xd]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // lsl r0, r0, #6
    // add r0, #0x20
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // TODO: decompile
}


void ov82_0223F570(void) {
    // ldrb r0, [r0, #0xd]
    // lsr r1, r0, #2
    // mov r0, #0x24
    // mul r0, r1
    // add r0, #0x10
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // TODO: decompile
}


void ov82_0223F580(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // bl ov82_0223F6E4
    // cmp r0, #1
    // bne _0223F5A6
    // mov r4, #0
    // mov r6, #3
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // add r2, r6, #0
    // bl ov82_0223F5E0
    // add r4, r4, #1
    // cmp r4, #0x11
    // blt _0223F592
    // b _0223F5D6
    // mov r7, #0x86
    // mov r4, #0
    // lsl r7, r7, #2
    // lsl r0, r4, #0x18
    // ldr r1, [r6, r7]
    // lsr r0, r0, #0x18
    // bl sub_02030BD0
    // cmp r0, #0xa
    // blo _0223F5C6
    // lsl r1, r4, #0x18
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // mov r2, #3
    // bl ov82_0223F5E0
    // add r4, r4, #1
    // cmp r4, #0x11
    // blt _0223F5AC
    // add r0, r5, #0
    // mov r1, #0x13
    // mov r2, #3
    // bl ov82_0223F5E0
    // add r0, r5, #0
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223F5E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r7, r0, #0
    // add r4, r1, #0
    // add r5, r2, #0
    // bne _0223F5F0
    // mov r1, #0
    // b _0223F602
    // cmp r5, #1
    // bne _0223F5F8
    // mov r1, #5
    // b _0223F602
    // cmp r5, #2
    // bne _0223F600
    // mov r1, #4
    // b _0223F602
    // mov r1, #3
    // lsr r3, r4, #0x1f
    // lsl r2, r4, #0x1e
    // sub r2, r2, r3
    // mov r0, #0x1e
    // ror r2, r0
    // add r0, r3, r2
    // lsl r0, r0, #3
    // str r0, [sp, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // lsl r2, r4, #0x1d
    // mov ip, r0
    // sub r2, r2, r3
    // mov r0, #0x1d
    // ror r2, r0
    // add r6, r3, r2
    // cmp r6, #4
    // bge _0223F62A
    // mov r2, #5
    // b _0223F62C
    // mov r2, #4
    // cmp r4, #4
    // bhs _0223F634
    // mov r3, #0
    // b _0223F64E
    // cmp r4, #8
    // bhs _0223F63C
    // mov r3, #5
    // b _0223F64E
    // cmp r4, #0xc
    // bhs _0223F644
    // mov r3, #9
    // b _0223F64E
    // cmp r4, #0x10
    // bhs _0223F64C
    // mov r3, #0xe
    // b _0223F64E
    // mov r3, #0x12
    // mov r0, #8
    // str r0, [sp]
    // str r2, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r7, #0
    // mov r1, #3
    // mov r2, ip
    // bl BgTilemapRectChangePalette
    // cmp r5, #0
    // bne _0223F6C0
    // ldr r0, [sp, #0xc]
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r6, #4
    // bge _0223F672
    // mov r1, #2
    // b _0223F674
    // mov r1, #3
    // cmp r4, #4
    // bhs _0223F67C
    // mov r3, #2
    // b _0223F696
    // cmp r4, #8
    // bhs _0223F684
    // mov r3, #6
    // b _0223F696
    // cmp r4, #0xc
    // bhs _0223F68C
    // mov r3, #0xb
    // b _0223F696
    // cmp r4, #0x10
    // bhs _0223F694
    // mov r3, #0xf
    // b _0223F696
    // mov r3, #0x14
    // cmp r4, #9
    // bhs _0223F6AE
    // mov r0, #1
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r7, #0
    // mov r1, #3
    // bl BgTilemapRectChangePalette
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #1
    // str r0, [sp]
    // str r1, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // add r0, r7, #0
    // mov r1, #3
    // bl BgTilemapRectChangePalette
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223F6C4(void) {
    // cmp r0, #0x11
    // blo _0223F6CA
    // mov r0, #0x11
    // bx lr
    // TODO: decompile
}


void ov82_0223F6CC(void) {
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bne _0223F6E0
    // ldrh r0, [r0, #0x1c]
    // cmp r0, #0x32
    // beq _0223F6DC
    // cmp r0, #0xaa
    // bne _0223F6E0
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov82_0223F6E4(void) {
    // ldrb r0, [r0, #0x1e]
    // bx lr
    // TODO: decompile
}


void ov82_0223F6E8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldrb r0, [r5, #9]
    // add r4, r1, #0
    // add r7, r2, #0
    // bl ov80_0223792C
    // cmp r0, #0
    // bne _0223F6FE
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #4
    // beq _0223F70C
    // cmp r4, #5
    // beq _0223F718
    // cmp r4, #6
    // beq _0223F726
    // b _0223F732
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r6, #0x27
    // bl ov82_0223F74C
    // b _0223F732
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // mov r6, #0x28
    // bl ov82_0223F770
    // b _0223F732
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r7, #0
    // mov r6, #0x29
    // bl ov82_0223F808
    // mov r1, #0x89
    // lsl r1, r1, #2
    // add r0, r6, #0
    // add r1, r5, r1
    // mov r2, #0x2c
    // bl sub_02037030
    // cmp r0, #1
    // bne _0223F748
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223F74C(void) {
    Save_PlayerData_GetProfile(0x89);
}


void ov82_0223F764(void) {
    sub_0203769C();
}


void ov82_0223F770(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x89
    // lsl r0, r0, #2
    // strh r1, [r5, r0]
    // add r4, r2, #0
    // add r0, r0, #2
    // strh r4, [r5, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0223F790
    // ldrb r0, [r5, #0x18]
    // cmp r0, #0xff
    // bne _0223F790
    // strb r4, [r5, #0x18]
    // ldrb r1, [r5, #0x18]
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // strh r1, [r5, r0]
    // sub r0, #0x14
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Party_GetMonByIndex
    // mov r1, #0xa1
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0223F7B0 ; =0x0000022A
    // strh r0, [r5, r1]
    // pop {r3, r4, r5, pc}
    // _0223F7B0: .word 0x0000022A
    // TODO: decompile
}


void ov82_0223F7B4(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // add r6, r0, #0
    // ldrb r0, [r4, #0x16]
    // add r5, r2, #0
    // add r0, r0, #1
    // strb r0, [r4, #0x16]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _0223F804
    // ldrh r1, [r5, #2]
    // mov r0, #0x9f
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0223F7F6
    // ldrb r0, [r4, #0x18]
    // cmp r0, #0xff
    // beq _0223F7EA
    // mov r0, #0x9f
    // mov r1, #0
    // lsl r0, r0, #2
    // strb r1, [r4, r0]
    // b _0223F7FA
    // mov r0, #0x9f
    // lsl r0, r0, #2
    // ldrb r0, [r4, r0]
    // add r0, #0x14
    // strb r0, [r4, #0x18]
    // b _0223F7FA
    // ldrh r0, [r5, #4]
    // strb r0, [r4, #0x18]
    // mov r0, #0x87
    // lsl r0, r0, #2
    // ldrh r1, [r5, #6]
    // ldr r0, [r4, r0]
    // strh r1, [r0]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov82_0223F808(void) {
    // mov r3, #0x89
    // lsl r3, r3, #2
    // strh r1, [r0, r3]
    // add r1, r3, #2
    // strh r2, [r0, r1]
    // bx lr
    // TODO: decompile
}


void ov82_0223F814(void) {
    sub_0203769C();
}


void ov82_0223F834(void) {
    YesNoPrompt_Reset(0);
}


void ov82_0223F84C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov82_0223FCB0
    // add r0, r4, #0
    // add r0, #0x9c
    // ldr r0, [r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0x4c
    // bl ov82_0223FD78
    // ldrb r0, [r4, #0xd]
    // bl ov80_02237920
    // add r2, r0, #0
    // ldr r0, [r4, #0x24]
    // mov r1, #0
    // bl BufferTypeName
    // ldrb r0, [r4, #0xd]
    // bl ov82_0223F6C4
    // mov r1, #0x86
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // bl sub_02030BD0
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // cmp r2, #0xa
    // bls _0223F89C
    // mov r2, #0xa
    // add r0, r4, #0
    // mov r1, #1
    // bl ov82_0223EFB4
    // add r0, r4, #0
    // bl ov82_0223F6E4
    // cmp r0, #1
    // bne _0223F8B2
    // mov r1, #0x1f
    // b _0223F8B4
    // mov r1, #0x18
    // add r0, r4, #0
    // mov r2, #1
    // bl ov82_0223EF7C
    // strb r0, [r4, #0xa]
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov82_0223FCFC
    // add r2, r4, #0
    // add r0, r4, #0
    // add r2, #0x90
    // add r0, #0x8c
    // ldrb r2, [r2]
    // ldr r0, [r0]
    // ldr r1, [r4, #0x48]
    // bl ov82_0223FDC8
    // mov r0, #1
    // strb r0, [r4, #0xf]
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223F8E4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov82_0223F90C
    // ldrb r1, [r4, #0xd]
    // ldr r0, [r4, #0x48]
    // mov r2, #0
    // bl ov82_0223F5E0
    // ldr r0, [r4, #0x48]
    // mov r1, #3
    // bl ScheduleBgTilemapBufferTransfer
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov82_0223FCFC
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223F90C(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x82
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov82_0223FCB0
    // add r0, r4, #0
    // add r0, #0x4c
    // mov r1, #0
    // bl ClearFrameAndWindow2
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r2, #0
    // add r0, r4, #0
    // add r4, #0x5c
    // str r2, [sp, #8]
    // add r1, r4, #0
    // add r3, r2, #0
    // str r2, [sp, #0xc]
    // bl ov82_0223EFCC
    // add sp, #0x10
    // pop {r4, pc}
    // TODO: decompile
}


void ov82_0223F948(void) {
    // ldr r3, _0223F954 ; =G2x_SetBlendBrightness_
    // add r2, r0, #0
    // ldr r0, _0223F958 ; =0x04000050
    // mov r1, #0x1e
    // bx r3
    // nop
    // _0223F954: .word G2x_SetBlendBrightness_
    // _0223F958: .word 0x04000050
    // TODO: decompile
}


void ov82_0223F95C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // str r1, [sp, #0x14]
    // bl ov82_0223FC14
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x80
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x20
    // str r3, [sp, #0xc]
    // mov r2, #0x69
    // str r2, [sp, #0x10]
    // add r2, r0, #0
    // bl OamManager_Create
    // mov r0, #2
    // add r1, r5, #4
    // mov r2, #0x69
    // bl G2dRenderer_Init
    // ldr r4, _0223FB04 ; =ov82_0223FEEC
    // str r0, [r5]
    // mov r7, #0
    // add r6, r5, #0
    // ldrb r0, [r4]
    // add r1, r7, #0
    // mov r2, #0x69
    // bl Create2DGfxResObjMan
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // add r7, r7, #1
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r7, #4
    // blt _0223F996
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #1
    // str r3, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xc3
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0xc
    // bl AddCharResObjFromNarc
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x69
    // str r0, [sp, #0xc]
    // add r0, #0xc7
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x36
    // bl AddPlttResObjFromNarc
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xcb
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0xe
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x51
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xcf
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0xd
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0x14
    // mov r1, #0x69
    // bl NARC_New
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // bl Pokemon_GetIconNaix
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xc3
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x18]
    // mov r3, #0
    // bl AddCharResObjFromOpenNarc
    // mov r1, #0x53
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // bl sub_02074490
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0x69
    // str r0, [sp, #0xc]
    // add r0, #0xc7
    // ldr r0, [r5, r0]
    // mov r1, #0x14
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #0x15
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // bl sub_02074498
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xcb
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x18]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x55
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // bl sub_020744A4
    // add r2, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x69
    // str r0, [sp, #8]
    // add r0, #0xcf
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x18]
    // mov r3, #0
    // bl AddCellOrAnimResObjFromOpenNarc
    // mov r1, #0x56
    // lsl r1, r1, #2
    // add r7, r1, #0
    // add r6, r1, #0
    // str r0, [r5, r1]
    // mov r4, #0
    // sub r7, #0x1c
    // sub r6, #0x18
    // ldr r0, [r5, r7]
    // bl sub_0200ACF0
    // ldr r0, [r5, r6]
    // bl sub_0200AF94
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #2
    // blt _0223FAD4
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, [sp, #0x18]
    // bl NARC_Delete
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223FB04: .word ov82_0223FEEC
    // TODO: decompile
}


void ov82_0223FB08(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x80
    // add r5, r0, #0
    // mov r0, #0
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // add r4, r3, #0
    // str r0, [sp, #8]
    // mov r3, #0
    // str r3, [sp, #0xc]
    // mov r0, #1
    // str r0, [sp, #0x10]
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // add r6, r2, #0
    // ldr r2, [r5, r0]
    // str r2, [sp, #0x14]
    // add r2, r0, #4
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x18]
    // add r2, r0, #0
    // add r2, #8
    // ldr r2, [r5, r2]
    // add r0, #0xc
    // str r2, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // add r2, r1, #0
    // str r0, [sp, #0x20]
    // str r3, [sp, #0x24]
    // str r3, [sp, #0x28]
    // add r0, sp, #0x5c
    // add r3, r1, #0
    // bl CreateSpriteResourcesHeader
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    // strh r1, [r0, #0x20]
    // str r4, [sp, #0x50]
    // add r0, sp, #0x80
    // ldrb r0, [r0, #0x10]
    // cmp r0, #0
    // bne _0223FB7C
    // mov r0, #1
    // str r0, [sp, #0x54]
    // b _0223FB80
    // mov r0, #2
    // str r0, [sp, #0x54]
    // mov r0, #0x69
    // str r0, [sp, #0x58]
    // add r0, sp, #0x80
    // ldrb r0, [r0, #0x10]
    // cmp r0, #1
    // bne _0223FB96
    // mov r0, #3
    // ldr r1, [sp, #0x38]
    // lsl r0, r0, #0x12
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    // bl Sprite_CreateAffine
    // mov r1, #1
    // add r4, r0, #0
    // bl Sprite_SetAnimActiveFlag
    // mov r1, #1
    // add r0, r4, #0
    // lsl r1, r1, #0xc
    // bl Sprite_SetAnimSpeed
    // add r0, r4, #0
    // add r1, r6, #0
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r4, #0
    // add sp, #0x80
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov82_0223FBBC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r7, #5
    // add r5, r0, #0
    // mov r4, #0
    // lsl r7, r7, #6
    // lsl r0, r4, #4
    // add r6, r5, r0
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // ldr r0, [r6, r0]
    // bl sub_0200AEB0
    // ldr r0, [r6, r7]
    // bl sub_0200B0A8
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #2
    // blo _0223FBC6
    // mov r6, #0x4b
    // mov r4, #0
    // lsl r6, r6, #2
    // lsl r0, r4, #2
    // add r0, r5, r0
    // ldr r0, [r0, r6]
    // bl Destroy2DGfxResObjMan
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _0223FBEA
    // ldr r0, [r5]
    // bl SpriteList_Delete
    // bl OamManager_Free
    // bl ObjCharTransfer_Destroy
    // bl ObjPlttTransfer_Destroy
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223FC14(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _0223FC44 ; =ov82_0223FEF0
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // mov r1, #0x10
    // add r0, r2, #0
    // add r2, r1, #0
    // bl ObjCharTransfer_InitEx
    // mov r0, #4
    // mov r1, #0x69
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _0223FC44: .word ov82_0223FEF0
    // TODO: decompile
}


void ov82_0223FC48(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // add r7, r1, #0
    // mov r0, #0x69
    // mov r1, #0x14
    // str r2, [sp, #4]
    // add r5, r3, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r2, r4, #0
    // mov r1, #0x14
    // mov r0, #0
    // strb r0, [r2]
    // add r2, r2, #1
    // sub r1, r1, #1
    // bne _0223FC64
    // ldr r0, [sp, #0x2c]
    // mov r3, #0
    // str r0, [r4, #0xc]
    // ldr r2, [sp, #4]
    // str r3, [sp]
    // add r0, r6, #0
    // add r1, r7, #0
    // bl ov82_0223FB08
    // str r0, [r4, #0x10]
    // lsl r0, r5, #0xc
    // str r0, [sp, #8]
    // add r0, sp, #0x18
    // ldrh r0, [r0, #0x10]
    // add r1, sp, #8
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [r4, #0x10]
    // bl Sprite_SetMatrix
    // add r0, r4, #0
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


u32 ov82_0223FC9C(void) {
    Sprite_Delete(*((u32*)(r0 + 0x10)));
    Heap_Free(r4);
    return 0;
}


void ov82_0223FCB0(void) {
    Sprite_SetDrawFlag();
}


void ov82_0223FCBC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #0xc]
    // add r6, r2, #0
    // cmp r1, #0
    // beq _0223FCD4
    // ldrb r1, [r1]
    // ldr r0, [r5, #0x10]
    // bl Sprite_TryChangeAnimSeq
    // ldr r0, [r5, #0x10]
    // bl Sprite_GetMatrixPtr
    // add r3, r0, #0
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, r7, #0
    // str r0, [r2]
    // lsl r0, r4, #0xc
    // str r0, [sp]
    // lsl r0, r6, #0xc
    // str r0, [sp, #4]
    // ldr r0, [r5, #0x10]
    // bl Sprite_SetMatrix
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov82_0223FCFC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r1, #1
    // ldr r0, [r5, #0x10]
    // lsl r1, r1, #0xc
    // bl Sprite_SetAnimSpeed
    // ldr r0, [r5, #0x10]
    // add r1, r4, #0
    // bl Sprite_TryChangeAnimSeq
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov82_0223FD18(void) {
    Pokemon_GetIconPalette(r1);
    Sprite_SetPalOffsetRespectVramOffset(*((u32*)(r4 + 0x10)), r0);
}


void ov82_0223FD2C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // mov r4, #0
    // ldr r2, _0223FD58 ; =ov82_0223FF00
    // lsl r6, r4, #4
    // lsl r3, r4, #3
    // add r0, r7, #0
    // add r1, r5, r6
    // add r2, r2, r3
    // bl AddWindow
    // add r0, r5, r6
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #4
    // blo _0223FD34
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223FD58: .word ov82_0223FF00
    // TODO: decompile
}


void ov82_0223FD5C(void) {
    RemoveWindow(0);
}


void ov82_0223FD78(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r4, r0, #0
    // bl GetWindowBgId
    // add r1, r0, #0
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x69
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r2, _0223FDB4 ; =0x000003D9
    // mov r3, #0xa
    // bl LoadUserFrameGfx2
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r2, _0223FDB4 ; =0x000003D9
    // add r0, r4, #0
    // mov r1, #0
    // mov r3, #0xa
    // bl DrawFrameAndWindow2
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223FDB4: .word 0x000003D9
    // TODO: decompile
}


void ov82_0223FDB8(void) {
    YesNoPrompt_Create();
}


void ov82_0223FDC0(void) {
    YesNoPrompt_Destroy();
}


void ov82_0223FDC8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0x14
    // add r6, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #0x14
    // bl MI_CpuFill8
    // mov r0, #0x6d
    // mov r2, #0
    // str r0, [sp, #8]
    // mov r0, #0xe
    // str r0, [sp, #0xc]
    // str r5, [sp]
    // str r2, [sp, #4]
    // mov r1, #0x18
    // add r0, sp, #0
    // strb r1, [r0, #0x10]
    // mov r1, #0xa
    // strb r1, [r0, #0x11]
    // ldrb r1, [r0, #0x12]
    // mov r3, #0xf
    // bic r1, r3
    // mov r3, #0xf
    // and r3, r4
    // orr r1, r3
    // strb r1, [r0, #0x12]
    // ldrb r3, [r0, #0x12]
    // mov r1, #0xf0
    // bic r3, r1
    // strb r3, [r0, #0x12]
    // strb r2, [r0, #0x13]
    // add r0, r6, #0
    // add r1, sp, #0
    // bl YesNoPrompt_InitFromTemplate
    // add sp, #0x14
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov82_0223FE18(void) {
    YesNoPrompt_HandleInput();
}

