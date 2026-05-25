/* Decompiled from asm/overlay_81.s */
#include "global.h"

void ov81_0223DD60(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r6, r1, #0
    // ldr r0, _0223DE90 ; =FS_OVERLAY_ID(OVY_80)
    // mov r1, #2
    // bl HandleLoadOverlay
    // bl ov81_02240D2C
    // mov r0, #3
    // mov r1, #0x64
    // lsl r2, r0, #0x10
    // bl Heap_Create
    // ldr r1, _0223DE94 ; =0x0000048C
    // add r0, r5, #0
    // mov r2, #0x64
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _0223DE94 ; =0x0000048C
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r2, #2
    // mov r1, #0
    // ldr r0, _0223DE98 ; =ov81_02242BC8
    // str r2, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x64
    // add r3, r1, #0
    // bl GF_3DVramMan_Create
    // mov r1, #0x69
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x64
    // bl BgConfig_Alloc
    // str r0, [r4, #0x4c]
    // str r5, [r4]
    // add r0, r5, #0
    // bl OverlayManager_GetArgs
    // mov r3, #0x6f
    // mov r2, #0xf
    // ldr r1, [r0]
    // lsl r3, r3, #2
    // str r1, [r4, r3]
    // ldrb r1, [r0, #4]
    // lsl r2, r2, #6
    // strb r1, [r4, #9]
    // ldrb r1, [r0, #5]
    // strb r1, [r4, #0xa]
    // ldrb r1, [r0, #6]
    // strb r1, [r4, #0xb]
    // ldr r1, [r0, #8]
    // str r1, [r4, r2]
    // ldr r5, [r0, #0xc]
    // add r1, r2, #4
    // str r5, [r4, r1]
    // add r0, #0x10
    // add r2, #0x14
    // str r0, [r4, r2]
    // ldr r0, [r4, r3]
    // bl Save_PlayerData_GetOptionsAddr
    // mov r1, #0x6e
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #8
    // str r0, [r4, #0x14]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02240F08
    // cmp r0, #1
    // bne _0223DE10
    // mov r0, #6
    // strb r0, [r4, #0x12]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02243240
    // ldr r1, _0223DE9C ; =0x00000464
    // str r0, [r4, r1]
    // b _0223DE4C
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223DE34
    // mov r0, #2
    // strb r0, [r4, #0x12]
    // mov r0, #3
    // strb r0, [r4, #0x1a]
    // mov r0, #6
    // strb r0, [r4, #0x1b]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_022432DC
    // ldr r1, _0223DE9C ; =0x00000464
    // str r0, [r4, r1]
    // b _0223DE4C
    // mov r0, #3
    // strb r0, [r4, #0x12]
    // mov r0, #4
    // strb r0, [r4, #0x1a]
    // mov r0, #5
    // strb r0, [r4, #0x1b]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_022432AC
    // ldr r1, _0223DE9C ; =0x00000464
    // str r0, [r4, r1]
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223DE5A
    // mov r1, #2
    // b _0223DE5C
    // mov r1, #3
    // ldr r0, _0223DEA0 ; =0x0000047C
    // str r1, [r4, r0]
    // ldr r0, _0223DEA4 ; =0x0000046C
    // add r0, r4, r0
    // bl ov81_02241BB8
    // add r0, r4, #0
    // bl ov81_02240D64
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223DE84
    // add r0, r4, #0
    // bl sub_02096910
    // mov r0, #0
    // str r0, [r6]
    // mov r0, #1
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // nop
    // _0223DE90: .word FS_OVERLAY_ID(OVY_80)
    // _0223DE94: .word 0x0000048C
    // _0223DE98: .word ov81_02242BC8
    // _0223DE9C: .word 0x00000464
    // _0223DEA0: .word 0x0000047C
    // _0223DEA4: .word 0x0000046C
    // TODO: decompile
}




void ov81_0223DEA8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // ldr r1, _0223E1A0 ; =0x00000458
    // add r4, r0, #0
    // ldrh r1, [r4, r1]
    // cmp r1, #1
    // bne _0223DEF0
    // ldr r1, [r5]
    // cmp r1, #9
    // bhi _0223DEF0
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223DECC: ; jump table
    // ldrb r1, [r4, #0x13]
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x1f
    // bne _0223DEF0
    // add r1, r5, #0
    // mov r2, #0xb
    // bl ov81_022404AC
    // add r0, r4, #0
    // bl ov81_02242514
    // ldr r0, [r5]
    // cmp r0, #0xe
    // bhi _0223DF94
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223DF08: ; jump table
    // add r0, r4, #0
    // bl ov81_0223E318
    // cmp r0, #1
    // bne _0223DF94
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_0223EC88
    // cmp r0, #1
    // bne _0223DF52
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov81_022404AC
    // b _0223DF56
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov81_0223E520
    // cmp r0, #1
    // bne _0223DF94
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02240F08
    // cmp r0, #1
    // bne _0223DF78
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #6
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_02241144
    // add r0, r4, #0
    // bl ov81_0223ECE4
    // cmp r0, #1
    // beq _0223DF96
    // b _0223E218
    // ldrb r0, [r4, #0x13]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0223DFAC
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl ov81_022404AC
    // b _0223E218
    // ldrb r0, [r4, #9]
    // bl ov81_02240F18
    // ldrb r1, [r4, #0x11]
    // cmp r1, r0
    // bne _0223DFC4
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #4
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_02240F28
    // cmp r0, #1
    // bne _0223DFDA
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xd
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_02241144
    // add r0, r4, #0
    // bl ov81_0223F1A4
    // cmp r0, #1
    // bne _0223E0D6
    // ldrb r0, [r4, #9]
    // bl ov81_02240F18
    // ldrb r1, [r4, #0x11]
    // cmp r1, r0
    // bne _0223E00E
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xd
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #5
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_0223F314
    // cmp r0, #1
    // bne _0223E0D6
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #3
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_0223F38C
    // cmp r0, #1
    // bne _0223E0D6
    // ldrb r0, [r4, #0x13]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0223E050
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #2
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_02240F28
    // cmp r0, #1
    // bne _0223E06E
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02240F38
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #7
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xa
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_0223F6A8
    // cmp r0, #1
    // bne _0223E0D6
    // add r0, r4, #0
    // bl ov81_02240F28
    // cmp r0, #1
    // bne _0223E0A2
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02240F38
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #6
    // bl ov81_022404AC
    // b _0223E218
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223E0C0
    // ldrb r1, [r4, #0x13]
    // mov r0, #8
    // mov r2, #0xb
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xd
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_0223F770
    // cmp r0, #1
    // beq _0223E0D8
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_02240F28
    // cmp r0, #1
    // bne _0223E0F6
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02240F38
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #9
    // bl ov81_022404AC
    // b _0223E218
    // ldrb r0, [r4, #0x11]
    // cmp r0, #0
    // bne _0223E108
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xa
    // bl ov81_022404AC
    // b _0223E218
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223E11E
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xb
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xd
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_0223FBAC
    // cmp r0, #1
    // bne _0223E218
    // add r0, r4, #0
    // bl ov81_02240F28
    // cmp r0, #1
    // bne _0223E152
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02240F38
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #8
    // bl ov81_022404AC
    // b _0223E218
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223E170
    // ldrb r1, [r4, #0x13]
    // mov r0, #8
    // mov r2, #0xb
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xd
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_0223FC74
    // cmp r0, #1
    // bne _0223E218
    // ldrb r0, [r4, #0x11]
    // cmp r0, #0
    // bne _0223E1A4
    // add r0, r4, #0
    // bl ov81_0223E8BC
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #6
    // bl ov81_022404AC
    // b _0223E218
    // nop
    // _0223E1A0: .word 0x00000458
    // add r0, r4, #0
    // bl ov81_0223EA98
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #8
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_02240008
    // cmp r0, #1
    // bne _0223E218
    // ldr r0, _0223E230 ; =0x00000458
    // ldrh r0, [r4, r0]
    // cmp r0, #1
    // bne _0223E1D4
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xe
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xc
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_02240048
    // cmp r0, #1
    // bne _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xd
    // bl ov81_022404AC
    // b _0223E218
    // add r0, r4, #0
    // bl ov81_02240088
    // cmp r0, #1
    // bne _0223E218
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r4, #0
    // bl ov81_022400D0
    // cmp r0, #1
    // bne _0223E218
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #0xc
    // bl ov81_022404AC
    // mov r0, #0x71
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov81_02242C48
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // _0223E230: .word 0x00000458
    // TODO: decompile
}




void ov81_0223E234(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _0223E260
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PaletteData_ScheduleFadeTaskEndIfNoSelectedBuffers
    // ldr r0, _0223E308 ; =0x00000478
    // mov r1, #0xff
    // str r1, [r4, r0]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02240F08
    // cmp r0, #1
    // bne _0223E29A
    // ldrb r0, [r4, #9]
    // mov r7, #0
    // bl ov81_02240F18
    // cmp r0, #0
    // ble _0223E2CE
    // add r6, r4, #0
    // add r5, r7, #0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r1, [r6, r0]
    // add r0, #0xc
    // ldr r0, [r4, r0]
    // add r6, r6, #2
    // strh r1, [r0, r5]
    // ldrb r0, [r4, #9]
    // add r5, r5, #2
    // add r7, r7, #1
    // bl ov81_02240F18
    // cmp r7, r0
    // blt _0223E27C
    // b _0223E2CE
    // mov r7, #0xf2
    // lsl r7, r7, #2
    // mov r6, #0
    // add r0, r7, #0
    // add r3, r4, #0
    // add r5, r6, #0
    // add r0, #0xc
    // ldrh r2, [r3, r7]
    // ldr r1, [r4, r0]
    // add r6, r6, #1
    // strh r2, [r1, r5]
    // add r3, r3, #2
    // add r5, r5, #2
    // cmp r6, #2
    // blt _0223E2A8
    // ldrb r0, [r4, #0x13]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1f
    // bne _0223E2CE
    // mov r0, #0xf5
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // mov r2, #0xff
    // strh r2, [r1]
    // ldr r0, [r4, r0]
    // strh r2, [r0, #2]
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, _0223E30C ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl ov81_02241BC8
    // ldr r0, _0223E310 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl ov81_02243220
    // add r0, r4, #0
    // bl ov81_02240BB0
    // ldr r0, [sp]
    // bl OverlayManager_FreeData
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x64
    // bl Heap_Destroy
    // ldr r0, _0223E314 ; =FS_OVERLAY_ID(OVY_80)
    // bl UnloadOverlayByID
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223E308: .word 0x00000478
    // _0223E30C: .word 0x0000046C
    // _0223E310: .word 0x00000464
    // _0223E314: .word FS_OVERLAY_ID(OVY_80)
    // TODO: decompile
}




void ov81_0223E318(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #6
    // bhi _0223E3EE
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223E330: ; jump table
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223E352
    // bl sub_02037BEC
    // mov r0, #0xed
    // bl sub_02037AC0
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E508
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223E37A
    // mov r0, #0xed
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0223E3EE
    // bl sub_02037BEC
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E508
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E508
    // ldrb r0, [r4, #0x12]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223E3AA
    // mov r7, #0x36
    // add r5, r4, #0
    // lsl r7, r7, #4
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl ov81_02242F30
    // ldr r0, [r5, r7]
    // bl ov81_02242F60
    // ldrb r0, [r4, #0x12]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _0223E390
    // mov r3, #0x42
    // ldr r0, [r4, #0x4c]
    // mov r1, #6
    // mov r2, #0
    // lsl r3, r3, #2
    // bl BgSetPosTextAndCommit
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // mov r0, #0
    // mov r1, #1
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E508
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // bne _0223E3F0
    // b _0223E508
    // ldr r0, _0223E510 ; =0x00000611
    // bl PlaySE
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E508
    // bl ov81_022404B4
    // cmp r0, #1
    // bne _0223E508
    // ldr r0, _0223E510 ; =0x00000611
    // mov r1, #0
    // bl StopSE
    // ldr r0, _0223E514 ; =0x00000678
    // bl PlaySE
    // ldrb r0, [r4, #0x12]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223E438
    // mov r7, #0x36
    // add r5, r4, #0
    // lsl r7, r7, #4
    // ldr r0, [r5, r7]
    // mov r1, #4
    // bl ov81_02242F94
    // ldrb r0, [r4, #0x12]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _0223E426
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02240658
    // mov r0, #8
    // str r0, [r4, #0x14]
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E508
    // mov r0, #0xe
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl ov81_02242DD8
    // cmp r0, #1
    // beq _0223E508
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223E508
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // bne _0223E4E2
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02240F08
    // cmp r0, #1
    // bne _0223E4A8
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #6
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, _0223E518 ; =0x0000FFFF
    // mov r1, #0x10
    // str r0, [sp]
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r2, #0
    // mov r3, #1
    // bl Pokepic_StartPaletteFadeAll
    // b _0223E4E2
    // ldr r0, _0223E51C ; =0x0000047C
    // mov r6, #0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bls _0223E4CE
    // ldr r7, _0223E51C ; =0x0000047C
    // add r5, r4, #0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r0, [r4, r7]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blo _0223E4B6
    // ldr r0, _0223E518 ; =0x0000FFFF
    // mov r1, #0x10
    // str r0, [sp]
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r2, #0
    // mov r3, #1
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Pokepic_ResumePaletteFade
    // ldrb r0, [r4, #0x19]
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #0x19]
    // cmp r0, #2
    // blo _0223E508
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // add r0, r4, #0
    // bl ov81_02241398
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223E510: .word 0x00000611
    // _0223E514: .word 0x00000678
    // _0223E518: .word 0x0000FFFF
    // _0223E51C: .word 0x0000047C
    // TODO: decompile
}




void ov81_0223E520(void) {
    ov81_02240F08(0);
    ov81_0223E5B4(r4);
    ov81_0223E8BC(r4);
    ov80_02237254(*((u8*)(r4 + 9)));
    // add r1, #0x60
    // str r2, [sp]
    ov81_0224093C(r4, r4, 0, 0);
    GfGfx_EngineATogglePlanes(4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 1, 1, 0);
    // orr r0, r1
    *((u8*)(r4 + 0x13)) = 0x10;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1), *((u8*)(r4 + 0x13)));
}




void ov81_0223E5B4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // ldrb r0, [r5, #9]
    // bl ov80_02236DD4
    // str r0, [sp, #0x18]
    // add r0, r5, #0
    // mov r1, #0
    // bl ov81_02240F38
    // add r0, r5, #0
    // bl ov81_02241524
    // ldr r1, _0223E864 ; =0x00000464
    // add r2, sp, #0x28
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r3, sp, #0x24
    // bl ov81_02243228
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [sp, #0x28]
    // mov r2, #2
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov81_02242D18
    // mov r1, #0xe2
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r1, #0xdc
    // ldr r0, [r5, r1]
    // mov r1, #6
    // add r2, sp, #0x28
    // add r3, sp, #0x24
    // bl ov81_02243228
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [sp, #0x28]
    // mov r2, #3
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov81_02242D18
    // mov r1, #0xe3
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r5, #0
    // add r1, sp, #0x28
    // add r2, sp, #0x24
    // bl ov81_02241CA0
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, [sp, #0x28]
    // mov r1, #1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x24]
    // add r3, r2, #0
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov81_02242CBC
    // mov r1, #0x39
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov81_02241F50
    // add r0, r5, #0
    // bl ov81_02241FEC
    // add r0, r5, #0
    // bl ov81_022420B4
    // add r0, r5, #0
    // bl ov81_0224218C
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x50
    // str r0, [sp, #4]
    // mov r0, #0xc
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #4
    // add r3, r2, #0
    // bl ov81_02242D18
    // mov r1, #0xe5
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x50
    // str r0, [sp, #4]
    // mov r0, #0xc
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #5
    // add r3, r2, #0
    // bl ov81_02242D18
    // mov r2, #0xe6
    // lsl r2, r2, #2
    // add r1, r2, #0
    // str r0, [r5, r2]
    // add r1, #0x28
    // add r2, #0xd0
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #6
    // bl ov81_02242218
    // ldr r1, _0223E868 ; =0x00000468
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // mov r2, #6
    // bl ov81_02242300
    // ldr r0, _0223E86C ; =0x00000474
    // mov r1, #0
    // ldr r0, [r5, r0]
    // mov r2, #7
    // add r3, r1, #0
    // bl sub_020196E8
    // mov r2, #0
    // add r1, r5, #0
    // str r2, [sp]
    // add r0, r5, #0
    // add r1, #0x50
    // add r3, r2, #0
    // bl ov81_022408C4
    // ldrb r0, [r5, #0x11]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223E740
    // mov r7, #0x36
    // add r4, r5, #0
    // lsl r7, r7, #4
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov81_02242F48
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ov81_02242FB0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // mov r1, #1
    // lsl r0, r0, #2
    // add r0, r5, r0
    // ldr r0, [r0, r7]
    // bl ov81_02242F94
    // ldrb r0, [r5, #0x11]
    // add r6, r6, #1
    // add r4, r4, #2
    // cmp r6, r0
    // blt _0223E6FA
    // mov r0, #0x6e
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // bl ov81_02243028
    // ldrb r2, [r5, #0x11]
    // add r0, r5, #0
    // mov r1, #0
    // add r2, r2, #1
    // bl ov81_022408A0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov81_0224086C
    // strb r0, [r5, #0x10]
    // ldrb r0, [r5, #0x13]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0223E85A
    // add r0, r5, #0
    // bl ov81_02241D0C
    // str r0, [sp, #0x1c]
    // ldrb r0, [r5, #0x11]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223E79E
    // mov r7, #0x6b
    // add r4, r5, #0
    // lsl r7, r7, #2
    // ldr r0, [r4, r7]
    // mov r1, #6
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldrb r0, [r5, #0x11]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r0
    // blt _0223E78A
    // ldr r0, [sp, #0x1c]
    // mov r2, #0
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #6
    // bl Pokepic_SetAttr
    // ldr r2, _0223E868 ; =0x00000468
    // ldr r1, [sp, #0x1c]
    // ldr r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #0
    // bl ov81_02241E68
    // add r0, r5, #0
    // bl ov81_02241FEC
    // ldr r1, _0223E870 ; =0x0000047C
    // ldr r0, [sp, #0x1c]
    // ldr r1, [r5, r1]
    // add r2, sp, #0x28
    // add r3, sp, #0x24
    // bl ov81_02241C84
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x28]
    // ldr r2, [sp, #0x24]
    // bl ov81_02242D94
    // add r0, r5, #0
    // mov r1, #0xff
    // bl ov81_02240658
    // add r0, r5, #0
    // bl ov81_02241450
    // ldrb r0, [r5, #0x18]
    // cmp r0, #0
    // beq _0223E860
    // ldr r0, [sp, #0x18]
    // mov r4, #0
    // cmp r0, #0
    // ble _0223E860
    // add r7, r5, #0
    // add r6, r5, #0
    // add r7, #0x50
    // add r0, r4, #5
    // lsl r0, r0, #4
    // str r0, [sp, #0x20]
    // add r0, r7, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldrb r0, [r5, #0x18]
    // cmp r4, r0
    // bge _0223E844
    // mov r0, #0xf
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, _0223E874 ; =0x0000045A
    // ldr r1, [sp, #0x20]
    // ldrh r0, [r6, r0]
    // mov r2, #0
    // add r1, r7, r1
    // str r0, [sp, #0x10]
    // ldr r0, _0223E878 ; =0x0000045E
    // add r3, r2, #0
    // ldrh r0, [r6, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // bl ov81_02240AD8
    // ldr r0, [sp, #0x20]
    // add r0, r7, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x18]
    // add r4, r4, #1
    // add r6, r6, #2
    // cmp r4, r0
    // blt _0223E804
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov81_022414E0
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _0223E864: .word 0x00000464
    // _0223E868: .word 0x00000468
    // _0223E86C: .word 0x00000474
    // _0223E870: .word 0x0000047C
    // _0223E874: .word 0x0000045A
    // _0223E878: .word 0x0000045E
    // TODO: decompile
}




void ov81_0223E87C(void) {
    ov81_022412C4(r0, 0);
    // str r0, [r5, r1]
    // ldr r0, [r5, r7]
    ov81_02242EB8(1);
}




void ov81_0223E8B0(void) {
}




void ov81_0223E8BC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // mov r1, #0
    // add r5, r0, #0
    // bl ov81_02240F38
    // ldr r1, _0223EA88 ; =0x00000464
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // bl ov81_02243370
    // ldr r1, _0223EA88 ; =0x00000464
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov81_0224185C
    // ldr r1, _0223EA88 ; =0x00000464
    // add r2, sp, #0x10
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // add r3, sp, #0xc
    // bl ov81_02243228
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [sp, #0x10]
    // mov r2, #2
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov81_02242D18
    // mov r1, #0xe2
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r2, #0
    // lsr r0, r1, #1
    // str r2, [sp]
    // str r2, [sp, #4]
    // add r0, r5, r0
    // mov r1, #1
    // add r3, r2, #0
    // str r2, [sp, #8]
    // bl ov81_02242CBC
    // mov r1, #0x39
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov81_02241D38
    // ldr r0, _0223EA88 ; =0x00000464
    // mov r1, #4
    // ldr r0, [r5, r0]
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // bl ov81_02243228
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [sp, #0x10]
    // mov r2, #3
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl ov81_02242D18
    // mov r1, #0xe3
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov81_02241F50
    // add r0, r5, #0
    // mov r1, #0
    // bl ov81_02242058
    // add r0, r5, #0
    // bl ov81_022420B4
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x50
    // str r0, [sp, #4]
    // mov r0, #0xc
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #4
    // add r3, r2, #0
    // bl ov81_02242D18
    // mov r1, #0xe5
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x50
    // str r0, [sp, #4]
    // mov r0, #0xc
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #5
    // add r3, r2, #0
    // bl ov81_02242D18
    // mov r2, #0xe6
    // lsl r2, r2, #2
    // add r1, r2, #0
    // str r0, [r5, r2]
    // add r1, #0x28
    // add r2, #0xd0
    // ldr r1, [r5, r1]
    // ldr r2, [r5, r2]
    // add r0, r5, #0
    // mov r3, #4
    // bl ov81_02242218
    // mov r1, #0xf
    // lsl r1, r1, #6
    // ldr r1, [r5, r1]
    // add r0, r5, #0
    // bl ov81_022423D0
    // ldr r0, _0223EA8C ; =0x00000474
    // mov r1, #0
    // ldr r0, [r5, r0]
    // mov r2, #7
    // add r3, r1, #0
    // bl sub_020196E8
    // mov r2, #0
    // add r1, r5, #0
    // add r0, r5, #0
    // add r1, #0x50
    // add r3, r2, #0
    // str r2, [sp]
    // bl ov81_022408C4
    // mov r0, #0x6e
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r5, #0
    // add r0, #0xc0
    // bl ov81_02243028
    // add r0, r5, #0
    // mov r1, #9
    // bl ov81_0224086C
    // strb r0, [r5, #0x10]
    // ldrb r0, [r5, #0x13]
    // lsl r0, r0, #0x1e
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _0223EA70
    // ldr r0, _0223EA90 ; =0x0000047C
    // mov r6, #0
    // ldr r1, [r5, r0]
    // cmp r1, #0
    // bls _0223EA38
    // add r4, r5, #0
    // add r7, r0, #0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #6
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldr r1, [r5, r7]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r1
    // blo _0223EA20
    // ldr r0, _0223EA94 ; =0x00000468
    // add r2, sp, #0x10
    // ldr r0, [r5, r0]
    // add r3, sp, #0xc
    // bl ov81_02241C84
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0xc]
    // bl ov81_02242D94
    // add r0, r5, #0
    // mov r1, #0xff
    // bl ov81_02240658
    // add r0, r5, #0
    // bl ov81_0224174C
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242E08
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl ov81_022417B4
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242E08
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223EA88: .word 0x00000464
    // _0223EA8C: .word 0x00000474
    // _0223EA90: .word 0x0000047C
    // _0223EA94: .word 0x00000468
    // TODO: decompile
}




void ov81_0223EA98(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // ldr r1, _0223EBD8 ; =0x00000464
    // add r4, r0, #0
    // ldr r1, [r4, r1]
    // bl ov81_02243398
    // ldr r1, _0223EBD8 ; =0x00000464
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov81_02241A98
    // ldr r0, _0223EBD8 ; =0x00000464
    // mov r1, #0
    // ldr r0, [r4, r0]
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // bl ov81_02243228
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [sp, #0x10]
    // mov r2, #2
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov81_02242D18
    // mov r1, #0xe2
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r1, #0
    // add r0, #0xe0
    // add r1, #0xf4
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // bl ov81_02241C84
    // mov r2, #0
    // str r2, [sp]
    // ldr r0, [sp, #0x10]
    // mov r1, #1
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r3, r2, #0
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov81_02242CBC
    // mov r1, #0x39
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r1, #0xd4
    // ldr r0, [r4, r1]
    // mov r1, #6
    // add r2, sp, #0x10
    // add r3, sp, #0xc
    // bl ov81_02243228
    // mov r1, #0
    // str r1, [sp]
    // ldr r0, [sp, #0x10]
    // mov r2, #3
    // str r0, [sp, #4]
    // ldr r0, [sp, #0xc]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov81_02242D18
    // mov r1, #0xe3
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r0, r4, #0
    // bl ov81_02241F50
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_02242058
    // add r0, r4, #0
    // bl ov81_022420B4
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x50
    // str r0, [sp, #4]
    // mov r0, #0xc
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #4
    // add r3, r2, #0
    // bl ov81_02242D18
    // mov r1, #0xe5
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x50
    // str r0, [sp, #4]
    // mov r0, #0xc
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r1, #5
    // add r3, r2, #0
    // bl ov81_02242D18
    // mov r1, #0xe6
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // add r1, #0x2c
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0
    // mov r3, #4
    // bl ov81_02242218
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02242420
    // ldr r0, _0223EBDC ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // mov r2, #7
    // add r3, r1, #0
    // bl sub_020196E8
    // mov r2, #0
    // add r1, r4, #0
    // add r0, r4, #0
    // add r1, #0x50
    // add r3, r2, #0
    // str r2, [sp]
    // bl ov81_022408C4
    // ldr r0, _0223EBE0 ; =0x00000468
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov81_022419E0
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _0223EBD8: .word 0x00000464
    // _0223EBDC: .word 0x00000474
    // _0223EBE0: .word 0x00000468
    // TODO: decompile
}




void ov81_0223EBE4(void) {
    ov81_022412C4(r0, 0);
    // str r0, [r4, r1]
    // ldr r0, [r4, r7]
    ov81_02242EB8(1);
    // ldr r0, [r4, r0]
    ov81_02242F48((0x36 << 4));
    // ldr r0, [r4, r0]
    ov81_02242FB0((0x36 << 4), 0);
    // ldr r0, [r4, r0]
    ov81_02242F94((0x36 << 4), 0);
}




void ov81_0223EC44(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r1, #1
    // add r6, r0, #0
    // bl ov81_02241DDC
    // ldr r0, _0223EC84 ; =0x0000047C
    // mov r4, #0
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // bls _0223EC80
    // ldr r7, _0223EC84 ; =0x0000047C
    // add r5, r6, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r4, #0
    // mov r3, #1
    // bl ov81_02241E68
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // ldr r0, [r6, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, r0
    // blo _0223EC5C
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223EC84: .word 0x0000047C
    // TODO: decompile
}




void ov81_0223EC88(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #8]
    // cmp r0, #0
    // bne _0223ECDA
    // ldr r0, [r4, #4]
    // bl OverlayManager_Run
    // cmp r0, #1
    // bne _0223ECDA
    // mov r1, #7
    // lsl r1, r1, #6
    // ldr r0, [r4, r1]
    // ldrb r2, [r0, #0x14]
    // mov r0, #0xf6
    // lsl r0, r0, #2
    // str r2, [r4, r0]
    // ldr r2, [r4, r1]
    // add r0, #0x90
    // ldrb r2, [r2, #0x14]
    // str r2, [r4, r0]
    // ldr r0, [r4, r1]
    // bl Heap_Free
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4, #4]
    // add r0, r4, #0
    // bl ov81_02240CD4
    // ldrb r1, [r4, #0x13]
    // mov r0, #0x40
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // ldr r0, _0223ECE0 ; =0x00000478
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0223ECE0: .word 0x00000478
    // TODO: decompile
}




void ov81_0223ECE4(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #8
    // bhi _0223ED5A
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223ECFC: ; jump table
    // mov r0, #1
    // strb r0, [r4, #8]
    // ldrb r1, [r4, #0x13]
    // mov r0, #2
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // b _0223EF42
    // ldr r0, _0223EF48 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_HandleInput_NoHold
    // add r5, r0, #0
    // mov r0, #2
    // mvn r0, r0
    // cmp r5, r0
    // bhi _0223ED52
    // bhs _0223EDDA
    // cmp r5, #8
    // bhi _0223ED5A
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223ED40: ; jump table
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // beq _0223EE12
    // b _0223EF42
    // ldr r0, _0223EF4C ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0223EF50 ; =0x00000468
    // str r5, [r4, r0]
    // add r0, r4, #0
    // bl ov81_02241C0C
    // mov r2, #0xf
    // lsl r2, r2, #6
    // ldr r1, [r4, r2]
    // add r2, #0xa8
    // ldr r2, [r4, r2]
    // add r0, r4, #0
    // mov r3, #6
    // bl ov81_02242218
    // ldr r1, _0223EF50 ; =0x00000468
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // mov r2, #6
    // bl ov81_02242300
    // add r0, r4, #0
    // bl ov81_02241450
    // b _0223EF42
    // ldr r0, _0223EF4C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0xc
    // mov r3, #6
    // bl ov81_022425C4
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223EF42
    // ldr r0, _0223EF4C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x12
    // mov r2, #0xc
    // mov r3, #7
    // bl ov81_022425C4
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223EF42
    // ldr r0, _0223EF4C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0xf
    // mov r3, #8
    // bl ov81_022425C4
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223EF42
    // ldr r0, _0223EF4C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov81_02241C0C
    // ldr r0, _0223EF48 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // mov r1, #0xf
    // lsl r1, r1, #6
    // add r2, r0, #0
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r3, #6
    // bl ov81_02242218
    // ldr r0, _0223EF48 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #6
    // bl ov81_02242300
    // b _0223EF42
    // ldr r0, _0223EF48 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // cmp r0, #6
    // blo _0223EE30
    // ldr r0, _0223EF4C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov81_022414E0
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // ldrb r0, [r4, #0x11]
    // cmp r0, #0
    // bne _0223EE38
    // b _0223EF42
    // ldr r0, _0223EF4C ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // bl ov81_0223EF5C
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223EE58
    // add r0, r4, #0
    // mov r1, #8
    // mov r2, #0
    // bl ov81_02240FA4
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // bl ov81_022425EC
    // b _0223EF42
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223EF42
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _0223EE8C
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PaletteData_ScheduleFadeTaskEndIfNoSelectedBuffers
    // ldr r0, _0223EF54 ; =0x00000478
    // mov r1, #0xff
    // str r1, [r4, r0]
    // b _0223EF42
    // add r0, r4, #0
    // bl ov81_02240E78
    // add r0, r4, #0
    // bl ov81_02240BB0
    // mov r1, #7
    // lsl r1, r1, #6
    // ldr r0, _0223EF58 ; =gOverlayTemplate_PokemonSummary
    // ldr r1, [r4, r1]
    // mov r2, #0x64
    // bl OverlayManager_New
    // str r0, [r4, #4]
    // ldrb r1, [r4, #0x13]
    // mov r0, #2
    // add sp, #0xc
    // orr r0, r1
    // strb r0, [r4, #0x13]
    // mov r0, #1
    // pop {r4, r5, pc}
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _0223EF42
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223EF42
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223EF42
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldrb r1, [r4, #0x13]
    // mov r0, #0x40
    // orr r0, r1
    // strb r0, [r4, #0x13]
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0223EF42
    // bl ov81_022414E0
    // ldr r0, _0223EF50 ; =0x00000468
    // ldr r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov81_02242F40
    // cmp r0, #0
    // bne _0223EF18
    // add r0, r4, #0
    // bl ov81_0223F038
    // b _0223EF1E
    // add r0, r4, #0
    // bl ov81_0223F0BC
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223EF32
    // add r0, r4, #0
    // mov r1, #8
    // mov r2, #0
    // bl ov81_02240FA4
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // bl ov81_022414E0
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0223EF48: .word 0x00000464
    // _0223EF4C: .word 0x000005DC
    // _0223EF50: .word 0x00000468
    // _0223EF54: .word 0x00000478
    // _0223EF58: .word gOverlayTemplate_PokemonSummary
    // TODO: decompile
}




void ov81_0223EF5C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #0x11]
    // mov r2, #1
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #6
    // bl Pokepic_SetAttr
    // ldrb r0, [r4, #0x11]
    // add r1, r4, #0
    // add r1, #0x50
    // add r0, r0, #2
    // lsl r0, r0, #4
    // add r0, r1, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldrb r0, [r4, #0x11]
    // add r1, r4, #0
    // add r1, #0x50
    // add r0, r0, #2
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ScheduleWindowCopyToVram
    // ldrb r0, [r4, #0x11]
    // mov r1, #0
    // sub r0, r0, #1
    // strb r0, [r4, #0x11]
    // ldrb r2, [r4, #0x11]
    // add r0, r4, #0
    // add r2, r2, #1
    // bl ov81_022408A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // ldrb r0, [r4, #0x11]
    // lsl r0, r0, #1
    // add r1, r4, r0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r1, [r1, r0]
    // sub r0, #0x68
    // lsl r1, r1, #2
    // add r1, r4, r1
    // ldr r0, [r1, r0]
    // bl ov81_02242F54
    // ldrb r0, [r4, #0x11]
    // lsl r0, r0, #1
    // add r1, r4, r0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r1, [r1, r0]
    // sub r0, #0x68
    // lsl r1, r1, #2
    // add r1, r4, r1
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov81_02242FB0
    // ldrb r0, [r4, #0x11]
    // lsl r0, r0, #1
    // add r1, r4, r0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r1, [r1, r0]
    // sub r0, #0x68
    // lsl r1, r1, #2
    // add r1, r4, r1
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ov81_02242F94
    // ldrb r0, [r4, #0x11]
    // mov r2, #0
    // lsl r0, r0, #1
    // add r1, r4, r0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // strh r2, [r1, r0]
    // add r0, r4, #0
    // bl ov81_02241C0C
    // add r0, r4, #0
    // bl ov81_02241FEC
    // add r0, r4, #0
    // bl ov81_0224218C
    // ldr r0, _0223F034 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // add r1, r0, #0
    // add r0, r4, #0
    // mov r2, #6
    // bl ov81_02242300
    // pop {r4, pc}
    // nop
    // _0223F034: .word 0x00000464
    // TODO: decompile
}




void ov81_0223F038(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, _0223F0B8 ; =0x00000468
    // ldr r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov81_02242F48
    // ldr r0, _0223F0B8 ; =0x00000468
    // ldr r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ov81_02242FB0
    // ldr r0, _0223F0B8 ; =0x00000468
    // ldr r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov81_02242F94
    // ldrb r1, [r4, #0x11]
    // ldr r0, _0223F0B8 ; =0x00000468
    // ldr r2, [r4, r0]
    // lsl r1, r1, #1
    // add r1, r4, r1
    // sub r0, #0xa0
    // strh r2, [r1, r0]
    // ldrb r0, [r4, #0x11]
    // add r0, r0, #1
    // strb r0, [r4, #0x11]
    // ldrb r0, [r4, #9]
    // ldrb r5, [r4, #0x11]
    // bl ov81_02240F18
    // cmp r5, r0
    // beq _0223F0AA
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r5, #1
    // bl ov81_022408A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // add r0, r4, #0
    // bl ov81_02241FEC
    // add r0, r4, #0
    // bl ov81_0224218C
    // pop {r3, r4, r5, pc}
    // _0223F0B8: .word 0x00000468
    // TODO: decompile
}




void ov81_0223F0BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0223F1A0 ; =0x00000468
    // ldr r0, [r5, r0]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov81_02242F54
    // ldr r0, _0223F1A0 ; =0x00000468
    // ldr r0, [r5, r0]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov81_02242FB0
    // ldr r0, _0223F1A0 ; =0x00000468
    // ldr r0, [r5, r0]
    // lsl r0, r0, #2
    // add r1, r5, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ov81_02242F94
    // ldrb r0, [r5, #0x11]
    // cmp r0, #2
    // blo _0223F130
    // mov r2, #0xf2
    // lsl r2, r2, #2
    // add r0, r2, #0
    // add r0, #0xa0
    // ldrh r1, [r5, r2]
    // ldr r0, [r5, r0]
    // cmp r1, r0
    // bne _0223F130
    // add r0, r2, #2
    // ldrh r0, [r5, r0]
    // mov r1, #0
    // add r3, r1, #0
    // strh r0, [r5, r2]
    // ldrh r2, [r5, r2]
    // add r0, r5, #0
    // bl ov81_02241E68
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // mov r2, #0
    // bl Pokepic_SetAttr
    // ldrb r0, [r5, #0x11]
    // mov r2, #0
    // sub r0, r0, #1
    // strb r0, [r5, #0x11]
    // ldrb r0, [r5, #0x11]
    // lsl r0, r0, #1
    // add r1, r5, r0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // strh r2, [r1, r0]
    // ldrb r0, [r5, #9]
    // bl ov81_02240F18
    // add r7, r0, #0
    // mov r4, #0
    // cmp r7, #0
    // ble _0223F168
    // add r6, r5, #0
    // add r6, #0x50
    // add r0, r4, #2
    // lsl r0, r0, #4
    // add r0, r6, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r4, r4, #1
    // cmp r4, r7
    // blt _0223F156
    // ldrb r2, [r5, #0x11]
    // add r0, r5, #0
    // mov r1, #0
    // add r2, r2, #1
    // bl ov81_022408A0
    // add r0, r5, #0
    // mov r1, #0
    // bl ov81_0224086C
    // strb r0, [r5, #0x10]
    // add r0, r5, #0
    // bl ov81_02241C0C
    // add r0, r5, #0
    // bl ov81_02241FEC
    // add r0, r5, #0
    // bl ov81_0224218C
    // ldr r1, _0223F1A0 ; =0x00000468
    // add r0, r5, #0
    // ldr r1, [r5, r1]
    // mov r2, #6
    // bl ov81_02242300
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223F1A0: .word 0x00000468
    // TODO: decompile
}




void ov81_0223F1A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #9]
    // bl ov80_02236DD4
    // add r2, r0, #0
    // ldrb r0, [r4, #8]
    // cmp r0, #7
    // bhi _0223F254
    // add r1, r0, r0
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223F1C2: ; jump table
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F30C
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F30C
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F30C
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F30C
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_022408A0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // ldr r0, _0223F310 ; =0x0000046C
    // ldr r1, [r4, #0x4c]
    // ldr r0, [r4, r0]
    // bl ov81_02241BD0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_02242694
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F30C
    // ldr r0, _0223F310 ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _0223F256
    // cmp r0, #2
    // beq _0223F26E
    // b _0223F30C
    // ldr r0, _0223F310 ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02242694
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F30C
    // ldr r0, _0223F310 ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02242694
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // ldrb r0, [r4, #0x11]
    // mov r2, #0
    // sub r0, r0, #1
    // strb r0, [r4, #0x11]
    // ldrb r0, [r4, #0x11]
    // lsl r0, r0, #1
    // add r1, r4, r0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // strh r2, [r1, r0]
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223F2BE
    // add r0, r4, #0
    // mov r1, #8
    // mov r2, #0
    // bl ov81_02240FA4
    // mov r0, #1
    // pop {r4, pc}
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #0
    // bne _0223F2D0
    // mov r0, #1
    // pop {r4, pc}
    // add r0, r4, #0
    // mov r1, #8
    // mov r2, #0
    // bl ov81_02240FA4
    // cmp r0, #1
    // bne _0223F30C
    // add r0, r4, #0
    // mov r1, #2
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // bl sub_02037BEC
    // mov r0, #0xa4
    // bl sub_02037AC0
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F30C
    // mov r0, #0xa4
    // bl sub_02037B38
    // cmp r0, #1
    // bne _0223F30C
    // bl sub_02037BEC
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _0223F310: .word 0x0000046C
    // TODO: decompile
}




void ov81_0223F314(void) {
}




void ov81_0223F320(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #9]
    // bl ov80_02236DD4
    // ldr r0, _0223F388 ; =0x00000468
    // ldr r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov81_02242F54
    // ldr r0, _0223F388 ; =0x00000468
    // ldr r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl ov81_02242FB0
    // ldr r0, _0223F388 ; =0x00000468
    // ldr r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // mov r1, #0
    // bl ov81_02242F94
    // ldrb r2, [r4, #0x11]
    // add r0, r4, #0
    // mov r1, #0
    // add r2, r2, #1
    // bl ov81_022408A0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // add r0, r4, #0
    // bl ov81_02241FEC
    // add r0, r4, #0
    // bl ov81_0224218C
    // pop {r4, pc}
    // _0223F388: .word 0x00000468
    // TODO: decompile
}




void ov81_0223F38C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #9
    // bhi _0223F408
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223F3A4: ; jump table
    // mov r1, #0
    // bl ov81_02240F38
    // mov r0, #1
    // strb r0, [r4, #8]
    // ldrb r1, [r4, #0x13]
    // mov r0, #2
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // b _0223F666
    // ldr r0, _0223F66C ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_HandleInput_NoHold
    // add r5, r0, #0
    // mov r0, #2
    // mvn r0, r0
    // cmp r5, r0
    // bhi _0223F3FE
    // bhs _0223F4DC
    // cmp r5, #6
    // bhi _0223F408
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223F3F0: ; jump table
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bne _0223F408
    // b _0223F548
    // b _0223F666
    // ldr r0, _0223F670 ; =0x000005DC
    // bl PlaySE
    // ldr r2, _0223F674 ; =0x00000468
    // add r0, r4, #0
    // add r1, r2, #0
    // str r5, [r4, r2]
    // sub r1, #0xa8
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #4
    // bl ov81_02242218
    // add r0, r4, #0
    // bl ov81_02241D38
    // ldr r0, _0223F678 ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // mov r2, #7
    // add r3, r1, #0
    // bl sub_020196E8
    // add r0, r4, #0
    // bl ov81_0224174C
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242E08
    // b _0223F666
    // ldr r0, _0223F670 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0xc
    // mov r3, #7
    // bl ov81_022425C4
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223F666
    // ldr r0, _0223F670 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x12
    // mov r2, #0xc
    // mov r3, #8
    // bl ov81_022425C4
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223F666
    // ldr r0, _0223F670 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0xf
    // mov r3, #9
    // bl ov81_022425C4
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223F666
    // ldr r0, _0223F670 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0xe5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // add r0, r4, #0
    // add r0, #0xd0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _0223F678 ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_0201980C
    // add r0, r4, #0
    // bl ov81_02241D38
    // add r0, r4, #0
    // mov r1, #0x17
    // mov r2, #0xf
    // mov r3, #6
    // bl ov81_022425D8
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223F666
    // ldr r0, _0223F670 ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0223F66C ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // cmp r2, #3
    // bne _0223F51C
    // mov r0, #0xe5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // add r0, r4, #0
    // add r0, #0xd0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _0223F678 ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_0201980C
    // b _0223F540
    // mov r1, #0xf
    // lsl r1, r1, #6
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r3, #3
    // bl ov81_02242218
    // add r0, r4, #0
    // add r0, #0xd0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0223F678 ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // mov r2, #7
    // add r3, r1, #0
    // bl sub_020196E8
    // add r0, r4, #0
    // bl ov81_02241D38
    // b _0223F666
    // ldr r0, _0223F66C ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // cmp r0, #4
    // ldr r0, _0223F670 ; =0x000005DC
    // blo _0223F56E
    // bl PlaySE
    // add r0, r4, #0
    // bl ov81_022417B4
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242E08
    // b _0223F666
    // bl PlaySE
    // add r0, r4, #0
    // bl ov81_02241840
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242E08
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_02240F38
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // bl ov81_022425EC
    // b _0223F666
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223F666
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // beq _0223F5C0
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl PaletteData_ScheduleFadeTaskEndIfNoSelectedBuffers
    // ldr r0, _0223F67C ; =0x00000478
    // mov r1, #0xff
    // str r1, [r4, r0]
    // b _0223F666
    // add r0, r4, #0
    // bl ov81_02240E78
    // add r0, r4, #0
    // bl ov81_02240BB0
    // mov r1, #7
    // lsl r1, r1, #6
    // ldr r0, _0223F680 ; =gOverlayTemplate_PokemonSummary
    // ldr r1, [r4, r1]
    // mov r2, #0x64
    // bl OverlayManager_New
    // str r0, [r4, #4]
    // ldrb r1, [r4, #0x13]
    // mov r0, #2
    // add sp, #0xc
    // orr r0, r1
    // strb r0, [r4, #0x13]
    // mov r0, #1
    // pop {r4, r5, pc}
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _0223F666
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // bl IsPaletteFadeFinished
    // cmp r0, #1
    // bne _0223F666
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223F666
    // bl ov81_02241840
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_02240F38
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldrb r1, [r4, #0x13]
    // mov r0, #0x40
    // orr r0, r1
    // strb r0, [r4, #0x13]
    // mov r0, #3
    // strb r0, [r4, #8]
    // b _0223F666
    // bl ov81_0223F684
    // add r0, r4, #0
    // bl ov81_022417B4
    // add r0, r4, #0
    // bl ov81_02241840
    // add sp, #0xc
    // mov r0, #1
    // pop {r4, r5, pc}
    // bl ov81_022417B4
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242E08
    // mov r0, #1
    // strb r0, [r4, #8]
    // mov r0, #0
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0223F66C: .word 0x00000464
    // _0223F670: .word 0x000005DC
    // _0223F674: .word 0x00000468
    // _0223F678: .word 0x00000474
    // _0223F67C: .word 0x00000478
    // _0223F680: .word gOverlayTemplate_PokemonSummary
    // TODO: decompile
}




void ov81_0223F684(void) {
    // ldrb r2, [r0, #0x11]
    // ldr r1, _0223F6A4 ; =0x00000468
    // ldr r3, [r0, r1]
    // lsl r2, r2, #1
    // add r2, r0, r2
    // sub r1, #0xa0
    // strh r3, [r2, r1]
    // ldrb r1, [r0, #0x11]
    // add r1, r1, #1
    // strb r1, [r0, #0x11]
    // ldrb r2, [r0, #0x13]
    // mov r1, #4
    // orr r1, r2
    // strb r1, [r0, #0x13]
    // bx lr
    // nop
    // _0223F6A4: .word 0x00000468
    // TODO: decompile
}




void ov81_0223F6A8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #0
    // beq _0223F6BC
    // cmp r1, #1
    // beq _0223F6DE
    // cmp r1, #2
    // beq _0223F746
    // b _0223F74A
    // mov r1, #0xa
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // ldr r0, _0223F750 ; =0x0000046C
    // ldr r1, [r4, #0x4c]
    // ldr r0, [r4, r0]
    // bl ov81_02241BD0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_02242694
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F74A
    // ldr r0, _0223F750 ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _0223F6F0
    // cmp r0, #2
    // beq _0223F71C
    // b _0223F74A
    // ldr r0, _0223F750 ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02242694
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223F714
    // add r0, r4, #0
    // mov r1, #2
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F74A
    // ldr r0, _0223F750 ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02242694
    // add r0, r4, #0
    // bl ov81_0223F754
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242E08
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223F74A
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0223F750: .word 0x0000046C
    // TODO: decompile
}




void ov81_0223F754(void) {
}




void ov81_0223F770(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #8
    // bhi _0223F7FC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223F786: ; jump table
    // mov r0, #0x6e
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Options_GetFrame
    // add r1, r0, #0
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ov81_02243028
    // add r0, r4, #0
    // mov r1, #0xd
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223FB38
    // ldr r0, _0223FB10 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_HandleInput_NoHold
    // add r5, r0, #0
    // mov r0, #2
    // mvn r0, r0
    // cmp r5, r0
    // bhi _0223F7F2
    // blo _0223F7D2
    // b _0223F956
    // cmp r5, #7
    // bhi _0223F7FC
    // add r0, r5, r5
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223F7E2: ; jump table
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // bne _0223F7FC
    // b _0223FA02
    // b _0223FB38
    // ldr r0, _0223FB14 ; =0x000005DC
    // bl PlaySE
    // ldr r2, _0223FB18 ; =0x00000468
    // add r0, r4, #0
    // add r1, r2, #0
    // str r5, [r4, r2]
    // sub r1, #0xa4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // mov r3, #4
    // bl ov81_02242218
    // ldr r0, _0223FB1C ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // mov r2, #7
    // add r3, r1, #0
    // bl sub_020196E8
    // add r0, r4, #0
    // bl ov81_02241D94
    // ldr r1, _0223FB18 ; =0x00000468
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // bl ov81_022424AC
    // add r0, r4, #0
    // bl ov81_02241980
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242E08
    // b _0223FB38
    // ldr r0, _0223FB14 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0xe5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // mov r2, #1
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #6
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // add r0, #0xd0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // add r1, r4, #0
    // add r1, #0x50
    // add r0, r0, #2
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _0223FB1C ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_0201980C
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0xf
    // mov r3, #5
    // bl ov81_022425D8
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223FB38
    // ldr r0, _0223FB14 ; =0x000005DC
    // bl PlaySE
    // mov r0, #0xe5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // mov r2, #1
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #6
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // add r0, #0xd0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // add r1, r4, #0
    // add r1, #0x50
    // add r0, r0, #2
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _0223FB1C ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_0201980C
    // add r0, r4, #0
    // mov r1, #0x17
    // mov r2, #0xf
    // mov r3, #6
    // bl ov81_022425D8
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223FB38
    // ldr r0, _0223FB14 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0xf
    // mov r3, #7
    // bl ov81_022425C4
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223FB38
    // ldr r0, _0223FB14 ; =0x000005DC
    // bl PlaySE
    // add r0, r4, #0
    // mov r1, #0x12
    // mov r2, #0xf
    // mov r3, #8
    // bl ov81_022425C4
    // mov r0, #4
    // strb r0, [r4, #8]
    // b _0223FB38
    // ldr r0, _0223FB14 ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0223FB10 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // add r5, r0, #0
    // sub r0, r5, #4
    // cmp r0, #1
    // bhi _0223F9C4
    // mov r0, #0xe5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // mov r2, #1
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #6
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // add r0, #0xd0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r4, r0]
    // add r1, r4, #0
    // add r1, #0x50
    // add r0, r0, #2
    // lsl r0, r0, #4
    // add r0, r1, r0
    // bl ClearWindowTilemapAndScheduleTransfer
    // ldr r0, _0223FB1C ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_0201980C
    // b _0223FB38
    // cmp r5, #6
    // beq _0223FA5A
    // cmp r5, #7
    // beq _0223FA5A
    // mov r1, #0xf1
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // add r2, r5, #0
    // mov r3, #4
    // bl ov81_02242218
    // add r0, r4, #0
    // add r0, #0xd0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _0223FB1C ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // mov r2, #7
    // add r3, r1, #0
    // bl sub_020196E8
    // add r0, r4, #0
    // bl ov81_02241D94
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov81_022424AC
    // b _0223FB38
    // ldr r0, _0223FB10 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // cmp r0, #6
    // ldr r0, _0223FB14 ; =0x000005DC
    // blo _0223FA28
    // bl PlaySE
    // add r0, r4, #0
    // bl ov81_022419E0
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242E08
    // b _0223FB38
    // bl PlaySE
    // add r0, r4, #0
    // bl ov81_02241A7C
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242E08
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_02240F38
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223FB20 ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _0223FA5C
    // cmp r0, #2
    // beq _0223FA8E
    // b _0223FB38
    // ldr r0, _0223FB20 ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02242694
    // add r0, r4, #0
    // bl ov81_0223FB64
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223FA86
    // add r0, r4, #0
    // mov r1, #2
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FB38
    // ldr r0, _0223FB20 ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02242694
    // add r0, r4, #0
    // bl ov81_0223FB88
    // add r0, r4, #0
    // bl ov81_02241A38
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242E08
    // mov r0, #1
    // strb r0, [r4, #8]
    // b _0223FB38
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // bl ov81_022425EC
    // b _0223FB38
    // bl ov81_02241A7C
    // add r0, r4, #0
    // bl ov81_0223FB3C
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // bl ov81_02241A7C
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_02240F38
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // bl ov81_022419E0
    // add r0, r4, #0
    // bl ov81_02241A7C
    // ldr r0, _0223FB20 ; =0x0000046C
    // ldr r1, [r4, #0x4c]
    // ldr r0, [r4, r0]
    // bl ov81_02241BD0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_02242694
    // add r0, r4, #0
    // mov r1, #0xe
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // mov r0, #2
    // strb r0, [r4, #8]
    // b _0223FB38
    // _0223FB10: .word 0x00000464
    // _0223FB14: .word 0x000005DC
    // _0223FB18: .word 0x00000468
    // _0223FB1C: .word 0x00000474
    // _0223FB20: .word 0x0000046C
    // bl ov81_022419E0
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242E08
    // mov r0, #1
    // strb r0, [r4, #8]
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}




void ov81_0223FB3C(void) {
    // ldrb r2, [r0, #0x13]
    // mov r1, #4
    // mov r3, #0xf2
    // bic r2, r1
    // strb r2, [r0, #0x13]
    // ldrb r1, [r0, #0x11]
    // lsl r3, r3, #2
    // add r2, r3, #0
    // sub r1, r1, #1
    // strb r1, [r0, #0x11]
    // mov r1, #0
    // strh r1, [r0, r3]
    // add r2, #0xa0
    // add r3, #0x9c
    // str r1, [r0, r2]
    // ldr r0, [r0, r3]
    // ldr r3, _0223FB60 ; =GridInputHandler_SetNextInput
    // bx r3
    // _0223FB60: .word GridInputHandler_SetNextInput
    // TODO: decompile
}




void ov81_0223FB64(void) {
    // ldrb r2, [r0, #0x13]
    // mov r1, #8
    // orr r1, r2
    // strb r1, [r0, #0x13]
    // ldrb r2, [r0, #0x11]
    // ldr r1, _0223FB84 ; =0x00000468
    // ldr r3, [r0, r1]
    // lsl r2, r2, #1
    // add r2, r0, r2
    // sub r1, #0xa0
    // strh r3, [r2, r1]
    // ldrb r1, [r0, #0x11]
    // add r1, r1, #1
    // strb r1, [r0, #0x11]
    // bx lr
    // nop
    // _0223FB84: .word 0x00000468
    // TODO: decompile
}




void ov81_0223FB88(void) {
    // ldr r0, [r4, r0]
    Options_GetFrame((0x6e << 2));
    // add r0, #0xc0
    ov81_02243028(r4, r0);
    ov81_0224086C(r4, 0xd);
    *((u8*)(r4 + 0x10)) = r0;
}




void ov81_0223FBAC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #0
    // beq _0223FBC0
    // cmp r1, #1
    // beq _0223FBE2
    // cmp r1, #2
    // beq _0223FC52
    // b _0223FC56
    // mov r1, #0xa
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // ldr r0, _0223FC5C ; =0x0000046C
    // ldr r1, [r4, #0x4c]
    // ldr r0, [r4, r0]
    // bl ov81_02241BD0
    // add r0, r4, #0
    // mov r1, #1
    // bl ov81_02242694
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FC56
    // ldr r0, _0223FC5C ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_HandleInput
    // cmp r0, #1
    // beq _0223FBF4
    // cmp r0, #2
    // beq _0223FC28
    // b _0223FC56
    // ldr r0, _0223FC5C ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02242694
    // ldrb r1, [r4, #0x13]
    // mov r0, #8
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223FC20
    // add r0, r4, #0
    // mov r1, #2
    // bl ov81_0224086C
    // strb r0, [r4, #0x10]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FC56
    // ldr r0, _0223FC5C ; =0x0000046C
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Reset
    // add r0, r4, #0
    // mov r1, #0
    // bl ov81_02242694
    // add r0, r4, #0
    // bl ov81_0223FC60
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242E08
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FC56
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0223FC5C: .word 0x0000046C
    // TODO: decompile
}




void ov81_0223FC60(void) {
}




void ov81_0223FC74(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r0, #0
    // ldrb r0, [r4, #9]
    // bl ov80_02236DD4
    // ldrb r0, [r4, #8]
    // cmp r0, #6
    // bhi _0223FD48
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223FC90: ; jump table
    // ldrb r1, [r4, #0x13]
    // mov r0, #0x20
    // orr r0, r1
    // strb r0, [r4, #0x13]
    // add r0, r4, #0
    // add r0, #0x60
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r4, #0
    // add r0, #0xa0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r4, #0
    // add r0, #0xb0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r4, #0
    // add r0, #0x50
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0x50
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // add r0, #0x70
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r4, #0
    // add r0, #0x80
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r4, #0
    // add r0, #0x90
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r4, #0
    // add r0, #0xd0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0223FFF0 ; =0x00000474
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl sub_0201980C
    // add r0, r4, #0
    // add r0, #0xc0
    // mov r1, #1
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // add r0, #0xc0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r4, #0
    // add r0, #0x50
    // bl ov81_0224300C
    // ldr r0, _0223FFF4 ; =0x0000FFFF
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r2, #0x10
    // add r3, r1, #0
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FFEC
    // ldrb r0, [r4, #0x19]
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #0x19]
    // cmp r0, #2
    // bhs _0223FD4A
    // b _0223FFEC
    // ldr r0, _0223FFF8 ; =0x0000047C
    // mov r6, #0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bls _0223FD6C
    // ldr r7, _0223FFF8 ; =0x0000047C
    // add r5, r4, #0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl Pokepic_Delete
    // ldr r0, [r4, r7]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blo _0223FD58
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov81_02242D74
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov81_02242D74
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl ov81_02242D74
    // mov r0, #0xe5
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov81_02242D74
    // mov r0, #0xe6
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov81_02242D74
    // add r0, r4, #0
    // bl ov81_02241FC0
    // add r0, r4, #0
    // bl ov81_02242170
    // mov r0, #0xe
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // mov r1, #2
    // bl ov81_02242DE4
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FFEC
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Pokepic_ResumePaletteFade
    // mov r0, #0xe
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl ov81_02242DD8
    // cmp r0, #1
    // beq _0223FEB4
    // mov r0, #0xe
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // add r0, r4, #0
    // mov r1, #6
    // bl ov81_02240728
    // add r0, r4, #0
    // mov r1, #2
    // bl ov81_022406E0
    // ldr r0, [r4, #0x4c]
    // ldr r3, [r4, #0xc]
    // mov r1, #6
    // mov r2, #0
    // bl BgSetPosTextAndCommit
    // ldr r0, _0223FFFC ; =0x00000611
    // bl PlaySE
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FFEC
    // add r0, r4, #0
    // bl ov81_02240564
    // cmp r0, #1
    // bne _0223FEB4
    // ldr r0, _0223FFFC ; =0x00000611
    // mov r1, #0
    // bl StopSE
    // ldr r0, _02240000 ; =0x00000678
    // bl PlaySE
    // mov r0, #8
    // str r0, [r4, #0x14]
    // ldrb r0, [r4, #0x12]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223FE5A
    // add r5, r4, #0
    // add r7, r6, #0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl ov81_02242EA4
    // mov r1, #0x36
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // str r7, [r5, r0]
    // ldrb r0, [r4, #0x12]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _0223FE3C
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223FE74
    // ldrb r0, [r4, #0x12]
    // cmp r0, #2
    // bne _0223FE70
    // mov r0, #4
    // strb r0, [r4, #0x12]
    // b _0223FE74
    // mov r0, #2
    // strb r0, [r4, #0x12]
    // add r0, r4, #0
    // bl ov81_0223EBE4
    // ldrb r0, [r4, #0x12]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223FE98
    // mov r7, #0x36
    // add r5, r4, #0
    // lsl r7, r7, #4
    // ldr r0, [r5, r7]
    // bl ov81_02242F60
    // ldrb r0, [r4, #0x12]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _0223FE88
    // ldr r0, _0223FFFC ; =0x00000611
    // bl PlaySE
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FFEC
    // add r0, r4, #0
    // bl ov81_022404B4
    // cmp r0, #1
    // beq _0223FEB6
    // b _0223FFEC
    // ldr r0, _0223FFFC ; =0x00000611
    // mov r1, #0
    // bl StopSE
    // ldr r0, _02240000 ; =0x00000678
    // bl PlaySE
    // ldrb r0, [r4, #0x12]
    // mov r6, #0
    // cmp r0, #0
    // ble _0223FEE4
    // mov r7, #0x36
    // add r5, r4, #0
    // lsl r7, r7, #4
    // ldr r0, [r5, r7]
    // mov r1, #4
    // bl ov81_02242F94
    // ldrb r0, [r4, #0x12]
    // add r6, r6, #1
    // add r5, r5, #4
    // cmp r6, r0
    // blt _0223FED2
    // mov r0, #8
    // str r0, [r4, #0x14]
    // mov r0, #0xe
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // mov r0, #0xe
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242DE4
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FFEC
    // mov r0, #0xe
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl ov81_02242DD8
    // cmp r0, #1
    // beq _0223FFEC
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _0223FFEC
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0
    // bne _0223FFAA
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldrb r0, [r4, #0x13]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1f
    // ldr r0, _0223FFF8 ; =0x0000047C
    // bne _0223FF60
    // ldr r0, [r4, r0]
    // mov r5, #0
    // cmp r0, #0
    // bls _0223FF96
    // ldr r6, _0223FFF8 ; =0x0000047C
    // mov r7, #1
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r5, #0
    // add r3, r7, #0
    // bl ov81_02241E68
    // ldr r0, [r4, r6]
    // add r5, r5, #1
    // cmp r5, r0
    // blo _0223FF4A
    // b _0223FF96
    // ldr r0, [r4, r0]
    // mov r5, #0
    // cmp r0, #0
    // bls _0223FF96
    // ldr r7, _0223FFF8 ; =0x0000047C
    // add r6, r7, #0
    // sub r6, #0xb4
    // ldrh r0, [r4, r6]
    // cmp r5, r0
    // bne _0223FF82
    // mov r2, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // add r3, r2, #0
    // bl ov81_02241EDC
    // b _0223FF8E
    // add r0, r4, #0
    // add r1, r5, #0
    // add r2, r5, #0
    // mov r3, #1
    // bl ov81_02241E68
    // ldr r0, [r4, r7]
    // add r5, r5, #1
    // cmp r5, r0
    // blo _0223FF6E
    // ldr r0, _0223FFF4 ; =0x0000FFFF
    // mov r1, #0x10
    // str r0, [sp]
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r2, #0
    // mov r3, #1
    // bl Pokepic_StartPaletteFadeAll
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Pokepic_ResumePaletteFade
    // ldrb r0, [r4, #0x19]
    // add r0, r0, #1
    // strb r0, [r4, #0x19]
    // ldrb r0, [r4, #0x19]
    // cmp r0, #0x15
    // blo _0223FFEC
    // add r0, r4, #0
    // bl ov81_02241398
    // ldrb r1, [r4, #0x13]
    // mov r0, #0x20
    // bic r1, r0
    // strb r1, [r4, #0x13]
    // ldrb r0, [r4, #9]
    // bl ov80_02237254
    // cmp r0, #1
    // bne _0223FFE4
    // ldr r0, _02240004 ; =0x00000463
    // mov r1, #1
    // strb r1, [r4, r0]
    // add r0, r4, #0
    // bl ov81_02241144
    // mov r0, #0
    // strb r0, [r4, #0x19]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223FFF0: .word 0x00000474
    // _0223FFF4: .word 0x0000FFFF
    // _0223FFF8: .word 0x0000047C
    // _0223FFFC: .word 0x00000611
    // _02240000: .word 0x00000678
    // _02240004: .word 0x00000463
    // TODO: decompile
}




void ov81_02240008(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldrb r1, [r4, #8]
    // cmp r1, #0
    // beq _02240018
    // cmp r1, #1
    // beq _02240030
    // b _02240040
    // ldrb r2, [r4, #0x13]
    // mov r1, #0xa
    // lsl r2, r2, #0x1c
    // lsr r2, r2, #0x1f
    // bl ov81_02240FA4
    // cmp r0, #1
    // bne _02240040
    // ldrb r0, [r4, #8]
    // add r0, r0, #1
    // strb r0, [r4, #8]
    // b _02240040
    // ldr r0, _02240044 ; =0x00000462
    // ldrb r1, [r4, r0]
    // cmp r1, #2
    // blo _02240040
    // mov r1, #0
    // strb r1, [r4, r0]
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // _02240044: .word 0x00000462
    // TODO: decompile
}




void ov81_02240048(void) {
    ov81_0224086C(0xf);
    *((u8*)(r4 + 0x10)) = r0;
    sub_02037BEC();
    sub_02037AC0(0xa5);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    sub_02037B38(0xa5);
    sub_02037BEC();
}




void ov81_02240088(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    IsPaletteFadeFinished((*((u8*)(r4 + 8)) + 1));
}




void ov81_022400D0(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    Delete2dMenu((0x5f << 2), 0);
    // ldr r0, [r4, r0]
    ov81_022413E0((0x5d << 2));
    // ldr r0, [r4, r0]
    ov81_02242FC8((0xdf << 2));
    // str r1, [r4, r0]
    ov80_0222A7CC(*((u32*)(r4 + 0x20)), 0);
    // ldr r0, [r4, r1]
    // add r1, #8
    // ldrh r1, [r4, r1]
    Party_GetMonByIndex(((0xf << 6) + 2));
    Mon_GetBoxMon();
    ov81_022408B8(r4, 1, r0);
    // ldr r0, [r4, r1]
    // ldrh r1, [r4, r1]
    Party_GetMonByIndex(((0xf1 << 2) + 6));
    Mon_GetBoxMon();
    ov81_022408B8(r4, 2, r0);
    // ldr r0, [r4, r0]
    Options_GetFrame((0x6e << 2));
    // add r0, #0xc0
    ov81_02243028(r4, r0);
    // ldr r0, [r4, r0]
    Save_PlayerData_GetOptionsAddr((0x6f << 2));
    Options_GetTextFrameDelay();
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r3, [sp, #0x14]
    // add r1, #0xc0
    ov81_0224080C(r4, r4, 0x10, 1);
    *((u8*)(r4 + 0x10)) = r0;
    // add r0, #0xc0
    ScheduleWindowCopyToVram(r4);
    *((u8*)(r4 + 0x19)) = 0x50;
    *((u8*)(r4 + 8)) = (*((u8*)(r4 + 8)) + 1);
    TextPrinterCheckActive(*((u8*)(r4 + 0x10)));
    *((u8*)(r4 + 0x19)) = 0;
}




void ov81_022401C8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // bne _02240204
    // mov r0, #0x6a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl PokepicManager_HandleLoadImgAndOrPltt
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _022401EA
    // bl PaletteData_PushTransparentBuffers
    // ldr r0, [r4, #0x4c]
    // bl DoScheduledBgGpuUpdates
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // ldr r3, _02240208 ; =0x027E0000
    // ldr r1, _0224020C ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // nop
    // _02240208: .word 0x027E0000
    // _0224020C: .word 0x00003FF8
    // TODO: decompile
}




void ov81_02240210(void) {
}




void ov81_02240230(void) {
    // push {r4, r5, lr}
    // sub sp, #0xd4
    // ldr r5, _0224039C ; =ov81_02243480
    // add r3, sp, #0xc4
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _022403A0 ; =ov81_022434A8
    // add r3, sp, #0xa8
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
    // mov r3, #0x64
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _022403A4 ; =ov81_022434C4
    // add r3, sp, #0x8c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _022403A8 ; =ov81_022434FC
    // add r3, sp, #0x70
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
    // ldr r5, _022403AC ; =ov81_02243518
    // add r3, sp, #0x54
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
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x64
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _022403B0 ; =ov81_022434E0
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #5
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x64
    // bl BG_ClearCharDataRange
    // add r0, r4, #0
    // mov r1, #5
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _022403B4 ; =ov81_02243534
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #6
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _022403B8 ; =ov81_02243550
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #7
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // ldr r1, _022403BC ; =0x04000008
    // mov r0, #3
    // ldrh r2, [r1]
    // bic r2, r0
    // mov r0, #1
    // strh r2, [r1]
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0xd4
    // pop {r4, r5, pc}
    // _0224039C: .word ov81_02243480
    // _022403A0: .word ov81_022434A8
    // _022403A4: .word ov81_022434C4
    // _022403A8: .word ov81_022434FC
    // _022403AC: .word ov81_02243518
    // _022403B0: .word ov81_022434E0
    // _022403B4: .word ov81_02243534
    // _022403B8: .word ov81_02243550
    // _022403BC: .word 0x04000008
    // TODO: decompile
}




void ov81_022403C0(void) {
    ov81_02240210();
    ov81_02240230(*((u32*)(r4 + 0x4c)));
    PaletteData_Init(0x64);
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    PaletteData_AllocBuffers(2, (2 << 8), 0x64);
    // ldr r0, [r4, r2]
    // add r2, #0x60
    PaletteData_AllocBuffers(0, (0x1a << 4), 0x64);
    ov81_02240770();
    ov81_02240728(r4, 6);
    ov81_02240698(r4, 3);
    ov81_022406E0(r4, 2);
    BgSetPosTextAndCommit(*((u32*)(r4 + 0x4c)), 6, 0, *((u32*)(r4 + 0xc)));
    GfGfx_EngineATogglePlanes(2, 1);
    GfGfx_EngineATogglePlanes(4, 0);
    GfGfx_EngineATogglePlanes(8, 1);
    ov81_022407A8(r4, 7);
}




void ov81_02240448(void) {
    // mov r1, #0x71
    // lsl r1, r1, #2
    // ldr r3, _02240454 ; =ov81_0224276C
    // add r0, r0, r1
    // bx r3
    // nop
    // _02240454: .word ov81_0224276C
    // TODO: decompile
}




void ov81_02240458(void) {
}




void ov81_022404AC(void) {
}




void ov81_022404B4(void) {
    // str r0, [sp]
    BgSetPosTextAndCommit(*((u32*)(r0 + 0x4c)), 6, 1, 8);
    Bg_GetXpos(*((u32*)(r5 + 0x4c)), 6);
    *((u32*)(r5 + 0xc)) = r0;
    // ldr r0, [r4, r0]
    ov81_02242F30((0x36 << 4));
    // ldr r0, [r4, r0]
    ov81_02242F8C((0x36 << 4));
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // sub r1, #8
    // ldr r0, [r4, r0]
    ov81_02242F8C((0x36 << 4), (r1 >> 0x14), *((u32*)r7));
    // ldr r0, [r4, r0]
    ov81_02242F90((0x36 << 4));
    // ldr r0, [r4, r0]
    ov81_02242F10((0x36 << 4), r7, r0);
    // str r0, [sp]
    // ldr r1, [r4, r1]
    // add r0, sp, #4
    // mvn r2, r2
    ov81_02242EC4(1, (0x36 << 4), 7, 0);
    ov81_022405F0(r5);
    // ldr r0, [sp]
}




void ov81_02240564(void) {
    BgSetPosTextAndCommit(*((u32*)(r0 + 0x4c)), 6, 1, 8);
    Bg_GetXpos(*((u32*)(r6 + 0x4c)), 6);
    *((u32*)(r6 + 0xc)) = r0;
    // ldr r0, [r5, r0]
    ov81_02242F30((0x36 << 4));
    // asr r0, r1, #0xb
    // add r0, r1, r0
    // asr r1, r0, #0xc
    // sub r1, #8
    // mvn r0, r0
    // ldr r0, [r5, r0]
    ov81_02242EB8((0x36 << 4), 0);
    // ldr r1, [r5, r1]
    // add r0, sp, #0
    // mvn r2, r2
    ov81_02242EC4((0x36 << 4), 7, 0);
    ov81_022405F0(r6);
}




void ov81_022405F0(void) {
    // tst r0, r1
    *((u32*)(r0 + 0x14)) = 0;
    // str r3, [sp]
    ov81_02240628(r0, 7, ((((*((u32*)(r0 + 0x14)) >> 2) + 2) << 0x18) >> 0x18), 0x20);
    *((u32*)(r4 + 0x14)) = (*((u32*)(r4 + 0x14)) + 1);
}




void ov81_02240628(void) {
    // str r3, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    BgTilemapRectChangePalette(*((u32*)(r0 + 0x4c)), ((r1 << 0x18) >> 0x18), 0, 0);
    ScheduleBgTilemapBufferTransfer(*((u32*)(r5 + 0x4c)), ((r4 << 0x18) >> 0x18));
}




void ov81_02240658(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224066C: ; jump table
    ov81_02241340(r0, 4);
    // str r0, [r4, r1]
}




void ov81_02240698(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0xf7 << 2), 0x81, *((u32*)(r0 + 0x4c)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0xf7 << 2), 0x82, *((u32*)(r5 + 0x4c)), r4);
}




void ov81_022406E0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0xf7 << 2), 0x92, *((u32*)(r0 + 0x4c)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0xf7 << 2), 0x91, *((u32*)(r5 + 0x4c)), r4);
}




void ov81_02240728(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0xf7 << 2), 4, *((u32*)(r0 + 0x4c)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0xf7 << 2), 8, *((u32*)(r5 + 0x4c)), r4);
}




void ov81_02240770(void) {
    // add r2, sp, #0
    GfGfxLoader_GetPlttData(0xb7, 0xc1, 0x64);
    // ldr r0, [sp]
    DC_FlushRange(*((u32*)(r0 + 0xc)), (0x16 << 4));
    // ldr r0, [sp]
    GX_LoadBGPltt(*((u32*)(r0 + 0xc)), 0, (0x16 << 4));
    Heap_Free(r4);
}




void ov81_022407A8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadCharDataFromOpenNarc((0xf7 << 2), 4, *((u32*)(r0 + 0x4c)), r1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r0]
    GfGfxLoader_LoadScrnDataFromOpenNarc((0xf7 << 2), 7, *((u32*)(r5 + 0x4c)), r4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r5, r0]
    GfGfxLoader_GXLoadPalFromOpenNarc((0xf7 << 2), 0x95, 4, 0);
}




void ov81_0224080C(void) {
    // add r1, sp, #0x38
    // ldrb r1, [r1]
    FillWindowPixelBuffer(r1);
    ReadMsgDataIntoString(*((u32*)(r5 + 0x1c)), r6, *((u32*)(r5 + 0x28)));
    StringExpandPlaceholders(*((u32*)(r5 + 0x20)), *((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)));
    // ldr r0, [sp, #0x28]
    // add r2, sp, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #4]
    // add r0, sp, #0x38
    // ldrb r1, [r0]
    // orr r0, r2
    // orr r0, r1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x3c
    // ldrb r1, [r1]
    AddTextPrinterParameterizedWithColor(r4, *((u32*)(r5 + 0x24)), r7);
}




void ov81_0224086C(void) {
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r1, #0xc0
    // str r3, [sp, #0x14]
    ov81_0224080C(r0, r1, 1);
    // add r4, #0xc0
    ScheduleWindowCopyToVram(r4);
}




void ov81_022408A0(void) {
}




void ov81_022408B8(void) {
}




void ov81_022408C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r1, #0
    // mov r1, #0x6f
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // str r2, [sp, #0x10]
    // add r6, r3, #0
    // bl Save_PlayerData_GetProfile
    // add r7, r0, #0
    // mov r0, #8
    // mov r1, #0x64
    // bl String_New
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r7, #0
    // bl PlayerProfile_GetNamePtr
    // add r1, r0, #0
    // add r0, r4, #0
    // bl CopyU16ArrayToString
    // add r0, r7, #0
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // bne _02240908
    // ldr r1, _02240938 ; =0x00070800
    // b _0224090C
    // mov r1, #0xc1
    // lsl r1, r1, #0xa
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r1, sp, #0x18
    // ldrb r1, [r1, #0x10]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02240938: .word 0x00070800
    // TODO: decompile
}




void ov81_0224093C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r1, #0
    // str r2, [sp, #0x10]
    // add r6, r3, #0
    // bl sub_0203769C
    // mov r1, #1
    // sub r0, r1, r0
    // bl sub_02034818
    // add r7, r0, #0
    // mov r0, #8
    // mov r1, #0x64
    // bl String_New
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r7, #0
    // add r1, r4, #0
    // bl PlayerName_FlatToString
    // add r0, r7, #0
    // bl PlayerProfile_GetTrainerGender
    // cmp r0, #0
    // bne _0224097C
    // ldr r1, _022409AC ; =0x00070800
    // b _02240980
    // mov r1, #0xc1
    // lsl r1, r1, #0xa
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // add r1, sp, #0x18
    // ldrb r1, [r1, #0x10]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r5, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _022409AC: .word 0x00070800
    // TODO: decompile
}




void ov81_022409B0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r4, r1, #0
    // add r1, sp, #0x28
    // ldrb r1, [r1, #0x1c]
    // add r5, r0, #0
    // add r0, r4, #0
    // add r6, r2, #0
    // str r3, [sp, #0x10]
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x4c]
    // add r1, r6, #0
    // bl Party_GetMonByIndex
    // add r7, r0, #0
    // mov r0, #0xb
    // mov r1, #0x64
    // bl String_New
    // str r0, [sp, #0x18]
    // ldr r0, [r5, #0x1c]
    // mov r1, #0x1c
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x1c]
    // add r0, r7, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [r5, #0x20]
    // mov r1, #0
    // bl BufferBoxMonSpeciesName
    // ldr r0, [r5, #0x20]
    // ldr r1, [sp, #0x18]
    // ldr r2, [sp, #0x1c]
    // bl StringExpandPlaceholders
    // add r0, sp, #0x48
    // ldrb r6, [r0]
    // ldr r0, [sp, #0x38]
    // add r2, sp, #0x28
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldrb r0, [r2, #0x14]
    // ldrb r1, [r2, #0x1c]
    // ldrb r2, [r2, #0x18]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #8
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x10
    // orr r0, r2
    // orr r0, r1
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x10]
    // add r0, r4, #0
    // add r1, r6, #0
    // bl AddTextPrinterParameterizedWithColor
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // add r0, r7, #0
    // mov r1, #0xb0
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #1
    // bne _02240AC8
    // add r0, r7, #0
    // bl GetMonGender
    // add r7, r0, #0
    // add r0, r4, #0
    // bl GetWindowWidth
    // sub r0, r0, #1
    // lsl r0, r0, #3
    // sub r0, r0, #4
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x14]
    // cmp r7, #0
    // bne _02240A96
    // ldr r0, [r5, #0x1c]
    // mov r1, #0x1a
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // ldr r0, [sp, #0x38]
    // add r1, r6, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02240AD4 ; =0x00070800
    // add r2, r5, #0
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    // add r0, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // b _02240AC8
    // cmp r7, #1
    // bne _02240AC8
    // ldr r0, [r5, #0x1c]
    // mov r1, #0x1b
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // ldr r0, [sp, #0x38]
    // add r1, r6, #0
    // str r0, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // mov r0, #0xc1
    // lsl r0, r0, #0xa
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x14]
    // add r0, r4, #0
    // add r2, r5, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl String_Delete
    // add r0, r4, #0
    // bl ScheduleWindowCopyToVram
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02240AD4: .word 0x00070800
    // TODO: decompile
}




void ov81_02240AD8(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r5, r1, #0
    // add r1, sp, #0x28
    // ldrb r1, [r1, #0x18]
    // str r0, [sp, #0x10]
    // add r0, r5, #0
    // str r2, [sp, #0x14]
    // add r6, r3, #0
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xed
    // mov r3, #0x64
    // bl NewMsgDataFromNarc
    // add r1, sp, #0x28
    // ldrh r1, [r1, #0x20]
    // add r7, r0, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // add r0, r7, #0
    // bl DestroyMsgData
    // add r2, sp, #0x28
    // ldrb r0, [r2, #0x1c]
    // ldr r3, [sp, #0x14]
    // str r0, [sp, #0x1c]
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldrb r0, [r2, #0x10]
    // ldrb r1, [r2, #0x18]
    // ldrb r2, [r2, #0x14]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #8
    // lsl r2, r2, #0x18
    // lsr r2, r2, #0x10
    // orr r0, r2
    // orr r0, r1
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0x1c]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl GetWindowWidth
    // sub r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x20]
    // add r0, sp, #0x4c
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02240B58
    // mov r0, #0x1a
    // str r0, [sp, #0x18]
    // b _02240B5C
    // mov r0, #0x1b
    // str r0, [sp, #0x18]
    // add r0, sp, #0x4c
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02240B68
    // ldr r7, _02240BAC ; =0x00070800
    // b _02240B6C
    // mov r7, #0xc1
    // lsl r7, r7, #0xa
    // add r0, r4, #0
    // bl String_SetEmpty
    // add r0, sp, #0x4c
    // ldrb r0, [r0]
    // cmp r0, #2
    // beq _02240BA0
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x18]
    // ldr r0, [r0, #0x1c]
    // add r2, r4, #0
    // bl ReadMsgDataIntoString
    // str r6, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x20]
    // ldr r1, [sp, #0x1c]
    // add r0, r5, #0
    // add r2, r4, #0
    // lsl r3, r3, #3
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02240BAC: .word 0x00070800
    // TODO: decompile
}




void ov81_02240BB0(void) {
    ov81_0224275C();
    // ldr r0, [r4, r7]
    ov81_02242EA4(*((u8*)(r5 + 0x12)));
    // str r0, [r4, r1]
    // ldr r0, [r5, r0]
    ov81_02242D74((0xe2 << 2), (0x36 << 4));
    // ldr r0, [r5, r0]
    ov81_02242D74((0xe3 << 2));
    // ldr r0, [r5, r0]
    ov81_02242D74((0x39 << 4));
    // ldr r0, [r5, r0]
    ov81_02242D74((0xe5 << 2));
    // ldr r0, [r5, r0]
    ov81_02242D74((0xe6 << 2));
    ov81_02241364(r5);
    ov81_02241FC0(r5);
    ov81_02242170(r5);
    sub_0203A914();
    // ldr r0, [r5, r0]
    PaletteData_FreeBuffers((0x1a << 4), 2);
    // ldr r0, [r5, r0]
    PaletteData_FreeBuffers((0x1a << 4), 0);
    // ldr r0, [r5, r0]
    PaletteData_Free((0x1a << 4));
    // str r1, [r5, r0]
    // add r0, #0x24
    // add r0, r5, r0
    ov81_02242B38((0x1a << 4), 0);
    // ldr r0, [r4, r7]
    Pokepic_Delete();
    // ldr r0, [r5, r0]
    PokepicManager_Delete((0x6a << 2));
    DestroyMsgData(*((u32*)(r5 + 0x1c)));
    MessageFormat_Delete(*((u32*)(r5 + 0x20)));
    String_Delete(*((u32*)(r5 + 0x24)));
    String_Delete(*((u32*)(r5 + 0x28)));
    String_Delete(*((u32*)(r5 + 0x2c)));
    FontID_Release(4);
    // add r0, #0x50
    ov81_0224300C(r5);
    ov81_02240458(*((u32*)(r5 + 0x4c)));
    // ldr r0, [r5, r0]
    NARC_Delete((0xf7 << 2));
    // ldr r0, [r5, r0]
    GF_3DVramMan_Delete((0x69 << 2));
}




void ov81_02240CD4(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl ov81_02240D2C
    // mov r2, #2
    // mov r1, #0
    // ldr r0, _02240D24 ; =ov81_02242BC8
    // str r2, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x64
    // add r3, r1, #0
    // bl GF_3DVramMan_Create
    // mov r1, #0x69
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #0x64
    // bl BgConfig_Alloc
    // str r0, [r4, #0x4c]
    // add r0, r4, #0
    // bl ov81_02240D64
    // add r1, r4, #0
    // ldr r0, [r4, #0x4c]
    // add r1, #0x50
    // bl ov81_02242FDC
    // ldr r0, _02240D28 ; =0x0000047C
    // ldr r0, [r4, r0]
    // cmp r0, #2
    // bne _02240D1E
    // add r4, #0x70
    // add r0, r4, #0
    // bl ov81_022430E8
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _02240D24: .word ov81_02242BC8
    // _02240D28: .word 0x0000047C
    // TODO: decompile
}




void ov81_02240D2C(void) {
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
    // ldr r0, _02240D5C ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _02240D60 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // pop {r3, pc}
    // _02240D5C: .word 0xFFFFE0FF
    // _02240D60: .word 0x04001000
    // TODO: decompile
}




void ov81_02240D64(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0xb7
    // mov r1, #0x64
    // bl NARC_New
    // mov r1, #0xf7
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r5, #0
    // bl ov81_022403C0
    // add r0, r5, #0
    // bl ov81_02240448
    // mov r0, #4
    // mov r1, #0x64
    // bl FontID_Alloc
    // mov r0, #1
    // mov r1, #0x1b
    // mov r2, #0xc2
    // mov r3, #0x64
    // bl NewMsgDataFromNarc
    // str r0, [r5, #0x1c]
    // mov r0, #0x64
    // bl MessageFormat_New
    // str r0, [r5, #0x20]
    // mov r0, #0x32
    // lsl r0, r0, #4
    // mov r1, #0x64
    // bl String_New
    // str r0, [r5, #0x24]
    // mov r0, #0x32
    // lsl r0, r0, #4
    // mov r1, #0x64
    // bl String_New
    // str r0, [r5, #0x28]
    // mov r6, #0
    // add r4, r5, #0
    // mov r7, #0x40
    // add r0, r7, #0
    // mov r1, #0x64
    // bl String_New
    // str r0, [r4, #0x2c]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #4
    // blt _02240DBE
    // mov r1, #0x1a
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x64
    // bl LoadFontPal0
    // mov r1, #0x1a
    // mov r0, #4
    // lsl r1, r1, #4
    // mov r2, #0x64
    // bl LoadFontPal0
    // mov r1, #6
    // mov r0, #0
    // lsl r1, r1, #6
    // mov r2, #0x64
    // bl LoadFontPal1
    // mov r1, #6
    // mov r0, #4
    // lsl r1, r1, #6
    // mov r2, #0x64
    // bl LoadFontPal1
    // mov r0, #0x64
    // bl PokepicManager_Create
    // mov r1, #0x6a
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // bl sub_02037474
    // cmp r0, #0
    // beq _02240E26
    // mov r0, #1
    // mov r1, #0x10
    // bl G2dRenderer_SetObjCharTransferReservedRegion
    // mov r0, #1
    // bl G2dRenderer_SetPlttTransferReservedRegion
    // bl sub_0203A880
    // add r0, r5, #0
    // mov r1, #0
    // bl ov81_02240F08
    // cmp r0, #1
    // bne _02240E40
    // add r0, r5, #0
    // bl ov81_0223E87C
    // add r0, r5, #0
    // bl ov81_0223E8B0
    // b _02240E4C
    // add r0, r5, #0
    // bl ov81_0223EBE4
    // add r0, r5, #0
    // bl ov81_0223EC44
    // add r0, r5, #0
    // bl ov81_02242500
    // mov r1, #0xf7
    // lsl r1, r1, #2
    // ldr r0, [r5, #0x4c]
    // ldr r1, [r5, r1]
    // bl ov81_02243100
    // add r0, r5, #0
    // bl ov81_0224271C
    // bl GfGfx_BothDispOn
    // ldr r0, _02240E74 ; =ov81_022401C8
    // add r1, r5, #0
    // bl Main_SetVBlankIntrCB
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02240E74: .word ov81_022401C8
    // TODO: decompile
}




void ov81_02240E78(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x64
    // mov r1, #0x3c
    // bl Heap_Alloc
    // mov r1, #7
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0
    // mov r2, #0x3c
    // bl memset
    // mov r1, #0xf
    // mov r2, #7
    // lsl r1, r1, #6
    // lsl r2, r2, #6
    // ldr r3, [r4, r1]
    // ldr r0, [r4, r2]
    // add r1, #0xa8
    // str r3, [r0]
    // add r0, r2, #0
    // sub r0, #8
    // ldr r3, [r4, r0]
    // ldr r0, [r4, r2]
    // str r3, [r0, #4]
    // ldr r0, [r4, r2]
    // mov r3, #1
    // strb r3, [r0, #0x11]
    // ldr r0, [r4, r2]
    // strb r3, [r0, #0x12]
    // ldrb r3, [r4, #0x12]
    // ldr r0, [r4, r2]
    // strb r3, [r0, #0x13]
    // ldr r1, [r4, r1]
    // ldr r0, [r4, r2]
    // strb r1, [r0, #0x14]
    // ldr r0, [r4, r2]
    // mov r1, #0
    // strh r1, [r0, #0x18]
    // sub r0, r2, #4
    // ldr r0, [r4, r0]
    // bl SaveArray_IsNatDexEnabled
    // mov r1, #7
    // lsl r1, r1, #6
    // ldr r2, [r4, r1]
    // str r0, [r2, #0x1c]
    // ldr r0, [r4, r1]
    // mov r2, #0
    // str r2, [r0, #0x2c]
    // ldr r0, [r4, r1]
    // str r2, [r0, #0x34]
    // ldr r0, [r4, r1]
    // ldr r1, _02240F04 ; =_02243458
    // bl sub_02089D40
    // mov r0, #0x6f
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl Save_PlayerData_GetProfile
    // add r1, r0, #0
    // mov r0, #7
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl sub_0208AD34
    // pop {r4, pc}
    // _02240F04: .word _02243458
    // TODO: decompile
}




void ov81_02240F08(void) {
    // ldrb r0, [r0, #0xb]
    // cmp r0, r1
    // bne _02240F12
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov81_02240F18(void) {
    // cmp r0, #0
    // beq _02240F20
    // cmp r0, #1
    // bne _02240F24
    // mov r0, #3
    // bx lr
    // mov r0, #2
    // bx lr
    // TODO: decompile
}




void ov81_02240F28(void) {
    // ldrb r0, [r0, #0x13]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // beq _02240F34
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov81_02240F38(void) {
    // bic r3, r2
    // and r1, r2
    // orr r1, r3
    *((u8*)(r0 + 0x13)) = r1;
}




void ov81_02240F48(void) {
    // ldr r1, [sp, #0x20]
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r5, r0, r7
    // ldr r0, [r0, r1]
    ov81_02242C80(0);
    // str r0, [r5, r4]
    // ldr r0, [r5, r4]
    Pokepic_SetAttr(6, 0);
    GetMonData(r6, 5, 0);
    GetMonData(r6, 0x70, 0);
    GetMonBaseStat_HandleAlternateForm(r7, r0, 0x1c);
    // ldr r0, [r5, r4]
    // ldr r1, [sp, #0x24]
    ov81_02242CB0();
}




void ov81_02240FA4(void) {
    ov80_02237254(*((u8*)(r0 + 9)));
    ov81_02241008(r5, r4);
    ov81_0224102C(r5, r4, r7);
    ov81_02241218(r5, r4, r7);
    // add r1, r5, r1
    sub_02037030(r6, (0x3e << 4), 0x3c);
}




void ov81_02241008(void) {
}




void ov81_02241020(void) {
}




void ov81_0224102C(void) {
    // str r1, [sp]
    // strh r4, [r2, r0]
    // strh r1, [r5, r0]
    // ldr r0, [sp]
    // str r0, [sp]
    // ldr r0, [sp]
    // add r6, r5, r0
    // ldrh r1, [r7, r1]
    // ldr r0, [r5, r0]
    Party_GetMonByIndex((0xf << 6), (0xf2 << 2), (r0 + 2));
    GetMonData(5, 0);
    // strh r0, [r6, r1]
    // ldr r1, [sp]
    // add r1, r1, r0
    // add r4, r5, r0
    // ldrh r1, [r6, r1]
    // ldr r0, [r5, r0]
    Party_GetMonByIndex((0xf << 6), (0xf2 << 2));
    GetMonData(0x6f, 0);
    // strh r0, [r4, r1]
}




void ov81_022410C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r3, #0
    // add r7, r0, #0
    // ldrb r0, [r5, #9]
    // add r6, r2, #0
    // mov r4, #0
    // bl ov80_02236DD4
    // bl sub_0203769C
    // cmp r7, r0
    // beq _0224112C
    // ldrh r0, [r6]
    // add r4, r4, #1
    // strb r0, [r5, #0x18]
    // ldrb r3, [r5, #0x18]
    // mov r0, #0
    // cmp r3, #0
    // ble _02241106
    // lsl r1, r4, #1
    // ldr r7, _02241130 ; =0x0000045A
    // add r1, r6, r1
    // add r2, r5, #0
    // ldrh r3, [r1]
    // add r0, r0, #1
    // add r1, r1, #2
    // strh r3, [r2, r7]
    // ldrb r3, [r5, #0x18]
    // add r2, r2, #2
    // cmp r0, r3
    // blt _022410F6
    // add r1, r4, r3
    // mov r0, #0
    // cmp r3, #0
    // ble _02241126
    // lsl r1, r1, #1
    // add r3, r6, r1
    // ldr r1, _02241134 ; =0x0000045E
    // add r4, r5, #0
    // ldrh r2, [r3]
    // add r0, r0, #1
    // add r3, r3, #2
    // strh r2, [r4, r1]
    // ldrb r2, [r5, #0x18]
    // add r4, r4, #2
    // cmp r0, r2
    // blt _02241116
    // ldr r0, _02241138 ; =0x00000463
    // mov r1, #1
    // strb r1, [r5, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02241130: .word 0x0000045A
    // _02241134: .word 0x0000045E
    // _02241138: .word 0x00000463
    // TODO: decompile
}




void ov81_0224113C(void) {
}




void ov81_02241144(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r7, r0, #0
    // ldrb r0, [r7, #9]
    // bl ov80_02236DD4
    // str r0, [sp, #0x18]
    // ldrb r0, [r7, #0x13]
    // lsl r0, r0, #0x1a
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _02241180
    // add r0, r7, #0
    // add r0, #0x60
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r0, r7, #0
    // add r0, #0xa0
    // bl ClearWindowTilemapAndScheduleTransfer
    // add r7, #0xb0
    // add r0, r7, #0
    // bl ClearWindowTilemapAndScheduleTransfer
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _0224120C ; =0x00000463
    // ldrb r0, [r7, r0]
    // cmp r0, #1
    // bne _02241200
    // ldr r0, [sp, #0x18]
    // mov r4, #0
    // cmp r0, #0
    // ble _022411E8
    // add r6, r7, #0
    // add r5, r7, #0
    // add r6, #0x50
    // add r0, r4, #5
    // lsl r0, r0, #4
    // str r0, [sp, #0x1c]
    // add r0, r6, r0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldrb r0, [r7, #0x18]
    // cmp r4, r0
    // bge _022411D6
    // mov r0, #0xf
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, _02241210 ; =0x0000045A
    // ldr r1, [sp, #0x1c]
    // ldrh r0, [r5, r0]
    // mov r2, #0
    // add r1, r6, r1
    // str r0, [sp, #0x10]
    // ldr r0, _02241214 ; =0x0000045E
    // add r3, r2, #0
    // ldrh r0, [r5, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x14]
    // add r0, r7, #0
    // bl ov81_02240AD8
    // ldr r0, [sp, #0x1c]
    // add r0, r6, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, [sp, #0x18]
    // add r4, r4, #1
    // add r5, r5, #2
    // cmp r4, r0
    // blt _02241196
    // mov r2, #0
    // add r1, r7, #0
    // add r0, r7, #0
    // add r1, #0x60
    // add r3, r2, #0
    // str r2, [sp]
    // bl ov81_0224093C
    // mov r0, #4
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _0224120C ; =0x00000463
    // mov r1, #0
    // strb r1, [r7, r0]
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224120C: .word 0x00000463
    // _02241210: .word 0x0000045A
    // _02241214: .word 0x0000045E
    // TODO: decompile
}




void ov81_02241218(void) {
    // strh r1, [r0, r3]
    // strh r2, [r0, r1]
    // sub r1, #0x18
    // ldrh r2, [r0, r1]
    // strh r2, [r0, r1]
    // sub r1, #0x16
    // ldrh r2, [r0, r1]
    // strh r2, [r0, r1]
}




void ov81_02241238(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _022412BC ; =0x00000462
    // add r4, r3, #0
    // ldrb r1, [r4, r0]
    // add r5, r2, #0
    // add r1, r1, #1
    // strb r1, [r4, r0]
    // bl sub_0203769C
    // cmp r6, r0
    // beq _022412BA
    // ldrh r0, [r5, #2]
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // ldr r0, _022412C0 ; =0x00000458
    // strh r1, [r4, r0]
    // bl sub_0203769C
    // cmp r0, #0
    // bne _02241294
    // ldrb r0, [r4, #0x13]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bne _02241274
    // ldr r0, _022412C0 ; =0x00000458
    // mov r1, #0
    // strh r1, [r4, r0]
    // pop {r4, r5, r6, pc}
    // ldr r1, _022412C0 ; =0x00000458
    // ldrh r0, [r4, r1]
    // cmp r0, #1
    // bne _022412BA
    // ldrh r0, [r5, #4]
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // add r0, r1, #0
    // sub r0, #0x90
    // strh r2, [r4, r0]
    // ldrh r0, [r5, #6]
    // sub r1, #0x8e
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // strh r0, [r4, r1]
    // pop {r4, r5, r6, pc}
    // ldr r1, _022412C0 ; =0x00000458
    // ldrh r0, [r4, r1]
    // cmp r0, #1
    // bne _022412BA
    // ldrb r2, [r4, #0x13]
    // mov r0, #8
    // bic r2, r0
    // strb r2, [r4, #0x13]
    // ldrh r0, [r5, #4]
    // lsl r0, r0, #0x18
    // lsr r2, r0, #0x18
    // add r0, r1, #0
    // sub r0, #0x90
    // strh r2, [r4, r0]
    // ldrh r0, [r5, #6]
    // sub r1, #0x8e
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // strh r0, [r4, r1]
    // pop {r4, r5, r6, pc}
    // _022412BC: .word 0x00000462
    // _022412C0: .word 0x00000458
    // TODO: decompile
}




void ov81_022412C4(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // mov r1, #0
    // add r5, r0, #0
    // bl ov81_02240F08
    // cmp r0, #1
    // bne _022412E0
    // ldr r0, _02241320 ; =ov81_02243490
    // lsl r2, r4, #2
    // ldrh r1, [r0, r2]
    // ldr r0, _02241324 ; =ov81_02243492
    // ldrh r2, [r0, r2]
    // b _02241312
    // ldrb r0, [r5, #9]
    // bl ov80_02237254
    // cmp r0, #0
    // bne _022412F6
    // ldr r0, _02241328 ; =ov81_02243464
    // lsl r2, r4, #2
    // ldrh r1, [r0, r2]
    // ldr r0, _0224132C ; =ov81_02243466
    // ldrh r2, [r0, r2]
    // b _02241312
    // ldrb r0, [r5, #0x12]
    // cmp r0, #2
    // bne _02241308
    // ldr r0, _02241330 ; =ov81_0224345C
    // lsl r2, r4, #2
    // ldrh r1, [r0, r2]
    // ldr r0, _02241334 ; =ov81_0224345E
    // ldrh r2, [r0, r2]
    // b _02241312
    // ldr r0, _02241338 ; =ov81_02243470
    // lsl r2, r4, #2
    // ldrh r1, [r0, r2]
    // ldr r0, _0224133C ; =ov81_02243472
    // ldrh r2, [r0, r2]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r3, #0x64
    // bl ov81_02242E50
    // pop {r3, r4, r5, pc}
    // _02241320: .word ov81_02243490
    // _02241324: .word ov81_02243492
    // _02241328: .word ov81_02243464
    // _0224132C: .word ov81_02243466
    // _02241330: .word ov81_0224345C
    // _02241334: .word ov81_0224345E
    // _02241338: .word ov81_02243470
    // _0224133C: .word ov81_02243472
    // TODO: decompile
}




void ov81_02241340(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r0, r1
    ov81_02242CBC(1, r1, 2);
}




void ov81_02241364(void) {
    // ldr r0, [r4, r0]
    ov81_02242D74((0xe << 6));
    // str r1, [r4, r0]
    // ldr r0, [r4, r0]
    ov81_02242D74((0xe1 << 2), 0);
    // str r1, [r4, r0]
}




void ov81_02241398(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #1
    // add r1, r0, #0
    // bl SetBgPriority
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x64
    // bl BG_ClearCharDataRange
    // ldr r0, [r4, #0x4c]
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // add r1, r4, #0
    // ldr r0, [r4, #0x4c]
    // add r1, #0x50
    // bl ov81_02242FDC
    // ldr r0, _022413DC ; =0x0000047C
    // ldr r0, [r4, r0]
    // cmp r0, #2
    // bne _022413D2
    // add r4, #0x70
    // add r0, r4, #0
    // bl ov81_022430E8
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // pop {r4, pc}
    // _022413DC: .word 0x0000047C
    // TODO: decompile
}




void ov81_022413E0(void) {
}




void ov81_022413F4(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, _02241418 ; =0x00000464
    // add r2, sp, #4
    // ldr r0, [r4, r0]
    // add r3, sp, #0
    // bl ov81_02243228
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // bl ov81_02242DAC
    // add sp, #8
    // pop {r4, pc}
    // _02241418: .word 0x00000464
    // TODO: decompile
}




void ov81_0224141C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // ldr r0, _0224144C ; =0x00000464
    // add r2, sp, #4
    // ldr r0, [r4, r0]
    // add r3, sp, #0
    // bl ov81_02243228
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #3
    // bl ov81_02242DE4
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // bl ov81_02242DAC
    // add sp, #8
    // pop {r4, pc}
    // _0224144C: .word 0x00000464
    // TODO: decompile
}




void ov81_02241450(void) {
    // push {r4, lr}
    // mov r1, #0xf7
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r0, [r4, #0x4c]
    // ldr r1, [r4, r1]
    // mov r2, #0
    // bl ov81_02243140
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _022414D8 ; =0x00000468
    // ldr r0, [r4, r0]
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x36
    // lsl r0, r0, #4
    // ldr r0, [r1, r0]
    // bl ov81_02242F40
    // cmp r0, #0
    // bne _02241498
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // b _022414A2
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _022414DC ; =0x00000464
    // mov r1, #6
    // ldr r0, [r4, r0]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #6
    // bl ov81_0224141C
    // ldr r0, _022414DC ; =0x00000464
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl ov81_02243270
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242E08
    // pop {r4, pc}
    // _022414D8: .word 0x00000468
    // _022414DC: .word 0x00000464
    // TODO: decompile
}




void ov81_022414E0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x4c]
    // mov r1, #0
    // bl ov81_022431E0
    // ldr r1, _02241520 ; =0x00000464
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, _02241520 ; =0x00000464
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl ov81_02243270
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242E08
    // pop {r4, pc}
    // _02241520: .word 0x00000464
    // TODO: decompile
}




void ov81_02241524(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r4, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224164C ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // lsr r3, r5, #0x1f
    // add r0, #0xfe
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, r4, r0
    // mov r2, #5
    // asr r3, r3, #1
    // bl ov81_022430B4
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224164C ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x11
    // lsr r3, r5, #0x1f
    // lsl r0, r0, #4
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, r4, r0
    // mov r2, #6
    // asr r3, r3, #1
    // bl ov81_022430B4
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224164C ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x12
    // lsr r3, r5, #0x1f
    // lsl r0, r0, #4
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, r4, r0
    // mov r2, #8
    // asr r3, r3, #1
    // bl ov81_022430B4
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224164C ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x13
    // lsr r3, r5, #0x1f
    // lsl r0, r0, #4
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, r4, r0
    // mov r2, #7
    // asr r3, r3, #1
    // bl ov81_022430B4
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x12
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0224164C: .word 0x000F0E02
    // TODO: decompile
}




void ov81_02241650(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _022416C8 ; =0x00000464
    // add r2, sp, #4
    // ldr r0, [r5, r0]
    // add r3, sp, #0
    // add r4, r1, #0
    // bl ov81_02243228
    // cmp r4, #3
    // bne _0224169E
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl ov81_02242DE4
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // bl ov81_02242DAC
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // bl ov81_02242DAC
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _022416C8: .word 0x00000464
    // TODO: decompile
}




void ov81_022416CC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _02241748 ; =0x00000464
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // add r2, sp, #4
    // add r3, sp, #0
    // bl ov81_02243228
    // sub r0, r4, #4
    // cmp r0, #1
    // bhi _0224171C
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #6
    // bl ov81_02242DE4
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // bl ov81_02242DAC
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r0, #0xe2
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // bl ov81_02242DAC
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _02241748: .word 0x00000464
    // TODO: decompile
}




void ov81_0224174C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x4c]
    // mov r1, #3
    // bl ov81_022431E0
    // mov r1, #0xf7
    // lsl r1, r1, #2
    // ldr r0, [r4, #0x4c]
    // ldr r1, [r4, r1]
    // mov r2, #0
    // bl ov81_02243140
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _022417B0 ; =0x00000464
    // mov r1, #4
    // ldr r0, [r4, r0]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #4
    // bl ov81_0224141C
    // ldr r0, _022417B0 ; =0x00000464
    // ldrb r2, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02243314
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // pop {r4, pc}
    // _022417B0: .word 0x00000464
    // TODO: decompile
}




void ov81_022417B4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x4c]
    // mov r1, #0
    // bl ov81_022431E0
    // mov r1, #0xf7
    // lsl r1, r1, #2
    // ldr r0, [r4, #0x4c]
    // ldr r1, [r4, r1]
    // mov r2, #3
    // bl ov81_02243140
    // add r0, r4, #0
    // add r0, #0xf0
    // bl ScheduleWindowCopyToVram
    // ldr r1, _02241800 ; =0x00000464
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, _02241800 ; =0x00000464
    // ldrb r2, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02243314
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // pop {r4, pc}
    // _02241800: .word 0x00000464
    // TODO: decompile
}




void ov81_02241804(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _0224183C ; =0x00000464
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetNextInput
    // mov r1, #0xf7
    // lsl r1, r1, #2
    // add r4, r0, #0
    // ldr r0, [r5, #0x4c]
    // ldr r1, [r5, r1]
    // mov r2, #3
    // bl ov81_02243140
    // add r0, r5, #0
    // add r0, #0xf0
    // bl ScheduleWindowCopyToVram
    // cmp r4, #3
    // bne _02241838
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // pop {r3, r4, r5, pc}
    // nop
    // _0224183C: .word 0x00000464
    // TODO: decompile
}




void ov81_02241840(void) {
    ov81_022431E0(*((u32*)(r0 + 0x4c)), 3);
    // ldr r0, [r4, r0]
    ov81_02242D88((0xe3 << 2), 0);
}




void ov81_0224185C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r4, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r4, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0xf0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224197C ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // lsr r3, r5, #0x1f
    // add r0, #0xfe
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, r4, r0
    // mov r2, #0x14
    // asr r3, r3, #1
    // bl ov81_022430B4
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224197C ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #5
    // lsr r3, r5, #0x1f
    // lsl r0, r0, #6
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, r4, r0
    // mov r2, #0x15
    // asr r3, r3, #1
    // bl ov81_022430B4
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224197C ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x13
    // lsr r3, r5, #0x1f
    // lsl r0, r0, #4
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, r4, r0
    // mov r2, #0x16
    // asr r3, r3, #1
    // bl ov81_022430B4
    // add r0, r4, #0
    // add r0, #0xf0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _0224197C ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // lsr r3, r5, #0x1f
    // add r0, r4, #0
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, #0xf0
    // mov r2, #0x13
    // asr r3, r3, #1
    // bl ov81_022430B4
    // mov r0, #1
    // lsl r0, r0, #8
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #5
    // lsl r0, r0, #6
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x13
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // add r4, #0xf0
    // add r0, r4, #0
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // _0224197C: .word 0x000F0E02
    // TODO: decompile
}




void ov81_02241980(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x4c]
    // mov r1, #2
    // bl ov81_022431E0
    // mov r1, #0xf7
    // lsl r1, r1, #2
    // ldr r0, [r4, #0x4c]
    // ldr r1, [r4, r1]
    // mov r2, #1
    // bl ov81_02243140
    // mov r0, #0x15
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // mov r0, #0x16
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl ScheduleWindowCopyToVram
    // ldr r0, _022419DC ; =0x00000464
    // mov r1, #6
    // ldr r0, [r4, r0]
    // bl GridInputHandler_SetNextInput
    // add r0, r4, #0
    // mov r1, #6
    // bl ov81_0224141C
    // ldr r0, _022419DC ; =0x00000464
    // ldrb r2, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_022433FC
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // pop {r4, pc}
    // nop
    // _022419DC: .word 0x00000464
    // TODO: decompile
}




void ov81_022419E0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x4c]
    // mov r1, #1
    // bl ov81_022431E0
    // mov r1, #0xf7
    // lsl r1, r1, #2
    // ldr r0, [r4, #0x4c]
    // ldr r1, [r4, r1]
    // mov r2, #2
    // bl ov81_02243140
    // add r0, r4, #0
    // add r0, #0xe0
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #0
    // add r0, #0xf0
    // bl ScheduleWindowCopyToVram
    // ldr r1, _02241A34 ; =0x00000464
    // ldr r0, [r4, r1]
    // add r1, r1, #4
    // ldr r1, [r4, r1]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl GridInputHandler_SetNextInput
    // ldr r0, _02241A34 ; =0x00000464
    // ldrb r2, [r4, #9]
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_022433FC
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // pop {r4, pc}
    // _02241A34: .word 0x00000464
    // TODO: decompile
}




void ov81_02241A38(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02241A78 ; =0x00000464
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetNextInput
    // mov r1, #0xf7
    // lsl r1, r1, #2
    // add r4, r0, #0
    // ldr r0, [r5, #0x4c]
    // ldr r1, [r5, r1]
    // mov r2, #2
    // bl ov81_02243140
    // add r0, r5, #0
    // add r0, #0xe0
    // bl ScheduleWindowCopyToVram
    // add r0, r5, #0
    // add r0, #0xf0
    // bl ScheduleWindowCopyToVram
    // cmp r4, #4
    // blo _02241A74
    // mov r0, #0xe3
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // pop {r3, r4, r5, pc}
    // nop
    // _02241A78: .word 0x00000464
    // TODO: decompile
}




void ov81_02241A7C(void) {
    ov81_022431E0(*((u32*)(r0 + 0x4c)), 2);
    // ldr r0, [r4, r0]
    ov81_02242D88((0xe3 << 2), 0);
}




void ov81_02241A98(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0x15
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #0x16
    // lsl r0, r0, #4
    // add r0, r4, r0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0xe0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // add r0, #0xf0
    // mov r1, #2
    // bl FillWindowPixelBuffer
    // mov r0, #0x15
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _02241BB4 ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x15
    // lsr r3, r5, #0x1f
    // lsl r0, r0, #4
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, r4, r0
    // mov r2, #0x19
    // asr r3, r3, #1
    // bl ov81_022430B4
    // mov r0, #0x16
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _02241BB4 ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // mov r0, #0x16
    // lsr r3, r5, #0x1f
    // lsl r0, r0, #4
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, r4, r0
    // mov r2, #0x16
    // asr r3, r3, #1
    // bl ov81_022430B4
    // add r0, r4, #0
    // add r0, #0xe0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _02241BB4 ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // lsr r3, r5, #0x1f
    // add r0, r4, #0
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, #0xe0
    // mov r2, #0x17
    // asr r3, r3, #1
    // bl ov81_022430B4
    // add r0, r4, #0
    // add r0, #0xf0
    // bl GetWindowWidth
    // add r3, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // ldr r0, _02241BB4 ; =0x000F0E02
    // lsl r5, r3, #3
    // str r0, [sp, #8]
    // mov r0, #2
    // str r0, [sp, #0xc]
    // lsr r3, r5, #0x1f
    // add r0, r4, #0
    // add r3, r5, r3
    // ldr r1, [r4, #0x1c]
    // add r0, #0xf0
    // mov r2, #0x18
    // asr r3, r3, #1
    // bl ov81_022430B4
    // mov r0, #0x15
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // mov r0, #0x16
    // lsl r0, r0, #4
    // add r0, r4, r0
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, r4, #0
    // add r0, #0xe0
    // bl CopyWindowPixelsToVram_TextMode
    // add r4, #0xf0
    // add r0, r4, #0
    // bl CopyWindowPixelsToVram_TextMode
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _02241BB4: .word 0x000F0E02
    // TODO: decompile
}




void ov81_02241BB8(void) {
}




void ov81_02241BC8(void) {
}




void ov81_02241BD0(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r2, sp, #0
    *((u8*)(r2 + 0x10)) = 0x19;
    *((u8*)(r2 + 0x11)) = 0xa;
    // bic r3, r1
    *((u8*)(r2 + 0x12)) = *((u8*)(r2 + 0x12));
    // bic r3, r1
    *((u8*)(r2 + 0x12)) = *((u8*)(r2 + 0x12));
    *((u8*)(r2 + 0x13)) = 0;
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(0, *((u8*)(r2 + 0x12)));
}




void ov81_02241C0C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r0, _02241C80 ; =0x00000464
    // ldr r0, [r4, r0]
    // bl GridInputHandler_GetNextInput
    // add r2, r0, #0
    // cmp r2, #6
    // bhs _02241C7C
    // ldrb r1, [r4, #0x11]
    // mov r0, #0
    // cmp r1, #0
    // ble _02241C3E
    // mov r3, #0xf2
    // lsl r3, r3, #2
    // lsl r5, r0, #1
    // add r5, r4, r5
    // ldrh r5, [r5, r3]
    // cmp r2, r5
    // beq _02241C3E
    // add r0, r0, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, r1
    // blt _02241C2A
    // cmp r1, #0
    // beq _02241C5A
    // cmp r0, r1
    // beq _02241C5A
    // lsl r0, r1, #2
    // add r1, r4, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // b _02241C76
    // add r0, r4, #0
    // mov r3, #0
    // bl ov81_02241E68
    // ldrb r0, [r4, #0x11]
    // mov r2, #0
    // lsl r0, r0, #2
    // add r1, r4, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // mov r1, #6
    // bl Pokepic_SetAttr
    // add r0, r4, #0
    // bl ov81_02241CEC
    // pop {r3, r4, r5, pc}
    // nop
    // _02241C80: .word 0x00000464
    // TODO: decompile
}




void ov81_02241C84(void) {
    // mul r1, r0
    // add r1, #0x30
    // mul r1, r0
    // add r1, #0x48
    // str r1, [r2]
    // str r0, [r3]
}




void ov81_02241CA0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _02241CE4 ; =0x00000464
    // add r4, r1, #0
    // ldr r0, [r5, r0]
    // add r7, r2, #0
    // bl GridInputHandler_GetNextInput
    // cmp r0, #6
    // bhs _02241CE2
    // ldrb r2, [r5, #0x11]
    // mov r1, #0
    // cmp r2, #0
    // ble _02241CD4
    // mov r3, #0xf2
    // lsl r3, r3, #2
    // lsl r6, r1, #1
    // add r6, r5, r6
    // ldrh r6, [r6, r3]
    // cmp r0, r6
    // beq _02241CD4
    // add r1, r1, #1
    // lsl r1, r1, #0x10
    // lsr r1, r1, #0x10
    // cmp r1, r2
    // blt _02241CC0
    // add r0, r1, #0
    // ldr r1, _02241CE8 ; =0x0000047C
    // add r2, r4, #0
    // ldr r1, [r5, r1]
    // add r3, r7, #0
    // bl ov81_02241C84
    // pop {r3, r4, r5, r6, r7, pc}
    // _02241CE4: .word 0x00000464
    // _02241CE8: .word 0x0000047C
    // TODO: decompile
}




void ov81_02241CEC(void) {
    // add r1, sp, #4
    // add r2, sp, #0
    ov81_02241CA0();
    // ldr r0, [r4, r0]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    ov81_02242D94((0x39 << 4));
}




void ov81_02241D0C(void) {
    // push {r4, r5}
    // ldr r1, _02241D34 ; =0x00000468
    // mov r3, #0
    // ldr r5, [r0, r1]
    // add r4, r0, #0
    // sub r1, #0xa0
    // ldrh r2, [r4, r1]
    // cmp r5, r2
    // bne _02241D24
    // add r0, r3, #0
    // pop {r4, r5}
    // bx lr
    // add r3, r3, #1
    // add r4, r4, #2
    // cmp r3, #3
    // blo _02241D18
    // ldrb r0, [r0, #0x11]
    // pop {r4, r5}
    // bx lr
    // nop
    // _02241D34: .word 0x00000468
    // TODO: decompile
}




void ov81_02241D38(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _02241D8C ; =0x00000464
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetNextInput
    // add r4, r0, #0
    // cmp r4, #4
    // bhs _02241D88
    // cmp r4, #3
    // bne _02241D60
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // ldr r1, _02241D90 ; =0x0000047C
    // add r0, r4, #0
    // ldr r1, [r5, r1]
    // add r2, sp, #4
    // add r3, sp, #0
    // bl ov81_02241C84
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #4]
    // ldr r2, [sp]
    // bl ov81_02242D94
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _02241D8C: .word 0x00000464
    // _02241D90: .word 0x0000047C
    // TODO: decompile
}




void ov81_02241D94(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02241DD8 ; =0x00000464
    // ldr r0, [r5, r0]
    // bl GridInputHandler_GetNextInput
    // add r4, r0, #0
    // cmp r4, #6
    // bhs _02241DD4
    // cmp r4, #4
    // blo _02241DB8
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // pop {r3, r4, r5, pc}
    // mov r0, #0x39
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // mov r1, #0xf2
    // lsl r1, r1, #2
    // ldrh r1, [r5, r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #0
    // bl ov81_02241EDC
    // pop {r3, r4, r5, pc}
    // nop
    // _02241DD8: .word 0x00000464
    // TODO: decompile
}




void ov81_02241DDC(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, _02241E64 ; =0x0000047C
    // str r1, [sp, #8]
    // ldr r1, [r5, r0]
    // cmp r1, #3
    // bne _02241DF6
    // mov r0, #0x30
    // str r0, [sp, #0x10]
    // mov r0, #0x50
    // str r0, [sp, #0xc]
    // b _02241DFE
    // mov r0, #0x48
    // str r0, [sp, #0x10]
    // mov r0, #0x70
    // str r0, [sp, #0xc]
    // mov r4, #0
    // cmp r1, #0
    // bls _02241E5E
    // str r4, [sp, #0x14]
    // str r5, [sp, #0x18]
    // add r7, r5, #0
    // mov r2, #0xf2
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r1, [sp, #0x18]
    // lsl r2, r2, #2
    // ldrh r1, [r1, r2]
    // ldr r0, [r5, r0]
    // bl Party_GetMonByIndex
    // add r2, r0, #0
    // mov r0, #0x90
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // lsl r1, r4, #0x18
    // str r0, [sp, #4]
    // ldr r6, [sp, #0x10]
    // ldr r3, [sp, #0x14]
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // add r3, r6, r3
    // bl ov81_02240F48
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // mov r1, #6
    // mov r2, #1
    // bl Pokepic_SetAttr
    // ldr r1, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // add r4, r4, #1
    // add r0, r1, r0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // add r7, r7, #4
    // add r0, r0, #2
    // str r0, [sp, #0x18]
    // ldr r0, _02241E64 ; =0x0000047C
    // ldr r0, [r5, r0]
    // cmp r4, r0
    // blo _02241E0A
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02241E64: .word 0x0000047C
    // TODO: decompile
}




void ov81_02241E68(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r7, r2, #0
    // add r6, r3, #0
    // bl Pokepic_Delete
    // ldr r0, _02241ED8 ; =0x0000047C
    // ldr r1, [r5, r0]
    // cmp r1, #3
    // bne _02241EB0
    // sub r0, #0xbc
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl Party_GetMonByIndex
    // mov r3, #0x50
    // add r2, r0, #0
    // mov r0, #0x90
    // str r0, [sp]
    // lsl r1, r4, #0x18
    // mul r3, r4
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // add r3, #0x30
    // str r6, [sp, #4]
    // bl ov81_02240F48
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, #0xbc
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl Party_GetMonByIndex
    // mov r3, #0x70
    // add r2, r0, #0
    // mov r0, #0x90
    // str r0, [sp]
    // lsl r1, r4, #0x18
    // mul r3, r4
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // add r3, #0x48
    // str r6, [sp, #4]
    // bl ov81_02240F48
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02241ED8: .word 0x0000047C
    // TODO: decompile
}




void ov81_02241EDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // lsl r0, r4, #2
    // add r1, r5, r0
    // mov r0, #0x6b
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // add r7, r2, #0
    // add r6, r3, #0
    // bl Pokepic_Delete
    // ldr r0, _02241F4C ; =0x0000047C
    // ldr r1, [r5, r0]
    // cmp r1, #3
    // bne _02241F24
    // sub r0, #0xb8
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl Party_GetMonByIndex
    // mov r3, #0x50
    // add r2, r0, #0
    // mov r0, #0x90
    // str r0, [sp]
    // lsl r1, r4, #0x18
    // mul r3, r4
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // add r3, #0x30
    // str r6, [sp, #4]
    // bl ov81_02240F48
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, #0xb8
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl Party_GetMonByIndex
    // mov r3, #0x70
    // add r2, r0, #0
    // mov r0, #0x90
    // str r0, [sp]
    // lsl r1, r4, #0x18
    // mul r3, r4
    // add r0, r5, #0
    // lsr r1, r1, #0x18
    // add r3, #0x48
    // str r6, [sp, #4]
    // bl ov81_02240F48
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02241F4C: .word 0x0000047C
    // TODO: decompile
}




void ov81_02241F50(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // ldr r0, _02241FBC ; =0x0000047C
    // ldr r1, [r7, r0]
    // cmp r1, #3
    // bne _02241F68
    // mov r0, #0x30
    // str r0, [sp, #0x10]
    // mov r0, #0x50
    // str r0, [sp, #0xc]
    // b _02241F70
    // mov r0, #0x48
    // str r0, [sp, #0x10]
    // mov r0, #0x70
    // str r0, [sp, #0xc]
    // mov r4, #0
    // cmp r1, #0
    // bls _02241FB8
    // add r6, r4, #0
    // add r5, r7, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // mov r1, #1
    // add r0, r0, r6
    // str r0, [sp, #4]
    // mov r0, #0x90
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r7, r0
    // mov r2, #3
    // add r3, r1, #0
    // bl ov81_02242CBC
    // mov r1, #0xe7
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // ldr r0, [sp, #0xc]
    // add r4, r4, #1
    // add r6, r6, r0
    // ldr r0, _02241FBC ; =0x0000047C
    // add r5, r5, #4
    // ldr r0, [r7, r0]
    // cmp r4, r0
    // blo _02241F7A
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02241FBC: .word 0x0000047C
    // TODO: decompile
}




void ov81_02241FC0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _02241FE8 ; =0x0000047C
    // mov r4, #0
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // bls _02241FE6
    // ldr r7, _02241FE8 ; =0x0000047C
    // add r5, r6, #0
    // mov r0, #0xe7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ov81_02242D74
    // ldr r0, [r6, r7]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, r0
    // blo _02241FD2
    // pop {r3, r4, r5, r6, r7, pc}
    // _02241FE8: .word 0x0000047C
    // TODO: decompile
}




void ov81_02241FEC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _02242054 ; =0x0000047C
    // mov r4, #0
    // ldr r0, [r6, r0]
    // cmp r0, #0
    // bls _02242052
    // mov r7, #0xe7
    // add r5, r6, #0
    // lsl r7, r7, #2
    // ldrb r0, [r6, #0x11]
    // cmp r4, r0
    // bne _0224201C
    // mov r0, #0xe7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl ov81_02242DFC
    // ldr r0, [r5, r7]
    // mov r1, #1
    // bl ov81_02242D88
    // b _02242046
    // cmp r4, r0
    // bhs _0224203A
    // mov r0, #0xe7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #2
    // bl ov81_02242DFC
    // mov r0, #0xe7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // b _02242046
    // mov r0, #0xe7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // ldr r0, _02242054 ; =0x0000047C
    // add r4, r4, #1
    // ldr r0, [r6, r0]
    // add r5, r5, #4
    // cmp r4, r0
    // blo _02242000
    // pop {r3, r4, r5, r6, r7, pc}
    // _02242054: .word 0x0000047C
    // TODO: decompile
}




void ov81_02242058(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _022420AC ; =0x0000047C
    // add r7, r1, #0
    // ldr r0, [r6, r0]
    // mov r4, #0
    // cmp r0, #0
    // bls _022420A8
    // add r5, r6, #0
    // ldr r0, _022420B0 ; =0x00000468
    // ldr r0, [r6, r0]
    // cmp r4, r0
    // bne _02242084
    // cmp r7, #1
    // bne _02242084
    // mov r0, #0xe7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #3
    // bl ov81_02242DFC
    // b _02242090
    // mov r0, #0xe7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #2
    // bl ov81_02242DFC
    // mov r0, #0xe7
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl ov81_02242D88
    // ldr r0, _022420AC ; =0x0000047C
    // add r4, r4, #1
    // ldr r0, [r6, r0]
    // add r5, r5, #4
    // cmp r4, r0
    // blo _0224206A
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022420AC: .word 0x0000047C
    // _022420B0: .word 0x00000468
    // TODO: decompile
}




void ov81_022420B4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // ldr r0, _0224216C ; =0x0000047C
    // ldr r0, [r5, r0]
    // cmp r0, #3
    // bne _022420CA
    // mov r0, #0x50
    // mov r7, #0x10
    // str r0, [sp, #0xc]
    // b _022420D0
    // mov r0, #0x70
    // mov r7, #0x28
    // str r0, [sp, #0xc]
    // mov r6, #0
    // add r4, r6, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r2, r6, #0
    // add r1, r0, #0
    // mul r1, r4
    // add r0, r7, r1
    // str r0, [sp, #4]
    // mov r0, #0xb0
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #2
    // mov r3, #0
    // bl ov81_02242CBC
    // lsl r1, r4, #2
    // add r2, r5, r1
    // mov r1, #0xea
    // lsl r1, r1, #2
    // str r0, [r2, r1]
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #3
    // blo _022420D4
    // add r0, r1, #0
    // add r0, #0xd4
    // ldr r1, [r5, r0]
    // cmp r1, #2
    // bne _02242124
    // sub r0, #0xcc
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // mov r6, #0
    // cmp r4, #6
    // bhs _02242166
    // lsl r0, r4, #2
    // add r7, r5, r0
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x71
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #3
    // add r2, r6, #0
    // mov r3, #0
    // bl ov81_02242D18
    // mov r1, #0xea
    // lsl r1, r1, #2
    // str r0, [r7, r1]
    // add r0, r1, #0
    // ldr r0, [r7, r0]
    // mov r1, #0
    // bl ov81_02242D88
    // add r0, r6, #1
    // lsl r0, r0, #0x10
    // lsr r6, r0, #0x10
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #6
    // blo _0224212A
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224216C: .word 0x0000047C
    // TODO: decompile
}




void ov81_02242170(void) {
}




void ov81_0224218C(void) {
    // add r1, r5, r0
    // ldrh r0, [r1, r0]
    // add r1, r5, r0
    // ldr r0, [r1, r0]
    ov81_02242F30((0x36 << 4), (((3 - 3) << 0x18) >> 0x18));
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r1, [sp]
    // sub r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // add r6, r5, r0
    // ldr r0, [r6, r0]
    ov81_02242DCC((0xea << 2), r3, r3);
    // ldr r0, [r6, r7]
    ov81_02242D88(1);
    // add r1, r5, r0
    // ldr r0, [r1, r0]
    ov81_02242D88((0xea << 2), 0);
}




void ov81_02242218(void) {
    Party_GetMonByIndex(r1, r2);
    // str r0, [sp, #0x1c]
    GetMonData(5, 0);
    // ldr r0, [sp, #0x1c]
    GetMonData((r0 << 0x10), 0x70, 0);
    // str r0, [sp, #0x18]
    // ldr r2, [sp, #0x18]
    GetMonIconNaixEx(r7, 0);
    // str r0, [sp]
    // add r3, sp, #0x24
    GfGfxLoader_GetCharData(0x14, r0, 0);
    // str r0, [sp, #0x20]
    // ldr r1, [r5, r0]
    // add r1, r5, r1
    // sub r0, #0xec
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #0x24]
    ov81_02242E14((0x12 << 6), *((u32*)((r1 << 2) + 0x14)), (2 << 8), 2);
    // ldr r0, [sp, #0x20]
    Heap_Free();
    // ldr r1, [sp, #0x18]
    GetMonIconPaletteEx(r7, 0);
    // ldr r2, [r5, r0]
    // sub r0, #0xec
    // add r2, r5, r2
    // ldr r0, [r2, r0]
    ov81_02242E08((0x12 << 6), r0, (r2 << 2));
    // ldr r1, [r5, r0]
    // sub r0, #0xec
    // add r1, r5, r1
    // ldr r0, [r1, r0]
    ov81_02242D88((0x12 << 6), 1);
    // ldr r2, [r5, r1]
    // eor r0, r2
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // sub r1, #0xec
    // add r0, r5, r0
    // ldr r0, [r0, r1]
    ov81_02242D88((1 << 2), 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // add r5, #0xd0
    // str r4, [sp, #0x14]
    ov81_022409B0(r5, r5, ((r6 << 0x18) >> 0x18), 4);
}




void ov81_02242300(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r1, #0
    // add r5, r0, #0
    // cmp r6, r2
    // bhs _022423C8
    // mov r4, #0
    // str r4, [sp, #0x18]
    // ldrb r0, [r5, #0x11]
    // cmp r0, #0
    // ble _02242364
    // add r7, r5, #0
    // add r7, #0x50
    // lsl r0, r4, #1
    // add r1, r5, r0
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r2, [r1, r0]
    // cmp r6, r2
    // bne _0224232C
    // mov r0, #1
    // str r0, [sp, #0x18]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xf
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // add r1, r4, #2
    // lsl r1, r1, #4
    // lsl r2, r2, #0x18
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r1, r7, r1
    // lsr r2, r2, #0x18
    // mov r3, #4
    // bl ov81_022409B0
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldrb r0, [r5, #0x11]
    // cmp r4, r0
    // blt _0224231A
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // bne _0224239C
    // mov r2, #0
    // str r2, [sp]
    // mov r1, #0xf
    // str r1, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r2, [sp, #0x10]
    // lsl r0, r1, #6
    // add r2, r5, #0
    // add r1, r4, #2
    // ldr r0, [r5, r0]
    // add r2, #0x50
    // lsl r1, r1, #4
    // add r1, r2, r1
    // lsl r2, r6, #0x18
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // lsr r2, r2, #0x18
    // mov r3, #4
    // bl ov81_022409B0
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, _022423CC ; =0x0000047C
    // ldr r0, [r5, r0]
    // cmp r4, r0
    // bhs _022423C8
    // add r6, r5, #0
    // add r6, #0x50
    // add r0, r4, #2
    // lsl r7, r0, #4
    // add r0, r6, r7
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r6, r7
    // bl ScheduleWindowCopyToVram
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, _022423CC ; =0x0000047C
    // ldr r0, [r5, r0]
    // cmp r4, r0
    // blo _022423A8
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _022423CC: .word 0x0000047C
    // TODO: decompile
}




void ov81_022423D0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, _0224241C ; =0x0000047C
    // add r7, r1, #0
    // ldr r0, [r5, r0]
    // mov r4, #0
    // cmp r0, #0
    // bls _02242416
    // add r6, r5, #0
    // add r6, #0x50
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xf
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r4, #2
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // lsl r1, r1, #4
    // lsl r2, r4, #0x18
    // add r0, r5, #0
    // add r1, r6, r1
    // lsr r2, r2, #0x18
    // mov r3, #4
    // str r7, [sp, #0x14]
    // bl ov81_022409B0
    // ldr r0, _0224241C ; =0x0000047C
    // add r4, r4, #1
    // ldr r0, [r5, r0]
    // cmp r4, r0
    // blo _022423E6
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224241C: .word 0x0000047C
    // TODO: decompile
}




void ov81_02242420(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r5, r0, #0
    // ldr r0, _022424A8 ; =0x0000047C
    // mov r4, #0
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bls _022424A4
    // add r6, r5, #0
    // lsl r0, r1, #0x18
    // add r6, #0x50
    // lsr r7, r0, #0x18
    // mov r0, #0xf2
    // lsl r0, r0, #2
    // ldrh r0, [r5, r0]
    // cmp r0, r4
    // bne _0224246E
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xf
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0xf1
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r1, r4, #2
    // lsl r1, r1, #4
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r1, r6, r1
    // add r2, r7, #0
    // mov r3, #4
    // bl ov81_022409B0
    // b _0224249A
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xf
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // mov r0, #0xf
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // add r1, r4, #2
    // lsl r1, r1, #4
    // lsl r2, r4, #0x18
    // str r0, [sp, #0x14]
    // add r0, r5, #0
    // add r1, r6, r1
    // lsr r2, r2, #0x18
    // mov r3, #4
    // bl ov81_022409B0
    // ldr r0, _022424A8 ; =0x0000047C
    // add r4, r4, #1
    // ldr r0, [r5, r0]
    // cmp r4, r0
    // blo _02242438
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _022424A8: .word 0x0000047C
    // TODO: decompile
}




void ov81_022424AC(void) {
    // ldrh r1, [r0, r6]
    // add r0, #0x50
    // add r0, r0, r1
    ClearWindowTilemapAndScheduleTransfer(((r1 + 2) << 4), r1);
    // str r1, [sp]
    // str r3, [sp, #4]
    // str r3, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r1, [r0, r1]
    // add r5, #0x50
    // str r1, [sp, #0x14]
    // add r1, r5, r4
    ov81_022409B0((r6 - 4), ((r2 << 0x18) >> 0x18), 4);
    // add r0, r5, r4
    ScheduleWindowCopyToVram();
}




void ov81_02242500(void) {
}




void ov81_02242514(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02242580
    // ldr r1, _02242584 ; =0x00000478
    // ldr r1, [r4, r1]
    // cmp r1, #0xff
    // beq _02242580
    // bl PaletteData_GetSelectedBuffersBitmask
    // cmp r0, #0
    // bne _02242580
    // ldr r0, _02242584 ; =0x00000478
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0224255A
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // ldr r0, _02242588 ; =0x0000FFFF
    // mov r1, #4
    // str r0, [sp, #8]
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r2, #8
    // mov r3, #2
    // bl PaletteData_BeginPaletteFade
    // b _02242576
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, _02242588 ; =0x0000FFFF
    // mov r1, #4
    // str r0, [sp, #8]
    // mov r0, #0x1a
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r2, #8
    // mov r3, #2
    // bl PaletteData_BeginPaletteFade
    // ldr r1, _02242584 ; =0x00000478
    // mov r0, #1
    // ldr r2, [r4, r1]
    // eor r0, r2
    // str r0, [r4, r1]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _02242584: .word 0x00000478
    // _02242588: .word 0x0000FFFF
    // TODO: decompile
}




void ov81_0224258C(void) {
    // push {r3, r4}
    // ldr r4, _022425BC ; =0x00000484
    // strb r1, [r0, r4]
    // add r1, r4, #1
    // strb r2, [r0, r1]
    // ldr r2, _022425C0 ; =0xFFFFFFF8
    // add r1, r4, #2
    // strb r3, [r0, r1]
    // add r2, sp
    // ldrb r3, [r2, #0x10]
    // add r1, r4, #3
    // strb r3, [r0, r1]
    // ldrb r2, [r2, #0x14]
    // add r1, r4, #7
    // strb r2, [r0, r1]
    // mov r2, #0
    // add r1, r4, #4
    // strb r2, [r0, r1]
    // add r1, r4, #5
    // strb r2, [r0, r1]
    // add r1, r4, #6
    // strb r2, [r0, r1]
    // pop {r3, r4}
    // bx lr
    // _022425BC: .word 0x00000484
    // _022425C0: .word 0xFFFFFFF8
    // TODO: decompile
}




void ov81_022425C4(void) {
}




void ov81_022425D8(void) {
}




void ov81_022425EC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // ldr r3, _0224268C ; =0x00000489
    // add r4, r0, #0
    // ldrb r0, [r4, r3]
    // cmp r0, #0
    // bne _02242656
    // add r0, r3, #1
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // bne _02242624
    // sub r0, r3, #3
    // ldrb r0, [r4, r0]
    // sub r2, r3, #5
    // mov r1, #5
    // str r0, [sp]
    // sub r0, r3, #2
    // ldrb r0, [r4, r0]
    // sub r3, r3, #4
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // ldrb r2, [r4, r2]
    // ldrb r3, [r4, r3]
    // ldr r0, [r4, #0x4c]
    // bl BgTilemapRectChangePalette
    // b _02242644
    // sub r0, r3, #3
    // ldrb r0, [r4, r0]
    // sub r2, r3, #5
    // mov r1, #5
    // str r0, [sp]
    // sub r0, r3, #2
    // ldrb r0, [r4, r0]
    // sub r3, r3, #4
    // str r0, [sp, #4]
    // mov r0, #9
    // str r0, [sp, #8]
    // ldrb r2, [r4, r2]
    // ldrb r3, [r4, r3]
    // ldr r0, [r4, #0x4c]
    // bl BgTilemapRectChangePalette
    // ldr r0, [r4, #0x4c]
    // mov r1, #5
    // bl ScheduleBgTilemapBufferTransfer
    // ldr r1, _02242690 ; =0x0000048A
    // mov r0, #1
    // ldrb r2, [r4, r1]
    // eor r0, r2
    // strb r0, [r4, r1]
    // ldr r1, _0224268C ; =0x00000489
    // ldrb r0, [r4, r1]
    // add r0, r0, #1
    // strb r0, [r4, r1]
    // ldrb r0, [r4, r1]
    // cmp r0, #2
    // bne _02242684
    // sub r0, r1, #1
    // ldrb r0, [r4, r0]
    // add r2, r0, #1
    // sub r0, r1, #1
    // strb r2, [r4, r0]
    // ldrb r0, [r4, r0]
    // cmp r0, #4
    // bne _02242680
    // add r0, r1, #2
    // ldrb r0, [r4, r0]
    // add sp, #0xc
    // strb r0, [r4, #8]
    // mov r0, #0
    // pop {r3, r4, pc}
    // mov r0, #0
    // strb r0, [r4, r1]
    // mov r0, #1
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0224268C: .word 0x00000489
    // _02242690: .word 0x0000048A
    // TODO: decompile
}




void ov81_02242694(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // cmp r1, #1
    // bne _022426D2
    // mov r0, #0xa
    // str r0, [sp]
    // ldr r0, _022426FC ; =0x04001050
    // mov r1, #0
    // mov r2, #0xf
    // mov r3, #6
    // bl G2x_SetBlendAlpha_
    // ldrb r0, [r5, #0x12]
    // mov r6, #0
    // cmp r0, #0
    // bls _022426FA
    // mov r7, #0x36
    // add r4, r5, #0
    // lsl r7, r7, #4
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _022426C6
    // mov r1, #1
    // bl ov81_02242FBC
    // ldrb r0, [r5, #0x12]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r0
    // blo _022426BA
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02242700 ; =0x04000050
    // mov r6, #0
    // strh r6, [r0]
    // ldrb r0, [r5, #0x12]
    // cmp r0, #0
    // bls _022426FA
    // mov r7, #0x36
    // add r4, r5, #0
    // lsl r7, r7, #4
    // ldr r0, [r4, r7]
    // cmp r0, #0
    // beq _022426F0
    // mov r1, #0
    // bl ov81_02242FBC
    // ldrb r0, [r5, #0x12]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, r0
    // blo _022426E4
    // pop {r3, r4, r5, r6, r7, pc}
    // _022426FC: .word 0x04001050
    // _02242700: .word 0x04000050
    // TODO: decompile
}




void ov81_02242704(void) {
}




void ov81_02242710(void) {
}




void ov81_0224271C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4, #0x4c]
    // mov r1, #2
    // mov r2, #1
    // mov r3, #0x64
    // bl sub_0201956C
    // ldr r1, _02242758 ; =0x00000474
    // mov r2, #4
    // str r0, [r4, r1]
    // str r2, [sp]
    // ldr r0, [r4, r1]
    // mov r1, #0
    // mov r3, #0x12
    // bl sub_020195F4
    // mov r0, #1
    // ldr r2, _02242758 ; =0x00000474
    // str r0, [sp]
    // ldr r0, [r4, r2]
    // sub r2, #0x98
    // ldr r2, [r4, r2]
    // mov r1, #0
    // mov r3, #0x90
    // bl sub_020196B8
    // add sp, #4
    // pop {r3, r4, pc}
    // _02242758: .word 0x00000474
    // TODO: decompile
}




void ov81_0224275C(void) {
    // ldr r1, _02242764 ; =0x00000474
    // ldr r3, _02242768 ; =sub_020195C0
    // ldr r0, [r0, r1]
    // bx r3
    // _02242764: .word 0x00000474
    // _02242768: .word sub_020195C0
    // TODO: decompile
}




void ov81_0224276C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // bl ov81_02242B90
    // bl NNS_G2dInitOamManagerModule
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x80
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x20
    // str r3, [sp, #0xc]
    // mov r2, #0x64
    // str r2, [sp, #0x10]
    // add r2, r0, #0
    // bl OamManager_Create
    // mov r0, #0x20
    // add r1, r5, #4
    // mov r2, #0x64
    // bl G2dRenderer_Init
    // mov r2, #2
    // str r0, [r5]
    // add r0, r5, #4
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // ldr r4, _02242A88 ; =ov81_02243594
    // mov r7, #0
    // add r6, r5, #0
    // ldrb r0, [r4]
    // add r1, r7, #0
    // mov r2, #0x64
    // bl Create2DGfxResObjMan
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // add r7, r7, #1
    // add r4, r4, #1
    // add r6, r6, #4
    // cmp r7, #4
    // blt _022427B0
    // mov r3, #1
    // str r3, [sp]
    // str r3, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x28
    // bl AddCharResObjFromNarc
    // mov r1, #0x53
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #1
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0x64
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x3e
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #0x15
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r3, #1
    // str r3, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd0
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x29
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x55
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r3, #1
    // str r3, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd4
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x2a
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x56
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #2
    // str r0, [sp]
    // mov r3, #1
    // str r3, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x2b
    // bl AddCharResObjFromNarc
    // mov r1, #0x57
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x64
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x3f
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #0x16
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #2
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd0
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x2c
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x59
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd4
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x2d
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x5a
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r3, #1
    // bl AddCharResObjFromNarc
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #8
    // str r0, [sp, #8]
    // mov r0, #0x64
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x34
    // bl AddPlttResObjFromNarc
    // mov r1, #5
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r2, #2
    // str r2, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd0
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x51
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd4
    // mov r2, #1
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // add r3, r2, #0
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x52
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x2b
    // mov r3, #1
    // bl AddCharResObjFromNarc
    // mov r1, #0x5b
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x64
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x3f
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #0x17
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #3
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd0
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x2c
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x5d
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #3
    // str r0, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd4
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x2d
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x5e
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r4, #0
    // add r6, r5, #0
    // mov r7, #2
    // add r0, r4, #4
    // str r0, [sp]
    // str r7, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xc8
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x2e
    // mov r3, #1
    // bl AddCharResObjFromNarc
    // mov r1, #0x5f
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // bl sub_02074490
    // add r2, r0, #0
    // add r0, r4, #4
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0x64
    // str r0, [sp, #0xc]
    // add r0, #0xcc
    // ldr r0, [r5, r0]
    // mov r1, #0x14
    // mov r3, #0
    // bl AddPlttResObjFromNarc
    // mov r1, #6
    // lsl r1, r1, #6
    // str r0, [r6, r1]
    // add r0, r4, #4
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd0
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x2f
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x61
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // add r0, r4, #4
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // add r0, #0xd4
    // ldr r0, [r5, r0]
    // mov r1, #0xb8
    // mov r2, #0x30
    // mov r3, #1
    // bl AddCellOrAnimResObjFromNarc
    // mov r1, #0x62
    // lsl r1, r1, #2
    // str r0, [r6, r1]
    // add r4, r4, #1
    // add r6, #0x10
    // cmp r4, #2
    // blt _022429C8
    // add r7, r1, #0
    // add r6, r1, #0
    // mov r4, #0
    // sub r7, #0x4c
    // sub r6, #0x48
    // ldr r0, [r5, r7]
    // bl sub_0200ACF0
    // ldr r0, [r5, r6]
    // bl sub_0200AF94
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #6
    // blt _02242A60
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02242A88: .word ov81_02243594
    // TODO: decompile
}




void ov81_02242A8C(void) {
    // str r1, [sp]
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x90]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [r5, r0]
    // str r2, [sp, #0x14]
    // ldr r2, [r5, r2]
    // str r2, [sp, #0x18]
    // add r2, #8
    // ldr r2, [r5, r2]
    // add r0, #0xc
    // str r2, [sp, #0x1c]
    // ldr r0, [r5, r0]
    // str r0, [sp, #0x20]
    // str r3, [sp, #0x24]
    // str r3, [sp, #0x28]
    // add r0, sp, #0x5c
    CreateSpriteResourcesHeader((0x4b << 2), r1, r1);
    // str r0, [sp, #0x2c]
    // add r0, sp, #0x5c
    // str r0, [sp, #0x30]
    // str r1, [sp, #0x34]
    // str r1, [sp, #0x38]
    // str r1, [sp, #0x3c]
    // str r0, [sp, #0x40]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x48]
    // add r0, sp, #0x2c
    *((u16*)((1 << 0xc) + 0x20)) = 0;
    // str r4, [sp, #0x50]
    // add r0, sp, #0x80
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x58]
    // add r0, sp, #0x80
    // ldr r1, [sp, #0x38]
    // add r0, r1, r0
    // str r0, [sp, #0x38]
    // add r0, sp, #0x2c
    Sprite_CreateAffine((2 << 0x14), 0);
    Sprite_SetAnimActiveFlag(1);
    Sprite_SetAnimCtrlSeq(r4, r6);
}




void ov81_02242B38(void) {
    // add r6, r5, r0
    // ldr r0, [r6, r0]
    sub_0200AEB0((0x4f << 2));
    // ldr r0, [r6, r7]
    sub_0200B0A8();
    // add r0, r5, r0
    // ldr r0, [r0, r6]
    Destroy2DGfxResObjMan((0 << 2));
    SpriteList_Delete(*((u32*)r5));
    OamManager_Free();
    ObjCharTransfer_Destroy();
    ObjPlttTransfer_Destroy();
}




void ov81_02242B90(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _02242BC0 ; =ov81_02243598
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r1, _02242BC4 ; =0x00100010
    // add r0, r2, #0
    // add r2, r1, #0
    // bl ObjCharTransfer_InitEx
    // mov r0, #8
    // mov r1, #0x64
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _02242BC0: .word ov81_02243598
    // _02242BC4: .word 0x00100010
    // TODO: decompile
}




void ov81_02242BC8(void) {
    // push {r3, lr}
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _02242C30 ; =0x04000008
    // mov r1, #3
    // ldrh r2, [r0]
    // bic r2, r1
    // strh r2, [r0]
    // add r0, #0x58
    // ldrh r2, [r0]
    // ldr r1, _02242C34 ; =0xFFFFCFFD
    // and r2, r1
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrh r3, [r0]
    // add r1, r1, #2
    // and r3, r2
    // mov r2, #0x10
    // orr r2, r3
    // strh r2, [r0]
    // ldrh r3, [r0]
    // ldr r2, _02242C38 ; =0x0000CFFB
    // and r3, r2
    // strh r3, [r0]
    // ldrh r3, [r0]
    // sub r2, #0x1c
    // and r3, r1
    // mov r1, #8
    // orr r1, r3
    // strh r1, [r0]
    // ldrh r1, [r0]
    // and r1, r2
    // strh r1, [r0]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl G3X_SetFog
    // mov r0, #0
    // ldr r2, _02242C3C ; =0x00007FFF
    // add r1, r0, #0
    // mov r3, #0x3f
    // str r0, [sp]
    // bl G3X_SetClearColor
    // ldr r1, _02242C40 ; =0xBFFF0000
    // ldr r0, _02242C44 ; =0x04000580
    // str r1, [r0]
    // pop {r3, pc}
    // _02242C30: .word 0x04000008
    // _02242C34: .word 0xFFFFCFFD
    // _02242C38: .word 0x0000CFFB
    // _02242C3C: .word 0x00007FFF
    // _02242C40: .word 0xBFFF0000
    // _02242C44: .word 0x04000580
    // TODO: decompile
}




void ov81_02242C48(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl Thunk_G3X_Reset
    // ldr r2, _02242C78 ; =0x04000440
    // mov r3, #0
    // add r1, r2, #0
    // str r3, [r2]
    // add r1, #0x14
    // str r3, [r1]
    // mov r0, #2
    // str r0, [r2]
    // str r3, [r1]
    // bl NNS_G3dGlbFlushP
    // bl NNS_G2dSetupSoftwareSpriteCamera
    // add r0, r4, #0
    // bl PokepicManager_DrawAll
    // ldr r0, _02242C7C ; =0x04000540
    // mov r1, #1
    // str r1, [r0]
    // pop {r4, pc}
    // _02242C78: .word 0x04000440
    // _02242C7C: .word 0x04000540
    // TODO: decompile
}




void ov81_02242C80(void) {
    // add r0, sp, #0x10
    GetPokemonSpriteCharAndPlttNarcIds(r2, 2);
    // ldr r0, [sp, #0x34]
    // ldr r3, [sp, #0x30]
    // str r0, [sp]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #0x10
    PokepicManager_CreatePokepic(r5, r6);
}




void ov81_02242CB0(void) {
}




void ov81_02242CBC(void) {
    // str r2, [sp, #8]
    Heap_Alloc(0x64, 0xc);
    // strb r1, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 5)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
    *((u8*)(r0 + 8)) = 0;
    *((u8*)(r0 + 9)) = 0;
    *((u8*)(r0 + 0xa)) = 0;
    // ldr r0, [sp, #0x24]
    *((u8*)(r0 + 0xb)) = 0;
    // str r0, [r4]
    // ldr r0, [sp, #0x28]
    // ldr r2, [sp, #8]
    *((u32*)(r0 + 4)) = r0;
    // str r5, [sp]
    // str r1, [sp, #4]
    // ldr r3, [sp, #0x20]
    ov81_02242A8C(r6, r7);
    *((u32*)(r4 + 8)) = r0;
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    ov81_02242D94(r4);
}




void ov81_02242D18(void) {
    // str r2, [sp, #8]
    Heap_Alloc(0x64, 0xc);
    // strb r0, [r4]
    *((u8*)(r0 + 1)) = 0;
    *((u8*)(r0 + 2)) = 0;
    *((u8*)(r0 + 3)) = 0;
    *((u8*)(r0 + 4)) = 0;
    *((u8*)(r0 + 5)) = 0;
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
    *((u8*)(r0 + 8)) = 0;
    *((u8*)(r0 + 9)) = 0;
    *((u8*)(r0 + 0xa)) = 0;
    *((u8*)(r0 + 0xb)) = 0;
    // ldr r0, [sp, #0x24]
    // ldr r2, [sp, #8]
    // str r0, [r4]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x20]
    *((u32*)(r0 + 4)) = 0;
    // str r5, [sp]
    // str r0, [sp, #4]
    ov81_02242A8C(r6, r7);
    *((u32*)(r4 + 8)) = r0;
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #0x28]
    ov81_02242DAC(r4);
}




u32 ov81_02242D74(void) {
}




void ov81_02242D88(void) {
}




void ov81_02242D94(void) {
}




void ov81_02242DAC(void) {
}




void ov81_02242DCC(void) {
}




void ov81_02242DD8(void) {
}




void ov81_02242DE4(void) {
}




void ov81_02242DFC(void) {
}




void ov81_02242E08(void) {
}




void ov81_02242E14(void) {
    Sprite_GetImageProxy(*((u32*)(r0 + 8)));
    NNS_G2dGetImageLocation(r6);
    DC_FlushRange(r5, r4);
    GX_LoadOBJ(r5, r7, r4);
    GXS_LoadOBJ(r5, r7, r4);
}




void ov81_02242E50(void) {
    Heap_Alloc(r3, 0x10);
    // strb r0, [r2]
    // strh r1, [r4]
    *((u32*)(r0 + 4)) = r5;
    *((u32*)(r0 + 8)) = r6;
    // str r1, [sp]
    // str r0, [sp, #4]
    ov81_02242A8C(r7, 0, 0, 0xa);
    *((u32*)(r4 + 0xc)) = r0;
    ov81_02242F10(r4, r5, r6);
    Sprite_SetPaletteOverride(*((u32*)(r4 + 0xc)), 1);
}




u32 ov81_02242EA4(void) {
}




void ov81_02242EB8(void) {
}




void ov81_02242EC4(void) {
    Sprite_GetMatrixPtr(*((u32*)(r1 + 0xc)));
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // mov ip, r2
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp]
    // add r0, r1, r0
    // str r0, [sp]
    // ldr r1, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // mov r1, ip
    Sprite_SetMatrix(*((u32*)(r4 + 0xc)), r0);
    Sprite_GetMatrixPtr(*((u32*)(r4 + 0xc)));
    // ldmia r2!, {r0, r1}
    // stmia r5!, {r0, r1}
    // str r0, [r5]
}




void ov81_02242F10(void) {
}




void ov81_02242F30(void) {
}




void ov81_02242F3C(void) {
}




void ov81_02242F40(void) {
    // ldrh r0, [r0]
}




void ov81_02242F48(void) {
}




void ov81_02242F54(void) {
}




void ov81_02242F60(void) {
    ov81_02242F30();
    // asr r1, r2, #0xb
    // add r1, r2, r1
    // asr r1, r1, #0xc
    // add r1, #0xf8
    // str r1, [sp]
    // add r1, sp, #0
    // str r0, [sp, #4]
    Sprite_SetMatrix(*((u32*)(r4 + 0xc)), ((r1 >> 0x14) << 0xc), *((u32*)r0));
}




void ov81_02242F8C(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}




void ov81_02242F90(void) {
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}




void ov81_02242F94(void) {
    Sprite_SetAnimSpeed(*((u32*)(r0 + 0xc)), (1 << 0xc));
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0xc)), r4);
}




void ov81_02242FB0(void) {
}




void ov81_02242FBC(void) {
}




u32 ov81_02242FC8(void) {
}




void ov81_02242FDC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // mov r4, #0
    // ldr r2, _02243008 ; =ov81_022435A8
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
    // cmp r4, #0x12
    // blo _02242FE4
    // pop {r3, r4, r5, r6, r7, pc}
    // _02243008: .word ov81_022435A8
    // TODO: decompile
}




void ov81_0224300C(void) {
}




void ov81_02243028(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r4, r0, #0
    // bl GetWindowBgId
    // add r1, r0, #0
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x64
    // str r0, [sp, #4]
    // ldr r0, [r4]
    // ldr r2, _02243064 ; =0x000003E2
    // mov r3, #0xb
    // bl LoadUserFrameGfx2
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // ldr r2, _02243064 ; =0x000003E2
    // add r0, r4, #0
    // mov r1, #1
    // mov r3, #0xb
    // bl DrawFrameAndWindow2
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _02243064: .word 0x000003E2
    // TODO: decompile
}




void ov81_02243068(void) {
    // ldr r0, [sp, #0x30]
    // ldr r0, [sp, #0x28]
    FontID_String_GetWidth(0);
    // sub r5, r5, r0
    // ldr r0, [sp, #0x28]
    FontID_String_GetWidth(0);
    // sub r5, r5, r0
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // ldr r1, [sp, #0x28]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, r7, r5);
}




void ov81_022430B4(void) {
    NewString_ReadMsgData(r1, r2);
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r0, [sp]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #8]
    ov81_02243068(r5, r0, r6);
    String_Delete(r4);
}




void ov81_022430E8(void) {
}




void ov81_02243100(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // add r2, r0, #0
    // ldr r0, _0224313C ; =0x000003D9
    // add r4, r1, #0
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // mov r0, #0x64
    // str r0, [sp, #0xc]
    // add r0, r4, #0
    // mov r1, #0x86
    // mov r3, #5
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r0, #0x40
    // mov r1, #0xc2
    // str r0, [sp]
    // mov r0, #0x64
    // add r3, r1, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #4
    // add r3, #0x5e
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // add sp, #0x10
    // pop {r4, pc}
    // _0224313C: .word 0x000003D9
    // TODO: decompile
}




void ov81_02243140(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x28
    // add r7, r0, #0
    // add r4, r2, #0
    // mov r0, #0x64
    // str r0, [sp]
    // add r0, r1, #0
    // add r1, r4, #0
    // add r1, #0x87
    // mov r2, #1
    // add r3, sp, #0x24
    // bl GfGfxLoader_GetScrnDataFromOpenNarc
    // str r0, [sp, #0x20]
    // cmp r4, #0
    // bne _0224316A
    // mov r0, #0xb
    // str r0, [sp, #0x10]
    // mov r0, #7
    // str r0, [sp, #0x18]
    // b _02243172
    // mov r0, #0xe
    // str r0, [sp, #0x10]
    // mov r0, #4
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x1c]
    // add r0, #0xc
    // str r0, [sp, #0x1c]
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // cmp r0, #0
    // bls _022431D2
    // ldr r1, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // mov r4, #0
    // add r2, r1, r0
    // lsl r1, r0, #6
    // ldr r0, [sp, #0x1c]
    // add r5, r0, r1
    // lsl r0, r2, #0x18
    // lsr r6, r0, #0x18
    // str r6, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #9
    // str r0, [sp, #0xc]
    // lsl r2, r4, #1
    // ldrh r3, [r5, r2]
    // ldr r2, _022431DC ; =0x000003D9
    // add r0, r7, #0
    // add r2, r3, r2
    // lsl r2, r2, #0x10
    // mov r1, #5
    // lsr r2, r2, #0x10
    // add r3, r4, #0
    // bl FillBgTilemapRect
    // add r0, r4, #1
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // cmp r4, #0x20
    // blo _02243196
    // ldr r0, [sp, #0x14]
    // add r0, r0, #1
    // lsl r0, r0, #0x18
    // lsr r1, r0, #0x18
    // str r1, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // cmp r1, r0
    // blo _02243184
    // ldr r0, [sp, #0x20]
    // bl Heap_Free
    // add sp, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // _022431DC: .word 0x000003D9
    // TODO: decompile
}




void ov81_022431E0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r0, 5, 0, 0);
    ScheduleBgTilemapBufferTransfer(r4, 5);
}




void ov81_02243220(void) {
}




void ov81_02243228(void) {
}




void ov81_0224323C(void) {
    // bx lr
    // TODO: decompile
}




void ov81_02243240(void) {
    // push {lr}
    // sub sp, #0xc
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // ldr r0, _02243264 ; =ov81_022436F0
    // ldr r1, _02243268 ; =ov81_02243808
    // ldr r2, _0224326C ; =ov81_02243658
    // bl GridInputHandler_Create
    // add sp, #0xc
    // pop {pc}
    // nop
    // _02243264: .word ov81_022436F0
    // _02243268: .word ov81_02243808
    // _0224326C: .word ov81_02243658
    // TODO: decompile
}




void ov81_02243270(void) {
    GridInputHandler_SetAllEnabled();
    GridInputHandler_ClearEnabledFlag(6);
    GridInputHandler_ClearEnabledFlag(r4, 7);
    GridInputHandler_ClearEnabledFlag(r4, 8);
}




void ov81_02243298(void) {
    ov81_0224141C();
    ov81_022413F4();
}




void ov81_022432AC(void) {
    // push {lr}
    // sub sp, #0xc
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // ldr r0, _022432D0 ; =ov81_02243668
    // ldr r1, _022432D4 ; =ov81_02243750
    // ldr r2, _022432D8 ; =ov81_02243648
    // bl GridInputHandler_Create
    // add sp, #0xc
    // pop {pc}
    // nop
    // _022432D0: .word ov81_02243668
    // _022432D4: .word ov81_02243750
    // _022432D8: .word ov81_02243648
    // TODO: decompile
}




void ov81_022432DC(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // lsl r0, r1, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // ldr r0, _02243308 ; =ov81_02243688
    // ldr r1, _0224330C ; =ov81_02243718
    // ldr r2, _02243310 ; =ov81_02243648
    // bl GridInputHandler_Create
    // mov r1, #2
    // add r4, r0, #0
    // bl GridInputHandler_ClearEnabledFlag
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _02243308: .word ov81_02243688
    // _0224330C: .word ov81_02243718
    // _02243310: .word ov81_02243648
    // TODO: decompile
}




void ov81_02243314(void) {
    GridInputHandler_SetAllEnabled();
    GridInputHandler_ClearEnabledFlag(r5, 3);
    GridInputHandler_SetAllEnabled();
    GridInputHandler_ClearEnabledFlag(r5, 4);
    GridInputHandler_ClearEnabledFlag(r5, 5);
    GridInputHandler_ClearEnabledFlag(r5, 6);
    ov81_02242704(r4);
    GridInputHandler_ClearEnabledFlag(r5, 2);
}




void ov81_0224335C(void) {
    ov81_0224141C();
    ov81_02241650();
}




void ov81_02243370(void) {
    ov81_02243220(r1);
    ov81_02242710(r4);
    ov81_022432DC(r4, 0);
    ov81_022432AC(r4, 0);
}




void ov81_02243398(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // add r0, r1, #0
    // bl ov81_02243220
    // add r0, r4, #0
    // bl ov81_02242710
    // cmp r0, #1
    // bne _022433CA
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // ldr r0, _022433E8 ; =ov81_022436CC
    // ldr r1, _022433EC ; =ov81_02243788
    // ldr r2, _022433F0 ; =ov81_02243638
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // add sp, #0xc
    // pop {r3, r4, pc}
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // mov r0, #0x64
    // str r0, [sp, #8]
    // ldr r0, _022433F4 ; =ov81_022436A8
    // ldr r1, _022433F8 ; =ov81_022437C8
    // ldr r2, _022433F0 ; =ov81_02243638
    // add r3, r4, #0
    // bl GridInputHandler_Create
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _022433E8: .word ov81_022436CC
    // _022433EC: .word ov81_02243788
    // _022433F0: .word ov81_02243638
    // _022433F4: .word ov81_022436A8
    // _022433F8: .word ov81_022437C8
    // TODO: decompile
}




void ov81_022433FC(void) {
    GridInputHandler_SetAllEnabled();
    GridInputHandler_ClearEnabledFlag(r5, 4);
    GridInputHandler_ClearEnabledFlag(r5, 5);
    GridInputHandler_SetAllEnabled();
    GridInputHandler_ClearEnabledFlag(r5, 6);
    GridInputHandler_ClearEnabledFlag(r5, 7);
    ov81_02242704(r4);
    GridInputHandler_ClearEnabledFlag(r5, 3);
}




void ov81_02243444(void) {
    ov81_0224141C();
    ov81_022416CC();
}



