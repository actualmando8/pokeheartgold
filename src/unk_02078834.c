/* Decompiled from asm/unk_02078834.s */
#include "global.h"

void sub_02078834(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // bl TaskManager_GetFieldSystem
    // add r5, r0, #0
    // add r0, r6, #0
    // bl TaskManager_GetEnvironment
    // add r4, r0, #0
    // ldr r1, [r4, #4]
    // cmp r1, #0x19
    // bls _0207884E
    // b _02078B1C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0207885A: ; jump table
    // ldr r1, [r5, #0xc]
    // ldr r0, [r4]
    // str r1, [r0]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // ldr r0, [r4]
    // ldr r0, [r0, #4]
    // cmp r0, #1
    // bne _020788E6
    // ldr r0, [r5, #0xc]
    // bl sub_0203A05C
    // cmp r0, #0
    // beq _020788E6
    // mov r0, #0xa
    // str r0, [r4, #4]
    // ldr r0, [r4, #8]
    // mov r1, #0
    // strh r1, [r0]
    // b _02078B20
    // ldr r1, _02078B24 ; =_02101290
    // ldr r2, [r4]
    // add r0, r6, #0
    // bl CallApplicationAsTask
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // ldr r0, [r5, #0xc]
    // bl sub_0203A05C
    // cmp r0, #0
    // beq _020788DE
    // ldr r0, [r5, #0xc]
    // bl Save_VarsFlags_Get
    // bl SetFlag970
    // ldr r0, [r4]
    // ldr r0, [r0, #4]
    // cmp r0, #0xf
    // bls _020788E8
    // b _02078B20
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _020788F4: ; jump table
    // mov r0, #0
    // strb r0, [r4, #0xc]
    // strb r0, [r4, #0xd]
    // mov r0, #4
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #0x32
    // strb r0, [r4, #0xc]
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // mov r0, #4
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #0x64
    // strb r0, [r4, #0xc]
    // mov r0, #0
    // strb r0, [r4, #0xd]
    // mov r0, #4
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #0
    // strb r0, [r4, #0xc]
    // mov r0, #1
    // strb r0, [r4, #0xd]
    // mov r0, #4
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #0x32
    // strb r0, [r4, #0xc]
    // mov r0, #1
    // strb r0, [r4, #0xd]
    // mov r0, #4
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #0x64
    // strb r0, [r4, #0xc]
    // mov r0, #1
    // strb r0, [r4, #0xd]
    // mov r0, #4
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #6
    // str r0, [r4, #4]
    // b _02078B20
    // ldr r0, [r4, #8]
    // mov r1, #1
    // strh r1, [r0]
    // mov r0, #0xb
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #9
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #0xc
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #0xe
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #0x12
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #0x16
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #8
    // str r0, [r4, #4]
    // b _02078B20
    // ldr r1, [r4]
    // ldrb r2, [r4, #0xc]
    // ldrb r3, [r4, #0xd]
    // ldr r1, [r1, #8]
    // add r0, r6, #0
    // bl CallTask_02050960
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #2
    // str r0, [r4, #4]
    // b _02078B20
    // add r0, r6, #0
    // bl CallTask_WirelessTrade
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // mov r0, #2
    // str r0, [r4, #4]
    // b _02078B20
    // ldr r2, _02078B28 ; =0x00040100
    // mov r0, #3
    // mov r1, #0x35
    // bl Heap_Create
    // bl LoadOVY13
    // mov r0, #0x35
    // bl ov13_0221BA00
    // mov r0, #0
    // bl OS_ResetSystem
    // b _02078B20
    // ldr r0, [r4]
    // bl Heap_Free
    // add r0, r4, #0
    // bl Heap_Free
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // bl sub_020378E4
    // add r0, r5, #0
    // mov r1, #0
    // bl sub_020968B0
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // add r0, r5, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _02078B20
    // ldr r0, [r4, #0x10]
    // bl Heap_Free
    // mov r0, #2
    // str r0, [r4, #4]
    // b _02078B20
    // add r1, r5, #0
    // mov r2, #0xb
    // mov r3, #1
    // bl sub_02078B9C
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // add r0, r5, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _02078B20
    // add r0, r4, #0
    // bl sub_02078BD8
    // str r0, [r4, #4]
    // b _02078B20
    // ldr r2, [r4, #0x14]
    // add r0, r5, #0
    // mov r1, #0xb
    // bl sub_02078C18
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // add r0, r5, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _02078B20
    // mov r0, #2
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x10]
    // bl sub_02078C60
    // b _02078B20
    // add r1, r5, #0
    // mov r2, #0xb
    // mov r3, #2
    // bl sub_02078B9C
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // add r0, r5, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _02078B20
    // add r0, r4, #0
    // bl sub_02078BD8
    // str r0, [r4, #4]
    // b _02078B20
    // ldr r2, [r4, #0x14]
    // add r0, r5, #0
    // mov r1, #0xb
    // bl sub_02078C74
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // add r0, r5, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _02078B20
    // mov r0, #2
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x10]
    // bl sub_02078CB4
    // b _02078B20
    // add r1, r5, #0
    // mov r2, #0xb
    // mov r3, #3
    // bl sub_02078B9C
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // add r0, r5, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _02078B20
    // add r0, r4, #0
    // bl sub_02078BD8
    // str r0, [r4, #4]
    // b _02078B20
    // ldr r2, [r4, #0x14]
    // add r0, r5, #0
    // mov r1, #0xb
    // bl sub_02078CC8
    // str r0, [r4, #0x10]
    // ldr r0, [r4, #4]
    // add r0, r0, #1
    // str r0, [r4, #4]
    // b _02078B20
    // add r0, r5, #0
    // bl FieldSystem_ApplicationIsRunning
    // cmp r0, #0
    // bne _02078B20
    // mov r0, #2
    // str r0, [r4, #4]
    // ldr r0, [r4, #0x10]
    // bl sub_02078D10
    // b _02078B20
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _02078B24: .word _02101290
    // _02078B28: .word 0x00040100
    // TODO: decompile
}



void sub_02078B2C(void) {
}



void sub_02078B58(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02078B2C
    // add r2, r0, #0
    // ldr r0, [r2]
    // mov r1, #2
    // str r1, [r0, #4]
    // ldr r1, _02078B74 ; =sub_02078834
    // add r0, r4, #0
    // bl TaskManager_Call
    // pop {r4, pc}
    // nop
    // _02078B74: .word sub_02078834
    // TODO: decompile
}



void sub_02078B78(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl sub_02078B2C
    // add r2, r0, #0
    // ldr r0, [r2]
    // mov r1, #1
    // str r1, [r0, #4]
    // ldr r1, _02078B98 ; =sub_02078834
    // add r0, r5, #0
    // str r4, [r2, #8]
    // bl TaskManager_Call
    // pop {r3, r4, r5, pc}
    // nop
    // _02078B98: .word sub_02078834
    // TODO: decompile
}



void sub_02078B9C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // add r5, r1, #0
    // add r0, r2, #0
    // mov r1, #0xc
    // add r4, r3, #0
    // bl Heap_Alloc
    // add r2, r0, #0
    // strb r4, [r2]
    // mov r0, #2
    // strb r0, [r2, #1]
    // ldr r0, _02078BD0 ; =_0210125C
    // ldr r1, _02078BD4 ; =_02101280
    // ldrb r0, [r0, r4]
    // strb r0, [r2, #2]
    // mov r0, #0
    // strb r0, [r2, #3]
    // strb r0, [r2, #4]
    // ldr r0, [r5, #0xc]
    // str r0, [r2, #8]
    // add r0, r5, #0
    // str r2, [r6, #0x10]
    // bl FieldSystem_LaunchApplication
    // pop {r4, r5, r6, pc}
    // _02078BD0: .word _0210125C
    // _02078BD4: .word _02101280
    // TODO: decompile
}



void sub_02078BD8(void) {
    // ldrb r1, [r0]
    *((u32*)(r0 + 4)) = 0x10;
    *((u32*)(r0 + 4)) = 0x14;
    *((u32*)(r0 + 4)) = 0x18;
    *((u32*)(r0 + 4)) = 1;
    *((u32*)(r0 + 0x14)) = *((u8*)(*((u32*)(r0 + 0x10)) + 4));
    Heap_Free(*((u32*)(r0 + 0x10)), 1);
}



void sub_02078C18(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #0x3c
    // add r6, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x3c
    // bl memset
    // add r0, r4, #0
    // add r0, #0x38
    // strb r6, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x39
    // strb r1, [r0]
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // str r0, [r4, #0x34]
    // ldr r0, _02078C58 ; =FS_OVERLAY_ID(OVY_90)
    // bl HandleLoadOverlay
    // ldr r1, _02078C5C ; =_02101260
    // add r0, r5, #0
    // add r2, r4, #0
    // bl FieldSystem_LaunchApplication
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _02078C58: .word FS_OVERLAY_ID(OVY_90)
    // _02078C5C: .word _02101260
    // TODO: decompile
}



void sub_02078C60(void) {
    // push {r3, lr}
    // bl Heap_Free
    // ldr r0, _02078C70 ; =FS_OVERLAY_ID(OVY_90)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // nop
    // _02078C70: .word FS_OVERLAY_ID(OVY_90)
    // TODO: decompile
}



void sub_02078C74(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #0x40
    // add r6, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x40
    // bl memset
    // str r6, [r4, #0x3c]
    // mov r0, #0
    // str r0, [r4, #0x38]
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // str r0, [r4, #0x34]
    // ldr r0, _02078CAC ; =FS_OVERLAY_ID(OVY_90)
    // bl HandleLoadOverlay
    // ldr r1, _02078CB0 ; =_02101270
    // add r0, r5, #0
    // add r2, r4, #0
    // bl FieldSystem_LaunchApplication
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _02078CAC: .word FS_OVERLAY_ID(OVY_90)
    // _02078CB0: .word _02101270
    // TODO: decompile
}



void sub_02078CB4(void) {
    // push {r3, lr}
    // bl Heap_Free
    // ldr r0, _02078CC4 ; =FS_OVERLAY_ID(OVY_90)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // nop
    // _02078CC4: .word FS_OVERLAY_ID(OVY_90)
    // TODO: decompile
}



void sub_02078CC8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, r1, #0
    // mov r1, #0x3c
    // add r6, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x3c
    // bl MI_CpuFill8
    // add r0, r4, #0
    // add r0, #0x38
    // strb r6, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x39
    // strb r1, [r0]
    // ldr r0, [r5, #0xc]
    // mov r1, #2
    // str r0, [r4, #0x34]
    // ldr r0, _02078D08 ; =FS_OVERLAY_ID(OVY_90)
    // bl HandleLoadOverlay
    // ldr r1, _02078D0C ; =_021012A0
    // add r0, r5, #0
    // add r2, r4, #0
    // bl FieldSystem_LaunchApplication
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _02078D08: .word FS_OVERLAY_ID(OVY_90)
    // _02078D0C: .word _021012A0
    // TODO: decompile
}



void sub_02078D10(void) {
    // push {r3, lr}
    // bl Heap_Free
    // ldr r0, _02078D20 ; =FS_OVERLAY_ID(OVY_90)
    // bl UnloadOverlayByID
    // pop {r3, pc}
    // nop
    // _02078D20: .word FS_OVERLAY_ID(OVY_90)
    // TODO: decompile
}



void sub_02078D24(void) {
    sub_020398C8();
    // mul r1, r4
    // add r0, r0, r1
    // add r0, #0x3f
    // ldrb r0, [r0]
}


